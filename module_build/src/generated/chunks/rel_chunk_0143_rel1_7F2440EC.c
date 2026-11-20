// DolRecomp output
#include "../generated.h"

static void loop_7F246E08(CPUState* ctx) {
label_7F246E08:
    ctx->downcount -= 6;
    ctx->pc = 0x7F246E08u;
    // 7F246E08: stw     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x7F246E0Cu;
    // 7F246E0C: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x7F246E10u;
    // 7F246E10: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x7F246E14u;
    // 7F246E14: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 7F246E18: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    // 7F246E1C: bc    16, 0, 0x7F246E08
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246E08u;
                return;
            }
            goto label_7F246E08;
        }
    }

    ctx->pc = 0x7F246E20u;
}

void func_7F2440EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2440ECu: goto label_7F2440EC;
    case 0x7F2440F0u: goto label_7F2440F0;
    case 0x7F2440F4u: goto label_7F2440F4;
    case 0x7F2440F8u: goto label_7F2440F8;
    case 0x7F2440FCu: goto label_7F2440FC;
    case 0x7F244100u: goto label_7F244100;
    case 0x7F244104u: goto label_7F244104;
    case 0x7F244108u: goto label_7F244108;
    case 0x7F24410Cu: goto label_7F24410C;
    case 0x7F244110u: goto label_7F244110;
    case 0x7F244114u: goto label_7F244114;
    case 0x7F244118u: goto label_7F244118;
    case 0x7F24411Cu: goto label_7F24411C;
    case 0x7F244120u: goto label_7F244120;
    case 0x7F244124u: goto label_7F244124;
    case 0x7F244128u: goto label_7F244128;
    case 0x7F24412Cu: goto label_7F24412C;
    case 0x7F244130u: goto label_7F244130;
    case 0x7F244134u: goto label_7F244134;
    case 0x7F244138u: goto label_7F244138;
    case 0x7F24413Cu: goto label_7F24413C;
    case 0x7F244140u: goto label_7F244140;
    case 0x7F244144u: goto label_7F244144;
    case 0x7F244148u: goto label_7F244148;
    case 0x7F24414Cu: goto label_7F24414C;
    case 0x7F244150u: goto label_7F244150;
    case 0x7F244154u: goto label_7F244154;
    case 0x7F244158u: goto label_7F244158;
    case 0x7F24415Cu: goto label_7F24415C;
    case 0x7F244160u: goto label_7F244160;
    case 0x7F244164u: goto label_7F244164;
    case 0x7F244168u: goto label_7F244168;
    case 0x7F24416Cu: goto label_7F24416C;
    case 0x7F244170u: goto label_7F244170;
    case 0x7F244174u: goto label_7F244174;
    case 0x7F244178u: goto label_7F244178;
    case 0x7F24417Cu: goto label_7F24417C;
    case 0x7F244180u: goto label_7F244180;
    case 0x7F244184u: goto label_7F244184;
    case 0x7F244188u: goto label_7F244188;
    case 0x7F24418Cu: goto label_7F24418C;
    case 0x7F244190u: goto label_7F244190;
    case 0x7F244194u: goto label_7F244194;
    case 0x7F244198u: goto label_7F244198;
    case 0x7F24419Cu: goto label_7F24419C;
    case 0x7F2441A0u: goto label_7F2441A0;
    case 0x7F2441A4u: goto label_7F2441A4;
    case 0x7F2441A8u: goto label_7F2441A8;
    case 0x7F2441ACu: goto label_7F2441AC;
    case 0x7F2441B0u: goto label_7F2441B0;
    case 0x7F2441B4u: goto label_7F2441B4;
    case 0x7F2441B8u: goto label_7F2441B8;
    case 0x7F2441BCu: goto label_7F2441BC;
    case 0x7F2441C0u: goto label_7F2441C0;
    case 0x7F2441C4u: goto label_7F2441C4;
    case 0x7F2441C8u: goto label_7F2441C8;
    case 0x7F2441CCu: goto label_7F2441CC;
    case 0x7F2441D0u: goto label_7F2441D0;
    case 0x7F2441D4u: goto label_7F2441D4;
    case 0x7F2441D8u: goto label_7F2441D8;
    case 0x7F2441DCu: goto label_7F2441DC;
    case 0x7F2441E0u: goto label_7F2441E0;
    case 0x7F2441E4u: goto label_7F2441E4;
    case 0x7F2441E8u: goto label_7F2441E8;
    case 0x7F2441ECu: goto label_7F2441EC;
    case 0x7F2441F0u: goto label_7F2441F0;
    case 0x7F2441F4u: goto label_7F2441F4;
    case 0x7F2441F8u: goto label_7F2441F8;
    case 0x7F2441FCu: goto label_7F2441FC;
    case 0x7F244200u: goto label_7F244200;
    case 0x7F244204u: goto label_7F244204;
    case 0x7F244208u: goto label_7F244208;
    case 0x7F24420Cu: goto label_7F24420C;
    case 0x7F244210u: goto label_7F244210;
    case 0x7F244214u: goto label_7F244214;
    case 0x7F244218u: goto label_7F244218;
    case 0x7F24421Cu: goto label_7F24421C;
    case 0x7F244220u: goto label_7F244220;
    case 0x7F244224u: goto label_7F244224;
    case 0x7F244228u: goto label_7F244228;
    case 0x7F24422Cu: goto label_7F24422C;
    case 0x7F244230u: goto label_7F244230;
    case 0x7F244234u: goto label_7F244234;
    case 0x7F244238u: goto label_7F244238;
    case 0x7F24423Cu: goto label_7F24423C;
    case 0x7F244240u: goto label_7F244240;
    case 0x7F244244u: goto label_7F244244;
    case 0x7F244248u: goto label_7F244248;
    case 0x7F24424Cu: goto label_7F24424C;
    case 0x7F244250u: goto label_7F244250;
    case 0x7F244254u: goto label_7F244254;
    case 0x7F244258u: goto label_7F244258;
    case 0x7F24425Cu: goto label_7F24425C;
    case 0x7F244260u: goto label_7F244260;
    case 0x7F244264u: goto label_7F244264;
    case 0x7F244268u: goto label_7F244268;
    case 0x7F24426Cu: goto label_7F24426C;
    case 0x7F244270u: goto label_7F244270;
    case 0x7F244274u: goto label_7F244274;
    case 0x7F244278u: goto label_7F244278;
    case 0x7F24427Cu: goto label_7F24427C;
    case 0x7F244280u: goto label_7F244280;
    case 0x7F244284u: goto label_7F244284;
    case 0x7F244288u: goto label_7F244288;
    case 0x7F24428Cu: goto label_7F24428C;
    case 0x7F244290u: goto label_7F244290;
    case 0x7F244294u: goto label_7F244294;
    case 0x7F244298u: goto label_7F244298;
    case 0x7F24429Cu: goto label_7F24429C;
    case 0x7F2442A0u: goto label_7F2442A0;
    case 0x7F2442A4u: goto label_7F2442A4;
    case 0x7F2442A8u: goto label_7F2442A8;
    case 0x7F2442ACu: goto label_7F2442AC;
    case 0x7F2442B0u: goto label_7F2442B0;
    case 0x7F2442B4u: goto label_7F2442B4;
    case 0x7F2442B8u: goto label_7F2442B8;
    case 0x7F2442BCu: goto label_7F2442BC;
    case 0x7F2442C0u: goto label_7F2442C0;
    case 0x7F2442C4u: goto label_7F2442C4;
    case 0x7F2442C8u: goto label_7F2442C8;
    case 0x7F2442CCu: goto label_7F2442CC;
    case 0x7F2442D0u: goto label_7F2442D0;
    case 0x7F2442D4u: goto label_7F2442D4;
    case 0x7F2442D8u: goto label_7F2442D8;
    case 0x7F2442DCu: goto label_7F2442DC;
    case 0x7F2442E0u: goto label_7F2442E0;
    case 0x7F2442E4u: goto label_7F2442E4;
    case 0x7F2442E8u: goto label_7F2442E8;
    case 0x7F2442ECu: goto label_7F2442EC;
    case 0x7F2442F0u: goto label_7F2442F0;
    case 0x7F2442F4u: goto label_7F2442F4;
    case 0x7F2442F8u: goto label_7F2442F8;
    case 0x7F2442FCu: goto label_7F2442FC;
    case 0x7F244300u: goto label_7F244300;
    case 0x7F244304u: goto label_7F244304;
    case 0x7F244308u: goto label_7F244308;
    case 0x7F24430Cu: goto label_7F24430C;
    case 0x7F244310u: goto label_7F244310;
    case 0x7F244314u: goto label_7F244314;
    case 0x7F244318u: goto label_7F244318;
    case 0x7F24431Cu: goto label_7F24431C;
    case 0x7F244320u: goto label_7F244320;
    case 0x7F244324u: goto label_7F244324;
    case 0x7F244328u: goto label_7F244328;
    case 0x7F24432Cu: goto label_7F24432C;
    case 0x7F244330u: goto label_7F244330;
    case 0x7F244334u: goto label_7F244334;
    case 0x7F244338u: goto label_7F244338;
    case 0x7F24433Cu: goto label_7F24433C;
    case 0x7F244340u: goto label_7F244340;
    case 0x7F244344u: goto label_7F244344;
    case 0x7F244348u: goto label_7F244348;
    case 0x7F24434Cu: goto label_7F24434C;
    case 0x7F244350u: goto label_7F244350;
    case 0x7F244354u: goto label_7F244354;
    case 0x7F244358u: goto label_7F244358;
    case 0x7F24435Cu: goto label_7F24435C;
    case 0x7F244360u: goto label_7F244360;
    case 0x7F244364u: goto label_7F244364;
    case 0x7F244368u: goto label_7F244368;
    case 0x7F24436Cu: goto label_7F24436C;
    case 0x7F244370u: goto label_7F244370;
    case 0x7F244374u: goto label_7F244374;
    case 0x7F244378u: goto label_7F244378;
    case 0x7F24437Cu: goto label_7F24437C;
    case 0x7F244380u: goto label_7F244380;
    case 0x7F244384u: goto label_7F244384;
    case 0x7F244388u: goto label_7F244388;
    case 0x7F24438Cu: goto label_7F24438C;
    case 0x7F244390u: goto label_7F244390;
    case 0x7F244394u: goto label_7F244394;
    case 0x7F244398u: goto label_7F244398;
    case 0x7F24439Cu: goto label_7F24439C;
    case 0x7F2443A0u: goto label_7F2443A0;
    case 0x7F2443A4u: goto label_7F2443A4;
    case 0x7F2443A8u: goto label_7F2443A8;
    case 0x7F2443ACu: goto label_7F2443AC;
    case 0x7F2443B0u: goto label_7F2443B0;
    case 0x7F2443B4u: goto label_7F2443B4;
    case 0x7F2443B8u: goto label_7F2443B8;
    case 0x7F2443BCu: goto label_7F2443BC;
    case 0x7F2443C0u: goto label_7F2443C0;
    case 0x7F2443C4u: goto label_7F2443C4;
    case 0x7F2443C8u: goto label_7F2443C8;
    case 0x7F2443CCu: goto label_7F2443CC;
    case 0x7F2443D0u: goto label_7F2443D0;
    case 0x7F2443D4u: goto label_7F2443D4;
    case 0x7F2443D8u: goto label_7F2443D8;
    case 0x7F2443DCu: goto label_7F2443DC;
    case 0x7F2443E0u: goto label_7F2443E0;
    case 0x7F2443E4u: goto label_7F2443E4;
    case 0x7F2443E8u: goto label_7F2443E8;
    case 0x7F2443ECu: goto label_7F2443EC;
    case 0x7F2443F0u: goto label_7F2443F0;
    case 0x7F2443F4u: goto label_7F2443F4;
    case 0x7F2443F8u: goto label_7F2443F8;
    case 0x7F2443FCu: goto label_7F2443FC;
    case 0x7F244400u: goto label_7F244400;
    case 0x7F244404u: goto label_7F244404;
    case 0x7F244408u: goto label_7F244408;
    case 0x7F24440Cu: goto label_7F24440C;
    case 0x7F244410u: goto label_7F244410;
    case 0x7F244414u: goto label_7F244414;
    case 0x7F244418u: goto label_7F244418;
    case 0x7F24441Cu: goto label_7F24441C;
    case 0x7F244420u: goto label_7F244420;
    case 0x7F244424u: goto label_7F244424;
    case 0x7F244428u: goto label_7F244428;
    case 0x7F24442Cu: goto label_7F24442C;
    case 0x7F244430u: goto label_7F244430;
    case 0x7F244434u: goto label_7F244434;
    case 0x7F244438u: goto label_7F244438;
    case 0x7F24443Cu: goto label_7F24443C;
    case 0x7F244440u: goto label_7F244440;
    case 0x7F244444u: goto label_7F244444;
    case 0x7F244448u: goto label_7F244448;
    case 0x7F24444Cu: goto label_7F24444C;
    case 0x7F244450u: goto label_7F244450;
    case 0x7F244454u: goto label_7F244454;
    case 0x7F244458u: goto label_7F244458;
    case 0x7F24445Cu: goto label_7F24445C;
    case 0x7F244460u: goto label_7F244460;
    case 0x7F244464u: goto label_7F244464;
    case 0x7F244468u: goto label_7F244468;
    case 0x7F24446Cu: goto label_7F24446C;
    case 0x7F244470u: goto label_7F244470;
    case 0x7F244474u: goto label_7F244474;
    case 0x7F244478u: goto label_7F244478;
    case 0x7F24447Cu: goto label_7F24447C;
    case 0x7F244480u: goto label_7F244480;
    case 0x7F244484u: goto label_7F244484;
    case 0x7F244488u: goto label_7F244488;
    case 0x7F24448Cu: goto label_7F24448C;
    case 0x7F244490u: goto label_7F244490;
    case 0x7F244494u: goto label_7F244494;
    case 0x7F244498u: goto label_7F244498;
    case 0x7F24449Cu: goto label_7F24449C;
    case 0x7F2444A0u: goto label_7F2444A0;
    case 0x7F2444A4u: goto label_7F2444A4;
    case 0x7F2444A8u: goto label_7F2444A8;
    case 0x7F2444ACu: goto label_7F2444AC;
    case 0x7F2444B0u: goto label_7F2444B0;
    case 0x7F2444B4u: goto label_7F2444B4;
    case 0x7F2444B8u: goto label_7F2444B8;
    case 0x7F2444BCu: goto label_7F2444BC;
    case 0x7F2444C0u: goto label_7F2444C0;
    case 0x7F2444C4u: goto label_7F2444C4;
    case 0x7F2444C8u: goto label_7F2444C8;
    case 0x7F2444CCu: goto label_7F2444CC;
    case 0x7F2444D0u: goto label_7F2444D0;
    case 0x7F2444D4u: goto label_7F2444D4;
    case 0x7F2444D8u: goto label_7F2444D8;
    case 0x7F2444DCu: goto label_7F2444DC;
    case 0x7F2444E0u: goto label_7F2444E0;
    case 0x7F2444E4u: goto label_7F2444E4;
    case 0x7F2444E8u: goto label_7F2444E8;
    case 0x7F2444ECu: goto label_7F2444EC;
    case 0x7F2444F0u: goto label_7F2444F0;
    case 0x7F2444F4u: goto label_7F2444F4;
    case 0x7F2444F8u: goto label_7F2444F8;
    case 0x7F2444FCu: goto label_7F2444FC;
    case 0x7F244500u: goto label_7F244500;
    case 0x7F244504u: goto label_7F244504;
    case 0x7F244508u: goto label_7F244508;
    case 0x7F24450Cu: goto label_7F24450C;
    case 0x7F244510u: goto label_7F244510;
    case 0x7F244514u: goto label_7F244514;
    case 0x7F244518u: goto label_7F244518;
    case 0x7F24451Cu: goto label_7F24451C;
    case 0x7F244520u: goto label_7F244520;
    case 0x7F244524u: goto label_7F244524;
    case 0x7F244528u: goto label_7F244528;
    case 0x7F24452Cu: goto label_7F24452C;
    case 0x7F244530u: goto label_7F244530;
    case 0x7F244534u: goto label_7F244534;
    case 0x7F244538u: goto label_7F244538;
    case 0x7F24453Cu: goto label_7F24453C;
    case 0x7F244540u: goto label_7F244540;
    case 0x7F244544u: goto label_7F244544;
    case 0x7F244548u: goto label_7F244548;
    case 0x7F24454Cu: goto label_7F24454C;
    case 0x7F244550u: goto label_7F244550;
    case 0x7F244554u: goto label_7F244554;
    case 0x7F244558u: goto label_7F244558;
    case 0x7F24455Cu: goto label_7F24455C;
    case 0x7F244560u: goto label_7F244560;
    case 0x7F244564u: goto label_7F244564;
    case 0x7F244568u: goto label_7F244568;
    case 0x7F24456Cu: goto label_7F24456C;
    case 0x7F244570u: goto label_7F244570;
    case 0x7F244574u: goto label_7F244574;
    case 0x7F244578u: goto label_7F244578;
    case 0x7F24457Cu: goto label_7F24457C;
    case 0x7F244580u: goto label_7F244580;
    case 0x7F244584u: goto label_7F244584;
    case 0x7F244588u: goto label_7F244588;
    case 0x7F24458Cu: goto label_7F24458C;
    case 0x7F244590u: goto label_7F244590;
    case 0x7F244594u: goto label_7F244594;
    case 0x7F244598u: goto label_7F244598;
    case 0x7F24459Cu: goto label_7F24459C;
    case 0x7F2445A0u: goto label_7F2445A0;
    case 0x7F2445A4u: goto label_7F2445A4;
    case 0x7F2445A8u: goto label_7F2445A8;
    case 0x7F2445ACu: goto label_7F2445AC;
    case 0x7F2445B0u: goto label_7F2445B0;
    case 0x7F2445B4u: goto label_7F2445B4;
    case 0x7F2445B8u: goto label_7F2445B8;
    case 0x7F2445BCu: goto label_7F2445BC;
    case 0x7F2445C0u: goto label_7F2445C0;
    case 0x7F2445C4u: goto label_7F2445C4;
    case 0x7F2445C8u: goto label_7F2445C8;
    case 0x7F2445CCu: goto label_7F2445CC;
    case 0x7F2445D0u: goto label_7F2445D0;
    case 0x7F2445D4u: goto label_7F2445D4;
    case 0x7F2445D8u: goto label_7F2445D8;
    case 0x7F2445DCu: goto label_7F2445DC;
    case 0x7F2445E0u: goto label_7F2445E0;
    case 0x7F2445E4u: goto label_7F2445E4;
    case 0x7F2445E8u: goto label_7F2445E8;
    case 0x7F2445ECu: goto label_7F2445EC;
    case 0x7F2445F0u: goto label_7F2445F0;
    case 0x7F2445F4u: goto label_7F2445F4;
    case 0x7F2445F8u: goto label_7F2445F8;
    case 0x7F2445FCu: goto label_7F2445FC;
    case 0x7F244600u: goto label_7F244600;
    case 0x7F244604u: goto label_7F244604;
    case 0x7F244608u: goto label_7F244608;
    case 0x7F24460Cu: goto label_7F24460C;
    case 0x7F244610u: goto label_7F244610;
    case 0x7F244614u: goto label_7F244614;
    case 0x7F244618u: goto label_7F244618;
    case 0x7F24461Cu: goto label_7F24461C;
    case 0x7F244620u: goto label_7F244620;
    case 0x7F244624u: goto label_7F244624;
    case 0x7F244628u: goto label_7F244628;
    case 0x7F24462Cu: goto label_7F24462C;
    case 0x7F244630u: goto label_7F244630;
    case 0x7F244634u: goto label_7F244634;
    case 0x7F244638u: goto label_7F244638;
    case 0x7F24463Cu: goto label_7F24463C;
    case 0x7F244640u: goto label_7F244640;
    case 0x7F244644u: goto label_7F244644;
    case 0x7F244648u: goto label_7F244648;
    case 0x7F24464Cu: goto label_7F24464C;
    case 0x7F244650u: goto label_7F244650;
    case 0x7F244654u: goto label_7F244654;
    case 0x7F244658u: goto label_7F244658;
    case 0x7F24465Cu: goto label_7F24465C;
    case 0x7F244660u: goto label_7F244660;
    case 0x7F244664u: goto label_7F244664;
    case 0x7F244668u: goto label_7F244668;
    case 0x7F24466Cu: goto label_7F24466C;
    case 0x7F244670u: goto label_7F244670;
    case 0x7F244674u: goto label_7F244674;
    case 0x7F244678u: goto label_7F244678;
    case 0x7F24467Cu: goto label_7F24467C;
    case 0x7F244680u: goto label_7F244680;
    case 0x7F244684u: goto label_7F244684;
    case 0x7F244688u: goto label_7F244688;
    case 0x7F24468Cu: goto label_7F24468C;
    case 0x7F244690u: goto label_7F244690;
    case 0x7F244694u: goto label_7F244694;
    case 0x7F244698u: goto label_7F244698;
    case 0x7F24469Cu: goto label_7F24469C;
    case 0x7F2446A0u: goto label_7F2446A0;
    case 0x7F2446A4u: goto label_7F2446A4;
    case 0x7F2446A8u: goto label_7F2446A8;
    case 0x7F2446ACu: goto label_7F2446AC;
    case 0x7F2446B0u: goto label_7F2446B0;
    case 0x7F2446B4u: goto label_7F2446B4;
    case 0x7F2446B8u: goto label_7F2446B8;
    case 0x7F2446BCu: goto label_7F2446BC;
    case 0x7F2446C0u: goto label_7F2446C0;
    case 0x7F2446C4u: goto label_7F2446C4;
    case 0x7F2446C8u: goto label_7F2446C8;
    case 0x7F2446CCu: goto label_7F2446CC;
    case 0x7F2446D0u: goto label_7F2446D0;
    case 0x7F2446D4u: goto label_7F2446D4;
    case 0x7F2446D8u: goto label_7F2446D8;
    case 0x7F2446DCu: goto label_7F2446DC;
    case 0x7F2446E0u: goto label_7F2446E0;
    case 0x7F2446E4u: goto label_7F2446E4;
    case 0x7F2446E8u: goto label_7F2446E8;
    case 0x7F2446ECu: goto label_7F2446EC;
    case 0x7F2446F0u: goto label_7F2446F0;
    case 0x7F2446F4u: goto label_7F2446F4;
    case 0x7F2446F8u: goto label_7F2446F8;
    case 0x7F2446FCu: goto label_7F2446FC;
    case 0x7F244700u: goto label_7F244700;
    case 0x7F244704u: goto label_7F244704;
    case 0x7F244708u: goto label_7F244708;
    case 0x7F24470Cu: goto label_7F24470C;
    case 0x7F244710u: goto label_7F244710;
    case 0x7F244714u: goto label_7F244714;
    case 0x7F244718u: goto label_7F244718;
    case 0x7F24471Cu: goto label_7F24471C;
    case 0x7F244720u: goto label_7F244720;
    case 0x7F244724u: goto label_7F244724;
    case 0x7F244728u: goto label_7F244728;
    case 0x7F24472Cu: goto label_7F24472C;
    case 0x7F244730u: goto label_7F244730;
    case 0x7F244734u: goto label_7F244734;
    case 0x7F244738u: goto label_7F244738;
    case 0x7F24473Cu: goto label_7F24473C;
    case 0x7F244740u: goto label_7F244740;
    case 0x7F244744u: goto label_7F244744;
    case 0x7F244748u: goto label_7F244748;
    case 0x7F24474Cu: goto label_7F24474C;
    case 0x7F244750u: goto label_7F244750;
    case 0x7F244754u: goto label_7F244754;
    case 0x7F244758u: goto label_7F244758;
    case 0x7F24475Cu: goto label_7F24475C;
    case 0x7F244760u: goto label_7F244760;
    case 0x7F244764u: goto label_7F244764;
    case 0x7F244768u: goto label_7F244768;
    case 0x7F24476Cu: goto label_7F24476C;
    case 0x7F244770u: goto label_7F244770;
    case 0x7F244774u: goto label_7F244774;
    case 0x7F244778u: goto label_7F244778;
    case 0x7F24477Cu: goto label_7F24477C;
    case 0x7F244780u: goto label_7F244780;
    case 0x7F244784u: goto label_7F244784;
    case 0x7F244788u: goto label_7F244788;
    case 0x7F24478Cu: goto label_7F24478C;
    case 0x7F244790u: goto label_7F244790;
    case 0x7F244794u: goto label_7F244794;
    case 0x7F244798u: goto label_7F244798;
    case 0x7F24479Cu: goto label_7F24479C;
    case 0x7F2447A0u: goto label_7F2447A0;
    case 0x7F2447A4u: goto label_7F2447A4;
    case 0x7F2447A8u: goto label_7F2447A8;
    case 0x7F2447ACu: goto label_7F2447AC;
    case 0x7F2447B0u: goto label_7F2447B0;
    case 0x7F2447B4u: goto label_7F2447B4;
    case 0x7F2447B8u: goto label_7F2447B8;
    case 0x7F2447BCu: goto label_7F2447BC;
    case 0x7F2447C0u: goto label_7F2447C0;
    case 0x7F2447C4u: goto label_7F2447C4;
    case 0x7F2447C8u: goto label_7F2447C8;
    case 0x7F2447CCu: goto label_7F2447CC;
    case 0x7F2447D0u: goto label_7F2447D0;
    case 0x7F2447D4u: goto label_7F2447D4;
    case 0x7F2447D8u: goto label_7F2447D8;
    case 0x7F2447DCu: goto label_7F2447DC;
    case 0x7F2447E0u: goto label_7F2447E0;
    case 0x7F2447E4u: goto label_7F2447E4;
    case 0x7F2447E8u: goto label_7F2447E8;
    case 0x7F2447ECu: goto label_7F2447EC;
    case 0x7F2447F0u: goto label_7F2447F0;
    case 0x7F2447F4u: goto label_7F2447F4;
    case 0x7F2447F8u: goto label_7F2447F8;
    case 0x7F2447FCu: goto label_7F2447FC;
    case 0x7F244800u: goto label_7F244800;
    case 0x7F244804u: goto label_7F244804;
    case 0x7F244808u: goto label_7F244808;
    case 0x7F24480Cu: goto label_7F24480C;
    case 0x7F244810u: goto label_7F244810;
    case 0x7F244814u: goto label_7F244814;
    case 0x7F244818u: goto label_7F244818;
    case 0x7F24481Cu: goto label_7F24481C;
    case 0x7F244820u: goto label_7F244820;
    case 0x7F244824u: goto label_7F244824;
    case 0x7F244828u: goto label_7F244828;
    case 0x7F24482Cu: goto label_7F24482C;
    case 0x7F244830u: goto label_7F244830;
    case 0x7F244834u: goto label_7F244834;
    case 0x7F244838u: goto label_7F244838;
    case 0x7F24483Cu: goto label_7F24483C;
    case 0x7F244840u: goto label_7F244840;
    case 0x7F244844u: goto label_7F244844;
    case 0x7F244848u: goto label_7F244848;
    case 0x7F24484Cu: goto label_7F24484C;
    case 0x7F244850u: goto label_7F244850;
    case 0x7F244854u: goto label_7F244854;
    case 0x7F244858u: goto label_7F244858;
    case 0x7F24485Cu: goto label_7F24485C;
    case 0x7F244860u: goto label_7F244860;
    case 0x7F244864u: goto label_7F244864;
    case 0x7F244868u: goto label_7F244868;
    case 0x7F24486Cu: goto label_7F24486C;
    case 0x7F244870u: goto label_7F244870;
    case 0x7F244874u: goto label_7F244874;
    case 0x7F244878u: goto label_7F244878;
    case 0x7F24487Cu: goto label_7F24487C;
    case 0x7F244880u: goto label_7F244880;
    case 0x7F244884u: goto label_7F244884;
    case 0x7F244888u: goto label_7F244888;
    case 0x7F24488Cu: goto label_7F24488C;
    case 0x7F244890u: goto label_7F244890;
    case 0x7F244894u: goto label_7F244894;
    case 0x7F244898u: goto label_7F244898;
    case 0x7F24489Cu: goto label_7F24489C;
    case 0x7F2448A0u: goto label_7F2448A0;
    case 0x7F2448A4u: goto label_7F2448A4;
    case 0x7F2448A8u: goto label_7F2448A8;
    case 0x7F2448ACu: goto label_7F2448AC;
    case 0x7F2448B0u: goto label_7F2448B0;
    case 0x7F2448B4u: goto label_7F2448B4;
    case 0x7F2448B8u: goto label_7F2448B8;
    case 0x7F2448BCu: goto label_7F2448BC;
    case 0x7F2448C0u: goto label_7F2448C0;
    case 0x7F2448C4u: goto label_7F2448C4;
    case 0x7F2448C8u: goto label_7F2448C8;
    case 0x7F2448CCu: goto label_7F2448CC;
    case 0x7F2448D0u: goto label_7F2448D0;
    case 0x7F2448D4u: goto label_7F2448D4;
    case 0x7F2448D8u: goto label_7F2448D8;
    case 0x7F2448DCu: goto label_7F2448DC;
    case 0x7F2448E0u: goto label_7F2448E0;
    case 0x7F2448E4u: goto label_7F2448E4;
    case 0x7F2448E8u: goto label_7F2448E8;
    case 0x7F2448ECu: goto label_7F2448EC;
    case 0x7F2448F0u: goto label_7F2448F0;
    case 0x7F2448F4u: goto label_7F2448F4;
    case 0x7F2448F8u: goto label_7F2448F8;
    case 0x7F2448FCu: goto label_7F2448FC;
    case 0x7F244900u: goto label_7F244900;
    case 0x7F244904u: goto label_7F244904;
    case 0x7F244908u: goto label_7F244908;
    case 0x7F24490Cu: goto label_7F24490C;
    case 0x7F244910u: goto label_7F244910;
    case 0x7F244914u: goto label_7F244914;
    case 0x7F244918u: goto label_7F244918;
    case 0x7F24491Cu: goto label_7F24491C;
    case 0x7F244920u: goto label_7F244920;
    case 0x7F244924u: goto label_7F244924;
    case 0x7F244928u: goto label_7F244928;
    case 0x7F24492Cu: goto label_7F24492C;
    case 0x7F244930u: goto label_7F244930;
    case 0x7F244934u: goto label_7F244934;
    case 0x7F244938u: goto label_7F244938;
    case 0x7F24493Cu: goto label_7F24493C;
    case 0x7F244940u: goto label_7F244940;
    case 0x7F244944u: goto label_7F244944;
    case 0x7F244948u: goto label_7F244948;
    case 0x7F24494Cu: goto label_7F24494C;
    case 0x7F244950u: goto label_7F244950;
    case 0x7F244954u: goto label_7F244954;
    case 0x7F244958u: goto label_7F244958;
    case 0x7F24495Cu: goto label_7F24495C;
    case 0x7F244960u: goto label_7F244960;
    case 0x7F244964u: goto label_7F244964;
    case 0x7F244968u: goto label_7F244968;
    case 0x7F24496Cu: goto label_7F24496C;
    case 0x7F244970u: goto label_7F244970;
    case 0x7F244974u: goto label_7F244974;
    case 0x7F244978u: goto label_7F244978;
    case 0x7F24497Cu: goto label_7F24497C;
    case 0x7F244980u: goto label_7F244980;
    case 0x7F244984u: goto label_7F244984;
    case 0x7F244988u: goto label_7F244988;
    case 0x7F24498Cu: goto label_7F24498C;
    case 0x7F244990u: goto label_7F244990;
    case 0x7F244994u: goto label_7F244994;
    case 0x7F244998u: goto label_7F244998;
    case 0x7F24499Cu: goto label_7F24499C;
    case 0x7F2449A0u: goto label_7F2449A0;
    case 0x7F2449A4u: goto label_7F2449A4;
    case 0x7F2449A8u: goto label_7F2449A8;
    case 0x7F2449ACu: goto label_7F2449AC;
    case 0x7F2449B0u: goto label_7F2449B0;
    case 0x7F2449B4u: goto label_7F2449B4;
    case 0x7F2449B8u: goto label_7F2449B8;
    case 0x7F2449BCu: goto label_7F2449BC;
    case 0x7F2449C0u: goto label_7F2449C0;
    case 0x7F2449C4u: goto label_7F2449C4;
    case 0x7F2449C8u: goto label_7F2449C8;
    case 0x7F2449CCu: goto label_7F2449CC;
    case 0x7F2449D0u: goto label_7F2449D0;
    case 0x7F2449D4u: goto label_7F2449D4;
    case 0x7F2449D8u: goto label_7F2449D8;
    case 0x7F2449DCu: goto label_7F2449DC;
    case 0x7F2449E0u: goto label_7F2449E0;
    case 0x7F2449E4u: goto label_7F2449E4;
    case 0x7F2449E8u: goto label_7F2449E8;
    case 0x7F2449ECu: goto label_7F2449EC;
    case 0x7F2449F0u: goto label_7F2449F0;
    case 0x7F2449F4u: goto label_7F2449F4;
    case 0x7F2449F8u: goto label_7F2449F8;
    case 0x7F2449FCu: goto label_7F2449FC;
    case 0x7F244A00u: goto label_7F244A00;
    case 0x7F244A04u: goto label_7F244A04;
    case 0x7F244A08u: goto label_7F244A08;
    case 0x7F244A0Cu: goto label_7F244A0C;
    case 0x7F244A10u: goto label_7F244A10;
    case 0x7F244A14u: goto label_7F244A14;
    case 0x7F244A18u: goto label_7F244A18;
    case 0x7F244A1Cu: goto label_7F244A1C;
    case 0x7F244A20u: goto label_7F244A20;
    case 0x7F244A24u: goto label_7F244A24;
    case 0x7F244A28u: goto label_7F244A28;
    case 0x7F244A2Cu: goto label_7F244A2C;
    case 0x7F244A30u: goto label_7F244A30;
    case 0x7F244A34u: goto label_7F244A34;
    case 0x7F244A38u: goto label_7F244A38;
    case 0x7F244A3Cu: goto label_7F244A3C;
    case 0x7F244A40u: goto label_7F244A40;
    case 0x7F244A44u: goto label_7F244A44;
    case 0x7F244A48u: goto label_7F244A48;
    case 0x7F244A4Cu: goto label_7F244A4C;
    case 0x7F244A50u: goto label_7F244A50;
    case 0x7F244A54u: goto label_7F244A54;
    case 0x7F244A58u: goto label_7F244A58;
    case 0x7F244A5Cu: goto label_7F244A5C;
    case 0x7F244A60u: goto label_7F244A60;
    case 0x7F244A64u: goto label_7F244A64;
    case 0x7F244A68u: goto label_7F244A68;
    case 0x7F244A6Cu: goto label_7F244A6C;
    case 0x7F244A70u: goto label_7F244A70;
    case 0x7F244A74u: goto label_7F244A74;
    case 0x7F244A78u: goto label_7F244A78;
    case 0x7F244A7Cu: goto label_7F244A7C;
    case 0x7F244A80u: goto label_7F244A80;
    case 0x7F244A84u: goto label_7F244A84;
    case 0x7F244A88u: goto label_7F244A88;
    case 0x7F244A8Cu: goto label_7F244A8C;
    case 0x7F244A90u: goto label_7F244A90;
    case 0x7F244A94u: goto label_7F244A94;
    case 0x7F244A98u: goto label_7F244A98;
    case 0x7F244A9Cu: goto label_7F244A9C;
    case 0x7F244AA0u: goto label_7F244AA0;
    case 0x7F244AA4u: goto label_7F244AA4;
    case 0x7F244AA8u: goto label_7F244AA8;
    case 0x7F244AACu: goto label_7F244AAC;
    case 0x7F244AB0u: goto label_7F244AB0;
    case 0x7F244AB4u: goto label_7F244AB4;
    case 0x7F244AB8u: goto label_7F244AB8;
    case 0x7F244ABCu: goto label_7F244ABC;
    case 0x7F244AC0u: goto label_7F244AC0;
    case 0x7F244AC4u: goto label_7F244AC4;
    case 0x7F244AC8u: goto label_7F244AC8;
    case 0x7F244ACCu: goto label_7F244ACC;
    case 0x7F244AD0u: goto label_7F244AD0;
    case 0x7F244AD4u: goto label_7F244AD4;
    case 0x7F244AD8u: goto label_7F244AD8;
    case 0x7F244ADCu: goto label_7F244ADC;
    case 0x7F244AE0u: goto label_7F244AE0;
    case 0x7F244AE4u: goto label_7F244AE4;
    case 0x7F244AE8u: goto label_7F244AE8;
    case 0x7F244AECu: goto label_7F244AEC;
    case 0x7F244AF0u: goto label_7F244AF0;
    case 0x7F244AF4u: goto label_7F244AF4;
    case 0x7F244AF8u: goto label_7F244AF8;
    case 0x7F244AFCu: goto label_7F244AFC;
    case 0x7F244B00u: goto label_7F244B00;
    case 0x7F244B04u: goto label_7F244B04;
    case 0x7F244B08u: goto label_7F244B08;
    case 0x7F244B0Cu: goto label_7F244B0C;
    case 0x7F244B10u: goto label_7F244B10;
    case 0x7F244B14u: goto label_7F244B14;
    case 0x7F244B18u: goto label_7F244B18;
    case 0x7F244B1Cu: goto label_7F244B1C;
    case 0x7F244B20u: goto label_7F244B20;
    case 0x7F244B24u: goto label_7F244B24;
    case 0x7F244B28u: goto label_7F244B28;
    case 0x7F244B2Cu: goto label_7F244B2C;
    case 0x7F244B30u: goto label_7F244B30;
    case 0x7F244B34u: goto label_7F244B34;
    case 0x7F244B38u: goto label_7F244B38;
    case 0x7F244B3Cu: goto label_7F244B3C;
    case 0x7F244B40u: goto label_7F244B40;
    case 0x7F244B44u: goto label_7F244B44;
    case 0x7F244B48u: goto label_7F244B48;
    case 0x7F244B4Cu: goto label_7F244B4C;
    case 0x7F244B50u: goto label_7F244B50;
    case 0x7F244B54u: goto label_7F244B54;
    case 0x7F244B58u: goto label_7F244B58;
    case 0x7F244B5Cu: goto label_7F244B5C;
    case 0x7F244B60u: goto label_7F244B60;
    case 0x7F244B64u: goto label_7F244B64;
    case 0x7F244B68u: goto label_7F244B68;
    case 0x7F244B6Cu: goto label_7F244B6C;
    case 0x7F244B70u: goto label_7F244B70;
    case 0x7F244B74u: goto label_7F244B74;
    case 0x7F244B78u: goto label_7F244B78;
    case 0x7F244B7Cu: goto label_7F244B7C;
    case 0x7F244B80u: goto label_7F244B80;
    case 0x7F244B84u: goto label_7F244B84;
    case 0x7F244B88u: goto label_7F244B88;
    case 0x7F244B8Cu: goto label_7F244B8C;
    case 0x7F244B90u: goto label_7F244B90;
    case 0x7F244B94u: goto label_7F244B94;
    case 0x7F244B98u: goto label_7F244B98;
    case 0x7F244B9Cu: goto label_7F244B9C;
    case 0x7F244BA0u: goto label_7F244BA0;
    case 0x7F244BA4u: goto label_7F244BA4;
    case 0x7F244BA8u: goto label_7F244BA8;
    case 0x7F244BACu: goto label_7F244BAC;
    case 0x7F244BB0u: goto label_7F244BB0;
    case 0x7F244BB4u: goto label_7F244BB4;
    case 0x7F244BB8u: goto label_7F244BB8;
    case 0x7F244BBCu: goto label_7F244BBC;
    case 0x7F244BC0u: goto label_7F244BC0;
    case 0x7F244BC4u: goto label_7F244BC4;
    case 0x7F244BC8u: goto label_7F244BC8;
    case 0x7F244BCCu: goto label_7F244BCC;
    case 0x7F244BD0u: goto label_7F244BD0;
    case 0x7F244BD4u: goto label_7F244BD4;
    case 0x7F244BD8u: goto label_7F244BD8;
    case 0x7F244BDCu: goto label_7F244BDC;
    case 0x7F244BE0u: goto label_7F244BE0;
    case 0x7F244BE4u: goto label_7F244BE4;
    case 0x7F244BE8u: goto label_7F244BE8;
    case 0x7F244BECu: goto label_7F244BEC;
    case 0x7F244BF0u: goto label_7F244BF0;
    case 0x7F244BF4u: goto label_7F244BF4;
    case 0x7F244BF8u: goto label_7F244BF8;
    case 0x7F244BFCu: goto label_7F244BFC;
    case 0x7F244C00u: goto label_7F244C00;
    case 0x7F244C04u: goto label_7F244C04;
    case 0x7F244C08u: goto label_7F244C08;
    case 0x7F244C0Cu: goto label_7F244C0C;
    case 0x7F244C10u: goto label_7F244C10;
    case 0x7F244C14u: goto label_7F244C14;
    case 0x7F244C18u: goto label_7F244C18;
    case 0x7F244C1Cu: goto label_7F244C1C;
    case 0x7F244C20u: goto label_7F244C20;
    case 0x7F244C24u: goto label_7F244C24;
    case 0x7F244C28u: goto label_7F244C28;
    case 0x7F244C2Cu: goto label_7F244C2C;
    case 0x7F244C30u: goto label_7F244C30;
    case 0x7F244C34u: goto label_7F244C34;
    case 0x7F244C38u: goto label_7F244C38;
    case 0x7F244C3Cu: goto label_7F244C3C;
    case 0x7F244C40u: goto label_7F244C40;
    case 0x7F244C44u: goto label_7F244C44;
    case 0x7F244C48u: goto label_7F244C48;
    case 0x7F244C4Cu: goto label_7F244C4C;
    case 0x7F244C50u: goto label_7F244C50;
    case 0x7F244C54u: goto label_7F244C54;
    case 0x7F244C58u: goto label_7F244C58;
    case 0x7F244C5Cu: goto label_7F244C5C;
    case 0x7F244C60u: goto label_7F244C60;
    case 0x7F244C64u: goto label_7F244C64;
    case 0x7F244C68u: goto label_7F244C68;
    case 0x7F244C6Cu: goto label_7F244C6C;
    case 0x7F244C70u: goto label_7F244C70;
    case 0x7F244C74u: goto label_7F244C74;
    case 0x7F244C78u: goto label_7F244C78;
    case 0x7F244C7Cu: goto label_7F244C7C;
    case 0x7F244C80u: goto label_7F244C80;
    case 0x7F244C84u: goto label_7F244C84;
    case 0x7F244C88u: goto label_7F244C88;
    case 0x7F244C8Cu: goto label_7F244C8C;
    case 0x7F244C90u: goto label_7F244C90;
    case 0x7F244C94u: goto label_7F244C94;
    case 0x7F244C98u: goto label_7F244C98;
    case 0x7F244C9Cu: goto label_7F244C9C;
    case 0x7F244CA0u: goto label_7F244CA0;
    case 0x7F244CA4u: goto label_7F244CA4;
    case 0x7F244CA8u: goto label_7F244CA8;
    case 0x7F244CACu: goto label_7F244CAC;
    case 0x7F244CB0u: goto label_7F244CB0;
    case 0x7F244CB4u: goto label_7F244CB4;
    case 0x7F244CB8u: goto label_7F244CB8;
    case 0x7F244CBCu: goto label_7F244CBC;
    case 0x7F244CC0u: goto label_7F244CC0;
    case 0x7F244CC4u: goto label_7F244CC4;
    case 0x7F244CC8u: goto label_7F244CC8;
    case 0x7F244CCCu: goto label_7F244CCC;
    case 0x7F244CD0u: goto label_7F244CD0;
    case 0x7F244CD4u: goto label_7F244CD4;
    case 0x7F244CD8u: goto label_7F244CD8;
    case 0x7F244CDCu: goto label_7F244CDC;
    case 0x7F244CE0u: goto label_7F244CE0;
    case 0x7F244CE4u: goto label_7F244CE4;
    case 0x7F244CE8u: goto label_7F244CE8;
    case 0x7F244CECu: goto label_7F244CEC;
    case 0x7F244CF0u: goto label_7F244CF0;
    case 0x7F244CF4u: goto label_7F244CF4;
    case 0x7F244CF8u: goto label_7F244CF8;
    case 0x7F244CFCu: goto label_7F244CFC;
    case 0x7F244D00u: goto label_7F244D00;
    case 0x7F244D04u: goto label_7F244D04;
    case 0x7F244D08u: goto label_7F244D08;
    case 0x7F244D0Cu: goto label_7F244D0C;
    case 0x7F244D10u: goto label_7F244D10;
    case 0x7F244D14u: goto label_7F244D14;
    case 0x7F244D18u: goto label_7F244D18;
    case 0x7F244D1Cu: goto label_7F244D1C;
    case 0x7F244D20u: goto label_7F244D20;
    case 0x7F244D24u: goto label_7F244D24;
    case 0x7F244D28u: goto label_7F244D28;
    case 0x7F244D2Cu: goto label_7F244D2C;
    case 0x7F244D30u: goto label_7F244D30;
    case 0x7F244D34u: goto label_7F244D34;
    case 0x7F244D38u: goto label_7F244D38;
    case 0x7F244D3Cu: goto label_7F244D3C;
    case 0x7F244D40u: goto label_7F244D40;
    case 0x7F244D44u: goto label_7F244D44;
    case 0x7F244D48u: goto label_7F244D48;
    case 0x7F244D4Cu: goto label_7F244D4C;
    case 0x7F244D50u: goto label_7F244D50;
    case 0x7F244D54u: goto label_7F244D54;
    case 0x7F244D58u: goto label_7F244D58;
    case 0x7F244D5Cu: goto label_7F244D5C;
    case 0x7F244D60u: goto label_7F244D60;
    case 0x7F244D64u: goto label_7F244D64;
    case 0x7F244D68u: goto label_7F244D68;
    case 0x7F244D6Cu: goto label_7F244D6C;
    case 0x7F244D70u: goto label_7F244D70;
    case 0x7F244D74u: goto label_7F244D74;
    case 0x7F244D78u: goto label_7F244D78;
    case 0x7F244D7Cu: goto label_7F244D7C;
    case 0x7F244D80u: goto label_7F244D80;
    case 0x7F244D84u: goto label_7F244D84;
    case 0x7F244D88u: goto label_7F244D88;
    case 0x7F244D8Cu: goto label_7F244D8C;
    case 0x7F244D90u: goto label_7F244D90;
    case 0x7F244D94u: goto label_7F244D94;
    case 0x7F244D98u: goto label_7F244D98;
    case 0x7F244D9Cu: goto label_7F244D9C;
    case 0x7F244DA0u: goto label_7F244DA0;
    case 0x7F244DA4u: goto label_7F244DA4;
    case 0x7F244DA8u: goto label_7F244DA8;
    case 0x7F244DACu: goto label_7F244DAC;
    case 0x7F244DB0u: goto label_7F244DB0;
    case 0x7F244DB4u: goto label_7F244DB4;
    case 0x7F244DB8u: goto label_7F244DB8;
    case 0x7F244DBCu: goto label_7F244DBC;
    case 0x7F244DC0u: goto label_7F244DC0;
    case 0x7F244DC4u: goto label_7F244DC4;
    case 0x7F244DC8u: goto label_7F244DC8;
    case 0x7F244DCCu: goto label_7F244DCC;
    case 0x7F244DD0u: goto label_7F244DD0;
    case 0x7F244DD4u: goto label_7F244DD4;
    case 0x7F244DD8u: goto label_7F244DD8;
    case 0x7F244DDCu: goto label_7F244DDC;
    case 0x7F244DE0u: goto label_7F244DE0;
    case 0x7F244DE4u: goto label_7F244DE4;
    case 0x7F244DE8u: goto label_7F244DE8;
    case 0x7F244DECu: goto label_7F244DEC;
    case 0x7F244DF0u: goto label_7F244DF0;
    case 0x7F244DF4u: goto label_7F244DF4;
    case 0x7F244DF8u: goto label_7F244DF8;
    case 0x7F244DFCu: goto label_7F244DFC;
    case 0x7F244E00u: goto label_7F244E00;
    case 0x7F244E04u: goto label_7F244E04;
    case 0x7F244E08u: goto label_7F244E08;
    case 0x7F244E0Cu: goto label_7F244E0C;
    case 0x7F244E10u: goto label_7F244E10;
    case 0x7F244E14u: goto label_7F244E14;
    case 0x7F244E18u: goto label_7F244E18;
    case 0x7F244E1Cu: goto label_7F244E1C;
    case 0x7F244E20u: goto label_7F244E20;
    case 0x7F244E24u: goto label_7F244E24;
    case 0x7F244E28u: goto label_7F244E28;
    case 0x7F244E2Cu: goto label_7F244E2C;
    case 0x7F244E30u: goto label_7F244E30;
    case 0x7F244E34u: goto label_7F244E34;
    case 0x7F244E38u: goto label_7F244E38;
    case 0x7F244E3Cu: goto label_7F244E3C;
    case 0x7F244E40u: goto label_7F244E40;
    case 0x7F244E44u: goto label_7F244E44;
    case 0x7F244E48u: goto label_7F244E48;
    case 0x7F244E4Cu: goto label_7F244E4C;
    case 0x7F244E50u: goto label_7F244E50;
    case 0x7F244E54u: goto label_7F244E54;
    case 0x7F244E58u: goto label_7F244E58;
    case 0x7F244E5Cu: goto label_7F244E5C;
    case 0x7F244E60u: goto label_7F244E60;
    case 0x7F244E64u: goto label_7F244E64;
    case 0x7F244E68u: goto label_7F244E68;
    case 0x7F244E6Cu: goto label_7F244E6C;
    case 0x7F244E70u: goto label_7F244E70;
    case 0x7F244E74u: goto label_7F244E74;
    case 0x7F244E78u: goto label_7F244E78;
    case 0x7F244E7Cu: goto label_7F244E7C;
    case 0x7F244E80u: goto label_7F244E80;
    case 0x7F244E84u: goto label_7F244E84;
    case 0x7F244E88u: goto label_7F244E88;
    case 0x7F244E8Cu: goto label_7F244E8C;
    case 0x7F244E90u: goto label_7F244E90;
    case 0x7F244E94u: goto label_7F244E94;
    case 0x7F244E98u: goto label_7F244E98;
    case 0x7F244E9Cu: goto label_7F244E9C;
    case 0x7F244EA0u: goto label_7F244EA0;
    case 0x7F244EA4u: goto label_7F244EA4;
    case 0x7F244EA8u: goto label_7F244EA8;
    case 0x7F244EACu: goto label_7F244EAC;
    case 0x7F244EB0u: goto label_7F244EB0;
    case 0x7F244EB4u: goto label_7F244EB4;
    case 0x7F244EB8u: goto label_7F244EB8;
    case 0x7F244EBCu: goto label_7F244EBC;
    case 0x7F244EC0u: goto label_7F244EC0;
    case 0x7F244EC4u: goto label_7F244EC4;
    case 0x7F244EC8u: goto label_7F244EC8;
    case 0x7F244ECCu: goto label_7F244ECC;
    case 0x7F244ED0u: goto label_7F244ED0;
    case 0x7F244ED4u: goto label_7F244ED4;
    case 0x7F244ED8u: goto label_7F244ED8;
    case 0x7F244EDCu: goto label_7F244EDC;
    case 0x7F244EE0u: goto label_7F244EE0;
    case 0x7F244EE4u: goto label_7F244EE4;
    case 0x7F244EE8u: goto label_7F244EE8;
    case 0x7F244EECu: goto label_7F244EEC;
    case 0x7F244EF0u: goto label_7F244EF0;
    case 0x7F244EF4u: goto label_7F244EF4;
    case 0x7F244EF8u: goto label_7F244EF8;
    case 0x7F244EFCu: goto label_7F244EFC;
    case 0x7F244F00u: goto label_7F244F00;
    case 0x7F244F04u: goto label_7F244F04;
    case 0x7F244F08u: goto label_7F244F08;
    case 0x7F244F0Cu: goto label_7F244F0C;
    case 0x7F244F10u: goto label_7F244F10;
    case 0x7F244F14u: goto label_7F244F14;
    case 0x7F244F18u: goto label_7F244F18;
    case 0x7F244F1Cu: goto label_7F244F1C;
    case 0x7F244F20u: goto label_7F244F20;
    case 0x7F244F24u: goto label_7F244F24;
    case 0x7F244F28u: goto label_7F244F28;
    case 0x7F244F2Cu: goto label_7F244F2C;
    case 0x7F244F30u: goto label_7F244F30;
    case 0x7F244F34u: goto label_7F244F34;
    case 0x7F244F38u: goto label_7F244F38;
    case 0x7F244F3Cu: goto label_7F244F3C;
    case 0x7F244F40u: goto label_7F244F40;
    case 0x7F244F44u: goto label_7F244F44;
    case 0x7F244F48u: goto label_7F244F48;
    case 0x7F244F4Cu: goto label_7F244F4C;
    case 0x7F244F50u: goto label_7F244F50;
    case 0x7F244F54u: goto label_7F244F54;
    case 0x7F244F58u: goto label_7F244F58;
    case 0x7F244F5Cu: goto label_7F244F5C;
    case 0x7F244F60u: goto label_7F244F60;
    case 0x7F244F64u: goto label_7F244F64;
    case 0x7F244F68u: goto label_7F244F68;
    case 0x7F244F6Cu: goto label_7F244F6C;
    case 0x7F244F70u: goto label_7F244F70;
    case 0x7F244F74u: goto label_7F244F74;
    case 0x7F244F78u: goto label_7F244F78;
    case 0x7F244F7Cu: goto label_7F244F7C;
    case 0x7F244F80u: goto label_7F244F80;
    case 0x7F244F84u: goto label_7F244F84;
    case 0x7F244F88u: goto label_7F244F88;
    case 0x7F244F8Cu: goto label_7F244F8C;
    case 0x7F244F90u: goto label_7F244F90;
    case 0x7F244F94u: goto label_7F244F94;
    case 0x7F244F98u: goto label_7F244F98;
    case 0x7F244F9Cu: goto label_7F244F9C;
    case 0x7F244FA0u: goto label_7F244FA0;
    case 0x7F244FA4u: goto label_7F244FA4;
    case 0x7F244FA8u: goto label_7F244FA8;
    case 0x7F244FACu: goto label_7F244FAC;
    case 0x7F244FB0u: goto label_7F244FB0;
    case 0x7F244FB4u: goto label_7F244FB4;
    case 0x7F244FB8u: goto label_7F244FB8;
    case 0x7F244FBCu: goto label_7F244FBC;
    case 0x7F244FC0u: goto label_7F244FC0;
    case 0x7F244FC4u: goto label_7F244FC4;
    case 0x7F244FC8u: goto label_7F244FC8;
    case 0x7F244FCCu: goto label_7F244FCC;
    case 0x7F244FD0u: goto label_7F244FD0;
    case 0x7F244FD4u: goto label_7F244FD4;
    case 0x7F244FD8u: goto label_7F244FD8;
    case 0x7F244FDCu: goto label_7F244FDC;
    case 0x7F244FE0u: goto label_7F244FE0;
    case 0x7F244FE4u: goto label_7F244FE4;
    case 0x7F244FE8u: goto label_7F244FE8;
    case 0x7F244FECu: goto label_7F244FEC;
    case 0x7F244FF0u: goto label_7F244FF0;
    case 0x7F244FF4u: goto label_7F244FF4;
    case 0x7F244FF8u: goto label_7F244FF8;
    case 0x7F244FFCu: goto label_7F244FFC;
    case 0x7F245000u: goto label_7F245000;
    case 0x7F245004u: goto label_7F245004;
    case 0x7F245008u: goto label_7F245008;
    case 0x7F24500Cu: goto label_7F24500C;
    case 0x7F245010u: goto label_7F245010;
    case 0x7F245014u: goto label_7F245014;
    case 0x7F245018u: goto label_7F245018;
    case 0x7F24501Cu: goto label_7F24501C;
    case 0x7F245020u: goto label_7F245020;
    case 0x7F245024u: goto label_7F245024;
    case 0x7F245028u: goto label_7F245028;
    case 0x7F24502Cu: goto label_7F24502C;
    case 0x7F245030u: goto label_7F245030;
    case 0x7F245034u: goto label_7F245034;
    case 0x7F245038u: goto label_7F245038;
    case 0x7F24503Cu: goto label_7F24503C;
    case 0x7F245040u: goto label_7F245040;
    case 0x7F245044u: goto label_7F245044;
    case 0x7F245048u: goto label_7F245048;
    case 0x7F24504Cu: goto label_7F24504C;
    case 0x7F245050u: goto label_7F245050;
    case 0x7F245054u: goto label_7F245054;
    case 0x7F245058u: goto label_7F245058;
    case 0x7F24505Cu: goto label_7F24505C;
    case 0x7F245060u: goto label_7F245060;
    case 0x7F245064u: goto label_7F245064;
    case 0x7F245068u: goto label_7F245068;
    case 0x7F24506Cu: goto label_7F24506C;
    case 0x7F245070u: goto label_7F245070;
    case 0x7F245074u: goto label_7F245074;
    case 0x7F245078u: goto label_7F245078;
    case 0x7F24507Cu: goto label_7F24507C;
    case 0x7F245080u: goto label_7F245080;
    case 0x7F245084u: goto label_7F245084;
    case 0x7F245088u: goto label_7F245088;
    case 0x7F24508Cu: goto label_7F24508C;
    case 0x7F245090u: goto label_7F245090;
    case 0x7F245094u: goto label_7F245094;
    case 0x7F245098u: goto label_7F245098;
    case 0x7F24509Cu: goto label_7F24509C;
    case 0x7F2450A0u: goto label_7F2450A0;
    case 0x7F2450A4u: goto label_7F2450A4;
    case 0x7F2450A8u: goto label_7F2450A8;
    case 0x7F2450ACu: goto label_7F2450AC;
    case 0x7F2450B0u: goto label_7F2450B0;
    case 0x7F2450B4u: goto label_7F2450B4;
    case 0x7F2450B8u: goto label_7F2450B8;
    case 0x7F2450BCu: goto label_7F2450BC;
    case 0x7F2450C0u: goto label_7F2450C0;
    case 0x7F2450C4u: goto label_7F2450C4;
    case 0x7F2450C8u: goto label_7F2450C8;
    case 0x7F2450CCu: goto label_7F2450CC;
    case 0x7F2450D0u: goto label_7F2450D0;
    case 0x7F2450D4u: goto label_7F2450D4;
    case 0x7F2450D8u: goto label_7F2450D8;
    case 0x7F2450DCu: goto label_7F2450DC;
    case 0x7F2450E0u: goto label_7F2450E0;
    case 0x7F2450E4u: goto label_7F2450E4;
    case 0x7F2450E8u: goto label_7F2450E8;
    case 0x7F2450ECu: goto label_7F2450EC;
    case 0x7F2450F0u: goto label_7F2450F0;
    case 0x7F2450F4u: goto label_7F2450F4;
    case 0x7F2450F8u: goto label_7F2450F8;
    case 0x7F2450FCu: goto label_7F2450FC;
    case 0x7F245100u: goto label_7F245100;
    case 0x7F245104u: goto label_7F245104;
    case 0x7F245108u: goto label_7F245108;
    case 0x7F24510Cu: goto label_7F24510C;
    case 0x7F245110u: goto label_7F245110;
    case 0x7F245114u: goto label_7F245114;
    case 0x7F245118u: goto label_7F245118;
    case 0x7F24511Cu: goto label_7F24511C;
    case 0x7F245120u: goto label_7F245120;
    case 0x7F245124u: goto label_7F245124;
    case 0x7F245128u: goto label_7F245128;
    case 0x7F24512Cu: goto label_7F24512C;
    case 0x7F245130u: goto label_7F245130;
    case 0x7F245134u: goto label_7F245134;
    case 0x7F245138u: goto label_7F245138;
    case 0x7F24513Cu: goto label_7F24513C;
    case 0x7F245140u: goto label_7F245140;
    case 0x7F245144u: goto label_7F245144;
    case 0x7F245148u: goto label_7F245148;
    case 0x7F24514Cu: goto label_7F24514C;
    case 0x7F245150u: goto label_7F245150;
    case 0x7F245154u: goto label_7F245154;
    case 0x7F245158u: goto label_7F245158;
    case 0x7F24515Cu: goto label_7F24515C;
    case 0x7F245160u: goto label_7F245160;
    case 0x7F245164u: goto label_7F245164;
    case 0x7F245168u: goto label_7F245168;
    case 0x7F24516Cu: goto label_7F24516C;
    case 0x7F245170u: goto label_7F245170;
    case 0x7F245174u: goto label_7F245174;
    case 0x7F245178u: goto label_7F245178;
    case 0x7F24517Cu: goto label_7F24517C;
    case 0x7F245180u: goto label_7F245180;
    case 0x7F245184u: goto label_7F245184;
    case 0x7F245188u: goto label_7F245188;
    case 0x7F24518Cu: goto label_7F24518C;
    case 0x7F245190u: goto label_7F245190;
    case 0x7F245194u: goto label_7F245194;
    case 0x7F245198u: goto label_7F245198;
    case 0x7F24519Cu: goto label_7F24519C;
    case 0x7F2451A0u: goto label_7F2451A0;
    case 0x7F2451A4u: goto label_7F2451A4;
    case 0x7F2451A8u: goto label_7F2451A8;
    case 0x7F2451ACu: goto label_7F2451AC;
    case 0x7F2451B0u: goto label_7F2451B0;
    case 0x7F2451B4u: goto label_7F2451B4;
    case 0x7F2451B8u: goto label_7F2451B8;
    case 0x7F2451BCu: goto label_7F2451BC;
    case 0x7F2451C0u: goto label_7F2451C0;
    case 0x7F2451C4u: goto label_7F2451C4;
    case 0x7F2451C8u: goto label_7F2451C8;
    case 0x7F2451CCu: goto label_7F2451CC;
    case 0x7F2451D0u: goto label_7F2451D0;
    case 0x7F2451D4u: goto label_7F2451D4;
    case 0x7F2451D8u: goto label_7F2451D8;
    case 0x7F2451DCu: goto label_7F2451DC;
    case 0x7F2451E0u: goto label_7F2451E0;
    case 0x7F2451E4u: goto label_7F2451E4;
    case 0x7F2451E8u: goto label_7F2451E8;
    case 0x7F2451ECu: goto label_7F2451EC;
    case 0x7F2451F0u: goto label_7F2451F0;
    case 0x7F2451F4u: goto label_7F2451F4;
    case 0x7F2451F8u: goto label_7F2451F8;
    case 0x7F2451FCu: goto label_7F2451FC;
    case 0x7F245200u: goto label_7F245200;
    case 0x7F245204u: goto label_7F245204;
    case 0x7F245208u: goto label_7F245208;
    case 0x7F24520Cu: goto label_7F24520C;
    case 0x7F245210u: goto label_7F245210;
    case 0x7F245214u: goto label_7F245214;
    case 0x7F245218u: goto label_7F245218;
    case 0x7F24521Cu: goto label_7F24521C;
    case 0x7F245220u: goto label_7F245220;
    case 0x7F245224u: goto label_7F245224;
    case 0x7F245228u: goto label_7F245228;
    case 0x7F24522Cu: goto label_7F24522C;
    case 0x7F245230u: goto label_7F245230;
    case 0x7F245234u: goto label_7F245234;
    case 0x7F245238u: goto label_7F245238;
    case 0x7F24523Cu: goto label_7F24523C;
    case 0x7F245240u: goto label_7F245240;
    case 0x7F245244u: goto label_7F245244;
    case 0x7F245248u: goto label_7F245248;
    case 0x7F24524Cu: goto label_7F24524C;
    case 0x7F245250u: goto label_7F245250;
    case 0x7F245254u: goto label_7F245254;
    case 0x7F245258u: goto label_7F245258;
    case 0x7F24525Cu: goto label_7F24525C;
    case 0x7F245260u: goto label_7F245260;
    case 0x7F245264u: goto label_7F245264;
    case 0x7F245268u: goto label_7F245268;
    case 0x7F24526Cu: goto label_7F24526C;
    case 0x7F245270u: goto label_7F245270;
    case 0x7F245274u: goto label_7F245274;
    case 0x7F245278u: goto label_7F245278;
    case 0x7F24527Cu: goto label_7F24527C;
    case 0x7F245280u: goto label_7F245280;
    case 0x7F245284u: goto label_7F245284;
    case 0x7F245288u: goto label_7F245288;
    case 0x7F24528Cu: goto label_7F24528C;
    case 0x7F245290u: goto label_7F245290;
    case 0x7F245294u: goto label_7F245294;
    case 0x7F245298u: goto label_7F245298;
    case 0x7F24529Cu: goto label_7F24529C;
    case 0x7F2452A0u: goto label_7F2452A0;
    case 0x7F2452A4u: goto label_7F2452A4;
    case 0x7F2452A8u: goto label_7F2452A8;
    case 0x7F2452ACu: goto label_7F2452AC;
    case 0x7F2452B0u: goto label_7F2452B0;
    case 0x7F2452B4u: goto label_7F2452B4;
    case 0x7F2452B8u: goto label_7F2452B8;
    case 0x7F2452BCu: goto label_7F2452BC;
    case 0x7F2452C0u: goto label_7F2452C0;
    case 0x7F2452C4u: goto label_7F2452C4;
    case 0x7F2452C8u: goto label_7F2452C8;
    case 0x7F2452CCu: goto label_7F2452CC;
    case 0x7F2452D0u: goto label_7F2452D0;
    case 0x7F2452D4u: goto label_7F2452D4;
    case 0x7F2452D8u: goto label_7F2452D8;
    case 0x7F2452DCu: goto label_7F2452DC;
    case 0x7F2452E0u: goto label_7F2452E0;
    case 0x7F2452E4u: goto label_7F2452E4;
    case 0x7F2452E8u: goto label_7F2452E8;
    case 0x7F2452ECu: goto label_7F2452EC;
    case 0x7F2452F0u: goto label_7F2452F0;
    case 0x7F2452F4u: goto label_7F2452F4;
    case 0x7F2452F8u: goto label_7F2452F8;
    case 0x7F2452FCu: goto label_7F2452FC;
    case 0x7F245300u: goto label_7F245300;
    case 0x7F245304u: goto label_7F245304;
    case 0x7F245308u: goto label_7F245308;
    case 0x7F24530Cu: goto label_7F24530C;
    case 0x7F245310u: goto label_7F245310;
    case 0x7F245314u: goto label_7F245314;
    case 0x7F245318u: goto label_7F245318;
    case 0x7F24531Cu: goto label_7F24531C;
    case 0x7F245320u: goto label_7F245320;
    case 0x7F245324u: goto label_7F245324;
    case 0x7F245328u: goto label_7F245328;
    case 0x7F24532Cu: goto label_7F24532C;
    case 0x7F245330u: goto label_7F245330;
    case 0x7F245334u: goto label_7F245334;
    case 0x7F245338u: goto label_7F245338;
    case 0x7F24533Cu: goto label_7F24533C;
    case 0x7F245340u: goto label_7F245340;
    case 0x7F245344u: goto label_7F245344;
    case 0x7F245348u: goto label_7F245348;
    case 0x7F24534Cu: goto label_7F24534C;
    case 0x7F245350u: goto label_7F245350;
    case 0x7F245354u: goto label_7F245354;
    case 0x7F245358u: goto label_7F245358;
    case 0x7F24535Cu: goto label_7F24535C;
    case 0x7F245360u: goto label_7F245360;
    case 0x7F245364u: goto label_7F245364;
    case 0x7F245368u: goto label_7F245368;
    case 0x7F24536Cu: goto label_7F24536C;
    case 0x7F245370u: goto label_7F245370;
    case 0x7F245374u: goto label_7F245374;
    case 0x7F245378u: goto label_7F245378;
    case 0x7F24537Cu: goto label_7F24537C;
    case 0x7F245380u: goto label_7F245380;
    case 0x7F245384u: goto label_7F245384;
    case 0x7F245388u: goto label_7F245388;
    case 0x7F24538Cu: goto label_7F24538C;
    case 0x7F245390u: goto label_7F245390;
    case 0x7F245394u: goto label_7F245394;
    case 0x7F245398u: goto label_7F245398;
    case 0x7F24539Cu: goto label_7F24539C;
    case 0x7F2453A0u: goto label_7F2453A0;
    case 0x7F2453A4u: goto label_7F2453A4;
    case 0x7F2453A8u: goto label_7F2453A8;
    case 0x7F2453ACu: goto label_7F2453AC;
    case 0x7F2453B0u: goto label_7F2453B0;
    case 0x7F2453B4u: goto label_7F2453B4;
    case 0x7F2453B8u: goto label_7F2453B8;
    case 0x7F2453BCu: goto label_7F2453BC;
    case 0x7F2453C0u: goto label_7F2453C0;
    case 0x7F2453C4u: goto label_7F2453C4;
    case 0x7F2453C8u: goto label_7F2453C8;
    case 0x7F2453CCu: goto label_7F2453CC;
    case 0x7F2453D0u: goto label_7F2453D0;
    case 0x7F2453D4u: goto label_7F2453D4;
    case 0x7F2453D8u: goto label_7F2453D8;
    case 0x7F2453DCu: goto label_7F2453DC;
    case 0x7F2453E0u: goto label_7F2453E0;
    case 0x7F2453E4u: goto label_7F2453E4;
    case 0x7F2453E8u: goto label_7F2453E8;
    case 0x7F2453ECu: goto label_7F2453EC;
    case 0x7F2453F0u: goto label_7F2453F0;
    case 0x7F2453F4u: goto label_7F2453F4;
    case 0x7F2453F8u: goto label_7F2453F8;
    case 0x7F2453FCu: goto label_7F2453FC;
    case 0x7F245400u: goto label_7F245400;
    case 0x7F245404u: goto label_7F245404;
    case 0x7F245408u: goto label_7F245408;
    case 0x7F24540Cu: goto label_7F24540C;
    case 0x7F245410u: goto label_7F245410;
    case 0x7F245414u: goto label_7F245414;
    case 0x7F245418u: goto label_7F245418;
    case 0x7F24541Cu: goto label_7F24541C;
    case 0x7F245420u: goto label_7F245420;
    case 0x7F245424u: goto label_7F245424;
    case 0x7F245428u: goto label_7F245428;
    case 0x7F24542Cu: goto label_7F24542C;
    case 0x7F245430u: goto label_7F245430;
    case 0x7F245434u: goto label_7F245434;
    case 0x7F245438u: goto label_7F245438;
    case 0x7F24543Cu: goto label_7F24543C;
    case 0x7F245440u: goto label_7F245440;
    case 0x7F245444u: goto label_7F245444;
    case 0x7F245448u: goto label_7F245448;
    case 0x7F24544Cu: goto label_7F24544C;
    case 0x7F245450u: goto label_7F245450;
    case 0x7F245454u: goto label_7F245454;
    case 0x7F245458u: goto label_7F245458;
    case 0x7F24545Cu: goto label_7F24545C;
    case 0x7F245460u: goto label_7F245460;
    case 0x7F245464u: goto label_7F245464;
    case 0x7F245468u: goto label_7F245468;
    case 0x7F24546Cu: goto label_7F24546C;
    case 0x7F245470u: goto label_7F245470;
    case 0x7F245474u: goto label_7F245474;
    case 0x7F245478u: goto label_7F245478;
    case 0x7F24547Cu: goto label_7F24547C;
    case 0x7F245480u: goto label_7F245480;
    case 0x7F245484u: goto label_7F245484;
    case 0x7F245488u: goto label_7F245488;
    case 0x7F24548Cu: goto label_7F24548C;
    case 0x7F245490u: goto label_7F245490;
    case 0x7F245494u: goto label_7F245494;
    case 0x7F245498u: goto label_7F245498;
    case 0x7F24549Cu: goto label_7F24549C;
    case 0x7F2454A0u: goto label_7F2454A0;
    case 0x7F2454A4u: goto label_7F2454A4;
    case 0x7F2454A8u: goto label_7F2454A8;
    case 0x7F2454ACu: goto label_7F2454AC;
    case 0x7F2454B0u: goto label_7F2454B0;
    case 0x7F2454B4u: goto label_7F2454B4;
    case 0x7F2454B8u: goto label_7F2454B8;
    case 0x7F2454BCu: goto label_7F2454BC;
    case 0x7F2454C0u: goto label_7F2454C0;
    case 0x7F2454C4u: goto label_7F2454C4;
    case 0x7F2454C8u: goto label_7F2454C8;
    case 0x7F2454CCu: goto label_7F2454CC;
    case 0x7F2454D0u: goto label_7F2454D0;
    case 0x7F2454D4u: goto label_7F2454D4;
    case 0x7F2454D8u: goto label_7F2454D8;
    case 0x7F2454DCu: goto label_7F2454DC;
    case 0x7F2454E0u: goto label_7F2454E0;
    case 0x7F2454E4u: goto label_7F2454E4;
    case 0x7F2454E8u: goto label_7F2454E8;
    case 0x7F2454ECu: goto label_7F2454EC;
    case 0x7F2454F0u: goto label_7F2454F0;
    case 0x7F2454F4u: goto label_7F2454F4;
    case 0x7F2454F8u: goto label_7F2454F8;
    case 0x7F2454FCu: goto label_7F2454FC;
    case 0x7F245500u: goto label_7F245500;
    case 0x7F245504u: goto label_7F245504;
    case 0x7F245508u: goto label_7F245508;
    case 0x7F24550Cu: goto label_7F24550C;
    case 0x7F245510u: goto label_7F245510;
    case 0x7F245514u: goto label_7F245514;
    case 0x7F245518u: goto label_7F245518;
    case 0x7F24551Cu: goto label_7F24551C;
    case 0x7F245520u: goto label_7F245520;
    case 0x7F245524u: goto label_7F245524;
    case 0x7F245528u: goto label_7F245528;
    case 0x7F24552Cu: goto label_7F24552C;
    case 0x7F245530u: goto label_7F245530;
    case 0x7F245534u: goto label_7F245534;
    case 0x7F245538u: goto label_7F245538;
    case 0x7F24553Cu: goto label_7F24553C;
    case 0x7F245540u: goto label_7F245540;
    case 0x7F245544u: goto label_7F245544;
    case 0x7F245548u: goto label_7F245548;
    case 0x7F24554Cu: goto label_7F24554C;
    case 0x7F245550u: goto label_7F245550;
    case 0x7F245554u: goto label_7F245554;
    case 0x7F245558u: goto label_7F245558;
    case 0x7F24555Cu: goto label_7F24555C;
    case 0x7F245560u: goto label_7F245560;
    case 0x7F245564u: goto label_7F245564;
    case 0x7F245568u: goto label_7F245568;
    case 0x7F24556Cu: goto label_7F24556C;
    case 0x7F245570u: goto label_7F245570;
    case 0x7F245574u: goto label_7F245574;
    case 0x7F245578u: goto label_7F245578;
    case 0x7F24557Cu: goto label_7F24557C;
    case 0x7F245580u: goto label_7F245580;
    case 0x7F245584u: goto label_7F245584;
    case 0x7F245588u: goto label_7F245588;
    case 0x7F24558Cu: goto label_7F24558C;
    case 0x7F245590u: goto label_7F245590;
    case 0x7F245594u: goto label_7F245594;
    case 0x7F245598u: goto label_7F245598;
    case 0x7F24559Cu: goto label_7F24559C;
    case 0x7F2455A0u: goto label_7F2455A0;
    case 0x7F2455A4u: goto label_7F2455A4;
    case 0x7F2455A8u: goto label_7F2455A8;
    case 0x7F2455ACu: goto label_7F2455AC;
    case 0x7F2455B0u: goto label_7F2455B0;
    case 0x7F2455B4u: goto label_7F2455B4;
    case 0x7F2455B8u: goto label_7F2455B8;
    case 0x7F2455BCu: goto label_7F2455BC;
    case 0x7F2455C0u: goto label_7F2455C0;
    case 0x7F2455C4u: goto label_7F2455C4;
    case 0x7F2455C8u: goto label_7F2455C8;
    case 0x7F2455CCu: goto label_7F2455CC;
    case 0x7F2455D0u: goto label_7F2455D0;
    case 0x7F2455D4u: goto label_7F2455D4;
    case 0x7F2455D8u: goto label_7F2455D8;
    case 0x7F2455DCu: goto label_7F2455DC;
    case 0x7F2455E0u: goto label_7F2455E0;
    case 0x7F2455E4u: goto label_7F2455E4;
    case 0x7F2455E8u: goto label_7F2455E8;
    case 0x7F2455ECu: goto label_7F2455EC;
    case 0x7F2455F0u: goto label_7F2455F0;
    case 0x7F2455F4u: goto label_7F2455F4;
    case 0x7F2455F8u: goto label_7F2455F8;
    case 0x7F2455FCu: goto label_7F2455FC;
    case 0x7F245600u: goto label_7F245600;
    case 0x7F245604u: goto label_7F245604;
    case 0x7F245608u: goto label_7F245608;
    case 0x7F24560Cu: goto label_7F24560C;
    case 0x7F245610u: goto label_7F245610;
    case 0x7F245614u: goto label_7F245614;
    case 0x7F245618u: goto label_7F245618;
    case 0x7F24561Cu: goto label_7F24561C;
    case 0x7F245620u: goto label_7F245620;
    case 0x7F245624u: goto label_7F245624;
    case 0x7F245628u: goto label_7F245628;
    case 0x7F24562Cu: goto label_7F24562C;
    case 0x7F245630u: goto label_7F245630;
    case 0x7F245634u: goto label_7F245634;
    case 0x7F245638u: goto label_7F245638;
    case 0x7F24563Cu: goto label_7F24563C;
    case 0x7F245640u: goto label_7F245640;
    case 0x7F245644u: goto label_7F245644;
    case 0x7F245648u: goto label_7F245648;
    case 0x7F24564Cu: goto label_7F24564C;
    case 0x7F245650u: goto label_7F245650;
    case 0x7F245654u: goto label_7F245654;
    case 0x7F245658u: goto label_7F245658;
    case 0x7F24565Cu: goto label_7F24565C;
    case 0x7F245660u: goto label_7F245660;
    case 0x7F245664u: goto label_7F245664;
    case 0x7F245668u: goto label_7F245668;
    case 0x7F24566Cu: goto label_7F24566C;
    case 0x7F245670u: goto label_7F245670;
    case 0x7F245674u: goto label_7F245674;
    case 0x7F245678u: goto label_7F245678;
    case 0x7F24567Cu: goto label_7F24567C;
    case 0x7F245680u: goto label_7F245680;
    case 0x7F245684u: goto label_7F245684;
    case 0x7F245688u: goto label_7F245688;
    case 0x7F24568Cu: goto label_7F24568C;
    case 0x7F245690u: goto label_7F245690;
    case 0x7F245694u: goto label_7F245694;
    case 0x7F245698u: goto label_7F245698;
    case 0x7F24569Cu: goto label_7F24569C;
    case 0x7F2456A0u: goto label_7F2456A0;
    case 0x7F2456A4u: goto label_7F2456A4;
    case 0x7F2456A8u: goto label_7F2456A8;
    case 0x7F2456ACu: goto label_7F2456AC;
    case 0x7F2456B0u: goto label_7F2456B0;
    case 0x7F2456B4u: goto label_7F2456B4;
    case 0x7F2456B8u: goto label_7F2456B8;
    case 0x7F2456BCu: goto label_7F2456BC;
    case 0x7F2456C0u: goto label_7F2456C0;
    case 0x7F2456C4u: goto label_7F2456C4;
    case 0x7F2456C8u: goto label_7F2456C8;
    case 0x7F2456CCu: goto label_7F2456CC;
    case 0x7F2456D0u: goto label_7F2456D0;
    case 0x7F2456D4u: goto label_7F2456D4;
    case 0x7F2456D8u: goto label_7F2456D8;
    case 0x7F2456DCu: goto label_7F2456DC;
    case 0x7F2456E0u: goto label_7F2456E0;
    case 0x7F2456E4u: goto label_7F2456E4;
    case 0x7F2456E8u: goto label_7F2456E8;
    case 0x7F2456ECu: goto label_7F2456EC;
    case 0x7F2456F0u: goto label_7F2456F0;
    case 0x7F2456F4u: goto label_7F2456F4;
    case 0x7F2456F8u: goto label_7F2456F8;
    case 0x7F2456FCu: goto label_7F2456FC;
    case 0x7F245700u: goto label_7F245700;
    case 0x7F245704u: goto label_7F245704;
    case 0x7F245708u: goto label_7F245708;
    case 0x7F24570Cu: goto label_7F24570C;
    case 0x7F245710u: goto label_7F245710;
    case 0x7F245714u: goto label_7F245714;
    case 0x7F245718u: goto label_7F245718;
    case 0x7F24571Cu: goto label_7F24571C;
    case 0x7F245720u: goto label_7F245720;
    case 0x7F245724u: goto label_7F245724;
    case 0x7F245728u: goto label_7F245728;
    case 0x7F24572Cu: goto label_7F24572C;
    case 0x7F245730u: goto label_7F245730;
    case 0x7F245734u: goto label_7F245734;
    case 0x7F245738u: goto label_7F245738;
    case 0x7F24573Cu: goto label_7F24573C;
    case 0x7F245740u: goto label_7F245740;
    case 0x7F245744u: goto label_7F245744;
    case 0x7F245748u: goto label_7F245748;
    case 0x7F24574Cu: goto label_7F24574C;
    case 0x7F245750u: goto label_7F245750;
    case 0x7F245754u: goto label_7F245754;
    case 0x7F245758u: goto label_7F245758;
    case 0x7F24575Cu: goto label_7F24575C;
    case 0x7F245760u: goto label_7F245760;
    case 0x7F245764u: goto label_7F245764;
    case 0x7F245768u: goto label_7F245768;
    case 0x7F24576Cu: goto label_7F24576C;
    case 0x7F245770u: goto label_7F245770;
    case 0x7F245774u: goto label_7F245774;
    case 0x7F245778u: goto label_7F245778;
    case 0x7F24577Cu: goto label_7F24577C;
    case 0x7F245780u: goto label_7F245780;
    case 0x7F245784u: goto label_7F245784;
    case 0x7F245788u: goto label_7F245788;
    case 0x7F24578Cu: goto label_7F24578C;
    case 0x7F245790u: goto label_7F245790;
    case 0x7F245794u: goto label_7F245794;
    case 0x7F245798u: goto label_7F245798;
    case 0x7F24579Cu: goto label_7F24579C;
    case 0x7F2457A0u: goto label_7F2457A0;
    case 0x7F2457A4u: goto label_7F2457A4;
    case 0x7F2457A8u: goto label_7F2457A8;
    case 0x7F2457ACu: goto label_7F2457AC;
    case 0x7F2457B0u: goto label_7F2457B0;
    case 0x7F2457B4u: goto label_7F2457B4;
    case 0x7F2457B8u: goto label_7F2457B8;
    case 0x7F2457BCu: goto label_7F2457BC;
    case 0x7F2457C0u: goto label_7F2457C0;
    case 0x7F2457C4u: goto label_7F2457C4;
    case 0x7F2457C8u: goto label_7F2457C8;
    case 0x7F2457CCu: goto label_7F2457CC;
    case 0x7F2457D0u: goto label_7F2457D0;
    case 0x7F2457D4u: goto label_7F2457D4;
    case 0x7F2457D8u: goto label_7F2457D8;
    case 0x7F2457DCu: goto label_7F2457DC;
    case 0x7F2457E0u: goto label_7F2457E0;
    case 0x7F2457E4u: goto label_7F2457E4;
    case 0x7F2457E8u: goto label_7F2457E8;
    case 0x7F2457ECu: goto label_7F2457EC;
    case 0x7F2457F0u: goto label_7F2457F0;
    case 0x7F2457F4u: goto label_7F2457F4;
    case 0x7F2457F8u: goto label_7F2457F8;
    case 0x7F2457FCu: goto label_7F2457FC;
    case 0x7F245800u: goto label_7F245800;
    case 0x7F245804u: goto label_7F245804;
    case 0x7F245808u: goto label_7F245808;
    case 0x7F24580Cu: goto label_7F24580C;
    case 0x7F245810u: goto label_7F245810;
    case 0x7F245814u: goto label_7F245814;
    case 0x7F245818u: goto label_7F245818;
    case 0x7F24581Cu: goto label_7F24581C;
    case 0x7F245820u: goto label_7F245820;
    case 0x7F245824u: goto label_7F245824;
    case 0x7F245828u: goto label_7F245828;
    case 0x7F24582Cu: goto label_7F24582C;
    case 0x7F245830u: goto label_7F245830;
    case 0x7F245834u: goto label_7F245834;
    case 0x7F245838u: goto label_7F245838;
    case 0x7F24583Cu: goto label_7F24583C;
    case 0x7F245840u: goto label_7F245840;
    case 0x7F245844u: goto label_7F245844;
    case 0x7F245848u: goto label_7F245848;
    case 0x7F24584Cu: goto label_7F24584C;
    case 0x7F245850u: goto label_7F245850;
    case 0x7F245854u: goto label_7F245854;
    case 0x7F245858u: goto label_7F245858;
    case 0x7F24585Cu: goto label_7F24585C;
    case 0x7F245860u: goto label_7F245860;
    case 0x7F245864u: goto label_7F245864;
    case 0x7F245868u: goto label_7F245868;
    case 0x7F24586Cu: goto label_7F24586C;
    case 0x7F245870u: goto label_7F245870;
    case 0x7F245874u: goto label_7F245874;
    case 0x7F245878u: goto label_7F245878;
    case 0x7F24587Cu: goto label_7F24587C;
    case 0x7F245880u: goto label_7F245880;
    case 0x7F245884u: goto label_7F245884;
    case 0x7F245888u: goto label_7F245888;
    case 0x7F24588Cu: goto label_7F24588C;
    case 0x7F245890u: goto label_7F245890;
    case 0x7F245894u: goto label_7F245894;
    case 0x7F245898u: goto label_7F245898;
    case 0x7F24589Cu: goto label_7F24589C;
    case 0x7F2458A0u: goto label_7F2458A0;
    case 0x7F2458A4u: goto label_7F2458A4;
    case 0x7F2458A8u: goto label_7F2458A8;
    case 0x7F2458ACu: goto label_7F2458AC;
    case 0x7F2458B0u: goto label_7F2458B0;
    case 0x7F2458B4u: goto label_7F2458B4;
    case 0x7F2458B8u: goto label_7F2458B8;
    case 0x7F2458BCu: goto label_7F2458BC;
    case 0x7F2458C0u: goto label_7F2458C0;
    case 0x7F2458C4u: goto label_7F2458C4;
    case 0x7F2458C8u: goto label_7F2458C8;
    case 0x7F2458CCu: goto label_7F2458CC;
    case 0x7F2458D0u: goto label_7F2458D0;
    case 0x7F2458D4u: goto label_7F2458D4;
    case 0x7F2458D8u: goto label_7F2458D8;
    case 0x7F2458DCu: goto label_7F2458DC;
    case 0x7F2458E0u: goto label_7F2458E0;
    case 0x7F2458E4u: goto label_7F2458E4;
    case 0x7F2458E8u: goto label_7F2458E8;
    case 0x7F2458ECu: goto label_7F2458EC;
    case 0x7F2458F0u: goto label_7F2458F0;
    case 0x7F2458F4u: goto label_7F2458F4;
    case 0x7F2458F8u: goto label_7F2458F8;
    case 0x7F2458FCu: goto label_7F2458FC;
    case 0x7F245900u: goto label_7F245900;
    case 0x7F245904u: goto label_7F245904;
    case 0x7F245908u: goto label_7F245908;
    case 0x7F24590Cu: goto label_7F24590C;
    case 0x7F245910u: goto label_7F245910;
    case 0x7F245914u: goto label_7F245914;
    case 0x7F245918u: goto label_7F245918;
    case 0x7F24591Cu: goto label_7F24591C;
    case 0x7F245920u: goto label_7F245920;
    case 0x7F245924u: goto label_7F245924;
    case 0x7F245928u: goto label_7F245928;
    case 0x7F24592Cu: goto label_7F24592C;
    case 0x7F245930u: goto label_7F245930;
    case 0x7F245934u: goto label_7F245934;
    case 0x7F245938u: goto label_7F245938;
    case 0x7F24593Cu: goto label_7F24593C;
    case 0x7F245940u: goto label_7F245940;
    case 0x7F245944u: goto label_7F245944;
    case 0x7F245948u: goto label_7F245948;
    case 0x7F24594Cu: goto label_7F24594C;
    case 0x7F245950u: goto label_7F245950;
    case 0x7F245954u: goto label_7F245954;
    case 0x7F245958u: goto label_7F245958;
    case 0x7F24595Cu: goto label_7F24595C;
    case 0x7F245960u: goto label_7F245960;
    case 0x7F245964u: goto label_7F245964;
    case 0x7F245968u: goto label_7F245968;
    case 0x7F24596Cu: goto label_7F24596C;
    case 0x7F245970u: goto label_7F245970;
    case 0x7F245974u: goto label_7F245974;
    case 0x7F245978u: goto label_7F245978;
    case 0x7F24597Cu: goto label_7F24597C;
    case 0x7F245980u: goto label_7F245980;
    case 0x7F245984u: goto label_7F245984;
    case 0x7F245988u: goto label_7F245988;
    case 0x7F24598Cu: goto label_7F24598C;
    case 0x7F245990u: goto label_7F245990;
    case 0x7F245994u: goto label_7F245994;
    case 0x7F245998u: goto label_7F245998;
    case 0x7F24599Cu: goto label_7F24599C;
    case 0x7F2459A0u: goto label_7F2459A0;
    case 0x7F2459A4u: goto label_7F2459A4;
    case 0x7F2459A8u: goto label_7F2459A8;
    case 0x7F2459ACu: goto label_7F2459AC;
    case 0x7F2459B0u: goto label_7F2459B0;
    case 0x7F2459B4u: goto label_7F2459B4;
    case 0x7F2459B8u: goto label_7F2459B8;
    case 0x7F2459BCu: goto label_7F2459BC;
    case 0x7F2459C0u: goto label_7F2459C0;
    case 0x7F2459C4u: goto label_7F2459C4;
    case 0x7F2459C8u: goto label_7F2459C8;
    case 0x7F2459CCu: goto label_7F2459CC;
    case 0x7F2459D0u: goto label_7F2459D0;
    case 0x7F2459D4u: goto label_7F2459D4;
    case 0x7F2459D8u: goto label_7F2459D8;
    case 0x7F2459DCu: goto label_7F2459DC;
    case 0x7F2459E0u: goto label_7F2459E0;
    case 0x7F2459E4u: goto label_7F2459E4;
    case 0x7F2459E8u: goto label_7F2459E8;
    case 0x7F2459ECu: goto label_7F2459EC;
    case 0x7F2459F0u: goto label_7F2459F0;
    case 0x7F2459F4u: goto label_7F2459F4;
    case 0x7F2459F8u: goto label_7F2459F8;
    case 0x7F2459FCu: goto label_7F2459FC;
    case 0x7F245A00u: goto label_7F245A00;
    case 0x7F245A04u: goto label_7F245A04;
    case 0x7F245A08u: goto label_7F245A08;
    case 0x7F245A0Cu: goto label_7F245A0C;
    case 0x7F245A10u: goto label_7F245A10;
    case 0x7F245A14u: goto label_7F245A14;
    case 0x7F245A18u: goto label_7F245A18;
    case 0x7F245A1Cu: goto label_7F245A1C;
    case 0x7F245A20u: goto label_7F245A20;
    case 0x7F245A24u: goto label_7F245A24;
    case 0x7F245A28u: goto label_7F245A28;
    case 0x7F245A2Cu: goto label_7F245A2C;
    case 0x7F245A30u: goto label_7F245A30;
    case 0x7F245A34u: goto label_7F245A34;
    case 0x7F245A38u: goto label_7F245A38;
    case 0x7F245A3Cu: goto label_7F245A3C;
    case 0x7F245A40u: goto label_7F245A40;
    case 0x7F245A44u: goto label_7F245A44;
    case 0x7F245A48u: goto label_7F245A48;
    case 0x7F245A4Cu: goto label_7F245A4C;
    case 0x7F245A50u: goto label_7F245A50;
    case 0x7F245A54u: goto label_7F245A54;
    case 0x7F245A58u: goto label_7F245A58;
    case 0x7F245A5Cu: goto label_7F245A5C;
    case 0x7F245A60u: goto label_7F245A60;
    case 0x7F245A64u: goto label_7F245A64;
    case 0x7F245A68u: goto label_7F245A68;
    case 0x7F245A6Cu: goto label_7F245A6C;
    case 0x7F245A70u: goto label_7F245A70;
    case 0x7F245A74u: goto label_7F245A74;
    case 0x7F245A78u: goto label_7F245A78;
    case 0x7F245A7Cu: goto label_7F245A7C;
    case 0x7F245A80u: goto label_7F245A80;
    case 0x7F245A84u: goto label_7F245A84;
    case 0x7F245A88u: goto label_7F245A88;
    case 0x7F245A8Cu: goto label_7F245A8C;
    case 0x7F245A90u: goto label_7F245A90;
    case 0x7F245A94u: goto label_7F245A94;
    case 0x7F245A98u: goto label_7F245A98;
    case 0x7F245A9Cu: goto label_7F245A9C;
    case 0x7F245AA0u: goto label_7F245AA0;
    case 0x7F245AA4u: goto label_7F245AA4;
    case 0x7F245AA8u: goto label_7F245AA8;
    case 0x7F245AACu: goto label_7F245AAC;
    case 0x7F245AB0u: goto label_7F245AB0;
    case 0x7F245AB4u: goto label_7F245AB4;
    case 0x7F245AB8u: goto label_7F245AB8;
    case 0x7F245ABCu: goto label_7F245ABC;
    case 0x7F245AC0u: goto label_7F245AC0;
    case 0x7F245AC4u: goto label_7F245AC4;
    case 0x7F245AC8u: goto label_7F245AC8;
    case 0x7F245ACCu: goto label_7F245ACC;
    case 0x7F245AD0u: goto label_7F245AD0;
    case 0x7F245AD4u: goto label_7F245AD4;
    case 0x7F245AD8u: goto label_7F245AD8;
    case 0x7F245ADCu: goto label_7F245ADC;
    case 0x7F245AE0u: goto label_7F245AE0;
    case 0x7F245AE4u: goto label_7F245AE4;
    case 0x7F245AE8u: goto label_7F245AE8;
    case 0x7F245AECu: goto label_7F245AEC;
    case 0x7F245AF0u: goto label_7F245AF0;
    case 0x7F245AF4u: goto label_7F245AF4;
    case 0x7F245AF8u: goto label_7F245AF8;
    case 0x7F245AFCu: goto label_7F245AFC;
    case 0x7F245B00u: goto label_7F245B00;
    case 0x7F245B04u: goto label_7F245B04;
    case 0x7F245B08u: goto label_7F245B08;
    case 0x7F245B0Cu: goto label_7F245B0C;
    case 0x7F245B10u: goto label_7F245B10;
    case 0x7F245B14u: goto label_7F245B14;
    case 0x7F245B18u: goto label_7F245B18;
    case 0x7F245B1Cu: goto label_7F245B1C;
    case 0x7F245B20u: goto label_7F245B20;
    case 0x7F245B24u: goto label_7F245B24;
    case 0x7F245B28u: goto label_7F245B28;
    case 0x7F245B2Cu: goto label_7F245B2C;
    case 0x7F245B30u: goto label_7F245B30;
    case 0x7F245B34u: goto label_7F245B34;
    case 0x7F245B38u: goto label_7F245B38;
    case 0x7F245B3Cu: goto label_7F245B3C;
    case 0x7F245B40u: goto label_7F245B40;
    case 0x7F245B44u: goto label_7F245B44;
    case 0x7F245B48u: goto label_7F245B48;
    case 0x7F245B4Cu: goto label_7F245B4C;
    case 0x7F245B50u: goto label_7F245B50;
    case 0x7F245B54u: goto label_7F245B54;
    case 0x7F245B58u: goto label_7F245B58;
    case 0x7F245B5Cu: goto label_7F245B5C;
    case 0x7F245B60u: goto label_7F245B60;
    case 0x7F245B64u: goto label_7F245B64;
    case 0x7F245B68u: goto label_7F245B68;
    case 0x7F245B6Cu: goto label_7F245B6C;
    case 0x7F245B70u: goto label_7F245B70;
    case 0x7F245B74u: goto label_7F245B74;
    case 0x7F245B78u: goto label_7F245B78;
    case 0x7F245B7Cu: goto label_7F245B7C;
    case 0x7F245B80u: goto label_7F245B80;
    case 0x7F245B84u: goto label_7F245B84;
    case 0x7F245B88u: goto label_7F245B88;
    case 0x7F245B8Cu: goto label_7F245B8C;
    case 0x7F245B90u: goto label_7F245B90;
    case 0x7F245B94u: goto label_7F245B94;
    case 0x7F245B98u: goto label_7F245B98;
    case 0x7F245B9Cu: goto label_7F245B9C;
    case 0x7F245BA0u: goto label_7F245BA0;
    case 0x7F245BA4u: goto label_7F245BA4;
    case 0x7F245BA8u: goto label_7F245BA8;
    case 0x7F245BACu: goto label_7F245BAC;
    case 0x7F245BB0u: goto label_7F245BB0;
    case 0x7F245BB4u: goto label_7F245BB4;
    case 0x7F245BB8u: goto label_7F245BB8;
    case 0x7F245BBCu: goto label_7F245BBC;
    case 0x7F245BC0u: goto label_7F245BC0;
    case 0x7F245BC4u: goto label_7F245BC4;
    case 0x7F245BC8u: goto label_7F245BC8;
    case 0x7F245BCCu: goto label_7F245BCC;
    case 0x7F245BD0u: goto label_7F245BD0;
    case 0x7F245BD4u: goto label_7F245BD4;
    case 0x7F245BD8u: goto label_7F245BD8;
    case 0x7F245BDCu: goto label_7F245BDC;
    case 0x7F245BE0u: goto label_7F245BE0;
    case 0x7F245BE4u: goto label_7F245BE4;
    case 0x7F245BE8u: goto label_7F245BE8;
    case 0x7F245BECu: goto label_7F245BEC;
    case 0x7F245BF0u: goto label_7F245BF0;
    case 0x7F245BF4u: goto label_7F245BF4;
    case 0x7F245BF8u: goto label_7F245BF8;
    case 0x7F245BFCu: goto label_7F245BFC;
    case 0x7F245C00u: goto label_7F245C00;
    case 0x7F245C04u: goto label_7F245C04;
    case 0x7F245C08u: goto label_7F245C08;
    case 0x7F245C0Cu: goto label_7F245C0C;
    case 0x7F245C10u: goto label_7F245C10;
    case 0x7F245C14u: goto label_7F245C14;
    case 0x7F245C18u: goto label_7F245C18;
    case 0x7F245C1Cu: goto label_7F245C1C;
    case 0x7F245C20u: goto label_7F245C20;
    case 0x7F245C24u: goto label_7F245C24;
    case 0x7F245C28u: goto label_7F245C28;
    case 0x7F245C2Cu: goto label_7F245C2C;
    case 0x7F245C30u: goto label_7F245C30;
    case 0x7F245C34u: goto label_7F245C34;
    case 0x7F245C38u: goto label_7F245C38;
    case 0x7F245C3Cu: goto label_7F245C3C;
    case 0x7F245C40u: goto label_7F245C40;
    case 0x7F245C44u: goto label_7F245C44;
    case 0x7F245C48u: goto label_7F245C48;
    case 0x7F245C4Cu: goto label_7F245C4C;
    case 0x7F245C50u: goto label_7F245C50;
    case 0x7F245C54u: goto label_7F245C54;
    case 0x7F245C58u: goto label_7F245C58;
    case 0x7F245C5Cu: goto label_7F245C5C;
    case 0x7F245C60u: goto label_7F245C60;
    case 0x7F245C64u: goto label_7F245C64;
    case 0x7F245C68u: goto label_7F245C68;
    case 0x7F245C6Cu: goto label_7F245C6C;
    case 0x7F245C70u: goto label_7F245C70;
    case 0x7F245C74u: goto label_7F245C74;
    case 0x7F245C78u: goto label_7F245C78;
    case 0x7F245C7Cu: goto label_7F245C7C;
    case 0x7F245C80u: goto label_7F245C80;
    case 0x7F245C84u: goto label_7F245C84;
    case 0x7F245C88u: goto label_7F245C88;
    case 0x7F245C8Cu: goto label_7F245C8C;
    case 0x7F245C90u: goto label_7F245C90;
    case 0x7F245C94u: goto label_7F245C94;
    case 0x7F245C98u: goto label_7F245C98;
    case 0x7F245C9Cu: goto label_7F245C9C;
    case 0x7F245CA0u: goto label_7F245CA0;
    case 0x7F245CA4u: goto label_7F245CA4;
    case 0x7F245CA8u: goto label_7F245CA8;
    case 0x7F245CACu: goto label_7F245CAC;
    case 0x7F245CB0u: goto label_7F245CB0;
    case 0x7F245CB4u: goto label_7F245CB4;
    case 0x7F245CB8u: goto label_7F245CB8;
    case 0x7F245CBCu: goto label_7F245CBC;
    case 0x7F245CC0u: goto label_7F245CC0;
    case 0x7F245CC4u: goto label_7F245CC4;
    case 0x7F245CC8u: goto label_7F245CC8;
    case 0x7F245CCCu: goto label_7F245CCC;
    case 0x7F245CD0u: goto label_7F245CD0;
    case 0x7F245CD4u: goto label_7F245CD4;
    case 0x7F245CD8u: goto label_7F245CD8;
    case 0x7F245CDCu: goto label_7F245CDC;
    case 0x7F245CE0u: goto label_7F245CE0;
    case 0x7F245CE4u: goto label_7F245CE4;
    case 0x7F245CE8u: goto label_7F245CE8;
    case 0x7F245CECu: goto label_7F245CEC;
    case 0x7F245CF0u: goto label_7F245CF0;
    case 0x7F245CF4u: goto label_7F245CF4;
    case 0x7F245CF8u: goto label_7F245CF8;
    case 0x7F245CFCu: goto label_7F245CFC;
    case 0x7F245D00u: goto label_7F245D00;
    case 0x7F245D04u: goto label_7F245D04;
    case 0x7F245D08u: goto label_7F245D08;
    case 0x7F245D0Cu: goto label_7F245D0C;
    case 0x7F245D10u: goto label_7F245D10;
    case 0x7F245D14u: goto label_7F245D14;
    case 0x7F245D18u: goto label_7F245D18;
    case 0x7F245D1Cu: goto label_7F245D1C;
    case 0x7F245D20u: goto label_7F245D20;
    case 0x7F245D24u: goto label_7F245D24;
    case 0x7F245D28u: goto label_7F245D28;
    case 0x7F245D2Cu: goto label_7F245D2C;
    case 0x7F245D30u: goto label_7F245D30;
    case 0x7F245D34u: goto label_7F245D34;
    case 0x7F245D38u: goto label_7F245D38;
    case 0x7F245D3Cu: goto label_7F245D3C;
    case 0x7F245D40u: goto label_7F245D40;
    case 0x7F245D44u: goto label_7F245D44;
    case 0x7F245D48u: goto label_7F245D48;
    case 0x7F245D4Cu: goto label_7F245D4C;
    case 0x7F245D50u: goto label_7F245D50;
    case 0x7F245D54u: goto label_7F245D54;
    case 0x7F245D58u: goto label_7F245D58;
    case 0x7F245D5Cu: goto label_7F245D5C;
    case 0x7F245D60u: goto label_7F245D60;
    case 0x7F245D64u: goto label_7F245D64;
    case 0x7F245D68u: goto label_7F245D68;
    case 0x7F245D6Cu: goto label_7F245D6C;
    case 0x7F245D70u: goto label_7F245D70;
    case 0x7F245D74u: goto label_7F245D74;
    case 0x7F245D78u: goto label_7F245D78;
    case 0x7F245D7Cu: goto label_7F245D7C;
    case 0x7F245D80u: goto label_7F245D80;
    case 0x7F245D84u: goto label_7F245D84;
    case 0x7F245D88u: goto label_7F245D88;
    case 0x7F245D8Cu: goto label_7F245D8C;
    case 0x7F245D90u: goto label_7F245D90;
    case 0x7F245D94u: goto label_7F245D94;
    case 0x7F245D98u: goto label_7F245D98;
    case 0x7F245D9Cu: goto label_7F245D9C;
    case 0x7F245DA0u: goto label_7F245DA0;
    case 0x7F245DA4u: goto label_7F245DA4;
    case 0x7F245DA8u: goto label_7F245DA8;
    case 0x7F245DACu: goto label_7F245DAC;
    case 0x7F245DB0u: goto label_7F245DB0;
    case 0x7F245DB4u: goto label_7F245DB4;
    case 0x7F245DB8u: goto label_7F245DB8;
    case 0x7F245DBCu: goto label_7F245DBC;
    case 0x7F245DC0u: goto label_7F245DC0;
    case 0x7F245DC4u: goto label_7F245DC4;
    case 0x7F245DC8u: goto label_7F245DC8;
    case 0x7F245DCCu: goto label_7F245DCC;
    case 0x7F245DD0u: goto label_7F245DD0;
    case 0x7F245DD4u: goto label_7F245DD4;
    case 0x7F245DD8u: goto label_7F245DD8;
    case 0x7F245DDCu: goto label_7F245DDC;
    case 0x7F245DE0u: goto label_7F245DE0;
    case 0x7F245DE4u: goto label_7F245DE4;
    case 0x7F245DE8u: goto label_7F245DE8;
    case 0x7F245DECu: goto label_7F245DEC;
    case 0x7F245DF0u: goto label_7F245DF0;
    case 0x7F245DF4u: goto label_7F245DF4;
    case 0x7F245DF8u: goto label_7F245DF8;
    case 0x7F245DFCu: goto label_7F245DFC;
    case 0x7F245E00u: goto label_7F245E00;
    case 0x7F245E04u: goto label_7F245E04;
    case 0x7F245E08u: goto label_7F245E08;
    case 0x7F245E0Cu: goto label_7F245E0C;
    case 0x7F245E10u: goto label_7F245E10;
    case 0x7F245E14u: goto label_7F245E14;
    case 0x7F245E18u: goto label_7F245E18;
    case 0x7F245E1Cu: goto label_7F245E1C;
    case 0x7F245E20u: goto label_7F245E20;
    case 0x7F245E24u: goto label_7F245E24;
    case 0x7F245E28u: goto label_7F245E28;
    case 0x7F245E2Cu: goto label_7F245E2C;
    case 0x7F245E30u: goto label_7F245E30;
    case 0x7F245E34u: goto label_7F245E34;
    case 0x7F245E38u: goto label_7F245E38;
    case 0x7F245E3Cu: goto label_7F245E3C;
    case 0x7F245E40u: goto label_7F245E40;
    case 0x7F245E44u: goto label_7F245E44;
    case 0x7F245E48u: goto label_7F245E48;
    case 0x7F245E4Cu: goto label_7F245E4C;
    case 0x7F245E50u: goto label_7F245E50;
    case 0x7F245E54u: goto label_7F245E54;
    case 0x7F245E58u: goto label_7F245E58;
    case 0x7F245E5Cu: goto label_7F245E5C;
    case 0x7F245E60u: goto label_7F245E60;
    case 0x7F245E64u: goto label_7F245E64;
    case 0x7F245E68u: goto label_7F245E68;
    case 0x7F245E6Cu: goto label_7F245E6C;
    case 0x7F245E70u: goto label_7F245E70;
    case 0x7F245E74u: goto label_7F245E74;
    case 0x7F245E78u: goto label_7F245E78;
    case 0x7F245E7Cu: goto label_7F245E7C;
    case 0x7F245E80u: goto label_7F245E80;
    case 0x7F245E84u: goto label_7F245E84;
    case 0x7F245E88u: goto label_7F245E88;
    case 0x7F245E8Cu: goto label_7F245E8C;
    case 0x7F245E90u: goto label_7F245E90;
    case 0x7F245E94u: goto label_7F245E94;
    case 0x7F245E98u: goto label_7F245E98;
    case 0x7F245E9Cu: goto label_7F245E9C;
    case 0x7F245EA0u: goto label_7F245EA0;
    case 0x7F245EA4u: goto label_7F245EA4;
    case 0x7F245EA8u: goto label_7F245EA8;
    case 0x7F245EACu: goto label_7F245EAC;
    case 0x7F245EB0u: goto label_7F245EB0;
    case 0x7F245EB4u: goto label_7F245EB4;
    case 0x7F245EB8u: goto label_7F245EB8;
    case 0x7F245EBCu: goto label_7F245EBC;
    case 0x7F245EC0u: goto label_7F245EC0;
    case 0x7F245EC4u: goto label_7F245EC4;
    case 0x7F245EC8u: goto label_7F245EC8;
    case 0x7F245ECCu: goto label_7F245ECC;
    case 0x7F245ED0u: goto label_7F245ED0;
    case 0x7F245ED4u: goto label_7F245ED4;
    case 0x7F245ED8u: goto label_7F245ED8;
    case 0x7F245EDCu: goto label_7F245EDC;
    case 0x7F245EE0u: goto label_7F245EE0;
    case 0x7F245EE4u: goto label_7F245EE4;
    case 0x7F245EE8u: goto label_7F245EE8;
    case 0x7F245EECu: goto label_7F245EEC;
    case 0x7F245EF0u: goto label_7F245EF0;
    case 0x7F245EF4u: goto label_7F245EF4;
    case 0x7F245EF8u: goto label_7F245EF8;
    case 0x7F245EFCu: goto label_7F245EFC;
    case 0x7F245F00u: goto label_7F245F00;
    case 0x7F245F04u: goto label_7F245F04;
    case 0x7F245F08u: goto label_7F245F08;
    case 0x7F245F0Cu: goto label_7F245F0C;
    case 0x7F245F10u: goto label_7F245F10;
    case 0x7F245F14u: goto label_7F245F14;
    case 0x7F245F18u: goto label_7F245F18;
    case 0x7F245F1Cu: goto label_7F245F1C;
    case 0x7F245F20u: goto label_7F245F20;
    case 0x7F245F24u: goto label_7F245F24;
    case 0x7F245F28u: goto label_7F245F28;
    case 0x7F245F2Cu: goto label_7F245F2C;
    case 0x7F245F30u: goto label_7F245F30;
    case 0x7F245F34u: goto label_7F245F34;
    case 0x7F245F38u: goto label_7F245F38;
    case 0x7F245F3Cu: goto label_7F245F3C;
    case 0x7F245F40u: goto label_7F245F40;
    case 0x7F245F44u: goto label_7F245F44;
    case 0x7F245F48u: goto label_7F245F48;
    case 0x7F245F4Cu: goto label_7F245F4C;
    case 0x7F245F50u: goto label_7F245F50;
    case 0x7F245F54u: goto label_7F245F54;
    case 0x7F245F58u: goto label_7F245F58;
    case 0x7F245F5Cu: goto label_7F245F5C;
    case 0x7F245F60u: goto label_7F245F60;
    case 0x7F245F64u: goto label_7F245F64;
    case 0x7F245F68u: goto label_7F245F68;
    case 0x7F245F6Cu: goto label_7F245F6C;
    case 0x7F245F70u: goto label_7F245F70;
    case 0x7F245F74u: goto label_7F245F74;
    case 0x7F245F78u: goto label_7F245F78;
    case 0x7F245F7Cu: goto label_7F245F7C;
    case 0x7F245F80u: goto label_7F245F80;
    case 0x7F245F84u: goto label_7F245F84;
    case 0x7F245F88u: goto label_7F245F88;
    case 0x7F245F8Cu: goto label_7F245F8C;
    case 0x7F245F90u: goto label_7F245F90;
    case 0x7F245F94u: goto label_7F245F94;
    case 0x7F245F98u: goto label_7F245F98;
    case 0x7F245F9Cu: goto label_7F245F9C;
    case 0x7F245FA0u: goto label_7F245FA0;
    case 0x7F245FA4u: goto label_7F245FA4;
    case 0x7F245FA8u: goto label_7F245FA8;
    case 0x7F245FACu: goto label_7F245FAC;
    case 0x7F245FB0u: goto label_7F245FB0;
    case 0x7F245FB4u: goto label_7F245FB4;
    case 0x7F245FB8u: goto label_7F245FB8;
    case 0x7F245FBCu: goto label_7F245FBC;
    case 0x7F245FC0u: goto label_7F245FC0;
    case 0x7F245FC4u: goto label_7F245FC4;
    case 0x7F245FC8u: goto label_7F245FC8;
    case 0x7F245FCCu: goto label_7F245FCC;
    case 0x7F245FD0u: goto label_7F245FD0;
    case 0x7F245FD4u: goto label_7F245FD4;
    case 0x7F245FD8u: goto label_7F245FD8;
    case 0x7F245FDCu: goto label_7F245FDC;
    case 0x7F245FE0u: goto label_7F245FE0;
    case 0x7F245FE4u: goto label_7F245FE4;
    case 0x7F245FE8u: goto label_7F245FE8;
    case 0x7F245FECu: goto label_7F245FEC;
    case 0x7F245FF0u: goto label_7F245FF0;
    case 0x7F245FF4u: goto label_7F245FF4;
    case 0x7F245FF8u: goto label_7F245FF8;
    case 0x7F245FFCu: goto label_7F245FFC;
    case 0x7F246000u: goto label_7F246000;
    case 0x7F246004u: goto label_7F246004;
    case 0x7F246008u: goto label_7F246008;
    case 0x7F24600Cu: goto label_7F24600C;
    case 0x7F246010u: goto label_7F246010;
    case 0x7F246014u: goto label_7F246014;
    case 0x7F246018u: goto label_7F246018;
    case 0x7F24601Cu: goto label_7F24601C;
    case 0x7F246020u: goto label_7F246020;
    case 0x7F246024u: goto label_7F246024;
    case 0x7F246028u: goto label_7F246028;
    case 0x7F24602Cu: goto label_7F24602C;
    case 0x7F246030u: goto label_7F246030;
    case 0x7F246034u: goto label_7F246034;
    case 0x7F246038u: goto label_7F246038;
    case 0x7F24603Cu: goto label_7F24603C;
    case 0x7F246040u: goto label_7F246040;
    case 0x7F246044u: goto label_7F246044;
    case 0x7F246048u: goto label_7F246048;
    case 0x7F24604Cu: goto label_7F24604C;
    case 0x7F246050u: goto label_7F246050;
    case 0x7F246054u: goto label_7F246054;
    case 0x7F246058u: goto label_7F246058;
    case 0x7F24605Cu: goto label_7F24605C;
    case 0x7F246060u: goto label_7F246060;
    case 0x7F246064u: goto label_7F246064;
    case 0x7F246068u: goto label_7F246068;
    case 0x7F24606Cu: goto label_7F24606C;
    case 0x7F246070u: goto label_7F246070;
    case 0x7F246074u: goto label_7F246074;
    case 0x7F246078u: goto label_7F246078;
    case 0x7F24607Cu: goto label_7F24607C;
    case 0x7F246080u: goto label_7F246080;
    case 0x7F246084u: goto label_7F246084;
    case 0x7F246088u: goto label_7F246088;
    case 0x7F24608Cu: goto label_7F24608C;
    case 0x7F246090u: goto label_7F246090;
    case 0x7F246094u: goto label_7F246094;
    case 0x7F246098u: goto label_7F246098;
    case 0x7F24609Cu: goto label_7F24609C;
    case 0x7F2460A0u: goto label_7F2460A0;
    case 0x7F2460A4u: goto label_7F2460A4;
    case 0x7F2460A8u: goto label_7F2460A8;
    case 0x7F2460ACu: goto label_7F2460AC;
    case 0x7F2460B0u: goto label_7F2460B0;
    case 0x7F2460B4u: goto label_7F2460B4;
    case 0x7F2460B8u: goto label_7F2460B8;
    case 0x7F2460BCu: goto label_7F2460BC;
    case 0x7F2460C0u: goto label_7F2460C0;
    case 0x7F2460C4u: goto label_7F2460C4;
    case 0x7F2460C8u: goto label_7F2460C8;
    case 0x7F2460CCu: goto label_7F2460CC;
    case 0x7F2460D0u: goto label_7F2460D0;
    case 0x7F2460D4u: goto label_7F2460D4;
    case 0x7F2460D8u: goto label_7F2460D8;
    case 0x7F2460DCu: goto label_7F2460DC;
    case 0x7F2460E0u: goto label_7F2460E0;
    case 0x7F2460E4u: goto label_7F2460E4;
    case 0x7F2460E8u: goto label_7F2460E8;
    case 0x7F2460ECu: goto label_7F2460EC;
    case 0x7F2460F0u: goto label_7F2460F0;
    case 0x7F2460F4u: goto label_7F2460F4;
    case 0x7F2460F8u: goto label_7F2460F8;
    case 0x7F2460FCu: goto label_7F2460FC;
    case 0x7F246100u: goto label_7F246100;
    case 0x7F246104u: goto label_7F246104;
    case 0x7F246108u: goto label_7F246108;
    case 0x7F24610Cu: goto label_7F24610C;
    case 0x7F246110u: goto label_7F246110;
    case 0x7F246114u: goto label_7F246114;
    case 0x7F246118u: goto label_7F246118;
    case 0x7F24611Cu: goto label_7F24611C;
    case 0x7F246120u: goto label_7F246120;
    case 0x7F246124u: goto label_7F246124;
    case 0x7F246128u: goto label_7F246128;
    case 0x7F24612Cu: goto label_7F24612C;
    case 0x7F246130u: goto label_7F246130;
    case 0x7F246134u: goto label_7F246134;
    case 0x7F246138u: goto label_7F246138;
    case 0x7F24613Cu: goto label_7F24613C;
    case 0x7F246140u: goto label_7F246140;
    case 0x7F246144u: goto label_7F246144;
    case 0x7F246148u: goto label_7F246148;
    case 0x7F24614Cu: goto label_7F24614C;
    case 0x7F246150u: goto label_7F246150;
    case 0x7F246154u: goto label_7F246154;
    case 0x7F246158u: goto label_7F246158;
    case 0x7F24615Cu: goto label_7F24615C;
    case 0x7F246160u: goto label_7F246160;
    case 0x7F246164u: goto label_7F246164;
    case 0x7F246168u: goto label_7F246168;
    case 0x7F24616Cu: goto label_7F24616C;
    case 0x7F246170u: goto label_7F246170;
    case 0x7F246174u: goto label_7F246174;
    case 0x7F246178u: goto label_7F246178;
    case 0x7F24617Cu: goto label_7F24617C;
    case 0x7F246180u: goto label_7F246180;
    case 0x7F246184u: goto label_7F246184;
    case 0x7F246188u: goto label_7F246188;
    case 0x7F24618Cu: goto label_7F24618C;
    case 0x7F246190u: goto label_7F246190;
    case 0x7F246194u: goto label_7F246194;
    case 0x7F246198u: goto label_7F246198;
    case 0x7F24619Cu: goto label_7F24619C;
    case 0x7F2461A0u: goto label_7F2461A0;
    case 0x7F2461A4u: goto label_7F2461A4;
    case 0x7F2461A8u: goto label_7F2461A8;
    case 0x7F2461ACu: goto label_7F2461AC;
    case 0x7F2461B0u: goto label_7F2461B0;
    case 0x7F2461B4u: goto label_7F2461B4;
    case 0x7F2461B8u: goto label_7F2461B8;
    case 0x7F2461BCu: goto label_7F2461BC;
    case 0x7F2461C0u: goto label_7F2461C0;
    case 0x7F2461C4u: goto label_7F2461C4;
    case 0x7F2461C8u: goto label_7F2461C8;
    case 0x7F2461CCu: goto label_7F2461CC;
    case 0x7F2461D0u: goto label_7F2461D0;
    case 0x7F2461D4u: goto label_7F2461D4;
    case 0x7F2461D8u: goto label_7F2461D8;
    case 0x7F2461DCu: goto label_7F2461DC;
    case 0x7F2461E0u: goto label_7F2461E0;
    case 0x7F2461E4u: goto label_7F2461E4;
    case 0x7F2461E8u: goto label_7F2461E8;
    case 0x7F2461ECu: goto label_7F2461EC;
    case 0x7F2461F0u: goto label_7F2461F0;
    case 0x7F2461F4u: goto label_7F2461F4;
    case 0x7F2461F8u: goto label_7F2461F8;
    case 0x7F2461FCu: goto label_7F2461FC;
    case 0x7F246200u: goto label_7F246200;
    case 0x7F246204u: goto label_7F246204;
    case 0x7F246208u: goto label_7F246208;
    case 0x7F24620Cu: goto label_7F24620C;
    case 0x7F246210u: goto label_7F246210;
    case 0x7F246214u: goto label_7F246214;
    case 0x7F246218u: goto label_7F246218;
    case 0x7F24621Cu: goto label_7F24621C;
    case 0x7F246220u: goto label_7F246220;
    case 0x7F246224u: goto label_7F246224;
    case 0x7F246228u: goto label_7F246228;
    case 0x7F24622Cu: goto label_7F24622C;
    case 0x7F246230u: goto label_7F246230;
    case 0x7F246234u: goto label_7F246234;
    case 0x7F246238u: goto label_7F246238;
    case 0x7F24623Cu: goto label_7F24623C;
    case 0x7F246240u: goto label_7F246240;
    case 0x7F246244u: goto label_7F246244;
    case 0x7F246248u: goto label_7F246248;
    case 0x7F24624Cu: goto label_7F24624C;
    case 0x7F246250u: goto label_7F246250;
    case 0x7F246254u: goto label_7F246254;
    case 0x7F246258u: goto label_7F246258;
    case 0x7F24625Cu: goto label_7F24625C;
    case 0x7F246260u: goto label_7F246260;
    case 0x7F246264u: goto label_7F246264;
    case 0x7F246268u: goto label_7F246268;
    case 0x7F24626Cu: goto label_7F24626C;
    case 0x7F246270u: goto label_7F246270;
    case 0x7F246274u: goto label_7F246274;
    case 0x7F246278u: goto label_7F246278;
    case 0x7F24627Cu: goto label_7F24627C;
    case 0x7F246280u: goto label_7F246280;
    case 0x7F246284u: goto label_7F246284;
    case 0x7F246288u: goto label_7F246288;
    case 0x7F24628Cu: goto label_7F24628C;
    case 0x7F246290u: goto label_7F246290;
    case 0x7F246294u: goto label_7F246294;
    case 0x7F246298u: goto label_7F246298;
    case 0x7F24629Cu: goto label_7F24629C;
    case 0x7F2462A0u: goto label_7F2462A0;
    case 0x7F2462A4u: goto label_7F2462A4;
    case 0x7F2462A8u: goto label_7F2462A8;
    case 0x7F2462ACu: goto label_7F2462AC;
    case 0x7F2462B0u: goto label_7F2462B0;
    case 0x7F2462B4u: goto label_7F2462B4;
    case 0x7F2462B8u: goto label_7F2462B8;
    case 0x7F2462BCu: goto label_7F2462BC;
    case 0x7F2462C0u: goto label_7F2462C0;
    case 0x7F2462C4u: goto label_7F2462C4;
    case 0x7F2462C8u: goto label_7F2462C8;
    case 0x7F2462CCu: goto label_7F2462CC;
    case 0x7F2462D0u: goto label_7F2462D0;
    case 0x7F2462D4u: goto label_7F2462D4;
    case 0x7F2462D8u: goto label_7F2462D8;
    case 0x7F2462DCu: goto label_7F2462DC;
    case 0x7F2462E0u: goto label_7F2462E0;
    case 0x7F2462E4u: goto label_7F2462E4;
    case 0x7F2462E8u: goto label_7F2462E8;
    case 0x7F2462ECu: goto label_7F2462EC;
    case 0x7F2462F0u: goto label_7F2462F0;
    case 0x7F2462F4u: goto label_7F2462F4;
    case 0x7F2462F8u: goto label_7F2462F8;
    case 0x7F2462FCu: goto label_7F2462FC;
    case 0x7F246300u: goto label_7F246300;
    case 0x7F246304u: goto label_7F246304;
    case 0x7F246308u: goto label_7F246308;
    case 0x7F24630Cu: goto label_7F24630C;
    case 0x7F246310u: goto label_7F246310;
    case 0x7F246314u: goto label_7F246314;
    case 0x7F246318u: goto label_7F246318;
    case 0x7F24631Cu: goto label_7F24631C;
    case 0x7F246320u: goto label_7F246320;
    case 0x7F246324u: goto label_7F246324;
    case 0x7F246328u: goto label_7F246328;
    case 0x7F24632Cu: goto label_7F24632C;
    case 0x7F246330u: goto label_7F246330;
    case 0x7F246334u: goto label_7F246334;
    case 0x7F246338u: goto label_7F246338;
    case 0x7F24633Cu: goto label_7F24633C;
    case 0x7F246340u: goto label_7F246340;
    case 0x7F246344u: goto label_7F246344;
    case 0x7F246348u: goto label_7F246348;
    case 0x7F24634Cu: goto label_7F24634C;
    case 0x7F246350u: goto label_7F246350;
    case 0x7F246354u: goto label_7F246354;
    case 0x7F246358u: goto label_7F246358;
    case 0x7F24635Cu: goto label_7F24635C;
    case 0x7F246360u: goto label_7F246360;
    case 0x7F246364u: goto label_7F246364;
    case 0x7F246368u: goto label_7F246368;
    case 0x7F24636Cu: goto label_7F24636C;
    case 0x7F246370u: goto label_7F246370;
    case 0x7F246374u: goto label_7F246374;
    case 0x7F246378u: goto label_7F246378;
    case 0x7F24637Cu: goto label_7F24637C;
    case 0x7F246380u: goto label_7F246380;
    case 0x7F246384u: goto label_7F246384;
    case 0x7F246388u: goto label_7F246388;
    case 0x7F24638Cu: goto label_7F24638C;
    case 0x7F246390u: goto label_7F246390;
    case 0x7F246394u: goto label_7F246394;
    case 0x7F246398u: goto label_7F246398;
    case 0x7F24639Cu: goto label_7F24639C;
    case 0x7F2463A0u: goto label_7F2463A0;
    case 0x7F2463A4u: goto label_7F2463A4;
    case 0x7F2463A8u: goto label_7F2463A8;
    case 0x7F2463ACu: goto label_7F2463AC;
    case 0x7F2463B0u: goto label_7F2463B0;
    case 0x7F2463B4u: goto label_7F2463B4;
    case 0x7F2463B8u: goto label_7F2463B8;
    case 0x7F2463BCu: goto label_7F2463BC;
    case 0x7F2463C0u: goto label_7F2463C0;
    case 0x7F2463C4u: goto label_7F2463C4;
    case 0x7F2463C8u: goto label_7F2463C8;
    case 0x7F2463CCu: goto label_7F2463CC;
    case 0x7F2463D0u: goto label_7F2463D0;
    case 0x7F2463D4u: goto label_7F2463D4;
    case 0x7F2463D8u: goto label_7F2463D8;
    case 0x7F2463DCu: goto label_7F2463DC;
    case 0x7F2463E0u: goto label_7F2463E0;
    case 0x7F2463E4u: goto label_7F2463E4;
    case 0x7F2463E8u: goto label_7F2463E8;
    case 0x7F2463ECu: goto label_7F2463EC;
    case 0x7F2463F0u: goto label_7F2463F0;
    case 0x7F2463F4u: goto label_7F2463F4;
    case 0x7F2463F8u: goto label_7F2463F8;
    case 0x7F2463FCu: goto label_7F2463FC;
    case 0x7F246400u: goto label_7F246400;
    case 0x7F246404u: goto label_7F246404;
    case 0x7F246408u: goto label_7F246408;
    case 0x7F24640Cu: goto label_7F24640C;
    case 0x7F246410u: goto label_7F246410;
    case 0x7F246414u: goto label_7F246414;
    case 0x7F246418u: goto label_7F246418;
    case 0x7F24641Cu: goto label_7F24641C;
    case 0x7F246420u: goto label_7F246420;
    case 0x7F246424u: goto label_7F246424;
    case 0x7F246428u: goto label_7F246428;
    case 0x7F24642Cu: goto label_7F24642C;
    case 0x7F246430u: goto label_7F246430;
    case 0x7F246434u: goto label_7F246434;
    case 0x7F246438u: goto label_7F246438;
    case 0x7F24643Cu: goto label_7F24643C;
    case 0x7F246440u: goto label_7F246440;
    case 0x7F246444u: goto label_7F246444;
    case 0x7F246448u: goto label_7F246448;
    case 0x7F24644Cu: goto label_7F24644C;
    case 0x7F246450u: goto label_7F246450;
    case 0x7F246454u: goto label_7F246454;
    case 0x7F246458u: goto label_7F246458;
    case 0x7F24645Cu: goto label_7F24645C;
    case 0x7F246460u: goto label_7F246460;
    case 0x7F246464u: goto label_7F246464;
    case 0x7F246468u: goto label_7F246468;
    case 0x7F24646Cu: goto label_7F24646C;
    case 0x7F246470u: goto label_7F246470;
    case 0x7F246474u: goto label_7F246474;
    case 0x7F246478u: goto label_7F246478;
    case 0x7F24647Cu: goto label_7F24647C;
    case 0x7F246480u: goto label_7F246480;
    case 0x7F246484u: goto label_7F246484;
    case 0x7F246488u: goto label_7F246488;
    case 0x7F24648Cu: goto label_7F24648C;
    case 0x7F246490u: goto label_7F246490;
    case 0x7F246494u: goto label_7F246494;
    case 0x7F246498u: goto label_7F246498;
    case 0x7F24649Cu: goto label_7F24649C;
    case 0x7F2464A0u: goto label_7F2464A0;
    case 0x7F2464A4u: goto label_7F2464A4;
    case 0x7F2464A8u: goto label_7F2464A8;
    case 0x7F2464ACu: goto label_7F2464AC;
    case 0x7F2464B0u: goto label_7F2464B0;
    case 0x7F2464B4u: goto label_7F2464B4;
    case 0x7F2464B8u: goto label_7F2464B8;
    case 0x7F2464BCu: goto label_7F2464BC;
    case 0x7F2464C0u: goto label_7F2464C0;
    case 0x7F2464C4u: goto label_7F2464C4;
    case 0x7F2464C8u: goto label_7F2464C8;
    case 0x7F2464CCu: goto label_7F2464CC;
    case 0x7F2464D0u: goto label_7F2464D0;
    case 0x7F2464D4u: goto label_7F2464D4;
    case 0x7F2464D8u: goto label_7F2464D8;
    case 0x7F2464DCu: goto label_7F2464DC;
    case 0x7F2464E0u: goto label_7F2464E0;
    case 0x7F2464E4u: goto label_7F2464E4;
    case 0x7F2464E8u: goto label_7F2464E8;
    case 0x7F2464ECu: goto label_7F2464EC;
    case 0x7F2464F0u: goto label_7F2464F0;
    case 0x7F2464F4u: goto label_7F2464F4;
    case 0x7F2464F8u: goto label_7F2464F8;
    case 0x7F2464FCu: goto label_7F2464FC;
    case 0x7F246500u: goto label_7F246500;
    case 0x7F246504u: goto label_7F246504;
    case 0x7F246508u: goto label_7F246508;
    case 0x7F24650Cu: goto label_7F24650C;
    case 0x7F246510u: goto label_7F246510;
    case 0x7F246514u: goto label_7F246514;
    case 0x7F246518u: goto label_7F246518;
    case 0x7F24651Cu: goto label_7F24651C;
    case 0x7F246520u: goto label_7F246520;
    case 0x7F246524u: goto label_7F246524;
    case 0x7F246528u: goto label_7F246528;
    case 0x7F24652Cu: goto label_7F24652C;
    case 0x7F246530u: goto label_7F246530;
    case 0x7F246534u: goto label_7F246534;
    case 0x7F246538u: goto label_7F246538;
    case 0x7F24653Cu: goto label_7F24653C;
    case 0x7F246540u: goto label_7F246540;
    case 0x7F246544u: goto label_7F246544;
    case 0x7F246548u: goto label_7F246548;
    case 0x7F24654Cu: goto label_7F24654C;
    case 0x7F246550u: goto label_7F246550;
    case 0x7F246554u: goto label_7F246554;
    case 0x7F246558u: goto label_7F246558;
    case 0x7F24655Cu: goto label_7F24655C;
    case 0x7F246560u: goto label_7F246560;
    case 0x7F246564u: goto label_7F246564;
    case 0x7F246568u: goto label_7F246568;
    case 0x7F24656Cu: goto label_7F24656C;
    case 0x7F246570u: goto label_7F246570;
    case 0x7F246574u: goto label_7F246574;
    case 0x7F246578u: goto label_7F246578;
    case 0x7F24657Cu: goto label_7F24657C;
    case 0x7F246580u: goto label_7F246580;
    case 0x7F246584u: goto label_7F246584;
    case 0x7F246588u: goto label_7F246588;
    case 0x7F24658Cu: goto label_7F24658C;
    case 0x7F246590u: goto label_7F246590;
    case 0x7F246594u: goto label_7F246594;
    case 0x7F246598u: goto label_7F246598;
    case 0x7F24659Cu: goto label_7F24659C;
    case 0x7F2465A0u: goto label_7F2465A0;
    case 0x7F2465A4u: goto label_7F2465A4;
    case 0x7F2465A8u: goto label_7F2465A8;
    case 0x7F2465ACu: goto label_7F2465AC;
    case 0x7F2465B0u: goto label_7F2465B0;
    case 0x7F2465B4u: goto label_7F2465B4;
    case 0x7F2465B8u: goto label_7F2465B8;
    case 0x7F2465BCu: goto label_7F2465BC;
    case 0x7F2465C0u: goto label_7F2465C0;
    case 0x7F2465C4u: goto label_7F2465C4;
    case 0x7F2465C8u: goto label_7F2465C8;
    case 0x7F2465CCu: goto label_7F2465CC;
    case 0x7F2465D0u: goto label_7F2465D0;
    case 0x7F2465D4u: goto label_7F2465D4;
    case 0x7F2465D8u: goto label_7F2465D8;
    case 0x7F2465DCu: goto label_7F2465DC;
    case 0x7F2465E0u: goto label_7F2465E0;
    case 0x7F2465E4u: goto label_7F2465E4;
    case 0x7F2465E8u: goto label_7F2465E8;
    case 0x7F2465ECu: goto label_7F2465EC;
    case 0x7F2465F0u: goto label_7F2465F0;
    case 0x7F2465F4u: goto label_7F2465F4;
    case 0x7F2465F8u: goto label_7F2465F8;
    case 0x7F2465FCu: goto label_7F2465FC;
    case 0x7F246600u: goto label_7F246600;
    case 0x7F246604u: goto label_7F246604;
    case 0x7F246608u: goto label_7F246608;
    case 0x7F24660Cu: goto label_7F24660C;
    case 0x7F246610u: goto label_7F246610;
    case 0x7F246614u: goto label_7F246614;
    case 0x7F246618u: goto label_7F246618;
    case 0x7F24661Cu: goto label_7F24661C;
    case 0x7F246620u: goto label_7F246620;
    case 0x7F246624u: goto label_7F246624;
    case 0x7F246628u: goto label_7F246628;
    case 0x7F24662Cu: goto label_7F24662C;
    case 0x7F246630u: goto label_7F246630;
    case 0x7F246634u: goto label_7F246634;
    case 0x7F246638u: goto label_7F246638;
    case 0x7F24663Cu: goto label_7F24663C;
    case 0x7F246640u: goto label_7F246640;
    case 0x7F246644u: goto label_7F246644;
    case 0x7F246648u: goto label_7F246648;
    case 0x7F24664Cu: goto label_7F24664C;
    case 0x7F246650u: goto label_7F246650;
    case 0x7F246654u: goto label_7F246654;
    case 0x7F246658u: goto label_7F246658;
    case 0x7F24665Cu: goto label_7F24665C;
    case 0x7F246660u: goto label_7F246660;
    case 0x7F246664u: goto label_7F246664;
    case 0x7F246668u: goto label_7F246668;
    case 0x7F24666Cu: goto label_7F24666C;
    case 0x7F246670u: goto label_7F246670;
    case 0x7F246674u: goto label_7F246674;
    case 0x7F246678u: goto label_7F246678;
    case 0x7F24667Cu: goto label_7F24667C;
    case 0x7F246680u: goto label_7F246680;
    case 0x7F246684u: goto label_7F246684;
    case 0x7F246688u: goto label_7F246688;
    case 0x7F24668Cu: goto label_7F24668C;
    case 0x7F246690u: goto label_7F246690;
    case 0x7F246694u: goto label_7F246694;
    case 0x7F246698u: goto label_7F246698;
    case 0x7F24669Cu: goto label_7F24669C;
    case 0x7F2466A0u: goto label_7F2466A0;
    case 0x7F2466A4u: goto label_7F2466A4;
    case 0x7F2466A8u: goto label_7F2466A8;
    case 0x7F2466ACu: goto label_7F2466AC;
    case 0x7F2466B0u: goto label_7F2466B0;
    case 0x7F2466B4u: goto label_7F2466B4;
    case 0x7F2466B8u: goto label_7F2466B8;
    case 0x7F2466BCu: goto label_7F2466BC;
    case 0x7F2466C0u: goto label_7F2466C0;
    case 0x7F2466C4u: goto label_7F2466C4;
    case 0x7F2466C8u: goto label_7F2466C8;
    case 0x7F2466CCu: goto label_7F2466CC;
    case 0x7F2466D0u: goto label_7F2466D0;
    case 0x7F2466D4u: goto label_7F2466D4;
    case 0x7F2466D8u: goto label_7F2466D8;
    case 0x7F2466DCu: goto label_7F2466DC;
    case 0x7F2466E0u: goto label_7F2466E0;
    case 0x7F2466E4u: goto label_7F2466E4;
    case 0x7F2466E8u: goto label_7F2466E8;
    case 0x7F2466ECu: goto label_7F2466EC;
    case 0x7F2466F0u: goto label_7F2466F0;
    case 0x7F2466F4u: goto label_7F2466F4;
    case 0x7F2466F8u: goto label_7F2466F8;
    case 0x7F2466FCu: goto label_7F2466FC;
    case 0x7F246700u: goto label_7F246700;
    case 0x7F246704u: goto label_7F246704;
    case 0x7F246708u: goto label_7F246708;
    case 0x7F24670Cu: goto label_7F24670C;
    case 0x7F246710u: goto label_7F246710;
    case 0x7F246714u: goto label_7F246714;
    case 0x7F246718u: goto label_7F246718;
    case 0x7F24671Cu: goto label_7F24671C;
    case 0x7F246720u: goto label_7F246720;
    case 0x7F246724u: goto label_7F246724;
    case 0x7F246728u: goto label_7F246728;
    case 0x7F24672Cu: goto label_7F24672C;
    case 0x7F246730u: goto label_7F246730;
    case 0x7F246734u: goto label_7F246734;
    case 0x7F246738u: goto label_7F246738;
    case 0x7F24673Cu: goto label_7F24673C;
    case 0x7F246740u: goto label_7F246740;
    case 0x7F246744u: goto label_7F246744;
    case 0x7F246748u: goto label_7F246748;
    case 0x7F24674Cu: goto label_7F24674C;
    case 0x7F246750u: goto label_7F246750;
    case 0x7F246754u: goto label_7F246754;
    case 0x7F246758u: goto label_7F246758;
    case 0x7F24675Cu: goto label_7F24675C;
    case 0x7F246760u: goto label_7F246760;
    case 0x7F246764u: goto label_7F246764;
    case 0x7F246768u: goto label_7F246768;
    case 0x7F24676Cu: goto label_7F24676C;
    case 0x7F246770u: goto label_7F246770;
    case 0x7F246774u: goto label_7F246774;
    case 0x7F246778u: goto label_7F246778;
    case 0x7F24677Cu: goto label_7F24677C;
    case 0x7F246780u: goto label_7F246780;
    case 0x7F246784u: goto label_7F246784;
    case 0x7F246788u: goto label_7F246788;
    case 0x7F24678Cu: goto label_7F24678C;
    case 0x7F246790u: goto label_7F246790;
    case 0x7F246794u: goto label_7F246794;
    case 0x7F246798u: goto label_7F246798;
    case 0x7F24679Cu: goto label_7F24679C;
    case 0x7F2467A0u: goto label_7F2467A0;
    case 0x7F2467A4u: goto label_7F2467A4;
    case 0x7F2467A8u: goto label_7F2467A8;
    case 0x7F2467ACu: goto label_7F2467AC;
    case 0x7F2467B0u: goto label_7F2467B0;
    case 0x7F2467B4u: goto label_7F2467B4;
    case 0x7F2467B8u: goto label_7F2467B8;
    case 0x7F2467BCu: goto label_7F2467BC;
    case 0x7F2467C0u: goto label_7F2467C0;
    case 0x7F2467C4u: goto label_7F2467C4;
    case 0x7F2467C8u: goto label_7F2467C8;
    case 0x7F2467CCu: goto label_7F2467CC;
    case 0x7F2467D0u: goto label_7F2467D0;
    case 0x7F2467D4u: goto label_7F2467D4;
    case 0x7F2467D8u: goto label_7F2467D8;
    case 0x7F2467DCu: goto label_7F2467DC;
    case 0x7F2467E0u: goto label_7F2467E0;
    case 0x7F2467E4u: goto label_7F2467E4;
    case 0x7F2467E8u: goto label_7F2467E8;
    case 0x7F2467ECu: goto label_7F2467EC;
    case 0x7F2467F0u: goto label_7F2467F0;
    case 0x7F2467F4u: goto label_7F2467F4;
    case 0x7F2467F8u: goto label_7F2467F8;
    case 0x7F2467FCu: goto label_7F2467FC;
    case 0x7F246800u: goto label_7F246800;
    case 0x7F246804u: goto label_7F246804;
    case 0x7F246808u: goto label_7F246808;
    case 0x7F24680Cu: goto label_7F24680C;
    case 0x7F246810u: goto label_7F246810;
    case 0x7F246814u: goto label_7F246814;
    case 0x7F246818u: goto label_7F246818;
    case 0x7F24681Cu: goto label_7F24681C;
    case 0x7F246820u: goto label_7F246820;
    case 0x7F246824u: goto label_7F246824;
    case 0x7F246828u: goto label_7F246828;
    case 0x7F24682Cu: goto label_7F24682C;
    case 0x7F246830u: goto label_7F246830;
    case 0x7F246834u: goto label_7F246834;
    case 0x7F246838u: goto label_7F246838;
    case 0x7F24683Cu: goto label_7F24683C;
    case 0x7F246840u: goto label_7F246840;
    case 0x7F246844u: goto label_7F246844;
    case 0x7F246848u: goto label_7F246848;
    case 0x7F24684Cu: goto label_7F24684C;
    case 0x7F246850u: goto label_7F246850;
    case 0x7F246854u: goto label_7F246854;
    case 0x7F246858u: goto label_7F246858;
    case 0x7F24685Cu: goto label_7F24685C;
    case 0x7F246860u: goto label_7F246860;
    case 0x7F246864u: goto label_7F246864;
    case 0x7F246868u: goto label_7F246868;
    case 0x7F24686Cu: goto label_7F24686C;
    case 0x7F246870u: goto label_7F246870;
    case 0x7F246874u: goto label_7F246874;
    case 0x7F246878u: goto label_7F246878;
    case 0x7F24687Cu: goto label_7F24687C;
    case 0x7F246880u: goto label_7F246880;
    case 0x7F246884u: goto label_7F246884;
    case 0x7F246888u: goto label_7F246888;
    case 0x7F24688Cu: goto label_7F24688C;
    case 0x7F246890u: goto label_7F246890;
    case 0x7F246894u: goto label_7F246894;
    case 0x7F246898u: goto label_7F246898;
    case 0x7F24689Cu: goto label_7F24689C;
    case 0x7F2468A0u: goto label_7F2468A0;
    case 0x7F2468A4u: goto label_7F2468A4;
    case 0x7F2468A8u: goto label_7F2468A8;
    case 0x7F2468ACu: goto label_7F2468AC;
    case 0x7F2468B0u: goto label_7F2468B0;
    case 0x7F2468B4u: goto label_7F2468B4;
    case 0x7F2468B8u: goto label_7F2468B8;
    case 0x7F2468BCu: goto label_7F2468BC;
    case 0x7F2468C0u: goto label_7F2468C0;
    case 0x7F2468C4u: goto label_7F2468C4;
    case 0x7F2468C8u: goto label_7F2468C8;
    case 0x7F2468CCu: goto label_7F2468CC;
    case 0x7F2468D0u: goto label_7F2468D0;
    case 0x7F2468D4u: goto label_7F2468D4;
    case 0x7F2468D8u: goto label_7F2468D8;
    case 0x7F2468DCu: goto label_7F2468DC;
    case 0x7F2468E0u: goto label_7F2468E0;
    case 0x7F2468E4u: goto label_7F2468E4;
    case 0x7F2468E8u: goto label_7F2468E8;
    case 0x7F2468ECu: goto label_7F2468EC;
    case 0x7F2468F0u: goto label_7F2468F0;
    case 0x7F2468F4u: goto label_7F2468F4;
    case 0x7F2468F8u: goto label_7F2468F8;
    case 0x7F2468FCu: goto label_7F2468FC;
    case 0x7F246900u: goto label_7F246900;
    case 0x7F246904u: goto label_7F246904;
    case 0x7F246908u: goto label_7F246908;
    case 0x7F24690Cu: goto label_7F24690C;
    case 0x7F246910u: goto label_7F246910;
    case 0x7F246914u: goto label_7F246914;
    case 0x7F246918u: goto label_7F246918;
    case 0x7F24691Cu: goto label_7F24691C;
    case 0x7F246920u: goto label_7F246920;
    case 0x7F246924u: goto label_7F246924;
    case 0x7F246928u: goto label_7F246928;
    case 0x7F24692Cu: goto label_7F24692C;
    case 0x7F246930u: goto label_7F246930;
    case 0x7F246934u: goto label_7F246934;
    case 0x7F246938u: goto label_7F246938;
    case 0x7F24693Cu: goto label_7F24693C;
    case 0x7F246940u: goto label_7F246940;
    case 0x7F246944u: goto label_7F246944;
    case 0x7F246948u: goto label_7F246948;
    case 0x7F24694Cu: goto label_7F24694C;
    case 0x7F246950u: goto label_7F246950;
    case 0x7F246954u: goto label_7F246954;
    case 0x7F246958u: goto label_7F246958;
    case 0x7F24695Cu: goto label_7F24695C;
    case 0x7F246960u: goto label_7F246960;
    case 0x7F246964u: goto label_7F246964;
    case 0x7F246968u: goto label_7F246968;
    case 0x7F24696Cu: goto label_7F24696C;
    case 0x7F246970u: goto label_7F246970;
    case 0x7F246974u: goto label_7F246974;
    case 0x7F246978u: goto label_7F246978;
    case 0x7F24697Cu: goto label_7F24697C;
    case 0x7F246980u: goto label_7F246980;
    case 0x7F246984u: goto label_7F246984;
    case 0x7F246988u: goto label_7F246988;
    case 0x7F24698Cu: goto label_7F24698C;
    case 0x7F246990u: goto label_7F246990;
    case 0x7F246994u: goto label_7F246994;
    case 0x7F246998u: goto label_7F246998;
    case 0x7F24699Cu: goto label_7F24699C;
    case 0x7F2469A0u: goto label_7F2469A0;
    case 0x7F2469A4u: goto label_7F2469A4;
    case 0x7F2469A8u: goto label_7F2469A8;
    case 0x7F2469ACu: goto label_7F2469AC;
    case 0x7F2469B0u: goto label_7F2469B0;
    case 0x7F2469B4u: goto label_7F2469B4;
    case 0x7F2469B8u: goto label_7F2469B8;
    case 0x7F2469BCu: goto label_7F2469BC;
    case 0x7F2469C0u: goto label_7F2469C0;
    case 0x7F2469C4u: goto label_7F2469C4;
    case 0x7F2469C8u: goto label_7F2469C8;
    case 0x7F2469CCu: goto label_7F2469CC;
    case 0x7F2469D0u: goto label_7F2469D0;
    case 0x7F2469D4u: goto label_7F2469D4;
    case 0x7F2469D8u: goto label_7F2469D8;
    case 0x7F2469DCu: goto label_7F2469DC;
    case 0x7F2469E0u: goto label_7F2469E0;
    case 0x7F2469E4u: goto label_7F2469E4;
    case 0x7F2469E8u: goto label_7F2469E8;
    case 0x7F2469ECu: goto label_7F2469EC;
    case 0x7F2469F0u: goto label_7F2469F0;
    case 0x7F2469F4u: goto label_7F2469F4;
    case 0x7F2469F8u: goto label_7F2469F8;
    case 0x7F2469FCu: goto label_7F2469FC;
    case 0x7F246A00u: goto label_7F246A00;
    case 0x7F246A04u: goto label_7F246A04;
    case 0x7F246A08u: goto label_7F246A08;
    case 0x7F246A0Cu: goto label_7F246A0C;
    case 0x7F246A10u: goto label_7F246A10;
    case 0x7F246A14u: goto label_7F246A14;
    case 0x7F246A18u: goto label_7F246A18;
    case 0x7F246A1Cu: goto label_7F246A1C;
    case 0x7F246A20u: goto label_7F246A20;
    case 0x7F246A24u: goto label_7F246A24;
    case 0x7F246A28u: goto label_7F246A28;
    case 0x7F246A2Cu: goto label_7F246A2C;
    case 0x7F246A30u: goto label_7F246A30;
    case 0x7F246A34u: goto label_7F246A34;
    case 0x7F246A38u: goto label_7F246A38;
    case 0x7F246A3Cu: goto label_7F246A3C;
    case 0x7F246A40u: goto label_7F246A40;
    case 0x7F246A44u: goto label_7F246A44;
    case 0x7F246A48u: goto label_7F246A48;
    case 0x7F246A4Cu: goto label_7F246A4C;
    case 0x7F246A50u: goto label_7F246A50;
    case 0x7F246A54u: goto label_7F246A54;
    case 0x7F246A58u: goto label_7F246A58;
    case 0x7F246A5Cu: goto label_7F246A5C;
    case 0x7F246A60u: goto label_7F246A60;
    case 0x7F246A64u: goto label_7F246A64;
    case 0x7F246A68u: goto label_7F246A68;
    case 0x7F246A6Cu: goto label_7F246A6C;
    case 0x7F246A70u: goto label_7F246A70;
    case 0x7F246A74u: goto label_7F246A74;
    case 0x7F246A78u: goto label_7F246A78;
    case 0x7F246A7Cu: goto label_7F246A7C;
    case 0x7F246A80u: goto label_7F246A80;
    case 0x7F246A84u: goto label_7F246A84;
    case 0x7F246A88u: goto label_7F246A88;
    case 0x7F246A8Cu: goto label_7F246A8C;
    case 0x7F246A90u: goto label_7F246A90;
    case 0x7F246A94u: goto label_7F246A94;
    case 0x7F246A98u: goto label_7F246A98;
    case 0x7F246A9Cu: goto label_7F246A9C;
    case 0x7F246AA0u: goto label_7F246AA0;
    case 0x7F246AA4u: goto label_7F246AA4;
    case 0x7F246AA8u: goto label_7F246AA8;
    case 0x7F246AACu: goto label_7F246AAC;
    case 0x7F246AB0u: goto label_7F246AB0;
    case 0x7F246AB4u: goto label_7F246AB4;
    case 0x7F246AB8u: goto label_7F246AB8;
    case 0x7F246ABCu: goto label_7F246ABC;
    case 0x7F246AC0u: goto label_7F246AC0;
    case 0x7F246AC4u: goto label_7F246AC4;
    case 0x7F246AC8u: goto label_7F246AC8;
    case 0x7F246ACCu: goto label_7F246ACC;
    case 0x7F246AD0u: goto label_7F246AD0;
    case 0x7F246AD4u: goto label_7F246AD4;
    case 0x7F246AD8u: goto label_7F246AD8;
    case 0x7F246ADCu: goto label_7F246ADC;
    case 0x7F246AE0u: goto label_7F246AE0;
    case 0x7F246AE4u: goto label_7F246AE4;
    case 0x7F246AE8u: goto label_7F246AE8;
    case 0x7F246AECu: goto label_7F246AEC;
    case 0x7F246AF0u: goto label_7F246AF0;
    case 0x7F246AF4u: goto label_7F246AF4;
    case 0x7F246AF8u: goto label_7F246AF8;
    case 0x7F246AFCu: goto label_7F246AFC;
    case 0x7F246B00u: goto label_7F246B00;
    case 0x7F246B04u: goto label_7F246B04;
    case 0x7F246B08u: goto label_7F246B08;
    case 0x7F246B0Cu: goto label_7F246B0C;
    case 0x7F246B10u: goto label_7F246B10;
    case 0x7F246B14u: goto label_7F246B14;
    case 0x7F246B18u: goto label_7F246B18;
    case 0x7F246B1Cu: goto label_7F246B1C;
    case 0x7F246B20u: goto label_7F246B20;
    case 0x7F246B24u: goto label_7F246B24;
    case 0x7F246B28u: goto label_7F246B28;
    case 0x7F246B2Cu: goto label_7F246B2C;
    case 0x7F246B30u: goto label_7F246B30;
    case 0x7F246B34u: goto label_7F246B34;
    case 0x7F246B38u: goto label_7F246B38;
    case 0x7F246B3Cu: goto label_7F246B3C;
    case 0x7F246B40u: goto label_7F246B40;
    case 0x7F246B44u: goto label_7F246B44;
    case 0x7F246B48u: goto label_7F246B48;
    case 0x7F246B4Cu: goto label_7F246B4C;
    case 0x7F246B50u: goto label_7F246B50;
    case 0x7F246B54u: goto label_7F246B54;
    case 0x7F246B58u: goto label_7F246B58;
    case 0x7F246B5Cu: goto label_7F246B5C;
    case 0x7F246B60u: goto label_7F246B60;
    case 0x7F246B64u: goto label_7F246B64;
    case 0x7F246B68u: goto label_7F246B68;
    case 0x7F246B6Cu: goto label_7F246B6C;
    case 0x7F246B70u: goto label_7F246B70;
    case 0x7F246B74u: goto label_7F246B74;
    case 0x7F246B78u: goto label_7F246B78;
    case 0x7F246B7Cu: goto label_7F246B7C;
    case 0x7F246B80u: goto label_7F246B80;
    case 0x7F246B84u: goto label_7F246B84;
    case 0x7F246B88u: goto label_7F246B88;
    case 0x7F246B8Cu: goto label_7F246B8C;
    case 0x7F246B90u: goto label_7F246B90;
    case 0x7F246B94u: goto label_7F246B94;
    case 0x7F246B98u: goto label_7F246B98;
    case 0x7F246B9Cu: goto label_7F246B9C;
    case 0x7F246BA0u: goto label_7F246BA0;
    case 0x7F246BA4u: goto label_7F246BA4;
    case 0x7F246BA8u: goto label_7F246BA8;
    case 0x7F246BACu: goto label_7F246BAC;
    case 0x7F246BB0u: goto label_7F246BB0;
    case 0x7F246BB4u: goto label_7F246BB4;
    case 0x7F246BB8u: goto label_7F246BB8;
    case 0x7F246BBCu: goto label_7F246BBC;
    case 0x7F246BC0u: goto label_7F246BC0;
    case 0x7F246BC4u: goto label_7F246BC4;
    case 0x7F246BC8u: goto label_7F246BC8;
    case 0x7F246BCCu: goto label_7F246BCC;
    case 0x7F246BD0u: goto label_7F246BD0;
    case 0x7F246BD4u: goto label_7F246BD4;
    case 0x7F246BD8u: goto label_7F246BD8;
    case 0x7F246BDCu: goto label_7F246BDC;
    case 0x7F246BE0u: goto label_7F246BE0;
    case 0x7F246BE4u: goto label_7F246BE4;
    case 0x7F246BE8u: goto label_7F246BE8;
    case 0x7F246BECu: goto label_7F246BEC;
    case 0x7F246BF0u: goto label_7F246BF0;
    case 0x7F246BF4u: goto label_7F246BF4;
    case 0x7F246BF8u: goto label_7F246BF8;
    case 0x7F246BFCu: goto label_7F246BFC;
    case 0x7F246C00u: goto label_7F246C00;
    case 0x7F246C04u: goto label_7F246C04;
    case 0x7F246C08u: goto label_7F246C08;
    case 0x7F246C0Cu: goto label_7F246C0C;
    case 0x7F246C10u: goto label_7F246C10;
    case 0x7F246C14u: goto label_7F246C14;
    case 0x7F246C18u: goto label_7F246C18;
    case 0x7F246C1Cu: goto label_7F246C1C;
    case 0x7F246C20u: goto label_7F246C20;
    case 0x7F246C24u: goto label_7F246C24;
    case 0x7F246C28u: goto label_7F246C28;
    case 0x7F246C2Cu: goto label_7F246C2C;
    case 0x7F246C30u: goto label_7F246C30;
    case 0x7F246C34u: goto label_7F246C34;
    case 0x7F246C38u: goto label_7F246C38;
    case 0x7F246C3Cu: goto label_7F246C3C;
    case 0x7F246C40u: goto label_7F246C40;
    case 0x7F246C44u: goto label_7F246C44;
    case 0x7F246C48u: goto label_7F246C48;
    case 0x7F246C4Cu: goto label_7F246C4C;
    case 0x7F246C50u: goto label_7F246C50;
    case 0x7F246C54u: goto label_7F246C54;
    case 0x7F246C58u: goto label_7F246C58;
    case 0x7F246C5Cu: goto label_7F246C5C;
    case 0x7F246C60u: goto label_7F246C60;
    case 0x7F246C64u: goto label_7F246C64;
    case 0x7F246C68u: goto label_7F246C68;
    case 0x7F246C6Cu: goto label_7F246C6C;
    case 0x7F246C70u: goto label_7F246C70;
    case 0x7F246C74u: goto label_7F246C74;
    case 0x7F246C78u: goto label_7F246C78;
    case 0x7F246C7Cu: goto label_7F246C7C;
    case 0x7F246C80u: goto label_7F246C80;
    case 0x7F246C84u: goto label_7F246C84;
    case 0x7F246C88u: goto label_7F246C88;
    case 0x7F246C8Cu: goto label_7F246C8C;
    case 0x7F246C90u: goto label_7F246C90;
    case 0x7F246C94u: goto label_7F246C94;
    case 0x7F246C98u: goto label_7F246C98;
    case 0x7F246C9Cu: goto label_7F246C9C;
    case 0x7F246CA0u: goto label_7F246CA0;
    case 0x7F246CA4u: goto label_7F246CA4;
    case 0x7F246CA8u: goto label_7F246CA8;
    case 0x7F246CACu: goto label_7F246CAC;
    case 0x7F246CB0u: goto label_7F246CB0;
    case 0x7F246CB4u: goto label_7F246CB4;
    case 0x7F246CB8u: goto label_7F246CB8;
    case 0x7F246CBCu: goto label_7F246CBC;
    case 0x7F246CC0u: goto label_7F246CC0;
    case 0x7F246CC4u: goto label_7F246CC4;
    case 0x7F246CC8u: goto label_7F246CC8;
    case 0x7F246CCCu: goto label_7F246CCC;
    case 0x7F246CD0u: goto label_7F246CD0;
    case 0x7F246CD4u: goto label_7F246CD4;
    case 0x7F246CD8u: goto label_7F246CD8;
    case 0x7F246CDCu: goto label_7F246CDC;
    case 0x7F246CE0u: goto label_7F246CE0;
    case 0x7F246CE4u: goto label_7F246CE4;
    case 0x7F246CE8u: goto label_7F246CE8;
    case 0x7F246CECu: goto label_7F246CEC;
    case 0x7F246CF0u: goto label_7F246CF0;
    case 0x7F246CF4u: goto label_7F246CF4;
    case 0x7F246CF8u: goto label_7F246CF8;
    case 0x7F246CFCu: goto label_7F246CFC;
    case 0x7F246D00u: goto label_7F246D00;
    case 0x7F246D04u: goto label_7F246D04;
    case 0x7F246D08u: goto label_7F246D08;
    case 0x7F246D0Cu: goto label_7F246D0C;
    case 0x7F246D10u: goto label_7F246D10;
    case 0x7F246D14u: goto label_7F246D14;
    case 0x7F246D18u: goto label_7F246D18;
    case 0x7F246D1Cu: goto label_7F246D1C;
    case 0x7F246D20u: goto label_7F246D20;
    case 0x7F246D24u: goto label_7F246D24;
    case 0x7F246D28u: goto label_7F246D28;
    case 0x7F246D2Cu: goto label_7F246D2C;
    case 0x7F246D30u: goto label_7F246D30;
    case 0x7F246D34u: goto label_7F246D34;
    case 0x7F246D38u: goto label_7F246D38;
    case 0x7F246D3Cu: goto label_7F246D3C;
    case 0x7F246D40u: goto label_7F246D40;
    case 0x7F246D44u: goto label_7F246D44;
    case 0x7F246D48u: goto label_7F246D48;
    case 0x7F246D4Cu: goto label_7F246D4C;
    case 0x7F246D50u: goto label_7F246D50;
    case 0x7F246D54u: goto label_7F246D54;
    case 0x7F246D58u: goto label_7F246D58;
    case 0x7F246D5Cu: goto label_7F246D5C;
    case 0x7F246D60u: goto label_7F246D60;
    case 0x7F246D64u: goto label_7F246D64;
    case 0x7F246D68u: goto label_7F246D68;
    case 0x7F246D6Cu: goto label_7F246D6C;
    case 0x7F246D70u: goto label_7F246D70;
    case 0x7F246D74u: goto label_7F246D74;
    case 0x7F246D78u: goto label_7F246D78;
    case 0x7F246D7Cu: goto label_7F246D7C;
    case 0x7F246D80u: goto label_7F246D80;
    case 0x7F246D84u: goto label_7F246D84;
    case 0x7F246D88u: goto label_7F246D88;
    case 0x7F246D8Cu: goto label_7F246D8C;
    case 0x7F246D90u: goto label_7F246D90;
    case 0x7F246D94u: goto label_7F246D94;
    case 0x7F246D98u: goto label_7F246D98;
    case 0x7F246D9Cu: goto label_7F246D9C;
    case 0x7F246DA0u: goto label_7F246DA0;
    case 0x7F246DA4u: goto label_7F246DA4;
    case 0x7F246DA8u: goto label_7F246DA8;
    case 0x7F246DACu: goto label_7F246DAC;
    case 0x7F246DB0u: goto label_7F246DB0;
    case 0x7F246DB4u: goto label_7F246DB4;
    case 0x7F246DB8u: goto label_7F246DB8;
    case 0x7F246DBCu: goto label_7F246DBC;
    case 0x7F246DC0u: goto label_7F246DC0;
    case 0x7F246DC4u: goto label_7F246DC4;
    case 0x7F246DC8u: goto label_7F246DC8;
    case 0x7F246DCCu: goto label_7F246DCC;
    case 0x7F246DD0u: goto label_7F246DD0;
    case 0x7F246DD4u: goto label_7F246DD4;
    case 0x7F246DD8u: goto label_7F246DD8;
    case 0x7F246DDCu: goto label_7F246DDC;
    case 0x7F246DE0u: goto label_7F246DE0;
    case 0x7F246DE4u: goto label_7F246DE4;
    case 0x7F246DE8u: goto label_7F246DE8;
    case 0x7F246DECu: goto label_7F246DEC;
    case 0x7F246DF0u: goto label_7F246DF0;
    case 0x7F246DF4u: goto label_7F246DF4;
    case 0x7F246DF8u: goto label_7F246DF8;
    case 0x7F246DFCu: goto label_7F246DFC;
    case 0x7F246E00u: goto label_7F246E00;
    case 0x7F246E04u: goto label_7F246E04;
    case 0x7F246E08u: goto label_7F246E08;
    case 0x7F246E0Cu: goto label_7F246E0C;
    case 0x7F246E10u: goto label_7F246E10;
    case 0x7F246E14u: goto label_7F246E14;
    case 0x7F246E18u: goto label_7F246E18;
    case 0x7F246E1Cu: goto label_7F246E1C;
    case 0x7F246E20u: goto label_7F246E20;
    case 0x7F246E24u: goto label_7F246E24;
    case 0x7F246E28u: goto label_7F246E28;
    case 0x7F246E2Cu: goto label_7F246E2C;
    case 0x7F246E30u: goto label_7F246E30;
    case 0x7F246E34u: goto label_7F246E34;
    case 0x7F246E38u: goto label_7F246E38;
    case 0x7F246E3Cu: goto label_7F246E3C;
    case 0x7F246E40u: goto label_7F246E40;
    case 0x7F246E44u: goto label_7F246E44;
    case 0x7F246E48u: goto label_7F246E48;
    case 0x7F246E4Cu: goto label_7F246E4C;
    case 0x7F246E50u: goto label_7F246E50;
    case 0x7F246E54u: goto label_7F246E54;
    case 0x7F246E58u: goto label_7F246E58;
    case 0x7F246E5Cu: goto label_7F246E5C;
    case 0x7F246E60u: goto label_7F246E60;
    case 0x7F246E64u: goto label_7F246E64;
    case 0x7F246E68u: goto label_7F246E68;
    case 0x7F246E6Cu: goto label_7F246E6C;
    case 0x7F246E70u: goto label_7F246E70;
    case 0x7F246E74u: goto label_7F246E74;
    case 0x7F246E78u: goto label_7F246E78;
    case 0x7F246E7Cu: goto label_7F246E7C;
    case 0x7F246E80u: goto label_7F246E80;
    case 0x7F246E84u: goto label_7F246E84;
    case 0x7F246E88u: goto label_7F246E88;
    case 0x7F246E8Cu: goto label_7F246E8C;
    case 0x7F246E90u: goto label_7F246E90;
    case 0x7F246E94u: goto label_7F246E94;
    case 0x7F246E98u: goto label_7F246E98;
    case 0x7F246E9Cu: goto label_7F246E9C;
    case 0x7F246EA0u: goto label_7F246EA0;
    case 0x7F246EA4u: goto label_7F246EA4;
    case 0x7F246EA8u: goto label_7F246EA8;
    case 0x7F246EACu: goto label_7F246EAC;
    case 0x7F246EB0u: goto label_7F246EB0;
    case 0x7F246EB4u: goto label_7F246EB4;
    case 0x7F246EB8u: goto label_7F246EB8;
    case 0x7F246EBCu: goto label_7F246EBC;
    case 0x7F246EC0u: goto label_7F246EC0;
    case 0x7F246EC4u: goto label_7F246EC4;
    case 0x7F246EC8u: goto label_7F246EC8;
    case 0x7F246ECCu: goto label_7F246ECC;
    case 0x7F246ED0u: goto label_7F246ED0;
    case 0x7F246ED4u: goto label_7F246ED4;
    case 0x7F246ED8u: goto label_7F246ED8;
    case 0x7F246EDCu: goto label_7F246EDC;
    case 0x7F246EE0u: goto label_7F246EE0;
    case 0x7F246EE4u: goto label_7F246EE4;
    case 0x7F246EE8u: goto label_7F246EE8;
    case 0x7F246EECu: goto label_7F246EEC;
    case 0x7F246EF0u: goto label_7F246EF0;
    case 0x7F246EF4u: goto label_7F246EF4;
    case 0x7F246EF8u: goto label_7F246EF8;
    case 0x7F246EFCu: goto label_7F246EFC;
    case 0x7F246F00u: goto label_7F246F00;
    case 0x7F246F04u: goto label_7F246F04;
    case 0x7F246F08u: goto label_7F246F08;
    case 0x7F246F0Cu: goto label_7F246F0C;
    case 0x7F246F10u: goto label_7F246F10;
    case 0x7F246F14u: goto label_7F246F14;
    case 0x7F246F18u: goto label_7F246F18;
    case 0x7F246F1Cu: goto label_7F246F1C;
    case 0x7F246F20u: goto label_7F246F20;
    case 0x7F246F24u: goto label_7F246F24;
    case 0x7F246F28u: goto label_7F246F28;
    case 0x7F246F2Cu: goto label_7F246F2C;
    case 0x7F246F30u: goto label_7F246F30;
    case 0x7F246F34u: goto label_7F246F34;
    case 0x7F246F38u: goto label_7F246F38;
    case 0x7F246F3Cu: goto label_7F246F3C;
    case 0x7F246F40u: goto label_7F246F40;
    case 0x7F246F44u: goto label_7F246F44;
    case 0x7F246F48u: goto label_7F246F48;
    case 0x7F246F4Cu: goto label_7F246F4C;
    case 0x7F246F50u: goto label_7F246F50;
    case 0x7F246F54u: goto label_7F246F54;
    case 0x7F246F58u: goto label_7F246F58;
    case 0x7F246F5Cu: goto label_7F246F5C;
    case 0x7F246F60u: goto label_7F246F60;
    case 0x7F246F64u: goto label_7F246F64;
    case 0x7F246F68u: goto label_7F246F68;
    case 0x7F246F6Cu: goto label_7F246F6C;
    case 0x7F246F70u: goto label_7F246F70;
    case 0x7F246F74u: goto label_7F246F74;
    case 0x7F246F78u: goto label_7F246F78;
    case 0x7F246F7Cu: goto label_7F246F7C;
    case 0x7F246F80u: goto label_7F246F80;
    case 0x7F246F84u: goto label_7F246F84;
    case 0x7F246F88u: goto label_7F246F88;
    case 0x7F246F8Cu: goto label_7F246F8C;
    case 0x7F246F90u: goto label_7F246F90;
    case 0x7F246F94u: goto label_7F246F94;
    case 0x7F246F98u: goto label_7F246F98;
    case 0x7F246F9Cu: goto label_7F246F9C;
    case 0x7F246FA0u: goto label_7F246FA0;
    case 0x7F246FA4u: goto label_7F246FA4;
    case 0x7F246FA8u: goto label_7F246FA8;
    case 0x7F246FACu: goto label_7F246FAC;
    case 0x7F246FB0u: goto label_7F246FB0;
    case 0x7F246FB4u: goto label_7F246FB4;
    case 0x7F246FB8u: goto label_7F246FB8;
    case 0x7F246FBCu: goto label_7F246FBC;
    case 0x7F246FC0u: goto label_7F246FC0;
    case 0x7F246FC4u: goto label_7F246FC4;
    case 0x7F246FC8u: goto label_7F246FC8;
    case 0x7F246FCCu: goto label_7F246FCC;
    case 0x7F246FD0u: goto label_7F246FD0;
    case 0x7F246FD4u: goto label_7F246FD4;
    case 0x7F246FD8u: goto label_7F246FD8;
    case 0x7F246FDCu: goto label_7F246FDC;
    case 0x7F246FE0u: goto label_7F246FE0;
    case 0x7F246FE4u: goto label_7F246FE4;
    case 0x7F246FE8u: goto label_7F246FE8;
    case 0x7F246FECu: goto label_7F246FEC;
    case 0x7F246FF0u: goto label_7F246FF0;
    case 0x7F246FF4u: goto label_7F246FF4;
    case 0x7F246FF8u: goto label_7F246FF8;
    case 0x7F246FFCu: goto label_7F246FFC;
    case 0x7F247000u: goto label_7F247000;
    case 0x7F247004u: goto label_7F247004;
    case 0x7F247008u: goto label_7F247008;
    case 0x7F24700Cu: goto label_7F24700C;
    case 0x7F247010u: goto label_7F247010;
    case 0x7F247014u: goto label_7F247014;
    case 0x7F247018u: goto label_7F247018;
    case 0x7F24701Cu: goto label_7F24701C;
    case 0x7F247020u: goto label_7F247020;
    case 0x7F247024u: goto label_7F247024;
    case 0x7F247028u: goto label_7F247028;
    case 0x7F24702Cu: goto label_7F24702C;
    case 0x7F247030u: goto label_7F247030;
    case 0x7F247034u: goto label_7F247034;
    case 0x7F247038u: goto label_7F247038;
    case 0x7F24703Cu: goto label_7F24703C;
    case 0x7F247040u: goto label_7F247040;
    case 0x7F247044u: goto label_7F247044;
    case 0x7F247048u: goto label_7F247048;
    case 0x7F24704Cu: goto label_7F24704C;
    case 0x7F247050u: goto label_7F247050;
    case 0x7F247054u: goto label_7F247054;
    case 0x7F247058u: goto label_7F247058;
    case 0x7F24705Cu: goto label_7F24705C;
    case 0x7F247060u: goto label_7F247060;
    case 0x7F247064u: goto label_7F247064;
    case 0x7F247068u: goto label_7F247068;
    case 0x7F24706Cu: goto label_7F24706C;
    case 0x7F247070u: goto label_7F247070;
    case 0x7F247074u: goto label_7F247074;
    case 0x7F247078u: goto label_7F247078;
    case 0x7F24707Cu: goto label_7F24707C;
    case 0x7F247080u: goto label_7F247080;
    case 0x7F247084u: goto label_7F247084;
    case 0x7F247088u: goto label_7F247088;
    case 0x7F24708Cu: goto label_7F24708C;
    case 0x7F247090u: goto label_7F247090;
    case 0x7F247094u: goto label_7F247094;
    case 0x7F247098u: goto label_7F247098;
    case 0x7F24709Cu: goto label_7F24709C;
    case 0x7F2470A0u: goto label_7F2470A0;
    case 0x7F2470A4u: goto label_7F2470A4;
    case 0x7F2470A8u: goto label_7F2470A8;
    case 0x7F2470ACu: goto label_7F2470AC;
    case 0x7F2470B0u: goto label_7F2470B0;
    case 0x7F2470B4u: goto label_7F2470B4;
    case 0x7F2470B8u: goto label_7F2470B8;
    case 0x7F2470BCu: goto label_7F2470BC;
    case 0x7F2470C0u: goto label_7F2470C0;
    case 0x7F2470C4u: goto label_7F2470C4;
    case 0x7F2470C8u: goto label_7F2470C8;
    case 0x7F2470CCu: goto label_7F2470CC;
    case 0x7F2470D0u: goto label_7F2470D0;
    case 0x7F2470D4u: goto label_7F2470D4;
    case 0x7F2470D8u: goto label_7F2470D8;
    case 0x7F2470DCu: goto label_7F2470DC;
    case 0x7F2470E0u: goto label_7F2470E0;
    case 0x7F2470E4u: goto label_7F2470E4;
    case 0x7F2470E8u: goto label_7F2470E8;
    case 0x7F2470ECu: goto label_7F2470EC;
    case 0x7F2470F0u: goto label_7F2470F0;
    case 0x7F2470F4u: goto label_7F2470F4;
    case 0x7F2470F8u: goto label_7F2470F8;
    case 0x7F2470FCu: goto label_7F2470FC;
    case 0x7F247100u: goto label_7F247100;
    case 0x7F247104u: goto label_7F247104;
    case 0x7F247108u: goto label_7F247108;
    case 0x7F24710Cu: goto label_7F24710C;
    case 0x7F247110u: goto label_7F247110;
    case 0x7F247114u: goto label_7F247114;
    case 0x7F247118u: goto label_7F247118;
    case 0x7F24711Cu: goto label_7F24711C;
    case 0x7F247120u: goto label_7F247120;
    case 0x7F247124u: goto label_7F247124;
    case 0x7F247128u: goto label_7F247128;
    case 0x7F24712Cu: goto label_7F24712C;
    case 0x7F247130u: goto label_7F247130;
    case 0x7F247134u: goto label_7F247134;
    case 0x7F247138u: goto label_7F247138;
    case 0x7F24713Cu: goto label_7F24713C;
    case 0x7F247140u: goto label_7F247140;
    case 0x7F247144u: goto label_7F247144;
    case 0x7F247148u: goto label_7F247148;
    case 0x7F24714Cu: goto label_7F24714C;
    case 0x7F247150u: goto label_7F247150;
    case 0x7F247154u: goto label_7F247154;
    case 0x7F247158u: goto label_7F247158;
    case 0x7F24715Cu: goto label_7F24715C;
    case 0x7F247160u: goto label_7F247160;
    case 0x7F247164u: goto label_7F247164;
    case 0x7F247168u: goto label_7F247168;
    case 0x7F24716Cu: goto label_7F24716C;
    case 0x7F247170u: goto label_7F247170;
    case 0x7F247174u: goto label_7F247174;
    case 0x7F247178u: goto label_7F247178;
    case 0x7F24717Cu: goto label_7F24717C;
    case 0x7F247180u: goto label_7F247180;
    case 0x7F247184u: goto label_7F247184;
    case 0x7F247188u: goto label_7F247188;
    case 0x7F24718Cu: goto label_7F24718C;
    case 0x7F247190u: goto label_7F247190;
    case 0x7F247194u: goto label_7F247194;
    case 0x7F247198u: goto label_7F247198;
    case 0x7F24719Cu: goto label_7F24719C;
    case 0x7F2471A0u: goto label_7F2471A0;
    case 0x7F2471A4u: goto label_7F2471A4;
    case 0x7F2471A8u: goto label_7F2471A8;
    case 0x7F2471ACu: goto label_7F2471AC;
    case 0x7F2471B0u: goto label_7F2471B0;
    case 0x7F2471B4u: goto label_7F2471B4;
    case 0x7F2471B8u: goto label_7F2471B8;
    case 0x7F2471BCu: goto label_7F2471BC;
    case 0x7F2471C0u: goto label_7F2471C0;
    case 0x7F2471C4u: goto label_7F2471C4;
    case 0x7F2471C8u: goto label_7F2471C8;
    case 0x7F2471CCu: goto label_7F2471CC;
    case 0x7F2471D0u: goto label_7F2471D0;
    case 0x7F2471D4u: goto label_7F2471D4;
    case 0x7F2471D8u: goto label_7F2471D8;
    case 0x7F2471DCu: goto label_7F2471DC;
    case 0x7F2471E0u: goto label_7F2471E0;
    case 0x7F2471E4u: goto label_7F2471E4;
    case 0x7F2471E8u: goto label_7F2471E8;
    case 0x7F2471ECu: goto label_7F2471EC;
    case 0x7F2471F0u: goto label_7F2471F0;
    case 0x7F2471F4u: goto label_7F2471F4;
    case 0x7F2471F8u: goto label_7F2471F8;
    case 0x7F2471FCu: goto label_7F2471FC;
    case 0x7F247200u: goto label_7F247200;
    case 0x7F247204u: goto label_7F247204;
    case 0x7F247208u: goto label_7F247208;
    case 0x7F24720Cu: goto label_7F24720C;
    case 0x7F247210u: goto label_7F247210;
    case 0x7F247214u: goto label_7F247214;
    case 0x7F247218u: goto label_7F247218;
    case 0x7F24721Cu: goto label_7F24721C;
    case 0x7F247220u: goto label_7F247220;
    case 0x7F247224u: goto label_7F247224;
    case 0x7F247228u: goto label_7F247228;
    case 0x7F24722Cu: goto label_7F24722C;
    case 0x7F247230u: goto label_7F247230;
    case 0x7F247234u: goto label_7F247234;
    case 0x7F247238u: goto label_7F247238;
    case 0x7F24723Cu: goto label_7F24723C;
    case 0x7F247240u: goto label_7F247240;
    case 0x7F247244u: goto label_7F247244;
    case 0x7F247248u: goto label_7F247248;
    case 0x7F24724Cu: goto label_7F24724C;
    case 0x7F247250u: goto label_7F247250;
    case 0x7F247254u: goto label_7F247254;
    case 0x7F247258u: goto label_7F247258;
    case 0x7F24725Cu: goto label_7F24725C;
    case 0x7F247260u: goto label_7F247260;
    case 0x7F247264u: goto label_7F247264;
    case 0x7F247268u: goto label_7F247268;
    case 0x7F24726Cu: goto label_7F24726C;
    case 0x7F247270u: goto label_7F247270;
    case 0x7F247274u: goto label_7F247274;
    case 0x7F247278u: goto label_7F247278;
    case 0x7F24727Cu: goto label_7F24727C;
    case 0x7F247280u: goto label_7F247280;
    case 0x7F247284u: goto label_7F247284;
    case 0x7F247288u: goto label_7F247288;
    case 0x7F24728Cu: goto label_7F24728C;
    case 0x7F247290u: goto label_7F247290;
    case 0x7F247294u: goto label_7F247294;
    case 0x7F247298u: goto label_7F247298;
    case 0x7F24729Cu: goto label_7F24729C;
    case 0x7F2472A0u: goto label_7F2472A0;
    case 0x7F2472A4u: goto label_7F2472A4;
    case 0x7F2472A8u: goto label_7F2472A8;
    case 0x7F2472ACu: goto label_7F2472AC;
    case 0x7F2472B0u: goto label_7F2472B0;
    case 0x7F2472B4u: goto label_7F2472B4;
    case 0x7F2472B8u: goto label_7F2472B8;
    case 0x7F2472BCu: goto label_7F2472BC;
    case 0x7F2472C0u: goto label_7F2472C0;
    case 0x7F2472C4u: goto label_7F2472C4;
    case 0x7F2472C8u: goto label_7F2472C8;
    case 0x7F2472CCu: goto label_7F2472CC;
    case 0x7F2472D0u: goto label_7F2472D0;
    case 0x7F2472D4u: goto label_7F2472D4;
    case 0x7F2472D8u: goto label_7F2472D8;
    case 0x7F2472DCu: goto label_7F2472DC;
    case 0x7F2472E0u: goto label_7F2472E0;
    case 0x7F2472E4u: goto label_7F2472E4;
    case 0x7F2472E8u: goto label_7F2472E8;
    case 0x7F2472ECu: goto label_7F2472EC;
    case 0x7F2472F0u: goto label_7F2472F0;
    case 0x7F2472F4u: goto label_7F2472F4;
    case 0x7F2472F8u: goto label_7F2472F8;
    case 0x7F2472FCu: goto label_7F2472FC;
    case 0x7F247300u: goto label_7F247300;
    case 0x7F247304u: goto label_7F247304;
    case 0x7F247308u: goto label_7F247308;
    case 0x7F24730Cu: goto label_7F24730C;
    case 0x7F247310u: goto label_7F247310;
    case 0x7F247314u: goto label_7F247314;
    case 0x7F247318u: goto label_7F247318;
    case 0x7F24731Cu: goto label_7F24731C;
    case 0x7F247320u: goto label_7F247320;
    case 0x7F247324u: goto label_7F247324;
    case 0x7F247328u: goto label_7F247328;
    case 0x7F24732Cu: goto label_7F24732C;
    case 0x7F247330u: goto label_7F247330;
    case 0x7F247334u: goto label_7F247334;
    case 0x7F247338u: goto label_7F247338;
    case 0x7F24733Cu: goto label_7F24733C;
    case 0x7F247340u: goto label_7F247340;
    case 0x7F247344u: goto label_7F247344;
    case 0x7F247348u: goto label_7F247348;
    case 0x7F24734Cu: goto label_7F24734C;
    case 0x7F247350u: goto label_7F247350;
    case 0x7F247354u: goto label_7F247354;
    case 0x7F247358u: goto label_7F247358;
    case 0x7F24735Cu: goto label_7F24735C;
    case 0x7F247360u: goto label_7F247360;
    case 0x7F247364u: goto label_7F247364;
    case 0x7F247368u: goto label_7F247368;
    case 0x7F24736Cu: goto label_7F24736C;
    case 0x7F247370u: goto label_7F247370;
    case 0x7F247374u: goto label_7F247374;
    case 0x7F247378u: goto label_7F247378;
    case 0x7F24737Cu: goto label_7F24737C;
    case 0x7F247380u: goto label_7F247380;
    case 0x7F247384u: goto label_7F247384;
    case 0x7F247388u: goto label_7F247388;
    case 0x7F24738Cu: goto label_7F24738C;
    case 0x7F247390u: goto label_7F247390;
    case 0x7F247394u: goto label_7F247394;
    case 0x7F247398u: goto label_7F247398;
    case 0x7F24739Cu: goto label_7F24739C;
    case 0x7F2473A0u: goto label_7F2473A0;
    case 0x7F2473A4u: goto label_7F2473A4;
    case 0x7F2473A8u: goto label_7F2473A8;
    case 0x7F2473ACu: goto label_7F2473AC;
    case 0x7F2473B0u: goto label_7F2473B0;
    case 0x7F2473B4u: goto label_7F2473B4;
    case 0x7F2473B8u: goto label_7F2473B8;
    case 0x7F2473BCu: goto label_7F2473BC;
    case 0x7F2473C0u: goto label_7F2473C0;
    case 0x7F2473C4u: goto label_7F2473C4;
    case 0x7F2473C8u: goto label_7F2473C8;
    case 0x7F2473CCu: goto label_7F2473CC;
    case 0x7F2473D0u: goto label_7F2473D0;
    case 0x7F2473D4u: goto label_7F2473D4;
    case 0x7F2473D8u: goto label_7F2473D8;
    case 0x7F2473DCu: goto label_7F2473DC;
    case 0x7F2473E0u: goto label_7F2473E0;
    case 0x7F2473E4u: goto label_7F2473E4;
    case 0x7F2473E8u: goto label_7F2473E8;
    case 0x7F2473ECu: goto label_7F2473EC;
    case 0x7F2473F0u: goto label_7F2473F0;
    case 0x7F2473F4u: goto label_7F2473F4;
    case 0x7F2473F8u: goto label_7F2473F8;
    case 0x7F2473FCu: goto label_7F2473FC;
    case 0x7F247400u: goto label_7F247400;
    case 0x7F247404u: goto label_7F247404;
    case 0x7F247408u: goto label_7F247408;
    case 0x7F24740Cu: goto label_7F24740C;
    case 0x7F247410u: goto label_7F247410;
    case 0x7F247414u: goto label_7F247414;
    case 0x7F247418u: goto label_7F247418;
    case 0x7F24741Cu: goto label_7F24741C;
    case 0x7F247420u: goto label_7F247420;
    case 0x7F247424u: goto label_7F247424;
    case 0x7F247428u: goto label_7F247428;
    case 0x7F24742Cu: goto label_7F24742C;
    case 0x7F247430u: goto label_7F247430;
    case 0x7F247434u: goto label_7F247434;
    case 0x7F247438u: goto label_7F247438;
    case 0x7F24743Cu: goto label_7F24743C;
    case 0x7F247440u: goto label_7F247440;
    case 0x7F247444u: goto label_7F247444;
    case 0x7F247448u: goto label_7F247448;
    case 0x7F24744Cu: goto label_7F24744C;
    case 0x7F247450u: goto label_7F247450;
    case 0x7F247454u: goto label_7F247454;
    case 0x7F247458u: goto label_7F247458;
    case 0x7F24745Cu: goto label_7F24745C;
    case 0x7F247460u: goto label_7F247460;
    case 0x7F247464u: goto label_7F247464;
    case 0x7F247468u: goto label_7F247468;
    case 0x7F24746Cu: goto label_7F24746C;
    case 0x7F247470u: goto label_7F247470;
    case 0x7F247474u: goto label_7F247474;
    case 0x7F247478u: goto label_7F247478;
    case 0x7F24747Cu: goto label_7F24747C;
    case 0x7F247480u: goto label_7F247480;
    case 0x7F247484u: goto label_7F247484;
    case 0x7F247488u: goto label_7F247488;
    case 0x7F24748Cu: goto label_7F24748C;
    case 0x7F247490u: goto label_7F247490;
    case 0x7F247494u: goto label_7F247494;
    case 0x7F247498u: goto label_7F247498;
    case 0x7F24749Cu: goto label_7F24749C;
    case 0x7F2474A0u: goto label_7F2474A0;
    case 0x7F2474A4u: goto label_7F2474A4;
    case 0x7F2474A8u: goto label_7F2474A8;
    case 0x7F2474ACu: goto label_7F2474AC;
    case 0x7F2474B0u: goto label_7F2474B0;
    case 0x7F2474B4u: goto label_7F2474B4;
    case 0x7F2474B8u: goto label_7F2474B8;
    case 0x7F2474BCu: goto label_7F2474BC;
    case 0x7F2474C0u: goto label_7F2474C0;
    case 0x7F2474C4u: goto label_7F2474C4;
    case 0x7F2474C8u: goto label_7F2474C8;
    case 0x7F2474CCu: goto label_7F2474CC;
    case 0x7F2474D0u: goto label_7F2474D0;
    case 0x7F2474D4u: goto label_7F2474D4;
    case 0x7F2474D8u: goto label_7F2474D8;
    case 0x7F2474DCu: goto label_7F2474DC;
    case 0x7F2474E0u: goto label_7F2474E0;
    case 0x7F2474E4u: goto label_7F2474E4;
    case 0x7F2474E8u: goto label_7F2474E8;
    case 0x7F2474ECu: goto label_7F2474EC;
    case 0x7F2474F0u: goto label_7F2474F0;
    case 0x7F2474F4u: goto label_7F2474F4;
    case 0x7F2474F8u: goto label_7F2474F8;
    case 0x7F2474FCu: goto label_7F2474FC;
    case 0x7F247500u: goto label_7F247500;
    case 0x7F247504u: goto label_7F247504;
    case 0x7F247508u: goto label_7F247508;
    case 0x7F24750Cu: goto label_7F24750C;
    case 0x7F247510u: goto label_7F247510;
    case 0x7F247514u: goto label_7F247514;
    case 0x7F247518u: goto label_7F247518;
    case 0x7F24751Cu: goto label_7F24751C;
    case 0x7F247520u: goto label_7F247520;
    case 0x7F247524u: goto label_7F247524;
    case 0x7F247528u: goto label_7F247528;
    case 0x7F24752Cu: goto label_7F24752C;
    case 0x7F247530u: goto label_7F247530;
    case 0x7F247534u: goto label_7F247534;
    case 0x7F247538u: goto label_7F247538;
    case 0x7F24753Cu: goto label_7F24753C;
    case 0x7F247540u: goto label_7F247540;
    case 0x7F247544u: goto label_7F247544;
    case 0x7F247548u: goto label_7F247548;
    case 0x7F24754Cu: goto label_7F24754C;
    case 0x7F247550u: goto label_7F247550;
    case 0x7F247554u: goto label_7F247554;
    case 0x7F247558u: goto label_7F247558;
    case 0x7F24755Cu: goto label_7F24755C;
    case 0x7F247560u: goto label_7F247560;
    case 0x7F247564u: goto label_7F247564;
    case 0x7F247568u: goto label_7F247568;
    case 0x7F24756Cu: goto label_7F24756C;
    case 0x7F247570u: goto label_7F247570;
    case 0x7F247574u: goto label_7F247574;
    case 0x7F247578u: goto label_7F247578;
    case 0x7F24757Cu: goto label_7F24757C;
    case 0x7F247580u: goto label_7F247580;
    case 0x7F247584u: goto label_7F247584;
    case 0x7F247588u: goto label_7F247588;
    case 0x7F24758Cu: goto label_7F24758C;
    case 0x7F247590u: goto label_7F247590;
    case 0x7F247594u: goto label_7F247594;
    case 0x7F247598u: goto label_7F247598;
    case 0x7F24759Cu: goto label_7F24759C;
    case 0x7F2475A0u: goto label_7F2475A0;
    case 0x7F2475A4u: goto label_7F2475A4;
    case 0x7F2475A8u: goto label_7F2475A8;
    case 0x7F2475ACu: goto label_7F2475AC;
    case 0x7F2475B0u: goto label_7F2475B0;
    case 0x7F2475B4u: goto label_7F2475B4;
    case 0x7F2475B8u: goto label_7F2475B8;
    case 0x7F2475BCu: goto label_7F2475BC;
    case 0x7F2475C0u: goto label_7F2475C0;
    case 0x7F2475C4u: goto label_7F2475C4;
    case 0x7F2475C8u: goto label_7F2475C8;
    case 0x7F2475CCu: goto label_7F2475CC;
    case 0x7F2475D0u: goto label_7F2475D0;
    case 0x7F2475D4u: goto label_7F2475D4;
    case 0x7F2475D8u: goto label_7F2475D8;
    case 0x7F2475DCu: goto label_7F2475DC;
    case 0x7F2475E0u: goto label_7F2475E0;
    case 0x7F2475E4u: goto label_7F2475E4;
    case 0x7F2475E8u: goto label_7F2475E8;
    case 0x7F2475ECu: goto label_7F2475EC;
    case 0x7F2475F0u: goto label_7F2475F0;
    case 0x7F2475F4u: goto label_7F2475F4;
    case 0x7F2475F8u: goto label_7F2475F8;
    case 0x7F2475FCu: goto label_7F2475FC;
    case 0x7F247600u: goto label_7F247600;
    case 0x7F247604u: goto label_7F247604;
    case 0x7F247608u: goto label_7F247608;
    case 0x7F24760Cu: goto label_7F24760C;
    case 0x7F247610u: goto label_7F247610;
    case 0x7F247614u: goto label_7F247614;
    case 0x7F247618u: goto label_7F247618;
    case 0x7F24761Cu: goto label_7F24761C;
    case 0x7F247620u: goto label_7F247620;
    case 0x7F247624u: goto label_7F247624;
    case 0x7F247628u: goto label_7F247628;
    case 0x7F24762Cu: goto label_7F24762C;
    case 0x7F247630u: goto label_7F247630;
    case 0x7F247634u: goto label_7F247634;
    case 0x7F247638u: goto label_7F247638;
    case 0x7F24763Cu: goto label_7F24763C;
    case 0x7F247640u: goto label_7F247640;
    case 0x7F247644u: goto label_7F247644;
    case 0x7F247648u: goto label_7F247648;
    case 0x7F24764Cu: goto label_7F24764C;
    case 0x7F247650u: goto label_7F247650;
    case 0x7F247654u: goto label_7F247654;
    case 0x7F247658u: goto label_7F247658;
    case 0x7F24765Cu: goto label_7F24765C;
    case 0x7F247660u: goto label_7F247660;
    case 0x7F247664u: goto label_7F247664;
    case 0x7F247668u: goto label_7F247668;
    case 0x7F24766Cu: goto label_7F24766C;
    case 0x7F247670u: goto label_7F247670;
    case 0x7F247674u: goto label_7F247674;
    case 0x7F247678u: goto label_7F247678;
    case 0x7F24767Cu: goto label_7F24767C;
    case 0x7F247680u: goto label_7F247680;
    case 0x7F247684u: goto label_7F247684;
    case 0x7F247688u: goto label_7F247688;
    case 0x7F24768Cu: goto label_7F24768C;
    case 0x7F247690u: goto label_7F247690;
    case 0x7F247694u: goto label_7F247694;
    case 0x7F247698u: goto label_7F247698;
    case 0x7F24769Cu: goto label_7F24769C;
    case 0x7F2476A0u: goto label_7F2476A0;
    case 0x7F2476A4u: goto label_7F2476A4;
    case 0x7F2476A8u: goto label_7F2476A8;
    case 0x7F2476ACu: goto label_7F2476AC;
    case 0x7F2476B0u: goto label_7F2476B0;
    case 0x7F2476B4u: goto label_7F2476B4;
    case 0x7F2476B8u: goto label_7F2476B8;
    case 0x7F2476BCu: goto label_7F2476BC;
    case 0x7F2476C0u: goto label_7F2476C0;
    case 0x7F2476C4u: goto label_7F2476C4;
    case 0x7F2476C8u: goto label_7F2476C8;
    case 0x7F2476CCu: goto label_7F2476CC;
    case 0x7F2476D0u: goto label_7F2476D0;
    case 0x7F2476D4u: goto label_7F2476D4;
    case 0x7F2476D8u: goto label_7F2476D8;
    case 0x7F2476DCu: goto label_7F2476DC;
    case 0x7F2476E0u: goto label_7F2476E0;
    case 0x7F2476E4u: goto label_7F2476E4;
    case 0x7F2476E8u: goto label_7F2476E8;
    case 0x7F2476ECu: goto label_7F2476EC;
    case 0x7F2476F0u: goto label_7F2476F0;
    case 0x7F2476F4u: goto label_7F2476F4;
    case 0x7F2476F8u: goto label_7F2476F8;
    case 0x7F2476FCu: goto label_7F2476FC;
    case 0x7F247700u: goto label_7F247700;
    case 0x7F247704u: goto label_7F247704;
    case 0x7F247708u: goto label_7F247708;
    case 0x7F24770Cu: goto label_7F24770C;
    case 0x7F247710u: goto label_7F247710;
    case 0x7F247714u: goto label_7F247714;
    case 0x7F247718u: goto label_7F247718;
    case 0x7F24771Cu: goto label_7F24771C;
    case 0x7F247720u: goto label_7F247720;
    case 0x7F247724u: goto label_7F247724;
    case 0x7F247728u: goto label_7F247728;
    case 0x7F24772Cu: goto label_7F24772C;
    case 0x7F247730u: goto label_7F247730;
    case 0x7F247734u: goto label_7F247734;
    case 0x7F247738u: goto label_7F247738;
    case 0x7F24773Cu: goto label_7F24773C;
    case 0x7F247740u: goto label_7F247740;
    case 0x7F247744u: goto label_7F247744;
    case 0x7F247748u: goto label_7F247748;
    case 0x7F24774Cu: goto label_7F24774C;
    case 0x7F247750u: goto label_7F247750;
    case 0x7F247754u: goto label_7F247754;
    case 0x7F247758u: goto label_7F247758;
    case 0x7F24775Cu: goto label_7F24775C;
    case 0x7F247760u: goto label_7F247760;
    case 0x7F247764u: goto label_7F247764;
    case 0x7F247768u: goto label_7F247768;
    case 0x7F24776Cu: goto label_7F24776C;
    case 0x7F247770u: goto label_7F247770;
    case 0x7F247774u: goto label_7F247774;
    case 0x7F247778u: goto label_7F247778;
    case 0x7F24777Cu: goto label_7F24777C;
    case 0x7F247780u: goto label_7F247780;
    case 0x7F247784u: goto label_7F247784;
    case 0x7F247788u: goto label_7F247788;
    case 0x7F24778Cu: goto label_7F24778C;
    case 0x7F247790u: goto label_7F247790;
    case 0x7F247794u: goto label_7F247794;
    case 0x7F247798u: goto label_7F247798;
    case 0x7F24779Cu: goto label_7F24779C;
    case 0x7F2477A0u: goto label_7F2477A0;
    case 0x7F2477A4u: goto label_7F2477A4;
    case 0x7F2477A8u: goto label_7F2477A8;
    case 0x7F2477ACu: goto label_7F2477AC;
    case 0x7F2477B0u: goto label_7F2477B0;
    case 0x7F2477B4u: goto label_7F2477B4;
    case 0x7F2477B8u: goto label_7F2477B8;
    case 0x7F2477BCu: goto label_7F2477BC;
    case 0x7F2477C0u: goto label_7F2477C0;
    case 0x7F2477C4u: goto label_7F2477C4;
    case 0x7F2477C8u: goto label_7F2477C8;
    case 0x7F2477CCu: goto label_7F2477CC;
    case 0x7F2477D0u: goto label_7F2477D0;
    case 0x7F2477D4u: goto label_7F2477D4;
    case 0x7F2477D8u: goto label_7F2477D8;
    case 0x7F2477DCu: goto label_7F2477DC;
    case 0x7F2477E0u: goto label_7F2477E0;
    case 0x7F2477E4u: goto label_7F2477E4;
    case 0x7F2477E8u: goto label_7F2477E8;
    case 0x7F2477ECu: goto label_7F2477EC;
    case 0x7F2477F0u: goto label_7F2477F0;
    case 0x7F2477F4u: goto label_7F2477F4;
    case 0x7F2477F8u: goto label_7F2477F8;
    case 0x7F2477FCu: goto label_7F2477FC;
    case 0x7F247800u: goto label_7F247800;
    case 0x7F247804u: goto label_7F247804;
    case 0x7F247808u: goto label_7F247808;
    case 0x7F24780Cu: goto label_7F24780C;
    case 0x7F247810u: goto label_7F247810;
    case 0x7F247814u: goto label_7F247814;
    case 0x7F247818u: goto label_7F247818;
    case 0x7F24781Cu: goto label_7F24781C;
    case 0x7F247820u: goto label_7F247820;
    case 0x7F247824u: goto label_7F247824;
    case 0x7F247828u: goto label_7F247828;
    case 0x7F24782Cu: goto label_7F24782C;
    case 0x7F247830u: goto label_7F247830;
    case 0x7F247834u: goto label_7F247834;
    case 0x7F247838u: goto label_7F247838;
    case 0x7F24783Cu: goto label_7F24783C;
    case 0x7F247840u: goto label_7F247840;
    case 0x7F247844u: goto label_7F247844;
    case 0x7F247848u: goto label_7F247848;
    case 0x7F24784Cu: goto label_7F24784C;
    case 0x7F247850u: goto label_7F247850;
    case 0x7F247854u: goto label_7F247854;
    case 0x7F247858u: goto label_7F247858;
    case 0x7F24785Cu: goto label_7F24785C;
    case 0x7F247860u: goto label_7F247860;
    case 0x7F247864u: goto label_7F247864;
    case 0x7F247868u: goto label_7F247868;
    case 0x7F24786Cu: goto label_7F24786C;
    case 0x7F247870u: goto label_7F247870;
    case 0x7F247874u: goto label_7F247874;
    case 0x7F247878u: goto label_7F247878;
    case 0x7F24787Cu: goto label_7F24787C;
    case 0x7F247880u: goto label_7F247880;
    case 0x7F247884u: goto label_7F247884;
    case 0x7F247888u: goto label_7F247888;
    case 0x7F24788Cu: goto label_7F24788C;
    case 0x7F247890u: goto label_7F247890;
    case 0x7F247894u: goto label_7F247894;
    case 0x7F247898u: goto label_7F247898;
    case 0x7F24789Cu: goto label_7F24789C;
    case 0x7F2478A0u: goto label_7F2478A0;
    case 0x7F2478A4u: goto label_7F2478A4;
    case 0x7F2478A8u: goto label_7F2478A8;
    case 0x7F2478ACu: goto label_7F2478AC;
    case 0x7F2478B0u: goto label_7F2478B0;
    case 0x7F2478B4u: goto label_7F2478B4;
    case 0x7F2478B8u: goto label_7F2478B8;
    case 0x7F2478BCu: goto label_7F2478BC;
    case 0x7F2478C0u: goto label_7F2478C0;
    case 0x7F2478C4u: goto label_7F2478C4;
    case 0x7F2478C8u: goto label_7F2478C8;
    case 0x7F2478CCu: goto label_7F2478CC;
    case 0x7F2478D0u: goto label_7F2478D0;
    case 0x7F2478D4u: goto label_7F2478D4;
    case 0x7F2478D8u: goto label_7F2478D8;
    case 0x7F2478DCu: goto label_7F2478DC;
    case 0x7F2478E0u: goto label_7F2478E0;
    case 0x7F2478E4u: goto label_7F2478E4;
    case 0x7F2478E8u: goto label_7F2478E8;
    case 0x7F2478ECu: goto label_7F2478EC;
    case 0x7F2478F0u: goto label_7F2478F0;
    case 0x7F2478F4u: goto label_7F2478F4;
    case 0x7F2478F8u: goto label_7F2478F8;
    case 0x7F2478FCu: goto label_7F2478FC;
    case 0x7F247900u: goto label_7F247900;
    case 0x7F247904u: goto label_7F247904;
    case 0x7F247908u: goto label_7F247908;
    case 0x7F24790Cu: goto label_7F24790C;
    case 0x7F247910u: goto label_7F247910;
    case 0x7F247914u: goto label_7F247914;
    case 0x7F247918u: goto label_7F247918;
    case 0x7F24791Cu: goto label_7F24791C;
    case 0x7F247920u: goto label_7F247920;
    case 0x7F247924u: goto label_7F247924;
    case 0x7F247928u: goto label_7F247928;
    case 0x7F24792Cu: goto label_7F24792C;
    case 0x7F247930u: goto label_7F247930;
    case 0x7F247934u: goto label_7F247934;
    case 0x7F247938u: goto label_7F247938;
    case 0x7F24793Cu: goto label_7F24793C;
    case 0x7F247940u: goto label_7F247940;
    case 0x7F247944u: goto label_7F247944;
    case 0x7F247948u: goto label_7F247948;
    case 0x7F24794Cu: goto label_7F24794C;
    case 0x7F247950u: goto label_7F247950;
    case 0x7F247954u: goto label_7F247954;
    case 0x7F247958u: goto label_7F247958;
    case 0x7F24795Cu: goto label_7F24795C;
    case 0x7F247960u: goto label_7F247960;
    case 0x7F247964u: goto label_7F247964;
    case 0x7F247968u: goto label_7F247968;
    case 0x7F24796Cu: goto label_7F24796C;
    case 0x7F247970u: goto label_7F247970;
    case 0x7F247974u: goto label_7F247974;
    case 0x7F247978u: goto label_7F247978;
    case 0x7F24797Cu: goto label_7F24797C;
    case 0x7F247980u: goto label_7F247980;
    case 0x7F247984u: goto label_7F247984;
    case 0x7F247988u: goto label_7F247988;
    case 0x7F24798Cu: goto label_7F24798C;
    case 0x7F247990u: goto label_7F247990;
    case 0x7F247994u: goto label_7F247994;
    case 0x7F247998u: goto label_7F247998;
    case 0x7F24799Cu: goto label_7F24799C;
    case 0x7F2479A0u: goto label_7F2479A0;
    case 0x7F2479A4u: goto label_7F2479A4;
    case 0x7F2479A8u: goto label_7F2479A8;
    case 0x7F2479ACu: goto label_7F2479AC;
    case 0x7F2479B0u: goto label_7F2479B0;
    case 0x7F2479B4u: goto label_7F2479B4;
    case 0x7F2479B8u: goto label_7F2479B8;
    case 0x7F2479BCu: goto label_7F2479BC;
    case 0x7F2479C0u: goto label_7F2479C0;
    case 0x7F2479C4u: goto label_7F2479C4;
    case 0x7F2479C8u: goto label_7F2479C8;
    case 0x7F2479CCu: goto label_7F2479CC;
    case 0x7F2479D0u: goto label_7F2479D0;
    case 0x7F2479D4u: goto label_7F2479D4;
    case 0x7F2479D8u: goto label_7F2479D8;
    case 0x7F2479DCu: goto label_7F2479DC;
    case 0x7F2479E0u: goto label_7F2479E0;
    case 0x7F2479E4u: goto label_7F2479E4;
    case 0x7F2479E8u: goto label_7F2479E8;
    case 0x7F2479ECu: goto label_7F2479EC;
    case 0x7F2479F0u: goto label_7F2479F0;
    case 0x7F2479F4u: goto label_7F2479F4;
    case 0x7F2479F8u: goto label_7F2479F8;
    case 0x7F2479FCu: goto label_7F2479FC;
    case 0x7F247A00u: goto label_7F247A00;
    case 0x7F247A04u: goto label_7F247A04;
    case 0x7F247A08u: goto label_7F247A08;
    case 0x7F247A0Cu: goto label_7F247A0C;
    case 0x7F247A10u: goto label_7F247A10;
    case 0x7F247A14u: goto label_7F247A14;
    case 0x7F247A18u: goto label_7F247A18;
    case 0x7F247A1Cu: goto label_7F247A1C;
    case 0x7F247A20u: goto label_7F247A20;
    case 0x7F247A24u: goto label_7F247A24;
    case 0x7F247A28u: goto label_7F247A28;
    case 0x7F247A2Cu: goto label_7F247A2C;
    case 0x7F247A30u: goto label_7F247A30;
    case 0x7F247A34u: goto label_7F247A34;
    case 0x7F247A38u: goto label_7F247A38;
    case 0x7F247A3Cu: goto label_7F247A3C;
    case 0x7F247A40u: goto label_7F247A40;
    case 0x7F247A44u: goto label_7F247A44;
    case 0x7F247A48u: goto label_7F247A48;
    case 0x7F247A4Cu: goto label_7F247A4C;
    case 0x7F247A50u: goto label_7F247A50;
    case 0x7F247A54u: goto label_7F247A54;
    case 0x7F247A58u: goto label_7F247A58;
    case 0x7F247A5Cu: goto label_7F247A5C;
    case 0x7F247A60u: goto label_7F247A60;
    case 0x7F247A64u: goto label_7F247A64;
    case 0x7F247A68u: goto label_7F247A68;
    case 0x7F247A6Cu: goto label_7F247A6C;
    case 0x7F247A70u: goto label_7F247A70;
    case 0x7F247A74u: goto label_7F247A74;
    case 0x7F247A78u: goto label_7F247A78;
    case 0x7F247A7Cu: goto label_7F247A7C;
    case 0x7F247A80u: goto label_7F247A80;
    case 0x7F247A84u: goto label_7F247A84;
    case 0x7F247A88u: goto label_7F247A88;
    case 0x7F247A8Cu: goto label_7F247A8C;
    case 0x7F247A90u: goto label_7F247A90;
    case 0x7F247A94u: goto label_7F247A94;
    case 0x7F247A98u: goto label_7F247A98;
    case 0x7F247A9Cu: goto label_7F247A9C;
    case 0x7F247AA0u: goto label_7F247AA0;
    case 0x7F247AA4u: goto label_7F247AA4;
    case 0x7F247AA8u: goto label_7F247AA8;
    case 0x7F247AACu: goto label_7F247AAC;
    case 0x7F247AB0u: goto label_7F247AB0;
    case 0x7F247AB4u: goto label_7F247AB4;
    case 0x7F247AB8u: goto label_7F247AB8;
    case 0x7F247ABCu: goto label_7F247ABC;
    case 0x7F247AC0u: goto label_7F247AC0;
    case 0x7F247AC4u: goto label_7F247AC4;
    case 0x7F247AC8u: goto label_7F247AC8;
    case 0x7F247ACCu: goto label_7F247ACC;
    case 0x7F247AD0u: goto label_7F247AD0;
    case 0x7F247AD4u: goto label_7F247AD4;
    case 0x7F247AD8u: goto label_7F247AD8;
    case 0x7F247ADCu: goto label_7F247ADC;
    case 0x7F247AE0u: goto label_7F247AE0;
    case 0x7F247AE4u: goto label_7F247AE4;
    case 0x7F247AE8u: goto label_7F247AE8;
    case 0x7F247AECu: goto label_7F247AEC;
    case 0x7F247AF0u: goto label_7F247AF0;
    case 0x7F247AF4u: goto label_7F247AF4;
    case 0x7F247AF8u: goto label_7F247AF8;
    case 0x7F247AFCu: goto label_7F247AFC;
    case 0x7F247B00u: goto label_7F247B00;
    case 0x7F247B04u: goto label_7F247B04;
    case 0x7F247B08u: goto label_7F247B08;
    case 0x7F247B0Cu: goto label_7F247B0C;
    case 0x7F247B10u: goto label_7F247B10;
    case 0x7F247B14u: goto label_7F247B14;
    case 0x7F247B18u: goto label_7F247B18;
    case 0x7F247B1Cu: goto label_7F247B1C;
    case 0x7F247B20u: goto label_7F247B20;
    case 0x7F247B24u: goto label_7F247B24;
    case 0x7F247B28u: goto label_7F247B28;
    case 0x7F247B2Cu: goto label_7F247B2C;
    case 0x7F247B30u: goto label_7F247B30;
    case 0x7F247B34u: goto label_7F247B34;
    case 0x7F247B38u: goto label_7F247B38;
    case 0x7F247B3Cu: goto label_7F247B3C;
    case 0x7F247B40u: goto label_7F247B40;
    case 0x7F247B44u: goto label_7F247B44;
    case 0x7F247B48u: goto label_7F247B48;
    case 0x7F247B4Cu: goto label_7F247B4C;
    case 0x7F247B50u: goto label_7F247B50;
    case 0x7F247B54u: goto label_7F247B54;
    case 0x7F247B58u: goto label_7F247B58;
    case 0x7F247B5Cu: goto label_7F247B5C;
    case 0x7F247B60u: goto label_7F247B60;
    case 0x7F247B64u: goto label_7F247B64;
    case 0x7F247B68u: goto label_7F247B68;
    case 0x7F247B6Cu: goto label_7F247B6C;
    case 0x7F247B70u: goto label_7F247B70;
    case 0x7F247B74u: goto label_7F247B74;
    case 0x7F247B78u: goto label_7F247B78;
    case 0x7F247B7Cu: goto label_7F247B7C;
    case 0x7F247B80u: goto label_7F247B80;
    case 0x7F247B84u: goto label_7F247B84;
    case 0x7F247B88u: goto label_7F247B88;
    case 0x7F247B8Cu: goto label_7F247B8C;
    case 0x7F247B90u: goto label_7F247B90;
    case 0x7F247B94u: goto label_7F247B94;
    case 0x7F247B98u: goto label_7F247B98;
    case 0x7F247B9Cu: goto label_7F247B9C;
    case 0x7F247BA0u: goto label_7F247BA0;
    case 0x7F247BA4u: goto label_7F247BA4;
    case 0x7F247BA8u: goto label_7F247BA8;
    case 0x7F247BACu: goto label_7F247BAC;
    case 0x7F247BB0u: goto label_7F247BB0;
    case 0x7F247BB4u: goto label_7F247BB4;
    case 0x7F247BB8u: goto label_7F247BB8;
    case 0x7F247BBCu: goto label_7F247BBC;
    case 0x7F247BC0u: goto label_7F247BC0;
    case 0x7F247BC4u: goto label_7F247BC4;
    case 0x7F247BC8u: goto label_7F247BC8;
    case 0x7F247BCCu: goto label_7F247BCC;
    case 0x7F247BD0u: goto label_7F247BD0;
    case 0x7F247BD4u: goto label_7F247BD4;
    case 0x7F247BD8u: goto label_7F247BD8;
    case 0x7F247BDCu: goto label_7F247BDC;
    case 0x7F247BE0u: goto label_7F247BE0;
    case 0x7F247BE4u: goto label_7F247BE4;
    case 0x7F247BE8u: goto label_7F247BE8;
    case 0x7F247BECu: goto label_7F247BEC;
    case 0x7F247BF0u: goto label_7F247BF0;
    case 0x7F247BF4u: goto label_7F247BF4;
    case 0x7F247BF8u: goto label_7F247BF8;
    case 0x7F247BFCu: goto label_7F247BFC;
    case 0x7F247C00u: goto label_7F247C00;
    case 0x7F247C04u: goto label_7F247C04;
    case 0x7F247C08u: goto label_7F247C08;
    case 0x7F247C0Cu: goto label_7F247C0C;
    case 0x7F247C10u: goto label_7F247C10;
    case 0x7F247C14u: goto label_7F247C14;
    case 0x7F247C18u: goto label_7F247C18;
    case 0x7F247C1Cu: goto label_7F247C1C;
    case 0x7F247C20u: goto label_7F247C20;
    case 0x7F247C24u: goto label_7F247C24;
    case 0x7F247C28u: goto label_7F247C28;
    case 0x7F247C2Cu: goto label_7F247C2C;
    case 0x7F247C30u: goto label_7F247C30;
    case 0x7F247C34u: goto label_7F247C34;
    case 0x7F247C38u: goto label_7F247C38;
    case 0x7F247C3Cu: goto label_7F247C3C;
    case 0x7F247C40u: goto label_7F247C40;
    case 0x7F247C44u: goto label_7F247C44;
    case 0x7F247C48u: goto label_7F247C48;
    case 0x7F247C4Cu: goto label_7F247C4C;
    case 0x7F247C50u: goto label_7F247C50;
    case 0x7F247C54u: goto label_7F247C54;
    case 0x7F247C58u: goto label_7F247C58;
    case 0x7F247C5Cu: goto label_7F247C5C;
    case 0x7F247C60u: goto label_7F247C60;
    case 0x7F247C64u: goto label_7F247C64;
    case 0x7F247C68u: goto label_7F247C68;
    case 0x7F247C6Cu: goto label_7F247C6C;
    case 0x7F247C70u: goto label_7F247C70;
    case 0x7F247C74u: goto label_7F247C74;
    case 0x7F247C78u: goto label_7F247C78;
    case 0x7F247C7Cu: goto label_7F247C7C;
    case 0x7F247C80u: goto label_7F247C80;
    case 0x7F247C84u: goto label_7F247C84;
    case 0x7F247C88u: goto label_7F247C88;
    case 0x7F247C8Cu: goto label_7F247C8C;
    case 0x7F247C90u: goto label_7F247C90;
    case 0x7F247C94u: goto label_7F247C94;
    case 0x7F247C98u: goto label_7F247C98;
    case 0x7F247C9Cu: goto label_7F247C9C;
    case 0x7F247CA0u: goto label_7F247CA0;
    case 0x7F247CA4u: goto label_7F247CA4;
    case 0x7F247CA8u: goto label_7F247CA8;
    case 0x7F247CACu: goto label_7F247CAC;
    case 0x7F247CB0u: goto label_7F247CB0;
    case 0x7F247CB4u: goto label_7F247CB4;
    case 0x7F247CB8u: goto label_7F247CB8;
    case 0x7F247CBCu: goto label_7F247CBC;
    case 0x7F247CC0u: goto label_7F247CC0;
    case 0x7F247CC4u: goto label_7F247CC4;
    case 0x7F247CC8u: goto label_7F247CC8;
    case 0x7F247CCCu: goto label_7F247CCC;
    case 0x7F247CD0u: goto label_7F247CD0;
    case 0x7F247CD4u: goto label_7F247CD4;
    case 0x7F247CD8u: goto label_7F247CD8;
    case 0x7F247CDCu: goto label_7F247CDC;
    case 0x7F247CE0u: goto label_7F247CE0;
    case 0x7F247CE4u: goto label_7F247CE4;
    case 0x7F247CE8u: goto label_7F247CE8;
    case 0x7F247CECu: goto label_7F247CEC;
    case 0x7F247CF0u: goto label_7F247CF0;
    case 0x7F247CF4u: goto label_7F247CF4;
    case 0x7F247CF8u: goto label_7F247CF8;
    case 0x7F247CFCu: goto label_7F247CFC;
    case 0x7F247D00u: goto label_7F247D00;
    case 0x7F247D04u: goto label_7F247D04;
    case 0x7F247D08u: goto label_7F247D08;
    case 0x7F247D0Cu: goto label_7F247D0C;
    case 0x7F247D10u: goto label_7F247D10;
    case 0x7F247D14u: goto label_7F247D14;
    case 0x7F247D18u: goto label_7F247D18;
    case 0x7F247D1Cu: goto label_7F247D1C;
    case 0x7F247D20u: goto label_7F247D20;
    case 0x7F247D24u: goto label_7F247D24;
    case 0x7F247D28u: goto label_7F247D28;
    case 0x7F247D2Cu: goto label_7F247D2C;
    case 0x7F247D30u: goto label_7F247D30;
    case 0x7F247D34u: goto label_7F247D34;
    case 0x7F247D38u: goto label_7F247D38;
    case 0x7F247D3Cu: goto label_7F247D3C;
    case 0x7F247D40u: goto label_7F247D40;
    case 0x7F247D44u: goto label_7F247D44;
    case 0x7F247D48u: goto label_7F247D48;
    case 0x7F247D4Cu: goto label_7F247D4C;
    case 0x7F247D50u: goto label_7F247D50;
    case 0x7F247D54u: goto label_7F247D54;
    case 0x7F247D58u: goto label_7F247D58;
    case 0x7F247D5Cu: goto label_7F247D5C;
    case 0x7F247D60u: goto label_7F247D60;
    case 0x7F247D64u: goto label_7F247D64;
    case 0x7F247D68u: goto label_7F247D68;
    case 0x7F247D6Cu: goto label_7F247D6C;
    case 0x7F247D70u: goto label_7F247D70;
    case 0x7F247D74u: goto label_7F247D74;
    case 0x7F247D78u: goto label_7F247D78;
    case 0x7F247D7Cu: goto label_7F247D7C;
    case 0x7F247D80u: goto label_7F247D80;
    case 0x7F247D84u: goto label_7F247D84;
    case 0x7F247D88u: goto label_7F247D88;
    case 0x7F247D8Cu: goto label_7F247D8C;
    case 0x7F247D90u: goto label_7F247D90;
    case 0x7F247D94u: goto label_7F247D94;
    case 0x7F247D98u: goto label_7F247D98;
    case 0x7F247D9Cu: goto label_7F247D9C;
    case 0x7F247DA0u: goto label_7F247DA0;
    case 0x7F247DA4u: goto label_7F247DA4;
    case 0x7F247DA8u: goto label_7F247DA8;
    case 0x7F247DACu: goto label_7F247DAC;
    case 0x7F247DB0u: goto label_7F247DB0;
    case 0x7F247DB4u: goto label_7F247DB4;
    case 0x7F247DB8u: goto label_7F247DB8;
    case 0x7F247DBCu: goto label_7F247DBC;
    case 0x7F247DC0u: goto label_7F247DC0;
    case 0x7F247DC4u: goto label_7F247DC4;
    case 0x7F247DC8u: goto label_7F247DC8;
    case 0x7F247DCCu: goto label_7F247DCC;
    case 0x7F247DD0u: goto label_7F247DD0;
    case 0x7F247DD4u: goto label_7F247DD4;
    case 0x7F247DD8u: goto label_7F247DD8;
    case 0x7F247DDCu: goto label_7F247DDC;
    case 0x7F247DE0u: goto label_7F247DE0;
    case 0x7F247DE4u: goto label_7F247DE4;
    case 0x7F247DE8u: goto label_7F247DE8;
    case 0x7F247DECu: goto label_7F247DEC;
    case 0x7F247DF0u: goto label_7F247DF0;
    case 0x7F247DF4u: goto label_7F247DF4;
    case 0x7F247DF8u: goto label_7F247DF8;
    case 0x7F247DFCu: goto label_7F247DFC;
    case 0x7F247E00u: goto label_7F247E00;
    case 0x7F247E04u: goto label_7F247E04;
    case 0x7F247E08u: goto label_7F247E08;
    case 0x7F247E0Cu: goto label_7F247E0C;
    case 0x7F247E10u: goto label_7F247E10;
    case 0x7F247E14u: goto label_7F247E14;
    case 0x7F247E18u: goto label_7F247E18;
    case 0x7F247E1Cu: goto label_7F247E1C;
    case 0x7F247E20u: goto label_7F247E20;
    case 0x7F247E24u: goto label_7F247E24;
    case 0x7F247E28u: goto label_7F247E28;
    case 0x7F247E2Cu: goto label_7F247E2C;
    case 0x7F247E30u: goto label_7F247E30;
    case 0x7F247E34u: goto label_7F247E34;
    case 0x7F247E38u: goto label_7F247E38;
    case 0x7F247E3Cu: goto label_7F247E3C;
    case 0x7F247E40u: goto label_7F247E40;
    case 0x7F247E44u: goto label_7F247E44;
    case 0x7F247E48u: goto label_7F247E48;
    case 0x7F247E4Cu: goto label_7F247E4C;
    case 0x7F247E50u: goto label_7F247E50;
    case 0x7F247E54u: goto label_7F247E54;
    case 0x7F247E58u: goto label_7F247E58;
    case 0x7F247E5Cu: goto label_7F247E5C;
    case 0x7F247E60u: goto label_7F247E60;
    case 0x7F247E64u: goto label_7F247E64;
    case 0x7F247E68u: goto label_7F247E68;
    case 0x7F247E6Cu: goto label_7F247E6C;
    case 0x7F247E70u: goto label_7F247E70;
    case 0x7F247E74u: goto label_7F247E74;
    case 0x7F247E78u: goto label_7F247E78;
    case 0x7F247E7Cu: goto label_7F247E7C;
    case 0x7F247E80u: goto label_7F247E80;
    case 0x7F247E84u: goto label_7F247E84;
    case 0x7F247E88u: goto label_7F247E88;
    case 0x7F247E8Cu: goto label_7F247E8C;
    case 0x7F247E90u: goto label_7F247E90;
    case 0x7F247E94u: goto label_7F247E94;
    case 0x7F247E98u: goto label_7F247E98;
    case 0x7F247E9Cu: goto label_7F247E9C;
    case 0x7F247EA0u: goto label_7F247EA0;
    case 0x7F247EA4u: goto label_7F247EA4;
    case 0x7F247EA8u: goto label_7F247EA8;
    case 0x7F247EACu: goto label_7F247EAC;
    case 0x7F247EB0u: goto label_7F247EB0;
    case 0x7F247EB4u: goto label_7F247EB4;
    case 0x7F247EB8u: goto label_7F247EB8;
    case 0x7F247EBCu: goto label_7F247EBC;
    case 0x7F247EC0u: goto label_7F247EC0;
    case 0x7F247EC4u: goto label_7F247EC4;
    case 0x7F247EC8u: goto label_7F247EC8;
    case 0x7F247ECCu: goto label_7F247ECC;
    case 0x7F247ED0u: goto label_7F247ED0;
    case 0x7F247ED4u: goto label_7F247ED4;
    case 0x7F247ED8u: goto label_7F247ED8;
    case 0x7F247EDCu: goto label_7F247EDC;
    case 0x7F247EE0u: goto label_7F247EE0;
    case 0x7F247EE4u: goto label_7F247EE4;
    case 0x7F247EE8u: goto label_7F247EE8;
    case 0x7F247EECu: goto label_7F247EEC;
    case 0x7F247EF0u: goto label_7F247EF0;
    case 0x7F247EF4u: goto label_7F247EF4;
    case 0x7F247EF8u: goto label_7F247EF8;
    case 0x7F247EFCu: goto label_7F247EFC;
    case 0x7F247F00u: goto label_7F247F00;
    case 0x7F247F04u: goto label_7F247F04;
    case 0x7F247F08u: goto label_7F247F08;
    case 0x7F247F0Cu: goto label_7F247F0C;
    case 0x7F247F10u: goto label_7F247F10;
    case 0x7F247F14u: goto label_7F247F14;
    case 0x7F247F18u: goto label_7F247F18;
    case 0x7F247F1Cu: goto label_7F247F1C;
    case 0x7F247F20u: goto label_7F247F20;
    case 0x7F247F24u: goto label_7F247F24;
    case 0x7F247F28u: goto label_7F247F28;
    case 0x7F247F2Cu: goto label_7F247F2C;
    case 0x7F247F30u: goto label_7F247F30;
    case 0x7F247F34u: goto label_7F247F34;
    case 0x7F247F38u: goto label_7F247F38;
    case 0x7F247F3Cu: goto label_7F247F3C;
    case 0x7F247F40u: goto label_7F247F40;
    case 0x7F247F44u: goto label_7F247F44;
    case 0x7F247F48u: goto label_7F247F48;
    case 0x7F247F4Cu: goto label_7F247F4C;
    case 0x7F247F50u: goto label_7F247F50;
    case 0x7F247F54u: goto label_7F247F54;
    case 0x7F247F58u: goto label_7F247F58;
    case 0x7F247F5Cu: goto label_7F247F5C;
    case 0x7F247F60u: goto label_7F247F60;
    case 0x7F247F64u: goto label_7F247F64;
    case 0x7F247F68u: goto label_7F247F68;
    case 0x7F247F6Cu: goto label_7F247F6C;
    case 0x7F247F70u: goto label_7F247F70;
    case 0x7F247F74u: goto label_7F247F74;
    case 0x7F247F78u: goto label_7F247F78;
    case 0x7F247F7Cu: goto label_7F247F7C;
    case 0x7F247F80u: goto label_7F247F80;
    case 0x7F247F84u: goto label_7F247F84;
    case 0x7F247F88u: goto label_7F247F88;
    case 0x7F247F8Cu: goto label_7F247F8C;
    case 0x7F247F90u: goto label_7F247F90;
    case 0x7F247F94u: goto label_7F247F94;
    case 0x7F247F98u: goto label_7F247F98;
    case 0x7F247F9Cu: goto label_7F247F9C;
    case 0x7F247FA0u: goto label_7F247FA0;
    case 0x7F247FA4u: goto label_7F247FA4;
    case 0x7F247FA8u: goto label_7F247FA8;
    case 0x7F247FACu: goto label_7F247FAC;
    case 0x7F247FB0u: goto label_7F247FB0;
    case 0x7F247FB4u: goto label_7F247FB4;
    case 0x7F247FB8u: goto label_7F247FB8;
    case 0x7F247FBCu: goto label_7F247FBC;
    case 0x7F247FC0u: goto label_7F247FC0;
    case 0x7F247FC4u: goto label_7F247FC4;
    case 0x7F247FC8u: goto label_7F247FC8;
    case 0x7F247FCCu: goto label_7F247FCC;
    case 0x7F247FD0u: goto label_7F247FD0;
    case 0x7F247FD4u: goto label_7F247FD4;
    case 0x7F247FD8u: goto label_7F247FD8;
    case 0x7F247FDCu: goto label_7F247FDC;
    case 0x7F247FE0u: goto label_7F247FE0;
    case 0x7F247FE4u: goto label_7F247FE4;
    case 0x7F247FE8u: goto label_7F247FE8;
    case 0x7F247FECu: goto label_7F247FEC;
    case 0x7F247FF0u: goto label_7F247FF0;
    case 0x7F247FF4u: goto label_7F247FF4;
    case 0x7F247FF8u: goto label_7F247FF8;
    case 0x7F247FFCu: goto label_7F247FFC;
    case 0x7F248000u: goto label_7F248000;
    case 0x7F248004u: goto label_7F248004;
    case 0x7F248008u: goto label_7F248008;
    case 0x7F24800Cu: goto label_7F24800C;
    case 0x7F248010u: goto label_7F248010;
    case 0x7F248014u: goto label_7F248014;
    case 0x7F248018u: goto label_7F248018;
    case 0x7F24801Cu: goto label_7F24801C;
    case 0x7F248020u: goto label_7F248020;
    case 0x7F248024u: goto label_7F248024;
    case 0x7F248028u: goto label_7F248028;
    case 0x7F24802Cu: goto label_7F24802C;
    case 0x7F248030u: goto label_7F248030;
    case 0x7F248034u: goto label_7F248034;
    case 0x7F248038u: goto label_7F248038;
    case 0x7F24803Cu: goto label_7F24803C;
    case 0x7F248040u: goto label_7F248040;
    case 0x7F248044u: goto label_7F248044;
    case 0x7F248048u: goto label_7F248048;
    case 0x7F24804Cu: goto label_7F24804C;
    case 0x7F248050u: goto label_7F248050;
    case 0x7F248054u: goto label_7F248054;
    case 0x7F248058u: goto label_7F248058;
    case 0x7F24805Cu: goto label_7F24805C;
    case 0x7F248060u: goto label_7F248060;
    case 0x7F248064u: goto label_7F248064;
    case 0x7F248068u: goto label_7F248068;
    case 0x7F24806Cu: goto label_7F24806C;
    case 0x7F248070u: goto label_7F248070;
    case 0x7F248074u: goto label_7F248074;
    case 0x7F248078u: goto label_7F248078;
    case 0x7F24807Cu: goto label_7F24807C;
    case 0x7F248080u: goto label_7F248080;
    case 0x7F248084u: goto label_7F248084;
    case 0x7F248088u: goto label_7F248088;
    case 0x7F24808Cu: goto label_7F24808C;
    case 0x7F248090u: goto label_7F248090;
    case 0x7F248094u: goto label_7F248094;
    case 0x7F248098u: goto label_7F248098;
    case 0x7F24809Cu: goto label_7F24809C;
    case 0x7F2480A0u: goto label_7F2480A0;
    case 0x7F2480A4u: goto label_7F2480A4;
    case 0x7F2480A8u: goto label_7F2480A8;
    case 0x7F2480ACu: goto label_7F2480AC;
    case 0x7F2480B0u: goto label_7F2480B0;
    case 0x7F2480B4u: goto label_7F2480B4;
    case 0x7F2480B8u: goto label_7F2480B8;
    case 0x7F2480BCu: goto label_7F2480BC;
    case 0x7F2480C0u: goto label_7F2480C0;
    case 0x7F2480C4u: goto label_7F2480C4;
    case 0x7F2480C8u: goto label_7F2480C8;
    case 0x7F2480CCu: goto label_7F2480CC;
    case 0x7F2480D0u: goto label_7F2480D0;
    case 0x7F2480D4u: goto label_7F2480D4;
    case 0x7F2480D8u: goto label_7F2480D8;
    case 0x7F2480DCu: goto label_7F2480DC;
    case 0x7F2480E0u: goto label_7F2480E0;
    case 0x7F2480E4u: goto label_7F2480E4;
    case 0x7F2480E8u: goto label_7F2480E8;
    default: return;
    }
label_7F2440EC:
    ctx->pc = 0x7F2440ECu;
    ctx->downcount -= 2;
    // 7F2440EC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2440F0:
    ctx->pc = 0x7F2440F0u;
    // 7F2440F0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F2440F4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F2440F4:
    ctx->pc = 0x7F2440F4u;
    ctx->downcount -= 6;
    // 7F2440F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2440F8:
    ctx->pc = 0x7F2440F8u;
    // 7F2440F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2440FC:
    ctx->pc = 0x7F2440FCu;
    // 7F2440FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244100:
    ctx->pc = 0x7F244100u;
    // 7F244100: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244104:
    ctx->pc = 0x7F244104u;
    // 7F244104: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244108:
    ctx->pc = 0x7F244108u;
    ctx->downcount -= 4;
    // 7F244108: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24410C:
    ctx->pc = 0x7F24410Cu;
    // 7F24410C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244110:
    ctx->pc = 0x7F244110u;
    // 7F244110: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244114:
    ctx->pc = 0x7F244114u;
    // 7F244114: bl      0x7F243CF8
    {
            ctx->lr = 0x7F244118u;
            ctx->pc = 0x7F243CF8u;
            return;
    }

label_7F244118:
    ctx->pc = 0x7F244118u;
    ctx->downcount -= 5;
    // 7F244118: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24411C:
    ctx->pc = 0x7F24411Cu;
    // 7F24411C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244120:
    ctx->pc = 0x7F244120u;
    // 7F244120: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244124:
    ctx->pc = 0x7F244124u;
    // 7F244124: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244128:
    ctx->pc = 0x7F244128u;
    ctx->downcount -= 8;
    // 7F244128: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24412C:
    ctx->pc = 0x7F24412Cu;
    // 7F24412C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244130:
    ctx->pc = 0x7F244130u;
    // 7F244130: or   r5, r7, r7
    {
        ctx->gpr[5] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F244134:
    ctx->pc = 0x7F244134u;
    // 7F244134: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244138:
    ctx->pc = 0x7F244138u;
    // 7F244138: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F24413C:
    ctx->pc = 0x7F24413Cu;
    // 7F24413C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244140:
    ctx->pc = 0x7F244140u;
    // 7F244140: stw     r7, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F244144:
    ctx->pc = 0x7F244144u;
    // 7F244144: bl      0x7F244108
    {
            ctx->lr = 0x7F244148u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244108u;
                return;
            }
            goto label_7F244108;
    }

label_7F244148:
    ctx->pc = 0x7F244148u;
    ctx->downcount -= 2;
    // 7F244148: li      r3, 513
    ctx->gpr[3] = (u32)(s32)(513);

label_7F24414C:
    ctx->pc = 0x7F24414Cu;
    // 7F24414C: bl      0x7F24408C
    {
            ctx->lr = 0x7F244150u;
            ctx->pc = 0x7F24408Cu;
            return;
    }

label_7F244150:
    ctx->pc = 0x7F244150u;
    ctx->downcount -= 26;
    // 7F244150: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F244154:
    ctx->pc = 0x7F244154u;
    // 7F244154: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F244158:
    ctx->pc = 0x7F244158u;
    // 7F244158: addi    r8, r3, -5852
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-5852);

label_7F24415C:
    ctx->pc = 0x7F24415Cu;
    // 7F24415C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F244160:
    ctx->pc = 0x7F244160u;
    // 7F244160: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244164:
    ctx->pc = 0x7F244164u;
    // 7F244164: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F244168:
    ctx->pc = 0x7F244168u;
    // 7F244168: addi    r4, r3, 15028
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15028);

label_7F24416C:
    ctx->pc = 0x7F24416Cu;
    // 7F24416C: mulli   r7, r0, 44
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F244170:
    ctx->pc = 0x7F244170u;
    // 7F244170: addi    r3, r6, 14256
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(14256);

label_7F244174:
    ctx->pc = 0x7F244174u;
    // 7F244174: addi    r6, r5, -5768
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-5768);

label_7F244178:
    ctx->pc = 0x7F244178u;
    // 7F244178: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24417C:
    ctx->pc = 0x7F24417Cu;
    // 7F24417C: add   r7, r3, r7
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F244180:
    ctx->pc = 0x7F244180u;
    // 7F244180: li      r0, 128
    ctx->gpr[0] = (u32)(s32)(128);

label_7F244184:
    ctx->pc = 0x7F244184u;
    // 7F244184: stw     r7, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F244188:
    ctx->pc = 0x7F244188u;
    // 7F244188: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24418C:
    ctx->pc = 0x7F24418Cu;
    // 7F24418C: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F244190:
    ctx->pc = 0x7F244190u;
    // 7F244190: rlwinm r7, r7, 2, 0, 29
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0xFFFFFFFCu;
    }

label_7F244194:
    ctx->pc = 0x7F244194u;
    // 7F244194: lwzx    r6, r6, r7
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[7];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F244198:
    ctx->pc = 0x7F244198u;
    // 7F244198: stw     r6, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24419C:
    ctx->pc = 0x7F24419Cu;
    // 7F24419C: sth     r5, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2441A0:
    ctx->pc = 0x7F2441A0u;
    // 7F2441A0: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2441A4:
    ctx->pc = 0x7F2441A4u;
    // 7F2441A4: sth     r5, 122(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(122);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2441A8:
    ctx->pc = 0x7F2441A8u;
    // 7F2441A8: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2441AC:
    ctx->pc = 0x7F2441ACu;
    // 7F2441AC: bl      0x7F3C8990
    {
            ctx->lr = 0x7F2441B0u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F2441B0:
    ctx->pc = 0x7F2441B0u;
    ctx->downcount -= 5;
    // 7F2441B0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2441B4:
    ctx->pc = 0x7F2441B4u;
    // 7F2441B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2441B8:
    ctx->pc = 0x7F2441B8u;
    // 7F2441B8: lfs     f1, 20304(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2441B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20304);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2441BC:
    ctx->pc = 0x7F2441BCu;
    // 7F2441BC: lfs     f2, 20308(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2441BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20308);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2441C0:
    ctx->pc = 0x7F2441C0u;
    // 7F2441C0: bl      0x7F25758C
    {
            ctx->lr = 0x7F2441C4u;
            ctx->pc = 0x7F25758Cu;
            return;
    }

label_7F2441C4:
    ctx->pc = 0x7F2441C4u;
    ctx->downcount -= 2;
    // 7F2441C4: or.   r4, r3, r3
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

label_7F2441C8:
    ctx->pc = 0x7F2441C8u;
    // 7F2441C8: bc    4, 2, 0x7F2441D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2441D4;
        }
    }

label_7F2441CC:
    ctx->pc = 0x7F2441CCu;
    ctx->downcount -= 2;
    // 7F2441CC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2441D0:
    ctx->pc = 0x7F2441D0u;
    // 7F2441D0: b       0x7F24424C
    {
            goto label_7F24424C;
    }

label_7F2441D4:
    ctx->pc = 0x7F2441D4u;
    ctx->downcount -= 2;
    // 7F2441D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2441D8:
    ctx->pc = 0x7F2441D8u;
    // 7F2441D8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2441DCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2441DC:
    ctx->pc = 0x7F2441DCu;
    ctx->downcount -= 8;
    // 7F2441DC: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F2441E0:
    ctx->pc = 0x7F2441E0u;
    // 7F2441E0: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2441E4:
    ctx->pc = 0x7F2441E4u;
    // 7F2441E4: addi    r0, r3, 16048
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16048);

label_7F2441E8:
    ctx->pc = 0x7F2441E8u;
    // 7F2441E8: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2441EC:
    ctx->pc = 0x7F2441ECu;
    // 7F2441EC: stw     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2441F0:
    ctx->pc = 0x7F2441F0u;
    // 7F2441F0: addi    r4, r4, 28246
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28246);

label_7F2441F4:
    ctx->pc = 0x7F2441F4u;
    // 7F2441F4: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F2441F8:
    ctx->pc = 0x7F2441F8u;
    // 7F2441F8: bl      0x7F04272C
    {
            ctx->lr = 0x7F2441FCu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2441FC:
    ctx->pc = 0x7F2441FCu;
    ctx->downcount -= 3;
    // 7F2441FC: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244200:
    ctx->pc = 0x7F244200u;
    // 7F244200: cmplwi  r0, 0x0000
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

label_7F244204:
    ctx->pc = 0x7F244204u;
    // 7F244204: bc    4, 2, 0x7F244210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244210;
        }
    }

label_7F244208:
    ctx->pc = 0x7F244208u;
    ctx->downcount -= 2;
    // 7F244208: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24420C:
    ctx->pc = 0x7F24420Cu;
    // 7F24420C: b       0x7F24424C
    {
            goto label_7F24424C;
    }

label_7F244210:
    ctx->pc = 0x7F244210u;
    ctx->downcount -= 6;
    // 7F244210: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F244214:
    ctx->pc = 0x7F244214u;
    // 7F244214: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F244218:
    ctx->pc = 0x7F244218u;
    // 7F244218: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F24421C:
    ctx->pc = 0x7F24421Cu;
    // 7F24421C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F244220:
    ctx->pc = 0x7F244220u;
    // 7F244220: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244224:
    ctx->pc = 0x7F244224u;
    // 7F244224: bl      0x7F042B74
    {
            ctx->lr = 0x7F244228u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F244228:
    ctx->pc = 0x7F244228u;
    ctx->downcount -= 9;
    // 7F244228: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24422C:
    ctx->pc = 0x7F24422Cu;
    // 7F24422C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244230:
    ctx->pc = 0x7F244230u;
    // 7F244230: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244234:
    ctx->pc = 0x7F244234u;
    // 7F244234: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F244238:
    ctx->pc = 0x7F244238u;
    // 7F244238: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24423C:
    ctx->pc = 0x7F24423Cu;
    // 7F24423C: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244240:
    ctx->pc = 0x7F244240u;
    // 7F244240: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244244:
    ctx->pc = 0x7F244244u;
    // 7F244244: rlwinm r0, r0, 0, 19, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFDFFFu;
    }

label_7F244248:
    ctx->pc = 0x7F244248u;
    // 7F244248: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24424C:
    ctx->pc = 0x7F24424Cu;
    ctx->downcount -= 6;
    // 7F24424C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244250:
    ctx->pc = 0x7F244250u;
    // 7F244250: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F244254:
    ctx->pc = 0x7F244254u;
    // 7F244254: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244258:
    ctx->pc = 0x7F244258u;
    // 7F244258: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24425C:
    ctx->pc = 0x7F24425Cu;
    // 7F24425C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244260:
    ctx->pc = 0x7F244260u;
    ctx->downcount -= 24;
    // 7F244260: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244264:
    ctx->pc = 0x7F244264u;
    // 7F244264: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244268:
    ctx->pc = 0x7F244268u;
    // 7F244268: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24426C:
    ctx->pc = 0x7F24426Cu;
    // 7F24426C: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F244270:
    ctx->pc = 0x7F244270u;
    // 7F244270: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244274:
    ctx->pc = 0x7F244274u;
    // 7F244274: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F244278:
    ctx->pc = 0x7F244278u;
    // 7F244278: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F24427C:
    ctx->pc = 0x7F24427Cu;
    // 7F24427C: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F244280:
    ctx->pc = 0x7F244280u;
    // 7F244280: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F244284:
    ctx->pc = 0x7F244284u;
    // 7F244284: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F244288:
    ctx->pc = 0x7F244288u;
    // 7F244288: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F24428C:
    ctx->pc = 0x7F24428Cu;
    // 7F24428C: li      r5, 160
    ctx->gpr[5] = (u32)(s32)(160);

label_7F244290:
    ctx->pc = 0x7F244290u;
    // 7F244290: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F244294:
    ctx->pc = 0x7F244294u;
    // 7F244294: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F244298u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F244298:
    ctx->pc = 0x7F244298u;
    ctx->downcount -= 2;
    // 7F244298: or.   r31, r3, r3
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

label_7F24429C:
    ctx->pc = 0x7F24429Cu;
    // 7F24429C: bc    12, 2, 0x7F244328
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244328;
        }
    }

label_7F2442A0:
    ctx->pc = 0x7F2442A0u;
    ctx->downcount -= 5;
    // 7F2442A0: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F2442A4:
    ctx->pc = 0x7F2442A4u;
    // 7F2442A4: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F2442A8:
    ctx->pc = 0x7F2442A8u;
    // 7F2442A8: addi    r4, r4, 16188
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16188);

label_7F2442AC:
    ctx->pc = 0x7F2442ACu;
    // 7F2442AC: addi    r5, r5, 16544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16544);

label_7F2442B0:
    ctx->pc = 0x7F2442B0u;
    // 7F2442B0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2442B4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2442B4:
    ctx->pc = 0x7F2442B4u;
    ctx->downcount -= 16;
    // 7F2442B4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2442B8:
    ctx->pc = 0x7F2442B8u;
    // 7F2442B8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2442BC:
    ctx->pc = 0x7F2442BCu;
    // 7F2442BC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2442C0:
    ctx->pc = 0x7F2442C0u;
    // 7F2442C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2442C4:
    ctx->pc = 0x7F2442C4u;
    // 7F2442C4: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F2442C8:
    ctx->pc = 0x7F2442C8u;
    // 7F2442C8: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2442CC:
    ctx->pc = 0x7F2442CCu;
    // 7F2442CC: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2442D0:
    ctx->pc = 0x7F2442D0u;
    // 7F2442D0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2442D4:
    ctx->pc = 0x7F2442D4u;
    // 7F2442D4: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2442D8:
    ctx->pc = 0x7F2442D8u;
    // 7F2442D8: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2442DC:
    ctx->pc = 0x7F2442DCu;
    // 7F2442DC: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2442E0:
    ctx->pc = 0x7F2442E0u;
    // 7F2442E0: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2442E4:
    ctx->pc = 0x7F2442E4u;
    // 7F2442E4: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2442E8:
    ctx->pc = 0x7F2442E8u;
    // 7F2442E8: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2442EC:
    ctx->pc = 0x7F2442ECu;
    // 7F2442EC: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2442F0:
    ctx->pc = 0x7F2442F0u;
    // 7F2442F0: bl      0x7F244128
    {
            ctx->lr = 0x7F2442F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244128u;
                return;
            }
            goto label_7F244128;
    }

label_7F2442F4:
    ctx->pc = 0x7F2442F4u;
    ctx->downcount -= 2;
    // 7F2442F4: cmpwi   r3, 0
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

label_7F2442F8:
    ctx->pc = 0x7F2442F8u;
    // 7F2442F8: bc    4, 0, 0x7F24430C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24430C;
        }
    }

label_7F2442FC:
    ctx->pc = 0x7F2442FCu;
    ctx->downcount -= 2;
    // 7F2442FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244300:
    ctx->pc = 0x7F244300u;
    // 7F244300: bl      0x7F3C8210
    {
            ctx->lr = 0x7F244304u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F244304:
    ctx->pc = 0x7F244304u;
    ctx->downcount -= 2;
    // 7F244304: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244308:
    ctx->pc = 0x7F244308u;
    // 7F244308: b       0x7F24432C
    {
            goto label_7F24432C;
    }

label_7F24430C:
    ctx->pc = 0x7F24430Cu;
    ctx->downcount -= 7;
    // 7F24430C: stw     r26, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F244310:
    ctx->pc = 0x7F244310u;
    // 7F244310: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F244314:
    ctx->pc = 0x7F244314u;
    // 7F244314: stw     r27, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F244318:
    ctx->pc = 0x7F244318u;
    // 7F244318: stw     r28, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F24431C:
    ctx->pc = 0x7F24431Cu;
    // 7F24431C: stw     r29, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F244320:
    ctx->pc = 0x7F244320u;
    // 7F244320: lwz     r0, -5852(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244324:
    ctx->pc = 0x7F244324u;
    // 7F244324: stw     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244328:
    ctx->pc = 0x7F244328u;
    ctx->downcount -= 1;
    // 7F244328: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24432C:
    ctx->pc = 0x7F24432Cu;
    ctx->downcount -= 16;
    // 7F24432C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F244330:
    ctx->pc = 0x7F244330u;
    // 7F244330: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244334:
    ctx->pc = 0x7F244334u;
    // 7F244334: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244338:
    ctx->pc = 0x7F244338u;
    // 7F244338: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F24433C:
    ctx->pc = 0x7F24433Cu;
    // 7F24433C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244340:
    ctx->pc = 0x7F244340u;
    ctx->downcount -= 5;
    // 7F244340: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244344:
    ctx->pc = 0x7F244344u;
    // 7F244344: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244348:
    ctx->pc = 0x7F244348u;
    // 7F244348: li      r7, 15
    ctx->gpr[7] = (u32)(s32)(15);

label_7F24434C:
    ctx->pc = 0x7F24434Cu;
    // 7F24434C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244350:
    ctx->pc = 0x7F244350u;
    // 7F244350: bl      0x7F244260
    {
            ctx->lr = 0x7F244354u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244260u;
                return;
            }
            goto label_7F244260;
    }

label_7F244354:
    ctx->pc = 0x7F244354u;
    ctx->downcount -= 5;
    // 7F244354: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244358:
    ctx->pc = 0x7F244358u;
    // 7F244358: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24435C:
    ctx->pc = 0x7F24435Cu;
    // 7F24435C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244360:
    ctx->pc = 0x7F244360u;
    // 7F244360: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244364:
    ctx->pc = 0x7F244364u;
    ctx->downcount -= 8;
    // 7F244364: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244368:
    ctx->pc = 0x7F244368u;
    // 7F244368: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24436C:
    ctx->pc = 0x7F24436Cu;
    // 7F24436C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244370:
    ctx->pc = 0x7F244370u;
    // 7F244370: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F244374:
    ctx->pc = 0x7F244374u;
    // 7F244374: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244378:
    ctx->pc = 0x7F244378u;
    // 7F244378: lwz     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24437C:
    ctx->pc = 0x7F24437Cu;
    // 7F24437C: cmplwi  r0, 0x0000
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

label_7F244380:
    ctx->pc = 0x7F244380u;
    // 7F244380: bc    4, 2, 0x7F2443D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2443D4;
        }
    }

label_7F244384:
    ctx->pc = 0x7F244384u;
    ctx->downcount -= 3;
    // 7F244384: lwz     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244388:
    ctx->pc = 0x7F244388u;
    // 7F244388: cmpwi   r0, 13
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

label_7F24438C:
    ctx->pc = 0x7F24438Cu;
    // 7F24438C: bc    4, 2, 0x7F24439C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24439C;
        }
    }

label_7F244390:
    ctx->pc = 0x7F244390u;
    ctx->downcount -= 1;
    // 7F244390: bl      0x7F2CF4A0
    {
            ctx->lr = 0x7F244394u;
            ctx->pc = 0x7F2CF4A0u;
            return;
    }

label_7F244394:
    ctx->pc = 0x7F244394u;
    ctx->downcount -= 2;
    // 7F244394: stw     r3, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F244398:
    ctx->pc = 0x7F244398u;
    // 7F244398: b       0x7F2443C0
    {
            goto label_7F2443C0;
    }

label_7F24439C:
    ctx->pc = 0x7F24439Cu;
    ctx->downcount -= 2;
    // 7F24439C: cmpwi   r0, 12
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

label_7F2443A0:
    ctx->pc = 0x7F2443A0u;
    // 7F2443A0: bc    4, 2, 0x7F2443B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2443B0;
        }
    }

label_7F2443A4:
    ctx->pc = 0x7F2443A4u;
    ctx->downcount -= 1;
    // 7F2443A4: bl      0x7F2CF58C
    {
            ctx->lr = 0x7F2443A8u;
            ctx->pc = 0x7F2CF58Cu;
            return;
    }

label_7F2443A8:
    ctx->pc = 0x7F2443A8u;
    ctx->downcount -= 2;
    // 7F2443A8: stw     r3, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2443AC:
    ctx->pc = 0x7F2443ACu;
    // 7F2443AC: b       0x7F2443C0
    {
            goto label_7F2443C0;
    }

label_7F2443B0:
    ctx->pc = 0x7F2443B0u;
    ctx->downcount -= 2;
    // 7F2443B0: cmpwi   r0, 11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2443B4:
    ctx->pc = 0x7F2443B4u;
    // 7F2443B4: bc    4, 2, 0x7F2443C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2443C0;
        }
    }

label_7F2443B8:
    ctx->pc = 0x7F2443B8u;
    ctx->downcount -= 2;
    // 7F2443B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2443BC:
    ctx->pc = 0x7F2443BCu;
    // 7F2443BC: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2443C0:
    ctx->pc = 0x7F2443C0u;
    ctx->downcount -= 3;
    // 7F2443C0: lwz     r4, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2443C4:
    ctx->pc = 0x7F2443C4u;
    // 7F2443C4: cmplwi  r4, 0x0000
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

label_7F2443C8:
    ctx->pc = 0x7F2443C8u;
    // 7F2443C8: bc    12, 2, 0x7F2443D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2443D4;
        }
    }

label_7F2443CC:
    ctx->pc = 0x7F2443CCu;
    ctx->downcount -= 2;
    // 7F2443CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2443D0:
    ctx->pc = 0x7F2443D0u;
    // 7F2443D0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2443D4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2443D4:
    ctx->pc = 0x7F2443D4u;
    ctx->downcount -= 3;
    // 7F2443D4: lwz     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2443D8:
    ctx->pc = 0x7F2443D8u;
    // 7F2443D8: cmpwi   r0, 11
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2443DC:
    ctx->pc = 0x7F2443DCu;
    // 7F2443DC: bc    12, 2, 0x7F244418
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244418;
        }
    }

label_7F2443E0:
    ctx->pc = 0x7F2443E0u;
    ctx->downcount -= 14;
    // 7F2443E0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2443E4:
    ctx->pc = 0x7F2443E4u;
    // 7F2443E4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2443E8:
    ctx->pc = 0x7F2443E8u;
    // 7F2443E8: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F2443EC:
    ctx->pc = 0x7F2443ECu;
    // 7F2443EC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2443F0:
    ctx->pc = 0x7F2443F0u;
    // 7F2443F0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2443F4:
    ctx->pc = 0x7F2443F4u;
    // 7F2443F4: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2443F8:
    ctx->pc = 0x7F2443F8u;
    // 7F2443F8: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2443FC:
    ctx->pc = 0x7F2443FCu;
    // 7F2443FC: lwz     r4, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244400:
    ctx->pc = 0x7F244400u;
    // 7F244400: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244404:
    ctx->pc = 0x7F244404u;
    // 7F244404: rlwinm r4, r4, 0, 18, 19
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00003000u;
    }

label_7F244408:
    ctx->pc = 0x7F244408u;
    // 7F244408: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24440C:
    ctx->pc = 0x7F24440Cu;
    // 7F24440C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244410:
    ctx->pc = 0x7F244410u;
    // 7F244410: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_7F244414:
    ctx->pc = 0x7F244414u;
    // 7F244414: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244418:
    ctx->pc = 0x7F244418u;
    ctx->downcount -= 5;
    // 7F244418: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F24441C:
    ctx->pc = 0x7F24441Cu;
    // 7F24441C: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F244420:
    ctx->pc = 0x7F244420u;
    // 7F244420: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244424:
    ctx->pc = 0x7F244424u;
    // 7F244424: cmplwi  r3, 0x0000
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

label_7F244428:
    ctx->pc = 0x7F244428u;
    // 7F244428: bc    12, 2, 0x7F24448C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24448C;
        }
    }

label_7F24442C:
    ctx->pc = 0x7F24442Cu;
    ctx->downcount -= 4;
    // 7F24442C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244430:
    ctx->pc = 0x7F244430u;
    // 7F244430: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244434:
    ctx->pc = 0x7F244434u;
    // 7F244434: rlwinm. r0, r0, 0, 19, 19
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

label_7F244438:
    ctx->pc = 0x7F244438u;
    // 7F244438: bc    12, 2, 0x7F24448C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24448C;
        }
    }

label_7F24443C:
    ctx->pc = 0x7F24443Cu;
    ctx->downcount -= 1;
    // 7F24443C: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F244440u;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F244440:
    ctx->pc = 0x7F244440u;
    ctx->downcount -= 3;
    // 7F244440: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244444:
    ctx->pc = 0x7F244444u;
    // 7F244444: cmpwi   r31, 7
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F244448:
    ctx->pc = 0x7F244448u;
    // 7F244448: bc    12, 2, 0x7F244474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244474;
        }
    }

label_7F24444C:
    ctx->pc = 0x7F24444Cu;
    ctx->downcount -= 2;
    // 7F24444C: cmpwi   r31, 6
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F244450:
    ctx->pc = 0x7F244450u;
    // 7F244450: bc    4, 2, 0x7F244464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244464;
        }
    }

label_7F244454:
    ctx->pc = 0x7F244454u;
    ctx->downcount -= 2;
    // 7F244454: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F244458:
    ctx->pc = 0x7F244458u;
    // 7F244458: bl      0x7F2444D0
    {
            ctx->lr = 0x7F24445Cu;
            goto label_7F2444D0;
    }

label_7F24445C:
    ctx->pc = 0x7F24445Cu;
    ctx->downcount -= 2;
    // 7F24445C: cmpwi   r3, 0
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

label_7F244460:
    ctx->pc = 0x7F244460u;
    // 7F244460: bc    12, 2, 0x7F244474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244474;
        }
    }

label_7F244464:
    ctx->pc = 0x7F244464u;
    ctx->downcount -= 2;
    // 7F244464: cmpwi   r31, 4
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

label_7F244468:
    ctx->pc = 0x7F244468u;
    // 7F244468: bc    12, 2, 0x7F244474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244474;
        }
    }

label_7F24446C:
    ctx->pc = 0x7F24446Cu;
    ctx->downcount -= 2;
    // 7F24446C: cmpwi   r31, 19
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(19);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F244470:
    ctx->pc = 0x7F244470u;
    // 7F244470: bc    4, 2, 0x7F244480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244480;
        }
    }

label_7F244474:
    ctx->pc = 0x7F244474u;
    ctx->downcount -= 2;
    // 7F244474: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F244478:
    ctx->pc = 0x7F244478u;
    // 7F244478: bl      0x7F2444BC
    {
            ctx->lr = 0x7F24447Cu;
            goto label_7F2444BC;
    }

label_7F24447C:
    ctx->pc = 0x7F24447Cu;
    ctx->downcount -= 1;
    // 7F24447C: b       0x7F244494
    {
            goto label_7F244494;
    }

label_7F244480:
    ctx->pc = 0x7F244480u;
    ctx->downcount -= 2;
    // 7F244480: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F244484:
    ctx->pc = 0x7F244484u;
    // 7F244484: bl      0x7F2444A8
    {
            ctx->lr = 0x7F244488u;
            goto label_7F2444A8;
    }

label_7F244488:
    ctx->pc = 0x7F244488u;
    ctx->downcount -= 1;
    // 7F244488: b       0x7F244494
    {
            goto label_7F244494;
    }

label_7F24448C:
    ctx->pc = 0x7F24448Cu;
    ctx->downcount -= 2;
    // 7F24448C: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F244490:
    ctx->pc = 0x7F244490u;
    // 7F244490: bl      0x7F2444BC
    {
            ctx->lr = 0x7F244494u;
            goto label_7F2444BC;
    }

label_7F244494:
    ctx->pc = 0x7F244494u;
    ctx->downcount -= 6;
    // 7F244494: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244498:
    ctx->pc = 0x7F244498u;
    // 7F244498: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F24449C:
    ctx->pc = 0x7F24449Cu;
    // 7F24449C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2444A0:
    ctx->pc = 0x7F2444A0u;
    // 7F2444A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2444A4:
    ctx->pc = 0x7F2444A4u;
    // 7F2444A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2444A8:
    ctx->pc = 0x7F2444A8u;
    ctx->downcount -= 5;
    // 7F2444A8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2444AC:
    ctx->pc = 0x7F2444ACu;
    // 7F2444AC: lwzu     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2444B0:
    ctx->pc = 0x7F2444B0u;
    // 7F2444B0: andc   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[3];
    }

label_7F2444B4:
    ctx->pc = 0x7F2444B4u;
    // 7F2444B4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2444B8:
    ctx->pc = 0x7F2444B8u;
    // 7F2444B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2444BC:
    ctx->pc = 0x7F2444BCu;
    ctx->downcount -= 5;
    // 7F2444BC: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2444C0:
    ctx->pc = 0x7F2444C0u;
    // 7F2444C0: lwzu     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2444C4:
    ctx->pc = 0x7F2444C4u;
    // 7F2444C4: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F2444C8:
    ctx->pc = 0x7F2444C8u;
    // 7F2444C8: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2444CC:
    ctx->pc = 0x7F2444CCu;
    // 7F2444CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2444D0:
    ctx->pc = 0x7F2444D0u;
    ctx->downcount -= 4;
    // 7F2444D0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2444D4:
    ctx->pc = 0x7F2444D4u;
    // 7F2444D4: lwz     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2444D8:
    ctx->pc = 0x7F2444D8u;
    // 7F2444D8: and   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F2444DC:
    ctx->pc = 0x7F2444DCu;
    // 7F2444DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2444E0:
    ctx->pc = 0x7F2444E0u;
    ctx->downcount -= 10;
    // 7F2444E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2444E4:
    ctx->pc = 0x7F2444E4u;
    // 7F2444E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2444E8:
    ctx->pc = 0x7F2444E8u;
    // 7F2444E8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2444EC:
    ctx->pc = 0x7F2444ECu;
    // 7F2444EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2444F0:
    ctx->pc = 0x7F2444F0u;
    // 7F2444F0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2444F4:
    ctx->pc = 0x7F2444F4u;
    // 7F2444F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2444F8:
    ctx->pc = 0x7F2444F8u;
    // 7F2444F8: addi    r3, r4, 22156
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F2444FC:
    ctx->pc = 0x7F2444FCu;
    // 7F2444FC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244500:
    ctx->pc = 0x7F244500u;
    // 7F244500: cmplwi  r3, 0x0000
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

label_7F244504:
    ctx->pc = 0x7F244504u;
    // 7F244504: bc    12, 2, 0x7F244514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244514;
        }
    }

label_7F244508:
    ctx->pc = 0x7F244508u;
    ctx->downcount -= 3;
    // 7F244508: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24450C:
    ctx->pc = 0x7F24450Cu;
    // 7F24450C: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244510:
    ctx->pc = 0x7F244510u;
    // 7F244510: bl      0x7F3B0954
    {
            ctx->lr = 0x7F244514u;
            ctx->pc = 0x7F3B0954u;
            return;
    }

label_7F244514:
    ctx->pc = 0x7F244514u;
    ctx->downcount -= 2;
    // 7F244514: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F244518:
    ctx->pc = 0x7F244518u;
    // 7F244518: bl      0x7F042AAC
    {
            ctx->lr = 0x7F24451Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F24451C:
    ctx->pc = 0x7F24451Cu;
    ctx->downcount -= 6;
    // 7F24451C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244520:
    ctx->pc = 0x7F244520u;
    // 7F244520: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F244524:
    ctx->pc = 0x7F244524u;
    // 7F244524: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244528:
    ctx->pc = 0x7F244528u;
    // 7F244528: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24452C:
    ctx->pc = 0x7F24452Cu;
    // 7F24452C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244530:
    ctx->pc = 0x7F244530u;
    ctx->downcount -= 22;
    // 7F244530: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244534:
    ctx->pc = 0x7F244534u;
    // 7F244534: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244538:
    ctx->pc = 0x7F244538u;
    // 7F244538: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24453C:
    ctx->pc = 0x7F24453Cu;
    // 7F24453C: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F244540:
    ctx->pc = 0x7F244540u;
    // 7F244540: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F244544:
    ctx->pc = 0x7F244544u;
    // 7F244544: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244548:
    ctx->pc = 0x7F244548u;
    // 7F244548: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24454C:
    ctx->pc = 0x7F24454Cu;
    // 7F24454C: cmpwi   r30, 13
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

label_7F244550:
    ctx->pc = 0x7F244550u;
    // 7F244550: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F244554:
    ctx->pc = 0x7F244554u;
    // 7F244554: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F244558:
    ctx->pc = 0x7F244558u;
    // 7F244558: addi    r31, r26, 48
    ctx->gpr[31] = ctx->gpr[26] + (u32)(s32)(48);

label_7F24455C:
    ctx->pc = 0x7F24455Cu;
    // 7F24455C: bc    4, 2, 0x7F244568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244568;
        }
    }

label_7F244560:
    ctx->pc = 0x7F244560u;
    ctx->downcount -= 2;
    // 7F244560: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F244564:
    ctx->pc = 0x7F244564u;
    // 7F244564: addi    r4, r3, -8884
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8884);

label_7F244568:
    ctx->pc = 0x7F244568u;
    ctx->downcount -= 2;
    // 7F244568: cmpwi   r30, 12
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F24456C:
    ctx->pc = 0x7F24456Cu;
    // 7F24456C: bc    4, 2, 0x7F244578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244578;
        }
    }

label_7F244570:
    ctx->pc = 0x7F244570u;
    ctx->downcount -= 2;
    // 7F244570: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F244574:
    ctx->pc = 0x7F244574u;
    // 7F244574: addi    r4, r3, -15028
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15028);

label_7F244578:
    ctx->pc = 0x7F244578u;
    ctx->downcount -= 2;
    // 7F244578: cmpwi   r30, 11
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

label_7F24457C:
    ctx->pc = 0x7F24457Cu;
    // 7F24457C: bc    12, 2, 0x7F2445C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2445C8;
        }
    }

label_7F244580:
    ctx->pc = 0x7F244580u;
    ctx->downcount -= 3;
    // 7F244580: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244584:
    ctx->pc = 0x7F244584u;
    // 7F244584: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F244588:
    ctx->pc = 0x7F244588u;
    // 7F244588: bl      0x7F04272C
    {
            ctx->lr = 0x7F24458Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F24458C:
    ctx->pc = 0x7F24458Cu;
    ctx->downcount -= 3;
    // 7F24458C: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244590:
    ctx->pc = 0x7F244590u;
    // 7F244590: cmplwi  r0, 0x0000
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

label_7F244594:
    ctx->pc = 0x7F244594u;
    // 7F244594: bc    4, 2, 0x7F2445A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2445A0;
        }
    }

label_7F244598:
    ctx->pc = 0x7F244598u;
    ctx->downcount -= 2;
    // 7F244598: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24459C:
    ctx->pc = 0x7F24459Cu;
    // 7F24459C: b       0x7F244634
    {
            goto label_7F244634;
    }

label_7F2445A0:
    ctx->pc = 0x7F2445A0u;
    ctx->downcount -= 4;
    // 7F2445A0: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2445A4:
    ctx->pc = 0x7F2445A4u;
    // 7F2445A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2445A8:
    ctx->pc = 0x7F2445A8u;
    // 7F2445A8: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2445AC:
    ctx->pc = 0x7F2445ACu;
    // 7F2445AC: bl      0x7F042B74
    {
            ctx->lr = 0x7F2445B0u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F2445B0:
    ctx->pc = 0x7F2445B0u;
    ctx->downcount -= 6;
    // 7F2445B0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2445B4:
    ctx->pc = 0x7F2445B4u;
    // 7F2445B4: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2445B8:
    ctx->pc = 0x7F2445B8u;
    // 7F2445B8: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F2445BC:
    ctx->pc = 0x7F2445BCu;
    // 7F2445BC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2445C0:
    ctx->pc = 0x7F2445C0u;
    // 7F2445C0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2445C4:
    ctx->pc = 0x7F2445C4u;
    // 7F2445C4: bl      0x7F3B0938
    {
            ctx->lr = 0x7F2445C8u;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F2445C8:
    ctx->pc = 0x7F2445C8u;
    ctx->downcount -= 2;
    // 7F2445C8: cmpwi   r30, 13
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

label_7F2445CC:
    ctx->pc = 0x7F2445CCu;
    // 7F2445CC: bc    4, 2, 0x7F2445E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2445E4;
        }
    }

label_7F2445D0:
    ctx->pc = 0x7F2445D0u;
    ctx->downcount -= 2;
    // 7F2445D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2445D4:
    ctx->pc = 0x7F2445D4u;
    // 7F2445D4: bl      0x7F24D480
    {
            ctx->lr = 0x7F2445D8u;
            ctx->pc = 0x7F24D480u;
            return;
    }

label_7F2445D8:
    ctx->pc = 0x7F2445D8u;
    ctx->downcount -= 3;
    // 7F2445D8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2445DC:
    ctx->pc = 0x7F2445DCu;
    // 7F2445DC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2445E0:
    ctx->pc = 0x7F2445E0u;
    // 7F2445E0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2445E4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2445E4:
    ctx->pc = 0x7F2445E4u;
    ctx->downcount -= 2;
    // 7F2445E4: cmpwi   r30, 12
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2445E8:
    ctx->pc = 0x7F2445E8u;
    // 7F2445E8: bc    4, 2, 0x7F2445FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2445FC;
        }
    }

label_7F2445EC:
    ctx->pc = 0x7F2445ECu;
    ctx->downcount -= 1;
    // 7F2445EC: bl      0x7F255688
    {
            ctx->lr = 0x7F2445F0u;
            ctx->pc = 0x7F255688u;
            return;
    }

label_7F2445F0:
    ctx->pc = 0x7F2445F0u;
    ctx->downcount -= 3;
    // 7F2445F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2445F4:
    ctx->pc = 0x7F2445F4u;
    // 7F2445F4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2445F8:
    ctx->pc = 0x7F2445F8u;
    // 7F2445F8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2445FCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2445FC:
    ctx->pc = 0x7F2445FCu;
    ctx->downcount -= 2;
    // 7F2445FC: cmpwi   r30, 11
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

label_7F244600:
    ctx->pc = 0x7F244600u;
    // 7F244600: bc    4, 2, 0x7F244614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244614;
        }
    }

label_7F244604:
    ctx->pc = 0x7F244604u;
    ctx->downcount -= 1;
    // 7F244604: bl      0x7F27778C
    {
            ctx->lr = 0x7F244608u;
            ctx->pc = 0x7F27778Cu;
            return;
    }

label_7F244608:
    ctx->pc = 0x7F244608u;
    ctx->downcount -= 3;
    // 7F244608: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24460C:
    ctx->pc = 0x7F24460Cu;
    // 7F24460C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F244610:
    ctx->pc = 0x7F244610u;
    // 7F244610: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F244614u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F244614:
    ctx->pc = 0x7F244614u;
    ctx->downcount -= 2;
    // 7F244614: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F244618:
    ctx->pc = 0x7F244618u;
    // 7F244618: bl      0x7F2444BC
    {
            ctx->lr = 0x7F24461Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2444BCu;
                return;
            }
            goto label_7F2444BC;
    }

label_7F24461C:
    ctx->pc = 0x7F24461Cu;
    ctx->downcount -= 6;
    // 7F24461C: stw     r27, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F244620:
    ctx->pc = 0x7F244620u;
    // 7F244620: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F244624:
    ctx->pc = 0x7F244624u;
    // 7F244624: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244628:
    ctx->pc = 0x7F244628u;
    // 7F244628: stw     r28, 96(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F24462C:
    ctx->pc = 0x7F24462Cu;
    // 7F24462C: stw     r30, 104(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F244630:
    ctx->pc = 0x7F244630u;
    // 7F244630: stw     r0, 100(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244634:
    ctx->pc = 0x7F244634u;
    ctx->downcount -= 16;
    // 7F244634: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F244638:
    ctx->pc = 0x7F244638u;
    // 7F244638: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24463C:
    ctx->pc = 0x7F24463Cu;
    // 7F24463C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244640:
    ctx->pc = 0x7F244640u;
    // 7F244640: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F244644:
    ctx->pc = 0x7F244644u;
    // 7F244644: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244648:
    ctx->pc = 0x7F244648u;
    ctx->downcount -= 24;
    // 7F244648: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24464C:
    ctx->pc = 0x7F24464Cu;
    // 7F24464C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244650:
    ctx->pc = 0x7F244650u;
    // 7F244650: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244654:
    ctx->pc = 0x7F244654u;
    // 7F244654: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F244658:
    ctx->pc = 0x7F244658u;
    // 7F244658: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24465C:
    ctx->pc = 0x7F24465Cu;
    // 7F24465C: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F244660:
    ctx->pc = 0x7F244660u;
    // 7F244660: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F244664:
    ctx->pc = 0x7F244664u;
    // 7F244664: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F244668:
    ctx->pc = 0x7F244668u;
    // 7F244668: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F24466C:
    ctx->pc = 0x7F24466Cu;
    // 7F24466C: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F244670:
    ctx->pc = 0x7F244670u;
    // 7F244670: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F244674:
    ctx->pc = 0x7F244674u;
    // 7F244674: li      r5, 108
    ctx->gpr[5] = (u32)(s32)(108);

label_7F244678:
    ctx->pc = 0x7F244678u;
    // 7F244678: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F24467C:
    ctx->pc = 0x7F24467Cu;
    // 7F24467C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F244680u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F244680:
    ctx->pc = 0x7F244680u;
    ctx->downcount -= 2;
    // 7F244680: or.   r31, r3, r3
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

label_7F244684:
    ctx->pc = 0x7F244684u;
    // 7F244684: bc    12, 2, 0x7F2446F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2446F8;
        }
    }

label_7F244688:
    ctx->pc = 0x7F244688u;
    ctx->downcount -= 5;
    // 7F244688: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F24468C:
    ctx->pc = 0x7F24468Cu;
    // 7F24468C: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F244690:
    ctx->pc = 0x7F244690u;
    // 7F244690: addi    r4, r4, 17252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17252);

label_7F244694:
    ctx->pc = 0x7F244694u;
    // 7F244694: addi    r5, r5, 17632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17632);

label_7F244698:
    ctx->pc = 0x7F244698u;
    // 7F244698: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F24469Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F24469C:
    ctx->pc = 0x7F24469Cu;
    ctx->downcount -= 17;
    // 7F24469C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2446A0:
    ctx->pc = 0x7F2446A0u;
    // 7F2446A0: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2446A4:
    ctx->pc = 0x7F2446A4u;
    // 7F2446A4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2446A8:
    ctx->pc = 0x7F2446A8u;
    // 7F2446A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2446AC:
    ctx->pc = 0x7F2446ACu;
    // 7F2446AC: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F2446B0:
    ctx->pc = 0x7F2446B0u;
    // 7F2446B0: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2446B4:
    ctx->pc = 0x7F2446B4u;
    // 7F2446B4: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2446B8:
    ctx->pc = 0x7F2446B8u;
    // 7F2446B8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2446BC:
    ctx->pc = 0x7F2446BCu;
    // 7F2446BC: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2446C0:
    ctx->pc = 0x7F2446C0u;
    // 7F2446C0: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2446C4:
    ctx->pc = 0x7F2446C4u;
    // 7F2446C4: stw     r9, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2446C8:
    ctx->pc = 0x7F2446C8u;
    // 7F2446C8: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2446CC:
    ctx->pc = 0x7F2446CCu;
    // 7F2446CC: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2446D0:
    ctx->pc = 0x7F2446D0u;
    // 7F2446D0: stw     r9, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2446D4:
    ctx->pc = 0x7F2446D4u;
    // 7F2446D4: stw     r9, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2446D8:
    ctx->pc = 0x7F2446D8u;
    // 7F2446D8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2446DC:
    ctx->pc = 0x7F2446DCu;
    // 7F2446DC: bl      0x7F244530
    {
            ctx->lr = 0x7F2446E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244530u;
                return;
            }
            goto label_7F244530;
    }

label_7F2446E0:
    ctx->pc = 0x7F2446E0u;
    ctx->downcount -= 2;
    // 7F2446E0: cmpwi   r3, 0
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

label_7F2446E4:
    ctx->pc = 0x7F2446E4u;
    // 7F2446E4: bc    4, 0, 0x7F2446F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2446F8;
        }
    }

label_7F2446E8:
    ctx->pc = 0x7F2446E8u;
    ctx->downcount -= 2;
    // 7F2446E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2446EC:
    ctx->pc = 0x7F2446ECu;
    // 7F2446EC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2446F0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2446F0:
    ctx->pc = 0x7F2446F0u;
    ctx->downcount -= 2;
    // 7F2446F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2446F4:
    ctx->pc = 0x7F2446F4u;
    // 7F2446F4: b       0x7F2446FC
    {
            goto label_7F2446FC;
    }

label_7F2446F8:
    ctx->pc = 0x7F2446F8u;
    ctx->downcount -= 1;
    // 7F2446F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2446FC:
    ctx->pc = 0x7F2446FCu;
    ctx->downcount -= 16;
    // 7F2446FC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F244700:
    ctx->pc = 0x7F244700u;
    // 7F244700: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244704:
    ctx->pc = 0x7F244704u;
    // 7F244704: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244708:
    ctx->pc = 0x7F244708u;
    // 7F244708: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F24470C:
    ctx->pc = 0x7F24470Cu;
    // 7F24470C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244710:
    ctx->pc = 0x7F244710u;
    ctx->downcount -= 5;
    // 7F244710: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244714:
    ctx->pc = 0x7F244714u;
    // 7F244714: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244718:
    ctx->pc = 0x7F244718u;
    // 7F244718: li      r7, 13
    ctx->gpr[7] = (u32)(s32)(13);

label_7F24471C:
    ctx->pc = 0x7F24471Cu;
    // 7F24471C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244720:
    ctx->pc = 0x7F244720u;
    // 7F244720: bl      0x7F244648
    {
            ctx->lr = 0x7F244724u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244648u;
                return;
            }
            goto label_7F244648;
    }

label_7F244724:
    ctx->pc = 0x7F244724u;
    ctx->downcount -= 5;
    // 7F244724: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244728:
    ctx->pc = 0x7F244728u;
    // 7F244728: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24472C:
    ctx->pc = 0x7F24472Cu;
    // 7F24472C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244730:
    ctx->pc = 0x7F244730u;
    // 7F244730: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244734:
    ctx->pc = 0x7F244734u;
    ctx->downcount -= 5;
    // 7F244734: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244738:
    ctx->pc = 0x7F244738u;
    // 7F244738: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24473C:
    ctx->pc = 0x7F24473Cu;
    // 7F24473C: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_7F244740:
    ctx->pc = 0x7F244740u;
    // 7F244740: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244744:
    ctx->pc = 0x7F244744u;
    // 7F244744: bl      0x7F244648
    {
            ctx->lr = 0x7F244748u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244648u;
                return;
            }
            goto label_7F244648;
    }

label_7F244748:
    ctx->pc = 0x7F244748u;
    ctx->downcount -= 5;
    // 7F244748: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24474C:
    ctx->pc = 0x7F24474Cu;
    // 7F24474C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244750:
    ctx->pc = 0x7F244750u;
    // 7F244750: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244754:
    ctx->pc = 0x7F244754u;
    // 7F244754: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244758:
    ctx->pc = 0x7F244758u;
    ctx->downcount -= 5;
    // 7F244758: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24475C:
    ctx->pc = 0x7F24475Cu;
    // 7F24475C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244760:
    ctx->pc = 0x7F244760u;
    // 7F244760: li      r7, 11
    ctx->gpr[7] = (u32)(s32)(11);

label_7F244764:
    ctx->pc = 0x7F244764u;
    // 7F244764: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244768:
    ctx->pc = 0x7F244768u;
    // 7F244768: bl      0x7F244648
    {
            ctx->lr = 0x7F24476Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244648u;
                return;
            }
            goto label_7F244648;
    }

label_7F24476C:
    ctx->pc = 0x7F24476Cu;
    ctx->downcount -= 5;
    // 7F24476C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244770:
    ctx->pc = 0x7F244770u;
    // 7F244770: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244774:
    ctx->pc = 0x7F244774u;
    // 7F244774: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244778:
    ctx->pc = 0x7F244778u;
    // 7F244778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F24477C:
    ctx->pc = 0x7F24477Cu;
    ctx->downcount -= 8;
    // 7F24477C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244780:
    ctx->pc = 0x7F244780u;
    // 7F244780: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244784:
    ctx->pc = 0x7F244784u;
    // 7F244784: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244788:
    ctx->pc = 0x7F244788u;
    // 7F244788: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F24478C:
    ctx->pc = 0x7F24478Cu;
    // 7F24478C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244790:
    ctx->pc = 0x7F244790u;
    // 7F244790: lwz     r0, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244794:
    ctx->pc = 0x7F244794u;
    // 7F244794: cmplwi  r0, 0x0000
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

label_7F244798:
    ctx->pc = 0x7F244798u;
    // 7F244798: bc    4, 2, 0x7F2447F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2447F8;
        }
    }

label_7F24479C:
    ctx->pc = 0x7F24479Cu;
    ctx->downcount -= 19;
    // 7F24479C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2447A0:
    ctx->pc = 0x7F2447A0u;
    // 7F2447A0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2447A4:
    ctx->pc = 0x7F2447A4u;
    // 7F2447A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2447A8:
    ctx->pc = 0x7F2447A8u;
    // 7F2447A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2447AC:
    ctx->pc = 0x7F2447ACu;
    // 7F2447AC: addi    r7, r3, 20328
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(20328);

label_7F2447B0:
    ctx->pc = 0x7F2447B0u;
    // 7F2447B0: addi    r10, r6, -5768
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(-5768);

label_7F2447B4:
    ctx->pc = 0x7F2447B4u;
    // 7F2447B4: addi    r8, r4, 20324
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(20324);

label_7F2447B8:
    ctx->pc = 0x7F2447B8u;
    // 7F2447B8: addi    r9, r5, 20320
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(20320);

label_7F2447BC:
    ctx->pc = 0x7F2447BCu;
    // 7F2447BC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2447C0:
    ctx->pc = 0x7F2447C0u;
    // 7F2447C0: lis     r6, 82
    ctx->gpr[6] = ((u32)(s32)(82) << 16);

label_7F2447C4:
    ctx->pc = 0x7F2447C4u;
    // 7F2447C4: lfs     f3, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2447C4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2447C8:
    ctx->pc = 0x7F2447C8u;
    // 7F2447C8: addi    r5, r3, 14080
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F2447CC:
    ctx->pc = 0x7F2447CCu;
    // 7F2447CC: addi    r7, r6, -17463
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-17463);

label_7F2447D0:
    ctx->pc = 0x7F2447D0u;
    // 7F2447D0: lwz     r4, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2447D4:
    ctx->pc = 0x7F2447D4u;
    // 7F2447D4: lfs     f1, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F2447D4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2447D8:
    ctx->pc = 0x7F2447D8u;
    // 7F2447D8: addi    r3, r31, 112
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(112);

label_7F2447DC:
    ctx->pc = 0x7F2447DCu;
    // 7F2447DC: lfs     f2, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2447DCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2447E0:
    ctx->pc = 0x7F2447E0u;
    // 7F2447E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2447E4:
    ctx->pc = 0x7F2447E4u;
    // 7F2447E4: bl      0x7F27FF9C
    {
            ctx->lr = 0x7F2447E8u;
            ctx->pc = 0x7F27FF9Cu;
            return;
    }

label_7F2447E8:
    ctx->pc = 0x7F2447E8u;
    ctx->downcount -= 4;
    // 7F2447E8: stw     r3, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2447EC:
    ctx->pc = 0x7F2447ECu;
    // 7F2447EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2447F0:
    ctx->pc = 0x7F2447F0u;
    // 7F2447F0: lwz     r4, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2447F4:
    ctx->pc = 0x7F2447F4u;
    // 7F2447F4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2447F8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2447F8:
    ctx->pc = 0x7F2447F8u;
    ctx->downcount -= 3;
    // 7F2447F8: lwz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2447FC:
    ctx->pc = 0x7F2447FCu;
    // 7F2447FC: cmplwi  r0, 0x0000
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

label_7F244800:
    ctx->pc = 0x7F244800u;
    // 7F244800: bc    4, 2, 0x7F24481C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24481C;
        }
    }

label_7F244804:
    ctx->pc = 0x7F244804u;
    ctx->downcount -= 2;
    // 7F244804: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244808:
    ctx->pc = 0x7F244808u;
    // 7F244808: bl      0x7F280274
    {
            ctx->lr = 0x7F24480Cu;
            ctx->pc = 0x7F280274u;
            return;
    }

label_7F24480C:
    ctx->pc = 0x7F24480Cu;
    ctx->downcount -= 4;
    // 7F24480C: stw     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F244810:
    ctx->pc = 0x7F244810u;
    // 7F244810: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244814:
    ctx->pc = 0x7F244814u;
    // 7F244814: lwz     r4, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244818:
    ctx->pc = 0x7F244818u;
    // 7F244818: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F24481Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F24481C:
    ctx->pc = 0x7F24481Cu;
    ctx->downcount -= 6;
    // 7F24481C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244820:
    ctx->pc = 0x7F244820u;
    // 7F244820: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F244824:
    ctx->pc = 0x7F244824u;
    // 7F244824: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244828:
    ctx->pc = 0x7F244828u;
    // 7F244828: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24482C:
    ctx->pc = 0x7F24482Cu;
    // 7F24482C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244830:
    ctx->pc = 0x7F244830u;
    ctx->downcount -= 1;
    // 7F244830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244834:
    ctx->pc = 0x7F244834u;
    ctx->downcount -= 6;
    // 7F244834: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244838:
    ctx->pc = 0x7F244838u;
    // 7F244838: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24483C:
    ctx->pc = 0x7F24483Cu;
    // 7F24483C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244840:
    ctx->pc = 0x7F244840u;
    // 7F244840: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F244844:
    ctx->pc = 0x7F244844u;
    // 7F244844: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244848:
    ctx->pc = 0x7F244848u;
    // 7F244848: bl      0x7F24477C
    {
            ctx->lr = 0x7F24484Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24477Cu;
                return;
            }
            goto label_7F24477C;
    }

label_7F24484C:
    ctx->pc = 0x7F24484Cu;
    ctx->downcount -= 3;
    // 7F24484C: lwz     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244850:
    ctx->pc = 0x7F244850u;
    // 7F244850: cmpwi   r0, 0
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

label_7F244854:
    ctx->pc = 0x7F244854u;
    // 7F244854: bc    4, 2, 0x7F24488C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24488C;
        }
    }

label_7F244858:
    ctx->pc = 0x7F244858u;
    ctx->downcount -= 9;
    // 7F244858: lwz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24485C:
    ctx->pc = 0x7F24485Cu;
    // 7F24485C: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F244860:
    ctx->pc = 0x7F244860u;
    // 7F244860: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244864:
    ctx->pc = 0x7F244864u;
    // 7F244864: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244868:
    ctx->pc = 0x7F244868u;
    // 7F244868: slw   r0, r3, r0
    {
        u32 sh = ctx->gpr[0] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[3] << sh);
    }

label_7F24486C:
    ctx->pc = 0x7F24486Cu;
    // 7F24486C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244870:
    ctx->pc = 0x7F244870u;
    // 7F244870: lwz     r3, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244874:
    ctx->pc = 0x7F244874u;
    // 7F244874: and.   r0, r3, r0
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

label_7F244878:
    ctx->pc = 0x7F244878u;
    // 7F244878: bc    12, 2, 0x7F24488C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24488C;
        }
    }

label_7F24487C:
    ctx->pc = 0x7F24487Cu;
    ctx->downcount -= 2;
    // 7F24487C: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F244880:
    ctx->pc = 0x7F244880u;
    // 7F244880: bl      0x7F2448A8
    {
            ctx->lr = 0x7F244884u;
            goto label_7F2448A8;
    }

label_7F244884:
    ctx->pc = 0x7F244884u;
    ctx->downcount -= 2;
    // 7F244884: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F244888:
    ctx->pc = 0x7F244888u;
    // 7F244888: stw     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24488C:
    ctx->pc = 0x7F24488Cu;
    ctx->downcount -= 2;
    // 7F24488C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244890:
    ctx->pc = 0x7F244890u;
    // 7F244890: bl      0x7F244830
    {
            ctx->lr = 0x7F244894u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244830u;
                return;
            }
            goto label_7F244830;
    }

label_7F244894:
    ctx->pc = 0x7F244894u;
    ctx->downcount -= 6;
    // 7F244894: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244898:
    ctx->pc = 0x7F244898u;
    // 7F244898: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F24489C:
    ctx->pc = 0x7F24489Cu;
    // 7F24489C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2448A0:
    ctx->pc = 0x7F2448A0u;
    // 7F2448A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2448A4:
    ctx->pc = 0x7F2448A4u;
    // 7F2448A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2448A8:
    ctx->pc = 0x7F2448A8u;
    ctx->downcount -= 5;
    // 7F2448A8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2448AC:
    ctx->pc = 0x7F2448ACu;
    // 7F2448AC: lwzu     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2448B0:
    ctx->pc = 0x7F2448B0u;
    // 7F2448B0: andc   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[3];
    }

label_7F2448B4:
    ctx->pc = 0x7F2448B4u;
    // 7F2448B4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2448B8:
    ctx->pc = 0x7F2448B8u;
    // 7F2448B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2448BC:
    ctx->pc = 0x7F2448BCu;
    ctx->downcount -= 5;
    // 7F2448BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2448C0:
    ctx->pc = 0x7F2448C0u;
    // 7F2448C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2448C4:
    ctx->pc = 0x7F2448C4u;
    // 7F2448C4: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F2448C8:
    ctx->pc = 0x7F2448C8u;
    // 7F2448C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2448CC:
    ctx->pc = 0x7F2448CCu;
    // 7F2448CC: bl      0x7F042AAC
    {
            ctx->lr = 0x7F2448D0u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F2448D0:
    ctx->pc = 0x7F2448D0u;
    ctx->downcount -= 5;
    // 7F2448D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2448D4:
    ctx->pc = 0x7F2448D4u;
    // 7F2448D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2448D8:
    ctx->pc = 0x7F2448D8u;
    // 7F2448D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2448DC:
    ctx->pc = 0x7F2448DCu;
    // 7F2448DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2448E0:
    ctx->pc = 0x7F2448E0u;
    ctx->downcount -= 6;
    // 7F2448E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2448E4:
    ctx->pc = 0x7F2448E4u;
    // 7F2448E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2448E8:
    ctx->pc = 0x7F2448E8u;
    // 7F2448E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2448EC:
    ctx->pc = 0x7F2448ECu;
    // 7F2448EC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2448F0:
    ctx->pc = 0x7F2448F0u;
    // 7F2448F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2448F4:
    ctx->pc = 0x7F2448F4u;
    // 7F2448F4: bl      0x7F24477C
    {
            ctx->lr = 0x7F2448F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24477Cu;
                return;
            }
            goto label_7F24477C;
    }

label_7F2448F8:
    ctx->pc = 0x7F2448F8u;
    ctx->downcount -= 2;
    // 7F2448F8: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_7F2448FC:
    ctx->pc = 0x7F2448FCu;
    // 7F2448FC: bl      0x7F24492C
    {
            ctx->lr = 0x7F244900u;
            goto label_7F24492C;
    }

label_7F244900:
    ctx->pc = 0x7F244900u;
    ctx->downcount -= 3;
    // 7F244900: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F244904:
    ctx->pc = 0x7F244904u;
    // 7F244904: lfs     f1, 20332(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F244904u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F244908:
    ctx->pc = 0x7F244908u;
    // 7F244908: bl      0x7F252798
    {
            ctx->lr = 0x7F24490Cu;
            ctx->pc = 0x7F252798u;
            return;
    }

label_7F24490C:
    ctx->pc = 0x7F24490Cu;
    ctx->downcount -= 3;
    // 7F24490C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244910:
    ctx->pc = 0x7F244910u;
    // 7F244910: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244914:
    ctx->pc = 0x7F244914u;
    // 7F244914: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F244918u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F244918:
    ctx->pc = 0x7F244918u;
    ctx->downcount -= 6;
    // 7F244918: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24491C:
    ctx->pc = 0x7F24491Cu;
    // 7F24491C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F244920:
    ctx->pc = 0x7F244920u;
    // 7F244920: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244924:
    ctx->pc = 0x7F244924u;
    // 7F244924: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244928:
    ctx->pc = 0x7F244928u;
    // 7F244928: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F24492C:
    ctx->pc = 0x7F24492Cu;
    ctx->downcount -= 5;
    // 7F24492C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F244930:
    ctx->pc = 0x7F244930u;
    // 7F244930: lwzu     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F244934:
    ctx->pc = 0x7F244934u;
    // 7F244934: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F244938:
    ctx->pc = 0x7F244938u;
    // 7F244938: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24493C:
    ctx->pc = 0x7F24493Cu;
    // 7F24493C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244940:
    ctx->pc = 0x7F244940u;
    ctx->downcount -= 6;
    // 7F244940: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244944:
    ctx->pc = 0x7F244944u;
    // 7F244944: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244948:
    ctx->pc = 0x7F244948u;
    // 7F244948: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24494C:
    ctx->pc = 0x7F24494Cu;
    // 7F24494C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F244950:
    ctx->pc = 0x7F244950u;
    // 7F244950: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244954:
    ctx->pc = 0x7F244954u;
    // 7F244954: bl      0x7F2448E0
    {
            ctx->lr = 0x7F244958u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2448E0u;
                return;
            }
            goto label_7F2448E0;
    }

label_7F244958:
    ctx->pc = 0x7F244958u;
    ctx->downcount -= 21;
    // 7F244958: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24495C:
    ctx->pc = 0x7F24495Cu;
    // 7F24495C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F244960:
    ctx->pc = 0x7F244960u;
    // 7F244960: addi    r8, r3, -5852
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-5852);

label_7F244964:
    ctx->pc = 0x7F244964u;
    // 7F244964: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F244968:
    ctx->pc = 0x7F244968u;
    // 7F244968: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24496C:
    ctx->pc = 0x7F24496Cu;
    // 7F24496C: lis     r4, 49
    ctx->gpr[4] = ((u32)(s32)(49) << 16);

label_7F244970:
    ctx->pc = 0x7F244970u;
    // 7F244970: addi    r0, r5, 14080
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(14080);

label_7F244974:
    ctx->pc = 0x7F244974u;
    // 7F244974: addi    r6, r3, -5768
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5768);

label_7F244978:
    ctx->pc = 0x7F244978u;
    // 7F244978: mulli   r7, r7, 44
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[7] * (s64)(s32)44);

label_7F24497C:
    ctx->pc = 0x7F24497Cu;
    // 7F24497C: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F244980:
    ctx->pc = 0x7F244980u;
    // 7F244980: addi    r4, r4, 29206
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29206);

label_7F244984:
    ctx->pc = 0x7F244984u;
    // 7F244984: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F244988:
    ctx->pc = 0x7F244988u;
    // 7F244988: add   r0, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F24498C:
    ctx->pc = 0x7F24498Cu;
    // 7F24498C: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244990:
    ctx->pc = 0x7F244990u;
    // 7F244990: lwz     r0, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244994:
    ctx->pc = 0x7F244994u;
    // 7F244994: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F244998:
    ctx->pc = 0x7F244998u;
    // 7F244998: lwzx    r0, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24499C:
    ctx->pc = 0x7F24499Cu;
    // 7F24499C: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2449A0:
    ctx->pc = 0x7F2449A0u;
    // 7F2449A0: bl      0x7F04272C
    {
            ctx->lr = 0x7F2449A4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2449A4:
    ctx->pc = 0x7F2449A4u;
    ctx->downcount -= 3;
    // 7F2449A4: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2449A8:
    ctx->pc = 0x7F2449A8u;
    // 7F2449A8: cmplwi  r0, 0x0000
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

label_7F2449AC:
    ctx->pc = 0x7F2449ACu;
    // 7F2449AC: bc    4, 2, 0x7F2449B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2449B8;
        }
    }

label_7F2449B0:
    ctx->pc = 0x7F2449B0u;
    ctx->downcount -= 2;
    // 7F2449B0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2449B4:
    ctx->pc = 0x7F2449B4u;
    // 7F2449B4: b       0x7F2449F4
    {
            goto label_7F2449F4;
    }

label_7F2449B8:
    ctx->pc = 0x7F2449B8u;
    ctx->downcount -= 6;
    // 7F2449B8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2449BC:
    ctx->pc = 0x7F2449BCu;
    // 7F2449BC: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2449C0:
    ctx->pc = 0x7F2449C0u;
    // 7F2449C0: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F2449C4:
    ctx->pc = 0x7F2449C4u;
    // 7F2449C4: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2449C8:
    ctx->pc = 0x7F2449C8u;
    // 7F2449C8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2449CC:
    ctx->pc = 0x7F2449CCu;
    // 7F2449CC: bl      0x7F042B74
    {
            ctx->lr = 0x7F2449D0u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F2449D0:
    ctx->pc = 0x7F2449D0u;
    ctx->downcount -= 9;
    // 7F2449D0: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2449D4:
    ctx->pc = 0x7F2449D4u;
    // 7F2449D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2449D8:
    ctx->pc = 0x7F2449D8u;
    // 7F2449D8: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2449DC:
    ctx->pc = 0x7F2449DCu;
    // 7F2449DC: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2449E0:
    ctx->pc = 0x7F2449E0u;
    // 7F2449E0: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2449E4:
    ctx->pc = 0x7F2449E4u;
    // 7F2449E4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2449E8:
    ctx->pc = 0x7F2449E8u;
    // 7F2449E8: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2449EC:
    ctx->pc = 0x7F2449ECu;
    // 7F2449EC: rlwinm r0, r0, 0, 19, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFDFFFu;
    }

label_7F2449F0:
    ctx->pc = 0x7F2449F0u;
    // 7F2449F0: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2449F4:
    ctx->pc = 0x7F2449F4u;
    ctx->downcount -= 6;
    // 7F2449F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2449F8:
    ctx->pc = 0x7F2449F8u;
    // 7F2449F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2449FC:
    ctx->pc = 0x7F2449FCu;
    // 7F2449FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244A00:
    ctx->pc = 0x7F244A00u;
    // 7F244A00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244A04:
    ctx->pc = 0x7F244A04u;
    // 7F244A04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244A08:
    ctx->pc = 0x7F244A08u;
    ctx->downcount -= 23;
    // 7F244A08: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244A0C:
    ctx->pc = 0x7F244A0Cu;
    // 7F244A0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244A10:
    ctx->pc = 0x7F244A10u;
    // 7F244A10: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244A14:
    ctx->pc = 0x7F244A14u;
    // 7F244A14: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F244A18:
    ctx->pc = 0x7F244A18u;
    // 7F244A18: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244A1C:
    ctx->pc = 0x7F244A1Cu;
    // 7F244A1C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F244A20:
    ctx->pc = 0x7F244A20u;
    // 7F244A20: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F244A24:
    ctx->pc = 0x7F244A24u;
    // 7F244A24: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F244A28:
    ctx->pc = 0x7F244A28u;
    // 7F244A28: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F244A2C:
    ctx->pc = 0x7F244A2Cu;
    // 7F244A2C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F244A30:
    ctx->pc = 0x7F244A30u;
    // 7F244A30: li      r5, 140
    ctx->gpr[5] = (u32)(s32)(140);

label_7F244A34:
    ctx->pc = 0x7F244A34u;
    // 7F244A34: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F244A38:
    ctx->pc = 0x7F244A38u;
    // 7F244A38: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F244A3Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F244A3C:
    ctx->pc = 0x7F244A3Cu;
    ctx->downcount -= 2;
    // 7F244A3C: or.   r31, r3, r3
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

label_7F244A40:
    ctx->pc = 0x7F244A40u;
    // 7F244A40: bc    12, 2, 0x7F244AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244AC8;
        }
    }

label_7F244A44:
    ctx->pc = 0x7F244A44u;
    ctx->downcount -= 5;
    // 7F244A44: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F244A48:
    ctx->pc = 0x7F244A48u;
    // 7F244A48: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F244A4C:
    ctx->pc = 0x7F244A4Cu;
    // 7F244A4C: addi    r4, r4, 18484
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18484);

label_7F244A50:
    ctx->pc = 0x7F244A50u;
    // 7F244A50: addi    r5, r5, 18620
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(18620);

label_7F244A54:
    ctx->pc = 0x7F244A54u;
    // 7F244A54: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F244A58u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F244A58:
    ctx->pc = 0x7F244A58u;
    ctx->downcount -= 15;
    // 7F244A58: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244A5C:
    ctx->pc = 0x7F244A5Cu;
    // 7F244A5C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F244A60:
    ctx->pc = 0x7F244A60u;
    // 7F244A60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F244A64:
    ctx->pc = 0x7F244A64u;
    // 7F244A64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244A68:
    ctx->pc = 0x7F244A68u;
    // 7F244A68: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F244A6C:
    ctx->pc = 0x7F244A6Cu;
    // 7F244A6C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F244A70:
    ctx->pc = 0x7F244A70u;
    // 7F244A70: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F244A74:
    ctx->pc = 0x7F244A74u;
    // 7F244A74: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F244A78:
    ctx->pc = 0x7F244A78u;
    // 7F244A78: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F244A7C:
    ctx->pc = 0x7F244A7Cu;
    // 7F244A7C: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F244A80:
    ctx->pc = 0x7F244A80u;
    // 7F244A80: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F244A84:
    ctx->pc = 0x7F244A84u;
    // 7F244A84: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F244A88:
    ctx->pc = 0x7F244A88u;
    // 7F244A88: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F244A8C:
    ctx->pc = 0x7F244A8Cu;
    // 7F244A8C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244A90:
    ctx->pc = 0x7F244A90u;
    // 7F244A90: bl      0x7F244940
    {
            ctx->lr = 0x7F244A94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244940u;
                return;
            }
            goto label_7F244940;
    }

label_7F244A94:
    ctx->pc = 0x7F244A94u;
    ctx->downcount -= 2;
    // 7F244A94: cmpwi   r3, 0
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

label_7F244A98:
    ctx->pc = 0x7F244A98u;
    // 7F244A98: bc    4, 0, 0x7F244AAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244AAC;
        }
    }

label_7F244A9C:
    ctx->pc = 0x7F244A9Cu;
    ctx->downcount -= 2;
    // 7F244A9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244AA0:
    ctx->pc = 0x7F244AA0u;
    // 7F244AA0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F244AA4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F244AA4:
    ctx->pc = 0x7F244AA4u;
    ctx->downcount -= 2;
    // 7F244AA4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244AA8:
    ctx->pc = 0x7F244AA8u;
    // 7F244AA8: b       0x7F244ACC
    {
            goto label_7F244ACC;
    }

label_7F244AAC:
    ctx->pc = 0x7F244AACu;
    ctx->downcount -= 7;
    // 7F244AAC: stw     r27, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F244AB0:
    ctx->pc = 0x7F244AB0u;
    // 7F244AB0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F244AB4:
    ctx->pc = 0x7F244AB4u;
    // 7F244AB4: stw     r28, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F244AB8:
    ctx->pc = 0x7F244AB8u;
    // 7F244AB8: stw     r29, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F244ABC:
    ctx->pc = 0x7F244ABCu;
    // 7F244ABC: stw     r30, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F244AC0:
    ctx->pc = 0x7F244AC0u;
    // 7F244AC0: lwz     r0, -5852(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244AC4:
    ctx->pc = 0x7F244AC4u;
    // 7F244AC4: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244AC8:
    ctx->pc = 0x7F244AC8u;
    ctx->downcount -= 1;
    // 7F244AC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F244ACC:
    ctx->pc = 0x7F244ACCu;
    ctx->downcount -= 16;
    // 7F244ACC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F244AD0:
    ctx->pc = 0x7F244AD0u;
    // 7F244AD0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244AD4:
    ctx->pc = 0x7F244AD4u;
    // 7F244AD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244AD8:
    ctx->pc = 0x7F244AD8u;
    // 7F244AD8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F244ADC:
    ctx->pc = 0x7F244ADCu;
    // 7F244ADC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244AE0:
    ctx->pc = 0x7F244AE0u;
    ctx->downcount -= 9;
    // 7F244AE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244AE4:
    ctx->pc = 0x7F244AE4u;
    // 7F244AE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244AE8:
    ctx->pc = 0x7F244AE8u;
    // 7F244AE8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F244AEC:
    ctx->pc = 0x7F244AECu;
    // 7F244AEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244AF0:
    ctx->pc = 0x7F244AF0u;
    // 7F244AF0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F244AF4:
    ctx->pc = 0x7F244AF4u;
    // 7F244AF4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244AF8:
    ctx->pc = 0x7F244AF8u;
    // 7F244AF8: lwz     r0, 22156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(22156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244AFC:
    ctx->pc = 0x7F244AFCu;
    // 7F244AFC: cmplwi  r0, 0x0000
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

label_7F244B00:
    ctx->pc = 0x7F244B00u;
    // 7F244B00: bc    12, 2, 0x7F244BE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244BE4;
        }
    }

label_7F244B04:
    ctx->pc = 0x7F244B04u;
    ctx->downcount -= 5;
    // 7F244B04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F244B08:
    ctx->pc = 0x7F244B08u;
    // 7F244B08: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F244B0C:
    ctx->pc = 0x7F244B0Cu;
    // 7F244B0C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F244B10:
    ctx->pc = 0x7F244B10u;
    // 7F244B10: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F244B14:
    ctx->pc = 0x7F244B14u;
    // 7F244B14: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F244B18u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F244B18:
    ctx->pc = 0x7F244B18u;
    ctx->downcount -= 3;
    // 7F244B18: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244B1C:
    ctx->pc = 0x7F244B1Cu;
    // 7F244B1C: cmplwi  r0, 0x0000
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

label_7F244B20:
    ctx->pc = 0x7F244B20u;
    // 7F244B20: bc    4, 2, 0x7F244B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244B60;
        }
    }

label_7F244B24:
    ctx->pc = 0x7F244B24u;
    ctx->downcount -= 6;
    // 7F244B24: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F244B28:
    ctx->pc = 0x7F244B28u;
    // 7F244B28: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F244B2C:
    ctx->pc = 0x7F244B2Cu;
    // 7F244B2C: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F244B30:
    ctx->pc = 0x7F244B30u;
    // 7F244B30: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244B34:
    ctx->pc = 0x7F244B34u;
    // 7F244B34: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244B38:
    ctx->pc = 0x7F244B38u;
    // 7F244B38: bl      0x7F2D02B8
    {
            ctx->lr = 0x7F244B3Cu;
            ctx->pc = 0x7F2D02B8u;
            return;
    }

label_7F244B3C:
    ctx->pc = 0x7F244B3Cu;
    ctx->downcount -= 4;
    // 7F244B3C: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F244B40:
    ctx->pc = 0x7F244B40u;
    // 7F244B40: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244B44:
    ctx->pc = 0x7F244B44u;
    // 7F244B44: cmplwi  r0, 0x0000
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

label_7F244B48:
    ctx->pc = 0x7F244B48u;
    // 7F244B48: bc    12, 2, 0x7F244B60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244B60;
        }
    }

label_7F244B4C:
    ctx->pc = 0x7F244B4Cu;
    ctx->downcount -= 3;
    // 7F244B4C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F244B50:
    ctx->pc = 0x7F244B50u;
    // 7F244B50: addi    r3, r3, 11384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11384);

label_7F244B54:
    ctx->pc = 0x7F244B54u;
    // 7F244B54: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F244B58u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F244B58:
    ctx->pc = 0x7F244B58u;
    ctx->downcount -= 2;
    // 7F244B58: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244B5C:
    ctx->pc = 0x7F244B5Cu;
    // 7F244B5C: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F244B60:
    ctx->pc = 0x7F244B60u;
    ctx->downcount -= 17;
    // 7F244B60: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F244B64:
    ctx->pc = 0x7F244B64u;
    // 7F244B64: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F244B68:
    ctx->pc = 0x7F244B68u;
    // 7F244B68: addi    r5, r4, 22156
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F244B6C:
    ctx->pc = 0x7F244B6Cu;
    // 7F244B6C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244B70:
    ctx->pc = 0x7F244B70u;
    // 7F244B70: addi    r3, r3, -5668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F244B74:
    ctx->pc = 0x7F244B74u;
    // 7F244B74: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244B78:
    ctx->pc = 0x7F244B78u;
    // 7F244B78: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244B7C:
    ctx->pc = 0x7F244B7Cu;
    // 7F244B7C: rlwinm r0, r0, 0, 7, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x01000000u;
    }

label_7F244B80:
    ctx->pc = 0x7F244B80u;
    // 7F244B80: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244B84:
    ctx->pc = 0x7F244B84u;
    // 7F244B84: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244B88:
    ctx->pc = 0x7F244B88u;
    // 7F244B88: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244B8C:
    ctx->pc = 0x7F244B8Cu;
    // 7F244B8C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244B90:
    ctx->pc = 0x7F244B90u;
    // 7F244B90: rlwinm r0, r0, 0, 8, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFEFFFFFFu;
    }

label_7F244B94:
    ctx->pc = 0x7F244B94u;
    // 7F244B94: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244B98:
    ctx->pc = 0x7F244B98u;
    // 7F244B98: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244B9C:
    ctx->pc = 0x7F244B9Cu;
    // 7F244B9C: cmplwi  r3, 0x0000
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

label_7F244BA0:
    ctx->pc = 0x7F244BA0u;
    // 7F244BA0: bc    12, 2, 0x7F244BC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244BC0;
        }
    }

label_7F244BA4:
    ctx->pc = 0x7F244BA4u;
    ctx->downcount -= 3;
    // 7F244BA4: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244BA8:
    ctx->pc = 0x7F244BA8u;
    // 7F244BA8: cmplwi  r0, 0x0000
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

label_7F244BAC:
    ctx->pc = 0x7F244BACu;
    // 7F244BAC: bc    4, 2, 0x7F244BC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244BC0;
        }
    }

label_7F244BB0:
    ctx->pc = 0x7F244BB0u;
    ctx->downcount -= 3;
    // 7F244BB0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244BB4:
    ctx->pc = 0x7F244BB4u;
    // 7F244BB4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F244BB8:
    ctx->pc = 0x7F244BB8u;
    // 7F244BB8: bl      0x7F2D02B8
    {
            ctx->lr = 0x7F244BBCu;
            ctx->pc = 0x7F2D02B8u;
            return;
    }

label_7F244BBC:
    ctx->pc = 0x7F244BBCu;
    ctx->downcount -= 1;
    // 7F244BBC: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F244BC0:
    ctx->pc = 0x7F244BC0u;
    ctx->downcount -= 6;
    // 7F244BC0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F244BC4:
    ctx->pc = 0x7F244BC4u;
    // 7F244BC4: addi    r3, r3, -5668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F244BC8:
    ctx->pc = 0x7F244BC8u;
    // 7F244BC8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244BCC:
    ctx->pc = 0x7F244BCCu;
    // 7F244BCC: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244BD0:
    ctx->pc = 0x7F244BD0u;
    // 7F244BD0: cmplwi  r3, 0x0000
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

label_7F244BD4:
    ctx->pc = 0x7F244BD4u;
    // 7F244BD4: bc    12, 2, 0x7F244BE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244BE4;
        }
    }

label_7F244BD8:
    ctx->pc = 0x7F244BD8u;
    ctx->downcount -= 3;
    // 7F244BD8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244BDC:
    ctx->pc = 0x7F244BDCu;
    // 7F244BDC: ori     r0, r0, 0x0020
    ctx->gpr[0] = ctx->gpr[0] | 0x0020u;

label_7F244BE0:
    ctx->pc = 0x7F244BE0u;
    // 7F244BE0: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244BE4:
    ctx->pc = 0x7F244BE4u;
    ctx->downcount -= 6;
    // 7F244BE4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244BE8:
    ctx->pc = 0x7F244BE8u;
    // 7F244BE8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F244BEC:
    ctx->pc = 0x7F244BECu;
    // 7F244BEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244BF0:
    ctx->pc = 0x7F244BF0u;
    // 7F244BF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244BF4:
    ctx->pc = 0x7F244BF4u;
    // 7F244BF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244BF8:
    ctx->pc = 0x7F244BF8u;
    ctx->downcount -= 20;
    // 7F244BF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244BFC:
    ctx->pc = 0x7F244BFCu;
    // 7F244BFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244C00:
    ctx->pc = 0x7F244C00u;
    // 7F244C00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F244C04:
    ctx->pc = 0x7F244C04u;
    // 7F244C04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F244C08:
    ctx->pc = 0x7F244C08u;
    // 7F244C08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244C0C:
    ctx->pc = 0x7F244C0Cu;
    // 7F244C0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F244C10:
    ctx->pc = 0x7F244C10u;
    // 7F244C10: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F244C14:
    ctx->pc = 0x7F244C14u;
    // 7F244C14: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244C18:
    ctx->pc = 0x7F244C18u;
    // 7F244C18: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F244C1C:
    ctx->pc = 0x7F244C1Cu;
    // 7F244C1C: bl      0x7F042E08
    {
            ctx->lr = 0x7F244C20u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F244C20:
    ctx->pc = 0x7F244C20u;
    ctx->downcount -= 3;
    // 7F244C20: lwz     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244C24:
    ctx->pc = 0x7F244C24u;
    // 7F244C24: cmplwi  r3, 0x0000
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

label_7F244C28:
    ctx->pc = 0x7F244C28u;
    // 7F244C28: bc    12, 2, 0x7F244C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244C30;
        }
    }

label_7F244C2C:
    ctx->pc = 0x7F244C2Cu;
    ctx->downcount -= 1;
    // 7F244C2C: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F244C30u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F244C30:
    ctx->pc = 0x7F244C30u;
    ctx->downcount -= 4;
    // 7F244C30: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F244C34:
    ctx->pc = 0x7F244C34u;
    // 7F244C34: lwz     r0, 22156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244C38:
    ctx->pc = 0x7F244C38u;
    // 7F244C38: cmplwi  r0, 0x0000
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

label_7F244C3C:
    ctx->pc = 0x7F244C3Cu;
    // 7F244C3C: bc    12, 2, 0x7F244C8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244C8C;
        }
    }

label_7F244C40:
    ctx->pc = 0x7F244C40u;
    ctx->downcount -= 3;
    // 7F244C40: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244C44:
    ctx->pc = 0x7F244C44u;
    // 7F244C44: cmplwi  r3, 0x0000
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

label_7F244C48:
    ctx->pc = 0x7F244C48u;
    // 7F244C48: bc    12, 2, 0x7F244C8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244C8C;
        }
    }

label_7F244C4C:
    ctx->pc = 0x7F244C4Cu;
    ctx->downcount -= 1;
    // 7F244C4C: bl      0x7F3C8270
    {
            ctx->lr = 0x7F244C50u;
            ctx->pc = 0x7F3C8270u;
            return;
    }

label_7F244C50:
    ctx->pc = 0x7F244C50u;
    ctx->downcount -= 2;
    // 7F244C50: or.   r31, r3, r3
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

label_7F244C54:
    ctx->pc = 0x7F244C54u;
    // 7F244C54: bc    12, 2, 0x7F244C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244C78;
        }
    }

label_7F244C58:
    ctx->pc = 0x7F244C58u;
    ctx->downcount -= 3;
    // 7F244C58: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F244C5C:
    ctx->pc = 0x7F244C5Cu;
    // 7F244C5C: addi    r3, r3, 11384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11384);

label_7F244C60:
    ctx->pc = 0x7F244C60u;
    // 7F244C60: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F244C64u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F244C64:
    ctx->pc = 0x7F244C64u;
    ctx->downcount -= 3;
    // 7F244C64: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244C68:
    ctx->pc = 0x7F244C68u;
    // 7F244C68: cmplw   r0, r3
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

label_7F244C6C:
    ctx->pc = 0x7F244C6Cu;
    // 7F244C6C: bc    4, 2, 0x7F244C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244C78;
        }
    }

label_7F244C70:
    ctx->pc = 0x7F244C70u;
    ctx->downcount -= 2;
    // 7F244C70: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244C74:
    ctx->pc = 0x7F244C74u;
    // 7F244C74: bl      0x7F3C82E8
    {
            ctx->lr = 0x7F244C78u;
            ctx->pc = 0x7F3C82E8u;
            return;
    }

label_7F244C78:
    ctx->pc = 0x7F244C78u;
    ctx->downcount -= 5;
    // 7F244C78: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F244C7C:
    ctx->pc = 0x7F244C7Cu;
    // 7F244C7C: addi    r3, r3, 22156
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22156);

label_7F244C80:
    ctx->pc = 0x7F244C80u;
    // 7F244C80: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244C84:
    ctx->pc = 0x7F244C84u;
    // 7F244C84: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244C88:
    ctx->pc = 0x7F244C88u;
    // 7F244C88: bl      0x7F3B1F94
    {
            ctx->lr = 0x7F244C8Cu;
            ctx->pc = 0x7F3B1F94u;
            return;
    }

label_7F244C8C:
    ctx->pc = 0x7F244C8Cu;
    ctx->downcount -= 3;
    // 7F244C8C: lwz     r0, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244C90:
    ctx->pc = 0x7F244C90u;
    // 7F244C90: cmplwi  r0, 0x0000
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

label_7F244C94:
    ctx->pc = 0x7F244C94u;
    // 7F244C94: bc    12, 2, 0x7F244CAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244CAC;
        }
    }

label_7F244C98:
    ctx->pc = 0x7F244C98u;
    ctx->downcount -= 5;
    // 7F244C98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F244C9C:
    ctx->pc = 0x7F244C9Cu;
    // 7F244C9C: addi    r3, r3, -5668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F244CA0:
    ctx->pc = 0x7F244CA0u;
    // 7F244CA0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244CA4:
    ctx->pc = 0x7F244CA4u;
    // 7F244CA4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244CA8:
    ctx->pc = 0x7F244CA8u;
    // 7F244CA8: bl      0x7F3B1F94
    {
            ctx->lr = 0x7F244CACu;
            ctx->pc = 0x7F3B1F94u;
            return;
    }

label_7F244CAC:
    ctx->pc = 0x7F244CACu;
    ctx->downcount -= 16;
    // 7F244CAC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F244CB0:
    ctx->pc = 0x7F244CB0u;
    // 7F244CB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244CB4:
    ctx->pc = 0x7F244CB4u;
    // 7F244CB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244CB8:
    ctx->pc = 0x7F244CB8u;
    // 7F244CB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244CBC:
    ctx->pc = 0x7F244CBCu;
    // 7F244CBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244CC0:
    ctx->pc = 0x7F244CC0u;
    ctx->downcount -= 5;
    // 7F244CC0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F244CC4:
    ctx->pc = 0x7F244CC4u;
    // 7F244CC4: addi    r4, r4, 22156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F244CC8:
    ctx->pc = 0x7F244CC8u;
    // 7F244CC8: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244CCC:
    ctx->pc = 0x7F244CCCu;
    // 7F244CCC: cmplwi  r4, 0x0000
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

label_7F244CD0:
    ctx->pc = 0x7F244CD0u;
    // 7F244CD0: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244CD4:
    ctx->pc = 0x7F244CD4u;
    ctx->downcount -= 12;
    // 7F244CD4: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F244CD8:
    ctx->pc = 0x7F244CD8u;
    // 7F244CD8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F244CDC:
    ctx->pc = 0x7F244CDCu;
    // 7F244CDC: lwz     r5, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F244CE0:
    ctx->pc = 0x7F244CE0u;
    // 7F244CE0: addi    r3, r4, -5668
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-5668);

label_7F244CE4:
    ctx->pc = 0x7F244CE4u;
    // 7F244CE4: lwz     r4, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244CE8:
    ctx->pc = 0x7F244CE8u;
    // 7F244CE8: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244CEC:
    ctx->pc = 0x7F244CECu;
    // 7F244CEC: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F244CF0:
    ctx->pc = 0x7F244CF0u;
    // 7F244CF0: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244CF4:
    ctx->pc = 0x7F244CF4u;
    // 7F244CF4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244CF8:
    ctx->pc = 0x7F244CF8u;
    // 7F244CF8: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244CFC:
    ctx->pc = 0x7F244CFCu;
    // 7F244CFC: cmplwi  r4, 0x0000
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

label_7F244D00:
    ctx->pc = 0x7F244D00u;
    // 7F244D00: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244D04:
    ctx->pc = 0x7F244D04u;
    ctx->downcount -= 2;
    // 7F244D04: cmplwi  r3, 0x0000
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

label_7F244D08:
    ctx->pc = 0x7F244D08u;
    // 7F244D08: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244D0C:
    ctx->pc = 0x7F244D0Cu;
    ctx->downcount -= 4;
    // 7F244D0C: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244D10:
    ctx->pc = 0x7F244D10u;
    // 7F244D10: rlwinm r0, r0, 0, 27, 25
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFDFu;
    }

label_7F244D14:
    ctx->pc = 0x7F244D14u;
    // 7F244D14: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244D18:
    ctx->pc = 0x7F244D18u;
    // 7F244D18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244D1C:
    ctx->pc = 0x7F244D1Cu;
    ctx->downcount -= 19;
    // 7F244D1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244D20:
    ctx->pc = 0x7F244D20u;
    // 7F244D20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244D24:
    ctx->pc = 0x7F244D24u;
    // 7F244D24: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F244D28:
    ctx->pc = 0x7F244D28u;
    // 7F244D28: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F244D2C:
    ctx->pc = 0x7F244D2Cu;
    // 7F244D2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244D30:
    ctx->pc = 0x7F244D30u;
    // 7F244D30: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F244D34:
    ctx->pc = 0x7F244D34u;
    // 7F244D34: li      r6, 96
    ctx->gpr[6] = (u32)(s32)(96);

label_7F244D38:
    ctx->pc = 0x7F244D38u;
    // 7F244D38: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F244D3C:
    ctx->pc = 0x7F244D3Cu;
    // 7F244D3C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F244D40u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F244D40:
    ctx->pc = 0x7F244D40u;
    ctx->downcount -= 2;
    // 7F244D40: or.   r30, r3, r3
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

label_7F244D44:
    ctx->pc = 0x7F244D44u;
    // 7F244D44: bc    4, 2, 0x7F244D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244D50;
        }
    }

label_7F244D48:
    ctx->pc = 0x7F244D48u;
    ctx->downcount -= 2;
    // 7F244D48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244D4C:
    ctx->pc = 0x7F244D4Cu;
    // 7F244D4C: b       0x7F244E0C
    {
            goto label_7F244E0C;
    }

label_7F244D50:
    ctx->pc = 0x7F244D50u;
    ctx->downcount -= 5;
    // 7F244D50: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F244D54:
    ctx->pc = 0x7F244D54u;
    // 7F244D54: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F244D58:
    ctx->pc = 0x7F244D58u;
    // 7F244D58: addi    r4, r4, 19168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19168);

label_7F244D5C:
    ctx->pc = 0x7F244D5Cu;
    // 7F244D5C: addi    r5, r5, 19448
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19448);

label_7F244D60:
    ctx->pc = 0x7F244D60u;
    // 7F244D60: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F244D64u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F244D64:
    ctx->pc = 0x7F244D64u;
    ctx->downcount -= 15;
    // 7F244D64: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244D68:
    ctx->pc = 0x7F244D68u;
    // 7F244D68: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F244D6C:
    ctx->pc = 0x7F244D6Cu;
    // 7F244D6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F244D70:
    ctx->pc = 0x7F244D70u;
    // 7F244D70: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F244D74:
    ctx->pc = 0x7F244D74u;
    // 7F244D74: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F244D78:
    ctx->pc = 0x7F244D78u;
    // 7F244D78: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F244D7C:
    ctx->pc = 0x7F244D7Cu;
    // 7F244D7C: stw     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F244D80:
    ctx->pc = 0x7F244D80u;
    // 7F244D80: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F244D84:
    ctx->pc = 0x7F244D84u;
    // 7F244D84: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F244D88:
    ctx->pc = 0x7F244D88u;
    // 7F244D88: li      r6, 28
    ctx->gpr[6] = (u32)(s32)(28);

label_7F244D8C:
    ctx->pc = 0x7F244D8Cu;
    // 7F244D8C: stw     r7, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F244D90:
    ctx->pc = 0x7F244D90u;
    // 7F244D90: stw     r7, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F244D94:
    ctx->pc = 0x7F244D94u;
    // 7F244D94: stw     r7, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F244D98:
    ctx->pc = 0x7F244D98u;
    // 7F244D98: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244D9C:
    ctx->pc = 0x7F244D9Cu;
    // 7F244D9C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F244DA0u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F244DA0:
    ctx->pc = 0x7F244DA0u;
    ctx->downcount -= 2;
    // 7F244DA0: or.   r31, r3, r3
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

label_7F244DA4:
    ctx->pc = 0x7F244DA4u;
    // 7F244DA4: bc    4, 2, 0x7F244DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244DB8;
        }
    }

label_7F244DA8:
    ctx->pc = 0x7F244DA8u;
    ctx->downcount -= 2;
    // 7F244DA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F244DAC:
    ctx->pc = 0x7F244DACu;
    // 7F244DAC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F244DB0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F244DB0:
    ctx->pc = 0x7F244DB0u;
    ctx->downcount -= 2;
    // 7F244DB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244DB4:
    ctx->pc = 0x7F244DB4u;
    // 7F244DB4: b       0x7F244E0C
    {
            goto label_7F244E0C;
    }

label_7F244DB8:
    ctx->pc = 0x7F244DB8u;
    ctx->downcount -= 4;
    // 7F244DB8: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F244DBC:
    ctx->pc = 0x7F244DBCu;
    // 7F244DBC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F244DC0:
    ctx->pc = 0x7F244DC0u;
    // 7F244DC0: addi    r4, r4, 19648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19648);

label_7F244DC4:
    ctx->pc = 0x7F244DC4u;
    // 7F244DC4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F244DC8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F244DC8:
    ctx->pc = 0x7F244DC8u;
    ctx->downcount -= 10;
    // 7F244DC8: addi    r3, r30, 60
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(60);

label_7F244DCC:
    ctx->pc = 0x7F244DCCu;
    // 7F244DCC: addi    r0, r30, 64
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(64);

label_7F244DD0:
    ctx->pc = 0x7F244DD0u;
    // 7F244DD0: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F244DD4:
    ctx->pc = 0x7F244DD4u;
    // 7F244DD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F244DD8:
    ctx->pc = 0x7F244DD8u;
    // 7F244DD8: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F244DDC:
    ctx->pc = 0x7F244DDCu;
    // 7F244DDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F244DE0:
    ctx->pc = 0x7F244DE0u;
    // 7F244DE0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244DE4:
    ctx->pc = 0x7F244DE4u;
    // 7F244DE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F244DE8:
    ctx->pc = 0x7F244DE8u;
    // 7F244DE8: stw     r31, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F244DEC:
    ctx->pc = 0x7F244DECu;
    // 7F244DEC: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F244DF0u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F244DF0:
    ctx->pc = 0x7F244DF0u;
    ctx->downcount -= 7;
    // 7F244DF0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F244DF4:
    ctx->pc = 0x7F244DF4u;
    // 7F244DF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F244DF8:
    ctx->pc = 0x7F244DF8u;
    // 7F244DF8: addi    r4, r4, 13880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13880);

label_7F244DFC:
    ctx->pc = 0x7F244DFCu;
    // 7F244DFC: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244E00:
    ctx->pc = 0x7F244E00u;
    // 7F244E00: lha     r0, 5566(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5566);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F244E04:
    ctx->pc = 0x7F244E04u;
    // 7F244E04: ori     r0, r0, 0x1020
    ctx->gpr[0] = ctx->gpr[0] | 0x1020u;

label_7F244E08:
    ctx->pc = 0x7F244E08u;
    // 7F244E08: sth     r0, 5566(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5566);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F244E0C:
    ctx->pc = 0x7F244E0Cu;
    ctx->downcount -= 16;
    // 7F244E0C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F244E10:
    ctx->pc = 0x7F244E10u;
    // 7F244E10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244E14:
    ctx->pc = 0x7F244E14u;
    // 7F244E14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244E18:
    ctx->pc = 0x7F244E18u;
    // 7F244E18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244E1C:
    ctx->pc = 0x7F244E1Cu;
    // 7F244E1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244E20:
    ctx->pc = 0x7F244E20u;
    ctx->downcount -= 12;
    // 7F244E20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244E24:
    ctx->pc = 0x7F244E24u;
    // 7F244E24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244E28:
    ctx->pc = 0x7F244E28u;
    // 7F244E28: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F244E2C:
    ctx->pc = 0x7F244E2Cu;
    // 7F244E2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244E30:
    ctx->pc = 0x7F244E30u;
    // 7F244E30: addi    r5, r5, 20352
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20352);

label_7F244E34:
    ctx->pc = 0x7F244E34u;
    // 7F244E34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F244E38:
    ctx->pc = 0x7F244E38u;
    // 7F244E38: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F244E3C:
    ctx->pc = 0x7F244E3Cu;
    // 7F244E3C: lwz     r0, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244E40:
    ctx->pc = 0x7F244E40u;
    // 7F244E40: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244E44:
    ctx->pc = 0x7F244E44u;
    // 7F244E44: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F244E48:
    ctx->pc = 0x7F244E48u;
    // 7F244E48: lwzx    r4, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244E4C:
    ctx->pc = 0x7F244E4Cu;
    // 7F244E4C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F244E50u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F244E50:
    ctx->pc = 0x7F244E50u;
    ctx->downcount -= 2;
    // 7F244E50: cmplwi  r3, 0x0000
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

label_7F244E54:
    ctx->pc = 0x7F244E54u;
    // 7F244E54: bc    12, 2, 0x7F244E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244E7C;
        }
    }

label_7F244E58:
    ctx->pc = 0x7F244E58u;
    ctx->downcount -= 2;
    // 7F244E58: cmpwi   r31, 0
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

label_7F244E5C:
    ctx->pc = 0x7F244E5Cu;
    // 7F244E5C: bc    12, 2, 0x7F244E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244E70;
        }
    }

label_7F244E60:
    ctx->pc = 0x7F244E60u;
    ctx->downcount -= 4;
    // 7F244E60: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244E64:
    ctx->pc = 0x7F244E64u;
    // 7F244E64: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F244E68:
    ctx->pc = 0x7F244E68u;
    // 7F244E68: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244E6C:
    ctx->pc = 0x7F244E6Cu;
    // 7F244E6C: b       0x7F244E7C
    {
            goto label_7F244E7C;
    }

label_7F244E70:
    ctx->pc = 0x7F244E70u;
    ctx->downcount -= 3;
    // 7F244E70: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244E74:
    ctx->pc = 0x7F244E74u;
    // 7F244E74: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F244E78:
    ctx->pc = 0x7F244E78u;
    // 7F244E78: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244E7C:
    ctx->pc = 0x7F244E7Cu;
    ctx->downcount -= 6;
    // 7F244E7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244E80:
    ctx->pc = 0x7F244E80u;
    // 7F244E80: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F244E84:
    ctx->pc = 0x7F244E84u;
    // 7F244E84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244E88:
    ctx->pc = 0x7F244E88u;
    // 7F244E88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244E8C:
    ctx->pc = 0x7F244E8Cu;
    // 7F244E8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244E90:
    ctx->pc = 0x7F244E90u;
    ctx->downcount -= 15;
    // 7F244E90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244E94:
    ctx->pc = 0x7F244E94u;
    // 7F244E94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244E98:
    ctx->pc = 0x7F244E98u;
    // 7F244E98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F244E9C:
    ctx->pc = 0x7F244E9Cu;
    // 7F244E9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244EA0:
    ctx->pc = 0x7F244EA0u;
    // 7F244EA0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F244EA4:
    ctx->pc = 0x7F244EA4u;
    // 7F244EA4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F244EA8:
    ctx->pc = 0x7F244EA8u;
    // 7F244EA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244EAC:
    ctx->pc = 0x7F244EACu;
    // 7F244EAC: lwz     r4, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244EB0:
    ctx->pc = 0x7F244EB0u;
    // 7F244EB0: lwz     r6, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F244EB4:
    ctx->pc = 0x7F244EB4u;
    // 7F244EB4: and   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F244EB8:
    ctx->pc = 0x7F244EB8u;
    // 7F244EB8: and   r0, r6, r5
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F244EBC:
    ctx->pc = 0x7F244EBCu;
    // 7F244EBC: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F244EC0:
    ctx->pc = 0x7F244EC0u;
    // 7F244EC0: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F244EC4:
    ctx->pc = 0x7F244EC4u;
    // 7F244EC4: or.   r0, r4, r0
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

label_7F244EC8:
    ctx->pc = 0x7F244EC8u;
    // 7F244EC8: bc    12, 2, 0x7F244ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F244ED4;
        }
    }

label_7F244ECC:
    ctx->pc = 0x7F244ECCu;
    ctx->downcount -= 2;
    // 7F244ECC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244ED0:
    ctx->pc = 0x7F244ED0u;
    // 7F244ED0: b       0x7F244EEC
    {
            goto label_7F244EEC;
    }

label_7F244ED4:
    ctx->pc = 0x7F244ED4u;
    ctx->downcount -= 2;
    // 7F244ED4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F244ED8:
    ctx->pc = 0x7F244ED8u;
    // 7F244ED8: bl      0x7F244E20
    {
            ctx->lr = 0x7F244EDCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244E20u;
                return;
            }
            goto label_7F244E20;
    }

label_7F244EDC:
    ctx->pc = 0x7F244EDCu;
    ctx->downcount -= 4;
    // 7F244EDC: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244EE0:
    ctx->pc = 0x7F244EE0u;
    // 7F244EE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244EE4:
    ctx->pc = 0x7F244EE4u;
    // 7F244EE4: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F244EE8:
    ctx->pc = 0x7F244EE8u;
    // 7F244EE8: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244EEC:
    ctx->pc = 0x7F244EECu;
    ctx->downcount -= 6;
    // 7F244EEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244EF0:
    ctx->pc = 0x7F244EF0u;
    // 7F244EF0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F244EF4:
    ctx->pc = 0x7F244EF4u;
    // 7F244EF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244EF8:
    ctx->pc = 0x7F244EF8u;
    // 7F244EF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244EFC:
    ctx->pc = 0x7F244EFCu;
    // 7F244EFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244F00:
    ctx->pc = 0x7F244F00u;
    ctx->downcount -= 19;
    // 7F244F00: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244F04:
    ctx->pc = 0x7F244F04u;
    // 7F244F04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244F08:
    ctx->pc = 0x7F244F08u;
    // 7F244F08: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244F0C:
    ctx->pc = 0x7F244F0Cu;
    // 7F244F0C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F244F10:
    ctx->pc = 0x7F244F10u;
    // 7F244F10: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F244F14:
    ctx->pc = 0x7F244F14u;
    // 7F244F14: lwz     r12, 232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(232);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F244F18:
    ctx->pc = 0x7F244F18u;
    // 7F244F18: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F244F1C:
    ctx->pc = 0x7F244F1Cu;
    // 7F244F1C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F244F20u;
            ctx->pc = target;
            return;
        }
    }

label_7F244F20:
    ctx->pc = 0x7F244F20u;
    ctx->downcount -= 3;
    // 7F244F20: lwz     r0, 220(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244F24:
    ctx->pc = 0x7F244F24u;
    // 7F244F24: cmpwi   r0, 0
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

label_7F244F28:
    ctx->pc = 0x7F244F28u;
    // 7F244F28: bc    4, 2, 0x7F244F54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244F54;
        }
    }

label_7F244F2C:
    ctx->pc = 0x7F244F2Cu;
    ctx->downcount -= 2;
    // 7F244F2C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F244F30:
    ctx->pc = 0x7F244F30u;
    // 7F244F30: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F244F34:
    ctx->downcount -= 4;
    // 7F244F34: addi    r4, r31, 88
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(88);

label_7F244F38:
    // 7F244F38: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F244F3C:
    // 7F244F3C: add   r4, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F244F40:
    // 7F244F40: bl      0x7F244F68
    {
            ctx->lr = 0x7F244F44u;
            goto label_7F244F68;
    }

label_7F244F44:
    ctx->downcount -= 4;
    // 7F244F44: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F244F48:
    // 7F244F48: addi    r31, r31, 32
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(32);

label_7F244F4C:
    // 7F244F4C: cmpwi   r30, 4
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

label_7F244F50:
    // 7F244F50: bc    12, 0, 0x7F244F34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244F34u;
                return;
            }
            goto label_7F244F34;
        }
    }

label_7F244F54:
    ctx->pc = 0x7F244F54u;
    ctx->downcount -= 16;
    // 7F244F54: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F244F58:
    ctx->pc = 0x7F244F58u;
    // 7F244F58: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244F5C:
    ctx->pc = 0x7F244F5Cu;
    // 7F244F5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244F60:
    ctx->pc = 0x7F244F60u;
    // 7F244F60: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F244F64:
    ctx->pc = 0x7F244F64u;
    // 7F244F64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244F68:
    ctx->pc = 0x7F244F68u;
    ctx->downcount -= 14;
    // 7F244F68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244F6C:
    ctx->pc = 0x7F244F6Cu;
    // 7F244F6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244F70:
    ctx->pc = 0x7F244F70u;
    // 7F244F70: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F244F74:
    ctx->pc = 0x7F244F74u;
    // 7F244F74: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F244F78:
    ctx->pc = 0x7F244F78u;
    // 7F244F78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244F7C:
    ctx->pc = 0x7F244F7Cu;
    // 7F244F7C: li      r0, 512
    ctx->gpr[0] = (u32)(s32)(512);

label_7F244F80:
    ctx->pc = 0x7F244F80u;
    // 7F244F80: lwz     r4, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244F84:
    ctx->pc = 0x7F244F84u;
    // 7F244F84: lwz     r6, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F244F88:
    ctx->pc = 0x7F244F88u;
    // 7F244F88: and   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[5];
    }

label_7F244F8C:
    ctx->pc = 0x7F244F8Cu;
    // 7F244F8C: and   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F244F90:
    ctx->pc = 0x7F244F90u;
    // 7F244F90: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F244F94:
    ctx->pc = 0x7F244F94u;
    // 7F244F94: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F244F98:
    ctx->pc = 0x7F244F98u;
    // 7F244F98: or.   r0, r4, r0
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

label_7F244F9C:
    ctx->pc = 0x7F244F9Cu;
    // 7F244F9C: bc    4, 2, 0x7F244FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F244FB8;
        }
    }

label_7F244FA0:
    ctx->pc = 0x7F244FA0u;
    ctx->downcount -= 5;
    // 7F244FA0: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F244FA4:
    ctx->pc = 0x7F244FA4u;
    // 7F244FA4: lwz     r4, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F244FA8:
    ctx->pc = 0x7F244FA8u;
    // 7F244FA8: lwz     r5, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F244FAC:
    ctx->pc = 0x7F244FACu;
    // 7F244FAC: lwz     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F244FB0:
    ctx->pc = 0x7F244FB0u;
    // 7F244FB0: bl      0x7F244FD4
    {
            ctx->lr = 0x7F244FB4u;
            goto label_7F244FD4;
    }

label_7F244FB4:
    ctx->pc = 0x7F244FB4u;
    ctx->downcount -= 1;
    // 7F244FB4: b       0x7F244FC0
    {
            goto label_7F244FC0;
    }

label_7F244FB8:
    ctx->pc = 0x7F244FB8u;
    ctx->downcount -= 2;
    // 7F244FB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F244FBC:
    ctx->pc = 0x7F244FBCu;
    // 7F244FBC: b       0x7F244FC4
    {
            goto label_7F244FC4;
    }

label_7F244FC0:
    ctx->pc = 0x7F244FC0u;
    ctx->downcount -= 1;
    // 7F244FC0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F244FC4:
    ctx->pc = 0x7F244FC4u;
    ctx->downcount -= 5;
    // 7F244FC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F244FC8:
    ctx->pc = 0x7F244FC8u;
    // 7F244FC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F244FCC:
    ctx->pc = 0x7F244FCCu;
    // 7F244FCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F244FD0:
    ctx->pc = 0x7F244FD0u;
    // 7F244FD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F244FD4:
    ctx->pc = 0x7F244FD4u;
    ctx->downcount -= 19;
    // 7F244FD4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F244FD8:
    ctx->pc = 0x7F244FD8u;
    // 7F244FD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F244FDC:
    ctx->pc = 0x7F244FDCu;
    // 7F244FDC: cmpwi   r4, 0
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

label_7F244FE0:
    ctx->pc = 0x7F244FE0u;
    // 7F244FE0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F244FE4:
    ctx->pc = 0x7F244FE4u;
    // 7F244FE4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F244FE8:
    ctx->pc = 0x7F244FE8u;
    // 7F244FE8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F244FEC:
    ctx->pc = 0x7F244FECu;
    // 7F244FEC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F244FF0:
    ctx->pc = 0x7F244FF0u;
    // 7F244FF0: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F244FF4:
    ctx->pc = 0x7F244FF4u;
    // 7F244FF4: bc    12, 2, 0x7F245098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245098;
        }
    }

label_7F244FF8:
    ctx->pc = 0x7F244FF8u;
    ctx->downcount -= 1;
    // 7F244FF8: bl      0x7F2E5028
    {
            ctx->lr = 0x7F244FFCu;
            ctx->pc = 0x7F2E5028u;
            return;
    }

label_7F244FFC:
    ctx->pc = 0x7F244FFCu;
    ctx->downcount -= 2;
    // 7F244FFC: cmplwi  r3, 0x0000
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

label_7F245000:
    ctx->pc = 0x7F245000u;
    // 7F245000: bc    12, 2, 0x7F245098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245098;
        }
    }

label_7F245004:
    ctx->pc = 0x7F245004u;
    ctx->downcount -= 41;
    // 7F245004: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F245008:
    ctx->pc = 0x7F245008u;
    // 7F245008: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F24500C:
    ctx->pc = 0x7F24500Cu;
    // 7F24500C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F245010:
    ctx->pc = 0x7F245010u;
    // 7F245010: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F245014:
    ctx->pc = 0x7F245014u;
    // 7F245014: xoris   r4, r4, 0x8000
    ctx->gpr[4] = ctx->gpr[4] ^ (0x8000u << 16);

label_7F245018:
    ctx->pc = 0x7F245018u;
    // 7F245018: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24501C:
    ctx->pc = 0x7F24501Cu;
    // 7F24501C: addi    r7, r6, 20392
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(20392);

label_7F245020:
    ctx->pc = 0x7F245020u;
    // 7F245020: addi    r6, r5, 20344
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(20344);

label_7F245024:
    ctx->pc = 0x7F245024u;
    // 7F245024: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F245028:
    ctx->pc = 0x7F245028u;
    // 7F245028: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F24502C:
    ctx->pc = 0x7F24502Cu;
    // 7F24502C: lfs     f3, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F24502Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F245030:
    ctx->pc = 0x7F245030u;
    // 7F245030: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F245034:
    ctx->pc = 0x7F245034u;
    // 7F245034: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F245034u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F245038:
    ctx->pc = 0x7F245038u;
    // 7F245038: lfd     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F245038u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24503C:
    ctx->pc = 0x7F24503Cu;
    // 7F24503C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24503Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F245040:
    ctx->pc = 0x7F245040u;
    // 7F245040: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F245040u)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F245044:
    ctx->pc = 0x7F245044u;
    // 7F245044: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F245044u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F245048:
    ctx->pc = 0x7F245048u;
    // 7F245048: fdivs   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F245048u)) return;
    ppc_fdivs(ctx, 0, 2, 0);

label_7F24504C:
    ctx->pc = 0x7F24504Cu;
    // 7F24504C: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24504Cu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F245050:
    ctx->pc = 0x7F245050u;
    // 7F245050: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F245050u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F245054:
    ctx->pc = 0x7F245054u;
    // 7F245054: lwz     r6, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F245058:
    ctx->pc = 0x7F245058u;
    // 7F245058: addi    r0, r6, -1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-1);

label_7F24505C:
    ctx->pc = 0x7F24505Cu;
    // 7F24505C: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245060:
    ctx->pc = 0x7F245060u;
    // 7F245060: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F245060u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F245064:
    ctx->pc = 0x7F245064u;
    // 7F245064: bl      0x7F2E5104
    {
            ctx->lr = 0x7F245068u;
            ctx->pc = 0x7F2E5104u;
            return;
    }

label_7F245068:
    ctx->pc = 0x7F245068u;
    ctx->downcount -= 5;
    // 7F245068: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24506C:
    ctx->pc = 0x7F24506Cu;
    // 7F24506C: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F24506Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F245070:
    ctx->pc = 0x7F245070u;
    // 7F245070: lfs     f1, 20392(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F245070u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20392);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F245074:
    ctx->pc = 0x7F245074u;
    // 7F245074: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F245074u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F245078:
    ctx->pc = 0x7F245078u;
    // 7F245078: bc    12, 2, 0x7F245088
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245088;
        }
    }

label_7F24507C:
    ctx->pc = 0x7F24507Cu;
    ctx->downcount -= 3;
    // 7F24507C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245080:
    ctx->pc = 0x7F245080u;
    // 7F245080: cmpwi   r0, 0
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

label_7F245084:
    ctx->pc = 0x7F245084u;
    // 7F245084: bc    4, 2, 0x7F245098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245098;
        }
    }

label_7F245088:
    ctx->pc = 0x7F245088u;
    ctx->downcount -= 4;
    // 7F245088: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24508C:
    ctx->pc = 0x7F24508Cu;
    // 7F24508C: li      r0, 512
    ctx->gpr[0] = (u32)(s32)(512);

label_7F245090:
    ctx->pc = 0x7F245090u;
    // 7F245090: stw     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245094:
    ctx->pc = 0x7F245094u;
    // 7F245094: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245098:
    ctx->pc = 0x7F245098u;
    ctx->downcount -= 16;
    // 7F245098: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24509C:
    ctx->pc = 0x7F24509Cu;
    // 7F24509C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2450A0:
    ctx->pc = 0x7F2450A0u;
    // 7F2450A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2450A4:
    ctx->pc = 0x7F2450A4u;
    // 7F2450A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2450A8:
    ctx->pc = 0x7F2450A8u;
    // 7F2450A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2450AC:
    ctx->pc = 0x7F2450ACu;
    ctx->downcount -= 8;
    // 7F2450AC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2450B0:
    ctx->pc = 0x7F2450B0u;
    // 7F2450B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2450B4:
    ctx->pc = 0x7F2450B4u;
    // 7F2450B4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2450B8:
    ctx->pc = 0x7F2450B8u;
    // 7F2450B8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2450BC:
    ctx->pc = 0x7F2450BCu;
    // 7F2450BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2450C0:
    ctx->pc = 0x7F2450C0u;
    // 7F2450C0: lwz     r0, 220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2450C4:
    ctx->pc = 0x7F2450C4u;
    // 7F2450C4: cmpwi   r0, 1
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

label_7F2450C8:
    ctx->pc = 0x7F2450C8u;
    // 7F2450C8: bc    12, 2, 0x7F24513C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24513C;
        }
    }

label_7F2450CC:
    ctx->pc = 0x7F2450CCu;
    ctx->downcount -= 1;
    // 7F2450CC: bc    4, 0, 0x7F2450DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2450DC;
        }
    }

label_7F2450D0:
    ctx->pc = 0x7F2450D0u;
    ctx->downcount -= 2;
    // 7F2450D0: cmpwi   r0, 0
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

label_7F2450D4:
    ctx->pc = 0x7F2450D4u;
    // 7F2450D4: bc    4, 0, 0x7F2450E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2450E8;
        }
    }

label_7F2450D8:
    ctx->pc = 0x7F2450D8u;
    ctx->downcount -= 1;
    // 7F2450D8: b       0x7F245188
    {
            goto label_7F245188;
    }

label_7F2450DC:
    ctx->pc = 0x7F2450DCu;
    ctx->downcount -= 2;
    // 7F2450DC: cmpwi   r0, 4
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

label_7F2450E0:
    ctx->pc = 0x7F2450E0u;
    // 7F2450E0: bc    4, 0, 0x7F245188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245188;
        }
    }

label_7F2450E4:
    ctx->pc = 0x7F2450E4u;
    ctx->downcount -= 1;
    // 7F2450E4: b       0x7F24517C
    {
            goto label_7F24517C;
    }

label_7F2450E8:
    ctx->pc = 0x7F2450E8u;
    ctx->downcount -= 7;
    // 7F2450E8: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F2450EC:
    ctx->pc = 0x7F2450ECu;
    // 7F2450EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2450F0:
    ctx->pc = 0x7F2450F0u;
    // 7F2450F0: addi    r4, r3, 28636
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F2450F4:
    ctx->pc = 0x7F2450F4u;
    // 7F2450F4: lwz     r3, 1848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1848);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2450F8:
    ctx->pc = 0x7F2450F8u;
    // 7F2450F8: stw     r0, 900(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2450FC:
    ctx->pc = 0x7F2450FCu;
    // 7F2450FC: cmpwi   r3, 0
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

label_7F245100:
    ctx->pc = 0x7F245100u;
    // 7F245100: bc    12, 2, 0x7F24510C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24510C;
        }
    }

label_7F245104:
    ctx->pc = 0x7F245104u;
    ctx->downcount -= 2;
    // 7F245104: stw     r3, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245108:
    ctx->pc = 0x7F245108u;
    // 7F245108: b       0x7F245114
    {
            goto label_7F245114;
    }

label_7F24510C:
    ctx->pc = 0x7F24510Cu;
    ctx->downcount -= 2;
    // 7F24510C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F245110:
    ctx->pc = 0x7F245110u;
    // 7F245110: stw     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245114:
    ctx->pc = 0x7F245114u;
    ctx->downcount -= 7;
    // 7F245114: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245118:
    ctx->pc = 0x7F245118u;
    // 7F245118: lis     r3, 178
    ctx->gpr[3] = ((u32)(s32)(178) << 16);

label_7F24511C:
    ctx->pc = 0x7F24511Cu;
    // 7F24511C: stw     r0, 1848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245120:
    ctx->pc = 0x7F245120u;
    // 7F245120: addi    r0, r3, -1568
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1568);

label_7F245124:
    ctx->pc = 0x7F245124u;
    // 7F245124: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245128:
    ctx->pc = 0x7F245128u;
    // 7F245128: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24512C:
    ctx->pc = 0x7F24512Cu;
    // 7F24512C: bl      0x7F24519C
    {
            ctx->lr = 0x7F245130u;
            goto label_7F24519C;
    }

label_7F245130:
    ctx->pc = 0x7F245130u;
    ctx->downcount -= 2;
    // 7F245130: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245134:
    ctx->pc = 0x7F245134u;
    // 7F245134: bl      0x7F245220
    {
            ctx->lr = 0x7F245138u;
            goto label_7F245220;
    }

label_7F245138:
    ctx->pc = 0x7F245138u;
    ctx->downcount -= 1;
    // 7F245138: b       0x7F245188
    {
            goto label_7F245188;
    }

label_7F24513C:
    ctx->pc = 0x7F24513Cu;
    ctx->downcount -= 12;
    // 7F24513C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245140:
    ctx->pc = 0x7F245140u;
    // 7F245140: li      r3, 486
    ctx->gpr[3] = (u32)(s32)(486);

label_7F245144:
    ctx->pc = 0x7F245144u;
    // 7F245144: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245148:
    ctx->pc = 0x7F245148u;
    // 7F245148: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F24514C:
    ctx->pc = 0x7F24514Cu;
    // 7F24514C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245150:
    ctx->pc = 0x7F245150u;
    // 7F245150: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F245154:
    ctx->pc = 0x7F245154u;
    // 7F245154: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245158:
    ctx->pc = 0x7F245158u;
    // 7F245158: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F24515C:
    ctx->pc = 0x7F24515Cu;
    // 7F24515C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F245160:
    ctx->pc = 0x7F245160u;
    // 7F245160: li      r9, 35
    ctx->gpr[9] = (u32)(s32)(35);

label_7F245164:
    ctx->pc = 0x7F245164u;
    // 7F245164: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F245168:
    ctx->pc = 0x7F245168u;
    // 7F245168: bl      0x800501FC
    {
            ctx->lr = 0x7F24516Cu;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F24516C:
    ctx->pc = 0x7F24516Cu;
    ctx->downcount -= 4;
    // 7F24516C: lis     r3, 6
    ctx->gpr[3] = ((u32)(s32)(6) << 16);

label_7F245170:
    ctx->pc = 0x7F245170u;
    // 7F245170: addi    r0, r3, -16871
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16871);

label_7F245174:
    ctx->pc = 0x7F245174u;
    // 7F245174: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245178:
    ctx->pc = 0x7F245178u;
    // 7F245178: b       0x7F245188
    {
            goto label_7F245188;
    }

label_7F24517C:
    ctx->pc = 0x7F24517Cu;
    ctx->downcount -= 3;
    // 7F24517C: lis     r3, 45
    ctx->gpr[3] = ((u32)(s32)(45) << 16);

label_7F245180:
    ctx->pc = 0x7F245180u;
    // 7F245180: addi    r0, r3, 1829
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1829);

label_7F245184:
    ctx->pc = 0x7F245184u;
    // 7F245184: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245188:
    ctx->pc = 0x7F245188u;
    ctx->downcount -= 6;
    // 7F245188: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24518C:
    ctx->pc = 0x7F24518Cu;
    // 7F24518C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F245190:
    ctx->pc = 0x7F245190u;
    // 7F245190: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245194:
    ctx->pc = 0x7F245194u;
    // 7F245194: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F245198:
    ctx->pc = 0x7F245198u;
    // 7F245198: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F24519C:
    ctx->pc = 0x7F24519Cu;
    ctx->downcount -= 33;
    // 7F24519C: lis     r4, 180
    ctx->gpr[4] = ((u32)(s32)(180) << 16);

label_7F2451A0:
    ctx->pc = 0x7F2451A0u;
    // 7F2451A0: lis     r5, 29
    ctx->gpr[5] = ((u32)(s32)(29) << 16);

label_7F2451A4:
    ctx->pc = 0x7F2451A4u;
    // 7F2451A4: addi    r0, r4, -18460
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18460);

label_7F2451A8:
    ctx->pc = 0x7F2451A8u;
    // 7F2451A8: lis     r6, 127
    ctx->gpr[6] = ((u32)(s32)(127) << 16);

label_7F2451AC:
    ctx->pc = 0x7F2451ACu;
    // 7F2451AC: stw     r0, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2451B0:
    ctx->pc = 0x7F2451B0u;
    // 7F2451B0: addi    r0, r5, 6887
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(6887);

label_7F2451B4:
    ctx->pc = 0x7F2451B4u;
    // 7F2451B4: lis     r4, 100
    ctx->gpr[4] = ((u32)(s32)(100) << 16);

label_7F2451B8:
    ctx->pc = 0x7F2451B8u;
    // 7F2451B8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2451BC:
    ctx->pc = 0x7F2451BCu;
    // 7F2451BC: stw     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2451C0:
    ctx->pc = 0x7F2451C0u;
    // 7F2451C0: addi    r7, r4, -2967
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-2967);

label_7F2451C4:
    ctx->pc = 0x7F2451C4u;
    // 7F2451C4: addi    r0, r6, -29346
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-29346);

label_7F2451C8:
    ctx->pc = 0x7F2451C8u;
    // 7F2451C8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2451CC:
    ctx->pc = 0x7F2451CCu;
    // 7F2451CC: stw     r7, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2451D0:
    ctx->pc = 0x7F2451D0u;
    // 7F2451D0: addi    r6, r5, 20396
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(20396);

label_7F2451D4:
    ctx->pc = 0x7F2451D4u;
    // 7F2451D4: lfs     f0, 20336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2451D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2451D8:
    ctx->pc = 0x7F2451D8u;
    // 7F2451D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2451DC:
    ctx->pc = 0x7F2451DCu;
    // 7F2451DC: stw     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2451E0:
    ctx->pc = 0x7F2451E0u;
    // 7F2451E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2451E4:
    ctx->pc = 0x7F2451E4u;
    // 7F2451E4: lwz     r4, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2451E8:
    ctx->pc = 0x7F2451E8u;
    // 7F2451E8: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F2451EC:
    ctx->pc = 0x7F2451ECu;
    // 7F2451EC: lwzx    r4, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2451F0:
    ctx->pc = 0x7F2451F0u;
    // 7F2451F0: stw     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2451F4:
    ctx->pc = 0x7F2451F4u;
    // 7F2451F4: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2451F8:
    ctx->pc = 0x7F2451F8u;
    // 7F2451F8: stw     r4, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2451FC:
    ctx->pc = 0x7F2451FCu;
    // 7F2451FC: stw     r5, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245200:
    ctx->pc = 0x7F245200u;
    // 7F245200: stw     r5, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245204:
    ctx->pc = 0x7F245204u;
    // 7F245204: stfs     f0, 88(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F245204u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F245208:
    ctx->pc = 0x7F245208u;
    // 7F245208: stw     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24520C:
    ctx->pc = 0x7F24520Cu;
    // 7F24520C: stw     r5, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245210:
    ctx->pc = 0x7F245210u;
    // 7F245210: stw     r5, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245214:
    ctx->pc = 0x7F245214u;
    // 7F245214: stfs     f0, 152(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F245214u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F245218:
    ctx->pc = 0x7F245218u;
    // 7F245218: stw     r0, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24521C:
    ctx->pc = 0x7F24521Cu;
    // 7F24521C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245220:
    ctx->pc = 0x7F245220u;
    ctx->downcount -= 33;
    // 7F245220: lis     r4, 184
    ctx->gpr[4] = ((u32)(s32)(184) << 16);

label_7F245224:
    ctx->pc = 0x7F245224u;
    // 7F245224: lis     r5, 33
    ctx->gpr[5] = ((u32)(s32)(33) << 16);

label_7F245228:
    ctx->pc = 0x7F245228u;
    // 7F245228: addi    r0, r4, -18140
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-18140);

label_7F24522C:
    ctx->pc = 0x7F24522Cu;
    // 7F24522C: lis     r6, 127
    ctx->gpr[6] = ((u32)(s32)(127) << 16);

label_7F245230:
    ctx->pc = 0x7F245230u;
    // 7F245230: stw     r0, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245234:
    ctx->pc = 0x7F245234u;
    // 7F245234: addi    r0, r5, 7207
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(7207);

label_7F245238:
    ctx->pc = 0x7F245238u;
    // 7F245238: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F24523C:
    ctx->pc = 0x7F24523Cu;
    // 7F24523C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F245240:
    ctx->pc = 0x7F245240u;
    // 7F245240: stw     r0, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245244:
    ctx->pc = 0x7F245244u;
    // 7F245244: addi    r7, r4, -2454
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-2454);

label_7F245248:
    ctx->pc = 0x7F245248u;
    // 7F245248: addi    r0, r6, -12942
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-12942);

label_7F24524C:
    ctx->pc = 0x7F24524Cu;
    // 7F24524C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F245250:
    ctx->pc = 0x7F245250u;
    // 7F245250: stw     r7, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F245254:
    ctx->pc = 0x7F245254u;
    // 7F245254: addi    r6, r5, 20436
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(20436);

label_7F245258:
    ctx->pc = 0x7F245258u;
    // 7F245258: lfs     f0, 20336(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F245258u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20336);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24525C:
    ctx->pc = 0x7F24525Cu;
    // 7F24525C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245260:
    ctx->pc = 0x7F245260u;
    // 7F245260: stw     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245264:
    ctx->pc = 0x7F245264u;
    // 7F245264: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F245268:
    ctx->pc = 0x7F245268u;
    // 7F245268: lwz     r4, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24526C:
    ctx->pc = 0x7F24526Cu;
    // 7F24526C: rlwinm r4, r4, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F245270:
    ctx->pc = 0x7F245270u;
    // 7F245270: lwzx    r4, r6, r4
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[4];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F245274:
    ctx->pc = 0x7F245274u;
    // 7F245274: stw     r4, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F245278:
    ctx->pc = 0x7F245278u;
    // 7F245278: lwz     r4, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24527C:
    ctx->pc = 0x7F24527Cu;
    // 7F24527C: stw     r4, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F245280:
    ctx->pc = 0x7F245280u;
    // 7F245280: stw     r5, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245284:
    ctx->pc = 0x7F245284u;
    // 7F245284: stw     r5, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245288:
    ctx->pc = 0x7F245288u;
    // 7F245288: stfs     f0, 120(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F245288u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24528C:
    ctx->pc = 0x7F24528Cu;
    // 7F24528C: stw     r0, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245290:
    ctx->pc = 0x7F245290u;
    // 7F245290: stw     r5, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245294:
    ctx->pc = 0x7F245294u;
    // 7F245294: stw     r5, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245298:
    ctx->pc = 0x7F245298u;
    // 7F245298: stfs     f0, 184(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F245298u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F24529C:
    ctx->pc = 0x7F24529Cu;
    // 7F24529C: stw     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2452A0:
    ctx->pc = 0x7F2452A0u;
    // 7F2452A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2452A4:
    ctx->pc = 0x7F2452A4u;
    ctx->downcount -= 7;
    // 7F2452A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2452A8:
    ctx->pc = 0x7F2452A8u;
    // 7F2452A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2452AC:
    ctx->pc = 0x7F2452ACu;
    // 7F2452AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2452B0:
    ctx->pc = 0x7F2452B0u;
    // 7F2452B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2452B4:
    ctx->pc = 0x7F2452B4u;
    // 7F2452B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2452B8:
    ctx->pc = 0x7F2452B8u;
    // 7F2452B8: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2452BC:
    ctx->pc = 0x7F2452BCu;
    // 7F2452BC: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F2452C0u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F2452C0:
    ctx->pc = 0x7F2452C0u;
    ctx->downcount -= 2;
    // 7F2452C0: cmpwi   r3, -3
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

label_7F2452C4:
    ctx->pc = 0x7F2452C4u;
    // 7F2452C4: bc    12, 2, 0x7F24551C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24551C;
        }
    }

label_7F2452C8:
    ctx->pc = 0x7F2452C8u;
    ctx->downcount -= 10;
    // 7F2452C8: lwz     r6, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2452CC:
    ctx->pc = 0x7F2452CCu;
    // 7F2452CC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2452D0:
    ctx->pc = 0x7F2452D0u;
    // 7F2452D0: lwz     r7, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2452D4:
    ctx->pc = 0x7F2452D4u;
    // 7F2452D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2452D8:
    ctx->pc = 0x7F2452D8u;
    // 7F2452D8: and   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F2452DC:
    ctx->pc = 0x7F2452DCu;
    // 7F2452DC: and   r4, r7, r5
    {
        ctx->gpr[4] = ctx->gpr[7] & ctx->gpr[5];
    }

label_7F2452E0:
    ctx->pc = 0x7F2452E0u;
    // 7F2452E0: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F2452E4:
    ctx->pc = 0x7F2452E4u;
    // 7F2452E4: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F2452E8:
    ctx->pc = 0x7F2452E8u;
    // 7F2452E8: or.   r0, r4, r0
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

label_7F2452EC:
    ctx->pc = 0x7F2452ECu;
    // 7F2452EC: bc    12, 2, 0x7F24551C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24551C;
        }
    }

label_7F2452F0:
    ctx->pc = 0x7F2452F0u;
    ctx->downcount -= 5;
    // 7F2452F0: lis     r3, 45
    ctx->gpr[3] = ((u32)(s32)(45) << 16);

label_7F2452F4:
    ctx->pc = 0x7F2452F4u;
    // 7F2452F4: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2452F8:
    ctx->pc = 0x7F2452F8u;
    // 7F2452F8: addi    r0, r3, 1829
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1829);

label_7F2452FC:
    ctx->pc = 0x7F2452FCu;
    // 7F2452FC: cmpw    r4, r0
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

label_7F245300:
    ctx->pc = 0x7F245300u;
    // 7F245300: bc    12, 2, 0x7F2453E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2453E4;
        }
    }

label_7F245304:
    ctx->pc = 0x7F245304u;
    ctx->downcount -= 1;
    // 7F245304: bc    4, 0, 0x7F245358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245358;
        }
    }

label_7F245308:
    ctx->pc = 0x7F245308u;
    ctx->downcount -= 4;
    // 7F245308: lis     r3, 9
    ctx->gpr[3] = ((u32)(s32)(9) << 16);

label_7F24530C:
    ctx->pc = 0x7F24530Cu;
    // 7F24530C: addi    r0, r3, -23557
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-23557);

label_7F245310:
    ctx->pc = 0x7F245310u;
    // 7F245310: cmpw    r4, r0
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

label_7F245314:
    ctx->pc = 0x7F245314u;
    // 7F245314: bc    12, 2, 0x7F2453A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2453A4;
        }
    }

label_7F245318:
    ctx->pc = 0x7F245318u;
    ctx->downcount -= 1;
    // 7F245318: bc    4, 0, 0x7F245344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245344;
        }
    }

label_7F24531C:
    ctx->pc = 0x7F24531Cu;
    ctx->downcount -= 4;
    // 7F24531C: lis     r3, 6
    ctx->gpr[3] = ((u32)(s32)(6) << 16);

label_7F245320:
    ctx->pc = 0x7F245320u;
    // 7F245320: addi    r3, r3, -16871
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16871);

label_7F245324:
    ctx->pc = 0x7F245324u;
    // 7F245324: cmpw    r4, r3
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F245328:
    ctx->pc = 0x7F245328u;
    // 7F245328: bc    12, 2, 0x7F245400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245400;
        }
    }

label_7F24532C:
    ctx->pc = 0x7F24532Cu;
    ctx->downcount -= 1;
    // 7F24532C: bc    4, 0, 0x7F2454F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2454F4;
        }
    }

label_7F245330:
    ctx->pc = 0x7F245330u;
    ctx->downcount -= 4;
    // 7F245330: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F245334:
    ctx->pc = 0x7F245334u;
    // 7F245334: addi    r0, r3, -29885
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29885);

label_7F245338:
    ctx->pc = 0x7F245338u;
    // 7F245338: cmpw    r4, r0
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

label_7F24533C:
    ctx->pc = 0x7F24533Cu;
    // 7F24533C: bc    12, 2, 0x7F2454B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2454B8;
        }
    }

label_7F245340:
    ctx->pc = 0x7F245340u;
    ctx->downcount -= 1;
    // 7F245340: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F245344:
    ctx->pc = 0x7F245344u;
    ctx->downcount -= 4;
    // 7F245344: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F245348:
    ctx->pc = 0x7F245348u;
    // 7F245348: addi    r3, r3, -31373
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31373);

label_7F24534C:
    ctx->pc = 0x7F24534Cu;
    // 7F24534C: cmpw    r4, r3
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F245350:
    ctx->pc = 0x7F245350u;
    // 7F245350: bc    12, 2, 0x7F245448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245448;
        }
    }

label_7F245354:
    ctx->pc = 0x7F245354u;
    ctx->downcount -= 1;
    // 7F245354: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F245358:
    ctx->pc = 0x7F245358u;
    ctx->downcount -= 4;
    // 7F245358: lis     r3, 202
    ctx->gpr[3] = ((u32)(s32)(202) << 16);

label_7F24535C:
    ctx->pc = 0x7F24535Cu;
    // 7F24535C: addi    r0, r3, -13065
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-13065);

label_7F245360:
    ctx->pc = 0x7F245360u;
    // 7F245360: cmpw    r4, r0
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

label_7F245364:
    ctx->pc = 0x7F245364u;
    // 7F245364: bc    12, 2, 0x7F2454B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2454B8;
        }
    }

label_7F245368:
    ctx->pc = 0x7F245368u;
    ctx->downcount -= 1;
    // 7F245368: bc    4, 0, 0x7F245394
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245394;
        }
    }

label_7F24536C:
    ctx->pc = 0x7F24536Cu;
    ctx->downcount -= 4;
    // 7F24536C: lis     r3, 178
    ctx->gpr[3] = ((u32)(s32)(178) << 16);

label_7F245370:
    ctx->pc = 0x7F245370u;
    // 7F245370: addi    r0, r3, -1568
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1568);

label_7F245374:
    ctx->pc = 0x7F245374u;
    // 7F245374: cmpw    r4, r0
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

label_7F245378:
    ctx->pc = 0x7F245378u;
    // 7F245378: bc    12, 2, 0x7F2453BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2453BC;
        }
    }

label_7F24537C:
    ctx->pc = 0x7F24537Cu;
    ctx->downcount -= 1;
    // 7F24537C: bc    4, 0, 0x7F2454F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2454F4;
        }
    }

label_7F245380:
    ctx->pc = 0x7F245380u;
    ctx->downcount -= 4;
    // 7F245380: lis     r3, 144
    ctx->gpr[3] = ((u32)(s32)(144) << 16);

label_7F245384:
    ctx->pc = 0x7F245384u;
    // 7F245384: addi    r0, r3, 2803
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2803);

label_7F245388:
    ctx->pc = 0x7F245388u;
    // 7F245388: cmpw    r4, r0
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

label_7F24538C:
    ctx->pc = 0x7F24538Cu;
    // 7F24538C: bc    12, 2, 0x7F2454B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2454B8;
        }
    }

label_7F245390:
    ctx->pc = 0x7F245390u;
    ctx->downcount -= 1;
    // 7F245390: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F245394:
    ctx->pc = 0x7F245394u;
    ctx->downcount -= 3;
    // 7F245394: addi    r0, r3, 28076
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28076);

label_7F245398:
    ctx->pc = 0x7F245398u;
    // 7F245398: cmpw    r4, r0
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

label_7F24539C:
    ctx->pc = 0x7F24539Cu;
    // 7F24539C: bc    12, 2, 0x7F2454D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2454D8;
        }
    }

label_7F2453A0:
    ctx->pc = 0x7F2453A0u;
    ctx->downcount -= 1;
    // 7F2453A0: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F2453A4:
    ctx->pc = 0x7F2453A4u;
    ctx->downcount -= 5;
    // 7F2453A4: stw     r7, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2453A8:
    ctx->pc = 0x7F2453A8u;
    // 7F2453A8: ori     r0, r6, 0x0004
    ctx->gpr[0] = ctx->gpr[6] | 0x0004u;

label_7F2453AC:
    ctx->pc = 0x7F2453ACu;
    // 7F2453AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2453B0:
    ctx->pc = 0x7F2453B0u;
    // 7F2453B0: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2453B4:
    ctx->pc = 0x7F2453B4u;
    // 7F2453B4: bl      0x7F2450AC
    {
            ctx->lr = 0x7F2453B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2450ACu;
                return;
            }
            goto label_7F2450AC;
    }

label_7F2453B8:
    ctx->pc = 0x7F2453B8u;
    ctx->downcount -= 1;
    // 7F2453B8: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F2453BC:
    ctx->pc = 0x7F2453BCu;
    ctx->downcount -= 3;
    // 7F2453BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2453C0:
    ctx->pc = 0x7F2453C0u;
    // 7F2453C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2453C4:
    ctx->pc = 0x7F2453C4u;
    // 7F2453C4: bl      0x7F244E20
    {
            ctx->lr = 0x7F2453C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244E20u;
                return;
            }
            goto label_7F244E20;
    }

label_7F2453C8:
    ctx->pc = 0x7F2453C8u;
    ctx->downcount -= 7;
    // 7F2453C8: lis     r3, 202
    ctx->gpr[3] = ((u32)(s32)(202) << 16);

label_7F2453CC:
    ctx->pc = 0x7F2453CCu;
    // 7F2453CC: addi    r0, r3, 28076
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28076);

label_7F2453D0:
    ctx->pc = 0x7F2453D0u;
    // 7F2453D0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2453D4:
    ctx->pc = 0x7F2453D4u;
    // 7F2453D4: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2453D8:
    ctx->pc = 0x7F2453D8u;
    // 7F2453D8: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F2453DC:
    ctx->pc = 0x7F2453DCu;
    // 7F2453DC: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2453E0:
    ctx->pc = 0x7F2453E0u;
    // 7F2453E0: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F2453E4:
    ctx->pc = 0x7F2453E4u;
    ctx->downcount -= 7;
    // 7F2453E4: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F2453E8:
    ctx->pc = 0x7F2453E8u;
    // 7F2453E8: addi    r0, r3, -31373
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31373);

label_7F2453EC:
    ctx->pc = 0x7F2453ECu;
    // 7F2453EC: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2453F0:
    ctx->pc = 0x7F2453F0u;
    // 7F2453F0: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2453F4:
    ctx->pc = 0x7F2453F4u;
    // 7F2453F4: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F2453F8:
    ctx->pc = 0x7F2453F8u;
    // 7F2453F8: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2453FC:
    ctx->pc = 0x7F2453FCu;
    // 7F2453FC: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F245400:
    ctx->pc = 0x7F245400u;
    ctx->downcount -= 3;
    // 7F245400: lwz     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245404:
    ctx->pc = 0x7F245404u;
    // 7F245404: cmpwi   r0, 1
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

label_7F245408:
    ctx->pc = 0x7F245408u;
    // 7F245408: bc    4, 0, 0x7F24542C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24542C;
        }
    }

label_7F24540C:
    ctx->pc = 0x7F24540Cu;
    ctx->downcount -= 8;
    // 7F24540C: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245410:
    ctx->pc = 0x7F245410u;
    // 7F245410: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245414:
    ctx->pc = 0x7F245414u;
    // 7F245414: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F245418:
    ctx->pc = 0x7F245418u;
    // 7F245418: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24541C:
    ctx->pc = 0x7F24541Cu;
    // 7F24541C: lwz     r3, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245420:
    ctx->pc = 0x7F245420u;
    // 7F245420: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F245424:
    ctx->pc = 0x7F245424u;
    // 7F245424: stw     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245428:
    ctx->pc = 0x7F245428u;
    // 7F245428: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F24542C:
    ctx->pc = 0x7F24542Cu;
    ctx->downcount -= 7;
    // 7F24542C: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F245430:
    ctx->pc = 0x7F245430u;
    // 7F245430: addi    r0, r3, -29885
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29885);

label_7F245434:
    ctx->pc = 0x7F245434u;
    // 7F245434: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245438:
    ctx->pc = 0x7F245438u;
    // 7F245438: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24543C:
    ctx->pc = 0x7F24543Cu;
    // 7F24543C: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F245440:
    ctx->pc = 0x7F245440u;
    // 7F245440: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245444:
    ctx->pc = 0x7F245444u;
    // 7F245444: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F245448:
    ctx->pc = 0x7F245448u;
    ctx->downcount -= 3;
    // 7F245448: lwz     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24544C:
    ctx->pc = 0x7F24544Cu;
    // 7F24544C: cmpwi   r0, 1
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

label_7F245450:
    ctx->pc = 0x7F245450u;
    // 7F245450: bc    4, 0, 0x7F245474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245474;
        }
    }

label_7F245454:
    ctx->pc = 0x7F245454u;
    ctx->downcount -= 8;
    // 7F245454: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245458:
    ctx->pc = 0x7F245458u;
    // 7F245458: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24545C:
    ctx->pc = 0x7F24545Cu;
    // 7F24545C: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F245460:
    ctx->pc = 0x7F245460u;
    // 7F245460: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245464:
    ctx->pc = 0x7F245464u;
    // 7F245464: lwz     r3, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245468:
    ctx->pc = 0x7F245468u;
    // 7F245468: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F24546C:
    ctx->pc = 0x7F24546Cu;
    // 7F24546C: stw     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245470:
    ctx->pc = 0x7F245470u;
    // 7F245470: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F245474:
    ctx->pc = 0x7F245474u;
    ctx->downcount -= 3;
    // 7F245474: lwz     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245478:
    ctx->pc = 0x7F245478u;
    // 7F245478: cmpwi   r0, 2
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

label_7F24547C:
    ctx->pc = 0x7F24547Cu;
    // 7F24547C: bc    4, 2, 0x7F24549C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24549C;
        }
    }

label_7F245480:
    ctx->pc = 0x7F245480u;
    ctx->downcount -= 7;
    // 7F245480: lis     r3, 144
    ctx->gpr[3] = ((u32)(s32)(144) << 16);

label_7F245484:
    ctx->pc = 0x7F245484u;
    // 7F245484: addi    r0, r3, 2803
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2803);

label_7F245488:
    ctx->pc = 0x7F245488u;
    // 7F245488: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24548C:
    ctx->pc = 0x7F24548Cu;
    // 7F24548C: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245490:
    ctx->pc = 0x7F245490u;
    // 7F245490: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F245494:
    ctx->pc = 0x7F245494u;
    // 7F245494: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245498:
    ctx->pc = 0x7F245498u;
    // 7F245498: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F24549C:
    ctx->pc = 0x7F24549Cu;
    ctx->downcount -= 7;
    // 7F24549C: lis     r3, 202
    ctx->gpr[3] = ((u32)(s32)(202) << 16);

label_7F2454A0:
    ctx->pc = 0x7F2454A0u;
    // 7F2454A0: addi    r0, r3, -13065
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-13065);

label_7F2454A4:
    ctx->pc = 0x7F2454A4u;
    // 7F2454A4: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2454A8:
    ctx->pc = 0x7F2454A8u;
    // 7F2454A8: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2454AC:
    ctx->pc = 0x7F2454ACu;
    // 7F2454AC: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F2454B0:
    ctx->pc = 0x7F2454B0u;
    // 7F2454B0: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2454B4:
    ctx->pc = 0x7F2454B4u;
    // 7F2454B4: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F2454B8:
    ctx->pc = 0x7F2454B8u;
    ctx->downcount -= 3;
    // 7F2454B8: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2454BC:
    ctx->pc = 0x7F2454BCu;
    // 7F2454BC: cmpwi   r3, 0
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

label_7F2454C0:
    ctx->pc = 0x7F2454C0u;
    // 7F2454C0: bc    12, 2, 0x7F2454CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2454CC;
        }
    }

label_7F2454C4:
    ctx->pc = 0x7F2454C4u;
    ctx->downcount -= 2;
    // 7F2454C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2454C8:
    ctx->pc = 0x7F2454C8u;
    // 7F2454C8: bl      0x7F01FA88
    {
            ctx->lr = 0x7F2454CCu;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F2454CC:
    ctx->pc = 0x7F2454CCu;
    ctx->downcount -= 2;
    // 7F2454CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2454D0:
    ctx->pc = 0x7F2454D0u;
    // 7F2454D0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2454D4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2454D4:
    ctx->pc = 0x7F2454D4u;
    ctx->downcount -= 1;
    // 7F2454D4: b       0x7F2454F4
    {
            goto label_7F2454F4;
    }

label_7F2454D8:
    ctx->pc = 0x7F2454D8u;
    ctx->downcount -= 3;
    // 7F2454D8: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2454DC:
    ctx->pc = 0x7F2454DCu;
    // 7F2454DC: cmpwi   r3, 0
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

label_7F2454E0:
    ctx->pc = 0x7F2454E0u;
    // 7F2454E0: bc    12, 2, 0x7F2454EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2454EC;
        }
    }

label_7F2454E4:
    ctx->pc = 0x7F2454E4u;
    ctx->downcount -= 2;
    // 7F2454E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2454E8:
    ctx->pc = 0x7F2454E8u;
    // 7F2454E8: bl      0x7F01FA88
    {
            ctx->lr = 0x7F2454ECu;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F2454EC:
    ctx->pc = 0x7F2454ECu;
    ctx->downcount -= 2;
    // 7F2454EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2454F0:
    ctx->pc = 0x7F2454F0u;
    // 7F2454F0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2454F4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2454F4:
    ctx->pc = 0x7F2454F4u;
    ctx->downcount -= 10;
    // 7F2454F4: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2454F8:
    ctx->pc = 0x7F2454F8u;
    // 7F2454F8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2454FC:
    ctx->pc = 0x7F2454FCu;
    // 7F2454FC: lwz     r5, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F245500:
    ctx->pc = 0x7F245500u;
    // 7F245500: li      r4, -9
    ctx->gpr[4] = (u32)(s32)(-9);

label_7F245504:
    ctx->pc = 0x7F245504u;
    // 7F245504: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F245508:
    ctx->pc = 0x7F245508u;
    // 7F245508: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24550C:
    ctx->pc = 0x7F24550Cu;
    // 7F24550C: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245510:
    ctx->pc = 0x7F245510u;
    // 7F245510: and   r0, r5, r4
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F245514:
    ctx->pc = 0x7F245514u;
    // 7F245514: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245518:
    ctx->pc = 0x7F245518u;
    // 7F245518: b       0x7F24559C
    {
            goto label_7F24559C;
    }

label_7F24551C:
    ctx->pc = 0x7F24551Cu;
    ctx->downcount -= 2;
    // 7F24551C: cmpwi   r3, -3
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

label_7F245520:
    ctx->pc = 0x7F245520u;
    // 7F245520: bc    12, 2, 0x7F245598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245598;
        }
    }

label_7F245524:
    ctx->pc = 0x7F245524u;
    ctx->downcount -= 10;
    // 7F245524: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F245528:
    ctx->pc = 0x7F245528u;
    // 7F245528: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F24552C:
    ctx->pc = 0x7F24552Cu;
    // 7F24552C: lwz     r6, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F245530:
    ctx->pc = 0x7F245530u;
    // 7F245530: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245534:
    ctx->pc = 0x7F245534u;
    // 7F245534: and   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F245538:
    ctx->pc = 0x7F245538u;
    // 7F245538: and   r4, r6, r5
    {
        ctx->gpr[4] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F24553C:
    ctx->pc = 0x7F24553Cu;
    // 7F24553C: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F245540:
    ctx->pc = 0x7F245540u;
    // 7F245540: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F245544:
    ctx->pc = 0x7F245544u;
    // 7F245544: or.   r0, r4, r0
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

label_7F245548:
    ctx->pc = 0x7F245548u;
    // 7F245548: bc    12, 2, 0x7F245598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245598;
        }
    }

label_7F24554C:
    ctx->pc = 0x7F24554Cu;
    ctx->downcount -= 2;
    // 7F24554C: cmpwi   r3, 0
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

label_7F245550:
    ctx->pc = 0x7F245550u;
    // 7F245550: bc    4, 2, 0x7F245598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245598;
        }
    }

label_7F245554:
    ctx->pc = 0x7F245554u;
    ctx->downcount -= 4;
    // 7F245554: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F245558:
    ctx->pc = 0x7F245558u;
    // 7F245558: addis   r0, r4, -177
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(-177) << 16);

label_7F24555C:
    ctx->pc = 0x7F24555Cu;
    // 7F24555C: cmplwi  r0, 0xF9E0
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xF9E0u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F245560:
    ctx->pc = 0x7F245560u;
    // 7F245560: bc    12, 2, 0x7F24556C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24556C;
        }
    }

label_7F245564:
    ctx->pc = 0x7F245564u;
    ctx->downcount -= 2;
    // 7F245564: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245568:
    ctx->pc = 0x7F245568u;
    // 7F245568: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F24556Cu;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F24556C:
    ctx->pc = 0x7F24556Cu;
    ctx->downcount -= 11;
    // 7F24556C: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F245570:
    ctx->pc = 0x7F245570u;
    // 7F245570: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F245574:
    ctx->pc = 0x7F245574u;
    // 7F245574: li      r3, -5
    ctx->gpr[3] = (u32)(s32)(-5);

label_7F245578:
    ctx->pc = 0x7F245578u;
    // 7F245578: ori     r4, r4, 0x0008
    ctx->gpr[4] = ctx->gpr[4] | 0x0008u;

label_7F24557C:
    ctx->pc = 0x7F24557Cu;
    // 7F24557C: stw     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F245580:
    ctx->pc = 0x7F245580u;
    // 7F245580: lwz     r5, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F245584:
    ctx->pc = 0x7F245584u;
    // 7F245584: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F245588:
    ctx->pc = 0x7F245588u;
    // 7F245588: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F24558C:
    ctx->pc = 0x7F24558Cu;
    // 7F24558C: stw     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245590:
    ctx->pc = 0x7F245590u;
    // 7F245590: and   r0, r4, r3
    {
        ctx->gpr[0] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F245594:
    ctx->pc = 0x7F245594u;
    // 7F245594: stw     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245598:
    ctx->pc = 0x7F245598u;
    ctx->downcount -= 1;
    // 7F245598: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24559C:
    ctx->pc = 0x7F24559Cu;
    ctx->downcount -= 6;
    // 7F24559C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2455A0:
    ctx->pc = 0x7F2455A0u;
    // 7F2455A0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2455A4:
    ctx->pc = 0x7F2455A4u;
    // 7F2455A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2455A8:
    ctx->pc = 0x7F2455A8u;
    // 7F2455A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2455AC:
    ctx->pc = 0x7F2455ACu;
    // 7F2455AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2455B0:
    ctx->pc = 0x7F2455B0u;
    ctx->downcount -= 7;
    // 7F2455B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2455B4:
    ctx->pc = 0x7F2455B4u;
    // 7F2455B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2455B8:
    ctx->pc = 0x7F2455B8u;
    // 7F2455B8: lis     r5, 123
    ctx->gpr[5] = ((u32)(s32)(123) << 16);

label_7F2455BC:
    ctx->pc = 0x7F2455BCu;
    // 7F2455BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2455C0:
    ctx->pc = 0x7F2455C0u;
    // 7F2455C0: addi    r0, r5, 9864
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(9864);

label_7F2455C4:
    ctx->pc = 0x7F2455C4u;
    // 7F2455C4: cmpw    r4, r0
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

label_7F2455C8:
    ctx->pc = 0x7F2455C8u;
    // 7F2455C8: bc    12, 2, 0x7F2456B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2456B4;
        }
    }

label_7F2455CC:
    ctx->pc = 0x7F2455CCu;
    ctx->downcount -= 1;
    // 7F2455CC: bc    4, 0, 0x7F24560C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24560C;
        }
    }

label_7F2455D0:
    ctx->pc = 0x7F2455D0u;
    ctx->downcount -= 4;
    // 7F2455D0: lis     r3, 56
    ctx->gpr[3] = ((u32)(s32)(56) << 16);

label_7F2455D4:
    ctx->pc = 0x7F2455D4u;
    // 7F2455D4: addi    r0, r3, 5952
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5952);

label_7F2455D8:
    ctx->pc = 0x7F2455D8u;
    // 7F2455D8: cmpw    r4, r0
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

label_7F2455DC:
    ctx->pc = 0x7F2455DCu;
    // 7F2455DC: bc    12, 2, 0x7F245680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245680;
        }
    }

label_7F2455E0:
    ctx->pc = 0x7F2455E0u;
    ctx->downcount -= 1;
    // 7F2455E0: bc    4, 0, 0x7F2455F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2455F8;
        }
    }

label_7F2455E4:
    ctx->pc = 0x7F2455E4u;
    ctx->downcount -= 4;
    // 7F2455E4: lis     r3, 41
    ctx->gpr[3] = ((u32)(s32)(41) << 16);

label_7F2455E8:
    ctx->pc = 0x7F2455E8u;
    // 7F2455E8: addi    r0, r3, -20829
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20829);

label_7F2455EC:
    ctx->pc = 0x7F2455ECu;
    // 7F2455EC: cmpw    r4, r0
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

label_7F2455F0:
    ctx->pc = 0x7F2455F0u;
    // 7F2455F0: bc    12, 2, 0x7F24564C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24564C;
        }
    }

label_7F2455F4:
    ctx->pc = 0x7F2455F4u;
    ctx->downcount -= 1;
    // 7F2455F4: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F2455F8:
    ctx->pc = 0x7F2455F8u;
    ctx->downcount -= 4;
    // 7F2455F8: lis     r3, 63
    ctx->gpr[3] = ((u32)(s32)(63) << 16);

label_7F2455FC:
    ctx->pc = 0x7F2455FCu;
    // 7F2455FC: addi    r0, r3, -29352
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29352);

label_7F245600:
    ctx->pc = 0x7F245600u;
    // 7F245600: cmpw    r4, r0
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

label_7F245604:
    ctx->pc = 0x7F245604u;
    // 7F245604: bc    12, 2, 0x7F245768
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245768;
        }
    }

label_7F245608:
    ctx->pc = 0x7F245608u;
    ctx->downcount -= 1;
    // 7F245608: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F24560C:
    ctx->pc = 0x7F24560Cu;
    ctx->downcount -= 4;
    // 7F24560C: lis     r5, 206
    ctx->gpr[5] = ((u32)(s32)(206) << 16);

label_7F245610:
    ctx->pc = 0x7F245610u;
    // 7F245610: addi    r0, r5, -3058
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-3058);

label_7F245614:
    ctx->pc = 0x7F245614u;
    // 7F245614: cmpw    r4, r0
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

label_7F245618:
    ctx->pc = 0x7F245618u;
    // 7F245618: bc    12, 2, 0x7F2456E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2456E8;
        }
    }

label_7F24561C:
    ctx->pc = 0x7F24561Cu;
    ctx->downcount -= 1;
    // 7F24561C: bc    4, 0, 0x7F245634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245634;
        }
    }

label_7F245620:
    ctx->pc = 0x7F245620u;
    ctx->downcount -= 4;
    // 7F245620: lis     r5, 176
    ctx->gpr[5] = ((u32)(s32)(176) << 16);

label_7F245624:
    ctx->pc = 0x7F245624u;
    // 7F245624: addi    r0, r5, -28953
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-28953);

label_7F245628:
    ctx->pc = 0x7F245628u;
    // 7F245628: cmpw    r4, r0
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

label_7F24562C:
    ctx->pc = 0x7F24562Cu;
    // 7F24562C: bc    12, 2, 0x7F245644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245644;
        }
    }

label_7F245630:
    ctx->pc = 0x7F245630u;
    ctx->downcount -= 1;
    // 7F245630: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F245634:
    ctx->pc = 0x7F245634u;
    ctx->downcount -= 3;
    // 7F245634: addi    r0, r5, -3056
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-3056);

label_7F245638:
    ctx->pc = 0x7F245638u;
    // 7F245638: cmpw    r4, r0
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

label_7F24563C:
    ctx->pc = 0x7F24563Cu;
    // 7F24563C: bc    4, 0, 0x7F245798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245798;
        }
    }

label_7F245640:
    ctx->pc = 0x7F245640u;
    ctx->downcount -= 1;
    // 7F245640: b       0x7F245728
    {
            goto label_7F245728;
    }

label_7F245644:
    ctx->pc = 0x7F245644u;
    ctx->downcount -= 1;
    // 7F245644: bl      0x7F244E90
    {
            ctx->lr = 0x7F245648u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F244E90u;
                return;
            }
            goto label_7F244E90;
    }

label_7F245648:
    ctx->pc = 0x7F245648u;
    ctx->downcount -= 1;
    // 7F245648: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F24564C:
    ctx->pc = 0x7F24564Cu;
    ctx->downcount -= 12;
    // 7F24564C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245650:
    ctx->pc = 0x7F245650u;
    // 7F245650: li      r3, 487
    ctx->gpr[3] = (u32)(s32)(487);

label_7F245654:
    ctx->pc = 0x7F245654u;
    // 7F245654: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245658:
    ctx->pc = 0x7F245658u;
    // 7F245658: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F24565C:
    ctx->pc = 0x7F24565Cu;
    // 7F24565C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245660:
    ctx->pc = 0x7F245660u;
    // 7F245660: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F245664:
    ctx->pc = 0x7F245664u;
    // 7F245664: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245668:
    ctx->pc = 0x7F245668u;
    // 7F245668: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F24566C:
    ctx->pc = 0x7F24566Cu;
    // 7F24566C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F245670:
    ctx->pc = 0x7F245670u;
    // 7F245670: li      r9, 35
    ctx->gpr[9] = (u32)(s32)(35);

label_7F245674:
    ctx->pc = 0x7F245674u;
    // 7F245674: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F245678:
    ctx->pc = 0x7F245678u;
    // 7F245678: bl      0x800501FC
    {
            ctx->lr = 0x7F24567Cu;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F24567C:
    ctx->pc = 0x7F24567Cu;
    ctx->downcount -= 1;
    // 7F24567C: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F245680:
    ctx->pc = 0x7F245680u;
    ctx->downcount -= 12;
    // 7F245680: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245684:
    ctx->pc = 0x7F245684u;
    // 7F245684: li      r3, 488
    ctx->gpr[3] = (u32)(s32)(488);

label_7F245688:
    ctx->pc = 0x7F245688u;
    // 7F245688: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24568C:
    ctx->pc = 0x7F24568Cu;
    // 7F24568C: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F245690:
    ctx->pc = 0x7F245690u;
    // 7F245690: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245694:
    ctx->pc = 0x7F245694u;
    // 7F245694: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F245698:
    ctx->pc = 0x7F245698u;
    // 7F245698: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24569C:
    ctx->pc = 0x7F24569Cu;
    // 7F24569C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2456A0:
    ctx->pc = 0x7F2456A0u;
    // 7F2456A0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2456A4:
    ctx->pc = 0x7F2456A4u;
    // 7F2456A4: li      r9, 35
    ctx->gpr[9] = (u32)(s32)(35);

label_7F2456A8:
    ctx->pc = 0x7F2456A8u;
    // 7F2456A8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2456AC:
    ctx->pc = 0x7F2456ACu;
    // 7F2456AC: bl      0x800501FC
    {
            ctx->lr = 0x7F2456B0u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F2456B0:
    ctx->pc = 0x7F2456B0u;
    ctx->downcount -= 1;
    // 7F2456B0: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F2456B4:
    ctx->pc = 0x7F2456B4u;
    ctx->downcount -= 12;
    // 7F2456B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2456B8:
    ctx->pc = 0x7F2456B8u;
    // 7F2456B8: li      r3, 486
    ctx->gpr[3] = (u32)(s32)(486);

label_7F2456BC:
    ctx->pc = 0x7F2456BCu;
    // 7F2456BC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2456C0:
    ctx->pc = 0x7F2456C0u;
    // 7F2456C0: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F2456C4:
    ctx->pc = 0x7F2456C4u;
    // 7F2456C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2456C8:
    ctx->pc = 0x7F2456C8u;
    // 7F2456C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2456CC:
    ctx->pc = 0x7F2456CCu;
    // 7F2456CC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2456D0:
    ctx->pc = 0x7F2456D0u;
    // 7F2456D0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2456D4:
    ctx->pc = 0x7F2456D4u;
    // 7F2456D4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2456D8:
    ctx->pc = 0x7F2456D8u;
    // 7F2456D8: li      r9, 35
    ctx->gpr[9] = (u32)(s32)(35);

label_7F2456DC:
    ctx->pc = 0x7F2456DCu;
    // 7F2456DC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2456E0:
    ctx->pc = 0x7F2456E0u;
    // 7F2456E0: bl      0x800501FC
    {
            ctx->lr = 0x7F2456E4u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F2456E4:
    ctx->pc = 0x7F2456E4u;
    ctx->downcount -= 1;
    // 7F2456E4: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F2456E8:
    ctx->pc = 0x7F2456E8u;
    ctx->downcount -= 3;
    // 7F2456E8: lwz     r0, 224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2456EC:
    ctx->pc = 0x7F2456ECu;
    // 7F2456EC: cmpwi   r0, 1
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

label_7F2456F0:
    ctx->pc = 0x7F2456F0u;
    // 7F2456F0: bc    4, 0, 0x7F245798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245798;
        }
    }

label_7F2456F4:
    ctx->pc = 0x7F2456F4u;
    ctx->downcount -= 12;
    // 7F2456F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2456F8:
    ctx->pc = 0x7F2456F8u;
    // 7F2456F8: li      r3, 489
    ctx->gpr[3] = (u32)(s32)(489);

label_7F2456FC:
    ctx->pc = 0x7F2456FCu;
    // 7F2456FC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245700:
    ctx->pc = 0x7F245700u;
    // 7F245700: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F245704:
    ctx->pc = 0x7F245704u;
    // 7F245704: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245708:
    ctx->pc = 0x7F245708u;
    // 7F245708: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24570C:
    ctx->pc = 0x7F24570Cu;
    // 7F24570C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245710:
    ctx->pc = 0x7F245710u;
    // 7F245710: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F245714:
    ctx->pc = 0x7F245714u;
    // 7F245714: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F245718:
    ctx->pc = 0x7F245718u;
    // 7F245718: li      r9, 35
    ctx->gpr[9] = (u32)(s32)(35);

label_7F24571C:
    ctx->pc = 0x7F24571Cu;
    // 7F24571C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F245720:
    ctx->pc = 0x7F245720u;
    // 7F245720: bl      0x800501FC
    {
            ctx->lr = 0x7F245724u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F245724:
    ctx->pc = 0x7F245724u;
    ctx->downcount -= 1;
    // 7F245724: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F245728:
    ctx->pc = 0x7F245728u;
    ctx->downcount -= 3;
    // 7F245728: lwz     r0, 224(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24572C:
    ctx->pc = 0x7F24572Cu;
    // 7F24572C: cmpwi   r0, 1
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

label_7F245730:
    ctx->pc = 0x7F245730u;
    // 7F245730: bc    4, 0, 0x7F245798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245798;
        }
    }

label_7F245734:
    ctx->pc = 0x7F245734u;
    ctx->downcount -= 12;
    // 7F245734: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245738:
    ctx->pc = 0x7F245738u;
    // 7F245738: li      r3, 490
    ctx->gpr[3] = (u32)(s32)(490);

label_7F24573C:
    ctx->pc = 0x7F24573Cu;
    // 7F24573C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245740:
    ctx->pc = 0x7F245740u;
    // 7F245740: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F245744:
    ctx->pc = 0x7F245744u;
    // 7F245744: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245748:
    ctx->pc = 0x7F245748u;
    // 7F245748: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24574C:
    ctx->pc = 0x7F24574Cu;
    // 7F24574C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245750:
    ctx->pc = 0x7F245750u;
    // 7F245750: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F245754:
    ctx->pc = 0x7F245754u;
    // 7F245754: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F245758:
    ctx->pc = 0x7F245758u;
    // 7F245758: li      r9, 35
    ctx->gpr[9] = (u32)(s32)(35);

label_7F24575C:
    ctx->pc = 0x7F24575Cu;
    // 7F24575C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F245760:
    ctx->pc = 0x7F245760u;
    // 7F245760: bl      0x800501FC
    {
            ctx->lr = 0x7F245764u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F245764:
    ctx->pc = 0x7F245764u;
    ctx->downcount -= 1;
    // 7F245764: b       0x7F245798
    {
            goto label_7F245798;
    }

label_7F245768:
    ctx->pc = 0x7F245768u;
    ctx->downcount -= 12;
    // 7F245768: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F24576C:
    ctx->pc = 0x7F24576Cu;
    // 7F24576C: li      r3, 491
    ctx->gpr[3] = (u32)(s32)(491);

label_7F245770:
    ctx->pc = 0x7F245770u;
    // 7F245770: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245774:
    ctx->pc = 0x7F245774u;
    // 7F245774: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F245778:
    ctx->pc = 0x7F245778u;
    // 7F245778: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24577C:
    ctx->pc = 0x7F24577Cu;
    // 7F24577C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F245780:
    ctx->pc = 0x7F245780u;
    // 7F245780: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245784:
    ctx->pc = 0x7F245784u;
    // 7F245784: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F245788:
    ctx->pc = 0x7F245788u;
    // 7F245788: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F24578C:
    ctx->pc = 0x7F24578Cu;
    // 7F24578C: li      r9, 35
    ctx->gpr[9] = (u32)(s32)(35);

label_7F245790:
    ctx->pc = 0x7F245790u;
    // 7F245790: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F245794:
    ctx->pc = 0x7F245794u;
    // 7F245794: bl      0x800501FC
    {
            ctx->lr = 0x7F245798u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F245798:
    ctx->pc = 0x7F245798u;
    ctx->downcount -= 5;
    // 7F245798: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24579C:
    ctx->pc = 0x7F24579Cu;
    // 7F24579C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2457A0:
    ctx->pc = 0x7F2457A0u;
    // 7F2457A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2457A4:
    ctx->pc = 0x7F2457A4u;
    // 7F2457A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2457A8:
    ctx->pc = 0x7F2457A8u;
    ctx->downcount -= 10;
    // 7F2457A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2457AC:
    ctx->pc = 0x7F2457ACu;
    // 7F2457AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2457B0:
    ctx->pc = 0x7F2457B0u;
    // 7F2457B0: lis     r4, 32590
    ctx->gpr[4] = ((u32)(s32)(32590) << 16);

label_7F2457B4:
    ctx->pc = 0x7F2457B4u;
    // 7F2457B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2457B8:
    ctx->pc = 0x7F2457B8u;
    // 7F2457B8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2457BC:
    ctx->pc = 0x7F2457BCu;
    // 7F2457BC: addi    r4, r4, 28636
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28636);

label_7F2457C0:
    ctx->pc = 0x7F2457C0u;
    // 7F2457C0: stw     r0, 900(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(900);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2457C4:
    ctx->pc = 0x7F2457C4u;
    // 7F2457C4: lwz     r0, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2457C8:
    ctx->pc = 0x7F2457C8u;
    // 7F2457C8: cmpwi   r0, -1
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

label_7F2457CC:
    ctx->pc = 0x7F2457CCu;
    // 7F2457CC: bc    12, 2, 0x7F2457D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2457D4;
        }
    }

label_7F2457D0:
    ctx->pc = 0x7F2457D0u;
    ctx->downcount -= 1;
    // 7F2457D0: stw     r0, 1848(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2457D4:
    ctx->pc = 0x7F2457D4u;
    ctx->downcount -= 3;
    // 7F2457D4: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2457D8:
    ctx->pc = 0x7F2457D8u;
    // 7F2457D8: cmpwi   r3, 0
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

label_7F2457DC:
    ctx->pc = 0x7F2457DCu;
    // 7F2457DC: bc    12, 0, 0x7F2457E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2457E4;
        }
    }

label_7F2457E0:
    ctx->pc = 0x7F2457E0u;
    ctx->downcount -= 1;
    // 7F2457E0: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F2457E4u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F2457E4:
    ctx->pc = 0x7F2457E4u;
    ctx->downcount -= 5;
    // 7F2457E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2457E8:
    ctx->pc = 0x7F2457E8u;
    // 7F2457E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2457EC:
    ctx->pc = 0x7F2457ECu;
    // 7F2457EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2457F0:
    ctx->pc = 0x7F2457F0u;
    // 7F2457F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2457F4:
    ctx->pc = 0x7F2457F4u;
    ctx->downcount -= 12;
    // 7F2457F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2457F8:
    ctx->pc = 0x7F2457F8u;
    // 7F2457F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2457FC:
    ctx->pc = 0x7F2457FCu;
    // 7F2457FC: lis     r4, 39
    ctx->gpr[4] = ((u32)(s32)(39) << 16);

label_7F245800:
    ctx->pc = 0x7F245800u;
    // 7F245800: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245804:
    ctx->pc = 0x7F245804u;
    // 7F245804: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245808:
    ctx->pc = 0x7F245808u;
    // 7F245808: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24580C:
    ctx->pc = 0x7F24580Cu;
    // 7F24580C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F245810:
    ctx->pc = 0x7F245810u;
    // 7F245810: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F245814:
    ctx->pc = 0x7F245814u;
    // 7F245814: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245818:
    ctx->pc = 0x7F245818u;
    // 7F245818: addi    r3, r4, -3102
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-3102);

label_7F24581C:
    ctx->pc = 0x7F24581Cu;
    // 7F24581C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F245820:
    ctx->pc = 0x7F245820u;
    // 7F245820: bl      0x7F2E4A7C
    {
            ctx->lr = 0x7F245824u;
            ctx->pc = 0x7F2E4A7Cu;
            return;
    }

label_7F245824:
    ctx->pc = 0x7F245824u;
    ctx->downcount -= 6;
    // 7F245824: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245828:
    ctx->pc = 0x7F245828u;
    // 7F245828: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F24582C:
    ctx->pc = 0x7F24582Cu;
    // 7F24582C: addi    r5, r3, 21936
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(21936);

label_7F245830:
    ctx->pc = 0x7F245830u;
    // 7F245830: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245834:
    ctx->pc = 0x7F245834u;
    // 7F245834: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245838:
    ctx->pc = 0x7F245838u;
    // 7F245838: bl      0x7F2E4B08
    {
            ctx->lr = 0x7F24583Cu;
            ctx->pc = 0x7F2E4B08u;
            return;
    }

label_7F24583C:
    ctx->pc = 0x7F24583Cu;
    ctx->downcount -= 9;
    // 7F24583C: lis     r3, 9
    ctx->gpr[3] = ((u32)(s32)(9) << 16);

label_7F245840:
    ctx->pc = 0x7F245840u;
    // 7F245840: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F245844:
    ctx->pc = 0x7F245844u;
    // 7F245844: addi    r0, r3, -23557
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-23557);

label_7F245848:
    ctx->pc = 0x7F245848u;
    // 7F245848: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F24584C:
    ctx->pc = 0x7F24584Cu;
    // 7F24584C: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245850:
    ctx->pc = 0x7F245850u;
    // 7F245850: addi    r0, r4, 21156
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(21156);

label_7F245854:
    ctx->pc = 0x7F245854u;
    // 7F245854: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F245858:
    ctx->pc = 0x7F245858u;
    // 7F245858: stw     r0, 232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24585C:
    ctx->pc = 0x7F24585Cu;
    // 7F24585C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F245860u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F245860:
    ctx->pc = 0x7F245860u;
    ctx->downcount -= 4;
    // 7F245860: stw     r3, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245864:
    ctx->pc = 0x7F245864u;
    // 7F245864: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F245868:
    ctx->pc = 0x7F245868u;
    // 7F245868: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24586C:
    ctx->pc = 0x7F24586Cu;
    // 7F24586C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F245870u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F245870:
    ctx->pc = 0x7F245870u;
    ctx->downcount -= 4;
    // 7F245870: stw     r3, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245874:
    ctx->pc = 0x7F245874u;
    // 7F245874: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F245878:
    ctx->pc = 0x7F245878u;
    // 7F245878: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24587C:
    ctx->pc = 0x7F24587Cu;
    // 7F24587C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F245880u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F245880:
    ctx->pc = 0x7F245880u;
    ctx->downcount -= 4;
    // 7F245880: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245884:
    ctx->pc = 0x7F245884u;
    // 7F245884: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F245888:
    ctx->pc = 0x7F245888u;
    // 7F245888: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24588C:
    ctx->pc = 0x7F24588Cu;
    // 7F24588C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F245890u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F245890:
    ctx->pc = 0x7F245890u;
    ctx->downcount -= 17;
    // 7F245890: stw     r3, 228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245894:
    ctx->pc = 0x7F245894u;
    // 7F245894: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F245898:
    ctx->pc = 0x7F245898u;
    // 7F245898: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F24589C:
    ctx->pc = 0x7F24589Cu;
    // 7F24589C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2458A0:
    ctx->pc = 0x7F2458A0u;
    // 7F2458A0: stw     r6, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2458A4:
    ctx->pc = 0x7F2458A4u;
    // 7F2458A4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2458A8:
    ctx->pc = 0x7F2458A8u;
    // 7F2458A8: addi    r4, r3, -8632
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8632);

label_7F2458AC:
    ctx->pc = 0x7F2458ACu;
    // 7F2458AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2458B0:
    ctx->pc = 0x7F2458B0u;
    // 7F2458B0: stw     r5, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2458B4:
    ctx->pc = 0x7F2458B4u;
    // 7F2458B4: stw     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2458B8:
    ctx->pc = 0x7F2458B8u;
    // 7F2458B8: stb     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F2458BC:
    ctx->pc = 0x7F2458BCu;
    // 7F2458BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2458C0:
    ctx->pc = 0x7F2458C0u;
    // 7F2458C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2458C4:
    ctx->pc = 0x7F2458C4u;
    // 7F2458C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2458C8:
    ctx->pc = 0x7F2458C8u;
    // 7F2458C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2458CC:
    ctx->pc = 0x7F2458CCu;
    // 7F2458CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2458D0:
    ctx->pc = 0x7F2458D0u;
    ctx->downcount -= 20;
    // 7F2458D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2458D4:
    ctx->pc = 0x7F2458D4u;
    // 7F2458D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2458D8:
    ctx->pc = 0x7F2458D8u;
    // 7F2458D8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2458DC:
    ctx->pc = 0x7F2458DCu;
    // 7F2458DC: li      r5, 240
    ctx->gpr[5] = (u32)(s32)(240);

label_7F2458E0:
    ctx->pc = 0x7F2458E0u;
    // 7F2458E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2458E4:
    ctx->pc = 0x7F2458E4u;
    // 7F2458E4: li      r6, 254
    ctx->gpr[6] = (u32)(s32)(254);

label_7F2458E8:
    ctx->pc = 0x7F2458E8u;
    // 7F2458E8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2458EC:
    ctx->pc = 0x7F2458ECu;
    // 7F2458EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2458F0:
    ctx->pc = 0x7F2458F0u;
    // 7F2458F0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F2458F4:
    ctx->pc = 0x7F2458F4u;
    // 7F2458F4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2458F8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2458F8:
    ctx->pc = 0x7F2458F8u;
    ctx->downcount -= 2;
    // 7F2458F8: or.   r31, r3, r3
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

label_7F2458FC:
    ctx->pc = 0x7F2458FCu;
    // 7F2458FC: bc    4, 2, 0x7F245908
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245908;
        }
    }

label_7F245900:
    ctx->pc = 0x7F245900u;
    ctx->downcount -= 2;
    // 7F245900: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245904:
    ctx->pc = 0x7F245904u;
    // 7F245904: b       0x7F24596C
    {
            goto label_7F24596C;
    }

label_7F245908:
    ctx->pc = 0x7F245908u;
    ctx->downcount -= 5;
    // 7F245908: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F24590C:
    ctx->pc = 0x7F24590Cu;
    // 7F24590C: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F245910:
    ctx->pc = 0x7F245910u;
    // 7F245910: addi    r4, r4, 20224
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20224);

label_7F245914:
    ctx->pc = 0x7F245914u;
    // 7F245914: addi    r5, r5, 22440
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22440);

label_7F245918:
    ctx->pc = 0x7F245918u;
    // 7F245918: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F24591Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F24591C:
    ctx->pc = 0x7F24591Cu;
    ctx->downcount -= 13;
    // 7F24591C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245920:
    ctx->pc = 0x7F245920u;
    // 7F245920: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F245924:
    ctx->pc = 0x7F245924u;
    // 7F245924: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245928:
    ctx->pc = 0x7F245928u;
    // 7F245928: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24592C:
    ctx->pc = 0x7F24592Cu;
    // 7F24592C: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F245930:
    ctx->pc = 0x7F245930u;
    // 7F245930: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F245934:
    ctx->pc = 0x7F245934u;
    // 7F245934: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F245938:
    ctx->pc = 0x7F245938u;
    // 7F245938: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24593C:
    ctx->pc = 0x7F24593Cu;
    // 7F24593C: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245940:
    ctx->pc = 0x7F245940u;
    // 7F245940: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245944:
    ctx->pc = 0x7F245944u;
    // 7F245944: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245948:
    ctx->pc = 0x7F245948u;
    // 7F245948: stw     r30, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F24594C:
    ctx->pc = 0x7F24594Cu;
    // 7F24594C: bl      0x7F2457F4
    {
            ctx->lr = 0x7F245950u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2457F4u;
                return;
            }
            goto label_7F2457F4;
    }

label_7F245950:
    ctx->pc = 0x7F245950u;
    ctx->downcount -= 2;
    // 7F245950: cmpwi   r3, 0
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

label_7F245954:
    ctx->pc = 0x7F245954u;
    // 7F245954: bc    4, 0, 0x7F245968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245968;
        }
    }

label_7F245958:
    ctx->pc = 0x7F245958u;
    ctx->downcount -= 2;
    // 7F245958: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24595C:
    ctx->pc = 0x7F24595Cu;
    // 7F24595C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F245960u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F245960:
    ctx->pc = 0x7F245960u;
    ctx->downcount -= 2;
    // 7F245960: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245964:
    ctx->pc = 0x7F245964u;
    // 7F245964: b       0x7F24596C
    {
            goto label_7F24596C;
    }

label_7F245968:
    ctx->pc = 0x7F245968u;
    ctx->downcount -= 1;
    // 7F245968: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24596C:
    ctx->pc = 0x7F24596Cu;
    ctx->downcount -= 16;
    // 7F24596C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F245970:
    ctx->pc = 0x7F245970u;
    // 7F245970: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245974:
    ctx->pc = 0x7F245974u;
    // 7F245974: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245978:
    ctx->pc = 0x7F245978u;
    // 7F245978: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24597C:
    ctx->pc = 0x7F24597Cu;
    // 7F24597C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245980:
    ctx->pc = 0x7F245980u;
    ctx->downcount -= 8;
    // 7F245980: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245984:
    ctx->pc = 0x7F245984u;
    // 7F245984: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245988:
    ctx->pc = 0x7F245988u;
    // 7F245988: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24598C:
    ctx->pc = 0x7F24598Cu;
    // 7F24598C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F245990:
    ctx->pc = 0x7F245990u;
    // 7F245990: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245994:
    ctx->pc = 0x7F245994u;
    // 7F245994: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245998:
    ctx->pc = 0x7F245998u;
    // 7F245998: cmpwi   r0, 4096
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

label_7F24599C:
    ctx->pc = 0x7F24599Cu;
    // 7F24599C: bc    12, 2, 0x7F245A74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245A74;
        }
    }

label_7F2459A0:
    ctx->pc = 0x7F2459A0u;
    ctx->downcount -= 1;
    // 7F2459A0: bc    4, 0, 0x7F2459BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2459BC;
        }
    }

label_7F2459A4:
    ctx->pc = 0x7F2459A4u;
    ctx->downcount -= 2;
    // 7F2459A4: cmpwi   r0, 2048
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2459A8:
    ctx->pc = 0x7F2459A8u;
    // 7F2459A8: bc    12, 2, 0x7F2459C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2459C8;
        }
    }

label_7F2459AC:
    ctx->pc = 0x7F2459ACu;
    ctx->downcount -= 1;
    // 7F2459AC: bc    4, 0, 0x7F245B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245B08;
        }
    }

label_7F2459B0:
    ctx->pc = 0x7F2459B0u;
    ctx->downcount -= 2;
    // 7F2459B0: cmpwi   r0, 128
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

label_7F2459B4:
    ctx->pc = 0x7F2459B4u;
    // 7F2459B4: bc    12, 2, 0x7F2459D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2459D0;
        }
    }

label_7F2459B8:
    ctx->pc = 0x7F2459B8u;
    ctx->downcount -= 1;
    // 7F2459B8: b       0x7F245B08
    {
            goto label_7F245B08;
    }

label_7F2459BC:
    ctx->pc = 0x7F2459BCu;
    ctx->downcount -= 2;
    // 7F2459BC: cmpwi   r0, 16384
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

label_7F2459C0:
    ctx->pc = 0x7F2459C0u;
    // 7F2459C0: bc    12, 2, 0x7F245AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245AC0;
        }
    }

label_7F2459C4:
    ctx->pc = 0x7F2459C4u;
    ctx->downcount -= 1;
    // 7F2459C4: b       0x7F245B08
    {
            goto label_7F245B08;
    }

label_7F2459C8:
    ctx->pc = 0x7F2459C8u;
    ctx->downcount -= 2;
    // 7F2459C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2459CC:
    ctx->pc = 0x7F2459CCu;
    // 7F2459CC: stw     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2459D0:
    ctx->pc = 0x7F2459D0u;
    ctx->downcount -= 3;
    // 7F2459D0: lwz     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2459D4:
    ctx->pc = 0x7F2459D4u;
    // 7F2459D4: cmpwi   r0, 1
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

label_7F2459D8:
    ctx->pc = 0x7F2459D8u;
    // 7F2459D8: bc    12, 2, 0x7F245A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245A0C;
        }
    }

label_7F2459DC:
    ctx->pc = 0x7F2459DCu;
    ctx->downcount -= 1;
    // 7F2459DC: bc    4, 0, 0x7F2459EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2459EC;
        }
    }

label_7F2459E0:
    ctx->pc = 0x7F2459E0u;
    ctx->downcount -= 2;
    // 7F2459E0: cmpwi   r0, 0
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

label_7F2459E4:
    ctx->pc = 0x7F2459E4u;
    // 7F2459E4: bc    4, 0, 0x7F2459F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2459F8;
        }
    }

label_7F2459E8:
    ctx->pc = 0x7F2459E8u;
    ctx->downcount -= 1;
    // 7F2459E8: b       0x7F245A58
    {
            goto label_7F245A58;
    }

label_7F2459EC:
    ctx->pc = 0x7F2459ECu;
    ctx->downcount -= 2;
    // 7F2459EC: cmpwi   r0, 3
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

label_7F2459F0:
    ctx->pc = 0x7F2459F0u;
    // 7F2459F0: bc    4, 0, 0x7F245A58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245A58;
        }
    }

label_7F2459F4:
    ctx->pc = 0x7F2459F4u;
    ctx->downcount -= 1;
    // 7F2459F4: b       0x7F245A34
    {
            goto label_7F245A34;
    }

label_7F2459F8:
    ctx->pc = 0x7F2459F8u;
    ctx->downcount -= 4;
    // 7F2459F8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2459FC:
    ctx->pc = 0x7F2459FCu;
    // 7F2459FC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F245A00:
    ctx->pc = 0x7F245A00u;
    // 7F245A00: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F245A04:
    ctx->pc = 0x7F245A04u;
    // 7F245A04: bl      0x7F011698
    {
            ctx->lr = 0x7F245A08u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F245A08:
    ctx->pc = 0x7F245A08u;
    ctx->downcount -= 1;
    // 7F245A08: b       0x7F245A58
    {
            goto label_7F245A58;
    }

label_7F245A0C:
    ctx->pc = 0x7F245A0Cu;
    ctx->downcount -= 4;
    // 7F245A0C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F245A10:
    ctx->pc = 0x7F245A10u;
    // 7F245A10: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F245A14:
    ctx->pc = 0x7F245A14u;
    // 7F245A14: li      r5, 250
    ctx->gpr[5] = (u32)(s32)(250);

label_7F245A18:
    ctx->pc = 0x7F245A18u;
    // 7F245A18: bl      0x7F011698
    {
            ctx->lr = 0x7F245A1Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F245A1C:
    ctx->pc = 0x7F245A1Cu;
    ctx->downcount -= 3;
    // 7F245A1C: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245A20:
    ctx->pc = 0x7F245A20u;
    // 7F245A20: cmpwi   r3, 0
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

label_7F245A24:
    ctx->pc = 0x7F245A24u;
    // 7F245A24: bc    12, 2, 0x7F245A58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245A58;
        }
    }

label_7F245A28:
    ctx->pc = 0x7F245A28u;
    ctx->downcount -= 2;
    // 7F245A28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F245A2C:
    ctx->pc = 0x7F245A2Cu;
    // 7F245A2C: bl      0x7F01FA88
    {
            ctx->lr = 0x7F245A30u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F245A30:
    ctx->pc = 0x7F245A30u;
    ctx->downcount -= 1;
    // 7F245A30: b       0x7F245A58
    {
            goto label_7F245A58;
    }

label_7F245A34:
    ctx->pc = 0x7F245A34u;
    ctx->downcount -= 4;
    // 7F245A34: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F245A38:
    ctx->pc = 0x7F245A38u;
    // 7F245A38: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F245A3C:
    ctx->pc = 0x7F245A3Cu;
    // 7F245A3C: li      r5, 250
    ctx->gpr[5] = (u32)(s32)(250);

label_7F245A40:
    ctx->pc = 0x7F245A40u;
    // 7F245A40: bl      0x7F011698
    {
            ctx->lr = 0x7F245A44u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F245A44:
    ctx->pc = 0x7F245A44u;
    ctx->downcount -= 3;
    // 7F245A44: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245A48:
    ctx->pc = 0x7F245A48u;
    // 7F245A48: cmpwi   r3, 0
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

label_7F245A4C:
    ctx->pc = 0x7F245A4Cu;
    // 7F245A4C: bc    12, 2, 0x7F245A58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245A58;
        }
    }

label_7F245A50:
    ctx->pc = 0x7F245A50u;
    ctx->downcount -= 2;
    // 7F245A50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F245A54:
    ctx->pc = 0x7F245A54u;
    // 7F245A54: bl      0x7F01FA88
    {
            ctx->lr = 0x7F245A58u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F245A58:
    ctx->pc = 0x7F245A58u;
    ctx->downcount -= 7;
    // 7F245A58: lis     r3, 37
    ctx->gpr[3] = ((u32)(s32)(37) << 16);

label_7F245A5C:
    ctx->pc = 0x7F245A5Cu;
    // 7F245A5C: addi    r0, r3, 5602
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5602);

label_7F245A60:
    ctx->pc = 0x7F245A60u;
    // 7F245A60: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245A64:
    ctx->pc = 0x7F245A64u;
    // 7F245A64: lwz     r3, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245A68:
    ctx->pc = 0x7F245A68u;
    // 7F245A68: addi    r0, r3, 2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2);

label_7F245A6C:
    ctx->pc = 0x7F245A6Cu;
    // 7F245A6C: stw     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245A70:
    ctx->pc = 0x7F245A70u;
    // 7F245A70: b       0x7F245B08
    {
            goto label_7F245B08;
    }

label_7F245A74:
    ctx->pc = 0x7F245A74u;
    ctx->downcount -= 12;
    // 7F245A74: lwz     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245A78:
    ctx->pc = 0x7F245A78u;
    // 7F245A78: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F245A7C:
    ctx->pc = 0x7F245A7Cu;
    // 7F245A7C: addi    r3, r3, 20480
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20480);

label_7F245A80:
    ctx->pc = 0x7F245A80u;
    // 7F245A80: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F245A84:
    ctx->pc = 0x7F245A84u;
    // 7F245A84: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245A88:
    ctx->pc = 0x7F245A88u;
    // 7F245A88: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245A8C:
    ctx->pc = 0x7F245A8Cu;
    // 7F245A8C: lwz     r3, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245A90:
    ctx->pc = 0x7F245A90u;
    // 7F245A90: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F245A94:
    ctx->pc = 0x7F245A94u;
    // 7F245A94: stw     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245A98:
    ctx->pc = 0x7F245A98u;
    // 7F245A98: lwz     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245A9C:
    ctx->pc = 0x7F245A9Cu;
    // 7F245A9C: cmpwi   r0, 0
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

label_7F245AA0:
    ctx->pc = 0x7F245AA0u;
    // 7F245AA0: bc    4, 0, 0x7F245AAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245AAC;
        }
    }

label_7F245AA4:
    ctx->pc = 0x7F245AA4u;
    ctx->downcount -= 2;
    // 7F245AA4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F245AA8:
    ctx->pc = 0x7F245AA8u;
    // 7F245AA8: stw     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245AAC:
    ctx->pc = 0x7F245AACu;
    ctx->downcount -= 4;
    // 7F245AAC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F245AB0:
    ctx->pc = 0x7F245AB0u;
    // 7F245AB0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F245AB4:
    ctx->pc = 0x7F245AB4u;
    // 7F245AB4: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F245AB8:
    ctx->pc = 0x7F245AB8u;
    // 7F245AB8: bl      0x7F011698
    {
            ctx->lr = 0x7F245ABCu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F245ABC:
    ctx->pc = 0x7F245ABCu;
    ctx->downcount -= 1;
    // 7F245ABC: b       0x7F245B08
    {
            goto label_7F245B08;
    }

label_7F245AC0:
    ctx->pc = 0x7F245AC0u;
    ctx->downcount -= 12;
    // 7F245AC0: lwz     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245AC4:
    ctx->pc = 0x7F245AC4u;
    // 7F245AC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F245AC8:
    ctx->pc = 0x7F245AC8u;
    // 7F245AC8: addi    r3, r3, 20492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20492);

label_7F245ACC:
    ctx->pc = 0x7F245ACCu;
    // 7F245ACC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F245AD0:
    ctx->pc = 0x7F245AD0u;
    // 7F245AD0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245AD4:
    ctx->pc = 0x7F245AD4u;
    // 7F245AD4: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245AD8:
    ctx->pc = 0x7F245AD8u;
    // 7F245AD8: lwz     r3, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245ADC:
    ctx->pc = 0x7F245ADCu;
    // 7F245ADC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F245AE0:
    ctx->pc = 0x7F245AE0u;
    // 7F245AE0: stw     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245AE4:
    ctx->pc = 0x7F245AE4u;
    // 7F245AE4: lwz     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245AE8:
    ctx->pc = 0x7F245AE8u;
    // 7F245AE8: cmpwi   r0, 2
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

label_7F245AEC:
    ctx->pc = 0x7F245AECu;
    // 7F245AEC: bc    4, 1, 0x7F245AF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245AF8;
        }
    }

label_7F245AF0:
    ctx->pc = 0x7F245AF0u;
    ctx->downcount -= 2;
    // 7F245AF0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245AF4:
    ctx->pc = 0x7F245AF4u;
    // 7F245AF4: stw     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245AF8:
    ctx->pc = 0x7F245AF8u;
    ctx->downcount -= 4;
    // 7F245AF8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F245AFC:
    ctx->pc = 0x7F245AFCu;
    // 7F245AFC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F245B00:
    ctx->pc = 0x7F245B00u;
    // 7F245B00: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F245B04:
    ctx->pc = 0x7F245B04u;
    // 7F245B04: bl      0x7F011698
    {
            ctx->lr = 0x7F245B08u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F245B08:
    ctx->pc = 0x7F245B08u;
    ctx->downcount -= 6;
    // 7F245B08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245B0C:
    ctx->pc = 0x7F245B0Cu;
    // 7F245B0C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F245B10:
    ctx->pc = 0x7F245B10u;
    // 7F245B10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245B14:
    ctx->pc = 0x7F245B14u;
    // 7F245B14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F245B18:
    ctx->pc = 0x7F245B18u;
    // 7F245B18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245B1C:
    ctx->pc = 0x7F245B1Cu;
    ctx->downcount -= 7;
    // 7F245B1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245B20:
    ctx->pc = 0x7F245B20u;
    // 7F245B20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245B24:
    ctx->pc = 0x7F245B24u;
    // 7F245B24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245B28:
    ctx->pc = 0x7F245B28u;
    // 7F245B28: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F245B2C:
    ctx->pc = 0x7F245B2Cu;
    // 7F245B2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245B30:
    ctx->pc = 0x7F245B30u;
    // 7F245B30: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245B34:
    ctx->pc = 0x7F245B34u;
    // 7F245B34: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F245B38u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F245B38:
    ctx->pc = 0x7F245B38u;
    ctx->downcount -= 2;
    // 7F245B38: cmpwi   r3, 0
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

label_7F245B3C:
    ctx->pc = 0x7F245B3Cu;
    // 7F245B3C: bc    4, 2, 0x7F245B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245B74;
        }
    }

label_7F245B40:
    ctx->pc = 0x7F245B40u;
    ctx->downcount -= 3;
    // 7F245B40: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F245B44:
    ctx->pc = 0x7F245B44u;
    // 7F245B44: cmpwi   r4, 0
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

label_7F245B48:
    ctx->pc = 0x7F245B48u;
    // 7F245B48: bc    12, 2, 0x7F245B68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245B68;
        }
    }

label_7F245B4C:
    ctx->pc = 0x7F245B4Cu;
    ctx->downcount -= 2;
    // 7F245B4C: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245B50:
    ctx->pc = 0x7F245B50u;
    // 7F245B50: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F245B54u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F245B54:
    ctx->pc = 0x7F245B54u;
    ctx->downcount -= 5;
    // 7F245B54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245B58:
    ctx->pc = 0x7F245B58u;
    // 7F245B58: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F245B5C:
    ctx->pc = 0x7F245B5Cu;
    // 7F245B5C: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245B60:
    ctx->pc = 0x7F245B60u;
    // 7F245B60: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245B64:
    ctx->pc = 0x7F245B64u;
    // 7F245B64: b       0x7F245B7C
    {
            goto label_7F245B7C;
    }

label_7F245B68:
    ctx->pc = 0x7F245B68u;
    ctx->downcount -= 3;
    // 7F245B68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245B6C:
    ctx->pc = 0x7F245B6Cu;
    // 7F245B6C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245B70:
    ctx->pc = 0x7F245B70u;
    // 7F245B70: b       0x7F245B7C
    {
            goto label_7F245B7C;
    }

label_7F245B74:
    ctx->pc = 0x7F245B74u;
    ctx->downcount -= 2;
    // 7F245B74: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F245B78:
    ctx->pc = 0x7F245B78u;
    // 7F245B78: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245B7C:
    ctx->pc = 0x7F245B7Cu;
    ctx->downcount -= 5;
    // 7F245B7C: lwz     r6, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F245B80:
    ctx->pc = 0x7F245B80u;
    // 7F245B80: addi    r3, r31, 72
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(72);

label_7F245B84:
    ctx->pc = 0x7F245B84u;
    // 7F245B84: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F245B88:
    ctx->pc = 0x7F245B88u;
    // 7F245B88: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F245B8C:
    ctx->pc = 0x7F245B8Cu;
    // 7F245B8C: bl      0x7F306FA4
    {
            ctx->lr = 0x7F245B90u;
            ctx->pc = 0x7F306FA4u;
            return;
    }

label_7F245B90:
    ctx->pc = 0x7F245B90u;
    ctx->downcount -= 3;
    // 7F245B90: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245B94:
    ctx->pc = 0x7F245B94u;
    // 7F245B94: cmpwi   r0, 0
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

label_7F245B98:
    ctx->pc = 0x7F245B98u;
    // 7F245B98: bc    4, 2, 0x7F245C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245C54;
        }
    }

label_7F245B9C:
    ctx->pc = 0x7F245B9Cu;
    ctx->downcount -= 3;
    // 7F245B9C: lwz     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245BA0:
    ctx->pc = 0x7F245BA0u;
    // 7F245BA0: cmpwi   r0, 2
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

label_7F245BA4:
    ctx->pc = 0x7F245BA4u;
    // 7F245BA4: bc    12, 2, 0x7F245C2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245C2C;
        }
    }

label_7F245BA8:
    ctx->pc = 0x7F245BA8u;
    ctx->downcount -= 1;
    // 7F245BA8: bc    4, 0, 0x7F245C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245C54;
        }
    }

label_7F245BAC:
    ctx->pc = 0x7F245BACu;
    ctx->downcount -= 2;
    // 7F245BAC: cmpwi   r0, 0
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

label_7F245BB0:
    ctx->pc = 0x7F245BB0u;
    // 7F245BB0: bc    12, 2, 0x7F245BC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245BC0;
        }
    }

label_7F245BB4:
    ctx->pc = 0x7F245BB4u;
    ctx->downcount -= 1;
    // 7F245BB4: bc    4, 0, 0x7F245C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245C20;
        }
    }

label_7F245BB8:
    ctx->pc = 0x7F245BB8u;
    ctx->downcount -= 1;
    // 7F245BB8: b       0x7F245C54
    {
            goto label_7F245C54;
    }

label_7F245BBC:
    ctx->pc = 0x7F245BBCu;
    ctx->downcount -= 1;
    // 7F245BBC: b       0x7F245C54
    {
            goto label_7F245C54;
    }

label_7F245BC0:
    ctx->pc = 0x7F245BC0u;
    ctx->downcount -= 4;
    // 7F245BC0: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F245BC4:
    ctx->pc = 0x7F245BC4u;
    // 7F245BC4: lwz     r0, 28056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245BC8:
    ctx->pc = 0x7F245BC8u;
    // 7F245BC8: cmpwi   r0, 2
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

label_7F245BCC:
    ctx->pc = 0x7F245BCCu;
    // 7F245BCC: bc    4, 2, 0x7F245C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245C54;
        }
    }

label_7F245BD0:
    ctx->pc = 0x7F245BD0u;
    ctx->downcount -= 4;
    // 7F245BD0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F245BD4:
    ctx->pc = 0x7F245BD4u;
    // 7F245BD4: lbz     r0, -8624(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8624);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F245BD8:
    ctx->pc = 0x7F245BD8u;
    // 7F245BD8: extsb. r0, r0
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

label_7F245BDC:
    ctx->pc = 0x7F245BDCu;
    // 7F245BDC: bc    4, 2, 0x7F245C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245C54;
        }
    }

label_7F245BE0:
    ctx->pc = 0x7F245BE0u;
    ctx->downcount -= 4;
    // 7F245BE0: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F245BE4:
    ctx->pc = 0x7F245BE4u;
    // 7F245BE4: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F245BE8:
    ctx->pc = 0x7F245BE8u;
    // 7F245BE8: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F245BEC:
    ctx->pc = 0x7F245BECu;
    // 7F245BEC: bl      0x7F011698
    {
            ctx->lr = 0x7F245BF0u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F245BF0:
    ctx->pc = 0x7F245BF0u;
    ctx->downcount -= 2;
    // 7F245BF0: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F245BF4:
    ctx->pc = 0x7F245BF4u;
    // 7F245BF4: bl      0x7F0208E4
    {
            ctx->lr = 0x7F245BF8u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F245BF8:
    ctx->pc = 0x7F245BF8u;
    ctx->downcount -= 2;
    // 7F245BF8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F245BFC:
    ctx->pc = 0x7F245BFCu;
    // 7F245BFC: bl      0x7F3AED60
    {
            ctx->lr = 0x7F245C00u;
            ctx->pc = 0x7F3AED60u;
            return;
    }

label_7F245C00:
    ctx->pc = 0x7F245C00u;
    ctx->downcount -= 8;
    // 7F245C00: lis     r4, 134
    ctx->gpr[4] = ((u32)(s32)(134) << 16);

label_7F245C04:
    ctx->pc = 0x7F245C04u;
    // 7F245C04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245C08:
    ctx->pc = 0x7F245C08u;
    // 7F245C08: addi    r4, r4, -22766
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22766);

label_7F245C0C:
    ctx->pc = 0x7F245C0Cu;
    // 7F245C0C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F245C10:
    ctx->pc = 0x7F245C10u;
    // 7F245C10: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F245C14:
    ctx->pc = 0x7F245C14u;
    // 7F245C14: stw     r3, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245C18:
    ctx->pc = 0x7F245C18u;
    // 7F245C18: stw     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245C1C:
    ctx->pc = 0x7F245C1Cu;
    // 7F245C1C: b       0x7F245C54
    {
            goto label_7F245C54;
    }

label_7F245C20:
    ctx->pc = 0x7F245C20u;
    ctx->downcount -= 2;
    // 7F245C20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245C24:
    ctx->pc = 0x7F245C24u;
    // 7F245C24: bl      0x7F245980
    {
            ctx->lr = 0x7F245C28u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F245980u;
                return;
            }
            goto label_7F245980;
    }

label_7F245C28:
    ctx->pc = 0x7F245C28u;
    ctx->downcount -= 1;
    // 7F245C28: b       0x7F245C54
    {
            goto label_7F245C54;
    }

label_7F245C2C:
    ctx->pc = 0x7F245C2Cu;
    ctx->downcount -= 2;
    // 7F245C2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245C30:
    ctx->pc = 0x7F245C30u;
    // 7F245C30: bl      0x7F3AED60
    {
            ctx->lr = 0x7F245C34u;
            ctx->pc = 0x7F3AED60u;
            return;
    }

label_7F245C34:
    ctx->pc = 0x7F245C34u;
    ctx->downcount -= 6;
    // 7F245C34: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F245C38:
    ctx->pc = 0x7F245C38u;
    // 7F245C38: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F245C3C:
    ctx->pc = 0x7F245C3Cu;
    // 7F245C3C: addi    r4, r3, 19276
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19276);

label_7F245C40:
    ctx->pc = 0x7F245C40u;
    // 7F245C40: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F245C44:
    ctx->pc = 0x7F245C44u;
    // 7F245C44: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245C48:
    ctx->pc = 0x7F245C48u;
    // 7F245C48: bl      0x7F0208F8
    {
            ctx->lr = 0x7F245C4Cu;
            ctx->pc = 0x7F0208F8u;
            return;
    }

label_7F245C4C:
    ctx->pc = 0x7F245C4Cu;
    ctx->downcount -= 2;
    // 7F245C4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245C50:
    ctx->pc = 0x7F245C50u;
    // 7F245C50: stw     r0, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245C54:
    ctx->pc = 0x7F245C54u;
    ctx->downcount -= 6;
    // 7F245C54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245C58:
    ctx->pc = 0x7F245C58u;
    // 7F245C58: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F245C5C:
    ctx->pc = 0x7F245C5Cu;
    // 7F245C5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245C60:
    ctx->pc = 0x7F245C60u;
    // 7F245C60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F245C64:
    ctx->pc = 0x7F245C64u;
    // 7F245C64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245C68:
    ctx->pc = 0x7F245C68u;
    ctx->downcount -= 6;
    // 7F245C68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245C6C:
    ctx->pc = 0x7F245C6Cu;
    // 7F245C6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245C70:
    ctx->pc = 0x7F245C70u;
    // 7F245C70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245C74:
    ctx->pc = 0x7F245C74u;
    // 7F245C74: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245C78:
    ctx->pc = 0x7F245C78u;
    // 7F245C78: cmpwi   r3, 0
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

label_7F245C7C:
    ctx->pc = 0x7F245C7Cu;
    // 7F245C7C: bc    12, 0, 0x7F245C84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245C84;
        }
    }

label_7F245C80:
    ctx->pc = 0x7F245C80u;
    ctx->downcount -= 1;
    // 7F245C80: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F245C84u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F245C84:
    ctx->pc = 0x7F245C84u;
    ctx->downcount -= 8;
    // 7F245C84: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F245C88:
    ctx->pc = 0x7F245C88u;
    // 7F245C88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245C8C:
    ctx->pc = 0x7F245C8Cu;
    // 7F245C8C: stb     r0, -8624(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8624);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F245C90:
    ctx->pc = 0x7F245C90u;
    // 7F245C90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245C94:
    ctx->pc = 0x7F245C94u;
    // 7F245C94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245C98:
    ctx->pc = 0x7F245C98u;
    // 7F245C98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F245C9C:
    ctx->pc = 0x7F245C9Cu;
    // 7F245C9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245CA0:
    ctx->pc = 0x7F245CA0u;
    ctx->downcount -= 12;
    // 7F245CA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245CA4:
    ctx->pc = 0x7F245CA4u;
    // 7F245CA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245CA8:
    ctx->pc = 0x7F245CA8u;
    // 7F245CA8: lis     r4, 229
    ctx->gpr[4] = ((u32)(s32)(229) << 16);

label_7F245CAC:
    ctx->pc = 0x7F245CACu;
    // 7F245CAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245CB0:
    ctx->pc = 0x7F245CB0u;
    // 7F245CB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245CB4:
    ctx->pc = 0x7F245CB4u;
    // 7F245CB4: li      r6, 8192
    ctx->gpr[6] = (u32)(s32)(8192);

label_7F245CB8:
    ctx->pc = 0x7F245CB8u;
    // 7F245CB8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F245CBC:
    ctx->pc = 0x7F245CBCu;
    // 7F245CBC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F245CC0:
    ctx->pc = 0x7F245CC0u;
    // 7F245CC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245CC4:
    ctx->pc = 0x7F245CC4u;
    // 7F245CC4: addi    r3, r4, 6230
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(6230);

label_7F245CC8:
    ctx->pc = 0x7F245CC8u;
    // 7F245CC8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F245CCC:
    ctx->pc = 0x7F245CCCu;
    // 7F245CCC: bl      0x7F2E4A7C
    {
            ctx->lr = 0x7F245CD0u;
            ctx->pc = 0x7F2E4A7Cu;
            return;
    }

label_7F245CD0:
    ctx->pc = 0x7F245CD0u;
    ctx->downcount -= 4;
    // 7F245CD0: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245CD4:
    ctx->pc = 0x7F245CD4u;
    // 7F245CD4: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245CD8:
    ctx->pc = 0x7F245CD8u;
    // 7F245CD8: cmpwi   r3, 0
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

label_7F245CDC:
    ctx->pc = 0x7F245CDCu;
    // 7F245CDC: bc    4, 0, 0x7F245CE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245CE8;
        }
    }

label_7F245CE0:
    ctx->pc = 0x7F245CE0u;
    ctx->downcount -= 2;
    // 7F245CE0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F245CE4:
    ctx->pc = 0x7F245CE4u;
    // 7F245CE4: b       0x7F245D20
    {
            goto label_7F245D20;
    }

label_7F245CE8:
    ctx->pc = 0x7F245CE8u;
    ctx->downcount -= 1;
    // 7F245CE8: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F245CECu;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F245CEC:
    ctx->pc = 0x7F245CECu;
    ctx->downcount -= 7;
    // 7F245CEC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F245CF0:
    ctx->pc = 0x7F245CF0u;
    // 7F245CF0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F245CF4:
    ctx->pc = 0x7F245CF4u;
    // 7F245CF4: addi    r4, r3, -8624
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-8624);

label_7F245CF8:
    ctx->pc = 0x7F245CF8u;
    // 7F245CF8: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F245CFC:
    ctx->pc = 0x7F245CFCu;
    // 7F245CFC: stb     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F245D00:
    ctx->pc = 0x7F245D00u;
    // 7F245D00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F245D04:
    ctx->pc = 0x7F245D04u;
    // 7F245D04: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F245D08u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F245D08:
    ctx->pc = 0x7F245D08u;
    ctx->downcount -= 4;
    // 7F245D08: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245D0C:
    ctx->pc = 0x7F245D0Cu;
    // 7F245D0C: li      r3, 101
    ctx->gpr[3] = (u32)(s32)(101);

label_7F245D10:
    ctx->pc = 0x7F245D10u;
    // 7F245D10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F245D14:
    ctx->pc = 0x7F245D14u;
    // 7F245D14: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F245D18u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F245D18:
    ctx->pc = 0x7F245D18u;
    ctx->downcount -= 2;
    // 7F245D18: stw     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245D1C:
    ctx->pc = 0x7F245D1Cu;
    // 7F245D1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245D20:
    ctx->pc = 0x7F245D20u;
    ctx->downcount -= 6;
    // 7F245D20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245D24:
    ctx->pc = 0x7F245D24u;
    // 7F245D24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F245D28:
    ctx->pc = 0x7F245D28u;
    // 7F245D28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245D2C:
    ctx->pc = 0x7F245D2Cu;
    // 7F245D2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F245D30:
    ctx->pc = 0x7F245D30u;
    // 7F245D30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245D34:
    ctx->pc = 0x7F245D34u;
    ctx->downcount -= 20;
    // 7F245D34: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245D38:
    ctx->pc = 0x7F245D38u;
    // 7F245D38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245D3C:
    ctx->pc = 0x7F245D3Cu;
    // 7F245D3C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F245D40:
    ctx->pc = 0x7F245D40u;
    // 7F245D40: li      r5, 224
    ctx->gpr[5] = (u32)(s32)(224);

label_7F245D44:
    ctx->pc = 0x7F245D44u;
    // 7F245D44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245D48:
    ctx->pc = 0x7F245D48u;
    // 7F245D48: li      r6, 254
    ctx->gpr[6] = (u32)(s32)(254);

label_7F245D4C:
    ctx->pc = 0x7F245D4Cu;
    // 7F245D4C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F245D50:
    ctx->pc = 0x7F245D50u;
    // 7F245D50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245D54:
    ctx->pc = 0x7F245D54u;
    // 7F245D54: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F245D58:
    ctx->pc = 0x7F245D58u;
    // 7F245D58: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F245D5Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F245D5C:
    ctx->pc = 0x7F245D5Cu;
    ctx->downcount -= 2;
    // 7F245D5C: or.   r31, r3, r3
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

label_7F245D60:
    ctx->pc = 0x7F245D60u;
    // 7F245D60: bc    4, 2, 0x7F245D6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245D6C;
        }
    }

label_7F245D64:
    ctx->pc = 0x7F245D64u;
    ctx->downcount -= 2;
    // 7F245D64: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245D68:
    ctx->pc = 0x7F245D68u;
    // 7F245D68: b       0x7F245DD0
    {
            goto label_7F245DD0;
    }

label_7F245D6C:
    ctx->pc = 0x7F245D6Cu;
    ctx->downcount -= 5;
    // 7F245D6C: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F245D70:
    ctx->pc = 0x7F245D70u;
    // 7F245D70: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F245D74:
    ctx->pc = 0x7F245D74u;
    // 7F245D74: addi    r4, r4, 23324
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23324);

label_7F245D78:
    ctx->pc = 0x7F245D78u;
    // 7F245D78: addi    r5, r5, 23656
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23656);

label_7F245D7C:
    ctx->pc = 0x7F245D7Cu;
    // 7F245D7C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F245D80u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F245D80:
    ctx->pc = 0x7F245D80u;
    ctx->downcount -= 13;
    // 7F245D80: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245D84:
    ctx->pc = 0x7F245D84u;
    // 7F245D84: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F245D88:
    ctx->pc = 0x7F245D88u;
    // 7F245D88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245D8C:
    ctx->pc = 0x7F245D8Cu;
    // 7F245D8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245D90:
    ctx->pc = 0x7F245D90u;
    // 7F245D90: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F245D94:
    ctx->pc = 0x7F245D94u;
    // 7F245D94: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F245D98:
    ctx->pc = 0x7F245D98u;
    // 7F245D98: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F245D9C:
    ctx->pc = 0x7F245D9Cu;
    // 7F245D9C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245DA0:
    ctx->pc = 0x7F245DA0u;
    // 7F245DA0: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245DA4:
    ctx->pc = 0x7F245DA4u;
    // 7F245DA4: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F245DA8:
    ctx->pc = 0x7F245DA8u;
    // 7F245DA8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245DAC:
    ctx->pc = 0x7F245DACu;
    // 7F245DAC: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F245DB0:
    ctx->pc = 0x7F245DB0u;
    // 7F245DB0: bl      0x7F245CA0
    {
            ctx->lr = 0x7F245DB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F245CA0u;
                return;
            }
            goto label_7F245CA0;
    }

label_7F245DB4:
    ctx->pc = 0x7F245DB4u;
    ctx->downcount -= 2;
    // 7F245DB4: cmpwi   r3, 0
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

label_7F245DB8:
    ctx->pc = 0x7F245DB8u;
    // 7F245DB8: bc    4, 0, 0x7F245DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245DCC;
        }
    }

label_7F245DBC:
    ctx->pc = 0x7F245DBCu;
    ctx->downcount -= 2;
    // 7F245DBC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245DC0:
    ctx->pc = 0x7F245DC0u;
    // 7F245DC0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F245DC4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F245DC4:
    ctx->pc = 0x7F245DC4u;
    ctx->downcount -= 2;
    // 7F245DC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245DC8:
    ctx->pc = 0x7F245DC8u;
    // 7F245DC8: b       0x7F245DD0
    {
            goto label_7F245DD0;
    }

label_7F245DCC:
    ctx->pc = 0x7F245DCCu;
    ctx->downcount -= 1;
    // 7F245DCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245DD0:
    ctx->pc = 0x7F245DD0u;
    ctx->downcount -= 16;
    // 7F245DD0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F245DD4:
    ctx->pc = 0x7F245DD4u;
    // 7F245DD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245DD8:
    ctx->pc = 0x7F245DD8u;
    // 7F245DD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245DDC:
    ctx->pc = 0x7F245DDCu;
    // 7F245DDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F245DE0:
    ctx->pc = 0x7F245DE0u;
    // 7F245DE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245DE4:
    ctx->pc = 0x7F245DE4u;
    ctx->downcount -= 5;
    // 7F245DE4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F245DE8:
    ctx->pc = 0x7F245DE8u;
    // 7F245DE8: lbzu     r0, -8624(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-8624);
        ctx->gpr[0] = mem_read8(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F245DEC:
    ctx->pc = 0x7F245DECu;
    // 7F245DEC: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F245DF0:
    ctx->pc = 0x7F245DF0u;
    // 7F245DF0: stb     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F245DF4:
    ctx->pc = 0x7F245DF4u;
    // 7F245DF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245DF8:
    ctx->pc = 0x7F245DF8u;
    ctx->downcount -= 7;
    // 7F245DF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245DFC:
    ctx->pc = 0x7F245DFCu;
    // 7F245DFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245E00:
    ctx->pc = 0x7F245E00u;
    // 7F245E00: cmpwi   r4, 2
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

label_7F245E04:
    ctx->pc = 0x7F245E04u;
    // 7F245E04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245E08:
    ctx->pc = 0x7F245E08u;
    // 7F245E08: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F245E0C:
    ctx->pc = 0x7F245E0Cu;
    // 7F245E0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245E10:
    ctx->pc = 0x7F245E10u;
    // 7F245E10: bc    12, 2, 0x7F245E84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245E84;
        }
    }

label_7F245E14:
    ctx->pc = 0x7F245E14u;
    ctx->downcount -= 1;
    // 7F245E14: bc    4, 0, 0x7F245E24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245E24;
        }
    }

label_7F245E18:
    ctx->pc = 0x7F245E18u;
    ctx->downcount -= 2;
    // 7F245E18: cmpwi   r4, 1
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

label_7F245E1C:
    ctx->pc = 0x7F245E1Cu;
    // 7F245E1C: bc    4, 0, 0x7F245E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245E38;
        }
    }

label_7F245E20:
    ctx->pc = 0x7F245E20u;
    ctx->downcount -= 1;
    // 7F245E20: b       0x7F245EAC
    {
            goto label_7F245EAC;
    }

label_7F245E24:
    ctx->pc = 0x7F245E24u;
    ctx->downcount -= 4;
    // 7F245E24: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F245E28:
    ctx->pc = 0x7F245E28u;
    // 7F245E28: addi    r0, r5, -255
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-255);

label_7F245E2C:
    ctx->pc = 0x7F245E2Cu;
    // 7F245E2C: cmpw    r4, r0
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

label_7F245E30:
    ctx->pc = 0x7F245E30u;
    // 7F245E30: bc    12, 2, 0x7F245E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245E94;
        }
    }

label_7F245E34:
    ctx->pc = 0x7F245E34u;
    ctx->downcount -= 1;
    // 7F245E34: b       0x7F245EAC
    {
            goto label_7F245EAC;
    }

label_7F245E38:
    ctx->pc = 0x7F245E38u;
    ctx->downcount -= 11;
    // 7F245E38: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F245E3C:
    ctx->pc = 0x7F245E3Cu;
    // 7F245E3C: lis     r3, 85
    ctx->gpr[3] = ((u32)(s32)(85) << 16);

label_7F245E40:
    ctx->pc = 0x7F245E40u;
    // 7F245E40: addi    r0, r3, -24328
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24328);

label_7F245E44:
    ctx->pc = 0x7F245E44u;
    // 7F245E44: ori     r3, r4, 0x0001
    ctx->gpr[3] = ctx->gpr[4] | 0x0001u;

label_7F245E48:
    ctx->pc = 0x7F245E48u;
    // 7F245E48: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245E4C:
    ctx->pc = 0x7F245E4Cu;
    // 7F245E4C: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245E50:
    ctx->pc = 0x7F245E50u;
    // 7F245E50: rlwinm r3, r3, 0, 31, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFDu;
    }

label_7F245E54:
    ctx->pc = 0x7F245E54u;
    // 7F245E54: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245E58:
    ctx->pc = 0x7F245E58u;
    // 7F245E58: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245E5C:
    ctx->pc = 0x7F245E5Cu;
    // 7F245E5C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245E60:
    ctx->pc = 0x7F245E60u;
    // 7F245E60: bl      0x7F2E4C28
    {
            ctx->lr = 0x7F245E64u;
            ctx->pc = 0x7F2E4C28u;
            return;
    }

label_7F245E64:
    ctx->pc = 0x7F245E64u;
    ctx->downcount -= 7;
    // 7F245E64: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F245E68:
    ctx->pc = 0x7F245E68u;
    // 7F245E68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245E6C:
    ctx->pc = 0x7F245E6Cu;
    // 7F245E6C: addi    r0, r4, 24472
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(24472);

label_7F245E70:
    ctx->pc = 0x7F245E70u;
    // 7F245E70: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F245E74:
    ctx->pc = 0x7F245E74u;
    // 7F245E74: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245E78:
    ctx->pc = 0x7F245E78u;
    // 7F245E78: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F245E7C:
    ctx->pc = 0x7F245E7Cu;
    // 7F245E7C: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F245E80u;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F245E80:
    ctx->pc = 0x7F245E80u;
    ctx->downcount -= 1;
    // 7F245E80: b       0x7F245EAC
    {
            goto label_7F245EAC;
    }

label_7F245E84:
    ctx->pc = 0x7F245E84u;
    ctx->downcount -= 3;
    // 7F245E84: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F245E88:
    ctx->pc = 0x7F245E88u;
    // 7F245E88: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F245E8C:
    ctx->pc = 0x7F245E8Cu;
    // 7F245E8C: bl      0x7F3C8058
    {
            ctx->lr = 0x7F245E90u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F245E90:
    ctx->pc = 0x7F245E90u;
    ctx->downcount -= 1;
    // 7F245E90: b       0x7F245EAC
    {
            goto label_7F245EAC;
    }

label_7F245E94:
    ctx->pc = 0x7F245E94u;
    ctx->downcount -= 4;
    // 7F245E94: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245E98:
    ctx->pc = 0x7F245E98u;
    // 7F245E98: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F245E9C:
    ctx->pc = 0x7F245E9Cu;
    // 7F245E9C: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245EA0:
    ctx->pc = 0x7F245EA0u;
    // 7F245EA0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F245EA4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F245EA4:
    ctx->pc = 0x7F245EA4u;
    ctx->downcount -= 2;
    // 7F245EA4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F245EA8:
    ctx->pc = 0x7F245EA8u;
    // 7F245EA8: b       0x7F245EB0
    {
            goto label_7F245EB0;
    }

label_7F245EAC:
    ctx->pc = 0x7F245EACu;
    ctx->downcount -= 1;
    // 7F245EAC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245EB0:
    ctx->pc = 0x7F245EB0u;
    ctx->downcount -= 6;
    // 7F245EB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245EB4:
    ctx->pc = 0x7F245EB4u;
    // 7F245EB4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F245EB8:
    ctx->pc = 0x7F245EB8u;
    // 7F245EB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245EBC:
    ctx->pc = 0x7F245EBCu;
    // 7F245EBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F245EC0:
    ctx->pc = 0x7F245EC0u;
    // 7F245EC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245EC4:
    ctx->pc = 0x7F245EC4u;
    ctx->downcount -= 17;
    // 7F245EC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245EC8:
    ctx->pc = 0x7F245EC8u;
    // 7F245EC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245ECC:
    ctx->pc = 0x7F245ECCu;
    // 7F245ECC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245ED0:
    ctx->pc = 0x7F245ED0u;
    // 7F245ED0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F245ED4:
    ctx->pc = 0x7F245ED4u;
    // 7F245ED4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245ED8:
    ctx->pc = 0x7F245ED8u;
    // 7F245ED8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F245EDC:
    ctx->pc = 0x7F245EDCu;
    // 7F245EDC: bl      0x7F026F84
    {
            ctx->lr = 0x7F245EE0u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F245EE0:
    ctx->pc = 0x7F245EE0u;
    ctx->downcount -= 3;
    // 7F245EE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245EE4:
    ctx->pc = 0x7F245EE4u;
    // 7F245EE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F245EE8:
    ctx->pc = 0x7F245EE8u;
    // 7F245EE8: bl      0x7F245F98
    {
            ctx->lr = 0x7F245EECu;
            goto label_7F245F98;
    }

label_7F245EEC:
    ctx->pc = 0x7F245EECu;
    ctx->downcount -= 20;
    // 7F245EEC: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245EF0:
    ctx->pc = 0x7F245EF0u;
    // 7F245EF0: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245EF4:
    ctx->pc = 0x7F245EF4u;
    // 7F245EF4: stw     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F245EF8:
    ctx->pc = 0x7F245EF8u;
    // 7F245EF8: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245EFC:
    ctx->pc = 0x7F245EFCu;
    // 7F245EFC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F245F00:
    ctx->pc = 0x7F245F00u;
    // 7F245F00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245F04:
    ctx->pc = 0x7F245F04u;
    // 7F245F04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245F08:
    ctx->pc = 0x7F245F08u;
    // 7F245F08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F245F0C:
    ctx->pc = 0x7F245F0Cu;
    // 7F245F0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245F10:
    ctx->pc = 0x7F245F10u;
    ctx->downcount -= 10;
    // 7F245F10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245F14:
    ctx->pc = 0x7F245F14u;
    // 7F245F14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245F18:
    ctx->pc = 0x7F245F18u;
    // 7F245F18: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F245F1C:
    ctx->pc = 0x7F245F1Cu;
    // 7F245F1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245F20:
    ctx->pc = 0x7F245F20u;
    // 7F245F20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F245F24:
    ctx->pc = 0x7F245F24u;
    // 7F245F24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245F28:
    ctx->pc = 0x7F245F28u;
    // 7F245F28: addi    r3, r4, 19256
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(19256);

label_7F245F2C:
    ctx->pc = 0x7F245F2Cu;
    // 7F245F2C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245F30:
    ctx->pc = 0x7F245F30u;
    // 7F245F30: rlwinm. r0, r3, 0, 21, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000400u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F245F34:
    ctx->pc = 0x7F245F34u;
    // 7F245F34: bc    4, 2, 0x7F245F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245F50;
        }
    }

label_7F245F38:
    ctx->pc = 0x7F245F38u;
    ctx->downcount -= 2;
    // 7F245F38: rlwinm. r0, r3, 0, 16, 16
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

label_7F245F3C:
    ctx->pc = 0x7F245F3Cu;
    // 7F245F3C: bc    4, 2, 0x7F245F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F245F50;
        }
    }

label_7F245F40:
    ctx->pc = 0x7F245F40u;
    ctx->downcount -= 2;
    // 7F245F40: lis     r3, 30720
    ctx->gpr[3] = ((u32)(s32)(30720) << 16);

label_7F245F44:
    ctx->pc = 0x7F245F44u;
    // 7F245F44: bl      0x7F012050
    {
            ctx->lr = 0x7F245F48u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F245F48:
    ctx->pc = 0x7F245F48u;
    ctx->downcount -= 2;
    // 7F245F48: cmpwi   r3, 0
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

label_7F245F4C:
    ctx->pc = 0x7F245F4Cu;
    // 7F245F4C: bc    12, 2, 0x7F245F74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245F74;
        }
    }

label_7F245F50:
    ctx->pc = 0x7F245F50u;
    ctx->downcount -= 4;
    // 7F245F50: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F245F54:
    ctx->pc = 0x7F245F54u;
    // 7F245F54: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245F58:
    ctx->pc = 0x7F245F58u;
    // 7F245F58: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F245F5C:
    ctx->pc = 0x7F245F5Cu;
    // 7F245F5C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F245F60u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F245F60:
    ctx->pc = 0x7F245F60u;
    ctx->downcount -= 2;
    // 7F245F60: cmplwi  r3, 0x0000
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

label_7F245F64:
    ctx->pc = 0x7F245F64u;
    // 7F245F64: bc    12, 2, 0x7F245F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F245F84;
        }
    }

label_7F245F68:
    ctx->pc = 0x7F245F68u;
    ctx->downcount -= 3;
    // 7F245F68: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245F6C:
    ctx->pc = 0x7F245F6Cu;
    // 7F245F6C: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F245F70:
    ctx->pc = 0x7F245F70u;
    // 7F245F70: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245F74:
    ctx->pc = 0x7F245F74u;
    ctx->downcount -= 5;
    // 7F245F74: lwz     r12, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F245F78:
    ctx->pc = 0x7F245F78u;
    // 7F245F78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F245F7C:
    ctx->pc = 0x7F245F7Cu;
    // 7F245F7C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F245F80:
    ctx->pc = 0x7F245F80u;
    // 7F245F80: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F245F84u;
            ctx->pc = target;
            return;
        }
    }

label_7F245F84:
    ctx->pc = 0x7F245F84u;
    ctx->downcount -= 6;
    // 7F245F84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F245F88:
    ctx->pc = 0x7F245F88u;
    // 7F245F88: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F245F8C:
    ctx->pc = 0x7F245F8Cu;
    // 7F245F8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F245F90:
    ctx->pc = 0x7F245F90u;
    // 7F245F90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F245F94:
    ctx->pc = 0x7F245F94u;
    // 7F245F94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F245F98:
    ctx->pc = 0x7F245F98u;
    ctx->downcount -= 17;
    // 7F245F98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F245F9C:
    ctx->pc = 0x7F245F9Cu;
    // 7F245F9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F245FA0:
    ctx->pc = 0x7F245FA0u;
    // 7F245FA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F245FA4:
    ctx->pc = 0x7F245FA4u;
    // 7F245FA4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F245FA8:
    ctx->pc = 0x7F245FA8u;
    // 7F245FA8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245FAC:
    ctx->pc = 0x7F245FACu;
    // 7F245FAC: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F245FB0:
    ctx->pc = 0x7F245FB0u;
    // 7F245FB0: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F245FB4u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F245FB4:
    ctx->pc = 0x7F245FB4u;
    ctx->downcount -= 3;
    // 7F245FB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F245FB8:
    ctx->pc = 0x7F245FB8u;
    // 7F245FB8: cmpwi   r31, -3
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

label_7F245FBC:
    ctx->pc = 0x7F245FBCu;
    // 7F245FBC: bc    12, 2, 0x7F2460B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2460B8;
        }
    }

label_7F245FC0:
    ctx->pc = 0x7F245FC0u;
    ctx->downcount -= 3;
    // 7F245FC0: lwz     r6, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F245FC4:
    ctx->pc = 0x7F245FC4u;
    // 7F245FC4: rlwinm. r0, r6, 0, 30, 30
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

label_7F245FC8:
    ctx->pc = 0x7F245FC8u;
    // 7F245FC8: bc    12, 2, 0x7F2460B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2460B8;
        }
    }

label_7F245FCC:
    ctx->pc = 0x7F245FCCu;
    ctx->downcount -= 5;
    // 7F245FCC: lis     r3, 85
    ctx->gpr[3] = ((u32)(s32)(85) << 16);

label_7F245FD0:
    ctx->pc = 0x7F245FD0u;
    // 7F245FD0: lwz     r5, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F245FD4:
    ctx->pc = 0x7F245FD4u;
    // 7F245FD4: addi    r0, r3, -24328
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24328);

label_7F245FD8:
    ctx->pc = 0x7F245FD8u;
    // 7F245FD8: cmpw    r5, r0
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

label_7F245FDC:
    ctx->pc = 0x7F245FDCu;
    // 7F245FDC: bc    12, 2, 0x7F2460A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2460A0;
        }
    }

label_7F245FE0:
    ctx->pc = 0x7F245FE0u;
    ctx->downcount -= 1;
    // 7F245FE0: bc    4, 0, 0x7F24600C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24600C;
        }
    }

label_7F245FE4:
    ctx->pc = 0x7F245FE4u;
    ctx->downcount -= 4;
    // 7F245FE4: lis     r3, 22
    ctx->gpr[3] = ((u32)(s32)(22) << 16);

label_7F245FE8:
    ctx->pc = 0x7F245FE8u;
    // 7F245FE8: addi    r4, r3, -15775
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15775);

label_7F245FEC:
    ctx->pc = 0x7F245FECu;
    // 7F245FEC: cmpw    r5, r4
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

label_7F245FF0:
    ctx->pc = 0x7F245FF0u;
    // 7F245FF0: bc    12, 2, 0x7F24603C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24603C;
        }
    }

label_7F245FF4:
    ctx->pc = 0x7F245FF4u;
    ctx->downcount -= 1;
    // 7F245FF4: bc    4, 0, 0x7F2460B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2460B8;
        }
    }

label_7F245FF8:
    ctx->pc = 0x7F245FF8u;
    ctx->downcount -= 4;
    // 7F245FF8: lis     r3, 9
    ctx->gpr[3] = ((u32)(s32)(9) << 16);

label_7F245FFC:
    ctx->pc = 0x7F245FFCu;
    // 7F245FFC: addi    r0, r3, -23557
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-23557);

label_7F246000:
    ctx->pc = 0x7F246000u;
    // 7F246000: cmpw    r5, r0
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

label_7F246004:
    ctx->pc = 0x7F246004u;
    // 7F246004: bc    12, 2, 0x7F246020
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246020;
        }
    }

label_7F246008:
    ctx->pc = 0x7F246008u;
    ctx->downcount -= 1;
    // 7F246008: b       0x7F2460B8
    {
            goto label_7F2460B8;
    }

label_7F24600C:
    ctx->pc = 0x7F24600Cu;
    ctx->downcount -= 4;
    // 7F24600C: lis     r3, 93
    ctx->gpr[3] = ((u32)(s32)(93) << 16);

label_7F246010:
    ctx->pc = 0x7F246010u;
    // 7F246010: addi    r0, r3, 9628
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(9628);

label_7F246014:
    ctx->pc = 0x7F246014u;
    // 7F246014: cmpw    r5, r0
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

label_7F246018:
    ctx->pc = 0x7F246018u;
    // 7F246018: bc    12, 2, 0x7F246080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246080;
        }
    }

label_7F24601C:
    ctx->pc = 0x7F24601Cu;
    ctx->downcount -= 1;
    // 7F24601C: b       0x7F2460B8
    {
            goto label_7F2460B8;
    }

label_7F246020:
    ctx->pc = 0x7F246020u;
    ctx->downcount -= 7;
    // 7F246020: ori     r0, r6, 0x0001
    ctx->gpr[0] = ctx->gpr[6] | 0x0001u;

label_7F246024:
    ctx->pc = 0x7F246024u;
    // 7F246024: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246028:
    ctx->pc = 0x7F246028u;
    // 7F246028: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24602C:
    ctx->pc = 0x7F24602Cu;
    // 7F24602C: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F246030:
    ctx->pc = 0x7F246030u;
    // 7F246030: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246034:
    ctx->pc = 0x7F246034u;
    // 7F246034: stw     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F246038:
    ctx->pc = 0x7F246038u;
    // 7F246038: b       0x7F2460B8
    {
            goto label_7F2460B8;
    }

label_7F24603C:
    ctx->pc = 0x7F24603Cu;
    ctx->downcount -= 16;
    // 7F24603C: lis     r3, 93
    ctx->gpr[3] = ((u32)(s32)(93) << 16);

label_7F246040:
    ctx->pc = 0x7F246040u;
    // 7F246040: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F246044:
    ctx->pc = 0x7F246044u;
    // 7F246044: addi    r0, r3, 9628
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(9628);

label_7F246048:
    ctx->pc = 0x7F246048u;
    // 7F246048: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24604C:
    ctx->pc = 0x7F24604Cu;
    // 7F24604C: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246050:
    ctx->pc = 0x7F246050u;
    // 7F246050: addi    r0, r4, 24260
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(24260);

label_7F246054:
    ctx->pc = 0x7F246054u;
    // 7F246054: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F246058:
    ctx->pc = 0x7F246058u;
    // 7F246058: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24605C:
    ctx->pc = 0x7F24605Cu;
    // 7F24605C: lwz     r6, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F246060:
    ctx->pc = 0x7F246060u;
    // 7F246060: ori     r6, r6, 0x0001
    ctx->gpr[6] = ctx->gpr[6] | 0x0001u;

label_7F246064:
    ctx->pc = 0x7F246064u;
    // 7F246064: stw     r6, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F246068:
    ctx->pc = 0x7F246068u;
    // 7F246068: lwz     r6, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F24606C:
    ctx->pc = 0x7F24606Cu;
    // 7F24606C: rlwinm r6, r6, 0, 31, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0xFFFFFFFDu;
    }

label_7F246070:
    ctx->pc = 0x7F246070u;
    // 7F246070: stw     r6, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F246074:
    ctx->pc = 0x7F246074u;
    // 7F246074: stw     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246078:
    ctx->pc = 0x7F246078u;
    // 7F246078: bl      0x7F3C8058
    {
            ctx->lr = 0x7F24607Cu;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F24607C:
    ctx->pc = 0x7F24607Cu;
    ctx->downcount -= 1;
    // 7F24607C: b       0x7F2460B8
    {
            goto label_7F2460B8;
    }

label_7F246080:
    ctx->pc = 0x7F246080u;
    ctx->downcount -= 8;
    // 7F246080: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246084:
    ctx->pc = 0x7F246084u;
    // 7F246084: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246088:
    ctx->pc = 0x7F246088u;
    // 7F246088: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F24608C:
    ctx->pc = 0x7F24608Cu;
    // 7F24608C: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246090:
    ctx->pc = 0x7F246090u;
    // 7F246090: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246094:
    ctx->pc = 0x7F246094u;
    // 7F246094: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F246098:
    ctx->pc = 0x7F246098u;
    // 7F246098: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24609C:
    ctx->pc = 0x7F24609Cu;
    // 7F24609C: b       0x7F2460B8
    {
            goto label_7F2460B8;
    }

label_7F2460A0:
    ctx->pc = 0x7F2460A0u;
    ctx->downcount -= 4;
    // 7F2460A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2460A4:
    ctx->pc = 0x7F2460A4u;
    // 7F2460A4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2460A8:
    ctx->pc = 0x7F2460A8u;
    // 7F2460A8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2460AC:
    ctx->pc = 0x7F2460ACu;
    // 7F2460AC: bl      0x7F3C8058
    {
            ctx->lr = 0x7F2460B0u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F2460B0:
    ctx->pc = 0x7F2460B0u;
    ctx->downcount -= 2;
    // 7F2460B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2460B4:
    ctx->pc = 0x7F2460B4u;
    // 7F2460B4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2460B8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2460B8:
    ctx->pc = 0x7F2460B8u;
    ctx->downcount -= 2;
    // 7F2460B8: cmpwi   r31, -3
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

label_7F2460BC:
    ctx->pc = 0x7F2460BCu;
    // 7F2460BC: bc    12, 2, 0x7F2460F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2460F8;
        }
    }

label_7F2460C0:
    ctx->pc = 0x7F2460C0u;
    ctx->downcount -= 3;
    // 7F2460C0: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2460C4:
    ctx->pc = 0x7F2460C4u;
    // 7F2460C4: rlwinm. r0, r0, 0, 31, 31
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

label_7F2460C8:
    ctx->pc = 0x7F2460C8u;
    // 7F2460C8: bc    12, 2, 0x7F2460F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2460F8;
        }
    }

label_7F2460CC:
    ctx->pc = 0x7F2460CCu;
    ctx->downcount -= 2;
    // 7F2460CC: cmpwi   r31, 0
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

label_7F2460D0:
    ctx->pc = 0x7F2460D0u;
    // 7F2460D0: bc    4, 2, 0x7F2460F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2460F8;
        }
    }

label_7F2460D4:
    ctx->pc = 0x7F2460D4u;
    ctx->downcount -= 3;
    // 7F2460D4: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2460D8:
    ctx->pc = 0x7F2460D8u;
    // 7F2460D8: lwz     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2460DC:
    ctx->pc = 0x7F2460DCu;
    // 7F2460DC: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F2460E0u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F2460E0:
    ctx->pc = 0x7F2460E0u;
    ctx->downcount -= 6;
    // 7F2460E0: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2460E4:
    ctx->pc = 0x7F2460E4u;
    // 7F2460E4: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F2460E8:
    ctx->pc = 0x7F2460E8u;
    // 7F2460E8: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2460EC:
    ctx->pc = 0x7F2460ECu;
    // 7F2460EC: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2460F0:
    ctx->pc = 0x7F2460F0u;
    // 7F2460F0: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F2460F4:
    ctx->pc = 0x7F2460F4u;
    // 7F2460F4: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2460F8:
    ctx->pc = 0x7F2460F8u;
    ctx->downcount -= 17;
    // 7F2460F8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2460FC:
    ctx->pc = 0x7F2460FCu;
    // 7F2460FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246100:
    ctx->pc = 0x7F246100u;
    // 7F246100: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246104:
    ctx->pc = 0x7F246104u;
    // 7F246104: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246108:
    ctx->pc = 0x7F246108u;
    // 7F246108: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24610C:
    ctx->pc = 0x7F24610Cu;
    // 7F24610C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246110:
    ctx->pc = 0x7F246110u;
    ctx->downcount -= 6;
    // 7F246110: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246114:
    ctx->pc = 0x7F246114u;
    // 7F246114: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246118:
    ctx->pc = 0x7F246118u;
    // 7F246118: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24611C:
    ctx->pc = 0x7F24611Cu;
    // 7F24611C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246120:
    ctx->pc = 0x7F246120u;
    // 7F246120: cmpwi   r3, 0
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

label_7F246124:
    ctx->pc = 0x7F246124u;
    // 7F246124: bc    12, 0, 0x7F24612C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24612C;
        }
    }

label_7F246128:
    ctx->pc = 0x7F246128u;
    ctx->downcount -= 1;
    // 7F246128: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F24612Cu;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F24612C:
    ctx->pc = 0x7F24612Cu;
    ctx->downcount -= 5;
    // 7F24612C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246130:
    ctx->pc = 0x7F246130u;
    // 7F246130: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246134:
    ctx->pc = 0x7F246134u;
    // 7F246134: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F246138:
    ctx->pc = 0x7F246138u;
    // 7F246138: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F24613C:
    ctx->pc = 0x7F24613Cu;
    ctx->downcount -= 8;
    // 7F24613C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246140:
    ctx->pc = 0x7F246140u;
    // 7F246140: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246144:
    ctx->pc = 0x7F246144u;
    // 7F246144: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F246148:
    ctx->pc = 0x7F246148u;
    // 7F246148: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24614C:
    ctx->pc = 0x7F24614Cu;
    // 7F24614C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F246150:
    ctx->pc = 0x7F246150u;
    // 7F246150: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246154:
    ctx->pc = 0x7F246154u;
    // 7F246154: addi    r3, r4, 11408
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(11408);

label_7F246158:
    ctx->pc = 0x7F246158u;
    // 7F246158: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F24615Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F24615C:
    ctx->pc = 0x7F24615Cu;
    ctx->downcount -= 5;
    // 7F24615C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F246160:
    ctx->pc = 0x7F246160u;
    // 7F246160: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F246164:
    ctx->pc = 0x7F246164u;
    // 7F246164: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F246168:
    ctx->pc = 0x7F246168u;
    // 7F246168: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F24616C:
    ctx->pc = 0x7F24616Cu;
    // 7F24616C: bl      0x7F2E4A7C
    {
            ctx->lr = 0x7F246170u;
            ctx->pc = 0x7F2E4A7Cu;
            return;
    }

label_7F246170:
    ctx->pc = 0x7F246170u;
    ctx->downcount -= 4;
    // 7F246170: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F246174:
    ctx->pc = 0x7F246174u;
    // 7F246174: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246178:
    ctx->pc = 0x7F246178u;
    // 7F246178: cmpwi   r0, 0
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

label_7F24617C:
    ctx->pc = 0x7F24617Cu;
    // 7F24617C: bc    4, 0, 0x7F246188
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246188;
        }
    }

label_7F246180:
    ctx->pc = 0x7F246180u;
    ctx->downcount -= 2;
    // 7F246180: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F246184:
    ctx->pc = 0x7F246184u;
    // 7F246184: b       0x7F2461E4
    {
            goto label_7F2461E4;
    }

label_7F246188:
    ctx->pc = 0x7F246188u;
    ctx->downcount -= 12;
    // 7F246188: lis     r3, 9
    ctx->gpr[3] = ((u32)(s32)(9) << 16);

label_7F24618C:
    ctx->pc = 0x7F24618Cu;
    // 7F24618C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F246190:
    ctx->pc = 0x7F246190u;
    // 7F246190: addi    r0, r3, -23557
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-23557);

label_7F246194:
    ctx->pc = 0x7F246194u;
    // 7F246194: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F246198:
    ctx->pc = 0x7F246198u;
    // 7F246198: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24619C:
    ctx->pc = 0x7F24619Cu;
    // 7F24619C: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F2461A0:
    ctx->pc = 0x7F2461A0u;
    // 7F2461A0: addi    r4, r3, 24056
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24056);

label_7F2461A4:
    ctx->pc = 0x7F2461A4u;
    // 7F2461A4: addi    r0, r5, 24472
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(24472);

label_7F2461A8:
    ctx->pc = 0x7F2461A8u;
    // 7F2461A8: stw     r6, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2461AC:
    ctx->pc = 0x7F2461ACu;
    // 7F2461AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2461B0:
    ctx->pc = 0x7F2461B0u;
    // 7F2461B0: stw     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2461B4:
    ctx->pc = 0x7F2461B4u;
    // 7F2461B4: bl      0x7F3C8990
    {
            ctx->lr = 0x7F2461B8u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F2461B8:
    ctx->pc = 0x7F2461B8u;
    ctx->downcount -= 2;
    // 7F2461B8: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2461BC:
    ctx->pc = 0x7F2461BCu;
    // 7F2461BC: bl      0x7F246CA4
    {
            ctx->lr = 0x7F2461C0u;
            goto label_7F246CA4;
    }

label_7F2461C0:
    ctx->pc = 0x7F2461C0u;
    ctx->downcount -= 2;
    // 7F2461C0: or.   r4, r3, r3
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

label_7F2461C4:
    ctx->pc = 0x7F2461C4u;
    // 7F2461C4: bc    4, 2, 0x7F2461D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2461D0;
        }
    }

label_7F2461C8:
    ctx->pc = 0x7F2461C8u;
    ctx->downcount -= 2;
    // 7F2461C8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2461CC:
    ctx->pc = 0x7F2461CCu;
    // 7F2461CC: b       0x7F2461E4
    {
            goto label_7F2461E4;
    }

label_7F2461D0:
    ctx->pc = 0x7F2461D0u;
    ctx->downcount -= 2;
    // 7F2461D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2461D4:
    ctx->pc = 0x7F2461D4u;
    // 7F2461D4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2461D8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2461D8:
    ctx->pc = 0x7F2461D8u;
    ctx->downcount -= 3;
    // 7F2461D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2461DC:
    ctx->pc = 0x7F2461DCu;
    // 7F2461DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2461E0:
    ctx->pc = 0x7F2461E0u;
    // 7F2461E0: stw     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2461E4:
    ctx->pc = 0x7F2461E4u;
    ctx->downcount -= 6;
    // 7F2461E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2461E8:
    ctx->pc = 0x7F2461E8u;
    // 7F2461E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2461EC:
    ctx->pc = 0x7F2461ECu;
    // 7F2461EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2461F0:
    ctx->pc = 0x7F2461F0u;
    // 7F2461F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2461F4:
    ctx->pc = 0x7F2461F4u;
    // 7F2461F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2461F8:
    ctx->pc = 0x7F2461F8u;
    ctx->downcount -= 23;
    // 7F2461F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2461FC:
    ctx->pc = 0x7F2461FCu;
    // 7F2461FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246200:
    ctx->pc = 0x7F246200u;
    // 7F246200: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246204:
    ctx->pc = 0x7F246204u;
    // 7F246204: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F246208:
    ctx->pc = 0x7F246208u;
    // 7F246208: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24620C:
    ctx->pc = 0x7F24620Cu;
    // 7F24620C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F246210:
    ctx->pc = 0x7F246210u;
    // 7F246210: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F246214:
    ctx->pc = 0x7F246214u;
    // 7F246214: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F246218:
    ctx->pc = 0x7F246218u;
    // 7F246218: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F24621C:
    ctx->pc = 0x7F24621Cu;
    // 7F24621C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F246220:
    ctx->pc = 0x7F246220u;
    // 7F246220: li      r5, 100
    ctx->gpr[5] = (u32)(s32)(100);

label_7F246224:
    ctx->pc = 0x7F246224u;
    // 7F246224: li      r6, 200
    ctx->gpr[6] = (u32)(s32)(200);

label_7F246228:
    ctx->pc = 0x7F246228u;
    // 7F246228: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F24622Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F24622C:
    ctx->pc = 0x7F24622Cu;
    ctx->downcount -= 2;
    // 7F24622C: or.   r31, r3, r3
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

label_7F246230:
    ctx->pc = 0x7F246230u;
    // 7F246230: bc    4, 2, 0x7F24623C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24623C;
        }
    }

label_7F246234:
    ctx->pc = 0x7F246234u;
    ctx->downcount -= 2;
    // 7F246234: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246238:
    ctx->pc = 0x7F246238u;
    // 7F246238: b       0x7F2462AC
    {
            goto label_7F2462AC;
    }

label_7F24623C:
    ctx->pc = 0x7F24623Cu;
    ctx->downcount -= 5;
    // 7F24623C: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F246240:
    ctx->pc = 0x7F246240u;
    // 7F246240: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F246244:
    ctx->pc = 0x7F246244u;
    // 7F246244: addi    r4, r4, 24336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24336);

label_7F246248:
    ctx->pc = 0x7F246248u;
    // 7F246248: addi    r5, r5, 24848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24848);

label_7F24624C:
    ctx->pc = 0x7F24624Cu;
    // 7F24624C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F246250u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F246250:
    ctx->pc = 0x7F246250u;
    ctx->downcount -= 16;
    // 7F246250: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246254:
    ctx->pc = 0x7F246254u;
    // 7F246254: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F246258:
    ctx->pc = 0x7F246258u;
    // 7F246258: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F24625C:
    ctx->pc = 0x7F24625Cu;
    // 7F24625C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F246260:
    ctx->pc = 0x7F246260u;
    // 7F246260: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F246264:
    ctx->pc = 0x7F246264u;
    // 7F246264: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F246268:
    ctx->pc = 0x7F246268u;
    // 7F246268: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F24626C:
    ctx->pc = 0x7F24626Cu;
    // 7F24626C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F246270:
    ctx->pc = 0x7F246270u;
    // 7F246270: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F246274:
    ctx->pc = 0x7F246274u;
    // 7F246274: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F246278:
    ctx->pc = 0x7F246278u;
    // 7F246278: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F24627C:
    ctx->pc = 0x7F24627Cu;
    // 7F24627C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246280:
    ctx->pc = 0x7F246280u;
    // 7F246280: stw     r27, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F246284:
    ctx->pc = 0x7F246284u;
    // 7F246284: stw     r28, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F246288:
    ctx->pc = 0x7F246288u;
    // 7F246288: stw     r30, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F24628C:
    ctx->pc = 0x7F24628Cu;
    // 7F24628C: bl      0x7F24613C
    {
            ctx->lr = 0x7F246290u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24613Cu;
                return;
            }
            goto label_7F24613C;
    }

label_7F246290:
    ctx->pc = 0x7F246290u;
    ctx->downcount -= 2;
    // 7F246290: cmpwi   r3, 0
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

label_7F246294:
    ctx->pc = 0x7F246294u;
    // 7F246294: bc    4, 0, 0x7F2462A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2462A8;
        }
    }

label_7F246298:
    ctx->pc = 0x7F246298u;
    ctx->downcount -= 2;
    // 7F246298: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24629C:
    ctx->pc = 0x7F24629Cu;
    // 7F24629C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2462A0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2462A0:
    ctx->pc = 0x7F2462A0u;
    ctx->downcount -= 2;
    // 7F2462A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2462A4:
    ctx->pc = 0x7F2462A4u;
    // 7F2462A4: b       0x7F2462AC
    {
            goto label_7F2462AC;
    }

label_7F2462A8:
    ctx->pc = 0x7F2462A8u;
    ctx->downcount -= 1;
    // 7F2462A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2462AC:
    ctx->pc = 0x7F2462ACu;
    ctx->downcount -= 16;
    // 7F2462AC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2462B0:
    ctx->pc = 0x7F2462B0u;
    // 7F2462B0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2462B4:
    ctx->pc = 0x7F2462B4u;
    // 7F2462B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2462B8:
    ctx->pc = 0x7F2462B8u;
    // 7F2462B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2462BC:
    ctx->pc = 0x7F2462BCu;
    // 7F2462BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2462C0:
    ctx->pc = 0x7F2462C0u;
    ctx->downcount -= 9;
    // 7F2462C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2462C4:
    ctx->pc = 0x7F2462C4u;
    // 7F2462C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2462C8:
    ctx->pc = 0x7F2462C8u;
    // 7F2462C8: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F2462CC:
    ctx->pc = 0x7F2462CCu;
    // 7F2462CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2462D0:
    ctx->pc = 0x7F2462D0u;
    // 7F2462D0: addi    r0, r5, -255
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-255);

label_7F2462D4:
    ctx->pc = 0x7F2462D4u;
    // 7F2462D4: cmpw    r4, r0
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

label_7F2462D8:
    ctx->pc = 0x7F2462D8u;
    // 7F2462D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2462DC:
    ctx->pc = 0x7F2462DCu;
    // 7F2462DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2462E0:
    ctx->pc = 0x7F2462E0u;
    // 7F2462E0: bc    12, 2, 0x7F246330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246330;
        }
    }

label_7F2462E4:
    ctx->pc = 0x7F2462E4u;
    ctx->downcount -= 1;
    // 7F2462E4: bc    4, 0, 0x7F246348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246348;
        }
    }

label_7F2462E8:
    ctx->pc = 0x7F2462E8u;
    ctx->downcount -= 2;
    // 7F2462E8: cmpwi   r4, 1
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

label_7F2462EC:
    ctx->pc = 0x7F2462ECu;
    // 7F2462EC: bc    12, 2, 0x7F2462F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2462F4;
        }
    }

label_7F2462F0:
    ctx->pc = 0x7F2462F0u;
    ctx->downcount -= 1;
    // 7F2462F0: b       0x7F246348
    {
            goto label_7F246348;
    }

label_7F2462F4:
    ctx->pc = 0x7F2462F4u;
    ctx->downcount -= 11;
    // 7F2462F4: lis     r3, 85
    ctx->gpr[3] = ((u32)(s32)(85) << 16);

label_7F2462F8:
    ctx->pc = 0x7F2462F8u;
    // 7F2462F8: addi    r0, r3, -24328
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24328);

label_7F2462FC:
    ctx->pc = 0x7F2462FCu;
    // 7F2462FC: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246300:
    ctx->pc = 0x7F246300u;
    // 7F246300: lwz     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246304:
    ctx->pc = 0x7F246304u;
    // 7F246304: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F246308:
    ctx->pc = 0x7F246308u;
    // 7F246308: stw     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24630C:
    ctx->pc = 0x7F24630Cu;
    // 7F24630C: lwz     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246310:
    ctx->pc = 0x7F246310u;
    // 7F246310: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F246314:
    ctx->pc = 0x7F246314u;
    // 7F246314: stw     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246318:
    ctx->pc = 0x7F246318u;
    // 7F246318: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24631C:
    ctx->pc = 0x7F24631Cu;
    // 7F24631C: bl      0x7F2E4C28
    {
            ctx->lr = 0x7F246320u;
            ctx->pc = 0x7F2E4C28u;
            return;
    }

label_7F246320:
    ctx->pc = 0x7F246320u;
    ctx->downcount -= 4;
    // 7F246320: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F246324:
    ctx->pc = 0x7F246324u;
    // 7F246324: addi    r0, r3, 27236
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(27236);

label_7F246328:
    ctx->pc = 0x7F246328u;
    // 7F246328: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24632C:
    ctx->pc = 0x7F24632Cu;
    // 7F24632C: b       0x7F246348
    {
            goto label_7F246348;
    }

label_7F246330:
    ctx->pc = 0x7F246330u;
    ctx->downcount -= 4;
    // 7F246330: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246334:
    ctx->pc = 0x7F246334u;
    // 7F246334: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F246338:
    ctx->pc = 0x7F246338u;
    // 7F246338: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24633C:
    ctx->pc = 0x7F24633Cu;
    // 7F24633C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F246340u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F246340:
    ctx->pc = 0x7F246340u;
    ctx->downcount -= 2;
    // 7F246340: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F246344:
    ctx->pc = 0x7F246344u;
    // 7F246344: b       0x7F24634C
    {
            goto label_7F24634C;
    }

label_7F246348:
    ctx->pc = 0x7F246348u;
    ctx->downcount -= 1;
    // 7F246348: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24634C:
    ctx->pc = 0x7F24634Cu;
    ctx->downcount -= 6;
    // 7F24634C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246350:
    ctx->pc = 0x7F246350u;
    // 7F246350: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F246354:
    ctx->pc = 0x7F246354u;
    // 7F246354: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246358:
    ctx->pc = 0x7F246358u;
    // 7F246358: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24635C:
    ctx->pc = 0x7F24635Cu;
    // 7F24635C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246360:
    ctx->pc = 0x7F246360u;
    ctx->downcount -= 20;
    // 7F246360: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246364:
    ctx->pc = 0x7F246364u;
    // 7F246364: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246368:
    ctx->pc = 0x7F246368u;
    // 7F246368: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24636C:
    ctx->pc = 0x7F24636Cu;
    // 7F24636C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24636Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F246370:
    ctx->pc = 0x7F246370u;
    // 7F246370: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246370u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F246370u);
        if (ctx->exception) return;
    }

label_7F246374:
    ctx->pc = 0x7F246374u;
    // 7F246374: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F246378:
    ctx->pc = 0x7F246378u;
    // 7F246378: lwz     r0, 104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24637C:
    ctx->pc = 0x7F24637Cu;
    // 7F24637C: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246380:
    ctx->pc = 0x7F246380u;
    // 7F246380: rlwinm. r0, r0, 0, 29, 29
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

label_7F246384:
    ctx->pc = 0x7F246384u;
    // 7F246384: bc    4, 2, 0x7F246410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246410;
        }
    }

label_7F246388:
    ctx->pc = 0x7F246388u;
    ctx->downcount -= 7;
    // 7F246388: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24638C:
    ctx->pc = 0x7F24638Cu;
    // 7F24638C: lis     r4, 82
    ctx->gpr[4] = ((u32)(s32)(82) << 16);

label_7F246390:
    ctx->pc = 0x7F246390u;
    // 7F246390: lfs     f31, 20504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246390u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F246394:
    ctx->pc = 0x7F246394u;
    // 7F246394: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F246398:
    ctx->pc = 0x7F246398u;
    // 7F246398: addi    r29, r4, 19974
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(19974);

label_7F24639C:
    ctx->pc = 0x7F24639Cu;
    // 7F24639C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2463A0:
    ctx->pc = 0x7F2463A0u;
    // 7F2463A0: li      r30, 64
    ctx->gpr[30] = (u32)(s32)(64);

label_7F2463A4:
    ctx->pc = 0x7F2463A4u;
    ctx->downcount -= 3;
    // 7F2463A4: lwz     r3, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2463A8:
    // 7F2463A8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2463AC:
    // 7F2463AC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F2463B0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F2463B0:
    ctx->downcount -= 2;
    // 7F2463B0: cmplwi  r3, 0x0000
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

label_7F2463B4:
    // 7F2463B4: bc    4, 2, 0x7F2463C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2463C8;
        }
    }

label_7F2463B8:
    ctx->downcount -= 3;
    // 7F2463B8: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2463BC:
    // 7F2463BC: addi    r3, r3, 11424
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11424);

label_7F2463C0:
    // 7F2463C0: bl      0x7F275ECC
    {
            ctx->lr = 0x7F2463C4u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F2463C4:
    ctx->downcount -= 1;
    // 7F2463C4: b       0x7F246410
    {
            goto label_7F246410;
    }

label_7F2463C8:
    ctx->pc = 0x7F2463C8u;
    ctx->downcount -= 15;
    // 7F2463C8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2463CC:
    // 7F2463CC: add   r4, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2463D0:
    // 7F2463D0: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F2463D4:
    // 7F2463D4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F2463D8:
    // 7F2463D8: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F2463DC:
    // 7F2463DC: addi    r31, r31, 12
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(12);

label_7F2463E0:
    ctx->pc = 0x7F2463E0u;
    // 7F2463E0: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2463E4:
    // 7F2463E4: cmpwi   r28, 3
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

label_7F2463E8:
    ctx->pc = 0x7F2463E8u;
    // 7F2463E8: stw     r3, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2463EC:
    ctx->pc = 0x7F2463ECu;
    // 7F2463EC: stfs     f31, 56(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2463ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2463F0:
    ctx->pc = 0x7F2463F0u;
    // 7F2463F0: lwz     r3, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2463F4:
    ctx->pc = 0x7F2463F4u;
    // 7F2463F4: stb     r30, 55(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(55);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F2463F8:
    ctx->pc = 0x7F2463F8u;
    // 7F2463F8: lwz     r3, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2463FC:
    ctx->pc = 0x7F2463FCu;
    // 7F2463FC: stb     r30, 59(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(59);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_7F246400:
    // 7F246400: bc    12, 0, 0x7F2463A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2463A4u;
                return;
            }
            goto label_7F2463A4;
        }
    }

label_7F246404:
    ctx->pc = 0x7F246404u;
    ctx->downcount -= 3;
    // 7F246404: lwz     r0, 104(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246408:
    ctx->pc = 0x7F246408u;
    // 7F246408: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F24640C:
    ctx->pc = 0x7F24640Cu;
    // 7F24640C: stw     r0, 104(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246410:
    ctx->pc = 0x7F246410u;
    ctx->downcount -= 18;
    // 7F246410: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246410u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F246410u);
        if (ctx->exception) return;
    }

label_7F246414:
    ctx->pc = 0x7F246414u;
    // 7F246414: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246418:
    ctx->pc = 0x7F246418u;
    // 7F246418: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24641C:
    ctx->pc = 0x7F24641Cu;
    // 7F24641C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246420:
    ctx->pc = 0x7F246420u;
    // 7F246420: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246424:
    ctx->pc = 0x7F246424u;
    // 7F246424: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F246428:
    ctx->pc = 0x7F246428u;
    // 7F246428: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F24642C:
    ctx->pc = 0x7F24642Cu;
    ctx->downcount -= 25;
    // 7F24642C: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246430:
    ctx->pc = 0x7F246430u;
    // 7F246430: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246434:
    ctx->pc = 0x7F246434u;
    // 7F246434: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246438:
    ctx->pc = 0x7F246438u;
    // 7F246438: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246438u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F24643C:
    ctx->pc = 0x7F24643Cu;
    // 7F24643C: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24643Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F24643Cu);
        if (ctx->exception) return;
    }

label_7F246440:
    ctx->pc = 0x7F246440u;
    // 7F246440: stfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246440u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F246444:
    ctx->pc = 0x7F246444u;
    // 7F246444: psq_st   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246444u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F246444u);
        if (ctx->exception) return;
    }

label_7F246448:
    ctx->pc = 0x7F246448u;
    // 7F246448: stfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246448u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F24644C:
    ctx->pc = 0x7F24644Cu;
    // 7F24644C: psq_st   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24644Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F24644Cu);
        if (ctx->exception) return;
    }

label_7F246450:
    ctx->pc = 0x7F246450u;
    // 7F246450: stfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246450u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F246454:
    ctx->pc = 0x7F246454u;
    // 7F246454: psq_st   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246454u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F246454u);
        if (ctx->exception) return;
    }

label_7F246458:
    ctx->pc = 0x7F246458u;
    // 7F246458: stmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24645C:
    ctx->pc = 0x7F24645Cu;
    // 7F24645C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246460:
    ctx->pc = 0x7F246460u;
    // 7F246460: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246464:
    ctx->pc = 0x7F246464u;
    // 7F246464: bl      0x7F026F84
    {
            ctx->lr = 0x7F246468u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F246468:
    ctx->pc = 0x7F246468u;
    ctx->downcount -= 25;
    // 7F246468: lha     r5, 92(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(92);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24646C:
    ctx->pc = 0x7F24646Cu;
    // 7F24646C: lis     r6, 17200
    ctx->gpr[6] = ((u32)(s32)(17200) << 16);

label_7F246470:
    ctx->pc = 0x7F246470u;
    // 7F246470: lha     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F246474:
    ctx->pc = 0x7F246474u;
    // 7F246474: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246478:
    ctx->pc = 0x7F246478u;
    // 7F246478: addi    r8, r4, 20512
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(20512);

label_7F24647C:
    ctx->pc = 0x7F24647Cu;
    // 7F24647C: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F246480:
    ctx->pc = 0x7F246480u;
    // 7F246480: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F246484:
    ctx->pc = 0x7F246484u;
    // 7F246484: lha     r5, 94(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(94);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F246488:
    ctx->pc = 0x7F246488u;
    // 7F246488: xoris   r7, r0, 0x8000
    ctx->gpr[7] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F24648C:
    ctx->pc = 0x7F24648Cu;
    // 7F24648C: lha     r0, 130(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(130);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F246490:
    ctx->pc = 0x7F246490u;
    // 7F246490: stw     r7, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F246494:
    ctx->pc = 0x7F246494u;
    // 7F246494: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246498:
    ctx->pc = 0x7F246498u;
    // 7F246498: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F24649C:
    ctx->pc = 0x7F24649Cu;
    // 7F24649C: lfd     f3, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F24649Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2464A0:
    ctx->pc = 0x7F2464A0u;
    // 7F2464A0: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2464A4:
    ctx->pc = 0x7F2464A4u;
    // 7F2464A4: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2464A8:
    ctx->pc = 0x7F2464A8u;
    // 7F2464A8: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2464A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2464AC:
    ctx->pc = 0x7F2464ACu;
    // 7F2464AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2464B0:
    ctx->pc = 0x7F2464B0u;
    // 7F2464B0: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2464B0u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2464B4:
    ctx->pc = 0x7F2464B4u;
    // 7F2464B4: lfs     f0, 20520(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2464B4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20520);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2464B8:
    ctx->pc = 0x7F2464B8u;
    // 7F2464B8: lfd     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2464B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2464BC:
    ctx->pc = 0x7F2464BCu;
    // 7F2464BC: fsubs   f29, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2464BCu)) return;
    ppc_fsubs(ctx, 29, 2, 3);

label_7F2464C0:
    ctx->pc = 0x7F2464C0u;
    // 7F2464C0: fmuls   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2464C0u)) return;
    ppc_fmuls(ctx, 1, 1, 0);

label_7F2464C4:
    ctx->pc = 0x7F2464C4u;
    // 7F2464C4: fmuls   f29, f29, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2464C4u)) return;
    ppc_fmuls(ctx, 29, 29, 0);

label_7F2464C8:
    ctx->pc = 0x7F2464C8u;
    // 7F2464C8: bl      0x7F246900
    {
            ctx->lr = 0x7F2464CCu;
            goto label_7F246900;
    }

label_7F2464CC:
    ctx->pc = 0x7F2464CCu;
    ctx->downcount -= 3;
    // 7F2464CC: fmr    f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2464CCu)) return;
    ctx->fpr[28] = ctx->fpr[1];

label_7F2464D0:
    ctx->pc = 0x7F2464D0u;
    // 7F2464D0: fmr    f1, f29
    if (!ppc_fp_available_inline(ctx, 0x7F2464D0u)) return;
    ctx->fpr[1] = ctx->fpr[29];

label_7F2464D4:
    ctx->pc = 0x7F2464D4u;
    // 7F2464D4: bl      0x7F246900
    {
            ctx->lr = 0x7F2464D8u;
            goto label_7F246900;
    }

label_7F2464D8:
    ctx->pc = 0x7F2464D8u;
    ctx->downcount -= 4;
    // 7F2464D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2464DC:
    ctx->pc = 0x7F2464DCu;
    // 7F2464DC: lfs     f0, 20524(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2464DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2464E0:
    ctx->pc = 0x7F2464E0u;
    // 7F2464E0: fcmpo   cr0, f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2464E0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[28], ctx->fpr[0], true);

label_7F2464E4:
    ctx->pc = 0x7F2464E4u;
    // 7F2464E4: bc    4, 1, 0x7F2464EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2464EC;
        }
    }

label_7F2464E8:
    ctx->pc = 0x7F2464E8u;
    ctx->downcount -= 1;
    // 7F2464E8: fmr    f28, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2464E8u)) return;
    ctx->fpr[28] = ctx->fpr[0];

label_7F2464EC:
    ctx->pc = 0x7F2464ECu;
    ctx->downcount -= 4;
    // 7F2464EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2464F0:
    ctx->pc = 0x7F2464F0u;
    // 7F2464F0: lfs     f0, 20524(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2464F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20524);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2464F4:
    ctx->pc = 0x7F2464F4u;
    // 7F2464F4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2464F4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2464F8:
    ctx->pc = 0x7F2464F8u;
    // 7F2464F8: bc    4, 1, 0x7F246500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246500;
        }
    }

label_7F2464FC:
    ctx->pc = 0x7F2464FCu;
    ctx->downcount -= 1;
    // 7F2464FC: fmr    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2464FCu)) return;
    ctx->fpr[1] = ctx->fpr[0];

label_7F246500:
    ctx->pc = 0x7F246500u;
    ctx->downcount -= 23;
    // 7F246500: fadds   f2, f28, f1
    if (!ppc_fp_available_inline(ctx, 0x7F246500u)) return;
    ppc_fadds(ctx, 2, 28, 1);

label_7F246504:
    ctx->pc = 0x7F246504u;
    // 7F246504: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246508:
    ctx->pc = 0x7F246508u;
    // 7F246508: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F246508u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F24650C:
    ctx->pc = 0x7F24650Cu;
    // 7F24650C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246510:
    ctx->pc = 0x7F246510u;
    // 7F246510: lfs     f31, 20528(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246510u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F246514:
    ctx->pc = 0x7F246514u;
    // 7F246514: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F246518:
    ctx->pc = 0x7F246518u;
    // 7F246518: fctiwz    f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F246518u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F24651C:
    ctx->pc = 0x7F24651Cu;
    // 7F24651C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24651Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F246520:
    ctx->pc = 0x7F246520u;
    // 7F246520: lfs     f28, 20572(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246520u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F246524:
    ctx->pc = 0x7F246524u;
    // 7F246524: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F246528:
    ctx->pc = 0x7F246528u;
    // 7F246528: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24652C:
    ctx->pc = 0x7F24652Cu;
    // 7F24652C: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24652Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F246530:
    ctx->pc = 0x7F246530u;
    // 7F246530: rlwinm r0, r4, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 25u) & 0xFE000000u;
    }

label_7F246534:
    ctx->pc = 0x7F246534u;
    // 7F246534: rlwinm r4, r4, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0x00000001u;
    }

label_7F246538:
    ctx->pc = 0x7F246538u;
    // 7F246538: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24653C:
    ctx->pc = 0x7F24653Cu;
    // 7F24653C: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F246540:
    ctx->pc = 0x7F246540u;
    // 7F246540: rlwinm r0, r0, 7, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 7u) & 0xFFFFFFFFu;
    }

label_7F246544:
    ctx->pc = 0x7F246544u;
    // 7F246544: rlwinm r3, r5, 25, 0, 6
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 25u) & 0xFE000000u;
    }

label_7F246548:
    ctx->pc = 0x7F246548u;
    // 7F246548: rlwinm r5, r5, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0x00000001u;
    }

label_7F24654C:
    ctx->pc = 0x7F24654Cu;
    // 7F24654C: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F246550:
    ctx->pc = 0x7F246550u;
    // 7F246550: add   r30, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F246554:
    ctx->pc = 0x7F246554u;
    // 7F246554: rlwinm r0, r3, 7, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 7u) & 0xFFFFFFFFu;
    }

label_7F246558:
    ctx->pc = 0x7F246558u;
    // 7F246558: add   r31, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F24655C:
    ctx->downcount -= 7;
    // 7F24655C: add   r29, r26, r25
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F246560:
    ctx->pc = 0x7F246560u;
    // 7F246560: lwz     r27, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F246564:
    ctx->pc = 0x7F246564u;
    // 7F246564: lfs     f2, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F246564u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246568:
    ctx->pc = 0x7F246568u;
    // 7F246568: lfs     f1, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F246568u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24656C:
    ctx->pc = 0x7F24656Cu;
    // 7F24656C: fsubs   f0, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F24656Cu)) return;
    ppc_fsubs(ctx, 0, 1, 31);

label_7F246570:
    ctx->pc = 0x7F246570u;
    // 7F246570: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246570u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F246574:
    // 7F246574: bc    4, 1, 0x7F24658C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24658C;
        }
    }

label_7F246578:
    ctx->downcount -= 5;
    // 7F246578: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24657C:
    ctx->pc = 0x7F24657Cu;
    // 7F24657C: lfs     f0, 20528(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24657Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246580:
    ctx->pc = 0x7F246580u;
    // 7F246580: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F246580u)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F246584:
    ctx->pc = 0x7F246584u;
    // 7F246584: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246584u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F246588:
    // 7F246588: bc    12, 0, 0x7F2465A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2465A8;
        }
    }

label_7F24658C:
    ctx->downcount -= 4;
    // 7F24658C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246590:
    ctx->pc = 0x7F246590u;
    // 7F246590: lfs     f0, 20504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246590u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246594:
    ctx->pc = 0x7F246594u;
    // 7F246594: fcmpu   cr0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F246594u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[2], false);

label_7F246598:
    // 7F246598: bc    12, 2, 0x7F2465A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2465A8;
        }
    }

label_7F24659C:
    ctx->pc = 0x7F24659Cu;
    ctx->downcount -= 3;
    // 7F24659C: lfs     f0, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F24659Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2465A0:
    ctx->pc = 0x7F2465A0u;
    // 7F2465A0: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2465A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F2465A4:
    // 7F2465A4: bc    4, 2, 0x7F2467BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2467BC;
        }
    }

label_7F2465A8:
    ctx->pc = 0x7F2465A8u;
    ctx->downcount -= 30;
    // 7F2465A8: lwz     r0, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2465AC:
    // 7F2465AC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2465B0:
    ctx->pc = 0x7F2465B0u;
    // 7F2465B0: lfs     f0, 20532(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2465B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2465B4:
    // 7F2465B4: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2465B8:
    // 7F2465B8: mulli   r4, r0, 12
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_7F2465BC:
    // 7F2465BC: addi    r0, r4, 52
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(52);

label_7F2465C0:
    ctx->pc = 0x7F2465C0u;
    // 7F2465C0: lwzx    r3, r26, r0
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2465C4:
    ctx->pc = 0x7F2465C4u;
    // 7F2465C4: lfs     f2, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2465C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2465C8:
    ctx->pc = 0x7F2465C8u;
    // 7F2465C8: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2465C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2465CC:
    ctx->pc = 0x7F2465CCu;
    // 7F2465CC: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2465CCu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F2465D0:
    ctx->pc = 0x7F2465D0u;
    // 7F2465D0: fdivs   f29, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2465D0u)) return;
    ppc_fdivs(ctx, 29, 1, 0);

label_7F2465D4:
    // 7F2465D4: bc    12, 2, 0x7F246658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246658;
        }
    }

label_7F2465D8:
    ctx->downcount -= 1;
    // 7F2465D8: bc    4, 0, 0x7F246708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246708;
        }
    }

label_7F2465DC:
    ctx->downcount -= 2;
    // 7F2465DC: cmpwi   r28, 0
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

label_7F2465E0:
    // 7F2465E0: bc    4, 0, 0x7F2465E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2465E8;
        }
    }

label_7F2465E4:
    ctx->downcount -= 1;
    // 7F2465E4: b       0x7F246708
    {
            goto label_7F246708;
    }

label_7F2465E8:
    ctx->downcount -= 1;
    // 7F2465E8: bl      0x7F246894
    {
            ctx->lr = 0x7F2465ECu;
            goto label_7F246894;
    }

label_7F2465EC:
    ctx->downcount -= 18;
    // 7F2465EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2465F0:
    // 7F2465F0: xoris   r3, r31, 0x8000
    ctx->gpr[3] = ctx->gpr[31] ^ (0x8000u << 16);

label_7F2465F4:
    ctx->pc = 0x7F2465F4u;
    // 7F2465F4: lfs     f0, 20536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2465F4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2465F8:
    // 7F2465F8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2465FC:
    // 7F2465FC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F246600:
    ctx->pc = 0x7F246600u;
    // 7F246600: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F246604:
    ctx->pc = 0x7F246604u;
    // 7F246604: fadds   f3, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F246604u)) return;
    ppc_fadds(ctx, 3, 0, 1);

label_7F246608:
    // 7F246608: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24660C:
    ctx->pc = 0x7F24660Cu;
    // 7F24660C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246610:
    ctx->pc = 0x7F246610u;
    // 7F246610: lfd     f1, 20512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246610u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20512);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246614:
    ctx->pc = 0x7F246614u;
    // 7F246614: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246614u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246618:
    ctx->pc = 0x7F246618u;
    // 7F246618: stfs     f3, 60(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F246618u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F24661C:
    ctx->pc = 0x7F24661Cu;
    // 7F24661C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24661Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F246620:
    ctx->pc = 0x7F246620u;
    // 7F246620: lfs     f2, 20540(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F246620u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20540);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246624:
    ctx->pc = 0x7F246624u;
    // 7F246624: lfs     f1, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F246624u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246628:
    ctx->pc = 0x7F246628u;
    // 7F246628: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246628u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F24662C:
    ctx->pc = 0x7F24662Cu;
    // 7F24662C: fadds   f30, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24662Cu)) return;
    ppc_fadds(ctx, 30, 2, 0);

label_7F246630:
    // 7F246630: bl      0x7F246894
    {
            ctx->lr = 0x7F246634u;
            goto label_7F246894;
    }

label_7F246634:
    ctx->downcount -= 9;
    // 7F246634: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246638:
    // 7F246638: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24663C:
    ctx->pc = 0x7F24663Cu;
    // 7F24663C: lfs     f3, 20548(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24663Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20548);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F246640:
    ctx->pc = 0x7F246640u;
    // 7F246640: lfs     f2, 20544(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246640u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246644:
    ctx->pc = 0x7F246644u;
    // 7F246644: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F246644u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F246648:
    ctx->pc = 0x7F246648u;
    // 7F246648: lfs     f0, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F246648u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24664C:
    ctx->pc = 0x7F24664Cu;
    // 7F24664C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24664Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F246650:
    ctx->pc = 0x7F246650u;
    // 7F246650: fmadds f30, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F246650u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_7F246654:
    // 7F246654: b       0x7F246784
    {
            goto label_7F246784;
    }

label_7F246658:
    ctx->downcount -= 1;
    // 7F246658: bl      0x7F246894
    {
            ctx->lr = 0x7F24665Cu;
            goto label_7F246894;
    }

label_7F24665C:
    ctx->downcount -= 34;
    // 7F24665C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246660:
    // 7F246660: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246664:
    // 7F246664: addi    r5, r3, 20552
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20552);

label_7F246668:
    // 7F246668: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F24666C:
    ctx->pc = 0x7F24666Cu;
    // 7F24666C: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F24666Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246670:
    // 7F246670: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246674:
    ctx->pc = 0x7F246674u;
    // 7F246674: lfs     f0, 20536(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246674u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20536);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246678:
    // 7F246678: addi    r4, r3, 20556
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20556);

label_7F24667C:
    // 7F24667C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246680:
    ctx->pc = 0x7F246680u;
    // 7F246680: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246684:
    ctx->pc = 0x7F246684u;
    // 7F246684: fmadds f1, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246684u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_7F246688:
    ctx->pc = 0x7F246688u;
    // 7F246688: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246688u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24668C:
    // 7F24668C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F246690:
    ctx->pc = 0x7F246690u;
    // 7F246690: stfs     f1, 60(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F246690u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F246694:
    ctx->pc = 0x7F246694u;
    // 7F246694: lfd     f1, 20512(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246694u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20512);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246698:
    ctx->pc = 0x7F246698u;
    // 7F246698: lfs     f2, 56(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F246698u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F24669C:
    ctx->pc = 0x7F24669Cu;
    // 7F24669C: lfs     f3, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F24669Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2466A0:
    ctx->pc = 0x7F2466A0u;
    // 7F2466A0: fmuls   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2466A0u)) return;
    ppc_fmuls(ctx, 0, 2, 0);

label_7F2466A4:
    ctx->pc = 0x7F2466A4u;
    // 7F2466A4: lfs     f2, 20544(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2466A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2466A8:
    ctx->pc = 0x7F2466A8u;
    // 7F2466A8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2466A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2466AC:
    ctx->pc = 0x7F2466ACu;
    // 7F2466AC: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2466ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2466B0:
    ctx->pc = 0x7F2466B0u;
    // 7F2466B0: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2466B4:
    // 7F2466B4: rlwinm r0, r3, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 25u) & 0xFE000000u;
    }

label_7F2466B8:
    // 7F2466B8: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F2466BC:
    // 7F2466BC: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2466C0:
    // 7F2466C0: rlwinm r0, r0, 7, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 7u) & 0xFFFFFFFFu;
    }

label_7F2466C4:
    // 7F2466C4: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2466C8:
    // 7F2466C8: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F2466CC:
    ctx->pc = 0x7F2466CCu;
    // 7F2466CC: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2466D0:
    ctx->pc = 0x7F2466D0u;
    // 7F2466D0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2466D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2466D4:
    ctx->pc = 0x7F2466D4u;
    // 7F2466D4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2466D4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2466D8:
    ctx->pc = 0x7F2466D8u;
    // 7F2466D8: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2466D8u)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F2466DC:
    ctx->pc = 0x7F2466DCu;
    // 7F2466DC: fadds   f30, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2466DCu)) return;
    ppc_fadds(ctx, 30, 2, 0);

label_7F2466E0:
    // 7F2466E0: bl      0x7F246894
    {
            ctx->lr = 0x7F2466E4u;
            goto label_7F246894;
    }

label_7F2466E4:
    ctx->downcount -= 9;
    // 7F2466E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2466E8:
    // 7F2466E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2466EC:
    ctx->pc = 0x7F2466ECu;
    // 7F2466EC: lfs     f3, 20560(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2466ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F2466F0:
    ctx->pc = 0x7F2466F0u;
    // 7F2466F0: lfs     f2, 20544(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2466F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2466F4:
    ctx->pc = 0x7F2466F4u;
    // 7F2466F4: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2466F4u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F2466F8:
    ctx->pc = 0x7F2466F8u;
    // 7F2466F8: lfs     f0, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F2466F8u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2466FC:
    ctx->pc = 0x7F2466FCu;
    // 7F2466FC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2466FCu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F246700:
    ctx->pc = 0x7F246700u;
    // 7F246700: fmadds f30, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F246700u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_7F246704:
    // 7F246704: b       0x7F246784
    {
            goto label_7F246784;
    }

label_7F246708:
    ctx->downcount -= 1;
    // 7F246708: bl      0x7F246894
    {
            ctx->lr = 0x7F24670Cu;
            goto label_7F246894;
    }

label_7F24670C:
    ctx->pc = 0x7F24670Cu;
    ctx->downcount -= 22;
    // 7F24670C: lfs     f2, 60(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F24670Cu)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246710:
    // 7F246710: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246714:
    ctx->pc = 0x7F246714u;
    // 7F246714: lfs     f0, 72(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F246714u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246718:
    // 7F246718: addi    r4, r3, 20564
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20564);

label_7F24671C:
    // 7F24671C: xoris   r3, r30, 0x8000
    ctx->gpr[3] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F246720:
    // 7F246720: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F246724:
    ctx->pc = 0x7F246724u;
    // 7F246724: fadds   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246724u)) return;
    ppc_fadds(ctx, 2, 2, 0);

label_7F246728:
    ctx->pc = 0x7F246728u;
    // 7F246728: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246728u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24672C:
    ctx->pc = 0x7F24672Cu;
    // 7F24672C: stw     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F246730:
    // 7F246730: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246734:
    // 7F246734: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F246738:
    ctx->pc = 0x7F246738u;
    // 7F246738: fmadds f2, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246738u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_7F24673C:
    ctx->pc = 0x7F24673Cu;
    // 7F24673C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246740:
    ctx->pc = 0x7F246740u;
    // 7F246740: lfd     f1, 20512(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246740u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20512);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246744:
    ctx->pc = 0x7F246744u;
    // 7F246744: lfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246744u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246748:
    ctx->pc = 0x7F246748u;
    // 7F246748: stfs     f2, 60(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F246748u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F24674C:
    ctx->pc = 0x7F24674Cu;
    // 7F24674C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24674Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F246750:
    ctx->pc = 0x7F246750u;
    // 7F246750: lfs     f2, 20568(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F246750u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246754:
    ctx->pc = 0x7F246754u;
    // 7F246754: lfs     f1, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F246754u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246758:
    ctx->pc = 0x7F246758u;
    // 7F246758: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246758u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F24675C:
    ctx->pc = 0x7F24675Cu;
    // 7F24675C: fadds   f30, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24675Cu)) return;
    ppc_fadds(ctx, 30, 2, 0);

label_7F246760:
    // 7F246760: bl      0x7F246894
    {
            ctx->lr = 0x7F246764u;
            goto label_7F246894;
    }

label_7F246764:
    ctx->downcount -= 8;
    // 7F246764: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246768:
    // 7F246768: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24676C:
    ctx->pc = 0x7F24676Cu;
    // 7F24676C: lfs     f3, 20532(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24676Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20532);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F246770:
    ctx->pc = 0x7F246770u;
    // 7F246770: lfs     f2, 20544(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246770u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246774:
    ctx->pc = 0x7F246774u;
    // 7F246774: fmuls   f1, f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F246774u)) return;
    ppc_fmuls(ctx, 1, 3, 1);

label_7F246778:
    ctx->pc = 0x7F246778u;
    // 7F246778: lfs     f0, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F246778u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24677C:
    ctx->pc = 0x7F24677Cu;
    // 7F24677C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24677Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F246780:
    ctx->pc = 0x7F246780u;
    // 7F246780: fmadds f30, f0, f1, f30
    if (!ppc_fp_available_inline(ctx, 0x7F246780u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[0], ctx->fpr[1], ctx->fpr[30], true, false, false, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_7F246784:
    ctx->pc = 0x7F246784u;
    ctx->downcount -= 6;
    // 7F246784: lfs     f0, 116(r26)
    if (!ppc_fp_available_inline(ctx, 0x7F246784u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246788:
    // 7F246788: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24678C:
    ctx->pc = 0x7F24678Cu;
    // 7F24678C: fnmsubs f30, f29, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F24678Cu)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[29], ctx->fpr[0], ctx->fpr[30], true, true, true, &result))
            ctx->fpr[30] = ctx->ps1[30] = result;
    }

label_7F246790:
    ctx->pc = 0x7F246790u;
    // 7F246790: lfs     f0, 20504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246790u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246794:
    ctx->pc = 0x7F246794u;
    // 7F246794: fcmpu   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246794u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], false);

label_7F246798:
    // 7F246798: bc    12, 2, 0x7F2467A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2467A4;
        }
    }

label_7F24679C:
    ctx->pc = 0x7F24679Cu;
    ctx->downcount -= 2;
    // 7F24679C: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F24679Cu)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F2467A0:
    // 7F2467A0: b       0x7F2467B8
    {
            goto label_7F2467B8;
    }

label_7F2467A4:
    ctx->downcount -= 4;
    // 7F2467A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2467A8:
    ctx->pc = 0x7F2467A8u;
    // 7F2467A8: lfs     f0, 20572(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2467A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2467AC:
    ctx->pc = 0x7F2467ACu;
    // 7F2467AC: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2467ACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F2467B0:
    // 7F2467B0: bc    4, 1, 0x7F2467B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2467B8;
        }
    }

label_7F2467B4:
    ctx->pc = 0x7F2467B4u;
    ctx->downcount -= 1;
    // 7F2467B4: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2467B4u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F2467B8:
    ctx->pc = 0x7F2467B8u;
    ctx->downcount -= 1;
    // 7F2467B8: stfs     f30, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2467B8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F2467BC:
    ctx->pc = 0x7F2467BCu;
    ctx->downcount -= 22;
    // 7F2467BC: lfs     f2, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2467BCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2467C0:
    ctx->pc = 0x7F2467C0u;
    // 7F2467C0: lfs     f1, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2467C0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2467C4:
    ctx->pc = 0x7F2467C4u;
    // 7F2467C4: lfs     f0, 60(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2467C4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2467C8:
    ctx->pc = 0x7F2467C8u;
    // 7F2467C8: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2467C8u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F2467CC:
    ctx->pc = 0x7F2467CCu;
    // 7F2467CC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2467CCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F2467D0:
    // 7F2467D0: bl      0x7F246900
    {
            ctx->lr = 0x7F2467D4u;
            goto label_7F246900;
    }

label_7F2467D4:
    ctx->pc = 0x7F2467D4u;
    ctx->downcount -= 8;
    // 7F2467D4: fneg    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2467D4u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) ^ 0x8000000000000000ull);

label_7F2467D8:
    ctx->pc = 0x7F2467D8u;
    // 7F2467D8: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2467D8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2467DC:
    ctx->pc = 0x7F2467DCu;
    // 7F2467DC: fadds   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2467DCu)) return;
    ppc_fadds(ctx, 0, 0, 1);

label_7F2467E0:
    ctx->pc = 0x7F2467E0u;
    // 7F2467E0: stfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2467E0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2467E4:
    ctx->pc = 0x7F2467E4u;
    // 7F2467E4: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2467E4u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2467E8:
    ctx->pc = 0x7F2467E8u;
    // 7F2467E8: fcmpo   cr0, f0, f28
    if (!ppc_fp_available_inline(ctx, 0x7F2467E8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[28], true);

label_7F2467EC:
    // 7F2467EC: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F2467F0:
    // 7F2467F0: bc    4, 2, 0x7F246800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246800;
        }
    }

label_7F2467F4:
    ctx->downcount -= 3;
    // 7F2467F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2467F8:
    ctx->pc = 0x7F2467F8u;
    // 7F2467F8: lfs     f0, 20572(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2467F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2467FC:
    ctx->pc = 0x7F2467FCu;
    // 7F2467FC: stfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2467FCu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F246800:
    ctx->pc = 0x7F246800u;
    ctx->downcount -= 5;
    // 7F246800: lfs     f1, 36(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F246800u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246804:
    ctx->pc = 0x7F246804u;
    // 7F246804: lfs     f0, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F246804u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246808:
    ctx->pc = 0x7F246808u;
    // 7F246808: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246808u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F24680C:
    // 7F24680C: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F246810:
    // 7F246810: bc    4, 2, 0x7F246818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246818;
        }
    }

label_7F246814:
    ctx->pc = 0x7F246814u;
    ctx->downcount -= 1;
    // 7F246814: stfs     f1, 44(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F246814u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F246818:
    ctx->pc = 0x7F246818u;
    ctx->downcount -= 9;
    // 7F246818: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24681C:
    // 7F24681C: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F246820:
    // 7F246820: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F246824:
    // 7F246824: addi    r25, r25, 12
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(12);

label_7F246828:
    ctx->pc = 0x7F246828u;
    // 7F246828: stb     r0, 55(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(55);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F24682C:
    // 7F24682C: cmpwi   r28, 3
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

label_7F246830:
    ctx->pc = 0x7F246830u;
    // 7F246830: lwz     r3, 52(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246834:
    ctx->pc = 0x7F246834u;
    // 7F246834: stb     r0, 59(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(59);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F246838:
    // 7F246838: bc    12, 0, 0x7F24655C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24655Cu;
                return;
            }
            goto label_7F24655C;
        }
    }

label_7F24683C:
    ctx->pc = 0x7F24683Cu;
    ctx->downcount -= 76;
    // 7F24683C: lwz     r4, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F246840:
    ctx->pc = 0x7F246840u;
    // 7F246840: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F246844:
    ctx->pc = 0x7F246844u;
    // 7F246844: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F246848:
    ctx->pc = 0x7F246848u;
    // 7F246848: stw     r0, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24684C:
    ctx->pc = 0x7F24684Cu;
    // 7F24684C: lwz     r4, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F246850:
    ctx->pc = 0x7F246850u;
    // 7F246850: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F246854:
    ctx->pc = 0x7F246854u;
    // 7F246854: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F246858:
    ctx->pc = 0x7F246858u;
    // 7F246858: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F24685C:
    ctx->pc = 0x7F24685Cu;
    // 7F24685C: stw     r0, 88(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246860:
    ctx->pc = 0x7F246860u;
    // 7F246860: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246860u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F246860u);
        if (ctx->exception) return;
    }

label_7F246864:
    ctx->pc = 0x7F246864u;
    // 7F246864: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246864u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246868:
    ctx->pc = 0x7F246868u;
    // 7F246868: psq_l   f30, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246868u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F246868u);
        if (ctx->exception) return;
    }

label_7F24686C:
    ctx->pc = 0x7F24686Cu;
    // 7F24686C: lfd     f30, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24686Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246870:
    ctx->pc = 0x7F246870u;
    // 7F246870: psq_l   f29, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F246870u);
        if (ctx->exception) return;
    }

label_7F246874:
    ctx->pc = 0x7F246874u;
    // 7F246874: lfd     f29, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246874u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246878:
    ctx->pc = 0x7F246878u;
    // 7F246878: psq_l   f28, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246878u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F246878u);
        if (ctx->exception) return;
    }

label_7F24687C:
    ctx->pc = 0x7F24687Cu;
    // 7F24687C: lfd     f28, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24687Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F246880:
    ctx->pc = 0x7F246880u;
    // 7F246880: lmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F246884:
    ctx->pc = 0x7F246884u;
    // 7F246884: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246888:
    ctx->pc = 0x7F246888u;
    // 7F246888: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24688C:
    ctx->pc = 0x7F24688Cu;
    // 7F24688C: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F246890:
    ctx->pc = 0x7F246890u;
    // 7F246890: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246894:
    ctx->pc = 0x7F246894u;
    ctx->downcount -= 4;
    // 7F246894: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246898:
    ctx->pc = 0x7F246898u;
    // 7F246898: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24689C:
    ctx->pc = 0x7F24689Cu;
    // 7F24689C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2468A0:
    ctx->pc = 0x7F2468A0u;
    // 7F2468A0: bl      0x7F2468DC
    {
            ctx->lr = 0x7F2468A4u;
            goto label_7F2468DC;
    }

label_7F2468A4:
    ctx->pc = 0x7F2468A4u;
    ctx->downcount -= 31;
    // 7F2468A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2468A8:
    ctx->pc = 0x7F2468A8u;
    // 7F2468A8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2468AC:
    ctx->pc = 0x7F2468ACu;
    // 7F2468AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2468B0:
    ctx->pc = 0x7F2468B0u;
    // 7F2468B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2468B4:
    ctx->pc = 0x7F2468B4u;
    // 7F2468B4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2468B8:
    ctx->pc = 0x7F2468B8u;
    // 7F2468B8: lfd     f2, 20584(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2468B8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20584);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2468BC:
    ctx->pc = 0x7F2468BCu;
    // 7F2468BC: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2468BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2468C0:
    ctx->pc = 0x7F2468C0u;
    // 7F2468C0: lfs     f0, 20576(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2468C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2468C4:
    ctx->pc = 0x7F2468C4u;
    // 7F2468C4: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2468C4u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F2468C8:
    ctx->pc = 0x7F2468C8u;
    // 7F2468C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2468CC:
    ctx->pc = 0x7F2468CCu;
    // 7F2468CC: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2468CCu)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F2468D0:
    ctx->pc = 0x7F2468D0u;
    // 7F2468D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2468D4:
    ctx->pc = 0x7F2468D4u;
    // 7F2468D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2468D8:
    ctx->pc = 0x7F2468D8u;
    // 7F2468D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2468DC:
    ctx->pc = 0x7F2468DCu;
    ctx->downcount -= 13;
    // 7F2468DC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2468E0:
    ctx->pc = 0x7F2468E0u;
    // 7F2468E0: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F2468E4:
    ctx->pc = 0x7F2468E4u;
    // 7F2468E4: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F2468E8:
    ctx->pc = 0x7F2468E8u;
    // 7F2468E8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2468EC:
    ctx->pc = 0x7F2468ECu;
    // 7F2468EC: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F2468F0:
    ctx->pc = 0x7F2468F0u;
    // 7F2468F0: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F2468F4:
    ctx->pc = 0x7F2468F4u;
    // 7F2468F4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2468F8:
    ctx->pc = 0x7F2468F8u;
    // 7F2468F8: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2468FC:
    ctx->pc = 0x7F2468FCu;
    // 7F2468FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246900:
    ctx->pc = 0x7F246900u;
    ctx->downcount -= 8;
    // 7F246900: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246904:
    ctx->pc = 0x7F246904u;
    // 7F246904: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F246908:
    ctx->pc = 0x7F246908u;
    // 7F246908: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24690C:
    ctx->pc = 0x7F24690Cu;
    // 7F24690C: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F246910:
    ctx->pc = 0x7F246910u;
    // 7F246910: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246914:
    ctx->pc = 0x7F246914u;
    // 7F246914: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246914u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246918:
    ctx->pc = 0x7F246918u;
    // 7F246918: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24691C:
    ctx->pc = 0x7F24691Cu;
    // 7F24691C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246920:
    ctx->pc = 0x7F246920u;
    ctx->downcount -= 17;
    // 7F246920: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246924:
    ctx->pc = 0x7F246924u;
    // 7F246924: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246928:
    ctx->pc = 0x7F246928u;
    // 7F246928: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24692C:
    ctx->pc = 0x7F24692Cu;
    // 7F24692C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F246930:
    ctx->pc = 0x7F246930u;
    // 7F246930: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246934:
    ctx->pc = 0x7F246934u;
    // 7F246934: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246938:
    ctx->pc = 0x7F246938u;
    // 7F246938: bl      0x7F026F84
    {
            ctx->lr = 0x7F24693Cu;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F24693C:
    ctx->pc = 0x7F24693Cu;
    ctx->downcount -= 3;
    // 7F24693C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246940:
    ctx->pc = 0x7F246940u;
    // 7F246940: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F246944:
    ctx->pc = 0x7F246944u;
    // 7F246944: bl      0x7F246A64
    {
            ctx->lr = 0x7F246948u;
            goto label_7F246A64;
    }

label_7F246948:
    ctx->pc = 0x7F246948u;
    ctx->downcount -= 2;
    // 7F246948: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F24694C:
    ctx->pc = 0x7F24694Cu;
    // 7F24694C: bl      0x7F24697C
    {
            ctx->lr = 0x7F246950u;
            goto label_7F24697C;
    }

label_7F246950:
    ctx->pc = 0x7F246950u;
    ctx->downcount -= 2;
    // 7F246950: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F246954:
    ctx->pc = 0x7F246954u;
    // 7F246954: bl      0x7F24642C
    {
            ctx->lr = 0x7F246958u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24642Cu;
                return;
            }
            goto label_7F24642C;
    }

label_7F246958:
    ctx->pc = 0x7F246958u;
    ctx->downcount -= 20;
    // 7F246958: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24695C:
    ctx->pc = 0x7F24695Cu;
    // 7F24695C: lwz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246960:
    ctx->pc = 0x7F246960u;
    // 7F246960: stw     r3, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F246964:
    ctx->pc = 0x7F246964u;
    // 7F246964: stw     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246968:
    ctx->pc = 0x7F246968u;
    // 7F246968: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24696C:
    ctx->pc = 0x7F24696Cu;
    // 7F24696C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246970:
    ctx->pc = 0x7F246970u;
    // 7F246970: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246974:
    ctx->pc = 0x7F246974u;
    // 7F246974: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F246978:
    ctx->pc = 0x7F246978u;
    // 7F246978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F24697C:
    ctx->pc = 0x7F24697Cu;
    ctx->downcount -= 3;
    // 7F24697C: lwz     r5, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F246980:
    ctx->pc = 0x7F246980u;
    // 7F246980: cmplwi  r5, 0x0000
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

label_7F246984:
    ctx->pc = 0x7F246984u;
    // 7F246984: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246988:
    ctx->pc = 0x7F246988u;
    ctx->downcount -= 4;
    // 7F246988: lwz     r4, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24698C:
    ctx->pc = 0x7F24698Cu;
    // 7F24698C: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246990:
    ctx->pc = 0x7F246990u;
    // 7F246990: cmpw    r4, r0
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

label_7F246994:
    ctx->pc = 0x7F246994u;
    // 7F246994: bc    12, 2, 0x7F2469B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2469B4;
        }
    }

label_7F246998:
    ctx->pc = 0x7F246998u;
    ctx->downcount -= 7;
    // 7F246998: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24699C:
    ctx->pc = 0x7F24699Cu;
    // 7F24699C: lfs     f0, 20564(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24699Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20564);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2469A0:
    ctx->pc = 0x7F2469A0u;
    // 7F2469A0: stfs     f0, 116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2469A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2469A4:
    ctx->pc = 0x7F2469A4u;
    // 7F2469A4: lwz     r4, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2469A8:
    ctx->pc = 0x7F2469A8u;
    // 7F2469A8: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2469AC:
    ctx->pc = 0x7F2469ACu;
    // 7F2469AC: stw     r0, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2469B0:
    ctx->pc = 0x7F2469B0u;
    // 7F2469B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2469B4:
    ctx->pc = 0x7F2469B4u;
    ctx->downcount -= 5;
    // 7F2469B4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2469B8:
    ctx->pc = 0x7F2469B8u;
    // 7F2469B8: lfs     f1, 116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2469B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2469BC:
    ctx->pc = 0x7F2469BCu;
    // 7F2469BC: lfs     f0, 20592(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2469BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20592);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2469C0:
    ctx->pc = 0x7F2469C0u;
    // 7F2469C0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2469C0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2469C4:
    ctx->pc = 0x7F2469C4u;
    // 7F2469C4: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2469C8:
    ctx->pc = 0x7F2469C8u;
    ctx->downcount -= 5;
    // 7F2469C8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2469CC:
    ctx->pc = 0x7F2469CCu;
    // 7F2469CC: lfs     f0, 20596(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2469CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20596);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2469D0:
    ctx->pc = 0x7F2469D0u;
    // 7F2469D0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2469D0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2469D4:
    ctx->pc = 0x7F2469D4u;
    // 7F2469D4: stfs     f0, 116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2469D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2469D8:
    ctx->pc = 0x7F2469D8u;
    // 7F2469D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2469DC:
    ctx->pc = 0x7F2469DCu;
    ctx->downcount -= 10;
    // 7F2469DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2469E0:
    ctx->pc = 0x7F2469E0u;
    // 7F2469E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2469E4:
    ctx->pc = 0x7F2469E4u;
    // 7F2469E4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2469E8:
    ctx->pc = 0x7F2469E8u;
    // 7F2469E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2469EC:
    ctx->pc = 0x7F2469ECu;
    // 7F2469EC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2469F0:
    ctx->pc = 0x7F2469F0u;
    // 7F2469F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2469F4:
    ctx->pc = 0x7F2469F4u;
    // 7F2469F4: addi    r3, r4, 19256
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(19256);

label_7F2469F8:
    ctx->pc = 0x7F2469F8u;
    // 7F2469F8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2469FC:
    ctx->pc = 0x7F2469FCu;
    // 7F2469FC: rlwinm. r0, r3, 0, 21, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000400u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F246A00:
    ctx->pc = 0x7F246A00u;
    // 7F246A00: bc    4, 2, 0x7F246A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246A1C;
        }
    }

label_7F246A04:
    ctx->pc = 0x7F246A04u;
    ctx->downcount -= 2;
    // 7F246A04: rlwinm. r0, r3, 0, 16, 16
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

label_7F246A08:
    ctx->pc = 0x7F246A08u;
    // 7F246A08: bc    4, 2, 0x7F246A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246A1C;
        }
    }

label_7F246A0C:
    ctx->pc = 0x7F246A0Cu;
    ctx->downcount -= 2;
    // 7F246A0C: lis     r3, 30720
    ctx->gpr[3] = ((u32)(s32)(30720) << 16);

label_7F246A10:
    ctx->pc = 0x7F246A10u;
    // 7F246A10: bl      0x7F012050
    {
            ctx->lr = 0x7F246A14u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F246A14:
    ctx->pc = 0x7F246A14u;
    ctx->downcount -= 2;
    // 7F246A14: cmpwi   r3, 0
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

label_7F246A18:
    ctx->pc = 0x7F246A18u;
    // 7F246A18: bc    12, 2, 0x7F246A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246A40;
        }
    }

label_7F246A1C:
    ctx->pc = 0x7F246A1Cu;
    ctx->downcount -= 4;
    // 7F246A1C: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F246A20:
    ctx->pc = 0x7F246A20u;
    // 7F246A20: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246A24:
    ctx->pc = 0x7F246A24u;
    // 7F246A24: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F246A28:
    ctx->pc = 0x7F246A28u;
    // 7F246A28: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F246A2Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F246A2C:
    ctx->pc = 0x7F246A2Cu;
    ctx->downcount -= 2;
    // 7F246A2C: cmplwi  r3, 0x0000
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

label_7F246A30:
    ctx->pc = 0x7F246A30u;
    // 7F246A30: bc    12, 2, 0x7F246A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246A50;
        }
    }

label_7F246A34:
    ctx->pc = 0x7F246A34u;
    ctx->downcount -= 3;
    // 7F246A34: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246A38:
    ctx->pc = 0x7F246A38u;
    // 7F246A38: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F246A3C:
    ctx->pc = 0x7F246A3Cu;
    // 7F246A3C: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246A40:
    ctx->pc = 0x7F246A40u;
    ctx->downcount -= 5;
    // 7F246A40: lwz     r12, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F246A44:
    ctx->pc = 0x7F246A44u;
    // 7F246A44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F246A48:
    ctx->pc = 0x7F246A48u;
    // 7F246A48: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F246A4C:
    ctx->pc = 0x7F246A4Cu;
    // 7F246A4C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F246A50u;
            ctx->pc = target;
            return;
        }
    }

label_7F246A50:
    ctx->pc = 0x7F246A50u;
    ctx->downcount -= 6;
    // 7F246A50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246A54:
    ctx->pc = 0x7F246A54u;
    // 7F246A54: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F246A58:
    ctx->pc = 0x7F246A58u;
    // 7F246A58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246A5C:
    ctx->pc = 0x7F246A5Cu;
    // 7F246A5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F246A60:
    ctx->pc = 0x7F246A60u;
    // 7F246A60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246A64:
    ctx->pc = 0x7F246A64u;
    ctx->downcount -= 17;
    // 7F246A64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246A68:
    ctx->pc = 0x7F246A68u;
    // 7F246A68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246A6C:
    ctx->pc = 0x7F246A6Cu;
    // 7F246A6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246A70:
    ctx->pc = 0x7F246A70u;
    // 7F246A70: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F246A74:
    ctx->pc = 0x7F246A74u;
    // 7F246A74: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246A78:
    ctx->pc = 0x7F246A78u;
    // 7F246A78: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246A7C:
    ctx->pc = 0x7F246A7Cu;
    // 7F246A7C: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F246A80u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F246A80:
    ctx->pc = 0x7F246A80u;
    ctx->downcount -= 3;
    // 7F246A80: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246A84:
    ctx->pc = 0x7F246A84u;
    // 7F246A84: cmpwi   r31, -3
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

label_7F246A88:
    ctx->pc = 0x7F246A88u;
    // 7F246A88: bc    12, 2, 0x7F246B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246B84;
        }
    }

label_7F246A8C:
    ctx->pc = 0x7F246A8Cu;
    ctx->downcount -= 3;
    // 7F246A8C: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246A90:
    ctx->pc = 0x7F246A90u;
    // 7F246A90: rlwinm. r0, r0, 0, 30, 30
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

label_7F246A94:
    ctx->pc = 0x7F246A94u;
    // 7F246A94: bc    12, 2, 0x7F246B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246B84;
        }
    }

label_7F246A98:
    ctx->pc = 0x7F246A98u;
    ctx->downcount -= 5;
    // 7F246A98: lis     r3, 85
    ctx->gpr[3] = ((u32)(s32)(85) << 16);

label_7F246A9C:
    ctx->pc = 0x7F246A9Cu;
    // 7F246A9C: lwz     r5, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F246AA0:
    ctx->pc = 0x7F246AA0u;
    // 7F246AA0: addi    r0, r3, -24328
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24328);

label_7F246AA4:
    ctx->pc = 0x7F246AA4u;
    // 7F246AA4: cmpw    r5, r0
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

label_7F246AA8:
    ctx->pc = 0x7F246AA8u;
    // 7F246AA8: bc    12, 2, 0x7F246B6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246B6C;
        }
    }

label_7F246AAC:
    ctx->pc = 0x7F246AACu;
    ctx->downcount -= 1;
    // 7F246AAC: bc    4, 0, 0x7F246AD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246AD8;
        }
    }

label_7F246AB0:
    ctx->pc = 0x7F246AB0u;
    ctx->downcount -= 4;
    // 7F246AB0: lis     r3, 22
    ctx->gpr[3] = ((u32)(s32)(22) << 16);

label_7F246AB4:
    ctx->pc = 0x7F246AB4u;
    // 7F246AB4: addi    r4, r3, -15775
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15775);

label_7F246AB8:
    ctx->pc = 0x7F246AB8u;
    // 7F246AB8: cmpw    r5, r4
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

label_7F246ABC:
    ctx->pc = 0x7F246ABCu;
    // 7F246ABC: bc    12, 2, 0x7F246B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246B14;
        }
    }

label_7F246AC0:
    ctx->pc = 0x7F246AC0u;
    ctx->downcount -= 1;
    // 7F246AC0: bc    4, 0, 0x7F246B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246B84;
        }
    }

label_7F246AC4:
    ctx->pc = 0x7F246AC4u;
    ctx->downcount -= 4;
    // 7F246AC4: lis     r3, 9
    ctx->gpr[3] = ((u32)(s32)(9) << 16);

label_7F246AC8:
    ctx->pc = 0x7F246AC8u;
    // 7F246AC8: addi    r0, r3, -23557
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-23557);

label_7F246ACC:
    ctx->pc = 0x7F246ACCu;
    // 7F246ACC: cmpw    r5, r0
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

label_7F246AD0:
    ctx->pc = 0x7F246AD0u;
    // 7F246AD0: bc    12, 2, 0x7F246AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246AEC;
        }
    }

label_7F246AD4:
    ctx->pc = 0x7F246AD4u;
    ctx->downcount -= 1;
    // 7F246AD4: b       0x7F246B84
    {
            goto label_7F246B84;
    }

label_7F246AD8:
    ctx->pc = 0x7F246AD8u;
    ctx->downcount -= 4;
    // 7F246AD8: lis     r3, 93
    ctx->gpr[3] = ((u32)(s32)(93) << 16);

label_7F246ADC:
    ctx->pc = 0x7F246ADCu;
    // 7F246ADC: addi    r0, r3, 9628
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(9628);

label_7F246AE0:
    ctx->pc = 0x7F246AE0u;
    // 7F246AE0: cmpw    r5, r0
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

label_7F246AE4:
    ctx->pc = 0x7F246AE4u;
    // 7F246AE4: bc    12, 2, 0x7F246B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246B44;
        }
    }

label_7F246AE8:
    ctx->pc = 0x7F246AE8u;
    ctx->downcount -= 1;
    // 7F246AE8: b       0x7F246B84
    {
            goto label_7F246B84;
    }

label_7F246AEC:
    ctx->pc = 0x7F246AECu;
    ctx->downcount -= 9;
    // 7F246AEC: stw     r4, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F246AF0:
    ctx->pc = 0x7F246AF0u;
    // 7F246AF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F246AF4:
    ctx->pc = 0x7F246AF4u;
    // 7F246AF4: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246AF8:
    ctx->pc = 0x7F246AF8u;
    // 7F246AF8: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F246AFC:
    ctx->pc = 0x7F246AFCu;
    // 7F246AFC: stw     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246B00:
    ctx->pc = 0x7F246B00u;
    // 7F246B00: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246B04:
    ctx->pc = 0x7F246B04u;
    // 7F246B04: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F246B08:
    ctx->pc = 0x7F246B08u;
    // 7F246B08: stw     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246B0C:
    ctx->pc = 0x7F246B0Cu;
    // 7F246B0C: bl      0x7F246360
    {
            ctx->lr = 0x7F246B10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246360u;
                return;
            }
            goto label_7F246360;
    }

label_7F246B10:
    ctx->pc = 0x7F246B10u;
    ctx->downcount -= 1;
    // 7F246B10: b       0x7F246B84
    {
            goto label_7F246B84;
    }

label_7F246B14:
    ctx->pc = 0x7F246B14u;
    ctx->downcount -= 12;
    // 7F246B14: lis     r4, 93
    ctx->gpr[4] = ((u32)(s32)(93) << 16);

label_7F246B18:
    ctx->pc = 0x7F246B18u;
    // 7F246B18: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F246B1C:
    ctx->pc = 0x7F246B1Cu;
    // 7F246B1C: addi    r0, r4, 9628
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(9628);

label_7F246B20:
    ctx->pc = 0x7F246B20u;
    // 7F246B20: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246B24:
    ctx->pc = 0x7F246B24u;
    // 7F246B24: addi    r0, r3, 26912
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26912);

label_7F246B28:
    ctx->pc = 0x7F246B28u;
    // 7F246B28: lwz     r3, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246B2C:
    ctx->pc = 0x7F246B2Cu;
    // 7F246B2C: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F246B30:
    ctx->pc = 0x7F246B30u;
    // 7F246B30: stw     r3, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F246B34:
    ctx->pc = 0x7F246B34u;
    // 7F246B34: lwz     r3, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246B38:
    ctx->pc = 0x7F246B38u;
    // 7F246B38: rlwinm r3, r3, 0, 31, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0xFFFFFFFDu;
    }

label_7F246B3C:
    ctx->pc = 0x7F246B3Cu;
    // 7F246B3C: stw     r3, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F246B40:
    ctx->pc = 0x7F246B40u;
    // 7F246B40: stw     r0, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246B44:
    ctx->pc = 0x7F246B44u;
    ctx->downcount -= 10;
    // 7F246B44: lis     r3, 93
    ctx->gpr[3] = ((u32)(s32)(93) << 16);

label_7F246B48:
    ctx->pc = 0x7F246B48u;
    // 7F246B48: addi    r0, r3, 9628
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(9628);

label_7F246B4C:
    ctx->pc = 0x7F246B4Cu;
    // 7F246B4C: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246B50:
    ctx->pc = 0x7F246B50u;
    // 7F246B50: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246B54:
    ctx->pc = 0x7F246B54u;
    // 7F246B54: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F246B58:
    ctx->pc = 0x7F246B58u;
    // 7F246B58: stw     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246B5C:
    ctx->pc = 0x7F246B5Cu;
    // 7F246B5C: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246B60:
    ctx->pc = 0x7F246B60u;
    // 7F246B60: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_7F246B64:
    ctx->pc = 0x7F246B64u;
    // 7F246B64: stw     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246B68:
    ctx->pc = 0x7F246B68u;
    // 7F246B68: b       0x7F246B84
    {
            goto label_7F246B84;
    }

label_7F246B6C:
    ctx->pc = 0x7F246B6Cu;
    ctx->downcount -= 4;
    // 7F246B6C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F246B70:
    ctx->pc = 0x7F246B70u;
    // 7F246B70: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F246B74:
    ctx->pc = 0x7F246B74u;
    // 7F246B74: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F246B78:
    ctx->pc = 0x7F246B78u;
    // 7F246B78: bl      0x7F3C8058
    {
            ctx->lr = 0x7F246B7Cu;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F246B7C:
    ctx->pc = 0x7F246B7Cu;
    ctx->downcount -= 2;
    // 7F246B7C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F246B80:
    ctx->pc = 0x7F246B80u;
    // 7F246B80: bl      0x7F3C8210
    {
            ctx->lr = 0x7F246B84u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F246B84:
    ctx->pc = 0x7F246B84u;
    ctx->downcount -= 2;
    // 7F246B84: cmpwi   r31, -3
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

label_7F246B88:
    ctx->pc = 0x7F246B88u;
    // 7F246B88: bc    12, 2, 0x7F246BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246BC4;
        }
    }

label_7F246B8C:
    ctx->pc = 0x7F246B8Cu;
    ctx->downcount -= 3;
    // 7F246B8C: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246B90:
    ctx->pc = 0x7F246B90u;
    // 7F246B90: rlwinm. r0, r0, 0, 31, 31
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

label_7F246B94:
    ctx->pc = 0x7F246B94u;
    // 7F246B94: bc    12, 2, 0x7F246BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246BC4;
        }
    }

label_7F246B98:
    ctx->pc = 0x7F246B98u;
    ctx->downcount -= 2;
    // 7F246B98: cmpwi   r31, 0
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

label_7F246B9C:
    ctx->pc = 0x7F246B9Cu;
    // 7F246B9C: bc    4, 2, 0x7F246BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246BC4;
        }
    }

label_7F246BA0:
    ctx->pc = 0x7F246BA0u;
    ctx->downcount -= 3;
    // 7F246BA0: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246BA4:
    ctx->pc = 0x7F246BA4u;
    // 7F246BA4: lwz     r4, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F246BA8:
    ctx->pc = 0x7F246BA8u;
    // 7F246BA8: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F246BACu;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F246BAC:
    ctx->pc = 0x7F246BACu;
    ctx->downcount -= 6;
    // 7F246BAC: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246BB0:
    ctx->pc = 0x7F246BB0u;
    // 7F246BB0: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F246BB4:
    ctx->pc = 0x7F246BB4u;
    // 7F246BB4: stw     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246BB8:
    ctx->pc = 0x7F246BB8u;
    // 7F246BB8: lwz     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246BBC:
    ctx->pc = 0x7F246BBCu;
    // 7F246BBC: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F246BC0:
    ctx->pc = 0x7F246BC0u;
    // 7F246BC0: stw     r0, 104(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246BC4:
    ctx->pc = 0x7F246BC4u;
    ctx->downcount -= 17;
    // 7F246BC4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F246BC8:
    ctx->pc = 0x7F246BC8u;
    // 7F246BC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246BCC:
    ctx->pc = 0x7F246BCCu;
    // 7F246BCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246BD0:
    ctx->pc = 0x7F246BD0u;
    // 7F246BD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246BD4:
    ctx->pc = 0x7F246BD4u;
    // 7F246BD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F246BD8:
    ctx->pc = 0x7F246BD8u;
    // 7F246BD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246BDC:
    ctx->pc = 0x7F246BDCu;
    ctx->downcount -= 6;
    // 7F246BDC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246BE0:
    ctx->pc = 0x7F246BE0u;
    // 7F246BE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246BE4:
    ctx->pc = 0x7F246BE4u;
    // 7F246BE4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246BE8:
    ctx->pc = 0x7F246BE8u;
    // 7F246BE8: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246BEC:
    ctx->pc = 0x7F246BECu;
    // 7F246BEC: cmpwi   r3, 0
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

label_7F246BF0:
    ctx->pc = 0x7F246BF0u;
    // 7F246BF0: bc    12, 0, 0x7F246BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F246BF8;
        }
    }

label_7F246BF4:
    ctx->pc = 0x7F246BF4u;
    ctx->downcount -= 1;
    // 7F246BF4: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F246BF8u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F246BF8:
    ctx->pc = 0x7F246BF8u;
    ctx->downcount -= 5;
    // 7F246BF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246BFC:
    ctx->pc = 0x7F246BFCu;
    // 7F246BFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246C00:
    ctx->pc = 0x7F246C00u;
    // 7F246C00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F246C04:
    ctx->pc = 0x7F246C04u;
    // 7F246C04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246C08:
    ctx->pc = 0x7F246C08u;
    ctx->downcount -= 8;
    // 7F246C08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246C0C:
    ctx->pc = 0x7F246C0Cu;
    // 7F246C0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246C10:
    ctx->pc = 0x7F246C10u;
    // 7F246C10: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F246C14:
    ctx->pc = 0x7F246C14u;
    // 7F246C14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246C18:
    ctx->pc = 0x7F246C18u;
    // 7F246C18: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F246C1C:
    ctx->pc = 0x7F246C1Cu;
    // 7F246C1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246C20:
    ctx->pc = 0x7F246C20u;
    // 7F246C20: addi    r3, r4, 11432
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(11432);

label_7F246C24:
    ctx->pc = 0x7F246C24u;
    // 7F246C24: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F246C28u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F246C28:
    ctx->pc = 0x7F246C28u;
    ctx->downcount -= 5;
    // 7F246C28: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F246C2C:
    ctx->pc = 0x7F246C2Cu;
    // 7F246C2C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F246C30:
    ctx->pc = 0x7F246C30u;
    // 7F246C30: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F246C34:
    ctx->pc = 0x7F246C34u;
    // 7F246C34: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F246C38:
    ctx->pc = 0x7F246C38u;
    // 7F246C38: bl      0x7F2E4A7C
    {
            ctx->lr = 0x7F246C3Cu;
            ctx->pc = 0x7F2E4A7Cu;
            return;
    }

label_7F246C3C:
    ctx->pc = 0x7F246C3Cu;
    ctx->downcount -= 4;
    // 7F246C3C: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F246C40:
    ctx->pc = 0x7F246C40u;
    // 7F246C40: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246C44:
    ctx->pc = 0x7F246C44u;
    // 7F246C44: cmpwi   r0, 0
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

label_7F246C48:
    ctx->pc = 0x7F246C48u;
    // 7F246C48: bc    4, 0, 0x7F246C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246C54;
        }
    }

label_7F246C4C:
    ctx->pc = 0x7F246C4Cu;
    ctx->downcount -= 2;
    // 7F246C4C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F246C50:
    ctx->pc = 0x7F246C50u;
    // 7F246C50: b       0x7F246C90
    {
            goto label_7F246C90;
    }

label_7F246C54:
    ctx->pc = 0x7F246C54u;
    ctx->downcount -= 14;
    // 7F246C54: lis     r3, 9
    ctx->gpr[3] = ((u32)(s32)(9) << 16);

label_7F246C58:
    ctx->pc = 0x7F246C58u;
    // 7F246C58: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F246C5C:
    ctx->pc = 0x7F246C5Cu;
    // 7F246C5C: addi    r0, r3, -23557
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-23557);

label_7F246C60:
    ctx->pc = 0x7F246C60u;
    // 7F246C60: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246C64:
    ctx->pc = 0x7F246C64u;
    // 7F246C64: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F246C68:
    ctx->pc = 0x7F246C68u;
    // 7F246C68: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F246C6C:
    ctx->pc = 0x7F246C6Cu;
    // 7F246C6C: addi    r5, r5, 27236
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27236);

label_7F246C70:
    ctx->pc = 0x7F246C70u;
    // 7F246C70: stw     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246C74:
    ctx->pc = 0x7F246C74u;
    // 7F246C74: addi    r4, r3, 25280
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(25280);

label_7F246C78:
    ctx->pc = 0x7F246C78u;
    // 7F246C78: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F246C7C:
    ctx->pc = 0x7F246C7Cu;
    // 7F246C7C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F246C80:
    ctx->pc = 0x7F246C80u;
    // 7F246C80: stw     r5, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F246C84:
    ctx->pc = 0x7F246C84u;
    // 7F246C84: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246C88:
    ctx->pc = 0x7F246C88u;
    // 7F246C88: bl      0x7F3C8990
    {
            ctx->lr = 0x7F246C8Cu;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F246C8C:
    ctx->pc = 0x7F246C8Cu;
    ctx->downcount -= 1;
    // 7F246C8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246C90:
    ctx->pc = 0x7F246C90u;
    ctx->downcount -= 6;
    // 7F246C90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246C94:
    ctx->pc = 0x7F246C94u;
    // 7F246C94: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F246C98:
    ctx->pc = 0x7F246C98u;
    // 7F246C98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246C9C:
    ctx->pc = 0x7F246C9Cu;
    // 7F246C9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F246CA0:
    ctx->pc = 0x7F246CA0u;
    // 7F246CA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246CA4:
    ctx->pc = 0x7F246CA4u;
    ctx->downcount -= 20;
    // 7F246CA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246CA8:
    ctx->pc = 0x7F246CA8u;
    // 7F246CA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246CAC:
    ctx->pc = 0x7F246CACu;
    // 7F246CAC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F246CB0:
    ctx->pc = 0x7F246CB0u;
    // 7F246CB0: li      r5, 124
    ctx->gpr[5] = (u32)(s32)(124);

label_7F246CB4:
    ctx->pc = 0x7F246CB4u;
    // 7F246CB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246CB8:
    ctx->pc = 0x7F246CB8u;
    // 7F246CB8: li      r6, 200
    ctx->gpr[6] = (u32)(s32)(200);

label_7F246CBC:
    ctx->pc = 0x7F246CBCu;
    // 7F246CBC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F246CC0:
    ctx->pc = 0x7F246CC0u;
    // 7F246CC0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246CC4:
    ctx->pc = 0x7F246CC4u;
    // 7F246CC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F246CC8:
    ctx->pc = 0x7F246CC8u;
    // 7F246CC8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F246CCCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F246CCC:
    ctx->pc = 0x7F246CCCu;
    ctx->downcount -= 2;
    // 7F246CCC: or.   r31, r3, r3
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

label_7F246CD0:
    ctx->pc = 0x7F246CD0u;
    // 7F246CD0: bc    4, 2, 0x7F246CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246CDC;
        }
    }

label_7F246CD4:
    ctx->pc = 0x7F246CD4u;
    ctx->downcount -= 2;
    // 7F246CD4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246CD8:
    ctx->pc = 0x7F246CD8u;
    // 7F246CD8: b       0x7F246D40
    {
            goto label_7F246D40;
    }

label_7F246CDC:
    ctx->pc = 0x7F246CDCu;
    ctx->downcount -= 5;
    // 7F246CDC: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F246CE0:
    ctx->pc = 0x7F246CE0u;
    // 7F246CE0: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F246CE4:
    ctx->pc = 0x7F246CE4u;
    // 7F246CE4: addi    r4, r4, 27100
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27100);

label_7F246CE8:
    ctx->pc = 0x7F246CE8u;
    // 7F246CE8: addi    r5, r5, 27612
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27612);

label_7F246CEC:
    ctx->pc = 0x7F246CECu;
    // 7F246CEC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F246CF0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F246CF0:
    ctx->pc = 0x7F246CF0u;
    ctx->downcount -= 13;
    // 7F246CF0: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246CF4:
    ctx->pc = 0x7F246CF4u;
    // 7F246CF4: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F246CF8:
    ctx->pc = 0x7F246CF8u;
    // 7F246CF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F246CFC:
    ctx->pc = 0x7F246CFCu;
    // 7F246CFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F246D00:
    ctx->pc = 0x7F246D00u;
    // 7F246D00: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F246D04:
    ctx->pc = 0x7F246D04u;
    // 7F246D04: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F246D08:
    ctx->pc = 0x7F246D08u;
    // 7F246D08: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F246D0C:
    ctx->pc = 0x7F246D0Cu;
    // 7F246D0C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F246D10:
    ctx->pc = 0x7F246D10u;
    // 7F246D10: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F246D14:
    ctx->pc = 0x7F246D14u;
    // 7F246D14: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F246D18:
    ctx->pc = 0x7F246D18u;
    // 7F246D18: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246D1C:
    ctx->pc = 0x7F246D1Cu;
    // 7F246D1C: stw     r30, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F246D20:
    ctx->pc = 0x7F246D20u;
    // 7F246D20: bl      0x7F246C08
    {
            ctx->lr = 0x7F246D24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246C08u;
                return;
            }
            goto label_7F246C08;
    }

label_7F246D24:
    ctx->pc = 0x7F246D24u;
    ctx->downcount -= 2;
    // 7F246D24: cmpwi   r3, 0
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

label_7F246D28:
    ctx->pc = 0x7F246D28u;
    // 7F246D28: bc    4, 0, 0x7F246D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246D3C;
        }
    }

label_7F246D2C:
    ctx->pc = 0x7F246D2Cu;
    ctx->downcount -= 2;
    // 7F246D2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F246D30:
    ctx->pc = 0x7F246D30u;
    // 7F246D30: bl      0x7F3C8210
    {
            ctx->lr = 0x7F246D34u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F246D34:
    ctx->pc = 0x7F246D34u;
    ctx->downcount -= 2;
    // 7F246D34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246D38:
    ctx->pc = 0x7F246D38u;
    // 7F246D38: b       0x7F246D40
    {
            goto label_7F246D40;
    }

label_7F246D3C:
    ctx->pc = 0x7F246D3Cu;
    ctx->downcount -= 1;
    // 7F246D3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F246D40:
    ctx->pc = 0x7F246D40u;
    ctx->downcount -= 16;
    // 7F246D40: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F246D44:
    ctx->pc = 0x7F246D44u;
    // 7F246D44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246D48:
    ctx->pc = 0x7F246D48u;
    // 7F246D48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246D4C:
    ctx->pc = 0x7F246D4Cu;
    // 7F246D4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F246D50:
    ctx->pc = 0x7F246D50u;
    // 7F246D50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246D54:
    ctx->pc = 0x7F246D54u;
    ctx->downcount -= 8;
    // 7F246D54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246D58:
    ctx->pc = 0x7F246D58u;
    // 7F246D58: lfs     f0, 92(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246D58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246D5C:
    ctx->pc = 0x7F246D5Cu;
    // 7F246D5C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246D5Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F246D60:
    ctx->pc = 0x7F246D60u;
    // 7F246D60: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246D60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F246D64:
    ctx->pc = 0x7F246D64u;
    // 7F246D64: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246D68:
    ctx->pc = 0x7F246D68u;
    // 7F246D68: stb     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F246D6C:
    ctx->pc = 0x7F246D6Cu;
    // 7F246D6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F246D70:
    ctx->pc = 0x7F246D70u;
    // 7F246D70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246D74:
    ctx->pc = 0x7F246D74u;
    ctx->downcount -= 8;
    // 7F246D74: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246D78:
    ctx->pc = 0x7F246D78u;
    // 7F246D78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246D7C:
    ctx->pc = 0x7F246D7Cu;
    // 7F246D7C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246D80:
    ctx->pc = 0x7F246D80u;
    // 7F246D80: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F246D84:
    ctx->pc = 0x7F246D84u;
    // 7F246D84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246D88:
    ctx->pc = 0x7F246D88u;
    // 7F246D88: lwz     r0, 124(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246D8C:
    ctx->pc = 0x7F246D8Cu;
    // 7F246D8C: cmpwi   r0, 0
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

label_7F246D90:
    ctx->pc = 0x7F246D90u;
    // 7F246D90: bc    4, 2, 0x7F246DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246DCC;
        }
    }

label_7F246D94:
    ctx->pc = 0x7F246D94u;
    ctx->downcount -= 11;
    // 7F246D94: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246D98:
    ctx->pc = 0x7F246D98u;
    // 7F246D98: lwz     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246D9C:
    ctx->pc = 0x7F246D9Cu;
    // 7F246D9C: lwz     r5, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F246DA0:
    ctx->pc = 0x7F246DA0u;
    // 7F246DA0: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F246DA4:
    ctx->pc = 0x7F246DA4u;
    // 7F246DA4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F246DA8:
    ctx->pc = 0x7F246DA8u;
    // 7F246DA8: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246DAC:
    ctx->pc = 0x7F246DACu;
    // 7F246DAC: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F246DB0:
    ctx->pc = 0x7F246DB0u;
    // 7F246DB0: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F246DB4:
    ctx->pc = 0x7F246DB4u;
    // 7F246DB4: bl      0x7F114E64
    {
            ctx->lr = 0x7F246DB8u;
            ctx->pc = 0x7F114E64u;
            return;
    }

label_7F246DB8:
    ctx->pc = 0x7F246DB8u;
    ctx->downcount -= 5;
    // 7F246DB8: lwz     r3, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246DBC:
    ctx->pc = 0x7F246DBCu;
    // 7F246DBC: lwz     r0, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246DC0:
    ctx->pc = 0x7F246DC0u;
    // 7F246DC0: stw     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246DC4:
    ctx->pc = 0x7F246DC4u;
    // 7F246DC4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246DC8:
    ctx->pc = 0x7F246DC8u;
    // 7F246DC8: stw     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246DCC:
    ctx->pc = 0x7F246DCCu;
    ctx->downcount -= 16;
    // 7F246DCC: lwz     r8, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F246DD0:
    ctx->pc = 0x7F246DD0u;
    // 7F246DD0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F246DD4:
    ctx->pc = 0x7F246DD4u;
    // 7F246DD4: lwz     r7, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F246DD8:
    ctx->pc = 0x7F246DD8u;
    // 7F246DD8: lwz     r3, 180(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246DDC:
    ctx->pc = 0x7F246DDCu;
    // 7F246DDC: lwz     r6, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F246DE0:
    ctx->pc = 0x7F246DE0u;
    // 7F246DE0: rlwinm r3, r3, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F246DE4:
    ctx->pc = 0x7F246DE4u;
    // 7F246DE4: lwz     r5, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F246DE8:
    ctx->pc = 0x7F246DE8u;
    // 7F246DE8: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F246DEC:
    ctx->pc = 0x7F246DECu;
    // 7F246DEC: add   r3, r8, r3
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F246DF0:
    ctx->pc = 0x7F246DF0u;
    // 7F246DF0: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F246DF4:
    ctx->pc = 0x7F246DF4u;
    // 7F246DF4: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246DF8:
    ctx->pc = 0x7F246DF8u;
    // 7F246DF8: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F246DFC:
    ctx->pc = 0x7F246DFCu;
    // 7F246DFC: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F246E00:
    ctx->pc = 0x7F246E00u;
    // 7F246E00: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F246E04:
    ctx->pc = 0x7F246E04u;
    // 7F246E04: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F246E08:
    loop_7F246E08(ctx);
    if (ctx->pc == 0x7F246E20u) goto label_7F246E20;
    return;
label_7F246E0C:
    ctx->pc = 0x7F246E0Cu;
    // 7F246E0C: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F246E10:
    ctx->pc = 0x7F246E10u;
    // 7F246E10: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F246E14:
    ctx->pc = 0x7F246E14u;
    // 7F246E14: stw     r4, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F246E18:
    // 7F246E18: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F246E1C:
    // 7F246E1C: bc    16, 0, 0x7F246E08
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246E08u;
                return;
            }
            goto label_7F246E08;
        }
    }

label_7F246E20:
    ctx->pc = 0x7F246E20u;
    ctx->downcount -= 7;
    // 7F246E20: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246E24:
    ctx->pc = 0x7F246E24u;
    // 7F246E24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F246E28:
    ctx->pc = 0x7F246E28u;
    // 7F246E28: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F246E2C:
    ctx->pc = 0x7F246E2Cu;
    // 7F246E2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F246E30:
    ctx->pc = 0x7F246E30u;
    // 7F246E30: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F246E34:
    ctx->pc = 0x7F246E34u;
    // 7F246E34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F246E38:
    ctx->pc = 0x7F246E38u;
    ctx->downcount -= 27;
    // 7F246E38: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F246E3C:
    ctx->pc = 0x7F246E3Cu;
    // 7F246E3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F246E40:
    ctx->pc = 0x7F246E40u;
    // 7F246E40: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246E44:
    ctx->pc = 0x7F246E44u;
    // 7F246E44: stfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246E44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F246E48:
    ctx->pc = 0x7F246E48u;
    // 7F246E48: psq_st   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246E48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F246E48u);
        if (ctx->exception) return;
    }

label_7F246E4C:
    ctx->pc = 0x7F246E4Cu;
    // 7F246E4C: stfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246E4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F246E50:
    ctx->pc = 0x7F246E50u;
    // 7F246E50: psq_st   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F246E50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F246E50u);
        if (ctx->exception) return;
    }

label_7F246E54:
    ctx->pc = 0x7F246E54u;
    // 7F246E54: stmw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F246E58:
    ctx->pc = 0x7F246E58u;
    // 7F246E58: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F246E5C:
    ctx->pc = 0x7F246E5Cu;
    // 7F246E5C: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F246E60:
    ctx->pc = 0x7F246E60u;
    // 7F246E60: lwz     r3, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246E64:
    ctx->pc = 0x7F246E64u;
    // 7F246E64: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246E68:
    ctx->pc = 0x7F246E68u;
    // 7F246E68: cmpwi   r3, 40
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

label_7F246E6C:
    ctx->pc = 0x7F246E6Cu;
    // 7F246E6C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F246E70:
    ctx->pc = 0x7F246E70u;
    // 7F246E70: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F246E74:
    ctx->pc = 0x7F246E74u;
    // 7F246E74: lwz     r31, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F246E78:
    ctx->pc = 0x7F246E78u;
    // 7F246E78: bc    4, 0, 0x7F246F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246F7C;
        }
    }

label_7F246E7C:
    ctx->pc = 0x7F246E7Cu;
    ctx->downcount -= 9;
    // 7F246E7C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F246E80:
    ctx->pc = 0x7F246E80u;
    // 7F246E80: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F246E84:
    ctx->pc = 0x7F246E84u;
    // 7F246E84: stw     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246E88:
    ctx->pc = 0x7F246E88u;
    // 7F246E88: addi    r4, r3, 11448
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(11448);

label_7F246E8C:
    ctx->pc = 0x7F246E8Cu;
    // 7F246E8C: lwz     r3, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246E90:
    ctx->pc = 0x7F246E90u;
    // 7F246E90: lfs     f31, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246E90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F246E94:
    ctx->pc = 0x7F246E94u;
    // 7F246E94: cmpwi   r3, 0
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

label_7F246E98:
    ctx->pc = 0x7F246E98u;
    // 7F246E98: lfs     f30, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246E98u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F246E9C:
    ctx->pc = 0x7F246E9Cu;
    // 7F246E9C: bc    4, 2, 0x7F246F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246F70;
        }
    }

label_7F246EA0:
    ctx->pc = 0x7F246EA0u;
    ctx->downcount -= 10;
    // 7F246EA0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246EA4:
    ctx->pc = 0x7F246EA4u;
    // 7F246EA4: lfs     f1, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246EA4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246EA8:
    ctx->pc = 0x7F246EA8u;
    // 7F246EA8: lfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246EA8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246EAC:
    ctx->pc = 0x7F246EACu;
    // 7F246EAC: lfs     f2, 20616(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246EACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246EB0:
    ctx->pc = 0x7F246EB0u;
    // 7F246EB0: fmadds f0, f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246EB0u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[2], ctx->fpr[1], ctx->fpr[0], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F246EB4:
    ctx->pc = 0x7F246EB4u;
    // 7F246EB4: stfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246EB4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F246EB8:
    ctx->pc = 0x7F246EB8u;
    // 7F246EB8: lfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246EB8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246EBC:
    ctx->pc = 0x7F246EBCu;
    // 7F246EBC: fcmpo   cr0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F246EBCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[30], true);

label_7F246EC0:
    ctx->pc = 0x7F246EC0u;
    // 7F246EC0: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F246EC4:
    ctx->pc = 0x7F246EC4u;
    // 7F246EC4: bc    4, 2, 0x7F246EF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246EF4;
        }
    }

label_7F246EC8:
    ctx->pc = 0x7F246EC8u;
    ctx->downcount -= 6;
    // 7F246EC8: stfs     f30, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246EC8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[30]));
    }

label_7F246ECC:
    ctx->pc = 0x7F246ECCu;
    // 7F246ECC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246ED0:
    ctx->pc = 0x7F246ED0u;
    // 7F246ED0: lfs     f1, 20620(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246ED0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246ED4:
    ctx->pc = 0x7F246ED4u;
    // 7F246ED4: lfs     f0, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246ED4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246ED8:
    ctx->pc = 0x7F246ED8u;
    // 7F246ED8: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246ED8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F246EDC:
    ctx->pc = 0x7F246EDCu;
    // 7F246EDC: bc    4, 2, 0x7F246EF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246EF4;
        }
    }

label_7F246EE0:
    ctx->pc = 0x7F246EE0u;
    ctx->downcount -= 5;
    // 7F246EE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246EE4:
    ctx->pc = 0x7F246EE4u;
    // 7F246EE4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F246EE8:
    ctx->pc = 0x7F246EE8u;
    // 7F246EE8: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246EEC:
    ctx->pc = 0x7F246EECu;
    // 7F246EEC: lfs     f0, 20624(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246EECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246EF0:
    ctx->pc = 0x7F246EF0u;
    // 7F246EF0: stfs     f0, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246EF0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F246EF4:
    ctx->pc = 0x7F246EF4u;
    ctx->downcount -= 4;
    // 7F246EF4: lfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246EF4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246EF8:
    ctx->pc = 0x7F246EF8u;
    // 7F246EF8: fcmpo   cr0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F246EF8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[31], true);

label_7F246EFC:
    ctx->pc = 0x7F246EFCu;
    // 7F246EFC: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F246F00:
    ctx->pc = 0x7F246F00u;
    // 7F246F00: bc    4, 2, 0x7F246F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246F40;
        }
    }

label_7F246F04:
    ctx->pc = 0x7F246F04u;
    ctx->downcount -= 6;
    // 7F246F04: stfs     f31, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246F04u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F246F08:
    ctx->pc = 0x7F246F08u;
    // 7F246F08: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246F0C:
    ctx->pc = 0x7F246F0Cu;
    // 7F246F0C: lfs     f1, 20624(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246F0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246F10:
    ctx->pc = 0x7F246F10u;
    // 7F246F10: lfs     f0, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246F10u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246F14:
    ctx->pc = 0x7F246F14u;
    // 7F246F14: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246F14u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F246F18:
    ctx->pc = 0x7F246F18u;
    // 7F246F18: bc    4, 2, 0x7F246F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F246F40;
        }
    }

label_7F246F1C:
    ctx->pc = 0x7F246F1Cu;
    ctx->downcount -= 1;
    // 7F246F1C: bl      0x7F247130
    {
            ctx->lr = 0x7F246F20u;
            goto label_7F247130;
    }

label_7F246F20:
    ctx->pc = 0x7F246F20u;
    ctx->downcount -= 51;
    // 7F246F20: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F246F24:
    ctx->pc = 0x7F246F24u;
    // 7F246F24: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246F28:
    ctx->pc = 0x7F246F28u;
    // 7F246F28: divwu   r0, r3, r5
    {
        u32 divisor = ctx->gpr[5];
        ctx->gpr[0] = divisor == 0 ? 0u : ctx->gpr[3] / divisor;
    }

label_7F246F2C:
    ctx->pc = 0x7F246F2Cu;
    // 7F246F2C: lfs     f0, 20620(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246F2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246F30:
    ctx->pc = 0x7F246F30u;
    // 7F246F30: mullw   r0, r0, r5
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[5];
        ctx->gpr[0] = (u32)product;
    }

label_7F246F34:
    ctx->pc = 0x7F246F34u;
    // 7F246F34: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F246F38:
    ctx->pc = 0x7F246F38u;
    // 7F246F38: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246F3C:
    ctx->pc = 0x7F246F3Cu;
    // 7F246F3C: stfs     f0, 104(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246F3Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F246F40:
    ctx->pc = 0x7F246F40u;
    ctx->downcount -= 28;
    // 7F246F40: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F246F44:
    ctx->pc = 0x7F246F44u;
    // 7F246F44: lfs     f1, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246F44u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246F48:
    ctx->pc = 0x7F246F48u;
    // 7F246F48: addi    r3, r3, 11448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11448);

label_7F246F4C:
    ctx->pc = 0x7F246F4Cu;
    // 7F246F4C: fsubs   f0, f30, f31
    if (!ppc_fp_available_inline(ctx, 0x7F246F4Cu)) return;
    ppc_fsubs(ctx, 0, 30, 31);

label_7F246F50:
    ctx->pc = 0x7F246F50u;
    // 7F246F50: lfs     f2, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246F50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246F54:
    ctx->pc = 0x7F246F54u;
    // 7F246F54: fsubs   f1, f1, f31
    if (!ppc_fp_available_inline(ctx, 0x7F246F54u)) return;
    ppc_fsubs(ctx, 1, 1, 31);

label_7F246F58:
    ctx->pc = 0x7F246F58u;
    // 7F246F58: fsubs   f2, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F246F58u)) return;
    ppc_fsubs(ctx, 2, 2, 31);

label_7F246F5C:
    ctx->pc = 0x7F246F5Cu;
    // 7F246F5C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F246F5Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F246F60:
    ctx->pc = 0x7F246F60u;
    // 7F246F60: fdivs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246F60u)) return;
    ppc_fdivs(ctx, 0, 1, 0);

label_7F246F64:
    ctx->pc = 0x7F246F64u;
    // 7F246F64: fadds   f0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x7F246F64u)) return;
    ppc_fadds(ctx, 0, 31, 0);

label_7F246F68:
    ctx->pc = 0x7F246F68u;
    // 7F246F68: stfs     f0, 88(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F246F68u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F246F6C:
    ctx->pc = 0x7F246F6Cu;
    // 7F246F6C: b       0x7F2470E0
    {
            goto label_7F2470E0;
    }

label_7F246F70:
    ctx->pc = 0x7F246F70u;
    ctx->downcount -= 3;
    // 7F246F70: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F246F74:
    ctx->pc = 0x7F246F74u;
    // 7F246F74: stw     r0, 100(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246F78:
    ctx->pc = 0x7F246F78u;
    // 7F246F78: b       0x7F2470E0
    {
            goto label_7F2470E0;
    }

label_7F246F7C:
    ctx->pc = 0x7F246F7Cu;
    ctx->downcount -= 31;
    // 7F246F7C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F246F80:
    ctx->pc = 0x7F246F80u;
    // 7F246F80: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F246F84:
    ctx->pc = 0x7F246F84u;
    // 7F246F84: addi    r8, r3, 11448
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(11448);

label_7F246F88:
    ctx->pc = 0x7F246F88u;
    // 7F246F88: lis     r6, 32548
    ctx->gpr[6] = ((u32)(s32)(32548) << 16);

label_7F246F8C:
    ctx->pc = 0x7F246F8Cu;
    // 7F246F8C: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F246F90:
    ctx->pc = 0x7F246F90u;
    // 7F246F90: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F246F94:
    ctx->pc = 0x7F246F94u;
    // 7F246F94: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246F98:
    ctx->pc = 0x7F246F98u;
    // 7F246F98: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F246F9C:
    ctx->pc = 0x7F246F9Cu;
    // 7F246F9C: lfs     f2, 20628(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F246F9Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20628);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F246FA0:
    ctx->pc = 0x7F246FA0u;
    // 7F246FA0: addi    r6, r6, 29012
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(29012);

label_7F246FA4:
    ctx->pc = 0x7F246FA4u;
    // 7F246FA4: stw     r7, 80(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F246FA8:
    ctx->pc = 0x7F246FA8u;
    // 7F246FA8: li      r5, 376
    ctx->gpr[5] = (u32)(s32)(376);

label_7F246FAC:
    ctx->pc = 0x7F246FACu;
    // 7F246FAC: lfs     f1, 20632(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F246FACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20632);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F246FB0:
    ctx->pc = 0x7F246FB0u;
    // 7F246FB0: stw     r0, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F246FB4:
    ctx->pc = 0x7F246FB4u;
    // 7F246FB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F246FB8:
    ctx->pc = 0x7F246FB8u;
    // 7F246FB8: lfs     f0, 20636(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F246FB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20636);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F246FBC:
    ctx->pc = 0x7F246FBCu;
    // 7F246FBC: lwz     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F246FC0:
    ctx->pc = 0x7F246FC0u;
    // 7F246FC0: lwz     r4, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F246FC4:
    ctx->pc = 0x7F246FC4u;
    // 7F246FC4: stw     r7, 88(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F246FC8:
    ctx->pc = 0x7F246FC8u;
    // 7F246FC8: stw     r4, 92(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F246FCC:
    ctx->pc = 0x7F246FCCu;
    // 7F246FCC: stw     r6, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F246FD0:
    ctx->pc = 0x7F246FD0u;
    // 7F246FD0: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F246FD4:
    ctx->pc = 0x7F246FD4u;
    // 7F246FD4: sth     r5, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F246FD8:
    ctx->pc = 0x7F246FD8u;
    // 7F246FD8: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F246FDC:
    ctx->pc = 0x7F246FDCu;
    // 7F246FDC: stfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246FDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F246FE0:
    ctx->pc = 0x7F246FE0u;
    // 7F246FE0: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246FE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F246FE4:
    ctx->pc = 0x7F246FE4u;
    // 7F246FE4: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246FE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F246FE8:
    ctx->pc = 0x7F246FE8u;
    // 7F246FE8: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F246FE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F246FEC:
    ctx->pc = 0x7F246FECu;
    // 7F246FEC: lwz     r0, 124(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F246FF0:
    ctx->pc = 0x7F246FF0u;
    // 7F246FF0: cmpwi   r0, 0
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

label_7F246FF4:
    ctx->pc = 0x7F246FF4u;
    // 7F246FF4: bc    4, 2, 0x7F24704C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24704C;
        }
    }

label_7F246FF8:
    ctx->pc = 0x7F246FF8u;
    ctx->downcount -= 3;
    // 7F246FF8: lwz     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F246FFC:
    ctx->pc = 0x7F246FFCu;
    // 7F246FFC: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F247000:
    ctx->pc = 0x7F247000u;
    // 7F247000: bl      0x7F114EE0
    {
            ctx->lr = 0x7F247004u;
            ctx->pc = 0x7F114EE0u;
            return;
    }

label_7F247004:
    ctx->pc = 0x7F247004u;
    ctx->downcount -= 4;
    // 7F247004: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F247008:
    ctx->pc = 0x7F247008u;
    // 7F247008: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F24700C:
    ctx->pc = 0x7F24700Cu;
    // 7F24700C: addi    r5, r30, 52
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(52);

label_7F247010:
    ctx->pc = 0x7F247010u;
    // 7F247010: bl      0x7F275DD0
    {
            ctx->lr = 0x7F247014u;
            ctx->pc = 0x7F275DD0u;
            return;
    }

label_7F247014:
    ctx->pc = 0x7F247014u;
    ctx->downcount -= 14;
    // 7F247014: lwz     r4, 120(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(120);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247018:
    ctx->pc = 0x7F247018u;
    // 7F247018: lha     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24701C:
    ctx->pc = 0x7F24701Cu;
    // 7F24701C: lha     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F247020:
    ctx->pc = 0x7F247020u;
    // 7F247020: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F247024:
    ctx->pc = 0x7F247024u;
    // 7F247024: sth     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F247028:
    ctx->pc = 0x7F247028u;
    // 7F247028: lha     r3, 34(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24702C:
    ctx->pc = 0x7F24702Cu;
    // 7F24702C: lha     r0, 70(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F247030:
    ctx->pc = 0x7F247030u;
    // 7F247030: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F247034:
    ctx->pc = 0x7F247034u;
    // 7F247034: sth     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F247038:
    ctx->pc = 0x7F247038u;
    // 7F247038: lha     r3, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F24703C:
    ctx->pc = 0x7F24703Cu;
    // 7F24703C: lha     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F247040:
    ctx->pc = 0x7F247040u;
    // 7F247040: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F247044:
    ctx->pc = 0x7F247044u;
    // 7F247044: sth     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F247048:
    ctx->pc = 0x7F247048u;
    // 7F247048: b       0x7F24707C
    {
            goto label_7F24707C;
    }

label_7F24704C:
    ctx->pc = 0x7F24704Cu;
    ctx->downcount -= 12;
    // 7F24704C: lwz     r3, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247050:
    ctx->pc = 0x7F247050u;
    // 7F247050: lwz     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247054:
    ctx->pc = 0x7F247054u;
    // 7F247054: stw     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247058:
    ctx->pc = 0x7F247058u;
    // 7F247058: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24705C:
    ctx->pc = 0x7F24705Cu;
    // 7F24705C: lwz     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247060:
    ctx->pc = 0x7F247060u;
    // 7F247060: lwz     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247064:
    ctx->pc = 0x7F247064u;
    // 7F247064: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247068:
    ctx->pc = 0x7F247068u;
    // 7F247068: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24706C:
    ctx->pc = 0x7F24706Cu;
    // 7F24706C: lwz     r3, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247070:
    ctx->pc = 0x7F247070u;
    // 7F247070: lwz     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247074:
    ctx->pc = 0x7F247074u;
    // 7F247074: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247078:
    ctx->pc = 0x7F247078u;
    // 7F247078: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24707C:
    ctx->pc = 0x7F24707Cu;
    ctx->downcount -= 15;
    // 7F24707C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F247080:
    ctx->pc = 0x7F247080u;
    // 7F247080: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F247084:
    ctx->pc = 0x7F247084u;
    // 7F247084: addi    r5, r3, 20640
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20640);

label_7F247088:
    ctx->pc = 0x7F247088u;
    // 7F247088: lfs     f3, 20600(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F247088u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F24708C:
    ctx->pc = 0x7F24708Cu;
    // 7F24708C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F24708Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F247090:
    ctx->pc = 0x7F247090u;
    // 7F247090: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F247094:
    ctx->pc = 0x7F247094u;
    // 7F247094: lfs     f4, 20644(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F247094u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20644);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F247098:
    ctx->pc = 0x7F247098u;
    // 7F247098: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F24709C:
    ctx->pc = 0x7F24709Cu;
    // 7F24709C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24709Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F2470A0:
    ctx->pc = 0x7F2470A0u;
    // 7F2470A0: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2470A4:
    ctx->pc = 0x7F2470A4u;
    // 7F2470A4: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2470A8:
    ctx->pc = 0x7F2470A8u;
    // 7F2470A8: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2470AC:
    ctx->pc = 0x7F2470ACu;
    // 7F2470AC: li      r3, 24
    ctx->gpr[3] = (u32)(s32)(24);

label_7F2470B0:
    ctx->pc = 0x7F2470B0u;
    // 7F2470B0: li      r8, 20
    ctx->gpr[8] = (u32)(s32)(20);

label_7F2470B4:
    ctx->pc = 0x7F2470B4u;
    // 7F2470B4: bl      0x7F1D49C8
    {
            ctx->lr = 0x7F2470B8u;
            ctx->pc = 0x7F1D49C8u;
            return;
    }

label_7F2470B8:
    ctx->pc = 0x7F2470B8u;
    ctx->downcount -= 10;
    // 7F2470B8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2470BC:
    ctx->pc = 0x7F2470BCu;
    // 7F2470BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2470C0:
    ctx->pc = 0x7F2470C0u;
    // 7F2470C0: addi    r5, r4, 20648
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20648);

label_7F2470C4:
    ctx->pc = 0x7F2470C4u;
    // 7F2470C4: lfs     f2, 20652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2470C4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2470C8:
    ctx->pc = 0x7F2470C8u;
    // 7F2470C8: lis     r4, 40
    ctx->gpr[4] = ((u32)(s32)(40) << 16);

label_7F2470CC:
    ctx->pc = 0x7F2470CCu;
    // 7F2470CC: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2470CCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2470D0:
    ctx->pc = 0x7F2470D0u;
    // 7F2470D0: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2470D4:
    ctx->pc = 0x7F2470D4u;
    // 7F2470D4: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F2470D8:
    ctx->pc = 0x7F2470D8u;
    // 7F2470D8: addi    r4, r4, 10320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10320);

label_7F2470DC:
    ctx->pc = 0x7F2470DCu;
    // 7F2470DC: bl      0x7F3BACD0
    {
            ctx->lr = 0x7F2470E0u;
            ctx->pc = 0x7F3BACD0u;
            return;
    }

label_7F2470E0:
    ctx->pc = 0x7F2470E0u;
    ctx->downcount -= 1;
    // 7F2470E0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2470E4:
    ctx->downcount -= 3;
    // 7F2470E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2470E8:
    // 7F2470E8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2470EC:
    // 7F2470EC: bl      0x7F246D54
    {
            ctx->lr = 0x7F2470F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246D54u;
                return;
            }
            goto label_7F246D54;
    }

label_7F2470F0:
    ctx->downcount -= 4;
    // 7F2470F0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F2470F4:
    // 7F2470F4: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F2470F8:
    // 7F2470F8: cmpwi   r29, 3
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

label_7F2470FC:
    // 7F2470FC: bc    12, 0, 0x7F2470E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2470E4u;
                return;
            }
            goto label_7F2470E4;
        }
    }

label_7F247100:
    ctx->pc = 0x7F247100u;
    ctx->downcount -= 2;
    // 7F247100: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F247104:
    ctx->pc = 0x7F247104u;
    // 7F247104: bl      0x7F246D74
    {
            ctx->lr = 0x7F247108u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246D74u;
                return;
            }
            goto label_7F246D74;
    }

label_7F247108:
    ctx->pc = 0x7F247108u;
    ctx->downcount -= 21;
    // 7F247108: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F24710C:
    ctx->pc = 0x7F24710Cu;
    // 7F24710C: psq_l   f31, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F24710Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F24710Cu);
        if (ctx->exception) return;
    }

label_7F247110:
    ctx->pc = 0x7F247110u;
    // 7F247110: lfd     f31, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F247114:
    ctx->pc = 0x7F247114u;
    // 7F247114: psq_l   f30, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F247114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F247114u);
        if (ctx->exception) return;
    }

label_7F247118:
    ctx->pc = 0x7F247118u;
    // 7F247118: lfd     f30, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247118u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F24711C:
    ctx->pc = 0x7F24711Cu;
    // 7F24711C: lmw     r29, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F247120:
    ctx->pc = 0x7F247120u;
    // 7F247120: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247124:
    ctx->pc = 0x7F247124u;
    // 7F247124: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247128:
    ctx->pc = 0x7F247128u;
    // 7F247128: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_7F24712C:
    ctx->pc = 0x7F24712Cu;
    // 7F24712C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247130:
    ctx->pc = 0x7F247130u;
    ctx->downcount -= 13;
    // 7F247130: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F247134:
    ctx->pc = 0x7F247134u;
    // 7F247134: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F247138:
    ctx->pc = 0x7F247138u;
    // 7F247138: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F24713C:
    ctx->pc = 0x7F24713Cu;
    // 7F24713C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247140:
    ctx->pc = 0x7F247140u;
    // 7F247140: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F247144:
    ctx->pc = 0x7F247144u;
    // 7F247144: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F247148:
    ctx->pc = 0x7F247148u;
    // 7F247148: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F24714C:
    ctx->pc = 0x7F24714Cu;
    // 7F24714C: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247150:
    ctx->pc = 0x7F247150u;
    // 7F247150: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247154:
    ctx->pc = 0x7F247154u;
    ctx->downcount -= 34;
    // 7F247154: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247158:
    ctx->pc = 0x7F247158u;
    // 7F247158: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24715C:
    ctx->pc = 0x7F24715Cu;
    // 7F24715C: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F247160:
    ctx->pc = 0x7F247160u;
    // 7F247160: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247164:
    ctx->pc = 0x7F247164u;
    // 7F247164: addi    r5, r5, 11448
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11448);

label_7F247168:
    ctx->pc = 0x7F247168u;
    // 7F247168: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24716C:
    ctx->pc = 0x7F24716Cu;
    // 7F24716C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247170:
    ctx->pc = 0x7F247170u;
    // 7F247170: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F247174:
    ctx->pc = 0x7F247174u;
    // 7F247174: addi    r4, r3, 20656
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20656);

label_7F247178:
    ctx->pc = 0x7F247178u;
    // 7F247178: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24717C:
    ctx->pc = 0x7F24717Cu;
    // 7F24717C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F24717Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F247180:
    ctx->pc = 0x7F247180u;
    // 7F247180: lfs     f3, 20600(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F247180u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F247184:
    ctx->pc = 0x7F247184u;
    // 7F247184: lwz     r6, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F247188:
    ctx->pc = 0x7F247188u;
    // 7F247188: lfs     f1, 84(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F247188u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F24718C:
    ctx->pc = 0x7F24718Cu;
    // 7F24718C: lwz     r0, 180(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247190:
    ctx->pc = 0x7F247190u;
    // 7F247190: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F247190u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F247194:
    ctx->pc = 0x7F247194u;
    // 7F247194: lfs     f2, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F247194u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F247198:
    ctx->pc = 0x7F247198u;
    // 7F247198: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F24719C:
    ctx->pc = 0x7F24719Cu;
    // 7F24719C: add   r4, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2471A0:
    ctx->pc = 0x7F2471A0u;
    // 7F2471A0: lwz     r31, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2471A4:
    ctx->pc = 0x7F2471A4u;
    // 7F2471A4: stfs     f0, 84(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2471A4u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2471A8:
    ctx->pc = 0x7F2471A8u;
    // 7F2471A8: lfs     f0, 84(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2471A8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2471AC:
    ctx->pc = 0x7F2471ACu;
    // 7F2471AC: fcmpo   cr0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2471ACu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[3], true);

label_7F2471B0:
    ctx->pc = 0x7F2471B0u;
    // 7F2471B0: bc    4, 1, 0x7F2471F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2471F8;
        }
    }

label_7F2471B4:
    ctx->pc = 0x7F2471B4u;
    ctx->downcount -= 49;
    // 7F2471B4: lfs     f1, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2471B4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2471B8:
    ctx->pc = 0x7F2471B8u;
    // 7F2471B8: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2471B8u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F2471BC:
    ctx->pc = 0x7F2471BCu;
    // 7F2471BC: fsubs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2471BCu)) return;
    ppc_fsubs(ctx, 2, 2, 3);

label_7F2471C0:
    ctx->pc = 0x7F2471C0u;
    // 7F2471C0: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2471C0u)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2471C4:
    ctx->pc = 0x7F2471C4u;
    // 7F2471C4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2471C4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F2471C8:
    ctx->pc = 0x7F2471C8u;
    // 7F2471C8: fdivs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2471C8u)) return;
    ppc_fdivs(ctx, 0, 0, 2);

label_7F2471CC:
    ctx->pc = 0x7F2471CCu;
    // 7F2471CC: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2471CCu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F2471D0:
    ctx->pc = 0x7F2471D0u;
    // 7F2471D0: stfs     f0, 88(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2471D0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2471D4:
    ctx->pc = 0x7F2471D4u;
    // 7F2471D4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2471D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2471D8:
    ctx->pc = 0x7F2471D8u;
    // 7F2471D8: lfs     f0, 84(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2471D8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2471DC:
    ctx->pc = 0x7F2471DCu;
    // 7F2471DC: fsubs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2471DCu)) return;
    ppc_fsubs(ctx, 1, 1, 3);

label_7F2471E0:
    ctx->pc = 0x7F2471E0u;
    // 7F2471E0: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F2471E0u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F2471E4:
    ctx->pc = 0x7F2471E4u;
    // 7F2471E4: fmuls   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2471E4u)) return;
    ppc_fmuls(ctx, 0, 1, 0);

label_7F2471E8:
    ctx->pc = 0x7F2471E8u;
    // 7F2471E8: fdivs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2471E8u)) return;
    ppc_fdivs(ctx, 0, 0, 2);

label_7F2471EC:
    ctx->pc = 0x7F2471ECu;
    // 7F2471EC: fadds   f0, f3, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2471ECu)) return;
    ppc_fadds(ctx, 0, 3, 0);

label_7F2471F0:
    ctx->pc = 0x7F2471F0u;
    // 7F2471F0: stfs     f0, 80(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2471F0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2471F4:
    ctx->pc = 0x7F2471F4u;
    // 7F2471F4: b       0x7F247210
    {
            goto label_7F247210;
    }

label_7F2471F8:
    ctx->pc = 0x7F2471F8u;
    ctx->downcount -= 6;
    // 7F2471F8: stfs     f3, 80(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2471F8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F2471FC:
    ctx->pc = 0x7F2471FCu;
    // 7F2471FC: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F247200:
    ctx->pc = 0x7F247200u;
    // 7F247200: addi    r0, r3, 29264
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29264);

label_7F247204:
    ctx->pc = 0x7F247204u;
    // 7F247204: stfs     f3, 84(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F247204u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F247208:
    ctx->pc = 0x7F247208u;
    // 7F247208: stfs     f3, 88(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F247208u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F24720C:
    ctx->pc = 0x7F24720Cu;
    // 7F24720C: stw     r0, 140(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247210:
    ctx->pc = 0x7F247210u;
    ctx->downcount -= 1;
    // 7F247210: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F247214:
    ctx->downcount -= 3;
    // 7F247214: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247218:
    // 7F247218: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F24721C:
    // 7F24721C: bl      0x7F246D54
    {
            ctx->lr = 0x7F247220u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246D54u;
                return;
            }
            goto label_7F246D54;
    }

label_7F247220:
    ctx->downcount -= 4;
    // 7F247220: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F247224:
    // 7F247224: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F247228:
    // 7F247228: cmpwi   r30, 3
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

label_7F24722C:
    // 7F24722C: bc    12, 0, 0x7F247214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247214u;
                return;
            }
            goto label_7F247214;
        }
    }

label_7F247230:
    ctx->pc = 0x7F247230u;
    ctx->downcount -= 2;
    // 7F247230: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F247234:
    ctx->pc = 0x7F247234u;
    // 7F247234: bl      0x7F246D74
    {
            ctx->lr = 0x7F247238u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246D74u;
                return;
            }
            goto label_7F246D74;
    }

label_7F247238:
    ctx->pc = 0x7F247238u;
    ctx->downcount -= 17;
    // 7F247238: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F24723C:
    ctx->pc = 0x7F24723Cu;
    // 7F24723C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247240:
    ctx->pc = 0x7F247240u;
    // 7F247240: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247244:
    ctx->pc = 0x7F247244u;
    // 7F247244: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247248:
    ctx->pc = 0x7F247248u;
    // 7F247248: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F24724C:
    ctx->pc = 0x7F24724Cu;
    // 7F24724C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247250:
    ctx->pc = 0x7F247250u;
    ctx->downcount -= 4;
    // 7F247250: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247254:
    ctx->pc = 0x7F247254u;
    // 7F247254: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247258:
    ctx->pc = 0x7F247258u;
    // 7F247258: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24725C:
    ctx->pc = 0x7F24725Cu;
    // 7F24725C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F247260u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F247260:
    ctx->pc = 0x7F247260u;
    ctx->downcount -= 6;
    // 7F247260: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247264:
    ctx->pc = 0x7F247264u;
    // 7F247264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247268:
    ctx->pc = 0x7F247268u;
    // 7F247268: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24726C:
    ctx->pc = 0x7F24726Cu;
    // 7F24726C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F247270:
    ctx->pc = 0x7F247270u;
    // 7F247270: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247274:
    ctx->pc = 0x7F247274u;
    ctx->downcount -= 5;
    // 7F247274: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247278:
    ctx->pc = 0x7F247278u;
    // 7F247278: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24727C:
    ctx->pc = 0x7F24727Cu;
    // 7F24727C: cmpwi   r4, 4
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

label_7F247280:
    ctx->pc = 0x7F247280u;
    // 7F247280: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247284:
    ctx->pc = 0x7F247284u;
    // 7F247284: bc    12, 2, 0x7F2472BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2472BC;
        }
    }

label_7F247288:
    ctx->pc = 0x7F247288u;
    ctx->downcount -= 1;
    // 7F247288: bc    4, 0, 0x7F247298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247298;
        }
    }

label_7F24728C:
    ctx->pc = 0x7F24728Cu;
    ctx->downcount -= 2;
    // 7F24728C: cmpwi   r4, 2
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

label_7F247290:
    ctx->pc = 0x7F247290u;
    // 7F247290: bc    12, 2, 0x7F2472AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2472AC;
        }
    }

label_7F247294:
    ctx->pc = 0x7F247294u;
    ctx->downcount -= 1;
    // 7F247294: b       0x7F2472D4
    {
            goto label_7F2472D4;
    }

label_7F247298:
    ctx->pc = 0x7F247298u;
    ctx->downcount -= 4;
    // 7F247298: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F24729C:
    ctx->pc = 0x7F24729Cu;
    // 7F24729C: addi    r0, r5, -255
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-255);

label_7F2472A0:
    ctx->pc = 0x7F2472A0u;
    // 7F2472A0: cmpw    r4, r0
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

label_7F2472A4:
    ctx->pc = 0x7F2472A4u;
    // 7F2472A4: bc    12, 2, 0x7F2472BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2472BC;
        }
    }

label_7F2472A8:
    ctx->pc = 0x7F2472A8u;
    ctx->downcount -= 1;
    // 7F2472A8: b       0x7F2472D4
    {
            goto label_7F2472D4;
    }

label_7F2472AC:
    ctx->pc = 0x7F2472ACu;
    ctx->downcount -= 4;
    // 7F2472AC: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F2472B0:
    ctx->pc = 0x7F2472B0u;
    // 7F2472B0: addi    r0, r4, 28216
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(28216);

label_7F2472B4:
    ctx->pc = 0x7F2472B4u;
    // 7F2472B4: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2472B8:
    ctx->pc = 0x7F2472B8u;
    // 7F2472B8: b       0x7F2472D4
    {
            goto label_7F2472D4;
    }

label_7F2472BC:
    ctx->pc = 0x7F2472BCu;
    ctx->downcount -= 4;
    // 7F2472BC: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2472C0:
    ctx->pc = 0x7F2472C0u;
    // 7F2472C0: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F2472C4:
    ctx->pc = 0x7F2472C4u;
    // 7F2472C4: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2472C8:
    ctx->pc = 0x7F2472C8u;
    // 7F2472C8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2472CCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2472CC:
    ctx->pc = 0x7F2472CCu;
    ctx->downcount -= 2;
    // 7F2472CC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2472D0:
    ctx->pc = 0x7F2472D0u;
    // 7F2472D0: b       0x7F2472D8
    {
            goto label_7F2472D8;
    }

label_7F2472D4:
    ctx->pc = 0x7F2472D4u;
    ctx->downcount -= 1;
    // 7F2472D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2472D8:
    ctx->pc = 0x7F2472D8u;
    ctx->downcount -= 5;
    // 7F2472D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2472DC:
    ctx->pc = 0x7F2472DCu;
    // 7F2472DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2472E0:
    ctx->pc = 0x7F2472E0u;
    // 7F2472E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2472E4:
    ctx->pc = 0x7F2472E4u;
    // 7F2472E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2472E8:
    ctx->pc = 0x7F2472E8u;
    ctx->downcount -= 11;
    // 7F2472E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2472EC:
    ctx->pc = 0x7F2472ECu;
    // 7F2472EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2472F0:
    ctx->pc = 0x7F2472F0u;
    // 7F2472F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2472F4:
    ctx->pc = 0x7F2472F4u;
    // 7F2472F4: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2472F8:
    ctx->pc = 0x7F2472F8u;
    // 7F2472F8: lwz     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2472FC:
    ctx->pc = 0x7F2472FCu;
    // 7F2472FC: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F247300:
    ctx->pc = 0x7F247300u;
    // 7F247300: stw     r0, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247304:
    ctx->pc = 0x7F247304u;
    // 7F247304: lwz     r12, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F247308:
    ctx->pc = 0x7F247308u;
    // 7F247308: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F24730C:
    ctx->pc = 0x7F24730Cu;
    // 7F24730C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F247310u;
            ctx->pc = target;
            return;
        }
    }

label_7F247310:
    ctx->pc = 0x7F247310u;
    ctx->downcount -= 5;
    // 7F247310: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247314:
    ctx->pc = 0x7F247314u;
    // 7F247314: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247318:
    ctx->pc = 0x7F247318u;
    // 7F247318: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24731C:
    ctx->pc = 0x7F24731Cu;
    // 7F24731C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247320:
    ctx->pc = 0x7F247320u;
    ctx->downcount -= 25;
    // 7F247320: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247324:
    ctx->pc = 0x7F247324u;
    // 7F247324: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247328:
    ctx->pc = 0x7F247328u;
    // 7F247328: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24732C:
    ctx->pc = 0x7F24732Cu;
    // 7F24732C: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F247330:
    ctx->pc = 0x7F247330u;
    // 7F247330: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247334:
    ctx->pc = 0x7F247334u;
    // 7F247334: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F247338:
    ctx->pc = 0x7F247338u;
    // 7F247338: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F24733C:
    ctx->pc = 0x7F24733Cu;
    // 7F24733C: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247340:
    ctx->pc = 0x7F247340u;
    // 7F247340: lwz     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247344:
    ctx->pc = 0x7F247344u;
    // 7F247344: addi    r5, r3, 192
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(192);

label_7F247348:
    ctx->pc = 0x7F247348u;
    // 7F247348: subfic  r0, r4, 1
    {
        u64 res = (u64)(u32)(s32)(1) + (u64)(~ctx->gpr[4]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F24734C:
    ctx->pc = 0x7F24734Cu;
    // 7F24734C: rlwinm r3, r4, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F247350:
    ctx->pc = 0x7F247350u;
    // 7F247350: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F247354:
    ctx->pc = 0x7F247354u;
    // 7F247354: lwzx    r31, r5, r3
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[3];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F247358:
    ctx->pc = 0x7F247358u;
    // 7F247358: lwzx    r30, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F24735C:
    ctx->pc = 0x7F24735Cu;
    ctx->downcount -= 4;
    // 7F24735C: lwz     r4, 100(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247360:
    ctx->pc = 0x7F247360u;
    // 7F247360: lbz     r5, 3(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_7F247364:
    // 7F247364: cmpwi   r4, 0
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

label_7F247368:
    // 7F247368: bc    4, 2, 0x7F24740C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24740C;
        }
    }

label_7F24736C:
    ctx->downcount -= 5;
    // 7F24736C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F247370:
    ctx->pc = 0x7F247370u;
    // 7F247370: lfs     f1, 104(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F247370u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(104);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F247374:
    ctx->pc = 0x7F247374u;
    // 7F247374: lfs     f0, 20600(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F247374u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F247378:
    ctx->pc = 0x7F247378u;
    // 7F247378: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F247378u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F24737C:
    // 7F24737C: bc    4, 0, 0x7F2473B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2473B0;
        }
    }

label_7F247380:
    ctx->downcount -= 3;
    // 7F247380: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_7F247384:
    // 7F247384: cmpwi   r5, 8
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F247388:
    // 7F247388: bc    12, 1, 0x7F2473E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2473E4;
        }
    }

label_7F24738C:
    ctx->downcount -= 3;
    // 7F24738C: cmpwi   r29, 0
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

label_7F247390:
    // 7F247390: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F247394:
    // 7F247394: bc    4, 2, 0x7F2473E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2473E4;
        }
    }

label_7F247398:
    ctx->downcount -= 6;
    // 7F247398: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F24739C:
    // 7F24739C: li      r0, 40
    ctx->gpr[0] = (u32)(s32)(40);

label_7F2473A0:
    ctx->pc = 0x7F2473A0u;
    // 7F2473A0: stw     r0, 100(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2473A4:
    ctx->pc = 0x7F2473A4u;
    // 7F2473A4: lfs     f0, 20620(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2473A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2473A8:
    ctx->pc = 0x7F2473A8u;
    // 7F2473A8: stfs     f0, 104(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F2473A8u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2473AC:
    // 7F2473AC: b       0x7F2473E4
    {
            goto label_7F2473E4;
    }

label_7F2473B0:
    ctx->downcount -= 5;
    // 7F2473B0: addi    r0, r27, 108
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(108);

label_7F2473B4:
    // 7F2473B4: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2473B8:
    ctx->pc = 0x7F2473B8u;
    // 7F2473B8: lwzx    r0, r28, r0
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2473BC:
    // 7F2473BC: cmpw    r5, r0
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

label_7F2473C0:
    // 7F2473C0: bc    4, 1, 0x7F2473E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2473E4;
        }
    }

label_7F2473C4:
    ctx->downcount -= 3;
    // 7F2473C4: cmpwi   r29, 0
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

label_7F2473C8:
    // 7F2473C8: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2473CC:
    // 7F2473CC: bc    4, 2, 0x7F2473E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2473E4;
        }
    }

label_7F2473D0:
    ctx->downcount -= 5;
    // 7F2473D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2473D4:
    // 7F2473D4: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F2473D8:
    ctx->pc = 0x7F2473D8u;
    // 7F2473D8: stw     r0, 100(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2473DC:
    ctx->pc = 0x7F2473DCu;
    // 7F2473DC: lfs     f0, 20624(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2473DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2473E0:
    ctx->pc = 0x7F2473E0u;
    // 7F2473E0: stfs     f0, 104(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F2473E0u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2473E4:
    ctx->downcount -= 10;
    // 7F2473E4: rlwinm r4, r5, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000000FFu;
    }

label_7F2473E8:
    // 7F2473E8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2473EC:
    ctx->pc = 0x7F2473ECu;
    // 7F2473EC: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2473F0:
    // 7F2473F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2473F4:
    ctx->pc = 0x7F2473F4u;
    // 7F2473F4: lfd     f1, 20664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2473F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20664);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2473F8:
    ctx->pc = 0x7F2473F8u;
    // 7F2473F8: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2473FC:
    ctx->pc = 0x7F2473FCu;
    // 7F2473FC: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2473FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F247400:
    ctx->pc = 0x7F247400u;
    // 7F247400: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F247400u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F247404:
    ctx->pc = 0x7F247404u;
    // 7F247404: stfs     f0, 92(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F247404u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F247408:
    // 7F247408: b       0x7F247434
    {
            goto label_7F247434;
    }

label_7F24740C:
    ctx->downcount -= 10;
    // 7F24740C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F247410:
    // 7F247410: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F247414:
    ctx->pc = 0x7F247414u;
    // 7F247414: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F247418:
    // 7F247418: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F24741C:
    ctx->pc = 0x7F24741Cu;
    // 7F24741C: lfd     f1, 20664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F24741Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20664);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F247420:
    ctx->pc = 0x7F247420u;
    // 7F247420: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247424:
    ctx->pc = 0x7F247424u;
    // 7F247424: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247424u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F247428:
    ctx->pc = 0x7F247428u;
    // 7F247428: stw     r4, 100(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24742C:
    ctx->pc = 0x7F24742Cu;
    // 7F24742C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24742Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F247430:
    ctx->pc = 0x7F247430u;
    // 7F247430: stfs     f0, 92(r28)
    if (!ppc_fp_available_inline(ctx, 0x7F247430u)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F247434:
    ctx->downcount -= 3;
    // 7F247434: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247438:
    // 7F247438: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F24743C:
    // 7F24743C: bl      0x7F246D54
    {
            ctx->lr = 0x7F247440u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246D54u;
                return;
            }
            goto label_7F246D54;
    }

label_7F247440:
    ctx->downcount -= 6;
    // 7F247440: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F247444:
    // 7F247444: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F247448:
    // 7F247448: cmpwi   r29, 3
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

label_7F24744C:
    // 7F24744C: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F247450:
    // 7F247450: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_7F247454:
    // 7F247454: bc    12, 0, 0x7F24735C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24735Cu;
                return;
            }
            goto label_7F24735C;
        }
    }

label_7F247458:
    ctx->pc = 0x7F247458u;
    ctx->downcount -= 2;
    // 7F247458: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F24745C:
    ctx->pc = 0x7F24745Cu;
    // 7F24745C: bl      0x7F246D74
    {
            ctx->lr = 0x7F247460u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F246D74u;
                return;
            }
            goto label_7F246D74;
    }

label_7F247460:
    ctx->pc = 0x7F247460u;
    ctx->downcount -= 17;
    // 7F247460: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F247464:
    ctx->pc = 0x7F247464u;
    // 7F247464: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247468:
    ctx->pc = 0x7F247468u;
    // 7F247468: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24746C:
    ctx->pc = 0x7F24746Cu;
    // 7F24746C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247470:
    ctx->pc = 0x7F247470u;
    // 7F247470: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F247474:
    ctx->pc = 0x7F247474u;
    // 7F247474: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247478:
    ctx->pc = 0x7F247478u;
    ctx->downcount -= 6;
    // 7F247478: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F24747C:
    ctx->pc = 0x7F24747Cu;
    // 7F24747C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247480:
    ctx->pc = 0x7F247480u;
    // 7F247480: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247484:
    ctx->pc = 0x7F247484u;
    // 7F247484: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247488:
    ctx->pc = 0x7F247488u;
    // 7F247488: cmplwi  r3, 0x0000
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

label_7F24748C:
    ctx->pc = 0x7F24748Cu;
    // 7F24748C: bc    12, 2, 0x7F247494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F247494;
        }
    }

label_7F247490:
    ctx->pc = 0x7F247490u;
    ctx->downcount -= 1;
    // 7F247490: bl      0x7F3C2440
    {
            ctx->lr = 0x7F247494u;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F247494:
    ctx->pc = 0x7F247494u;
    ctx->downcount -= 5;
    // 7F247494: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247498:
    ctx->pc = 0x7F247498u;
    // 7F247498: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24749C:
    ctx->pc = 0x7F24749Cu;
    // 7F24749C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2474A0:
    ctx->pc = 0x7F2474A0u;
    // 7F2474A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2474A4:
    ctx->pc = 0x7F2474A4u;
    ctx->downcount -= 35;
    // 7F2474A4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2474A8:
    ctx->pc = 0x7F2474A8u;
    // 7F2474A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2474AC:
    ctx->pc = 0x7F2474ACu;
    // 7F2474AC: lis     r11, 32582
    ctx->gpr[11] = ((u32)(s32)(32582) << 16);

label_7F2474B0:
    ctx->pc = 0x7F2474B0u;
    // 7F2474B0: lis     r10, 32586
    ctx->gpr[10] = ((u32)(s32)(32586) << 16);

label_7F2474B4:
    ctx->pc = 0x7F2474B4u;
    // 7F2474B4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2474B8:
    ctx->pc = 0x7F2474B8u;
    // 7F2474B8: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2474BC:
    ctx->pc = 0x7F2474BCu;
    // 7F2474BC: addi    r29, r11, 20672
    ctx->gpr[29] = ctx->gpr[11] + (u32)(s32)(20672);

label_7F2474C0:
    ctx->pc = 0x7F2474C0u;
    // 7F2474C0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2474C4:
    ctx->pc = 0x7F2474C4u;
    // 7F2474C4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2474C8:
    ctx->pc = 0x7F2474C8u;
    // 7F2474C8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2474CC:
    ctx->pc = 0x7F2474CCu;
    // 7F2474CC: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2474D0:
    ctx->pc = 0x7F2474D0u;
    // 7F2474D0: or   r26, r8, r8
    {
        ctx->gpr[26] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F2474D4:
    ctx->pc = 0x7F2474D4u;
    // 7F2474D4: lwz     r12, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2474D8:
    ctx->pc = 0x7F2474D8u;
    // 7F2474D8: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2474DC:
    ctx->pc = 0x7F2474DCu;
    // 7F2474DC: lwz     r11, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2474E0:
    ctx->pc = 0x7F2474E0u;
    // 7F2474E0: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2474E4:
    ctx->pc = 0x7F2474E4u;
    // 7F2474E4: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2474E8:
    ctx->pc = 0x7F2474E8u;
    // 7F2474E8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2474EC:
    ctx->pc = 0x7F2474ECu;
    // 7F2474EC: or   r3, r9, r9
    {
        ctx->gpr[3] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F2474F0:
    ctx->pc = 0x7F2474F0u;
    // 7F2474F0: stw     r12, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2474F4:
    ctx->pc = 0x7F2474F4u;
    // 7F2474F4: stw     r11, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2474F8:
    ctx->pc = 0x7F2474F8u;
    // 7F2474F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2474FC:
    ctx->pc = 0x7F2474FCu;
    // 7F2474FC: stw     r9, 136(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F247500:
    ctx->pc = 0x7F247500u;
    // 7F247500: stw     r9, 18312(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F247504:
    ctx->pc = 0x7F247504u;
    // 7F247504: bl      0x7F247770
    {
            ctx->lr = 0x7F247508u;
            goto label_7F247770;
    }

label_7F247508:
    ctx->pc = 0x7F247508u;
    ctx->downcount -= 12;
    // 7F247508: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F24750C:
    ctx->pc = 0x7F24750Cu;
    // 7F24750C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F247510:
    ctx->pc = 0x7F247510u;
    // 7F247510: lfs     f0, 20620(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F247510u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F247514:
    ctx->pc = 0x7F247514u;
    // 7F247514: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F247518:
    ctx->pc = 0x7F247518u;
    // 7F247518: addi    r4, r3, 29300
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29300);

label_7F24751C:
    ctx->pc = 0x7F24751Cu;
    // 7F24751C: stfs     f0, 104(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F24751Cu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F247520:
    ctx->pc = 0x7F247520u;
    // 7F247520: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F247524:
    ctx->pc = 0x7F247524u;
    // 7F247524: stw     r0, 100(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247528:
    ctx->pc = 0x7F247528u;
    // 7F247528: stw     r0, 96(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24752C:
    ctx->pc = 0x7F24752Cu;
    // 7F24752C: stw     r31, 124(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F247530:
    ctx->pc = 0x7F247530u;
    // 7F247530: stw     r26, 128(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F247534:
    ctx->pc = 0x7F247534u;
    // 7F247534: bl      0x7F3C8990
    {
            ctx->lr = 0x7F247538u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F247538:
    ctx->pc = 0x7F247538u;
    ctx->downcount -= 3;
    // 7F247538: lis     r3, 62
    ctx->gpr[3] = ((u32)(s32)(62) << 16);

label_7F24753C:
    ctx->pc = 0x7F24753Cu;
    // 7F24753C: addi    r3, r3, -3807
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3807);

label_7F247540:
    ctx->pc = 0x7F247540u;
    // 7F247540: bl      0x7F3B6420
    {
            ctx->lr = 0x7F247544u;
            ctx->pc = 0x7F3B6420u;
            return;
    }

label_7F247544:
    ctx->pc = 0x7F247544u;
    ctx->downcount -= 7;
    // 7F247544: lis     r5, 14
    ctx->gpr[5] = ((u32)(s32)(14) << 16);

label_7F247548:
    ctx->pc = 0x7F247548u;
    // 7F247548: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F24754C:
    ctx->pc = 0x7F24754Cu;
    // 7F24754C: addi    r3, r5, 4
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4);

label_7F247550:
    ctx->pc = 0x7F247550u;
    // 7F247550: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F247554:
    ctx->pc = 0x7F247554u;
    // 7F247554: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F247558:
    ctx->pc = 0x7F247558u;
    // 7F247558: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F24755C:
    ctx->pc = 0x7F24755Cu;
    // 7F24755C: bl      0x7F3C2408
    {
            ctx->lr = 0x7F247560u;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F247560:
    ctx->pc = 0x7F247560u;
    ctx->downcount -= 3;
    // 7F247560: or.   r31, r3, r3
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

label_7F247564:
    ctx->pc = 0x7F247564u;
    // 7F247564: stw     r31, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F247568:
    ctx->pc = 0x7F247568u;
    // 7F247568: bc    4, 2, 0x7F247574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247574;
        }
    }

label_7F24756C:
    ctx->pc = 0x7F24756Cu;
    ctx->downcount -= 2;
    // 7F24756C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F247570:
    ctx->pc = 0x7F247570u;
    // 7F247570: b       0x7F24775C
    {
            goto label_7F24775C;
    }

label_7F247574:
    ctx->pc = 0x7F247574u;
    ctx->downcount -= 2;
    // 7F247574: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F247578:
    ctx->pc = 0x7F247578u;
    // 7F247578: bl      0x7F3C2534
    {
            ctx->lr = 0x7F24757Cu;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F24757C:
    ctx->pc = 0x7F24757Cu;
    ctx->downcount -= 13;
    // 7F24757C: li      r0, 72
    ctx->gpr[0] = (u32)(s32)(72);

label_7F247580:
    ctx->pc = 0x7F247580u;
    // 7F247580: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247584:
    ctx->pc = 0x7F247584u;
    // 7F247584: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247588:
    ctx->pc = 0x7F247588u;
    // 7F247588: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F24758C:
    ctx->pc = 0x7F24758Cu;
    // 7F24758C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F247590:
    ctx->pc = 0x7F247590u;
    // 7F247590: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F247594:
    ctx->pc = 0x7F247594u;
    // 7F247594: stw     r5, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F247598:
    ctx->pc = 0x7F247598u;
    // 7F247598: stw     r0, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24759C:
    ctx->pc = 0x7F24759Cu;
    // 7F24759C: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2475A0:
    ctx->pc = 0x7F2475A0u;
    // 7F2475A0: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2475A4:
    ctx->pc = 0x7F2475A4u;
    // 7F2475A4: stw     r5, 68(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2475A8:
    ctx->pc = 0x7F2475A8u;
    // 7F2475A8: stw     r0, 72(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2475AC:
    ctx->pc = 0x7F2475ACu;
    // 7F2475AC: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2475B0u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2475B0:
    ctx->pc = 0x7F2475B0u;
    ctx->downcount -= 4;
    // 7F2475B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2475B4:
    ctx->pc = 0x7F2475B4u;
    // 7F2475B4: addi    r4, r27, 52
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(52);

label_7F2475B8:
    ctx->pc = 0x7F2475B8u;
    // 7F2475B8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2475BC:
    ctx->pc = 0x7F2475BCu;
    // 7F2475BC: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F2475C0u;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F2475C0:
    ctx->pc = 0x7F2475C0u;
    ctx->downcount -= 44;
    // 7F2475C0: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F2475C4:
    ctx->pc = 0x7F2475C4u;
    // 7F2475C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2475C8:
    ctx->pc = 0x7F2475C8u;
    // 7F2475C8: addi    r4, r3, 20688
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20688);

label_7F2475CC:
    ctx->pc = 0x7F2475CCu;
    // 7F2475CC: stw     r28, 120(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2475D0:
    ctx->pc = 0x7F2475D0u;
    // 7F2475D0: addi    r0, r5, 29472
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(29472);

label_7F2475D4:
    ctx->pc = 0x7F2475D4u;
    // 7F2475D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2475D8:
    ctx->pc = 0x7F2475D8u;
    // 7F2475D8: addi    r5, r3, 20692
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(20692);

label_7F2475DC:
    ctx->pc = 0x7F2475DCu;
    // 7F2475DC: stw     r0, 140(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2475E0:
    ctx->pc = 0x7F2475E0u;
    // 7F2475E0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2475E0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2475E4:
    ctx->pc = 0x7F2475E4u;
    // 7F2475E4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2475E8:
    ctx->pc = 0x7F2475E8u;
    // 7F2475E8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2475E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2475EC:
    ctx->pc = 0x7F2475ECu;
    // 7F2475EC: addi    r4, r3, 20696
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(20696);

label_7F2475F0:
    ctx->pc = 0x7F2475F0u;
    // 7F2475F0: stfs     f1, 80(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2475F0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2475F4:
    ctx->pc = 0x7F2475F4u;
    // 7F2475F4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2475F8:
    ctx->pc = 0x7F2475F8u;
    // 7F2475F8: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2475F8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2475FC:
    ctx->pc = 0x7F2475FCu;
    // 7F2475FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F247600:
    ctx->pc = 0x7F247600u;
    // 7F247600: stfs     f0, 84(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F247600u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F247604:
    ctx->pc = 0x7F247604u;
    // 7F247604: addi    r6, r5, 20644
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(20644);

label_7F247608:
    ctx->pc = 0x7F247608u;
    // 7F247608: lfs     f0, 20700(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F247608u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20700);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F24760C:
    ctx->pc = 0x7F24760Cu;
    // 7F24760C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F247610:
    ctx->pc = 0x7F247610u;
    // 7F247610: stfs     f1, 88(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F247610u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F247614:
    ctx->pc = 0x7F247614u;
    // 7F247614: addi    r5, r4, 20608
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20608);

label_7F247618:
    ctx->pc = 0x7F247618u;
    // 7F247618: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F24761C:
    ctx->pc = 0x7F24761Cu;
    // 7F24761C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F247620:
    ctx->pc = 0x7F247620u;
    // 7F247620: stfs     f0, 92(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F247620u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F247624:
    ctx->pc = 0x7F247624u;
    // 7F247624: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_7F247628:
    ctx->pc = 0x7F247628u;
    // 7F247628: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F24762C:
    ctx->pc = 0x7F24762Cu;
    // 7F24762C: lwz     r10, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F247630:
    ctx->pc = 0x7F247630u;
    // 7F247630: stw     r0, 108(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247634:
    ctx->pc = 0x7F247634u;
    // 7F247634: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F247638:
    ctx->pc = 0x7F247638u;
    // 7F247638: li      r26, 100
    ctx->gpr[26] = (u32)(s32)(100);

label_7F24763C:
    ctx->pc = 0x7F24763Cu;
    // 7F24763C: lwz     r9, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F247640:
    ctx->pc = 0x7F247640u;
    // 7F247640: stw     r7, 112(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F247644:
    ctx->pc = 0x7F247644u;
    // 7F247644: lwz     r8, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F247648:
    ctx->pc = 0x7F247648u;
    // 7F247648: stw     r4, 116(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24764C:
    ctx->pc = 0x7F24764Cu;
    // 7F24764C: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F247650:
    ctx->pc = 0x7F247650u;
    // 7F247650: lwz     r7, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F247654:
    ctx->pc = 0x7F247654u;
    // 7F247654: lwz     r12, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F247658:
    ctx->pc = 0x7F247658u;
    // 7F247658: lwz     r11, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F24765C:
    ctx->pc = 0x7F24765Cu;
    // 7F24765C: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F24765Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F247660:
    ctx->pc = 0x7F247660u;
    // 7F247660: lfd     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F247660u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F247664:
    ctx->pc = 0x7F247664u;
    // 7F247664: lfs     f1, 20704(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F247664u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20704);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F247668:
    ctx->pc = 0x7F247668u;
    // 7F247668: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F24766C:
    ctx->pc = 0x7F24766Cu;
    ctx->downcount -= 47;
    // 7F24766C: stw     r10, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F247670:
    // 7F247670: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247674:
    // 7F247674: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F247678:
    // 7F247678: xoris   r0, r26, 0x8000
    ctx->gpr[0] = ctx->gpr[26] ^ (0x8000u << 16);

label_7F24767C:
    ctx->pc = 0x7F24767Cu;
    // 7F24767C: stw     r9, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F247680:
    ctx->pc = 0x7F247680u;
    // 7F247680: stw     r8, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F247684:
    ctx->pc = 0x7F247684u;
    // 7F247684: stw     r7, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F247688:
    // 7F247688: addi    r12, r12, 16
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(16);

label_7F24768C:
    ctx->pc = 0x7F24768Cu;
    // 7F24768C: sth     r5, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F247690:
    ctx->pc = 0x7F247690u;
    // 7F247690: sth     r3, 6(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F247694:
    ctx->pc = 0x7F247694u;
    // 7F247694: sth     r3, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F247698:
    ctx->pc = 0x7F247698u;
    // 7F247698: sth     r5, 14(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(14);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F24769C:
    ctx->pc = 0x7F24769Cu;
    // 7F24769C: sth     r26, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F2476A0:
    ctx->pc = 0x7F2476A0u;
    // 7F2476A0: sth     r26, 10(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_7F2476A4:
    ctx->pc = 0x7F2476A4u;
    // 7F2476A4: lfs     f0, 80(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2476A4u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2476A8:
    ctx->pc = 0x7F2476A8u;
    // 7F2476A8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2476A8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2476AC:
    ctx->pc = 0x7F2476ACu;
    // 7F2476AC: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2476ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2476B0:
    ctx->pc = 0x7F2476B0u;
    // 7F2476B0: lwz     r3, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2476B4:
    ctx->pc = 0x7F2476B4u;
    // 7F2476B4: stb     r3, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2476B8:
    ctx->pc = 0x7F2476B8u;
    // 7F2476B8: lfs     f0, 84(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2476B8u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2476BC:
    ctx->pc = 0x7F2476BCu;
    // 7F2476BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2476BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2476C0:
    ctx->pc = 0x7F2476C0u;
    // 7F2476C0: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2476C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2476C4:
    ctx->pc = 0x7F2476C4u;
    // 7F2476C4: lwz     r3, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2476C8:
    ctx->pc = 0x7F2476C8u;
    // 7F2476C8: stb     r3, 1(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2476CC:
    ctx->pc = 0x7F2476CCu;
    // 7F2476CC: lfs     f0, 88(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2476CCu)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2476D0:
    ctx->pc = 0x7F2476D0u;
    // 7F2476D0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2476D0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2476D4:
    ctx->pc = 0x7F2476D4u;
    // 7F2476D4: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2476D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2476D8:
    ctx->pc = 0x7F2476D8u;
    // 7F2476D8: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2476DC:
    ctx->pc = 0x7F2476DCu;
    // 7F2476DC: stb     r3, 2(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2476E0:
    ctx->pc = 0x7F2476E0u;
    // 7F2476E0: lfs     f0, 92(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F2476E0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2476E4:
    ctx->pc = 0x7F2476E4u;
    // 7F2476E4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2476E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2476E8:
    ctx->pc = 0x7F2476E8u;
    // 7F2476E8: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2476E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2476EC:
    ctx->pc = 0x7F2476ECu;
    // 7F2476EC: lwz     r3, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2476F0:
    ctx->pc = 0x7F2476F0u;
    // 7F2476F0: stw     r4, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2476F4:
    ctx->pc = 0x7F2476F4u;
    // 7F2476F4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2476F8:
    ctx->pc = 0x7F2476F8u;
    // 7F2476F8: lfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2476F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2476FC:
    ctx->pc = 0x7F2476FCu;
    // 7F2476FC: stb     r3, 3(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F247700:
    // 7F247700: addi    r11, r11, 16
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(16);

label_7F247704:
    ctx->pc = 0x7F247704u;
    // 7F247704: fsubs   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F247704u)) return;
    ppc_fsubs(ctx, 0, 0, 2);

label_7F247708:
    ctx->pc = 0x7F247708u;
    // 7F247708: lfs     f3, 92(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F247708u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F24770C:
    ctx->pc = 0x7F24770Cu;
    // 7F24770C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F24770Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_7F247710:
    ctx->pc = 0x7F247710u;
    // 7F247710: fmuls   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x7F247710u)) return;
    ppc_fmuls(ctx, 3, 3, 4);

label_7F247714:
    ctx->pc = 0x7F247714u;
    // 7F247714: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F247714u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F247718:
    ctx->pc = 0x7F247718u;
    // 7F247718: stfs     f3, 92(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F247718u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F24771C:
    ctx->pc = 0x7F24771Cu;
    // 7F24771C: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F24771Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F247720:
    ctx->pc = 0x7F247720u;
    // 7F247720: lwz     r26, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F247724:
    // 7F247724: bc    16, 0, 0x7F24766C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F24766Cu;
                return;
            }
            goto label_7F24766C;
        }
    }

label_7F247728:
    ctx->pc = 0x7F247728u;
    ctx->downcount -= 4;
    // 7F247728: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24772C:
    ctx->pc = 0x7F24772Cu;
    // 7F24772C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F247730:
    ctx->pc = 0x7F247730u;
    // 7F247730: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247734:
    ctx->pc = 0x7F247734u;
    // 7F247734: bl      0x8000519C
    {
            ctx->lr = 0x7F247738u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F247738:
    ctx->pc = 0x7F247738u;
    ctx->downcount -= 4;
    // 7F247738: lwz     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24773C:
    ctx->pc = 0x7F24773Cu;
    // 7F24773C: li      r5, 48
    ctx->gpr[5] = (u32)(s32)(48);

label_7F247740:
    ctx->pc = 0x7F247740u;
    // 7F247740: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247744:
    ctx->pc = 0x7F247744u;
    // 7F247744: bl      0x8000519C
    {
            ctx->lr = 0x7F247748u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F247748:
    ctx->pc = 0x7F247748u;
    ctx->downcount -= 5;
    // 7F247748: lwz     r4, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24774C:
    ctx->pc = 0x7F24774Cu;
    // 7F24774C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247750:
    ctx->pc = 0x7F247750u;
    // 7F247750: lwz     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247754:
    ctx->pc = 0x7F247754u;
    // 7F247754: ori     r0, r0, 0xE000
    ctx->gpr[0] = ctx->gpr[0] | 0xE000u;

label_7F247758:
    ctx->pc = 0x7F247758u;
    // 7F247758: stw     r0, 164(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24775C:
    ctx->pc = 0x7F24775Cu;
    ctx->downcount -= 16;
    // 7F24775C: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F247760:
    ctx->pc = 0x7F247760u;
    // 7F247760: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247764:
    ctx->pc = 0x7F247764u;
    // 7F247764: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247768:
    ctx->pc = 0x7F247768u;
    // 7F247768: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F24776C:
    ctx->pc = 0x7F24776Cu;
    // 7F24776C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247770:
    ctx->pc = 0x7F247770u;
    ctx->downcount -= 3;
    // 7F247770: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F247774:
    ctx->pc = 0x7F247774u;
    // 7F247774: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247778:
    ctx->pc = 0x7F247778u;
    // 7F247778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F24777C:
    ctx->pc = 0x7F24777Cu;
    ctx->downcount -= 25;
    // 7F24777C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247780:
    ctx->pc = 0x7F247780u;
    // 7F247780: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247784:
    ctx->pc = 0x7F247784u;
    // 7F247784: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247788:
    ctx->pc = 0x7F247788u;
    // 7F247788: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F24778C:
    ctx->pc = 0x7F24778Cu;
    // 7F24778C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247790:
    ctx->pc = 0x7F247790u;
    // 7F247790: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F247794:
    ctx->pc = 0x7F247794u;
    // 7F247794: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F247798:
    ctx->pc = 0x7F247798u;
    // 7F247798: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F24779C:
    ctx->pc = 0x7F24779Cu;
    // 7F24779C: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2477A0:
    ctx->pc = 0x7F2477A0u;
    // 7F2477A0: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F2477A4:
    ctx->pc = 0x7F2477A4u;
    // 7F2477A4: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2477A8:
    ctx->pc = 0x7F2477A8u;
    // 7F2477A8: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F2477AC:
    ctx->pc = 0x7F2477ACu;
    // 7F2477AC: li      r5, 144
    ctx->gpr[5] = (u32)(s32)(144);

label_7F2477B0:
    ctx->pc = 0x7F2477B0u;
    // 7F2477B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2477B4:
    ctx->pc = 0x7F2477B4u;
    // 7F2477B4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2477B8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2477B8:
    ctx->pc = 0x7F2477B8u;
    ctx->downcount -= 3;
    // 7F2477B8: cmplwi  r3, 0x0000
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

label_7F2477BC:
    ctx->pc = 0x7F2477BCu;
    // 7F2477BC: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2477C0:
    ctx->pc = 0x7F2477C0u;
    // 7F2477C0: bc    12, 2, 0x7F24784C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F24784C;
        }
    }

label_7F2477C4:
    ctx->pc = 0x7F2477C4u;
    ctx->downcount -= 5;
    // 7F2477C4: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F2477C8:
    ctx->pc = 0x7F2477C8u;
    // 7F2477C8: lis     r5, 32548
    ctx->gpr[5] = ((u32)(s32)(32548) << 16);

label_7F2477CC:
    ctx->pc = 0x7F2477CCu;
    // 7F2477CC: addi    r4, r4, 29416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29416);

label_7F2477D0:
    ctx->pc = 0x7F2477D0u;
    // 7F2477D0: addi    r5, r5, 29816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(29816);

label_7F2477D4:
    ctx->pc = 0x7F2477D4u;
    // 7F2477D4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2477D8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2477D8:
    ctx->pc = 0x7F2477D8u;
    ctx->downcount -= 23;
    // 7F2477D8: lwz     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2477DC:
    ctx->pc = 0x7F2477DCu;
    // 7F2477DC: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F2477E0:
    ctx->pc = 0x7F2477E0u;
    // 7F2477E0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2477E4:
    ctx->pc = 0x7F2477E4u;
    // 7F2477E4: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2477E8:
    ctx->pc = 0x7F2477E8u;
    // 7F2477E8: lwz     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2477EC:
    ctx->pc = 0x7F2477ECu;
    // 7F2477EC: addi    r0, r3, 32548
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F2477F0:
    ctx->pc = 0x7F2477F0u;
    // 7F2477F0: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2477F4:
    ctx->pc = 0x7F2477F4u;
    // 7F2477F4: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2477F8:
    ctx->pc = 0x7F2477F8u;
    // 7F2477F8: ori     r3, r7, 0x0080
    ctx->gpr[3] = ctx->gpr[7] | 0x0080u;

label_7F2477FC:
    ctx->pc = 0x7F2477FCu;
    // 7F2477FC: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F247800:
    ctx->pc = 0x7F247800u;
    // 7F247800: stw     r3, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247804:
    ctx->pc = 0x7F247804u;
    // 7F247804: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F247808:
    ctx->pc = 0x7F247808u;
    // 7F247808: or   r9, r31, r31
    {
        ctx->gpr[9] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F24780C:
    ctx->pc = 0x7F24780Cu;
    // 7F24780C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247810:
    ctx->pc = 0x7F247810u;
    // 7F247810: stw     r10, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F247814:
    ctx->pc = 0x7F247814u;
    // 7F247814: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247818:
    ctx->pc = 0x7F247818u;
    // 7F247818: stw     r10, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F24781C:
    ctx->pc = 0x7F24781Cu;
    // 7F24781C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247820:
    ctx->pc = 0x7F247820u;
    // 7F247820: stw     r10, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F247824:
    ctx->pc = 0x7F247824u;
    // 7F247824: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247828:
    ctx->pc = 0x7F247828u;
    // 7F247828: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24782C:
    ctx->pc = 0x7F24782Cu;
    // 7F24782C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247830:
    ctx->pc = 0x7F247830u;
    // 7F247830: bl      0x7F2474A4
    {
            ctx->lr = 0x7F247834u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2474A4u;
                return;
            }
            goto label_7F2474A4;
    }

label_7F247834:
    ctx->pc = 0x7F247834u;
    ctx->downcount -= 2;
    // 7F247834: cmpwi   r3, 0
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

label_7F247838:
    ctx->pc = 0x7F247838u;
    // 7F247838: bc    4, 0, 0x7F24784C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24784C;
        }
    }

label_7F24783C:
    ctx->pc = 0x7F24783Cu;
    ctx->downcount -= 2;
    // 7F24783C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F247840:
    ctx->pc = 0x7F247840u;
    // 7F247840: bl      0x7F3C8210
    {
            ctx->lr = 0x7F247844u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F247844:
    ctx->pc = 0x7F247844u;
    ctx->downcount -= 2;
    // 7F247844: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247848:
    ctx->pc = 0x7F247848u;
    // 7F247848: b       0x7F247850
    {
            goto label_7F247850;
    }

label_7F24784C:
    ctx->pc = 0x7F24784Cu;
    ctx->downcount -= 1;
    // 7F24784C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247850:
    ctx->pc = 0x7F247850u;
    ctx->downcount -= 16;
    // 7F247850: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F247854:
    ctx->pc = 0x7F247854u;
    // 7F247854: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247858:
    ctx->pc = 0x7F247858u;
    // 7F247858: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24785C:
    ctx->pc = 0x7F24785Cu;
    // 7F24785C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F247860:
    ctx->pc = 0x7F247860u;
    // 7F247860: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247864:
    ctx->pc = 0x7F247864u;
    ctx->downcount -= 8;
    // 7F247864: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247868:
    ctx->pc = 0x7F247868u;
    // 7F247868: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24786C:
    ctx->pc = 0x7F24786Cu;
    // 7F24786C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247870:
    ctx->pc = 0x7F247870u;
    // 7F247870: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F247874:
    ctx->pc = 0x7F247874u;
    // 7F247874: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247878:
    ctx->pc = 0x7F247878u;
    // 7F247878: lwz     r0, 536(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F24787C:
    ctx->pc = 0x7F24787Cu;
    // 7F24787C: cmpwi   r0, 1
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

label_7F247880:
    ctx->pc = 0x7F247880u;
    // 7F247880: bc    4, 2, 0x7F247900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247900;
        }
    }

label_7F247884:
    ctx->pc = 0x7F247884u;
    ctx->downcount -= 9;
    // 7F247884: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F247888:
    ctx->pc = 0x7F247888u;
    // 7F247888: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F24788C:
    ctx->pc = 0x7F24788Cu;
    // 7F24788C: stw     r0, 536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247890:
    ctx->pc = 0x7F247890u;
    // 7F247890: lwz     r0, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247894:
    ctx->pc = 0x7F247894u;
    // 7F247894: lwz     r5, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F247898:
    ctx->pc = 0x7F247898u;
    // 7F247898: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F24789C:
    ctx->pc = 0x7F24789Cu;
    // 7F24789C: xor   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] ^ ctx->gpr[4];
    }

label_7F2478A0:
    ctx->pc = 0x7F2478A0u;
    // 7F2478A0: or.   r0, r4, r0
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

label_7F2478A4:
    ctx->pc = 0x7F2478A4u;
    // 7F2478A4: bc    12, 2, 0x7F2478C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2478C0;
        }
    }

label_7F2478A8:
    ctx->pc = 0x7F2478A8u;
    ctx->downcount -= 2;
    // 7F2478A8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2478AC:
    ctx->pc = 0x7F2478ACu;
    // 7F2478AC: bl      0x7F3C8058
    {
            ctx->lr = 0x7F2478B0u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F2478B0:
    ctx->pc = 0x7F2478B0u;
    ctx->downcount -= 4;
    // 7F2478B0: lwz     r5, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2478B4:
    ctx->pc = 0x7F2478B4u;
    // 7F2478B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2478B8:
    ctx->pc = 0x7F2478B8u;
    // 7F2478B8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F2478BC:
    ctx->pc = 0x7F2478BCu;
    // 7F2478BC: bl      0x7F3C8058
    {
            ctx->lr = 0x7F2478C0u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F2478C0:
    ctx->pc = 0x7F2478C0u;
    ctx->downcount -= 3;
    // 7F2478C0: lwz     r3, 568(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(568);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2478C4:
    ctx->pc = 0x7F2478C4u;
    // 7F2478C4: cmpwi   r3, 0
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

label_7F2478C8:
    ctx->pc = 0x7F2478C8u;
    // 7F2478C8: bc    12, 2, 0x7F2478D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2478D4;
        }
    }

label_7F2478CC:
    ctx->pc = 0x7F2478CCu;
    ctx->downcount -= 2;
    // 7F2478CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2478D0:
    ctx->pc = 0x7F2478D0u;
    // 7F2478D0: bl      0x7F01FA88
    {
            ctx->lr = 0x7F2478D4u;
            ctx->pc = 0x7F01FA88u;
            return;
    }

label_7F2478D4:
    ctx->pc = 0x7F2478D4u;
    ctx->downcount -= 7;
    // 7F2478D4: lwz     r0, 560(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(560);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2478D8:
    ctx->pc = 0x7F2478D8u;
    // 7F2478D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2478DC:
    ctx->pc = 0x7F2478DCu;
    // 7F2478DC: lwz     r4, 564(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(564);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2478E0:
    ctx->pc = 0x7F2478E0u;
    // 7F2478E0: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_7F2478E4:
    ctx->pc = 0x7F2478E4u;
    // 7F2478E4: xor   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] ^ ctx->gpr[3];
    }

label_7F2478E8:
    ctx->pc = 0x7F2478E8u;
    // 7F2478E8: or.   r0, r3, r0
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

label_7F2478EC:
    ctx->pc = 0x7F2478ECu;
    // 7F2478EC: bc    12, 2, 0x7F247900
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F247900;
        }
    }

label_7F2478F0:
    ctx->pc = 0x7F2478F0u;
    ctx->downcount -= 4;
    // 7F2478F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2478F4:
    ctx->pc = 0x7F2478F4u;
    // 7F2478F4: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F2478F8:
    ctx->pc = 0x7F2478F8u;
    // 7F2478F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2478FC:
    ctx->pc = 0x7F2478FCu;
    // 7F2478FC: bl      0x7F3C8058
    {
            ctx->lr = 0x7F247900u;
            ctx->pc = 0x7F3C8058u;
            return;
    }

label_7F247900:
    ctx->pc = 0x7F247900u;
    ctx->downcount -= 6;
    // 7F247900: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247904:
    ctx->pc = 0x7F247904u;
    // 7F247904: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F247908:
    ctx->pc = 0x7F247908u;
    // 7F247908: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F24790C:
    ctx->pc = 0x7F24790Cu;
    // 7F24790C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F247910:
    ctx->pc = 0x7F247910u;
    // 7F247910: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247914:
    ctx->pc = 0x7F247914u;
    ctx->downcount -= 14;
    // 7F247914: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247918:
    ctx->pc = 0x7F247918u;
    // 7F247918: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F24791C:
    ctx->pc = 0x7F24791Cu;
    // 7F24791C: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F247920:
    ctx->pc = 0x7F247920u;
    // 7F247920: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F247924:
    ctx->pc = 0x7F247924u;
    // 7F247924: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247928:
    ctx->pc = 0x7F247928u;
    // 7F247928: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F24792C:
    ctx->pc = 0x7F24792Cu;
    // 7F24792C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247930:
    ctx->pc = 0x7F247930u;
    // 7F247930: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247934:
    ctx->pc = 0x7F247934u;
    // 7F247934: lwz     r0, 21616(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(21616);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247938:
    ctx->pc = 0x7F247938u;
    // 7F247938: addi    r6, r5, 20080
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(20080);

label_7F24793C:
    ctx->pc = 0x7F24793Cu;
    // 7F24793C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F247940:
    ctx->pc = 0x7F247940u;
    // 7F247940: cmpwi   r0, 0
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

label_7F247944:
    ctx->pc = 0x7F247944u;
    // 7F247944: bc    4, 1, 0x7F247968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247968;
        }
    }

label_7F247948:
    ctx->pc = 0x7F247948u;
    ctx->downcount -= 4;
    // 7F247948: lwzx    r5, r6, r3
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[3];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F24794C:
    ctx->pc = 0x7F24794Cu;
    // 7F24794C: lwz     r0, 76(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247950:
    // 7F247950: cmplw   r0, r4
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F247954:
    // 7F247954: bc    4, 2, 0x7F247960
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247960;
        }
    }

label_7F247958:
    ctx->downcount -= 2;
    // 7F247958: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F24795C:
    // 7F24795C: b       0x7F24797C
    {
            goto label_7F24797C;
    }

label_7F247960:
    ctx->downcount -= 2;
    // 7F247960: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F247964:
    // 7F247964: bc    16, 0, 0x7F247948
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247948u;
                return;
            }
            goto label_7F247948;
        }
    }

label_7F247968:
    ctx->pc = 0x7F247968u;
    ctx->downcount -= 2;
    // 7F247968: lwz     r3, 520(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F24796C:
    ctx->pc = 0x7F24796Cu;
    // 7F24796C: bl      0x7F2F6B9C
    {
            ctx->lr = 0x7F247970u;
            ctx->pc = 0x7F2F6B9Cu;
            return;
    }

label_7F247970:
    ctx->pc = 0x7F247970u;
    ctx->downcount -= 2;
    // 7F247970: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247974:
    ctx->pc = 0x7F247974u;
    // 7F247974: bl      0x7F3C8210
    {
            ctx->lr = 0x7F247978u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F247978:
    ctx->pc = 0x7F247978u;
    ctx->downcount -= 1;
    // 7F247978: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F24797C:
    ctx->pc = 0x7F24797Cu;
    ctx->downcount -= 6;
    // 7F24797C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247980:
    ctx->pc = 0x7F247980u;
    // 7F247980: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F247984:
    ctx->pc = 0x7F247984u;
    // 7F247984: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247988:
    ctx->pc = 0x7F247988u;
    // 7F247988: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24798C:
    ctx->pc = 0x7F24798Cu;
    // 7F24798C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247990:
    ctx->pc = 0x7F247990u;
    ctx->downcount -= 6;
    // 7F247990: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247994:
    ctx->pc = 0x7F247994u;
    // 7F247994: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247998:
    ctx->pc = 0x7F247998u;
    // 7F247998: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24799C:
    ctx->pc = 0x7F24799Cu;
    // 7F24799C: lwz     r0, 528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2479A0:
    ctx->pc = 0x7F2479A0u;
    // 7F2479A0: cmpwi   r0, 0
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

label_7F2479A4:
    ctx->pc = 0x7F2479A4u;
    // 7F2479A4: bc    4, 2, 0x7F2479C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2479C4;
        }
    }

label_7F2479A8:
    ctx->pc = 0x7F2479A8u;
    ctx->downcount -= 3;
    // 7F2479A8: lwz     r0, 532(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2479AC:
    ctx->pc = 0x7F2479ACu;
    // 7F2479AC: cmpw    r0, r4
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

label_7F2479B0:
    ctx->pc = 0x7F2479B0u;
    // 7F2479B0: bc    4, 2, 0x7F2479C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2479C4;
        }
    }

label_7F2479B4:
    ctx->pc = 0x7F2479B4u;
    ctx->downcount -= 2;
    // 7F2479B4: lwz     r3, 520(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2479B8:
    ctx->pc = 0x7F2479B8u;
    // 7F2479B8: bl      0x7F2F6B9C
    {
            ctx->lr = 0x7F2479BCu;
            ctx->pc = 0x7F2F6B9Cu;
            return;
    }

label_7F2479BC:
    ctx->pc = 0x7F2479BCu;
    ctx->downcount -= 2;
    // 7F2479BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2479C0:
    ctx->pc = 0x7F2479C0u;
    // 7F2479C0: b       0x7F2479C8
    {
            goto label_7F2479C8;
    }

label_7F2479C4:
    ctx->pc = 0x7F2479C4u;
    ctx->downcount -= 1;
    // 7F2479C4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2479C8:
    ctx->pc = 0x7F2479C8u;
    ctx->downcount -= 5;
    // 7F2479C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2479CC:
    ctx->pc = 0x7F2479CCu;
    // 7F2479CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2479D0:
    ctx->pc = 0x7F2479D0u;
    // 7F2479D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2479D4:
    ctx->pc = 0x7F2479D4u;
    // 7F2479D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2479D8:
    ctx->pc = 0x7F2479D8u;
    ctx->downcount -= 1;
    // 7F2479D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F2479DC:
    ctx->pc = 0x7F2479DCu;
    ctx->downcount -= 7;
    // 7F2479DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2479E0:
    ctx->pc = 0x7F2479E0u;
    // 7F2479E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2479E4:
    ctx->pc = 0x7F2479E4u;
    // 7F2479E4: cmpwi   r4, 32
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

label_7F2479E8:
    ctx->pc = 0x7F2479E8u;
    // 7F2479E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2479EC:
    ctx->pc = 0x7F2479ECu;
    // 7F2479EC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2479F0:
    ctx->pc = 0x7F2479F0u;
    // 7F2479F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2479F4:
    ctx->pc = 0x7F2479F4u;
    // 7F2479F4: bc    12, 2, 0x7F247A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F247A80;
        }
    }

label_7F2479F8:
    ctx->pc = 0x7F2479F8u;
    ctx->downcount -= 1;
    // 7F2479F8: bc    4, 0, 0x7F247A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247A14;
        }
    }

label_7F2479FC:
    ctx->pc = 0x7F2479FCu;
    ctx->downcount -= 2;
    // 7F2479FC: cmpwi   r4, 16
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

label_7F247A00:
    ctx->pc = 0x7F247A00u;
    // 7F247A00: bc    12, 2, 0x7F247A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F247A8C;
        }
    }

label_7F247A04:
    ctx->pc = 0x7F247A04u;
    ctx->downcount -= 1;
    // 7F247A04: bc    4, 0, 0x7F247B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247B54;
        }
    }

label_7F247A08:
    ctx->pc = 0x7F247A08u;
    ctx->downcount -= 2;
    // 7F247A08: cmpwi   r4, 8
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F247A0C:
    ctx->pc = 0x7F247A0Cu;
    // 7F247A0C: bc    12, 2, 0x7F247A28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F247A28;
        }
    }

label_7F247A10:
    ctx->pc = 0x7F247A10u;
    ctx->downcount -= 1;
    // 7F247A10: b       0x7F247B54
    {
            goto label_7F247B54;
    }

label_7F247A14:
    ctx->pc = 0x7F247A14u;
    ctx->downcount -= 4;
    // 7F247A14: lis     r5, 1
    ctx->gpr[5] = ((u32)(s32)(1) << 16);

label_7F247A18:
    ctx->pc = 0x7F247A18u;
    // 7F247A18: addi    r0, r5, -255
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-255);

label_7F247A1C:
    ctx->pc = 0x7F247A1Cu;
    // 7F247A1C: cmpw    r4, r0
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

label_7F247A20:
    ctx->pc = 0x7F247A20u;
    // 7F247A20: bc    12, 2, 0x7F247B3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F247B3C;
        }
    }

label_7F247A24:
    ctx->pc = 0x7F247A24u;
    ctx->downcount -= 1;
    // 7F247A24: b       0x7F247B54
    {
            goto label_7F247B54;
    }

label_7F247A28:
    ctx->pc = 0x7F247A28u;
    ctx->downcount -= 2;
    // 7F247A28: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F247A2C:
    ctx->pc = 0x7F247A2Cu;
    // 7F247A2C: bl      0x7F247990
    {
            ctx->lr = 0x7F247A30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247990u;
                return;
            }
            goto label_7F247990;
    }

label_7F247A30:
    ctx->pc = 0x7F247A30u;
    ctx->downcount -= 2;
    // 7F247A30: cmpwi   r3, 0
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

label_7F247A34:
    ctx->pc = 0x7F247A34u;
    // 7F247A34: bc    4, 0, 0x7F247A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247A40;
        }
    }

label_7F247A38:
    ctx->pc = 0x7F247A38u;
    ctx->downcount -= 2;
    // 7F247A38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247A3C:
    ctx->pc = 0x7F247A3Cu;
    // 7F247A3C: b       0x7F247B58
    {
            goto label_7F247B58;
    }

label_7F247A40:
    ctx->pc = 0x7F247A40u;
    ctx->downcount -= 7;
    // 7F247A40: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F247A44:
    ctx->pc = 0x7F247A44u;
    // 7F247A44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247A48:
    ctx->pc = 0x7F247A48u;
    // 7F247A48: addi    r0, r4, 31192
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(31192);

label_7F247A4C:
    ctx->pc = 0x7F247A4Cu;
    // 7F247A4C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F247A50:
    ctx->pc = 0x7F247A50u;
    // 7F247A50: stw     r0, 572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247A54:
    ctx->pc = 0x7F247A54u;
    // 7F247A54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247A58:
    ctx->pc = 0x7F247A58u;
    // 7F247A58: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F247A5Cu;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F247A5C:
    ctx->pc = 0x7F247A5Cu;
    ctx->downcount -= 6;
    // 7F247A5C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F247A60:
    ctx->pc = 0x7F247A60u;
    // 7F247A60: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F247A64:
    ctx->pc = 0x7F247A64u;
    // 7F247A64: stw     r3, 536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247A68:
    ctx->pc = 0x7F247A68u;
    // 7F247A68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247A6C:
    ctx->pc = 0x7F247A6Cu;
    // 7F247A6C: stw     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247A70:
    ctx->pc = 0x7F247A70u;
    // 7F247A70: bl      0x7F247864
    {
            ctx->lr = 0x7F247A74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247864u;
                return;
            }
            goto label_7F247864;
    }

label_7F247A74:
    ctx->pc = 0x7F247A74u;
    ctx->downcount -= 2;
    // 7F247A74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247A78:
    ctx->pc = 0x7F247A78u;
    // 7F247A78: bl      0x7F3C8210
    {
            ctx->lr = 0x7F247A7Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F247A7C:
    ctx->pc = 0x7F247A7Cu;
    ctx->downcount -= 1;
    // 7F247A7C: b       0x7F247B54
    {
            goto label_7F247B54;
    }

label_7F247A80:
    ctx->pc = 0x7F247A80u;
    ctx->downcount -= 3;
    // 7F247A80: lwz     r0, 516(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(516);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247A84:
    ctx->pc = 0x7F247A84u;
    // 7F247A84: cmpw    r0, r5
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

label_7F247A88:
    ctx->pc = 0x7F247A88u;
    // 7F247A88: bc    4, 2, 0x7F247B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247B54;
        }
    }

label_7F247A8C:
    ctx->pc = 0x7F247A8Cu;
    ctx->downcount -= 3;
    // 7F247A8C: lwz     r0, 536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247A90:
    ctx->pc = 0x7F247A90u;
    // 7F247A90: cmpwi   r0, 0
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

label_7F247A94:
    ctx->pc = 0x7F247A94u;
    // 7F247A94: bc    4, 2, 0x7F247B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247B54;
        }
    }

label_7F247A98:
    ctx->pc = 0x7F247A98u;
    ctx->downcount -= 9;
    // 7F247A98: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F247A9C:
    ctx->pc = 0x7F247A9Cu;
    // 7F247A9C: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F247AA0:
    ctx->pc = 0x7F247AA0u;
    // 7F247AA0: stw     r0, 536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247AA4:
    ctx->pc = 0x7F247AA4u;
    // 7F247AA4: addi    r0, r3, 31192
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31192);

label_7F247AA8:
    ctx->pc = 0x7F247AA8u;
    // 7F247AA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247AAC:
    ctx->pc = 0x7F247AACu;
    // 7F247AAC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F247AB0:
    ctx->pc = 0x7F247AB0u;
    // 7F247AB0: stw     r0, 572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247AB4:
    ctx->pc = 0x7F247AB4u;
    // 7F247AB4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247AB8:
    ctx->pc = 0x7F247AB8u;
    // 7F247AB8: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F247ABCu;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F247ABC:
    ctx->pc = 0x7F247ABCu;
    ctx->downcount -= 3;
    // 7F247ABC: lwz     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247AC0:
    ctx->pc = 0x7F247AC0u;
    // 7F247AC0: cmpwi   r0, 0
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

label_7F247AC4:
    ctx->pc = 0x7F247AC4u;
    // 7F247AC4: bc    4, 2, 0x7F247AD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247AD4;
        }
    }

label_7F247AC8:
    ctx->pc = 0x7F247AC8u;
    ctx->downcount -= 2;
    // 7F247AC8: lwz     r3, 520(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247ACC:
    ctx->pc = 0x7F247ACCu;
    // 7F247ACC: bl      0x7F2F6B9C
    {
            ctx->lr = 0x7F247AD0u;
            ctx->pc = 0x7F2F6B9Cu;
            return;
    }

label_7F247AD0:
    ctx->pc = 0x7F247AD0u;
    ctx->downcount -= 1;
    // 7F247AD0: b       0x7F247ADC
    {
            goto label_7F247ADC;
    }

label_7F247AD4:
    ctx->pc = 0x7F247AD4u;
    ctx->downcount -= 2;
    // 7F247AD4: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F247AD8:
    ctx->pc = 0x7F247AD8u;
    // 7F247AD8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F247ADCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F247ADC:
    ctx->pc = 0x7F247ADCu;
    ctx->downcount -= 3;
    // 7F247ADC: lwz     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247AE0:
    ctx->pc = 0x7F247AE0u;
    // 7F247AE0: cmpwi   r0, 0
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

label_7F247AE4:
    ctx->pc = 0x7F247AE4u;
    // 7F247AE4: bc    4, 2, 0x7F247B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247B04;
        }
    }

label_7F247AE8:
    ctx->pc = 0x7F247AE8u;
    ctx->downcount -= 2;
    // 7F247AE8: lwz     r3, 540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247AEC:
    ctx->pc = 0x7F247AECu;
    // 7F247AEC: bl      0x7F247B6C
    {
            ctx->lr = 0x7F247AF0u;
            goto label_7F247B6C;
    }

label_7F247AF0:
    ctx->pc = 0x7F247AF0u;
    ctx->downcount -= 4;
    // 7F247AF0: lwz     r4, 552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(552);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247AF4:
    ctx->pc = 0x7F247AF4u;
    // 7F247AF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247AF8:
    ctx->pc = 0x7F247AF8u;
    // 7F247AF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247AFC:
    ctx->pc = 0x7F247AFCu;
    // 7F247AFC: bl      0x7F247B78
    {
            ctx->lr = 0x7F247B00u;
            goto label_7F247B78;
    }

label_7F247B00:
    ctx->pc = 0x7F247B00u;
    ctx->downcount -= 1;
    // 7F247B00: b       0x7F247B54
    {
            goto label_7F247B54;
    }

label_7F247B04:
    ctx->pc = 0x7F247B04u;
    ctx->downcount -= 3;
    // 7F247B04: addi    r3, r31, 264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(264);

label_7F247B08:
    ctx->pc = 0x7F247B08u;
    // 7F247B08: addi    r4, r31, 280
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(280);

label_7F247B0C:
    ctx->pc = 0x7F247B0Cu;
    // 7F247B0C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F247B10u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F247B10:
    ctx->pc = 0x7F247B10u;
    ctx->downcount -= 2;
    // 7F247B10: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F247B14:
    ctx->pc = 0x7F247B14u;
    // 7F247B14: bl      0x7F0427FC
    {
            ctx->lr = 0x7F247B18u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F247B18:
    ctx->pc = 0x7F247B18u;
    ctx->downcount -= 4;
    // 7F247B18: addi    r3, r31, 264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(264);

label_7F247B1C:
    ctx->pc = 0x7F247B1Cu;
    // 7F247B1C: addi    r4, r31, 136
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(136);

label_7F247B20:
    ctx->pc = 0x7F247B20u;
    // 7F247B20: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247B24:
    ctx->pc = 0x7F247B24u;
    // 7F247B24: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F247B28u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F247B28:
    ctx->pc = 0x7F247B28u;
    ctx->downcount -= 5;
    // 7F247B28: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247B2C:
    ctx->pc = 0x7F247B2Cu;
    // 7F247B2C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247B30:
    ctx->pc = 0x7F247B30u;
    // 7F247B30: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F247B34:
    ctx->pc = 0x7F247B34u;
    // 7F247B34: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247B38:
    ctx->pc = 0x7F247B38u;
    // 7F247B38: b       0x7F247B54
    {
            goto label_7F247B54;
    }

label_7F247B3C:
    ctx->pc = 0x7F247B3Cu;
    ctx->downcount -= 4;
    // 7F247B3C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247B40:
    ctx->pc = 0x7F247B40u;
    // 7F247B40: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F247B44:
    ctx->pc = 0x7F247B44u;
    // 7F247B44: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247B48:
    ctx->pc = 0x7F247B48u;
    // 7F247B48: bl      0x7F3C8210
    {
            ctx->lr = 0x7F247B4Cu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F247B4C:
    ctx->pc = 0x7F247B4Cu;
    ctx->downcount -= 2;
    // 7F247B4C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F247B50:
    ctx->pc = 0x7F247B50u;
    // 7F247B50: b       0x7F247B58
    {
            goto label_7F247B58;
    }

label_7F247B54:
    ctx->pc = 0x7F247B54u;
    ctx->downcount -= 1;
    // 7F247B54: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247B58:
    ctx->pc = 0x7F247B58u;
    ctx->downcount -= 6;
    // 7F247B58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247B5C:
    ctx->pc = 0x7F247B5Cu;
    // 7F247B5C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F247B60:
    ctx->pc = 0x7F247B60u;
    // 7F247B60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247B64:
    ctx->pc = 0x7F247B64u;
    // 7F247B64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F247B68:
    ctx->pc = 0x7F247B68u;
    // 7F247B68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247B6C:
    ctx->pc = 0x7F247B6Cu;
    ctx->downcount -= 3;
    // 7F247B6C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F247B70:
    ctx->pc = 0x7F247B70u;
    // 7F247B70: stw     r3, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247B74:
    ctx->pc = 0x7F247B74u;
    // 7F247B74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247B78:
    ctx->pc = 0x7F247B78u;
    ctx->downcount -= 19;
    // 7F247B78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247B7C:
    ctx->pc = 0x7F247B7Cu;
    // 7F247B7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247B80:
    ctx->pc = 0x7F247B80u;
    // 7F247B80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247B84:
    ctx->pc = 0x7F247B84u;
    // 7F247B84: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F247B88:
    ctx->pc = 0x7F247B88u;
    // 7F247B88: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247B8C:
    ctx->pc = 0x7F247B8Cu;
    // 7F247B8C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F247B90:
    ctx->pc = 0x7F247B90u;
    // 7F247B90: lwz     r0, 528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247B94:
    ctx->pc = 0x7F247B94u;
    // 7F247B94: cmpwi   r0, 0
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

label_7F247B98:
    ctx->pc = 0x7F247B98u;
    // 7F247B98: bc    4, 2, 0x7F247BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247BD8;
        }
    }

label_7F247B9C:
    ctx->pc = 0x7F247B9Cu;
    ctx->downcount -= 8;
    // 7F247B9C: lwz     r5, 512(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(512);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F247BA0:
    ctx->pc = 0x7F247BA0u;
    // 7F247BA0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F247BA4:
    ctx->pc = 0x7F247BA4u;
    // 7F247BA4: lwz     r6, 524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(524);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F247BA8:
    ctx->pc = 0x7F247BA8u;
    // 7F247BA8: addi    r4, r30, 280
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(280);

label_7F247BAC:
    ctx->pc = 0x7F247BACu;
    // 7F247BAC: lwz     r5, 208(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(208);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F247BB0:
    ctx->pc = 0x7F247BB0u;
    // 7F247BB0: addi    r7, r30, 264
    ctx->gpr[7] = ctx->gpr[30] + (u32)(s32)(264);

label_7F247BB4:
    ctx->pc = 0x7F247BB4u;
    // 7F247BB4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F247BB8:
    ctx->pc = 0x7F247BB8u;
    // 7F247BB8: bl      0x7F2F7418
    {
            ctx->lr = 0x7F247BBCu;
            ctx->pc = 0x7F2F7418u;
            return;
    }

label_7F247BBC:
    ctx->pc = 0x7F247BBCu;
    ctx->downcount -= 4;
    // 7F247BBC: stw     r3, 520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(520);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247BC0:
    ctx->pc = 0x7F247BC0u;
    // 7F247BC0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247BC4:
    ctx->pc = 0x7F247BC4u;
    // 7F247BC4: lwz     r3, 520(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247BC8:
    ctx->pc = 0x7F247BC8u;
    // 7F247BC8: bl      0x7F2F7248
    {
            ctx->lr = 0x7F247BCCu;
            ctx->pc = 0x7F2F7248u;
            return;
    }

label_7F247BCC:
    ctx->pc = 0x7F247BCCu;
    ctx->downcount -= 3;
    // 7F247BCC: lwz     r3, 512(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247BD0:
    ctx->pc = 0x7F247BD0u;
    // 7F247BD0: lwz     r0, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247BD4:
    ctx->pc = 0x7F247BD4u;
    // 7F247BD4: stw     r0, 540(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247BD8:
    ctx->pc = 0x7F247BD8u;
    ctx->downcount -= 16;
    // 7F247BD8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F247BDC:
    ctx->pc = 0x7F247BDCu;
    // 7F247BDC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247BE0:
    ctx->pc = 0x7F247BE0u;
    // 7F247BE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247BE4:
    ctx->pc = 0x7F247BE4u;
    // 7F247BE4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F247BE8:
    ctx->pc = 0x7F247BE8u;
    // 7F247BE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247BEC:
    ctx->pc = 0x7F247BECu;
    ctx->downcount -= 6;
    // 7F247BEC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247BF0:
    ctx->pc = 0x7F247BF0u;
    // 7F247BF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247BF4:
    ctx->pc = 0x7F247BF4u;
    // 7F247BF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247BF8:
    ctx->pc = 0x7F247BF8u;
    // 7F247BF8: lwz     r0, 528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247BFC:
    ctx->pc = 0x7F247BFCu;
    // 7F247BFC: cmpwi   r0, 0
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

label_7F247C00:
    ctx->pc = 0x7F247C00u;
    // 7F247C00: bc    4, 2, 0x7F247C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247C0C;
        }
    }

label_7F247C04:
    ctx->pc = 0x7F247C04u;
    ctx->downcount -= 2;
    // 7F247C04: lwz     r3, 520(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247C08:
    ctx->pc = 0x7F247C08u;
    // 7F247C08: bl      0x7F2F6B9C
    {
            ctx->lr = 0x7F247C0Cu;
            ctx->pc = 0x7F2F6B9Cu;
            return;
    }

label_7F247C0C:
    ctx->pc = 0x7F247C0Cu;
    ctx->downcount -= 5;
    // 7F247C0C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247C10:
    ctx->pc = 0x7F247C10u;
    // 7F247C10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247C14:
    ctx->pc = 0x7F247C14u;
    // 7F247C14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F247C18:
    ctx->pc = 0x7F247C18u;
    // 7F247C18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247C1C:
    ctx->pc = 0x7F247C1Cu;
    ctx->downcount -= 8;
    // 7F247C1C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247C20:
    ctx->pc = 0x7F247C20u;
    // 7F247C20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247C24:
    ctx->pc = 0x7F247C24u;
    // 7F247C24: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247C28:
    ctx->pc = 0x7F247C28u;
    // 7F247C28: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F247C2C:
    ctx->pc = 0x7F247C2Cu;
    // 7F247C2C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F247C30:
    ctx->pc = 0x7F247C30u;
    // 7F247C30: lwz     r0, 536(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247C34:
    ctx->pc = 0x7F247C34u;
    // 7F247C34: cmpwi   r0, 0
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

label_7F247C38:
    ctx->pc = 0x7F247C38u;
    // 7F247C38: bc    4, 2, 0x7F247D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247D9C;
        }
    }

label_7F247C3C:
    ctx->pc = 0x7F247C3Cu;
    ctx->downcount -= 10;
    // 7F247C3C: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247C40:
    ctx->pc = 0x7F247C40u;
    // 7F247C40: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F247C44:
    ctx->pc = 0x7F247C44u;
    // 7F247C44: lwz     r3, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247C48:
    ctx->pc = 0x7F247C48u;
    // 7F247C48: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F247C4C:
    ctx->pc = 0x7F247C4Cu;
    // 7F247C4C: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F247C50:
    ctx->pc = 0x7F247C50u;
    // 7F247C50: and   r3, r3, r7
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[7];
    }

label_7F247C54:
    ctx->pc = 0x7F247C54u;
    // 7F247C54: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F247C58:
    ctx->pc = 0x7F247C58u;
    // 7F247C58: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F247C5C:
    ctx->pc = 0x7F247C5Cu;
    // 7F247C5C: or.   r0, r3, r0
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

label_7F247C60:
    ctx->pc = 0x7F247C60u;
    // 7F247C60: bc    12, 2, 0x7F247D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F247D9C;
        }
    }

label_7F247C64:
    ctx->pc = 0x7F247C64u;
    ctx->downcount -= 11;
    // 7F247C64: lis     r3, 5
    ctx->gpr[3] = ((u32)(s32)(5) << 16);

label_7F247C68:
    ctx->pc = 0x7F247C68u;
    // 7F247C68: lwz     r5, 144(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F247C6C:
    ctx->pc = 0x7F247C6Cu;
    // 7F247C6C: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F247C70:
    ctx->pc = 0x7F247C70u;
    // 7F247C70: lwz     r4, 148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247C74:
    ctx->pc = 0x7F247C74u;
    // 7F247C74: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F247C78:
    ctx->pc = 0x7F247C78u;
    // 7F247C78: and   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F247C7C:
    ctx->pc = 0x7F247C7Cu;
    // 7F247C7C: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F247C80:
    ctx->pc = 0x7F247C80u;
    // 7F247C80: xor   r3, r3, r6
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F247C84:
    ctx->pc = 0x7F247C84u;
    // 7F247C84: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F247C88:
    ctx->pc = 0x7F247C88u;
    // 7F247C88: or.   r0, r3, r0
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

label_7F247C8C:
    ctx->pc = 0x7F247C8Cu;
    // 7F247C8C: bc    12, 2, 0x7F247D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F247D9C;
        }
    }

label_7F247C90:
    ctx->pc = 0x7F247C90u;
    ctx->downcount -= 7;
    // 7F247C90: lis     r3, 32548
    ctx->gpr[3] = ((u32)(s32)(32548) << 16);

label_7F247C94:
    ctx->pc = 0x7F247C94u;
    // 7F247C94: stw     r7, 536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F247C98:
    ctx->pc = 0x7F247C98u;
    // 7F247C98: addi    r0, r3, 31192
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(31192);

label_7F247C9C:
    ctx->pc = 0x7F247C9Cu;
    // 7F247C9C: addi    r3, r31, 264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(264);

label_7F247CA0:
    ctx->pc = 0x7F247CA0u;
    // 7F247CA0: stw     r0, 572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(572);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247CA4:
    ctx->pc = 0x7F247CA4u;
    // 7F247CA4: addi    r4, r31, 280
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(280);

label_7F247CA8:
    ctx->pc = 0x7F247CA8u;
    // 7F247CA8: bl      0x7F1D5A2C
    {
            ctx->lr = 0x7F247CACu;
            ctx->pc = 0x7F1D5A2Cu;
            return;
    }

label_7F247CAC:
    ctx->pc = 0x7F247CACu;
    ctx->downcount -= 4;
    // 7F247CAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247CB0:
    ctx->pc = 0x7F247CB0u;
    // 7F247CB0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F247CB4:
    ctx->pc = 0x7F247CB4u;
    // 7F247CB4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247CB8:
    ctx->pc = 0x7F247CB8u;
    // 7F247CB8: bl      0x7F3C7FF8
    {
            ctx->lr = 0x7F247CBCu;
            ctx->pc = 0x7F3C7FF8u;
            return;
    }

label_7F247CBC:
    ctx->pc = 0x7F247CBCu;
    ctx->downcount -= 3;
    // 7F247CBC: lwz     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247CC0:
    ctx->pc = 0x7F247CC0u;
    // 7F247CC0: cmpwi   r0, 0
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

label_7F247CC4:
    ctx->pc = 0x7F247CC4u;
    // 7F247CC4: bc    4, 2, 0x7F247CD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247CD4;
        }
    }

label_7F247CC8:
    ctx->pc = 0x7F247CC8u;
    ctx->downcount -= 2;
    // 7F247CC8: lwz     r3, 520(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(520);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247CCC:
    ctx->pc = 0x7F247CCCu;
    // 7F247CCC: bl      0x7F2F6B9C
    {
            ctx->lr = 0x7F247CD0u;
            ctx->pc = 0x7F2F6B9Cu;
            return;
    }

label_7F247CD0:
    ctx->pc = 0x7F247CD0u;
    ctx->downcount -= 1;
    // 7F247CD0: b       0x7F247CDC
    {
            goto label_7F247CDC;
    }

label_7F247CD4:
    ctx->pc = 0x7F247CD4u;
    ctx->downcount -= 2;
    // 7F247CD4: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F247CD8:
    ctx->pc = 0x7F247CD8u;
    // 7F247CD8: bl      0x7F042AAC
    {
            ctx->lr = 0x7F247CDCu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F247CDC:
    ctx->pc = 0x7F247CDCu;
    ctx->downcount -= 3;
    // 7F247CDC: lwz     r0, 528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247CE0:
    ctx->pc = 0x7F247CE0u;
    // 7F247CE0: cmpwi   r0, 0
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

label_7F247CE4:
    ctx->pc = 0x7F247CE4u;
    // 7F247CE4: bc    4, 2, 0x7F247D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247D30;
        }
    }

label_7F247CE8:
    ctx->pc = 0x7F247CE8u;
    ctx->downcount -= 2;
    // 7F247CE8: lwz     r3, 540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247CEC:
    ctx->pc = 0x7F247CECu;
    // 7F247CEC: bl      0x7F247B6C
    {
            ctx->lr = 0x7F247CF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247B6Cu;
                return;
            }
            goto label_7F247B6C;
    }

label_7F247CF0:
    ctx->pc = 0x7F247CF0u;
    ctx->downcount -= 4;
    // 7F247CF0: lwz     r4, 552(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(552);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247CF4:
    ctx->pc = 0x7F247CF4u;
    // 7F247CF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247CF8:
    ctx->pc = 0x7F247CF8u;
    // 7F247CF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247CFC:
    ctx->pc = 0x7F247CFCu;
    // 7F247CFC: bl      0x7F247B78
    {
            ctx->lr = 0x7F247D00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247B78u;
                return;
            }
            goto label_7F247B78;
    }

label_7F247D00:
    ctx->pc = 0x7F247D00u;
    ctx->downcount -= 3;
    // 7F247D00: lwz     r3, 512(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247D04:
    ctx->pc = 0x7F247D04u;
    // 7F247D04: addi    r4, r3, 32
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(32);

label_7F247D08:
    ctx->pc = 0x7F247D08u;
    // 7F247D08: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F247D0Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F247D0C:
    ctx->pc = 0x7F247D0Cu;
    ctx->downcount -= 4;
    // 7F247D0C: addi    r3, r31, 264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(264);

label_7F247D10:
    ctx->pc = 0x7F247D10u;
    // 7F247D10: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F247D14:
    ctx->pc = 0x7F247D14u;
    // 7F247D14: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F247D18:
    ctx->pc = 0x7F247D18u;
    // 7F247D18: bl      0x7F3B3648
    {
            ctx->lr = 0x7F247D1Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F247D1C:
    ctx->pc = 0x7F247D1Cu;
    ctx->downcount -= 4;
    // 7F247D1C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F247D20:
    ctx->pc = 0x7F247D20u;
    // 7F247D20: lwz     r4, 512(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(512);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247D24:
    ctx->pc = 0x7F247D24u;
    // 7F247D24: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247D28:
    ctx->pc = 0x7F247D28u;
    // 7F247D28: bl      0x800261B4
    {
            ctx->lr = 0x7F247D2Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F247D2C:
    ctx->pc = 0x7F247D2Cu;
    ctx->downcount -= 1;
    // 7F247D2C: b       0x7F247D8C
    {
            goto label_7F247D8C;
    }

label_7F247D30:
    ctx->pc = 0x7F247D30u;
    ctx->downcount -= 2;
    // 7F247D30: lwz     r3, 540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247D34:
    ctx->pc = 0x7F247D34u;
    // 7F247D34: bl      0x7F247B6C
    {
            ctx->lr = 0x7F247D38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247B6Cu;
                return;
            }
            goto label_7F247B6C;
    }

label_7F247D38:
    ctx->pc = 0x7F247D38u;
    ctx->downcount -= 3;
    // 7F247D38: addi    r3, r31, 264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(264);

label_7F247D3C:
    ctx->pc = 0x7F247D3Cu;
    // 7F247D3C: addi    r4, r31, 280
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(280);

label_7F247D40:
    ctx->pc = 0x7F247D40u;
    // 7F247D40: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F247D44u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F247D44:
    ctx->pc = 0x7F247D44u;
    ctx->downcount -= 2;
    // 7F247D44: addi    r3, r31, 92
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(92);

label_7F247D48:
    ctx->pc = 0x7F247D48u;
    // 7F247D48: bl      0x7F0427FC
    {
            ctx->lr = 0x7F247D4Cu;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F247D4C:
    ctx->pc = 0x7F247D4Cu;
    ctx->downcount -= 4;
    // 7F247D4C: addi    r3, r31, 264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(264);

label_7F247D50:
    ctx->pc = 0x7F247D50u;
    // 7F247D50: addi    r4, r31, 136
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(136);

label_7F247D54:
    ctx->pc = 0x7F247D54u;
    // 7F247D54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247D58:
    ctx->pc = 0x7F247D58u;
    // 7F247D58: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F247D5Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F247D5C:
    ctx->pc = 0x7F247D5Cu;
    ctx->downcount -= 12;
    // 7F247D5C: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247D60:
    ctx->pc = 0x7F247D60u;
    // 7F247D60: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247D64:
    ctx->pc = 0x7F247D64u;
    // 7F247D64: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F247D68:
    ctx->pc = 0x7F247D68u;
    // 7F247D68: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247D6C:
    ctx->pc = 0x7F247D6Cu;
    // 7F247D6C: lwz     r3, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247D70:
    ctx->pc = 0x7F247D70u;
    // 7F247D70: lwz     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247D74:
    ctx->pc = 0x7F247D74u;
    // 7F247D74: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247D78:
    ctx->pc = 0x7F247D78u;
    // 7F247D78: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247D7C:
    ctx->pc = 0x7F247D7Cu;
    // 7F247D7C: lwz     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247D80:
    ctx->pc = 0x7F247D80u;
    // 7F247D80: lwz     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247D84:
    ctx->pc = 0x7F247D84u;
    // 7F247D84: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F247D88:
    ctx->pc = 0x7F247D88u;
    // 7F247D88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247D8C:
    ctx->pc = 0x7F247D8Cu;
    ctx->downcount -= 4;
    // 7F247D8C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F247D90:
    ctx->pc = 0x7F247D90u;
    // 7F247D90: li      r3, 73
    ctx->gpr[3] = (u32)(s32)(73);

label_7F247D94:
    ctx->pc = 0x7F247D94u;
    // 7F247D94: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F247D98:
    ctx->pc = 0x7F247D98u;
    // 7F247D98: bl      0x7F0117B8
    {
            ctx->lr = 0x7F247D9Cu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F247D9C:
    ctx->pc = 0x7F247D9Cu;
    ctx->downcount -= 6;
    // 7F247D9C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247DA0:
    ctx->pc = 0x7F247DA0u;
    // 7F247DA0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F247DA4:
    ctx->pc = 0x7F247DA4u;
    // 7F247DA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247DA8:
    ctx->pc = 0x7F247DA8u;
    // 7F247DA8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F247DAC:
    ctx->pc = 0x7F247DACu;
    // 7F247DAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247DB0:
    ctx->pc = 0x7F247DB0u;
    ctx->downcount -= 36;
    // 7F247DB0: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247DB4:
    ctx->pc = 0x7F247DB4u;
    // 7F247DB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247DB8:
    ctx->pc = 0x7F247DB8u;
    // 7F247DB8: lis     r8, 32582
    ctx->gpr[8] = ((u32)(s32)(32582) << 16);

label_7F247DBC:
    ctx->pc = 0x7F247DBCu;
    // 7F247DBC: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F247DC0:
    ctx->pc = 0x7F247DC0u;
    // 7F247DC0: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247DC4:
    ctx->pc = 0x7F247DC4u;
    // 7F247DC4: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F247DC8:
    ctx->pc = 0x7F247DC8u;
    // 7F247DC8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F247DCC:
    ctx->pc = 0x7F247DCCu;
    // 7F247DCC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F247DD0:
    ctx->pc = 0x7F247DD0u;
    // 7F247DD0: stmw     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F247DD4:
    ctx->pc = 0x7F247DD4u;
    // 7F247DD4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247DD8:
    ctx->pc = 0x7F247DD8u;
    // 7F247DD8: lfs     f3, 20732(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F247DD8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20732);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F247DDC:
    ctx->pc = 0x7F247DDCu;
    // 7F247DDC: addi    r31, r30, 288
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(288);

label_7F247DE0:
    ctx->pc = 0x7F247DE0u;
    // 7F247DE0: lfs     f0, 20712(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F247DE0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F247DE4:
    ctx->pc = 0x7F247DE4u;
    // 7F247DE4: lfs     f4, 20728(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F247DE4u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(20728);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F247DE8:
    ctx->pc = 0x7F247DE8u;
    // 7F247DE8: lfs     f2, 20736(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F247DE8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F247DEC:
    ctx->pc = 0x7F247DECu;
    // 7F247DEC: lfs     f1, 20740(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F247DECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20740);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F247DF0:
    ctx->pc = 0x7F247DF0u;
    // 7F247DF0: stfs     f4, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247DF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_7F247DF4:
    ctx->pc = 0x7F247DF4u;
    // 7F247DF4: stfs     f3, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F247DF8:
    ctx->pc = 0x7F247DF8u;
    // 7F247DF8: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247DF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F247DFC:
    ctx->pc = 0x7F247DFCu;
    // 7F247DFC: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247DFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F247E00:
    ctx->pc = 0x7F247E00u;
    // 7F247E00: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247E00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F247E04:
    ctx->pc = 0x7F247E04u;
    // 7F247E04: stfs     f3, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247E04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F247E08:
    ctx->pc = 0x7F247E08u;
    // 7F247E08: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F247E08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F247E0C:
    ctx->pc = 0x7F247E0Cu;
    // 7F247E0C: lwz     r0, 528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247E10:
    ctx->pc = 0x7F247E10u;
    // 7F247E10: cmpwi   r0, 0
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

label_7F247E14:
    ctx->pc = 0x7F247E14u;
    // 7F247E14: bc    4, 2, 0x7F247E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247E54;
        }
    }

label_7F247E18:
    ctx->pc = 0x7F247E18u;
    ctx->downcount -= 10;
    // 7F247E18: lwz     r3, 512(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247E1C:
    ctx->pc = 0x7F247E1Cu;
    // 7F247E1C: lwz     r0, 524(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247E20:
    ctx->pc = 0x7F247E20u;
    // 7F247E20: lwz     r4, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247E24:
    ctx->pc = 0x7F247E24u;
    // 7F247E24: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F247E28:
    ctx->pc = 0x7F247E28u;
    // 7F247E28: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247E2C:
    ctx->pc = 0x7F247E2Cu;
    // 7F247E2C: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F247E30:
    ctx->pc = 0x7F247E30u;
    // 7F247E30: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F247E34:
    ctx->pc = 0x7F247E34u;
    // 7F247E34: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F247E38u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F247E38:
    ctx->pc = 0x7F247E38u;
    ctx->downcount -= 2;
    // 7F247E38: addi    r3, r30, 264
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(264);

label_7F247E3C:
    ctx->pc = 0x7F247E3Cu;
    // 7F247E3C: bl      0x7F3B3134
    {
            ctx->lr = 0x7F247E40u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F247E40:
    ctx->pc = 0x7F247E40u;
    ctx->downcount -= 2;
    // 7F247E40: addi    r3, r30, 280
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(280);

label_7F247E44:
    ctx->pc = 0x7F247E44u;
    // 7F247E44: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F247E48u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F247E48:
    ctx->pc = 0x7F247E48u;
    ctx->downcount -= 2;
    // 7F247E48: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F247E4C:
    ctx->pc = 0x7F247E4Cu;
    // 7F247E4C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F247E50u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F247E50:
    ctx->pc = 0x7F247E50u;
    ctx->downcount -= 1;
    // 7F247E50: b       0x7F247E68
    {
            goto label_7F247E68;
    }

label_7F247E54:
    ctx->pc = 0x7F247E54u;
    ctx->downcount -= 3;
    // 7F247E54: addi    r3, r30, 264
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(264);

label_7F247E58:
    ctx->pc = 0x7F247E58u;
    // 7F247E58: addi    r4, r30, 280
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(280);

label_7F247E5C:
    ctx->pc = 0x7F247E5Cu;
    // 7F247E5C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F247E60u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F247E60:
    ctx->pc = 0x7F247E60u;
    ctx->downcount -= 2;
    // 7F247E60: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F247E64:
    ctx->pc = 0x7F247E64u;
    // 7F247E64: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F247E68u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F247E68:
    ctx->pc = 0x7F247E68u;
    ctx->downcount -= 8;
    // 7F247E68: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F247E6C:
    ctx->pc = 0x7F247E6Cu;
    // 7F247E6C: lwz     r5, 540(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(540);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F247E70:
    ctx->pc = 0x7F247E70u;
    // 7F247E70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247E74:
    ctx->pc = 0x7F247E74u;
    // 7F247E74: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F247E78:
    ctx->pc = 0x7F247E78u;
    // 7F247E78: addi    r4, r4, 16401
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16401);

label_7F247E7C:
    ctx->pc = 0x7F247E7Cu;
    // 7F247E7C: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F247E80:
    ctx->pc = 0x7F247E80u;
    // 7F247E80: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F247E84:
    ctx->pc = 0x7F247E84u;
    // 7F247E84: bl      0x7F014788
    {
            ctx->lr = 0x7F247E88u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F247E88:
    ctx->pc = 0x7F247E88u;
    ctx->downcount -= 6;
    // 7F247E88: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F247E8C:
    ctx->pc = 0x7F247E8Cu;
    // 7F247E8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247E90:
    ctx->pc = 0x7F247E90u;
    // 7F247E90: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F247E94:
    ctx->pc = 0x7F247E94u;
    // 7F247E94: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F247E98:
    ctx->pc = 0x7F247E98u;
    // 7F247E98: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F247E9C:
    ctx->pc = 0x7F247E9Cu;
    // 7F247E9C: bl      0x7F014964
    {
            ctx->lr = 0x7F247EA0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F247EA0:
    ctx->pc = 0x7F247EA0u;
    ctx->downcount -= 9;
    // 7F247EA0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F247EA4:
    ctx->pc = 0x7F247EA4u;
    // 7F247EA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247EA8:
    ctx->pc = 0x7F247EA8u;
    // 7F247EA8: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F247EAC:
    ctx->pc = 0x7F247EACu;
    // 7F247EAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247EB0:
    ctx->pc = 0x7F247EB0u;
    // 7F247EB0: addi    r4, r30, 480
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(480);

label_7F247EB4:
    ctx->pc = 0x7F247EB4u;
    // 7F247EB4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F247EB8:
    ctx->pc = 0x7F247EB8u;
    // 7F247EB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F247EBC:
    ctx->pc = 0x7F247EBCu;
    // 7F247EBC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F247EC0:
    ctx->pc = 0x7F247EC0u;
    // 7F247EC0: bl      0x7F014B78
    {
            ctx->lr = 0x7F247EC4u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F247EC4:
    ctx->pc = 0x7F247EC4u;
    ctx->downcount -= 2;
    // 7F247EC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247EC8:
    ctx->pc = 0x7F247EC8u;
    // 7F247EC8: bl      0x7F0148A0
    {
            ctx->lr = 0x7F247ECCu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F247ECC:
    ctx->pc = 0x7F247ECCu;
    ctx->downcount -= 5;
    // 7F247ECC: lis     r4, 32548
    ctx->gpr[4] = ((u32)(s32)(32548) << 16);

label_7F247ED0:
    ctx->pc = 0x7F247ED0u;
    // 7F247ED0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F247ED4:
    ctx->pc = 0x7F247ED4u;
    // 7F247ED4: addi    r4, r4, 31772
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(31772);

label_7F247ED8:
    ctx->pc = 0x7F247ED8u;
    // 7F247ED8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F247EDC:
    ctx->pc = 0x7F247EDCu;
    // 7F247EDC: bl      0x7F014B6C
    {
            ctx->lr = 0x7F247EE0u;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F247EE0:
    ctx->pc = 0x7F247EE0u;
    ctx->downcount -= 16;
    // 7F247EE0: lmw     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F247EE4:
    ctx->pc = 0x7F247EE4u;
    // 7F247EE4: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247EE8:
    ctx->pc = 0x7F247EE8u;
    // 7F247EE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247EEC:
    ctx->pc = 0x7F247EECu;
    // 7F247EEC: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F247EF0:
    ctx->pc = 0x7F247EF0u;
    // 7F247EF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247EF4:
    ctx->pc = 0x7F247EF4u;
    ctx->downcount -= 8;
    // 7F247EF4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247EF8:
    ctx->pc = 0x7F247EF8u;
    // 7F247EF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247EFC:
    ctx->pc = 0x7F247EFCu;
    // 7F247EFC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247F00:
    ctx->pc = 0x7F247F00u;
    // 7F247F00: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F247F04:
    ctx->pc = 0x7F247F04u;
    // 7F247F04: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F247F08:
    ctx->pc = 0x7F247F08u;
    // 7F247F08: lwz     r0, 528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247F0C:
    ctx->pc = 0x7F247F0Cu;
    // 7F247F0C: cmpwi   r0, 0
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

label_7F247F10:
    ctx->pc = 0x7F247F10u;
    // 7F247F10: bc    4, 2, 0x7F247F68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F247F68;
        }
    }

label_7F247F14:
    ctx->pc = 0x7F247F14u;
    ctx->downcount -= 10;
    // 7F247F14: lwz     r3, 512(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F247F18:
    ctx->pc = 0x7F247F18u;
    // 7F247F18: lwz     r0, 524(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(524);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247F1C:
    ctx->pc = 0x7F247F1Cu;
    // 7F247F1C: lwz     r4, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F247F20:
    ctx->pc = 0x7F247F20u;
    // 7F247F20: mulli   r3, r0, 324
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)324);

label_7F247F24:
    ctx->pc = 0x7F247F24u;
    // 7F247F24: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247F28:
    ctx->pc = 0x7F247F28u;
    // 7F247F28: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F247F2C:
    ctx->pc = 0x7F247F2Cu;
    // 7F247F2C: add   r3, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F247F30:
    ctx->pc = 0x7F247F30u;
    // 7F247F30: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F247F34u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F247F34:
    ctx->pc = 0x7F247F34u;
    ctx->downcount -= 2;
    // 7F247F34: addi    r3, r31, 264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(264);

label_7F247F38:
    ctx->pc = 0x7F247F38u;
    // 7F247F38: bl      0x7F3B3134
    {
            ctx->lr = 0x7F247F3Cu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F247F3C:
    ctx->pc = 0x7F247F3Cu;
    ctx->downcount -= 2;
    // 7F247F3C: addi    r3, r31, 280
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(280);

label_7F247F40:
    ctx->pc = 0x7F247F40u;
    // 7F247F40: bl      0x7F3B31DC
    {
            ctx->lr = 0x7F247F44u;
            ctx->pc = 0x7F3B31DCu;
            return;
    }

label_7F247F44:
    ctx->pc = 0x7F247F44u;
    ctx->downcount -= 2;
    // 7F247F44: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F247F48:
    ctx->pc = 0x7F247F48u;
    // 7F247F48: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F247F4Cu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F247F4C:
    ctx->pc = 0x7F247F4Cu;
    ctx->downcount -= 6;
    // 7F247F4C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F247F50:
    ctx->pc = 0x7F247F50u;
    // 7F247F50: addi    r3, r31, 288
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(288);

label_7F247F54:
    ctx->pc = 0x7F247F54u;
    // 7F247F54: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F247F58:
    ctx->pc = 0x7F247F58u;
    // 7F247F58: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F247F5C:
    ctx->pc = 0x7F247F5Cu;
    // 7F247F5C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F247F60:
    ctx->pc = 0x7F247F60u;
    // 7F247F60: bl      0x7F014964
    {
            ctx->lr = 0x7F247F64u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F247F64:
    ctx->pc = 0x7F247F64u;
    ctx->downcount -= 1;
    // 7F247F64: b       0x7F247F78
    {
            goto label_7F247F78;
    }

label_7F247F68:
    ctx->pc = 0x7F247F68u;
    ctx->downcount -= 4;
    // 7F247F68: addi    r3, r31, 264
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(264);

label_7F247F6C:
    ctx->pc = 0x7F247F6Cu;
    // 7F247F6C: addi    r4, r31, 136
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(136);

label_7F247F70:
    ctx->pc = 0x7F247F70u;
    // 7F247F70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247F74:
    ctx->pc = 0x7F247F74u;
    // 7F247F74: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F247F78u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F247F78:
    ctx->pc = 0x7F247F78u;
    ctx->downcount -= 7;
    // 7F247F78: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247F7C:
    ctx->pc = 0x7F247F7Cu;
    // 7F247F7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F247F80:
    ctx->pc = 0x7F247F80u;
    // 7F247F80: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F247F84:
    ctx->pc = 0x7F247F84u;
    // 7F247F84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F247F88:
    ctx->pc = 0x7F247F88u;
    // 7F247F88: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F247F8C:
    ctx->pc = 0x7F247F8Cu;
    // 7F247F8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F247F90:
    ctx->pc = 0x7F247F90u;
    ctx->downcount -= 12;
    // 7F247F90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F247F94:
    ctx->pc = 0x7F247F94u;
    // 7F247F94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F247F98:
    ctx->pc = 0x7F247F98u;
    // 7F247F98: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F247F9C:
    ctx->pc = 0x7F247F9Cu;
    // 7F247F9C: lis     r6, 32586
    ctx->gpr[6] = ((u32)(s32)(32586) << 16);

label_7F247FA0:
    ctx->pc = 0x7F247FA0u;
    // 7F247FA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F247FA4:
    ctx->pc = 0x7F247FA4u;
    // 7F247FA4: addi    r9, r5, 20080
    ctx->gpr[9] = ctx->gpr[5] + (u32)(s32)(20080);

label_7F247FA8:
    ctx->pc = 0x7F247FA8u;
    // 7F247FA8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F247FAC:
    ctx->pc = 0x7F247FACu;
    // 7F247FAC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F247FB0:
    ctx->pc = 0x7F247FB0u;
    // 7F247FB0: lwz     r10, 21616(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(21616);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F247FB4:
    ctx->pc = 0x7F247FB4u;
    // 7F247FB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F247FB8:
    ctx->pc = 0x7F247FB8u;
    // 7F247FB8: lwz     r11, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F247FBC:
    ctx->pc = 0x7F247FBCu;
    // 7F247FBC: b       0x7F24803C
    {
            goto label_7F24803C;
    }

label_7F247FC0:
    ctx->downcount -= 5;
    // 7F247FC0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F247FC4:
    ctx->pc = 0x7F247FC4u;
    // 7F247FC4: mtctr    r10
    ctx->ctr = ctx->gpr[10];

label_7F247FC8:
    // 7F247FC8: cmpwi   r10, 0
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

label_7F247FCC:
    // 7F247FCC: bc    4, 1, 0x7F248034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F248034;
        }
    }

label_7F247FD0:
    ctx->pc = 0x7F247FD0u;
    ctx->downcount -= 6;
    // 7F247FD0: lwzx    r12, r9, r5
    {
        u32 ea = ctx->gpr[9] + ctx->gpr[5];
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F247FD4:
    ctx->pc = 0x7F247FD4u;
    // 7F247FD4: lwz     r7, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F247FD8:
    ctx->pc = 0x7F247FD8u;
    // 7F247FD8: lwz     r8, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F247FDC:
    ctx->pc = 0x7F247FDCu;
    // 7F247FDC: lwzx    r0, r7, r6
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247FE0:
    // 7F247FE0: cmplw   r8, r0
    {
        u32 val_a = (u32)(ctx->gpr[8]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F247FE4:
    // 7F247FE4: bc    4, 2, 0x7F24802C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24802C;
        }
    }

label_7F247FE8:
    ctx->pc = 0x7F247FE8u;
    ctx->downcount -= 5;
    // 7F247FE8: lwz     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F247FEC:
    ctx->pc = 0x7F247FECu;
    // 7F247FEC: lwz     r8, 516(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(516);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F247FF0:
    ctx->pc = 0x7F247FF0u;
    // 7F247FF0: lwzx    r0, r7, r6
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F247FF4:
    // 7F247FF4: cmpw    r8, r0
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

label_7F247FF8:
    // 7F247FF8: bc    4, 2, 0x7F24802C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F24802C;
        }
    }

label_7F247FFC:
    ctx->pc = 0x7F247FFCu;
    ctx->downcount -= 11;
    // 7F247FFC: stw     r12, 512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(512);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F248000:
    // 7F248000: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F248004:
    // 7F248004: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F248008:
    ctx->pc = 0x7F248008u;
    // 7F248008: lwz     r7, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F24800C:
    ctx->pc = 0x7F24800Cu;
    // 7F24800C: stw     r7, 532(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(532);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F248010:
    ctx->pc = 0x7F248010u;
    // 7F248010: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248014:
    ctx->pc = 0x7F248014u;
    // 7F248014: lwzx    r4, r4, r6
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[6];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248018:
    ctx->pc = 0x7F248018u;
    // 7F248018: stw     r4, 524(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(524);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F24801C:
    ctx->pc = 0x7F24801Cu;
    // 7F24801C: stw     r0, 528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(528);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248020:
    ctx->pc = 0x7F248020u;
    // 7F248020: lwz     r4, 548(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(548);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F248024:
    // 7F248024: bl      0x7F247B78
    {
            ctx->lr = 0x7F248028u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247B78u;
                return;
            }
            goto label_7F247B78;
    }

label_7F248028:
    ctx->downcount -= 1;
    // 7F248028: b       0x7F24804C
    {
            goto label_7F24804C;
    }

label_7F24802C:
    ctx->downcount -= 2;
    // 7F24802C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F248030:
    // 7F248030: bc    16, 0, 0x7F247FD0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247FD0u;
                return;
            }
            goto label_7F247FD0;
        }
    }

label_7F248034:
    ctx->downcount -= 2;
    // 7F248034: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F248038:
    // 7F248038: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_7F24803C:
    ctx->downcount -= 2;
    // 7F24803C: cmpw    r31, r11
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[11]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F248040:
    // 7F248040: bc    12, 0, 0x7F247FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247FC0u;
                return;
            }
            goto label_7F247FC0;
        }
    }

label_7F248044:
    ctx->pc = 0x7F248044u;
    ctx->downcount -= 2;
    // 7F248044: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F248048:
    ctx->pc = 0x7F248048u;
    // 7F248048: stw     r0, 528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(528);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F24804C:
    ctx->pc = 0x7F24804Cu;
    ctx->downcount -= 6;
    // 7F24804C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F248050:
    ctx->pc = 0x7F248050u;
    // 7F248050: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F248054:
    ctx->pc = 0x7F248054u;
    // 7F248054: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F248058:
    ctx->pc = 0x7F248058u;
    // 7F248058: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F24805C:
    ctx->pc = 0x7F24805Cu;
    // 7F24805C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2440EC;
        }
    }

label_7F248060:
    ctx->pc = 0x7F248060u;
    ctx->downcount -= 45;
    // 7F248060: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F248064:
    ctx->pc = 0x7F248064u;
    // 7F248064: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F248068:
    ctx->pc = 0x7F248068u;
    // 7F248068: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F24806C:
    ctx->pc = 0x7F24806Cu;
    // 7F24806C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F248070:
    ctx->pc = 0x7F248070u;
    // 7F248070: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F248074:
    ctx->pc = 0x7F248074u;
    // 7F248074: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F248078:
    ctx->pc = 0x7F248078u;
    // 7F248078: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F24807C:
    ctx->pc = 0x7F24807Cu;
    // 7F24807C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F248080:
    ctx->pc = 0x7F248080u;
    // 7F248080: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F248084:
    ctx->pc = 0x7F248084u;
    // 7F248084: or   r31, r9, r9
    {
        ctx->gpr[31] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F248088:
    ctx->pc = 0x7F248088u;
    // 7F248088: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F24808C:
    ctx->pc = 0x7F24808Cu;
    // 7F24808C: lwz     r11, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F248090:
    ctx->pc = 0x7F248090u;
    // 7F248090: stw     r4, 264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F248094:
    ctx->pc = 0x7F248094u;
    // 7F248094: or   r4, r7, r7
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F248098:
    ctx->pc = 0x7F248098u;
    // 7F248098: stw     r11, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F24809C:
    ctx->pc = 0x7F24809Cu;
    // 7F24809C: lwz     r7, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2480A0:
    ctx->pc = 0x7F2480A0u;
    // 7F2480A0: lwz     r6, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2480A4:
    ctx->pc = 0x7F2480A4u;
    // 7F2480A4: stw     r7, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2480A8:
    ctx->pc = 0x7F2480A8u;
    // 7F2480A8: stw     r6, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2480AC:
    ctx->pc = 0x7F2480ACu;
    // 7F2480AC: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2480B0:
    ctx->pc = 0x7F2480B0u;
    // 7F2480B0: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2480B4:
    ctx->pc = 0x7F2480B4u;
    // 7F2480B4: stw     r6, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2480B8:
    ctx->pc = 0x7F2480B8u;
    // 7F2480B8: stw     r5, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2480BC:
    ctx->pc = 0x7F2480BCu;
    // 7F2480BC: stw     r8, 516(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(516);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2480C0:
    ctx->pc = 0x7F2480C0u;
    // 7F2480C0: stw     r10, 536(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(536);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2480C4:
    ctx->pc = 0x7F2480C4u;
    // 7F2480C4: stw     r10, 512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(512);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2480C8:
    ctx->pc = 0x7F2480C8u;
    // 7F2480C8: stw     r0, 528(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(528);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2480CC:
    ctx->pc = 0x7F2480CCu;
    // 7F2480CC: lwz     r0, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2480D0:
    ctx->pc = 0x7F2480D0u;
    // 7F2480D0: stw     r0, 548(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2480D4:
    ctx->pc = 0x7F2480D4u;
    // 7F2480D4: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2480D8:
    ctx->pc = 0x7F2480D8u;
    // 7F2480D8: stw     r0, 552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(552);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2480DC:
    ctx->pc = 0x7F2480DCu;
    // 7F2480DC: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2480E0:
    ctx->pc = 0x7F2480E0u;
    // 7F2480E0: stw     r0, 556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2480E4:
    ctx->pc = 0x7F2480E4u;
    // 7F2480E4: stw     r10, 544(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(544);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2480E8:
    ctx->pc = 0x7F2480E8u;
    // 7F2480E8: bl      0x7F247F90
    {
            ctx->lr = 0x7F2480ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F247F90u;
                return;
            }
            goto label_7F247F90;
    }

    ctx->pc = 0x7F2480ECu;
    return;
return_dispatch_7F2440EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F2440F4u: goto label_7F2440F4;
    case 0x7F244118u: goto label_7F244118;
    case 0x7F244148u: goto label_7F244148;
    case 0x7F244150u: goto label_7F244150;
    case 0x7F2441B0u: goto label_7F2441B0;
    case 0x7F2441C4u: goto label_7F2441C4;
    case 0x7F2441DCu: goto label_7F2441DC;
    case 0x7F2441FCu: goto label_7F2441FC;
    case 0x7F244228u: goto label_7F244228;
    case 0x7F244298u: goto label_7F244298;
    case 0x7F2442B4u: goto label_7F2442B4;
    case 0x7F2442F4u: goto label_7F2442F4;
    case 0x7F244304u: goto label_7F244304;
    case 0x7F244354u: goto label_7F244354;
    case 0x7F244394u: goto label_7F244394;
    case 0x7F2443A8u: goto label_7F2443A8;
    case 0x7F2443D4u: goto label_7F2443D4;
    case 0x7F244440u: goto label_7F244440;
    case 0x7F24445Cu: goto label_7F24445C;
    case 0x7F24447Cu: goto label_7F24447C;
    case 0x7F244488u: goto label_7F244488;
    case 0x7F244494u: goto label_7F244494;
    case 0x7F244514u: goto label_7F244514;
    case 0x7F24451Cu: goto label_7F24451C;
    case 0x7F24458Cu: goto label_7F24458C;
    case 0x7F2445B0u: goto label_7F2445B0;
    case 0x7F2445C8u: goto label_7F2445C8;
    case 0x7F2445D8u: goto label_7F2445D8;
    case 0x7F2445E4u: goto label_7F2445E4;
    case 0x7F2445F0u: goto label_7F2445F0;
    case 0x7F2445FCu: goto label_7F2445FC;
    case 0x7F244608u: goto label_7F244608;
    case 0x7F244614u: goto label_7F244614;
    case 0x7F24461Cu: goto label_7F24461C;
    case 0x7F244680u: goto label_7F244680;
    case 0x7F24469Cu: goto label_7F24469C;
    case 0x7F2446E0u: goto label_7F2446E0;
    case 0x7F2446F0u: goto label_7F2446F0;
    case 0x7F244724u: goto label_7F244724;
    case 0x7F244748u: goto label_7F244748;
    case 0x7F24476Cu: goto label_7F24476C;
    case 0x7F2447E8u: goto label_7F2447E8;
    case 0x7F2447F8u: goto label_7F2447F8;
    case 0x7F24480Cu: goto label_7F24480C;
    case 0x7F24481Cu: goto label_7F24481C;
    case 0x7F24484Cu: goto label_7F24484C;
    case 0x7F244884u: goto label_7F244884;
    case 0x7F244894u: goto label_7F244894;
    case 0x7F2448D0u: goto label_7F2448D0;
    case 0x7F2448F8u: goto label_7F2448F8;
    case 0x7F244900u: goto label_7F244900;
    case 0x7F24490Cu: goto label_7F24490C;
    case 0x7F244918u: goto label_7F244918;
    case 0x7F244958u: goto label_7F244958;
    case 0x7F2449A4u: goto label_7F2449A4;
    case 0x7F2449D0u: goto label_7F2449D0;
    case 0x7F244A3Cu: goto label_7F244A3C;
    case 0x7F244A58u: goto label_7F244A58;
    case 0x7F244A94u: goto label_7F244A94;
    case 0x7F244AA4u: goto label_7F244AA4;
    case 0x7F244B18u: goto label_7F244B18;
    case 0x7F244B3Cu: goto label_7F244B3C;
    case 0x7F244B58u: goto label_7F244B58;
    case 0x7F244BBCu: goto label_7F244BBC;
    case 0x7F244C20u: goto label_7F244C20;
    case 0x7F244C30u: goto label_7F244C30;
    case 0x7F244C50u: goto label_7F244C50;
    case 0x7F244C64u: goto label_7F244C64;
    case 0x7F244C78u: goto label_7F244C78;
    case 0x7F244C8Cu: goto label_7F244C8C;
    case 0x7F244CACu: goto label_7F244CAC;
    case 0x7F244D40u: goto label_7F244D40;
    case 0x7F244D64u: goto label_7F244D64;
    case 0x7F244DA0u: goto label_7F244DA0;
    case 0x7F244DB0u: goto label_7F244DB0;
    case 0x7F244DC8u: goto label_7F244DC8;
    case 0x7F244DF0u: goto label_7F244DF0;
    case 0x7F244E50u: goto label_7F244E50;
    case 0x7F244EDCu: goto label_7F244EDC;
    case 0x7F244F20u: goto label_7F244F20;
    case 0x7F244F44u: goto label_7F244F44;
    case 0x7F244FB4u: goto label_7F244FB4;
    case 0x7F244FFCu: goto label_7F244FFC;
    case 0x7F245068u: goto label_7F245068;
    case 0x7F245130u: goto label_7F245130;
    case 0x7F245138u: goto label_7F245138;
    case 0x7F24516Cu: goto label_7F24516C;
    case 0x7F2452C0u: goto label_7F2452C0;
    case 0x7F2453B8u: goto label_7F2453B8;
    case 0x7F2453C8u: goto label_7F2453C8;
    case 0x7F2454CCu: goto label_7F2454CC;
    case 0x7F2454D4u: goto label_7F2454D4;
    case 0x7F2454ECu: goto label_7F2454EC;
    case 0x7F2454F4u: goto label_7F2454F4;
    case 0x7F24556Cu: goto label_7F24556C;
    case 0x7F245648u: goto label_7F245648;
    case 0x7F24567Cu: goto label_7F24567C;
    case 0x7F2456B0u: goto label_7F2456B0;
    case 0x7F2456E4u: goto label_7F2456E4;
    case 0x7F245724u: goto label_7F245724;
    case 0x7F245764u: goto label_7F245764;
    case 0x7F245798u: goto label_7F245798;
    case 0x7F2457E4u: goto label_7F2457E4;
    case 0x7F245824u: goto label_7F245824;
    case 0x7F24583Cu: goto label_7F24583C;
    case 0x7F245860u: goto label_7F245860;
    case 0x7F245870u: goto label_7F245870;
    case 0x7F245880u: goto label_7F245880;
    case 0x7F245890u: goto label_7F245890;
    case 0x7F2458F8u: goto label_7F2458F8;
    case 0x7F24591Cu: goto label_7F24591C;
    case 0x7F245950u: goto label_7F245950;
    case 0x7F245960u: goto label_7F245960;
    case 0x7F245A08u: goto label_7F245A08;
    case 0x7F245A1Cu: goto label_7F245A1C;
    case 0x7F245A30u: goto label_7F245A30;
    case 0x7F245A44u: goto label_7F245A44;
    case 0x7F245A58u: goto label_7F245A58;
    case 0x7F245ABCu: goto label_7F245ABC;
    case 0x7F245B08u: goto label_7F245B08;
    case 0x7F245B38u: goto label_7F245B38;
    case 0x7F245B54u: goto label_7F245B54;
    case 0x7F245B90u: goto label_7F245B90;
    case 0x7F245BF0u: goto label_7F245BF0;
    case 0x7F245BF8u: goto label_7F245BF8;
    case 0x7F245C00u: goto label_7F245C00;
    case 0x7F245C28u: goto label_7F245C28;
    case 0x7F245C34u: goto label_7F245C34;
    case 0x7F245C4Cu: goto label_7F245C4C;
    case 0x7F245C84u: goto label_7F245C84;
    case 0x7F245CD0u: goto label_7F245CD0;
    case 0x7F245CECu: goto label_7F245CEC;
    case 0x7F245D08u: goto label_7F245D08;
    case 0x7F245D18u: goto label_7F245D18;
    case 0x7F245D5Cu: goto label_7F245D5C;
    case 0x7F245D80u: goto label_7F245D80;
    case 0x7F245DB4u: goto label_7F245DB4;
    case 0x7F245DC4u: goto label_7F245DC4;
    case 0x7F245E64u: goto label_7F245E64;
    case 0x7F245E80u: goto label_7F245E80;
    case 0x7F245E90u: goto label_7F245E90;
    case 0x7F245EA4u: goto label_7F245EA4;
    case 0x7F245EE0u: goto label_7F245EE0;
    case 0x7F245EECu: goto label_7F245EEC;
    case 0x7F245F48u: goto label_7F245F48;
    case 0x7F245F60u: goto label_7F245F60;
    case 0x7F245F84u: goto label_7F245F84;
    case 0x7F245FB4u: goto label_7F245FB4;
    case 0x7F24607Cu: goto label_7F24607C;
    case 0x7F2460B0u: goto label_7F2460B0;
    case 0x7F2460B8u: goto label_7F2460B8;
    case 0x7F2460E0u: goto label_7F2460E0;
    case 0x7F24612Cu: goto label_7F24612C;
    case 0x7F24615Cu: goto label_7F24615C;
    case 0x7F246170u: goto label_7F246170;
    case 0x7F2461B8u: goto label_7F2461B8;
    case 0x7F2461C0u: goto label_7F2461C0;
    case 0x7F2461D8u: goto label_7F2461D8;
    case 0x7F24622Cu: goto label_7F24622C;
    case 0x7F246250u: goto label_7F246250;
    case 0x7F246290u: goto label_7F246290;
    case 0x7F2462A0u: goto label_7F2462A0;
    case 0x7F246320u: goto label_7F246320;
    case 0x7F246340u: goto label_7F246340;
    case 0x7F2463B0u: goto label_7F2463B0;
    case 0x7F2463C4u: goto label_7F2463C4;
    case 0x7F246468u: goto label_7F246468;
    case 0x7F2464CCu: goto label_7F2464CC;
    case 0x7F2464D8u: goto label_7F2464D8;
    case 0x7F2465ECu: goto label_7F2465EC;
    case 0x7F246634u: goto label_7F246634;
    case 0x7F24665Cu: goto label_7F24665C;
    case 0x7F2466E4u: goto label_7F2466E4;
    case 0x7F24670Cu: goto label_7F24670C;
    case 0x7F246764u: goto label_7F246764;
    case 0x7F2467D4u: goto label_7F2467D4;
    case 0x7F2468A4u: goto label_7F2468A4;
    case 0x7F24693Cu: goto label_7F24693C;
    case 0x7F246948u: goto label_7F246948;
    case 0x7F246950u: goto label_7F246950;
    case 0x7F246958u: goto label_7F246958;
    case 0x7F246A14u: goto label_7F246A14;
    case 0x7F246A2Cu: goto label_7F246A2C;
    case 0x7F246A50u: goto label_7F246A50;
    case 0x7F246A80u: goto label_7F246A80;
    case 0x7F246B10u: goto label_7F246B10;
    case 0x7F246B7Cu: goto label_7F246B7C;
    case 0x7F246B84u: goto label_7F246B84;
    case 0x7F246BACu: goto label_7F246BAC;
    case 0x7F246BF8u: goto label_7F246BF8;
    case 0x7F246C28u: goto label_7F246C28;
    case 0x7F246C3Cu: goto label_7F246C3C;
    case 0x7F246C8Cu: goto label_7F246C8C;
    case 0x7F246CCCu: goto label_7F246CCC;
    case 0x7F246CF0u: goto label_7F246CF0;
    case 0x7F246D24u: goto label_7F246D24;
    case 0x7F246D34u: goto label_7F246D34;
    case 0x7F246DB8u: goto label_7F246DB8;
    case 0x7F246F20u: goto label_7F246F20;
    case 0x7F247004u: goto label_7F247004;
    case 0x7F247014u: goto label_7F247014;
    case 0x7F2470B8u: goto label_7F2470B8;
    case 0x7F2470E0u: goto label_7F2470E0;
    case 0x7F2470F0u: goto label_7F2470F0;
    case 0x7F247108u: goto label_7F247108;
    case 0x7F247220u: goto label_7F247220;
    case 0x7F247238u: goto label_7F247238;
    case 0x7F247260u: goto label_7F247260;
    case 0x7F2472CCu: goto label_7F2472CC;
    case 0x7F247310u: goto label_7F247310;
    case 0x7F247440u: goto label_7F247440;
    case 0x7F247460u: goto label_7F247460;
    case 0x7F247494u: goto label_7F247494;
    case 0x7F247508u: goto label_7F247508;
    case 0x7F247538u: goto label_7F247538;
    case 0x7F247544u: goto label_7F247544;
    case 0x7F247560u: goto label_7F247560;
    case 0x7F24757Cu: goto label_7F24757C;
    case 0x7F2475B0u: goto label_7F2475B0;
    case 0x7F2475C0u: goto label_7F2475C0;
    case 0x7F247738u: goto label_7F247738;
    case 0x7F247748u: goto label_7F247748;
    case 0x7F2477B8u: goto label_7F2477B8;
    case 0x7F2477D8u: goto label_7F2477D8;
    case 0x7F247834u: goto label_7F247834;
    case 0x7F247844u: goto label_7F247844;
    case 0x7F2478B0u: goto label_7F2478B0;
    case 0x7F2478C0u: goto label_7F2478C0;
    case 0x7F2478D4u: goto label_7F2478D4;
    case 0x7F247900u: goto label_7F247900;
    case 0x7F247970u: goto label_7F247970;
    case 0x7F247978u: goto label_7F247978;
    case 0x7F2479BCu: goto label_7F2479BC;
    case 0x7F247A30u: goto label_7F247A30;
    case 0x7F247A5Cu: goto label_7F247A5C;
    case 0x7F247A74u: goto label_7F247A74;
    case 0x7F247A7Cu: goto label_7F247A7C;
    case 0x7F247ABCu: goto label_7F247ABC;
    case 0x7F247AD0u: goto label_7F247AD0;
    case 0x7F247ADCu: goto label_7F247ADC;
    case 0x7F247AF0u: goto label_7F247AF0;
    case 0x7F247B00u: goto label_7F247B00;
    case 0x7F247B10u: goto label_7F247B10;
    case 0x7F247B18u: goto label_7F247B18;
    case 0x7F247B28u: goto label_7F247B28;
    case 0x7F247B4Cu: goto label_7F247B4C;
    case 0x7F247BBCu: goto label_7F247BBC;
    case 0x7F247BCCu: goto label_7F247BCC;
    case 0x7F247C0Cu: goto label_7F247C0C;
    case 0x7F247CACu: goto label_7F247CAC;
    case 0x7F247CBCu: goto label_7F247CBC;
    case 0x7F247CD0u: goto label_7F247CD0;
    case 0x7F247CDCu: goto label_7F247CDC;
    case 0x7F247CF0u: goto label_7F247CF0;
    case 0x7F247D00u: goto label_7F247D00;
    case 0x7F247D0Cu: goto label_7F247D0C;
    case 0x7F247D1Cu: goto label_7F247D1C;
    case 0x7F247D2Cu: goto label_7F247D2C;
    case 0x7F247D38u: goto label_7F247D38;
    case 0x7F247D44u: goto label_7F247D44;
    case 0x7F247D4Cu: goto label_7F247D4C;
    case 0x7F247D5Cu: goto label_7F247D5C;
    case 0x7F247D9Cu: goto label_7F247D9C;
    case 0x7F247E38u: goto label_7F247E38;
    case 0x7F247E40u: goto label_7F247E40;
    case 0x7F247E48u: goto label_7F247E48;
    case 0x7F247E50u: goto label_7F247E50;
    case 0x7F247E60u: goto label_7F247E60;
    case 0x7F247E68u: goto label_7F247E68;
    case 0x7F247E88u: goto label_7F247E88;
    case 0x7F247EA0u: goto label_7F247EA0;
    case 0x7F247EC4u: goto label_7F247EC4;
    case 0x7F247ECCu: goto label_7F247ECC;
    case 0x7F247EE0u: goto label_7F247EE0;
    case 0x7F247F34u: goto label_7F247F34;
    case 0x7F247F3Cu: goto label_7F247F3C;
    case 0x7F247F44u: goto label_7F247F44;
    case 0x7F247F4Cu: goto label_7F247F4C;
    case 0x7F247F64u: goto label_7F247F64;
    case 0x7F247F78u: goto label_7F247F78;
    case 0x7F248028u: goto label_7F248028;
    default: return;
    }
}

