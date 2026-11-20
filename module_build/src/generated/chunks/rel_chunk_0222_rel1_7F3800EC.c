// DolRecomp output
#include "../generated.h"

static void loop_7F383148(CPUState* ctx) {
label_7F383148:
    ctx->downcount -= 5;
    ctx->pc = 0x7F383148u;
    // 7F383148: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F38314Cu;
    // 7F38314C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F383150u;
    // 7F383150: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F383154u;
    // 7F383154: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F383158: bc    16, 0, 0x7F383148
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383148u;
                return;
            }
            goto label_7F383148;
        }
    }

    ctx->pc = 0x7F38315Cu;
}

static void loop_7F38369C(CPUState* ctx) {
label_7F38369C:
    ctx->downcount -= 5;
    ctx->pc = 0x7F38369Cu;
    // 7F38369C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3836A0u;
    // 7F3836A0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3836A4u;
    // 7F3836A4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3836A8u;
    // 7F3836A8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3836AC: bc    16, 0, 0x7F38369C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F38369Cu;
                return;
            }
            goto label_7F38369C;
        }
    }

    ctx->pc = 0x7F3836B0u;
}

static void loop_7F3836CC(CPUState* ctx) {
label_7F3836CC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F3836CCu;
    // 7F3836CC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F3836D0u;
    // 7F3836D0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F3836D4u;
    // 7F3836D4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F3836D8u;
    // 7F3836D8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F3836DC: bc    16, 0, 0x7F3836CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3836CCu;
                return;
            }
            goto label_7F3836CC;
        }
    }

    ctx->pc = 0x7F3836E0u;
}

void func_7F3800EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3800ECu: goto label_7F3800EC;
    case 0x7F3800F0u: goto label_7F3800F0;
    case 0x7F3800F4u: goto label_7F3800F4;
    case 0x7F3800F8u: goto label_7F3800F8;
    case 0x7F3800FCu: goto label_7F3800FC;
    case 0x7F380100u: goto label_7F380100;
    case 0x7F380104u: goto label_7F380104;
    case 0x7F380108u: goto label_7F380108;
    case 0x7F38010Cu: goto label_7F38010C;
    case 0x7F380110u: goto label_7F380110;
    case 0x7F380114u: goto label_7F380114;
    case 0x7F380118u: goto label_7F380118;
    case 0x7F38011Cu: goto label_7F38011C;
    case 0x7F380120u: goto label_7F380120;
    case 0x7F380124u: goto label_7F380124;
    case 0x7F380128u: goto label_7F380128;
    case 0x7F38012Cu: goto label_7F38012C;
    case 0x7F380130u: goto label_7F380130;
    case 0x7F380134u: goto label_7F380134;
    case 0x7F380138u: goto label_7F380138;
    case 0x7F38013Cu: goto label_7F38013C;
    case 0x7F380140u: goto label_7F380140;
    case 0x7F380144u: goto label_7F380144;
    case 0x7F380148u: goto label_7F380148;
    case 0x7F38014Cu: goto label_7F38014C;
    case 0x7F380150u: goto label_7F380150;
    case 0x7F380154u: goto label_7F380154;
    case 0x7F380158u: goto label_7F380158;
    case 0x7F38015Cu: goto label_7F38015C;
    case 0x7F380160u: goto label_7F380160;
    case 0x7F380164u: goto label_7F380164;
    case 0x7F380168u: goto label_7F380168;
    case 0x7F38016Cu: goto label_7F38016C;
    case 0x7F380170u: goto label_7F380170;
    case 0x7F380174u: goto label_7F380174;
    case 0x7F380178u: goto label_7F380178;
    case 0x7F38017Cu: goto label_7F38017C;
    case 0x7F380180u: goto label_7F380180;
    case 0x7F380184u: goto label_7F380184;
    case 0x7F380188u: goto label_7F380188;
    case 0x7F38018Cu: goto label_7F38018C;
    case 0x7F380190u: goto label_7F380190;
    case 0x7F380194u: goto label_7F380194;
    case 0x7F380198u: goto label_7F380198;
    case 0x7F38019Cu: goto label_7F38019C;
    case 0x7F3801A0u: goto label_7F3801A0;
    case 0x7F3801A4u: goto label_7F3801A4;
    case 0x7F3801A8u: goto label_7F3801A8;
    case 0x7F3801ACu: goto label_7F3801AC;
    case 0x7F3801B0u: goto label_7F3801B0;
    case 0x7F3801B4u: goto label_7F3801B4;
    case 0x7F3801B8u: goto label_7F3801B8;
    case 0x7F3801BCu: goto label_7F3801BC;
    case 0x7F3801C0u: goto label_7F3801C0;
    case 0x7F3801C4u: goto label_7F3801C4;
    case 0x7F3801C8u: goto label_7F3801C8;
    case 0x7F3801CCu: goto label_7F3801CC;
    case 0x7F3801D0u: goto label_7F3801D0;
    case 0x7F3801D4u: goto label_7F3801D4;
    case 0x7F3801D8u: goto label_7F3801D8;
    case 0x7F3801DCu: goto label_7F3801DC;
    case 0x7F3801E0u: goto label_7F3801E0;
    case 0x7F3801E4u: goto label_7F3801E4;
    case 0x7F3801E8u: goto label_7F3801E8;
    case 0x7F3801ECu: goto label_7F3801EC;
    case 0x7F3801F0u: goto label_7F3801F0;
    case 0x7F3801F4u: goto label_7F3801F4;
    case 0x7F3801F8u: goto label_7F3801F8;
    case 0x7F3801FCu: goto label_7F3801FC;
    case 0x7F380200u: goto label_7F380200;
    case 0x7F380204u: goto label_7F380204;
    case 0x7F380208u: goto label_7F380208;
    case 0x7F38020Cu: goto label_7F38020C;
    case 0x7F380210u: goto label_7F380210;
    case 0x7F380214u: goto label_7F380214;
    case 0x7F380218u: goto label_7F380218;
    case 0x7F38021Cu: goto label_7F38021C;
    case 0x7F380220u: goto label_7F380220;
    case 0x7F380224u: goto label_7F380224;
    case 0x7F380228u: goto label_7F380228;
    case 0x7F38022Cu: goto label_7F38022C;
    case 0x7F380230u: goto label_7F380230;
    case 0x7F380234u: goto label_7F380234;
    case 0x7F380238u: goto label_7F380238;
    case 0x7F38023Cu: goto label_7F38023C;
    case 0x7F380240u: goto label_7F380240;
    case 0x7F380244u: goto label_7F380244;
    case 0x7F380248u: goto label_7F380248;
    case 0x7F38024Cu: goto label_7F38024C;
    case 0x7F380250u: goto label_7F380250;
    case 0x7F380254u: goto label_7F380254;
    case 0x7F380258u: goto label_7F380258;
    case 0x7F38025Cu: goto label_7F38025C;
    case 0x7F380260u: goto label_7F380260;
    case 0x7F380264u: goto label_7F380264;
    case 0x7F380268u: goto label_7F380268;
    case 0x7F38026Cu: goto label_7F38026C;
    case 0x7F380270u: goto label_7F380270;
    case 0x7F380274u: goto label_7F380274;
    case 0x7F380278u: goto label_7F380278;
    case 0x7F38027Cu: goto label_7F38027C;
    case 0x7F380280u: goto label_7F380280;
    case 0x7F380284u: goto label_7F380284;
    case 0x7F380288u: goto label_7F380288;
    case 0x7F38028Cu: goto label_7F38028C;
    case 0x7F380290u: goto label_7F380290;
    case 0x7F380294u: goto label_7F380294;
    case 0x7F380298u: goto label_7F380298;
    case 0x7F38029Cu: goto label_7F38029C;
    case 0x7F3802A0u: goto label_7F3802A0;
    case 0x7F3802A4u: goto label_7F3802A4;
    case 0x7F3802A8u: goto label_7F3802A8;
    case 0x7F3802ACu: goto label_7F3802AC;
    case 0x7F3802B0u: goto label_7F3802B0;
    case 0x7F3802B4u: goto label_7F3802B4;
    case 0x7F3802B8u: goto label_7F3802B8;
    case 0x7F3802BCu: goto label_7F3802BC;
    case 0x7F3802C0u: goto label_7F3802C0;
    case 0x7F3802C4u: goto label_7F3802C4;
    case 0x7F3802C8u: goto label_7F3802C8;
    case 0x7F3802CCu: goto label_7F3802CC;
    case 0x7F3802D0u: goto label_7F3802D0;
    case 0x7F3802D4u: goto label_7F3802D4;
    case 0x7F3802D8u: goto label_7F3802D8;
    case 0x7F3802DCu: goto label_7F3802DC;
    case 0x7F3802E0u: goto label_7F3802E0;
    case 0x7F3802E4u: goto label_7F3802E4;
    case 0x7F3802E8u: goto label_7F3802E8;
    case 0x7F3802ECu: goto label_7F3802EC;
    case 0x7F3802F0u: goto label_7F3802F0;
    case 0x7F3802F4u: goto label_7F3802F4;
    case 0x7F3802F8u: goto label_7F3802F8;
    case 0x7F3802FCu: goto label_7F3802FC;
    case 0x7F380300u: goto label_7F380300;
    case 0x7F380304u: goto label_7F380304;
    case 0x7F380308u: goto label_7F380308;
    case 0x7F38030Cu: goto label_7F38030C;
    case 0x7F380310u: goto label_7F380310;
    case 0x7F380314u: goto label_7F380314;
    case 0x7F380318u: goto label_7F380318;
    case 0x7F38031Cu: goto label_7F38031C;
    case 0x7F380320u: goto label_7F380320;
    case 0x7F380324u: goto label_7F380324;
    case 0x7F380328u: goto label_7F380328;
    case 0x7F38032Cu: goto label_7F38032C;
    case 0x7F380330u: goto label_7F380330;
    case 0x7F380334u: goto label_7F380334;
    case 0x7F380338u: goto label_7F380338;
    case 0x7F38033Cu: goto label_7F38033C;
    case 0x7F380340u: goto label_7F380340;
    case 0x7F380344u: goto label_7F380344;
    case 0x7F380348u: goto label_7F380348;
    case 0x7F38034Cu: goto label_7F38034C;
    case 0x7F380350u: goto label_7F380350;
    case 0x7F380354u: goto label_7F380354;
    case 0x7F380358u: goto label_7F380358;
    case 0x7F38035Cu: goto label_7F38035C;
    case 0x7F380360u: goto label_7F380360;
    case 0x7F380364u: goto label_7F380364;
    case 0x7F380368u: goto label_7F380368;
    case 0x7F38036Cu: goto label_7F38036C;
    case 0x7F380370u: goto label_7F380370;
    case 0x7F380374u: goto label_7F380374;
    case 0x7F380378u: goto label_7F380378;
    case 0x7F38037Cu: goto label_7F38037C;
    case 0x7F380380u: goto label_7F380380;
    case 0x7F380384u: goto label_7F380384;
    case 0x7F380388u: goto label_7F380388;
    case 0x7F38038Cu: goto label_7F38038C;
    case 0x7F380390u: goto label_7F380390;
    case 0x7F380394u: goto label_7F380394;
    case 0x7F380398u: goto label_7F380398;
    case 0x7F38039Cu: goto label_7F38039C;
    case 0x7F3803A0u: goto label_7F3803A0;
    case 0x7F3803A4u: goto label_7F3803A4;
    case 0x7F3803A8u: goto label_7F3803A8;
    case 0x7F3803ACu: goto label_7F3803AC;
    case 0x7F3803B0u: goto label_7F3803B0;
    case 0x7F3803B4u: goto label_7F3803B4;
    case 0x7F3803B8u: goto label_7F3803B8;
    case 0x7F3803BCu: goto label_7F3803BC;
    case 0x7F3803C0u: goto label_7F3803C0;
    case 0x7F3803C4u: goto label_7F3803C4;
    case 0x7F3803C8u: goto label_7F3803C8;
    case 0x7F3803CCu: goto label_7F3803CC;
    case 0x7F3803D0u: goto label_7F3803D0;
    case 0x7F3803D4u: goto label_7F3803D4;
    case 0x7F3803D8u: goto label_7F3803D8;
    case 0x7F3803DCu: goto label_7F3803DC;
    case 0x7F3803E0u: goto label_7F3803E0;
    case 0x7F3803E4u: goto label_7F3803E4;
    case 0x7F3803E8u: goto label_7F3803E8;
    case 0x7F3803ECu: goto label_7F3803EC;
    case 0x7F3803F0u: goto label_7F3803F0;
    case 0x7F3803F4u: goto label_7F3803F4;
    case 0x7F3803F8u: goto label_7F3803F8;
    case 0x7F3803FCu: goto label_7F3803FC;
    case 0x7F380400u: goto label_7F380400;
    case 0x7F380404u: goto label_7F380404;
    case 0x7F380408u: goto label_7F380408;
    case 0x7F38040Cu: goto label_7F38040C;
    case 0x7F380410u: goto label_7F380410;
    case 0x7F380414u: goto label_7F380414;
    case 0x7F380418u: goto label_7F380418;
    case 0x7F38041Cu: goto label_7F38041C;
    case 0x7F380420u: goto label_7F380420;
    case 0x7F380424u: goto label_7F380424;
    case 0x7F380428u: goto label_7F380428;
    case 0x7F38042Cu: goto label_7F38042C;
    case 0x7F380430u: goto label_7F380430;
    case 0x7F380434u: goto label_7F380434;
    case 0x7F380438u: goto label_7F380438;
    case 0x7F38043Cu: goto label_7F38043C;
    case 0x7F380440u: goto label_7F380440;
    case 0x7F380444u: goto label_7F380444;
    case 0x7F380448u: goto label_7F380448;
    case 0x7F38044Cu: goto label_7F38044C;
    case 0x7F380450u: goto label_7F380450;
    case 0x7F380454u: goto label_7F380454;
    case 0x7F380458u: goto label_7F380458;
    case 0x7F38045Cu: goto label_7F38045C;
    case 0x7F380460u: goto label_7F380460;
    case 0x7F380464u: goto label_7F380464;
    case 0x7F380468u: goto label_7F380468;
    case 0x7F38046Cu: goto label_7F38046C;
    case 0x7F380470u: goto label_7F380470;
    case 0x7F380474u: goto label_7F380474;
    case 0x7F380478u: goto label_7F380478;
    case 0x7F38047Cu: goto label_7F38047C;
    case 0x7F380480u: goto label_7F380480;
    case 0x7F380484u: goto label_7F380484;
    case 0x7F380488u: goto label_7F380488;
    case 0x7F38048Cu: goto label_7F38048C;
    case 0x7F380490u: goto label_7F380490;
    case 0x7F380494u: goto label_7F380494;
    case 0x7F380498u: goto label_7F380498;
    case 0x7F38049Cu: goto label_7F38049C;
    case 0x7F3804A0u: goto label_7F3804A0;
    case 0x7F3804A4u: goto label_7F3804A4;
    case 0x7F3804A8u: goto label_7F3804A8;
    case 0x7F3804ACu: goto label_7F3804AC;
    case 0x7F3804B0u: goto label_7F3804B0;
    case 0x7F3804B4u: goto label_7F3804B4;
    case 0x7F3804B8u: goto label_7F3804B8;
    case 0x7F3804BCu: goto label_7F3804BC;
    case 0x7F3804C0u: goto label_7F3804C0;
    case 0x7F3804C4u: goto label_7F3804C4;
    case 0x7F3804C8u: goto label_7F3804C8;
    case 0x7F3804CCu: goto label_7F3804CC;
    case 0x7F3804D0u: goto label_7F3804D0;
    case 0x7F3804D4u: goto label_7F3804D4;
    case 0x7F3804D8u: goto label_7F3804D8;
    case 0x7F3804DCu: goto label_7F3804DC;
    case 0x7F3804E0u: goto label_7F3804E0;
    case 0x7F3804E4u: goto label_7F3804E4;
    case 0x7F3804E8u: goto label_7F3804E8;
    case 0x7F3804ECu: goto label_7F3804EC;
    case 0x7F3804F0u: goto label_7F3804F0;
    case 0x7F3804F4u: goto label_7F3804F4;
    case 0x7F3804F8u: goto label_7F3804F8;
    case 0x7F3804FCu: goto label_7F3804FC;
    case 0x7F380500u: goto label_7F380500;
    case 0x7F380504u: goto label_7F380504;
    case 0x7F380508u: goto label_7F380508;
    case 0x7F38050Cu: goto label_7F38050C;
    case 0x7F380510u: goto label_7F380510;
    case 0x7F380514u: goto label_7F380514;
    case 0x7F380518u: goto label_7F380518;
    case 0x7F38051Cu: goto label_7F38051C;
    case 0x7F380520u: goto label_7F380520;
    case 0x7F380524u: goto label_7F380524;
    case 0x7F380528u: goto label_7F380528;
    case 0x7F38052Cu: goto label_7F38052C;
    case 0x7F380530u: goto label_7F380530;
    case 0x7F380534u: goto label_7F380534;
    case 0x7F380538u: goto label_7F380538;
    case 0x7F38053Cu: goto label_7F38053C;
    case 0x7F380540u: goto label_7F380540;
    case 0x7F380544u: goto label_7F380544;
    case 0x7F380548u: goto label_7F380548;
    case 0x7F38054Cu: goto label_7F38054C;
    case 0x7F380550u: goto label_7F380550;
    case 0x7F380554u: goto label_7F380554;
    case 0x7F380558u: goto label_7F380558;
    case 0x7F38055Cu: goto label_7F38055C;
    case 0x7F380560u: goto label_7F380560;
    case 0x7F380564u: goto label_7F380564;
    case 0x7F380568u: goto label_7F380568;
    case 0x7F38056Cu: goto label_7F38056C;
    case 0x7F380570u: goto label_7F380570;
    case 0x7F380574u: goto label_7F380574;
    case 0x7F380578u: goto label_7F380578;
    case 0x7F38057Cu: goto label_7F38057C;
    case 0x7F380580u: goto label_7F380580;
    case 0x7F380584u: goto label_7F380584;
    case 0x7F380588u: goto label_7F380588;
    case 0x7F38058Cu: goto label_7F38058C;
    case 0x7F380590u: goto label_7F380590;
    case 0x7F380594u: goto label_7F380594;
    case 0x7F380598u: goto label_7F380598;
    case 0x7F38059Cu: goto label_7F38059C;
    case 0x7F3805A0u: goto label_7F3805A0;
    case 0x7F3805A4u: goto label_7F3805A4;
    case 0x7F3805A8u: goto label_7F3805A8;
    case 0x7F3805ACu: goto label_7F3805AC;
    case 0x7F3805B0u: goto label_7F3805B0;
    case 0x7F3805B4u: goto label_7F3805B4;
    case 0x7F3805B8u: goto label_7F3805B8;
    case 0x7F3805BCu: goto label_7F3805BC;
    case 0x7F3805C0u: goto label_7F3805C0;
    case 0x7F3805C4u: goto label_7F3805C4;
    case 0x7F3805C8u: goto label_7F3805C8;
    case 0x7F3805CCu: goto label_7F3805CC;
    case 0x7F3805D0u: goto label_7F3805D0;
    case 0x7F3805D4u: goto label_7F3805D4;
    case 0x7F3805D8u: goto label_7F3805D8;
    case 0x7F3805DCu: goto label_7F3805DC;
    case 0x7F3805E0u: goto label_7F3805E0;
    case 0x7F3805E4u: goto label_7F3805E4;
    case 0x7F3805E8u: goto label_7F3805E8;
    case 0x7F3805ECu: goto label_7F3805EC;
    case 0x7F3805F0u: goto label_7F3805F0;
    case 0x7F3805F4u: goto label_7F3805F4;
    case 0x7F3805F8u: goto label_7F3805F8;
    case 0x7F3805FCu: goto label_7F3805FC;
    case 0x7F380600u: goto label_7F380600;
    case 0x7F380604u: goto label_7F380604;
    case 0x7F380608u: goto label_7F380608;
    case 0x7F38060Cu: goto label_7F38060C;
    case 0x7F380610u: goto label_7F380610;
    case 0x7F380614u: goto label_7F380614;
    case 0x7F380618u: goto label_7F380618;
    case 0x7F38061Cu: goto label_7F38061C;
    case 0x7F380620u: goto label_7F380620;
    case 0x7F380624u: goto label_7F380624;
    case 0x7F380628u: goto label_7F380628;
    case 0x7F38062Cu: goto label_7F38062C;
    case 0x7F380630u: goto label_7F380630;
    case 0x7F380634u: goto label_7F380634;
    case 0x7F380638u: goto label_7F380638;
    case 0x7F38063Cu: goto label_7F38063C;
    case 0x7F380640u: goto label_7F380640;
    case 0x7F380644u: goto label_7F380644;
    case 0x7F380648u: goto label_7F380648;
    case 0x7F38064Cu: goto label_7F38064C;
    case 0x7F380650u: goto label_7F380650;
    case 0x7F380654u: goto label_7F380654;
    case 0x7F380658u: goto label_7F380658;
    case 0x7F38065Cu: goto label_7F38065C;
    case 0x7F380660u: goto label_7F380660;
    case 0x7F380664u: goto label_7F380664;
    case 0x7F380668u: goto label_7F380668;
    case 0x7F38066Cu: goto label_7F38066C;
    case 0x7F380670u: goto label_7F380670;
    case 0x7F380674u: goto label_7F380674;
    case 0x7F380678u: goto label_7F380678;
    case 0x7F38067Cu: goto label_7F38067C;
    case 0x7F380680u: goto label_7F380680;
    case 0x7F380684u: goto label_7F380684;
    case 0x7F380688u: goto label_7F380688;
    case 0x7F38068Cu: goto label_7F38068C;
    case 0x7F380690u: goto label_7F380690;
    case 0x7F380694u: goto label_7F380694;
    case 0x7F380698u: goto label_7F380698;
    case 0x7F38069Cu: goto label_7F38069C;
    case 0x7F3806A0u: goto label_7F3806A0;
    case 0x7F3806A4u: goto label_7F3806A4;
    case 0x7F3806A8u: goto label_7F3806A8;
    case 0x7F3806ACu: goto label_7F3806AC;
    case 0x7F3806B0u: goto label_7F3806B0;
    case 0x7F3806B4u: goto label_7F3806B4;
    case 0x7F3806B8u: goto label_7F3806B8;
    case 0x7F3806BCu: goto label_7F3806BC;
    case 0x7F3806C0u: goto label_7F3806C0;
    case 0x7F3806C4u: goto label_7F3806C4;
    case 0x7F3806C8u: goto label_7F3806C8;
    case 0x7F3806CCu: goto label_7F3806CC;
    case 0x7F3806D0u: goto label_7F3806D0;
    case 0x7F3806D4u: goto label_7F3806D4;
    case 0x7F3806D8u: goto label_7F3806D8;
    case 0x7F3806DCu: goto label_7F3806DC;
    case 0x7F3806E0u: goto label_7F3806E0;
    case 0x7F3806E4u: goto label_7F3806E4;
    case 0x7F3806E8u: goto label_7F3806E8;
    case 0x7F3806ECu: goto label_7F3806EC;
    case 0x7F3806F0u: goto label_7F3806F0;
    case 0x7F3806F4u: goto label_7F3806F4;
    case 0x7F3806F8u: goto label_7F3806F8;
    case 0x7F3806FCu: goto label_7F3806FC;
    case 0x7F380700u: goto label_7F380700;
    case 0x7F380704u: goto label_7F380704;
    case 0x7F380708u: goto label_7F380708;
    case 0x7F38070Cu: goto label_7F38070C;
    case 0x7F380710u: goto label_7F380710;
    case 0x7F380714u: goto label_7F380714;
    case 0x7F380718u: goto label_7F380718;
    case 0x7F38071Cu: goto label_7F38071C;
    case 0x7F380720u: goto label_7F380720;
    case 0x7F380724u: goto label_7F380724;
    case 0x7F380728u: goto label_7F380728;
    case 0x7F38072Cu: goto label_7F38072C;
    case 0x7F380730u: goto label_7F380730;
    case 0x7F380734u: goto label_7F380734;
    case 0x7F380738u: goto label_7F380738;
    case 0x7F38073Cu: goto label_7F38073C;
    case 0x7F380740u: goto label_7F380740;
    case 0x7F380744u: goto label_7F380744;
    case 0x7F380748u: goto label_7F380748;
    case 0x7F38074Cu: goto label_7F38074C;
    case 0x7F380750u: goto label_7F380750;
    case 0x7F380754u: goto label_7F380754;
    case 0x7F380758u: goto label_7F380758;
    case 0x7F38075Cu: goto label_7F38075C;
    case 0x7F380760u: goto label_7F380760;
    case 0x7F380764u: goto label_7F380764;
    case 0x7F380768u: goto label_7F380768;
    case 0x7F38076Cu: goto label_7F38076C;
    case 0x7F380770u: goto label_7F380770;
    case 0x7F380774u: goto label_7F380774;
    case 0x7F380778u: goto label_7F380778;
    case 0x7F38077Cu: goto label_7F38077C;
    case 0x7F380780u: goto label_7F380780;
    case 0x7F380784u: goto label_7F380784;
    case 0x7F380788u: goto label_7F380788;
    case 0x7F38078Cu: goto label_7F38078C;
    case 0x7F380790u: goto label_7F380790;
    case 0x7F380794u: goto label_7F380794;
    case 0x7F380798u: goto label_7F380798;
    case 0x7F38079Cu: goto label_7F38079C;
    case 0x7F3807A0u: goto label_7F3807A0;
    case 0x7F3807A4u: goto label_7F3807A4;
    case 0x7F3807A8u: goto label_7F3807A8;
    case 0x7F3807ACu: goto label_7F3807AC;
    case 0x7F3807B0u: goto label_7F3807B0;
    case 0x7F3807B4u: goto label_7F3807B4;
    case 0x7F3807B8u: goto label_7F3807B8;
    case 0x7F3807BCu: goto label_7F3807BC;
    case 0x7F3807C0u: goto label_7F3807C0;
    case 0x7F3807C4u: goto label_7F3807C4;
    case 0x7F3807C8u: goto label_7F3807C8;
    case 0x7F3807CCu: goto label_7F3807CC;
    case 0x7F3807D0u: goto label_7F3807D0;
    case 0x7F3807D4u: goto label_7F3807D4;
    case 0x7F3807D8u: goto label_7F3807D8;
    case 0x7F3807DCu: goto label_7F3807DC;
    case 0x7F3807E0u: goto label_7F3807E0;
    case 0x7F3807E4u: goto label_7F3807E4;
    case 0x7F3807E8u: goto label_7F3807E8;
    case 0x7F3807ECu: goto label_7F3807EC;
    case 0x7F3807F0u: goto label_7F3807F0;
    case 0x7F3807F4u: goto label_7F3807F4;
    case 0x7F3807F8u: goto label_7F3807F8;
    case 0x7F3807FCu: goto label_7F3807FC;
    case 0x7F380800u: goto label_7F380800;
    case 0x7F380804u: goto label_7F380804;
    case 0x7F380808u: goto label_7F380808;
    case 0x7F38080Cu: goto label_7F38080C;
    case 0x7F380810u: goto label_7F380810;
    case 0x7F380814u: goto label_7F380814;
    case 0x7F380818u: goto label_7F380818;
    case 0x7F38081Cu: goto label_7F38081C;
    case 0x7F380820u: goto label_7F380820;
    case 0x7F380824u: goto label_7F380824;
    case 0x7F380828u: goto label_7F380828;
    case 0x7F38082Cu: goto label_7F38082C;
    case 0x7F380830u: goto label_7F380830;
    case 0x7F380834u: goto label_7F380834;
    case 0x7F380838u: goto label_7F380838;
    case 0x7F38083Cu: goto label_7F38083C;
    case 0x7F380840u: goto label_7F380840;
    case 0x7F380844u: goto label_7F380844;
    case 0x7F380848u: goto label_7F380848;
    case 0x7F38084Cu: goto label_7F38084C;
    case 0x7F380850u: goto label_7F380850;
    case 0x7F380854u: goto label_7F380854;
    case 0x7F380858u: goto label_7F380858;
    case 0x7F38085Cu: goto label_7F38085C;
    case 0x7F380860u: goto label_7F380860;
    case 0x7F380864u: goto label_7F380864;
    case 0x7F380868u: goto label_7F380868;
    case 0x7F38086Cu: goto label_7F38086C;
    case 0x7F380870u: goto label_7F380870;
    case 0x7F380874u: goto label_7F380874;
    case 0x7F380878u: goto label_7F380878;
    case 0x7F38087Cu: goto label_7F38087C;
    case 0x7F380880u: goto label_7F380880;
    case 0x7F380884u: goto label_7F380884;
    case 0x7F380888u: goto label_7F380888;
    case 0x7F38088Cu: goto label_7F38088C;
    case 0x7F380890u: goto label_7F380890;
    case 0x7F380894u: goto label_7F380894;
    case 0x7F380898u: goto label_7F380898;
    case 0x7F38089Cu: goto label_7F38089C;
    case 0x7F3808A0u: goto label_7F3808A0;
    case 0x7F3808A4u: goto label_7F3808A4;
    case 0x7F3808A8u: goto label_7F3808A8;
    case 0x7F3808ACu: goto label_7F3808AC;
    case 0x7F3808B0u: goto label_7F3808B0;
    case 0x7F3808B4u: goto label_7F3808B4;
    case 0x7F3808B8u: goto label_7F3808B8;
    case 0x7F3808BCu: goto label_7F3808BC;
    case 0x7F3808C0u: goto label_7F3808C0;
    case 0x7F3808C4u: goto label_7F3808C4;
    case 0x7F3808C8u: goto label_7F3808C8;
    case 0x7F3808CCu: goto label_7F3808CC;
    case 0x7F3808D0u: goto label_7F3808D0;
    case 0x7F3808D4u: goto label_7F3808D4;
    case 0x7F3808D8u: goto label_7F3808D8;
    case 0x7F3808DCu: goto label_7F3808DC;
    case 0x7F3808E0u: goto label_7F3808E0;
    case 0x7F3808E4u: goto label_7F3808E4;
    case 0x7F3808E8u: goto label_7F3808E8;
    case 0x7F3808ECu: goto label_7F3808EC;
    case 0x7F3808F0u: goto label_7F3808F0;
    case 0x7F3808F4u: goto label_7F3808F4;
    case 0x7F3808F8u: goto label_7F3808F8;
    case 0x7F3808FCu: goto label_7F3808FC;
    case 0x7F380900u: goto label_7F380900;
    case 0x7F380904u: goto label_7F380904;
    case 0x7F380908u: goto label_7F380908;
    case 0x7F38090Cu: goto label_7F38090C;
    case 0x7F380910u: goto label_7F380910;
    case 0x7F380914u: goto label_7F380914;
    case 0x7F380918u: goto label_7F380918;
    case 0x7F38091Cu: goto label_7F38091C;
    case 0x7F380920u: goto label_7F380920;
    case 0x7F380924u: goto label_7F380924;
    case 0x7F380928u: goto label_7F380928;
    case 0x7F38092Cu: goto label_7F38092C;
    case 0x7F380930u: goto label_7F380930;
    case 0x7F380934u: goto label_7F380934;
    case 0x7F380938u: goto label_7F380938;
    case 0x7F38093Cu: goto label_7F38093C;
    case 0x7F380940u: goto label_7F380940;
    case 0x7F380944u: goto label_7F380944;
    case 0x7F380948u: goto label_7F380948;
    case 0x7F38094Cu: goto label_7F38094C;
    case 0x7F380950u: goto label_7F380950;
    case 0x7F380954u: goto label_7F380954;
    case 0x7F380958u: goto label_7F380958;
    case 0x7F38095Cu: goto label_7F38095C;
    case 0x7F380960u: goto label_7F380960;
    case 0x7F380964u: goto label_7F380964;
    case 0x7F380968u: goto label_7F380968;
    case 0x7F38096Cu: goto label_7F38096C;
    case 0x7F380970u: goto label_7F380970;
    case 0x7F380974u: goto label_7F380974;
    case 0x7F380978u: goto label_7F380978;
    case 0x7F38097Cu: goto label_7F38097C;
    case 0x7F380980u: goto label_7F380980;
    case 0x7F380984u: goto label_7F380984;
    case 0x7F380988u: goto label_7F380988;
    case 0x7F38098Cu: goto label_7F38098C;
    case 0x7F380990u: goto label_7F380990;
    case 0x7F380994u: goto label_7F380994;
    case 0x7F380998u: goto label_7F380998;
    case 0x7F38099Cu: goto label_7F38099C;
    case 0x7F3809A0u: goto label_7F3809A0;
    case 0x7F3809A4u: goto label_7F3809A4;
    case 0x7F3809A8u: goto label_7F3809A8;
    case 0x7F3809ACu: goto label_7F3809AC;
    case 0x7F3809B0u: goto label_7F3809B0;
    case 0x7F3809B4u: goto label_7F3809B4;
    case 0x7F3809B8u: goto label_7F3809B8;
    case 0x7F3809BCu: goto label_7F3809BC;
    case 0x7F3809C0u: goto label_7F3809C0;
    case 0x7F3809C4u: goto label_7F3809C4;
    case 0x7F3809C8u: goto label_7F3809C8;
    case 0x7F3809CCu: goto label_7F3809CC;
    case 0x7F3809D0u: goto label_7F3809D0;
    case 0x7F3809D4u: goto label_7F3809D4;
    case 0x7F3809D8u: goto label_7F3809D8;
    case 0x7F3809DCu: goto label_7F3809DC;
    case 0x7F3809E0u: goto label_7F3809E0;
    case 0x7F3809E4u: goto label_7F3809E4;
    case 0x7F3809E8u: goto label_7F3809E8;
    case 0x7F3809ECu: goto label_7F3809EC;
    case 0x7F3809F0u: goto label_7F3809F0;
    case 0x7F3809F4u: goto label_7F3809F4;
    case 0x7F3809F8u: goto label_7F3809F8;
    case 0x7F3809FCu: goto label_7F3809FC;
    case 0x7F380A00u: goto label_7F380A00;
    case 0x7F380A04u: goto label_7F380A04;
    case 0x7F380A08u: goto label_7F380A08;
    case 0x7F380A0Cu: goto label_7F380A0C;
    case 0x7F380A10u: goto label_7F380A10;
    case 0x7F380A14u: goto label_7F380A14;
    case 0x7F380A18u: goto label_7F380A18;
    case 0x7F380A1Cu: goto label_7F380A1C;
    case 0x7F380A20u: goto label_7F380A20;
    case 0x7F380A24u: goto label_7F380A24;
    case 0x7F380A28u: goto label_7F380A28;
    case 0x7F380A2Cu: goto label_7F380A2C;
    case 0x7F380A30u: goto label_7F380A30;
    case 0x7F380A34u: goto label_7F380A34;
    case 0x7F380A38u: goto label_7F380A38;
    case 0x7F380A3Cu: goto label_7F380A3C;
    case 0x7F380A40u: goto label_7F380A40;
    case 0x7F380A44u: goto label_7F380A44;
    case 0x7F380A48u: goto label_7F380A48;
    case 0x7F380A4Cu: goto label_7F380A4C;
    case 0x7F380A50u: goto label_7F380A50;
    case 0x7F380A54u: goto label_7F380A54;
    case 0x7F380A58u: goto label_7F380A58;
    case 0x7F380A5Cu: goto label_7F380A5C;
    case 0x7F380A60u: goto label_7F380A60;
    case 0x7F380A64u: goto label_7F380A64;
    case 0x7F380A68u: goto label_7F380A68;
    case 0x7F380A6Cu: goto label_7F380A6C;
    case 0x7F380A70u: goto label_7F380A70;
    case 0x7F380A74u: goto label_7F380A74;
    case 0x7F380A78u: goto label_7F380A78;
    case 0x7F380A7Cu: goto label_7F380A7C;
    case 0x7F380A80u: goto label_7F380A80;
    case 0x7F380A84u: goto label_7F380A84;
    case 0x7F380A88u: goto label_7F380A88;
    case 0x7F380A8Cu: goto label_7F380A8C;
    case 0x7F380A90u: goto label_7F380A90;
    case 0x7F380A94u: goto label_7F380A94;
    case 0x7F380A98u: goto label_7F380A98;
    case 0x7F380A9Cu: goto label_7F380A9C;
    case 0x7F380AA0u: goto label_7F380AA0;
    case 0x7F380AA4u: goto label_7F380AA4;
    case 0x7F380AA8u: goto label_7F380AA8;
    case 0x7F380AACu: goto label_7F380AAC;
    case 0x7F380AB0u: goto label_7F380AB0;
    case 0x7F380AB4u: goto label_7F380AB4;
    case 0x7F380AB8u: goto label_7F380AB8;
    case 0x7F380ABCu: goto label_7F380ABC;
    case 0x7F380AC0u: goto label_7F380AC0;
    case 0x7F380AC4u: goto label_7F380AC4;
    case 0x7F380AC8u: goto label_7F380AC8;
    case 0x7F380ACCu: goto label_7F380ACC;
    case 0x7F380AD0u: goto label_7F380AD0;
    case 0x7F380AD4u: goto label_7F380AD4;
    case 0x7F380AD8u: goto label_7F380AD8;
    case 0x7F380ADCu: goto label_7F380ADC;
    case 0x7F380AE0u: goto label_7F380AE0;
    case 0x7F380AE4u: goto label_7F380AE4;
    case 0x7F380AE8u: goto label_7F380AE8;
    case 0x7F380AECu: goto label_7F380AEC;
    case 0x7F380AF0u: goto label_7F380AF0;
    case 0x7F380AF4u: goto label_7F380AF4;
    case 0x7F380AF8u: goto label_7F380AF8;
    case 0x7F380AFCu: goto label_7F380AFC;
    case 0x7F380B00u: goto label_7F380B00;
    case 0x7F380B04u: goto label_7F380B04;
    case 0x7F380B08u: goto label_7F380B08;
    case 0x7F380B0Cu: goto label_7F380B0C;
    case 0x7F380B10u: goto label_7F380B10;
    case 0x7F380B14u: goto label_7F380B14;
    case 0x7F380B18u: goto label_7F380B18;
    case 0x7F380B1Cu: goto label_7F380B1C;
    case 0x7F380B20u: goto label_7F380B20;
    case 0x7F380B24u: goto label_7F380B24;
    case 0x7F380B28u: goto label_7F380B28;
    case 0x7F380B2Cu: goto label_7F380B2C;
    case 0x7F380B30u: goto label_7F380B30;
    case 0x7F380B34u: goto label_7F380B34;
    case 0x7F380B38u: goto label_7F380B38;
    case 0x7F380B3Cu: goto label_7F380B3C;
    case 0x7F380B40u: goto label_7F380B40;
    case 0x7F380B44u: goto label_7F380B44;
    case 0x7F380B48u: goto label_7F380B48;
    case 0x7F380B4Cu: goto label_7F380B4C;
    case 0x7F380B50u: goto label_7F380B50;
    case 0x7F380B54u: goto label_7F380B54;
    case 0x7F380B58u: goto label_7F380B58;
    case 0x7F380B5Cu: goto label_7F380B5C;
    case 0x7F380B60u: goto label_7F380B60;
    case 0x7F380B64u: goto label_7F380B64;
    case 0x7F380B68u: goto label_7F380B68;
    case 0x7F380B6Cu: goto label_7F380B6C;
    case 0x7F380B70u: goto label_7F380B70;
    case 0x7F380B74u: goto label_7F380B74;
    case 0x7F380B78u: goto label_7F380B78;
    case 0x7F380B7Cu: goto label_7F380B7C;
    case 0x7F380B80u: goto label_7F380B80;
    case 0x7F380B84u: goto label_7F380B84;
    case 0x7F380B88u: goto label_7F380B88;
    case 0x7F380B8Cu: goto label_7F380B8C;
    case 0x7F380B90u: goto label_7F380B90;
    case 0x7F380B94u: goto label_7F380B94;
    case 0x7F380B98u: goto label_7F380B98;
    case 0x7F380B9Cu: goto label_7F380B9C;
    case 0x7F380BA0u: goto label_7F380BA0;
    case 0x7F380BA4u: goto label_7F380BA4;
    case 0x7F380BA8u: goto label_7F380BA8;
    case 0x7F380BACu: goto label_7F380BAC;
    case 0x7F380BB0u: goto label_7F380BB0;
    case 0x7F380BB4u: goto label_7F380BB4;
    case 0x7F380BB8u: goto label_7F380BB8;
    case 0x7F380BBCu: goto label_7F380BBC;
    case 0x7F380BC0u: goto label_7F380BC0;
    case 0x7F380BC4u: goto label_7F380BC4;
    case 0x7F380BC8u: goto label_7F380BC8;
    case 0x7F380BCCu: goto label_7F380BCC;
    case 0x7F380BD0u: goto label_7F380BD0;
    case 0x7F380BD4u: goto label_7F380BD4;
    case 0x7F380BD8u: goto label_7F380BD8;
    case 0x7F380BDCu: goto label_7F380BDC;
    case 0x7F380BE0u: goto label_7F380BE0;
    case 0x7F380BE4u: goto label_7F380BE4;
    case 0x7F380BE8u: goto label_7F380BE8;
    case 0x7F380BECu: goto label_7F380BEC;
    case 0x7F380BF0u: goto label_7F380BF0;
    case 0x7F380BF4u: goto label_7F380BF4;
    case 0x7F380BF8u: goto label_7F380BF8;
    case 0x7F380BFCu: goto label_7F380BFC;
    case 0x7F380C00u: goto label_7F380C00;
    case 0x7F380C04u: goto label_7F380C04;
    case 0x7F380C08u: goto label_7F380C08;
    case 0x7F380C0Cu: goto label_7F380C0C;
    case 0x7F380C10u: goto label_7F380C10;
    case 0x7F380C14u: goto label_7F380C14;
    case 0x7F380C18u: goto label_7F380C18;
    case 0x7F380C1Cu: goto label_7F380C1C;
    case 0x7F380C20u: goto label_7F380C20;
    case 0x7F380C24u: goto label_7F380C24;
    case 0x7F380C28u: goto label_7F380C28;
    case 0x7F380C2Cu: goto label_7F380C2C;
    case 0x7F380C30u: goto label_7F380C30;
    case 0x7F380C34u: goto label_7F380C34;
    case 0x7F380C38u: goto label_7F380C38;
    case 0x7F380C3Cu: goto label_7F380C3C;
    case 0x7F380C40u: goto label_7F380C40;
    case 0x7F380C44u: goto label_7F380C44;
    case 0x7F380C48u: goto label_7F380C48;
    case 0x7F380C4Cu: goto label_7F380C4C;
    case 0x7F380C50u: goto label_7F380C50;
    case 0x7F380C54u: goto label_7F380C54;
    case 0x7F380C58u: goto label_7F380C58;
    case 0x7F380C5Cu: goto label_7F380C5C;
    case 0x7F380C60u: goto label_7F380C60;
    case 0x7F380C64u: goto label_7F380C64;
    case 0x7F380C68u: goto label_7F380C68;
    case 0x7F380C6Cu: goto label_7F380C6C;
    case 0x7F380C70u: goto label_7F380C70;
    case 0x7F380C74u: goto label_7F380C74;
    case 0x7F380C78u: goto label_7F380C78;
    case 0x7F380C7Cu: goto label_7F380C7C;
    case 0x7F380C80u: goto label_7F380C80;
    case 0x7F380C84u: goto label_7F380C84;
    case 0x7F380C88u: goto label_7F380C88;
    case 0x7F380C8Cu: goto label_7F380C8C;
    case 0x7F380C90u: goto label_7F380C90;
    case 0x7F380C94u: goto label_7F380C94;
    case 0x7F380C98u: goto label_7F380C98;
    case 0x7F380C9Cu: goto label_7F380C9C;
    case 0x7F380CA0u: goto label_7F380CA0;
    case 0x7F380CA4u: goto label_7F380CA4;
    case 0x7F380CA8u: goto label_7F380CA8;
    case 0x7F380CACu: goto label_7F380CAC;
    case 0x7F380CB0u: goto label_7F380CB0;
    case 0x7F380CB4u: goto label_7F380CB4;
    case 0x7F380CB8u: goto label_7F380CB8;
    case 0x7F380CBCu: goto label_7F380CBC;
    case 0x7F380CC0u: goto label_7F380CC0;
    case 0x7F380CC4u: goto label_7F380CC4;
    case 0x7F380CC8u: goto label_7F380CC8;
    case 0x7F380CCCu: goto label_7F380CCC;
    case 0x7F380CD0u: goto label_7F380CD0;
    case 0x7F380CD4u: goto label_7F380CD4;
    case 0x7F380CD8u: goto label_7F380CD8;
    case 0x7F380CDCu: goto label_7F380CDC;
    case 0x7F380CE0u: goto label_7F380CE0;
    case 0x7F380CE4u: goto label_7F380CE4;
    case 0x7F380CE8u: goto label_7F380CE8;
    case 0x7F380CECu: goto label_7F380CEC;
    case 0x7F380CF0u: goto label_7F380CF0;
    case 0x7F380CF4u: goto label_7F380CF4;
    case 0x7F380CF8u: goto label_7F380CF8;
    case 0x7F380CFCu: goto label_7F380CFC;
    case 0x7F380D00u: goto label_7F380D00;
    case 0x7F380D04u: goto label_7F380D04;
    case 0x7F380D08u: goto label_7F380D08;
    case 0x7F380D0Cu: goto label_7F380D0C;
    case 0x7F380D10u: goto label_7F380D10;
    case 0x7F380D14u: goto label_7F380D14;
    case 0x7F380D18u: goto label_7F380D18;
    case 0x7F380D1Cu: goto label_7F380D1C;
    case 0x7F380D20u: goto label_7F380D20;
    case 0x7F380D24u: goto label_7F380D24;
    case 0x7F380D28u: goto label_7F380D28;
    case 0x7F380D2Cu: goto label_7F380D2C;
    case 0x7F380D30u: goto label_7F380D30;
    case 0x7F380D34u: goto label_7F380D34;
    case 0x7F380D38u: goto label_7F380D38;
    case 0x7F380D3Cu: goto label_7F380D3C;
    case 0x7F380D40u: goto label_7F380D40;
    case 0x7F380D44u: goto label_7F380D44;
    case 0x7F380D48u: goto label_7F380D48;
    case 0x7F380D4Cu: goto label_7F380D4C;
    case 0x7F380D50u: goto label_7F380D50;
    case 0x7F380D54u: goto label_7F380D54;
    case 0x7F380D58u: goto label_7F380D58;
    case 0x7F380D5Cu: goto label_7F380D5C;
    case 0x7F380D60u: goto label_7F380D60;
    case 0x7F380D64u: goto label_7F380D64;
    case 0x7F380D68u: goto label_7F380D68;
    case 0x7F380D6Cu: goto label_7F380D6C;
    case 0x7F380D70u: goto label_7F380D70;
    case 0x7F380D74u: goto label_7F380D74;
    case 0x7F380D78u: goto label_7F380D78;
    case 0x7F380D7Cu: goto label_7F380D7C;
    case 0x7F380D80u: goto label_7F380D80;
    case 0x7F380D84u: goto label_7F380D84;
    case 0x7F380D88u: goto label_7F380D88;
    case 0x7F380D8Cu: goto label_7F380D8C;
    case 0x7F380D90u: goto label_7F380D90;
    case 0x7F380D94u: goto label_7F380D94;
    case 0x7F380D98u: goto label_7F380D98;
    case 0x7F380D9Cu: goto label_7F380D9C;
    case 0x7F380DA0u: goto label_7F380DA0;
    case 0x7F380DA4u: goto label_7F380DA4;
    case 0x7F380DA8u: goto label_7F380DA8;
    case 0x7F380DACu: goto label_7F380DAC;
    case 0x7F380DB0u: goto label_7F380DB0;
    case 0x7F380DB4u: goto label_7F380DB4;
    case 0x7F380DB8u: goto label_7F380DB8;
    case 0x7F380DBCu: goto label_7F380DBC;
    case 0x7F380DC0u: goto label_7F380DC0;
    case 0x7F380DC4u: goto label_7F380DC4;
    case 0x7F380DC8u: goto label_7F380DC8;
    case 0x7F380DCCu: goto label_7F380DCC;
    case 0x7F380DD0u: goto label_7F380DD0;
    case 0x7F380DD4u: goto label_7F380DD4;
    case 0x7F380DD8u: goto label_7F380DD8;
    case 0x7F380DDCu: goto label_7F380DDC;
    case 0x7F380DE0u: goto label_7F380DE0;
    case 0x7F380DE4u: goto label_7F380DE4;
    case 0x7F380DE8u: goto label_7F380DE8;
    case 0x7F380DECu: goto label_7F380DEC;
    case 0x7F380DF0u: goto label_7F380DF0;
    case 0x7F380DF4u: goto label_7F380DF4;
    case 0x7F380DF8u: goto label_7F380DF8;
    case 0x7F380DFCu: goto label_7F380DFC;
    case 0x7F380E00u: goto label_7F380E00;
    case 0x7F380E04u: goto label_7F380E04;
    case 0x7F380E08u: goto label_7F380E08;
    case 0x7F380E0Cu: goto label_7F380E0C;
    case 0x7F380E10u: goto label_7F380E10;
    case 0x7F380E14u: goto label_7F380E14;
    case 0x7F380E18u: goto label_7F380E18;
    case 0x7F380E1Cu: goto label_7F380E1C;
    case 0x7F380E20u: goto label_7F380E20;
    case 0x7F380E24u: goto label_7F380E24;
    case 0x7F380E28u: goto label_7F380E28;
    case 0x7F380E2Cu: goto label_7F380E2C;
    case 0x7F380E30u: goto label_7F380E30;
    case 0x7F380E34u: goto label_7F380E34;
    case 0x7F380E38u: goto label_7F380E38;
    case 0x7F380E3Cu: goto label_7F380E3C;
    case 0x7F380E40u: goto label_7F380E40;
    case 0x7F380E44u: goto label_7F380E44;
    case 0x7F380E48u: goto label_7F380E48;
    case 0x7F380E4Cu: goto label_7F380E4C;
    case 0x7F380E50u: goto label_7F380E50;
    case 0x7F380E54u: goto label_7F380E54;
    case 0x7F380E58u: goto label_7F380E58;
    case 0x7F380E5Cu: goto label_7F380E5C;
    case 0x7F380E60u: goto label_7F380E60;
    case 0x7F380E64u: goto label_7F380E64;
    case 0x7F380E68u: goto label_7F380E68;
    case 0x7F380E6Cu: goto label_7F380E6C;
    case 0x7F380E70u: goto label_7F380E70;
    case 0x7F380E74u: goto label_7F380E74;
    case 0x7F380E78u: goto label_7F380E78;
    case 0x7F380E7Cu: goto label_7F380E7C;
    case 0x7F380E80u: goto label_7F380E80;
    case 0x7F380E84u: goto label_7F380E84;
    case 0x7F380E88u: goto label_7F380E88;
    case 0x7F380E8Cu: goto label_7F380E8C;
    case 0x7F380E90u: goto label_7F380E90;
    case 0x7F380E94u: goto label_7F380E94;
    case 0x7F380E98u: goto label_7F380E98;
    case 0x7F380E9Cu: goto label_7F380E9C;
    case 0x7F380EA0u: goto label_7F380EA0;
    case 0x7F380EA4u: goto label_7F380EA4;
    case 0x7F380EA8u: goto label_7F380EA8;
    case 0x7F380EACu: goto label_7F380EAC;
    case 0x7F380EB0u: goto label_7F380EB0;
    case 0x7F380EB4u: goto label_7F380EB4;
    case 0x7F380EB8u: goto label_7F380EB8;
    case 0x7F380EBCu: goto label_7F380EBC;
    case 0x7F380EC0u: goto label_7F380EC0;
    case 0x7F380EC4u: goto label_7F380EC4;
    case 0x7F380EC8u: goto label_7F380EC8;
    case 0x7F380ECCu: goto label_7F380ECC;
    case 0x7F380ED0u: goto label_7F380ED0;
    case 0x7F380ED4u: goto label_7F380ED4;
    case 0x7F380ED8u: goto label_7F380ED8;
    case 0x7F380EDCu: goto label_7F380EDC;
    case 0x7F380EE0u: goto label_7F380EE0;
    case 0x7F380EE4u: goto label_7F380EE4;
    case 0x7F380EE8u: goto label_7F380EE8;
    case 0x7F380EECu: goto label_7F380EEC;
    case 0x7F380EF0u: goto label_7F380EF0;
    case 0x7F380EF4u: goto label_7F380EF4;
    case 0x7F380EF8u: goto label_7F380EF8;
    case 0x7F380EFCu: goto label_7F380EFC;
    case 0x7F380F00u: goto label_7F380F00;
    case 0x7F380F04u: goto label_7F380F04;
    case 0x7F380F08u: goto label_7F380F08;
    case 0x7F380F0Cu: goto label_7F380F0C;
    case 0x7F380F10u: goto label_7F380F10;
    case 0x7F380F14u: goto label_7F380F14;
    case 0x7F380F18u: goto label_7F380F18;
    case 0x7F380F1Cu: goto label_7F380F1C;
    case 0x7F380F20u: goto label_7F380F20;
    case 0x7F380F24u: goto label_7F380F24;
    case 0x7F380F28u: goto label_7F380F28;
    case 0x7F380F2Cu: goto label_7F380F2C;
    case 0x7F380F30u: goto label_7F380F30;
    case 0x7F380F34u: goto label_7F380F34;
    case 0x7F380F38u: goto label_7F380F38;
    case 0x7F380F3Cu: goto label_7F380F3C;
    case 0x7F380F40u: goto label_7F380F40;
    case 0x7F380F44u: goto label_7F380F44;
    case 0x7F380F48u: goto label_7F380F48;
    case 0x7F380F4Cu: goto label_7F380F4C;
    case 0x7F380F50u: goto label_7F380F50;
    case 0x7F380F54u: goto label_7F380F54;
    case 0x7F380F58u: goto label_7F380F58;
    case 0x7F380F5Cu: goto label_7F380F5C;
    case 0x7F380F60u: goto label_7F380F60;
    case 0x7F380F64u: goto label_7F380F64;
    case 0x7F380F68u: goto label_7F380F68;
    case 0x7F380F6Cu: goto label_7F380F6C;
    case 0x7F380F70u: goto label_7F380F70;
    case 0x7F380F74u: goto label_7F380F74;
    case 0x7F380F78u: goto label_7F380F78;
    case 0x7F380F7Cu: goto label_7F380F7C;
    case 0x7F380F80u: goto label_7F380F80;
    case 0x7F380F84u: goto label_7F380F84;
    case 0x7F380F88u: goto label_7F380F88;
    case 0x7F380F8Cu: goto label_7F380F8C;
    case 0x7F380F90u: goto label_7F380F90;
    case 0x7F380F94u: goto label_7F380F94;
    case 0x7F380F98u: goto label_7F380F98;
    case 0x7F380F9Cu: goto label_7F380F9C;
    case 0x7F380FA0u: goto label_7F380FA0;
    case 0x7F380FA4u: goto label_7F380FA4;
    case 0x7F380FA8u: goto label_7F380FA8;
    case 0x7F380FACu: goto label_7F380FAC;
    case 0x7F380FB0u: goto label_7F380FB0;
    case 0x7F380FB4u: goto label_7F380FB4;
    case 0x7F380FB8u: goto label_7F380FB8;
    case 0x7F380FBCu: goto label_7F380FBC;
    case 0x7F380FC0u: goto label_7F380FC0;
    case 0x7F380FC4u: goto label_7F380FC4;
    case 0x7F380FC8u: goto label_7F380FC8;
    case 0x7F380FCCu: goto label_7F380FCC;
    case 0x7F380FD0u: goto label_7F380FD0;
    case 0x7F380FD4u: goto label_7F380FD4;
    case 0x7F380FD8u: goto label_7F380FD8;
    case 0x7F380FDCu: goto label_7F380FDC;
    case 0x7F380FE0u: goto label_7F380FE0;
    case 0x7F380FE4u: goto label_7F380FE4;
    case 0x7F380FE8u: goto label_7F380FE8;
    case 0x7F380FECu: goto label_7F380FEC;
    case 0x7F380FF0u: goto label_7F380FF0;
    case 0x7F380FF4u: goto label_7F380FF4;
    case 0x7F380FF8u: goto label_7F380FF8;
    case 0x7F380FFCu: goto label_7F380FFC;
    case 0x7F381000u: goto label_7F381000;
    case 0x7F381004u: goto label_7F381004;
    case 0x7F381008u: goto label_7F381008;
    case 0x7F38100Cu: goto label_7F38100C;
    case 0x7F381010u: goto label_7F381010;
    case 0x7F381014u: goto label_7F381014;
    case 0x7F381018u: goto label_7F381018;
    case 0x7F38101Cu: goto label_7F38101C;
    case 0x7F381020u: goto label_7F381020;
    case 0x7F381024u: goto label_7F381024;
    case 0x7F381028u: goto label_7F381028;
    case 0x7F38102Cu: goto label_7F38102C;
    case 0x7F381030u: goto label_7F381030;
    case 0x7F381034u: goto label_7F381034;
    case 0x7F381038u: goto label_7F381038;
    case 0x7F38103Cu: goto label_7F38103C;
    case 0x7F381040u: goto label_7F381040;
    case 0x7F381044u: goto label_7F381044;
    case 0x7F381048u: goto label_7F381048;
    case 0x7F38104Cu: goto label_7F38104C;
    case 0x7F381050u: goto label_7F381050;
    case 0x7F381054u: goto label_7F381054;
    case 0x7F381058u: goto label_7F381058;
    case 0x7F38105Cu: goto label_7F38105C;
    case 0x7F381060u: goto label_7F381060;
    case 0x7F381064u: goto label_7F381064;
    case 0x7F381068u: goto label_7F381068;
    case 0x7F38106Cu: goto label_7F38106C;
    case 0x7F381070u: goto label_7F381070;
    case 0x7F381074u: goto label_7F381074;
    case 0x7F381078u: goto label_7F381078;
    case 0x7F38107Cu: goto label_7F38107C;
    case 0x7F381080u: goto label_7F381080;
    case 0x7F381084u: goto label_7F381084;
    case 0x7F381088u: goto label_7F381088;
    case 0x7F38108Cu: goto label_7F38108C;
    case 0x7F381090u: goto label_7F381090;
    case 0x7F381094u: goto label_7F381094;
    case 0x7F381098u: goto label_7F381098;
    case 0x7F38109Cu: goto label_7F38109C;
    case 0x7F3810A0u: goto label_7F3810A0;
    case 0x7F3810A4u: goto label_7F3810A4;
    case 0x7F3810A8u: goto label_7F3810A8;
    case 0x7F3810ACu: goto label_7F3810AC;
    case 0x7F3810B0u: goto label_7F3810B0;
    case 0x7F3810B4u: goto label_7F3810B4;
    case 0x7F3810B8u: goto label_7F3810B8;
    case 0x7F3810BCu: goto label_7F3810BC;
    case 0x7F3810C0u: goto label_7F3810C0;
    case 0x7F3810C4u: goto label_7F3810C4;
    case 0x7F3810C8u: goto label_7F3810C8;
    case 0x7F3810CCu: goto label_7F3810CC;
    case 0x7F3810D0u: goto label_7F3810D0;
    case 0x7F3810D4u: goto label_7F3810D4;
    case 0x7F3810D8u: goto label_7F3810D8;
    case 0x7F3810DCu: goto label_7F3810DC;
    case 0x7F3810E0u: goto label_7F3810E0;
    case 0x7F3810E4u: goto label_7F3810E4;
    case 0x7F3810E8u: goto label_7F3810E8;
    case 0x7F3810ECu: goto label_7F3810EC;
    case 0x7F3810F0u: goto label_7F3810F0;
    case 0x7F3810F4u: goto label_7F3810F4;
    case 0x7F3810F8u: goto label_7F3810F8;
    case 0x7F3810FCu: goto label_7F3810FC;
    case 0x7F381100u: goto label_7F381100;
    case 0x7F381104u: goto label_7F381104;
    case 0x7F381108u: goto label_7F381108;
    case 0x7F38110Cu: goto label_7F38110C;
    case 0x7F381110u: goto label_7F381110;
    case 0x7F381114u: goto label_7F381114;
    case 0x7F381118u: goto label_7F381118;
    case 0x7F38111Cu: goto label_7F38111C;
    case 0x7F381120u: goto label_7F381120;
    case 0x7F381124u: goto label_7F381124;
    case 0x7F381128u: goto label_7F381128;
    case 0x7F38112Cu: goto label_7F38112C;
    case 0x7F381130u: goto label_7F381130;
    case 0x7F381134u: goto label_7F381134;
    case 0x7F381138u: goto label_7F381138;
    case 0x7F38113Cu: goto label_7F38113C;
    case 0x7F381140u: goto label_7F381140;
    case 0x7F381144u: goto label_7F381144;
    case 0x7F381148u: goto label_7F381148;
    case 0x7F38114Cu: goto label_7F38114C;
    case 0x7F381150u: goto label_7F381150;
    case 0x7F381154u: goto label_7F381154;
    case 0x7F381158u: goto label_7F381158;
    case 0x7F38115Cu: goto label_7F38115C;
    case 0x7F381160u: goto label_7F381160;
    case 0x7F381164u: goto label_7F381164;
    case 0x7F381168u: goto label_7F381168;
    case 0x7F38116Cu: goto label_7F38116C;
    case 0x7F381170u: goto label_7F381170;
    case 0x7F381174u: goto label_7F381174;
    case 0x7F381178u: goto label_7F381178;
    case 0x7F38117Cu: goto label_7F38117C;
    case 0x7F381180u: goto label_7F381180;
    case 0x7F381184u: goto label_7F381184;
    case 0x7F381188u: goto label_7F381188;
    case 0x7F38118Cu: goto label_7F38118C;
    case 0x7F381190u: goto label_7F381190;
    case 0x7F381194u: goto label_7F381194;
    case 0x7F381198u: goto label_7F381198;
    case 0x7F38119Cu: goto label_7F38119C;
    case 0x7F3811A0u: goto label_7F3811A0;
    case 0x7F3811A4u: goto label_7F3811A4;
    case 0x7F3811A8u: goto label_7F3811A8;
    case 0x7F3811ACu: goto label_7F3811AC;
    case 0x7F3811B0u: goto label_7F3811B0;
    case 0x7F3811B4u: goto label_7F3811B4;
    case 0x7F3811B8u: goto label_7F3811B8;
    case 0x7F3811BCu: goto label_7F3811BC;
    case 0x7F3811C0u: goto label_7F3811C0;
    case 0x7F3811C4u: goto label_7F3811C4;
    case 0x7F3811C8u: goto label_7F3811C8;
    case 0x7F3811CCu: goto label_7F3811CC;
    case 0x7F3811D0u: goto label_7F3811D0;
    case 0x7F3811D4u: goto label_7F3811D4;
    case 0x7F3811D8u: goto label_7F3811D8;
    case 0x7F3811DCu: goto label_7F3811DC;
    case 0x7F3811E0u: goto label_7F3811E0;
    case 0x7F3811E4u: goto label_7F3811E4;
    case 0x7F3811E8u: goto label_7F3811E8;
    case 0x7F3811ECu: goto label_7F3811EC;
    case 0x7F3811F0u: goto label_7F3811F0;
    case 0x7F3811F4u: goto label_7F3811F4;
    case 0x7F3811F8u: goto label_7F3811F8;
    case 0x7F3811FCu: goto label_7F3811FC;
    case 0x7F381200u: goto label_7F381200;
    case 0x7F381204u: goto label_7F381204;
    case 0x7F381208u: goto label_7F381208;
    case 0x7F38120Cu: goto label_7F38120C;
    case 0x7F381210u: goto label_7F381210;
    case 0x7F381214u: goto label_7F381214;
    case 0x7F381218u: goto label_7F381218;
    case 0x7F38121Cu: goto label_7F38121C;
    case 0x7F381220u: goto label_7F381220;
    case 0x7F381224u: goto label_7F381224;
    case 0x7F381228u: goto label_7F381228;
    case 0x7F38122Cu: goto label_7F38122C;
    case 0x7F381230u: goto label_7F381230;
    case 0x7F381234u: goto label_7F381234;
    case 0x7F381238u: goto label_7F381238;
    case 0x7F38123Cu: goto label_7F38123C;
    case 0x7F381240u: goto label_7F381240;
    case 0x7F381244u: goto label_7F381244;
    case 0x7F381248u: goto label_7F381248;
    case 0x7F38124Cu: goto label_7F38124C;
    case 0x7F381250u: goto label_7F381250;
    case 0x7F381254u: goto label_7F381254;
    case 0x7F381258u: goto label_7F381258;
    case 0x7F38125Cu: goto label_7F38125C;
    case 0x7F381260u: goto label_7F381260;
    case 0x7F381264u: goto label_7F381264;
    case 0x7F381268u: goto label_7F381268;
    case 0x7F38126Cu: goto label_7F38126C;
    case 0x7F381270u: goto label_7F381270;
    case 0x7F381274u: goto label_7F381274;
    case 0x7F381278u: goto label_7F381278;
    case 0x7F38127Cu: goto label_7F38127C;
    case 0x7F381280u: goto label_7F381280;
    case 0x7F381284u: goto label_7F381284;
    case 0x7F381288u: goto label_7F381288;
    case 0x7F38128Cu: goto label_7F38128C;
    case 0x7F381290u: goto label_7F381290;
    case 0x7F381294u: goto label_7F381294;
    case 0x7F381298u: goto label_7F381298;
    case 0x7F38129Cu: goto label_7F38129C;
    case 0x7F3812A0u: goto label_7F3812A0;
    case 0x7F3812A4u: goto label_7F3812A4;
    case 0x7F3812A8u: goto label_7F3812A8;
    case 0x7F3812ACu: goto label_7F3812AC;
    case 0x7F3812B0u: goto label_7F3812B0;
    case 0x7F3812B4u: goto label_7F3812B4;
    case 0x7F3812B8u: goto label_7F3812B8;
    case 0x7F3812BCu: goto label_7F3812BC;
    case 0x7F3812C0u: goto label_7F3812C0;
    case 0x7F3812C4u: goto label_7F3812C4;
    case 0x7F3812C8u: goto label_7F3812C8;
    case 0x7F3812CCu: goto label_7F3812CC;
    case 0x7F3812D0u: goto label_7F3812D0;
    case 0x7F3812D4u: goto label_7F3812D4;
    case 0x7F3812D8u: goto label_7F3812D8;
    case 0x7F3812DCu: goto label_7F3812DC;
    case 0x7F3812E0u: goto label_7F3812E0;
    case 0x7F3812E4u: goto label_7F3812E4;
    case 0x7F3812E8u: goto label_7F3812E8;
    case 0x7F3812ECu: goto label_7F3812EC;
    case 0x7F3812F0u: goto label_7F3812F0;
    case 0x7F3812F4u: goto label_7F3812F4;
    case 0x7F3812F8u: goto label_7F3812F8;
    case 0x7F3812FCu: goto label_7F3812FC;
    case 0x7F381300u: goto label_7F381300;
    case 0x7F381304u: goto label_7F381304;
    case 0x7F381308u: goto label_7F381308;
    case 0x7F38130Cu: goto label_7F38130C;
    case 0x7F381310u: goto label_7F381310;
    case 0x7F381314u: goto label_7F381314;
    case 0x7F381318u: goto label_7F381318;
    case 0x7F38131Cu: goto label_7F38131C;
    case 0x7F381320u: goto label_7F381320;
    case 0x7F381324u: goto label_7F381324;
    case 0x7F381328u: goto label_7F381328;
    case 0x7F38132Cu: goto label_7F38132C;
    case 0x7F381330u: goto label_7F381330;
    case 0x7F381334u: goto label_7F381334;
    case 0x7F381338u: goto label_7F381338;
    case 0x7F38133Cu: goto label_7F38133C;
    case 0x7F381340u: goto label_7F381340;
    case 0x7F381344u: goto label_7F381344;
    case 0x7F381348u: goto label_7F381348;
    case 0x7F38134Cu: goto label_7F38134C;
    case 0x7F381350u: goto label_7F381350;
    case 0x7F381354u: goto label_7F381354;
    case 0x7F381358u: goto label_7F381358;
    case 0x7F38135Cu: goto label_7F38135C;
    case 0x7F381360u: goto label_7F381360;
    case 0x7F381364u: goto label_7F381364;
    case 0x7F381368u: goto label_7F381368;
    case 0x7F38136Cu: goto label_7F38136C;
    case 0x7F381370u: goto label_7F381370;
    case 0x7F381374u: goto label_7F381374;
    case 0x7F381378u: goto label_7F381378;
    case 0x7F38137Cu: goto label_7F38137C;
    case 0x7F381380u: goto label_7F381380;
    case 0x7F381384u: goto label_7F381384;
    case 0x7F381388u: goto label_7F381388;
    case 0x7F38138Cu: goto label_7F38138C;
    case 0x7F381390u: goto label_7F381390;
    case 0x7F381394u: goto label_7F381394;
    case 0x7F381398u: goto label_7F381398;
    case 0x7F38139Cu: goto label_7F38139C;
    case 0x7F3813A0u: goto label_7F3813A0;
    case 0x7F3813A4u: goto label_7F3813A4;
    case 0x7F3813A8u: goto label_7F3813A8;
    case 0x7F3813ACu: goto label_7F3813AC;
    case 0x7F3813B0u: goto label_7F3813B0;
    case 0x7F3813B4u: goto label_7F3813B4;
    case 0x7F3813B8u: goto label_7F3813B8;
    case 0x7F3813BCu: goto label_7F3813BC;
    case 0x7F3813C0u: goto label_7F3813C0;
    case 0x7F3813C4u: goto label_7F3813C4;
    case 0x7F3813C8u: goto label_7F3813C8;
    case 0x7F3813CCu: goto label_7F3813CC;
    case 0x7F3813D0u: goto label_7F3813D0;
    case 0x7F3813D4u: goto label_7F3813D4;
    case 0x7F3813D8u: goto label_7F3813D8;
    case 0x7F3813DCu: goto label_7F3813DC;
    case 0x7F3813E0u: goto label_7F3813E0;
    case 0x7F3813E4u: goto label_7F3813E4;
    case 0x7F3813E8u: goto label_7F3813E8;
    case 0x7F3813ECu: goto label_7F3813EC;
    case 0x7F3813F0u: goto label_7F3813F0;
    case 0x7F3813F4u: goto label_7F3813F4;
    case 0x7F3813F8u: goto label_7F3813F8;
    case 0x7F3813FCu: goto label_7F3813FC;
    case 0x7F381400u: goto label_7F381400;
    case 0x7F381404u: goto label_7F381404;
    case 0x7F381408u: goto label_7F381408;
    case 0x7F38140Cu: goto label_7F38140C;
    case 0x7F381410u: goto label_7F381410;
    case 0x7F381414u: goto label_7F381414;
    case 0x7F381418u: goto label_7F381418;
    case 0x7F38141Cu: goto label_7F38141C;
    case 0x7F381420u: goto label_7F381420;
    case 0x7F381424u: goto label_7F381424;
    case 0x7F381428u: goto label_7F381428;
    case 0x7F38142Cu: goto label_7F38142C;
    case 0x7F381430u: goto label_7F381430;
    case 0x7F381434u: goto label_7F381434;
    case 0x7F381438u: goto label_7F381438;
    case 0x7F38143Cu: goto label_7F38143C;
    case 0x7F381440u: goto label_7F381440;
    case 0x7F381444u: goto label_7F381444;
    case 0x7F381448u: goto label_7F381448;
    case 0x7F38144Cu: goto label_7F38144C;
    case 0x7F381450u: goto label_7F381450;
    case 0x7F381454u: goto label_7F381454;
    case 0x7F381458u: goto label_7F381458;
    case 0x7F38145Cu: goto label_7F38145C;
    case 0x7F381460u: goto label_7F381460;
    case 0x7F381464u: goto label_7F381464;
    case 0x7F381468u: goto label_7F381468;
    case 0x7F38146Cu: goto label_7F38146C;
    case 0x7F381470u: goto label_7F381470;
    case 0x7F381474u: goto label_7F381474;
    case 0x7F381478u: goto label_7F381478;
    case 0x7F38147Cu: goto label_7F38147C;
    case 0x7F381480u: goto label_7F381480;
    case 0x7F381484u: goto label_7F381484;
    case 0x7F381488u: goto label_7F381488;
    case 0x7F38148Cu: goto label_7F38148C;
    case 0x7F381490u: goto label_7F381490;
    case 0x7F381494u: goto label_7F381494;
    case 0x7F381498u: goto label_7F381498;
    case 0x7F38149Cu: goto label_7F38149C;
    case 0x7F3814A0u: goto label_7F3814A0;
    case 0x7F3814A4u: goto label_7F3814A4;
    case 0x7F3814A8u: goto label_7F3814A8;
    case 0x7F3814ACu: goto label_7F3814AC;
    case 0x7F3814B0u: goto label_7F3814B0;
    case 0x7F3814B4u: goto label_7F3814B4;
    case 0x7F3814B8u: goto label_7F3814B8;
    case 0x7F3814BCu: goto label_7F3814BC;
    case 0x7F3814C0u: goto label_7F3814C0;
    case 0x7F3814C4u: goto label_7F3814C4;
    case 0x7F3814C8u: goto label_7F3814C8;
    case 0x7F3814CCu: goto label_7F3814CC;
    case 0x7F3814D0u: goto label_7F3814D0;
    case 0x7F3814D4u: goto label_7F3814D4;
    case 0x7F3814D8u: goto label_7F3814D8;
    case 0x7F3814DCu: goto label_7F3814DC;
    case 0x7F3814E0u: goto label_7F3814E0;
    case 0x7F3814E4u: goto label_7F3814E4;
    case 0x7F3814E8u: goto label_7F3814E8;
    case 0x7F3814ECu: goto label_7F3814EC;
    case 0x7F3814F0u: goto label_7F3814F0;
    case 0x7F3814F4u: goto label_7F3814F4;
    case 0x7F3814F8u: goto label_7F3814F8;
    case 0x7F3814FCu: goto label_7F3814FC;
    case 0x7F381500u: goto label_7F381500;
    case 0x7F381504u: goto label_7F381504;
    case 0x7F381508u: goto label_7F381508;
    case 0x7F38150Cu: goto label_7F38150C;
    case 0x7F381510u: goto label_7F381510;
    case 0x7F381514u: goto label_7F381514;
    case 0x7F381518u: goto label_7F381518;
    case 0x7F38151Cu: goto label_7F38151C;
    case 0x7F381520u: goto label_7F381520;
    case 0x7F381524u: goto label_7F381524;
    case 0x7F381528u: goto label_7F381528;
    case 0x7F38152Cu: goto label_7F38152C;
    case 0x7F381530u: goto label_7F381530;
    case 0x7F381534u: goto label_7F381534;
    case 0x7F381538u: goto label_7F381538;
    case 0x7F38153Cu: goto label_7F38153C;
    case 0x7F381540u: goto label_7F381540;
    case 0x7F381544u: goto label_7F381544;
    case 0x7F381548u: goto label_7F381548;
    case 0x7F38154Cu: goto label_7F38154C;
    case 0x7F381550u: goto label_7F381550;
    case 0x7F381554u: goto label_7F381554;
    case 0x7F381558u: goto label_7F381558;
    case 0x7F38155Cu: goto label_7F38155C;
    case 0x7F381560u: goto label_7F381560;
    case 0x7F381564u: goto label_7F381564;
    case 0x7F381568u: goto label_7F381568;
    case 0x7F38156Cu: goto label_7F38156C;
    case 0x7F381570u: goto label_7F381570;
    case 0x7F381574u: goto label_7F381574;
    case 0x7F381578u: goto label_7F381578;
    case 0x7F38157Cu: goto label_7F38157C;
    case 0x7F381580u: goto label_7F381580;
    case 0x7F381584u: goto label_7F381584;
    case 0x7F381588u: goto label_7F381588;
    case 0x7F38158Cu: goto label_7F38158C;
    case 0x7F381590u: goto label_7F381590;
    case 0x7F381594u: goto label_7F381594;
    case 0x7F381598u: goto label_7F381598;
    case 0x7F38159Cu: goto label_7F38159C;
    case 0x7F3815A0u: goto label_7F3815A0;
    case 0x7F3815A4u: goto label_7F3815A4;
    case 0x7F3815A8u: goto label_7F3815A8;
    case 0x7F3815ACu: goto label_7F3815AC;
    case 0x7F3815B0u: goto label_7F3815B0;
    case 0x7F3815B4u: goto label_7F3815B4;
    case 0x7F3815B8u: goto label_7F3815B8;
    case 0x7F3815BCu: goto label_7F3815BC;
    case 0x7F3815C0u: goto label_7F3815C0;
    case 0x7F3815C4u: goto label_7F3815C4;
    case 0x7F3815C8u: goto label_7F3815C8;
    case 0x7F3815CCu: goto label_7F3815CC;
    case 0x7F3815D0u: goto label_7F3815D0;
    case 0x7F3815D4u: goto label_7F3815D4;
    case 0x7F3815D8u: goto label_7F3815D8;
    case 0x7F3815DCu: goto label_7F3815DC;
    case 0x7F3815E0u: goto label_7F3815E0;
    case 0x7F3815E4u: goto label_7F3815E4;
    case 0x7F3815E8u: goto label_7F3815E8;
    case 0x7F3815ECu: goto label_7F3815EC;
    case 0x7F3815F0u: goto label_7F3815F0;
    case 0x7F3815F4u: goto label_7F3815F4;
    case 0x7F3815F8u: goto label_7F3815F8;
    case 0x7F3815FCu: goto label_7F3815FC;
    case 0x7F381600u: goto label_7F381600;
    case 0x7F381604u: goto label_7F381604;
    case 0x7F381608u: goto label_7F381608;
    case 0x7F38160Cu: goto label_7F38160C;
    case 0x7F381610u: goto label_7F381610;
    case 0x7F381614u: goto label_7F381614;
    case 0x7F381618u: goto label_7F381618;
    case 0x7F38161Cu: goto label_7F38161C;
    case 0x7F381620u: goto label_7F381620;
    case 0x7F381624u: goto label_7F381624;
    case 0x7F381628u: goto label_7F381628;
    case 0x7F38162Cu: goto label_7F38162C;
    case 0x7F381630u: goto label_7F381630;
    case 0x7F381634u: goto label_7F381634;
    case 0x7F381638u: goto label_7F381638;
    case 0x7F38163Cu: goto label_7F38163C;
    case 0x7F381640u: goto label_7F381640;
    case 0x7F381644u: goto label_7F381644;
    case 0x7F381648u: goto label_7F381648;
    case 0x7F38164Cu: goto label_7F38164C;
    case 0x7F381650u: goto label_7F381650;
    case 0x7F381654u: goto label_7F381654;
    case 0x7F381658u: goto label_7F381658;
    case 0x7F38165Cu: goto label_7F38165C;
    case 0x7F381660u: goto label_7F381660;
    case 0x7F381664u: goto label_7F381664;
    case 0x7F381668u: goto label_7F381668;
    case 0x7F38166Cu: goto label_7F38166C;
    case 0x7F381670u: goto label_7F381670;
    case 0x7F381674u: goto label_7F381674;
    case 0x7F381678u: goto label_7F381678;
    case 0x7F38167Cu: goto label_7F38167C;
    case 0x7F381680u: goto label_7F381680;
    case 0x7F381684u: goto label_7F381684;
    case 0x7F381688u: goto label_7F381688;
    case 0x7F38168Cu: goto label_7F38168C;
    case 0x7F381690u: goto label_7F381690;
    case 0x7F381694u: goto label_7F381694;
    case 0x7F381698u: goto label_7F381698;
    case 0x7F38169Cu: goto label_7F38169C;
    case 0x7F3816A0u: goto label_7F3816A0;
    case 0x7F3816A4u: goto label_7F3816A4;
    case 0x7F3816A8u: goto label_7F3816A8;
    case 0x7F3816ACu: goto label_7F3816AC;
    case 0x7F3816B0u: goto label_7F3816B0;
    case 0x7F3816B4u: goto label_7F3816B4;
    case 0x7F3816B8u: goto label_7F3816B8;
    case 0x7F3816BCu: goto label_7F3816BC;
    case 0x7F3816C0u: goto label_7F3816C0;
    case 0x7F3816C4u: goto label_7F3816C4;
    case 0x7F3816C8u: goto label_7F3816C8;
    case 0x7F3816CCu: goto label_7F3816CC;
    case 0x7F3816D0u: goto label_7F3816D0;
    case 0x7F3816D4u: goto label_7F3816D4;
    case 0x7F3816D8u: goto label_7F3816D8;
    case 0x7F3816DCu: goto label_7F3816DC;
    case 0x7F3816E0u: goto label_7F3816E0;
    case 0x7F3816E4u: goto label_7F3816E4;
    case 0x7F3816E8u: goto label_7F3816E8;
    case 0x7F3816ECu: goto label_7F3816EC;
    case 0x7F3816F0u: goto label_7F3816F0;
    case 0x7F3816F4u: goto label_7F3816F4;
    case 0x7F3816F8u: goto label_7F3816F8;
    case 0x7F3816FCu: goto label_7F3816FC;
    case 0x7F381700u: goto label_7F381700;
    case 0x7F381704u: goto label_7F381704;
    case 0x7F381708u: goto label_7F381708;
    case 0x7F38170Cu: goto label_7F38170C;
    case 0x7F381710u: goto label_7F381710;
    case 0x7F381714u: goto label_7F381714;
    case 0x7F381718u: goto label_7F381718;
    case 0x7F38171Cu: goto label_7F38171C;
    case 0x7F381720u: goto label_7F381720;
    case 0x7F381724u: goto label_7F381724;
    case 0x7F381728u: goto label_7F381728;
    case 0x7F38172Cu: goto label_7F38172C;
    case 0x7F381730u: goto label_7F381730;
    case 0x7F381734u: goto label_7F381734;
    case 0x7F381738u: goto label_7F381738;
    case 0x7F38173Cu: goto label_7F38173C;
    case 0x7F381740u: goto label_7F381740;
    case 0x7F381744u: goto label_7F381744;
    case 0x7F381748u: goto label_7F381748;
    case 0x7F38174Cu: goto label_7F38174C;
    case 0x7F381750u: goto label_7F381750;
    case 0x7F381754u: goto label_7F381754;
    case 0x7F381758u: goto label_7F381758;
    case 0x7F38175Cu: goto label_7F38175C;
    case 0x7F381760u: goto label_7F381760;
    case 0x7F381764u: goto label_7F381764;
    case 0x7F381768u: goto label_7F381768;
    case 0x7F38176Cu: goto label_7F38176C;
    case 0x7F381770u: goto label_7F381770;
    case 0x7F381774u: goto label_7F381774;
    case 0x7F381778u: goto label_7F381778;
    case 0x7F38177Cu: goto label_7F38177C;
    case 0x7F381780u: goto label_7F381780;
    case 0x7F381784u: goto label_7F381784;
    case 0x7F381788u: goto label_7F381788;
    case 0x7F38178Cu: goto label_7F38178C;
    case 0x7F381790u: goto label_7F381790;
    case 0x7F381794u: goto label_7F381794;
    case 0x7F381798u: goto label_7F381798;
    case 0x7F38179Cu: goto label_7F38179C;
    case 0x7F3817A0u: goto label_7F3817A0;
    case 0x7F3817A4u: goto label_7F3817A4;
    case 0x7F3817A8u: goto label_7F3817A8;
    case 0x7F3817ACu: goto label_7F3817AC;
    case 0x7F3817B0u: goto label_7F3817B0;
    case 0x7F3817B4u: goto label_7F3817B4;
    case 0x7F3817B8u: goto label_7F3817B8;
    case 0x7F3817BCu: goto label_7F3817BC;
    case 0x7F3817C0u: goto label_7F3817C0;
    case 0x7F3817C4u: goto label_7F3817C4;
    case 0x7F3817C8u: goto label_7F3817C8;
    case 0x7F3817CCu: goto label_7F3817CC;
    case 0x7F3817D0u: goto label_7F3817D0;
    case 0x7F3817D4u: goto label_7F3817D4;
    case 0x7F3817D8u: goto label_7F3817D8;
    case 0x7F3817DCu: goto label_7F3817DC;
    case 0x7F3817E0u: goto label_7F3817E0;
    case 0x7F3817E4u: goto label_7F3817E4;
    case 0x7F3817E8u: goto label_7F3817E8;
    case 0x7F3817ECu: goto label_7F3817EC;
    case 0x7F3817F0u: goto label_7F3817F0;
    case 0x7F3817F4u: goto label_7F3817F4;
    case 0x7F3817F8u: goto label_7F3817F8;
    case 0x7F3817FCu: goto label_7F3817FC;
    case 0x7F381800u: goto label_7F381800;
    case 0x7F381804u: goto label_7F381804;
    case 0x7F381808u: goto label_7F381808;
    case 0x7F38180Cu: goto label_7F38180C;
    case 0x7F381810u: goto label_7F381810;
    case 0x7F381814u: goto label_7F381814;
    case 0x7F381818u: goto label_7F381818;
    case 0x7F38181Cu: goto label_7F38181C;
    case 0x7F381820u: goto label_7F381820;
    case 0x7F381824u: goto label_7F381824;
    case 0x7F381828u: goto label_7F381828;
    case 0x7F38182Cu: goto label_7F38182C;
    case 0x7F381830u: goto label_7F381830;
    case 0x7F381834u: goto label_7F381834;
    case 0x7F381838u: goto label_7F381838;
    case 0x7F38183Cu: goto label_7F38183C;
    case 0x7F381840u: goto label_7F381840;
    case 0x7F381844u: goto label_7F381844;
    case 0x7F381848u: goto label_7F381848;
    case 0x7F38184Cu: goto label_7F38184C;
    case 0x7F381850u: goto label_7F381850;
    case 0x7F381854u: goto label_7F381854;
    case 0x7F381858u: goto label_7F381858;
    case 0x7F38185Cu: goto label_7F38185C;
    case 0x7F381860u: goto label_7F381860;
    case 0x7F381864u: goto label_7F381864;
    case 0x7F381868u: goto label_7F381868;
    case 0x7F38186Cu: goto label_7F38186C;
    case 0x7F381870u: goto label_7F381870;
    case 0x7F381874u: goto label_7F381874;
    case 0x7F381878u: goto label_7F381878;
    case 0x7F38187Cu: goto label_7F38187C;
    case 0x7F381880u: goto label_7F381880;
    case 0x7F381884u: goto label_7F381884;
    case 0x7F381888u: goto label_7F381888;
    case 0x7F38188Cu: goto label_7F38188C;
    case 0x7F381890u: goto label_7F381890;
    case 0x7F381894u: goto label_7F381894;
    case 0x7F381898u: goto label_7F381898;
    case 0x7F38189Cu: goto label_7F38189C;
    case 0x7F3818A0u: goto label_7F3818A0;
    case 0x7F3818A4u: goto label_7F3818A4;
    case 0x7F3818A8u: goto label_7F3818A8;
    case 0x7F3818ACu: goto label_7F3818AC;
    case 0x7F3818B0u: goto label_7F3818B0;
    case 0x7F3818B4u: goto label_7F3818B4;
    case 0x7F3818B8u: goto label_7F3818B8;
    case 0x7F3818BCu: goto label_7F3818BC;
    case 0x7F3818C0u: goto label_7F3818C0;
    case 0x7F3818C4u: goto label_7F3818C4;
    case 0x7F3818C8u: goto label_7F3818C8;
    case 0x7F3818CCu: goto label_7F3818CC;
    case 0x7F3818D0u: goto label_7F3818D0;
    case 0x7F3818D4u: goto label_7F3818D4;
    case 0x7F3818D8u: goto label_7F3818D8;
    case 0x7F3818DCu: goto label_7F3818DC;
    case 0x7F3818E0u: goto label_7F3818E0;
    case 0x7F3818E4u: goto label_7F3818E4;
    case 0x7F3818E8u: goto label_7F3818E8;
    case 0x7F3818ECu: goto label_7F3818EC;
    case 0x7F3818F0u: goto label_7F3818F0;
    case 0x7F3818F4u: goto label_7F3818F4;
    case 0x7F3818F8u: goto label_7F3818F8;
    case 0x7F3818FCu: goto label_7F3818FC;
    case 0x7F381900u: goto label_7F381900;
    case 0x7F381904u: goto label_7F381904;
    case 0x7F381908u: goto label_7F381908;
    case 0x7F38190Cu: goto label_7F38190C;
    case 0x7F381910u: goto label_7F381910;
    case 0x7F381914u: goto label_7F381914;
    case 0x7F381918u: goto label_7F381918;
    case 0x7F38191Cu: goto label_7F38191C;
    case 0x7F381920u: goto label_7F381920;
    case 0x7F381924u: goto label_7F381924;
    case 0x7F381928u: goto label_7F381928;
    case 0x7F38192Cu: goto label_7F38192C;
    case 0x7F381930u: goto label_7F381930;
    case 0x7F381934u: goto label_7F381934;
    case 0x7F381938u: goto label_7F381938;
    case 0x7F38193Cu: goto label_7F38193C;
    case 0x7F381940u: goto label_7F381940;
    case 0x7F381944u: goto label_7F381944;
    case 0x7F381948u: goto label_7F381948;
    case 0x7F38194Cu: goto label_7F38194C;
    case 0x7F381950u: goto label_7F381950;
    case 0x7F381954u: goto label_7F381954;
    case 0x7F381958u: goto label_7F381958;
    case 0x7F38195Cu: goto label_7F38195C;
    case 0x7F381960u: goto label_7F381960;
    case 0x7F381964u: goto label_7F381964;
    case 0x7F381968u: goto label_7F381968;
    case 0x7F38196Cu: goto label_7F38196C;
    case 0x7F381970u: goto label_7F381970;
    case 0x7F381974u: goto label_7F381974;
    case 0x7F381978u: goto label_7F381978;
    case 0x7F38197Cu: goto label_7F38197C;
    case 0x7F381980u: goto label_7F381980;
    case 0x7F381984u: goto label_7F381984;
    case 0x7F381988u: goto label_7F381988;
    case 0x7F38198Cu: goto label_7F38198C;
    case 0x7F381990u: goto label_7F381990;
    case 0x7F381994u: goto label_7F381994;
    case 0x7F381998u: goto label_7F381998;
    case 0x7F38199Cu: goto label_7F38199C;
    case 0x7F3819A0u: goto label_7F3819A0;
    case 0x7F3819A4u: goto label_7F3819A4;
    case 0x7F3819A8u: goto label_7F3819A8;
    case 0x7F3819ACu: goto label_7F3819AC;
    case 0x7F3819B0u: goto label_7F3819B0;
    case 0x7F3819B4u: goto label_7F3819B4;
    case 0x7F3819B8u: goto label_7F3819B8;
    case 0x7F3819BCu: goto label_7F3819BC;
    case 0x7F3819C0u: goto label_7F3819C0;
    case 0x7F3819C4u: goto label_7F3819C4;
    case 0x7F3819C8u: goto label_7F3819C8;
    case 0x7F3819CCu: goto label_7F3819CC;
    case 0x7F3819D0u: goto label_7F3819D0;
    case 0x7F3819D4u: goto label_7F3819D4;
    case 0x7F3819D8u: goto label_7F3819D8;
    case 0x7F3819DCu: goto label_7F3819DC;
    case 0x7F3819E0u: goto label_7F3819E0;
    case 0x7F3819E4u: goto label_7F3819E4;
    case 0x7F3819E8u: goto label_7F3819E8;
    case 0x7F3819ECu: goto label_7F3819EC;
    case 0x7F3819F0u: goto label_7F3819F0;
    case 0x7F3819F4u: goto label_7F3819F4;
    case 0x7F3819F8u: goto label_7F3819F8;
    case 0x7F3819FCu: goto label_7F3819FC;
    case 0x7F381A00u: goto label_7F381A00;
    case 0x7F381A04u: goto label_7F381A04;
    case 0x7F381A08u: goto label_7F381A08;
    case 0x7F381A0Cu: goto label_7F381A0C;
    case 0x7F381A10u: goto label_7F381A10;
    case 0x7F381A14u: goto label_7F381A14;
    case 0x7F381A18u: goto label_7F381A18;
    case 0x7F381A1Cu: goto label_7F381A1C;
    case 0x7F381A20u: goto label_7F381A20;
    case 0x7F381A24u: goto label_7F381A24;
    case 0x7F381A28u: goto label_7F381A28;
    case 0x7F381A2Cu: goto label_7F381A2C;
    case 0x7F381A30u: goto label_7F381A30;
    case 0x7F381A34u: goto label_7F381A34;
    case 0x7F381A38u: goto label_7F381A38;
    case 0x7F381A3Cu: goto label_7F381A3C;
    case 0x7F381A40u: goto label_7F381A40;
    case 0x7F381A44u: goto label_7F381A44;
    case 0x7F381A48u: goto label_7F381A48;
    case 0x7F381A4Cu: goto label_7F381A4C;
    case 0x7F381A50u: goto label_7F381A50;
    case 0x7F381A54u: goto label_7F381A54;
    case 0x7F381A58u: goto label_7F381A58;
    case 0x7F381A5Cu: goto label_7F381A5C;
    case 0x7F381A60u: goto label_7F381A60;
    case 0x7F381A64u: goto label_7F381A64;
    case 0x7F381A68u: goto label_7F381A68;
    case 0x7F381A6Cu: goto label_7F381A6C;
    case 0x7F381A70u: goto label_7F381A70;
    case 0x7F381A74u: goto label_7F381A74;
    case 0x7F381A78u: goto label_7F381A78;
    case 0x7F381A7Cu: goto label_7F381A7C;
    case 0x7F381A80u: goto label_7F381A80;
    case 0x7F381A84u: goto label_7F381A84;
    case 0x7F381A88u: goto label_7F381A88;
    case 0x7F381A8Cu: goto label_7F381A8C;
    case 0x7F381A90u: goto label_7F381A90;
    case 0x7F381A94u: goto label_7F381A94;
    case 0x7F381A98u: goto label_7F381A98;
    case 0x7F381A9Cu: goto label_7F381A9C;
    case 0x7F381AA0u: goto label_7F381AA0;
    case 0x7F381AA4u: goto label_7F381AA4;
    case 0x7F381AA8u: goto label_7F381AA8;
    case 0x7F381AACu: goto label_7F381AAC;
    case 0x7F381AB0u: goto label_7F381AB0;
    case 0x7F381AB4u: goto label_7F381AB4;
    case 0x7F381AB8u: goto label_7F381AB8;
    case 0x7F381ABCu: goto label_7F381ABC;
    case 0x7F381AC0u: goto label_7F381AC0;
    case 0x7F381AC4u: goto label_7F381AC4;
    case 0x7F381AC8u: goto label_7F381AC8;
    case 0x7F381ACCu: goto label_7F381ACC;
    case 0x7F381AD0u: goto label_7F381AD0;
    case 0x7F381AD4u: goto label_7F381AD4;
    case 0x7F381AD8u: goto label_7F381AD8;
    case 0x7F381ADCu: goto label_7F381ADC;
    case 0x7F381AE0u: goto label_7F381AE0;
    case 0x7F381AE4u: goto label_7F381AE4;
    case 0x7F381AE8u: goto label_7F381AE8;
    case 0x7F381AECu: goto label_7F381AEC;
    case 0x7F381AF0u: goto label_7F381AF0;
    case 0x7F381AF4u: goto label_7F381AF4;
    case 0x7F381AF8u: goto label_7F381AF8;
    case 0x7F381AFCu: goto label_7F381AFC;
    case 0x7F381B00u: goto label_7F381B00;
    case 0x7F381B04u: goto label_7F381B04;
    case 0x7F381B08u: goto label_7F381B08;
    case 0x7F381B0Cu: goto label_7F381B0C;
    case 0x7F381B10u: goto label_7F381B10;
    case 0x7F381B14u: goto label_7F381B14;
    case 0x7F381B18u: goto label_7F381B18;
    case 0x7F381B1Cu: goto label_7F381B1C;
    case 0x7F381B20u: goto label_7F381B20;
    case 0x7F381B24u: goto label_7F381B24;
    case 0x7F381B28u: goto label_7F381B28;
    case 0x7F381B2Cu: goto label_7F381B2C;
    case 0x7F381B30u: goto label_7F381B30;
    case 0x7F381B34u: goto label_7F381B34;
    case 0x7F381B38u: goto label_7F381B38;
    case 0x7F381B3Cu: goto label_7F381B3C;
    case 0x7F381B40u: goto label_7F381B40;
    case 0x7F381B44u: goto label_7F381B44;
    case 0x7F381B48u: goto label_7F381B48;
    case 0x7F381B4Cu: goto label_7F381B4C;
    case 0x7F381B50u: goto label_7F381B50;
    case 0x7F381B54u: goto label_7F381B54;
    case 0x7F381B58u: goto label_7F381B58;
    case 0x7F381B5Cu: goto label_7F381B5C;
    case 0x7F381B60u: goto label_7F381B60;
    case 0x7F381B64u: goto label_7F381B64;
    case 0x7F381B68u: goto label_7F381B68;
    case 0x7F381B6Cu: goto label_7F381B6C;
    case 0x7F381B70u: goto label_7F381B70;
    case 0x7F381B74u: goto label_7F381B74;
    case 0x7F381B78u: goto label_7F381B78;
    case 0x7F381B7Cu: goto label_7F381B7C;
    case 0x7F381B80u: goto label_7F381B80;
    case 0x7F381B84u: goto label_7F381B84;
    case 0x7F381B88u: goto label_7F381B88;
    case 0x7F381B8Cu: goto label_7F381B8C;
    case 0x7F381B90u: goto label_7F381B90;
    case 0x7F381B94u: goto label_7F381B94;
    case 0x7F381B98u: goto label_7F381B98;
    case 0x7F381B9Cu: goto label_7F381B9C;
    case 0x7F381BA0u: goto label_7F381BA0;
    case 0x7F381BA4u: goto label_7F381BA4;
    case 0x7F381BA8u: goto label_7F381BA8;
    case 0x7F381BACu: goto label_7F381BAC;
    case 0x7F381BB0u: goto label_7F381BB0;
    case 0x7F381BB4u: goto label_7F381BB4;
    case 0x7F381BB8u: goto label_7F381BB8;
    case 0x7F381BBCu: goto label_7F381BBC;
    case 0x7F381BC0u: goto label_7F381BC0;
    case 0x7F381BC4u: goto label_7F381BC4;
    case 0x7F381BC8u: goto label_7F381BC8;
    case 0x7F381BCCu: goto label_7F381BCC;
    case 0x7F381BD0u: goto label_7F381BD0;
    case 0x7F381BD4u: goto label_7F381BD4;
    case 0x7F381BD8u: goto label_7F381BD8;
    case 0x7F381BDCu: goto label_7F381BDC;
    case 0x7F381BE0u: goto label_7F381BE0;
    case 0x7F381BE4u: goto label_7F381BE4;
    case 0x7F381BE8u: goto label_7F381BE8;
    case 0x7F381BECu: goto label_7F381BEC;
    case 0x7F381BF0u: goto label_7F381BF0;
    case 0x7F381BF4u: goto label_7F381BF4;
    case 0x7F381BF8u: goto label_7F381BF8;
    case 0x7F381BFCu: goto label_7F381BFC;
    case 0x7F381C00u: goto label_7F381C00;
    case 0x7F381C04u: goto label_7F381C04;
    case 0x7F381C08u: goto label_7F381C08;
    case 0x7F381C0Cu: goto label_7F381C0C;
    case 0x7F381C10u: goto label_7F381C10;
    case 0x7F381C14u: goto label_7F381C14;
    case 0x7F381C18u: goto label_7F381C18;
    case 0x7F381C1Cu: goto label_7F381C1C;
    case 0x7F381C20u: goto label_7F381C20;
    case 0x7F381C24u: goto label_7F381C24;
    case 0x7F381C28u: goto label_7F381C28;
    case 0x7F381C2Cu: goto label_7F381C2C;
    case 0x7F381C30u: goto label_7F381C30;
    case 0x7F381C34u: goto label_7F381C34;
    case 0x7F381C38u: goto label_7F381C38;
    case 0x7F381C3Cu: goto label_7F381C3C;
    case 0x7F381C40u: goto label_7F381C40;
    case 0x7F381C44u: goto label_7F381C44;
    case 0x7F381C48u: goto label_7F381C48;
    case 0x7F381C4Cu: goto label_7F381C4C;
    case 0x7F381C50u: goto label_7F381C50;
    case 0x7F381C54u: goto label_7F381C54;
    case 0x7F381C58u: goto label_7F381C58;
    case 0x7F381C5Cu: goto label_7F381C5C;
    case 0x7F381C60u: goto label_7F381C60;
    case 0x7F381C64u: goto label_7F381C64;
    case 0x7F381C68u: goto label_7F381C68;
    case 0x7F381C6Cu: goto label_7F381C6C;
    case 0x7F381C70u: goto label_7F381C70;
    case 0x7F381C74u: goto label_7F381C74;
    case 0x7F381C78u: goto label_7F381C78;
    case 0x7F381C7Cu: goto label_7F381C7C;
    case 0x7F381C80u: goto label_7F381C80;
    case 0x7F381C84u: goto label_7F381C84;
    case 0x7F381C88u: goto label_7F381C88;
    case 0x7F381C8Cu: goto label_7F381C8C;
    case 0x7F381C90u: goto label_7F381C90;
    case 0x7F381C94u: goto label_7F381C94;
    case 0x7F381C98u: goto label_7F381C98;
    case 0x7F381C9Cu: goto label_7F381C9C;
    case 0x7F381CA0u: goto label_7F381CA0;
    case 0x7F381CA4u: goto label_7F381CA4;
    case 0x7F381CA8u: goto label_7F381CA8;
    case 0x7F381CACu: goto label_7F381CAC;
    case 0x7F381CB0u: goto label_7F381CB0;
    case 0x7F381CB4u: goto label_7F381CB4;
    case 0x7F381CB8u: goto label_7F381CB8;
    case 0x7F381CBCu: goto label_7F381CBC;
    case 0x7F381CC0u: goto label_7F381CC0;
    case 0x7F381CC4u: goto label_7F381CC4;
    case 0x7F381CC8u: goto label_7F381CC8;
    case 0x7F381CCCu: goto label_7F381CCC;
    case 0x7F381CD0u: goto label_7F381CD0;
    case 0x7F381CD4u: goto label_7F381CD4;
    case 0x7F381CD8u: goto label_7F381CD8;
    case 0x7F381CDCu: goto label_7F381CDC;
    case 0x7F381CE0u: goto label_7F381CE0;
    case 0x7F381CE4u: goto label_7F381CE4;
    case 0x7F381CE8u: goto label_7F381CE8;
    case 0x7F381CECu: goto label_7F381CEC;
    case 0x7F381CF0u: goto label_7F381CF0;
    case 0x7F381CF4u: goto label_7F381CF4;
    case 0x7F381CF8u: goto label_7F381CF8;
    case 0x7F381CFCu: goto label_7F381CFC;
    case 0x7F381D00u: goto label_7F381D00;
    case 0x7F381D04u: goto label_7F381D04;
    case 0x7F381D08u: goto label_7F381D08;
    case 0x7F381D0Cu: goto label_7F381D0C;
    case 0x7F381D10u: goto label_7F381D10;
    case 0x7F381D14u: goto label_7F381D14;
    case 0x7F381D18u: goto label_7F381D18;
    case 0x7F381D1Cu: goto label_7F381D1C;
    case 0x7F381D20u: goto label_7F381D20;
    case 0x7F381D24u: goto label_7F381D24;
    case 0x7F381D28u: goto label_7F381D28;
    case 0x7F381D2Cu: goto label_7F381D2C;
    case 0x7F381D30u: goto label_7F381D30;
    case 0x7F381D34u: goto label_7F381D34;
    case 0x7F381D38u: goto label_7F381D38;
    case 0x7F381D3Cu: goto label_7F381D3C;
    case 0x7F381D40u: goto label_7F381D40;
    case 0x7F381D44u: goto label_7F381D44;
    case 0x7F381D48u: goto label_7F381D48;
    case 0x7F381D4Cu: goto label_7F381D4C;
    case 0x7F381D50u: goto label_7F381D50;
    case 0x7F381D54u: goto label_7F381D54;
    case 0x7F381D58u: goto label_7F381D58;
    case 0x7F381D5Cu: goto label_7F381D5C;
    case 0x7F381D60u: goto label_7F381D60;
    case 0x7F381D64u: goto label_7F381D64;
    case 0x7F381D68u: goto label_7F381D68;
    case 0x7F381D6Cu: goto label_7F381D6C;
    case 0x7F381D70u: goto label_7F381D70;
    case 0x7F381D74u: goto label_7F381D74;
    case 0x7F381D78u: goto label_7F381D78;
    case 0x7F381D7Cu: goto label_7F381D7C;
    case 0x7F381D80u: goto label_7F381D80;
    case 0x7F381D84u: goto label_7F381D84;
    case 0x7F381D88u: goto label_7F381D88;
    case 0x7F381D8Cu: goto label_7F381D8C;
    case 0x7F381D90u: goto label_7F381D90;
    case 0x7F381D94u: goto label_7F381D94;
    case 0x7F381D98u: goto label_7F381D98;
    case 0x7F381D9Cu: goto label_7F381D9C;
    case 0x7F381DA0u: goto label_7F381DA0;
    case 0x7F381DA4u: goto label_7F381DA4;
    case 0x7F381DA8u: goto label_7F381DA8;
    case 0x7F381DACu: goto label_7F381DAC;
    case 0x7F381DB0u: goto label_7F381DB0;
    case 0x7F381DB4u: goto label_7F381DB4;
    case 0x7F381DB8u: goto label_7F381DB8;
    case 0x7F381DBCu: goto label_7F381DBC;
    case 0x7F381DC0u: goto label_7F381DC0;
    case 0x7F381DC4u: goto label_7F381DC4;
    case 0x7F381DC8u: goto label_7F381DC8;
    case 0x7F381DCCu: goto label_7F381DCC;
    case 0x7F381DD0u: goto label_7F381DD0;
    case 0x7F381DD4u: goto label_7F381DD4;
    case 0x7F381DD8u: goto label_7F381DD8;
    case 0x7F381DDCu: goto label_7F381DDC;
    case 0x7F381DE0u: goto label_7F381DE0;
    case 0x7F381DE4u: goto label_7F381DE4;
    case 0x7F381DE8u: goto label_7F381DE8;
    case 0x7F381DECu: goto label_7F381DEC;
    case 0x7F381DF0u: goto label_7F381DF0;
    case 0x7F381DF4u: goto label_7F381DF4;
    case 0x7F381DF8u: goto label_7F381DF8;
    case 0x7F381DFCu: goto label_7F381DFC;
    case 0x7F381E00u: goto label_7F381E00;
    case 0x7F381E04u: goto label_7F381E04;
    case 0x7F381E08u: goto label_7F381E08;
    case 0x7F381E0Cu: goto label_7F381E0C;
    case 0x7F381E10u: goto label_7F381E10;
    case 0x7F381E14u: goto label_7F381E14;
    case 0x7F381E18u: goto label_7F381E18;
    case 0x7F381E1Cu: goto label_7F381E1C;
    case 0x7F381E20u: goto label_7F381E20;
    case 0x7F381E24u: goto label_7F381E24;
    case 0x7F381E28u: goto label_7F381E28;
    case 0x7F381E2Cu: goto label_7F381E2C;
    case 0x7F381E30u: goto label_7F381E30;
    case 0x7F381E34u: goto label_7F381E34;
    case 0x7F381E38u: goto label_7F381E38;
    case 0x7F381E3Cu: goto label_7F381E3C;
    case 0x7F381E40u: goto label_7F381E40;
    case 0x7F381E44u: goto label_7F381E44;
    case 0x7F381E48u: goto label_7F381E48;
    case 0x7F381E4Cu: goto label_7F381E4C;
    case 0x7F381E50u: goto label_7F381E50;
    case 0x7F381E54u: goto label_7F381E54;
    case 0x7F381E58u: goto label_7F381E58;
    case 0x7F381E5Cu: goto label_7F381E5C;
    case 0x7F381E60u: goto label_7F381E60;
    case 0x7F381E64u: goto label_7F381E64;
    case 0x7F381E68u: goto label_7F381E68;
    case 0x7F381E6Cu: goto label_7F381E6C;
    case 0x7F381E70u: goto label_7F381E70;
    case 0x7F381E74u: goto label_7F381E74;
    case 0x7F381E78u: goto label_7F381E78;
    case 0x7F381E7Cu: goto label_7F381E7C;
    case 0x7F381E80u: goto label_7F381E80;
    case 0x7F381E84u: goto label_7F381E84;
    case 0x7F381E88u: goto label_7F381E88;
    case 0x7F381E8Cu: goto label_7F381E8C;
    case 0x7F381E90u: goto label_7F381E90;
    case 0x7F381E94u: goto label_7F381E94;
    case 0x7F381E98u: goto label_7F381E98;
    case 0x7F381E9Cu: goto label_7F381E9C;
    case 0x7F381EA0u: goto label_7F381EA0;
    case 0x7F381EA4u: goto label_7F381EA4;
    case 0x7F381EA8u: goto label_7F381EA8;
    case 0x7F381EACu: goto label_7F381EAC;
    case 0x7F381EB0u: goto label_7F381EB0;
    case 0x7F381EB4u: goto label_7F381EB4;
    case 0x7F381EB8u: goto label_7F381EB8;
    case 0x7F381EBCu: goto label_7F381EBC;
    case 0x7F381EC0u: goto label_7F381EC0;
    case 0x7F381EC4u: goto label_7F381EC4;
    case 0x7F381EC8u: goto label_7F381EC8;
    case 0x7F381ECCu: goto label_7F381ECC;
    case 0x7F381ED0u: goto label_7F381ED0;
    case 0x7F381ED4u: goto label_7F381ED4;
    case 0x7F381ED8u: goto label_7F381ED8;
    case 0x7F381EDCu: goto label_7F381EDC;
    case 0x7F381EE0u: goto label_7F381EE0;
    case 0x7F381EE4u: goto label_7F381EE4;
    case 0x7F381EE8u: goto label_7F381EE8;
    case 0x7F381EECu: goto label_7F381EEC;
    case 0x7F381EF0u: goto label_7F381EF0;
    case 0x7F381EF4u: goto label_7F381EF4;
    case 0x7F381EF8u: goto label_7F381EF8;
    case 0x7F381EFCu: goto label_7F381EFC;
    case 0x7F381F00u: goto label_7F381F00;
    case 0x7F381F04u: goto label_7F381F04;
    case 0x7F381F08u: goto label_7F381F08;
    case 0x7F381F0Cu: goto label_7F381F0C;
    case 0x7F381F10u: goto label_7F381F10;
    case 0x7F381F14u: goto label_7F381F14;
    case 0x7F381F18u: goto label_7F381F18;
    case 0x7F381F1Cu: goto label_7F381F1C;
    case 0x7F381F20u: goto label_7F381F20;
    case 0x7F381F24u: goto label_7F381F24;
    case 0x7F381F28u: goto label_7F381F28;
    case 0x7F381F2Cu: goto label_7F381F2C;
    case 0x7F381F30u: goto label_7F381F30;
    case 0x7F381F34u: goto label_7F381F34;
    case 0x7F381F38u: goto label_7F381F38;
    case 0x7F381F3Cu: goto label_7F381F3C;
    case 0x7F381F40u: goto label_7F381F40;
    case 0x7F381F44u: goto label_7F381F44;
    case 0x7F381F48u: goto label_7F381F48;
    case 0x7F381F4Cu: goto label_7F381F4C;
    case 0x7F381F50u: goto label_7F381F50;
    case 0x7F381F54u: goto label_7F381F54;
    case 0x7F381F58u: goto label_7F381F58;
    case 0x7F381F5Cu: goto label_7F381F5C;
    case 0x7F381F60u: goto label_7F381F60;
    case 0x7F381F64u: goto label_7F381F64;
    case 0x7F381F68u: goto label_7F381F68;
    case 0x7F381F6Cu: goto label_7F381F6C;
    case 0x7F381F70u: goto label_7F381F70;
    case 0x7F381F74u: goto label_7F381F74;
    case 0x7F381F78u: goto label_7F381F78;
    case 0x7F381F7Cu: goto label_7F381F7C;
    case 0x7F381F80u: goto label_7F381F80;
    case 0x7F381F84u: goto label_7F381F84;
    case 0x7F381F88u: goto label_7F381F88;
    case 0x7F381F8Cu: goto label_7F381F8C;
    case 0x7F381F90u: goto label_7F381F90;
    case 0x7F381F94u: goto label_7F381F94;
    case 0x7F381F98u: goto label_7F381F98;
    case 0x7F381F9Cu: goto label_7F381F9C;
    case 0x7F381FA0u: goto label_7F381FA0;
    case 0x7F381FA4u: goto label_7F381FA4;
    case 0x7F381FA8u: goto label_7F381FA8;
    case 0x7F381FACu: goto label_7F381FAC;
    case 0x7F381FB0u: goto label_7F381FB0;
    case 0x7F381FB4u: goto label_7F381FB4;
    case 0x7F381FB8u: goto label_7F381FB8;
    case 0x7F381FBCu: goto label_7F381FBC;
    case 0x7F381FC0u: goto label_7F381FC0;
    case 0x7F381FC4u: goto label_7F381FC4;
    case 0x7F381FC8u: goto label_7F381FC8;
    case 0x7F381FCCu: goto label_7F381FCC;
    case 0x7F381FD0u: goto label_7F381FD0;
    case 0x7F381FD4u: goto label_7F381FD4;
    case 0x7F381FD8u: goto label_7F381FD8;
    case 0x7F381FDCu: goto label_7F381FDC;
    case 0x7F381FE0u: goto label_7F381FE0;
    case 0x7F381FE4u: goto label_7F381FE4;
    case 0x7F381FE8u: goto label_7F381FE8;
    case 0x7F381FECu: goto label_7F381FEC;
    case 0x7F381FF0u: goto label_7F381FF0;
    case 0x7F381FF4u: goto label_7F381FF4;
    case 0x7F381FF8u: goto label_7F381FF8;
    case 0x7F381FFCu: goto label_7F381FFC;
    case 0x7F382000u: goto label_7F382000;
    case 0x7F382004u: goto label_7F382004;
    case 0x7F382008u: goto label_7F382008;
    case 0x7F38200Cu: goto label_7F38200C;
    case 0x7F382010u: goto label_7F382010;
    case 0x7F382014u: goto label_7F382014;
    case 0x7F382018u: goto label_7F382018;
    case 0x7F38201Cu: goto label_7F38201C;
    case 0x7F382020u: goto label_7F382020;
    case 0x7F382024u: goto label_7F382024;
    case 0x7F382028u: goto label_7F382028;
    case 0x7F38202Cu: goto label_7F38202C;
    case 0x7F382030u: goto label_7F382030;
    case 0x7F382034u: goto label_7F382034;
    case 0x7F382038u: goto label_7F382038;
    case 0x7F38203Cu: goto label_7F38203C;
    case 0x7F382040u: goto label_7F382040;
    case 0x7F382044u: goto label_7F382044;
    case 0x7F382048u: goto label_7F382048;
    case 0x7F38204Cu: goto label_7F38204C;
    case 0x7F382050u: goto label_7F382050;
    case 0x7F382054u: goto label_7F382054;
    case 0x7F382058u: goto label_7F382058;
    case 0x7F38205Cu: goto label_7F38205C;
    case 0x7F382060u: goto label_7F382060;
    case 0x7F382064u: goto label_7F382064;
    case 0x7F382068u: goto label_7F382068;
    case 0x7F38206Cu: goto label_7F38206C;
    case 0x7F382070u: goto label_7F382070;
    case 0x7F382074u: goto label_7F382074;
    case 0x7F382078u: goto label_7F382078;
    case 0x7F38207Cu: goto label_7F38207C;
    case 0x7F382080u: goto label_7F382080;
    case 0x7F382084u: goto label_7F382084;
    case 0x7F382088u: goto label_7F382088;
    case 0x7F38208Cu: goto label_7F38208C;
    case 0x7F382090u: goto label_7F382090;
    case 0x7F382094u: goto label_7F382094;
    case 0x7F382098u: goto label_7F382098;
    case 0x7F38209Cu: goto label_7F38209C;
    case 0x7F3820A0u: goto label_7F3820A0;
    case 0x7F3820A4u: goto label_7F3820A4;
    case 0x7F3820A8u: goto label_7F3820A8;
    case 0x7F3820ACu: goto label_7F3820AC;
    case 0x7F3820B0u: goto label_7F3820B0;
    case 0x7F3820B4u: goto label_7F3820B4;
    case 0x7F3820B8u: goto label_7F3820B8;
    case 0x7F3820BCu: goto label_7F3820BC;
    case 0x7F3820C0u: goto label_7F3820C0;
    case 0x7F3820C4u: goto label_7F3820C4;
    case 0x7F3820C8u: goto label_7F3820C8;
    case 0x7F3820CCu: goto label_7F3820CC;
    case 0x7F3820D0u: goto label_7F3820D0;
    case 0x7F3820D4u: goto label_7F3820D4;
    case 0x7F3820D8u: goto label_7F3820D8;
    case 0x7F3820DCu: goto label_7F3820DC;
    case 0x7F3820E0u: goto label_7F3820E0;
    case 0x7F3820E4u: goto label_7F3820E4;
    case 0x7F3820E8u: goto label_7F3820E8;
    case 0x7F3820ECu: goto label_7F3820EC;
    case 0x7F3820F0u: goto label_7F3820F0;
    case 0x7F3820F4u: goto label_7F3820F4;
    case 0x7F3820F8u: goto label_7F3820F8;
    case 0x7F3820FCu: goto label_7F3820FC;
    case 0x7F382100u: goto label_7F382100;
    case 0x7F382104u: goto label_7F382104;
    case 0x7F382108u: goto label_7F382108;
    case 0x7F38210Cu: goto label_7F38210C;
    case 0x7F382110u: goto label_7F382110;
    case 0x7F382114u: goto label_7F382114;
    case 0x7F382118u: goto label_7F382118;
    case 0x7F38211Cu: goto label_7F38211C;
    case 0x7F382120u: goto label_7F382120;
    case 0x7F382124u: goto label_7F382124;
    case 0x7F382128u: goto label_7F382128;
    case 0x7F38212Cu: goto label_7F38212C;
    case 0x7F382130u: goto label_7F382130;
    case 0x7F382134u: goto label_7F382134;
    case 0x7F382138u: goto label_7F382138;
    case 0x7F38213Cu: goto label_7F38213C;
    case 0x7F382140u: goto label_7F382140;
    case 0x7F382144u: goto label_7F382144;
    case 0x7F382148u: goto label_7F382148;
    case 0x7F38214Cu: goto label_7F38214C;
    case 0x7F382150u: goto label_7F382150;
    case 0x7F382154u: goto label_7F382154;
    case 0x7F382158u: goto label_7F382158;
    case 0x7F38215Cu: goto label_7F38215C;
    case 0x7F382160u: goto label_7F382160;
    case 0x7F382164u: goto label_7F382164;
    case 0x7F382168u: goto label_7F382168;
    case 0x7F38216Cu: goto label_7F38216C;
    case 0x7F382170u: goto label_7F382170;
    case 0x7F382174u: goto label_7F382174;
    case 0x7F382178u: goto label_7F382178;
    case 0x7F38217Cu: goto label_7F38217C;
    case 0x7F382180u: goto label_7F382180;
    case 0x7F382184u: goto label_7F382184;
    case 0x7F382188u: goto label_7F382188;
    case 0x7F38218Cu: goto label_7F38218C;
    case 0x7F382190u: goto label_7F382190;
    case 0x7F382194u: goto label_7F382194;
    case 0x7F382198u: goto label_7F382198;
    case 0x7F38219Cu: goto label_7F38219C;
    case 0x7F3821A0u: goto label_7F3821A0;
    case 0x7F3821A4u: goto label_7F3821A4;
    case 0x7F3821A8u: goto label_7F3821A8;
    case 0x7F3821ACu: goto label_7F3821AC;
    case 0x7F3821B0u: goto label_7F3821B0;
    case 0x7F3821B4u: goto label_7F3821B4;
    case 0x7F3821B8u: goto label_7F3821B8;
    case 0x7F3821BCu: goto label_7F3821BC;
    case 0x7F3821C0u: goto label_7F3821C0;
    case 0x7F3821C4u: goto label_7F3821C4;
    case 0x7F3821C8u: goto label_7F3821C8;
    case 0x7F3821CCu: goto label_7F3821CC;
    case 0x7F3821D0u: goto label_7F3821D0;
    case 0x7F3821D4u: goto label_7F3821D4;
    case 0x7F3821D8u: goto label_7F3821D8;
    case 0x7F3821DCu: goto label_7F3821DC;
    case 0x7F3821E0u: goto label_7F3821E0;
    case 0x7F3821E4u: goto label_7F3821E4;
    case 0x7F3821E8u: goto label_7F3821E8;
    case 0x7F3821ECu: goto label_7F3821EC;
    case 0x7F3821F0u: goto label_7F3821F0;
    case 0x7F3821F4u: goto label_7F3821F4;
    case 0x7F3821F8u: goto label_7F3821F8;
    case 0x7F3821FCu: goto label_7F3821FC;
    case 0x7F382200u: goto label_7F382200;
    case 0x7F382204u: goto label_7F382204;
    case 0x7F382208u: goto label_7F382208;
    case 0x7F38220Cu: goto label_7F38220C;
    case 0x7F382210u: goto label_7F382210;
    case 0x7F382214u: goto label_7F382214;
    case 0x7F382218u: goto label_7F382218;
    case 0x7F38221Cu: goto label_7F38221C;
    case 0x7F382220u: goto label_7F382220;
    case 0x7F382224u: goto label_7F382224;
    case 0x7F382228u: goto label_7F382228;
    case 0x7F38222Cu: goto label_7F38222C;
    case 0x7F382230u: goto label_7F382230;
    case 0x7F382234u: goto label_7F382234;
    case 0x7F382238u: goto label_7F382238;
    case 0x7F38223Cu: goto label_7F38223C;
    case 0x7F382240u: goto label_7F382240;
    case 0x7F382244u: goto label_7F382244;
    case 0x7F382248u: goto label_7F382248;
    case 0x7F38224Cu: goto label_7F38224C;
    case 0x7F382250u: goto label_7F382250;
    case 0x7F382254u: goto label_7F382254;
    case 0x7F382258u: goto label_7F382258;
    case 0x7F38225Cu: goto label_7F38225C;
    case 0x7F382260u: goto label_7F382260;
    case 0x7F382264u: goto label_7F382264;
    case 0x7F382268u: goto label_7F382268;
    case 0x7F38226Cu: goto label_7F38226C;
    case 0x7F382270u: goto label_7F382270;
    case 0x7F382274u: goto label_7F382274;
    case 0x7F382278u: goto label_7F382278;
    case 0x7F38227Cu: goto label_7F38227C;
    case 0x7F382280u: goto label_7F382280;
    case 0x7F382284u: goto label_7F382284;
    case 0x7F382288u: goto label_7F382288;
    case 0x7F38228Cu: goto label_7F38228C;
    case 0x7F382290u: goto label_7F382290;
    case 0x7F382294u: goto label_7F382294;
    case 0x7F382298u: goto label_7F382298;
    case 0x7F38229Cu: goto label_7F38229C;
    case 0x7F3822A0u: goto label_7F3822A0;
    case 0x7F3822A4u: goto label_7F3822A4;
    case 0x7F3822A8u: goto label_7F3822A8;
    case 0x7F3822ACu: goto label_7F3822AC;
    case 0x7F3822B0u: goto label_7F3822B0;
    case 0x7F3822B4u: goto label_7F3822B4;
    case 0x7F3822B8u: goto label_7F3822B8;
    case 0x7F3822BCu: goto label_7F3822BC;
    case 0x7F3822C0u: goto label_7F3822C0;
    case 0x7F3822C4u: goto label_7F3822C4;
    case 0x7F3822C8u: goto label_7F3822C8;
    case 0x7F3822CCu: goto label_7F3822CC;
    case 0x7F3822D0u: goto label_7F3822D0;
    case 0x7F3822D4u: goto label_7F3822D4;
    case 0x7F3822D8u: goto label_7F3822D8;
    case 0x7F3822DCu: goto label_7F3822DC;
    case 0x7F3822E0u: goto label_7F3822E0;
    case 0x7F3822E4u: goto label_7F3822E4;
    case 0x7F3822E8u: goto label_7F3822E8;
    case 0x7F3822ECu: goto label_7F3822EC;
    case 0x7F3822F0u: goto label_7F3822F0;
    case 0x7F3822F4u: goto label_7F3822F4;
    case 0x7F3822F8u: goto label_7F3822F8;
    case 0x7F3822FCu: goto label_7F3822FC;
    case 0x7F382300u: goto label_7F382300;
    case 0x7F382304u: goto label_7F382304;
    case 0x7F382308u: goto label_7F382308;
    case 0x7F38230Cu: goto label_7F38230C;
    case 0x7F382310u: goto label_7F382310;
    case 0x7F382314u: goto label_7F382314;
    case 0x7F382318u: goto label_7F382318;
    case 0x7F38231Cu: goto label_7F38231C;
    case 0x7F382320u: goto label_7F382320;
    case 0x7F382324u: goto label_7F382324;
    case 0x7F382328u: goto label_7F382328;
    case 0x7F38232Cu: goto label_7F38232C;
    case 0x7F382330u: goto label_7F382330;
    case 0x7F382334u: goto label_7F382334;
    case 0x7F382338u: goto label_7F382338;
    case 0x7F38233Cu: goto label_7F38233C;
    case 0x7F382340u: goto label_7F382340;
    case 0x7F382344u: goto label_7F382344;
    case 0x7F382348u: goto label_7F382348;
    case 0x7F38234Cu: goto label_7F38234C;
    case 0x7F382350u: goto label_7F382350;
    case 0x7F382354u: goto label_7F382354;
    case 0x7F382358u: goto label_7F382358;
    case 0x7F38235Cu: goto label_7F38235C;
    case 0x7F382360u: goto label_7F382360;
    case 0x7F382364u: goto label_7F382364;
    case 0x7F382368u: goto label_7F382368;
    case 0x7F38236Cu: goto label_7F38236C;
    case 0x7F382370u: goto label_7F382370;
    case 0x7F382374u: goto label_7F382374;
    case 0x7F382378u: goto label_7F382378;
    case 0x7F38237Cu: goto label_7F38237C;
    case 0x7F382380u: goto label_7F382380;
    case 0x7F382384u: goto label_7F382384;
    case 0x7F382388u: goto label_7F382388;
    case 0x7F38238Cu: goto label_7F38238C;
    case 0x7F382390u: goto label_7F382390;
    case 0x7F382394u: goto label_7F382394;
    case 0x7F382398u: goto label_7F382398;
    case 0x7F38239Cu: goto label_7F38239C;
    case 0x7F3823A0u: goto label_7F3823A0;
    case 0x7F3823A4u: goto label_7F3823A4;
    case 0x7F3823A8u: goto label_7F3823A8;
    case 0x7F3823ACu: goto label_7F3823AC;
    case 0x7F3823B0u: goto label_7F3823B0;
    case 0x7F3823B4u: goto label_7F3823B4;
    case 0x7F3823B8u: goto label_7F3823B8;
    case 0x7F3823BCu: goto label_7F3823BC;
    case 0x7F3823C0u: goto label_7F3823C0;
    case 0x7F3823C4u: goto label_7F3823C4;
    case 0x7F3823C8u: goto label_7F3823C8;
    case 0x7F3823CCu: goto label_7F3823CC;
    case 0x7F3823D0u: goto label_7F3823D0;
    case 0x7F3823D4u: goto label_7F3823D4;
    case 0x7F3823D8u: goto label_7F3823D8;
    case 0x7F3823DCu: goto label_7F3823DC;
    case 0x7F3823E0u: goto label_7F3823E0;
    case 0x7F3823E4u: goto label_7F3823E4;
    case 0x7F3823E8u: goto label_7F3823E8;
    case 0x7F3823ECu: goto label_7F3823EC;
    case 0x7F3823F0u: goto label_7F3823F0;
    case 0x7F3823F4u: goto label_7F3823F4;
    case 0x7F3823F8u: goto label_7F3823F8;
    case 0x7F3823FCu: goto label_7F3823FC;
    case 0x7F382400u: goto label_7F382400;
    case 0x7F382404u: goto label_7F382404;
    case 0x7F382408u: goto label_7F382408;
    case 0x7F38240Cu: goto label_7F38240C;
    case 0x7F382410u: goto label_7F382410;
    case 0x7F382414u: goto label_7F382414;
    case 0x7F382418u: goto label_7F382418;
    case 0x7F38241Cu: goto label_7F38241C;
    case 0x7F382420u: goto label_7F382420;
    case 0x7F382424u: goto label_7F382424;
    case 0x7F382428u: goto label_7F382428;
    case 0x7F38242Cu: goto label_7F38242C;
    case 0x7F382430u: goto label_7F382430;
    case 0x7F382434u: goto label_7F382434;
    case 0x7F382438u: goto label_7F382438;
    case 0x7F38243Cu: goto label_7F38243C;
    case 0x7F382440u: goto label_7F382440;
    case 0x7F382444u: goto label_7F382444;
    case 0x7F382448u: goto label_7F382448;
    case 0x7F38244Cu: goto label_7F38244C;
    case 0x7F382450u: goto label_7F382450;
    case 0x7F382454u: goto label_7F382454;
    case 0x7F382458u: goto label_7F382458;
    case 0x7F38245Cu: goto label_7F38245C;
    case 0x7F382460u: goto label_7F382460;
    case 0x7F382464u: goto label_7F382464;
    case 0x7F382468u: goto label_7F382468;
    case 0x7F38246Cu: goto label_7F38246C;
    case 0x7F382470u: goto label_7F382470;
    case 0x7F382474u: goto label_7F382474;
    case 0x7F382478u: goto label_7F382478;
    case 0x7F38247Cu: goto label_7F38247C;
    case 0x7F382480u: goto label_7F382480;
    case 0x7F382484u: goto label_7F382484;
    case 0x7F382488u: goto label_7F382488;
    case 0x7F38248Cu: goto label_7F38248C;
    case 0x7F382490u: goto label_7F382490;
    case 0x7F382494u: goto label_7F382494;
    case 0x7F382498u: goto label_7F382498;
    case 0x7F38249Cu: goto label_7F38249C;
    case 0x7F3824A0u: goto label_7F3824A0;
    case 0x7F3824A4u: goto label_7F3824A4;
    case 0x7F3824A8u: goto label_7F3824A8;
    case 0x7F3824ACu: goto label_7F3824AC;
    case 0x7F3824B0u: goto label_7F3824B0;
    case 0x7F3824B4u: goto label_7F3824B4;
    case 0x7F3824B8u: goto label_7F3824B8;
    case 0x7F3824BCu: goto label_7F3824BC;
    case 0x7F3824C0u: goto label_7F3824C0;
    case 0x7F3824C4u: goto label_7F3824C4;
    case 0x7F3824C8u: goto label_7F3824C8;
    case 0x7F3824CCu: goto label_7F3824CC;
    case 0x7F3824D0u: goto label_7F3824D0;
    case 0x7F3824D4u: goto label_7F3824D4;
    case 0x7F3824D8u: goto label_7F3824D8;
    case 0x7F3824DCu: goto label_7F3824DC;
    case 0x7F3824E0u: goto label_7F3824E0;
    case 0x7F3824E4u: goto label_7F3824E4;
    case 0x7F3824E8u: goto label_7F3824E8;
    case 0x7F3824ECu: goto label_7F3824EC;
    case 0x7F3824F0u: goto label_7F3824F0;
    case 0x7F3824F4u: goto label_7F3824F4;
    case 0x7F3824F8u: goto label_7F3824F8;
    case 0x7F3824FCu: goto label_7F3824FC;
    case 0x7F382500u: goto label_7F382500;
    case 0x7F382504u: goto label_7F382504;
    case 0x7F382508u: goto label_7F382508;
    case 0x7F38250Cu: goto label_7F38250C;
    case 0x7F382510u: goto label_7F382510;
    case 0x7F382514u: goto label_7F382514;
    case 0x7F382518u: goto label_7F382518;
    case 0x7F38251Cu: goto label_7F38251C;
    case 0x7F382520u: goto label_7F382520;
    case 0x7F382524u: goto label_7F382524;
    case 0x7F382528u: goto label_7F382528;
    case 0x7F38252Cu: goto label_7F38252C;
    case 0x7F382530u: goto label_7F382530;
    case 0x7F382534u: goto label_7F382534;
    case 0x7F382538u: goto label_7F382538;
    case 0x7F38253Cu: goto label_7F38253C;
    case 0x7F382540u: goto label_7F382540;
    case 0x7F382544u: goto label_7F382544;
    case 0x7F382548u: goto label_7F382548;
    case 0x7F38254Cu: goto label_7F38254C;
    case 0x7F382550u: goto label_7F382550;
    case 0x7F382554u: goto label_7F382554;
    case 0x7F382558u: goto label_7F382558;
    case 0x7F38255Cu: goto label_7F38255C;
    case 0x7F382560u: goto label_7F382560;
    case 0x7F382564u: goto label_7F382564;
    case 0x7F382568u: goto label_7F382568;
    case 0x7F38256Cu: goto label_7F38256C;
    case 0x7F382570u: goto label_7F382570;
    case 0x7F382574u: goto label_7F382574;
    case 0x7F382578u: goto label_7F382578;
    case 0x7F38257Cu: goto label_7F38257C;
    case 0x7F382580u: goto label_7F382580;
    case 0x7F382584u: goto label_7F382584;
    case 0x7F382588u: goto label_7F382588;
    case 0x7F38258Cu: goto label_7F38258C;
    case 0x7F382590u: goto label_7F382590;
    case 0x7F382594u: goto label_7F382594;
    case 0x7F382598u: goto label_7F382598;
    case 0x7F38259Cu: goto label_7F38259C;
    case 0x7F3825A0u: goto label_7F3825A0;
    case 0x7F3825A4u: goto label_7F3825A4;
    case 0x7F3825A8u: goto label_7F3825A8;
    case 0x7F3825ACu: goto label_7F3825AC;
    case 0x7F3825B0u: goto label_7F3825B0;
    case 0x7F3825B4u: goto label_7F3825B4;
    case 0x7F3825B8u: goto label_7F3825B8;
    case 0x7F3825BCu: goto label_7F3825BC;
    case 0x7F3825C0u: goto label_7F3825C0;
    case 0x7F3825C4u: goto label_7F3825C4;
    case 0x7F3825C8u: goto label_7F3825C8;
    case 0x7F3825CCu: goto label_7F3825CC;
    case 0x7F3825D0u: goto label_7F3825D0;
    case 0x7F3825D4u: goto label_7F3825D4;
    case 0x7F3825D8u: goto label_7F3825D8;
    case 0x7F3825DCu: goto label_7F3825DC;
    case 0x7F3825E0u: goto label_7F3825E0;
    case 0x7F3825E4u: goto label_7F3825E4;
    case 0x7F3825E8u: goto label_7F3825E8;
    case 0x7F3825ECu: goto label_7F3825EC;
    case 0x7F3825F0u: goto label_7F3825F0;
    case 0x7F3825F4u: goto label_7F3825F4;
    case 0x7F3825F8u: goto label_7F3825F8;
    case 0x7F3825FCu: goto label_7F3825FC;
    case 0x7F382600u: goto label_7F382600;
    case 0x7F382604u: goto label_7F382604;
    case 0x7F382608u: goto label_7F382608;
    case 0x7F38260Cu: goto label_7F38260C;
    case 0x7F382610u: goto label_7F382610;
    case 0x7F382614u: goto label_7F382614;
    case 0x7F382618u: goto label_7F382618;
    case 0x7F38261Cu: goto label_7F38261C;
    case 0x7F382620u: goto label_7F382620;
    case 0x7F382624u: goto label_7F382624;
    case 0x7F382628u: goto label_7F382628;
    case 0x7F38262Cu: goto label_7F38262C;
    case 0x7F382630u: goto label_7F382630;
    case 0x7F382634u: goto label_7F382634;
    case 0x7F382638u: goto label_7F382638;
    case 0x7F38263Cu: goto label_7F38263C;
    case 0x7F382640u: goto label_7F382640;
    case 0x7F382644u: goto label_7F382644;
    case 0x7F382648u: goto label_7F382648;
    case 0x7F38264Cu: goto label_7F38264C;
    case 0x7F382650u: goto label_7F382650;
    case 0x7F382654u: goto label_7F382654;
    case 0x7F382658u: goto label_7F382658;
    case 0x7F38265Cu: goto label_7F38265C;
    case 0x7F382660u: goto label_7F382660;
    case 0x7F382664u: goto label_7F382664;
    case 0x7F382668u: goto label_7F382668;
    case 0x7F38266Cu: goto label_7F38266C;
    case 0x7F382670u: goto label_7F382670;
    case 0x7F382674u: goto label_7F382674;
    case 0x7F382678u: goto label_7F382678;
    case 0x7F38267Cu: goto label_7F38267C;
    case 0x7F382680u: goto label_7F382680;
    case 0x7F382684u: goto label_7F382684;
    case 0x7F382688u: goto label_7F382688;
    case 0x7F38268Cu: goto label_7F38268C;
    case 0x7F382690u: goto label_7F382690;
    case 0x7F382694u: goto label_7F382694;
    case 0x7F382698u: goto label_7F382698;
    case 0x7F38269Cu: goto label_7F38269C;
    case 0x7F3826A0u: goto label_7F3826A0;
    case 0x7F3826A4u: goto label_7F3826A4;
    case 0x7F3826A8u: goto label_7F3826A8;
    case 0x7F3826ACu: goto label_7F3826AC;
    case 0x7F3826B0u: goto label_7F3826B0;
    case 0x7F3826B4u: goto label_7F3826B4;
    case 0x7F3826B8u: goto label_7F3826B8;
    case 0x7F3826BCu: goto label_7F3826BC;
    case 0x7F3826C0u: goto label_7F3826C0;
    case 0x7F3826C4u: goto label_7F3826C4;
    case 0x7F3826C8u: goto label_7F3826C8;
    case 0x7F3826CCu: goto label_7F3826CC;
    case 0x7F3826D0u: goto label_7F3826D0;
    case 0x7F3826D4u: goto label_7F3826D4;
    case 0x7F3826D8u: goto label_7F3826D8;
    case 0x7F3826DCu: goto label_7F3826DC;
    case 0x7F3826E0u: goto label_7F3826E0;
    case 0x7F3826E4u: goto label_7F3826E4;
    case 0x7F3826E8u: goto label_7F3826E8;
    case 0x7F3826ECu: goto label_7F3826EC;
    case 0x7F3826F0u: goto label_7F3826F0;
    case 0x7F3826F4u: goto label_7F3826F4;
    case 0x7F3826F8u: goto label_7F3826F8;
    case 0x7F3826FCu: goto label_7F3826FC;
    case 0x7F382700u: goto label_7F382700;
    case 0x7F382704u: goto label_7F382704;
    case 0x7F382708u: goto label_7F382708;
    case 0x7F38270Cu: goto label_7F38270C;
    case 0x7F382710u: goto label_7F382710;
    case 0x7F382714u: goto label_7F382714;
    case 0x7F382718u: goto label_7F382718;
    case 0x7F38271Cu: goto label_7F38271C;
    case 0x7F382720u: goto label_7F382720;
    case 0x7F382724u: goto label_7F382724;
    case 0x7F382728u: goto label_7F382728;
    case 0x7F38272Cu: goto label_7F38272C;
    case 0x7F382730u: goto label_7F382730;
    case 0x7F382734u: goto label_7F382734;
    case 0x7F382738u: goto label_7F382738;
    case 0x7F38273Cu: goto label_7F38273C;
    case 0x7F382740u: goto label_7F382740;
    case 0x7F382744u: goto label_7F382744;
    case 0x7F382748u: goto label_7F382748;
    case 0x7F38274Cu: goto label_7F38274C;
    case 0x7F382750u: goto label_7F382750;
    case 0x7F382754u: goto label_7F382754;
    case 0x7F382758u: goto label_7F382758;
    case 0x7F38275Cu: goto label_7F38275C;
    case 0x7F382760u: goto label_7F382760;
    case 0x7F382764u: goto label_7F382764;
    case 0x7F382768u: goto label_7F382768;
    case 0x7F38276Cu: goto label_7F38276C;
    case 0x7F382770u: goto label_7F382770;
    case 0x7F382774u: goto label_7F382774;
    case 0x7F382778u: goto label_7F382778;
    case 0x7F38277Cu: goto label_7F38277C;
    case 0x7F382780u: goto label_7F382780;
    case 0x7F382784u: goto label_7F382784;
    case 0x7F382788u: goto label_7F382788;
    case 0x7F38278Cu: goto label_7F38278C;
    case 0x7F382790u: goto label_7F382790;
    case 0x7F382794u: goto label_7F382794;
    case 0x7F382798u: goto label_7F382798;
    case 0x7F38279Cu: goto label_7F38279C;
    case 0x7F3827A0u: goto label_7F3827A0;
    case 0x7F3827A4u: goto label_7F3827A4;
    case 0x7F3827A8u: goto label_7F3827A8;
    case 0x7F3827ACu: goto label_7F3827AC;
    case 0x7F3827B0u: goto label_7F3827B0;
    case 0x7F3827B4u: goto label_7F3827B4;
    case 0x7F3827B8u: goto label_7F3827B8;
    case 0x7F3827BCu: goto label_7F3827BC;
    case 0x7F3827C0u: goto label_7F3827C0;
    case 0x7F3827C4u: goto label_7F3827C4;
    case 0x7F3827C8u: goto label_7F3827C8;
    case 0x7F3827CCu: goto label_7F3827CC;
    case 0x7F3827D0u: goto label_7F3827D0;
    case 0x7F3827D4u: goto label_7F3827D4;
    case 0x7F3827D8u: goto label_7F3827D8;
    case 0x7F3827DCu: goto label_7F3827DC;
    case 0x7F3827E0u: goto label_7F3827E0;
    case 0x7F3827E4u: goto label_7F3827E4;
    case 0x7F3827E8u: goto label_7F3827E8;
    case 0x7F3827ECu: goto label_7F3827EC;
    case 0x7F3827F0u: goto label_7F3827F0;
    case 0x7F3827F4u: goto label_7F3827F4;
    case 0x7F3827F8u: goto label_7F3827F8;
    case 0x7F3827FCu: goto label_7F3827FC;
    case 0x7F382800u: goto label_7F382800;
    case 0x7F382804u: goto label_7F382804;
    case 0x7F382808u: goto label_7F382808;
    case 0x7F38280Cu: goto label_7F38280C;
    case 0x7F382810u: goto label_7F382810;
    case 0x7F382814u: goto label_7F382814;
    case 0x7F382818u: goto label_7F382818;
    case 0x7F38281Cu: goto label_7F38281C;
    case 0x7F382820u: goto label_7F382820;
    case 0x7F382824u: goto label_7F382824;
    case 0x7F382828u: goto label_7F382828;
    case 0x7F38282Cu: goto label_7F38282C;
    case 0x7F382830u: goto label_7F382830;
    case 0x7F382834u: goto label_7F382834;
    case 0x7F382838u: goto label_7F382838;
    case 0x7F38283Cu: goto label_7F38283C;
    case 0x7F382840u: goto label_7F382840;
    case 0x7F382844u: goto label_7F382844;
    case 0x7F382848u: goto label_7F382848;
    case 0x7F38284Cu: goto label_7F38284C;
    case 0x7F382850u: goto label_7F382850;
    case 0x7F382854u: goto label_7F382854;
    case 0x7F382858u: goto label_7F382858;
    case 0x7F38285Cu: goto label_7F38285C;
    case 0x7F382860u: goto label_7F382860;
    case 0x7F382864u: goto label_7F382864;
    case 0x7F382868u: goto label_7F382868;
    case 0x7F38286Cu: goto label_7F38286C;
    case 0x7F382870u: goto label_7F382870;
    case 0x7F382874u: goto label_7F382874;
    case 0x7F382878u: goto label_7F382878;
    case 0x7F38287Cu: goto label_7F38287C;
    case 0x7F382880u: goto label_7F382880;
    case 0x7F382884u: goto label_7F382884;
    case 0x7F382888u: goto label_7F382888;
    case 0x7F38288Cu: goto label_7F38288C;
    case 0x7F382890u: goto label_7F382890;
    case 0x7F382894u: goto label_7F382894;
    case 0x7F382898u: goto label_7F382898;
    case 0x7F38289Cu: goto label_7F38289C;
    case 0x7F3828A0u: goto label_7F3828A0;
    case 0x7F3828A4u: goto label_7F3828A4;
    case 0x7F3828A8u: goto label_7F3828A8;
    case 0x7F3828ACu: goto label_7F3828AC;
    case 0x7F3828B0u: goto label_7F3828B0;
    case 0x7F3828B4u: goto label_7F3828B4;
    case 0x7F3828B8u: goto label_7F3828B8;
    case 0x7F3828BCu: goto label_7F3828BC;
    case 0x7F3828C0u: goto label_7F3828C0;
    case 0x7F3828C4u: goto label_7F3828C4;
    case 0x7F3828C8u: goto label_7F3828C8;
    case 0x7F3828CCu: goto label_7F3828CC;
    case 0x7F3828D0u: goto label_7F3828D0;
    case 0x7F3828D4u: goto label_7F3828D4;
    case 0x7F3828D8u: goto label_7F3828D8;
    case 0x7F3828DCu: goto label_7F3828DC;
    case 0x7F3828E0u: goto label_7F3828E0;
    case 0x7F3828E4u: goto label_7F3828E4;
    case 0x7F3828E8u: goto label_7F3828E8;
    case 0x7F3828ECu: goto label_7F3828EC;
    case 0x7F3828F0u: goto label_7F3828F0;
    case 0x7F3828F4u: goto label_7F3828F4;
    case 0x7F3828F8u: goto label_7F3828F8;
    case 0x7F3828FCu: goto label_7F3828FC;
    case 0x7F382900u: goto label_7F382900;
    case 0x7F382904u: goto label_7F382904;
    case 0x7F382908u: goto label_7F382908;
    case 0x7F38290Cu: goto label_7F38290C;
    case 0x7F382910u: goto label_7F382910;
    case 0x7F382914u: goto label_7F382914;
    case 0x7F382918u: goto label_7F382918;
    case 0x7F38291Cu: goto label_7F38291C;
    case 0x7F382920u: goto label_7F382920;
    case 0x7F382924u: goto label_7F382924;
    case 0x7F382928u: goto label_7F382928;
    case 0x7F38292Cu: goto label_7F38292C;
    case 0x7F382930u: goto label_7F382930;
    case 0x7F382934u: goto label_7F382934;
    case 0x7F382938u: goto label_7F382938;
    case 0x7F38293Cu: goto label_7F38293C;
    case 0x7F382940u: goto label_7F382940;
    case 0x7F382944u: goto label_7F382944;
    case 0x7F382948u: goto label_7F382948;
    case 0x7F38294Cu: goto label_7F38294C;
    case 0x7F382950u: goto label_7F382950;
    case 0x7F382954u: goto label_7F382954;
    case 0x7F382958u: goto label_7F382958;
    case 0x7F38295Cu: goto label_7F38295C;
    case 0x7F382960u: goto label_7F382960;
    case 0x7F382964u: goto label_7F382964;
    case 0x7F382968u: goto label_7F382968;
    case 0x7F38296Cu: goto label_7F38296C;
    case 0x7F382970u: goto label_7F382970;
    case 0x7F382974u: goto label_7F382974;
    case 0x7F382978u: goto label_7F382978;
    case 0x7F38297Cu: goto label_7F38297C;
    case 0x7F382980u: goto label_7F382980;
    case 0x7F382984u: goto label_7F382984;
    case 0x7F382988u: goto label_7F382988;
    case 0x7F38298Cu: goto label_7F38298C;
    case 0x7F382990u: goto label_7F382990;
    case 0x7F382994u: goto label_7F382994;
    case 0x7F382998u: goto label_7F382998;
    case 0x7F38299Cu: goto label_7F38299C;
    case 0x7F3829A0u: goto label_7F3829A0;
    case 0x7F3829A4u: goto label_7F3829A4;
    case 0x7F3829A8u: goto label_7F3829A8;
    case 0x7F3829ACu: goto label_7F3829AC;
    case 0x7F3829B0u: goto label_7F3829B0;
    case 0x7F3829B4u: goto label_7F3829B4;
    case 0x7F3829B8u: goto label_7F3829B8;
    case 0x7F3829BCu: goto label_7F3829BC;
    case 0x7F3829C0u: goto label_7F3829C0;
    case 0x7F3829C4u: goto label_7F3829C4;
    case 0x7F3829C8u: goto label_7F3829C8;
    case 0x7F3829CCu: goto label_7F3829CC;
    case 0x7F3829D0u: goto label_7F3829D0;
    case 0x7F3829D4u: goto label_7F3829D4;
    case 0x7F3829D8u: goto label_7F3829D8;
    case 0x7F3829DCu: goto label_7F3829DC;
    case 0x7F3829E0u: goto label_7F3829E0;
    case 0x7F3829E4u: goto label_7F3829E4;
    case 0x7F3829E8u: goto label_7F3829E8;
    case 0x7F3829ECu: goto label_7F3829EC;
    case 0x7F3829F0u: goto label_7F3829F0;
    case 0x7F3829F4u: goto label_7F3829F4;
    case 0x7F3829F8u: goto label_7F3829F8;
    case 0x7F3829FCu: goto label_7F3829FC;
    case 0x7F382A00u: goto label_7F382A00;
    case 0x7F382A04u: goto label_7F382A04;
    case 0x7F382A08u: goto label_7F382A08;
    case 0x7F382A0Cu: goto label_7F382A0C;
    case 0x7F382A10u: goto label_7F382A10;
    case 0x7F382A14u: goto label_7F382A14;
    case 0x7F382A18u: goto label_7F382A18;
    case 0x7F382A1Cu: goto label_7F382A1C;
    case 0x7F382A20u: goto label_7F382A20;
    case 0x7F382A24u: goto label_7F382A24;
    case 0x7F382A28u: goto label_7F382A28;
    case 0x7F382A2Cu: goto label_7F382A2C;
    case 0x7F382A30u: goto label_7F382A30;
    case 0x7F382A34u: goto label_7F382A34;
    case 0x7F382A38u: goto label_7F382A38;
    case 0x7F382A3Cu: goto label_7F382A3C;
    case 0x7F382A40u: goto label_7F382A40;
    case 0x7F382A44u: goto label_7F382A44;
    case 0x7F382A48u: goto label_7F382A48;
    case 0x7F382A4Cu: goto label_7F382A4C;
    case 0x7F382A50u: goto label_7F382A50;
    case 0x7F382A54u: goto label_7F382A54;
    case 0x7F382A58u: goto label_7F382A58;
    case 0x7F382A5Cu: goto label_7F382A5C;
    case 0x7F382A60u: goto label_7F382A60;
    case 0x7F382A64u: goto label_7F382A64;
    case 0x7F382A68u: goto label_7F382A68;
    case 0x7F382A6Cu: goto label_7F382A6C;
    case 0x7F382A70u: goto label_7F382A70;
    case 0x7F382A74u: goto label_7F382A74;
    case 0x7F382A78u: goto label_7F382A78;
    case 0x7F382A7Cu: goto label_7F382A7C;
    case 0x7F382A80u: goto label_7F382A80;
    case 0x7F382A84u: goto label_7F382A84;
    case 0x7F382A88u: goto label_7F382A88;
    case 0x7F382A8Cu: goto label_7F382A8C;
    case 0x7F382A90u: goto label_7F382A90;
    case 0x7F382A94u: goto label_7F382A94;
    case 0x7F382A98u: goto label_7F382A98;
    case 0x7F382A9Cu: goto label_7F382A9C;
    case 0x7F382AA0u: goto label_7F382AA0;
    case 0x7F382AA4u: goto label_7F382AA4;
    case 0x7F382AA8u: goto label_7F382AA8;
    case 0x7F382AACu: goto label_7F382AAC;
    case 0x7F382AB0u: goto label_7F382AB0;
    case 0x7F382AB4u: goto label_7F382AB4;
    case 0x7F382AB8u: goto label_7F382AB8;
    case 0x7F382ABCu: goto label_7F382ABC;
    case 0x7F382AC0u: goto label_7F382AC0;
    case 0x7F382AC4u: goto label_7F382AC4;
    case 0x7F382AC8u: goto label_7F382AC8;
    case 0x7F382ACCu: goto label_7F382ACC;
    case 0x7F382AD0u: goto label_7F382AD0;
    case 0x7F382AD4u: goto label_7F382AD4;
    case 0x7F382AD8u: goto label_7F382AD8;
    case 0x7F382ADCu: goto label_7F382ADC;
    case 0x7F382AE0u: goto label_7F382AE0;
    case 0x7F382AE4u: goto label_7F382AE4;
    case 0x7F382AE8u: goto label_7F382AE8;
    case 0x7F382AECu: goto label_7F382AEC;
    case 0x7F382AF0u: goto label_7F382AF0;
    case 0x7F382AF4u: goto label_7F382AF4;
    case 0x7F382AF8u: goto label_7F382AF8;
    case 0x7F382AFCu: goto label_7F382AFC;
    case 0x7F382B00u: goto label_7F382B00;
    case 0x7F382B04u: goto label_7F382B04;
    case 0x7F382B08u: goto label_7F382B08;
    case 0x7F382B0Cu: goto label_7F382B0C;
    case 0x7F382B10u: goto label_7F382B10;
    case 0x7F382B14u: goto label_7F382B14;
    case 0x7F382B18u: goto label_7F382B18;
    case 0x7F382B1Cu: goto label_7F382B1C;
    case 0x7F382B20u: goto label_7F382B20;
    case 0x7F382B24u: goto label_7F382B24;
    case 0x7F382B28u: goto label_7F382B28;
    case 0x7F382B2Cu: goto label_7F382B2C;
    case 0x7F382B30u: goto label_7F382B30;
    case 0x7F382B34u: goto label_7F382B34;
    case 0x7F382B38u: goto label_7F382B38;
    case 0x7F382B3Cu: goto label_7F382B3C;
    case 0x7F382B40u: goto label_7F382B40;
    case 0x7F382B44u: goto label_7F382B44;
    case 0x7F382B48u: goto label_7F382B48;
    case 0x7F382B4Cu: goto label_7F382B4C;
    case 0x7F382B50u: goto label_7F382B50;
    case 0x7F382B54u: goto label_7F382B54;
    case 0x7F382B58u: goto label_7F382B58;
    case 0x7F382B5Cu: goto label_7F382B5C;
    case 0x7F382B60u: goto label_7F382B60;
    case 0x7F382B64u: goto label_7F382B64;
    case 0x7F382B68u: goto label_7F382B68;
    case 0x7F382B6Cu: goto label_7F382B6C;
    case 0x7F382B70u: goto label_7F382B70;
    case 0x7F382B74u: goto label_7F382B74;
    case 0x7F382B78u: goto label_7F382B78;
    case 0x7F382B7Cu: goto label_7F382B7C;
    case 0x7F382B80u: goto label_7F382B80;
    case 0x7F382B84u: goto label_7F382B84;
    case 0x7F382B88u: goto label_7F382B88;
    case 0x7F382B8Cu: goto label_7F382B8C;
    case 0x7F382B90u: goto label_7F382B90;
    case 0x7F382B94u: goto label_7F382B94;
    case 0x7F382B98u: goto label_7F382B98;
    case 0x7F382B9Cu: goto label_7F382B9C;
    case 0x7F382BA0u: goto label_7F382BA0;
    case 0x7F382BA4u: goto label_7F382BA4;
    case 0x7F382BA8u: goto label_7F382BA8;
    case 0x7F382BACu: goto label_7F382BAC;
    case 0x7F382BB0u: goto label_7F382BB0;
    case 0x7F382BB4u: goto label_7F382BB4;
    case 0x7F382BB8u: goto label_7F382BB8;
    case 0x7F382BBCu: goto label_7F382BBC;
    case 0x7F382BC0u: goto label_7F382BC0;
    case 0x7F382BC4u: goto label_7F382BC4;
    case 0x7F382BC8u: goto label_7F382BC8;
    case 0x7F382BCCu: goto label_7F382BCC;
    case 0x7F382BD0u: goto label_7F382BD0;
    case 0x7F382BD4u: goto label_7F382BD4;
    case 0x7F382BD8u: goto label_7F382BD8;
    case 0x7F382BDCu: goto label_7F382BDC;
    case 0x7F382BE0u: goto label_7F382BE0;
    case 0x7F382BE4u: goto label_7F382BE4;
    case 0x7F382BE8u: goto label_7F382BE8;
    case 0x7F382BECu: goto label_7F382BEC;
    case 0x7F382BF0u: goto label_7F382BF0;
    case 0x7F382BF4u: goto label_7F382BF4;
    case 0x7F382BF8u: goto label_7F382BF8;
    case 0x7F382BFCu: goto label_7F382BFC;
    case 0x7F382C00u: goto label_7F382C00;
    case 0x7F382C04u: goto label_7F382C04;
    case 0x7F382C08u: goto label_7F382C08;
    case 0x7F382C0Cu: goto label_7F382C0C;
    case 0x7F382C10u: goto label_7F382C10;
    case 0x7F382C14u: goto label_7F382C14;
    case 0x7F382C18u: goto label_7F382C18;
    case 0x7F382C1Cu: goto label_7F382C1C;
    case 0x7F382C20u: goto label_7F382C20;
    case 0x7F382C24u: goto label_7F382C24;
    case 0x7F382C28u: goto label_7F382C28;
    case 0x7F382C2Cu: goto label_7F382C2C;
    case 0x7F382C30u: goto label_7F382C30;
    case 0x7F382C34u: goto label_7F382C34;
    case 0x7F382C38u: goto label_7F382C38;
    case 0x7F382C3Cu: goto label_7F382C3C;
    case 0x7F382C40u: goto label_7F382C40;
    case 0x7F382C44u: goto label_7F382C44;
    case 0x7F382C48u: goto label_7F382C48;
    case 0x7F382C4Cu: goto label_7F382C4C;
    case 0x7F382C50u: goto label_7F382C50;
    case 0x7F382C54u: goto label_7F382C54;
    case 0x7F382C58u: goto label_7F382C58;
    case 0x7F382C5Cu: goto label_7F382C5C;
    case 0x7F382C60u: goto label_7F382C60;
    case 0x7F382C64u: goto label_7F382C64;
    case 0x7F382C68u: goto label_7F382C68;
    case 0x7F382C6Cu: goto label_7F382C6C;
    case 0x7F382C70u: goto label_7F382C70;
    case 0x7F382C74u: goto label_7F382C74;
    case 0x7F382C78u: goto label_7F382C78;
    case 0x7F382C7Cu: goto label_7F382C7C;
    case 0x7F382C80u: goto label_7F382C80;
    case 0x7F382C84u: goto label_7F382C84;
    case 0x7F382C88u: goto label_7F382C88;
    case 0x7F382C8Cu: goto label_7F382C8C;
    case 0x7F382C90u: goto label_7F382C90;
    case 0x7F382C94u: goto label_7F382C94;
    case 0x7F382C98u: goto label_7F382C98;
    case 0x7F382C9Cu: goto label_7F382C9C;
    case 0x7F382CA0u: goto label_7F382CA0;
    case 0x7F382CA4u: goto label_7F382CA4;
    case 0x7F382CA8u: goto label_7F382CA8;
    case 0x7F382CACu: goto label_7F382CAC;
    case 0x7F382CB0u: goto label_7F382CB0;
    case 0x7F382CB4u: goto label_7F382CB4;
    case 0x7F382CB8u: goto label_7F382CB8;
    case 0x7F382CBCu: goto label_7F382CBC;
    case 0x7F382CC0u: goto label_7F382CC0;
    case 0x7F382CC4u: goto label_7F382CC4;
    case 0x7F382CC8u: goto label_7F382CC8;
    case 0x7F382CCCu: goto label_7F382CCC;
    case 0x7F382CD0u: goto label_7F382CD0;
    case 0x7F382CD4u: goto label_7F382CD4;
    case 0x7F382CD8u: goto label_7F382CD8;
    case 0x7F382CDCu: goto label_7F382CDC;
    case 0x7F382CE0u: goto label_7F382CE0;
    case 0x7F382CE4u: goto label_7F382CE4;
    case 0x7F382CE8u: goto label_7F382CE8;
    case 0x7F382CECu: goto label_7F382CEC;
    case 0x7F382CF0u: goto label_7F382CF0;
    case 0x7F382CF4u: goto label_7F382CF4;
    case 0x7F382CF8u: goto label_7F382CF8;
    case 0x7F382CFCu: goto label_7F382CFC;
    case 0x7F382D00u: goto label_7F382D00;
    case 0x7F382D04u: goto label_7F382D04;
    case 0x7F382D08u: goto label_7F382D08;
    case 0x7F382D0Cu: goto label_7F382D0C;
    case 0x7F382D10u: goto label_7F382D10;
    case 0x7F382D14u: goto label_7F382D14;
    case 0x7F382D18u: goto label_7F382D18;
    case 0x7F382D1Cu: goto label_7F382D1C;
    case 0x7F382D20u: goto label_7F382D20;
    case 0x7F382D24u: goto label_7F382D24;
    case 0x7F382D28u: goto label_7F382D28;
    case 0x7F382D2Cu: goto label_7F382D2C;
    case 0x7F382D30u: goto label_7F382D30;
    case 0x7F382D34u: goto label_7F382D34;
    case 0x7F382D38u: goto label_7F382D38;
    case 0x7F382D3Cu: goto label_7F382D3C;
    case 0x7F382D40u: goto label_7F382D40;
    case 0x7F382D44u: goto label_7F382D44;
    case 0x7F382D48u: goto label_7F382D48;
    case 0x7F382D4Cu: goto label_7F382D4C;
    case 0x7F382D50u: goto label_7F382D50;
    case 0x7F382D54u: goto label_7F382D54;
    case 0x7F382D58u: goto label_7F382D58;
    case 0x7F382D5Cu: goto label_7F382D5C;
    case 0x7F382D60u: goto label_7F382D60;
    case 0x7F382D64u: goto label_7F382D64;
    case 0x7F382D68u: goto label_7F382D68;
    case 0x7F382D6Cu: goto label_7F382D6C;
    case 0x7F382D70u: goto label_7F382D70;
    case 0x7F382D74u: goto label_7F382D74;
    case 0x7F382D78u: goto label_7F382D78;
    case 0x7F382D7Cu: goto label_7F382D7C;
    case 0x7F382D80u: goto label_7F382D80;
    case 0x7F382D84u: goto label_7F382D84;
    case 0x7F382D88u: goto label_7F382D88;
    case 0x7F382D8Cu: goto label_7F382D8C;
    case 0x7F382D90u: goto label_7F382D90;
    case 0x7F382D94u: goto label_7F382D94;
    case 0x7F382D98u: goto label_7F382D98;
    case 0x7F382D9Cu: goto label_7F382D9C;
    case 0x7F382DA0u: goto label_7F382DA0;
    case 0x7F382DA4u: goto label_7F382DA4;
    case 0x7F382DA8u: goto label_7F382DA8;
    case 0x7F382DACu: goto label_7F382DAC;
    case 0x7F382DB0u: goto label_7F382DB0;
    case 0x7F382DB4u: goto label_7F382DB4;
    case 0x7F382DB8u: goto label_7F382DB8;
    case 0x7F382DBCu: goto label_7F382DBC;
    case 0x7F382DC0u: goto label_7F382DC0;
    case 0x7F382DC4u: goto label_7F382DC4;
    case 0x7F382DC8u: goto label_7F382DC8;
    case 0x7F382DCCu: goto label_7F382DCC;
    case 0x7F382DD0u: goto label_7F382DD0;
    case 0x7F382DD4u: goto label_7F382DD4;
    case 0x7F382DD8u: goto label_7F382DD8;
    case 0x7F382DDCu: goto label_7F382DDC;
    case 0x7F382DE0u: goto label_7F382DE0;
    case 0x7F382DE4u: goto label_7F382DE4;
    case 0x7F382DE8u: goto label_7F382DE8;
    case 0x7F382DECu: goto label_7F382DEC;
    case 0x7F382DF0u: goto label_7F382DF0;
    case 0x7F382DF4u: goto label_7F382DF4;
    case 0x7F382DF8u: goto label_7F382DF8;
    case 0x7F382DFCu: goto label_7F382DFC;
    case 0x7F382E00u: goto label_7F382E00;
    case 0x7F382E04u: goto label_7F382E04;
    case 0x7F382E08u: goto label_7F382E08;
    case 0x7F382E0Cu: goto label_7F382E0C;
    case 0x7F382E10u: goto label_7F382E10;
    case 0x7F382E14u: goto label_7F382E14;
    case 0x7F382E18u: goto label_7F382E18;
    case 0x7F382E1Cu: goto label_7F382E1C;
    case 0x7F382E20u: goto label_7F382E20;
    case 0x7F382E24u: goto label_7F382E24;
    case 0x7F382E28u: goto label_7F382E28;
    case 0x7F382E2Cu: goto label_7F382E2C;
    case 0x7F382E30u: goto label_7F382E30;
    case 0x7F382E34u: goto label_7F382E34;
    case 0x7F382E38u: goto label_7F382E38;
    case 0x7F382E3Cu: goto label_7F382E3C;
    case 0x7F382E40u: goto label_7F382E40;
    case 0x7F382E44u: goto label_7F382E44;
    case 0x7F382E48u: goto label_7F382E48;
    case 0x7F382E4Cu: goto label_7F382E4C;
    case 0x7F382E50u: goto label_7F382E50;
    case 0x7F382E54u: goto label_7F382E54;
    case 0x7F382E58u: goto label_7F382E58;
    case 0x7F382E5Cu: goto label_7F382E5C;
    case 0x7F382E60u: goto label_7F382E60;
    case 0x7F382E64u: goto label_7F382E64;
    case 0x7F382E68u: goto label_7F382E68;
    case 0x7F382E6Cu: goto label_7F382E6C;
    case 0x7F382E70u: goto label_7F382E70;
    case 0x7F382E74u: goto label_7F382E74;
    case 0x7F382E78u: goto label_7F382E78;
    case 0x7F382E7Cu: goto label_7F382E7C;
    case 0x7F382E80u: goto label_7F382E80;
    case 0x7F382E84u: goto label_7F382E84;
    case 0x7F382E88u: goto label_7F382E88;
    case 0x7F382E8Cu: goto label_7F382E8C;
    case 0x7F382E90u: goto label_7F382E90;
    case 0x7F382E94u: goto label_7F382E94;
    case 0x7F382E98u: goto label_7F382E98;
    case 0x7F382E9Cu: goto label_7F382E9C;
    case 0x7F382EA0u: goto label_7F382EA0;
    case 0x7F382EA4u: goto label_7F382EA4;
    case 0x7F382EA8u: goto label_7F382EA8;
    case 0x7F382EACu: goto label_7F382EAC;
    case 0x7F382EB0u: goto label_7F382EB0;
    case 0x7F382EB4u: goto label_7F382EB4;
    case 0x7F382EB8u: goto label_7F382EB8;
    case 0x7F382EBCu: goto label_7F382EBC;
    case 0x7F382EC0u: goto label_7F382EC0;
    case 0x7F382EC4u: goto label_7F382EC4;
    case 0x7F382EC8u: goto label_7F382EC8;
    case 0x7F382ECCu: goto label_7F382ECC;
    case 0x7F382ED0u: goto label_7F382ED0;
    case 0x7F382ED4u: goto label_7F382ED4;
    case 0x7F382ED8u: goto label_7F382ED8;
    case 0x7F382EDCu: goto label_7F382EDC;
    case 0x7F382EE0u: goto label_7F382EE0;
    case 0x7F382EE4u: goto label_7F382EE4;
    case 0x7F382EE8u: goto label_7F382EE8;
    case 0x7F382EECu: goto label_7F382EEC;
    case 0x7F382EF0u: goto label_7F382EF0;
    case 0x7F382EF4u: goto label_7F382EF4;
    case 0x7F382EF8u: goto label_7F382EF8;
    case 0x7F382EFCu: goto label_7F382EFC;
    case 0x7F382F00u: goto label_7F382F00;
    case 0x7F382F04u: goto label_7F382F04;
    case 0x7F382F08u: goto label_7F382F08;
    case 0x7F382F0Cu: goto label_7F382F0C;
    case 0x7F382F10u: goto label_7F382F10;
    case 0x7F382F14u: goto label_7F382F14;
    case 0x7F382F18u: goto label_7F382F18;
    case 0x7F382F1Cu: goto label_7F382F1C;
    case 0x7F382F20u: goto label_7F382F20;
    case 0x7F382F24u: goto label_7F382F24;
    case 0x7F382F28u: goto label_7F382F28;
    case 0x7F382F2Cu: goto label_7F382F2C;
    case 0x7F382F30u: goto label_7F382F30;
    case 0x7F382F34u: goto label_7F382F34;
    case 0x7F382F38u: goto label_7F382F38;
    case 0x7F382F3Cu: goto label_7F382F3C;
    case 0x7F382F40u: goto label_7F382F40;
    case 0x7F382F44u: goto label_7F382F44;
    case 0x7F382F48u: goto label_7F382F48;
    case 0x7F382F4Cu: goto label_7F382F4C;
    case 0x7F382F50u: goto label_7F382F50;
    case 0x7F382F54u: goto label_7F382F54;
    case 0x7F382F58u: goto label_7F382F58;
    case 0x7F382F5Cu: goto label_7F382F5C;
    case 0x7F382F60u: goto label_7F382F60;
    case 0x7F382F64u: goto label_7F382F64;
    case 0x7F382F68u: goto label_7F382F68;
    case 0x7F382F6Cu: goto label_7F382F6C;
    case 0x7F382F70u: goto label_7F382F70;
    case 0x7F382F74u: goto label_7F382F74;
    case 0x7F382F78u: goto label_7F382F78;
    case 0x7F382F7Cu: goto label_7F382F7C;
    case 0x7F382F80u: goto label_7F382F80;
    case 0x7F382F84u: goto label_7F382F84;
    case 0x7F382F88u: goto label_7F382F88;
    case 0x7F382F8Cu: goto label_7F382F8C;
    case 0x7F382F90u: goto label_7F382F90;
    case 0x7F382F94u: goto label_7F382F94;
    case 0x7F382F98u: goto label_7F382F98;
    case 0x7F382F9Cu: goto label_7F382F9C;
    case 0x7F382FA0u: goto label_7F382FA0;
    case 0x7F382FA4u: goto label_7F382FA4;
    case 0x7F382FA8u: goto label_7F382FA8;
    case 0x7F382FACu: goto label_7F382FAC;
    case 0x7F382FB0u: goto label_7F382FB0;
    case 0x7F382FB4u: goto label_7F382FB4;
    case 0x7F382FB8u: goto label_7F382FB8;
    case 0x7F382FBCu: goto label_7F382FBC;
    case 0x7F382FC0u: goto label_7F382FC0;
    case 0x7F382FC4u: goto label_7F382FC4;
    case 0x7F382FC8u: goto label_7F382FC8;
    case 0x7F382FCCu: goto label_7F382FCC;
    case 0x7F382FD0u: goto label_7F382FD0;
    case 0x7F382FD4u: goto label_7F382FD4;
    case 0x7F382FD8u: goto label_7F382FD8;
    case 0x7F382FDCu: goto label_7F382FDC;
    case 0x7F382FE0u: goto label_7F382FE0;
    case 0x7F382FE4u: goto label_7F382FE4;
    case 0x7F382FE8u: goto label_7F382FE8;
    case 0x7F382FECu: goto label_7F382FEC;
    case 0x7F382FF0u: goto label_7F382FF0;
    case 0x7F382FF4u: goto label_7F382FF4;
    case 0x7F382FF8u: goto label_7F382FF8;
    case 0x7F382FFCu: goto label_7F382FFC;
    case 0x7F383000u: goto label_7F383000;
    case 0x7F383004u: goto label_7F383004;
    case 0x7F383008u: goto label_7F383008;
    case 0x7F38300Cu: goto label_7F38300C;
    case 0x7F383010u: goto label_7F383010;
    case 0x7F383014u: goto label_7F383014;
    case 0x7F383018u: goto label_7F383018;
    case 0x7F38301Cu: goto label_7F38301C;
    case 0x7F383020u: goto label_7F383020;
    case 0x7F383024u: goto label_7F383024;
    case 0x7F383028u: goto label_7F383028;
    case 0x7F38302Cu: goto label_7F38302C;
    case 0x7F383030u: goto label_7F383030;
    case 0x7F383034u: goto label_7F383034;
    case 0x7F383038u: goto label_7F383038;
    case 0x7F38303Cu: goto label_7F38303C;
    case 0x7F383040u: goto label_7F383040;
    case 0x7F383044u: goto label_7F383044;
    case 0x7F383048u: goto label_7F383048;
    case 0x7F38304Cu: goto label_7F38304C;
    case 0x7F383050u: goto label_7F383050;
    case 0x7F383054u: goto label_7F383054;
    case 0x7F383058u: goto label_7F383058;
    case 0x7F38305Cu: goto label_7F38305C;
    case 0x7F383060u: goto label_7F383060;
    case 0x7F383064u: goto label_7F383064;
    case 0x7F383068u: goto label_7F383068;
    case 0x7F38306Cu: goto label_7F38306C;
    case 0x7F383070u: goto label_7F383070;
    case 0x7F383074u: goto label_7F383074;
    case 0x7F383078u: goto label_7F383078;
    case 0x7F38307Cu: goto label_7F38307C;
    case 0x7F383080u: goto label_7F383080;
    case 0x7F383084u: goto label_7F383084;
    case 0x7F383088u: goto label_7F383088;
    case 0x7F38308Cu: goto label_7F38308C;
    case 0x7F383090u: goto label_7F383090;
    case 0x7F383094u: goto label_7F383094;
    case 0x7F383098u: goto label_7F383098;
    case 0x7F38309Cu: goto label_7F38309C;
    case 0x7F3830A0u: goto label_7F3830A0;
    case 0x7F3830A4u: goto label_7F3830A4;
    case 0x7F3830A8u: goto label_7F3830A8;
    case 0x7F3830ACu: goto label_7F3830AC;
    case 0x7F3830B0u: goto label_7F3830B0;
    case 0x7F3830B4u: goto label_7F3830B4;
    case 0x7F3830B8u: goto label_7F3830B8;
    case 0x7F3830BCu: goto label_7F3830BC;
    case 0x7F3830C0u: goto label_7F3830C0;
    case 0x7F3830C4u: goto label_7F3830C4;
    case 0x7F3830C8u: goto label_7F3830C8;
    case 0x7F3830CCu: goto label_7F3830CC;
    case 0x7F3830D0u: goto label_7F3830D0;
    case 0x7F3830D4u: goto label_7F3830D4;
    case 0x7F3830D8u: goto label_7F3830D8;
    case 0x7F3830DCu: goto label_7F3830DC;
    case 0x7F3830E0u: goto label_7F3830E0;
    case 0x7F3830E4u: goto label_7F3830E4;
    case 0x7F3830E8u: goto label_7F3830E8;
    case 0x7F3830ECu: goto label_7F3830EC;
    case 0x7F3830F0u: goto label_7F3830F0;
    case 0x7F3830F4u: goto label_7F3830F4;
    case 0x7F3830F8u: goto label_7F3830F8;
    case 0x7F3830FCu: goto label_7F3830FC;
    case 0x7F383100u: goto label_7F383100;
    case 0x7F383104u: goto label_7F383104;
    case 0x7F383108u: goto label_7F383108;
    case 0x7F38310Cu: goto label_7F38310C;
    case 0x7F383110u: goto label_7F383110;
    case 0x7F383114u: goto label_7F383114;
    case 0x7F383118u: goto label_7F383118;
    case 0x7F38311Cu: goto label_7F38311C;
    case 0x7F383120u: goto label_7F383120;
    case 0x7F383124u: goto label_7F383124;
    case 0x7F383128u: goto label_7F383128;
    case 0x7F38312Cu: goto label_7F38312C;
    case 0x7F383130u: goto label_7F383130;
    case 0x7F383134u: goto label_7F383134;
    case 0x7F383138u: goto label_7F383138;
    case 0x7F38313Cu: goto label_7F38313C;
    case 0x7F383140u: goto label_7F383140;
    case 0x7F383144u: goto label_7F383144;
    case 0x7F383148u: goto label_7F383148;
    case 0x7F38314Cu: goto label_7F38314C;
    case 0x7F383150u: goto label_7F383150;
    case 0x7F383154u: goto label_7F383154;
    case 0x7F383158u: goto label_7F383158;
    case 0x7F38315Cu: goto label_7F38315C;
    case 0x7F383160u: goto label_7F383160;
    case 0x7F383164u: goto label_7F383164;
    case 0x7F383168u: goto label_7F383168;
    case 0x7F38316Cu: goto label_7F38316C;
    case 0x7F383170u: goto label_7F383170;
    case 0x7F383174u: goto label_7F383174;
    case 0x7F383178u: goto label_7F383178;
    case 0x7F38317Cu: goto label_7F38317C;
    case 0x7F383180u: goto label_7F383180;
    case 0x7F383184u: goto label_7F383184;
    case 0x7F383188u: goto label_7F383188;
    case 0x7F38318Cu: goto label_7F38318C;
    case 0x7F383190u: goto label_7F383190;
    case 0x7F383194u: goto label_7F383194;
    case 0x7F383198u: goto label_7F383198;
    case 0x7F38319Cu: goto label_7F38319C;
    case 0x7F3831A0u: goto label_7F3831A0;
    case 0x7F3831A4u: goto label_7F3831A4;
    case 0x7F3831A8u: goto label_7F3831A8;
    case 0x7F3831ACu: goto label_7F3831AC;
    case 0x7F3831B0u: goto label_7F3831B0;
    case 0x7F3831B4u: goto label_7F3831B4;
    case 0x7F3831B8u: goto label_7F3831B8;
    case 0x7F3831BCu: goto label_7F3831BC;
    case 0x7F3831C0u: goto label_7F3831C0;
    case 0x7F3831C4u: goto label_7F3831C4;
    case 0x7F3831C8u: goto label_7F3831C8;
    case 0x7F3831CCu: goto label_7F3831CC;
    case 0x7F3831D0u: goto label_7F3831D0;
    case 0x7F3831D4u: goto label_7F3831D4;
    case 0x7F3831D8u: goto label_7F3831D8;
    case 0x7F3831DCu: goto label_7F3831DC;
    case 0x7F3831E0u: goto label_7F3831E0;
    case 0x7F3831E4u: goto label_7F3831E4;
    case 0x7F3831E8u: goto label_7F3831E8;
    case 0x7F3831ECu: goto label_7F3831EC;
    case 0x7F3831F0u: goto label_7F3831F0;
    case 0x7F3831F4u: goto label_7F3831F4;
    case 0x7F3831F8u: goto label_7F3831F8;
    case 0x7F3831FCu: goto label_7F3831FC;
    case 0x7F383200u: goto label_7F383200;
    case 0x7F383204u: goto label_7F383204;
    case 0x7F383208u: goto label_7F383208;
    case 0x7F38320Cu: goto label_7F38320C;
    case 0x7F383210u: goto label_7F383210;
    case 0x7F383214u: goto label_7F383214;
    case 0x7F383218u: goto label_7F383218;
    case 0x7F38321Cu: goto label_7F38321C;
    case 0x7F383220u: goto label_7F383220;
    case 0x7F383224u: goto label_7F383224;
    case 0x7F383228u: goto label_7F383228;
    case 0x7F38322Cu: goto label_7F38322C;
    case 0x7F383230u: goto label_7F383230;
    case 0x7F383234u: goto label_7F383234;
    case 0x7F383238u: goto label_7F383238;
    case 0x7F38323Cu: goto label_7F38323C;
    case 0x7F383240u: goto label_7F383240;
    case 0x7F383244u: goto label_7F383244;
    case 0x7F383248u: goto label_7F383248;
    case 0x7F38324Cu: goto label_7F38324C;
    case 0x7F383250u: goto label_7F383250;
    case 0x7F383254u: goto label_7F383254;
    case 0x7F383258u: goto label_7F383258;
    case 0x7F38325Cu: goto label_7F38325C;
    case 0x7F383260u: goto label_7F383260;
    case 0x7F383264u: goto label_7F383264;
    case 0x7F383268u: goto label_7F383268;
    case 0x7F38326Cu: goto label_7F38326C;
    case 0x7F383270u: goto label_7F383270;
    case 0x7F383274u: goto label_7F383274;
    case 0x7F383278u: goto label_7F383278;
    case 0x7F38327Cu: goto label_7F38327C;
    case 0x7F383280u: goto label_7F383280;
    case 0x7F383284u: goto label_7F383284;
    case 0x7F383288u: goto label_7F383288;
    case 0x7F38328Cu: goto label_7F38328C;
    case 0x7F383290u: goto label_7F383290;
    case 0x7F383294u: goto label_7F383294;
    case 0x7F383298u: goto label_7F383298;
    case 0x7F38329Cu: goto label_7F38329C;
    case 0x7F3832A0u: goto label_7F3832A0;
    case 0x7F3832A4u: goto label_7F3832A4;
    case 0x7F3832A8u: goto label_7F3832A8;
    case 0x7F3832ACu: goto label_7F3832AC;
    case 0x7F3832B0u: goto label_7F3832B0;
    case 0x7F3832B4u: goto label_7F3832B4;
    case 0x7F3832B8u: goto label_7F3832B8;
    case 0x7F3832BCu: goto label_7F3832BC;
    case 0x7F3832C0u: goto label_7F3832C0;
    case 0x7F3832C4u: goto label_7F3832C4;
    case 0x7F3832C8u: goto label_7F3832C8;
    case 0x7F3832CCu: goto label_7F3832CC;
    case 0x7F3832D0u: goto label_7F3832D0;
    case 0x7F3832D4u: goto label_7F3832D4;
    case 0x7F3832D8u: goto label_7F3832D8;
    case 0x7F3832DCu: goto label_7F3832DC;
    case 0x7F3832E0u: goto label_7F3832E0;
    case 0x7F3832E4u: goto label_7F3832E4;
    case 0x7F3832E8u: goto label_7F3832E8;
    case 0x7F3832ECu: goto label_7F3832EC;
    case 0x7F3832F0u: goto label_7F3832F0;
    case 0x7F3832F4u: goto label_7F3832F4;
    case 0x7F3832F8u: goto label_7F3832F8;
    case 0x7F3832FCu: goto label_7F3832FC;
    case 0x7F383300u: goto label_7F383300;
    case 0x7F383304u: goto label_7F383304;
    case 0x7F383308u: goto label_7F383308;
    case 0x7F38330Cu: goto label_7F38330C;
    case 0x7F383310u: goto label_7F383310;
    case 0x7F383314u: goto label_7F383314;
    case 0x7F383318u: goto label_7F383318;
    case 0x7F38331Cu: goto label_7F38331C;
    case 0x7F383320u: goto label_7F383320;
    case 0x7F383324u: goto label_7F383324;
    case 0x7F383328u: goto label_7F383328;
    case 0x7F38332Cu: goto label_7F38332C;
    case 0x7F383330u: goto label_7F383330;
    case 0x7F383334u: goto label_7F383334;
    case 0x7F383338u: goto label_7F383338;
    case 0x7F38333Cu: goto label_7F38333C;
    case 0x7F383340u: goto label_7F383340;
    case 0x7F383344u: goto label_7F383344;
    case 0x7F383348u: goto label_7F383348;
    case 0x7F38334Cu: goto label_7F38334C;
    case 0x7F383350u: goto label_7F383350;
    case 0x7F383354u: goto label_7F383354;
    case 0x7F383358u: goto label_7F383358;
    case 0x7F38335Cu: goto label_7F38335C;
    case 0x7F383360u: goto label_7F383360;
    case 0x7F383364u: goto label_7F383364;
    case 0x7F383368u: goto label_7F383368;
    case 0x7F38336Cu: goto label_7F38336C;
    case 0x7F383370u: goto label_7F383370;
    case 0x7F383374u: goto label_7F383374;
    case 0x7F383378u: goto label_7F383378;
    case 0x7F38337Cu: goto label_7F38337C;
    case 0x7F383380u: goto label_7F383380;
    case 0x7F383384u: goto label_7F383384;
    case 0x7F383388u: goto label_7F383388;
    case 0x7F38338Cu: goto label_7F38338C;
    case 0x7F383390u: goto label_7F383390;
    case 0x7F383394u: goto label_7F383394;
    case 0x7F383398u: goto label_7F383398;
    case 0x7F38339Cu: goto label_7F38339C;
    case 0x7F3833A0u: goto label_7F3833A0;
    case 0x7F3833A4u: goto label_7F3833A4;
    case 0x7F3833A8u: goto label_7F3833A8;
    case 0x7F3833ACu: goto label_7F3833AC;
    case 0x7F3833B0u: goto label_7F3833B0;
    case 0x7F3833B4u: goto label_7F3833B4;
    case 0x7F3833B8u: goto label_7F3833B8;
    case 0x7F3833BCu: goto label_7F3833BC;
    case 0x7F3833C0u: goto label_7F3833C0;
    case 0x7F3833C4u: goto label_7F3833C4;
    case 0x7F3833C8u: goto label_7F3833C8;
    case 0x7F3833CCu: goto label_7F3833CC;
    case 0x7F3833D0u: goto label_7F3833D0;
    case 0x7F3833D4u: goto label_7F3833D4;
    case 0x7F3833D8u: goto label_7F3833D8;
    case 0x7F3833DCu: goto label_7F3833DC;
    case 0x7F3833E0u: goto label_7F3833E0;
    case 0x7F3833E4u: goto label_7F3833E4;
    case 0x7F3833E8u: goto label_7F3833E8;
    case 0x7F3833ECu: goto label_7F3833EC;
    case 0x7F3833F0u: goto label_7F3833F0;
    case 0x7F3833F4u: goto label_7F3833F4;
    case 0x7F3833F8u: goto label_7F3833F8;
    case 0x7F3833FCu: goto label_7F3833FC;
    case 0x7F383400u: goto label_7F383400;
    case 0x7F383404u: goto label_7F383404;
    case 0x7F383408u: goto label_7F383408;
    case 0x7F38340Cu: goto label_7F38340C;
    case 0x7F383410u: goto label_7F383410;
    case 0x7F383414u: goto label_7F383414;
    case 0x7F383418u: goto label_7F383418;
    case 0x7F38341Cu: goto label_7F38341C;
    case 0x7F383420u: goto label_7F383420;
    case 0x7F383424u: goto label_7F383424;
    case 0x7F383428u: goto label_7F383428;
    case 0x7F38342Cu: goto label_7F38342C;
    case 0x7F383430u: goto label_7F383430;
    case 0x7F383434u: goto label_7F383434;
    case 0x7F383438u: goto label_7F383438;
    case 0x7F38343Cu: goto label_7F38343C;
    case 0x7F383440u: goto label_7F383440;
    case 0x7F383444u: goto label_7F383444;
    case 0x7F383448u: goto label_7F383448;
    case 0x7F38344Cu: goto label_7F38344C;
    case 0x7F383450u: goto label_7F383450;
    case 0x7F383454u: goto label_7F383454;
    case 0x7F383458u: goto label_7F383458;
    case 0x7F38345Cu: goto label_7F38345C;
    case 0x7F383460u: goto label_7F383460;
    case 0x7F383464u: goto label_7F383464;
    case 0x7F383468u: goto label_7F383468;
    case 0x7F38346Cu: goto label_7F38346C;
    case 0x7F383470u: goto label_7F383470;
    case 0x7F383474u: goto label_7F383474;
    case 0x7F383478u: goto label_7F383478;
    case 0x7F38347Cu: goto label_7F38347C;
    case 0x7F383480u: goto label_7F383480;
    case 0x7F383484u: goto label_7F383484;
    case 0x7F383488u: goto label_7F383488;
    case 0x7F38348Cu: goto label_7F38348C;
    case 0x7F383490u: goto label_7F383490;
    case 0x7F383494u: goto label_7F383494;
    case 0x7F383498u: goto label_7F383498;
    case 0x7F38349Cu: goto label_7F38349C;
    case 0x7F3834A0u: goto label_7F3834A0;
    case 0x7F3834A4u: goto label_7F3834A4;
    case 0x7F3834A8u: goto label_7F3834A8;
    case 0x7F3834ACu: goto label_7F3834AC;
    case 0x7F3834B0u: goto label_7F3834B0;
    case 0x7F3834B4u: goto label_7F3834B4;
    case 0x7F3834B8u: goto label_7F3834B8;
    case 0x7F3834BCu: goto label_7F3834BC;
    case 0x7F3834C0u: goto label_7F3834C0;
    case 0x7F3834C4u: goto label_7F3834C4;
    case 0x7F3834C8u: goto label_7F3834C8;
    case 0x7F3834CCu: goto label_7F3834CC;
    case 0x7F3834D0u: goto label_7F3834D0;
    case 0x7F3834D4u: goto label_7F3834D4;
    case 0x7F3834D8u: goto label_7F3834D8;
    case 0x7F3834DCu: goto label_7F3834DC;
    case 0x7F3834E0u: goto label_7F3834E0;
    case 0x7F3834E4u: goto label_7F3834E4;
    case 0x7F3834E8u: goto label_7F3834E8;
    case 0x7F3834ECu: goto label_7F3834EC;
    case 0x7F3834F0u: goto label_7F3834F0;
    case 0x7F3834F4u: goto label_7F3834F4;
    case 0x7F3834F8u: goto label_7F3834F8;
    case 0x7F3834FCu: goto label_7F3834FC;
    case 0x7F383500u: goto label_7F383500;
    case 0x7F383504u: goto label_7F383504;
    case 0x7F383508u: goto label_7F383508;
    case 0x7F38350Cu: goto label_7F38350C;
    case 0x7F383510u: goto label_7F383510;
    case 0x7F383514u: goto label_7F383514;
    case 0x7F383518u: goto label_7F383518;
    case 0x7F38351Cu: goto label_7F38351C;
    case 0x7F383520u: goto label_7F383520;
    case 0x7F383524u: goto label_7F383524;
    case 0x7F383528u: goto label_7F383528;
    case 0x7F38352Cu: goto label_7F38352C;
    case 0x7F383530u: goto label_7F383530;
    case 0x7F383534u: goto label_7F383534;
    case 0x7F383538u: goto label_7F383538;
    case 0x7F38353Cu: goto label_7F38353C;
    case 0x7F383540u: goto label_7F383540;
    case 0x7F383544u: goto label_7F383544;
    case 0x7F383548u: goto label_7F383548;
    case 0x7F38354Cu: goto label_7F38354C;
    case 0x7F383550u: goto label_7F383550;
    case 0x7F383554u: goto label_7F383554;
    case 0x7F383558u: goto label_7F383558;
    case 0x7F38355Cu: goto label_7F38355C;
    case 0x7F383560u: goto label_7F383560;
    case 0x7F383564u: goto label_7F383564;
    case 0x7F383568u: goto label_7F383568;
    case 0x7F38356Cu: goto label_7F38356C;
    case 0x7F383570u: goto label_7F383570;
    case 0x7F383574u: goto label_7F383574;
    case 0x7F383578u: goto label_7F383578;
    case 0x7F38357Cu: goto label_7F38357C;
    case 0x7F383580u: goto label_7F383580;
    case 0x7F383584u: goto label_7F383584;
    case 0x7F383588u: goto label_7F383588;
    case 0x7F38358Cu: goto label_7F38358C;
    case 0x7F383590u: goto label_7F383590;
    case 0x7F383594u: goto label_7F383594;
    case 0x7F383598u: goto label_7F383598;
    case 0x7F38359Cu: goto label_7F38359C;
    case 0x7F3835A0u: goto label_7F3835A0;
    case 0x7F3835A4u: goto label_7F3835A4;
    case 0x7F3835A8u: goto label_7F3835A8;
    case 0x7F3835ACu: goto label_7F3835AC;
    case 0x7F3835B0u: goto label_7F3835B0;
    case 0x7F3835B4u: goto label_7F3835B4;
    case 0x7F3835B8u: goto label_7F3835B8;
    case 0x7F3835BCu: goto label_7F3835BC;
    case 0x7F3835C0u: goto label_7F3835C0;
    case 0x7F3835C4u: goto label_7F3835C4;
    case 0x7F3835C8u: goto label_7F3835C8;
    case 0x7F3835CCu: goto label_7F3835CC;
    case 0x7F3835D0u: goto label_7F3835D0;
    case 0x7F3835D4u: goto label_7F3835D4;
    case 0x7F3835D8u: goto label_7F3835D8;
    case 0x7F3835DCu: goto label_7F3835DC;
    case 0x7F3835E0u: goto label_7F3835E0;
    case 0x7F3835E4u: goto label_7F3835E4;
    case 0x7F3835E8u: goto label_7F3835E8;
    case 0x7F3835ECu: goto label_7F3835EC;
    case 0x7F3835F0u: goto label_7F3835F0;
    case 0x7F3835F4u: goto label_7F3835F4;
    case 0x7F3835F8u: goto label_7F3835F8;
    case 0x7F3835FCu: goto label_7F3835FC;
    case 0x7F383600u: goto label_7F383600;
    case 0x7F383604u: goto label_7F383604;
    case 0x7F383608u: goto label_7F383608;
    case 0x7F38360Cu: goto label_7F38360C;
    case 0x7F383610u: goto label_7F383610;
    case 0x7F383614u: goto label_7F383614;
    case 0x7F383618u: goto label_7F383618;
    case 0x7F38361Cu: goto label_7F38361C;
    case 0x7F383620u: goto label_7F383620;
    case 0x7F383624u: goto label_7F383624;
    case 0x7F383628u: goto label_7F383628;
    case 0x7F38362Cu: goto label_7F38362C;
    case 0x7F383630u: goto label_7F383630;
    case 0x7F383634u: goto label_7F383634;
    case 0x7F383638u: goto label_7F383638;
    case 0x7F38363Cu: goto label_7F38363C;
    case 0x7F383640u: goto label_7F383640;
    case 0x7F383644u: goto label_7F383644;
    case 0x7F383648u: goto label_7F383648;
    case 0x7F38364Cu: goto label_7F38364C;
    case 0x7F383650u: goto label_7F383650;
    case 0x7F383654u: goto label_7F383654;
    case 0x7F383658u: goto label_7F383658;
    case 0x7F38365Cu: goto label_7F38365C;
    case 0x7F383660u: goto label_7F383660;
    case 0x7F383664u: goto label_7F383664;
    case 0x7F383668u: goto label_7F383668;
    case 0x7F38366Cu: goto label_7F38366C;
    case 0x7F383670u: goto label_7F383670;
    case 0x7F383674u: goto label_7F383674;
    case 0x7F383678u: goto label_7F383678;
    case 0x7F38367Cu: goto label_7F38367C;
    case 0x7F383680u: goto label_7F383680;
    case 0x7F383684u: goto label_7F383684;
    case 0x7F383688u: goto label_7F383688;
    case 0x7F38368Cu: goto label_7F38368C;
    case 0x7F383690u: goto label_7F383690;
    case 0x7F383694u: goto label_7F383694;
    case 0x7F383698u: goto label_7F383698;
    case 0x7F38369Cu: goto label_7F38369C;
    case 0x7F3836A0u: goto label_7F3836A0;
    case 0x7F3836A4u: goto label_7F3836A4;
    case 0x7F3836A8u: goto label_7F3836A8;
    case 0x7F3836ACu: goto label_7F3836AC;
    case 0x7F3836B0u: goto label_7F3836B0;
    case 0x7F3836B4u: goto label_7F3836B4;
    case 0x7F3836B8u: goto label_7F3836B8;
    case 0x7F3836BCu: goto label_7F3836BC;
    case 0x7F3836C0u: goto label_7F3836C0;
    case 0x7F3836C4u: goto label_7F3836C4;
    case 0x7F3836C8u: goto label_7F3836C8;
    case 0x7F3836CCu: goto label_7F3836CC;
    case 0x7F3836D0u: goto label_7F3836D0;
    case 0x7F3836D4u: goto label_7F3836D4;
    case 0x7F3836D8u: goto label_7F3836D8;
    case 0x7F3836DCu: goto label_7F3836DC;
    case 0x7F3836E0u: goto label_7F3836E0;
    case 0x7F3836E4u: goto label_7F3836E4;
    case 0x7F3836E8u: goto label_7F3836E8;
    case 0x7F3836ECu: goto label_7F3836EC;
    case 0x7F3836F0u: goto label_7F3836F0;
    case 0x7F3836F4u: goto label_7F3836F4;
    case 0x7F3836F8u: goto label_7F3836F8;
    case 0x7F3836FCu: goto label_7F3836FC;
    case 0x7F383700u: goto label_7F383700;
    case 0x7F383704u: goto label_7F383704;
    case 0x7F383708u: goto label_7F383708;
    case 0x7F38370Cu: goto label_7F38370C;
    case 0x7F383710u: goto label_7F383710;
    case 0x7F383714u: goto label_7F383714;
    case 0x7F383718u: goto label_7F383718;
    case 0x7F38371Cu: goto label_7F38371C;
    case 0x7F383720u: goto label_7F383720;
    case 0x7F383724u: goto label_7F383724;
    case 0x7F383728u: goto label_7F383728;
    case 0x7F38372Cu: goto label_7F38372C;
    case 0x7F383730u: goto label_7F383730;
    case 0x7F383734u: goto label_7F383734;
    case 0x7F383738u: goto label_7F383738;
    case 0x7F38373Cu: goto label_7F38373C;
    case 0x7F383740u: goto label_7F383740;
    case 0x7F383744u: goto label_7F383744;
    case 0x7F383748u: goto label_7F383748;
    case 0x7F38374Cu: goto label_7F38374C;
    case 0x7F383750u: goto label_7F383750;
    case 0x7F383754u: goto label_7F383754;
    case 0x7F383758u: goto label_7F383758;
    case 0x7F38375Cu: goto label_7F38375C;
    case 0x7F383760u: goto label_7F383760;
    case 0x7F383764u: goto label_7F383764;
    case 0x7F383768u: goto label_7F383768;
    case 0x7F38376Cu: goto label_7F38376C;
    case 0x7F383770u: goto label_7F383770;
    case 0x7F383774u: goto label_7F383774;
    case 0x7F383778u: goto label_7F383778;
    case 0x7F38377Cu: goto label_7F38377C;
    case 0x7F383780u: goto label_7F383780;
    case 0x7F383784u: goto label_7F383784;
    case 0x7F383788u: goto label_7F383788;
    case 0x7F38378Cu: goto label_7F38378C;
    case 0x7F383790u: goto label_7F383790;
    case 0x7F383794u: goto label_7F383794;
    case 0x7F383798u: goto label_7F383798;
    case 0x7F38379Cu: goto label_7F38379C;
    case 0x7F3837A0u: goto label_7F3837A0;
    case 0x7F3837A4u: goto label_7F3837A4;
    case 0x7F3837A8u: goto label_7F3837A8;
    case 0x7F3837ACu: goto label_7F3837AC;
    case 0x7F3837B0u: goto label_7F3837B0;
    case 0x7F3837B4u: goto label_7F3837B4;
    case 0x7F3837B8u: goto label_7F3837B8;
    case 0x7F3837BCu: goto label_7F3837BC;
    case 0x7F3837C0u: goto label_7F3837C0;
    case 0x7F3837C4u: goto label_7F3837C4;
    case 0x7F3837C8u: goto label_7F3837C8;
    case 0x7F3837CCu: goto label_7F3837CC;
    case 0x7F3837D0u: goto label_7F3837D0;
    case 0x7F3837D4u: goto label_7F3837D4;
    case 0x7F3837D8u: goto label_7F3837D8;
    case 0x7F3837DCu: goto label_7F3837DC;
    case 0x7F3837E0u: goto label_7F3837E0;
    case 0x7F3837E4u: goto label_7F3837E4;
    case 0x7F3837E8u: goto label_7F3837E8;
    case 0x7F3837ECu: goto label_7F3837EC;
    case 0x7F3837F0u: goto label_7F3837F0;
    case 0x7F3837F4u: goto label_7F3837F4;
    case 0x7F3837F8u: goto label_7F3837F8;
    case 0x7F3837FCu: goto label_7F3837FC;
    case 0x7F383800u: goto label_7F383800;
    case 0x7F383804u: goto label_7F383804;
    case 0x7F383808u: goto label_7F383808;
    case 0x7F38380Cu: goto label_7F38380C;
    case 0x7F383810u: goto label_7F383810;
    case 0x7F383814u: goto label_7F383814;
    case 0x7F383818u: goto label_7F383818;
    case 0x7F38381Cu: goto label_7F38381C;
    case 0x7F383820u: goto label_7F383820;
    case 0x7F383824u: goto label_7F383824;
    case 0x7F383828u: goto label_7F383828;
    case 0x7F38382Cu: goto label_7F38382C;
    case 0x7F383830u: goto label_7F383830;
    case 0x7F383834u: goto label_7F383834;
    case 0x7F383838u: goto label_7F383838;
    case 0x7F38383Cu: goto label_7F38383C;
    case 0x7F383840u: goto label_7F383840;
    case 0x7F383844u: goto label_7F383844;
    case 0x7F383848u: goto label_7F383848;
    case 0x7F38384Cu: goto label_7F38384C;
    case 0x7F383850u: goto label_7F383850;
    case 0x7F383854u: goto label_7F383854;
    case 0x7F383858u: goto label_7F383858;
    case 0x7F38385Cu: goto label_7F38385C;
    case 0x7F383860u: goto label_7F383860;
    case 0x7F383864u: goto label_7F383864;
    case 0x7F383868u: goto label_7F383868;
    case 0x7F38386Cu: goto label_7F38386C;
    case 0x7F383870u: goto label_7F383870;
    case 0x7F383874u: goto label_7F383874;
    case 0x7F383878u: goto label_7F383878;
    case 0x7F38387Cu: goto label_7F38387C;
    case 0x7F383880u: goto label_7F383880;
    case 0x7F383884u: goto label_7F383884;
    case 0x7F383888u: goto label_7F383888;
    case 0x7F38388Cu: goto label_7F38388C;
    case 0x7F383890u: goto label_7F383890;
    case 0x7F383894u: goto label_7F383894;
    case 0x7F383898u: goto label_7F383898;
    case 0x7F38389Cu: goto label_7F38389C;
    case 0x7F3838A0u: goto label_7F3838A0;
    case 0x7F3838A4u: goto label_7F3838A4;
    case 0x7F3838A8u: goto label_7F3838A8;
    case 0x7F3838ACu: goto label_7F3838AC;
    case 0x7F3838B0u: goto label_7F3838B0;
    case 0x7F3838B4u: goto label_7F3838B4;
    case 0x7F3838B8u: goto label_7F3838B8;
    case 0x7F3838BCu: goto label_7F3838BC;
    case 0x7F3838C0u: goto label_7F3838C0;
    case 0x7F3838C4u: goto label_7F3838C4;
    case 0x7F3838C8u: goto label_7F3838C8;
    case 0x7F3838CCu: goto label_7F3838CC;
    case 0x7F3838D0u: goto label_7F3838D0;
    case 0x7F3838D4u: goto label_7F3838D4;
    case 0x7F3838D8u: goto label_7F3838D8;
    case 0x7F3838DCu: goto label_7F3838DC;
    case 0x7F3838E0u: goto label_7F3838E0;
    case 0x7F3838E4u: goto label_7F3838E4;
    case 0x7F3838E8u: goto label_7F3838E8;
    case 0x7F3838ECu: goto label_7F3838EC;
    case 0x7F3838F0u: goto label_7F3838F0;
    case 0x7F3838F4u: goto label_7F3838F4;
    case 0x7F3838F8u: goto label_7F3838F8;
    case 0x7F3838FCu: goto label_7F3838FC;
    case 0x7F383900u: goto label_7F383900;
    case 0x7F383904u: goto label_7F383904;
    case 0x7F383908u: goto label_7F383908;
    case 0x7F38390Cu: goto label_7F38390C;
    case 0x7F383910u: goto label_7F383910;
    case 0x7F383914u: goto label_7F383914;
    case 0x7F383918u: goto label_7F383918;
    case 0x7F38391Cu: goto label_7F38391C;
    case 0x7F383920u: goto label_7F383920;
    case 0x7F383924u: goto label_7F383924;
    case 0x7F383928u: goto label_7F383928;
    case 0x7F38392Cu: goto label_7F38392C;
    case 0x7F383930u: goto label_7F383930;
    case 0x7F383934u: goto label_7F383934;
    case 0x7F383938u: goto label_7F383938;
    case 0x7F38393Cu: goto label_7F38393C;
    case 0x7F383940u: goto label_7F383940;
    case 0x7F383944u: goto label_7F383944;
    case 0x7F383948u: goto label_7F383948;
    case 0x7F38394Cu: goto label_7F38394C;
    case 0x7F383950u: goto label_7F383950;
    case 0x7F383954u: goto label_7F383954;
    case 0x7F383958u: goto label_7F383958;
    case 0x7F38395Cu: goto label_7F38395C;
    case 0x7F383960u: goto label_7F383960;
    case 0x7F383964u: goto label_7F383964;
    case 0x7F383968u: goto label_7F383968;
    case 0x7F38396Cu: goto label_7F38396C;
    case 0x7F383970u: goto label_7F383970;
    case 0x7F383974u: goto label_7F383974;
    case 0x7F383978u: goto label_7F383978;
    case 0x7F38397Cu: goto label_7F38397C;
    case 0x7F383980u: goto label_7F383980;
    case 0x7F383984u: goto label_7F383984;
    case 0x7F383988u: goto label_7F383988;
    case 0x7F38398Cu: goto label_7F38398C;
    case 0x7F383990u: goto label_7F383990;
    case 0x7F383994u: goto label_7F383994;
    case 0x7F383998u: goto label_7F383998;
    case 0x7F38399Cu: goto label_7F38399C;
    case 0x7F3839A0u: goto label_7F3839A0;
    case 0x7F3839A4u: goto label_7F3839A4;
    case 0x7F3839A8u: goto label_7F3839A8;
    case 0x7F3839ACu: goto label_7F3839AC;
    case 0x7F3839B0u: goto label_7F3839B0;
    case 0x7F3839B4u: goto label_7F3839B4;
    case 0x7F3839B8u: goto label_7F3839B8;
    case 0x7F3839BCu: goto label_7F3839BC;
    case 0x7F3839C0u: goto label_7F3839C0;
    case 0x7F3839C4u: goto label_7F3839C4;
    case 0x7F3839C8u: goto label_7F3839C8;
    case 0x7F3839CCu: goto label_7F3839CC;
    case 0x7F3839D0u: goto label_7F3839D0;
    case 0x7F3839D4u: goto label_7F3839D4;
    case 0x7F3839D8u: goto label_7F3839D8;
    case 0x7F3839DCu: goto label_7F3839DC;
    case 0x7F3839E0u: goto label_7F3839E0;
    case 0x7F3839E4u: goto label_7F3839E4;
    case 0x7F3839E8u: goto label_7F3839E8;
    case 0x7F3839ECu: goto label_7F3839EC;
    case 0x7F3839F0u: goto label_7F3839F0;
    case 0x7F3839F4u: goto label_7F3839F4;
    case 0x7F3839F8u: goto label_7F3839F8;
    case 0x7F3839FCu: goto label_7F3839FC;
    case 0x7F383A00u: goto label_7F383A00;
    case 0x7F383A04u: goto label_7F383A04;
    case 0x7F383A08u: goto label_7F383A08;
    case 0x7F383A0Cu: goto label_7F383A0C;
    case 0x7F383A10u: goto label_7F383A10;
    case 0x7F383A14u: goto label_7F383A14;
    case 0x7F383A18u: goto label_7F383A18;
    case 0x7F383A1Cu: goto label_7F383A1C;
    case 0x7F383A20u: goto label_7F383A20;
    case 0x7F383A24u: goto label_7F383A24;
    case 0x7F383A28u: goto label_7F383A28;
    case 0x7F383A2Cu: goto label_7F383A2C;
    case 0x7F383A30u: goto label_7F383A30;
    case 0x7F383A34u: goto label_7F383A34;
    case 0x7F383A38u: goto label_7F383A38;
    case 0x7F383A3Cu: goto label_7F383A3C;
    case 0x7F383A40u: goto label_7F383A40;
    case 0x7F383A44u: goto label_7F383A44;
    case 0x7F383A48u: goto label_7F383A48;
    case 0x7F383A4Cu: goto label_7F383A4C;
    case 0x7F383A50u: goto label_7F383A50;
    case 0x7F383A54u: goto label_7F383A54;
    case 0x7F383A58u: goto label_7F383A58;
    case 0x7F383A5Cu: goto label_7F383A5C;
    case 0x7F383A60u: goto label_7F383A60;
    case 0x7F383A64u: goto label_7F383A64;
    case 0x7F383A68u: goto label_7F383A68;
    case 0x7F383A6Cu: goto label_7F383A6C;
    case 0x7F383A70u: goto label_7F383A70;
    case 0x7F383A74u: goto label_7F383A74;
    case 0x7F383A78u: goto label_7F383A78;
    case 0x7F383A7Cu: goto label_7F383A7C;
    case 0x7F383A80u: goto label_7F383A80;
    case 0x7F383A84u: goto label_7F383A84;
    case 0x7F383A88u: goto label_7F383A88;
    case 0x7F383A8Cu: goto label_7F383A8C;
    case 0x7F383A90u: goto label_7F383A90;
    case 0x7F383A94u: goto label_7F383A94;
    case 0x7F383A98u: goto label_7F383A98;
    case 0x7F383A9Cu: goto label_7F383A9C;
    case 0x7F383AA0u: goto label_7F383AA0;
    case 0x7F383AA4u: goto label_7F383AA4;
    case 0x7F383AA8u: goto label_7F383AA8;
    case 0x7F383AACu: goto label_7F383AAC;
    case 0x7F383AB0u: goto label_7F383AB0;
    case 0x7F383AB4u: goto label_7F383AB4;
    case 0x7F383AB8u: goto label_7F383AB8;
    case 0x7F383ABCu: goto label_7F383ABC;
    case 0x7F383AC0u: goto label_7F383AC0;
    case 0x7F383AC4u: goto label_7F383AC4;
    case 0x7F383AC8u: goto label_7F383AC8;
    case 0x7F383ACCu: goto label_7F383ACC;
    case 0x7F383AD0u: goto label_7F383AD0;
    case 0x7F383AD4u: goto label_7F383AD4;
    case 0x7F383AD8u: goto label_7F383AD8;
    case 0x7F383ADCu: goto label_7F383ADC;
    case 0x7F383AE0u: goto label_7F383AE0;
    case 0x7F383AE4u: goto label_7F383AE4;
    case 0x7F383AE8u: goto label_7F383AE8;
    case 0x7F383AECu: goto label_7F383AEC;
    case 0x7F383AF0u: goto label_7F383AF0;
    case 0x7F383AF4u: goto label_7F383AF4;
    case 0x7F383AF8u: goto label_7F383AF8;
    case 0x7F383AFCu: goto label_7F383AFC;
    case 0x7F383B00u: goto label_7F383B00;
    case 0x7F383B04u: goto label_7F383B04;
    case 0x7F383B08u: goto label_7F383B08;
    case 0x7F383B0Cu: goto label_7F383B0C;
    case 0x7F383B10u: goto label_7F383B10;
    case 0x7F383B14u: goto label_7F383B14;
    case 0x7F383B18u: goto label_7F383B18;
    case 0x7F383B1Cu: goto label_7F383B1C;
    case 0x7F383B20u: goto label_7F383B20;
    case 0x7F383B24u: goto label_7F383B24;
    case 0x7F383B28u: goto label_7F383B28;
    case 0x7F383B2Cu: goto label_7F383B2C;
    case 0x7F383B30u: goto label_7F383B30;
    case 0x7F383B34u: goto label_7F383B34;
    case 0x7F383B38u: goto label_7F383B38;
    case 0x7F383B3Cu: goto label_7F383B3C;
    case 0x7F383B40u: goto label_7F383B40;
    case 0x7F383B44u: goto label_7F383B44;
    case 0x7F383B48u: goto label_7F383B48;
    case 0x7F383B4Cu: goto label_7F383B4C;
    case 0x7F383B50u: goto label_7F383B50;
    case 0x7F383B54u: goto label_7F383B54;
    case 0x7F383B58u: goto label_7F383B58;
    case 0x7F383B5Cu: goto label_7F383B5C;
    case 0x7F383B60u: goto label_7F383B60;
    case 0x7F383B64u: goto label_7F383B64;
    case 0x7F383B68u: goto label_7F383B68;
    case 0x7F383B6Cu: goto label_7F383B6C;
    case 0x7F383B70u: goto label_7F383B70;
    case 0x7F383B74u: goto label_7F383B74;
    case 0x7F383B78u: goto label_7F383B78;
    case 0x7F383B7Cu: goto label_7F383B7C;
    case 0x7F383B80u: goto label_7F383B80;
    case 0x7F383B84u: goto label_7F383B84;
    case 0x7F383B88u: goto label_7F383B88;
    case 0x7F383B8Cu: goto label_7F383B8C;
    case 0x7F383B90u: goto label_7F383B90;
    case 0x7F383B94u: goto label_7F383B94;
    case 0x7F383B98u: goto label_7F383B98;
    case 0x7F383B9Cu: goto label_7F383B9C;
    case 0x7F383BA0u: goto label_7F383BA0;
    case 0x7F383BA4u: goto label_7F383BA4;
    case 0x7F383BA8u: goto label_7F383BA8;
    case 0x7F383BACu: goto label_7F383BAC;
    case 0x7F383BB0u: goto label_7F383BB0;
    case 0x7F383BB4u: goto label_7F383BB4;
    case 0x7F383BB8u: goto label_7F383BB8;
    case 0x7F383BBCu: goto label_7F383BBC;
    case 0x7F383BC0u: goto label_7F383BC0;
    case 0x7F383BC4u: goto label_7F383BC4;
    case 0x7F383BC8u: goto label_7F383BC8;
    case 0x7F383BCCu: goto label_7F383BCC;
    case 0x7F383BD0u: goto label_7F383BD0;
    case 0x7F383BD4u: goto label_7F383BD4;
    case 0x7F383BD8u: goto label_7F383BD8;
    case 0x7F383BDCu: goto label_7F383BDC;
    case 0x7F383BE0u: goto label_7F383BE0;
    case 0x7F383BE4u: goto label_7F383BE4;
    case 0x7F383BE8u: goto label_7F383BE8;
    case 0x7F383BECu: goto label_7F383BEC;
    case 0x7F383BF0u: goto label_7F383BF0;
    case 0x7F383BF4u: goto label_7F383BF4;
    case 0x7F383BF8u: goto label_7F383BF8;
    case 0x7F383BFCu: goto label_7F383BFC;
    case 0x7F383C00u: goto label_7F383C00;
    case 0x7F383C04u: goto label_7F383C04;
    case 0x7F383C08u: goto label_7F383C08;
    case 0x7F383C0Cu: goto label_7F383C0C;
    case 0x7F383C10u: goto label_7F383C10;
    case 0x7F383C14u: goto label_7F383C14;
    case 0x7F383C18u: goto label_7F383C18;
    case 0x7F383C1Cu: goto label_7F383C1C;
    case 0x7F383C20u: goto label_7F383C20;
    case 0x7F383C24u: goto label_7F383C24;
    case 0x7F383C28u: goto label_7F383C28;
    case 0x7F383C2Cu: goto label_7F383C2C;
    case 0x7F383C30u: goto label_7F383C30;
    case 0x7F383C34u: goto label_7F383C34;
    case 0x7F383C38u: goto label_7F383C38;
    case 0x7F383C3Cu: goto label_7F383C3C;
    case 0x7F383C40u: goto label_7F383C40;
    case 0x7F383C44u: goto label_7F383C44;
    case 0x7F383C48u: goto label_7F383C48;
    case 0x7F383C4Cu: goto label_7F383C4C;
    case 0x7F383C50u: goto label_7F383C50;
    case 0x7F383C54u: goto label_7F383C54;
    case 0x7F383C58u: goto label_7F383C58;
    case 0x7F383C5Cu: goto label_7F383C5C;
    case 0x7F383C60u: goto label_7F383C60;
    case 0x7F383C64u: goto label_7F383C64;
    case 0x7F383C68u: goto label_7F383C68;
    case 0x7F383C6Cu: goto label_7F383C6C;
    case 0x7F383C70u: goto label_7F383C70;
    case 0x7F383C74u: goto label_7F383C74;
    case 0x7F383C78u: goto label_7F383C78;
    case 0x7F383C7Cu: goto label_7F383C7C;
    case 0x7F383C80u: goto label_7F383C80;
    case 0x7F383C84u: goto label_7F383C84;
    case 0x7F383C88u: goto label_7F383C88;
    case 0x7F383C8Cu: goto label_7F383C8C;
    case 0x7F383C90u: goto label_7F383C90;
    case 0x7F383C94u: goto label_7F383C94;
    case 0x7F383C98u: goto label_7F383C98;
    case 0x7F383C9Cu: goto label_7F383C9C;
    case 0x7F383CA0u: goto label_7F383CA0;
    case 0x7F383CA4u: goto label_7F383CA4;
    case 0x7F383CA8u: goto label_7F383CA8;
    case 0x7F383CACu: goto label_7F383CAC;
    case 0x7F383CB0u: goto label_7F383CB0;
    case 0x7F383CB4u: goto label_7F383CB4;
    case 0x7F383CB8u: goto label_7F383CB8;
    case 0x7F383CBCu: goto label_7F383CBC;
    case 0x7F383CC0u: goto label_7F383CC0;
    case 0x7F383CC4u: goto label_7F383CC4;
    case 0x7F383CC8u: goto label_7F383CC8;
    case 0x7F383CCCu: goto label_7F383CCC;
    case 0x7F383CD0u: goto label_7F383CD0;
    case 0x7F383CD4u: goto label_7F383CD4;
    case 0x7F383CD8u: goto label_7F383CD8;
    case 0x7F383CDCu: goto label_7F383CDC;
    case 0x7F383CE0u: goto label_7F383CE0;
    case 0x7F383CE4u: goto label_7F383CE4;
    case 0x7F383CE8u: goto label_7F383CE8;
    case 0x7F383CECu: goto label_7F383CEC;
    case 0x7F383CF0u: goto label_7F383CF0;
    case 0x7F383CF4u: goto label_7F383CF4;
    case 0x7F383CF8u: goto label_7F383CF8;
    case 0x7F383CFCu: goto label_7F383CFC;
    case 0x7F383D00u: goto label_7F383D00;
    case 0x7F383D04u: goto label_7F383D04;
    case 0x7F383D08u: goto label_7F383D08;
    case 0x7F383D0Cu: goto label_7F383D0C;
    case 0x7F383D10u: goto label_7F383D10;
    case 0x7F383D14u: goto label_7F383D14;
    case 0x7F383D18u: goto label_7F383D18;
    case 0x7F383D1Cu: goto label_7F383D1C;
    case 0x7F383D20u: goto label_7F383D20;
    case 0x7F383D24u: goto label_7F383D24;
    case 0x7F383D28u: goto label_7F383D28;
    case 0x7F383D2Cu: goto label_7F383D2C;
    case 0x7F383D30u: goto label_7F383D30;
    case 0x7F383D34u: goto label_7F383D34;
    case 0x7F383D38u: goto label_7F383D38;
    case 0x7F383D3Cu: goto label_7F383D3C;
    case 0x7F383D40u: goto label_7F383D40;
    case 0x7F383D44u: goto label_7F383D44;
    case 0x7F383D48u: goto label_7F383D48;
    case 0x7F383D4Cu: goto label_7F383D4C;
    case 0x7F383D50u: goto label_7F383D50;
    case 0x7F383D54u: goto label_7F383D54;
    case 0x7F383D58u: goto label_7F383D58;
    case 0x7F383D5Cu: goto label_7F383D5C;
    case 0x7F383D60u: goto label_7F383D60;
    case 0x7F383D64u: goto label_7F383D64;
    case 0x7F383D68u: goto label_7F383D68;
    case 0x7F383D6Cu: goto label_7F383D6C;
    case 0x7F383D70u: goto label_7F383D70;
    case 0x7F383D74u: goto label_7F383D74;
    case 0x7F383D78u: goto label_7F383D78;
    case 0x7F383D7Cu: goto label_7F383D7C;
    case 0x7F383D80u: goto label_7F383D80;
    case 0x7F383D84u: goto label_7F383D84;
    case 0x7F383D88u: goto label_7F383D88;
    case 0x7F383D8Cu: goto label_7F383D8C;
    case 0x7F383D90u: goto label_7F383D90;
    case 0x7F383D94u: goto label_7F383D94;
    case 0x7F383D98u: goto label_7F383D98;
    case 0x7F383D9Cu: goto label_7F383D9C;
    case 0x7F383DA0u: goto label_7F383DA0;
    case 0x7F383DA4u: goto label_7F383DA4;
    case 0x7F383DA8u: goto label_7F383DA8;
    case 0x7F383DACu: goto label_7F383DAC;
    case 0x7F383DB0u: goto label_7F383DB0;
    case 0x7F383DB4u: goto label_7F383DB4;
    case 0x7F383DB8u: goto label_7F383DB8;
    case 0x7F383DBCu: goto label_7F383DBC;
    case 0x7F383DC0u: goto label_7F383DC0;
    case 0x7F383DC4u: goto label_7F383DC4;
    case 0x7F383DC8u: goto label_7F383DC8;
    case 0x7F383DCCu: goto label_7F383DCC;
    case 0x7F383DD0u: goto label_7F383DD0;
    case 0x7F383DD4u: goto label_7F383DD4;
    case 0x7F383DD8u: goto label_7F383DD8;
    case 0x7F383DDCu: goto label_7F383DDC;
    case 0x7F383DE0u: goto label_7F383DE0;
    case 0x7F383DE4u: goto label_7F383DE4;
    case 0x7F383DE8u: goto label_7F383DE8;
    case 0x7F383DECu: goto label_7F383DEC;
    case 0x7F383DF0u: goto label_7F383DF0;
    case 0x7F383DF4u: goto label_7F383DF4;
    case 0x7F383DF8u: goto label_7F383DF8;
    case 0x7F383DFCu: goto label_7F383DFC;
    case 0x7F383E00u: goto label_7F383E00;
    case 0x7F383E04u: goto label_7F383E04;
    case 0x7F383E08u: goto label_7F383E08;
    case 0x7F383E0Cu: goto label_7F383E0C;
    case 0x7F383E10u: goto label_7F383E10;
    case 0x7F383E14u: goto label_7F383E14;
    case 0x7F383E18u: goto label_7F383E18;
    case 0x7F383E1Cu: goto label_7F383E1C;
    case 0x7F383E20u: goto label_7F383E20;
    case 0x7F383E24u: goto label_7F383E24;
    case 0x7F383E28u: goto label_7F383E28;
    case 0x7F383E2Cu: goto label_7F383E2C;
    case 0x7F383E30u: goto label_7F383E30;
    case 0x7F383E34u: goto label_7F383E34;
    case 0x7F383E38u: goto label_7F383E38;
    case 0x7F383E3Cu: goto label_7F383E3C;
    case 0x7F383E40u: goto label_7F383E40;
    case 0x7F383E44u: goto label_7F383E44;
    case 0x7F383E48u: goto label_7F383E48;
    case 0x7F383E4Cu: goto label_7F383E4C;
    case 0x7F383E50u: goto label_7F383E50;
    case 0x7F383E54u: goto label_7F383E54;
    case 0x7F383E58u: goto label_7F383E58;
    case 0x7F383E5Cu: goto label_7F383E5C;
    case 0x7F383E60u: goto label_7F383E60;
    case 0x7F383E64u: goto label_7F383E64;
    case 0x7F383E68u: goto label_7F383E68;
    case 0x7F383E6Cu: goto label_7F383E6C;
    case 0x7F383E70u: goto label_7F383E70;
    case 0x7F383E74u: goto label_7F383E74;
    case 0x7F383E78u: goto label_7F383E78;
    case 0x7F383E7Cu: goto label_7F383E7C;
    case 0x7F383E80u: goto label_7F383E80;
    case 0x7F383E84u: goto label_7F383E84;
    case 0x7F383E88u: goto label_7F383E88;
    case 0x7F383E8Cu: goto label_7F383E8C;
    case 0x7F383E90u: goto label_7F383E90;
    case 0x7F383E94u: goto label_7F383E94;
    case 0x7F383E98u: goto label_7F383E98;
    case 0x7F383E9Cu: goto label_7F383E9C;
    case 0x7F383EA0u: goto label_7F383EA0;
    case 0x7F383EA4u: goto label_7F383EA4;
    case 0x7F383EA8u: goto label_7F383EA8;
    case 0x7F383EACu: goto label_7F383EAC;
    case 0x7F383EB0u: goto label_7F383EB0;
    case 0x7F383EB4u: goto label_7F383EB4;
    case 0x7F383EB8u: goto label_7F383EB8;
    case 0x7F383EBCu: goto label_7F383EBC;
    case 0x7F383EC0u: goto label_7F383EC0;
    case 0x7F383EC4u: goto label_7F383EC4;
    case 0x7F383EC8u: goto label_7F383EC8;
    case 0x7F383ECCu: goto label_7F383ECC;
    case 0x7F383ED0u: goto label_7F383ED0;
    case 0x7F383ED4u: goto label_7F383ED4;
    case 0x7F383ED8u: goto label_7F383ED8;
    case 0x7F383EDCu: goto label_7F383EDC;
    case 0x7F383EE0u: goto label_7F383EE0;
    case 0x7F383EE4u: goto label_7F383EE4;
    case 0x7F383EE8u: goto label_7F383EE8;
    case 0x7F383EECu: goto label_7F383EEC;
    case 0x7F383EF0u: goto label_7F383EF0;
    case 0x7F383EF4u: goto label_7F383EF4;
    case 0x7F383EF8u: goto label_7F383EF8;
    case 0x7F383EFCu: goto label_7F383EFC;
    case 0x7F383F00u: goto label_7F383F00;
    case 0x7F383F04u: goto label_7F383F04;
    case 0x7F383F08u: goto label_7F383F08;
    case 0x7F383F0Cu: goto label_7F383F0C;
    case 0x7F383F10u: goto label_7F383F10;
    case 0x7F383F14u: goto label_7F383F14;
    case 0x7F383F18u: goto label_7F383F18;
    case 0x7F383F1Cu: goto label_7F383F1C;
    case 0x7F383F20u: goto label_7F383F20;
    case 0x7F383F24u: goto label_7F383F24;
    case 0x7F383F28u: goto label_7F383F28;
    case 0x7F383F2Cu: goto label_7F383F2C;
    case 0x7F383F30u: goto label_7F383F30;
    case 0x7F383F34u: goto label_7F383F34;
    case 0x7F383F38u: goto label_7F383F38;
    case 0x7F383F3Cu: goto label_7F383F3C;
    case 0x7F383F40u: goto label_7F383F40;
    case 0x7F383F44u: goto label_7F383F44;
    case 0x7F383F48u: goto label_7F383F48;
    case 0x7F383F4Cu: goto label_7F383F4C;
    case 0x7F383F50u: goto label_7F383F50;
    case 0x7F383F54u: goto label_7F383F54;
    case 0x7F383F58u: goto label_7F383F58;
    case 0x7F383F5Cu: goto label_7F383F5C;
    case 0x7F383F60u: goto label_7F383F60;
    case 0x7F383F64u: goto label_7F383F64;
    case 0x7F383F68u: goto label_7F383F68;
    case 0x7F383F6Cu: goto label_7F383F6C;
    case 0x7F383F70u: goto label_7F383F70;
    case 0x7F383F74u: goto label_7F383F74;
    case 0x7F383F78u: goto label_7F383F78;
    case 0x7F383F7Cu: goto label_7F383F7C;
    case 0x7F383F80u: goto label_7F383F80;
    case 0x7F383F84u: goto label_7F383F84;
    case 0x7F383F88u: goto label_7F383F88;
    case 0x7F383F8Cu: goto label_7F383F8C;
    case 0x7F383F90u: goto label_7F383F90;
    case 0x7F383F94u: goto label_7F383F94;
    case 0x7F383F98u: goto label_7F383F98;
    case 0x7F383F9Cu: goto label_7F383F9C;
    case 0x7F383FA0u: goto label_7F383FA0;
    case 0x7F383FA4u: goto label_7F383FA4;
    case 0x7F383FA8u: goto label_7F383FA8;
    case 0x7F383FACu: goto label_7F383FAC;
    case 0x7F383FB0u: goto label_7F383FB0;
    case 0x7F383FB4u: goto label_7F383FB4;
    case 0x7F383FB8u: goto label_7F383FB8;
    case 0x7F383FBCu: goto label_7F383FBC;
    case 0x7F383FC0u: goto label_7F383FC0;
    case 0x7F383FC4u: goto label_7F383FC4;
    case 0x7F383FC8u: goto label_7F383FC8;
    case 0x7F383FCCu: goto label_7F383FCC;
    case 0x7F383FD0u: goto label_7F383FD0;
    case 0x7F383FD4u: goto label_7F383FD4;
    case 0x7F383FD8u: goto label_7F383FD8;
    case 0x7F383FDCu: goto label_7F383FDC;
    case 0x7F383FE0u: goto label_7F383FE0;
    case 0x7F383FE4u: goto label_7F383FE4;
    case 0x7F383FE8u: goto label_7F383FE8;
    case 0x7F383FECu: goto label_7F383FEC;
    case 0x7F383FF0u: goto label_7F383FF0;
    case 0x7F383FF4u: goto label_7F383FF4;
    case 0x7F383FF8u: goto label_7F383FF8;
    case 0x7F383FFCu: goto label_7F383FFC;
    case 0x7F384000u: goto label_7F384000;
    case 0x7F384004u: goto label_7F384004;
    case 0x7F384008u: goto label_7F384008;
    case 0x7F38400Cu: goto label_7F38400C;
    case 0x7F384010u: goto label_7F384010;
    case 0x7F384014u: goto label_7F384014;
    case 0x7F384018u: goto label_7F384018;
    case 0x7F38401Cu: goto label_7F38401C;
    case 0x7F384020u: goto label_7F384020;
    case 0x7F384024u: goto label_7F384024;
    case 0x7F384028u: goto label_7F384028;
    case 0x7F38402Cu: goto label_7F38402C;
    case 0x7F384030u: goto label_7F384030;
    case 0x7F384034u: goto label_7F384034;
    case 0x7F384038u: goto label_7F384038;
    case 0x7F38403Cu: goto label_7F38403C;
    case 0x7F384040u: goto label_7F384040;
    case 0x7F384044u: goto label_7F384044;
    case 0x7F384048u: goto label_7F384048;
    case 0x7F38404Cu: goto label_7F38404C;
    case 0x7F384050u: goto label_7F384050;
    case 0x7F384054u: goto label_7F384054;
    case 0x7F384058u: goto label_7F384058;
    case 0x7F38405Cu: goto label_7F38405C;
    case 0x7F384060u: goto label_7F384060;
    case 0x7F384064u: goto label_7F384064;
    case 0x7F384068u: goto label_7F384068;
    case 0x7F38406Cu: goto label_7F38406C;
    case 0x7F384070u: goto label_7F384070;
    case 0x7F384074u: goto label_7F384074;
    case 0x7F384078u: goto label_7F384078;
    case 0x7F38407Cu: goto label_7F38407C;
    case 0x7F384080u: goto label_7F384080;
    case 0x7F384084u: goto label_7F384084;
    case 0x7F384088u: goto label_7F384088;
    case 0x7F38408Cu: goto label_7F38408C;
    case 0x7F384090u: goto label_7F384090;
    case 0x7F384094u: goto label_7F384094;
    case 0x7F384098u: goto label_7F384098;
    case 0x7F38409Cu: goto label_7F38409C;
    case 0x7F3840A0u: goto label_7F3840A0;
    case 0x7F3840A4u: goto label_7F3840A4;
    case 0x7F3840A8u: goto label_7F3840A8;
    case 0x7F3840ACu: goto label_7F3840AC;
    case 0x7F3840B0u: goto label_7F3840B0;
    case 0x7F3840B4u: goto label_7F3840B4;
    case 0x7F3840B8u: goto label_7F3840B8;
    case 0x7F3840BCu: goto label_7F3840BC;
    case 0x7F3840C0u: goto label_7F3840C0;
    case 0x7F3840C4u: goto label_7F3840C4;
    case 0x7F3840C8u: goto label_7F3840C8;
    case 0x7F3840CCu: goto label_7F3840CC;
    case 0x7F3840D0u: goto label_7F3840D0;
    case 0x7F3840D4u: goto label_7F3840D4;
    case 0x7F3840D8u: goto label_7F3840D8;
    case 0x7F3840DCu: goto label_7F3840DC;
    case 0x7F3840E0u: goto label_7F3840E0;
    case 0x7F3840E4u: goto label_7F3840E4;
    case 0x7F3840E8u: goto label_7F3840E8;
    default: return;
    }
label_7F3800EC:
    ctx->pc = 0x7F3800ECu;
    ctx->downcount -= 1;
    // 7F3800EC: bl      0x7F37E31C
    {
            ctx->lr = 0x7F3800F0u;
            ctx->pc = 0x7F37E31Cu;
            return;
    }

label_7F3800F0:
    ctx->pc = 0x7F3800F0u;
    ctx->downcount -= 1;
    // 7F3800F0: b       0x7F3800FC
    {
            goto label_7F3800FC;
    }

label_7F3800F4:
    ctx->pc = 0x7F3800F4u;
    ctx->downcount -= 2;
    // 7F3800F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3800F8:
    ctx->pc = 0x7F3800F8u;
    // 7F3800F8: b       0x7F380948
    {
            goto label_7F380948;
    }

label_7F3800FC:
    ctx->pc = 0x7F3800FCu;
    ctx->downcount -= 28;
    // 7F3800FC: lwz     r0, 8256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380100:
    ctx->pc = 0x7F380100u;
    // 7F380100: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F380104:
    ctx->pc = 0x7F380104u;
    // 7F380104: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380108:
    ctx->pc = 0x7F380108u;
    // 7F380108: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F38010C:
    ctx->pc = 0x7F38010Cu;
    // 7F38010C: add   r6, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F380110:
    ctx->pc = 0x7F380110u;
    // 7F380110: lwz     r5, 672(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(672);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F380114:
    ctx->pc = 0x7F380114u;
    // 7F380114: lwz     r0, 676(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(676);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380118:
    ctx->pc = 0x7F380118u;
    // 7F380118: stw     r5, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F38011C:
    ctx->pc = 0x7F38011Cu;
    // 7F38011C: stw     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380120:
    ctx->pc = 0x7F380120u;
    // 7F380120: lwz     r5, 680(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(680);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F380124:
    ctx->pc = 0x7F380124u;
    // 7F380124: lwz     r0, 684(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(684);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380128:
    ctx->pc = 0x7F380128u;
    // 7F380128: stw     r5, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F38012C:
    ctx->pc = 0x7F38012Cu;
    // 7F38012C: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380130:
    ctx->pc = 0x7F380130u;
    // 7F380130: lwz     r5, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F380134:
    ctx->pc = 0x7F380134u;
    // 7F380134: lwz     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380138:
    ctx->pc = 0x7F380138u;
    // 7F380138: stw     r5, 3764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3764);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F38013C:
    ctx->pc = 0x7F38013Cu;
    // 7F38013C: stw     r0, 3768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3768);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380140:
    ctx->pc = 0x7F380140u;
    // 7F380140: lwz     r5, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F380144:
    ctx->pc = 0x7F380144u;
    // 7F380144: lwz     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380148:
    ctx->pc = 0x7F380148u;
    // 7F380148: stw     r5, 3772(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3772);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F38014C:
    ctx->pc = 0x7F38014Cu;
    // 7F38014C: stw     r0, 3776(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3776);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380150:
    ctx->pc = 0x7F380150u;
    // 7F380150: lwz     r0, 8256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380154:
    ctx->pc = 0x7F380154u;
    // 7F380154: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F380158:
    ctx->pc = 0x7F380158u;
    // 7F380158: add   r5, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F38015C:
    ctx->pc = 0x7F38015Cu;
    // 7F38015C: lha     r0, 3232(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3232);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F380160:
    ctx->pc = 0x7F380160u;
    // 7F380160: sth     r0, 306(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(306);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F380164:
    ctx->pc = 0x7F380164u;
    // 7F380164: sth     r0, 314(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(314);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F380168:
    ctx->pc = 0x7F380168u;
    // 7F380168: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F38016Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F38016C:
    ctx->pc = 0x7F38016Cu;
    ctx->downcount -= 6;
    // 7F38016C: stw     r3, 8332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8332);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F380170:
    ctx->pc = 0x7F380170u;
    // 7F380170: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F380174:
    ctx->pc = 0x7F380174u;
    // 7F380174: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F380178:
    ctx->pc = 0x7F380178u;
    // 7F380178: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F38017C:
    ctx->pc = 0x7F38017Cu;
    // 7F38017C: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F380180:
    ctx->pc = 0x7F380180u;
    // 7F380180: bl      0x7F04272C
    {
            ctx->lr = 0x7F380184u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F380184:
    ctx->pc = 0x7F380184u;
    ctx->downcount -= 2;
    // 7F380184: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F380188:
    ctx->pc = 0x7F380188u;
    // 7F380188: bl      0x7F3C664C
    {
            ctx->lr = 0x7F38018Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F38018C:
    ctx->pc = 0x7F38018Cu;
    ctx->downcount -= 2;
    // 7F38018C: cmplwi  r3, 0x0000
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

label_7F380190:
    ctx->pc = 0x7F380190u;
    // 7F380190: bc    12, 2, 0x7F38024C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38024C;
        }
    }

label_7F380194:
    ctx->pc = 0x7F380194u;
    ctx->downcount -= 1;
    // 7F380194: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F380198u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F380198:
    ctx->pc = 0x7F380198u;
    ctx->downcount -= 2;
    // 7F380198: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F38019C:
    ctx->pc = 0x7F38019Cu;
    // 7F38019C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3801A0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3801A0:
    ctx->pc = 0x7F3801A0u;
    ctx->downcount -= 2;
    // 7F3801A0: stw     r3, 8696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8696);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3801A4:
    ctx->pc = 0x7F3801A4u;
    // 7F3801A4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3801A8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3801A8:
    ctx->pc = 0x7F3801A8u;
    ctx->downcount -= 10;
    // 7F3801A8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3801AC:
    ctx->pc = 0x7F3801ACu;
    // 7F3801AC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3801B0:
    ctx->pc = 0x7F3801B0u;
    // 7F3801B0: stw     r3, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3801B4:
    ctx->pc = 0x7F3801B4u;
    // 7F3801B4: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3801B8:
    ctx->pc = 0x7F3801B8u;
    // 7F3801B8: lfd     f1, -22448(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3801B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22448);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3801BC:
    ctx->pc = 0x7F3801BCu;
    // 7F3801BC: stw     r0, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3801C0:
    ctx->pc = 0x7F3801C0u;
    // 7F3801C0: lfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3801C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3801C4:
    ctx->pc = 0x7F3801C4u;
    // 7F3801C4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3801C4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3801C8:
    ctx->pc = 0x7F3801C8u;
    // 7F3801C8: stfs     f0, 8700(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3801C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8700);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3801CC:
    ctx->pc = 0x7F3801CCu;
    // 7F3801CC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3801D0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3801D0:
    ctx->pc = 0x7F3801D0u;
    ctx->downcount -= 10;
    // 7F3801D0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3801D4:
    ctx->pc = 0x7F3801D4u;
    // 7F3801D4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F3801D8:
    ctx->pc = 0x7F3801D8u;
    // 7F3801D8: stw     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3801DC:
    ctx->pc = 0x7F3801DCu;
    // 7F3801DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3801E0:
    ctx->pc = 0x7F3801E0u;
    // 7F3801E0: lfd     f1, -22448(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3801E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22448);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3801E4:
    ctx->pc = 0x7F3801E4u;
    // 7F3801E4: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3801E8:
    ctx->pc = 0x7F3801E8u;
    // 7F3801E8: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3801E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3801EC:
    ctx->pc = 0x7F3801ECu;
    // 7F3801EC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3801ECu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F3801F0:
    ctx->pc = 0x7F3801F0u;
    // 7F3801F0: stfs     f0, 8704(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3801F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8704);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3801F4:
    ctx->pc = 0x7F3801F4u;
    // 7F3801F4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3801F8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3801F8:
    ctx->pc = 0x7F3801F8u;
    ctx->downcount -= 14;
    // 7F3801F8: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F3801FC:
    ctx->pc = 0x7F3801FCu;
    // 7F3801FC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F380200:
    ctx->pc = 0x7F380200u;
    // 7F380200: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F380204:
    ctx->pc = 0x7F380204u;
    // 7F380204: stw     r3, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F380208:
    ctx->pc = 0x7F380208u;
    // 7F380208: addi    r5, r4, -22448
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22448);

label_7F38020C:
    ctx->pc = 0x7F38020Cu;
    // 7F38020C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F380210:
    ctx->pc = 0x7F380210u;
    // 7F380210: stw     r0, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380214:
    ctx->pc = 0x7F380214u;
    // 7F380214: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F380218:
    ctx->pc = 0x7F380218u;
    // 7F380218: lfd     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F380218u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F38021C:
    ctx->pc = 0x7F38021Cu;
    // 7F38021C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F380220:
    ctx->pc = 0x7F380220u;
    // 7F380220: lfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F380224:
    ctx->pc = 0x7F380224u;
    // 7F380224: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F380224u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F380228:
    ctx->pc = 0x7F380228u;
    // 7F380228: stfs     f0, 8708(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380228u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8708);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F38022C:
    ctx->pc = 0x7F38022Cu;
    // 7F38022C: bl      0x7F04272C
    {
            ctx->lr = 0x7F380230u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F380230:
    ctx->pc = 0x7F380230u;
    ctx->downcount -= 3;
    // 7F380230: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F380234:
    ctx->pc = 0x7F380234u;
    // 7F380234: addi    r4, r31, 136
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(136);

label_7F380238:
    ctx->pc = 0x7F380238u;
    // 7F380238: bl      0x7F042B20
    {
            ctx->lr = 0x7F38023Cu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F38023C:
    ctx->pc = 0x7F38023Cu;
    ctx->downcount -= 3;
    // 7F38023C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380240:
    ctx->pc = 0x7F380240u;
    // 7F380240: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F380244:
    ctx->pc = 0x7F380244u;
    // 7F380244: bl      0x7F3B0938
    {
            ctx->lr = 0x7F380248u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F380248:
    ctx->pc = 0x7F380248u;
    ctx->downcount -= 1;
    // 7F380248: b       0x7F380254
    {
            goto label_7F380254;
    }

label_7F38024C:
    ctx->pc = 0x7F38024Cu;
    ctx->downcount -= 2;
    // 7F38024C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F380250:
    ctx->pc = 0x7F380250u;
    // 7F380250: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380254:
    ctx->pc = 0x7F380254u;
    ctx->downcount -= 3;
    // 7F380254: addi    r3, r31, 272
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(272);

label_7F380258:
    ctx->pc = 0x7F380258u;
    // 7F380258: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F38025C:
    ctx->pc = 0x7F38025Cu;
    // 7F38025C: bl      0x7F023E5C
    {
            ctx->lr = 0x7F380260u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F380260:
    ctx->pc = 0x7F380260u;
    ctx->downcount -= 3;
    // 7F380260: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F380264:
    ctx->pc = 0x7F380264u;
    // 7F380264: addi    r4, r31, 288
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(288);

label_7F380268:
    ctx->pc = 0x7F380268u;
    // 7F380268: bl      0x7F042B6C
    {
            ctx->lr = 0x7F38026Cu;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F38026C:
    ctx->pc = 0x7F38026Cu;
    ctx->downcount -= 5;
    // 7F38026C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F380270:
    ctx->pc = 0x7F380270u;
    // 7F380270: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F380274:
    ctx->pc = 0x7F380274u;
    // 7F380274: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380278:
    ctx->pc = 0x7F380278u;
    // 7F380278: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F38027C:
    ctx->pc = 0x7F38027Cu;
    // 7F38027C: bl      0x7F042C2C
    {
            ctx->lr = 0x7F380280u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F380280:
    ctx->pc = 0x7F380280u;
    ctx->downcount -= 12;
    // 7F380280: lwz     r0, 8256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380284:
    ctx->pc = 0x7F380284u;
    // 7F380284: lis     r5, 16
    ctx->gpr[5] = ((u32)(s32)(16) << 16);

label_7F380288:
    ctx->pc = 0x7F380288u;
    // 7F380288: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F38028C:
    ctx->pc = 0x7F38028Cu;
    // 7F38028C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380290:
    ctx->pc = 0x7F380290u;
    // 7F380290: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F380294:
    ctx->pc = 0x7F380294u;
    // 7F380294: addi    r8, r5, -1
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F380298:
    ctx->pc = 0x7F380298u;
    // 7F380298: add   r5, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F38029C:
    ctx->pc = 0x7F38029Cu;
    // 7F38029C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3802A0:
    ctx->pc = 0x7F3802A0u;
    // 7F3802A0: lha     r5, 2976(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2976);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3802A4:
    ctx->pc = 0x7F3802A4u;
    // 7F3802A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3802A8:
    ctx->pc = 0x7F3802A8u;
    // 7F3802A8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3802AC:
    ctx->pc = 0x7F3802ACu;
    // 7F3802AC: bl      0x7F042C94
    {
            ctx->lr = 0x7F3802B0u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F3802B0:
    ctx->pc = 0x7F3802B0u;
    ctx->downcount -= 3;
    // 7F3802B0: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3802B4:
    ctx->pc = 0x7F3802B4u;
    // 7F3802B4: addi    r4, r31, 136
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(136);

label_7F3802B8:
    ctx->pc = 0x7F3802B8u;
    // 7F3802B8: bl      0x7F042B20
    {
            ctx->lr = 0x7F3802BCu;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F3802BC:
    ctx->pc = 0x7F3802BCu;
    ctx->downcount -= 2;
    // 7F3802BC: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3802C0:
    ctx->pc = 0x7F3802C0u;
    // 7F3802C0: bl      0x7F04291C
    {
            ctx->lr = 0x7F3802C4u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F3802C4:
    ctx->pc = 0x7F3802C4u;
    ctx->downcount -= 2;
    // 7F3802C4: addi    r3, r31, 272
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(272);

label_7F3802C8:
    ctx->pc = 0x7F3802C8u;
    // 7F3802C8: bl      0x7F023EA8
    {
            ctx->lr = 0x7F3802CCu;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F3802CC:
    ctx->pc = 0x7F3802CCu;
    ctx->downcount -= 8;
    // 7F3802CC: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3802D0:
    ctx->pc = 0x7F3802D0u;
    // 7F3802D0: addi    r3, r31, 272
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(272);

label_7F3802D4:
    ctx->pc = 0x7F3802D4u;
    // 7F3802D4: lfs     f1, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3802D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3802D8:
    ctx->pc = 0x7F3802D8u;
    // 7F3802D8: addi    r4, r31, 304
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(304);

label_7F3802DC:
    ctx->pc = 0x7F3802DCu;
    // 7F3802DC: lfs     f0, 72(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3802DCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3802E0:
    ctx->pc = 0x7F3802E0u;
    // 7F3802E0: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3802E0u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F3802E4:
    ctx->pc = 0x7F3802E4u;
    // 7F3802E4: stfs     f0, 276(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3802E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3802E8:
    ctx->pc = 0x7F3802E8u;
    // 7F3802E8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F3802ECu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F3802EC:
    ctx->pc = 0x7F3802ECu;
    ctx->downcount -= 2;
    // 7F3802EC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3802F0:
    ctx->pc = 0x7F3802F0u;
    // 7F3802F0: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F3802F4u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F3802F4:
    ctx->pc = 0x7F3802F4u;
    ctx->downcount -= 5;
    // 7F3802F4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3802F8:
    ctx->pc = 0x7F3802F8u;
    // 7F3802F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3802FC:
    ctx->pc = 0x7F3802FCu;
    // 7F3802FC: stw     r0, 8324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380300:
    ctx->pc = 0x7F380300u;
    // 7F380300: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F380304:
    ctx->pc = 0x7F380304u;
    // 7F380304: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F380308u;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F380308:
    ctx->pc = 0x7F380308u;
    ctx->downcount -= 3;
    // 7F380308: lwz     r0, 8328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38030C:
    ctx->pc = 0x7F38030Cu;
    // 7F38030C: rlwinm. r0, r0, 0, 30, 30
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

label_7F380310:
    ctx->pc = 0x7F380310u;
    // 7F380310: bc    12, 2, 0x7F3803A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3803A0;
        }
    }

label_7F380314:
    ctx->pc = 0x7F380314u;
    ctx->downcount -= 5;
    // 7F380314: lwz     r6, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F380318:
    ctx->pc = 0x7F380318u;
    // 7F380318: addi    r3, r31, 3796
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3796);

label_7F38031C:
    ctx->pc = 0x7F38031Cu;
    // 7F38031C: addi    r4, r31, 272
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(272);

label_7F380320:
    ctx->pc = 0x7F380320u;
    // 7F380320: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F380324:
    ctx->pc = 0x7F380324u;
    // 7F380324: bl      0x7F0120F4
    {
            ctx->lr = 0x7F380328u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F380328:
    ctx->pc = 0x7F380328u;
    ctx->downcount -= 5;
    // 7F380328: li      r0, 1024
    ctx->gpr[0] = (u32)(s32)(1024);

label_7F38032C:
    ctx->pc = 0x7F38032Cu;
    // 7F38032C: sth     r0, 3804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3804);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F380330:
    ctx->pc = 0x7F380330u;
    // 7F380330: lwz     r3, 8328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380334:
    ctx->pc = 0x7F380334u;
    // 7F380334: rlwinm. r0, r3, 0, 24, 24
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

label_7F380338:
    ctx->pc = 0x7F380338u;
    // 7F380338: bc    12, 2, 0x7F380348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380348;
        }
    }

label_7F38033C:
    ctx->pc = 0x7F38033Cu;
    ctx->downcount -= 3;
    // 7F38033C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F380340:
    ctx->pc = 0x7F380340u;
    // 7F380340: sth     r0, 3806(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3806);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F380344:
    ctx->pc = 0x7F380344u;
    // 7F380344: b       0x7F380384
    {
            goto label_7F380384;
    }

label_7F380348:
    ctx->pc = 0x7F380348u;
    ctx->downcount -= 2;
    // 7F380348: rlwinm. r0, r3, 0, 23, 23
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000100u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F38034C:
    ctx->pc = 0x7F38034Cu;
    // 7F38034C: bc    12, 2, 0x7F38037C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38037C;
        }
    }

label_7F380350:
    ctx->pc = 0x7F380350u;
    ctx->downcount -= 11;
    // 7F380350: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F380354:
    ctx->pc = 0x7F380354u;
    // 7F380354: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380358:
    ctx->pc = 0x7F380358u;
    // 7F380358: sth     r0, 3806(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3806);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F38035C:
    ctx->pc = 0x7F38035Cu;
    // 7F38035C: li      r0, 512
    ctx->gpr[0] = (u32)(s32)(512);

label_7F380360:
    ctx->pc = 0x7F380360u;
    // 7F380360: lfs     f0, -22364(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380360u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22364);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380364:
    ctx->pc = 0x7F380364u;
    // 7F380364: sth     r0, 3804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3804);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F380368:
    ctx->pc = 0x7F380368u;
    // 7F380368: lhz     r0, 3800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3800);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F38036C:
    ctx->pc = 0x7F38036Cu;
    // 7F38036C: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F380370:
    ctx->pc = 0x7F380370u;
    // 7F380370: sth     r0, 3800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3800);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F380374:
    ctx->pc = 0x7F380374u;
    // 7F380374: stfs     f0, 3816(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380374u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3816);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380378:
    ctx->pc = 0x7F380378u;
    // 7F380378: b       0x7F380384
    {
            goto label_7F380384;
    }

label_7F38037C:
    ctx->pc = 0x7F38037Cu;
    ctx->downcount -= 2;
    // 7F38037C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F380380:
    ctx->pc = 0x7F380380u;
    // 7F380380: sth     r0, 3806(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3806);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F380384:
    ctx->pc = 0x7F380384u;
    ctx->downcount -= 7;
    // 7F380384: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380388:
    ctx->pc = 0x7F380388u;
    // 7F380388: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F38038C:
    ctx->pc = 0x7F38038Cu;
    // 7F38038C: addi    r5, r3, -22364
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22364);

label_7F380390:
    ctx->pc = 0x7F380390u;
    // 7F380390: lfs     f2, -22360(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F380390u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22360);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F380394:
    ctx->pc = 0x7F380394u;
    // 7F380394: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F380394u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380398:
    ctx->pc = 0x7F380398u;
    // 7F380398: addi    r3, r31, 3796
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3796);

label_7F38039C:
    ctx->pc = 0x7F38039Cu;
    // 7F38039C: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F3803A0u;
            ctx->pc = 0x7F03C1DCu;
            return;
    }

label_7F3803A0:
    ctx->pc = 0x7F3803A0u;
    ctx->downcount -= 4;
    // 7F3803A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3803A4:
    ctx->pc = 0x7F3803A4u;
    // 7F3803A4: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F3803A8:
    ctx->pc = 0x7F3803A8u;
    // 7F3803A8: stw     r0, 8248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3803AC:
    ctx->pc = 0x7F3803ACu;
    // 7F3803AC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3803B0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3803B0:
    ctx->pc = 0x7F3803B0u;
    ctx->downcount -= 2;
    // 7F3803B0: cmplwi  r3, 0x0000
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

label_7F3803B4:
    ctx->pc = 0x7F3803B4u;
    // 7F3803B4: bc    12, 2, 0x7F38040C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38040C;
        }
    }

label_7F3803B8:
    ctx->pc = 0x7F3803B8u;
    ctx->downcount -= 3;
    // 7F3803B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3803BC:
    ctx->pc = 0x7F3803BCu;
    // 7F3803BC: stw     r0, 8248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3803C0:
    ctx->pc = 0x7F3803C0u;
    // 7F3803C0: b       0x7F380400
    {
            goto label_7F380400;
    }

label_7F3803C4:
    ctx->downcount -= 1;
    // 7F3803C4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3803C8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3803C8:
    ctx->downcount -= 2;
    // 7F3803C8: cmplwi  r3, 0x0000
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

label_7F3803CC:
    // 7F3803CC: bc    12, 2, 0x7F38040C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38040C;
        }
    }

label_7F3803D0:
    ctx->downcount -= 1;
    // 7F3803D0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3803D4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3803D4:
    ctx->pc = 0x7F3803D4u;
    ctx->downcount -= 5;
    // 7F3803D4: lwz     r0, 8248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3803D8:
    // 7F3803D8: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3803DC:
    // 7F3803DC: addi    r0, r4, 8208
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8208);

label_7F3803E0:
    ctx->pc = 0x7F3803E0u;
    // 7F3803E0: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3803E4:
    // 7F3803E4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3803E8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3803E8:
    ctx->pc = 0x7F3803E8u;
    ctx->downcount -= 6;
    // 7F3803E8: lwz     r4, 8248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3803EC:
    // 7F3803EC: addi    r0, r4, 8240
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8240);

label_7F3803F0:
    ctx->pc = 0x7F3803F0u;
    // 7F3803F0: stbx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F3803F4:
    ctx->pc = 0x7F3803F4u;
    // 7F3803F4: lwz     r3, 8248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3803F8:
    // 7F3803F8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3803FC:
    ctx->pc = 0x7F3803FCu;
    // 7F3803FC: stw     r0, 8248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380400:
    ctx->pc = 0x7F380400u;
    ctx->downcount -= 3;
    // 7F380400: lwz     r0, 8248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380404:
    // 7F380404: cmpwi   r0, 8
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

label_7F380408:
    // 7F380408: bc    12, 0, 0x7F3803C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3803C4u;
                return;
            }
            goto label_7F3803C4;
        }
    }

label_7F38040C:
    ctx->pc = 0x7F38040Cu;
    ctx->downcount -= 3;
    // 7F38040C: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F380410:
    ctx->pc = 0x7F380410u;
    // 7F380410: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380414:
    ctx->pc = 0x7F380414u;
    // 7F380414: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F380418u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F380418:
    ctx->pc = 0x7F380418u;
    ctx->downcount -= 4;
    // 7F380418: stw     r3, 8392(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8392);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38041C:
    ctx->pc = 0x7F38041Cu;
    // 7F38041C: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F380420:
    ctx->pc = 0x7F380420u;
    // 7F380420: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380424:
    ctx->pc = 0x7F380424u;
    // 7F380424: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F380428u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F380428:
    ctx->pc = 0x7F380428u;
    ctx->downcount -= 4;
    // 7F380428: stw     r3, 8396(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8396);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38042C:
    ctx->pc = 0x7F38042Cu;
    // 7F38042C: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F380430:
    ctx->pc = 0x7F380430u;
    // 7F380430: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380434:
    ctx->pc = 0x7F380434u;
    // 7F380434: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F380438u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F380438:
    ctx->pc = 0x7F380438u;
    ctx->downcount -= 4;
    // 7F380438: stw     r3, 8644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8644);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38043C:
    ctx->pc = 0x7F38043Cu;
    // 7F38043C: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F380440:
    ctx->pc = 0x7F380440u;
    // 7F380440: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380444:
    ctx->pc = 0x7F380444u;
    // 7F380444: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F380448u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F380448:
    ctx->pc = 0x7F380448u;
    ctx->downcount -= 4;
    // 7F380448: stw     r3, 8640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8640);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38044C:
    ctx->pc = 0x7F38044Cu;
    // 7F38044C: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F380450:
    ctx->pc = 0x7F380450u;
    // 7F380450: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380454:
    ctx->pc = 0x7F380454u;
    // 7F380454: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F380458u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F380458:
    ctx->pc = 0x7F380458u;
    ctx->downcount -= 3;
    // 7F380458: stw     r3, 8648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8648);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38045C:
    ctx->pc = 0x7F38045Cu;
    // 7F38045C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380460:
    ctx->pc = 0x7F380460u;
    // 7F380460: bl      0x7F38095C
    {
            ctx->lr = 0x7F380464u;
            goto label_7F38095C;
    }

label_7F380464:
    ctx->pc = 0x7F380464u;
    ctx->downcount -= 5;
    // 7F380464: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F380468:
    ctx->pc = 0x7F380468u;
    // 7F380468: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F38046C:
    ctx->pc = 0x7F38046Cu;
    // 7F38046C: stw     r0, 8384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380470:
    ctx->pc = 0x7F380470u;
    // 7F380470: stw     r0, 8388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8388);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380474:
    ctx->pc = 0x7F380474u;
    // 7F380474: bl      0x7F3C664C
    {
            ctx->lr = 0x7F380478u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F380478:
    ctx->pc = 0x7F380478u;
    ctx->downcount -= 2;
    // 7F380478: cmplwi  r3, 0x0000
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

label_7F38047C:
    ctx->pc = 0x7F38047Cu;
    // 7F38047C: bc    12, 2, 0x7F3804C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3804C0;
        }
    }

label_7F380480:
    ctx->pc = 0x7F380480u;
    ctx->downcount -= 1;
    // 7F380480: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F380484u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F380484:
    ctx->pc = 0x7F380484u;
    ctx->downcount -= 3;
    // 7F380484: stw     r3, 8388(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F380488:
    ctx->pc = 0x7F380488u;
    // 7F380488: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F38048C:
    ctx->pc = 0x7F38048Cu;
    // 7F38048C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F380490:
    ctx->downcount -= 1;
    // 7F380490: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F380494u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F380494:
    ctx->downcount -= 2;
    // 7F380494: cmplwi  r3, 0x0000
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

label_7F380498:
    // 7F380498: bc    12, 2, 0x7F3804C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3804C0;
        }
    }

label_7F38049C:
    ctx->downcount -= 1;
    // 7F38049C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3804A0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3804A0:
    ctx->downcount -= 8;
    // 7F3804A0: addi    r4, r28, 8368
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(8368);

label_7F3804A4:
    // 7F3804A4: addi    r0, r29, 1
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(1);

label_7F3804A8:
    ctx->pc = 0x7F3804A8u;
    // 7F3804A8: stwx    r3, r31, r4
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[4];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3804AC:
    // 7F3804AC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F3804B0:
    // 7F3804B0: cmpwi   r29, 4
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3804B4:
    // 7F3804B4: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F3804B8:
    ctx->pc = 0x7F3804B8u;
    // 7F3804B8: stw     r0, 8384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3804BC:
    // 7F3804BC: bc    12, 0, 0x7F380490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F380490u;
                return;
            }
            goto label_7F380490;
        }
    }

label_7F3804C0:
    ctx->pc = 0x7F3804C0u;
    ctx->downcount -= 4;
    // 7F3804C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3804C4:
    ctx->pc = 0x7F3804C4u;
    // 7F3804C4: li      r3, 113
    ctx->gpr[3] = (u32)(s32)(113);

label_7F3804C8:
    ctx->pc = 0x7F3804C8u;
    // 7F3804C8: stw     r0, 8400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8400);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3804CC:
    ctx->pc = 0x7F3804CCu;
    // 7F3804CC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3804D0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3804D0:
    ctx->pc = 0x7F3804D0u;
    ctx->downcount -= 2;
    // 7F3804D0: cmplwi  r3, 0x0000
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

label_7F3804D4:
    ctx->pc = 0x7F3804D4u;
    // 7F3804D4: bc    12, 2, 0x7F3804EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3804EC;
        }
    }

label_7F3804D8:
    ctx->pc = 0x7F3804D8u;
    ctx->downcount -= 1;
    // 7F3804D8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3804DCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3804DC:
    ctx->pc = 0x7F3804DCu;
    ctx->downcount -= 3;
    // 7F3804DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3804E0:
    ctx->pc = 0x7F3804E0u;
    // 7F3804E0: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3804E4:
    ctx->pc = 0x7F3804E4u;
    // 7F3804E4: bl      0x7F0E2BF0
    {
            ctx->lr = 0x7F3804E8u;
            ctx->pc = 0x7F0E2BF0u;
            return;
    }

label_7F3804E8:
    ctx->pc = 0x7F3804E8u;
    ctx->downcount -= 1;
    // 7F3804E8: stw     r3, 8400(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8400);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3804EC:
    ctx->pc = 0x7F3804ECu;
    ctx->downcount -= 2;
    // 7F3804EC: li      r3, 72
    ctx->gpr[3] = (u32)(s32)(72);

label_7F3804F0:
    ctx->pc = 0x7F3804F0u;
    // 7F3804F0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3804F4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3804F4:
    ctx->pc = 0x7F3804F4u;
    ctx->downcount -= 2;
    // 7F3804F4: cmplwi  r3, 0x0000
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

label_7F3804F8:
    ctx->pc = 0x7F3804F8u;
    // 7F3804F8: bc    12, 2, 0x7F380864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380864;
        }
    }

label_7F3804FC:
    ctx->pc = 0x7F3804FCu;
    ctx->downcount -= 1;
    // 7F3804FC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F380500u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F380500:
    ctx->pc = 0x7F380500u;
    ctx->downcount -= 2;
    // 7F380500: cmpwi   r3, 8
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F380504:
    ctx->pc = 0x7F380504u;
    // 7F380504: bc    12, 2, 0x7F380660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380660;
        }
    }

label_7F380508:
    ctx->pc = 0x7F380508u;
    ctx->downcount -= 1;
    // 7F380508: bc    4, 0, 0x7F380534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380534;
        }
    }

label_7F38050C:
    ctx->pc = 0x7F38050Cu;
    ctx->downcount -= 2;
    // 7F38050C: cmpwi   r3, 3
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

label_7F380510:
    ctx->pc = 0x7F380510u;
    // 7F380510: bc    12, 2, 0x7F380864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380864;
        }
    }

label_7F380514:
    ctx->pc = 0x7F380514u;
    ctx->downcount -= 1;
    // 7F380514: bc    4, 0, 0x7F380528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380528;
        }
    }

label_7F380518:
    ctx->pc = 0x7F380518u;
    ctx->downcount -= 2;
    // 7F380518: cmpwi   r3, 1
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

label_7F38051C:
    ctx->pc = 0x7F38051Cu;
    // 7F38051C: bc    12, 2, 0x7F380558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380558;
        }
    }

label_7F380520:
    ctx->pc = 0x7F380520u;
    ctx->downcount -= 1;
    // 7F380520: bc    4, 0, 0x7F3805B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3805B0;
        }
    }

label_7F380524:
    ctx->pc = 0x7F380524u;
    ctx->downcount -= 1;
    // 7F380524: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F380528:
    ctx->pc = 0x7F380528u;
    ctx->downcount -= 2;
    // 7F380528: cmpwi   r3, 5
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

label_7F38052C:
    ctx->pc = 0x7F38052Cu;
    // 7F38052C: bc    4, 0, 0x7F380864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380864;
        }
    }

label_7F380530:
    ctx->pc = 0x7F380530u;
    ctx->downcount -= 1;
    // 7F380530: b       0x7F380608
    {
            goto label_7F380608;
    }

label_7F380534:
    ctx->pc = 0x7F380534u;
    ctx->downcount -= 2;
    // 7F380534: cmpwi   r3, 32
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

label_7F380538:
    ctx->pc = 0x7F380538u;
    // 7F380538: bc    12, 2, 0x7F380764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380764;
        }
    }

label_7F38053C:
    ctx->pc = 0x7F38053Cu;
    ctx->downcount -= 1;
    // 7F38053C: bc    4, 0, 0x7F38054C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38054C;
        }
    }

label_7F380540:
    ctx->pc = 0x7F380540u;
    ctx->downcount -= 2;
    // 7F380540: cmpwi   r3, 16
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F380544:
    ctx->pc = 0x7F380544u;
    // 7F380544: bc    12, 2, 0x7F38070C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38070C;
        }
    }

label_7F380548:
    ctx->pc = 0x7F380548u;
    ctx->downcount -= 1;
    // 7F380548: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F38054C:
    ctx->pc = 0x7F38054Cu;
    ctx->downcount -= 2;
    // 7F38054C: cmpwi   r3, 64
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

label_7F380550:
    ctx->pc = 0x7F380550u;
    // 7F380550: bc    12, 2, 0x7F3807BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3807BC;
        }
    }

label_7F380554:
    ctx->pc = 0x7F380554u;
    ctx->downcount -= 1;
    // 7F380554: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F380558:
    ctx->pc = 0x7F380558u;
    ctx->downcount -= 18;
    // 7F380558: lis     r4, 246
    ctx->gpr[4] = ((u32)(s32)(246) << 16);

label_7F38055C:
    ctx->pc = 0x7F38055Cu;
    // 7F38055C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380560:
    ctx->pc = 0x7F380560u;
    // 7F380560: addi    r0, r4, 5933
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5933);

label_7F380564:
    ctx->pc = 0x7F380564u;
    // 7F380564: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F380568:
    ctx->pc = 0x7F380568u;
    // 7F380568: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38056C:
    ctx->pc = 0x7F38056Cu;
    // 7F38056C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380570:
    ctx->pc = 0x7F380570u;
    // 7F380570: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F380574:
    ctx->pc = 0x7F380574u;
    // 7F380574: lis     r5, 4
    ctx->gpr[5] = ((u32)(s32)(4) << 16);

label_7F380578:
    ctx->pc = 0x7F380578u;
    // 7F380578: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F38057C:
    ctx->pc = 0x7F38057Cu;
    // 7F38057C: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F380580:
    ctx->pc = 0x7F380580u;
    // 7F380580: lfs     f1, -22356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380580u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380584:
    ctx->pc = 0x7F380584u;
    // 7F380584: addi    r3, r5, -16498
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-16498);

label_7F380588:
    ctx->pc = 0x7F380588u;
    // 7F380588: addi    r4, r4, 5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5872);

label_7F38058C:
    ctx->pc = 0x7F38058Cu;
    // 7F38058C: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F380590:
    ctx->pc = 0x7F380590u;
    // 7F380590: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F380594:
    ctx->pc = 0x7F380594u;
    // 7F380594: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F380598:
    ctx->pc = 0x7F380598u;
    // 7F380598: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F38059C:
    ctx->pc = 0x7F38059Cu;
    // 7F38059C: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F3805A0u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F3805A0:
    ctx->pc = 0x7F3805A0u;
    ctx->downcount -= 3;
    // 7F3805A0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3805A4:
    ctx->pc = 0x7F3805A4u;
    // 7F3805A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3805A8:
    ctx->pc = 0x7F3805A8u;
    // 7F3805A8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3805ACu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3805AC:
    ctx->pc = 0x7F3805ACu;
    ctx->downcount -= 1;
    // 7F3805AC: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F3805B0:
    ctx->pc = 0x7F3805B0u;
    ctx->downcount -= 18;
    // 7F3805B0: lis     r4, 246
    ctx->gpr[4] = ((u32)(s32)(246) << 16);

label_7F3805B4:
    ctx->pc = 0x7F3805B4u;
    // 7F3805B4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3805B8:
    ctx->pc = 0x7F3805B8u;
    // 7F3805B8: addi    r0, r4, 5933
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5933);

label_7F3805BC:
    ctx->pc = 0x7F3805BCu;
    // 7F3805BC: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F3805C0:
    ctx->pc = 0x7F3805C0u;
    // 7F3805C0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3805C4:
    ctx->pc = 0x7F3805C4u;
    // 7F3805C4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3805C8:
    ctx->pc = 0x7F3805C8u;
    // 7F3805C8: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F3805CC:
    ctx->pc = 0x7F3805CCu;
    // 7F3805CC: lis     r5, 4
    ctx->gpr[5] = ((u32)(s32)(4) << 16);

label_7F3805D0:
    ctx->pc = 0x7F3805D0u;
    // 7F3805D0: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F3805D4:
    ctx->pc = 0x7F3805D4u;
    // 7F3805D4: lis     r4, 122
    ctx->gpr[4] = ((u32)(s32)(122) << 16);

label_7F3805D8:
    ctx->pc = 0x7F3805D8u;
    // 7F3805D8: lfs     f1, -22356(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3805D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22356);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3805DC:
    ctx->pc = 0x7F3805DCu;
    // 7F3805DC: addi    r3, r5, -16498
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-16498);

label_7F3805E0:
    ctx->pc = 0x7F3805E0u;
    // 7F3805E0: addi    r4, r4, -2035
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2035);

label_7F3805E4:
    ctx->pc = 0x7F3805E4u;
    // 7F3805E4: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3805E8:
    ctx->pc = 0x7F3805E8u;
    // 7F3805E8: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F3805EC:
    ctx->pc = 0x7F3805ECu;
    // 7F3805EC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3805F0:
    ctx->pc = 0x7F3805F0u;
    // 7F3805F0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3805F4:
    ctx->pc = 0x7F3805F4u;
    // 7F3805F4: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F3805F8u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F3805F8:
    ctx->pc = 0x7F3805F8u;
    ctx->downcount -= 3;
    // 7F3805F8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3805FC:
    ctx->pc = 0x7F3805FCu;
    // 7F3805FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380600:
    ctx->pc = 0x7F380600u;
    // 7F380600: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F380604u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F380604:
    ctx->pc = 0x7F380604u;
    ctx->downcount -= 1;
    // 7F380604: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F380608:
    ctx->pc = 0x7F380608u;
    ctx->downcount -= 18;
    // 7F380608: lis     r4, 214
    ctx->gpr[4] = ((u32)(s32)(214) << 16);

label_7F38060C:
    ctx->pc = 0x7F38060Cu;
    // 7F38060C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380610:
    ctx->pc = 0x7F380610u;
    // 7F380610: addi    r0, r4, 6196
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(6196);

label_7F380614:
    ctx->pc = 0x7F380614u;
    // 7F380614: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F380618:
    ctx->pc = 0x7F380618u;
    // 7F380618: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38061C:
    ctx->pc = 0x7F38061Cu;
    // 7F38061C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380620:
    ctx->pc = 0x7F380620u;
    // 7F380620: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F380624:
    ctx->pc = 0x7F380624u;
    // 7F380624: lis     r5, 252
    ctx->gpr[5] = ((u32)(s32)(252) << 16);

label_7F380628:
    ctx->pc = 0x7F380628u;
    // 7F380628: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F38062C:
    ctx->pc = 0x7F38062Cu;
    // 7F38062C: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F380630:
    ctx->pc = 0x7F380630u;
    // 7F380630: lfs     f1, -22352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380630u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380634:
    ctx->pc = 0x7F380634u;
    // 7F380634: addi    r3, r5, -1681
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-1681);

label_7F380638:
    ctx->pc = 0x7F380638u;
    // 7F380638: addi    r4, r4, 10078
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10078);

label_7F38063C:
    ctx->pc = 0x7F38063Cu;
    // 7F38063C: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F380640:
    ctx->pc = 0x7F380640u;
    // 7F380640: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F380644:
    ctx->pc = 0x7F380644u;
    // 7F380644: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F380648:
    ctx->pc = 0x7F380648u;
    // 7F380648: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F38064C:
    ctx->pc = 0x7F38064Cu;
    // 7F38064C: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F380650u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F380650:
    ctx->pc = 0x7F380650u;
    ctx->downcount -= 3;
    // 7F380650: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380654:
    ctx->pc = 0x7F380654u;
    // 7F380654: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380658:
    ctx->pc = 0x7F380658u;
    // 7F380658: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F38065Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F38065C:
    ctx->pc = 0x7F38065Cu;
    ctx->downcount -= 1;
    // 7F38065C: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F380660:
    ctx->pc = 0x7F380660u;
    ctx->downcount -= 18;
    // 7F380660: lis     r4, 59
    ctx->gpr[4] = ((u32)(s32)(59) << 16);

label_7F380664:
    ctx->pc = 0x7F380664u;
    // 7F380664: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380668:
    ctx->pc = 0x7F380668u;
    // 7F380668: addi    r0, r4, -17103
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17103);

label_7F38066C:
    ctx->pc = 0x7F38066Cu;
    // 7F38066C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F380670:
    ctx->pc = 0x7F380670u;
    // 7F380670: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F380674:
    ctx->pc = 0x7F380674u;
    // 7F380674: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380678:
    ctx->pc = 0x7F380678u;
    // 7F380678: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F38067C:
    ctx->pc = 0x7F38067Cu;
    // 7F38067C: lis     r5, 199
    ctx->gpr[5] = ((u32)(s32)(199) << 16);

label_7F380680:
    ctx->pc = 0x7F380680u;
    // 7F380680: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F380684:
    ctx->pc = 0x7F380684u;
    // 7F380684: lis     r4, 72
    ctx->gpr[4] = ((u32)(s32)(72) << 16);

label_7F380688:
    ctx->pc = 0x7F380688u;
    // 7F380688: lfs     f1, -22348(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380688u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F38068C:
    ctx->pc = 0x7F38068Cu;
    // 7F38068C: addi    r3, r5, 11444
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(11444);

label_7F380690:
    ctx->pc = 0x7F380690u;
    // 7F380690: addi    r4, r4, 1607
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1607);

label_7F380694:
    ctx->pc = 0x7F380694u;
    // 7F380694: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F380698:
    ctx->pc = 0x7F380698u;
    // 7F380698: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F38069C:
    ctx->pc = 0x7F38069Cu;
    // 7F38069C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3806A0:
    ctx->pc = 0x7F3806A0u;
    // 7F3806A0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3806A4:
    ctx->pc = 0x7F3806A4u;
    // 7F3806A4: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F3806A8u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F3806A8:
    ctx->pc = 0x7F3806A8u;
    ctx->downcount -= 3;
    // 7F3806A8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3806AC:
    ctx->pc = 0x7F3806ACu;
    // 7F3806AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3806B0:
    ctx->pc = 0x7F3806B0u;
    // 7F3806B0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3806B4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3806B4:
    ctx->pc = 0x7F3806B4u;
    ctx->downcount -= 18;
    // 7F3806B4: lis     r4, 59
    ctx->gpr[4] = ((u32)(s32)(59) << 16);

label_7F3806B8:
    ctx->pc = 0x7F3806B8u;
    // 7F3806B8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3806BC:
    ctx->pc = 0x7F3806BCu;
    // 7F3806BC: addi    r0, r4, -17103
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17103);

label_7F3806C0:
    ctx->pc = 0x7F3806C0u;
    // 7F3806C0: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F3806C4:
    ctx->pc = 0x7F3806C4u;
    // 7F3806C4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3806C8:
    ctx->pc = 0x7F3806C8u;
    // 7F3806C8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3806CC:
    ctx->pc = 0x7F3806CCu;
    // 7F3806CC: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F3806D0:
    ctx->pc = 0x7F3806D0u;
    // 7F3806D0: lis     r5, 199
    ctx->gpr[5] = ((u32)(s32)(199) << 16);

label_7F3806D4:
    ctx->pc = 0x7F3806D4u;
    // 7F3806D4: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F3806D8:
    ctx->pc = 0x7F3806D8u;
    // 7F3806D8: lis     r4, 239
    ctx->gpr[4] = ((u32)(s32)(239) << 16);

label_7F3806DC:
    ctx->pc = 0x7F3806DCu;
    // 7F3806DC: lfs     f1, -22344(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3806DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22344);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3806E0:
    ctx->pc = 0x7F3806E0u;
    // 7F3806E0: addi    r3, r5, 11444
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(11444);

label_7F3806E4:
    ctx->pc = 0x7F3806E4u;
    // 7F3806E4: addi    r4, r4, 2369
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2369);

label_7F3806E8:
    ctx->pc = 0x7F3806E8u;
    // 7F3806E8: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3806EC:
    ctx->pc = 0x7F3806ECu;
    // 7F3806EC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F3806F0:
    ctx->pc = 0x7F3806F0u;
    // 7F3806F0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3806F4:
    ctx->pc = 0x7F3806F4u;
    // 7F3806F4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3806F8:
    ctx->pc = 0x7F3806F8u;
    // 7F3806F8: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F3806FCu;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F3806FC:
    ctx->pc = 0x7F3806FCu;
    ctx->downcount -= 3;
    // 7F3806FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380700:
    ctx->pc = 0x7F380700u;
    // 7F380700: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380704:
    ctx->pc = 0x7F380704u;
    // 7F380704: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F380708u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F380708:
    ctx->pc = 0x7F380708u;
    ctx->downcount -= 1;
    // 7F380708: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F38070C:
    ctx->pc = 0x7F38070Cu;
    ctx->downcount -= 18;
    // 7F38070C: lis     r4, 59
    ctx->gpr[4] = ((u32)(s32)(59) << 16);

label_7F380710:
    ctx->pc = 0x7F380710u;
    // 7F380710: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380714:
    ctx->pc = 0x7F380714u;
    // 7F380714: addi    r0, r4, -17103
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-17103);

label_7F380718:
    ctx->pc = 0x7F380718u;
    // 7F380718: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F38071C:
    ctx->pc = 0x7F38071Cu;
    // 7F38071C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F380720:
    ctx->pc = 0x7F380720u;
    // 7F380720: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380724:
    ctx->pc = 0x7F380724u;
    // 7F380724: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F380728:
    ctx->pc = 0x7F380728u;
    // 7F380728: lis     r5, 199
    ctx->gpr[5] = ((u32)(s32)(199) << 16);

label_7F38072C:
    ctx->pc = 0x7F38072Cu;
    // 7F38072C: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F380730:
    ctx->pc = 0x7F380730u;
    // 7F380730: lis     r4, 72
    ctx->gpr[4] = ((u32)(s32)(72) << 16);

label_7F380734:
    ctx->pc = 0x7F380734u;
    // 7F380734: lfs     f1, -22348(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380734u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380738:
    ctx->pc = 0x7F380738u;
    // 7F380738: addi    r3, r5, 11444
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(11444);

label_7F38073C:
    ctx->pc = 0x7F38073Cu;
    // 7F38073C: addi    r4, r4, 1607
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1607);

label_7F380740:
    ctx->pc = 0x7F380740u;
    // 7F380740: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F380744:
    ctx->pc = 0x7F380744u;
    // 7F380744: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_7F380748:
    ctx->pc = 0x7F380748u;
    // 7F380748: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F38074C:
    ctx->pc = 0x7F38074Cu;
    // 7F38074C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F380750:
    ctx->pc = 0x7F380750u;
    // 7F380750: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F380754u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F380754:
    ctx->pc = 0x7F380754u;
    ctx->downcount -= 3;
    // 7F380754: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380758:
    ctx->pc = 0x7F380758u;
    // 7F380758: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F38075C:
    ctx->pc = 0x7F38075Cu;
    // 7F38075C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F380760u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F380760:
    ctx->pc = 0x7F380760u;
    ctx->downcount -= 1;
    // 7F380760: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F380764:
    ctx->pc = 0x7F380764u;
    ctx->downcount -= 18;
    // 7F380764: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F380768:
    ctx->pc = 0x7F380768u;
    // 7F380768: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F38076C:
    ctx->pc = 0x7F38076Cu;
    // 7F38076C: addi    r0, r4, -18609
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18609);

label_7F380770:
    ctx->pc = 0x7F380770u;
    // 7F380770: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F380774:
    ctx->pc = 0x7F380774u;
    // 7F380774: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F380778:
    ctx->pc = 0x7F380778u;
    // 7F380778: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38077C:
    ctx->pc = 0x7F38077Cu;
    // 7F38077C: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F380780:
    ctx->pc = 0x7F380780u;
    // 7F380780: lis     r5, 198
    ctx->gpr[5] = ((u32)(s32)(198) << 16);

label_7F380784:
    ctx->pc = 0x7F380784u;
    // 7F380784: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F380788:
    ctx->pc = 0x7F380788u;
    // 7F380788: lis     r4, 115
    ctx->gpr[4] = ((u32)(s32)(115) << 16);

label_7F38078C:
    ctx->pc = 0x7F38078Cu;
    // 7F38078C: lfs     f1, -22340(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F38078Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380790:
    ctx->pc = 0x7F380790u;
    // 7F380790: addi    r3, r5, 28812
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(28812);

label_7F380794:
    ctx->pc = 0x7F380794u;
    // 7F380794: addi    r4, r4, 6416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6416);

label_7F380798:
    ctx->pc = 0x7F380798u;
    // 7F380798: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F38079C:
    ctx->pc = 0x7F38079Cu;
    // 7F38079C: li      r5, 17
    ctx->gpr[5] = (u32)(s32)(17);

label_7F3807A0:
    ctx->pc = 0x7F3807A0u;
    // 7F3807A0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3807A4:
    ctx->pc = 0x7F3807A4u;
    // 7F3807A4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F3807A8:
    ctx->pc = 0x7F3807A8u;
    // 7F3807A8: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F3807ACu;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F3807AC:
    ctx->pc = 0x7F3807ACu;
    ctx->downcount -= 3;
    // 7F3807AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3807B0:
    ctx->pc = 0x7F3807B0u;
    // 7F3807B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3807B4:
    ctx->pc = 0x7F3807B4u;
    // 7F3807B4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3807B8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3807B8:
    ctx->pc = 0x7F3807B8u;
    ctx->downcount -= 1;
    // 7F3807B8: b       0x7F380864
    {
            goto label_7F380864;
    }

label_7F3807BC:
    ctx->pc = 0x7F3807BCu;
    ctx->downcount -= 18;
    // 7F3807BC: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F3807C0:
    ctx->pc = 0x7F3807C0u;
    // 7F3807C0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3807C4:
    ctx->pc = 0x7F3807C4u;
    // 7F3807C4: addi    r0, r4, -18609
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18609);

label_7F3807C8:
    ctx->pc = 0x7F3807C8u;
    // 7F3807C8: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F3807CC:
    ctx->pc = 0x7F3807CCu;
    // 7F3807CC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3807D0:
    ctx->pc = 0x7F3807D0u;
    // 7F3807D0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3807D4:
    ctx->pc = 0x7F3807D4u;
    // 7F3807D4: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F3807D8:
    ctx->pc = 0x7F3807D8u;
    // 7F3807D8: lis     r5, 198
    ctx->gpr[5] = ((u32)(s32)(198) << 16);

label_7F3807DC:
    ctx->pc = 0x7F3807DCu;
    // 7F3807DC: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F3807E0:
    ctx->pc = 0x7F3807E0u;
    // 7F3807E0: lis     r4, 115
    ctx->gpr[4] = ((u32)(s32)(115) << 16);

label_7F3807E4:
    ctx->pc = 0x7F3807E4u;
    // 7F3807E4: lfs     f1, -22340(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3807E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22340);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3807E8:
    ctx->pc = 0x7F3807E8u;
    // 7F3807E8: addi    r3, r5, 28812
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(28812);

label_7F3807EC:
    ctx->pc = 0x7F3807ECu;
    // 7F3807EC: addi    r4, r4, 6416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6416);

label_7F3807F0:
    ctx->pc = 0x7F3807F0u;
    // 7F3807F0: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3807F4:
    ctx->pc = 0x7F3807F4u;
    // 7F3807F4: li      r5, 17
    ctx->gpr[5] = (u32)(s32)(17);

label_7F3807F8:
    ctx->pc = 0x7F3807F8u;
    // 7F3807F8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F3807FC:
    ctx->pc = 0x7F3807FCu;
    // 7F3807FC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F380800:
    ctx->pc = 0x7F380800u;
    // 7F380800: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F380804u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F380804:
    ctx->pc = 0x7F380804u;
    ctx->downcount -= 3;
    // 7F380804: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380808:
    ctx->pc = 0x7F380808u;
    // 7F380808: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F38080C:
    ctx->pc = 0x7F38080Cu;
    // 7F38080C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F380810u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F380810:
    ctx->pc = 0x7F380810u;
    ctx->downcount -= 18;
    // 7F380810: lis     r4, 251
    ctx->gpr[4] = ((u32)(s32)(251) << 16);

label_7F380814:
    ctx->pc = 0x7F380814u;
    // 7F380814: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380818:
    ctx->pc = 0x7F380818u;
    // 7F380818: addi    r0, r4, -18609
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18609);

label_7F38081C:
    ctx->pc = 0x7F38081Cu;
    // 7F38081C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F380820:
    ctx->pc = 0x7F380820u;
    // 7F380820: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F380824:
    ctx->pc = 0x7F380824u;
    // 7F380824: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380828:
    ctx->pc = 0x7F380828u;
    // 7F380828: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F38082C:
    ctx->pc = 0x7F38082Cu;
    // 7F38082C: lis     r5, 31
    ctx->gpr[5] = ((u32)(s32)(31) << 16);

label_7F380830:
    ctx->pc = 0x7F380830u;
    // 7F380830: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F380834:
    ctx->pc = 0x7F380834u;
    // 7F380834: lis     r4, 227
    ctx->gpr[4] = ((u32)(s32)(227) << 16);

label_7F380838:
    ctx->pc = 0x7F380838u;
    // 7F380838: lfs     f1, -22336(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380838u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F38083C:
    ctx->pc = 0x7F38083Cu;
    // 7F38083C: addi    r3, r5, -22073
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-22073);

label_7F380840:
    ctx->pc = 0x7F380840u;
    // 7F380840: addi    r4, r4, 18113
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18113);

label_7F380844:
    ctx->pc = 0x7F380844u;
    // 7F380844: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F380848:
    ctx->pc = 0x7F380848u;
    // 7F380848: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F38084C:
    ctx->pc = 0x7F38084Cu;
    // 7F38084C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F380850:
    ctx->pc = 0x7F380850u;
    // 7F380850: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F380854:
    ctx->pc = 0x7F380854u;
    // 7F380854: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F380858u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F380858:
    ctx->pc = 0x7F380858u;
    ctx->downcount -= 3;
    // 7F380858: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F38085C:
    ctx->pc = 0x7F38085Cu;
    // 7F38085C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380860:
    ctx->pc = 0x7F380860u;
    // 7F380860: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F380864u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F380864:
    ctx->pc = 0x7F380864u;
    ctx->downcount -= 7;
    // 7F380864: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380868:
    ctx->pc = 0x7F380868u;
    // 7F380868: lis     r4, 244
    ctx->gpr[4] = ((u32)(s32)(244) << 16);

label_7F38086C:
    ctx->pc = 0x7F38086Cu;
    // 7F38086C: addi    r0, r4, -30399
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-30399);

label_7F380870:
    ctx->pc = 0x7F380870u;
    // 7F380870: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F380874:
    ctx->pc = 0x7F380874u;
    // 7F380874: lwz     r5, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F380878:
    ctx->pc = 0x7F380878u;
    // 7F380878: cmpw    r5, r0
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

label_7F38087C:
    ctx->pc = 0x7F38087Cu;
    // 7F38087C: bc    12, 2, 0x7F380898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380898;
        }
    }

label_7F380880:
    ctx->pc = 0x7F380880u;
    ctx->downcount -= 1;
    // 7F380880: bc    4, 0, 0x7F38089C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38089C;
        }
    }

label_7F380884:
    ctx->pc = 0x7F380884u;
    ctx->downcount -= 4;
    // 7F380884: lis     r4, 65
    ctx->gpr[4] = ((u32)(s32)(65) << 16);

label_7F380888:
    ctx->pc = 0x7F380888u;
    // 7F380888: addi    r0, r4, -23685
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-23685);

label_7F38088C:
    ctx->pc = 0x7F38088Cu;
    // 7F38088C: cmpw    r5, r0
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

label_7F380890:
    ctx->pc = 0x7F380890u;
    // 7F380890: bc    12, 2, 0x7F380898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380898;
        }
    }

label_7F380894:
    ctx->pc = 0x7F380894u;
    ctx->downcount -= 1;
    // 7F380894: b       0x7F38089C
    {
            goto label_7F38089C;
    }

label_7F380898:
    ctx->pc = 0x7F380898u;
    ctx->downcount -= 1;
    // 7F380898: bl      0x7F3AFD24
    {
            ctx->lr = 0x7F38089Cu;
            ctx->pc = 0x7F3AFD24u;
            return;
    }

label_7F38089C:
    ctx->pc = 0x7F38089Cu;
    ctx->downcount -= 5;
    // 7F38089C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3808A0:
    ctx->pc = 0x7F3808A0u;
    // 7F3808A0: addi    r4, r31, 3952
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F3808A4:
    ctx->pc = 0x7F3808A4u;
    // 7F3808A4: addi    r5, r31, 272
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(272);

label_7F3808A8:
    ctx->pc = 0x7F3808A8u;
    // 7F3808A8: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F3808AC:
    ctx->pc = 0x7F3808ACu;
    // 7F3808AC: bl      0x7F22DD68
    {
            ctx->lr = 0x7F3808B0u;
            ctx->pc = 0x7F22DD68u;
            return;
    }

label_7F3808B0:
    ctx->pc = 0x7F3808B0u;
    ctx->downcount -= 4;
    // 7F3808B0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3808B4:
    ctx->pc = 0x7F3808B4u;
    // 7F3808B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3808B8:
    ctx->pc = 0x7F3808B8u;
    // 7F3808B8: stw     r4, 8684(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8684);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3808BC:
    ctx->pc = 0x7F3808BCu;
    // 7F3808BC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3808C0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3808C0:
    ctx->pc = 0x7F3808C0u;
    ctx->downcount -= 3;
    // 7F3808C0: li      r3, 83
    ctx->gpr[3] = (u32)(s32)(83);

label_7F3808C4:
    ctx->pc = 0x7F3808C4u;
    // 7F3808C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3808C8:
    ctx->pc = 0x7F3808C8u;
    // 7F3808C8: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F3808CCu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F3808CC:
    ctx->pc = 0x7F3808CCu;
    ctx->downcount -= 4;
    // 7F3808CC: stw     r3, 8688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8688);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3808D0:
    ctx->pc = 0x7F3808D0u;
    // 7F3808D0: lwz     r0, 8688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3808D4:
    ctx->pc = 0x7F3808D4u;
    // 7F3808D4: cmpwi   r0, 0
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

label_7F3808D8:
    ctx->pc = 0x7F3808D8u;
    // 7F3808D8: bc    12, 2, 0x7F3808F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3808F4;
        }
    }

label_7F3808DC:
    ctx->pc = 0x7F3808DCu;
    ctx->downcount -= 3;
    // 7F3808DC: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3808E0:
    ctx->pc = 0x7F3808E0u;
    // 7F3808E0: addi    r4, r31, 272
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(272);

label_7F3808E4:
    ctx->pc = 0x7F3808E4u;
    // 7F3808E4: bl      0x7F1F6378
    {
            ctx->lr = 0x7F3808E8u;
            ctx->pc = 0x7F1F6378u;
            return;
    }

label_7F3808E8:
    ctx->pc = 0x7F3808E8u;
    ctx->downcount -= 3;
    // 7F3808E8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3808EC:
    ctx->pc = 0x7F3808ECu;
    // 7F3808EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3808F0:
    ctx->pc = 0x7F3808F0u;
    // 7F3808F0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3808F4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3808F4:
    ctx->pc = 0x7F3808F4u;
    ctx->downcount -= 2;
    // 7F3808F4: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F3808F8:
    ctx->pc = 0x7F3808F8u;
    // 7F3808F8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3808FCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3808FC:
    ctx->pc = 0x7F3808FCu;
    ctx->downcount -= 2;
    // 7F3808FC: cmplwi  r3, 0x0000
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

label_7F380900:
    ctx->pc = 0x7F380900u;
    // 7F380900: bc    12, 2, 0x7F380920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380920;
        }
    }

label_7F380904:
    ctx->pc = 0x7F380904u;
    ctx->downcount -= 1;
    // 7F380904: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F380908u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F380908:
    ctx->pc = 0x7F380908u;
    ctx->downcount -= 4;
    // 7F380908: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F38090C:
    ctx->pc = 0x7F38090Cu;
    // 7F38090C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380910:
    ctx->pc = 0x7F380910u;
    // 7F380910: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F380914:
    ctx->pc = 0x7F380914u;
    // 7F380914: bl      0x7F2D8CF0
    {
            ctx->lr = 0x7F380918u;
            ctx->pc = 0x7F2D8CF0u;
            return;
    }

label_7F380918:
    ctx->pc = 0x7F380918u;
    ctx->downcount -= 2;
    // 7F380918: stw     r3, 8692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8692);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38091C:
    ctx->pc = 0x7F38091Cu;
    // 7F38091C: b       0x7F380928
    {
            goto label_7F380928;
    }

label_7F380920:
    ctx->pc = 0x7F380920u;
    ctx->downcount -= 2;
    // 7F380920: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F380924:
    ctx->pc = 0x7F380924u;
    // 7F380924: stw     r0, 8692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380928:
    ctx->pc = 0x7F380928u;
    ctx->downcount -= 3;
    // 7F380928: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_7F38092C:
    ctx->pc = 0x7F38092Cu;
    // 7F38092C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F380930:
    ctx->pc = 0x7F380930u;
    // 7F380930: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F380934u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F380934:
    ctx->pc = 0x7F380934u;
    ctx->downcount -= 5;
    // 7F380934: stw     r3, 8720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8720);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F380938:
    ctx->pc = 0x7F380938u;
    // 7F380938: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F38093C:
    ctx->pc = 0x7F38093Cu;
    // 7F38093C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F380940:
    ctx->pc = 0x7F380940u;
    // 7F380940: stw     r0, 8716(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8716);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380944:
    ctx->pc = 0x7F380944u;
    // 7F380944: stb     r0, 8724(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8724);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F380948:
    ctx->pc = 0x7F380948u;
    ctx->downcount -= 16;
    // 7F380948: lmw     r28, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F38094C:
    ctx->pc = 0x7F38094Cu;
    // 7F38094C: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380950:
    ctx->pc = 0x7F380950u;
    // 7F380950: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F380954:
    ctx->pc = 0x7F380954u;
    // 7F380954: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_7F380958:
    ctx->pc = 0x7F380958u;
    // 7F380958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F38095C:
    ctx->pc = 0x7F38095Cu;
    ctx->downcount -= 45;
    // 7F38095C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F380960:
    ctx->pc = 0x7F380960u;
    // 7F380960: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F380964:
    ctx->pc = 0x7F380964u;
    // 7F380964: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F380968:
    ctx->pc = 0x7F380968u;
    // 7F380968: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F38096C:
    ctx->pc = 0x7F38096Cu;
    // 7F38096C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380970:
    ctx->pc = 0x7F380970u;
    // 7F380970: addi    r6, r4, -22412
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-22412);

label_7F380974:
    ctx->pc = 0x7F380974u;
    // 7F380974: lis     r4, 514
    ctx->gpr[4] = ((u32)(s32)(514) << 16);

label_7F380978:
    ctx->pc = 0x7F380978u;
    // 7F380978: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F38097C:
    ctx->pc = 0x7F38097Cu;
    // 7F38097C: stmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F380980:
    ctx->pc = 0x7F380980u;
    // 7F380980: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380984:
    ctx->pc = 0x7F380984u;
    // 7F380984: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F380988:
    ctx->pc = 0x7F380988u;
    // 7F380988: addi    r4, r4, 16401
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16401);

label_7F38098C:
    ctx->pc = 0x7F38098Cu;
    // 7F38098C: addi    r9, r3, 18312
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F380990:
    ctx->pc = 0x7F380990u;
    // 7F380990: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F380994:
    ctx->pc = 0x7F380994u;
    // 7F380994: addi    r3, r31, 3952
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F380998:
    ctx->pc = 0x7F380998u;
    // 7F380998: lwzu     r28, -22428(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-22428);
        ctx->gpr[28] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F38099C:
    ctx->pc = 0x7F38099Cu;
    // 7F38099C: lwz     r11, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F3809A0:
    ctx->pc = 0x7F3809A0u;
    // 7F3809A0: lwz     r29, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F3809A4:
    ctx->pc = 0x7F3809A4u;
    // 7F3809A4: lwz     r30, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F3809A8:
    ctx->pc = 0x7F3809A8u;
    // 7F3809A8: lwz     r12, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F3809AC:
    ctx->pc = 0x7F3809ACu;
    // 7F3809AC: lwz     r10, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F3809B0:
    ctx->pc = 0x7F3809B0u;
    // 7F3809B0: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3809B4:
    ctx->pc = 0x7F3809B4u;
    // 7F3809B4: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3809B8:
    ctx->pc = 0x7F3809B8u;
    // 7F3809B8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F3809BC:
    ctx->pc = 0x7F3809BCu;
    // 7F3809BC: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F3809C0:
    ctx->pc = 0x7F3809C0u;
    // 7F3809C0: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F3809C4:
    ctx->pc = 0x7F3809C4u;
    // 7F3809C4: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3809C8:
    ctx->pc = 0x7F3809C8u;
    // 7F3809C8: stw     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F3809CC:
    ctx->pc = 0x7F3809CCu;
    // 7F3809CC: stw     r11, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F3809D0:
    ctx->pc = 0x7F3809D0u;
    // 7F3809D0: stw     r10, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F3809D4:
    ctx->pc = 0x7F3809D4u;
    // 7F3809D4: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3809D8:
    ctx->pc = 0x7F3809D8u;
    // 7F3809D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3809DC:
    ctx->pc = 0x7F3809DCu;
    // 7F3809DC: lwz     r5, 432(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(432);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3809E0:
    ctx->pc = 0x7F3809E0u;
    // 7F3809E0: stw     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3809E4:
    ctx->pc = 0x7F3809E4u;
    // 7F3809E4: bl      0x7F014788
    {
            ctx->lr = 0x7F3809E8u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F3809E8:
    ctx->pc = 0x7F3809E8u;
    ctx->downcount -= 5;
    // 7F3809E8: lis     r3, 32568
    ctx->gpr[3] = ((u32)(s32)(32568) << 16);

label_7F3809EC:
    ctx->pc = 0x7F3809ECu;
    // 7F3809EC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3809F0:
    ctx->pc = 0x7F3809F0u;
    // 7F3809F0: addi    r4, r3, -9128
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-9128);

label_7F3809F4:
    ctx->pc = 0x7F3809F4u;
    // 7F3809F4: addi    r3, r31, 3952
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F3809F8:
    ctx->pc = 0x7F3809F8u;
    // 7F3809F8: bl      0x7F014B6C
    {
            ctx->lr = 0x7F3809FCu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F3809FC:
    ctx->pc = 0x7F3809FCu;
    ctx->downcount -= 4;
    // 7F3809FC: addi    r3, r31, 3952
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F380A00:
    ctx->pc = 0x7F380A00u;
    // 7F380A00: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F380A04:
    ctx->pc = 0x7F380A04u;
    // 7F380A04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F380A08:
    ctx->pc = 0x7F380A08u;
    // 7F380A08: bl      0x7F014B60
    {
            ctx->lr = 0x7F380A0Cu;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F380A0C:
    ctx->pc = 0x7F380A0Cu;
    ctx->downcount -= 9;
    // 7F380A0C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F380A10:
    ctx->pc = 0x7F380A10u;
    // 7F380A10: addi    r3, r31, 3952
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F380A14:
    ctx->pc = 0x7F380A14u;
    // 7F380A14: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F380A18:
    ctx->pc = 0x7F380A18u;
    // 7F380A18: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F380A1C:
    ctx->pc = 0x7F380A1Cu;
    // 7F380A1C: addi    r4, r31, 4144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4144);

label_7F380A20:
    ctx->pc = 0x7F380A20u;
    // 7F380A20: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_7F380A24:
    ctx->pc = 0x7F380A24u;
    // 7F380A24: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F380A28:
    ctx->pc = 0x7F380A28u;
    // 7F380A28: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F380A2C:
    ctx->pc = 0x7F380A2Cu;
    // 7F380A2C: bl      0x7F014B78
    {
            ctx->lr = 0x7F380A30u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F380A30:
    ctx->pc = 0x7F380A30u;
    ctx->downcount -= 2;
    // 7F380A30: addi    r3, r31, 3952
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F380A34:
    ctx->pc = 0x7F380A34u;
    // 7F380A34: bl      0x7F0148A0
    {
            ctx->lr = 0x7F380A38u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F380A38:
    ctx->pc = 0x7F380A38u;
    ctx->downcount -= 4;
    // 7F380A38: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F380A3C:
    ctx->pc = 0x7F380A3Cu;
    // 7F380A3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380A40:
    ctx->pc = 0x7F380A40u;
    // 7F380A40: stw     r0, 4140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380A44:
    ctx->pc = 0x7F380A44u;
    // 7F380A44: bl      0x7F380A70
    {
            ctx->lr = 0x7F380A48u;
            goto label_7F380A70;
    }

label_7F380A48:
    ctx->pc = 0x7F380A48u;
    ctx->downcount -= 5;
    // 7F380A48: addi    r3, r31, 3952
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3952);

label_7F380A4C:
    ctx->pc = 0x7F380A4Cu;
    // 7F380A4C: addi    r4, r31, 4176
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4176);

label_7F380A50:
    ctx->pc = 0x7F380A50u;
    // 7F380A50: li      r5, 21
    ctx->gpr[5] = (u32)(s32)(21);

label_7F380A54:
    ctx->pc = 0x7F380A54u;
    // 7F380A54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F380A58:
    ctx->pc = 0x7F380A58u;
    // 7F380A58: bl      0x7F014A50
    {
            ctx->lr = 0x7F380A5Cu;
            ctx->pc = 0x7F014A50u;
            return;
    }

label_7F380A5C:
    ctx->pc = 0x7F380A5Cu;
    ctx->downcount -= 16;
    // 7F380A5C: lmw     r28, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F380A60:
    ctx->pc = 0x7F380A60u;
    // 7F380A60: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380A64:
    ctx->pc = 0x7F380A64u;
    // 7F380A64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F380A68:
    ctx->pc = 0x7F380A68u;
    // 7F380A68: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F380A6C:
    ctx->pc = 0x7F380A6Cu;
    // 7F380A6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F380A70:
    ctx->pc = 0x7F380A70u;
    ctx->downcount -= 26;
    // 7F380A70: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F380A74:
    ctx->pc = 0x7F380A74u;
    // 7F380A74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F380A78:
    ctx->pc = 0x7F380A78u;
    // 7F380A78: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380A7C:
    ctx->pc = 0x7F380A7Cu;
    // 7F380A7C: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380A7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F380A80:
    ctx->pc = 0x7F380A80u;
    // 7F380A80: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F380A80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F380A80u);
        if (ctx->exception) return;
    }

label_7F380A84:
    ctx->pc = 0x7F380A84u;
    // 7F380A84: stmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F380A88:
    ctx->pc = 0x7F380A88u;
    // 7F380A88: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380A8C:
    ctx->pc = 0x7F380A8Cu;
    // 7F380A8C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F380A90:
    ctx->pc = 0x7F380A90u;
    // 7F380A90: lis     r3, 32568
    ctx->gpr[3] = ((u32)(s32)(32568) << 16);

label_7F380A94:
    ctx->pc = 0x7F380A94u;
    // 7F380A94: lwz     r27, 432(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(432);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F380A98:
    ctx->pc = 0x7F380A98u;
    // 7F380A98: lfs     f31, -22440(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F380A98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F380A9C:
    ctx->pc = 0x7F380A9Cu;
    // 7F380A9C: addi    r29, r3, -9128
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-9128);

label_7F380AA0:
    ctx->pc = 0x7F380AA0u;
    // 7F380AA0: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F380AA4:
    ctx->pc = 0x7F380AA4u;
    // 7F380AA4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F380AA8:
    ctx->pc = 0x7F380AA8u;
    // 7F380AA8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F380AAC:
    ctx->pc = 0x7F380AACu;
    // 7F380AAC: lis     r28, 512
    ctx->gpr[28] = ((u32)(s32)(512) << 16);

label_7F380AB0:
    ctx->pc = 0x7F380AB0u;
    ctx->downcount -= 33;
    // 7F380AB0: lwz     r0, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380AB4:
    // 7F380AB4: addi    r9, r30, 444
    ctx->gpr[9] = ctx->gpr[30] + (u32)(s32)(444);

label_7F380AB8:
    // 7F380AB8: add   r25, r23, r31
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F380ABC:
    // 7F380ABC: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F380AC0:
    // 7F380AC0: add   r9, r0, r9
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F380AC4:
    // 7F380AC4: addi    r4, r28, 16401
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(16401);

label_7F380AC8:
    ctx->pc = 0x7F380AC8u;
    // 7F380AC8: lfs     f0, 272(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F380AC8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380ACC:
    // 7F380ACC: addi    r26, r25, 4176
    ctx->gpr[26] = ctx->gpr[25] + (u32)(s32)(4176);

label_7F380AD0:
    ctx->pc = 0x7F380AD0u;
    // 7F380AD0: lfs     f1, 256(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F380AD0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380AD4:
    // 7F380AD4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F380AD8:
    // 7F380AD8: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F380ADC:
    // 7F380ADC: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F380AE0:
    ctx->pc = 0x7F380AE0u;
    // 7F380AE0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F380AE0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F380AE4:
    // 7F380AE4: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F380AE8:
    ctx->pc = 0x7F380AE8u;
    // 7F380AE8: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F380AE8u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_7F380AEC:
    ctx->pc = 0x7F380AECu;
    // 7F380AEC: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380AECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380AF0:
    ctx->pc = 0x7F380AF0u;
    // 7F380AF0: fadds   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F380AF0u)) return;
    ppc_fadds(ctx, 1, 0, 1);

label_7F380AF4:
    ctx->pc = 0x7F380AF4u;
    // 7F380AF4: lfs     f0, 276(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F380AF4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380AF8:
    ctx->pc = 0x7F380AF8u;
    // 7F380AF8: lfs     f2, 260(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F380AF8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F380AFC:
    ctx->pc = 0x7F380AFCu;
    // 7F380AFC: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F380AFCu)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F380B00:
    ctx->pc = 0x7F380B00u;
    // 7F380B00: fmuls   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F380B00u)) return;
    ppc_fmuls(ctx, 0, 0, 31);

label_7F380B04:
    ctx->pc = 0x7F380B04u;
    // 7F380B04: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380B04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380B08:
    ctx->pc = 0x7F380B08u;
    // 7F380B08: fadds   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F380B08u)) return;
    ppc_fadds(ctx, 0, 0, 2);

label_7F380B0C:
    ctx->pc = 0x7F380B0Cu;
    // 7F380B0C: lfs     f2, 280(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F380B0Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F380B10:
    ctx->pc = 0x7F380B10u;
    // 7F380B10: lfs     f3, 264(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F380B10u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F380B14:
    ctx->pc = 0x7F380B14u;
    // 7F380B14: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F380B14u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F380B18:
    ctx->pc = 0x7F380B18u;
    // 7F380B18: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380B18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F380B1C:
    ctx->pc = 0x7F380B1Cu;
    // 7F380B1C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380B1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380B20:
    ctx->pc = 0x7F380B20u;
    // 7F380B20: fmuls   f1, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F380B20u)) return;
    ppc_fmuls(ctx, 1, 2, 31);

label_7F380B24:
    ctx->pc = 0x7F380B24u;
    // 7F380B24: fadds   f0, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F380B24u)) return;
    ppc_fadds(ctx, 0, 1, 3);

label_7F380B28:
    ctx->pc = 0x7F380B28u;
    // 7F380B28: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380B28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F380B2C:
    ctx->pc = 0x7F380B2Cu;
    // 7F380B2C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380B2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380B30:
    // 7F380B30: bl      0x7F014788
    {
            ctx->lr = 0x7F380B34u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F380B34:
    ctx->downcount -= 4;
    // 7F380B34: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F380B38:
    // 7F380B38: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F380B3C:
    // 7F380B3C: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F380B40:
    // 7F380B40: bl      0x7F014B6C
    {
            ctx->lr = 0x7F380B44u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F380B44:
    ctx->downcount -= 4;
    // 7F380B44: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F380B48:
    // 7F380B48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F380B4C:
    // 7F380B4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F380B50:
    // 7F380B50: bl      0x7F014B60
    {
            ctx->lr = 0x7F380B54u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F380B54:
    ctx->pc = 0x7F380B54u;
    ctx->downcount -= 6;
    // 7F380B54: stw     r24, 4364(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4364);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F380B58:
    // 7F380B58: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F380B5C:
    // 7F380B5C: cmpwi   r24, 21
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F380B60:
    // 7F380B60: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F380B64:
    // 7F380B64: addi    r30, r30, 324
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(324);

label_7F380B68:
    // 7F380B68: bc    12, 0, 0x7F380AB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F380AB0u;
                return;
            }
            goto label_7F380AB0;
        }
    }

label_7F380B6C:
    ctx->pc = 0x7F380B6Cu;
    ctx->downcount -= 18;
    // 7F380B6C: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F380B6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F380B6Cu);
        if (ctx->exception) return;
    }

label_7F380B70:
    ctx->pc = 0x7F380B70u;
    // 7F380B70: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380B70u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F380B74:
    ctx->pc = 0x7F380B74u;
    // 7F380B74: lmw     r23, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F380B78:
    ctx->pc = 0x7F380B78u;
    // 7F380B78: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380B7C:
    ctx->pc = 0x7F380B7Cu;
    // 7F380B7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F380B80:
    ctx->pc = 0x7F380B80u;
    // 7F380B80: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F380B84:
    ctx->pc = 0x7F380B84u;
    // 7F380B84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F380B88:
    ctx->pc = 0x7F380B88u;
    ctx->downcount -= 21;
    // 7F380B88: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F380B8C:
    ctx->pc = 0x7F380B8Cu;
    // 7F380B8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F380B90:
    ctx->pc = 0x7F380B90u;
    // 7F380B90: li      r5, 8736
    ctx->gpr[5] = (u32)(s32)(8736);

label_7F380B94:
    ctx->pc = 0x7F380B94u;
    // 7F380B94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F380B98:
    ctx->pc = 0x7F380B98u;
    // 7F380B98: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380B9C:
    ctx->pc = 0x7F380B9Cu;
    // 7F380B9C: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F380BA0:
    ctx->pc = 0x7F380BA0u;
    // 7F380BA0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380BA4:
    ctx->pc = 0x7F380BA4u;
    // 7F380BA4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F380BA8:
    ctx->pc = 0x7F380BA8u;
    // 7F380BA8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F380BAC:
    ctx->pc = 0x7F380BACu;
    // 7F380BAC: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F380BB0:
    ctx->pc = 0x7F380BB0u;
    // 7F380BB0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F380BB4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F380BB4:
    ctx->pc = 0x7F380BB4u;
    ctx->downcount -= 2;
    // 7F380BB4: or.   r31, r3, r3
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

label_7F380BB8:
    ctx->pc = 0x7F380BB8u;
    // 7F380BB8: bc    12, 2, 0x7F380C9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380C9C;
        }
    }

label_7F380BBC:
    ctx->pc = 0x7F380BBCu;
    ctx->downcount -= 5;
    // 7F380BBC: lis     r4, 32568
    ctx->gpr[4] = ((u32)(s32)(32568) << 16);

label_7F380BC0:
    ctx->pc = 0x7F380BC0u;
    // 7F380BC0: lis     r5, 32568
    ctx->gpr[5] = ((u32)(s32)(32568) << 16);

label_7F380BC4:
    ctx->pc = 0x7F380BC4u;
    // 7F380BC4: addi    r4, r4, -2648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2648);

label_7F380BC8:
    ctx->pc = 0x7F380BC8u;
    // 7F380BC8: addi    r5, r5, -760
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-760);

label_7F380BCC:
    ctx->pc = 0x7F380BCCu;
    // 7F380BCC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F380BD0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F380BD0:
    ctx->pc = 0x7F380BD0u;
    ctx->downcount -= 14;
    // 7F380BD0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380BD4:
    ctx->pc = 0x7F380BD4u;
    // 7F380BD4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F380BD8:
    ctx->pc = 0x7F380BD8u;
    // 7F380BD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F380BDC:
    ctx->pc = 0x7F380BDCu;
    // 7F380BDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380BE0:
    ctx->pc = 0x7F380BE0u;
    // 7F380BE0: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F380BE4:
    ctx->pc = 0x7F380BE4u;
    // 7F380BE4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F380BE8:
    ctx->pc = 0x7F380BE8u;
    // 7F380BE8: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F380BEC:
    ctx->pc = 0x7F380BECu;
    // 7F380BEC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F380BF0:
    ctx->pc = 0x7F380BF0u;
    // 7F380BF0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F380BF4:
    ctx->pc = 0x7F380BF4u;
    // 7F380BF4: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F380BF8:
    ctx->pc = 0x7F380BF8u;
    // 7F380BF8: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F380BFC:
    ctx->pc = 0x7F380BFCu;
    // 7F380BFC: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F380C00:
    ctx->pc = 0x7F380C00u;
    // 7F380C00: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380C04:
    ctx->pc = 0x7F380C04u;
    // 7F380C04: bl      0x7F37FDE4
    {
            ctx->lr = 0x7F380C08u;
            ctx->pc = 0x7F37FDE4u;
            return;
    }

label_7F380C08:
    ctx->pc = 0x7F380C08u;
    ctx->downcount -= 2;
    // 7F380C08: cmpwi   r3, 0
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

label_7F380C0C:
    ctx->pc = 0x7F380C0Cu;
    // 7F380C0C: bc    4, 2, 0x7F380C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380C20;
        }
    }

label_7F380C10:
    ctx->pc = 0x7F380C10u;
    ctx->downcount -= 2;
    // 7F380C10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380C14:
    ctx->pc = 0x7F380C14u;
    // 7F380C14: bl      0x7F3C8210
    {
            ctx->lr = 0x7F380C18u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F380C18:
    ctx->pc = 0x7F380C18u;
    ctx->downcount -= 2;
    // 7F380C18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F380C1C:
    ctx->pc = 0x7F380C1Cu;
    // 7F380C1C: b       0x7F380CA0
    {
            goto label_7F380CA0;
    }

label_7F380C20:
    ctx->pc = 0x7F380C20u;
    ctx->downcount -= 6;
    // 7F380C20: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F380C24:
    ctx->pc = 0x7F380C24u;
    // 7F380C24: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F380C28:
    ctx->pc = 0x7F380C28u;
    // 7F380C28: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380C2C:
    ctx->pc = 0x7F380C2Cu;
    // 7F380C2C: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F380C30:
    ctx->pc = 0x7F380C30u;
    // 7F380C30: cmpwi   r0, 20
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

label_7F380C34:
    ctx->pc = 0x7F380C34u;
    // 7F380C34: bc    4, 2, 0x7F380C9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380C9C;
        }
    }

label_7F380C38:
    ctx->pc = 0x7F380C38u;
    ctx->downcount -= 25;
    // 7F380C38: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F380C3C:
    ctx->pc = 0x7F380C3Cu;
    // 7F380C3C: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F380C40:
    ctx->pc = 0x7F380C40u;
    // 7F380C40: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F380C44:
    ctx->pc = 0x7F380C44u;
    // 7F380C44: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380C48:
    ctx->pc = 0x7F380C48u;
    // 7F380C48: addi    r8, r6, -22456
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(-22456);

label_7F380C4C:
    ctx->pc = 0x7F380C4Cu;
    // 7F380C4C: addi    r7, r5, -22332
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-22332);

label_7F380C50:
    ctx->pc = 0x7F380C50u;
    // 7F380C50: addi    r6, r4, -22328
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-22328);

label_7F380C54:
    ctx->pc = 0x7F380C54u;
    // 7F380C54: addi    r5, r3, -22340
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22340);

label_7F380C58:
    ctx->pc = 0x7F380C58u;
    // 7F380C58: lfs     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F380C58u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F380C5C:
    ctx->pc = 0x7F380C5Cu;
    // 7F380C5C: lis     r4, 106
    ctx->gpr[4] = ((u32)(s32)(106) << 16);

label_7F380C60:
    ctx->pc = 0x7F380C60u;
    // 7F380C60: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F380C60u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F380C64:
    ctx->pc = 0x7F380C64u;
    // 7F380C64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380C68:
    ctx->pc = 0x7F380C68u;
    // 7F380C68: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F380C68u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380C6C:
    ctx->pc = 0x7F380C6Cu;
    // 7F380C6C: addi    r4, r4, -2124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2124);

label_7F380C70:
    ctx->pc = 0x7F380C70u;
    // 7F380C70: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F380C70u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380C74:
    ctx->pc = 0x7F380C74u;
    // 7F380C74: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F380C78:
    ctx->pc = 0x7F380C78u;
    // 7F380C78: stfs     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380C78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F380C7C:
    ctx->pc = 0x7F380C7Cu;
    // 7F380C7C: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F380C80:
    ctx->pc = 0x7F380C80u;
    // 7F380C80: li      r6, 12
    ctx->gpr[6] = (u32)(s32)(12);

label_7F380C84:
    ctx->pc = 0x7F380C84u;
    // 7F380C84: li      r8, 124
    ctx->gpr[8] = (u32)(s32)(124);

label_7F380C88:
    ctx->pc = 0x7F380C88u;
    // 7F380C88: stfs     f2, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380C88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F380C8C:
    ctx->pc = 0x7F380C8Cu;
    // 7F380C8C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F380C90:
    ctx->pc = 0x7F380C90u;
    // 7F380C90: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380C90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F380C94:
    ctx->pc = 0x7F380C94u;
    // 7F380C94: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380C94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380C98:
    ctx->pc = 0x7F380C98u;
    // 7F380C98: bl      0x7F2C5C9C
    {
            ctx->lr = 0x7F380C9Cu;
            ctx->pc = 0x7F2C5C9Cu;
            return;
    }

label_7F380C9C:
    ctx->pc = 0x7F380C9Cu;
    ctx->downcount -= 1;
    // 7F380C9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F380CA0:
    ctx->pc = 0x7F380CA0u;
    ctx->downcount -= 16;
    // 7F380CA0: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F380CA4:
    ctx->pc = 0x7F380CA4u;
    // 7F380CA4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380CA8:
    ctx->pc = 0x7F380CA8u;
    // 7F380CA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F380CAC:
    ctx->pc = 0x7F380CACu;
    // 7F380CAC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F380CB0:
    ctx->pc = 0x7F380CB0u;
    // 7F380CB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F380CB4:
    ctx->pc = 0x7F380CB4u;
    ctx->downcount -= 5;
    // 7F380CB4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F380CB8:
    ctx->pc = 0x7F380CB8u;
    // 7F380CB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F380CBC:
    ctx->pc = 0x7F380CBCu;
    // 7F380CBC: li      r3, 1792
    ctx->gpr[3] = (u32)(s32)(1792);

label_7F380CC0:
    ctx->pc = 0x7F380CC0u;
    // 7F380CC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380CC4:
    ctx->pc = 0x7F380CC4u;
    // 7F380CC4: bl      0x7F018418
    {
            ctx->lr = 0x7F380CC8u;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F380CC8:
    ctx->pc = 0x7F380CC8u;
    ctx->downcount -= 2;
    // 7F380CC8: cmpwi   r3, 0
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

label_7F380CCC:
    ctx->pc = 0x7F380CCCu;
    // 7F380CCC: bc    4, 2, 0x7F380D00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380D00;
        }
    }

label_7F380CD0:
    ctx->pc = 0x7F380CD0u;
    ctx->downcount -= 4;
    // 7F380CD0: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F380CD4:
    ctx->pc = 0x7F380CD4u;
    // 7F380CD4: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380CD8:
    ctx->pc = 0x7F380CD8u;
    // 7F380CD8: rlwinm. r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F380CDC:
    ctx->pc = 0x7F380CDCu;
    // 7F380CDC: bc    4, 2, 0x7F380D00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380D00;
        }
    }

label_7F380CE0:
    ctx->pc = 0x7F380CE0u;
    ctx->downcount -= 4;
    // 7F380CE0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F380CE4:
    ctx->pc = 0x7F380CE4u;
    // 7F380CE4: lwz     r0, -2672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380CE8:
    ctx->pc = 0x7F380CE8u;
    // 7F380CE8: rlwinm. r0, r0, 0, 30, 30
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

label_7F380CEC:
    ctx->pc = 0x7F380CECu;
    // 7F380CEC: bc    4, 2, 0x7F380D00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380D00;
        }
    }

label_7F380CF0:
    ctx->pc = 0x7F380CF0u;
    ctx->downcount -= 2;
    // 7F380CF0: lis     r3, 10240
    ctx->gpr[3] = ((u32)(s32)(10240) << 16);

label_7F380CF4:
    ctx->pc = 0x7F380CF4u;
    // 7F380CF4: bl      0x7F012050
    {
            ctx->lr = 0x7F380CF8u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F380CF8:
    ctx->pc = 0x7F380CF8u;
    ctx->downcount -= 2;
    // 7F380CF8: cmpwi   r3, 0
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

label_7F380CFC:
    ctx->pc = 0x7F380CFCu;
    // 7F380CFC: bc    12, 2, 0x7F380D08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380D08;
        }
    }

label_7F380D00:
    ctx->pc = 0x7F380D00u;
    ctx->downcount -= 2;
    // 7F380D00: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F380D04:
    ctx->pc = 0x7F380D04u;
    // 7F380D04: b       0x7F380D0C
    {
            goto label_7F380D0C;
    }

label_7F380D08:
    ctx->pc = 0x7F380D08u;
    ctx->downcount -= 1;
    // 7F380D08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F380D0C:
    ctx->pc = 0x7F380D0Cu;
    ctx->downcount -= 5;
    // 7F380D0C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380D10:
    ctx->pc = 0x7F380D10u;
    // 7F380D10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F380D14:
    ctx->pc = 0x7F380D14u;
    // 7F380D14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F380D18:
    ctx->pc = 0x7F380D18u;
    // 7F380D18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F380D1C:
    ctx->pc = 0x7F380D1Cu;
    ctx->downcount -= 9;
    // 7F380D1C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F380D20:
    ctx->pc = 0x7F380D20u;
    // 7F380D20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F380D24:
    ctx->pc = 0x7F380D24u;
    // 7F380D24: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F380D28:
    ctx->pc = 0x7F380D28u;
    // 7F380D28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F380D2C:
    ctx->pc = 0x7F380D2Cu;
    // 7F380D2C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380D30:
    ctx->pc = 0x7F380D30u;
    // 7F380D30: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F380D34:
    ctx->pc = 0x7F380D34u;
    // 7F380D34: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380D38:
    ctx->pc = 0x7F380D38u;
    // 7F380D38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F380D3C:
    ctx->pc = 0x7F380D3Cu;
    // 7F380D3C: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F380D40u;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F380D40:
    ctx->pc = 0x7F380D40u;
    ctx->downcount -= 4;
    // 7F380D40: stw     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F380D44:
    ctx->pc = 0x7F380D44u;
    // 7F380D44: lwz     r5, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F380D48:
    ctx->pc = 0x7F380D48u;
    // 7F380D48: cmplwi  r5, 0x0000
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

label_7F380D4C:
    ctx->pc = 0x7F380D4Cu;
    // 7F380D4C: bc    4, 2, 0x7F380D58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380D58;
        }
    }

label_7F380D50:
    ctx->pc = 0x7F380D50u;
    ctx->downcount -= 2;
    // 7F380D50: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F380D54:
    ctx->pc = 0x7F380D54u;
    // 7F380D54: b       0x7F380ECC
    {
            goto label_7F380ECC;
    }

label_7F380D58:
    ctx->pc = 0x7F380D58u;
    ctx->downcount -= 3;
    // 7F380D58: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F380D5C:
    ctx->pc = 0x7F380D5Cu;
    // 7F380D5C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F380D60:
    ctx->pc = 0x7F380D60u;
    // 7F380D60: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F380D64u;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F380D64:
    ctx->pc = 0x7F380D64u;
    ctx->downcount -= 5;
    // 7F380D64: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F380D68:
    ctx->pc = 0x7F380D68u;
    // 7F380D68: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F380D6C:
    ctx->pc = 0x7F380D6Cu;
    // 7F380D6C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F380D70:
    ctx->pc = 0x7F380D70u;
    // 7F380D70: lwz     r5, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F380D74:
    ctx->pc = 0x7F380D74u;
    // 7F380D74: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F380D78u;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F380D78:
    ctx->pc = 0x7F380D78u;
    ctx->downcount -= 15;
    // 7F380D78: stw     r3, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F380D7C:
    ctx->pc = 0x7F380D7Cu;
    // 7F380D7C: lis     r6, 24672
    ctx->gpr[6] = ((u32)(s32)(24672) << 16);

label_7F380D80:
    ctx->pc = 0x7F380D80u;
    // 7F380D80: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F380D84:
    ctx->pc = 0x7F380D84u;
    // 7F380D84: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380D88:
    ctx->pc = 0x7F380D88u;
    // 7F380D88: lwz     r5, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F380D8C:
    ctx->pc = 0x7F380D8Cu;
    // 7F380D8C: addi    r0, r6, 24704
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(24704);

label_7F380D90:
    ctx->pc = 0x7F380D90u;
    // 7F380D90: lfs     f1, -22320(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F380D90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22320);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380D94:
    ctx->pc = 0x7F380D94u;
    // 7F380D94: stw     r0, 140(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380D98:
    ctx->pc = 0x7F380D98u;
    // 7F380D98: lfs     f2, -22316(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380D98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22316);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F380D9C:
    ctx->pc = 0x7F380D9Cu;
    // 7F380D9C: lwz     r4, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F380DA0:
    ctx->pc = 0x7F380DA0u;
    // 7F380DA0: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380DA4:
    ctx->pc = 0x7F380DA4u;
    // 7F380DA4: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F380DA8:
    ctx->pc = 0x7F380DA8u;
    // 7F380DA8: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380DAC:
    ctx->pc = 0x7F380DACu;
    // 7F380DAC: lwz     r3, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380DB0:
    ctx->pc = 0x7F380DB0u;
    // 7F380DB0: bl      0x7F2E1D00
    {
            ctx->lr = 0x7F380DB4u;
            ctx->pc = 0x7F2E1D00u;
            return;
    }

label_7F380DB4:
    ctx->pc = 0x7F380DB4u;
    ctx->downcount -= 7;
    // 7F380DB4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380DB8:
    ctx->pc = 0x7F380DB8u;
    // 7F380DB8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F380DBC:
    ctx->pc = 0x7F380DBCu;
    // 7F380DBC: addi    r5, r3, -22312
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22312);

label_7F380DC0:
    ctx->pc = 0x7F380DC0u;
    // 7F380DC0: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380DC4:
    ctx->pc = 0x7F380DC4u;
    // 7F380DC4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F380DC4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380DC8:
    ctx->pc = 0x7F380DC8u;
    // 7F380DC8: lfs     f2, -22308(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F380DC8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F380DCC:
    ctx->pc = 0x7F380DCCu;
    // 7F380DCC: bl      0x7F2E1D00
    {
            ctx->lr = 0x7F380DD0u;
            ctx->pc = 0x7F2E1D00u;
            return;
    }

label_7F380DD0:
    ctx->pc = 0x7F380DD0u;
    ctx->downcount -= 10;
    // 7F380DD0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F380DD4:
    ctx->pc = 0x7F380DD4u;
    // 7F380DD4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380DD8:
    ctx->pc = 0x7F380DD8u;
    // 7F380DD8: addi    r5, r4, -22304
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22304);

label_7F380DDC:
    ctx->pc = 0x7F380DDCu;
    // 7F380DDC: lfs     f0, -22300(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380DDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22300);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380DE0:
    ctx->pc = 0x7F380DE0u;
    // 7F380DE0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F380DE0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F380DE4:
    ctx->pc = 0x7F380DE4u;
    // 7F380DE4: addi    r4, r31, 120
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(120);

label_7F380DE8:
    ctx->pc = 0x7F380DE8u;
    // 7F380DE8: stfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380DE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F380DEC:
    ctx->pc = 0x7F380DECu;
    // 7F380DEC: stfs     f0, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380DECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380DF0:
    ctx->pc = 0x7F380DF0u;
    // 7F380DF0: lwz     r3, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380DF4:
    ctx->pc = 0x7F380DF4u;
    // 7F380DF4: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F380DF8u;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F380DF8:
    ctx->pc = 0x7F380DF8u;
    ctx->downcount -= 45;
    // 7F380DF8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380DFC:
    ctx->pc = 0x7F380DFCu;
    // 7F380DFC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F380E00:
    ctx->pc = 0x7F380E00u;
    // 7F380E00: addi    r5, r3, -22312
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22312);

label_7F380E04:
    ctx->pc = 0x7F380E04u;
    // 7F380E04: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F380E08:
    ctx->pc = 0x7F380E08u;
    // 7F380E08: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F380E08u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380E0C:
    ctx->pc = 0x7F380E0Cu;
    // 7F380E0C: addi    r6, r4, -22308
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-22308);

label_7F380E10:
    ctx->pc = 0x7F380E10u;
    // 7F380E10: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380E14:
    ctx->pc = 0x7F380E14u;
    // 7F380E14: li      r8, 68
    ctx->gpr[8] = (u32)(s32)(68);

label_7F380E18:
    ctx->pc = 0x7F380E18u;
    // 7F380E18: stfs     f0, 140(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380E18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380E1C:
    ctx->pc = 0x7F380E1Cu;
    // 7F380E1C: addi    r5, r3, -22296
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22296);

label_7F380E20:
    ctx->pc = 0x7F380E20u;
    // 7F380E20: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F380E20u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380E24:
    ctx->pc = 0x7F380E24u;
    // 7F380E24: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380E28:
    ctx->pc = 0x7F380E28u;
    // 7F380E28: lfd     f1, -22288(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380E28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F380E2C:
    ctx->pc = 0x7F380E2Cu;
    // 7F380E2C: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_7F380E30:
    ctx->pc = 0x7F380E30u;
    // 7F380E30: stfs     f0, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380E30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380E34:
    ctx->pc = 0x7F380E34u;
    // 7F380E34: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F380E38:
    ctx->pc = 0x7F380E38u;
    // 7F380E38: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F380E38u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380E3C:
    ctx->pc = 0x7F380E3Cu;
    // 7F380E3C: addi    r5, r4, 9408
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(9408);

label_7F380E40:
    ctx->pc = 0x7F380E40u;
    // 7F380E40: lwz     r7, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F380E44:
    ctx->pc = 0x7F380E44u;
    // 7F380E44: addi    r4, r31, 120
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(120);

label_7F380E48:
    ctx->pc = 0x7F380E48u;
    // 7F380E48: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380E4C:
    ctx->pc = 0x7F380E4Cu;
    // 7F380E4C: stw     r8, 28(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F380E50:
    ctx->pc = 0x7F380E50u;
    // 7F380E50: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380E54:
    ctx->pc = 0x7F380E54u;
    // 7F380E54: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380E58:
    ctx->pc = 0x7F380E58u;
    // 7F380E58: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F380E5C:
    ctx->pc = 0x7F380E5Cu;
    // 7F380E5C: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380E60:
    ctx->pc = 0x7F380E60u;
    // 7F380E60: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380E64:
    ctx->pc = 0x7F380E64u;
    // 7F380E64: stw     r6, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F380E68:
    ctx->pc = 0x7F380E68u;
    // 7F380E68: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380E6C:
    ctx->pc = 0x7F380E6Cu;
    // 7F380E6C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380E70:
    ctx->pc = 0x7F380E70u;
    // 7F380E70: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F380E74:
    ctx->pc = 0x7F380E74u;
    // 7F380E74: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380E78:
    ctx->pc = 0x7F380E78u;
    // 7F380E78: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380E7C:
    ctx->pc = 0x7F380E7Cu;
    // 7F380E7C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380E80:
    ctx->pc = 0x7F380E80u;
    // 7F380E80: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F380E84:
    ctx->pc = 0x7F380E84u;
    // 7F380E84: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380E88:
    ctx->pc = 0x7F380E88u;
    // 7F380E88: stfs     f0, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380E88u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380E8C:
    ctx->pc = 0x7F380E8Cu;
    // 7F380E8C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380E90:
    ctx->pc = 0x7F380E90u;
    // 7F380E90: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F380E94:
    ctx->pc = 0x7F380E94u;
    // 7F380E94: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380E98:
    ctx->pc = 0x7F380E98u;
    // 7F380E98: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F380E98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F380E9C:
    ctx->pc = 0x7F380E9Cu;
    // 7F380E9C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F380E9Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F380EA0:
    ctx->pc = 0x7F380EA0u;
    // 7F380EA0: stfs     f0, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380EA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380EA4:
    ctx->pc = 0x7F380EA4u;
    // 7F380EA4: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380EA8:
    ctx->pc = 0x7F380EA8u;
    // 7F380EA8: bl      0x7F2E19C4
    {
            ctx->lr = 0x7F380EACu;
            ctx->pc = 0x7F2E19C4u;
            return;
    }

label_7F380EAC:
    ctx->pc = 0x7F380EACu;
    ctx->downcount -= 7;
    // 7F380EAC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F380EB0:
    ctx->pc = 0x7F380EB0u;
    // 7F380EB0: addi    r4, r31, 120
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(120);

label_7F380EB4:
    ctx->pc = 0x7F380EB4u;
    // 7F380EB4: lfs     f0, -22292(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F380EB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F380EB8:
    ctx->pc = 0x7F380EB8u;
    // 7F380EB8: stfs     f0, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380EB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380EBC:
    ctx->pc = 0x7F380EBCu;
    // 7F380EBC: stfs     f0, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F380EBCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F380EC0:
    ctx->pc = 0x7F380EC0u;
    // 7F380EC0: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380EC4:
    ctx->pc = 0x7F380EC4u;
    // 7F380EC4: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F380EC8u;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F380EC8:
    ctx->pc = 0x7F380EC8u;
    ctx->downcount -= 1;
    // 7F380EC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F380ECC:
    ctx->pc = 0x7F380ECCu;
    ctx->downcount -= 6;
    // 7F380ECC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380ED0:
    ctx->pc = 0x7F380ED0u;
    // 7F380ED0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F380ED4:
    ctx->pc = 0x7F380ED4u;
    // 7F380ED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F380ED8:
    ctx->pc = 0x7F380ED8u;
    // 7F380ED8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F380EDC:
    ctx->pc = 0x7F380EDCu;
    // 7F380EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F380EE0:
    ctx->pc = 0x7F380EE0u;
    ctx->downcount -= 8;
    // 7F380EE0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F380EE4:
    ctx->pc = 0x7F380EE4u;
    // 7F380EE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F380EE8:
    ctx->pc = 0x7F380EE8u;
    // 7F380EE8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380EEC:
    ctx->pc = 0x7F380EECu;
    // 7F380EEC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F380EF0:
    ctx->pc = 0x7F380EF0u;
    // 7F380EF0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F380EF4:
    ctx->pc = 0x7F380EF4u;
    // 7F380EF4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F380EF8:
    ctx->pc = 0x7F380EF8u;
    // 7F380EF8: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380EFC:
    ctx->pc = 0x7F380EFCu;
    // 7F380EFC: bl      0x7F3C9624
    {
            ctx->lr = 0x7F380F00u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F380F00:
    ctx->pc = 0x7F380F00u;
    ctx->downcount -= 2;
    // 7F380F00: cmpwi   r3, 0
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

label_7F380F04:
    ctx->pc = 0x7F380F04u;
    // 7F380F04: bc    4, 1, 0x7F380FE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380FE4;
        }
    }

label_7F380F08:
    ctx->pc = 0x7F380F08u;
    ctx->downcount -= 3;
    // 7F380F08: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F380F0C:
    ctx->pc = 0x7F380F0Cu;
    // 7F380F0C: bc    4, 1, 0x7F380FE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380FE4;
        }
    }

label_7F380F10:
    ctx->pc = 0x7F380F10u;
    ctx->downcount -= 5;
    // 7F380F10: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380F14:
    ctx->pc = 0x7F380F14u;
    // 7F380F14: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380F18:
    ctx->pc = 0x7F380F18u;
    // 7F380F18: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380F1C:
    // 7F380F1C: cmpwi   r0, 2
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

label_7F380F20:
    // 7F380F20: bc    12, 2, 0x7F380F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380F6C;
        }
    }

label_7F380F24:
    ctx->downcount -= 1;
    // 7F380F24: bc    4, 0, 0x7F380F38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380F38;
        }
    }

label_7F380F28:
    ctx->downcount -= 2;
    // 7F380F28: cmpwi   r0, 0
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

label_7F380F2C:
    // 7F380F2C: bc    12, 2, 0x7F380F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F380F44;
        }
    }

label_7F380F30:
    ctx->downcount -= 1;
    // 7F380F30: bc    4, 0, 0x7F380F58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380F58;
        }
    }

label_7F380F34:
    ctx->downcount -= 1;
    // 7F380F34: b       0x7F380FD4
    {
            goto label_7F380FD4;
    }

label_7F380F38:
    ctx->downcount -= 2;
    // 7F380F38: cmpwi   r0, 4
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

label_7F380F3C:
    // 7F380F3C: bc    4, 0, 0x7F380FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380FD4;
        }
    }

label_7F380F40:
    ctx->downcount -= 1;
    // 7F380F40: b       0x7F380F9C
    {
            goto label_7F380F9C;
    }

label_7F380F44:
    ctx->downcount -= 5;
    // 7F380F44: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F380F48:
    ctx->pc = 0x7F380F48u;
    // 7F380F48: lwzu     r0, -2672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F380F4C:
    // 7F380F4C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F380F50:
    ctx->pc = 0x7F380F50u;
    // 7F380F50: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380F54:
    // 7F380F54: b       0x7F380FD4
    {
            goto label_7F380FD4;
    }

label_7F380F58:
    ctx->downcount -= 5;
    // 7F380F58: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F380F5C:
    ctx->pc = 0x7F380F5Cu;
    // 7F380F5C: lwzu     r0, -2672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F380F60:
    // 7F380F60: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F380F64:
    ctx->pc = 0x7F380F64u;
    // 7F380F64: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380F68:
    // 7F380F68: b       0x7F380FD4
    {
            goto label_7F380FD4;
    }

label_7F380F6C:
    ctx->pc = 0x7F380F6Cu;
    ctx->downcount -= 12;
    // 7F380F6C: lwz     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380F70:
    // 7F380F70: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F380F74:
    // 7F380F74: addi    r5, r3, -2664
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-2664);

label_7F380F78:
    // 7F380F78: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F380F7C:
    ctx->pc = 0x7F380F7Cu;
    // 7F380F7C: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380F80:
    ctx->pc = 0x7F380F80u;
    // 7F380F80: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380F84:
    ctx->pc = 0x7F380F84u;
    // 7F380F84: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F380F88:
    ctx->pc = 0x7F380F88u;
    // 7F380F88: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380F8C:
    ctx->pc = 0x7F380F8Cu;
    // 7F380F8C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380F90:
    // 7F380F90: add   r0, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F380F94:
    ctx->pc = 0x7F380F94u;
    // 7F380F94: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380F98:
    // 7F380F98: b       0x7F380FD4
    {
            goto label_7F380FD4;
    }

label_7F380F9C:
    ctx->pc = 0x7F380F9Cu;
    ctx->downcount -= 3;
    // 7F380F9C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380FA0:
    // 7F380FA0: cmpwi   r0, 0
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

label_7F380FA4:
    // 7F380FA4: bc    4, 2, 0x7F380FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380FBC;
        }
    }

label_7F380FA8:
    ctx->downcount -= 5;
    // 7F380FA8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F380FAC:
    ctx->pc = 0x7F380FACu;
    // 7F380FAC: lwzu     r0, -2672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F380FB0:
    // 7F380FB0: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F380FB4:
    ctx->pc = 0x7F380FB4u;
    // 7F380FB4: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380FB8:
    // 7F380FB8: b       0x7F380FD4
    {
            goto label_7F380FD4;
    }

label_7F380FBC:
    ctx->downcount -= 2;
    // 7F380FBC: cmpwi   r0, 1
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

label_7F380FC0:
    // 7F380FC0: bc    4, 2, 0x7F380FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F380FD4;
        }
    }

label_7F380FC4:
    ctx->downcount -= 4;
    // 7F380FC4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F380FC8:
    ctx->pc = 0x7F380FC8u;
    // 7F380FC8: lwzu     r0, -2672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F380FCC:
    // 7F380FCC: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F380FD0:
    ctx->pc = 0x7F380FD0u;
    // 7F380FD0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380FD4:
    ctx->pc = 0x7F380FD4u;
    ctx->downcount -= 4;
    // 7F380FD4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F380FD8:
    // 7F380FD8: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F380FDC:
    ctx->pc = 0x7F380FDCu;
    // 7F380FDC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F380FE0:
    // 7F380FE0: bc    16, 0, 0x7F380F10
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F380F10u;
                return;
            }
            goto label_7F380F10;
        }
    }

label_7F380FE4:
    ctx->pc = 0x7F380FE4u;
    ctx->downcount -= 6;
    // 7F380FE4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F380FE8:
    ctx->pc = 0x7F380FE8u;
    // 7F380FE8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F380FEC:
    ctx->pc = 0x7F380FECu;
    // 7F380FEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F380FF0:
    ctx->pc = 0x7F380FF0u;
    // 7F380FF0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F380FF4:
    ctx->pc = 0x7F380FF4u;
    // 7F380FF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F380FF8:
    ctx->pc = 0x7F380FF8u;
    ctx->downcount -= 19;
    // 7F380FF8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F380FFC:
    ctx->pc = 0x7F380FFCu;
    // 7F380FFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381000:
    ctx->pc = 0x7F381000u;
    // 7F381000: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F381004:
    ctx->pc = 0x7F381004u;
    // 7F381004: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381008:
    ctx->pc = 0x7F381008u;
    // 7F381008: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F38100C:
    ctx->pc = 0x7F38100Cu;
    // 7F38100C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F381010:
    ctx->pc = 0x7F381010u;
    // 7F381010: lwz     r0, 19248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381014:
    ctx->pc = 0x7F381014u;
    // 7F381014: rlwinm. r0, r0, 0, 0, 0
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

label_7F381018:
    ctx->pc = 0x7F381018u;
    // 7F381018: bc    4, 2, 0x7F38102C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38102C;
        }
    }

label_7F38101C:
    ctx->pc = 0x7F38101Cu;
    ctx->downcount -= 4;
    // 7F38101C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381020:
    ctx->pc = 0x7F381020u;
    // 7F381020: lwz     r0, -2672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381024:
    ctx->pc = 0x7F381024u;
    // 7F381024: rlwinm. r0, r0, 0, 29, 29
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

label_7F381028:
    ctx->pc = 0x7F381028u;
    // 7F381028: bc    12, 2, 0x7F381038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381038;
        }
    }

label_7F38102C:
    ctx->pc = 0x7F38102Cu;
    ctx->downcount -= 2;
    // 7F38102C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F381030:
    ctx->pc = 0x7F381030u;
    // 7F381030: bl      0x7F3C8210
    {
            ctx->lr = 0x7F381034u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F381034:
    ctx->pc = 0x7F381034u;
    ctx->downcount -= 1;
    // 7F381034: b       0x7F3814C4
    {
            goto label_7F3814C4;
    }

label_7F381038:
    ctx->pc = 0x7F381038u;
    ctx->downcount -= 1;
    // 7F381038: bl      0x7F380EE0
    {
            ctx->lr = 0x7F38103Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F380EE0u;
                return;
            }
            goto label_7F380EE0;
    }

label_7F38103C:
    ctx->pc = 0x7F38103Cu;
    ctx->downcount -= 2;
    // 7F38103C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F381040:
    ctx->pc = 0x7F381040u;
    // 7F381040: bl      0x7F380CB4
    {
            ctx->lr = 0x7F381044u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F380CB4u;
                return;
            }
            goto label_7F380CB4;
    }

label_7F381044:
    ctx->pc = 0x7F381044u;
    ctx->downcount -= 2;
    // 7F381044: cmpwi   r3, 0
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

label_7F381048:
    ctx->pc = 0x7F381048u;
    // 7F381048: bc    12, 2, 0x7F381060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381060;
        }
    }

label_7F38104C:
    ctx->pc = 0x7F38104Cu;
    ctx->downcount -= 5;
    // 7F38104C: lwz     r3, 76(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381050:
    ctx->pc = 0x7F381050u;
    // 7F381050: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381054:
    ctx->pc = 0x7F381054u;
    // 7F381054: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F381058:
    ctx->pc = 0x7F381058u;
    // 7F381058: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38105C:
    ctx->pc = 0x7F38105Cu;
    // 7F38105C: b       0x7F3814C4
    {
            goto label_7F3814C4;
    }

label_7F381060:
    ctx->pc = 0x7F381060u;
    ctx->downcount -= 9;
    // 7F381060: lwz     r4, 76(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F381064:
    ctx->pc = 0x7F381064u;
    // 7F381064: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381068:
    ctx->pc = 0x7F381068u;
    // 7F381068: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38106C:
    ctx->pc = 0x7F38106Cu;
    // 7F38106C: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F381070:
    ctx->pc = 0x7F381070u;
    // 7F381070: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381074:
    ctx->pc = 0x7F381074u;
    // 7F381074: lwz     r0, -2672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381078:
    ctx->pc = 0x7F381078u;
    // 7F381078: nor   r0, r0, r0
    {
        ctx->gpr[0] = ~(ctx->gpr[0] | ctx->gpr[0]);
    }

label_7F38107C:
    ctx->pc = 0x7F38107Cu;
    // 7F38107C: rlwinm. r0, r0, 0, 31, 31
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

label_7F381080:
    ctx->pc = 0x7F381080u;
    // 7F381080: bc    12, 2, 0x7F381114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381114;
        }
    }

label_7F381084:
    ctx->pc = 0x7F381084u;
    ctx->downcount -= 3;
    // 7F381084: lwz     r4, 128(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F381088:
    ctx->pc = 0x7F381088u;
    // 7F381088: rlwinm. r0, r4, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F38108C:
    ctx->pc = 0x7F38108Cu;
    // 7F38108C: bc    12, 2, 0x7F3810F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3810F8;
        }
    }

label_7F381090:
    ctx->pc = 0x7F381090u;
    ctx->downcount -= 7;
    // 7F381090: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381094:
    ctx->pc = 0x7F381094u;
    // 7F381094: lwz     r5, 132(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381098:
    ctx->pc = 0x7F381098u;
    // 7F381098: addi    r3, r3, -2664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2664);

label_7F38109C:
    ctx->pc = 0x7F38109Cu;
    // 7F38109C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3810A0:
    ctx->pc = 0x7F3810A0u;
    // 7F3810A0: addi    r0, r5, 19
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(19);

label_7F3810A4:
    ctx->pc = 0x7F3810A4u;
    // 7F3810A4: cmpw    r0, r3
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

label_7F3810A8:
    ctx->pc = 0x7F3810A8u;
    // 7F3810A8: bc    4, 0, 0x7F3810DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3810DC;
        }
    }

label_7F3810AC:
    ctx->pc = 0x7F3810ACu;
    ctx->downcount -= 52;
    // 7F3810AC: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3810B0:
    ctx->pc = 0x7F3810B0u;
    // 7F3810B0: stw     r0, 132(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3810B4:
    ctx->pc = 0x7F3810B4u;
    // 7F3810B4: addi    r4, r3, -26404
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26404);

label_7F3810B8:
    ctx->pc = 0x7F3810B8u;
    // 7F3810B8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3810BC:
    ctx->pc = 0x7F3810BCu;
    // 7F3810BC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3810C0:
    ctx->pc = 0x7F3810C0u;
    // 7F3810C0: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F3810C4:
    ctx->pc = 0x7F3810C4u;
    // 7F3810C4: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F3810C8:
    ctx->pc = 0x7F3810C8u;
    // 7F3810C8: subf.   r0, r0, r4
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

label_7F3810CC:
    ctx->pc = 0x7F3810CCu;
    // 7F3810CC: bc    4, 2, 0x7F381114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381114;
        }
    }

label_7F3810D0:
    ctx->pc = 0x7F3810D0u;
    ctx->downcount -= 2;
    // 7F3810D0: li      r3, 208
    ctx->gpr[3] = (u32)(s32)(208);

label_7F3810D4:
    ctx->pc = 0x7F3810D4u;
    // 7F3810D4: bl      0x7F011604
    {
            ctx->lr = 0x7F3810D8u;
            ctx->pc = 0x7F011604u;
            return;
    }

label_7F3810D8:
    ctx->pc = 0x7F3810D8u;
    ctx->downcount -= 1;
    // 7F3810D8: b       0x7F381114
    {
            goto label_7F381114;
    }

label_7F3810DC:
    ctx->pc = 0x7F3810DCu;
    ctx->downcount -= 2;
    // 7F3810DC: cmpw    r5, r3
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3810E0:
    ctx->pc = 0x7F3810E0u;
    // 7F3810E0: bc    4, 0, 0x7F3810EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3810EC;
        }
    }

label_7F3810E4:
    ctx->pc = 0x7F3810E4u;
    ctx->downcount -= 2;
    // 7F3810E4: stw     r3, 132(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3810E8:
    ctx->pc = 0x7F3810E8u;
    // 7F3810E8: b       0x7F381114
    {
            goto label_7F381114;
    }

label_7F3810EC:
    ctx->pc = 0x7F3810ECu;
    ctx->downcount -= 3;
    // 7F3810EC: rlwinm r0, r4, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0xFFFFFFFEu;
    }

label_7F3810F0:
    ctx->pc = 0x7F3810F0u;
    // 7F3810F0: stw     r0, 128(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3810F4:
    ctx->pc = 0x7F3810F4u;
    // 7F3810F4: b       0x7F381114
    {
            goto label_7F381114;
    }

label_7F3810F8:
    ctx->pc = 0x7F3810F8u;
    ctx->downcount -= 5;
    // 7F3810F8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3810FC:
    ctx->pc = 0x7F3810FCu;
    // 7F3810FC: addi    r4, r3, -2664
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-2664);

label_7F381100:
    ctx->pc = 0x7F381100u;
    // 7F381100: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381104:
    ctx->pc = 0x7F381104u;
    // 7F381104: cmpwi   r3, 0
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

label_7F381108:
    ctx->pc = 0x7F381108u;
    // 7F381108: bc    4, 1, 0x7F381114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381114;
        }
    }

label_7F38110C:
    ctx->pc = 0x7F38110Cu;
    ctx->downcount -= 2;
    // 7F38110C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F381110:
    ctx->pc = 0x7F381110u;
    // 7F381110: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381114:
    ctx->pc = 0x7F381114u;
    ctx->downcount -= 4;
    // 7F381114: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381118:
    ctx->pc = 0x7F381118u;
    // 7F381118: lwz     r0, -2664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38111C:
    ctx->pc = 0x7F38111Cu;
    // 7F38111C: cmpwi   r0, 0
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

label_7F381120:
    ctx->pc = 0x7F381120u;
    // 7F381120: bc    4, 2, 0x7F381150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381150;
        }
    }

label_7F381124:
    ctx->pc = 0x7F381124u;
    ctx->downcount -= 4;
    // 7F381124: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F381128:
    ctx->pc = 0x7F381128u;
    // 7F381128: lwz     r0, 19248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38112C:
    ctx->pc = 0x7F38112Cu;
    // 7F38112C: rlwinm. r0, r0, 0, 0, 0
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

label_7F381130:
    ctx->pc = 0x7F381130u;
    // 7F381130: bc    4, 2, 0x7F381148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381148;
        }
    }

label_7F381134:
    ctx->pc = 0x7F381134u;
    ctx->downcount -= 3;
    // 7F381134: lwz     r3, 56(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381138:
    ctx->pc = 0x7F381138u;
    // 7F381138: cmpwi   r3, 0
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

label_7F38113C:
    ctx->pc = 0x7F38113Cu;
    // 7F38113C: bc    12, 2, 0x7F381148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381148;
        }
    }

label_7F381140:
    ctx->pc = 0x7F381140u;
    ctx->downcount -= 2;
    // 7F381140: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F381144:
    ctx->pc = 0x7F381144u;
    // 7F381144: bl      0x7F01FA88
    {
            ctx->lr = 0x7F381148u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F381148:
    ctx->pc = 0x7F381148u;
    ctx->downcount -= 2;
    // 7F381148: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F38114C:
    ctx->pc = 0x7F38114Cu;
    // 7F38114C: stw     r0, 56(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381150:
    ctx->pc = 0x7F381150u;
    ctx->downcount -= 3;
    // 7F381150: lwz     r0, 128(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381154:
    ctx->pc = 0x7F381154u;
    // 7F381154: rlwinm. r0, r0, 0, 31, 31
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

label_7F381158:
    ctx->pc = 0x7F381158u;
    // 7F381158: bc    4, 2, 0x7F381168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381168;
        }
    }

label_7F38115C:
    ctx->pc = 0x7F38115Cu;
    ctx->downcount -= 3;
    // 7F38115C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381160:
    ctx->pc = 0x7F381160u;
    // 7F381160: lwz     r0, -2664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381164:
    ctx->pc = 0x7F381164u;
    // 7F381164: stw     r0, 132(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381168:
    ctx->pc = 0x7F381168u;
    ctx->downcount -= 5;
    // 7F381168: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F38116C:
    ctx->pc = 0x7F38116Cu;
    // 7F38116C: addi    r5, r3, -2672
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-2672);

label_7F381170:
    ctx->pc = 0x7F381170u;
    // 7F381170: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381174:
    ctx->pc = 0x7F381174u;
    // 7F381174: rlwinm. r0, r3, 0, 28, 28
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

label_7F381178:
    ctx->pc = 0x7F381178u;
    // 7F381178: bc    4, 2, 0x7F3811A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3811A4;
        }
    }

label_7F38117C:
    ctx->pc = 0x7F38117Cu;
    ctx->downcount -= 4;
    // 7F38117C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381180:
    ctx->pc = 0x7F381180u;
    // 7F381180: lwz     r0, -2664(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381184:
    ctx->pc = 0x7F381184u;
    // 7F381184: cmpwi   r0, 0
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

label_7F381188:
    ctx->pc = 0x7F381188u;
    // 7F381188: bc    4, 2, 0x7F3811A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3811A4;
        }
    }

label_7F38118C:
    ctx->pc = 0x7F38118Cu;
    ctx->downcount -= 3;
    // 7F38118C: lwz     r0, 72(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381190:
    ctx->pc = 0x7F381190u;
    // 7F381190: cmpwi   r0, 0
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

label_7F381194:
    ctx->pc = 0x7F381194u;
    // 7F381194: bc    4, 2, 0x7F3811A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3811A4;
        }
    }

label_7F381198:
    ctx->pc = 0x7F381198u;
    ctx->downcount -= 3;
    // 7F381198: ori     r0, r3, 0x0002
    ctx->gpr[0] = ctx->gpr[3] | 0x0002u;

label_7F38119C:
    ctx->pc = 0x7F38119Cu;
    // 7F38119C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3811A0:
    ctx->pc = 0x7F3811A0u;
    // 7F3811A0: b       0x7F3814C4
    {
            goto label_7F3814C4;
    }

label_7F3811A4:
    ctx->pc = 0x7F3811A4u;
    ctx->downcount -= 3;
    // 7F3811A4: lwz     r0, 136(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3811A8:
    ctx->pc = 0x7F3811A8u;
    // 7F3811A8: cmpwi   r0, 0
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

label_7F3811AC:
    ctx->pc = 0x7F3811ACu;
    // 7F3811AC: bc    12, 2, 0x7F3811C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3811C0;
        }
    }

label_7F3811B0:
    ctx->pc = 0x7F3811B0u;
    ctx->downcount -= 1;
    // 7F3811B0: bc    12, 0, 0x7F3811C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3811C0;
        }
    }

label_7F3811B4:
    ctx->pc = 0x7F3811B4u;
    ctx->downcount -= 2;
    // 7F3811B4: cmpwi   r0, 3
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

label_7F3811B8:
    ctx->pc = 0x7F3811B8u;
    // 7F3811B8: bc    4, 0, 0x7F3811C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3811C0;
        }
    }

label_7F3811BC:
    ctx->pc = 0x7F3811BCu;
    ctx->downcount -= 1;
    // 7F3811BC: b       0x7F381200
    {
            goto label_7F381200;
    }

label_7F3811C0:
    ctx->pc = 0x7F3811C0u;
    ctx->downcount -= 223;
    // 7F3811C0: lwz     r8, 132(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(132);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3811C4:
    ctx->pc = 0x7F3811C4u;
    // 7F3811C4: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F3811C8:
    ctx->pc = 0x7F3811C8u;
    // 7F3811C8: li      r7, 3600
    ctx->gpr[7] = (u32)(s32)(3600);

label_7F3811CC:
    ctx->pc = 0x7F3811CCu;
    // 7F3811CC: li      r6, 10
    ctx->gpr[6] = (u32)(s32)(10);

label_7F3811D0:
    ctx->pc = 0x7F3811D0u;
    // 7F3811D0: divw   r9, r8, r5
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[9] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F3811D4:
    ctx->pc = 0x7F3811D4u;
    // 7F3811D4: divw   r4, r9, r5
    {
        s32 dividend = (s32)ctx->gpr[9];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F3811D8:
    ctx->pc = 0x7F3811D8u;
    // 7F3811D8: divw   r7, r8, r7
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F3811DC:
    ctx->pc = 0x7F3811DCu;
    // 7F3811DC: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F3811E0:
    ctx->pc = 0x7F3811E0u;
    // 7F3811E0: subf   r9, r4, r9
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[9] = res;
    }

label_7F3811E4:
    ctx->pc = 0x7F3811E4u;
    // 7F3811E4: divw   r31, r7, r6
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[31] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F3811E8:
    ctx->pc = 0x7F3811E8u;
    // 7F3811E8: divw   r29, r9, r6
    {
        s32 dividend = (s32)ctx->gpr[9];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F3811EC:
    ctx->pc = 0x7F3811ECu;
    // 7F3811EC: mullw   r5, r31, r6
    {
        s64 product = (s64)(s32)ctx->gpr[31] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[5] = (u32)product;
    }

label_7F3811F0:
    ctx->pc = 0x7F3811F0u;
    // 7F3811F0: mullw   r4, r29, r6
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[4] = (u32)product;
    }

label_7F3811F4:
    ctx->pc = 0x7F3811F4u;
    // 7F3811F4: subf   r30, r5, r7
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_7F3811F8:
    ctx->pc = 0x7F3811F8u;
    // 7F3811F8: subf   r28, r4, r9
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[28] = res;
    }

label_7F3811FC:
    ctx->pc = 0x7F3811FCu;
    // 7F3811FC: b       0x7F381244
    {
            goto label_7F381244;
    }

label_7F381200:
    ctx->pc = 0x7F381200u;
    ctx->downcount -= 263;
    // 7F381200: lwz     r5, 132(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381204:
    ctx->pc = 0x7F381204u;
    // 7F381204: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F381208:
    ctx->pc = 0x7F381208u;
    // 7F381208: li      r6, 1000
    ctx->gpr[6] = (u32)(s32)(1000);

label_7F38120C:
    ctx->pc = 0x7F38120Cu;
    // 7F38120C: li      r7, 100
    ctx->gpr[7] = (u32)(s32)(100);

label_7F381210:
    ctx->pc = 0x7F381210u;
    // 7F381210: divw   r9, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[9] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381214:
    ctx->pc = 0x7F381214u;
    // 7F381214: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F381218:
    ctx->pc = 0x7F381218u;
    // 7F381218: divw   r31, r9, r6
    {
        s32 dividend = (s32)ctx->gpr[9];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[31] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F38121C:
    ctx->pc = 0x7F38121Cu;
    // 7F38121C: divw   r4, r9, r7
    {
        s32 dividend = (s32)ctx->gpr[9];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381220:
    ctx->pc = 0x7F381220u;
    // 7F381220: mullw   r8, r31, r6
    {
        s64 product = (s64)(s32)ctx->gpr[31] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[8] = (u32)product;
    }

label_7F381224:
    ctx->pc = 0x7F381224u;
    // 7F381224: mullw   r6, r4, r7
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[6] = (u32)product;
    }

label_7F381228:
    ctx->pc = 0x7F381228u;
    // 7F381228: subf   r8, r8, r9
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_7F38122C:
    ctx->pc = 0x7F38122Cu;
    // 7F38122C: divw   r4, r9, r5
    {
        s32 dividend = (s32)ctx->gpr[9];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381230:
    ctx->pc = 0x7F381230u;
    // 7F381230: subf   r6, r6, r9
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F381234:
    ctx->pc = 0x7F381234u;
    // 7F381234: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F381238:
    ctx->pc = 0x7F381238u;
    // 7F381238: divw   r30, r8, r7
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[30] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F38123C:
    ctx->pc = 0x7F38123Cu;
    // 7F38123C: subf   r28, r4, r9
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b + 1u;
        ctx->gpr[28] = res;
    }

label_7F381240:
    ctx->pc = 0x7F381240u;
    // 7F381240: divw   r29, r6, r5
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381244:
    ctx->pc = 0x7F381244u;
    ctx->downcount -= 142;
    // 7F381244: lwz     r8, 132(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(132);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F381248:
    ctx->pc = 0x7F381248u;
    // 7F381248: li      r7, 60
    ctx->gpr[7] = (u32)(s32)(60);

label_7F38124C:
    ctx->pc = 0x7F38124Cu;
    // 7F38124C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381250:
    ctx->pc = 0x7F381250u;
    // 7F381250: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F381254:
    ctx->pc = 0x7F381254u;
    // 7F381254: divw   r6, r8, r7
    {
        s32 dividend = (s32)ctx->gpr[8];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[6] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381258:
    ctx->pc = 0x7F381258u;
    // 7F381258: lwz     r9, -2664(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2664);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F38125C:
    ctx->pc = 0x7F38125Cu;
    // 7F38125C: cmpwi   r9, 600
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(600);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F381260:
    ctx->pc = 0x7F381260u;
    // 7F381260: mullw   r4, r6, r7
    {
        s64 product = (s64)(s32)ctx->gpr[6] * (s64)(s32)ctx->gpr[7];
        ctx->gpr[4] = (u32)product;
    }

label_7F381264:
    ctx->pc = 0x7F381264u;
    // 7F381264: subf   r4, r4, r8
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F381268:
    ctx->pc = 0x7F381268u;
    // 7F381268: mulli   r4, r4, 100
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)100);

label_7F38126C:
    ctx->pc = 0x7F38126Cu;
    // 7F38126C: divw   r24, r4, r7
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[7];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[24] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381270:
    ctx->pc = 0x7F381270u;
    // 7F381270: divw   r27, r24, r5
    {
        s32 dividend = (s32)ctx->gpr[24];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[27] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381274:
    ctx->pc = 0x7F381274u;
    // 7F381274: mullw   r4, r27, r5
    {
        s64 product = (s64)(s32)ctx->gpr[27] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F381278:
    ctx->pc = 0x7F381278u;
    // 7F381278: subf   r26, r4, r24
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[24];
        u32 res = a + b + 1u;
        ctx->gpr[26] = res;
    }

label_7F38127C:
    ctx->pc = 0x7F38127Cu;
    // 7F38127C: bc    12, 0, 0x7F381288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381288;
        }
    }

label_7F381280:
    ctx->pc = 0x7F381280u;
    ctx->downcount -= 2;
    // 7F381280: cmpwi   r0, 2
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

label_7F381284:
    ctx->pc = 0x7F381284u;
    // 7F381284: bc    4, 2, 0x7F381334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381334;
        }
    }

label_7F381288:
    ctx->pc = 0x7F381288u;
    ctx->downcount -= 2;
    // 7F381288: cmpwi   r24, 50
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(50);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F38128C:
    ctx->pc = 0x7F38128Cu;
    // 7F38128C: bc    12, 1, 0x7F381298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381298;
        }
    }

label_7F381290:
    ctx->pc = 0x7F381290u;
    ctx->downcount -= 2;
    // 7F381290: cmpwi   r24, 0
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

label_7F381294:
    ctx->pc = 0x7F381294u;
    // 7F381294: bc    4, 2, 0x7F381334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381334;
        }
    }

label_7F381298:
    ctx->pc = 0x7F381298u;
    ctx->downcount -= 4;
    // 7F381298: lwz     r0, 128(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38129C:
    ctx->pc = 0x7F38129Cu;
    // 7F38129C: nor   r0, r0, r0
    {
        ctx->gpr[0] = ~(ctx->gpr[0] | ctx->gpr[0]);
    }

label_7F3812A0:
    ctx->pc = 0x7F3812A0u;
    // 7F3812A0: rlwinm. r0, r0, 0, 31, 31
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

label_7F3812A4:
    ctx->pc = 0x7F3812A4u;
    // 7F3812A4: bc    12, 2, 0x7F381334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381334;
        }
    }

label_7F3812A8:
    ctx->pc = 0x7F3812A8u;
    ctx->downcount -= 3;
    // 7F3812A8: nor   r0, r3, r3
    {
        ctx->gpr[0] = ~(ctx->gpr[3] | ctx->gpr[3]);
    }

label_7F3812AC:
    ctx->pc = 0x7F3812ACu;
    // 7F3812AC: rlwinm. r0, r0, 0, 31, 31
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

label_7F3812B0:
    ctx->pc = 0x7F3812B0u;
    // 7F3812B0: bc    12, 2, 0x7F381334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381334;
        }
    }

label_7F3812B4:
    ctx->pc = 0x7F3812B4u;
    ctx->downcount -= 2;
    // 7F3812B4: cmpwi   r9, 600
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(600);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3812B8:
    ctx->pc = 0x7F3812B8u;
    // 7F3812B8: bc    4, 0, 0x7F3812F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3812F8;
        }
    }

label_7F3812BC:
    ctx->pc = 0x7F3812BCu;
    ctx->downcount -= 6;
    // 7F3812BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3812C0:
    ctx->pc = 0x7F3812C0u;
    // 7F3812C0: li      r4, 140
    ctx->gpr[4] = (u32)(s32)(140);

label_7F3812C4:
    ctx->pc = 0x7F3812C4u;
    // 7F3812C4: li      r5, 12
    ctx->gpr[5] = (u32)(s32)(12);

label_7F3812C8:
    ctx->pc = 0x7F3812C8u;
    // 7F3812C8: li      r6, 18
    ctx->gpr[6] = (u32)(s32)(18);

label_7F3812CC:
    ctx->pc = 0x7F3812CCu;
    // 7F3812CC: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F3812D0:
    ctx->pc = 0x7F3812D0u;
    // 7F3812D0: bl      0x7F0B98C4
    {
            ctx->lr = 0x7F3812D4u;
            ctx->pc = 0x7F0B98C4u;
            return;
    }

label_7F3812D4:
    ctx->pc = 0x7F3812D4u;
    ctx->downcount -= 2;
    // 7F3812D4: cmpwi   r24, 0
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

label_7F3812D8:
    ctx->pc = 0x7F3812D8u;
    // 7F3812D8: bc    4, 2, 0x7F38134C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38134C;
        }
    }

label_7F3812DC:
    ctx->pc = 0x7F3812DCu;
    ctx->downcount -= 4;
    // 7F3812DC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3812E0:
    ctx->pc = 0x7F3812E0u;
    // 7F3812E0: lwz     r0, -2664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3812E4:
    ctx->pc = 0x7F3812E4u;
    // 7F3812E4: cmpwi   r0, 0
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

label_7F3812E8:
    ctx->pc = 0x7F3812E8u;
    // 7F3812E8: bc    12, 2, 0x7F38134C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38134C;
        }
    }

label_7F3812EC:
    ctx->pc = 0x7F3812ECu;
    ctx->downcount -= 2;
    // 7F3812EC: li      r3, 207
    ctx->gpr[3] = (u32)(s32)(207);

label_7F3812F0:
    ctx->pc = 0x7F3812F0u;
    // 7F3812F0: bl      0x7F011604
    {
            ctx->lr = 0x7F3812F4u;
            ctx->pc = 0x7F011604u;
            return;
    }

label_7F3812F4:
    ctx->pc = 0x7F3812F4u;
    ctx->downcount -= 1;
    // 7F3812F4: b       0x7F38134C
    {
            goto label_7F38134C;
    }

label_7F3812F8:
    ctx->pc = 0x7F3812F8u;
    ctx->downcount -= 6;
    // 7F3812F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3812FC:
    ctx->pc = 0x7F3812FCu;
    // 7F3812FC: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_7F381300:
    ctx->pc = 0x7F381300u;
    // 7F381300: li      r5, 180
    ctx->gpr[5] = (u32)(s32)(180);

label_7F381304:
    ctx->pc = 0x7F381304u;
    // 7F381304: li      r6, 180
    ctx->gpr[6] = (u32)(s32)(180);

label_7F381308:
    ctx->pc = 0x7F381308u;
    // 7F381308: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F38130C:
    ctx->pc = 0x7F38130Cu;
    // 7F38130C: bl      0x7F0B98C4
    {
            ctx->lr = 0x7F381310u;
            ctx->pc = 0x7F0B98C4u;
            return;
    }

label_7F381310:
    ctx->pc = 0x7F381310u;
    ctx->downcount -= 2;
    // 7F381310: cmpwi   r24, 0
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

label_7F381314:
    ctx->pc = 0x7F381314u;
    // 7F381314: bc    4, 2, 0x7F38134C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38134C;
        }
    }

label_7F381318:
    ctx->pc = 0x7F381318u;
    ctx->downcount -= 4;
    // 7F381318: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F38131C:
    ctx->pc = 0x7F38131Cu;
    // 7F38131C: lwz     r0, -2664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381320:
    ctx->pc = 0x7F381320u;
    // 7F381320: cmpwi   r0, 0
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

label_7F381324:
    ctx->pc = 0x7F381324u;
    // 7F381324: bc    12, 2, 0x7F38134C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38134C;
        }
    }

label_7F381328:
    ctx->pc = 0x7F381328u;
    ctx->downcount -= 2;
    // 7F381328: li      r3, 1413
    ctx->gpr[3] = (u32)(s32)(1413);

label_7F38132C:
    ctx->pc = 0x7F38132Cu;
    // 7F38132C: bl      0x7F011604
    {
            ctx->lr = 0x7F381330u;
            ctx->pc = 0x7F011604u;
            return;
    }

label_7F381330:
    ctx->pc = 0x7F381330u;
    ctx->downcount -= 1;
    // 7F381330: b       0x7F38134C
    {
            goto label_7F38134C;
    }

label_7F381334:
    ctx->pc = 0x7F381334u;
    ctx->downcount -= 6;
    // 7F381334: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381338:
    ctx->pc = 0x7F381338u;
    // 7F381338: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_7F38133C:
    ctx->pc = 0x7F38133Cu;
    // 7F38133C: li      r5, 180
    ctx->gpr[5] = (u32)(s32)(180);

label_7F381340:
    ctx->pc = 0x7F381340u;
    // 7F381340: li      r6, 180
    ctx->gpr[6] = (u32)(s32)(180);

label_7F381344:
    ctx->pc = 0x7F381344u;
    // 7F381344: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F381348:
    ctx->pc = 0x7F381348u;
    // 7F381348: bl      0x7F0B98C4
    {
            ctx->lr = 0x7F38134Cu;
            ctx->pc = 0x7F0B98C4u;
            return;
    }

label_7F38134C:
    ctx->pc = 0x7F38134Cu;
    ctx->downcount -= 3;
    // 7F38134C: lwz     r0, 136(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(136);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381350:
    ctx->pc = 0x7F381350u;
    // 7F381350: cmpwi   r0, 1
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

label_7F381354:
    ctx->pc = 0x7F381354u;
    // 7F381354: bc    12, 2, 0x7F3813D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3813D8;
        }
    }

label_7F381358:
    ctx->pc = 0x7F381358u;
    ctx->downcount -= 1;
    // 7F381358: bc    4, 0, 0x7F381360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381360;
        }
    }

label_7F38135C:
    ctx->pc = 0x7F38135Cu;
    ctx->downcount -= 1;
    // 7F38135C: b       0x7F38136C
    {
            goto label_7F38136C;
    }

label_7F381360:
    ctx->pc = 0x7F381360u;
    ctx->downcount -= 2;
    // 7F381360: cmpwi   r0, 3
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

label_7F381364:
    ctx->pc = 0x7F381364u;
    // 7F381364: bc    4, 0, 0x7F38136C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38136C;
        }
    }

label_7F381368:
    ctx->pc = 0x7F381368u;
    ctx->downcount -= 1;
    // 7F381368: b       0x7F381444
    {
            goto label_7F381444;
    }

label_7F38136C:
    ctx->pc = 0x7F38136Cu;
    ctx->downcount -= 6;
    // 7F38136C: lwz     r5, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381370:
    ctx->pc = 0x7F381370u;
    // 7F381370: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381374:
    ctx->pc = 0x7F381374u;
    // 7F381374: li      r4, 382
    ctx->gpr[4] = (u32)(s32)(382);

label_7F381378:
    ctx->pc = 0x7F381378u;
    // 7F381378: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F38137C:
    ctx->pc = 0x7F38137Cu;
    // 7F38137C: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F381380:
    ctx->pc = 0x7F381380u;
    // 7F381380: bl      0x7F0B9990
    {
            ctx->lr = 0x7F381384u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F381384:
    ctx->pc = 0x7F381384u;
    ctx->downcount -= 4;
    // 7F381384: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F381388:
    ctx->pc = 0x7F381388u;
    // 7F381388: addi    r3, r3, 9412
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9412);

label_7F38138C:
    ctx->pc = 0x7F38138Cu;
    // 7F38138C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F381390:
    ctx->pc = 0x7F381390u;
    // 7F381390: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F381394u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F381394:
    ctx->pc = 0x7F381394u;
    ctx->downcount -= 6;
    // 7F381394: lwz     r5, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381398:
    ctx->pc = 0x7F381398u;
    // 7F381398: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F38139C:
    ctx->pc = 0x7F38139Cu;
    // 7F38139C: li      r4, 382
    ctx->gpr[4] = (u32)(s32)(382);

label_7F3813A0:
    ctx->pc = 0x7F3813A0u;
    // 7F3813A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3813A4:
    ctx->pc = 0x7F3813A4u;
    // 7F3813A4: addi    r5, r5, 18
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18);

label_7F3813A8:
    ctx->pc = 0x7F3813A8u;
    // 7F3813A8: bl      0x7F0B9990
    {
            ctx->lr = 0x7F3813ACu;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F3813AC:
    ctx->pc = 0x7F3813ACu;
    ctx->downcount -= 10;
    // 7F3813AC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3813B0:
    ctx->pc = 0x7F3813B0u;
    // 7F3813B0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3813B4:
    ctx->pc = 0x7F3813B4u;
    // 7F3813B4: addi    r3, r3, 9424
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9424);

label_7F3813B8:
    ctx->pc = 0x7F3813B8u;
    // 7F3813B8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3813BC:
    ctx->pc = 0x7F3813BCu;
    // 7F3813BC: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3813C0:
    ctx->pc = 0x7F3813C0u;
    // 7F3813C0: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3813C4:
    ctx->pc = 0x7F3813C4u;
    // 7F3813C4: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3813C8:
    ctx->pc = 0x7F3813C8u;
    // 7F3813C8: or   r9, r26, r26
    {
        ctx->gpr[9] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3813CC:
    ctx->pc = 0x7F3813CCu;
    // 7F3813CC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F3813D0:
    ctx->pc = 0x7F3813D0u;
    // 7F3813D0: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F3813D4u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F3813D4:
    ctx->pc = 0x7F3813D4u;
    ctx->downcount -= 1;
    // 7F3813D4: b       0x7F3814C4
    {
            goto label_7F3814C4;
    }

label_7F3813D8:
    ctx->pc = 0x7F3813D8u;
    ctx->downcount -= 6;
    // 7F3813D8: lwz     r5, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3813DC:
    ctx->pc = 0x7F3813DCu;
    // 7F3813DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3813E0:
    ctx->pc = 0x7F3813E0u;
    // 7F3813E0: li      r4, 382
    ctx->gpr[4] = (u32)(s32)(382);

label_7F3813E4:
    ctx->pc = 0x7F3813E4u;
    // 7F3813E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3813E8:
    ctx->pc = 0x7F3813E8u;
    // 7F3813E8: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F3813EC:
    ctx->pc = 0x7F3813ECu;
    // 7F3813EC: bl      0x7F0B9990
    {
            ctx->lr = 0x7F3813F0u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F3813F0:
    ctx->pc = 0x7F3813F0u;
    ctx->downcount -= 4;
    // 7F3813F0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3813F4:
    ctx->pc = 0x7F3813F4u;
    // 7F3813F4: addi    r3, r3, 9412
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9412);

label_7F3813F8:
    ctx->pc = 0x7F3813F8u;
    // 7F3813F8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F3813FC:
    ctx->pc = 0x7F3813FCu;
    // 7F3813FC: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F381400u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F381400:
    ctx->pc = 0x7F381400u;
    ctx->downcount -= 6;
    // 7F381400: lwz     r5, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381404:
    ctx->pc = 0x7F381404u;
    // 7F381404: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381408:
    ctx->pc = 0x7F381408u;
    // 7F381408: li      r4, 382
    ctx->gpr[4] = (u32)(s32)(382);

label_7F38140C:
    ctx->pc = 0x7F38140Cu;
    // 7F38140C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381410:
    ctx->pc = 0x7F381410u;
    // 7F381410: addi    r5, r5, 18
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18);

label_7F381414:
    ctx->pc = 0x7F381414u;
    // 7F381414: bl      0x7F0B9990
    {
            ctx->lr = 0x7F381418u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F381418:
    ctx->pc = 0x7F381418u;
    ctx->downcount -= 10;
    // 7F381418: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F38141C:
    ctx->pc = 0x7F38141Cu;
    // 7F38141C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381420:
    ctx->pc = 0x7F381420u;
    // 7F381420: addi    r3, r3, 9444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9444);

label_7F381424:
    ctx->pc = 0x7F381424u;
    // 7F381424: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F381428:
    ctx->pc = 0x7F381428u;
    // 7F381428: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F38142C:
    ctx->pc = 0x7F38142Cu;
    // 7F38142C: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F381430:
    ctx->pc = 0x7F381430u;
    // 7F381430: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F381434:
    ctx->pc = 0x7F381434u;
    // 7F381434: or   r9, r26, r26
    {
        ctx->gpr[9] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F381438:
    ctx->pc = 0x7F381438u;
    // 7F381438: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F38143C:
    ctx->pc = 0x7F38143Cu;
    // 7F38143C: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F381440u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F381440:
    ctx->pc = 0x7F381440u;
    ctx->downcount -= 1;
    // 7F381440: b       0x7F3814C4
    {
            goto label_7F3814C4;
    }

label_7F381444:
    ctx->pc = 0x7F381444u;
    ctx->downcount -= 6;
    // 7F381444: lwz     r5, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381448:
    ctx->pc = 0x7F381448u;
    // 7F381448: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F38144C:
    ctx->pc = 0x7F38144Cu;
    // 7F38144C: li      r4, 382
    ctx->gpr[4] = (u32)(s32)(382);

label_7F381450:
    ctx->pc = 0x7F381450u;
    // 7F381450: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381454:
    ctx->pc = 0x7F381454u;
    // 7F381454: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F381458:
    ctx->pc = 0x7F381458u;
    // 7F381458: bl      0x7F0B9990
    {
            ctx->lr = 0x7F38145Cu;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F38145C:
    ctx->pc = 0x7F38145Cu;
    ctx->downcount -= 53;
    // 7F38145C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381460:
    ctx->pc = 0x7F381460u;
    // 7F381460: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F381464:
    ctx->pc = 0x7F381464u;
    // 7F381464: lwz     r5, -2668(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2668);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381468:
    ctx->pc = 0x7F381468u;
    // 7F381468: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F38146C:
    ctx->pc = 0x7F38146Cu;
    // 7F38146C: addi    r3, r3, 9460
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9460);

label_7F381470:
    ctx->pc = 0x7F381470u;
    // 7F381470: divw   r4, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381474:
    ctx->pc = 0x7F381474u;
    // 7F381474: mullw   r0, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[0] = (u32)product;
    }

label_7F381478:
    ctx->pc = 0x7F381478u;
    // 7F381478: subf   r5, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_7F38147C:
    ctx->pc = 0x7F38147Cu;
    // 7F38147C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F381480:
    ctx->pc = 0x7F381480u;
    // 7F381480: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F381484u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F381484:
    ctx->pc = 0x7F381484u;
    ctx->downcount -= 6;
    // 7F381484: lwz     r5, 68(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381488:
    ctx->pc = 0x7F381488u;
    // 7F381488: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F38148C:
    ctx->pc = 0x7F38148Cu;
    // 7F38148C: li      r4, 382
    ctx->gpr[4] = (u32)(s32)(382);

label_7F381490:
    ctx->pc = 0x7F381490u;
    // 7F381490: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381494:
    ctx->pc = 0x7F381494u;
    // 7F381494: addi    r5, r5, 18
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18);

label_7F381498:
    ctx->pc = 0x7F381498u;
    // 7F381498: bl      0x7F0B9990
    {
            ctx->lr = 0x7F38149Cu;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F38149C:
    ctx->pc = 0x7F38149Cu;
    ctx->downcount -= 10;
    // 7F38149C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3814A0:
    ctx->pc = 0x7F3814A0u;
    // 7F3814A0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3814A4:
    ctx->pc = 0x7F3814A4u;
    // 7F3814A4: addi    r3, r3, 9444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9444);

label_7F3814A8:
    ctx->pc = 0x7F3814A8u;
    // 7F3814A8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3814AC:
    ctx->pc = 0x7F3814ACu;
    // 7F3814AC: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F3814B0:
    ctx->pc = 0x7F3814B0u;
    // 7F3814B0: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F3814B4:
    ctx->pc = 0x7F3814B4u;
    // 7F3814B4: or   r8, r27, r27
    {
        ctx->gpr[8] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F3814B8:
    ctx->pc = 0x7F3814B8u;
    // 7F3814B8: or   r9, r26, r26
    {
        ctx->gpr[9] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F3814BC:
    ctx->pc = 0x7F3814BCu;
    // 7F3814BC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F3814C0:
    ctx->pc = 0x7F3814C0u;
    // 7F3814C0: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F3814C4u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F3814C4:
    ctx->pc = 0x7F3814C4u;
    ctx->downcount -= 16;
    // 7F3814C4: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3814C8:
    ctx->pc = 0x7F3814C8u;
    // 7F3814C8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3814CC:
    ctx->pc = 0x7F3814CCu;
    // 7F3814CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3814D0:
    ctx->pc = 0x7F3814D0u;
    // 7F3814D0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3814D4:
    ctx->pc = 0x7F3814D4u;
    // 7F3814D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3814D8:
    ctx->pc = 0x7F3814D8u;
    ctx->downcount -= 8;
    // 7F3814D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3814DC:
    ctx->pc = 0x7F3814DCu;
    // 7F3814DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3814E0:
    ctx->pc = 0x7F3814E0u;
    // 7F3814E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3814E4:
    ctx->pc = 0x7F3814E4u;
    // 7F3814E4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3814E8:
    ctx->pc = 0x7F3814E8u;
    // 7F3814E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3814EC:
    ctx->pc = 0x7F3814ECu;
    // 7F3814EC: lwz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3814F0:
    ctx->pc = 0x7F3814F0u;
    // 7F3814F0: cmpwi   r3, 0
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

label_7F3814F4:
    ctx->pc = 0x7F3814F4u;
    // 7F3814F4: bc    12, 2, 0x7F381500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381500;
        }
    }

label_7F3814F8:
    ctx->pc = 0x7F3814F8u;
    ctx->downcount -= 2;
    // 7F3814F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3814FC:
    ctx->pc = 0x7F3814FCu;
    // 7F3814FC: bl      0x7F01FA88
    {
            ctx->lr = 0x7F381500u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F381500:
    ctx->pc = 0x7F381500u;
    ctx->downcount -= 2;
    // 7F381500: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381504:
    ctx->pc = 0x7F381504u;
    // 7F381504: bl      0x7F2E18D4
    {
            ctx->lr = 0x7F381508u;
            ctx->pc = 0x7F2E18D4u;
            return;
    }

label_7F381508:
    ctx->pc = 0x7F381508u;
    ctx->downcount -= 2;
    // 7F381508: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38150C:
    ctx->pc = 0x7F38150Cu;
    // 7F38150C: bl      0x7F2E4330
    {
            ctx->lr = 0x7F381510u;
            ctx->pc = 0x7F2E4330u;
            return;
    }

label_7F381510:
    ctx->pc = 0x7F381510u;
    ctx->downcount -= 6;
    // 7F381510: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381514:
    ctx->pc = 0x7F381514u;
    // 7F381514: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F381518:
    ctx->pc = 0x7F381518u;
    // 7F381518: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F38151C:
    ctx->pc = 0x7F38151Cu;
    // 7F38151C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381520:
    ctx->pc = 0x7F381520u;
    // 7F381520: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381524:
    ctx->pc = 0x7F381524u;
    ctx->downcount -= 26;
    // 7F381524: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381528:
    ctx->pc = 0x7F381528u;
    // 7F381528: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F38152C:
    ctx->pc = 0x7F38152Cu;
    // 7F38152C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F381530:
    ctx->pc = 0x7F381530u;
    // 7F381530: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F381534:
    ctx->pc = 0x7F381534u;
    // 7F381534: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381538:
    ctx->pc = 0x7F381538u;
    // 7F381538: addi    r7, r6, -2668
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-2668);

label_7F38153C:
    ctx->pc = 0x7F38153Cu;
    // 7F38153C: addi    r6, r5, -2672
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-2672);

label_7F381540:
    ctx->pc = 0x7F381540u;
    // 7F381540: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381544:
    ctx->pc = 0x7F381544u;
    // 7F381544: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F381548:
    ctx->pc = 0x7F381548u;
    // 7F381548: lis     r5, 113
    ctx->gpr[5] = ((u32)(s32)(113) << 16);

label_7F38154C:
    ctx->pc = 0x7F38154Cu;
    // 7F38154C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F381550:
    ctx->pc = 0x7F381550u;
    // 7F381550: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F381554:
    ctx->pc = 0x7F381554u;
    // 7F381554: addi    r3, r5, 23936
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(23936);

label_7F381558:
    ctx->pc = 0x7F381558u;
    // 7F381558: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38155C:
    ctx->pc = 0x7F38155Cu;
    // 7F38155C: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381560:
    ctx->pc = 0x7F381560u;
    // 7F381560: bl      0x7F2E425C
    {
            ctx->lr = 0x7F381564u;
            ctx->pc = 0x7F2E425Cu;
            return;
    }

label_7F381564:
    ctx->pc = 0x7F381564u;
    ctx->downcount -= 5;
    // 7F381564: stw     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381568:
    ctx->pc = 0x7F381568u;
    // 7F381568: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F38156C:
    ctx->pc = 0x7F38156Cu;
    // 7F38156C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F381570:
    ctx->pc = 0x7F381570u;
    // 7F381570: stw     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F381574:
    ctx->pc = 0x7F381574u;
    // 7F381574: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F381578u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F381578:
    ctx->pc = 0x7F381578u;
    ctx->downcount -= 7;
    // 7F381578: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F38157C:
    ctx->pc = 0x7F38157Cu;
    // 7F38157C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381580:
    ctx->pc = 0x7F381580u;
    // 7F381580: stw     r3, -2664(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381584:
    ctx->pc = 0x7F381584u;
    // 7F381584: stw     r3, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381588:
    ctx->pc = 0x7F381588u;
    // 7F381588: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F38158C:
    ctx->pc = 0x7F38158Cu;
    // 7F38158C: stw     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381590:
    ctx->pc = 0x7F381590u;
    // 7F381590: bl      0x7F3C664C
    {
            ctx->lr = 0x7F381594u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F381594:
    ctx->pc = 0x7F381594u;
    ctx->downcount -= 2;
    // 7F381594: cmplwi  r3, 0x0000
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

label_7F381598:
    ctx->pc = 0x7F381598u;
    // 7F381598: bc    12, 2, 0x7F3815B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3815B0;
        }
    }

label_7F38159C:
    ctx->pc = 0x7F38159Cu;
    ctx->downcount -= 1;
    // 7F38159C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3815A0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3815A0:
    ctx->pc = 0x7F3815A0u;
    ctx->downcount -= 2;
    // 7F3815A0: cmplwi  r3, 0x0000
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

label_7F3815A4:
    ctx->pc = 0x7F3815A4u;
    // 7F3815A4: bc    12, 2, 0x7F3815B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3815B0;
        }
    }

label_7F3815A8:
    ctx->pc = 0x7F3815A8u;
    ctx->downcount -= 1;
    // 7F3815A8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3815ACu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3815AC:
    ctx->pc = 0x7F3815ACu;
    ctx->downcount -= 1;
    // 7F3815AC: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3815B0:
    ctx->pc = 0x7F3815B0u;
    ctx->downcount -= 4;
    // 7F3815B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3815B4:
    ctx->pc = 0x7F3815B4u;
    // 7F3815B4: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F3815B8:
    ctx->pc = 0x7F3815B8u;
    // 7F3815B8: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3815BC:
    ctx->pc = 0x7F3815BCu;
    // 7F3815BC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3815C0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3815C0:
    ctx->pc = 0x7F3815C0u;
    ctx->downcount -= 2;
    // 7F3815C0: cmplwi  r3, 0x0000
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

label_7F3815C4:
    ctx->pc = 0x7F3815C4u;
    // 7F3815C4: bc    12, 2, 0x7F3815DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3815DC;
        }
    }

label_7F3815C8:
    ctx->pc = 0x7F3815C8u;
    ctx->downcount -= 1;
    // 7F3815C8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3815CCu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3815CC:
    ctx->pc = 0x7F3815CCu;
    ctx->downcount -= 2;
    // 7F3815CC: cmplwi  r3, 0x0000
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

label_7F3815D0:
    ctx->pc = 0x7F3815D0u;
    // 7F3815D0: bc    12, 2, 0x7F3815DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3815DC;
        }
    }

label_7F3815D4:
    ctx->pc = 0x7F3815D4u;
    ctx->downcount -= 1;
    // 7F3815D4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3815D8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3815D8:
    ctx->pc = 0x7F3815D8u;
    ctx->downcount -= 1;
    // 7F3815D8: stw     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3815DC:
    ctx->pc = 0x7F3815DCu;
    ctx->downcount -= 2;
    // 7F3815DC: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F3815E0:
    ctx->pc = 0x7F3815E0u;
    // 7F3815E0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F3815E4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F3815E4:
    ctx->pc = 0x7F3815E4u;
    ctx->downcount -= 2;
    // 7F3815E4: cmplwi  r3, 0x0000
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

label_7F3815E8:
    ctx->pc = 0x7F3815E8u;
    // 7F3815E8: bc    12, 2, 0x7F381608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381608;
        }
    }

label_7F3815EC:
    ctx->pc = 0x7F3815ECu;
    ctx->downcount -= 1;
    // 7F3815EC: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F3815F0u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F3815F0:
    ctx->pc = 0x7F3815F0u;
    ctx->downcount -= 2;
    // 7F3815F0: cmplwi  r3, 0x0000
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

label_7F3815F4:
    ctx->pc = 0x7F3815F4u;
    // 7F3815F4: bc    12, 2, 0x7F381614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381614;
        }
    }

label_7F3815F8:
    ctx->pc = 0x7F3815F8u;
    ctx->downcount -= 1;
    // 7F3815F8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F3815FCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F3815FC:
    ctx->pc = 0x7F3815FCu;
    ctx->downcount -= 3;
    // 7F3815FC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381600:
    ctx->pc = 0x7F381600u;
    // 7F381600: stw     r3, -2672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2672);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381604:
    ctx->pc = 0x7F381604u;
    // 7F381604: b       0x7F381614
    {
            goto label_7F381614;
    }

label_7F381608:
    ctx->pc = 0x7F381608u;
    ctx->downcount -= 3;
    // 7F381608: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F38160C:
    ctx->pc = 0x7F38160Cu;
    // 7F38160C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381610:
    ctx->pc = 0x7F381610u;
    // 7F381610: stw     r0, -2672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381614:
    ctx->pc = 0x7F381614u;
    ctx->downcount -= 2;
    // 7F381614: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F381618:
    ctx->pc = 0x7F381618u;
    // 7F381618: bl      0x7F3C664C
    {
            ctx->lr = 0x7F38161Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F38161C:
    ctx->pc = 0x7F38161Cu;
    ctx->downcount -= 2;
    // 7F38161C: cmplwi  r3, 0x0000
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

label_7F381620:
    ctx->pc = 0x7F381620u;
    // 7F381620: bc    12, 2, 0x7F38163C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38163C;
        }
    }

label_7F381624:
    ctx->pc = 0x7F381624u;
    ctx->downcount -= 1;
    // 7F381624: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F381628u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F381628:
    ctx->pc = 0x7F381628u;
    ctx->downcount -= 2;
    // 7F381628: cmplwi  r3, 0x0000
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

label_7F38162C:
    ctx->pc = 0x7F38162Cu;
    // 7F38162C: bc    12, 2, 0x7F381644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381644;
        }
    }

label_7F381630:
    ctx->pc = 0x7F381630u;
    ctx->downcount -= 1;
    // 7F381630: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F381634u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F381634:
    ctx->pc = 0x7F381634u;
    ctx->downcount -= 2;
    // 7F381634: stw     r3, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381638:
    ctx->pc = 0x7F381638u;
    // 7F381638: b       0x7F381644
    {
            goto label_7F381644;
    }

label_7F38163C:
    ctx->pc = 0x7F38163Cu;
    ctx->downcount -= 2;
    // 7F38163C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381640:
    ctx->pc = 0x7F381640u;
    // 7F381640: stw     r0, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381644:
    ctx->pc = 0x7F381644u;
    ctx->downcount -= 2;
    // 7F381644: li      r3, 121
    ctx->gpr[3] = (u32)(s32)(121);

label_7F381648:
    ctx->pc = 0x7F381648u;
    // 7F381648: bl      0x7F3C664C
    {
            ctx->lr = 0x7F38164Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F38164C:
    ctx->pc = 0x7F38164Cu;
    ctx->downcount -= 2;
    // 7F38164C: cmplwi  r3, 0x0000
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

label_7F381650:
    ctx->pc = 0x7F381650u;
    // 7F381650: bc    12, 2, 0x7F38166C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38166C;
        }
    }

label_7F381654:
    ctx->pc = 0x7F381654u;
    ctx->downcount -= 1;
    // 7F381654: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F381658u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F381658:
    ctx->pc = 0x7F381658u;
    ctx->downcount -= 2;
    // 7F381658: cmplwi  r3, 0x0000
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

label_7F38165C:
    ctx->pc = 0x7F38165Cu;
    // 7F38165C: bc    12, 2, 0x7F381674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381674;
        }
    }

label_7F381660:
    ctx->pc = 0x7F381660u;
    ctx->downcount -= 1;
    // 7F381660: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F381664u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F381664:
    ctx->pc = 0x7F381664u;
    ctx->downcount -= 2;
    // 7F381664: stw     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381668:
    ctx->pc = 0x7F381668u;
    // 7F381668: b       0x7F381674
    {
            goto label_7F381674;
    }

label_7F38166C:
    ctx->pc = 0x7F38166Cu;
    ctx->downcount -= 2;
    // 7F38166C: li      r0, 163
    ctx->gpr[0] = (u32)(s32)(163);

label_7F381670:
    ctx->pc = 0x7F381670u;
    // 7F381670: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381674:
    ctx->pc = 0x7F381674u;
    ctx->downcount -= 2;
    // 7F381674: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F381678:
    ctx->pc = 0x7F381678u;
    // 7F381678: bl      0x7F3C664C
    {
            ctx->lr = 0x7F38167Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F38167C:
    ctx->pc = 0x7F38167Cu;
    ctx->downcount -= 2;
    // 7F38167C: cmplwi  r3, 0x0000
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

label_7F381680:
    ctx->pc = 0x7F381680u;
    // 7F381680: bc    12, 2, 0x7F38169C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38169C;
        }
    }

label_7F381684:
    ctx->pc = 0x7F381684u;
    ctx->downcount -= 1;
    // 7F381684: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F381688u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F381688:
    ctx->pc = 0x7F381688u;
    ctx->downcount -= 2;
    // 7F381688: cmplwi  r3, 0x0000
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

label_7F38168C:
    ctx->pc = 0x7F38168Cu;
    // 7F38168C: bc    12, 2, 0x7F3816A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3816A4;
        }
    }

label_7F381690:
    ctx->pc = 0x7F381690u;
    ctx->downcount -= 1;
    // 7F381690: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F381694u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F381694:
    ctx->pc = 0x7F381694u;
    ctx->downcount -= 2;
    // 7F381694: stw     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381698:
    ctx->pc = 0x7F381698u;
    // 7F381698: b       0x7F3816A4
    {
            goto label_7F3816A4;
    }

label_7F38169C:
    ctx->pc = 0x7F38169Cu;
    ctx->downcount -= 2;
    // 7F38169C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3816A0:
    ctx->pc = 0x7F3816A0u;
    // 7F3816A0: stw     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3816A4:
    ctx->pc = 0x7F3816A4u;
    ctx->downcount -= 2;
    // 7F3816A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3816A8:
    ctx->pc = 0x7F3816A8u;
    // 7F3816A8: bl      0x7F380D1C
    {
            ctx->lr = 0x7F3816ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F380D1Cu;
                return;
            }
            goto label_7F380D1C;
    }

label_7F3816AC:
    ctx->pc = 0x7F3816ACu;
    ctx->downcount -= 2;
    // 7F3816AC: cmpwi   r3, 0
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

label_7F3816B0:
    ctx->pc = 0x7F3816B0u;
    // 7F3816B0: bc    4, 0, 0x7F3816BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3816BC;
        }
    }

label_7F3816B4:
    ctx->pc = 0x7F3816B4u;
    ctx->downcount -= 2;
    // 7F3816B4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3816B8:
    ctx->pc = 0x7F3816B8u;
    // 7F3816B8: b       0x7F3816C8
    {
            goto label_7F3816C8;
    }

label_7F3816BC:
    ctx->pc = 0x7F3816BCu;
    ctx->downcount -= 3;
    // 7F3816BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3816C0:
    ctx->pc = 0x7F3816C0u;
    // 7F3816C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3816C4:
    ctx->pc = 0x7F3816C4u;
    // 7F3816C4: stw     r0, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3816C8:
    ctx->pc = 0x7F3816C8u;
    ctx->downcount -= 16;
    // 7F3816C8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3816CC:
    ctx->pc = 0x7F3816CCu;
    // 7F3816CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3816D0:
    ctx->pc = 0x7F3816D0u;
    // 7F3816D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3816D4:
    ctx->pc = 0x7F3816D4u;
    // 7F3816D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3816D8:
    ctx->pc = 0x7F3816D8u;
    // 7F3816D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3816DC:
    ctx->pc = 0x7F3816DCu;
    ctx->downcount -= 20;
    // 7F3816DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3816E0:
    ctx->pc = 0x7F3816E0u;
    // 7F3816E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3816E4:
    ctx->pc = 0x7F3816E4u;
    // 7F3816E4: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F3816E8:
    ctx->pc = 0x7F3816E8u;
    // 7F3816E8: li      r5, 148
    ctx->gpr[5] = (u32)(s32)(148);

label_7F3816EC:
    ctx->pc = 0x7F3816ECu;
    // 7F3816EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3816F0:
    ctx->pc = 0x7F3816F0u;
    // 7F3816F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3816F4:
    ctx->pc = 0x7F3816F4u;
    // 7F3816F4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3816F8:
    ctx->pc = 0x7F3816F8u;
    // 7F3816F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3816FC:
    ctx->pc = 0x7F3816FCu;
    // 7F3816FC: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F381700:
    ctx->pc = 0x7F381700u;
    // 7F381700: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F381704u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F381704:
    ctx->pc = 0x7F381704u;
    ctx->downcount -= 2;
    // 7F381704: or.   r31, r3, r3
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

label_7F381708:
    ctx->pc = 0x7F381708u;
    // 7F381708: bc    12, 2, 0x7F38176C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38176C;
        }
    }

label_7F38170C:
    ctx->pc = 0x7F38170Cu;
    ctx->downcount -= 5;
    // 7F38170C: lis     r4, 32568
    ctx->gpr[4] = ((u32)(s32)(32568) << 16);

label_7F381710:
    ctx->pc = 0x7F381710u;
    // 7F381710: lis     r5, 32568
    ctx->gpr[5] = ((u32)(s32)(32568) << 16);

label_7F381714:
    ctx->pc = 0x7F381714u;
    // 7F381714: addi    r4, r4, 4088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4088);

label_7F381718:
    ctx->pc = 0x7F381718u;
    // 7F381718: addi    r5, r5, 5336
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(5336);

label_7F38171C:
    ctx->pc = 0x7F38171Cu;
    // 7F38171C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F381720u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F381720:
    ctx->pc = 0x7F381720u;
    ctx->downcount -= 13;
    // 7F381720: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381724:
    ctx->pc = 0x7F381724u;
    // 7F381724: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F381728:
    ctx->pc = 0x7F381728u;
    // 7F381728: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F38172C:
    ctx->pc = 0x7F38172Cu;
    // 7F38172C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381730:
    ctx->pc = 0x7F381730u;
    // 7F381730: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F381734:
    ctx->pc = 0x7F381734u;
    // 7F381734: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F381738:
    ctx->pc = 0x7F381738u;
    // 7F381738: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F38173C:
    ctx->pc = 0x7F38173Cu;
    // 7F38173C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F381740:
    ctx->pc = 0x7F381740u;
    // 7F381740: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F381744:
    ctx->pc = 0x7F381744u;
    // 7F381744: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F381748:
    ctx->pc = 0x7F381748u;
    // 7F381748: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F38174C:
    ctx->pc = 0x7F38174Cu;
    // 7F38174C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381750:
    ctx->pc = 0x7F381750u;
    // 7F381750: bl      0x7F381524
    {
            ctx->lr = 0x7F381754u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381524u;
                return;
            }
            goto label_7F381524;
    }

label_7F381754:
    ctx->pc = 0x7F381754u;
    ctx->downcount -= 2;
    // 7F381754: cmpwi   r3, 0
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

label_7F381758:
    ctx->pc = 0x7F381758u;
    // 7F381758: bc    12, 2, 0x7F38176C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38176C;
        }
    }

label_7F38175C:
    ctx->pc = 0x7F38175Cu;
    ctx->downcount -= 2;
    // 7F38175C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381760:
    ctx->pc = 0x7F381760u;
    // 7F381760: bl      0x7F3C8210
    {
            ctx->lr = 0x7F381764u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F381764:
    ctx->pc = 0x7F381764u;
    ctx->downcount -= 2;
    // 7F381764: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381768:
    ctx->pc = 0x7F381768u;
    // 7F381768: b       0x7F381770
    {
            goto label_7F381770;
    }

label_7F38176C:
    ctx->pc = 0x7F38176Cu;
    ctx->downcount -= 1;
    // 7F38176C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381770:
    ctx->pc = 0x7F381770u;
    ctx->downcount -= 16;
    // 7F381770: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F381774:
    ctx->pc = 0x7F381774u;
    // 7F381774: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381778:
    ctx->pc = 0x7F381778u;
    // 7F381778: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F38177C:
    ctx->pc = 0x7F38177Cu;
    // 7F38177C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381780:
    ctx->pc = 0x7F381780u;
    // 7F381780: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381784:
    ctx->pc = 0x7F381784u;
    ctx->downcount -= 4;
    // 7F381784: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381788:
    ctx->pc = 0x7F381788u;
    // 7F381788: addi    r3, r3, -2664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2664);

label_7F38178C:
    ctx->pc = 0x7F38178Cu;
    // 7F38178C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381790:
    ctx->pc = 0x7F381790u;
    // 7F381790: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381794:
    ctx->pc = 0x7F381794u;
    ctx->downcount -= 7;
    // 7F381794: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381798:
    ctx->pc = 0x7F381798u;
    // 7F381798: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F38179C:
    ctx->pc = 0x7F38179Cu;
    // 7F38179C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3817A0:
    ctx->pc = 0x7F3817A0u;
    // 7F3817A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3817A4:
    ctx->pc = 0x7F3817A4u;
    // 7F3817A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3817A8:
    ctx->pc = 0x7F3817A8u;
    // 7F3817A8: li      r3, 768
    ctx->gpr[3] = (u32)(s32)(768);

label_7F3817AC:
    ctx->pc = 0x7F3817ACu;
    // 7F3817AC: bl      0x7F018418
    {
            ctx->lr = 0x7F3817B0u;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F3817B0:
    ctx->pc = 0x7F3817B0u;
    ctx->downcount -= 2;
    // 7F3817B0: cmpwi   r3, 0
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

label_7F3817B4:
    ctx->pc = 0x7F3817B4u;
    // 7F3817B4: bc    4, 2, 0x7F3817E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3817E4;
        }
    }

label_7F3817B8:
    ctx->pc = 0x7F3817B8u;
    ctx->downcount -= 4;
    // 7F3817B8: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F3817BC:
    ctx->pc = 0x7F3817BCu;
    // 7F3817BC: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3817C0:
    ctx->pc = 0x7F3817C0u;
    // 7F3817C0: rlwinm. r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3817C4:
    ctx->pc = 0x7F3817C4u;
    // 7F3817C4: bc    4, 2, 0x7F3817E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3817E4;
        }
    }

label_7F3817C8:
    ctx->pc = 0x7F3817C8u;
    ctx->downcount -= 4;
    // 7F3817C8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F3817CC:
    ctx->pc = 0x7F3817CCu;
    // 7F3817CC: lwz     r0, -2656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3817D0:
    ctx->pc = 0x7F3817D0u;
    // 7F3817D0: rlwinm. r0, r0, 0, 30, 30
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

label_7F3817D4:
    ctx->pc = 0x7F3817D4u;
    // 7F3817D4: bc    4, 2, 0x7F3817E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3817E4;
        }
    }

label_7F3817D8:
    ctx->pc = 0x7F3817D8u;
    ctx->downcount -= 3;
    // 7F3817D8: lwz     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3817DC:
    ctx->pc = 0x7F3817DCu;
    // 7F3817DC: rlwinm. r0, r0, 0, 31, 31
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

label_7F3817E0:
    ctx->pc = 0x7F3817E0u;
    // 7F3817E0: bc    12, 2, 0x7F3817EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3817EC;
        }
    }

label_7F3817E4:
    ctx->pc = 0x7F3817E4u;
    ctx->downcount -= 2;
    // 7F3817E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F3817E8:
    ctx->pc = 0x7F3817E8u;
    // 7F3817E8: b       0x7F3817F0
    {
            goto label_7F3817F0;
    }

label_7F3817EC:
    ctx->pc = 0x7F3817ECu;
    ctx->downcount -= 1;
    // 7F3817EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3817F0:
    ctx->pc = 0x7F3817F0u;
    ctx->downcount -= 6;
    // 7F3817F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3817F4:
    ctx->pc = 0x7F3817F4u;
    // 7F3817F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3817F8:
    ctx->pc = 0x7F3817F8u;
    // 7F3817F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3817FC:
    ctx->pc = 0x7F3817FCu;
    // 7F3817FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381800:
    ctx->pc = 0x7F381800u;
    // 7F381800: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381804:
    ctx->pc = 0x7F381804u;
    ctx->downcount -= 5;
    // 7F381804: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F381808:
    ctx->pc = 0x7F381808u;
    // 7F381808: addi    r3, r3, 14080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F38180C:
    ctx->pc = 0x7F38180Cu;
    // 7F38180C: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381810:
    ctx->pc = 0x7F381810u;
    // 7F381810: andi.   r0, r0, 0x0103
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0103u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F381814:
    ctx->pc = 0x7F381814u;
    // 7F381814: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381818:
    ctx->pc = 0x7F381818u;
    ctx->downcount -= 5;
    // 7F381818: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F38181C:
    ctx->pc = 0x7F38181Cu;
    // 7F38181C: lwz     r0, -2656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381820:
    ctx->pc = 0x7F381820u;
    // 7F381820: nor   r0, r0, r0
    {
        ctx->gpr[0] = ~(ctx->gpr[0] | ctx->gpr[0]);
    }

label_7F381824:
    ctx->pc = 0x7F381824u;
    // 7F381824: rlwinm. r0, r0, 0, 31, 31
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

label_7F381828:
    ctx->pc = 0x7F381828u;
    // 7F381828: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F38182C:
    ctx->pc = 0x7F38182Cu;
    ctx->downcount -= 7;
    // 7F38182C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381830:
    ctx->pc = 0x7F381830u;
    // 7F381830: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F381834:
    ctx->pc = 0x7F381834u;
    // 7F381834: addi    r5, r4, -2648
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2648);

label_7F381838:
    ctx->pc = 0x7F381838u;
    // 7F381838: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F38183C:
    ctx->pc = 0x7F38183Cu;
    // 7F38183C: addi    r0, r3, 32319
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32319);

label_7F381840:
    ctx->pc = 0x7F381840u;
    // 7F381840: cmpw    r4, r0
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

label_7F381844:
    ctx->pc = 0x7F381844u;
    // 7F381844: bc    4, 0, 0x7F381850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381850;
        }
    }

label_7F381848:
    ctx->pc = 0x7F381848u;
    ctx->downcount -= 2;
    // 7F381848: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F38184C:
    ctx->pc = 0x7F38184Cu;
    // 7F38184C: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381850:
    ctx->pc = 0x7F381850u;
    ctx->downcount -= 7;
    // 7F381850: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381854:
    ctx->pc = 0x7F381854u;
    // 7F381854: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F381858:
    ctx->pc = 0x7F381858u;
    // 7F381858: addi    r5, r4, -2652
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-2652);

label_7F38185C:
    ctx->pc = 0x7F38185Cu;
    // 7F38185C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F381860:
    ctx->pc = 0x7F381860u;
    // 7F381860: addi    r0, r3, 32319
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32319);

label_7F381864:
    ctx->pc = 0x7F381864u;
    // 7F381864: cmpw    r4, r0
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

label_7F381868:
    ctx->pc = 0x7F381868u;
    // 7F381868: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F38186C:
    ctx->pc = 0x7F38186Cu;
    ctx->downcount -= 3;
    // 7F38186C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F381870:
    ctx->pc = 0x7F381870u;
    // 7F381870: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381874:
    ctx->pc = 0x7F381874u;
    // 7F381874: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381878:
    ctx->pc = 0x7F381878u;
    ctx->downcount -= 9;
    // 7F381878: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F38187C:
    ctx->pc = 0x7F38187Cu;
    // 7F38187C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381880:
    ctx->pc = 0x7F381880u;
    // 7F381880: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F381884:
    ctx->pc = 0x7F381884u;
    // 7F381884: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F381888:
    ctx->pc = 0x7F381888u;
    // 7F381888: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38188C:
    ctx->pc = 0x7F38188Cu;
    // 7F38188C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F381890:
    ctx->pc = 0x7F381890u;
    // 7F381890: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F381894:
    ctx->pc = 0x7F381894u;
    // 7F381894: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381898:
    ctx->pc = 0x7F381898u;
    // 7F381898: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F38189Cu;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F38189C:
    ctx->pc = 0x7F38189Cu;
    ctx->downcount -= 4;
    // 7F38189C: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3818A0:
    ctx->pc = 0x7F3818A0u;
    // 7F3818A0: lwz     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3818A4:
    ctx->pc = 0x7F3818A4u;
    // 7F3818A4: cmplwi  r5, 0x0000
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

label_7F3818A8:
    ctx->pc = 0x7F3818A8u;
    // 7F3818A8: bc    4, 2, 0x7F3818B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3818B4;
        }
    }

label_7F3818AC:
    ctx->pc = 0x7F3818ACu;
    ctx->downcount -= 2;
    // 7F3818AC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F3818B0:
    ctx->pc = 0x7F3818B0u;
    // 7F3818B0: b       0x7F381A04
    {
            goto label_7F381A04;
    }

label_7F3818B4:
    ctx->pc = 0x7F3818B4u;
    ctx->downcount -= 3;
    // 7F3818B4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F3818B8:
    ctx->pc = 0x7F3818B8u;
    // 7F3818B8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3818BC:
    ctx->pc = 0x7F3818BCu;
    // 7F3818BC: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F3818C0u;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F3818C0:
    ctx->pc = 0x7F3818C0u;
    ctx->downcount -= 5;
    // 7F3818C0: stw     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3818C4:
    ctx->pc = 0x7F3818C4u;
    // 7F3818C4: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F3818C8:
    ctx->pc = 0x7F3818C8u;
    // 7F3818C8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3818CC:
    ctx->pc = 0x7F3818CCu;
    // 7F3818CC: lwz     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3818D0:
    ctx->pc = 0x7F3818D0u;
    // 7F3818D0: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F3818D4u;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F3818D4:
    ctx->pc = 0x7F3818D4u;
    ctx->downcount -= 15;
    // 7F3818D4: stw     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3818D8:
    ctx->pc = 0x7F3818D8u;
    // 7F3818D8: lis     r6, 24672
    ctx->gpr[6] = ((u32)(s32)(24672) << 16);

label_7F3818DC:
    ctx->pc = 0x7F3818DCu;
    // 7F3818DC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3818E0:
    ctx->pc = 0x7F3818E0u;
    // 7F3818E0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3818E4:
    ctx->pc = 0x7F3818E4u;
    // 7F3818E4: lwz     r5, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3818E8:
    ctx->pc = 0x7F3818E8u;
    // 7F3818E8: addi    r0, r6, 24704
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(24704);

label_7F3818EC:
    ctx->pc = 0x7F3818ECu;
    // 7F3818EC: lfs     f1, -22280(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3818ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3818F0:
    ctx->pc = 0x7F3818F0u;
    // 7F3818F0: stw     r0, 140(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3818F4:
    ctx->pc = 0x7F3818F4u;
    // 7F3818F4: lfs     f2, -22276(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3818F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22276);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3818F8:
    ctx->pc = 0x7F3818F8u;
    // 7F3818F8: lwz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3818FC:
    ctx->pc = 0x7F3818FCu;
    // 7F3818FC: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381900:
    ctx->pc = 0x7F381900u;
    // 7F381900: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F381904:
    ctx->pc = 0x7F381904u;
    // 7F381904: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381908:
    ctx->pc = 0x7F381908u;
    // 7F381908: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38190C:
    ctx->pc = 0x7F38190Cu;
    // 7F38190C: bl      0x7F2E1D00
    {
            ctx->lr = 0x7F381910u;
            ctx->pc = 0x7F2E1D00u;
            return;
    }

label_7F381910:
    ctx->pc = 0x7F381910u;
    ctx->downcount -= 7;
    // 7F381910: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F381914:
    ctx->pc = 0x7F381914u;
    // 7F381914: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F381918:
    ctx->pc = 0x7F381918u;
    // 7F381918: addi    r5, r3, -22272
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22272);

label_7F38191C:
    ctx->pc = 0x7F38191Cu;
    // 7F38191C: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381920:
    ctx->pc = 0x7F381920u;
    // 7F381920: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F381920u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F381924:
    ctx->pc = 0x7F381924u;
    // 7F381924: lfs     f2, -22268(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F381924u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F381928:
    ctx->pc = 0x7F381928u;
    // 7F381928: bl      0x7F2E1D00
    {
            ctx->lr = 0x7F38192Cu;
            ctx->pc = 0x7F2E1D00u;
            return;
    }

label_7F38192C:
    ctx->pc = 0x7F38192Cu;
    ctx->downcount -= 10;
    // 7F38192C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F381930:
    ctx->pc = 0x7F381930u;
    // 7F381930: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F381934:
    ctx->pc = 0x7F381934u;
    // 7F381934: addi    r5, r4, -22264
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22264);

label_7F381938:
    ctx->pc = 0x7F381938u;
    // 7F381938: lfs     f0, -22260(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F381938u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F38193C:
    ctx->pc = 0x7F38193Cu;
    // 7F38193C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F38193Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F381940:
    ctx->pc = 0x7F381940u;
    // 7F381940: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_7F381944:
    ctx->pc = 0x7F381944u;
    // 7F381944: stfs     f1, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F381944u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F381948:
    ctx->pc = 0x7F381948u;
    // 7F381948: stfs     f0, 104(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F381948u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F38194C:
    ctx->pc = 0x7F38194Cu;
    // 7F38194C: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381950:
    ctx->pc = 0x7F381950u;
    // 7F381950: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F381954u;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F381954:
    ctx->pc = 0x7F381954u;
    ctx->downcount -= 36;
    // 7F381954: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F381958:
    ctx->pc = 0x7F381958u;
    // 7F381958: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F38195C:
    ctx->pc = 0x7F38195Cu;
    // 7F38195C: addi    r5, r3, -22272
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22272);

label_7F381960:
    ctx->pc = 0x7F381960u;
    // 7F381960: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F381964:
    ctx->pc = 0x7F381964u;
    // 7F381964: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F381964u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F381968:
    ctx->pc = 0x7F381968u;
    // 7F381968: addi    r5, r4, -22268
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22268);

label_7F38196C:
    ctx->pc = 0x7F38196Cu;
    // 7F38196C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F381970:
    ctx->pc = 0x7F381970u;
    // 7F381970: stfs     f0, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F381970u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F381974:
    ctx->pc = 0x7F381974u;
    // 7F381974: addi    r4, r3, -22260
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22260);

label_7F381978:
    ctx->pc = 0x7F381978u;
    // 7F381978: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F381978u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F38197C:
    ctx->pc = 0x7F38197Cu;
    // 7F38197C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F381980:
    ctx->pc = 0x7F381980u;
    // 7F381980: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F381980u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F381984:
    ctx->pc = 0x7F381984u;
    // 7F381984: li      r5, 68
    ctx->gpr[5] = (u32)(s32)(68);

label_7F381988:
    ctx->pc = 0x7F381988u;
    // 7F381988: stfs     f0, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F381988u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F38198C:
    ctx->pc = 0x7F38198Cu;
    // 7F38198C: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_7F381990:
    ctx->pc = 0x7F381990u;
    // 7F381990: lfs     f0, -22256(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F381990u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F381994:
    ctx->pc = 0x7F381994u;
    // 7F381994: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381998:
    ctx->pc = 0x7F381998u;
    // 7F381998: stw     r5, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F38199C:
    ctx->pc = 0x7F38199Cu;
    // 7F38199C: lwz     r5, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3819A0:
    ctx->pc = 0x7F3819A0u;
    // 7F3819A0: lwz     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3819A4:
    ctx->pc = 0x7F3819A4u;
    // 7F3819A4: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F3819A8:
    ctx->pc = 0x7F3819A8u;
    // 7F3819A8: stw     r3, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3819AC:
    ctx->pc = 0x7F3819ACu;
    // 7F3819AC: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3819B0:
    ctx->pc = 0x7F3819B0u;
    // 7F3819B0: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3819B4:
    ctx->pc = 0x7F3819B4u;
    // 7F3819B4: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3819B8:
    ctx->pc = 0x7F3819B8u;
    // 7F3819B8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3819BC:
    ctx->pc = 0x7F3819BCu;
    // 7F3819BC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F3819C0:
    ctx->pc = 0x7F3819C0u;
    // 7F3819C0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3819C4:
    ctx->pc = 0x7F3819C4u;
    // 7F3819C4: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3819C8:
    ctx->pc = 0x7F3819C8u;
    // 7F3819C8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3819CC:
    ctx->pc = 0x7F3819CCu;
    // 7F3819CC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F3819D0:
    ctx->pc = 0x7F3819D0u;
    // 7F3819D0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3819D4:
    ctx->pc = 0x7F3819D4u;
    // 7F3819D4: stfs     f1, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3819D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F3819D8:
    ctx->pc = 0x7F3819D8u;
    // 7F3819D8: stfs     f0, 104(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3819D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3819DC:
    ctx->pc = 0x7F3819DCu;
    // 7F3819DC: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3819E0:
    ctx->pc = 0x7F3819E0u;
    // 7F3819E0: bl      0x7F2E19C4
    {
            ctx->lr = 0x7F3819E4u;
            ctx->pc = 0x7F2E19C4u;
            return;
    }

label_7F3819E4:
    ctx->pc = 0x7F3819E4u;
    ctx->downcount -= 7;
    // 7F3819E4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3819E8:
    ctx->pc = 0x7F3819E8u;
    // 7F3819E8: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_7F3819EC:
    ctx->pc = 0x7F3819ECu;
    // 7F3819EC: lfs     f0, -22252(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3819ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3819F0:
    ctx->pc = 0x7F3819F0u;
    // 7F3819F0: stfs     f0, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3819F0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3819F4:
    ctx->pc = 0x7F3819F4u;
    // 7F3819F4: stfs     f0, 104(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F3819F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F3819F8:
    ctx->pc = 0x7F3819F8u;
    // 7F3819F8: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3819FC:
    ctx->pc = 0x7F3819FCu;
    // 7F3819FC: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F381A00u;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F381A00:
    ctx->pc = 0x7F381A00u;
    ctx->downcount -= 1;
    // 7F381A00: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381A04:
    ctx->pc = 0x7F381A04u;
    ctx->downcount -= 6;
    // 7F381A04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381A08:
    ctx->pc = 0x7F381A08u;
    // 7F381A08: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F381A0C:
    ctx->pc = 0x7F381A0Cu;
    // 7F381A0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F381A10:
    ctx->pc = 0x7F381A10u;
    // 7F381A10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381A14:
    ctx->pc = 0x7F381A14u;
    // 7F381A14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381A18:
    ctx->pc = 0x7F381A18u;
    ctx->downcount -= 4;
    // 7F381A18: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F381A1C:
    ctx->pc = 0x7F381A1Cu;
    // 7F381A1C: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381A20:
    ctx->pc = 0x7F381A20u;
    // 7F381A20: rlwinm. r0, r0, 0, 27, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000001Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F381A24:
    ctx->pc = 0x7F381A24u;
    // 7F381A24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381A28:
    ctx->pc = 0x7F381A28u;
    ctx->downcount -= 19;
    // 7F381A28: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381A2C:
    ctx->pc = 0x7F381A2Cu;
    // 7F381A2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381A30:
    ctx->pc = 0x7F381A30u;
    // 7F381A30: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F381A34:
    ctx->pc = 0x7F381A34u;
    // 7F381A34: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381A38:
    ctx->pc = 0x7F381A38u;
    // 7F381A38: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F381A3C:
    ctx->pc = 0x7F381A3Cu;
    // 7F381A3C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F381A40:
    ctx->pc = 0x7F381A40u;
    // 7F381A40: lwz     r0, 19248(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381A44:
    ctx->pc = 0x7F381A44u;
    // 7F381A44: rlwinm. r0, r0, 0, 0, 0
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

label_7F381A48:
    ctx->pc = 0x7F381A48u;
    // 7F381A48: bc    4, 2, 0x7F381A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381A5C;
        }
    }

label_7F381A4C:
    ctx->pc = 0x7F381A4Cu;
    ctx->downcount -= 4;
    // 7F381A4C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381A50:
    ctx->pc = 0x7F381A50u;
    // 7F381A50: lwz     r0, -2656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2656);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381A54:
    ctx->pc = 0x7F381A54u;
    // 7F381A54: rlwinm. r0, r0, 0, 29, 29
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

label_7F381A58:
    ctx->pc = 0x7F381A58u;
    // 7F381A58: bc    12, 2, 0x7F381A68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381A68;
        }
    }

label_7F381A5C:
    ctx->pc = 0x7F381A5Cu;
    ctx->downcount -= 2;
    // 7F381A5C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F381A60:
    ctx->pc = 0x7F381A60u;
    // 7F381A60: bl      0x7F3C8210
    {
            ctx->lr = 0x7F381A64u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F381A64:
    ctx->pc = 0x7F381A64u;
    ctx->downcount -= 1;
    // 7F381A64: b       0x7F381C7C
    {
            goto label_7F381C7C;
    }

label_7F381A68:
    ctx->pc = 0x7F381A68u;
    ctx->downcount -= 1;
    // 7F381A68: bl      0x7F381A18
    {
            ctx->lr = 0x7F381A6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381A18u;
                return;
            }
            goto label_7F381A18;
    }

label_7F381A6C:
    ctx->pc = 0x7F381A6Cu;
    ctx->downcount -= 2;
    // 7F381A6C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F381A70:
    ctx->pc = 0x7F381A70u;
    // 7F381A70: bl      0x7F381794
    {
            ctx->lr = 0x7F381A74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381794u;
                return;
            }
            goto label_7F381794;
    }

label_7F381A74:
    ctx->pc = 0x7F381A74u;
    ctx->downcount -= 2;
    // 7F381A74: cmpwi   r3, 0
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

label_7F381A78:
    ctx->pc = 0x7F381A78u;
    // 7F381A78: bc    12, 2, 0x7F381AA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381AA4;
        }
    }

label_7F381A7C:
    ctx->pc = 0x7F381A7Cu;
    ctx->downcount -= 8;
    // 7F381A7C: lwz     r4, 56(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F381A80:
    ctx->pc = 0x7F381A80u;
    // 7F381A80: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F381A84:
    ctx->pc = 0x7F381A84u;
    // 7F381A84: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381A88:
    ctx->pc = 0x7F381A88u;
    // 7F381A88: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F381A8C:
    ctx->pc = 0x7F381A8Cu;
    // 7F381A8C: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381A90:
    ctx->pc = 0x7F381A90u;
    // 7F381A90: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381A94:
    ctx->pc = 0x7F381A94u;
    // 7F381A94: andi.   r0, r0, 0x001B
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x001Bu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F381A98:
    ctx->pc = 0x7F381A98u;
    // 7F381A98: bc    4, 2, 0x7F381C7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381C7C;
        }
    }

label_7F381A9C:
    ctx->pc = 0x7F381A9Cu;
    ctx->downcount -= 1;
    // 7F381A9C: bl      0x7F381804
    {
            ctx->lr = 0x7F381AA0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381804u;
                return;
            }
            goto label_7F381804;
    }

label_7F381AA0:
    ctx->pc = 0x7F381AA0u;
    ctx->downcount -= 1;
    // 7F381AA0: b       0x7F381C7C
    {
            goto label_7F381C7C;
    }

label_7F381AA4:
    ctx->pc = 0x7F381AA4u;
    ctx->downcount -= 5;
    // 7F381AA4: lwz     r3, 56(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381AA8:
    ctx->pc = 0x7F381AA8u;
    // 7F381AA8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381AAC:
    ctx->pc = 0x7F381AACu;
    // 7F381AAC: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F381AB0:
    ctx->pc = 0x7F381AB0u;
    // 7F381AB0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381AB4:
    ctx->pc = 0x7F381AB4u;
    // 7F381AB4: bl      0x7F381804
    {
            ctx->lr = 0x7F381AB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381804u;
                return;
            }
            goto label_7F381804;
    }

label_7F381AB8:
    ctx->pc = 0x7F381AB8u;
    ctx->downcount -= 6;
    // 7F381AB8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381ABC:
    ctx->pc = 0x7F381ABCu;
    // 7F381ABC: lwz     r0, -2648(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2648);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381AC0:
    ctx->pc = 0x7F381AC0u;
    // 7F381AC0: stw     r0, 112(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381AC4:
    ctx->pc = 0x7F381AC4u;
    // 7F381AC4: lwz     r0, 116(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381AC8:
    ctx->pc = 0x7F381AC8u;
    // 7F381AC8: cmpwi   r0, 1
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

label_7F381ACC:
    ctx->pc = 0x7F381ACCu;
    // 7F381ACC: bc    12, 2, 0x7F381B10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381B10;
        }
    }

label_7F381AD0:
    ctx->pc = 0x7F381AD0u;
    ctx->downcount -= 223;
    // 7F381AD0: lwz     r6, 112(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(112);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F381AD4:
    ctx->pc = 0x7F381AD4u;
    // 7F381AD4: li      r3, 60
    ctx->gpr[3] = (u32)(s32)(60);

label_7F381AD8:
    ctx->pc = 0x7F381AD8u;
    // 7F381AD8: li      r5, 3600
    ctx->gpr[5] = (u32)(s32)(3600);

label_7F381ADC:
    ctx->pc = 0x7F381ADCu;
    // 7F381ADC: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F381AE0:
    ctx->pc = 0x7F381AE0u;
    // 7F381AE0: divw   r7, r6, r3
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381AE4:
    ctx->pc = 0x7F381AE4u;
    // 7F381AE4: divw   r0, r7, r3
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381AE8:
    ctx->pc = 0x7F381AE8u;
    // 7F381AE8: divw   r5, r6, r5
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[5] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381AEC:
    ctx->pc = 0x7F381AECu;
    // 7F381AEC: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F381AF0:
    ctx->pc = 0x7F381AF0u;
    // 7F381AF0: subf   r7, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_7F381AF4:
    ctx->pc = 0x7F381AF4u;
    // 7F381AF4: divw   r31, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[31] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381AF8:
    ctx->pc = 0x7F381AF8u;
    // 7F381AF8: divw   r29, r7, r4
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381AFC:
    ctx->pc = 0x7F381AFCu;
    // 7F381AFC: mullw   r3, r31, r4
    {
        s64 product = (s64)(s32)ctx->gpr[31] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[3] = (u32)product;
    }

label_7F381B00:
    ctx->pc = 0x7F381B00u;
    // 7F381B00: mullw   r0, r29, r4
    {
        s64 product = (s64)(s32)ctx->gpr[29] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F381B04:
    ctx->pc = 0x7F381B04u;
    // 7F381B04: subf   r30, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[30] = res;
    }

label_7F381B08:
    ctx->pc = 0x7F381B08u;
    // 7F381B08: subf   r28, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[28] = res;
    }

label_7F381B0C:
    ctx->pc = 0x7F381B0Cu;
    // 7F381B0C: b       0x7F381B54
    {
            goto label_7F381B54;
    }

label_7F381B10:
    ctx->pc = 0x7F381B10u;
    ctx->downcount -= 263;
    // 7F381B10: lwz     r3, 112(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381B14:
    ctx->pc = 0x7F381B14u;
    // 7F381B14: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F381B18:
    ctx->pc = 0x7F381B18u;
    // 7F381B18: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F381B1C:
    ctx->pc = 0x7F381B1Cu;
    // 7F381B1C: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F381B20:
    ctx->pc = 0x7F381B20u;
    // 7F381B20: divw   r7, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B24:
    ctx->pc = 0x7F381B24u;
    // 7F381B24: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F381B28:
    ctx->pc = 0x7F381B28u;
    // 7F381B28: divw   r31, r7, r4
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[31] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B2C:
    ctx->pc = 0x7F381B2Cu;
    // 7F381B2C: divw   r0, r7, r5
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B30:
    ctx->pc = 0x7F381B30u;
    // 7F381B30: mullw   r6, r31, r4
    {
        s64 product = (s64)(s32)ctx->gpr[31] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[6] = (u32)product;
    }

label_7F381B34:
    ctx->pc = 0x7F381B34u;
    // 7F381B34: mullw   r4, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F381B38:
    ctx->pc = 0x7F381B38u;
    // 7F381B38: subf   r6, r6, r7
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F381B3C:
    ctx->pc = 0x7F381B3Cu;
    // 7F381B3C: divw   r0, r7, r3
    {
        s32 dividend = (s32)ctx->gpr[7];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B40:
    ctx->pc = 0x7F381B40u;
    // 7F381B40: subf   r4, r4, r7
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F381B44:
    ctx->pc = 0x7F381B44u;
    // 7F381B44: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F381B48:
    ctx->pc = 0x7F381B48u;
    // 7F381B48: divw   r30, r6, r5
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[30] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B4C:
    ctx->pc = 0x7F381B4Cu;
    // 7F381B4C: subf   r28, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[28] = res;
    }

label_7F381B50:
    ctx->pc = 0x7F381B50u;
    // 7F381B50: divw   r29, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[29] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B54:
    ctx->pc = 0x7F381B54u;
    ctx->downcount -= 135;
    // 7F381B54: lwz     r6, 112(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(112);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F381B58:
    ctx->pc = 0x7F381B58u;
    // 7F381B58: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F381B5C:
    ctx->pc = 0x7F381B5Cu;
    // 7F381B5C: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F381B60:
    ctx->pc = 0x7F381B60u;
    // 7F381B60: divw   r4, r6, r5
    {
        s32 dividend = (s32)ctx->gpr[6];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B64:
    ctx->pc = 0x7F381B64u;
    // 7F381B64: addis   r0, r6, -5
    ctx->gpr[0] = ctx->gpr[6] + ((u32)(s32)(-5) << 16);

label_7F381B68:
    ctx->pc = 0x7F381B68u;
    // 7F381B68: cmplwi  r0, 0x7E3F
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x7E3Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F381B6C:
    ctx->pc = 0x7F381B6Cu;
    // 7F381B6C: mullw   r0, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F381B70:
    ctx->pc = 0x7F381B70u;
    // 7F381B70: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F381B74:
    ctx->pc = 0x7F381B74u;
    // 7F381B74: mulli   r0, r0, 100
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)100);

label_7F381B78:
    ctx->pc = 0x7F381B78u;
    // 7F381B78: divw   r4, r0, r5
    {
        s32 dividend = (s32)ctx->gpr[0];
        s32 divisor = (s32)ctx->gpr[5];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[4] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B7C:
    ctx->pc = 0x7F381B7Cu;
    // 7F381B7C: divw   r26, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[26] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F381B80:
    ctx->pc = 0x7F381B80u;
    // 7F381B80: bc    4, 2, 0x7F381B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381B8C;
        }
    }

label_7F381B84:
    ctx->pc = 0x7F381B84u;
    ctx->downcount -= 2;
    // 7F381B84: li      r25, 9
    ctx->gpr[25] = (u32)(s32)(9);

label_7F381B88:
    ctx->pc = 0x7F381B88u;
    // 7F381B88: b       0x7F381B94
    {
            goto label_7F381B94;
    }

label_7F381B8C:
    ctx->pc = 0x7F381B8Cu;
    ctx->downcount -= 6;
    // 7F381B8C: mullw   r0, r26, r3
    {
        s64 product = (s64)(s32)ctx->gpr[26] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F381B90:
    ctx->pc = 0x7F381B90u;
    // 7F381B90: subf   r25, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[25] = res;
    }

label_7F381B94:
    ctx->pc = 0x7F381B94u;
    ctx->downcount -= 6;
    // 7F381B94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381B98:
    ctx->pc = 0x7F381B98u;
    // 7F381B98: li      r4, 180
    ctx->gpr[4] = (u32)(s32)(180);

label_7F381B9C:
    ctx->pc = 0x7F381B9Cu;
    // 7F381B9C: li      r5, 180
    ctx->gpr[5] = (u32)(s32)(180);

label_7F381BA0:
    ctx->pc = 0x7F381BA0u;
    // 7F381BA0: li      r6, 180
    ctx->gpr[6] = (u32)(s32)(180);

label_7F381BA4:
    ctx->pc = 0x7F381BA4u;
    // 7F381BA4: li      r7, 128
    ctx->gpr[7] = (u32)(s32)(128);

label_7F381BA8:
    ctx->pc = 0x7F381BA8u;
    // 7F381BA8: bl      0x7F0B98C4
    {
            ctx->lr = 0x7F381BACu;
            ctx->pc = 0x7F0B98C4u;
            return;
    }

label_7F381BAC:
    ctx->pc = 0x7F381BACu;
    ctx->downcount -= 3;
    // 7F381BAC: lwz     r0, 116(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381BB0:
    ctx->pc = 0x7F381BB0u;
    // 7F381BB0: cmpwi   r0, 1
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

label_7F381BB4:
    ctx->pc = 0x7F381BB4u;
    // 7F381BB4: bc    12, 2, 0x7F381C1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381C1C;
        }
    }

label_7F381BB8:
    ctx->pc = 0x7F381BB8u;
    ctx->downcount -= 5;
    // 7F381BB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381BBC:
    ctx->pc = 0x7F381BBCu;
    // 7F381BBC: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F381BC0:
    ctx->pc = 0x7F381BC0u;
    // 7F381BC0: li      r5, 164
    ctx->gpr[5] = (u32)(s32)(164);

label_7F381BC4:
    ctx->pc = 0x7F381BC4u;
    // 7F381BC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381BC8:
    ctx->pc = 0x7F381BC8u;
    // 7F381BC8: bl      0x7F0B9990
    {
            ctx->lr = 0x7F381BCCu;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F381BCC:
    ctx->pc = 0x7F381BCCu;
    ctx->downcount -= 4;
    // 7F381BCC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F381BD0:
    ctx->pc = 0x7F381BD0u;
    // 7F381BD0: addi    r3, r3, 9472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9472);

label_7F381BD4:
    ctx->pc = 0x7F381BD4u;
    // 7F381BD4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F381BD8:
    ctx->pc = 0x7F381BD8u;
    // 7F381BD8: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F381BDCu;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F381BDC:
    ctx->pc = 0x7F381BDCu;
    ctx->downcount -= 5;
    // 7F381BDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381BE0:
    ctx->pc = 0x7F381BE0u;
    // 7F381BE0: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F381BE4:
    ctx->pc = 0x7F381BE4u;
    // 7F381BE4: li      r5, 181
    ctx->gpr[5] = (u32)(s32)(181);

label_7F381BE8:
    ctx->pc = 0x7F381BE8u;
    // 7F381BE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381BEC:
    ctx->pc = 0x7F381BECu;
    // 7F381BEC: bl      0x7F0B9990
    {
            ctx->lr = 0x7F381BF0u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F381BF0:
    ctx->pc = 0x7F381BF0u;
    ctx->downcount -= 10;
    // 7F381BF0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F381BF4:
    ctx->pc = 0x7F381BF4u;
    // 7F381BF4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381BF8:
    ctx->pc = 0x7F381BF8u;
    // 7F381BF8: addi    r3, r3, 9480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9480);

label_7F381BFC:
    ctx->pc = 0x7F381BFCu;
    // 7F381BFC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F381C00:
    ctx->pc = 0x7F381C00u;
    // 7F381C00: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F381C04:
    ctx->pc = 0x7F381C04u;
    // 7F381C04: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F381C08:
    ctx->pc = 0x7F381C08u;
    // 7F381C08: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F381C0C:
    ctx->pc = 0x7F381C0Cu;
    // 7F381C0C: or   r9, r25, r25
    {
        ctx->gpr[9] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F381C10:
    ctx->pc = 0x7F381C10u;
    // 7F381C10: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F381C14:
    ctx->pc = 0x7F381C14u;
    // 7F381C14: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F381C18u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F381C18:
    ctx->pc = 0x7F381C18u;
    ctx->downcount -= 1;
    // 7F381C18: b       0x7F381C7C
    {
            goto label_7F381C7C;
    }

label_7F381C1C:
    ctx->pc = 0x7F381C1Cu;
    ctx->downcount -= 5;
    // 7F381C1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381C20:
    ctx->pc = 0x7F381C20u;
    // 7F381C20: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F381C24:
    ctx->pc = 0x7F381C24u;
    // 7F381C24: li      r5, 164
    ctx->gpr[5] = (u32)(s32)(164);

label_7F381C28:
    ctx->pc = 0x7F381C28u;
    // 7F381C28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381C2C:
    ctx->pc = 0x7F381C2Cu;
    // 7F381C2C: bl      0x7F0B9990
    {
            ctx->lr = 0x7F381C30u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F381C30:
    ctx->pc = 0x7F381C30u;
    ctx->downcount -= 4;
    // 7F381C30: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F381C34:
    ctx->pc = 0x7F381C34u;
    // 7F381C34: addi    r3, r3, 9472
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9472);

label_7F381C38:
    ctx->pc = 0x7F381C38u;
    // 7F381C38: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F381C3C:
    ctx->pc = 0x7F381C3Cu;
    // 7F381C3C: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F381C40u;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F381C40:
    ctx->pc = 0x7F381C40u;
    ctx->downcount -= 5;
    // 7F381C40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381C44:
    ctx->pc = 0x7F381C44u;
    // 7F381C44: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F381C48:
    ctx->pc = 0x7F381C48u;
    // 7F381C48: li      r5, 181
    ctx->gpr[5] = (u32)(s32)(181);

label_7F381C4C:
    ctx->pc = 0x7F381C4Cu;
    // 7F381C4C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381C50:
    ctx->pc = 0x7F381C50u;
    // 7F381C50: bl      0x7F0B9990
    {
            ctx->lr = 0x7F381C54u;
            ctx->pc = 0x7F0B9990u;
            return;
    }

label_7F381C54:
    ctx->pc = 0x7F381C54u;
    ctx->downcount -= 10;
    // 7F381C54: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F381C58:
    ctx->pc = 0x7F381C58u;
    // 7F381C58: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381C5C:
    ctx->pc = 0x7F381C5Cu;
    // 7F381C5C: addi    r3, r3, 9500
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9500);

label_7F381C60:
    ctx->pc = 0x7F381C60u;
    // 7F381C60: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F381C64:
    ctx->pc = 0x7F381C64u;
    // 7F381C64: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F381C68:
    ctx->pc = 0x7F381C68u;
    // 7F381C68: or   r7, r28, r28
    {
        ctx->gpr[7] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F381C6C:
    ctx->pc = 0x7F381C6Cu;
    // 7F381C6C: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F381C70:
    ctx->pc = 0x7F381C70u;
    // 7F381C70: or   r9, r25, r25
    {
        ctx->gpr[9] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F381C74:
    ctx->pc = 0x7F381C74u;
    // 7F381C74: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F381C78:
    ctx->pc = 0x7F381C78u;
    // 7F381C78: bl      0x7F0BA11C
    {
            ctx->lr = 0x7F381C7Cu;
            ctx->pc = 0x7F0BA11Cu;
            return;
    }

label_7F381C7C:
    ctx->pc = 0x7F381C7Cu;
    ctx->downcount -= 16;
    // 7F381C7C: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F381C80:
    ctx->pc = 0x7F381C80u;
    // 7F381C80: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381C84:
    ctx->pc = 0x7F381C84u;
    // 7F381C84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F381C88:
    ctx->pc = 0x7F381C88u;
    // 7F381C88: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F381C8C:
    ctx->pc = 0x7F381C8Cu;
    // 7F381C8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381C90:
    ctx->pc = 0x7F381C90u;
    ctx->downcount -= 7;
    // 7F381C90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381C94:
    ctx->pc = 0x7F381C94u;
    // 7F381C94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381C98:
    ctx->pc = 0x7F381C98u;
    // 7F381C98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381C9C:
    ctx->pc = 0x7F381C9Cu;
    // 7F381C9C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F381CA0:
    ctx->pc = 0x7F381CA0u;
    // 7F381CA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F381CA4:
    ctx->pc = 0x7F381CA4u;
    // 7F381CA4: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381CA8:
    ctx->pc = 0x7F381CA8u;
    // 7F381CA8: bl      0x7F2E18D4
    {
            ctx->lr = 0x7F381CACu;
            ctx->pc = 0x7F2E18D4u;
            return;
    }

label_7F381CAC:
    ctx->pc = 0x7F381CACu;
    ctx->downcount -= 2;
    // 7F381CAC: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381CB0:
    ctx->pc = 0x7F381CB0u;
    // 7F381CB0: bl      0x7F2E4330
    {
            ctx->lr = 0x7F381CB4u;
            ctx->pc = 0x7F2E4330u;
            return;
    }

label_7F381CB4:
    ctx->pc = 0x7F381CB4u;
    ctx->downcount -= 6;
    // 7F381CB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381CB8:
    ctx->pc = 0x7F381CB8u;
    // 7F381CB8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F381CBC:
    ctx->pc = 0x7F381CBCu;
    // 7F381CBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F381CC0:
    ctx->pc = 0x7F381CC0u;
    // 7F381CC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381CC4:
    ctx->pc = 0x7F381CC4u;
    // 7F381CC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381CC8:
    ctx->pc = 0x7F381CC8u;
    ctx->downcount -= 23;
    // 7F381CC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381CCC:
    ctx->pc = 0x7F381CCCu;
    // 7F381CCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381CD0:
    ctx->pc = 0x7F381CD0u;
    // 7F381CD0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F381CD4:
    ctx->pc = 0x7F381CD4u;
    // 7F381CD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381CD8:
    ctx->pc = 0x7F381CD8u;
    // 7F381CD8: addi    r6, r5, -2656
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-2656);

label_7F381CDC:
    ctx->pc = 0x7F381CDCu;
    // 7F381CDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381CE0:
    ctx->pc = 0x7F381CE0u;
    // 7F381CE0: lis     r5, 113
    ctx->gpr[5] = ((u32)(s32)(113) << 16);

label_7F381CE4:
    ctx->pc = 0x7F381CE4u;
    // 7F381CE4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F381CE8:
    ctx->pc = 0x7F381CE8u;
    // 7F381CE8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F381CEC:
    ctx->pc = 0x7F381CECu;
    // 7F381CEC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F381CF0:
    ctx->pc = 0x7F381CF0u;
    // 7F381CF0: addi    r3, r5, 23936
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(23936);

label_7F381CF4:
    ctx->pc = 0x7F381CF4u;
    // 7F381CF4: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381CF8:
    ctx->pc = 0x7F381CF8u;
    // 7F381CF8: bl      0x7F2E425C
    {
            ctx->lr = 0x7F381CFCu;
            ctx->pc = 0x7F2E425Cu;
            return;
    }

label_7F381CFC:
    ctx->pc = 0x7F381CFCu;
    ctx->downcount -= 5;
    // 7F381CFC: stw     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381D00:
    ctx->pc = 0x7F381D00u;
    // 7F381D00: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F381D04:
    ctx->pc = 0x7F381D04u;
    // 7F381D04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F381D08:
    ctx->pc = 0x7F381D08u;
    // 7F381D08: stw     r31, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F381D0C:
    ctx->pc = 0x7F381D0Cu;
    // 7F381D0C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F381D10u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F381D10:
    ctx->pc = 0x7F381D10u;
    ctx->downcount -= 8;
    // 7F381D10: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F381D14:
    ctx->pc = 0x7F381D14u;
    // 7F381D14: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381D18:
    ctx->pc = 0x7F381D18u;
    // 7F381D18: stw     r3, -2648(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-2648);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381D1C:
    ctx->pc = 0x7F381D1Cu;
    // 7F381D1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381D20:
    ctx->pc = 0x7F381D20u;
    // 7F381D20: stw     r3, 112(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381D24:
    ctx->pc = 0x7F381D24u;
    // 7F381D24: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F381D28:
    ctx->pc = 0x7F381D28u;
    // 7F381D28: stw     r0, -2652(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381D2C:
    ctx->pc = 0x7F381D2Cu;
    // 7F381D2C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F381D30u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F381D30:
    ctx->pc = 0x7F381D30u;
    ctx->downcount -= 2;
    // 7F381D30: cmplwi  r3, 0x0000
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

label_7F381D34:
    ctx->pc = 0x7F381D34u;
    // 7F381D34: bc    12, 2, 0x7F381D54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381D54;
        }
    }

label_7F381D38:
    ctx->pc = 0x7F381D38u;
    ctx->downcount -= 1;
    // 7F381D38: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F381D3Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F381D3C:
    ctx->pc = 0x7F381D3Cu;
    ctx->downcount -= 2;
    // 7F381D3C: cmplwi  r3, 0x0000
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

label_7F381D40:
    ctx->pc = 0x7F381D40u;
    // 7F381D40: bc    12, 2, 0x7F381D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381D60;
        }
    }

label_7F381D44:
    ctx->pc = 0x7F381D44u;
    ctx->downcount -= 1;
    // 7F381D44: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F381D48u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F381D48:
    ctx->pc = 0x7F381D48u;
    ctx->downcount -= 3;
    // 7F381D48: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381D4C:
    ctx->pc = 0x7F381D4Cu;
    // 7F381D4C: stw     r3, -2656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2656);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381D50:
    ctx->pc = 0x7F381D50u;
    // 7F381D50: b       0x7F381D60
    {
            goto label_7F381D60;
    }

label_7F381D54:
    ctx->pc = 0x7F381D54u;
    ctx->downcount -= 3;
    // 7F381D54: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381D58:
    ctx->pc = 0x7F381D58u;
    // 7F381D58: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381D5C:
    ctx->pc = 0x7F381D5Cu;
    // 7F381D5C: stw     r0, -2656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381D60:
    ctx->pc = 0x7F381D60u;
    ctx->downcount -= 2;
    // 7F381D60: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F381D64:
    ctx->pc = 0x7F381D64u;
    // 7F381D64: bl      0x7F3C664C
    {
            ctx->lr = 0x7F381D68u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F381D68:
    ctx->pc = 0x7F381D68u;
    ctx->downcount -= 2;
    // 7F381D68: cmplwi  r3, 0x0000
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

label_7F381D6C:
    ctx->pc = 0x7F381D6Cu;
    // 7F381D6C: bc    12, 2, 0x7F381D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381D88;
        }
    }

label_7F381D70:
    ctx->pc = 0x7F381D70u;
    ctx->downcount -= 1;
    // 7F381D70: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F381D74u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F381D74:
    ctx->pc = 0x7F381D74u;
    ctx->downcount -= 2;
    // 7F381D74: cmplwi  r3, 0x0000
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

label_7F381D78:
    ctx->pc = 0x7F381D78u;
    // 7F381D78: bc    12, 2, 0x7F381D90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381D90;
        }
    }

label_7F381D7C:
    ctx->pc = 0x7F381D7Cu;
    ctx->downcount -= 1;
    // 7F381D7C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F381D80u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F381D80:
    ctx->pc = 0x7F381D80u;
    ctx->downcount -= 2;
    // 7F381D80: stw     r3, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F381D84:
    ctx->pc = 0x7F381D84u;
    // 7F381D84: b       0x7F381D90
    {
            goto label_7F381D90;
    }

label_7F381D88:
    ctx->pc = 0x7F381D88u;
    ctx->downcount -= 2;
    // 7F381D88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381D8C:
    ctx->pc = 0x7F381D8Cu;
    // 7F381D8C: stw     r0, 116(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381D90:
    ctx->pc = 0x7F381D90u;
    ctx->downcount -= 2;
    // 7F381D90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F381D94:
    ctx->pc = 0x7F381D94u;
    // 7F381D94: bl      0x7F381878
    {
            ctx->lr = 0x7F381D98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381878u;
                return;
            }
            goto label_7F381878;
    }

label_7F381D98:
    ctx->pc = 0x7F381D98u;
    ctx->downcount -= 2;
    // 7F381D98: cmpwi   r3, 0
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

label_7F381D9C:
    ctx->pc = 0x7F381D9Cu;
    // 7F381D9C: bc    4, 0, 0x7F381DA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381DA8;
        }
    }

label_7F381DA0:
    ctx->pc = 0x7F381DA0u;
    ctx->downcount -= 2;
    // 7F381DA0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F381DA4:
    ctx->pc = 0x7F381DA4u;
    // 7F381DA4: b       0x7F381DB4
    {
            goto label_7F381DB4;
    }

label_7F381DA8:
    ctx->pc = 0x7F381DA8u;
    ctx->downcount -= 3;
    // 7F381DA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381DAC:
    ctx->pc = 0x7F381DACu;
    // 7F381DAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381DB0:
    ctx->pc = 0x7F381DB0u;
    // 7F381DB0: stw     r0, 108(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381DB4:
    ctx->pc = 0x7F381DB4u;
    ctx->downcount -= 16;
    // 7F381DB4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F381DB8:
    ctx->pc = 0x7F381DB8u;
    // 7F381DB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381DBC:
    ctx->pc = 0x7F381DBCu;
    // 7F381DBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F381DC0:
    ctx->pc = 0x7F381DC0u;
    // 7F381DC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381DC4:
    ctx->pc = 0x7F381DC4u;
    // 7F381DC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381DC8:
    ctx->pc = 0x7F381DC8u;
    ctx->downcount -= 20;
    // 7F381DC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381DCC:
    ctx->pc = 0x7F381DCCu;
    // 7F381DCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381DD0:
    ctx->pc = 0x7F381DD0u;
    // 7F381DD0: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F381DD4:
    ctx->pc = 0x7F381DD4u;
    // 7F381DD4: li      r5, 128
    ctx->gpr[5] = (u32)(s32)(128);

label_7F381DD8:
    ctx->pc = 0x7F381DD8u;
    // 7F381DD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381DDC:
    ctx->pc = 0x7F381DDCu;
    // 7F381DDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381DE0:
    ctx->pc = 0x7F381DE0u;
    // 7F381DE0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F381DE4:
    ctx->pc = 0x7F381DE4u;
    // 7F381DE4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F381DE8:
    ctx->pc = 0x7F381DE8u;
    // 7F381DE8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F381DEC:
    ctx->pc = 0x7F381DECu;
    // 7F381DEC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F381DF0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F381DF0:
    ctx->pc = 0x7F381DF0u;
    ctx->downcount -= 2;
    // 7F381DF0: or.   r31, r3, r3
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

label_7F381DF4:
    ctx->pc = 0x7F381DF4u;
    // 7F381DF4: bc    12, 2, 0x7F381E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381E58;
        }
    }

label_7F381DF8:
    ctx->pc = 0x7F381DF8u;
    ctx->downcount -= 5;
    // 7F381DF8: lis     r4, 32568
    ctx->gpr[4] = ((u32)(s32)(32568) << 16);

label_7F381DFC:
    ctx->pc = 0x7F381DFCu;
    // 7F381DFC: lis     r5, 32568
    ctx->gpr[5] = ((u32)(s32)(32568) << 16);

label_7F381E00:
    ctx->pc = 0x7F381E00u;
    // 7F381E00: addi    r4, r4, 6696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6696);

label_7F381E04:
    ctx->pc = 0x7F381E04u;
    // 7F381E04: addi    r5, r5, 7312
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7312);

label_7F381E08:
    ctx->pc = 0x7F381E08u;
    // 7F381E08: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F381E0Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F381E0C:
    ctx->pc = 0x7F381E0Cu;
    ctx->downcount -= 13;
    // 7F381E0C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381E10:
    ctx->pc = 0x7F381E10u;
    // 7F381E10: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F381E14:
    ctx->pc = 0x7F381E14u;
    // 7F381E14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F381E18:
    ctx->pc = 0x7F381E18u;
    // 7F381E18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381E1C:
    ctx->pc = 0x7F381E1Cu;
    // 7F381E1C: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F381E20:
    ctx->pc = 0x7F381E20u;
    // 7F381E20: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F381E24:
    ctx->pc = 0x7F381E24u;
    // 7F381E24: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F381E28:
    ctx->pc = 0x7F381E28u;
    // 7F381E28: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F381E2C:
    ctx->pc = 0x7F381E2Cu;
    // 7F381E2C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F381E30:
    ctx->pc = 0x7F381E30u;
    // 7F381E30: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F381E34:
    ctx->pc = 0x7F381E34u;
    // 7F381E34: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F381E38:
    ctx->pc = 0x7F381E38u;
    // 7F381E38: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381E3C:
    ctx->pc = 0x7F381E3Cu;
    // 7F381E3C: bl      0x7F381CC8
    {
            ctx->lr = 0x7F381E40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381CC8u;
                return;
            }
            goto label_7F381CC8;
    }

label_7F381E40:
    ctx->pc = 0x7F381E40u;
    ctx->downcount -= 2;
    // 7F381E40: cmpwi   r3, 0
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

label_7F381E44:
    ctx->pc = 0x7F381E44u;
    // 7F381E44: bc    12, 2, 0x7F381E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381E58;
        }
    }

label_7F381E48:
    ctx->pc = 0x7F381E48u;
    ctx->downcount -= 2;
    // 7F381E48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381E4C:
    ctx->pc = 0x7F381E4Cu;
    // 7F381E4C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F381E50u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F381E50:
    ctx->pc = 0x7F381E50u;
    ctx->downcount -= 2;
    // 7F381E50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F381E54:
    ctx->pc = 0x7F381E54u;
    // 7F381E54: b       0x7F381E5C
    {
            goto label_7F381E5C;
    }

label_7F381E58:
    ctx->pc = 0x7F381E58u;
    ctx->downcount -= 1;
    // 7F381E58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F381E5C:
    ctx->pc = 0x7F381E5Cu;
    ctx->downcount -= 16;
    // 7F381E5C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F381E60:
    ctx->pc = 0x7F381E60u;
    // 7F381E60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381E64:
    ctx->pc = 0x7F381E64u;
    // 7F381E64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F381E68:
    ctx->pc = 0x7F381E68u;
    // 7F381E68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381E6C:
    ctx->pc = 0x7F381E6Cu;
    // 7F381E6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381E70:
    ctx->pc = 0x7F381E70u;
    ctx->downcount -= 4;
    // 7F381E70: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381E74:
    ctx->pc = 0x7F381E74u;
    // 7F381E74: addi    r3, r3, -2648
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2648);

label_7F381E78:
    ctx->pc = 0x7F381E78u;
    // 7F381E78: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381E7C:
    ctx->pc = 0x7F381E7Cu;
    // 7F381E7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381E80:
    ctx->pc = 0x7F381E80u;
    ctx->downcount -= 4;
    // 7F381E80: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381E84:
    ctx->pc = 0x7F381E84u;
    // 7F381E84: addi    r3, r3, -2652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2652);

label_7F381E88:
    ctx->pc = 0x7F381E88u;
    // 7F381E88: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381E8C:
    ctx->pc = 0x7F381E8Cu;
    // 7F381E8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381E90:
    ctx->pc = 0x7F381E90u;
    ctx->downcount -= 5;
    // 7F381E90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381E94:
    ctx->pc = 0x7F381E94u;
    // 7F381E94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381E98:
    ctx->pc = 0x7F381E98u;
    // 7F381E98: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F381E9C:
    ctx->pc = 0x7F381E9Cu;
    // 7F381E9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381EA0:
    ctx->pc = 0x7F381EA0u;
    // 7F381EA0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F381EA4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F381EA4:
    ctx->pc = 0x7F381EA4u;
    ctx->downcount -= 2;
    // 7F381EA4: cmplwi  r3, 0x0000
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

label_7F381EA8:
    ctx->pc = 0x7F381EA8u;
    // 7F381EA8: bc    12, 2, 0x7F381EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381EC0;
        }
    }

label_7F381EAC:
    ctx->pc = 0x7F381EACu;
    ctx->downcount -= 1;
    // 7F381EAC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F381EB0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F381EB0:
    ctx->pc = 0x7F381EB0u;
    ctx->downcount -= 4;
    // 7F381EB0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381EB4:
    ctx->pc = 0x7F381EB4u;
    // 7F381EB4: lwzu     r0, -2656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2656);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F381EB8:
    ctx->pc = 0x7F381EB8u;
    // 7F381EB8: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F381EBC:
    ctx->pc = 0x7F381EBCu;
    // 7F381EBC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381EC0:
    ctx->pc = 0x7F381EC0u;
    ctx->downcount -= 5;
    // 7F381EC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381EC4:
    ctx->pc = 0x7F381EC4u;
    // 7F381EC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F381EC8:
    ctx->pc = 0x7F381EC8u;
    // 7F381EC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381ECC:
    ctx->pc = 0x7F381ECCu;
    // 7F381ECC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381ED0:
    ctx->pc = 0x7F381ED0u;
    ctx->downcount -= 5;
    // 7F381ED0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381ED4:
    ctx->pc = 0x7F381ED4u;
    // 7F381ED4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381ED8:
    ctx->pc = 0x7F381ED8u;
    // 7F381ED8: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F381EDC:
    ctx->pc = 0x7F381EDCu;
    // 7F381EDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381EE0:
    ctx->pc = 0x7F381EE0u;
    // 7F381EE0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F381EE4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F381EE4:
    ctx->pc = 0x7F381EE4u;
    ctx->downcount -= 2;
    // 7F381EE4: cmplwi  r3, 0x0000
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

label_7F381EE8:
    ctx->pc = 0x7F381EE8u;
    // 7F381EE8: bc    12, 2, 0x7F381F00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381F00;
        }
    }

label_7F381EEC:
    ctx->pc = 0x7F381EECu;
    ctx->downcount -= 1;
    // 7F381EEC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F381EF0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F381EF0:
    ctx->pc = 0x7F381EF0u;
    ctx->downcount -= 4;
    // 7F381EF0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F381EF4:
    ctx->pc = 0x7F381EF4u;
    // 7F381EF4: lwzu     r0, -2656(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-2656);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F381EF8:
    ctx->pc = 0x7F381EF8u;
    // 7F381EF8: andc   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[3];
    }

label_7F381EFC:
    ctx->pc = 0x7F381EFCu;
    // 7F381EFC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381F00:
    ctx->pc = 0x7F381F00u;
    ctx->downcount -= 5;
    // 7F381F00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381F04:
    ctx->pc = 0x7F381F04u;
    // 7F381F04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F381F08:
    ctx->pc = 0x7F381F08u;
    // 7F381F08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F381F0C:
    ctx->pc = 0x7F381F0Cu;
    // 7F381F0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381F10:
    ctx->pc = 0x7F381F10u;
    ctx->downcount -= 5;
    // 7F381F10: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F381F14:
    ctx->pc = 0x7F381F14u;
    // 7F381F14: lwzu     r0, -2656(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-2656);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F381F18:
    ctx->pc = 0x7F381F18u;
    // 7F381F18: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F381F1C:
    ctx->pc = 0x7F381F1Cu;
    // 7F381F1C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381F20:
    ctx->pc = 0x7F381F20u;
    // 7F381F20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381F24:
    ctx->pc = 0x7F381F24u;
    ctx->downcount -= 6;
    // 7F381F24: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F381F28:
    ctx->pc = 0x7F381F28u;
    // 7F381F28: lwz     r5, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381F2C:
    ctx->pc = 0x7F381F2Cu;
    // 7F381F2C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F381F30:
    ctx->pc = 0x7F381F30u;
    // 7F381F30: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381F34:
    ctx->pc = 0x7F381F34u;
    // 7F381F34: rlwinm. r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F381F38:
    ctx->pc = 0x7F381F38u;
    // 7F381F38: bc    12, 2, 0x7F381F58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381F58;
        }
    }

label_7F381F3C:
    ctx->pc = 0x7F381F3Cu;
    ctx->downcount -= 9;
    // 7F381F3C: mulli   r0, r5, 44
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)44);

label_7F381F40:
    ctx->pc = 0x7F381F40u;
    // 7F381F40: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F381F44:
    ctx->pc = 0x7F381F44u;
    // 7F381F44: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381F48:
    ctx->pc = 0x7F381F48u;
    // 7F381F48: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381F4C:
    ctx->pc = 0x7F381F4Cu;
    // 7F381F4C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F381F50:
    ctx->pc = 0x7F381F50u;
    // 7F381F50: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381F54:
    ctx->pc = 0x7F381F54u;
    // 7F381F54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381F58:
    ctx->pc = 0x7F381F58u;
    ctx->downcount -= 9;
    // 7F381F58: mulli   r0, r5, 44
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)44);

label_7F381F5C:
    ctx->pc = 0x7F381F5Cu;
    // 7F381F5C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F381F60:
    ctx->pc = 0x7F381F60u;
    // 7F381F60: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381F64:
    ctx->pc = 0x7F381F64u;
    // 7F381F64: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381F68:
    ctx->pc = 0x7F381F68u;
    // 7F381F68: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F381F6C:
    ctx->pc = 0x7F381F6Cu;
    // 7F381F6C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381F70:
    ctx->pc = 0x7F381F70u;
    // 7F381F70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381F74:
    ctx->pc = 0x7F381F74u;
    ctx->downcount -= 5;
    // 7F381F74: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F381F78:
    ctx->pc = 0x7F381F78u;
    // 7F381F78: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F381F7C:
    ctx->pc = 0x7F381F7Cu;
    // 7F381F7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F381F80:
    ctx->pc = 0x7F381F80u;
    // 7F381F80: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F381F84:
    ctx->pc = 0x7F381F84u;
    ctx->downcount -= 3;
    // 7F381F84: lwz     r0, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381F88:
    // 7F381F88: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F381F8C:
    // 7F381F8C: bc    4, 2, 0x7F381FA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F381FA8;
        }
    }

label_7F381F90:
    ctx->downcount -= 6;
    // 7F381F90: addi    r0, r4, 52
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(52);

label_7F381F94:
    ctx->pc = 0x7F381F94u;
    // 7F381F94: lwzx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381F98:
    ctx->pc = 0x7F381F98u;
    // 7F381F98: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381F9C:
    // 7F381F9C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F381FA0:
    ctx->pc = 0x7F381FA0u;
    // 7F381FA0: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381FA4:
    // 7F381FA4: b       0x7F381FBC
    {
            goto label_7F381FBC;
    }

label_7F381FA8:
    ctx->downcount -= 5;
    // 7F381FA8: addi    r0, r4, 52
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(52);

label_7F381FAC:
    ctx->pc = 0x7F381FACu;
    // 7F381FAC: lwzx    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F381FB0:
    ctx->pc = 0x7F381FB0u;
    // 7F381FB0: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381FB4:
    // 7F381FB4: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F381FB8:
    ctx->pc = 0x7F381FB8u;
    // 7F381FB8: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381FBC:
    ctx->downcount -= 3;
    // 7F381FBC: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F381FC0:
    // 7F381FC0: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_7F381FC4:
    // 7F381FC4: bc    16, 0, 0x7F381F84
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381F84u;
                return;
            }
            goto label_7F381F84;
        }
    }

label_7F381FC8:
    ctx->pc = 0x7F381FC8u;
    ctx->downcount -= 1;
    // 7F381FC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F381FCC:
    ctx->pc = 0x7F381FCCu;
    ctx->downcount -= 20;
    // 7F381FCC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F381FD0:
    ctx->pc = 0x7F381FD0u;
    // 7F381FD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F381FD4:
    ctx->pc = 0x7F381FD4u;
    // 7F381FD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381FD8:
    ctx->pc = 0x7F381FD8u;
    // 7F381FD8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F381FDC:
    ctx->pc = 0x7F381FDCu;
    // 7F381FDC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F381FE0:
    ctx->pc = 0x7F381FE0u;
    // 7F381FE0: lwz     r3, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F381FE4:
    ctx->pc = 0x7F381FE4u;
    // 7F381FE4: lwz     r4, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F381FE8:
    ctx->pc = 0x7F381FE8u;
    // 7F381FE8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F381FEC:
    ctx->pc = 0x7F381FECu;
    // 7F381FEC: cmpw    r4, r0
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

label_7F381FF0:
    ctx->pc = 0x7F381FF0u;
    // 7F381FF0: bc    12, 2, 0x7F381FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F381FFC;
        }
    }

label_7F381FF4:
    ctx->pc = 0x7F381FF4u;
    ctx->downcount -= 2;
    // 7F381FF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F381FF8:
    ctx->pc = 0x7F381FF8u;
    // 7F381FF8: stw     r0, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F381FFC:
    ctx->pc = 0x7F381FFCu;
    ctx->downcount -= 8;
    // 7F381FFC: lwz     r3, 296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382000:
    ctx->pc = 0x7F382000u;
    // 7F382000: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382004:
    ctx->pc = 0x7F382004u;
    // 7F382004: stw     r0, 304(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382008:
    ctx->pc = 0x7F382008u;
    // 7F382008: lwz     r3, 296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(296);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38200C:
    ctx->pc = 0x7F38200Cu;
    // 7F38200C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382010:
    ctx->pc = 0x7F382010u;
    // 7F382010: cmpwi   r0, 5
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

label_7F382014:
    ctx->pc = 0x7F382014u;
    // 7F382014: or   r31, r0, r0
    {
        ctx->gpr[31] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F382018:
    ctx->pc = 0x7F382018u;
    // 7F382018: bc    12, 2, 0x7F382118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382118;
        }
    }

label_7F38201C:
    ctx->pc = 0x7F38201Cu;
    ctx->downcount -= 1;
    // 7F38201C: bc    4, 0, 0x7F382038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382038;
        }
    }

label_7F382020:
    ctx->pc = 0x7F382020u;
    ctx->downcount -= 2;
    // 7F382020: cmpwi   r0, 2
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

label_7F382024:
    ctx->pc = 0x7F382024u;
    // 7F382024: bc    12, 2, 0x7F3820AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3820AC;
        }
    }

label_7F382028:
    ctx->pc = 0x7F382028u;
    ctx->downcount -= 1;
    // 7F382028: bc    4, 0, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F38202C:
    ctx->pc = 0x7F38202Cu;
    ctx->downcount -= 2;
    // 7F38202C: cmpwi   r0, 1
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

label_7F382030:
    ctx->pc = 0x7F382030u;
    // 7F382030: bc    4, 0, 0x7F382048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382048;
        }
    }

label_7F382034:
    ctx->pc = 0x7F382034u;
    ctx->downcount -= 1;
    // 7F382034: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382038:
    ctx->pc = 0x7F382038u;
    ctx->downcount -= 2;
    // 7F382038: cmpwi   r0, 7
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

label_7F38203C:
    ctx->pc = 0x7F38203Cu;
    // 7F38203C: bc    12, 2, 0x7F382128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382128;
        }
    }

label_7F382040:
    ctx->pc = 0x7F382040u;
    ctx->downcount -= 1;
    // 7F382040: bc    4, 0, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F382044:
    ctx->pc = 0x7F382044u;
    ctx->downcount -= 1;
    // 7F382044: b       0x7F382120
    {
            goto label_7F382120;
    }

label_7F382048:
    ctx->pc = 0x7F382048u;
    ctx->downcount -= 4;
    // 7F382048: lwz     r0, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38204C:
    ctx->pc = 0x7F38204Cu;
    // 7F38204C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F382050:
    ctx->pc = 0x7F382050u;
    // 7F382050: cmpwi   r0, 5
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

label_7F382054:
    ctx->pc = 0x7F382054u;
    // 7F382054: bc    4, 0, 0x7F382060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382060;
        }
    }

label_7F382058:
    ctx->pc = 0x7F382058u;
    ctx->downcount -= 2;
    // 7F382058: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F38205C:
    ctx->pc = 0x7F38205Cu;
    // 7F38205C: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382060:
    ctx->pc = 0x7F382060u;
    ctx->downcount -= 2;
    // 7F382060: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F382064:
    ctx->pc = 0x7F382064u;
    // 7F382064: bc    4, 2, 0x7F382080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382080;
        }
    }

label_7F382068:
    ctx->pc = 0x7F382068u;
    ctx->downcount -= 1;
    // 7F382068: bl      0x7F382198
    {
            ctx->lr = 0x7F38206Cu;
            goto label_7F382198;
    }

label_7F38206C:
    ctx->pc = 0x7F38206Cu;
    ctx->downcount -= 2;
    // 7F38206C: rlwinm. r0, r3, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F382070:
    ctx->pc = 0x7F382070u;
    // 7F382070: bc    4, 2, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F382074:
    ctx->pc = 0x7F382074u;
    ctx->downcount -= 3;
    // 7F382074: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F382078:
    ctx->pc = 0x7F382078u;
    // 7F382078: stw     r0, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38207C:
    ctx->pc = 0x7F38207Cu;
    // 7F38207C: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382080:
    ctx->pc = 0x7F382080u;
    ctx->downcount -= 2;
    // 7F382080: cmpwi   r0, 120
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(120);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F382084:
    ctx->pc = 0x7F382084u;
    // 7F382084: bc    4, 1, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F382088:
    ctx->pc = 0x7F382088u;
    ctx->downcount -= 1;
    // 7F382088: bl      0x7F382198
    {
            ctx->lr = 0x7F38208Cu;
            goto label_7F382198;
    }

label_7F38208C:
    ctx->pc = 0x7F38208Cu;
    ctx->downcount -= 48;
    // 7F38208C: li      r4, 90
    ctx->gpr[4] = (u32)(s32)(90);

label_7F382090:
    ctx->pc = 0x7F382090u;
    // 7F382090: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F382094:
    ctx->pc = 0x7F382094u;
    // 7F382094: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F382098:
    ctx->pc = 0x7F382098u;
    // 7F382098: subf.   r0, r0, r3
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

label_7F38209C:
    ctx->pc = 0x7F38209Cu;
    // 7F38209C: bc    4, 2, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F3820A0:
    ctx->pc = 0x7F3820A0u;
    ctx->downcount -= 3;
    // 7F3820A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3820A4:
    ctx->pc = 0x7F3820A4u;
    // 7F3820A4: stw     r0, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3820A8:
    ctx->pc = 0x7F3820A8u;
    // 7F3820A8: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F3820AC:
    ctx->pc = 0x7F3820ACu;
    ctx->downcount -= 4;
    // 7F3820AC: lwz     r0, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3820B0:
    ctx->pc = 0x7F3820B0u;
    // 7F3820B0: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F3820B4:
    ctx->pc = 0x7F3820B4u;
    // 7F3820B4: cmpwi   r0, 180
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

label_7F3820B8:
    ctx->pc = 0x7F3820B8u;
    // 7F3820B8: bc    12, 0, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F3820BC:
    ctx->pc = 0x7F3820BCu;
    ctx->downcount -= 2;
    // 7F3820BC: cmpwi   r0, 184
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(184);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3820C0:
    ctx->pc = 0x7F3820C0u;
    // 7F3820C0: bc    4, 0, 0x7F3820CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3820CC;
        }
    }

label_7F3820C4:
    ctx->pc = 0x7F3820C4u;
    ctx->downcount -= 2;
    // 7F3820C4: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F3820C8:
    ctx->pc = 0x7F3820C8u;
    // 7F3820C8: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F3820CC:
    ctx->pc = 0x7F3820CCu;
    ctx->downcount -= 2;
    // 7F3820CC: cmpwi   r0, 188
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(188);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3820D0:
    ctx->pc = 0x7F3820D0u;
    // 7F3820D0: bc    4, 2, 0x7F3820EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3820EC;
        }
    }

label_7F3820D4:
    ctx->pc = 0x7F3820D4u;
    ctx->downcount -= 1;
    // 7F3820D4: bl      0x7F382198
    {
            ctx->lr = 0x7F3820D8u;
            goto label_7F382198;
    }

label_7F3820D8:
    ctx->pc = 0x7F3820D8u;
    ctx->downcount -= 2;
    // 7F3820D8: rlwinm. r0, r3, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3820DC:
    ctx->pc = 0x7F3820DCu;
    // 7F3820DC: bc    4, 2, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F3820E0:
    ctx->pc = 0x7F3820E0u;
    ctx->downcount -= 3;
    // 7F3820E0: li      r0, 180
    ctx->gpr[0] = (u32)(s32)(180);

label_7F3820E4:
    ctx->pc = 0x7F3820E4u;
    // 7F3820E4: stw     r0, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3820E8:
    ctx->pc = 0x7F3820E8u;
    // 7F3820E8: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F3820EC:
    ctx->pc = 0x7F3820ECu;
    ctx->downcount -= 2;
    // 7F3820EC: cmpwi   r0, 300
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(300);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3820F0:
    ctx->pc = 0x7F3820F0u;
    // 7F3820F0: bc    4, 1, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F3820F4:
    ctx->pc = 0x7F3820F4u;
    ctx->downcount -= 1;
    // 7F3820F4: bl      0x7F382198
    {
            ctx->lr = 0x7F3820F8u;
            goto label_7F382198;
    }

label_7F3820F8:
    ctx->pc = 0x7F3820F8u;
    ctx->downcount -= 48;
    // 7F3820F8: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F3820FC:
    ctx->pc = 0x7F3820FCu;
    // 7F3820FC: divwu   r0, r3, r4
    {
        u32 divisor = ctx->gpr[4];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F382100:
    ctx->pc = 0x7F382100u;
    // 7F382100: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F382104:
    ctx->pc = 0x7F382104u;
    // 7F382104: subf.   r0, r0, r3
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

label_7F382108:
    ctx->pc = 0x7F382108u;
    // 7F382108: bc    4, 2, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F38210C:
    ctx->pc = 0x7F38210Cu;
    ctx->downcount -= 3;
    // 7F38210C: li      r0, 180
    ctx->gpr[0] = (u32)(s32)(180);

label_7F382110:
    ctx->pc = 0x7F382110u;
    // 7F382110: stw     r0, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382114:
    ctx->pc = 0x7F382114u;
    // 7F382114: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382118:
    ctx->pc = 0x7F382118u;
    ctx->downcount -= 2;
    // 7F382118: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F38211C:
    ctx->pc = 0x7F38211Cu;
    // 7F38211C: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382120:
    ctx->pc = 0x7F382120u;
    ctx->downcount -= 2;
    // 7F382120: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F382124:
    ctx->pc = 0x7F382124u;
    // 7F382124: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382128:
    ctx->pc = 0x7F382128u;
    ctx->downcount -= 4;
    // 7F382128: lwz     r0, 300(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38212C:
    ctx->pc = 0x7F38212Cu;
    // 7F38212C: li      r31, 4
    ctx->gpr[31] = (u32)(s32)(4);

label_7F382130:
    ctx->pc = 0x7F382130u;
    // 7F382130: cmpwi   r0, 4
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

label_7F382134:
    ctx->pc = 0x7F382134u;
    // 7F382134: bc    4, 0, 0x7F382140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382140;
        }
    }

label_7F382138:
    ctx->pc = 0x7F382138u;
    ctx->downcount -= 2;
    // 7F382138: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F38213C:
    ctx->pc = 0x7F38213Cu;
    // 7F38213C: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382140:
    ctx->pc = 0x7F382140u;
    ctx->downcount -= 2;
    // 7F382140: cmpwi   r0, 10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F382144:
    ctx->pc = 0x7F382144u;
    // 7F382144: bc    4, 0, 0x7F382150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382150;
        }
    }

label_7F382148:
    ctx->pc = 0x7F382148u;
    ctx->downcount -= 2;
    // 7F382148: li      r31, 3
    ctx->gpr[31] = (u32)(s32)(3);

label_7F38214C:
    ctx->pc = 0x7F38214Cu;
    // 7F38214C: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382150:
    ctx->pc = 0x7F382150u;
    ctx->downcount -= 2;
    // 7F382150: cmpwi   r0, 13
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F382154:
    ctx->pc = 0x7F382154u;
    // 7F382154: bc    4, 0, 0x7F382160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382160;
        }
    }

label_7F382158:
    ctx->pc = 0x7F382158u;
    ctx->downcount -= 2;
    // 7F382158: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F38215C:
    ctx->pc = 0x7F38215Cu;
    // 7F38215C: b       0x7F38216C
    {
            goto label_7F38216C;
    }

label_7F382160:
    ctx->pc = 0x7F382160u;
    ctx->downcount -= 2;
    // 7F382160: cmpwi   r0, 15
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

label_7F382164:
    ctx->pc = 0x7F382164u;
    // 7F382164: bc    4, 0, 0x7F38216C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38216C;
        }
    }

label_7F382168:
    ctx->pc = 0x7F382168u;
    ctx->downcount -= 1;
    // 7F382168: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_7F38216C:
    ctx->pc = 0x7F38216Cu;
    ctx->downcount -= 2;
    // 7F38216C: cmpwi   r31, 0
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

label_7F382170:
    ctx->pc = 0x7F382170u;
    // 7F382170: bc    12, 0, 0x7F38217C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38217C;
        }
    }

label_7F382174:
    ctx->pc = 0x7F382174u;
    ctx->downcount -= 2;
    // 7F382174: cmpwi   r31, 5
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

label_7F382178:
    ctx->pc = 0x7F382178u;
    // 7F382178: bc    12, 0, 0x7F382180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382180;
        }
    }

label_7F38217C:
    ctx->pc = 0x7F38217Cu;
    ctx->downcount -= 1;
    // 7F38217C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F382180:
    ctx->pc = 0x7F382180u;
    ctx->downcount -= 17;
    // 7F382180: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382184:
    ctx->pc = 0x7F382184u;
    // 7F382184: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F382188:
    ctx->pc = 0x7F382188u;
    // 7F382188: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38218C:
    ctx->pc = 0x7F38218Cu;
    // 7F38218C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382190:
    ctx->pc = 0x7F382190u;
    // 7F382190: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382194:
    ctx->pc = 0x7F382194u;
    // 7F382194: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382198:
    ctx->pc = 0x7F382198u;
    ctx->downcount -= 13;
    // 7F382198: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F38219C:
    ctx->pc = 0x7F38219Cu;
    // 7F38219C: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F3821A0:
    ctx->pc = 0x7F3821A0u;
    // 7F3821A0: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F3821A4:
    ctx->pc = 0x7F3821A4u;
    // 7F3821A4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3821A8:
    ctx->pc = 0x7F3821A8u;
    // 7F3821A8: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F3821AC:
    ctx->pc = 0x7F3821ACu;
    // 7F3821AC: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F3821B0:
    ctx->pc = 0x7F3821B0u;
    // 7F3821B0: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3821B4:
    ctx->pc = 0x7F3821B4u;
    // 7F3821B4: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3821B8:
    ctx->pc = 0x7F3821B8u;
    // 7F3821B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3821BC:
    ctx->pc = 0x7F3821BCu;
    ctx->downcount -= 19;
    // 7F3821BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3821C0:
    ctx->pc = 0x7F3821C0u;
    // 7F3821C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3821C4:
    ctx->pc = 0x7F3821C4u;
    // 7F3821C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3821C8:
    ctx->pc = 0x7F3821C8u;
    // 7F3821C8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3821CC:
    ctx->pc = 0x7F3821CCu;
    // 7F3821CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3821D0:
    ctx->pc = 0x7F3821D0u;
    // 7F3821D0: lwz     r4, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3821D4:
    ctx->pc = 0x7F3821D4u;
    // 7F3821D4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3821D8:
    ctx->pc = 0x7F3821D8u;
    // 7F3821D8: cmpwi   r0, -1
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

label_7F3821DC:
    ctx->pc = 0x7F3821DCu;
    // 7F3821DC: bc    4, 2, 0x7F3821E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3821E8;
        }
    }

label_7F3821E0:
    ctx->pc = 0x7F3821E0u;
    ctx->downcount -= 1;
    // 7F3821E0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3821E4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3821E4:
    ctx->pc = 0x7F3821E4u;
    ctx->downcount -= 1;
    // 7F3821E4: b       0x7F38232C
    {
            goto label_7F38232C;
    }

label_7F3821E8:
    ctx->pc = 0x7F3821E8u;
    ctx->downcount -= 1;
    // 7F3821E8: bl      0x7F381FCC
    {
            ctx->lr = 0x7F3821ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381FCCu;
                return;
            }
            goto label_7F381FCC;
    }

label_7F3821EC:
    ctx->pc = 0x7F3821ECu;
    ctx->downcount -= 3;
    // 7F3821EC: lwz     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3821F0:
    ctx->pc = 0x7F3821F0u;
    // 7F3821F0: cmpw    r0, r3
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

label_7F3821F4:
    ctx->pc = 0x7F3821F4u;
    // 7F3821F4: bc    12, 2, 0x7F382204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382204;
        }
    }

label_7F3821F8:
    ctx->pc = 0x7F3821F8u;
    ctx->downcount -= 3;
    // 7F3821F8: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3821FC:
    ctx->pc = 0x7F3821FCu;
    // 7F3821FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382200:
    ctx->pc = 0x7F382200u;
    // 7F382200: bl      0x7F381F74
    {
            ctx->lr = 0x7F382204u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381F74u;
                return;
            }
            goto label_7F381F74;
    }

label_7F382204:
    ctx->pc = 0x7F382204u;
    ctx->downcount -= 2;
    // 7F382204: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382208:
    ctx->pc = 0x7F382208u;
    // 7F382208: bl      0x7F381F24
    {
            ctx->lr = 0x7F38220Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F381F24u;
                return;
            }
            goto label_7F381F24;
    }

label_7F38220C:
    ctx->pc = 0x7F38220Cu;
    ctx->downcount -= 3;
    // 7F38220C: lwz     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382210:
    ctx->pc = 0x7F382210u;
    // 7F382210: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F382214:
    ctx->pc = 0x7F382214u;
    // 7F382214: bc    12, 2, 0x7F382220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382220;
        }
    }

label_7F382218:
    ctx->pc = 0x7F382218u;
    ctx->downcount -= 2;
    // 7F382218: cmpwi   r0, 10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F38221C:
    ctx->pc = 0x7F38221Cu;
    // 7F38221C: bc    4, 2, 0x7F382240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382240;
        }
    }

label_7F382220:
    ctx->pc = 0x7F382220u;
    ctx->downcount -= 4;
    // 7F382220: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382224:
    ctx->pc = 0x7F382224u;
    // 7F382224: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382228:
    ctx->pc = 0x7F382228u;
    // 7F382228: addi    r3, r3, 5628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5628);

label_7F38222C:
    ctx->pc = 0x7F38222Cu;
    // 7F38222C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F382230u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F382230:
    ctx->pc = 0x7F382230u;
    ctx->downcount -= 3;
    // 7F382230: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382234:
    ctx->pc = 0x7F382234u;
    // 7F382234: addi    r3, r3, 9536
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9536);

label_7F382238:
    ctx->pc = 0x7F382238u;
    // 7F382238: bl      0x7F3B3134
    {
            ctx->lr = 0x7F38223Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F38223C:
    ctx->pc = 0x7F38223Cu;
    ctx->downcount -= 1;
    // 7F38223C: b       0x7F38228C
    {
            goto label_7F38228C;
    }

label_7F382240:
    ctx->pc = 0x7F382240u;
    ctx->downcount -= 2;
    // 7F382240: cmpwi   r0, 7
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

label_7F382244:
    ctx->pc = 0x7F382244u;
    // 7F382244: bc    12, 2, 0x7F382250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382250;
        }
    }

label_7F382248:
    ctx->pc = 0x7F382248u;
    ctx->downcount -= 2;
    // 7F382248: cmpwi   r0, 12
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

label_7F38224C:
    ctx->pc = 0x7F38224Cu;
    // 7F38224C: bc    4, 2, 0x7F382270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382270;
        }
    }

label_7F382250:
    ctx->pc = 0x7F382250u;
    ctx->downcount -= 4;
    // 7F382250: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382254:
    ctx->pc = 0x7F382254u;
    // 7F382254: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382258:
    ctx->pc = 0x7F382258u;
    // 7F382258: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F38225C:
    ctx->pc = 0x7F38225Cu;
    // 7F38225C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F382260u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F382260:
    ctx->pc = 0x7F382260u;
    ctx->downcount -= 3;
    // 7F382260: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382264:
    ctx->pc = 0x7F382264u;
    // 7F382264: addi    r3, r3, 9536
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9536);

label_7F382268:
    ctx->pc = 0x7F382268u;
    // 7F382268: bl      0x7F3B3134
    {
            ctx->lr = 0x7F38226Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F38226C:
    ctx->pc = 0x7F38226Cu;
    ctx->downcount -= 1;
    // 7F38226C: b       0x7F38228C
    {
            goto label_7F38228C;
    }

label_7F382270:
    ctx->pc = 0x7F382270u;
    ctx->downcount -= 4;
    // 7F382270: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382274:
    ctx->pc = 0x7F382274u;
    // 7F382274: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382278:
    ctx->pc = 0x7F382278u;
    // 7F382278: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F38227C:
    ctx->pc = 0x7F38227Cu;
    // 7F38227C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F382280u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F382280:
    ctx->pc = 0x7F382280u;
    ctx->downcount -= 3;
    // 7F382280: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382284:
    ctx->pc = 0x7F382284u;
    // 7F382284: addi    r3, r3, 9520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9520);

label_7F382288:
    ctx->pc = 0x7F382288u;
    // 7F382288: bl      0x7F3B3134
    {
            ctx->lr = 0x7F38228Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F38228C:
    ctx->pc = 0x7F38228Cu;
    ctx->downcount -= 2;
    // 7F38228C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F382290:
    ctx->pc = 0x7F382290u;
    // 7F382290: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F382294:
    ctx->pc = 0x7F382294u;
    ctx->downcount -= 8;
    // 7F382294: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382298:
    // 7F382298: add   r5, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F38229C:
    ctx->pc = 0x7F38229Cu;
    // 7F38229C: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3822A0:
    ctx->pc = 0x7F3822A0u;
    // 7F3822A0: stw     r0, 92(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3822A4:
    ctx->pc = 0x7F3822A4u;
    // 7F3822A4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3822A8:
    ctx->pc = 0x7F3822A8u;
    // 7F3822A8: lwz     r3, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3822AC:
    ctx->pc = 0x7F3822ACu;
    // 7F3822AC: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3822B0:
    // 7F3822B0: bl      0x7F382340
    {
            ctx->lr = 0x7F3822B4u;
            goto label_7F382340;
    }

label_7F3822B4:
    ctx->downcount -= 4;
    // 7F3822B4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F3822B8:
    // 7F3822B8: addi    r30, r30, 44
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(44);

label_7F3822BC:
    // 7F3822BC: cmpwi   r29, 5
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3822C0:
    // 7F3822C0: bc    12, 0, 0x7F382294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382294u;
                return;
            }
            goto label_7F382294;
        }
    }

label_7F3822C4:
    ctx->pc = 0x7F3822C4u;
    ctx->downcount -= 7;
    // 7F3822C4: lwz     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3822C8:
    ctx->pc = 0x7F3822C8u;
    // 7F3822C8: mulli   r0, r0, 44
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F3822CC:
    ctx->pc = 0x7F3822CCu;
    // 7F3822CC: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3822D0:
    ctx->pc = 0x7F3822D0u;
    // 7F3822D0: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3822D4:
    ctx->pc = 0x7F3822D4u;
    // 7F3822D4: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F3822D8u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F3822D8:
    ctx->pc = 0x7F3822D8u;
    ctx->downcount -= 11;
    // 7F3822D8: lwz     r3, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3822DC:
    ctx->pc = 0x7F3822DCu;
    // 7F3822DC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3822E0:
    ctx->pc = 0x7F3822E0u;
    // 7F3822E0: stw     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3822E4:
    ctx->pc = 0x7F3822E4u;
    // 7F3822E4: lwz     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3822E8:
    ctx->pc = 0x7F3822E8u;
    // 7F3822E8: rlwinm r0, r0, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F3822EC:
    ctx->pc = 0x7F3822ECu;
    // 7F3822EC: stw     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3822F0:
    ctx->pc = 0x7F3822F0u;
    // 7F3822F0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3822F4:
    ctx->pc = 0x7F3822F4u;
    // 7F3822F4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3822F8:
    ctx->pc = 0x7F3822F8u;
    // 7F3822F8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3822FC:
    ctx->pc = 0x7F3822FCu;
    // 7F3822FC: rlwinm. r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F382300:
    ctx->pc = 0x7F382300u;
    // 7F382300: bc    4, 2, 0x7F38232C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38232C;
        }
    }

label_7F382304:
    ctx->pc = 0x7F382304u;
    ctx->downcount -= 4;
    // 7F382304: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F382308:
    ctx->pc = 0x7F382308u;
    // 7F382308: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F38230C:
    ctx->pc = 0x7F38230Cu;
    // 7F38230C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F382310:
    ctx->downcount -= 5;
    // 7F382310: addi    r0, r3, 52
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(52);

label_7F382314:
    ctx->pc = 0x7F382314u;
    // 7F382314: lwzx    r4, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382318:
    ctx->pc = 0x7F382318u;
    // 7F382318: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38231C:
    // 7F38231C: rlwinm. r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F382320:
    // 7F382320: bc    12, 2, 0x7F38232C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38232C;
        }
    }

label_7F382324:
    ctx->downcount -= 2;
    // 7F382324: addi    r3, r3, 44
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(44);

label_7F382328:
    // 7F382328: bc    16, 0, 0x7F382310
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382310u;
                return;
            }
            goto label_7F382310;
        }
    }

label_7F38232C:
    ctx->pc = 0x7F38232Cu;
    ctx->downcount -= 16;
    // 7F38232C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F382330:
    ctx->pc = 0x7F382330u;
    // 7F382330: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382334:
    ctx->pc = 0x7F382334u;
    // 7F382334: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382338:
    ctx->pc = 0x7F382338u;
    // 7F382338: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F38233C:
    ctx->pc = 0x7F38233Cu;
    // 7F38233C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382340:
    ctx->pc = 0x7F382340u;
    ctx->downcount -= 7;
    // 7F382340: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382344:
    ctx->pc = 0x7F382344u;
    // 7F382344: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382348:
    ctx->pc = 0x7F382348u;
    // 7F382348: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38234C:
    ctx->pc = 0x7F38234Cu;
    // 7F38234C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F382350:
    ctx->pc = 0x7F382350u;
    // 7F382350: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382354:
    ctx->pc = 0x7F382354u;
    // 7F382354: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F382358:
    ctx->pc = 0x7F382358u;
    // 7F382358: bl      0x7F01B234
    {
            ctx->lr = 0x7F38235Cu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F38235C:
    ctx->pc = 0x7F38235Cu;
    ctx->downcount -= 7;
    // 7F38235C: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382360:
    ctx->pc = 0x7F382360u;
    // 7F382360: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382364:
    ctx->pc = 0x7F382364u;
    // 7F382364: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F382368:
    ctx->pc = 0x7F382368u;
    // 7F382368: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F38236C:
    ctx->pc = 0x7F38236Cu;
    // 7F38236C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382370:
    ctx->pc = 0x7F382370u;
    // 7F382370: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382374:
    ctx->pc = 0x7F382374u;
    ctx->downcount -= 17;
    // 7F382374: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382378:
    ctx->pc = 0x7F382378u;
    // 7F382378: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F38237C:
    ctx->pc = 0x7F38237Cu;
    // 7F38237C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382380:
    ctx->pc = 0x7F382380u;
    // 7F382380: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F382384:
    ctx->pc = 0x7F382384u;
    // 7F382384: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382388:
    ctx->pc = 0x7F382388u;
    // 7F382388: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F38238C:
    ctx->pc = 0x7F38238Cu;
    // 7F38238C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F382390:
    ctx->downcount -= 3;
    // 7F382390: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F382394:
    // 7F382394: add   r3, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F382398:
    // 7F382398: bl      0x7F042AAC
    {
            ctx->lr = 0x7F38239Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F38239C:
    ctx->downcount -= 4;
    // 7F38239C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F3823A0:
    // 7F3823A0: addi    r31, r31, 44
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(44);

label_7F3823A4:
    // 7F3823A4: cmpwi   r30, 5
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

label_7F3823A8:
    // 7F3823A8: bc    12, 0, 0x7F382390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382390u;
                return;
            }
            goto label_7F382390;
        }
    }

label_7F3823AC:
    ctx->pc = 0x7F3823ACu;
    ctx->downcount -= 16;
    // 7F3823AC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3823B0:
    ctx->pc = 0x7F3823B0u;
    // 7F3823B0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3823B4:
    ctx->pc = 0x7F3823B4u;
    // 7F3823B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3823B8:
    ctx->pc = 0x7F3823B8u;
    // 7F3823B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3823BC:
    ctx->pc = 0x7F3823BCu;
    // 7F3823BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3823C0:
    ctx->pc = 0x7F3823C0u;
    ctx->downcount -= 21;
    // 7F3823C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3823C4:
    ctx->pc = 0x7F3823C4u;
    // 7F3823C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3823C8:
    ctx->pc = 0x7F3823C8u;
    // 7F3823C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3823CC:
    ctx->pc = 0x7F3823CCu;
    // 7F3823CC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F3823D0:
    ctx->pc = 0x7F3823D0u;
    // 7F3823D0: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F3823D4:
    ctx->pc = 0x7F3823D4u;
    // 7F3823D4: cmplwi  r30, 0x000C
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

label_7F3823D8:
    ctx->pc = 0x7F3823D8u;
    // 7F3823D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3823DC:
    ctx->pc = 0x7F3823DCu;
    // 7F3823DC: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3823E0:
    ctx->pc = 0x7F3823E0u;
    // 7F3823E0: stw     r5, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3823E4:
    ctx->pc = 0x7F3823E4u;
    // 7F3823E4: stw     r30, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F3823E8:
    ctx->pc = 0x7F3823E8u;
    // 7F3823E8: bc    12, 1, 0x7F3827F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3827F0;
        }
    }

label_7F3823EC:
    ctx->pc = 0x7F3823ECu;
    ctx->downcount -= 7;
    // 7F3823EC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3823F0:
    ctx->pc = 0x7F3823F0u;
    // 7F3823F0: rlwinm r0, r30, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F3823F4:
    ctx->pc = 0x7F3823F4u;
    // 7F3823F4: addi    r3, r3, 9992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9992);

label_7F3823F8:
    ctx->pc = 0x7F3823F8u;
    // 7F3823F8: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3823FC:
    ctx->pc = 0x7F3823FCu;
    // 7F3823FC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F382400:
    ctx->pc = 0x7F382400u;
    // 7F382400: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F382404:
    ctx->pc = 0x7F382404u;
    ctx->downcount -= 3;
    // 7F382404: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382408:
    ctx->pc = 0x7F382408u;
    // 7F382408: addi    r3, r3, 9552
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9552);

label_7F38240C:
    ctx->pc = 0x7F38240Cu;
    // 7F38240C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382410u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382410:
    ctx->pc = 0x7F382410u;
    ctx->downcount -= 4;
    // 7F382410: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382414:
    ctx->pc = 0x7F382414u;
    // 7F382414: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382418:
    ctx->pc = 0x7F382418u;
    // 7F382418: addi    r3, r4, 9564
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9564);

label_7F38241C:
    ctx->pc = 0x7F38241Cu;
    // 7F38241C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382420u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382420:
    ctx->pc = 0x7F382420u;
    ctx->downcount -= 4;
    // 7F382420: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382424:
    ctx->pc = 0x7F382424u;
    // 7F382424: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382428:
    ctx->pc = 0x7F382428u;
    // 7F382428: addi    r3, r4, 9576
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9576);

label_7F38242C:
    ctx->pc = 0x7F38242Cu;
    // 7F38242C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382430u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382430:
    ctx->pc = 0x7F382430u;
    ctx->downcount -= 4;
    // 7F382430: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382434:
    ctx->pc = 0x7F382434u;
    // 7F382434: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382438:
    ctx->pc = 0x7F382438u;
    // 7F382438: addi    r3, r4, 9588
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9588);

label_7F38243C:
    ctx->pc = 0x7F38243Cu;
    // 7F38243C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382440u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382440:
    ctx->pc = 0x7F382440u;
    ctx->downcount -= 4;
    // 7F382440: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382444:
    ctx->pc = 0x7F382444u;
    // 7F382444: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382448:
    ctx->pc = 0x7F382448u;
    // 7F382448: addi    r3, r4, 9600
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9600);

label_7F38244C:
    ctx->pc = 0x7F38244Cu;
    // 7F38244C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382450u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382450:
    ctx->pc = 0x7F382450u;
    ctx->downcount -= 2;
    // 7F382450: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382454:
    ctx->pc = 0x7F382454u;
    // 7F382454: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F382458:
    ctx->pc = 0x7F382458u;
    ctx->downcount -= 3;
    // 7F382458: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F38245C:
    ctx->pc = 0x7F38245Cu;
    // 7F38245C: addi    r3, r3, 9612
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9612);

label_7F382460:
    ctx->pc = 0x7F382460u;
    // 7F382460: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382464u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382464:
    ctx->pc = 0x7F382464u;
    ctx->downcount -= 4;
    // 7F382464: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382468:
    ctx->pc = 0x7F382468u;
    // 7F382468: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38246C:
    ctx->pc = 0x7F38246Cu;
    // 7F38246C: addi    r3, r4, 9632
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9632);

label_7F382470:
    ctx->pc = 0x7F382470u;
    // 7F382470: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382474u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382474:
    ctx->pc = 0x7F382474u;
    ctx->downcount -= 4;
    // 7F382474: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382478:
    ctx->pc = 0x7F382478u;
    // 7F382478: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38247C:
    ctx->pc = 0x7F38247Cu;
    // 7F38247C: addi    r3, r4, 9612
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9612);

label_7F382480:
    ctx->pc = 0x7F382480u;
    // 7F382480: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382484u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382484:
    ctx->pc = 0x7F382484u;
    ctx->downcount -= 4;
    // 7F382484: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382488:
    ctx->pc = 0x7F382488u;
    // 7F382488: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38248C:
    ctx->pc = 0x7F38248Cu;
    // 7F38248C: addi    r3, r4, 9632
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9632);

label_7F382490:
    ctx->pc = 0x7F382490u;
    // 7F382490: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382494u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382494:
    ctx->pc = 0x7F382494u;
    ctx->downcount -= 4;
    // 7F382494: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382498:
    ctx->pc = 0x7F382498u;
    // 7F382498: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38249C:
    ctx->pc = 0x7F38249Cu;
    // 7F38249C: addi    r3, r4, 9612
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9612);

label_7F3824A0:
    ctx->pc = 0x7F3824A0u;
    // 7F3824A0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3824A4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3824A4:
    ctx->pc = 0x7F3824A4u;
    ctx->downcount -= 2;
    // 7F3824A4: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3824A8:
    ctx->pc = 0x7F3824A8u;
    // 7F3824A8: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F3824AC:
    ctx->pc = 0x7F3824ACu;
    ctx->downcount -= 3;
    // 7F3824AC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3824B0:
    ctx->pc = 0x7F3824B0u;
    // 7F3824B0: addi    r3, r3, 9652
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9652);

label_7F3824B4:
    ctx->pc = 0x7F3824B4u;
    // 7F3824B4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3824B8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3824B8:
    ctx->pc = 0x7F3824B8u;
    ctx->downcount -= 4;
    // 7F3824B8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3824BC:
    ctx->pc = 0x7F3824BCu;
    // 7F3824BC: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3824C0:
    ctx->pc = 0x7F3824C0u;
    // 7F3824C0: addi    r3, r4, 9672
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9672);

label_7F3824C4:
    ctx->pc = 0x7F3824C4u;
    // 7F3824C4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3824C8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3824C8:
    ctx->pc = 0x7F3824C8u;
    ctx->downcount -= 4;
    // 7F3824C8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3824CC:
    ctx->pc = 0x7F3824CCu;
    // 7F3824CC: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3824D0:
    ctx->pc = 0x7F3824D0u;
    // 7F3824D0: addi    r3, r4, 9652
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9652);

label_7F3824D4:
    ctx->pc = 0x7F3824D4u;
    // 7F3824D4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3824D8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3824D8:
    ctx->pc = 0x7F3824D8u;
    ctx->downcount -= 4;
    // 7F3824D8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3824DC:
    ctx->pc = 0x7F3824DCu;
    // 7F3824DC: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3824E0:
    ctx->pc = 0x7F3824E0u;
    // 7F3824E0: addi    r3, r4, 9672
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9672);

label_7F3824E4:
    ctx->pc = 0x7F3824E4u;
    // 7F3824E4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3824E8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3824E8:
    ctx->pc = 0x7F3824E8u;
    ctx->downcount -= 4;
    // 7F3824E8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3824EC:
    ctx->pc = 0x7F3824ECu;
    // 7F3824EC: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3824F0:
    ctx->pc = 0x7F3824F0u;
    // 7F3824F0: addi    r3, r4, 9652
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9652);

label_7F3824F4:
    ctx->pc = 0x7F3824F4u;
    // 7F3824F4: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3824F8u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3824F8:
    ctx->pc = 0x7F3824F8u;
    ctx->downcount -= 2;
    // 7F3824F8: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3824FC:
    ctx->pc = 0x7F3824FCu;
    // 7F3824FC: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F382500:
    ctx->pc = 0x7F382500u;
    ctx->downcount -= 3;
    // 7F382500: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382504:
    ctx->pc = 0x7F382504u;
    // 7F382504: addi    r3, r3, 9692
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9692);

label_7F382508:
    ctx->pc = 0x7F382508u;
    // 7F382508: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38250Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38250C:
    ctx->pc = 0x7F38250Cu;
    ctx->downcount -= 4;
    // 7F38250C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382510:
    ctx->pc = 0x7F382510u;
    // 7F382510: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382514:
    ctx->pc = 0x7F382514u;
    // 7F382514: addi    r3, r4, 9708
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9708);

label_7F382518:
    ctx->pc = 0x7F382518u;
    // 7F382518: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38251Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38251C:
    ctx->pc = 0x7F38251Cu;
    ctx->downcount -= 4;
    // 7F38251C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382520:
    ctx->pc = 0x7F382520u;
    // 7F382520: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382524:
    ctx->pc = 0x7F382524u;
    // 7F382524: addi    r3, r4, 9692
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9692);

label_7F382528:
    ctx->pc = 0x7F382528u;
    // 7F382528: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38252Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38252C:
    ctx->pc = 0x7F38252Cu;
    ctx->downcount -= 4;
    // 7F38252C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382530:
    ctx->pc = 0x7F382530u;
    // 7F382530: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382534:
    ctx->pc = 0x7F382534u;
    // 7F382534: addi    r3, r4, 9708
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9708);

label_7F382538:
    ctx->pc = 0x7F382538u;
    // 7F382538: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38253Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38253C:
    ctx->pc = 0x7F38253Cu;
    ctx->downcount -= 4;
    // 7F38253C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382540:
    ctx->pc = 0x7F382540u;
    // 7F382540: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382544:
    ctx->pc = 0x7F382544u;
    // 7F382544: addi    r3, r4, 9692
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9692);

label_7F382548:
    ctx->pc = 0x7F382548u;
    // 7F382548: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38254Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38254C:
    ctx->pc = 0x7F38254Cu;
    ctx->downcount -= 2;
    // 7F38254C: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382550:
    ctx->pc = 0x7F382550u;
    // 7F382550: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F382554:
    ctx->pc = 0x7F382554u;
    ctx->downcount -= 3;
    // 7F382554: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382558:
    ctx->pc = 0x7F382558u;
    // 7F382558: addi    r3, r3, 9724
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9724);

label_7F38255C:
    ctx->pc = 0x7F38255Cu;
    // 7F38255C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382560u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382560:
    ctx->pc = 0x7F382560u;
    ctx->downcount -= 4;
    // 7F382560: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382564:
    ctx->pc = 0x7F382564u;
    // 7F382564: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382568:
    ctx->pc = 0x7F382568u;
    // 7F382568: addi    r3, r4, 9740
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9740);

label_7F38256C:
    ctx->pc = 0x7F38256Cu;
    // 7F38256C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382570u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382570:
    ctx->pc = 0x7F382570u;
    ctx->downcount -= 4;
    // 7F382570: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382574:
    ctx->pc = 0x7F382574u;
    // 7F382574: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382578:
    ctx->pc = 0x7F382578u;
    // 7F382578: addi    r3, r4, 9724
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9724);

label_7F38257C:
    ctx->pc = 0x7F38257Cu;
    // 7F38257C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382580u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382580:
    ctx->pc = 0x7F382580u;
    ctx->downcount -= 4;
    // 7F382580: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382584:
    ctx->pc = 0x7F382584u;
    // 7F382584: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382588:
    ctx->pc = 0x7F382588u;
    // 7F382588: addi    r3, r4, 9740
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9740);

label_7F38258C:
    ctx->pc = 0x7F38258Cu;
    // 7F38258C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382590u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382590:
    ctx->pc = 0x7F382590u;
    ctx->downcount -= 4;
    // 7F382590: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382594:
    ctx->pc = 0x7F382594u;
    // 7F382594: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382598:
    ctx->pc = 0x7F382598u;
    // 7F382598: addi    r3, r4, 9724
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9724);

label_7F38259C:
    ctx->pc = 0x7F38259Cu;
    // 7F38259C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3825A0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3825A0:
    ctx->pc = 0x7F3825A0u;
    ctx->downcount -= 2;
    // 7F3825A0: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3825A4:
    ctx->pc = 0x7F3825A4u;
    // 7F3825A4: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F3825A8:
    ctx->pc = 0x7F3825A8u;
    ctx->downcount -= 3;
    // 7F3825A8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3825AC:
    ctx->pc = 0x7F3825ACu;
    // 7F3825AC: addi    r3, r3, 9756
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9756);

label_7F3825B0:
    ctx->pc = 0x7F3825B0u;
    // 7F3825B0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3825B4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3825B4:
    ctx->pc = 0x7F3825B4u;
    ctx->downcount -= 4;
    // 7F3825B4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3825B8:
    ctx->pc = 0x7F3825B8u;
    // 7F3825B8: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3825BC:
    ctx->pc = 0x7F3825BCu;
    // 7F3825BC: addi    r3, r4, 9776
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9776);

label_7F3825C0:
    ctx->pc = 0x7F3825C0u;
    // 7F3825C0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3825C4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3825C4:
    ctx->pc = 0x7F3825C4u;
    ctx->downcount -= 4;
    // 7F3825C4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3825C8:
    ctx->pc = 0x7F3825C8u;
    // 7F3825C8: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3825CC:
    ctx->pc = 0x7F3825CCu;
    // 7F3825CC: addi    r3, r4, 9756
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9756);

label_7F3825D0:
    ctx->pc = 0x7F3825D0u;
    // 7F3825D0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3825D4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3825D4:
    ctx->pc = 0x7F3825D4u;
    ctx->downcount -= 4;
    // 7F3825D4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3825D8:
    ctx->pc = 0x7F3825D8u;
    // 7F3825D8: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3825DC:
    ctx->pc = 0x7F3825DCu;
    // 7F3825DC: addi    r3, r4, 9776
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9776);

label_7F3825E0:
    ctx->pc = 0x7F3825E0u;
    // 7F3825E0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3825E4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3825E4:
    ctx->pc = 0x7F3825E4u;
    ctx->downcount -= 4;
    // 7F3825E4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3825E8:
    ctx->pc = 0x7F3825E8u;
    // 7F3825E8: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3825EC:
    ctx->pc = 0x7F3825ECu;
    // 7F3825EC: addi    r3, r4, 9756
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9756);

label_7F3825F0:
    ctx->pc = 0x7F3825F0u;
    // 7F3825F0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3825F4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3825F4:
    ctx->pc = 0x7F3825F4u;
    ctx->downcount -= 2;
    // 7F3825F4: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3825F8:
    ctx->pc = 0x7F3825F8u;
    // 7F3825F8: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F3825FC:
    ctx->pc = 0x7F3825FCu;
    ctx->downcount -= 3;
    // 7F3825FC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382600:
    ctx->pc = 0x7F382600u;
    // 7F382600: addi    r3, r3, 9796
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9796);

label_7F382604:
    ctx->pc = 0x7F382604u;
    // 7F382604: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382608u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382608:
    ctx->pc = 0x7F382608u;
    ctx->downcount -= 4;
    // 7F382608: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38260C:
    ctx->pc = 0x7F38260Cu;
    // 7F38260C: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382610:
    ctx->pc = 0x7F382610u;
    // 7F382610: addi    r3, r4, 9808
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9808);

label_7F382614:
    ctx->pc = 0x7F382614u;
    // 7F382614: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382618u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382618:
    ctx->pc = 0x7F382618u;
    ctx->downcount -= 4;
    // 7F382618: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38261C:
    ctx->pc = 0x7F38261Cu;
    // 7F38261C: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382620:
    ctx->pc = 0x7F382620u;
    // 7F382620: addi    r3, r4, 9820
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9820);

label_7F382624:
    ctx->pc = 0x7F382624u;
    // 7F382624: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382628u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382628:
    ctx->pc = 0x7F382628u;
    ctx->downcount -= 4;
    // 7F382628: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38262C:
    ctx->pc = 0x7F38262Cu;
    // 7F38262C: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382630:
    ctx->pc = 0x7F382630u;
    // 7F382630: addi    r3, r4, 9832
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9832);

label_7F382634:
    ctx->pc = 0x7F382634u;
    // 7F382634: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382638u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382638:
    ctx->pc = 0x7F382638u;
    ctx->downcount -= 4;
    // 7F382638: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38263C:
    ctx->pc = 0x7F38263Cu;
    // 7F38263C: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382640:
    ctx->pc = 0x7F382640u;
    // 7F382640: addi    r3, r4, 9844
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9844);

label_7F382644:
    ctx->pc = 0x7F382644u;
    // 7F382644: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382648u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382648:
    ctx->pc = 0x7F382648u;
    ctx->downcount -= 2;
    // 7F382648: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38264C:
    ctx->pc = 0x7F38264Cu;
    // 7F38264C: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F382650:
    ctx->pc = 0x7F382650u;
    ctx->downcount -= 3;
    // 7F382650: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382654:
    ctx->pc = 0x7F382654u;
    // 7F382654: addi    r3, r3, 9856
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9856);

label_7F382658:
    ctx->pc = 0x7F382658u;
    // 7F382658: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38265Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38265C:
    ctx->pc = 0x7F38265Cu;
    ctx->downcount -= 4;
    // 7F38265C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382660:
    ctx->pc = 0x7F382660u;
    // 7F382660: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382664:
    ctx->pc = 0x7F382664u;
    // 7F382664: addi    r3, r4, 9872
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9872);

label_7F382668:
    ctx->pc = 0x7F382668u;
    // 7F382668: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38266Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38266C:
    ctx->pc = 0x7F38266Cu;
    ctx->downcount -= 4;
    // 7F38266C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382670:
    ctx->pc = 0x7F382670u;
    // 7F382670: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382674:
    ctx->pc = 0x7F382674u;
    // 7F382674: addi    r3, r4, 9856
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9856);

label_7F382678:
    ctx->pc = 0x7F382678u;
    // 7F382678: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38267Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38267C:
    ctx->pc = 0x7F38267Cu;
    ctx->downcount -= 4;
    // 7F38267C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382680:
    ctx->pc = 0x7F382680u;
    // 7F382680: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382684:
    ctx->pc = 0x7F382684u;
    // 7F382684: addi    r3, r4, 9872
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9872);

label_7F382688:
    ctx->pc = 0x7F382688u;
    // 7F382688: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38268Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38268C:
    ctx->pc = 0x7F38268Cu;
    ctx->downcount -= 4;
    // 7F38268C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382690:
    ctx->pc = 0x7F382690u;
    // 7F382690: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382694:
    ctx->pc = 0x7F382694u;
    // 7F382694: addi    r3, r4, 9856
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9856);

label_7F382698:
    ctx->pc = 0x7F382698u;
    // 7F382698: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F38269Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F38269C:
    ctx->pc = 0x7F38269Cu;
    ctx->downcount -= 2;
    // 7F38269C: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3826A0:
    ctx->pc = 0x7F3826A0u;
    // 7F3826A0: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F3826A4:
    ctx->pc = 0x7F3826A4u;
    ctx->downcount -= 3;
    // 7F3826A4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3826A8:
    ctx->pc = 0x7F3826A8u;
    // 7F3826A8: addi    r3, r3, 9888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9888);

label_7F3826AC:
    ctx->pc = 0x7F3826ACu;
    // 7F3826AC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3826B0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3826B0:
    ctx->pc = 0x7F3826B0u;
    ctx->downcount -= 4;
    // 7F3826B0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3826B4:
    ctx->pc = 0x7F3826B4u;
    // 7F3826B4: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3826B8:
    ctx->pc = 0x7F3826B8u;
    // 7F3826B8: addi    r3, r4, 9908
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9908);

label_7F3826BC:
    ctx->pc = 0x7F3826BCu;
    // 7F3826BC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3826C0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3826C0:
    ctx->pc = 0x7F3826C0u;
    ctx->downcount -= 4;
    // 7F3826C0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3826C4:
    ctx->pc = 0x7F3826C4u;
    // 7F3826C4: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3826C8:
    ctx->pc = 0x7F3826C8u;
    // 7F3826C8: addi    r3, r4, 9888
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9888);

label_7F3826CC:
    ctx->pc = 0x7F3826CCu;
    // 7F3826CC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3826D0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3826D0:
    ctx->pc = 0x7F3826D0u;
    ctx->downcount -= 4;
    // 7F3826D0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3826D4:
    ctx->pc = 0x7F3826D4u;
    // 7F3826D4: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3826D8:
    ctx->pc = 0x7F3826D8u;
    // 7F3826D8: addi    r3, r4, 9908
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9908);

label_7F3826DC:
    ctx->pc = 0x7F3826DCu;
    // 7F3826DC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3826E0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3826E0:
    ctx->pc = 0x7F3826E0u;
    ctx->downcount -= 4;
    // 7F3826E0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3826E4:
    ctx->pc = 0x7F3826E4u;
    // 7F3826E4: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3826E8:
    ctx->pc = 0x7F3826E8u;
    // 7F3826E8: addi    r3, r4, 9888
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9888);

label_7F3826EC:
    ctx->pc = 0x7F3826ECu;
    // 7F3826EC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3826F0u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3826F0:
    ctx->pc = 0x7F3826F0u;
    ctx->downcount -= 2;
    // 7F3826F0: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3826F4:
    ctx->pc = 0x7F3826F4u;
    // 7F3826F4: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F3826F8:
    ctx->pc = 0x7F3826F8u;
    ctx->downcount -= 3;
    // 7F3826F8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3826FC:
    ctx->pc = 0x7F3826FCu;
    // 7F3826FC: addi    r3, r3, 9928
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9928);

label_7F382700:
    ctx->pc = 0x7F382700u;
    // 7F382700: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382704u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382704:
    ctx->pc = 0x7F382704u;
    ctx->downcount -= 4;
    // 7F382704: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382708:
    ctx->pc = 0x7F382708u;
    // 7F382708: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38270C:
    ctx->pc = 0x7F38270Cu;
    // 7F38270C: addi    r3, r4, 9944
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9944);

label_7F382710:
    ctx->pc = 0x7F382710u;
    // 7F382710: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382714u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382714:
    ctx->pc = 0x7F382714u;
    ctx->downcount -= 4;
    // 7F382714: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382718:
    ctx->pc = 0x7F382718u;
    // 7F382718: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38271C:
    ctx->pc = 0x7F38271Cu;
    // 7F38271C: addi    r3, r4, 9928
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9928);

label_7F382720:
    ctx->pc = 0x7F382720u;
    // 7F382720: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382724u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382724:
    ctx->pc = 0x7F382724u;
    ctx->downcount -= 4;
    // 7F382724: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382728:
    ctx->pc = 0x7F382728u;
    // 7F382728: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38272C:
    ctx->pc = 0x7F38272Cu;
    // 7F38272C: addi    r3, r4, 9944
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9944);

label_7F382730:
    ctx->pc = 0x7F382730u;
    // 7F382730: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382734u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382734:
    ctx->pc = 0x7F382734u;
    ctx->downcount -= 4;
    // 7F382734: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382738:
    ctx->pc = 0x7F382738u;
    // 7F382738: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38273C:
    ctx->pc = 0x7F38273Cu;
    // 7F38273C: addi    r3, r4, 9928
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9928);

label_7F382740:
    ctx->pc = 0x7F382740u;
    // 7F382740: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382744u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382744:
    ctx->pc = 0x7F382744u;
    ctx->downcount -= 2;
    // 7F382744: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382748:
    ctx->pc = 0x7F382748u;
    // 7F382748: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F38274C:
    ctx->pc = 0x7F38274Cu;
    ctx->downcount -= 3;
    // 7F38274C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382750:
    ctx->pc = 0x7F382750u;
    // 7F382750: addi    r3, r3, 9960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9960);

label_7F382754:
    ctx->pc = 0x7F382754u;
    // 7F382754: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382758u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382758:
    ctx->pc = 0x7F382758u;
    ctx->downcount -= 4;
    // 7F382758: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38275C:
    ctx->pc = 0x7F38275Cu;
    // 7F38275C: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382760:
    ctx->pc = 0x7F382760u;
    // 7F382760: addi    r3, r4, 9976
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9976);

label_7F382764:
    ctx->pc = 0x7F382764u;
    // 7F382764: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382768u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382768:
    ctx->pc = 0x7F382768u;
    ctx->downcount -= 4;
    // 7F382768: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38276C:
    ctx->pc = 0x7F38276Cu;
    // 7F38276C: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382770:
    ctx->pc = 0x7F382770u;
    // 7F382770: addi    r3, r4, 9960
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9960);

label_7F382774:
    ctx->pc = 0x7F382774u;
    // 7F382774: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382778u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382778:
    ctx->pc = 0x7F382778u;
    ctx->downcount -= 4;
    // 7F382778: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38277C:
    ctx->pc = 0x7F38277Cu;
    // 7F38277C: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382780:
    ctx->pc = 0x7F382780u;
    // 7F382780: addi    r3, r4, 9976
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9976);

label_7F382784:
    ctx->pc = 0x7F382784u;
    // 7F382784: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382788u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382788:
    ctx->pc = 0x7F382788u;
    ctx->downcount -= 4;
    // 7F382788: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F38278C:
    ctx->pc = 0x7F38278Cu;
    // 7F38278C: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382790:
    ctx->pc = 0x7F382790u;
    // 7F382790: addi    r3, r4, 9960
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9960);

label_7F382794:
    ctx->pc = 0x7F382794u;
    // 7F382794: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382798u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382798:
    ctx->pc = 0x7F382798u;
    ctx->downcount -= 2;
    // 7F382798: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38279C:
    ctx->pc = 0x7F38279Cu;
    // 7F38279C: b       0x7F3827F0
    {
            goto label_7F3827F0;
    }

label_7F3827A0:
    ctx->pc = 0x7F3827A0u;
    ctx->downcount -= 3;
    // 7F3827A0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F3827A4:
    ctx->pc = 0x7F3827A4u;
    // 7F3827A4: addi    r3, r3, 9856
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9856);

label_7F3827A8:
    ctx->pc = 0x7F3827A8u;
    // 7F3827A8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3827ACu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3827AC:
    ctx->pc = 0x7F3827ACu;
    ctx->downcount -= 4;
    // 7F3827AC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3827B0:
    ctx->pc = 0x7F3827B0u;
    // 7F3827B0: stw     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3827B4:
    ctx->pc = 0x7F3827B4u;
    // 7F3827B4: addi    r3, r4, 9872
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9872);

label_7F3827B8:
    ctx->pc = 0x7F3827B8u;
    // 7F3827B8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3827BCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3827BC:
    ctx->pc = 0x7F3827BCu;
    ctx->downcount -= 4;
    // 7F3827BC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3827C0:
    ctx->pc = 0x7F3827C0u;
    // 7F3827C0: stw     r3, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3827C4:
    ctx->pc = 0x7F3827C4u;
    // 7F3827C4: addi    r3, r4, 9856
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9856);

label_7F3827C8:
    ctx->pc = 0x7F3827C8u;
    // 7F3827C8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3827CCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3827CC:
    ctx->pc = 0x7F3827CCu;
    ctx->downcount -= 4;
    // 7F3827CC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3827D0:
    ctx->pc = 0x7F3827D0u;
    // 7F3827D0: stw     r3, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3827D4:
    ctx->pc = 0x7F3827D4u;
    // 7F3827D4: addi    r3, r4, 9872
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9872);

label_7F3827D8:
    ctx->pc = 0x7F3827D8u;
    // 7F3827D8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3827DCu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3827DC:
    ctx->pc = 0x7F3827DCu;
    ctx->downcount -= 4;
    // 7F3827DC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F3827E0:
    ctx->pc = 0x7F3827E0u;
    // 7F3827E0: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3827E4:
    ctx->pc = 0x7F3827E4u;
    // 7F3827E4: addi    r3, r4, 9856
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(9856);

label_7F3827E8:
    ctx->pc = 0x7F3827E8u;
    // 7F3827E8: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F3827ECu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F3827EC:
    ctx->pc = 0x7F3827ECu;
    ctx->downcount -= 1;
    // 7F3827EC: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3827F0:
    ctx->pc = 0x7F3827F0u;
    ctx->downcount -= 7;
    // 7F3827F0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F3827F4:
    ctx->pc = 0x7F3827F4u;
    // 7F3827F4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F3827F8:
    ctx->pc = 0x7F3827F8u;
    // 7F3827F8: stw     r27, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F3827FC:
    ctx->pc = 0x7F3827FCu;
    // 7F3827FC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F382800:
    ctx->pc = 0x7F382800u;
    // 7F382800: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F382804:
    ctx->pc = 0x7F382804u;
    // 7F382804: stw     r27, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F382808:
    ctx->pc = 0x7F382808u;
    // 7F382808: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38280C:
    ctx->downcount -= 6;
    // 7F38280C: addi    r0, r28, 272
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(272);

label_7F382810:
    // 7F382810: add   r26, r31, r27
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_7F382814:
    ctx->pc = 0x7F382814u;
    // 7F382814: lwzx    r4, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382818:
    // 7F382818: addi    r3, r26, 52
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(52);

label_7F38281C:
    // 7F38281C: li      r5, 274
    ctx->gpr[5] = (u32)(s32)(274);

label_7F382820:
    // 7F382820: bl      0x7F04272C
    {
            ctx->lr = 0x7F382824u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F382824:
    ctx->pc = 0x7F382824u;
    ctx->downcount -= 3;
    // 7F382824: lwz     r0, 52(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382828:
    // 7F382828: cmplwi  r0, 0x0000
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

label_7F38282C:
    // 7F38282C: bc    4, 2, 0x7F382838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382838;
        }
    }

label_7F382830:
    ctx->downcount -= 2;
    // 7F382830: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F382834:
    // 7F382834: b       0x7F3828E0
    {
            goto label_7F3828E0;
    }

label_7F382838:
    ctx->downcount -= 2;
    // 7F382838: cmpwi   r30, 9
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F38283C:
    // 7F38283C: bc    12, 2, 0x7F382848
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382848;
        }
    }

label_7F382840:
    ctx->downcount -= 2;
    // 7F382840: cmpwi   r30, 10
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F382844:
    // 7F382844: bc    4, 2, 0x7F38285C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38285C;
        }
    }

label_7F382848:
    ctx->pc = 0x7F382848u;
    ctx->downcount -= 4;
    // 7F382848: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38284C:
    ctx->pc = 0x7F38284Cu;
    // 7F38284C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382850:
    // 7F382850: addi    r3, r3, 5628
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(5628);

label_7F382854:
    // 7F382854: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F382858u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F382858:
    ctx->downcount -= 1;
    // 7F382858: b       0x7F38286C
    {
            goto label_7F38286C;
    }

label_7F38285C:
    ctx->pc = 0x7F38285Cu;
    ctx->downcount -= 4;
    // 7F38285C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382860:
    ctx->pc = 0x7F382860u;
    // 7F382860: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382864:
    // 7F382864: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F382868:
    // 7F382868: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F38286Cu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F38286C:
    ctx->pc = 0x7F38286Cu;
    ctx->downcount -= 2;
    // 7F38286C: lwz     r3, 52(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382870:
    // 7F382870: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F382874u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F382874:
    ctx->pc = 0x7F382874u;
    ctx->downcount -= 5;
    // 7F382874: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382878:
    ctx->pc = 0x7F382878u;
    // 7F382878: lwz     r3, 52(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38287C:
    ctx->pc = 0x7F38287Cu;
    // 7F38287C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382880:
    ctx->pc = 0x7F382880u;
    // 7F382880: lwz     r4, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382884:
    // 7F382884: bl      0x7F3BC518
    {
            ctx->lr = 0x7F382888u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F382888:
    ctx->pc = 0x7F382888u;
    ctx->downcount -= 6;
    // 7F382888: lwz     r3, 52(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38288C:
    // 7F38288C: cmpwi   r30, 11
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F382890:
    ctx->pc = 0x7F382890u;
    // 7F382890: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382894:
    // 7F382894: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F382898:
    ctx->pc = 0x7F382898u;
    // 7F382898: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38289C:
    // 7F38289C: bc    4, 2, 0x7F3828B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3828B8;
        }
    }

label_7F3828A0:
    ctx->pc = 0x7F3828A0u;
    ctx->downcount -= 3;
    // 7F3828A0: lwz     r3, 52(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3828A4:
    // 7F3828A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3828A8:
    // 7F3828A8: bl      0x7F2D02B8
    {
            ctx->lr = 0x7F3828ACu;
            ctx->pc = 0x7F2D02B8u;
            return;
    }

label_7F3828AC:
    ctx->downcount -= 3;
    // 7F3828AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3828B0:
    // 7F3828B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3828B4:
    // 7F3828B4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F3828B8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F3828B8:
    ctx->downcount -= 5;
    // 7F3828B8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F3828BC:
    // 7F3828BC: addi    r27, r27, 44
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(44);

label_7F3828C0:
    // 7F3828C0: cmpwi   r29, 5
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3828C4:
    // 7F3828C4: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F3828C8:
    // 7F3828C8: bc    12, 0, 0x7F38280C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F38280Cu;
                return;
            }
            goto label_7F38280C;
        }
    }

label_7F3828CC:
    ctx->pc = 0x7F3828CCu;
    ctx->downcount -= 5;
    // 7F3828CC: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3828D0:
    ctx->pc = 0x7F3828D0u;
    // 7F3828D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3828D4:
    ctx->pc = 0x7F3828D4u;
    // 7F3828D4: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3828D8:
    ctx->pc = 0x7F3828D8u;
    // 7F3828D8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F3828DC:
    ctx->pc = 0x7F3828DCu;
    // 7F3828DC: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3828E0:
    ctx->pc = 0x7F3828E0u;
    ctx->downcount -= 16;
    // 7F3828E0: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3828E4:
    ctx->pc = 0x7F3828E4u;
    // 7F3828E4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3828E8:
    ctx->pc = 0x7F3828E8u;
    // 7F3828E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3828EC:
    ctx->pc = 0x7F3828ECu;
    // 7F3828EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3828F0:
    ctx->pc = 0x7F3828F0u;
    // 7F3828F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3828F4:
    ctx->pc = 0x7F3828F4u;
    ctx->downcount -= 22;
    // 7F3828F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3828F8:
    ctx->pc = 0x7F3828F8u;
    // 7F3828F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3828FC:
    ctx->pc = 0x7F3828FCu;
    // 7F3828FC: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_7F382900:
    ctx->pc = 0x7F382900u;
    // 7F382900: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382904:
    ctx->pc = 0x7F382904u;
    // 7F382904: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F382908:
    ctx->pc = 0x7F382908u;
    // 7F382908: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F38290C:
    ctx->pc = 0x7F38290Cu;
    // 7F38290C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F382910:
    ctx->pc = 0x7F382910u;
    // 7F382910: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F382914:
    ctx->pc = 0x7F382914u;
    // 7F382914: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F382918:
    ctx->pc = 0x7F382918u;
    // 7F382918: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F38291C:
    ctx->pc = 0x7F38291Cu;
    // 7F38291C: li      r5, 312
    ctx->gpr[5] = (u32)(s32)(312);

label_7F382920:
    ctx->pc = 0x7F382920u;
    // 7F382920: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F382924u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F382924:
    ctx->pc = 0x7F382924u;
    ctx->downcount -= 2;
    // 7F382924: or.   r31, r3, r3
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

label_7F382928:
    ctx->pc = 0x7F382928u;
    // 7F382928: bc    12, 2, 0x7F382994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382994;
        }
    }

label_7F38292C:
    ctx->pc = 0x7F38292Cu;
    ctx->downcount -= 5;
    // 7F38292C: lis     r4, 32568
    ctx->gpr[4] = ((u32)(s32)(32568) << 16);

label_7F382930:
    ctx->pc = 0x7F382930u;
    // 7F382930: lis     r5, 32568
    ctx->gpr[5] = ((u32)(s32)(32568) << 16);

label_7F382934:
    ctx->pc = 0x7F382934u;
    // 7F382934: addi    r4, r4, 8636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8636);

label_7F382938:
    ctx->pc = 0x7F382938u;
    // 7F382938: addi    r5, r5, 9076
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9076);

label_7F38293C:
    ctx->pc = 0x7F38293Cu;
    // 7F38293C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F382940u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F382940:
    ctx->pc = 0x7F382940u;
    ctx->downcount -= 15;
    // 7F382940: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382944:
    ctx->pc = 0x7F382944u;
    // 7F382944: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F382948:
    ctx->pc = 0x7F382948u;
    // 7F382948: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F38294C:
    ctx->pc = 0x7F38294Cu;
    // 7F38294C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382950:
    ctx->pc = 0x7F382950u;
    // 7F382950: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F382954:
    ctx->pc = 0x7F382954u;
    // 7F382954: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F382958:
    ctx->pc = 0x7F382958u;
    // 7F382958: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F38295C:
    ctx->pc = 0x7F38295Cu;
    // 7F38295C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F382960:
    ctx->pc = 0x7F382960u;
    // 7F382960: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F382964:
    ctx->pc = 0x7F382964u;
    // 7F382964: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F382968:
    ctx->pc = 0x7F382968u;
    // 7F382968: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F38296C:
    ctx->pc = 0x7F38296Cu;
    // 7F38296C: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F382970:
    ctx->pc = 0x7F382970u;
    // 7F382970: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F382974:
    ctx->pc = 0x7F382974u;
    // 7F382974: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382978:
    ctx->pc = 0x7F382978u;
    // 7F382978: bl      0x7F3823C0
    {
            ctx->lr = 0x7F38297Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3823C0u;
                return;
            }
            goto label_7F3823C0;
    }

label_7F38297C:
    ctx->pc = 0x7F38297Cu;
    ctx->downcount -= 2;
    // 7F38297C: cmpwi   r3, 0
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

label_7F382980:
    ctx->pc = 0x7F382980u;
    // 7F382980: bc    4, 0, 0x7F382994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382994;
        }
    }

label_7F382984:
    ctx->pc = 0x7F382984u;
    ctx->downcount -= 2;
    // 7F382984: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382988:
    ctx->pc = 0x7F382988u;
    // 7F382988: bl      0x7F3C8210
    {
            ctx->lr = 0x7F38298Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F38298C:
    ctx->pc = 0x7F38298Cu;
    ctx->downcount -= 2;
    // 7F38298C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F382990:
    ctx->pc = 0x7F382990u;
    // 7F382990: b       0x7F382998
    {
            goto label_7F382998;
    }

label_7F382994:
    ctx->pc = 0x7F382994u;
    ctx->downcount -= 1;
    // 7F382994: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382998:
    ctx->pc = 0x7F382998u;
    ctx->downcount -= 16;
    // 7F382998: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F38299C:
    ctx->pc = 0x7F38299Cu;
    // 7F38299C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3829A0:
    ctx->pc = 0x7F3829A0u;
    // 7F3829A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3829A4:
    ctx->pc = 0x7F3829A4u;
    // 7F3829A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F3829A8:
    ctx->pc = 0x7F3829A8u;
    // 7F3829A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3829AC:
    ctx->pc = 0x7F3829ACu;
    ctx->downcount -= 8;
    // 7F3829AC: rlwinm r6, r6, 24, 0, 7
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 24u) & 0xFF000000u;
    }

label_7F3829B0:
    ctx->pc = 0x7F3829B0u;
    // 7F3829B0: rlwinm r0, r5, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 16u) & 0xFFFF0000u;
    }

label_7F3829B4:
    ctx->pc = 0x7F3829B4u;
    // 7F3829B4: rlwinm r4, r4, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_7F3829B8:
    ctx->pc = 0x7F3829B8u;
    // 7F3829B8: or   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] | ctx->gpr[0];
    }

label_7F3829BC:
    ctx->pc = 0x7F3829BCu;
    // 7F3829BC: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F3829C0:
    ctx->pc = 0x7F3829C0u;
    // 7F3829C0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F3829C4:
    ctx->pc = 0x7F3829C4u;
    // 7F3829C4: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3829C8:
    ctx->pc = 0x7F3829C8u;
    // 7F3829C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3829CC:
    ctx->pc = 0x7F3829CCu;
    ctx->downcount -= 7;
    // 7F3829CC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3829D0:
    ctx->pc = 0x7F3829D0u;
    // 7F3829D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3829D4:
    ctx->pc = 0x7F3829D4u;
    // 7F3829D4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3829D8:
    ctx->pc = 0x7F3829D8u;
    // 7F3829D8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3829DC:
    ctx->pc = 0x7F3829DCu;
    // 7F3829DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3829E0:
    ctx->pc = 0x7F3829E0u;
    // 7F3829E0: lwz     r3, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3829E4:
    ctx->pc = 0x7F3829E4u;
    // 7F3829E4: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F3829E8u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F3829E8:
    ctx->pc = 0x7F3829E8u;
    ctx->downcount -= 4;
    // 7F3829E8: addi    r3, r31, 76
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(76);

label_7F3829EC:
    ctx->pc = 0x7F3829ECu;
    // 7F3829EC: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3829F0:
    ctx->pc = 0x7F3829F0u;
    // 7F3829F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3829F4:
    ctx->pc = 0x7F3829F4u;
    // 7F3829F4: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F3829F8u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F3829F8:
    ctx->pc = 0x7F3829F8u;
    ctx->downcount -= 8;
    // 7F3829F8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F3829FC:
    ctx->pc = 0x7F3829FCu;
    // 7F3829FC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F382A00:
    ctx->pc = 0x7F382A00u;
    // 7F382A00: lwz     r0, 18308(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382A04:
    ctx->pc = 0x7F382A04u;
    // 7F382A04: stw     r0, 18312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382A08:
    ctx->pc = 0x7F382A08u;
    // 7F382A08: lwz     r3, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382A0C:
    ctx->pc = 0x7F382A0Cu;
    // 7F382A0C: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382A10:
    ctx->pc = 0x7F382A10u;
    // 7F382A10: cmpwi   r0, 1
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

label_7F382A14:
    ctx->pc = 0x7F382A14u;
    // 7F382A14: bc    4, 0, 0x7F382A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382A4C;
        }
    }

label_7F382A18:
    ctx->pc = 0x7F382A18u;
    ctx->downcount -= 3;
    // 7F382A18: lwz     r3, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382A1C:
    ctx->pc = 0x7F382A1Cu;
    // 7F382A1C: cmplwi  r3, 0x0000
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

label_7F382A20:
    ctx->pc = 0x7F382A20u;
    // 7F382A20: bc    12, 2, 0x7F382A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382A30;
        }
    }

label_7F382A24:
    ctx->pc = 0x7F382A24u;
    ctx->downcount -= 1;
    // 7F382A24: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F382A28u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F382A28:
    ctx->pc = 0x7F382A28u;
    ctx->downcount -= 2;
    // 7F382A28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F382A2C:
    ctx->pc = 0x7F382A2Cu;
    // 7F382A2C: stw     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382A30:
    ctx->pc = 0x7F382A30u;
    ctx->downcount -= 3;
    // 7F382A30: lwz     r3, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382A34:
    ctx->pc = 0x7F382A34u;
    // 7F382A34: cmplwi  r3, 0x0000
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

label_7F382A38:
    ctx->pc = 0x7F382A38u;
    // 7F382A38: bc    12, 2, 0x7F382AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382AE8;
        }
    }

label_7F382A3C:
    ctx->pc = 0x7F382A3Cu;
    ctx->downcount -= 1;
    // 7F382A3C: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F382A40u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F382A40:
    ctx->pc = 0x7F382A40u;
    ctx->downcount -= 3;
    // 7F382A40: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F382A44:
    ctx->pc = 0x7F382A44u;
    // 7F382A44: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382A48:
    ctx->pc = 0x7F382A48u;
    // 7F382A48: b       0x7F382AE8
    {
            goto label_7F382AE8;
    }

label_7F382A4C:
    ctx->pc = 0x7F382A4Cu;
    ctx->downcount -= 3;
    // 7F382A4C: lwz     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382A50:
    ctx->pc = 0x7F382A50u;
    // 7F382A50: cmplwi  r0, 0x0000
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

label_7F382A54:
    ctx->pc = 0x7F382A54u;
    // 7F382A54: bc    4, 2, 0x7F382A90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382A90;
        }
    }

label_7F382A58:
    ctx->pc = 0x7F382A58u;
    ctx->downcount -= 8;
    // 7F382A58: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382A5C:
    ctx->pc = 0x7F382A5Cu;
    // 7F382A5C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F382A60:
    ctx->pc = 0x7F382A60u;
    // 7F382A60: addi    r5, r3, -22248
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22248);

label_7F382A64:
    ctx->pc = 0x7F382A64u;
    // 7F382A64: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F382A68:
    ctx->pc = 0x7F382A68u;
    // 7F382A68: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382A6C:
    ctx->pc = 0x7F382A6Cu;
    // 7F382A6C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F382A70:
    ctx->pc = 0x7F382A70u;
    // 7F382A70: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F382A70u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F382A74:
    ctx->pc = 0x7F382A74u;
    // 7F382A74: bl      0x7F1DEFA4
    {
            ctx->lr = 0x7F382A78u;
            ctx->pc = 0x7F1DEFA4u;
            return;
    }

label_7F382A78:
    ctx->pc = 0x7F382A78u;
    ctx->downcount -= 4;
    // 7F382A78: stw     r3, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382A7C:
    ctx->pc = 0x7F382A7Cu;
    // 7F382A7C: lwz     r4, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382A80:
    ctx->pc = 0x7F382A80u;
    // 7F382A80: cmplwi  r4, 0x0000
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

label_7F382A84:
    ctx->pc = 0x7F382A84u;
    // 7F382A84: bc    12, 2, 0x7F382A90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382A90;
        }
    }

label_7F382A88:
    ctx->pc = 0x7F382A88u;
    ctx->downcount -= 2;
    // 7F382A88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382A8C:
    ctx->pc = 0x7F382A8Cu;
    // 7F382A8C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F382A90u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F382A90:
    ctx->pc = 0x7F382A90u;
    ctx->downcount -= 3;
    // 7F382A90: lwz     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382A94:
    ctx->pc = 0x7F382A94u;
    // 7F382A94: cmplwi  r0, 0x0000
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

label_7F382A98:
    ctx->pc = 0x7F382A98u;
    // 7F382A98: bc    4, 2, 0x7F382AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382AE8;
        }
    }

label_7F382A9C:
    ctx->pc = 0x7F382A9Cu;
    ctx->downcount -= 13;
    // 7F382A9C: lis     r4, -32767
    ctx->gpr[4] = ((u32)(s32)(-32767) << 16);

label_7F382AA0:
    ctx->pc = 0x7F382AA0u;
    // 7F382AA0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F382AA4:
    ctx->pc = 0x7F382AA4u;
    // 7F382AA4: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F382AA8:
    ctx->pc = 0x7F382AA8u;
    // 7F382AA8: lfs     f1, -22244(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F382AA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F382AAC:
    ctx->pc = 0x7F382AACu;
    // 7F382AAC: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382AB0:
    ctx->pc = 0x7F382AB0u;
    // 7F382AB0: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F382AB4:
    ctx->pc = 0x7F382AB4u;
    // 7F382AB4: addi    r5, r31, 64
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(64);

label_7F382AB8:
    ctx->pc = 0x7F382AB8u;
    // 7F382AB8: addi    r9, r31, 68
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(68);

label_7F382ABC:
    ctx->pc = 0x7F382ABCu;
    // 7F382ABC: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382AC0:
    ctx->pc = 0x7F382AC0u;
    // 7F382AC0: li      r6, 35
    ctx->gpr[6] = (u32)(s32)(35);

label_7F382AC4:
    ctx->pc = 0x7F382AC4u;
    // 7F382AC4: li      r7, 35
    ctx->gpr[7] = (u32)(s32)(35);

label_7F382AC8:
    ctx->pc = 0x7F382AC8u;
    // 7F382AC8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F382ACC:
    ctx->pc = 0x7F382ACCu;
    // 7F382ACC: bl      0x7F21D188
    {
            ctx->lr = 0x7F382AD0u;
            ctx->pc = 0x7F21D188u;
            return;
    }

label_7F382AD0:
    ctx->pc = 0x7F382AD0u;
    ctx->downcount -= 4;
    // 7F382AD0: stw     r3, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382AD4:
    ctx->pc = 0x7F382AD4u;
    // 7F382AD4: lwz     r4, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382AD8:
    ctx->pc = 0x7F382AD8u;
    // 7F382AD8: cmplwi  r4, 0x0000
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

label_7F382ADC:
    ctx->pc = 0x7F382ADCu;
    // 7F382ADC: bc    12, 2, 0x7F382AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382AE8;
        }
    }

label_7F382AE0:
    ctx->pc = 0x7F382AE0u;
    ctx->downcount -= 2;
    // 7F382AE0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382AE4:
    ctx->pc = 0x7F382AE4u;
    // 7F382AE4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F382AE8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F382AE8:
    ctx->pc = 0x7F382AE8u;
    ctx->downcount -= 6;
    // 7F382AE8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382AEC:
    ctx->pc = 0x7F382AECu;
    // 7F382AEC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F382AF0:
    ctx->pc = 0x7F382AF0u;
    // 7F382AF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382AF4:
    ctx->pc = 0x7F382AF4u;
    // 7F382AF4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F382AF8:
    ctx->pc = 0x7F382AF8u;
    // 7F382AF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382AFC:
    ctx->pc = 0x7F382AFCu;
    ctx->downcount -= 1;
    // 7F382AFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382B00:
    ctx->pc = 0x7F382B00u;
    ctx->downcount -= 23;
    // 7F382B00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382B04:
    ctx->pc = 0x7F382B04u;
    // 7F382B04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382B08:
    ctx->pc = 0x7F382B08u;
    // 7F382B08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382B0C:
    ctx->pc = 0x7F382B0Cu;
    // 7F382B0C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F382B10:
    ctx->pc = 0x7F382B10u;
    // 7F382B10: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F382B14:
    ctx->pc = 0x7F382B14u;
    // 7F382B14: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382B18:
    ctx->pc = 0x7F382B18u;
    // 7F382B18: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382B1C:
    ctx->pc = 0x7F382B1Cu;
    // 7F382B1C: stw     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F382B20:
    ctx->pc = 0x7F382B20u;
    // 7F382B20: addi    r3, r3, 10048
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10048);

label_7F382B24:
    ctx->pc = 0x7F382B24u;
    // 7F382B24: lwz     r8, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F382B28:
    ctx->pc = 0x7F382B28u;
    // 7F382B28: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382B2C:
    ctx->pc = 0x7F382B2Cu;
    // 7F382B2C: stw     r8, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F382B30:
    ctx->pc = 0x7F382B30u;
    // 7F382B30: stw     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F382B34:
    ctx->pc = 0x7F382B34u;
    // 7F382B34: lwz     r8, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F382B38:
    ctx->pc = 0x7F382B38u;
    // 7F382B38: lwz     r4, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382B3C:
    ctx->pc = 0x7F382B3Cu;
    // 7F382B3C: stw     r8, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F382B40:
    ctx->pc = 0x7F382B40u;
    // 7F382B40: stw     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F382B44:
    ctx->pc = 0x7F382B44u;
    // 7F382B44: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382B48:
    ctx->pc = 0x7F382B48u;
    // 7F382B48: stw     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F382B4C:
    ctx->pc = 0x7F382B4Cu;
    // 7F382B4C: stw     r7, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F382B50:
    ctx->pc = 0x7F382B50u;
    // 7F382B50: stw     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382B54:
    ctx->pc = 0x7F382B54u;
    // 7F382B54: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382B58:
    ctx->pc = 0x7F382B58u;
    // 7F382B58: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F382B5Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F382B5C:
    ctx->pc = 0x7F382B5Cu;
    ctx->downcount -= 7;
    // 7F382B5C: stw     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382B60:
    ctx->pc = 0x7F382B60u;
    // 7F382B60: addi    r7, r31, 64
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(64);

label_7F382B64:
    ctx->pc = 0x7F382B64u;
    // 7F382B64: lbz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F382B68:
    ctx->pc = 0x7F382B68u;
    // 7F382B68: lbz     r4, 93(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(93);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F382B6C:
    ctx->pc = 0x7F382B6Cu;
    // 7F382B6C: lbz     r5, 94(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(94);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F382B70:
    ctx->pc = 0x7F382B70u;
    // 7F382B70: lbz     r6, 95(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(95);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_7F382B74:
    ctx->pc = 0x7F382B74u;
    // 7F382B74: bl      0x7F3829AC
    {
            ctx->lr = 0x7F382B78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3829ACu;
                return;
            }
            goto label_7F3829AC;
    }

label_7F382B78:
    ctx->pc = 0x7F382B78u;
    ctx->downcount -= 10;
    // 7F382B78: lis     r4, -32767
    ctx->gpr[4] = ((u32)(s32)(-32767) << 16);

label_7F382B7C:
    ctx->pc = 0x7F382B7Cu;
    // 7F382B7C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F382B80:
    ctx->pc = 0x7F382B80u;
    // 7F382B80: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F382B84:
    ctx->pc = 0x7F382B84u;
    // 7F382B84: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382B88:
    ctx->pc = 0x7F382B88u;
    // 7F382B88: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F382B8C:
    ctx->pc = 0x7F382B8Cu;
    // 7F382B8C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382B90:
    ctx->pc = 0x7F382B90u;
    // 7F382B90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382B94:
    ctx->pc = 0x7F382B94u;
    // 7F382B94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382B98:
    ctx->pc = 0x7F382B98u;
    // 7F382B98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382B9C:
    ctx->pc = 0x7F382B9Cu;
    ctx->downcount -= 23;
    // 7F382B9C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382BA0:
    ctx->pc = 0x7F382BA0u;
    // 7F382BA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382BA4:
    ctx->pc = 0x7F382BA4u;
    // 7F382BA4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382BA8:
    ctx->pc = 0x7F382BA8u;
    // 7F382BA8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F382BAC:
    ctx->pc = 0x7F382BACu;
    // 7F382BAC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382BB0:
    ctx->pc = 0x7F382BB0u;
    // 7F382BB0: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F382BB4:
    ctx->pc = 0x7F382BB4u;
    // 7F382BB4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F382BB8:
    ctx->pc = 0x7F382BB8u;
    // 7F382BB8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F382BBC:
    ctx->pc = 0x7F382BBCu;
    // 7F382BBC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F382BC0:
    ctx->pc = 0x7F382BC0u;
    // 7F382BC0: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F382BC4:
    ctx->pc = 0x7F382BC4u;
    // 7F382BC4: li      r5, 112
    ctx->gpr[5] = (u32)(s32)(112);

label_7F382BC8:
    ctx->pc = 0x7F382BC8u;
    // 7F382BC8: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_7F382BCC:
    ctx->pc = 0x7F382BCCu;
    // 7F382BCC: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F382BD0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F382BD0:
    ctx->pc = 0x7F382BD0u;
    ctx->downcount -= 2;
    // 7F382BD0: or.   r31, r3, r3
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

label_7F382BD4:
    ctx->pc = 0x7F382BD4u;
    // 7F382BD4: bc    12, 2, 0x7F382C44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F382C44;
        }
    }

label_7F382BD8:
    ctx->pc = 0x7F382BD8u;
    ctx->downcount -= 5;
    // 7F382BD8: lis     r4, 32568
    ctx->gpr[4] = ((u32)(s32)(32568) << 16);

label_7F382BDC:
    ctx->pc = 0x7F382BDCu;
    // 7F382BDC: lis     r5, 32568
    ctx->gpr[5] = ((u32)(s32)(32568) << 16);

label_7F382BE0:
    ctx->pc = 0x7F382BE0u;
    // 7F382BE0: addi    r4, r4, 10700
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10700);

label_7F382BE4:
    ctx->pc = 0x7F382BE4u;
    // 7F382BE4: addi    r5, r5, 11004
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11004);

label_7F382BE8:
    ctx->pc = 0x7F382BE8u;
    // 7F382BE8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F382BECu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F382BEC:
    ctx->pc = 0x7F382BECu;
    ctx->downcount -= 16;
    // 7F382BEC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382BF0:
    ctx->pc = 0x7F382BF0u;
    // 7F382BF0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F382BF4:
    ctx->pc = 0x7F382BF4u;
    // 7F382BF4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F382BF8:
    ctx->pc = 0x7F382BF8u;
    // 7F382BF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382BFC:
    ctx->pc = 0x7F382BFCu;
    // 7F382BFC: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F382C00:
    ctx->pc = 0x7F382C00u;
    // 7F382C00: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F382C04:
    ctx->pc = 0x7F382C04u;
    // 7F382C04: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F382C08:
    ctx->pc = 0x7F382C08u;
    // 7F382C08: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F382C0C:
    ctx->pc = 0x7F382C0Cu;
    // 7F382C0C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F382C10:
    ctx->pc = 0x7F382C10u;
    // 7F382C10: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F382C14:
    ctx->pc = 0x7F382C14u;
    // 7F382C14: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F382C18:
    ctx->pc = 0x7F382C18u;
    // 7F382C18: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F382C1C:
    ctx->pc = 0x7F382C1Cu;
    // 7F382C1C: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F382C20:
    ctx->pc = 0x7F382C20u;
    // 7F382C20: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F382C24:
    ctx->pc = 0x7F382C24u;
    // 7F382C24: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382C28:
    ctx->pc = 0x7F382C28u;
    // 7F382C28: bl      0x7F382B00
    {
            ctx->lr = 0x7F382C2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382B00u;
                return;
            }
            goto label_7F382B00;
    }

label_7F382C2C:
    ctx->pc = 0x7F382C2Cu;
    ctx->downcount -= 2;
    // 7F382C2C: cmpwi   r3, 0
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

label_7F382C30:
    ctx->pc = 0x7F382C30u;
    // 7F382C30: bc    4, 2, 0x7F382C44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382C44;
        }
    }

label_7F382C34:
    ctx->pc = 0x7F382C34u;
    ctx->downcount -= 2;
    // 7F382C34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382C38:
    ctx->pc = 0x7F382C38u;
    // 7F382C38: bl      0x7F3C8210
    {
            ctx->lr = 0x7F382C3Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F382C3C:
    ctx->pc = 0x7F382C3Cu;
    ctx->downcount -= 2;
    // 7F382C3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F382C40:
    ctx->pc = 0x7F382C40u;
    // 7F382C40: b       0x7F382C48
    {
            goto label_7F382C48;
    }

label_7F382C44:
    ctx->pc = 0x7F382C44u;
    ctx->downcount -= 1;
    // 7F382C44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382C48:
    ctx->pc = 0x7F382C48u;
    ctx->downcount -= 16;
    // 7F382C48: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F382C4C:
    ctx->pc = 0x7F382C4Cu;
    // 7F382C4C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382C50:
    ctx->pc = 0x7F382C50u;
    // 7F382C50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382C54:
    ctx->pc = 0x7F382C54u;
    // 7F382C54: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F382C58:
    ctx->pc = 0x7F382C58u;
    // 7F382C58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382C5C:
    ctx->pc = 0x7F382C5Cu;
    ctx->downcount -= 13;
    // 7F382C5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382C60:
    ctx->pc = 0x7F382C60u;
    // 7F382C60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382C64:
    ctx->pc = 0x7F382C64u;
    // 7F382C64: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382C68:
    ctx->pc = 0x7F382C68u;
    // 7F382C68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F382C6C:
    ctx->pc = 0x7F382C6Cu;
    // 7F382C6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382C70:
    ctx->pc = 0x7F382C70u;
    // 7F382C70: addi    r7, r4, 12832
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F382C74:
    ctx->pc = 0x7F382C74u;
    // 7F382C74: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F382C78:
    ctx->pc = 0x7F382C78u;
    // 7F382C78: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F382C7C:
    ctx->pc = 0x7F382C7Cu;
    // 7F382C7C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F382C80:
    ctx->pc = 0x7F382C80u;
    // 7F382C80: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382C84:
    ctx->pc = 0x7F382C84u;
    // 7F382C84: addi    r3, r31, 736
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(736);

label_7F382C88:
    ctx->pc = 0x7F382C88u;
    // 7F382C88: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F382C8C:
    ctx->pc = 0x7F382C8Cu;
    // 7F382C8C: bl      0x7F014788
    {
            ctx->lr = 0x7F382C90u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F382C90:
    ctx->pc = 0x7F382C90u;
    ctx->downcount -= 4;
    // 7F382C90: addi    r3, r31, 736
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(736);

label_7F382C94:
    ctx->pc = 0x7F382C94u;
    // 7F382C94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F382C98:
    ctx->pc = 0x7F382C98u;
    // 7F382C98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F382C9C:
    ctx->pc = 0x7F382C9Cu;
    // 7F382C9C: bl      0x7F014B60
    {
            ctx->lr = 0x7F382CA0u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F382CA0:
    ctx->pc = 0x7F382CA0u;
    ctx->downcount -= 9;
    // 7F382CA0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F382CA4:
    ctx->pc = 0x7F382CA4u;
    // 7F382CA4: addi    r3, r31, 736
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(736);

label_7F382CA8:
    ctx->pc = 0x7F382CA8u;
    // 7F382CA8: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F382CAC:
    ctx->pc = 0x7F382CACu;
    // 7F382CAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F382CB0:
    ctx->pc = 0x7F382CB0u;
    // 7F382CB0: addi    r4, r31, 928
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(928);

label_7F382CB4:
    ctx->pc = 0x7F382CB4u;
    // 7F382CB4: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F382CB8:
    ctx->pc = 0x7F382CB8u;
    // 7F382CB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F382CBC:
    ctx->pc = 0x7F382CBCu;
    // 7F382CBC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F382CC0:
    ctx->pc = 0x7F382CC0u;
    // 7F382CC0: bl      0x7F014B78
    {
            ctx->lr = 0x7F382CC4u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F382CC4:
    ctx->pc = 0x7F382CC4u;
    ctx->downcount -= 2;
    // 7F382CC4: addi    r3, r31, 736
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(736);

label_7F382CC8:
    ctx->pc = 0x7F382CC8u;
    // 7F382CC8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F382CCCu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F382CCC:
    ctx->pc = 0x7F382CCCu;
    ctx->downcount -= 5;
    // 7F382CCC: lwz     r4, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382CD0:
    ctx->pc = 0x7F382CD0u;
    // 7F382CD0: addi    r3, r31, 736
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(736);

label_7F382CD4:
    ctx->pc = 0x7F382CD4u;
    // 7F382CD4: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382CD8:
    ctx->pc = 0x7F382CD8u;
    // 7F382CD8: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F382CDC:
    ctx->pc = 0x7F382CDCu;
    // 7F382CDC: bl      0x7F0171C8
    {
            ctx->lr = 0x7F382CE0u;
            ctx->pc = 0x7F0171C8u;
            return;
    }

label_7F382CE0:
    ctx->pc = 0x7F382CE0u;
    ctx->downcount -= 6;
    // 7F382CE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382CE4:
    ctx->pc = 0x7F382CE4u;
    // 7F382CE4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F382CE8:
    ctx->pc = 0x7F382CE8u;
    // 7F382CE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382CEC:
    ctx->pc = 0x7F382CECu;
    // 7F382CEC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382CF0:
    ctx->pc = 0x7F382CF0u;
    // 7F382CF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382CF4:
    ctx->pc = 0x7F382CF4u;
    ctx->downcount -= 8;
    // 7F382CF4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382CF8:
    ctx->pc = 0x7F382CF8u;
    // 7F382CF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382CFC:
    ctx->pc = 0x7F382CFCu;
    // 7F382CFC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F382D00:
    ctx->pc = 0x7F382D00u;
    // 7F382D00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382D04:
    ctx->pc = 0x7F382D04u;
    // 7F382D04: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F382D08:
    ctx->pc = 0x7F382D08u;
    // 7F382D08: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382D0C:
    ctx->pc = 0x7F382D0Cu;
    // 7F382D0C: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F382D10:
    ctx->pc = 0x7F382D10u;
    // 7F382D10: bl      0x7F1FCB24
    {
            ctx->lr = 0x7F382D14u;
            ctx->pc = 0x7F1FCB24u;
            return;
    }

label_7F382D14:
    ctx->pc = 0x7F382D14u;
    ctx->downcount -= 7;
    // 7F382D14: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382D18:
    ctx->pc = 0x7F382D18u;
    // 7F382D18: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382D1C:
    ctx->pc = 0x7F382D1Cu;
    // 7F382D1C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F382D20:
    ctx->pc = 0x7F382D20u;
    // 7F382D20: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382D24:
    ctx->pc = 0x7F382D24u;
    // 7F382D24: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382D28:
    ctx->pc = 0x7F382D28u;
    // 7F382D28: cmpwi   r0, 2
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

label_7F382D2C:
    ctx->pc = 0x7F382D2Cu;
    // 7F382D2C: bc    4, 2, 0x7F382D40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382D40;
        }
    }

label_7F382D30:
    ctx->pc = 0x7F382D30u;
    ctx->downcount -= 4;
    // 7F382D30: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382D34:
    ctx->pc = 0x7F382D34u;
    // 7F382D34: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382D38:
    ctx->pc = 0x7F382D38u;
    // 7F382D38: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F382D3C:
    ctx->pc = 0x7F382D3Cu;
    // 7F382D3C: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382D40:
    ctx->pc = 0x7F382D40u;
    ctx->downcount -= 14;
    // 7F382D40: lwz     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382D44:
    ctx->pc = 0x7F382D44u;
    // 7F382D44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F382D48:
    ctx->pc = 0x7F382D48u;
    // 7F382D48: oris    r3, r3, 0x0008
    ctx->gpr[3] = ctx->gpr[3] | (0x0008u << 16);

label_7F382D4C:
    ctx->pc = 0x7F382D4Cu;
    // 7F382D4C: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382D50:
    ctx->pc = 0x7F382D50u;
    // 7F382D50: lwz     r3, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382D54:
    ctx->pc = 0x7F382D54u;
    // 7F382D54: oris    r3, r3, 0x0008
    ctx->gpr[3] = ctx->gpr[3] | (0x0008u << 16);

label_7F382D58:
    ctx->pc = 0x7F382D58u;
    // 7F382D58: stw     r3, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382D5C:
    ctx->pc = 0x7F382D5Cu;
    // 7F382D5C: stw     r0, 980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382D60:
    ctx->pc = 0x7F382D60u;
    // 7F382D60: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F382D64:
    ctx->pc = 0x7F382D64u;
    // 7F382D64: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382D68:
    ctx->pc = 0x7F382D68u;
    // 7F382D68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382D6C:
    ctx->pc = 0x7F382D6Cu;
    // 7F382D6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382D70:
    ctx->pc = 0x7F382D70u;
    // 7F382D70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382D74:
    ctx->pc = 0x7F382D74u;
    ctx->downcount -= 19;
    // 7F382D74: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382D78:
    ctx->pc = 0x7F382D78u;
    // 7F382D78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382D7C:
    ctx->pc = 0x7F382D7Cu;
    // 7F382D7C: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F382D80:
    ctx->pc = 0x7F382D80u;
    // 7F382D80: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F382D84:
    ctx->pc = 0x7F382D84u;
    // 7F382D84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382D88:
    ctx->pc = 0x7F382D88u;
    // 7F382D88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F382D8C:
    ctx->pc = 0x7F382D8Cu;
    // 7F382D8C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F382D90:
    ctx->pc = 0x7F382D90u;
    // 7F382D90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382D94:
    ctx->pc = 0x7F382D94u;
    // 7F382D94: lwz     r4, 972(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(972);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382D98:
    ctx->pc = 0x7F382D98u;
    // 7F382D98: li      r3, 457
    ctx->gpr[3] = (u32)(s32)(457);

label_7F382D9C:
    ctx->pc = 0x7F382D9Cu;
    // 7F382D9C: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F382DA0:
    ctx->pc = 0x7F382DA0u;
    // 7F382DA0: stw     r0, 980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382DA4:
    ctx->pc = 0x7F382DA4u;
    // 7F382DA4: stw     r0, 984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382DA8:
    ctx->pc = 0x7F382DA8u;
    // 7F382DA8: stw     r0, 984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382DAC:
    ctx->pc = 0x7F382DACu;
    // 7F382DAC: lwz     r4, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382DB0:
    ctx->pc = 0x7F382DB0u;
    // 7F382DB0: stw     r0, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382DB4:
    ctx->pc = 0x7F382DB4u;
    // 7F382DB4: lwz     r4, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382DB8:
    ctx->pc = 0x7F382DB8u;
    // 7F382DB8: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382DBC:
    ctx->pc = 0x7F382DBCu;
    // 7F382DBC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F382DC0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F382DC0:
    ctx->pc = 0x7F382DC0u;
    ctx->downcount -= 3;
    // 7F382DC0: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F382DC4:
    ctx->pc = 0x7F382DC4u;
    // 7F382DC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F382DC8:
    ctx->pc = 0x7F382DC8u;
    // 7F382DC8: bl      0x7F1FCB24
    {
            ctx->lr = 0x7F382DCCu;
            ctx->pc = 0x7F1FCB24u;
            return;
    }

label_7F382DCC:
    ctx->pc = 0x7F382DCCu;
    ctx->downcount -= 2;
    // 7F382DCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382DD0:
    ctx->pc = 0x7F382DD0u;
    // 7F382DD0: bl      0x7F382CF4
    {
            ctx->lr = 0x7F382DD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382CF4u;
                return;
            }
            goto label_7F382CF4;
    }

label_7F382DD4:
    ctx->pc = 0x7F382DD4u;
    ctx->downcount -= 6;
    // 7F382DD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382DD8:
    ctx->pc = 0x7F382DD8u;
    // 7F382DD8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F382DDC:
    ctx->pc = 0x7F382DDCu;
    // 7F382DDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382DE0:
    ctx->pc = 0x7F382DE0u;
    // 7F382DE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382DE4:
    ctx->pc = 0x7F382DE4u;
    // 7F382DE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382DE8:
    ctx->pc = 0x7F382DE8u;
    ctx->downcount -= 18;
    // 7F382DE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382DEC:
    ctx->pc = 0x7F382DECu;
    // 7F382DEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382DF0:
    ctx->pc = 0x7F382DF0u;
    // 7F382DF0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F382DF4:
    ctx->pc = 0x7F382DF4u;
    // 7F382DF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382DF8:
    ctx->pc = 0x7F382DF8u;
    // 7F382DF8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F382DFC:
    ctx->pc = 0x7F382DFCu;
    // 7F382DFC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382E00:
    ctx->pc = 0x7F382E00u;
    // 7F382E00: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F382E04:
    ctx->pc = 0x7F382E04u;
    // 7F382E04: bl      0x7F1FCB24
    {
            ctx->lr = 0x7F382E08u;
            ctx->pc = 0x7F1FCB24u;
            return;
    }

label_7F382E08:
    ctx->pc = 0x7F382E08u;
    ctx->downcount -= 10;
    // 7F382E08: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382E0C:
    ctx->pc = 0x7F382E0Cu;
    // 7F382E0C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F382E10:
    ctx->pc = 0x7F382E10u;
    // 7F382E10: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382E14:
    ctx->pc = 0x7F382E14u;
    // 7F382E14: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382E18:
    ctx->pc = 0x7F382E18u;
    // 7F382E18: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382E1C:
    ctx->pc = 0x7F382E1Cu;
    // 7F382E1C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F382E20:
    ctx->pc = 0x7F382E20u;
    // 7F382E20: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382E24:
    ctx->pc = 0x7F382E24u;
    // 7F382E24: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382E28:
    ctx->pc = 0x7F382E28u;
    // 7F382E28: cmpwi   r0, 2
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

label_7F382E2C:
    ctx->pc = 0x7F382E2Cu;
    // 7F382E2C: bc    4, 2, 0x7F382E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382E74;
        }
    }

label_7F382E30:
    ctx->pc = 0x7F382E30u;
    ctx->downcount -= 8;
    // 7F382E30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F382E34:
    ctx->pc = 0x7F382E34u;
    // 7F382E34: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F382E38:
    ctx->pc = 0x7F382E38u;
    // 7F382E38: stw     r0, 984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382E3C:
    ctx->pc = 0x7F382E3Cu;
    // 7F382E3C: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382E40:
    ctx->pc = 0x7F382E40u;
    // 7F382E40: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382E44:
    ctx->pc = 0x7F382E44u;
    // 7F382E44: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F382E48:
    ctx->pc = 0x7F382E48u;
    // 7F382E48: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382E4C:
    ctx->pc = 0x7F382E4Cu;
    // 7F382E4C: b       0x7F382E64
    {
            goto label_7F382E64;
    }

label_7F382E50:
    ctx->pc = 0x7F382E50u;
    ctx->downcount -= 4;
    // 7F382E50: lwz     r4, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382E54:
    // 7F382E54: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F382E58:
    // 7F382E58: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F382E5C:
    // 7F382E5C: bl      0x7F3B052C
    {
            ctx->lr = 0x7F382E60u;
            ctx->pc = 0x7F3B052Cu;
            return;
    }

label_7F382E60:
    ctx->downcount -= 1;
    // 7F382E60: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F382E64:
    ctx->pc = 0x7F382E64u;
    ctx->downcount -= 4;
    // 7F382E64: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382E68:
    ctx->pc = 0x7F382E68u;
    // 7F382E68: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F382E6C:
    // 7F382E6C: cmpw    r30, r0
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

label_7F382E70:
    // 7F382E70: bc    12, 0, 0x7F382E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382E50u;
                return;
            }
            goto label_7F382E50;
        }
    }

label_7F382E74:
    ctx->pc = 0x7F382E74u;
    ctx->downcount -= 30;
    // 7F382E74: lwz     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382E78:
    ctx->pc = 0x7F382E78u;
    // 7F382E78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F382E7C:
    ctx->pc = 0x7F382E7Cu;
    // 7F382E7C: rlwinm r3, r3, 0, 13, 11
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFF7FFFFu;
    }

label_7F382E80:
    ctx->pc = 0x7F382E80u;
    // 7F382E80: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382E84:
    ctx->pc = 0x7F382E84u;
    // 7F382E84: lwz     r3, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382E88:
    ctx->pc = 0x7F382E88u;
    // 7F382E88: rlwinm r3, r3, 0, 13, 11
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFF7FFFFu;
    }

label_7F382E8C:
    ctx->pc = 0x7F382E8Cu;
    // 7F382E8C: stw     r3, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382E90:
    ctx->pc = 0x7F382E90u;
    // 7F382E90: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382E94:
    ctx->pc = 0x7F382E94u;
    // 7F382E94: lwz     r3, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382E98:
    ctx->pc = 0x7F382E98u;
    // 7F382E98: rlwinm r3, r3, 0, 20, 17
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFCFFFu;
    }

label_7F382E9C:
    ctx->pc = 0x7F382E9Cu;
    // 7F382E9C: stw     r3, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382EA0:
    ctx->pc = 0x7F382EA0u;
    // 7F382EA0: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382EA4:
    ctx->pc = 0x7F382EA4u;
    // 7F382EA4: lwz     r3, 960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(960);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382EA8:
    ctx->pc = 0x7F382EA8u;
    // 7F382EA8: ori     r3, r3, 0x3000
    ctx->gpr[3] = ctx->gpr[3] | 0x3000u;

label_7F382EAC:
    ctx->pc = 0x7F382EACu;
    // 7F382EAC: stw     r3, 960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382EB0:
    ctx->pc = 0x7F382EB0u;
    // 7F382EB0: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F382EB4:
    ctx->pc = 0x7F382EB4u;
    // 7F382EB4: lwz     r3, 1284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382EB8:
    ctx->pc = 0x7F382EB8u;
    // 7F382EB8: ori     r3, r3, 0x3000
    ctx->gpr[3] = ctx->gpr[3] | 0x3000u;

label_7F382EBC:
    ctx->pc = 0x7F382EBCu;
    // 7F382EBC: stw     r3, 1284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382EC0:
    ctx->pc = 0x7F382EC0u;
    // 7F382EC0: stw     r0, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382EC4:
    ctx->pc = 0x7F382EC4u;
    // 7F382EC4: stb     r0, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F382EC8:
    ctx->pc = 0x7F382EC8u;
    // 7F382EC8: stb     r0, 994(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(994);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F382ECC:
    ctx->pc = 0x7F382ECCu;
    // 7F382ECC: sth     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F382ED0:
    ctx->pc = 0x7F382ED0u;
    // 7F382ED0: sth     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F382ED4:
    ctx->pc = 0x7F382ED4u;
    // 7F382ED4: sth     r0, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F382ED8:
    ctx->pc = 0x7F382ED8u;
    // 7F382ED8: stb     r0, 995(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(995);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F382EDC:
    ctx->pc = 0x7F382EDCu;
    // 7F382EDC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382EE0:
    ctx->pc = 0x7F382EE0u;
    // 7F382EE0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382EE4:
    ctx->pc = 0x7F382EE4u;
    // 7F382EE4: addi    r3, r3, 3684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3684);

label_7F382EE8:
    ctx->pc = 0x7F382EE8u;
    // 7F382EE8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F382EECu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F382EEC:
    ctx->pc = 0x7F382EECu;
    ctx->downcount -= 2;
    // 7F382EEC: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382EF0:
    ctx->pc = 0x7F382EF0u;
    // 7F382EF0: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F382EF4u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F382EF4:
    ctx->pc = 0x7F382EF4u;
    ctx->downcount -= 3;
    // 7F382EF4: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382EF8:
    ctx->pc = 0x7F382EF8u;
    // 7F382EF8: cmpwi   r0, 2
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

label_7F382EFC:
    ctx->pc = 0x7F382EFCu;
    // 7F382EFC: bc    4, 2, 0x7F382F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382F08;
        }
    }

label_7F382F00:
    ctx->pc = 0x7F382F00u;
    ctx->downcount -= 2;
    // 7F382F00: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382F04:
    ctx->pc = 0x7F382F04u;
    // 7F382F04: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F382F08u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F382F08:
    ctx->pc = 0x7F382F08u;
    ctx->downcount -= 6;
    // 7F382F08: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F382F0C:
    ctx->pc = 0x7F382F0Cu;
    // 7F382F0C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F382F10:
    ctx->pc = 0x7F382F10u;
    // 7F382F10: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382F14:
    ctx->pc = 0x7F382F14u;
    // 7F382F14: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F382F18:
    ctx->pc = 0x7F382F18u;
    // 7F382F18: cmpwi   r0, 20
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

label_7F382F1C:
    ctx->pc = 0x7F382F1Cu;
    // 7F382F1C: bc    4, 0, 0x7F382F2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F382F2C;
        }
    }

label_7F382F20:
    ctx->pc = 0x7F382F20u;
    ctx->downcount -= 3;
    // 7F382F20: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F382F24:
    ctx->pc = 0x7F382F24u;
    // 7F382F24: sth     r0, 498(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(498);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F382F28:
    ctx->pc = 0x7F382F28u;
    // 7F382F28: b       0x7F382F34
    {
            goto label_7F382F34;
    }

label_7F382F2C:
    ctx->pc = 0x7F382F2Cu;
    ctx->downcount -= 2;
    // 7F382F2C: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_7F382F30:
    ctx->pc = 0x7F382F30u;
    // 7F382F30: sth     r0, 498(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(498);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F382F34:
    ctx->pc = 0x7F382F34u;
    ctx->downcount -= 16;
    // 7F382F34: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F382F38:
    ctx->pc = 0x7F382F38u;
    // 7F382F38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382F3C:
    ctx->pc = 0x7F382F3Cu;
    // 7F382F3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382F40:
    ctx->pc = 0x7F382F40u;
    // 7F382F40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382F44:
    ctx->pc = 0x7F382F44u;
    // 7F382F44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382F48:
    ctx->pc = 0x7F382F48u;
    ctx->downcount -= 4;
    // 7F382F48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382F4C:
    ctx->pc = 0x7F382F4Cu;
    // 7F382F4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382F50:
    ctx->pc = 0x7F382F50u;
    // 7F382F50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382F54:
    ctx->pc = 0x7F382F54u;
    // 7F382F54: bl      0x7F382CF4
    {
            ctx->lr = 0x7F382F58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382CF4u;
                return;
            }
            goto label_7F382CF4;
    }

label_7F382F58:
    ctx->pc = 0x7F382F58u;
    ctx->downcount -= 5;
    // 7F382F58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382F5C:
    ctx->pc = 0x7F382F5Cu;
    // 7F382F5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382F60:
    ctx->pc = 0x7F382F60u;
    // 7F382F60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382F64:
    ctx->pc = 0x7F382F64u;
    // 7F382F64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F382F68:
    ctx->pc = 0x7F382F68u;
    ctx->downcount -= 25;
    // 7F382F68: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F382F6C:
    ctx->pc = 0x7F382F6Cu;
    // 7F382F6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F382F70:
    ctx->pc = 0x7F382F70u;
    // 7F382F70: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F382F74:
    ctx->pc = 0x7F382F74u;
    // 7F382F74: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382F78:
    ctx->pc = 0x7F382F78u;
    // 7F382F78: stmw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F382F7C:
    ctx->pc = 0x7F382F7Cu;
    // 7F382F7C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382F80:
    ctx->pc = 0x7F382F80u;
    // 7F382F80: addi    r31, r30, 416
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(416);

label_7F382F84:
    ctx->pc = 0x7F382F84u;
    // 7F382F84: lwzu     r3, -22232(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22232);
        ctx->gpr[3] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F382F88:
    ctx->pc = 0x7F382F88u;
    // 7F382F88: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382F8C:
    ctx->pc = 0x7F382F8Cu;
    // 7F382F8C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F382F90:
    ctx->pc = 0x7F382F90u;
    // 7F382F90: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F382F94:
    ctx->pc = 0x7F382F94u;
    // 7F382F94: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382F98:
    ctx->pc = 0x7F382F98u;
    // 7F382F98: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F382F9C:
    ctx->pc = 0x7F382F9Cu;
    // 7F382F9C: addi    r3, r3, 3684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3684);

label_7F382FA0:
    ctx->pc = 0x7F382FA0u;
    // 7F382FA0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F382FA4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F382FA4:
    ctx->pc = 0x7F382FA4u;
    ctx->downcount -= 2;
    // 7F382FA4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F382FA8:
    ctx->pc = 0x7F382FA8u;
    // 7F382FA8: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F382FACu;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F382FAC:
    ctx->pc = 0x7F382FACu;
    ctx->downcount -= 2;
    // 7F382FAC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382FB0:
    ctx->pc = 0x7F382FB0u;
    // 7F382FB0: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F382FB4u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F382FB4:
    ctx->pc = 0x7F382FB4u;
    ctx->downcount -= 8;
    // 7F382FB4: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F382FB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F382FB8:
    ctx->pc = 0x7F382FB8u;
    // 7F382FB8: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F382FBC:
    ctx->pc = 0x7F382FBCu;
    // 7F382FBC: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F382FBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F382FC0:
    ctx->pc = 0x7F382FC0u;
    // 7F382FC0: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F382FC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F382FC4:
    ctx->pc = 0x7F382FC4u;
    // 7F382FC4: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F382FC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F382FC8:
    ctx->pc = 0x7F382FC8u;
    // 7F382FC8: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F382FC8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F382FCC:
    ctx->pc = 0x7F382FCCu;
    // 7F382FCC: stfs     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F382FCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F382FD0:
    ctx->pc = 0x7F382FD0u;
    // 7F382FD0: bl      0x7F1E0984
    {
            ctx->lr = 0x7F382FD4u;
            ctx->pc = 0x7F1E0984u;
            return;
    }

label_7F382FD4:
    ctx->pc = 0x7F382FD4u;
    ctx->downcount -= 3;
    // 7F382FD4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F382FD8:
    ctx->pc = 0x7F382FD8u;
    // 7F382FD8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F382FDC:
    ctx->pc = 0x7F382FDCu;
    // 7F382FDC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F382FE0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F382FE0:
    ctx->pc = 0x7F382FE0u;
    ctx->downcount -= 3;
    // 7F382FE0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F382FE4:
    ctx->pc = 0x7F382FE4u;
    // 7F382FE4: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_7F382FE8:
    ctx->pc = 0x7F382FE8u;
    // 7F382FE8: bl      0x7F1FD004
    {
            ctx->lr = 0x7F382FECu;
            ctx->pc = 0x7F1FD004u;
            return;
    }

label_7F382FEC:
    ctx->pc = 0x7F382FECu;
    ctx->downcount -= 16;
    // 7F382FEC: lmw     r30, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F382FF0:
    ctx->pc = 0x7F382FF0u;
    // 7F382FF0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F382FF4:
    ctx->pc = 0x7F382FF4u;
    // 7F382FF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F382FF8:
    ctx->pc = 0x7F382FF8u;
    // 7F382FF8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F382FFC:
    ctx->pc = 0x7F382FFCu;
    // 7F382FFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383000:
    ctx->pc = 0x7F383000u;
    ctx->downcount -= 16;
    // 7F383000: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383004:
    ctx->pc = 0x7F383004u;
    // 7F383004: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383008:
    ctx->pc = 0x7F383008u;
    // 7F383008: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38300C:
    ctx->pc = 0x7F38300Cu;
    // 7F38300C: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F383010:
    ctx->pc = 0x7F383010u;
    // 7F383010: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383014:
    ctx->pc = 0x7F383014u;
    // 7F383014: bl      0x7F3830E8
    {
            ctx->lr = 0x7F383018u;
            goto label_7F3830E8;
    }

label_7F383018:
    ctx->pc = 0x7F383018u;
    ctx->downcount -= 3;
    // 7F383018: rlwinm r30, r3, 0, 20, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F38301C:
    ctx->pc = 0x7F38301Cu;
    // 7F38301C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F383020:
    ctx->pc = 0x7F383020u;
    // 7F383020: bl      0x7F174330
    {
            ctx->lr = 0x7F383024u;
            ctx->pc = 0x7F174330u;
            return;
    }

label_7F383024:
    ctx->pc = 0x7F383024u;
    ctx->downcount -= 21;
    // 7F383024: lbz     r5, 995(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(995);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F383028:
    ctx->pc = 0x7F383028u;
    // 7F383028: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F38302C:
    ctx->pc = 0x7F38302Cu;
    // 7F38302C: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F383030:
    ctx->pc = 0x7F383030u;
    // 7F383030: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F383034:
    ctx->pc = 0x7F383034u;
    // 7F383034: extsb r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s8)ctx->gpr[5];
    }

label_7F383038:
    ctx->pc = 0x7F383038u;
    // 7F383038: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38303C:
    ctx->pc = 0x7F38303Cu;
    // 7F38303C: xoris   r0, r5, 0x8000
    ctx->gpr[0] = ctx->gpr[5] ^ (0x8000u << 16);

label_7F383040:
    ctx->pc = 0x7F383040u;
    // 7F383040: addi    r5, r4, -22240
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-22240);

label_7F383044:
    ctx->pc = 0x7F383044u;
    // 7F383044: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383048:
    ctx->pc = 0x7F383048u;
    // 7F383048: addi    r4, r3, -22224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22224);

label_7F38304C:
    ctx->pc = 0x7F38304Cu;
    // 7F38304C: lfd     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F38304Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F383050:
    ctx->pc = 0x7F383050u;
    // 7F383050: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F383054:
    ctx->pc = 0x7F383054u;
    // 7F383054: lfd     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F383054u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F383058:
    ctx->pc = 0x7F383058u;
    // 7F383058: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F383058u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F38305C:
    ctx->pc = 0x7F38305Cu;
    // 7F38305C: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F38305Cu)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F383060:
    ctx->pc = 0x7F383060u;
    // 7F383060: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F383060u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F383064:
    ctx->pc = 0x7F383064u;
    // 7F383064: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F383064u)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F383068:
    ctx->pc = 0x7F383068u;
    // 7F383068: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F383068u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F38306C:
    ctx->pc = 0x7F38306Cu;
    // 7F38306C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F38306Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F383070:
    ctx->pc = 0x7F383070u;
    // 7F383070: lwz     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F383074:
    ctx->pc = 0x7F383074u;
    // 7F383074: bl      0x7F17438C
    {
            ctx->lr = 0x7F383078u;
            ctx->pc = 0x7F17438Cu;
            return;
    }

label_7F383078:
    ctx->pc = 0x7F383078u;
    ctx->downcount -= 39;
    // 7F383078: lbz     r0, 995(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(995);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F38307C:
    ctx->pc = 0x7F38307Cu;
    // 7F38307C: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F383080:
    ctx->pc = 0x7F383080u;
    // 7F383080: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F383084:
    ctx->pc = 0x7F383084u;
    // 7F383084: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F383088:
    ctx->pc = 0x7F383088u;
    // 7F383088: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F38308C:
    ctx->pc = 0x7F38308Cu;
    // 7F38308C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F383090:
    ctx->pc = 0x7F383090u;
    // 7F383090: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F383094:
    ctx->pc = 0x7F383094u;
    // 7F383094: sth     r3, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F383098:
    ctx->pc = 0x7F383098u;
    // 7F383098: lfd     f3, -22240(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F383098u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-22240);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F38309C:
    ctx->pc = 0x7F38309Cu;
    // 7F38309C: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3830A0:
    ctx->pc = 0x7F3830A0u;
    // 7F3830A0: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F3830A4:
    ctx->pc = 0x7F3830A4u;
    // 7F3830A4: lfs     f0, -22224(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3830A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3830A8:
    ctx->pc = 0x7F3830A8u;
    // 7F3830A8: stw     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3830AC:
    ctx->pc = 0x7F3830ACu;
    // 7F3830AC: lfd     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3830ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F3830B0:
    ctx->pc = 0x7F3830B0u;
    // 7F3830B0: sth     r30, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        mem_write16(ctx, ea, (u16)ctx->gpr[30]);
    }

label_7F3830B4:
    ctx->pc = 0x7F3830B4u;
    // 7F3830B4: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F3830B4u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F3830B8:
    ctx->pc = 0x7F3830B8u;
    // 7F3830B8: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3830B8u)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F3830BC:
    ctx->pc = 0x7F3830BCu;
    // 7F3830BC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3830BCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F3830C0:
    ctx->pc = 0x7F3830C0u;
    // 7F3830C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3830C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3830C4:
    ctx->pc = 0x7F3830C4u;
    // 7F3830C4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3830C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3830C8:
    ctx->pc = 0x7F3830C8u;
    // 7F3830C8: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3830CC:
    ctx->pc = 0x7F3830CCu;
    // 7F3830CC: sth     r3, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F3830D0:
    ctx->pc = 0x7F3830D0u;
    // 7F3830D0: stb     r0, 993(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(993);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3830D4:
    ctx->pc = 0x7F3830D4u;
    // 7F3830D4: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3830D8:
    ctx->pc = 0x7F3830D8u;
    // 7F3830D8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3830DC:
    ctx->pc = 0x7F3830DCu;
    // 7F3830DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3830E0:
    ctx->pc = 0x7F3830E0u;
    // 7F3830E0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F3830E4:
    ctx->pc = 0x7F3830E4u;
    // 7F3830E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3830E8:
    ctx->pc = 0x7F3830E8u;
    ctx->downcount -= 13;
    // 7F3830E8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F3830EC:
    ctx->pc = 0x7F3830ECu;
    // 7F3830EC: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F3830F0:
    ctx->pc = 0x7F3830F0u;
    // 7F3830F0: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F3830F4:
    ctx->pc = 0x7F3830F4u;
    // 7F3830F4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3830F8:
    ctx->pc = 0x7F3830F8u;
    // 7F3830F8: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F3830FC:
    ctx->pc = 0x7F3830FCu;
    // 7F3830FC: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F383100:
    ctx->pc = 0x7F383100u;
    // 7F383100: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F383104:
    ctx->pc = 0x7F383104u;
    // 7F383104: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383108:
    ctx->pc = 0x7F383108u;
    // 7F383108: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F38310C:
    ctx->pc = 0x7F38310Cu;
    ctx->downcount -= 9;
    // 7F38310C: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383110:
    ctx->pc = 0x7F383110u;
    // 7F383110: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383114:
    ctx->pc = 0x7F383114u;
    // 7F383114: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383118:
    ctx->pc = 0x7F383118u;
    // 7F383118: stw     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F38311C:
    ctx->pc = 0x7F38311Cu;
    // 7F38311C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383120:
    ctx->pc = 0x7F383120u;
    // 7F383120: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383124:
    ctx->pc = 0x7F383124u;
    // 7F383124: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383128:
    ctx->pc = 0x7F383128u;
    // 7F383128: addi    r3, r3, 3684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3684);

label_7F38312C:
    ctx->pc = 0x7F38312Cu;
    // 7F38312C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F383130u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F383130:
    ctx->pc = 0x7F383130u;
    ctx->downcount -= 7;
    // 7F383130: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383134:
    ctx->pc = 0x7F383134u;
    // 7F383134: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F383138:
    ctx->pc = 0x7F383138u;
    // 7F383138: addi    r5, r1, 36
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(36);

label_7F38313C:
    ctx->pc = 0x7F38313Cu;
    // 7F38313C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383140:
    ctx->pc = 0x7F383140u;
    // 7F383140: addi    r4, r3, 3680
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3680);

label_7F383144:
    ctx->pc = 0x7F383144u;
    // 7F383144: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F383148:
    loop_7F383148(ctx);
    if (ctx->pc == 0x7F38315Cu) goto label_7F38315C;
    return;
label_7F38314C:
    ctx->pc = 0x7F38314Cu;
    // 7F38314C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F383150:
    ctx->pc = 0x7F383150u;
    // 7F383150: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383154:
    ctx->pc = 0x7F383154u;
    // 7F383154: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F383158:
    // 7F383158: bc    16, 0, 0x7F383148
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383148u;
                return;
            }
            goto label_7F383148;
        }
    }

label_7F38315C:
    ctx->pc = 0x7F38315Cu;
    ctx->downcount -= 16;
    // 7F38315C: lfs     f2, 416(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F38315Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(416);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F383160:
    ctx->pc = 0x7F383160u;
    // 7F383160: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F383164:
    ctx->pc = 0x7F383164u;
    // 7F383164: lfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F383164u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F383168:
    ctx->pc = 0x7F383168u;
    // 7F383168: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F38316C:
    ctx->pc = 0x7F38316Cu;
    // 7F38316C: lfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F38316Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F383170:
    ctx->pc = 0x7F383170u;
    // 7F383170: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F383174:
    ctx->pc = 0x7F383174u;
    // 7F383174: fsubs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F383174u)) return;
    ppc_fsubs(ctx, 2, 2, 0);

label_7F383178:
    ctx->pc = 0x7F383178u;
    // 7F383178: lfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F383178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F38317C:
    ctx->pc = 0x7F38317Cu;
    // 7F38317C: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F38317Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F383180:
    ctx->pc = 0x7F383180u;
    // 7F383180: lfs     f2, 420(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F383180u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F383184:
    ctx->pc = 0x7F383184u;
    // 7F383184: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F383184u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F383188:
    ctx->pc = 0x7F383188u;
    // 7F383188: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F383188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F38318C:
    ctx->pc = 0x7F38318Cu;
    // 7F38318C: lfs     f1, 424(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F38318Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F383190:
    ctx->pc = 0x7F383190u;
    // 7F383190: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F383190u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F383194:
    ctx->pc = 0x7F383194u;
    // 7F383194: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F383194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F383198:
    ctx->pc = 0x7F383198u;
    // 7F383198: bl      0x7F3B3648
    {
            ctx->lr = 0x7F38319Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F38319C:
    ctx->pc = 0x7F38319Cu;
    ctx->downcount -= 20;
    // 7F38319C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3831A0:
    ctx->pc = 0x7F3831A0u;
    // 7F3831A0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3831A4:
    ctx->pc = 0x7F3831A4u;
    // 7F3831A4: sth     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3831A8:
    ctx->pc = 0x7F3831A8u;
    // 7F3831A8: addi    r4, r3, -22220
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22220);

label_7F3831AC:
    ctx->pc = 0x7F3831ACu;
    // 7F3831AC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3831B0:
    ctx->pc = 0x7F3831B0u;
    // 7F3831B0: lfs     f2, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3831B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3831B4:
    ctx->pc = 0x7F3831B4u;
    // 7F3831B4: lfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3831B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3831B8:
    ctx->pc = 0x7F3831B8u;
    // 7F3831B8: lfs     f1, -22224(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F3831B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-22224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F3831BC:
    ctx->pc = 0x7F3831BCu;
    // 7F3831BC: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3831BCu)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F3831C0:
    ctx->pc = 0x7F3831C0u;
    // 7F3831C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3831C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3831C4:
    ctx->pc = 0x7F3831C4u;
    // 7F3831C4: stfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3831C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3831C8:
    ctx->pc = 0x7F3831C8u;
    // 7F3831C8: lwz     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3831CC:
    ctx->pc = 0x7F3831CCu;
    // 7F3831CC: sth     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3831D0:
    ctx->pc = 0x7F3831D0u;
    // 7F3831D0: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3831D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3831D4:
    ctx->pc = 0x7F3831D4u;
    // 7F3831D4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3831D4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F3831D8:
    ctx->pc = 0x7F3831D8u;
    // 7F3831D8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F3831D8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F3831DC:
    ctx->pc = 0x7F3831DCu;
    // 7F3831DC: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F3831DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F3831E0:
    ctx->pc = 0x7F3831E0u;
    // 7F3831E0: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3831E4:
    ctx->pc = 0x7F3831E4u;
    // 7F3831E4: sth     r0, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3831E8:
    ctx->pc = 0x7F3831E8u;
    // 7F3831E8: bl      0x7F3830E8
    {
            ctx->lr = 0x7F3831ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3830E8u;
                return;
            }
            goto label_7F3830E8;
    }

label_7F3831EC:
    ctx->pc = 0x7F3831ECu;
    ctx->downcount -= 52;
    // 7F3831EC: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F3831F0:
    ctx->pc = 0x7F3831F0u;
    // 7F3831F0: lha     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3831F4:
    ctx->pc = 0x7F3831F4u;
    // 7F3831F4: divwu   r4, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[4] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F3831F8:
    ctx->pc = 0x7F3831F8u;
    // 7F3831F8: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F3831FC:
    ctx->pc = 0x7F3831FCu;
    // 7F3831FC: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F383200:
    ctx->pc = 0x7F383200u;
    // 7F383200: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F383204:
    ctx->pc = 0x7F383204u;
    // 7F383204: addi    r0, r3, -25
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-25);

label_7F383208:
    ctx->pc = 0x7F383208u;
    // 7F383208: sth     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F38320C:
    ctx->pc = 0x7F38320Cu;
    // 7F38320C: bl      0x7F3830E8
    {
            ctx->lr = 0x7F383210u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3830E8u;
                return;
            }
            goto label_7F3830E8;
    }

label_7F383210:
    ctx->pc = 0x7F383210u;
    ctx->downcount -= 52;
    // 7F383210: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F383214:
    ctx->pc = 0x7F383214u;
    // 7F383214: lha     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F383218:
    ctx->pc = 0x7F383218u;
    // 7F383218: divwu   r4, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[4] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F38321C:
    ctx->pc = 0x7F38321Cu;
    // 7F38321C: mullw   r4, r4, r5
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[4] = (u32)product;
    }

label_7F383220:
    ctx->pc = 0x7F383220u;
    // 7F383220: subf   r3, r4, r3
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F383224:
    ctx->pc = 0x7F383224u;
    // 7F383224: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F383228:
    ctx->pc = 0x7F383228u;
    // 7F383228: addi    r0, r3, -25
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-25);

label_7F38322C:
    ctx->pc = 0x7F38322Cu;
    // 7F38322C: sth     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F383230:
    ctx->pc = 0x7F383230u;
    // 7F383230: bl      0x7F3830E8
    {
            ctx->lr = 0x7F383234u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3830E8u;
                return;
            }
            goto label_7F3830E8;
    }

label_7F383234:
    ctx->pc = 0x7F383234u;
    ctx->downcount -= 59;
    // 7F383234: li      r6, 50
    ctx->gpr[6] = (u32)(s32)(50);

label_7F383238:
    ctx->pc = 0x7F383238u;
    // 7F383238: lha     r4, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F38323C:
    ctx->pc = 0x7F38323Cu;
    // 7F38323C: divwu   r5, r3, r6
    {
        u32 divisor = ctx->gpr[6];
        ctx->gpr[5] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F383240:
    ctx->pc = 0x7F383240u;
    // 7F383240: li      r0, 60
    ctx->gpr[0] = (u32)(s32)(60);

label_7F383244:
    ctx->pc = 0x7F383244u;
    // 7F383244: mullw   r5, r5, r6
    {
        s64 product = (s64)(s32)ctx->gpr[5] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[5] = (u32)product;
    }

label_7F383248:
    ctx->pc = 0x7F383248u;
    // 7F383248: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F38324C:
    ctx->pc = 0x7F38324Cu;
    // 7F38324C: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F383250:
    ctx->pc = 0x7F383250u;
    // 7F383250: addi    r3, r3, -25
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25);

label_7F383254:
    ctx->pc = 0x7F383254u;
    // 7F383254: sth     r3, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F383258:
    ctx->pc = 0x7F383258u;
    // 7F383258: stb     r0, 993(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(993);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F38325C:
    ctx->pc = 0x7F38325Cu;
    // 7F38325C: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383260:
    ctx->pc = 0x7F383260u;
    // 7F383260: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F383264:
    ctx->pc = 0x7F383264u;
    // 7F383264: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383268:
    ctx->pc = 0x7F383268u;
    // 7F383268: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F38326C:
    ctx->pc = 0x7F38326Cu;
    // 7F38326C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383270:
    ctx->pc = 0x7F383270u;
    ctx->downcount -= 8;
    // 7F383270: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383274:
    ctx->pc = 0x7F383274u;
    // 7F383274: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383278:
    ctx->pc = 0x7F383278u;
    // 7F383278: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38327C:
    ctx->pc = 0x7F38327Cu;
    // 7F38327C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F383280:
    ctx->pc = 0x7F383280u;
    // 7F383280: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383284:
    ctx->pc = 0x7F383284u;
    // 7F383284: lbz     r3, 993(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(993);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F383288:
    ctx->pc = 0x7F383288u;
    // 7F383288: extsb. r0, r3
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

label_7F38328C:
    ctx->pc = 0x7F38328Cu;
    // 7F38328C: bc    4, 1, 0x7F3832EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3832EC;
        }
    }

label_7F383290:
    ctx->pc = 0x7F383290u;
    ctx->downcount -= 4;
    // 7F383290: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F383294:
    ctx->pc = 0x7F383294u;
    // 7F383294: addi    r3, r31, 960
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(960);

label_7F383298:
    ctx->pc = 0x7F383298u;
    // 7F383298: stb     r0, 993(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(993);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F38329C:
    ctx->pc = 0x7F38329Cu;
    // 7F38329C: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F3832A0u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F3832A0:
    ctx->pc = 0x7F3832A0u;
    ctx->downcount -= 25;
    // 7F3832A0: lha     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3832A4:
    ctx->pc = 0x7F3832A4u;
    // 7F3832A4: mulli   r0, r0, 7
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)7);

label_7F3832A8:
    ctx->pc = 0x7F3832A8u;
    // 7F3832A8: sth     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832AC:
    ctx->pc = 0x7F3832ACu;
    // 7F3832AC: lha     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3832B0:
    ctx->pc = 0x7F3832B0u;
    // 7F3832B0: mulli   r0, r0, 7
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)7);

label_7F3832B4:
    ctx->pc = 0x7F3832B4u;
    // 7F3832B4: sth     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832B8:
    ctx->pc = 0x7F3832B8u;
    // 7F3832B8: lha     r0, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3832BC:
    ctx->pc = 0x7F3832BCu;
    // 7F3832BC: mulli   r0, r0, 7
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)7);

label_7F3832C0:
    ctx->pc = 0x7F3832C0u;
    // 7F3832C0: sth     r0, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832C4:
    ctx->pc = 0x7F3832C4u;
    // 7F3832C4: lha     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3832C8:
    ctx->pc = 0x7F3832C8u;
    // 7F3832C8: srawi r0, r0, 3
    {
        u32 sh = 3u;
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

label_7F3832CC:
    ctx->pc = 0x7F3832CCu;
    // 7F3832CC: sth     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832D0:
    ctx->pc = 0x7F3832D0u;
    // 7F3832D0: lha     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3832D4:
    ctx->pc = 0x7F3832D4u;
    // 7F3832D4: srawi r0, r0, 3
    {
        u32 sh = 3u;
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

label_7F3832D8:
    ctx->pc = 0x7F3832D8u;
    // 7F3832D8: sth     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832DC:
    ctx->pc = 0x7F3832DCu;
    // 7F3832DC: lha     r0, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3832E0:
    ctx->pc = 0x7F3832E0u;
    // 7F3832E0: srawi r0, r0, 3
    {
        u32 sh = 3u;
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

label_7F3832E4:
    ctx->pc = 0x7F3832E4u;
    // 7F3832E4: sth     r0, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832E8:
    ctx->pc = 0x7F3832E8u;
    // 7F3832E8: b       0x7F3832FC
    {
            goto label_7F3832FC;
    }

label_7F3832EC:
    ctx->pc = 0x7F3832ECu;
    ctx->downcount -= 4;
    // 7F3832EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3832F0:
    ctx->pc = 0x7F3832F0u;
    // 7F3832F0: sth     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832F4:
    ctx->pc = 0x7F3832F4u;
    // 7F3832F4: sth     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832F8:
    ctx->pc = 0x7F3832F8u;
    // 7F3832F8: sth     r0, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F3832FC:
    ctx->pc = 0x7F3832FCu;
    ctx->downcount -= 6;
    // 7F3832FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383300:
    ctx->pc = 0x7F383300u;
    // 7F383300: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F383304:
    ctx->pc = 0x7F383304u;
    // 7F383304: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383308:
    ctx->pc = 0x7F383308u;
    // 7F383308: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F38330C:
    ctx->pc = 0x7F38330Cu;
    // 7F38330C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383310:
    ctx->pc = 0x7F383310u;
    ctx->downcount -= 6;
    // 7F383310: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383314:
    ctx->pc = 0x7F383314u;
    // 7F383314: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383318:
    ctx->pc = 0x7F383318u;
    // 7F383318: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38331C:
    ctx->pc = 0x7F38331Cu;
    // 7F38331C: lbz     r0, 994(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(994);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F383320:
    ctx->pc = 0x7F383320u;
    // 7F383320: extsb. r0, r0
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

label_7F383324:
    ctx->pc = 0x7F383324u;
    // 7F383324: bc    4, 2, 0x7F3833A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3833A0;
        }
    }

label_7F383328:
    ctx->pc = 0x7F383328u;
    ctx->downcount -= 11;
    // 7F383328: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F38332C:
    ctx->pc = 0x7F38332Cu;
    // 7F38332C: lwzu     r0, -5736(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5736);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F383330:
    ctx->pc = 0x7F383330u;
    // 7F383330: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F383334:
    ctx->pc = 0x7F383334u;
    // 7F383334: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F383338:
    ctx->pc = 0x7F383338u;
    // 7F383338: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F38333C:
    ctx->pc = 0x7F38333Cu;
    // 7F38333C: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F383340:
    ctx->pc = 0x7F383340u;
    // 7F383340: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F383344:
    ctx->pc = 0x7F383344u;
    // 7F383344: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F383348:
    ctx->pc = 0x7F383348u;
    // 7F383348: xor   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[6];
    }

label_7F38334C:
    ctx->pc = 0x7F38334Cu;
    // 7F38334C: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F383350:
    ctx->pc = 0x7F383350u;
    // 7F383350: bc    12, 2, 0x7F3833D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3833D4;
        }
    }

label_7F383354:
    ctx->pc = 0x7F383354u;
    ctx->downcount -= 13;
    // 7F383354: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F383358:
    ctx->pc = 0x7F383358u;
    // 7F383358: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F38335C:
    ctx->pc = 0x7F38335Cu;
    // 7F38335C: stb     r4, 994(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(994);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F383360:
    ctx->pc = 0x7F383360u;
    // 7F383360: lwz     r7, 968(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(968);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F383364:
    ctx->pc = 0x7F383364u;
    // 7F383364: lwz     r5, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383368:
    ctx->pc = 0x7F383368u;
    // 7F383368: lwz     r4, 3968(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F38336C:
    ctx->pc = 0x7F38336Cu;
    // 7F38336C: lwz     r5, 3972(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3972);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383370:
    ctx->pc = 0x7F383370u;
    // 7F383370: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F383374:
    ctx->pc = 0x7F383374u;
    // 7F383374: and   r4, r5, r6
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[6];
    }

label_7F383378:
    ctx->pc = 0x7F383378u;
    // 7F383378: xor   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[6];
    }

label_7F38337C:
    ctx->pc = 0x7F38337Cu;
    // 7F38337C: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F383380:
    ctx->pc = 0x7F383380u;
    // 7F383380: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F383384:
    ctx->pc = 0x7F383384u;
    // 7F383384: bc    4, 2, 0x7F3833D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3833D4;
        }
    }

label_7F383388:
    ctx->pc = 0x7F383388u;
    ctx->downcount -= 3;
    // 7F383388: lwz     r0, 384(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(384);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38338C:
    ctx->pc = 0x7F38338Cu;
    // 7F38338C: cmpwi   r0, 2000
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F383390:
    ctx->pc = 0x7F383390u;
    // 7F383390: bc    4, 0, 0x7F3833D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3833D4;
        }
    }

label_7F383394:
    ctx->pc = 0x7F383394u;
    ctx->downcount -= 2;
    // 7F383394: addi    r3, r3, 52
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(52);

label_7F383398:
    ctx->pc = 0x7F383398u;
    // 7F383398: bl      0x7F1FCFC0
    {
            ctx->lr = 0x7F38339Cu;
            ctx->pc = 0x7F1FCFC0u;
            return;
    }

label_7F38339C:
    ctx->pc = 0x7F38339Cu;
    ctx->downcount -= 1;
    // 7F38339C: b       0x7F3833D4
    {
            goto label_7F3833D4;
    }

label_7F3833A0:
    ctx->pc = 0x7F3833A0u;
    ctx->downcount -= 12;
    // 7F3833A0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F3833A4:
    ctx->pc = 0x7F3833A4u;
    // 7F3833A4: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F3833A8:
    ctx->pc = 0x7F3833A8u;
    // 7F3833A8: addi    r6, r5, -5736
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-5736);

label_7F3833AC:
    ctx->pc = 0x7F3833ACu;
    // 7F3833AC: lwz     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3833B0:
    ctx->pc = 0x7F3833B0u;
    // 7F3833B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3833B4:
    ctx->pc = 0x7F3833B4u;
    // 7F3833B4: lwz     r6, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3833B8:
    ctx->pc = 0x7F3833B8u;
    // 7F3833B8: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F3833BC:
    ctx->pc = 0x7F3833BCu;
    // 7F3833BC: and   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] & ctx->gpr[4];
    }

label_7F3833C0:
    ctx->pc = 0x7F3833C0u;
    // 7F3833C0: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F3833C4:
    ctx->pc = 0x7F3833C4u;
    // 7F3833C4: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F3833C8:
    ctx->pc = 0x7F3833C8u;
    // 7F3833C8: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3833CC:
    ctx->pc = 0x7F3833CCu;
    // 7F3833CC: bc    4, 2, 0x7F3833D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3833D4;
        }
    }

label_7F3833D0:
    ctx->pc = 0x7F3833D0u;
    ctx->downcount -= 1;
    // 7F3833D0: stb     r5, 994(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(994);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3833D4:
    ctx->pc = 0x7F3833D4u;
    ctx->downcount -= 5;
    // 7F3833D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3833D8:
    ctx->pc = 0x7F3833D8u;
    // 7F3833D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3833DC:
    ctx->pc = 0x7F3833DCu;
    // 7F3833DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3833E0:
    ctx->pc = 0x7F3833E0u;
    // 7F3833E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3833E4:
    ctx->pc = 0x7F3833E4u;
    ctx->downcount -= 9;
    // 7F3833E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3833E8:
    ctx->pc = 0x7F3833E8u;
    // 7F3833E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3833EC:
    ctx->pc = 0x7F3833ECu;
    // 7F3833EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3833F0:
    ctx->pc = 0x7F3833F0u;
    // 7F3833F0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3833F4:
    ctx->pc = 0x7F3833F4u;
    // 7F3833F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3833F8:
    ctx->pc = 0x7F3833F8u;
    // 7F3833F8: lwz     r4, 972(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(972);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3833FC:
    ctx->pc = 0x7F3833FCu;
    // 7F3833FC: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383400:
    ctx->pc = 0x7F383400u;
    // 7F383400: cmpwi   r0, -2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F383404:
    ctx->pc = 0x7F383404u;
    // 7F383404: bc    4, 2, 0x7F38341C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38341C;
        }
    }

label_7F383408:
    ctx->pc = 0x7F383408u;
    ctx->downcount -= 1;
    // 7F383408: bl      0x7F382F48
    {
            ctx->lr = 0x7F38340Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382F48u;
                return;
            }
            goto label_7F382F48;
    }

label_7F38340C:
    ctx->pc = 0x7F38340Cu;
    ctx->downcount -= 4;
    // 7F38340C: lwz     r3, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383410:
    ctx->pc = 0x7F383410u;
    // 7F383410: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383414:
    ctx->pc = 0x7F383414u;
    // 7F383414: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383418:
    ctx->pc = 0x7F383418u;
    // 7F383418: b       0x7F38376C
    {
            goto label_7F38376C;
    }

label_7F38341C:
    ctx->pc = 0x7F38341Cu;
    ctx->downcount -= 2;
    // 7F38341C: cmpwi   r0, -1
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

label_7F383420:
    ctx->pc = 0x7F383420u;
    // 7F383420: bc    4, 2, 0x7F383440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383440;
        }
    }

label_7F383424:
    ctx->pc = 0x7F383424u;
    ctx->downcount -= 1;
    // 7F383424: bl      0x7F382C5C
    {
            ctx->lr = 0x7F383428u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382C5Cu;
                return;
            }
            goto label_7F382C5C;
    }

label_7F383428:
    ctx->pc = 0x7F383428u;
    ctx->downcount -= 2;
    // 7F383428: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F38342C:
    ctx->pc = 0x7F38342Cu;
    // 7F38342C: bl      0x7F382D74
    {
            ctx->lr = 0x7F383430u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382D74u;
                return;
            }
            goto label_7F382D74;
    }

label_7F383430:
    ctx->pc = 0x7F383430u;
    ctx->downcount -= 4;
    // 7F383430: lwz     r3, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383434:
    ctx->pc = 0x7F383434u;
    // 7F383434: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383438:
    ctx->pc = 0x7F383438u;
    // 7F383438: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38343C:
    ctx->pc = 0x7F38343Cu;
    // 7F38343C: b       0x7F38376C
    {
            goto label_7F38376C;
    }

label_7F383440:
    ctx->pc = 0x7F383440u;
    ctx->downcount -= 2;
    // 7F383440: cmpwi   r0, 0
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

label_7F383444:
    ctx->pc = 0x7F383444u;
    // 7F383444: bc    4, 2, 0x7F383450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383450;
        }
    }

label_7F383448:
    ctx->pc = 0x7F383448u;
    ctx->downcount -= 1;
    // 7F383448: bl      0x7F382CF4
    {
            ctx->lr = 0x7F38344Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382CF4u;
                return;
            }
            goto label_7F382CF4;
    }

label_7F38344C:
    ctx->pc = 0x7F38344Cu;
    ctx->downcount -= 1;
    // 7F38344C: b       0x7F38376C
    {
            goto label_7F38376C;
    }

label_7F383450:
    ctx->pc = 0x7F383450u;
    ctx->downcount -= 2;
    // 7F383450: cmpwi   r0, 2
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

label_7F383454:
    ctx->pc = 0x7F383454u;
    // 7F383454: bc    4, 2, 0x7F38346C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38346C;
        }
    }

label_7F383458:
    ctx->pc = 0x7F383458u;
    ctx->downcount -= 1;
    // 7F383458: bl      0x7F382DE8
    {
            ctx->lr = 0x7F38345Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382DE8u;
                return;
            }
            goto label_7F382DE8;
    }

label_7F38345C:
    ctx->pc = 0x7F38345Cu;
    ctx->downcount -= 4;
    // 7F38345C: lwz     r3, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383460:
    ctx->pc = 0x7F383460u;
    // 7F383460: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F383464:
    ctx->pc = 0x7F383464u;
    // 7F383464: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383468:
    ctx->pc = 0x7F383468u;
    // 7F383468: b       0x7F38376C
    {
            goto label_7F38376C;
    }

label_7F38346C:
    ctx->pc = 0x7F38346Cu;
    ctx->downcount -= 4;
    // 7F38346C: lbz     r0, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F383470:
    ctx->pc = 0x7F383470u;
    // 7F383470: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F383474:
    ctx->pc = 0x7F383474u;
    // 7F383474: cmpwi   r0, 3
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

label_7F383478:
    ctx->pc = 0x7F383478u;
    // 7F383478: bc    4, 1, 0x7F3834DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3834DC;
        }
    }

label_7F38347C:
    ctx->pc = 0x7F38347Cu;
    ctx->downcount -= 17;
    // 7F38347C: lwz     r3, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383480:
    ctx->pc = 0x7F383480u;
    // 7F383480: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383484:
    ctx->pc = 0x7F383484u;
    // 7F383484: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383488:
    ctx->pc = 0x7F383488u;
    // 7F383488: mulli   r3, r3, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)324);

label_7F38348C:
    ctx->pc = 0x7F38348Cu;
    // 7F38348C: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F383490:
    ctx->pc = 0x7F383490u;
    // 7F383490: lwz     r3, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383494:
    ctx->pc = 0x7F383494u;
    // 7F383494: ori     r3, r3, 0x3000
    ctx->gpr[3] = ctx->gpr[3] | 0x3000u;

label_7F383498:
    ctx->pc = 0x7F383498u;
    // 7F383498: stw     r3, 636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F38349C:
    ctx->pc = 0x7F38349Cu;
    // 7F38349C: stb     r0, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3834A0:
    ctx->pc = 0x7F3834A0u;
    // 7F3834A0: lwz     r3, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3834A4:
    ctx->pc = 0x7F3834A4u;
    // 7F3834A4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F3834A8:
    ctx->pc = 0x7F3834A8u;
    // 7F3834A8: stw     r0, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3834AC:
    ctx->pc = 0x7F3834ACu;
    // 7F3834AC: lwz     r0, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3834B0:
    ctx->pc = 0x7F3834B0u;
    // 7F3834B0: cmpwi   r0, 3
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

label_7F3834B4:
    ctx->pc = 0x7F3834B4u;
    // 7F3834B4: bc    12, 0, 0x7F3834C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3834C0;
        }
    }

label_7F3834B8:
    ctx->pc = 0x7F3834B8u;
    ctx->downcount -= 2;
    // 7F3834B8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3834BC:
    ctx->pc = 0x7F3834BCu;
    // 7F3834BC: stw     r0, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3834C0:
    ctx->pc = 0x7F3834C0u;
    ctx->downcount -= 9;
    // 7F3834C0: lwz     r0, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3834C4:
    ctx->pc = 0x7F3834C4u;
    // 7F3834C4: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3834C8:
    ctx->pc = 0x7F3834C8u;
    // 7F3834C8: mulli   r0, r0, 324
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F3834CC:
    ctx->pc = 0x7F3834CCu;
    // 7F3834CC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F3834D0:
    ctx->pc = 0x7F3834D0u;
    // 7F3834D0: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3834D4:
    ctx->pc = 0x7F3834D4u;
    // 7F3834D4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F3834D8:
    ctx->pc = 0x7F3834D8u;
    // 7F3834D8: stw     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3834DC:
    ctx->pc = 0x7F3834DCu;
    ctx->downcount -= 2;
    // 7F3834DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3834E0:
    ctx->pc = 0x7F3834E0u;
    // 7F3834E0: bl      0x7F383310
    {
            ctx->lr = 0x7F3834E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383310u;
                return;
            }
            goto label_7F383310;
    }

label_7F3834E4:
    ctx->pc = 0x7F3834E4u;
    ctx->downcount -= 4;
    // 7F3834E4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3834E8:
    ctx->pc = 0x7F3834E8u;
    // 7F3834E8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3834EC:
    ctx->pc = 0x7F3834ECu;
    // 7F3834EC: addi    r3, r3, 3684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3684);

label_7F3834F0:
    ctx->pc = 0x7F3834F0u;
    // 7F3834F0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F3834F4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F3834F4:
    ctx->pc = 0x7F3834F4u;
    ctx->downcount -= 5;
    // 7F3834F4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3834F8:
    ctx->pc = 0x7F3834F8u;
    // 7F3834F8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3834FC:
    ctx->pc = 0x7F3834FCu;
    // 7F3834FC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383500:
    ctx->pc = 0x7F383500u;
    // 7F383500: rlwinm. r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F383504:
    ctx->pc = 0x7F383504u;
    // 7F383504: bc    12, 2, 0x7F383558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383558;
        }
    }

label_7F383508:
    ctx->pc = 0x7F383508u;
    ctx->downcount -= 10;
    // 7F383508: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38350C:
    ctx->pc = 0x7F38350Cu;
    // 7F38350C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383510:
    ctx->pc = 0x7F383510u;
    // 7F383510: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F383514:
    ctx->pc = 0x7F383514u;
    // 7F383514: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383518:
    ctx->pc = 0x7F383518u;
    // 7F383518: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38351C:
    ctx->pc = 0x7F38351Cu;
    // 7F38351C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F383520:
    ctx->pc = 0x7F383520u;
    // 7F383520: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383524:
    ctx->pc = 0x7F383524u;
    // 7F383524: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383528:
    ctx->pc = 0x7F383528u;
    // 7F383528: cmpwi   r0, 2
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

label_7F38352C:
    ctx->pc = 0x7F38352Cu;
    // 7F38352C: bc    4, 2, 0x7F3835B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3835B0;
        }
    }

label_7F383530:
    ctx->pc = 0x7F383530u;
    ctx->downcount -= 3;
    // 7F383530: lwz     r0, 980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383534:
    ctx->pc = 0x7F383534u;
    // 7F383534: cmpwi   r0, 1
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

label_7F383538:
    ctx->pc = 0x7F383538u;
    // 7F383538: bc    4, 2, 0x7F383544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383544;
        }
    }

label_7F38353C:
    ctx->pc = 0x7F38353Cu;
    ctx->downcount -= 2;
    // 7F38353C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383540:
    ctx->pc = 0x7F383540u;
    // 7F383540: stw     r0, 980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383544:
    ctx->pc = 0x7F383544u;
    ctx->downcount -= 5;
    // 7F383544: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383548:
    ctx->pc = 0x7F383548u;
    // 7F383548: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38354C:
    ctx->pc = 0x7F38354Cu;
    // 7F38354C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F383550:
    ctx->pc = 0x7F383550u;
    // 7F383550: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383554:
    ctx->pc = 0x7F383554u;
    // 7F383554: b       0x7F3835B0
    {
            goto label_7F3835B0;
    }

label_7F383558:
    ctx->pc = 0x7F383558u;
    ctx->downcount -= 10;
    // 7F383558: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38355C:
    ctx->pc = 0x7F38355Cu;
    // 7F38355C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383560:
    ctx->pc = 0x7F383560u;
    // 7F383560: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F383564:
    ctx->pc = 0x7F383564u;
    // 7F383564: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383568:
    ctx->pc = 0x7F383568u;
    // 7F383568: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38356C:
    ctx->pc = 0x7F38356Cu;
    // 7F38356C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F383570:
    ctx->pc = 0x7F383570u;
    // 7F383570: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383574:
    ctx->pc = 0x7F383574u;
    // 7F383574: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383578:
    ctx->pc = 0x7F383578u;
    // 7F383578: cmpwi   r0, 2
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

label_7F38357C:
    ctx->pc = 0x7F38357Cu;
    // 7F38357C: bc    4, 2, 0x7F3835B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3835B0;
        }
    }

label_7F383580:
    ctx->pc = 0x7F383580u;
    ctx->downcount -= 3;
    // 7F383580: lwz     r0, 984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383584:
    ctx->pc = 0x7F383584u;
    // 7F383584: cmpwi   r0, 1
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

label_7F383588:
    ctx->pc = 0x7F383588u;
    // 7F383588: bc    4, 2, 0x7F3835B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3835B0;
        }
    }

label_7F38358C:
    ctx->pc = 0x7F38358Cu;
    ctx->downcount -= 3;
    // 7F38358C: lwz     r0, 980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383590:
    ctx->pc = 0x7F383590u;
    // 7F383590: cmpwi   r0, 0
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

label_7F383594:
    ctx->pc = 0x7F383594u;
    // 7F383594: bc    4, 2, 0x7F3835A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3835A0;
        }
    }

label_7F383598:
    ctx->pc = 0x7F383598u;
    ctx->downcount -= 2;
    // 7F383598: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F38359C:
    ctx->pc = 0x7F38359Cu;
    // 7F38359C: stw     r0, 980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3835A0:
    ctx->pc = 0x7F3835A0u;
    ctx->downcount -= 4;
    // 7F3835A0: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3835A4:
    ctx->pc = 0x7F3835A4u;
    // 7F3835A4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3835A8:
    ctx->pc = 0x7F3835A8u;
    // 7F3835A8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F3835AC:
    ctx->pc = 0x7F3835ACu;
    // 7F3835AC: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3835B0:
    ctx->pc = 0x7F3835B0u;
    ctx->downcount -= 15;
    // 7F3835B0: lwz     r5, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3835B4:
    ctx->pc = 0x7F3835B4u;
    // 7F3835B4: lis     r3, 7
    ctx->gpr[3] = ((u32)(s32)(7) << 16);

label_7F3835B8:
    ctx->pc = 0x7F3835B8u;
    // 7F3835B8: lis     r4, -16384
    ctx->gpr[4] = ((u32)(s32)(-16384) << 16);

label_7F3835BC:
    ctx->pc = 0x7F3835BCu;
    // 7F3835BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3835C0:
    ctx->pc = 0x7F3835C0u;
    // 7F3835C0: lwz     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3835C4:
    ctx->pc = 0x7F3835C4u;
    // 7F3835C4: addi    r5, r4, 16388
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16388);

label_7F3835C8:
    ctx->pc = 0x7F3835C8u;
    // 7F3835C8: addi    r3, r3, 4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4096);

label_7F3835CC:
    ctx->pc = 0x7F3835CCu;
    // 7F3835CC: lwz     r4, 3968(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3835D0:
    ctx->pc = 0x7F3835D0u;
    // 7F3835D0: lwz     r6, 3972(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3972);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3835D4:
    ctx->pc = 0x7F3835D4u;
    // 7F3835D4: and   r4, r4, r3
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F3835D8:
    ctx->pc = 0x7F3835D8u;
    // 7F3835D8: and   r3, r6, r5
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F3835DC:
    ctx->pc = 0x7F3835DCu;
    // 7F3835DC: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F3835E0:
    ctx->pc = 0x7F3835E0u;
    // 7F3835E0: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F3835E4:
    ctx->pc = 0x7F3835E4u;
    // 7F3835E4: or.   r0, r3, r0
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

label_7F3835E8:
    ctx->pc = 0x7F3835E8u;
    // 7F3835E8: bc    4, 2, 0x7F383600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383600;
        }
    }

label_7F3835EC:
    ctx->pc = 0x7F3835ECu;
    ctx->downcount -= 5;
    // 7F3835EC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3835F0:
    ctx->pc = 0x7F3835F0u;
    // 7F3835F0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3835F4:
    ctx->pc = 0x7F3835F4u;
    // 7F3835F4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3835F8:
    ctx->pc = 0x7F3835F8u;
    // 7F3835F8: rlwinm. r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3835FC:
    ctx->pc = 0x7F3835FCu;
    // 7F3835FC: bc    12, 2, 0x7F38361C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F38361C;
        }
    }

label_7F383600:
    ctx->pc = 0x7F383600u;
    ctx->downcount -= 7;
    // 7F383600: lwz     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383604:
    ctx->pc = 0x7F383604u;
    // 7F383604: oris    r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | (0x0008u << 16);

label_7F383608:
    ctx->pc = 0x7F383608u;
    // 7F383608: stw     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38360C:
    ctx->pc = 0x7F38360Cu;
    // 7F38360C: lwz     r0, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383610:
    ctx->pc = 0x7F383610u;
    // 7F383610: oris    r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | (0x0008u << 16);

label_7F383614:
    ctx->pc = 0x7F383614u;
    // 7F383614: stw     r0, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383618:
    ctx->pc = 0x7F383618u;
    // 7F383618: b       0x7F383640
    {
            goto label_7F383640;
    }

label_7F38361C:
    ctx->pc = 0x7F38361Cu;
    ctx->downcount -= 6;
    // 7F38361C: lwz     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383620:
    ctx->pc = 0x7F383620u;
    // 7F383620: rlwinm r0, r0, 0, 13, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFF7FFFFu;
    }

label_7F383624:
    ctx->pc = 0x7F383624u;
    // 7F383624: stw     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383628:
    ctx->pc = 0x7F383628u;
    // 7F383628: lwz     r0, 984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38362C:
    ctx->pc = 0x7F38362Cu;
    // 7F38362C: cmpwi   r0, 1
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

label_7F383630:
    ctx->pc = 0x7F383630u;
    // 7F383630: bc    4, 2, 0x7F383640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383640;
        }
    }

label_7F383634:
    ctx->pc = 0x7F383634u;
    ctx->downcount -= 3;
    // 7F383634: lwz     r0, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383638:
    ctx->pc = 0x7F383638u;
    // 7F383638: rlwinm r0, r0, 0, 13, 11
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFF7FFFFu;
    }

label_7F38363C:
    ctx->pc = 0x7F38363Cu;
    // 7F38363C: stw     r0, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383640:
    ctx->pc = 0x7F383640u;
    ctx->downcount -= 3;
    // 7F383640: lbz     r3, 995(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(995);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F383644:
    ctx->pc = 0x7F383644u;
    // 7F383644: extsb. r0, r3
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

label_7F383648:
    ctx->pc = 0x7F383648u;
    // 7F383648: bc    4, 1, 0x7F383678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383678;
        }
    }

label_7F38364C:
    ctx->pc = 0x7F38364Cu;
    ctx->downcount -= 49;
    // 7F38364C: extsb r4, r3
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F383650:
    ctx->pc = 0x7F383650u;
    // 7F383650: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F383654:
    ctx->pc = 0x7F383654u;
    // 7F383654: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F383658:
    ctx->pc = 0x7F383658u;
    // 7F383658: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F38365C:
    ctx->pc = 0x7F38365Cu;
    // 7F38365C: subf.   r0, r0, r4
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

label_7F383660:
    ctx->pc = 0x7F383660u;
    // 7F383660: bc    4, 2, 0x7F38366C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38366C;
        }
    }

label_7F383664:
    ctx->pc = 0x7F383664u;
    ctx->downcount -= 2;
    // 7F383664: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383668:
    ctx->pc = 0x7F383668u;
    // 7F383668: bl      0x7F383000
    {
            ctx->lr = 0x7F38366Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383000u;
                return;
            }
            goto label_7F383000;
    }

label_7F38366C:
    ctx->pc = 0x7F38366Cu;
    ctx->downcount -= 3;
    // 7F38366C: lbz     r3, 995(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(995);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F383670:
    ctx->pc = 0x7F383670u;
    // 7F383670: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F383674:
    ctx->pc = 0x7F383674u;
    // 7F383674: stb     r0, 995(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(995);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F383678:
    ctx->pc = 0x7F383678u;
    ctx->downcount -= 2;
    // 7F383678: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F38367C:
    ctx->pc = 0x7F38367Cu;
    // 7F38367C: bl      0x7F383270
    {
            ctx->lr = 0x7F383680u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383270u;
                return;
            }
            goto label_7F383270;
    }

label_7F383680:
    ctx->pc = 0x7F383680u;
    ctx->downcount -= 8;
    // 7F383680: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383684:
    ctx->pc = 0x7F383684u;
    // 7F383684: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F383688:
    ctx->pc = 0x7F383688u;
    // 7F383688: addi    r5, r31, 144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(144);

label_7F38368C:
    ctx->pc = 0x7F38368Cu;
    // 7F38368C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383690:
    ctx->pc = 0x7F383690u;
    // 7F383690: lwz     r3, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383694:
    ctx->pc = 0x7F383694u;
    // 7F383694: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_7F383698:
    ctx->pc = 0x7F383698u;
    // 7F383698: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F38369C:
    loop_7F38369C(ctx);
    if (ctx->pc == 0x7F3836B0u) goto label_7F3836B0;
    return;
label_7F3836A0:
    ctx->pc = 0x7F3836A0u;
    // 7F3836A0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3836A4:
    ctx->pc = 0x7F3836A4u;
    // 7F3836A4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3836A8:
    ctx->pc = 0x7F3836A8u;
    // 7F3836A8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3836AC:
    // 7F3836AC: bc    16, 0, 0x7F38369C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F38369Cu;
                return;
            }
            goto label_7F38369C;
        }
    }

label_7F3836B0:
    ctx->pc = 0x7F3836B0u;
    ctx->downcount -= 8;
    // 7F3836B0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3836B4:
    ctx->pc = 0x7F3836B4u;
    // 7F3836B4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F3836B8:
    ctx->pc = 0x7F3836B8u;
    // 7F3836B8: addi    r5, r31, 208
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(208);

label_7F3836BC:
    ctx->pc = 0x7F3836BCu;
    // 7F3836BC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3836C0:
    ctx->pc = 0x7F3836C0u;
    // 7F3836C0: lwz     r3, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3836C4:
    ctx->pc = 0x7F3836C4u;
    // 7F3836C4: addi    r4, r3, 60
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(60);

label_7F3836C8:
    ctx->pc = 0x7F3836C8u;
    // 7F3836C8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F3836CC:
    loop_7F3836CC(ctx);
    if (ctx->pc == 0x7F3836E0u) goto label_7F3836E0;
    return;
label_7F3836D0:
    ctx->pc = 0x7F3836D0u;
    // 7F3836D0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F3836D4:
    ctx->pc = 0x7F3836D4u;
    // 7F3836D4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3836D8:
    ctx->pc = 0x7F3836D8u;
    // 7F3836D8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F3836DC:
    // 7F3836DC: bc    16, 0, 0x7F3836CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3836CCu;
                return;
            }
            goto label_7F3836CC;
        }
    }

label_7F3836E0:
    ctx->pc = 0x7F3836E0u;
    ctx->downcount -= 7;
    // 7F3836E0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3836E4:
    ctx->pc = 0x7F3836E4u;
    // 7F3836E4: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3836E8:
    ctx->pc = 0x7F3836E8u;
    // 7F3836E8: stw     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3836EC:
    ctx->pc = 0x7F3836ECu;
    // 7F3836EC: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3836F0:
    ctx->pc = 0x7F3836F0u;
    // 7F3836F0: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3836F4:
    ctx->pc = 0x7F3836F4u;
    // 7F3836F4: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3836F8:
    ctx->pc = 0x7F3836F8u;
    // 7F3836F8: bl      0x7F383780
    {
            ctx->lr = 0x7F3836FCu;
            goto label_7F383780;
    }

label_7F3836FC:
    ctx->pc = 0x7F3836FCu;
    ctx->downcount -= 3;
    // 7F3836FC: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383700:
    ctx->pc = 0x7F383700u;
    // 7F383700: cmpwi   r0, 2
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

label_7F383704:
    ctx->pc = 0x7F383704u;
    // 7F383704: bc    4, 2, 0x7F383718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383718;
        }
    }

label_7F383708:
    ctx->pc = 0x7F383708u;
    ctx->downcount -= 4;
    // 7F383708: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F38370C:
    ctx->pc = 0x7F38370Cu;
    // 7F38370C: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383710:
    ctx->pc = 0x7F383710u;
    // 7F383710: lwz     r4, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383714:
    ctx->pc = 0x7F383714u;
    // 7F383714: bl      0x7F383780
    {
            ctx->lr = 0x7F383718u;
            goto label_7F383780;
    }

label_7F383718:
    ctx->pc = 0x7F383718u;
    ctx->downcount -= 2;
    // 7F383718: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38371C:
    ctx->pc = 0x7F38371Cu;
    // 7F38371C: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F383720u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F383720:
    ctx->pc = 0x7F383720u;
    ctx->downcount -= 7;
    // 7F383720: lwz     r4, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383724:
    ctx->pc = 0x7F383724u;
    // 7F383724: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F383728:
    ctx->pc = 0x7F383728u;
    // 7F383728: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F38372C:
    ctx->pc = 0x7F38372Cu;
    // 7F38372C: lwz     r5, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383730:
    ctx->pc = 0x7F383730u;
    // 7F383730: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F383734:
    ctx->pc = 0x7F383734u;
    // 7F383734: lwz     r5, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383738:
    ctx->pc = 0x7F383738u;
    // 7F383738: bl      0x7F014964
    {
            ctx->lr = 0x7F38373Cu;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F38373C:
    ctx->pc = 0x7F38373Cu;
    ctx->downcount -= 3;
    // 7F38373C: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383740:
    ctx->pc = 0x7F383740u;
    // 7F383740: cmpwi   r0, 2
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

label_7F383744:
    ctx->pc = 0x7F383744u;
    // 7F383744: bc    4, 2, 0x7F38376C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F38376C;
        }
    }

label_7F383748:
    ctx->pc = 0x7F383748u;
    ctx->downcount -= 2;
    // 7F383748: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38374C:
    ctx->pc = 0x7F38374Cu;
    // 7F38374C: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F383750u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F383750:
    ctx->pc = 0x7F383750u;
    ctx->downcount -= 7;
    // 7F383750: lwz     r4, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383754:
    ctx->pc = 0x7F383754u;
    // 7F383754: addi    r3, r31, 512
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(512);

label_7F383758:
    ctx->pc = 0x7F383758u;
    // 7F383758: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F38375C:
    ctx->pc = 0x7F38375Cu;
    // 7F38375C: lwz     r5, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383760:
    ctx->pc = 0x7F383760u;
    // 7F383760: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F383764:
    ctx->pc = 0x7F383764u;
    // 7F383764: lwz     r5, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383768:
    ctx->pc = 0x7F383768u;
    // 7F383768: bl      0x7F014964
    {
            ctx->lr = 0x7F38376Cu;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F38376C:
    ctx->pc = 0x7F38376Cu;
    ctx->downcount -= 6;
    // 7F38376C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383770:
    ctx->pc = 0x7F383770u;
    // 7F383770: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F383774:
    ctx->pc = 0x7F383774u;
    // 7F383774: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383778:
    ctx->pc = 0x7F383778u;
    // 7F383778: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F38377C:
    ctx->pc = 0x7F38377Cu;
    // 7F38377C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383780:
    ctx->pc = 0x7F383780u;
    ctx->downcount -= 7;
    // 7F383780: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383784:
    ctx->pc = 0x7F383784u;
    // 7F383784: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383788:
    ctx->pc = 0x7F383788u;
    // 7F383788: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38378C:
    ctx->pc = 0x7F38378Cu;
    // 7F38378C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F383790:
    ctx->pc = 0x7F383790u;
    // 7F383790: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383794:
    ctx->pc = 0x7F383794u;
    // 7F383794: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F383798:
    ctx->pc = 0x7F383798u;
    // 7F383798: bl      0x7F01B234
    {
            ctx->lr = 0x7F38379Cu;
            ctx->pc = 0x7F01B234u;
            return;
    }

label_7F38379C:
    ctx->pc = 0x7F38379Cu;
    ctx->downcount -= 7;
    // 7F38379C: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3837A0:
    ctx->pc = 0x7F3837A0u;
    // 7F3837A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3837A4:
    ctx->pc = 0x7F3837A4u;
    // 7F3837A4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3837A8:
    ctx->pc = 0x7F3837A8u;
    // 7F3837A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3837AC:
    ctx->pc = 0x7F3837ACu;
    // 7F3837AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3837B0:
    ctx->pc = 0x7F3837B0u;
    // 7F3837B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F3837B4:
    ctx->pc = 0x7F3837B4u;
    ctx->downcount -= 7;
    // 7F3837B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3837B8:
    ctx->pc = 0x7F3837B8u;
    // 7F3837B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3837BC:
    ctx->pc = 0x7F3837BCu;
    // 7F3837BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3837C0:
    ctx->pc = 0x7F3837C0u;
    // 7F3837C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3837C4:
    ctx->pc = 0x7F3837C4u;
    // 7F3837C4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3837C8:
    ctx->pc = 0x7F3837C8u;
    // 7F3837C8: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F3837CC:
    ctx->pc = 0x7F3837CCu;
    // 7F3837CC: bl      0x7F042AAC
    {
            ctx->lr = 0x7F3837D0u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F3837D0:
    ctx->pc = 0x7F3837D0u;
    ctx->downcount -= 2;
    // 7F3837D0: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F3837D4:
    ctx->pc = 0x7F3837D4u;
    // 7F3837D4: bl      0x7F0146B0
    {
            ctx->lr = 0x7F3837D8u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F3837D8:
    ctx->pc = 0x7F3837D8u;
    ctx->downcount -= 3;
    // 7F3837D8: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3837DC:
    ctx->pc = 0x7F3837DCu;
    // 7F3837DC: cmpwi   r0, 2
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

label_7F3837E0:
    ctx->pc = 0x7F3837E0u;
    // 7F3837E0: bc    4, 2, 0x7F3837F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3837F4;
        }
    }

label_7F3837E4:
    ctx->pc = 0x7F3837E4u;
    ctx->downcount -= 2;
    // 7F3837E4: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F3837E8:
    ctx->pc = 0x7F3837E8u;
    // 7F3837E8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F3837ECu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F3837EC:
    ctx->pc = 0x7F3837ECu;
    ctx->downcount -= 2;
    // 7F3837EC: addi    r3, r31, 512
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(512);

label_7F3837F0:
    ctx->pc = 0x7F3837F0u;
    // 7F3837F0: bl      0x7F0146B0
    {
            ctx->lr = 0x7F3837F4u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F3837F4:
    ctx->pc = 0x7F3837F4u;
    ctx->downcount -= 6;
    // 7F3837F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3837F8:
    ctx->pc = 0x7F3837F8u;
    // 7F3837F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3837FC:
    ctx->pc = 0x7F3837FCu;
    // 7F3837FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383800:
    ctx->pc = 0x7F383800u;
    // 7F383800: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F383804:
    ctx->pc = 0x7F383804u;
    // 7F383804: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383808:
    ctx->pc = 0x7F383808u;
    ctx->downcount -= 18;
    // 7F383808: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F38380C:
    ctx->pc = 0x7F38380Cu;
    // 7F38380C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383810:
    ctx->pc = 0x7F383810u;
    // 7F383810: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F383814:
    ctx->pc = 0x7F383814u;
    // 7F383814: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383818:
    ctx->pc = 0x7F383818u;
    // 7F383818: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F38381C:
    ctx->pc = 0x7F38381Cu;
    // 7F38381C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383820:
    ctx->pc = 0x7F383820u;
    // 7F383820: lwz     r3, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383824:
    ctx->pc = 0x7F383824u;
    // 7F383824: bl      0x7F3AB6A0
    {
            ctx->lr = 0x7F383828u;
            ctx->pc = 0x7F3AB6A0u;
            return;
    }

label_7F383828:
    ctx->pc = 0x7F383828u;
    ctx->downcount -= 2;
    // 7F383828: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F38382C:
    ctx->pc = 0x7F38382Cu;
    // 7F38382C: b       0x7F383844
    {
            goto label_7F383844;
    }

label_7F383830:
    ctx->pc = 0x7F383830u;
    ctx->downcount -= 4;
    // 7F383830: lwz     r4, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383834:
    // 7F383834: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383838:
    // 7F383838: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F38383C:
    // 7F38383C: bl      0x7F3B052C
    {
            ctx->lr = 0x7F383840u;
            ctx->pc = 0x7F3B052Cu;
            return;
    }

label_7F383840:
    ctx->downcount -= 1;
    // 7F383840: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F383844:
    ctx->pc = 0x7F383844u;
    ctx->downcount -= 4;
    // 7F383844: lwz     r3, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383848:
    ctx->pc = 0x7F383848u;
    // 7F383848: lha     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F38384C:
    // 7F38384C: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F383850:
    // 7F383850: bc    12, 0, 0x7F383830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383830u;
                return;
            }
            goto label_7F383830;
        }
    }

label_7F383854:
    ctx->pc = 0x7F383854u;
    ctx->downcount -= 24;
    // 7F383854: lwz     r4, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383858:
    ctx->pc = 0x7F383858u;
    // 7F383858: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F38385C:
    ctx->pc = 0x7F38385Cu;
    // 7F38385C: stw     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F383860:
    ctx->pc = 0x7F383860u;
    // 7F383860: stw     r0, 980(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383864:
    ctx->pc = 0x7F383864u;
    // 7F383864: stw     r0, 984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383868:
    ctx->pc = 0x7F383868u;
    // 7F383868: lwz     r0, 516(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38386C:
    ctx->pc = 0x7F38386Cu;
    // 7F38386C: oris    r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | (0x0008u << 16);

label_7F383870:
    ctx->pc = 0x7F383870u;
    // 7F383870: stw     r0, 516(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383874:
    ctx->pc = 0x7F383874u;
    // 7F383874: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F383878:
    ctx->pc = 0x7F383878u;
    // 7F383878: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F38387C:
    ctx->pc = 0x7F38387Cu;
    // 7F38387C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383880:
    ctx->pc = 0x7F383880u;
    // 7F383880: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F383884:
    ctx->pc = 0x7F383884u;
    // 7F383884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383888:
    ctx->pc = 0x7F383888u;
    ctx->downcount -= 26;
    // 7F383888: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F38388C:
    ctx->pc = 0x7F38388Cu;
    // 7F38388C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383890:
    ctx->pc = 0x7F383890u;
    // 7F383890: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F383894:
    ctx->pc = 0x7F383894u;
    // 7F383894: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383898:
    ctx->pc = 0x7F383898u;
    // 7F383898: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F38389C:
    ctx->pc = 0x7F38389Cu;
    // 7F38389C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F3838A0:
    ctx->pc = 0x7F3838A0u;
    // 7F3838A0: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F3838A4:
    ctx->pc = 0x7F3838A4u;
    // 7F3838A4: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3838A8:
    ctx->pc = 0x7F3838A8u;
    // 7F3838A8: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3838AC:
    ctx->pc = 0x7F3838ACu;
    // 7F3838AC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F3838B0:
    ctx->pc = 0x7F3838B0u;
    // 7F3838B0: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F3838B4:
    ctx->pc = 0x7F3838B4u;
    // 7F3838B4: and   r4, r7, r4
    {
        ctx->gpr[4] = ctx->gpr[7] & ctx->gpr[4];
    }

label_7F3838B8:
    ctx->pc = 0x7F3838B8u;
    // 7F3838B8: xor   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[6];
    }

label_7F3838BC:
    ctx->pc = 0x7F3838BCu;
    // 7F3838BC: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F3838C0:
    ctx->pc = 0x7F3838C0u;
    // 7F3838C0: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F3838C4:
    ctx->pc = 0x7F3838C4u;
    // 7F3838C4: bc    12, 2, 0x7F383A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383A9C;
        }
    }

label_7F3838C8:
    ctx->pc = 0x7F3838C8u;
    ctx->downcount -= 3;
    // 7F3838C8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3838CC:
    ctx->pc = 0x7F3838CCu;
    // 7F3838CC: rlwinm. r0, r0, 0, 31, 31
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

label_7F3838D0:
    ctx->pc = 0x7F3838D0u;
    // 7F3838D0: bc    12, 2, 0x7F383A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383A9C;
        }
    }

label_7F3838D4:
    ctx->pc = 0x7F3838D4u;
    ctx->downcount -= 3;
    // 7F3838D4: lwz     r5, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3838D8:
    ctx->pc = 0x7F3838D8u;
    // 7F3838D8: cmplwi  r5, 0x0000
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

label_7F3838DC:
    ctx->pc = 0x7F3838DCu;
    // 7F3838DC: bc    12, 2, 0x7F383904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383904;
        }
    }

label_7F3838E0:
    ctx->pc = 0x7F3838E0u;
    ctx->downcount -= 9;
    // 7F3838E0: lwz     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3838E4:
    ctx->pc = 0x7F3838E4u;
    // 7F3838E4: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3838E8:
    ctx->pc = 0x7F3838E8u;
    // 7F3838E8: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3838EC:
    ctx->pc = 0x7F3838ECu;
    // 7F3838EC: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3838F0:
    ctx->pc = 0x7F3838F0u;
    // 7F3838F0: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3838F4:
    ctx->pc = 0x7F3838F4u;
    // 7F3838F4: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3838F8:
    ctx->pc = 0x7F3838F8u;
    // 7F3838F8: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3838FC:
    ctx->pc = 0x7F3838FCu;
    // 7F3838FC: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383900:
    ctx->pc = 0x7F383900u;
    // 7F383900: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383904:
    ctx->pc = 0x7F383904u;
    ctx->downcount -= 10;
    // 7F383904: lwz     r3, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383908:
    ctx->pc = 0x7F383908u;
    // 7F383908: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F38390C:
    ctx->pc = 0x7F38390Cu;
    // 7F38390C: lwz     r5, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383910:
    ctx->pc = 0x7F383910u;
    // 7F383910: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F383914:
    ctx->pc = 0x7F383914u;
    // 7F383914: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F383918:
    ctx->pc = 0x7F383918u;
    // 7F383918: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F38391C:
    ctx->pc = 0x7F38391Cu;
    // 7F38391C: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F383920:
    ctx->pc = 0x7F383920u;
    // 7F383920: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F383924:
    ctx->pc = 0x7F383924u;
    // 7F383924: or.   r0, r3, r0
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

label_7F383928:
    ctx->pc = 0x7F383928u;
    // 7F383928: bc    12, 2, 0x7F383978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383978;
        }
    }

label_7F38392C:
    ctx->pc = 0x7F38392Cu;
    ctx->downcount -= 1;
    // 7F38392C: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F383930u;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F383930:
    ctx->pc = 0x7F383930u;
    ctx->downcount -= 6;
    // 7F383930: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F383934:
    ctx->pc = 0x7F383934u;
    // 7F383934: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F383938:
    ctx->pc = 0x7F383938u;
    // 7F383938: addi    r3, r4, -180
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-180);

label_7F38393C:
    ctx->pc = 0x7F38393Cu;
    // 7F38393C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383940:
    ctx->pc = 0x7F383940u;
    // 7F383940: rlwinm. r0, r0, 0, 12, 12
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00080000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F383944:
    ctx->pc = 0x7F383944u;
    // 7F383944: bc    12, 2, 0x7F383978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383978;
        }
    }

label_7F383948:
    ctx->pc = 0x7F383948u;
    ctx->downcount -= 12;
    // 7F383948: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F38394C:
    ctx->pc = 0x7F38394Cu;
    // 7F38394C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F383950:
    ctx->pc = 0x7F383950u;
    // 7F383950: addi    r5, r3, -5736
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5736);

label_7F383954:
    ctx->pc = 0x7F383954u;
    // 7F383954: lis     r0, 16
    ctx->gpr[0] = ((u32)(s32)(16) << 16);

label_7F383958:
    ctx->pc = 0x7F383958u;
    // 7F383958: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F38395C:
    ctx->pc = 0x7F38395Cu;
    // 7F38395C: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383960:
    ctx->pc = 0x7F383960u;
    // 7F383960: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F383964:
    ctx->pc = 0x7F383964u;
    // 7F383964: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F383968:
    ctx->pc = 0x7F383968u;
    // 7F383968: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F38396C:
    ctx->pc = 0x7F38396Cu;
    // 7F38396C: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F383970:
    ctx->pc = 0x7F383970u;
    // 7F383970: or.   r0, r3, r0
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

label_7F383974:
    ctx->pc = 0x7F383974u;
    // 7F383974: bc    12, 2, 0x7F3839A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3839A4;
        }
    }

label_7F383978:
    ctx->pc = 0x7F383978u;
    ctx->downcount -= 11;
    // 7F383978: lis     r3, 768
    ctx->gpr[3] = ((u32)(s32)(768) << 16);

label_7F38397C:
    ctx->pc = 0x7F38397Cu;
    // 7F38397C: lwz     r5, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383980:
    ctx->pc = 0x7F383980u;
    // 7F383980: lwz     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F383984:
    ctx->pc = 0x7F383984u;
    // 7F383984: addi    r0, r3, 8192
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8192);

label_7F383988:
    ctx->pc = 0x7F383988u;
    // 7F383988: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F38398C:
    ctx->pc = 0x7F38398Cu;
    // 7F38398C: and   r3, r6, r0
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F383990:
    ctx->pc = 0x7F383990u;
    // 7F383990: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F383994:
    ctx->pc = 0x7F383994u;
    // 7F383994: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F383998:
    ctx->pc = 0x7F383998u;
    // 7F383998: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F38399C:
    ctx->pc = 0x7F38399Cu;
    // 7F38399C: or.   r0, r3, r0
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

label_7F3839A0:
    ctx->pc = 0x7F3839A0u;
    // 7F3839A0: bc    12, 2, 0x7F3839C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3839C8;
        }
    }

label_7F3839A4:
    ctx->pc = 0x7F3839A4u;
    ctx->downcount -= 7;
    // 7F3839A4: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3839A8:
    ctx->pc = 0x7F3839A8u;
    // 7F3839A8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F3839AC:
    ctx->pc = 0x7F3839ACu;
    // 7F3839AC: sth     r4, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F3839B0:
    ctx->pc = 0x7F3839B0u;
    // 7F3839B0: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3839B4:
    ctx->pc = 0x7F3839B4u;
    // 7F3839B4: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3839B8:
    ctx->pc = 0x7F3839B8u;
    // 7F3839B8: cmpwi   r0, 0
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

label_7F3839BC:
    ctx->pc = 0x7F3839BCu;
    // 7F3839BC: bc    12, 1, 0x7F3839C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3839C8;
        }
    }

label_7F3839C0:
    ctx->pc = 0x7F3839C0u;
    ctx->downcount -= 2;
    // 7F3839C0: lwz     r3, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3839C4:
    ctx->pc = 0x7F3839C4u;
    // 7F3839C4: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3839C8:
    ctx->pc = 0x7F3839C8u;
    ctx->downcount -= 12;
    // 7F3839C8: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F3839CC:
    ctx->pc = 0x7F3839CCu;
    // 7F3839CC: lwz     r4, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3839D0:
    ctx->pc = 0x7F3839D0u;
    // 7F3839D0: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F3839D4:
    ctx->pc = 0x7F3839D4u;
    // 7F3839D4: lwz     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3839D8:
    ctx->pc = 0x7F3839D8u;
    // 7F3839D8: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F3839DC:
    ctx->pc = 0x7F3839DCu;
    // 7F3839DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3839E0:
    ctx->pc = 0x7F3839E0u;
    // 7F3839E0: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F3839E4:
    ctx->pc = 0x7F3839E4u;
    // 7F3839E4: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F3839E8:
    ctx->pc = 0x7F3839E8u;
    // 7F3839E8: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F3839EC:
    ctx->pc = 0x7F3839ECu;
    // 7F3839EC: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F3839F0:
    ctx->pc = 0x7F3839F0u;
    // 7F3839F0: or.   r0, r3, r0
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

label_7F3839F4:
    ctx->pc = 0x7F3839F4u;
    // 7F3839F4: bc    12, 2, 0x7F383A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383A50;
        }
    }

label_7F3839F8:
    ctx->pc = 0x7F3839F8u;
    ctx->downcount -= 2;
    // 7F3839F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3839FC:
    ctx->pc = 0x7F3839FCu;
    // 7F3839FC: bl      0x7F382F68
    {
            ctx->lr = 0x7F383A00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F382F68u;
                return;
            }
            goto label_7F382F68;
    }

label_7F383A00:
    ctx->pc = 0x7F383A00u;
    ctx->downcount -= 2;
    // 7F383A00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383A04:
    ctx->pc = 0x7F383A04u;
    // 7F383A04: bl      0x7F38310C
    {
            ctx->lr = 0x7F383A08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F38310Cu;
                return;
            }
            goto label_7F38310C;
    }

label_7F383A08:
    ctx->pc = 0x7F383A08u;
    ctx->downcount -= 3;
    // 7F383A08: lwz     r0, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383A0C:
    ctx->pc = 0x7F383A0Cu;
    // 7F383A0C: cmpwi   r0, 2
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

label_7F383A10:
    ctx->pc = 0x7F383A10u;
    // 7F383A10: bc    4, 0, 0x7F383A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383A20;
        }
    }

label_7F383A14:
    ctx->pc = 0x7F383A14u;
    ctx->downcount -= 3;
    // 7F383A14: lbz     r3, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F383A18:
    ctx->pc = 0x7F383A18u;
    // 7F383A18: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F383A1C:
    ctx->pc = 0x7F383A1Cu;
    // 7F383A1C: stb     r0, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F383A20:
    ctx->pc = 0x7F383A20u;
    ctx->downcount -= 8;
    // 7F383A20: lwz     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383A24:
    ctx->pc = 0x7F383A24u;
    // 7F383A24: lha     r3, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F383A28:
    ctx->pc = 0x7F383A28u;
    // 7F383A28: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F383A2C:
    ctx->pc = 0x7F383A2Cu;
    // 7F383A2C: sth     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F383A30:
    ctx->pc = 0x7F383A30u;
    // 7F383A30: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383A34:
    ctx->pc = 0x7F383A34u;
    // 7F383A34: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F383A38:
    ctx->pc = 0x7F383A38u;
    // 7F383A38: cmpwi   r0, 0
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

label_7F383A3C:
    ctx->pc = 0x7F383A3Cu;
    // 7F383A3C: bc    12, 1, 0x7F383A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383A9C;
        }
    }

label_7F383A40:
    ctx->pc = 0x7F383A40u;
    ctx->downcount -= 4;
    // 7F383A40: lwz     r3, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383A44:
    ctx->pc = 0x7F383A44u;
    // 7F383A44: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F383A48:
    ctx->pc = 0x7F383A48u;
    // 7F383A48: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383A4C:
    ctx->pc = 0x7F383A4Cu;
    // 7F383A4C: b       0x7F383A9C
    {
            goto label_7F383A9C;
    }

label_7F383A50:
    ctx->pc = 0x7F383A50u;
    ctx->downcount -= 7;
    // 7F383A50: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F383A54:
    ctx->pc = 0x7F383A54u;
    // 7F383A54: and   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[5];
    }

label_7F383A58:
    ctx->pc = 0x7F383A58u;
    // 7F383A58: and   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F383A5C:
    ctx->pc = 0x7F383A5Cu;
    // 7F383A5C: xor   r3, r0, r5
    {
        ctx->gpr[3] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F383A60:
    ctx->pc = 0x7F383A60u;
    // 7F383A60: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F383A64:
    ctx->pc = 0x7F383A64u;
    // 7F383A64: or.   r0, r3, r0
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

label_7F383A68:
    ctx->pc = 0x7F383A68u;
    // 7F383A68: bc    12, 2, 0x7F383A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383A78;
        }
    }

label_7F383A6C:
    ctx->pc = 0x7F383A6Cu;
    ctx->downcount -= 2;
    // 7F383A6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383A70:
    ctx->pc = 0x7F383A70u;
    // 7F383A70: bl      0x7F38310C
    {
            ctx->lr = 0x7F383A74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F38310Cu;
                return;
            }
            goto label_7F38310C;
    }

label_7F383A74:
    ctx->pc = 0x7F383A74u;
    ctx->downcount -= 1;
    // 7F383A74: b       0x7F383A9C
    {
            goto label_7F383A9C;
    }

label_7F383A78:
    ctx->pc = 0x7F383A78u;
    ctx->downcount -= 7;
    // 7F383A78: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F383A7C:
    ctx->pc = 0x7F383A7Cu;
    // 7F383A7C: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F383A80:
    ctx->pc = 0x7F383A80u;
    // 7F383A80: addi    r3, r3, 992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(992);

label_7F383A84:
    ctx->pc = 0x7F383A84u;
    // 7F383A84: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F383A88:
    ctx->pc = 0x7F383A88u;
    // 7F383A88: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F383A8C:
    ctx->pc = 0x7F383A8Cu;
    // 7F383A8C: or.   r0, r3, r0
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

label_7F383A90:
    ctx->pc = 0x7F383A90u;
    // 7F383A90: bc    12, 2, 0x7F383A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383A9C;
        }
    }

label_7F383A94:
    ctx->pc = 0x7F383A94u;
    ctx->downcount -= 2;
    // 7F383A94: li      r0, 90
    ctx->gpr[0] = (u32)(s32)(90);

label_7F383A98:
    ctx->pc = 0x7F383A98u;
    // 7F383A98: stb     r0, 995(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(995);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F383A9C:
    ctx->pc = 0x7F383A9Cu;
    ctx->downcount -= 19;
    // 7F383A9C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383AA0:
    ctx->pc = 0x7F383AA0u;
    // 7F383AA0: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383AA4:
    ctx->pc = 0x7F383AA4u;
    // 7F383AA4: stw     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383AA8:
    ctx->pc = 0x7F383AA8u;
    // 7F383AA8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F383AAC:
    ctx->pc = 0x7F383AACu;
    // 7F383AAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383AB0:
    ctx->pc = 0x7F383AB0u;
    // 7F383AB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383AB4:
    ctx->pc = 0x7F383AB4u;
    // 7F383AB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F383AB8:
    ctx->pc = 0x7F383AB8u;
    // 7F383AB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383ABC:
    ctx->pc = 0x7F383ABCu;
    ctx->downcount -= 26;
    // 7F383ABC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383AC0:
    ctx->pc = 0x7F383AC0u;
    // 7F383AC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383AC4:
    ctx->pc = 0x7F383AC4u;
    // 7F383AC4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F383AC8:
    ctx->pc = 0x7F383AC8u;
    // 7F383AC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383ACC:
    ctx->pc = 0x7F383ACCu;
    // 7F383ACC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F383AD0:
    ctx->pc = 0x7F383AD0u;
    // 7F383AD0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F383AD4:
    ctx->pc = 0x7F383AD4u;
    // 7F383AD4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F383AD8:
    ctx->pc = 0x7F383AD8u;
    // 7F383AD8: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383ADC:
    ctx->pc = 0x7F383ADCu;
    // 7F383ADC: lwz     r7, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F383AE0:
    ctx->pc = 0x7F383AE0u;
    // 7F383AE0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F383AE4:
    ctx->pc = 0x7F383AE4u;
    // 7F383AE4: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F383AE8:
    ctx->pc = 0x7F383AE8u;
    // 7F383AE8: and   r4, r7, r4
    {
        ctx->gpr[4] = ctx->gpr[7] & ctx->gpr[4];
    }

label_7F383AEC:
    ctx->pc = 0x7F383AECu;
    // 7F383AEC: xor   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[6];
    }

label_7F383AF0:
    ctx->pc = 0x7F383AF0u;
    // 7F383AF0: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F383AF4:
    ctx->pc = 0x7F383AF4u;
    // 7F383AF4: or.   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F383AF8:
    ctx->pc = 0x7F383AF8u;
    // 7F383AF8: bc    12, 2, 0x7F383BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383BA8;
        }
    }

label_7F383AFC:
    ctx->pc = 0x7F383AFCu;
    ctx->downcount -= 3;
    // 7F383AFC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383B00:
    ctx->pc = 0x7F383B00u;
    // 7F383B00: rlwinm. r0, r0, 0, 31, 31
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

label_7F383B04:
    ctx->pc = 0x7F383B04u;
    // 7F383B04: bc    12, 2, 0x7F383BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383BA8;
        }
    }

label_7F383B08:
    ctx->pc = 0x7F383B08u;
    ctx->downcount -= 3;
    // 7F383B08: lwz     r5, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383B0C:
    ctx->pc = 0x7F383B0Cu;
    // 7F383B0C: cmplwi  r5, 0x0000
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

label_7F383B10:
    ctx->pc = 0x7F383B10u;
    // 7F383B10: bc    12, 2, 0x7F383B38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383B38;
        }
    }

label_7F383B14:
    ctx->pc = 0x7F383B14u;
    ctx->downcount -= 9;
    // 7F383B14: lwz     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383B18:
    ctx->pc = 0x7F383B18u;
    // 7F383B18: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383B1C:
    ctx->pc = 0x7F383B1Cu;
    // 7F383B1C: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383B20:
    ctx->pc = 0x7F383B20u;
    // 7F383B20: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383B24:
    ctx->pc = 0x7F383B24u;
    // 7F383B24: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383B28:
    ctx->pc = 0x7F383B28u;
    // 7F383B28: lwz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383B2C:
    ctx->pc = 0x7F383B2Cu;
    // 7F383B2C: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383B30:
    ctx->pc = 0x7F383B30u;
    // 7F383B30: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383B34:
    ctx->pc = 0x7F383B34u;
    // 7F383B34: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383B38:
    ctx->pc = 0x7F383B38u;
    ctx->downcount -= 12;
    // 7F383B38: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F383B3C:
    ctx->pc = 0x7F383B3Cu;
    // 7F383B3C: lwz     r5, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383B40:
    ctx->pc = 0x7F383B40u;
    // 7F383B40: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F383B44:
    ctx->pc = 0x7F383B44u;
    // 7F383B44: lwz     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F383B48:
    ctx->pc = 0x7F383B48u;
    // 7F383B48: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F383B4C:
    ctx->pc = 0x7F383B4Cu;
    // 7F383B4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383B50:
    ctx->pc = 0x7F383B50u;
    // 7F383B50: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F383B54:
    ctx->pc = 0x7F383B54u;
    // 7F383B54: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F383B58:
    ctx->pc = 0x7F383B58u;
    // 7F383B58: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F383B5C:
    ctx->pc = 0x7F383B5Cu;
    // 7F383B5C: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F383B60:
    ctx->pc = 0x7F383B60u;
    // 7F383B60: or.   r0, r3, r0
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

label_7F383B64:
    ctx->pc = 0x7F383B64u;
    // 7F383B64: bc    12, 2, 0x7F383BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F383BA8;
        }
    }

label_7F383B68:
    ctx->pc = 0x7F383B68u;
    ctx->downcount -= 2;
    // 7F383B68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383B6C:
    ctx->pc = 0x7F383B6Cu;
    // 7F383B6C: bl      0x7F383808
    {
            ctx->lr = 0x7F383B70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383808u;
                return;
            }
            goto label_7F383808;
    }

label_7F383B70:
    ctx->pc = 0x7F383B70u;
    ctx->downcount -= 10;
    // 7F383B70: lwz     r4, 640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(640);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383B74:
    ctx->pc = 0x7F383B74u;
    // 7F383B74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383B78:
    ctx->pc = 0x7F383B78u;
    // 7F383B78: lwz     r0, 644(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(644);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383B7C:
    ctx->pc = 0x7F383B7Cu;
    // 7F383B7C: stw     r4, 416(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(416);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F383B80:
    ctx->pc = 0x7F383B80u;
    // 7F383B80: stw     r0, 420(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(420);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383B84:
    ctx->pc = 0x7F383B84u;
    // 7F383B84: lwz     r4, 648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(648);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383B88:
    ctx->pc = 0x7F383B88u;
    // 7F383B88: lwz     r0, 652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(652);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383B8C:
    ctx->pc = 0x7F383B8Cu;
    // 7F383B8C: stw     r4, 424(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F383B90:
    ctx->pc = 0x7F383B90u;
    // 7F383B90: stw     r0, 428(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(428);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383B94:
    ctx->pc = 0x7F383B94u;
    // 7F383B94: bl      0x7F38310C
    {
            ctx->lr = 0x7F383B98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F38310Cu;
                return;
            }
            goto label_7F38310C;
    }

label_7F383B98:
    ctx->pc = 0x7F383B98u;
    ctx->downcount -= 4;
    // 7F383B98: addi    r4, r31, 640
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(640);

label_7F383B9C:
    ctx->pc = 0x7F383B9Cu;
    // 7F383B9C: li      r3, 459
    ctx->gpr[3] = (u32)(s32)(459);

label_7F383BA0:
    ctx->pc = 0x7F383BA0u;
    // 7F383BA0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F383BA4:
    ctx->pc = 0x7F383BA4u;
    // 7F383BA4: bl      0x7F0117B8
    {
            ctx->lr = 0x7F383BA8u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F383BA8:
    ctx->pc = 0x7F383BA8u;
    ctx->downcount -= 19;
    // 7F383BA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383BAC:
    ctx->pc = 0x7F383BACu;
    // 7F383BAC: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383BB0:
    ctx->pc = 0x7F383BB0u;
    // 7F383BB0: stw     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383BB4:
    ctx->pc = 0x7F383BB4u;
    // 7F383BB4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F383BB8:
    ctx->pc = 0x7F383BB8u;
    // 7F383BB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383BBC:
    ctx->pc = 0x7F383BBCu;
    // 7F383BBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383BC0:
    ctx->pc = 0x7F383BC0u;
    // 7F383BC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F383BC4:
    ctx->pc = 0x7F383BC4u;
    // 7F383BC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383BC8:
    ctx->pc = 0x7F383BC8u;
    ctx->downcount -= 56;
    // 7F383BC8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383BCC:
    ctx->pc = 0x7F383BCCu;
    // 7F383BCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383BD0:
    ctx->pc = 0x7F383BD0u;
    // 7F383BD0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F383BD4:
    ctx->pc = 0x7F383BD4u;
    // 7F383BD4: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F383BD8:
    ctx->pc = 0x7F383BD8u;
    // 7F383BD8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383BDC:
    ctx->pc = 0x7F383BDCu;
    // 7F383BDC: addi    r6, r4, -22216
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-22216);

label_7F383BE0:
    ctx->pc = 0x7F383BE0u;
    // 7F383BE0: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F383BE4:
    ctx->pc = 0x7F383BE4u;
    // 7F383BE4: addi    r7, r1, 40
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(40);

label_7F383BE8:
    ctx->pc = 0x7F383BE8u;
    // 7F383BE8: stmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F383BEC:
    ctx->pc = 0x7F383BECu;
    // 7F383BEC: addi    r11, r4, -22184
    ctx->gpr[11] = ctx->gpr[4] + (u32)(s32)(-22184);

label_7F383BF0:
    ctx->pc = 0x7F383BF0u;
    // 7F383BF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383BF4:
    ctx->pc = 0x7F383BF4u;
    // 7F383BF4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F383BF8:
    ctx->pc = 0x7F383BF8u;
    // 7F383BF8: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F383BFC:
    ctx->pc = 0x7F383BFCu;
    // 7F383BFC: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F383C00:
    ctx->pc = 0x7F383C00u;
    // 7F383C00: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F383C04:
    ctx->pc = 0x7F383C04u;
    // 7F383C04: addi    r4, r4, 16401
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16401);

label_7F383C08:
    ctx->pc = 0x7F383C08u;
    // 7F383C08: lwzu     r28, -22200(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-22200);
        ctx->gpr[28] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_7F383C0C:
    ctx->pc = 0x7F383C0Cu;
    // 7F383C0C: lwz     r24, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F383C10:
    ctx->pc = 0x7F383C10u;
    // 7F383C10: lwz     r25, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F383C14:
    ctx->pc = 0x7F383C14u;
    // 7F383C14: lwz     r26, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F383C18:
    ctx->pc = 0x7F383C18u;
    // 7F383C18: lwz     r27, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F383C1C:
    ctx->pc = 0x7F383C1Cu;
    // 7F383C1C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F383C20:
    ctx->pc = 0x7F383C20u;
    // 7F383C20: lwz     r29, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F383C24:
    ctx->pc = 0x7F383C24u;
    // 7F383C24: lwz     r30, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F383C28:
    ctx->pc = 0x7F383C28u;
    // 7F383C28: lwz     r12, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F383C2C:
    ctx->pc = 0x7F383C2Cu;
    // 7F383C2C: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F383C30:
    ctx->pc = 0x7F383C30u;
    // 7F383C30: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F383C34:
    ctx->pc = 0x7F383C34u;
    // 7F383C34: lwz     r5, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383C38:
    ctx->pc = 0x7F383C38u;
    // 7F383C38: lwz     r0, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383C3C:
    ctx->pc = 0x7F383C3Cu;
    // 7F383C3C: stw     r24, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F383C40:
    ctx->pc = 0x7F383C40u;
    // 7F383C40: stw     r25, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F383C44:
    ctx->pc = 0x7F383C44u;
    // 7F383C44: stw     r26, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F383C48:
    ctx->pc = 0x7F383C48u;
    // 7F383C48: stw     r27, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F383C4C:
    ctx->pc = 0x7F383C4Cu;
    // 7F383C4C: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F383C50:
    ctx->pc = 0x7F383C50u;
    // 7F383C50: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F383C54:
    ctx->pc = 0x7F383C54u;
    // 7F383C54: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F383C58:
    ctx->pc = 0x7F383C58u;
    // 7F383C58: stw     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F383C5C:
    ctx->pc = 0x7F383C5Cu;
    // 7F383C5C: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F383C60:
    ctx->pc = 0x7F383C60u;
    // 7F383C60: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F383C64:
    ctx->pc = 0x7F383C64u;
    // 7F383C64: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F383C68:
    ctx->pc = 0x7F383C68u;
    // 7F383C68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383C6C:
    ctx->pc = 0x7F383C6Cu;
    // 7F383C6C: lwz     r5, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383C70:
    ctx->pc = 0x7F383C70u;
    // 7F383C70: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F383C74:
    ctx->pc = 0x7F383C74u;
    // 7F383C74: lwz     r24, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F383C78:
    ctx->pc = 0x7F383C78u;
    // 7F383C78: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F383C7C:
    ctx->pc = 0x7F383C7Cu;
    // 7F383C7C: bl      0x7F014788
    {
            ctx->lr = 0x7F383C80u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F383C80:
    ctx->pc = 0x7F383C80u;
    ctx->downcount -= 5;
    // 7F383C80: lis     r3, 32568
    ctx->gpr[3] = ((u32)(s32)(32568) << 16);

label_7F383C84:
    ctx->pc = 0x7F383C84u;
    // 7F383C84: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383C88:
    ctx->pc = 0x7F383C88u;
    // 7F383C88: addi    r4, r3, 14472
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14472);

label_7F383C8C:
    ctx->pc = 0x7F383C8Cu;
    // 7F383C8C: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F383C90:
    ctx->pc = 0x7F383C90u;
    // 7F383C90: bl      0x7F014B6C
    {
            ctx->lr = 0x7F383C94u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F383C94:
    ctx->pc = 0x7F383C94u;
    ctx->downcount -= 4;
    // 7F383C94: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F383C98:
    ctx->pc = 0x7F383C98u;
    // 7F383C98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F383C9C:
    ctx->pc = 0x7F383C9Cu;
    // 7F383C9C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F383CA0:
    ctx->pc = 0x7F383CA0u;
    // 7F383CA0: bl      0x7F014B60
    {
            ctx->lr = 0x7F383CA4u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F383CA4:
    ctx->pc = 0x7F383CA4u;
    ctx->downcount -= 6;
    // 7F383CA4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F383CA8:
    ctx->pc = 0x7F383CA8u;
    // 7F383CA8: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F383CAC:
    ctx->pc = 0x7F383CACu;
    // 7F383CAC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383CB0:
    ctx->pc = 0x7F383CB0u;
    // 7F383CB0: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F383CB4:
    ctx->pc = 0x7F383CB4u;
    // 7F383CB4: cmpwi   r0, 20
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

label_7F383CB8:
    ctx->pc = 0x7F383CB8u;
    // 7F383CB8: bc    4, 0, 0x7F383CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383CE4;
        }
    }

label_7F383CBC:
    ctx->pc = 0x7F383CBCu;
    ctx->downcount -= 9;
    // 7F383CBC: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F383CC0:
    ctx->pc = 0x7F383CC0u;
    // 7F383CC0: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F383CC4:
    ctx->pc = 0x7F383CC4u;
    // 7F383CC4: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F383CC8:
    ctx->pc = 0x7F383CC8u;
    // 7F383CC8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F383CCC:
    ctx->pc = 0x7F383CCCu;
    // 7F383CCC: addi    r4, r31, 480
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(480);

label_7F383CD0:
    ctx->pc = 0x7F383CD0u;
    // 7F383CD0: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F383CD4:
    ctx->pc = 0x7F383CD4u;
    // 7F383CD4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F383CD8:
    ctx->pc = 0x7F383CD8u;
    // 7F383CD8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F383CDC:
    ctx->pc = 0x7F383CDCu;
    // 7F383CDC: bl      0x7F014B78
    {
            ctx->lr = 0x7F383CE0u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F383CE0:
    ctx->pc = 0x7F383CE0u;
    ctx->downcount -= 1;
    // 7F383CE0: b       0x7F383D08
    {
            goto label_7F383D08;
    }

label_7F383CE4:
    ctx->pc = 0x7F383CE4u;
    ctx->downcount -= 9;
    // 7F383CE4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F383CE8:
    ctx->pc = 0x7F383CE8u;
    // 7F383CE8: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F383CEC:
    ctx->pc = 0x7F383CECu;
    // 7F383CEC: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F383CF0:
    ctx->pc = 0x7F383CF0u;
    // 7F383CF0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F383CF4:
    ctx->pc = 0x7F383CF4u;
    // 7F383CF4: addi    r4, r31, 480
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(480);

label_7F383CF8:
    ctx->pc = 0x7F383CF8u;
    // 7F383CF8: li      r6, 9
    ctx->gpr[6] = (u32)(s32)(9);

label_7F383CFC:
    ctx->pc = 0x7F383CFCu;
    // 7F383CFC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F383D00:
    ctx->pc = 0x7F383D00u;
    // 7F383D00: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F383D04:
    ctx->pc = 0x7F383D04u;
    // 7F383D04: bl      0x7F014B78
    {
            ctx->lr = 0x7F383D08u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F383D08:
    ctx->pc = 0x7F383D08u;
    ctx->downcount -= 2;
    // 7F383D08: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F383D0C:
    ctx->pc = 0x7F383D0Cu;
    // 7F383D0C: bl      0x7F0148A0
    {
            ctx->lr = 0x7F383D10u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F383D10:
    ctx->pc = 0x7F383D10u;
    ctx->downcount -= 3;
    // 7F383D10: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383D14:
    ctx->pc = 0x7F383D14u;
    // 7F383D14: cmpwi   r0, 2
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

label_7F383D18:
    ctx->pc = 0x7F383D18u;
    // 7F383D18: bc    4, 2, 0x7F383DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383DCC;
        }
    }

label_7F383D1C:
    ctx->pc = 0x7F383D1Cu;
    ctx->downcount -= 8;
    // 7F383D1C: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F383D20:
    ctx->pc = 0x7F383D20u;
    // 7F383D20: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F383D24:
    ctx->pc = 0x7F383D24u;
    // 7F383D24: addi    r3, r31, 512
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(512);

label_7F383D28:
    ctx->pc = 0x7F383D28u;
    // 7F383D28: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F383D2C:
    ctx->pc = 0x7F383D2Cu;
    // 7F383D2C: addi    r4, r4, 16401
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16401);

label_7F383D30:
    ctx->pc = 0x7F383D30u;
    // 7F383D30: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F383D34:
    ctx->pc = 0x7F383D34u;
    // 7F383D34: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F383D38:
    ctx->pc = 0x7F383D38u;
    // 7F383D38: bl      0x7F014788
    {
            ctx->lr = 0x7F383D3Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F383D3C:
    ctx->pc = 0x7F383D3Cu;
    ctx->downcount -= 5;
    // 7F383D3C: lis     r3, 32568
    ctx->gpr[3] = ((u32)(s32)(32568) << 16);

label_7F383D40:
    ctx->pc = 0x7F383D40u;
    // 7F383D40: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383D44:
    ctx->pc = 0x7F383D44u;
    // 7F383D44: addi    r4, r3, 15036
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15036);

label_7F383D48:
    ctx->pc = 0x7F383D48u;
    // 7F383D48: addi    r3, r31, 512
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(512);

label_7F383D4C:
    ctx->pc = 0x7F383D4Cu;
    // 7F383D4C: bl      0x7F014B6C
    {
            ctx->lr = 0x7F383D50u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F383D50:
    ctx->pc = 0x7F383D50u;
    ctx->downcount -= 4;
    // 7F383D50: addi    r3, r31, 512
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(512);

label_7F383D54:
    ctx->pc = 0x7F383D54u;
    // 7F383D54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F383D58:
    ctx->pc = 0x7F383D58u;
    // 7F383D58: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F383D5C:
    ctx->pc = 0x7F383D5Cu;
    // 7F383D5C: bl      0x7F014B60
    {
            ctx->lr = 0x7F383D60u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F383D60:
    ctx->pc = 0x7F383D60u;
    ctx->downcount -= 6;
    // 7F383D60: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F383D64:
    ctx->pc = 0x7F383D64u;
    // 7F383D64: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F383D68:
    ctx->pc = 0x7F383D68u;
    // 7F383D68: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383D6C:
    ctx->pc = 0x7F383D6Cu;
    // 7F383D6C: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F383D70:
    ctx->pc = 0x7F383D70u;
    // 7F383D70: cmpwi   r0, 20
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

label_7F383D74:
    ctx->pc = 0x7F383D74u;
    // 7F383D74: bc    4, 0, 0x7F383DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383DA0;
        }
    }

label_7F383D78:
    ctx->pc = 0x7F383D78u;
    ctx->downcount -= 9;
    // 7F383D78: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F383D7C:
    ctx->pc = 0x7F383D7Cu;
    // 7F383D7C: addi    r3, r31, 512
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(512);

label_7F383D80:
    ctx->pc = 0x7F383D80u;
    // 7F383D80: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F383D84:
    ctx->pc = 0x7F383D84u;
    // 7F383D84: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F383D88:
    ctx->pc = 0x7F383D88u;
    // 7F383D88: addi    r4, r31, 704
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(704);

label_7F383D8C:
    ctx->pc = 0x7F383D8Cu;
    // 7F383D8C: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F383D90:
    ctx->pc = 0x7F383D90u;
    // 7F383D90: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F383D94:
    ctx->pc = 0x7F383D94u;
    // 7F383D94: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F383D98:
    ctx->pc = 0x7F383D98u;
    // 7F383D98: bl      0x7F014B78
    {
            ctx->lr = 0x7F383D9Cu;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F383D9C:
    ctx->pc = 0x7F383D9Cu;
    ctx->downcount -= 1;
    // 7F383D9C: b       0x7F383DC4
    {
            goto label_7F383DC4;
    }

label_7F383DA0:
    ctx->pc = 0x7F383DA0u;
    ctx->downcount -= 9;
    // 7F383DA0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F383DA4:
    ctx->pc = 0x7F383DA4u;
    // 7F383DA4: addi    r3, r31, 512
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(512);

label_7F383DA8:
    ctx->pc = 0x7F383DA8u;
    // 7F383DA8: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F383DAC:
    ctx->pc = 0x7F383DACu;
    // 7F383DAC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F383DB0:
    ctx->pc = 0x7F383DB0u;
    // 7F383DB0: addi    r4, r31, 704
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(704);

label_7F383DB4:
    ctx->pc = 0x7F383DB4u;
    // 7F383DB4: li      r6, 9
    ctx->gpr[6] = (u32)(s32)(9);

label_7F383DB8:
    ctx->pc = 0x7F383DB8u;
    // 7F383DB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F383DBC:
    ctx->pc = 0x7F383DBCu;
    // 7F383DBC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F383DC0:
    ctx->pc = 0x7F383DC0u;
    // 7F383DC0: bl      0x7F014B78
    {
            ctx->lr = 0x7F383DC4u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F383DC4:
    ctx->pc = 0x7F383DC4u;
    ctx->downcount -= 2;
    // 7F383DC4: addi    r3, r31, 512
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(512);

label_7F383DC8:
    ctx->pc = 0x7F383DC8u;
    // 7F383DC8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F383DCCu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F383DCC:
    ctx->pc = 0x7F383DCCu;
    ctx->downcount -= 16;
    // 7F383DCC: lmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F383DD0:
    ctx->pc = 0x7F383DD0u;
    // 7F383DD0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383DD4:
    ctx->pc = 0x7F383DD4u;
    // 7F383DD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383DD8:
    ctx->pc = 0x7F383DD8u;
    // 7F383DD8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F383DDC:
    ctx->pc = 0x7F383DDCu;
    // 7F383DDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383DE0:
    ctx->pc = 0x7F383DE0u;
    ctx->downcount -= 21;
    // 7F383DE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383DE4:
    ctx->pc = 0x7F383DE4u;
    // 7F383DE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383DE8:
    ctx->pc = 0x7F383DE8u;
    // 7F383DE8: addi    r8, r5, 196
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(196);

label_7F383DEC:
    ctx->pc = 0x7F383DECu;
    // 7F383DEC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F383DF0:
    ctx->pc = 0x7F383DF0u;
    // 7F383DF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383DF4:
    ctx->pc = 0x7F383DF4u;
    // 7F383DF4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F383DF8:
    ctx->pc = 0x7F383DF8u;
    // 7F383DF8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383DFC:
    ctx->pc = 0x7F383DFCu;
    // 7F383DFC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F383E00:
    ctx->pc = 0x7F383E00u;
    // 7F383E00: lwz     r9, 920(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(920);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F383E04:
    ctx->pc = 0x7F383E04u;
    // 7F383E04: addi    r0, r31, 52
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(52);

label_7F383E08:
    ctx->pc = 0x7F383E08u;
    // 7F383E08: addi    r3, r3, 10064
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10064);

label_7F383E0C:
    ctx->pc = 0x7F383E0Cu;
    // 7F383E0C: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F383E10:
    ctx->pc = 0x7F383E10u;
    // 7F383E10: stw     r8, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F383E14:
    ctx->pc = 0x7F383E14u;
    // 7F383E14: lbz     r4, 56(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F383E18:
    ctx->pc = 0x7F383E18u;
    // 7F383E18: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F383E1C:
    ctx->pc = 0x7F383E1Cu;
    // 7F383E1C: stw     r4, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F383E20:
    ctx->pc = 0x7F383E20u;
    // 7F383E20: lwz     r4, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383E24:
    ctx->pc = 0x7F383E24u;
    // 7F383E24: stw     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F383E28:
    ctx->pc = 0x7F383E28u;
    // 7F383E28: stw     r5, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F383E2C:
    ctx->pc = 0x7F383E2Cu;
    // 7F383E2C: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383E30:
    ctx->pc = 0x7F383E30u;
    // 7F383E30: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F383E34u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F383E34:
    ctx->pc = 0x7F383E34u;
    ctx->downcount -= 5;
    // 7F383E34: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383E38:
    ctx->pc = 0x7F383E38u;
    // 7F383E38: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F383E3C:
    ctx->pc = 0x7F383E3Cu;
    // 7F383E3C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F383E40:
    ctx->pc = 0x7F383E40u;
    // 7F383E40: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F383E44:
    ctx->pc = 0x7F383E44u;
    // 7F383E44: bl      0x7F04272C
    {
            ctx->lr = 0x7F383E48u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F383E48:
    ctx->pc = 0x7F383E48u;
    ctx->downcount -= 3;
    // 7F383E48: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383E4C:
    ctx->pc = 0x7F383E4Cu;
    // 7F383E4C: cmplwi  r3, 0x0000
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

label_7F383E50:
    ctx->pc = 0x7F383E50u;
    // 7F383E50: bc    4, 2, 0x7F383E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383E5C;
        }
    }

label_7F383E54:
    ctx->pc = 0x7F383E54u;
    ctx->downcount -= 2;
    // 7F383E54: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F383E58:
    ctx->pc = 0x7F383E58u;
    // 7F383E58: b       0x7F383FA4
    {
            goto label_7F383FA4;
    }

label_7F383E5C:
    ctx->pc = 0x7F383E5Cu;
    ctx->downcount -= 3;
    // 7F383E5C: lis     r4, 64
    ctx->gpr[4] = ((u32)(s32)(64) << 16);

label_7F383E60:
    ctx->pc = 0x7F383E60u;
    // 7F383E60: li      r5, 4096
    ctx->gpr[5] = (u32)(s32)(4096);

label_7F383E64:
    ctx->pc = 0x7F383E64u;
    // 7F383E64: bl      0x7F3B0FD0
    {
            ctx->lr = 0x7F383E68u;
            ctx->pc = 0x7F3B0FD0u;
            return;
    }

label_7F383E68:
    ctx->pc = 0x7F383E68u;
    ctx->downcount -= 3;
    // 7F383E68: lwz     r0, 988(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383E6C:
    ctx->pc = 0x7F383E6Cu;
    // 7F383E6C: cmpwi   r0, 2
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

label_7F383E70:
    ctx->pc = 0x7F383E70u;
    // 7F383E70: bc    4, 2, 0x7F383F1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F383F1C;
        }
    }

label_7F383E74:
    ctx->pc = 0x7F383E74u;
    ctx->downcount -= 3;
    // 7F383E74: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F383E78:
    ctx->pc = 0x7F383E78u;
    // 7F383E78: addi    r3, r3, 10072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10072);

label_7F383E7C:
    ctx->pc = 0x7F383E7Cu;
    // 7F383E7C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F383E80u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F383E80:
    ctx->pc = 0x7F383E80u;
    ctx->downcount -= 5;
    // 7F383E80: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383E84:
    ctx->pc = 0x7F383E84u;
    // 7F383E84: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F383E88:
    ctx->pc = 0x7F383E88u;
    // 7F383E88: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F383E8C:
    ctx->pc = 0x7F383E8Cu;
    // 7F383E8C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F383E90:
    ctx->pc = 0x7F383E90u;
    // 7F383E90: bl      0x7F04272C
    {
            ctx->lr = 0x7F383E94u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F383E94:
    ctx->pc = 0x7F383E94u;
    ctx->downcount -= 3;
    // 7F383E94: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383E98:
    ctx->pc = 0x7F383E98u;
    // 7F383E98: addi    r4, r31, 148
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(148);

label_7F383E9C:
    ctx->pc = 0x7F383E9Cu;
    // 7F383E9C: bl      0x7F3BC518
    {
            ctx->lr = 0x7F383EA0u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F383EA0:
    ctx->pc = 0x7F383EA0u;
    ctx->downcount -= 9;
    // 7F383EA0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F383EA4:
    ctx->pc = 0x7F383EA4u;
    // 7F383EA4: addi    r4, r31, 980
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(980);

label_7F383EA8:
    ctx->pc = 0x7F383EA8u;
    // 7F383EA8: stw     r0, 980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(980);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383EAC:
    ctx->pc = 0x7F383EACu;
    // 7F383EAC: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F383EB0:
    ctx->pc = 0x7F383EB0u;
    // 7F383EB0: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383EB4:
    ctx->pc = 0x7F383EB4u;
    // 7F383EB4: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F383EB8:
    ctx->pc = 0x7F383EB8u;
    // 7F383EB8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F383EBC:
    ctx->pc = 0x7F383EBCu;
    // 7F383EBC: addi    r6, r6, 40
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(40);

label_7F383EC0:
    ctx->pc = 0x7F383EC0u;
    // 7F383EC0: bl      0x7F207F3C
    {
            ctx->lr = 0x7F383EC4u;
            ctx->pc = 0x7F207F3Cu;
            return;
    }

label_7F383EC4:
    ctx->pc = 0x7F383EC4u;
    ctx->downcount -= 3;
    // 7F383EC4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383EC8:
    ctx->pc = 0x7F383EC8u;
    // 7F383EC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383ECC:
    ctx->pc = 0x7F383ECCu;
    // 7F383ECC: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F383ED0u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F383ED0:
    ctx->pc = 0x7F383ED0u;
    ctx->downcount -= 2;
    // 7F383ED0: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383ED4:
    ctx->pc = 0x7F383ED4u;
    // 7F383ED4: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F383ED8u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F383ED8:
    ctx->pc = 0x7F383ED8u;
    ctx->downcount -= 3;
    // 7F383ED8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F383EDC:
    ctx->pc = 0x7F383EDCu;
    // 7F383EDC: addi    r3, r3, 10072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10072);

label_7F383EE0:
    ctx->pc = 0x7F383EE0u;
    // 7F383EE0: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F383EE4u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F383EE4:
    ctx->pc = 0x7F383EE4u;
    ctx->downcount -= 2;
    // 7F383EE4: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F383EE8:
    ctx->pc = 0x7F383EE8u;
    // 7F383EE8: bl      0x7F3C8470
    {
            ctx->lr = 0x7F383EECu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F383EEC:
    ctx->pc = 0x7F383EECu;
    ctx->downcount -= 1;
    // 7F383EEC: bl      0x7F3C8480
    {
            ctx->lr = 0x7F383EF0u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F383EF0:
    ctx->pc = 0x7F383EF0u;
    ctx->downcount -= 4;
    // 7F383EF0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F383EF4:
    ctx->pc = 0x7F383EF4u;
    // 7F383EF4: stw     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383EF8:
    ctx->pc = 0x7F383EF8u;
    // 7F383EF8: addi    r3, r4, 10084
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(10084);

label_7F383EFC:
    ctx->pc = 0x7F383EFCu;
    // 7F383EFC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F383F00u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F383F00:
    ctx->pc = 0x7F383F00u;
    ctx->downcount -= 2;
    // 7F383F00: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F383F04:
    ctx->pc = 0x7F383F04u;
    // 7F383F04: bl      0x7F3C8470
    {
            ctx->lr = 0x7F383F08u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F383F08:
    ctx->pc = 0x7F383F08u;
    ctx->downcount -= 1;
    // 7F383F08: bl      0x7F3C8480
    {
            ctx->lr = 0x7F383F0Cu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F383F0C:
    ctx->pc = 0x7F383F0Cu;
    ctx->downcount -= 4;
    // 7F383F0C: stw     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383F10:
    ctx->pc = 0x7F383F10u;
    // 7F383F10: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F383F14:
    ctx->pc = 0x7F383F14u;
    // 7F383F14: stw     r0, 984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383F18:
    ctx->pc = 0x7F383F18u;
    // 7F383F18: b       0x7F383F24
    {
            goto label_7F383F24;
    }

label_7F383F1C:
    ctx->pc = 0x7F383F1Cu;
    ctx->downcount -= 2;
    // 7F383F1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383F20:
    ctx->pc = 0x7F383F20u;
    // 7F383F20: stw     r0, 984(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(984);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383F24:
    ctx->pc = 0x7F383F24u;
    ctx->downcount -= 3;
    // 7F383F24: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383F28:
    ctx->pc = 0x7F383F28u;
    // 7F383F28: addi    r4, r31, 148
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(148);

label_7F383F2C:
    ctx->pc = 0x7F383F2Cu;
    // 7F383F2C: bl      0x7F3BC518
    {
            ctx->lr = 0x7F383F30u;
            ctx->pc = 0x7F3BC518u;
            return;
    }

label_7F383F30:
    ctx->pc = 0x7F383F30u;
    ctx->downcount -= 20;
    // 7F383F30: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383F34:
    ctx->pc = 0x7F383F34u;
    // 7F383F34: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F383F38:
    ctx->pc = 0x7F383F38u;
    // 7F383F38: lwz     r3, 960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(960);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383F3C:
    ctx->pc = 0x7F383F3Cu;
    // 7F383F3C: ori     r3, r3, 0x3000
    ctx->gpr[3] = ctx->gpr[3] | 0x3000u;

label_7F383F40:
    ctx->pc = 0x7F383F40u;
    // 7F383F40: stw     r3, 960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383F44:
    ctx->pc = 0x7F383F44u;
    // 7F383F44: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F383F48:
    ctx->pc = 0x7F383F48u;
    // 7F383F48: lwz     r3, 1284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383F4C:
    ctx->pc = 0x7F383F4Cu;
    // 7F383F4C: ori     r3, r3, 0x3000
    ctx->gpr[3] = ctx->gpr[3] | 0x3000u;

label_7F383F50:
    ctx->pc = 0x7F383F50u;
    // 7F383F50: stw     r3, 1284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F383F54:
    ctx->pc = 0x7F383F54u;
    // 7F383F54: stw     r0, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383F58:
    ctx->pc = 0x7F383F58u;
    // 7F383F58: stb     r0, 992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(992);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F383F5C:
    ctx->pc = 0x7F383F5Cu;
    // 7F383F5C: stb     r0, 994(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(994);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F383F60:
    ctx->pc = 0x7F383F60u;
    // 7F383F60: sth     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F383F64:
    ctx->pc = 0x7F383F64u;
    // 7F383F64: sth     r0, 962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(962);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F383F68:
    ctx->pc = 0x7F383F68u;
    // 7F383F68: sth     r0, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F383F6C:
    ctx->pc = 0x7F383F6Cu;
    // 7F383F6C: stb     r0, 995(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(995);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F383F70:
    ctx->pc = 0x7F383F70u;
    // 7F383F70: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383F74:
    ctx->pc = 0x7F383F74u;
    // 7F383F74: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383F78:
    ctx->pc = 0x7F383F78u;
    // 7F383F78: addi    r3, r3, 3684
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3684);

label_7F383F7C:
    ctx->pc = 0x7F383F7Cu;
    // 7F383F7C: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F383F80u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F383F80:
    ctx->pc = 0x7F383F80u;
    ctx->downcount -= 2;
    // 7F383F80: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383F84:
    ctx->pc = 0x7F383F84u;
    // 7F383F84: bl      0x7F3B35CC
    {
            ctx->lr = 0x7F383F88u;
            ctx->pc = 0x7F3B35CCu;
            return;
    }

label_7F383F88:
    ctx->pc = 0x7F383F88u;
    ctx->downcount -= 2;
    // 7F383F88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F383F8C:
    ctx->pc = 0x7F383F8Cu;
    // 7F383F8C: bl      0x7F383BC8
    {
            ctx->lr = 0x7F383F90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383BC8u;
                return;
            }
            goto label_7F383BC8;
    }

label_7F383F90:
    ctx->pc = 0x7F383F90u;
    ctx->downcount -= 4;
    // 7F383F90: lwz     r3, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F383F94:
    ctx->pc = 0x7F383F94u;
    // 7F383F94: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F383F98:
    ctx->pc = 0x7F383F98u;
    // 7F383F98: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383F9C:
    ctx->pc = 0x7F383F9Cu;
    // 7F383F9C: bl      0x7F1FD430
    {
            ctx->lr = 0x7F383FA0u;
            ctx->pc = 0x7F1FD430u;
            return;
    }

label_7F383FA0:
    ctx->pc = 0x7F383FA0u;
    ctx->downcount -= 1;
    // 7F383FA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F383FA4:
    ctx->pc = 0x7F383FA4u;
    ctx->downcount -= 6;
    // 7F383FA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F383FA8:
    ctx->pc = 0x7F383FA8u;
    // 7F383FA8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F383FAC:
    ctx->pc = 0x7F383FACu;
    // 7F383FAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F383FB0:
    ctx->pc = 0x7F383FB0u;
    // 7F383FB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F383FB4:
    ctx->pc = 0x7F383FB4u;
    // 7F383FB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F383FB8:
    ctx->pc = 0x7F383FB8u;
    ctx->downcount -= 22;
    // 7F383FB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F383FBC:
    ctx->pc = 0x7F383FBCu;
    // 7F383FBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F383FC0:
    ctx->pc = 0x7F383FC0u;
    // 7F383FC0: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_7F383FC4:
    ctx->pc = 0x7F383FC4u;
    // 7F383FC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F383FC8:
    ctx->pc = 0x7F383FC8u;
    // 7F383FC8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F383FCC:
    ctx->pc = 0x7F383FCCu;
    // 7F383FCC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F383FD0:
    ctx->pc = 0x7F383FD0u;
    // 7F383FD0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F383FD4:
    ctx->pc = 0x7F383FD4u;
    // 7F383FD4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F383FD8:
    ctx->pc = 0x7F383FD8u;
    // 7F383FD8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F383FDC:
    ctx->pc = 0x7F383FDCu;
    // 7F383FDC: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F383FE0:
    ctx->pc = 0x7F383FE0u;
    // 7F383FE0: li      r5, 1008
    ctx->gpr[5] = (u32)(s32)(1008);

label_7F383FE4:
    ctx->pc = 0x7F383FE4u;
    // 7F383FE4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F383FE8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F383FE8:
    ctx->pc = 0x7F383FE8u;
    ctx->downcount -= 2;
    // 7F383FE8: or.   r31, r3, r3
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

label_7F383FEC:
    ctx->pc = 0x7F383FECu;
    // 7F383FEC: bc    12, 2, 0x7F384058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F384058;
        }
    }

label_7F383FF0:
    ctx->pc = 0x7F383FF0u;
    ctx->downcount -= 5;
    // 7F383FF0: lis     r4, 32568
    ctx->gpr[4] = ((u32)(s32)(32568) << 16);

label_7F383FF4:
    ctx->pc = 0x7F383FF4u;
    // 7F383FF4: lis     r5, 32568
    ctx->gpr[5] = ((u32)(s32)(32568) << 16);

label_7F383FF8:
    ctx->pc = 0x7F383FF8u;
    // 7F383FF8: addi    r4, r4, 13284
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13284);

label_7F383FFC:
    ctx->pc = 0x7F383FFCu;
    // 7F383FFC: addi    r5, r5, 14260
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14260);

label_7F384000:
    ctx->pc = 0x7F384000u;
    // 7F384000: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F384004u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F384004:
    ctx->pc = 0x7F384004u;
    ctx->downcount -= 15;
    // 7F384004: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F384008:
    ctx->pc = 0x7F384008u;
    // 7F384008: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F38400C:
    ctx->pc = 0x7F38400Cu;
    // 7F38400C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F384010:
    ctx->pc = 0x7F384010u;
    // 7F384010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F384014:
    ctx->pc = 0x7F384014u;
    // 7F384014: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F384018:
    ctx->pc = 0x7F384018u;
    // 7F384018: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F38401C:
    ctx->pc = 0x7F38401Cu;
    // 7F38401C: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F384020:
    ctx->pc = 0x7F384020u;
    // 7F384020: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F384024:
    ctx->pc = 0x7F384024u;
    // 7F384024: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F384028:
    ctx->pc = 0x7F384028u;
    // 7F384028: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F38402C:
    ctx->pc = 0x7F38402Cu;
    // 7F38402C: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F384030:
    ctx->pc = 0x7F384030u;
    // 7F384030: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F384034:
    ctx->pc = 0x7F384034u;
    // 7F384034: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F384038:
    ctx->pc = 0x7F384038u;
    // 7F384038: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38403C:
    ctx->pc = 0x7F38403Cu;
    // 7F38403C: bl      0x7F383DE0
    {
            ctx->lr = 0x7F384040u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F383DE0u;
                return;
            }
            goto label_7F383DE0;
    }

label_7F384040:
    ctx->pc = 0x7F384040u;
    ctx->downcount -= 2;
    // 7F384040: cmpwi   r3, 0
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

label_7F384044:
    ctx->pc = 0x7F384044u;
    // 7F384044: bc    4, 0, 0x7F384058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F384058;
        }
    }

label_7F384048:
    ctx->pc = 0x7F384048u;
    ctx->downcount -= 2;
    // 7F384048: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F38404C:
    ctx->pc = 0x7F38404Cu;
    // 7F38404C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F384050u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F384050:
    ctx->pc = 0x7F384050u;
    ctx->downcount -= 2;
    // 7F384050: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F384054:
    ctx->pc = 0x7F384054u;
    // 7F384054: b       0x7F38405C
    {
            goto label_7F38405C;
    }

label_7F384058:
    ctx->pc = 0x7F384058u;
    ctx->downcount -= 1;
    // 7F384058: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F38405C:
    ctx->pc = 0x7F38405Cu;
    ctx->downcount -= 16;
    // 7F38405C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F384060:
    ctx->pc = 0x7F384060u;
    // 7F384060: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F384064:
    ctx->pc = 0x7F384064u;
    // 7F384064: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F384068:
    ctx->pc = 0x7F384068u;
    // 7F384068: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F38406C:
    ctx->pc = 0x7F38406Cu;
    // 7F38406C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3800EC;
        }
    }

label_7F384070:
    ctx->pc = 0x7F384070u;
    ctx->downcount -= 18;
    // 7F384070: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F384074:
    ctx->pc = 0x7F384074u;
    // 7F384074: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F384078:
    ctx->pc = 0x7F384078u;
    // 7F384078: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F38407C:
    ctx->pc = 0x7F38407Cu;
    // 7F38407C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F384080:
    ctx->pc = 0x7F384080u;
    // 7F384080: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F384084:
    ctx->pc = 0x7F384084u;
    // 7F384084: lha     r0, 484(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(484);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F384088:
    ctx->pc = 0x7F384088u;
    // 7F384088: cmpwi   r0, 2
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

label_7F38408C:
    ctx->pc = 0x7F38408Cu;
    // 7F38408C: bc    4, 0, 0x7F3841C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3841C4u;
            return;
        }
    }

label_7F384090:
    ctx->pc = 0x7F384090u;
    ctx->downcount -= 3;
    // 7F384090: lbz     r0, 203(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(203);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F384094:
    ctx->pc = 0x7F384094u;
    // 7F384094: extsb. r0, r0
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

label_7F384098:
    ctx->pc = 0x7F384098u;
    // 7F384098: bc    12, 2, 0x7F3841C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3841C4u;
            return;
        }
    }

label_7F38409C:
    ctx->pc = 0x7F38409Cu;
    ctx->downcount -= 1;
    // 7F38409C: bl      0x7F10B7E4
    {
            ctx->lr = 0x7F3840A0u;
            ctx->pc = 0x7F10B7E4u;
            return;
    }

label_7F3840A0:
    ctx->pc = 0x7F3840A0u;
    ctx->downcount -= 3;
    // 7F3840A0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3840A4:
    ctx->pc = 0x7F3840A4u;
    // 7F3840A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F3840A8:
    ctx->pc = 0x7F3840A8u;
    // 7F3840A8: bl      0x7F10B7C4
    {
            ctx->lr = 0x7F3840ACu;
            ctx->pc = 0x7F10B7C4u;
            return;
    }

label_7F3840AC:
    ctx->pc = 0x7F3840ACu;
    ctx->downcount -= 2;
    // 7F3840AC: cmpwi   r30, 1
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

label_7F3840B0:
    ctx->pc = 0x7F3840B0u;
    // 7F3840B0: bc    12, 2, 0x7F3841C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F3841C4u;
            return;
        }
    }

label_7F3840B4:
    ctx->pc = 0x7F3840B4u;
    ctx->downcount -= 3;
    // 7F3840B4: lha     r0, 484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(484);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F3840B8:
    ctx->pc = 0x7F3840B8u;
    // 7F3840B8: cmpwi   r0, 0
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

label_7F3840BC:
    ctx->pc = 0x7F3840BCu;
    // 7F3840BC: bc    4, 2, 0x7F38413C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F38413Cu;
            return;
        }
    }

label_7F3840C0:
    ctx->pc = 0x7F3840C0u;
    ctx->downcount -= 2;
    // 7F3840C0: addi    r3, r31, 436
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(436);

label_7F3840C4:
    ctx->pc = 0x7F3840C4u;
    // 7F3840C4: bl      0x7F3CC594
    {
            ctx->lr = 0x7F3840C8u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F3840C8:
    ctx->pc = 0x7F3840C8u;
    ctx->downcount -= 9;
    // 7F3840C8: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3840CC:
    ctx->pc = 0x7F3840CCu;
    // 7F3840CC: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F3840D0:
    ctx->pc = 0x7F3840D0u;
    // 7F3840D0: addi    r5, r3, -22164
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-22164);

label_7F3840D4:
    ctx->pc = 0x7F3840D4u;
    // 7F3840D4: lfs     f2, -22160(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F3840D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-22160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F3840D8:
    ctx->pc = 0x7F3840D8u;
    // 7F3840D8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F3840D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F3840DC:
    ctx->pc = 0x7F3840DCu;
    // 7F3840DC: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3840E0:
    ctx->pc = 0x7F3840E0u;
    // 7F3840E0: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F3840E4:
    ctx->pc = 0x7F3840E4u;
    // 7F3840E4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3840E8:
    ctx->pc = 0x7F3840E8u;
    // 7F3840E8: fmuls   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F3840E8u)) return;
    ppc_fmuls(ctx, 1, 0, 1);

    ctx->pc = 0x7F3840ECu;
    return;
return_dispatch_7F3800EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F3800F0u: goto label_7F3800F0;
    case 0x7F38016Cu: goto label_7F38016C;
    case 0x7F380184u: goto label_7F380184;
    case 0x7F38018Cu: goto label_7F38018C;
    case 0x7F380198u: goto label_7F380198;
    case 0x7F3801A0u: goto label_7F3801A0;
    case 0x7F3801A8u: goto label_7F3801A8;
    case 0x7F3801D0u: goto label_7F3801D0;
    case 0x7F3801F8u: goto label_7F3801F8;
    case 0x7F380230u: goto label_7F380230;
    case 0x7F38023Cu: goto label_7F38023C;
    case 0x7F380248u: goto label_7F380248;
    case 0x7F380260u: goto label_7F380260;
    case 0x7F38026Cu: goto label_7F38026C;
    case 0x7F380280u: goto label_7F380280;
    case 0x7F3802B0u: goto label_7F3802B0;
    case 0x7F3802BCu: goto label_7F3802BC;
    case 0x7F3802C4u: goto label_7F3802C4;
    case 0x7F3802CCu: goto label_7F3802CC;
    case 0x7F3802ECu: goto label_7F3802EC;
    case 0x7F3802F4u: goto label_7F3802F4;
    case 0x7F380308u: goto label_7F380308;
    case 0x7F380328u: goto label_7F380328;
    case 0x7F3803A0u: goto label_7F3803A0;
    case 0x7F3803B0u: goto label_7F3803B0;
    case 0x7F3803C8u: goto label_7F3803C8;
    case 0x7F3803D4u: goto label_7F3803D4;
    case 0x7F3803E8u: goto label_7F3803E8;
    case 0x7F380418u: goto label_7F380418;
    case 0x7F380428u: goto label_7F380428;
    case 0x7F380438u: goto label_7F380438;
    case 0x7F380448u: goto label_7F380448;
    case 0x7F380458u: goto label_7F380458;
    case 0x7F380464u: goto label_7F380464;
    case 0x7F380478u: goto label_7F380478;
    case 0x7F380484u: goto label_7F380484;
    case 0x7F380494u: goto label_7F380494;
    case 0x7F3804A0u: goto label_7F3804A0;
    case 0x7F3804D0u: goto label_7F3804D0;
    case 0x7F3804DCu: goto label_7F3804DC;
    case 0x7F3804E8u: goto label_7F3804E8;
    case 0x7F3804F4u: goto label_7F3804F4;
    case 0x7F380500u: goto label_7F380500;
    case 0x7F3805A0u: goto label_7F3805A0;
    case 0x7F3805ACu: goto label_7F3805AC;
    case 0x7F3805F8u: goto label_7F3805F8;
    case 0x7F380604u: goto label_7F380604;
    case 0x7F380650u: goto label_7F380650;
    case 0x7F38065Cu: goto label_7F38065C;
    case 0x7F3806A8u: goto label_7F3806A8;
    case 0x7F3806B4u: goto label_7F3806B4;
    case 0x7F3806FCu: goto label_7F3806FC;
    case 0x7F380708u: goto label_7F380708;
    case 0x7F380754u: goto label_7F380754;
    case 0x7F380760u: goto label_7F380760;
    case 0x7F3807ACu: goto label_7F3807AC;
    case 0x7F3807B8u: goto label_7F3807B8;
    case 0x7F380804u: goto label_7F380804;
    case 0x7F380810u: goto label_7F380810;
    case 0x7F380858u: goto label_7F380858;
    case 0x7F380864u: goto label_7F380864;
    case 0x7F38089Cu: goto label_7F38089C;
    case 0x7F3808B0u: goto label_7F3808B0;
    case 0x7F3808C0u: goto label_7F3808C0;
    case 0x7F3808CCu: goto label_7F3808CC;
    case 0x7F3808E8u: goto label_7F3808E8;
    case 0x7F3808F4u: goto label_7F3808F4;
    case 0x7F3808FCu: goto label_7F3808FC;
    case 0x7F380908u: goto label_7F380908;
    case 0x7F380918u: goto label_7F380918;
    case 0x7F380934u: goto label_7F380934;
    case 0x7F3809E8u: goto label_7F3809E8;
    case 0x7F3809FCu: goto label_7F3809FC;
    case 0x7F380A0Cu: goto label_7F380A0C;
    case 0x7F380A30u: goto label_7F380A30;
    case 0x7F380A38u: goto label_7F380A38;
    case 0x7F380A48u: goto label_7F380A48;
    case 0x7F380A5Cu: goto label_7F380A5C;
    case 0x7F380B34u: goto label_7F380B34;
    case 0x7F380B44u: goto label_7F380B44;
    case 0x7F380B54u: goto label_7F380B54;
    case 0x7F380BB4u: goto label_7F380BB4;
    case 0x7F380BD0u: goto label_7F380BD0;
    case 0x7F380C08u: goto label_7F380C08;
    case 0x7F380C18u: goto label_7F380C18;
    case 0x7F380C9Cu: goto label_7F380C9C;
    case 0x7F380CC8u: goto label_7F380CC8;
    case 0x7F380CF8u: goto label_7F380CF8;
    case 0x7F380D40u: goto label_7F380D40;
    case 0x7F380D64u: goto label_7F380D64;
    case 0x7F380D78u: goto label_7F380D78;
    case 0x7F380DB4u: goto label_7F380DB4;
    case 0x7F380DD0u: goto label_7F380DD0;
    case 0x7F380DF8u: goto label_7F380DF8;
    case 0x7F380EACu: goto label_7F380EAC;
    case 0x7F380EC8u: goto label_7F380EC8;
    case 0x7F380F00u: goto label_7F380F00;
    case 0x7F381034u: goto label_7F381034;
    case 0x7F38103Cu: goto label_7F38103C;
    case 0x7F381044u: goto label_7F381044;
    case 0x7F3810D8u: goto label_7F3810D8;
    case 0x7F381148u: goto label_7F381148;
    case 0x7F3812D4u: goto label_7F3812D4;
    case 0x7F3812F4u: goto label_7F3812F4;
    case 0x7F381310u: goto label_7F381310;
    case 0x7F381330u: goto label_7F381330;
    case 0x7F38134Cu: goto label_7F38134C;
    case 0x7F381384u: goto label_7F381384;
    case 0x7F381394u: goto label_7F381394;
    case 0x7F3813ACu: goto label_7F3813AC;
    case 0x7F3813D4u: goto label_7F3813D4;
    case 0x7F3813F0u: goto label_7F3813F0;
    case 0x7F381400u: goto label_7F381400;
    case 0x7F381418u: goto label_7F381418;
    case 0x7F381440u: goto label_7F381440;
    case 0x7F38145Cu: goto label_7F38145C;
    case 0x7F381484u: goto label_7F381484;
    case 0x7F38149Cu: goto label_7F38149C;
    case 0x7F3814C4u: goto label_7F3814C4;
    case 0x7F381500u: goto label_7F381500;
    case 0x7F381508u: goto label_7F381508;
    case 0x7F381510u: goto label_7F381510;
    case 0x7F381564u: goto label_7F381564;
    case 0x7F381578u: goto label_7F381578;
    case 0x7F381594u: goto label_7F381594;
    case 0x7F3815A0u: goto label_7F3815A0;
    case 0x7F3815ACu: goto label_7F3815AC;
    case 0x7F3815C0u: goto label_7F3815C0;
    case 0x7F3815CCu: goto label_7F3815CC;
    case 0x7F3815D8u: goto label_7F3815D8;
    case 0x7F3815E4u: goto label_7F3815E4;
    case 0x7F3815F0u: goto label_7F3815F0;
    case 0x7F3815FCu: goto label_7F3815FC;
    case 0x7F38161Cu: goto label_7F38161C;
    case 0x7F381628u: goto label_7F381628;
    case 0x7F381634u: goto label_7F381634;
    case 0x7F38164Cu: goto label_7F38164C;
    case 0x7F381658u: goto label_7F381658;
    case 0x7F381664u: goto label_7F381664;
    case 0x7F38167Cu: goto label_7F38167C;
    case 0x7F381688u: goto label_7F381688;
    case 0x7F381694u: goto label_7F381694;
    case 0x7F3816ACu: goto label_7F3816AC;
    case 0x7F381704u: goto label_7F381704;
    case 0x7F381720u: goto label_7F381720;
    case 0x7F381754u: goto label_7F381754;
    case 0x7F381764u: goto label_7F381764;
    case 0x7F3817B0u: goto label_7F3817B0;
    case 0x7F38189Cu: goto label_7F38189C;
    case 0x7F3818C0u: goto label_7F3818C0;
    case 0x7F3818D4u: goto label_7F3818D4;
    case 0x7F381910u: goto label_7F381910;
    case 0x7F38192Cu: goto label_7F38192C;
    case 0x7F381954u: goto label_7F381954;
    case 0x7F3819E4u: goto label_7F3819E4;
    case 0x7F381A00u: goto label_7F381A00;
    case 0x7F381A64u: goto label_7F381A64;
    case 0x7F381A6Cu: goto label_7F381A6C;
    case 0x7F381A74u: goto label_7F381A74;
    case 0x7F381AA0u: goto label_7F381AA0;
    case 0x7F381AB8u: goto label_7F381AB8;
    case 0x7F381BACu: goto label_7F381BAC;
    case 0x7F381BCCu: goto label_7F381BCC;
    case 0x7F381BDCu: goto label_7F381BDC;
    case 0x7F381BF0u: goto label_7F381BF0;
    case 0x7F381C18u: goto label_7F381C18;
    case 0x7F381C30u: goto label_7F381C30;
    case 0x7F381C40u: goto label_7F381C40;
    case 0x7F381C54u: goto label_7F381C54;
    case 0x7F381C7Cu: goto label_7F381C7C;
    case 0x7F381CACu: goto label_7F381CAC;
    case 0x7F381CB4u: goto label_7F381CB4;
    case 0x7F381CFCu: goto label_7F381CFC;
    case 0x7F381D10u: goto label_7F381D10;
    case 0x7F381D30u: goto label_7F381D30;
    case 0x7F381D3Cu: goto label_7F381D3C;
    case 0x7F381D48u: goto label_7F381D48;
    case 0x7F381D68u: goto label_7F381D68;
    case 0x7F381D74u: goto label_7F381D74;
    case 0x7F381D80u: goto label_7F381D80;
    case 0x7F381D98u: goto label_7F381D98;
    case 0x7F381DF0u: goto label_7F381DF0;
    case 0x7F381E0Cu: goto label_7F381E0C;
    case 0x7F381E40u: goto label_7F381E40;
    case 0x7F381E50u: goto label_7F381E50;
    case 0x7F381EA4u: goto label_7F381EA4;
    case 0x7F381EB0u: goto label_7F381EB0;
    case 0x7F381EE4u: goto label_7F381EE4;
    case 0x7F381EF0u: goto label_7F381EF0;
    case 0x7F38206Cu: goto label_7F38206C;
    case 0x7F38208Cu: goto label_7F38208C;
    case 0x7F3820D8u: goto label_7F3820D8;
    case 0x7F3820F8u: goto label_7F3820F8;
    case 0x7F3821E4u: goto label_7F3821E4;
    case 0x7F3821ECu: goto label_7F3821EC;
    case 0x7F382204u: goto label_7F382204;
    case 0x7F38220Cu: goto label_7F38220C;
    case 0x7F382230u: goto label_7F382230;
    case 0x7F38223Cu: goto label_7F38223C;
    case 0x7F382260u: goto label_7F382260;
    case 0x7F38226Cu: goto label_7F38226C;
    case 0x7F382280u: goto label_7F382280;
    case 0x7F38228Cu: goto label_7F38228C;
    case 0x7F3822B4u: goto label_7F3822B4;
    case 0x7F3822D8u: goto label_7F3822D8;
    case 0x7F38235Cu: goto label_7F38235C;
    case 0x7F38239Cu: goto label_7F38239C;
    case 0x7F382410u: goto label_7F382410;
    case 0x7F382420u: goto label_7F382420;
    case 0x7F382430u: goto label_7F382430;
    case 0x7F382440u: goto label_7F382440;
    case 0x7F382450u: goto label_7F382450;
    case 0x7F382464u: goto label_7F382464;
    case 0x7F382474u: goto label_7F382474;
    case 0x7F382484u: goto label_7F382484;
    case 0x7F382494u: goto label_7F382494;
    case 0x7F3824A4u: goto label_7F3824A4;
    case 0x7F3824B8u: goto label_7F3824B8;
    case 0x7F3824C8u: goto label_7F3824C8;
    case 0x7F3824D8u: goto label_7F3824D8;
    case 0x7F3824E8u: goto label_7F3824E8;
    case 0x7F3824F8u: goto label_7F3824F8;
    case 0x7F38250Cu: goto label_7F38250C;
    case 0x7F38251Cu: goto label_7F38251C;
    case 0x7F38252Cu: goto label_7F38252C;
    case 0x7F38253Cu: goto label_7F38253C;
    case 0x7F38254Cu: goto label_7F38254C;
    case 0x7F382560u: goto label_7F382560;
    case 0x7F382570u: goto label_7F382570;
    case 0x7F382580u: goto label_7F382580;
    case 0x7F382590u: goto label_7F382590;
    case 0x7F3825A0u: goto label_7F3825A0;
    case 0x7F3825B4u: goto label_7F3825B4;
    case 0x7F3825C4u: goto label_7F3825C4;
    case 0x7F3825D4u: goto label_7F3825D4;
    case 0x7F3825E4u: goto label_7F3825E4;
    case 0x7F3825F4u: goto label_7F3825F4;
    case 0x7F382608u: goto label_7F382608;
    case 0x7F382618u: goto label_7F382618;
    case 0x7F382628u: goto label_7F382628;
    case 0x7F382638u: goto label_7F382638;
    case 0x7F382648u: goto label_7F382648;
    case 0x7F38265Cu: goto label_7F38265C;
    case 0x7F38266Cu: goto label_7F38266C;
    case 0x7F38267Cu: goto label_7F38267C;
    case 0x7F38268Cu: goto label_7F38268C;
    case 0x7F38269Cu: goto label_7F38269C;
    case 0x7F3826B0u: goto label_7F3826B0;
    case 0x7F3826C0u: goto label_7F3826C0;
    case 0x7F3826D0u: goto label_7F3826D0;
    case 0x7F3826E0u: goto label_7F3826E0;
    case 0x7F3826F0u: goto label_7F3826F0;
    case 0x7F382704u: goto label_7F382704;
    case 0x7F382714u: goto label_7F382714;
    case 0x7F382724u: goto label_7F382724;
    case 0x7F382734u: goto label_7F382734;
    case 0x7F382744u: goto label_7F382744;
    case 0x7F382758u: goto label_7F382758;
    case 0x7F382768u: goto label_7F382768;
    case 0x7F382778u: goto label_7F382778;
    case 0x7F382788u: goto label_7F382788;
    case 0x7F382798u: goto label_7F382798;
    case 0x7F3827ACu: goto label_7F3827AC;
    case 0x7F3827BCu: goto label_7F3827BC;
    case 0x7F3827CCu: goto label_7F3827CC;
    case 0x7F3827DCu: goto label_7F3827DC;
    case 0x7F3827ECu: goto label_7F3827EC;
    case 0x7F382824u: goto label_7F382824;
    case 0x7F382858u: goto label_7F382858;
    case 0x7F38286Cu: goto label_7F38286C;
    case 0x7F382874u: goto label_7F382874;
    case 0x7F382888u: goto label_7F382888;
    case 0x7F3828ACu: goto label_7F3828AC;
    case 0x7F3828B8u: goto label_7F3828B8;
    case 0x7F382924u: goto label_7F382924;
    case 0x7F382940u: goto label_7F382940;
    case 0x7F38297Cu: goto label_7F38297C;
    case 0x7F38298Cu: goto label_7F38298C;
    case 0x7F3829E8u: goto label_7F3829E8;
    case 0x7F3829F8u: goto label_7F3829F8;
    case 0x7F382A28u: goto label_7F382A28;
    case 0x7F382A40u: goto label_7F382A40;
    case 0x7F382A78u: goto label_7F382A78;
    case 0x7F382A90u: goto label_7F382A90;
    case 0x7F382AD0u: goto label_7F382AD0;
    case 0x7F382AE8u: goto label_7F382AE8;
    case 0x7F382B5Cu: goto label_7F382B5C;
    case 0x7F382B78u: goto label_7F382B78;
    case 0x7F382BD0u: goto label_7F382BD0;
    case 0x7F382BECu: goto label_7F382BEC;
    case 0x7F382C2Cu: goto label_7F382C2C;
    case 0x7F382C3Cu: goto label_7F382C3C;
    case 0x7F382C90u: goto label_7F382C90;
    case 0x7F382CA0u: goto label_7F382CA0;
    case 0x7F382CC4u: goto label_7F382CC4;
    case 0x7F382CCCu: goto label_7F382CCC;
    case 0x7F382CE0u: goto label_7F382CE0;
    case 0x7F382D14u: goto label_7F382D14;
    case 0x7F382DC0u: goto label_7F382DC0;
    case 0x7F382DCCu: goto label_7F382DCC;
    case 0x7F382DD4u: goto label_7F382DD4;
    case 0x7F382E08u: goto label_7F382E08;
    case 0x7F382E60u: goto label_7F382E60;
    case 0x7F382EECu: goto label_7F382EEC;
    case 0x7F382EF4u: goto label_7F382EF4;
    case 0x7F382F08u: goto label_7F382F08;
    case 0x7F382F58u: goto label_7F382F58;
    case 0x7F382FA4u: goto label_7F382FA4;
    case 0x7F382FACu: goto label_7F382FAC;
    case 0x7F382FB4u: goto label_7F382FB4;
    case 0x7F382FD4u: goto label_7F382FD4;
    case 0x7F382FE0u: goto label_7F382FE0;
    case 0x7F382FECu: goto label_7F382FEC;
    case 0x7F383018u: goto label_7F383018;
    case 0x7F383024u: goto label_7F383024;
    case 0x7F383078u: goto label_7F383078;
    case 0x7F383130u: goto label_7F383130;
    case 0x7F38319Cu: goto label_7F38319C;
    case 0x7F3831ECu: goto label_7F3831EC;
    case 0x7F383210u: goto label_7F383210;
    case 0x7F383234u: goto label_7F383234;
    case 0x7F3832A0u: goto label_7F3832A0;
    case 0x7F38339Cu: goto label_7F38339C;
    case 0x7F38340Cu: goto label_7F38340C;
    case 0x7F383428u: goto label_7F383428;
    case 0x7F383430u: goto label_7F383430;
    case 0x7F38344Cu: goto label_7F38344C;
    case 0x7F38345Cu: goto label_7F38345C;
    case 0x7F3834E4u: goto label_7F3834E4;
    case 0x7F3834F4u: goto label_7F3834F4;
    case 0x7F38366Cu: goto label_7F38366C;
    case 0x7F383680u: goto label_7F383680;
    case 0x7F3836FCu: goto label_7F3836FC;
    case 0x7F383718u: goto label_7F383718;
    case 0x7F383720u: goto label_7F383720;
    case 0x7F38373Cu: goto label_7F38373C;
    case 0x7F383750u: goto label_7F383750;
    case 0x7F38376Cu: goto label_7F38376C;
    case 0x7F38379Cu: goto label_7F38379C;
    case 0x7F3837D0u: goto label_7F3837D0;
    case 0x7F3837D8u: goto label_7F3837D8;
    case 0x7F3837ECu: goto label_7F3837EC;
    case 0x7F3837F4u: goto label_7F3837F4;
    case 0x7F383828u: goto label_7F383828;
    case 0x7F383840u: goto label_7F383840;
    case 0x7F383930u: goto label_7F383930;
    case 0x7F383A00u: goto label_7F383A00;
    case 0x7F383A08u: goto label_7F383A08;
    case 0x7F383A74u: goto label_7F383A74;
    case 0x7F383B70u: goto label_7F383B70;
    case 0x7F383B98u: goto label_7F383B98;
    case 0x7F383BA8u: goto label_7F383BA8;
    case 0x7F383C80u: goto label_7F383C80;
    case 0x7F383C94u: goto label_7F383C94;
    case 0x7F383CA4u: goto label_7F383CA4;
    case 0x7F383CE0u: goto label_7F383CE0;
    case 0x7F383D08u: goto label_7F383D08;
    case 0x7F383D10u: goto label_7F383D10;
    case 0x7F383D3Cu: goto label_7F383D3C;
    case 0x7F383D50u: goto label_7F383D50;
    case 0x7F383D60u: goto label_7F383D60;
    case 0x7F383D9Cu: goto label_7F383D9C;
    case 0x7F383DC4u: goto label_7F383DC4;
    case 0x7F383DCCu: goto label_7F383DCC;
    case 0x7F383E34u: goto label_7F383E34;
    case 0x7F383E48u: goto label_7F383E48;
    case 0x7F383E68u: goto label_7F383E68;
    case 0x7F383E80u: goto label_7F383E80;
    case 0x7F383E94u: goto label_7F383E94;
    case 0x7F383EA0u: goto label_7F383EA0;
    case 0x7F383EC4u: goto label_7F383EC4;
    case 0x7F383ED0u: goto label_7F383ED0;
    case 0x7F383ED8u: goto label_7F383ED8;
    case 0x7F383EE4u: goto label_7F383EE4;
    case 0x7F383EECu: goto label_7F383EEC;
    case 0x7F383EF0u: goto label_7F383EF0;
    case 0x7F383F00u: goto label_7F383F00;
    case 0x7F383F08u: goto label_7F383F08;
    case 0x7F383F0Cu: goto label_7F383F0C;
    case 0x7F383F30u: goto label_7F383F30;
    case 0x7F383F80u: goto label_7F383F80;
    case 0x7F383F88u: goto label_7F383F88;
    case 0x7F383F90u: goto label_7F383F90;
    case 0x7F383FA0u: goto label_7F383FA0;
    case 0x7F383FE8u: goto label_7F383FE8;
    case 0x7F384004u: goto label_7F384004;
    case 0x7F384040u: goto label_7F384040;
    case 0x7F384050u: goto label_7F384050;
    case 0x7F3840A0u: goto label_7F3840A0;
    case 0x7F3840ACu: goto label_7F3840AC;
    case 0x7F3840C8u: goto label_7F3840C8;
    default: return;
    }
}

