// DolRecomp output
#include "../generated.h"

static void loop_7F2131DC(CPUState* ctx) {
label_7F2131DC:
    ctx->downcount -= 4;
    ctx->pc = 0x7F2131DCu;
    // 7F2131DC: stwx    r5, r4, r3
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 7F2131E0: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 7F2131E4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    // 7F2131E8: bc    16, 0, 0x7F2131DC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2131DCu;
                return;
            }
            goto label_7F2131DC;
        }
    }

    ctx->pc = 0x7F2131ECu;
}

void func_7F2100EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2100ECu: goto label_7F2100EC;
    case 0x7F2100F0u: goto label_7F2100F0;
    case 0x7F2100F4u: goto label_7F2100F4;
    case 0x7F2100F8u: goto label_7F2100F8;
    case 0x7F2100FCu: goto label_7F2100FC;
    case 0x7F210100u: goto label_7F210100;
    case 0x7F210104u: goto label_7F210104;
    case 0x7F210108u: goto label_7F210108;
    case 0x7F21010Cu: goto label_7F21010C;
    case 0x7F210110u: goto label_7F210110;
    case 0x7F210114u: goto label_7F210114;
    case 0x7F210118u: goto label_7F210118;
    case 0x7F21011Cu: goto label_7F21011C;
    case 0x7F210120u: goto label_7F210120;
    case 0x7F210124u: goto label_7F210124;
    case 0x7F210128u: goto label_7F210128;
    case 0x7F21012Cu: goto label_7F21012C;
    case 0x7F210130u: goto label_7F210130;
    case 0x7F210134u: goto label_7F210134;
    case 0x7F210138u: goto label_7F210138;
    case 0x7F21013Cu: goto label_7F21013C;
    case 0x7F210140u: goto label_7F210140;
    case 0x7F210144u: goto label_7F210144;
    case 0x7F210148u: goto label_7F210148;
    case 0x7F21014Cu: goto label_7F21014C;
    case 0x7F210150u: goto label_7F210150;
    case 0x7F210154u: goto label_7F210154;
    case 0x7F210158u: goto label_7F210158;
    case 0x7F21015Cu: goto label_7F21015C;
    case 0x7F210160u: goto label_7F210160;
    case 0x7F210164u: goto label_7F210164;
    case 0x7F210168u: goto label_7F210168;
    case 0x7F21016Cu: goto label_7F21016C;
    case 0x7F210170u: goto label_7F210170;
    case 0x7F210174u: goto label_7F210174;
    case 0x7F210178u: goto label_7F210178;
    case 0x7F21017Cu: goto label_7F21017C;
    case 0x7F210180u: goto label_7F210180;
    case 0x7F210184u: goto label_7F210184;
    case 0x7F210188u: goto label_7F210188;
    case 0x7F21018Cu: goto label_7F21018C;
    case 0x7F210190u: goto label_7F210190;
    case 0x7F210194u: goto label_7F210194;
    case 0x7F210198u: goto label_7F210198;
    case 0x7F21019Cu: goto label_7F21019C;
    case 0x7F2101A0u: goto label_7F2101A0;
    case 0x7F2101A4u: goto label_7F2101A4;
    case 0x7F2101A8u: goto label_7F2101A8;
    case 0x7F2101ACu: goto label_7F2101AC;
    case 0x7F2101B0u: goto label_7F2101B0;
    case 0x7F2101B4u: goto label_7F2101B4;
    case 0x7F2101B8u: goto label_7F2101B8;
    case 0x7F2101BCu: goto label_7F2101BC;
    case 0x7F2101C0u: goto label_7F2101C0;
    case 0x7F2101C4u: goto label_7F2101C4;
    case 0x7F2101C8u: goto label_7F2101C8;
    case 0x7F2101CCu: goto label_7F2101CC;
    case 0x7F2101D0u: goto label_7F2101D0;
    case 0x7F2101D4u: goto label_7F2101D4;
    case 0x7F2101D8u: goto label_7F2101D8;
    case 0x7F2101DCu: goto label_7F2101DC;
    case 0x7F2101E0u: goto label_7F2101E0;
    case 0x7F2101E4u: goto label_7F2101E4;
    case 0x7F2101E8u: goto label_7F2101E8;
    case 0x7F2101ECu: goto label_7F2101EC;
    case 0x7F2101F0u: goto label_7F2101F0;
    case 0x7F2101F4u: goto label_7F2101F4;
    case 0x7F2101F8u: goto label_7F2101F8;
    case 0x7F2101FCu: goto label_7F2101FC;
    case 0x7F210200u: goto label_7F210200;
    case 0x7F210204u: goto label_7F210204;
    case 0x7F210208u: goto label_7F210208;
    case 0x7F21020Cu: goto label_7F21020C;
    case 0x7F210210u: goto label_7F210210;
    case 0x7F210214u: goto label_7F210214;
    case 0x7F210218u: goto label_7F210218;
    case 0x7F21021Cu: goto label_7F21021C;
    case 0x7F210220u: goto label_7F210220;
    case 0x7F210224u: goto label_7F210224;
    case 0x7F210228u: goto label_7F210228;
    case 0x7F21022Cu: goto label_7F21022C;
    case 0x7F210230u: goto label_7F210230;
    case 0x7F210234u: goto label_7F210234;
    case 0x7F210238u: goto label_7F210238;
    case 0x7F21023Cu: goto label_7F21023C;
    case 0x7F210240u: goto label_7F210240;
    case 0x7F210244u: goto label_7F210244;
    case 0x7F210248u: goto label_7F210248;
    case 0x7F21024Cu: goto label_7F21024C;
    case 0x7F210250u: goto label_7F210250;
    case 0x7F210254u: goto label_7F210254;
    case 0x7F210258u: goto label_7F210258;
    case 0x7F21025Cu: goto label_7F21025C;
    case 0x7F210260u: goto label_7F210260;
    case 0x7F210264u: goto label_7F210264;
    case 0x7F210268u: goto label_7F210268;
    case 0x7F21026Cu: goto label_7F21026C;
    case 0x7F210270u: goto label_7F210270;
    case 0x7F210274u: goto label_7F210274;
    case 0x7F210278u: goto label_7F210278;
    case 0x7F21027Cu: goto label_7F21027C;
    case 0x7F210280u: goto label_7F210280;
    case 0x7F210284u: goto label_7F210284;
    case 0x7F210288u: goto label_7F210288;
    case 0x7F21028Cu: goto label_7F21028C;
    case 0x7F210290u: goto label_7F210290;
    case 0x7F210294u: goto label_7F210294;
    case 0x7F210298u: goto label_7F210298;
    case 0x7F21029Cu: goto label_7F21029C;
    case 0x7F2102A0u: goto label_7F2102A0;
    case 0x7F2102A4u: goto label_7F2102A4;
    case 0x7F2102A8u: goto label_7F2102A8;
    case 0x7F2102ACu: goto label_7F2102AC;
    case 0x7F2102B0u: goto label_7F2102B0;
    case 0x7F2102B4u: goto label_7F2102B4;
    case 0x7F2102B8u: goto label_7F2102B8;
    case 0x7F2102BCu: goto label_7F2102BC;
    case 0x7F2102C0u: goto label_7F2102C0;
    case 0x7F2102C4u: goto label_7F2102C4;
    case 0x7F2102C8u: goto label_7F2102C8;
    case 0x7F2102CCu: goto label_7F2102CC;
    case 0x7F2102D0u: goto label_7F2102D0;
    case 0x7F2102D4u: goto label_7F2102D4;
    case 0x7F2102D8u: goto label_7F2102D8;
    case 0x7F2102DCu: goto label_7F2102DC;
    case 0x7F2102E0u: goto label_7F2102E0;
    case 0x7F2102E4u: goto label_7F2102E4;
    case 0x7F2102E8u: goto label_7F2102E8;
    case 0x7F2102ECu: goto label_7F2102EC;
    case 0x7F2102F0u: goto label_7F2102F0;
    case 0x7F2102F4u: goto label_7F2102F4;
    case 0x7F2102F8u: goto label_7F2102F8;
    case 0x7F2102FCu: goto label_7F2102FC;
    case 0x7F210300u: goto label_7F210300;
    case 0x7F210304u: goto label_7F210304;
    case 0x7F210308u: goto label_7F210308;
    case 0x7F21030Cu: goto label_7F21030C;
    case 0x7F210310u: goto label_7F210310;
    case 0x7F210314u: goto label_7F210314;
    case 0x7F210318u: goto label_7F210318;
    case 0x7F21031Cu: goto label_7F21031C;
    case 0x7F210320u: goto label_7F210320;
    case 0x7F210324u: goto label_7F210324;
    case 0x7F210328u: goto label_7F210328;
    case 0x7F21032Cu: goto label_7F21032C;
    case 0x7F210330u: goto label_7F210330;
    case 0x7F210334u: goto label_7F210334;
    case 0x7F210338u: goto label_7F210338;
    case 0x7F21033Cu: goto label_7F21033C;
    case 0x7F210340u: goto label_7F210340;
    case 0x7F210344u: goto label_7F210344;
    case 0x7F210348u: goto label_7F210348;
    case 0x7F21034Cu: goto label_7F21034C;
    case 0x7F210350u: goto label_7F210350;
    case 0x7F210354u: goto label_7F210354;
    case 0x7F210358u: goto label_7F210358;
    case 0x7F21035Cu: goto label_7F21035C;
    case 0x7F210360u: goto label_7F210360;
    case 0x7F210364u: goto label_7F210364;
    case 0x7F210368u: goto label_7F210368;
    case 0x7F21036Cu: goto label_7F21036C;
    case 0x7F210370u: goto label_7F210370;
    case 0x7F210374u: goto label_7F210374;
    case 0x7F210378u: goto label_7F210378;
    case 0x7F21037Cu: goto label_7F21037C;
    case 0x7F210380u: goto label_7F210380;
    case 0x7F210384u: goto label_7F210384;
    case 0x7F210388u: goto label_7F210388;
    case 0x7F21038Cu: goto label_7F21038C;
    case 0x7F210390u: goto label_7F210390;
    case 0x7F210394u: goto label_7F210394;
    case 0x7F210398u: goto label_7F210398;
    case 0x7F21039Cu: goto label_7F21039C;
    case 0x7F2103A0u: goto label_7F2103A0;
    case 0x7F2103A4u: goto label_7F2103A4;
    case 0x7F2103A8u: goto label_7F2103A8;
    case 0x7F2103ACu: goto label_7F2103AC;
    case 0x7F2103B0u: goto label_7F2103B0;
    case 0x7F2103B4u: goto label_7F2103B4;
    case 0x7F2103B8u: goto label_7F2103B8;
    case 0x7F2103BCu: goto label_7F2103BC;
    case 0x7F2103C0u: goto label_7F2103C0;
    case 0x7F2103C4u: goto label_7F2103C4;
    case 0x7F2103C8u: goto label_7F2103C8;
    case 0x7F2103CCu: goto label_7F2103CC;
    case 0x7F2103D0u: goto label_7F2103D0;
    case 0x7F2103D4u: goto label_7F2103D4;
    case 0x7F2103D8u: goto label_7F2103D8;
    case 0x7F2103DCu: goto label_7F2103DC;
    case 0x7F2103E0u: goto label_7F2103E0;
    case 0x7F2103E4u: goto label_7F2103E4;
    case 0x7F2103E8u: goto label_7F2103E8;
    case 0x7F2103ECu: goto label_7F2103EC;
    case 0x7F2103F0u: goto label_7F2103F0;
    case 0x7F2103F4u: goto label_7F2103F4;
    case 0x7F2103F8u: goto label_7F2103F8;
    case 0x7F2103FCu: goto label_7F2103FC;
    case 0x7F210400u: goto label_7F210400;
    case 0x7F210404u: goto label_7F210404;
    case 0x7F210408u: goto label_7F210408;
    case 0x7F21040Cu: goto label_7F21040C;
    case 0x7F210410u: goto label_7F210410;
    case 0x7F210414u: goto label_7F210414;
    case 0x7F210418u: goto label_7F210418;
    case 0x7F21041Cu: goto label_7F21041C;
    case 0x7F210420u: goto label_7F210420;
    case 0x7F210424u: goto label_7F210424;
    case 0x7F210428u: goto label_7F210428;
    case 0x7F21042Cu: goto label_7F21042C;
    case 0x7F210430u: goto label_7F210430;
    case 0x7F210434u: goto label_7F210434;
    case 0x7F210438u: goto label_7F210438;
    case 0x7F21043Cu: goto label_7F21043C;
    case 0x7F210440u: goto label_7F210440;
    case 0x7F210444u: goto label_7F210444;
    case 0x7F210448u: goto label_7F210448;
    case 0x7F21044Cu: goto label_7F21044C;
    case 0x7F210450u: goto label_7F210450;
    case 0x7F210454u: goto label_7F210454;
    case 0x7F210458u: goto label_7F210458;
    case 0x7F21045Cu: goto label_7F21045C;
    case 0x7F210460u: goto label_7F210460;
    case 0x7F210464u: goto label_7F210464;
    case 0x7F210468u: goto label_7F210468;
    case 0x7F21046Cu: goto label_7F21046C;
    case 0x7F210470u: goto label_7F210470;
    case 0x7F210474u: goto label_7F210474;
    case 0x7F210478u: goto label_7F210478;
    case 0x7F21047Cu: goto label_7F21047C;
    case 0x7F210480u: goto label_7F210480;
    case 0x7F210484u: goto label_7F210484;
    case 0x7F210488u: goto label_7F210488;
    case 0x7F21048Cu: goto label_7F21048C;
    case 0x7F210490u: goto label_7F210490;
    case 0x7F210494u: goto label_7F210494;
    case 0x7F210498u: goto label_7F210498;
    case 0x7F21049Cu: goto label_7F21049C;
    case 0x7F2104A0u: goto label_7F2104A0;
    case 0x7F2104A4u: goto label_7F2104A4;
    case 0x7F2104A8u: goto label_7F2104A8;
    case 0x7F2104ACu: goto label_7F2104AC;
    case 0x7F2104B0u: goto label_7F2104B0;
    case 0x7F2104B4u: goto label_7F2104B4;
    case 0x7F2104B8u: goto label_7F2104B8;
    case 0x7F2104BCu: goto label_7F2104BC;
    case 0x7F2104C0u: goto label_7F2104C0;
    case 0x7F2104C4u: goto label_7F2104C4;
    case 0x7F2104C8u: goto label_7F2104C8;
    case 0x7F2104CCu: goto label_7F2104CC;
    case 0x7F2104D0u: goto label_7F2104D0;
    case 0x7F2104D4u: goto label_7F2104D4;
    case 0x7F2104D8u: goto label_7F2104D8;
    case 0x7F2104DCu: goto label_7F2104DC;
    case 0x7F2104E0u: goto label_7F2104E0;
    case 0x7F2104E4u: goto label_7F2104E4;
    case 0x7F2104E8u: goto label_7F2104E8;
    case 0x7F2104ECu: goto label_7F2104EC;
    case 0x7F2104F0u: goto label_7F2104F0;
    case 0x7F2104F4u: goto label_7F2104F4;
    case 0x7F2104F8u: goto label_7F2104F8;
    case 0x7F2104FCu: goto label_7F2104FC;
    case 0x7F210500u: goto label_7F210500;
    case 0x7F210504u: goto label_7F210504;
    case 0x7F210508u: goto label_7F210508;
    case 0x7F21050Cu: goto label_7F21050C;
    case 0x7F210510u: goto label_7F210510;
    case 0x7F210514u: goto label_7F210514;
    case 0x7F210518u: goto label_7F210518;
    case 0x7F21051Cu: goto label_7F21051C;
    case 0x7F210520u: goto label_7F210520;
    case 0x7F210524u: goto label_7F210524;
    case 0x7F210528u: goto label_7F210528;
    case 0x7F21052Cu: goto label_7F21052C;
    case 0x7F210530u: goto label_7F210530;
    case 0x7F210534u: goto label_7F210534;
    case 0x7F210538u: goto label_7F210538;
    case 0x7F21053Cu: goto label_7F21053C;
    case 0x7F210540u: goto label_7F210540;
    case 0x7F210544u: goto label_7F210544;
    case 0x7F210548u: goto label_7F210548;
    case 0x7F21054Cu: goto label_7F21054C;
    case 0x7F210550u: goto label_7F210550;
    case 0x7F210554u: goto label_7F210554;
    case 0x7F210558u: goto label_7F210558;
    case 0x7F21055Cu: goto label_7F21055C;
    case 0x7F210560u: goto label_7F210560;
    case 0x7F210564u: goto label_7F210564;
    case 0x7F210568u: goto label_7F210568;
    case 0x7F21056Cu: goto label_7F21056C;
    case 0x7F210570u: goto label_7F210570;
    case 0x7F210574u: goto label_7F210574;
    case 0x7F210578u: goto label_7F210578;
    case 0x7F21057Cu: goto label_7F21057C;
    case 0x7F210580u: goto label_7F210580;
    case 0x7F210584u: goto label_7F210584;
    case 0x7F210588u: goto label_7F210588;
    case 0x7F21058Cu: goto label_7F21058C;
    case 0x7F210590u: goto label_7F210590;
    case 0x7F210594u: goto label_7F210594;
    case 0x7F210598u: goto label_7F210598;
    case 0x7F21059Cu: goto label_7F21059C;
    case 0x7F2105A0u: goto label_7F2105A0;
    case 0x7F2105A4u: goto label_7F2105A4;
    case 0x7F2105A8u: goto label_7F2105A8;
    case 0x7F2105ACu: goto label_7F2105AC;
    case 0x7F2105B0u: goto label_7F2105B0;
    case 0x7F2105B4u: goto label_7F2105B4;
    case 0x7F2105B8u: goto label_7F2105B8;
    case 0x7F2105BCu: goto label_7F2105BC;
    case 0x7F2105C0u: goto label_7F2105C0;
    case 0x7F2105C4u: goto label_7F2105C4;
    case 0x7F2105C8u: goto label_7F2105C8;
    case 0x7F2105CCu: goto label_7F2105CC;
    case 0x7F2105D0u: goto label_7F2105D0;
    case 0x7F2105D4u: goto label_7F2105D4;
    case 0x7F2105D8u: goto label_7F2105D8;
    case 0x7F2105DCu: goto label_7F2105DC;
    case 0x7F2105E0u: goto label_7F2105E0;
    case 0x7F2105E4u: goto label_7F2105E4;
    case 0x7F2105E8u: goto label_7F2105E8;
    case 0x7F2105ECu: goto label_7F2105EC;
    case 0x7F2105F0u: goto label_7F2105F0;
    case 0x7F2105F4u: goto label_7F2105F4;
    case 0x7F2105F8u: goto label_7F2105F8;
    case 0x7F2105FCu: goto label_7F2105FC;
    case 0x7F210600u: goto label_7F210600;
    case 0x7F210604u: goto label_7F210604;
    case 0x7F210608u: goto label_7F210608;
    case 0x7F21060Cu: goto label_7F21060C;
    case 0x7F210610u: goto label_7F210610;
    case 0x7F210614u: goto label_7F210614;
    case 0x7F210618u: goto label_7F210618;
    case 0x7F21061Cu: goto label_7F21061C;
    case 0x7F210620u: goto label_7F210620;
    case 0x7F210624u: goto label_7F210624;
    case 0x7F210628u: goto label_7F210628;
    case 0x7F21062Cu: goto label_7F21062C;
    case 0x7F210630u: goto label_7F210630;
    case 0x7F210634u: goto label_7F210634;
    case 0x7F210638u: goto label_7F210638;
    case 0x7F21063Cu: goto label_7F21063C;
    case 0x7F210640u: goto label_7F210640;
    case 0x7F210644u: goto label_7F210644;
    case 0x7F210648u: goto label_7F210648;
    case 0x7F21064Cu: goto label_7F21064C;
    case 0x7F210650u: goto label_7F210650;
    case 0x7F210654u: goto label_7F210654;
    case 0x7F210658u: goto label_7F210658;
    case 0x7F21065Cu: goto label_7F21065C;
    case 0x7F210660u: goto label_7F210660;
    case 0x7F210664u: goto label_7F210664;
    case 0x7F210668u: goto label_7F210668;
    case 0x7F21066Cu: goto label_7F21066C;
    case 0x7F210670u: goto label_7F210670;
    case 0x7F210674u: goto label_7F210674;
    case 0x7F210678u: goto label_7F210678;
    case 0x7F21067Cu: goto label_7F21067C;
    case 0x7F210680u: goto label_7F210680;
    case 0x7F210684u: goto label_7F210684;
    case 0x7F210688u: goto label_7F210688;
    case 0x7F21068Cu: goto label_7F21068C;
    case 0x7F210690u: goto label_7F210690;
    case 0x7F210694u: goto label_7F210694;
    case 0x7F210698u: goto label_7F210698;
    case 0x7F21069Cu: goto label_7F21069C;
    case 0x7F2106A0u: goto label_7F2106A0;
    case 0x7F2106A4u: goto label_7F2106A4;
    case 0x7F2106A8u: goto label_7F2106A8;
    case 0x7F2106ACu: goto label_7F2106AC;
    case 0x7F2106B0u: goto label_7F2106B0;
    case 0x7F2106B4u: goto label_7F2106B4;
    case 0x7F2106B8u: goto label_7F2106B8;
    case 0x7F2106BCu: goto label_7F2106BC;
    case 0x7F2106C0u: goto label_7F2106C0;
    case 0x7F2106C4u: goto label_7F2106C4;
    case 0x7F2106C8u: goto label_7F2106C8;
    case 0x7F2106CCu: goto label_7F2106CC;
    case 0x7F2106D0u: goto label_7F2106D0;
    case 0x7F2106D4u: goto label_7F2106D4;
    case 0x7F2106D8u: goto label_7F2106D8;
    case 0x7F2106DCu: goto label_7F2106DC;
    case 0x7F2106E0u: goto label_7F2106E0;
    case 0x7F2106E4u: goto label_7F2106E4;
    case 0x7F2106E8u: goto label_7F2106E8;
    case 0x7F2106ECu: goto label_7F2106EC;
    case 0x7F2106F0u: goto label_7F2106F0;
    case 0x7F2106F4u: goto label_7F2106F4;
    case 0x7F2106F8u: goto label_7F2106F8;
    case 0x7F2106FCu: goto label_7F2106FC;
    case 0x7F210700u: goto label_7F210700;
    case 0x7F210704u: goto label_7F210704;
    case 0x7F210708u: goto label_7F210708;
    case 0x7F21070Cu: goto label_7F21070C;
    case 0x7F210710u: goto label_7F210710;
    case 0x7F210714u: goto label_7F210714;
    case 0x7F210718u: goto label_7F210718;
    case 0x7F21071Cu: goto label_7F21071C;
    case 0x7F210720u: goto label_7F210720;
    case 0x7F210724u: goto label_7F210724;
    case 0x7F210728u: goto label_7F210728;
    case 0x7F21072Cu: goto label_7F21072C;
    case 0x7F210730u: goto label_7F210730;
    case 0x7F210734u: goto label_7F210734;
    case 0x7F210738u: goto label_7F210738;
    case 0x7F21073Cu: goto label_7F21073C;
    case 0x7F210740u: goto label_7F210740;
    case 0x7F210744u: goto label_7F210744;
    case 0x7F210748u: goto label_7F210748;
    case 0x7F21074Cu: goto label_7F21074C;
    case 0x7F210750u: goto label_7F210750;
    case 0x7F210754u: goto label_7F210754;
    case 0x7F210758u: goto label_7F210758;
    case 0x7F21075Cu: goto label_7F21075C;
    case 0x7F210760u: goto label_7F210760;
    case 0x7F210764u: goto label_7F210764;
    case 0x7F210768u: goto label_7F210768;
    case 0x7F21076Cu: goto label_7F21076C;
    case 0x7F210770u: goto label_7F210770;
    case 0x7F210774u: goto label_7F210774;
    case 0x7F210778u: goto label_7F210778;
    case 0x7F21077Cu: goto label_7F21077C;
    case 0x7F210780u: goto label_7F210780;
    case 0x7F210784u: goto label_7F210784;
    case 0x7F210788u: goto label_7F210788;
    case 0x7F21078Cu: goto label_7F21078C;
    case 0x7F210790u: goto label_7F210790;
    case 0x7F210794u: goto label_7F210794;
    case 0x7F210798u: goto label_7F210798;
    case 0x7F21079Cu: goto label_7F21079C;
    case 0x7F2107A0u: goto label_7F2107A0;
    case 0x7F2107A4u: goto label_7F2107A4;
    case 0x7F2107A8u: goto label_7F2107A8;
    case 0x7F2107ACu: goto label_7F2107AC;
    case 0x7F2107B0u: goto label_7F2107B0;
    case 0x7F2107B4u: goto label_7F2107B4;
    case 0x7F2107B8u: goto label_7F2107B8;
    case 0x7F2107BCu: goto label_7F2107BC;
    case 0x7F2107C0u: goto label_7F2107C0;
    case 0x7F2107C4u: goto label_7F2107C4;
    case 0x7F2107C8u: goto label_7F2107C8;
    case 0x7F2107CCu: goto label_7F2107CC;
    case 0x7F2107D0u: goto label_7F2107D0;
    case 0x7F2107D4u: goto label_7F2107D4;
    case 0x7F2107D8u: goto label_7F2107D8;
    case 0x7F2107DCu: goto label_7F2107DC;
    case 0x7F2107E0u: goto label_7F2107E0;
    case 0x7F2107E4u: goto label_7F2107E4;
    case 0x7F2107E8u: goto label_7F2107E8;
    case 0x7F2107ECu: goto label_7F2107EC;
    case 0x7F2107F0u: goto label_7F2107F0;
    case 0x7F2107F4u: goto label_7F2107F4;
    case 0x7F2107F8u: goto label_7F2107F8;
    case 0x7F2107FCu: goto label_7F2107FC;
    case 0x7F210800u: goto label_7F210800;
    case 0x7F210804u: goto label_7F210804;
    case 0x7F210808u: goto label_7F210808;
    case 0x7F21080Cu: goto label_7F21080C;
    case 0x7F210810u: goto label_7F210810;
    case 0x7F210814u: goto label_7F210814;
    case 0x7F210818u: goto label_7F210818;
    case 0x7F21081Cu: goto label_7F21081C;
    case 0x7F210820u: goto label_7F210820;
    case 0x7F210824u: goto label_7F210824;
    case 0x7F210828u: goto label_7F210828;
    case 0x7F21082Cu: goto label_7F21082C;
    case 0x7F210830u: goto label_7F210830;
    case 0x7F210834u: goto label_7F210834;
    case 0x7F210838u: goto label_7F210838;
    case 0x7F21083Cu: goto label_7F21083C;
    case 0x7F210840u: goto label_7F210840;
    case 0x7F210844u: goto label_7F210844;
    case 0x7F210848u: goto label_7F210848;
    case 0x7F21084Cu: goto label_7F21084C;
    case 0x7F210850u: goto label_7F210850;
    case 0x7F210854u: goto label_7F210854;
    case 0x7F210858u: goto label_7F210858;
    case 0x7F21085Cu: goto label_7F21085C;
    case 0x7F210860u: goto label_7F210860;
    case 0x7F210864u: goto label_7F210864;
    case 0x7F210868u: goto label_7F210868;
    case 0x7F21086Cu: goto label_7F21086C;
    case 0x7F210870u: goto label_7F210870;
    case 0x7F210874u: goto label_7F210874;
    case 0x7F210878u: goto label_7F210878;
    case 0x7F21087Cu: goto label_7F21087C;
    case 0x7F210880u: goto label_7F210880;
    case 0x7F210884u: goto label_7F210884;
    case 0x7F210888u: goto label_7F210888;
    case 0x7F21088Cu: goto label_7F21088C;
    case 0x7F210890u: goto label_7F210890;
    case 0x7F210894u: goto label_7F210894;
    case 0x7F210898u: goto label_7F210898;
    case 0x7F21089Cu: goto label_7F21089C;
    case 0x7F2108A0u: goto label_7F2108A0;
    case 0x7F2108A4u: goto label_7F2108A4;
    case 0x7F2108A8u: goto label_7F2108A8;
    case 0x7F2108ACu: goto label_7F2108AC;
    case 0x7F2108B0u: goto label_7F2108B0;
    case 0x7F2108B4u: goto label_7F2108B4;
    case 0x7F2108B8u: goto label_7F2108B8;
    case 0x7F2108BCu: goto label_7F2108BC;
    case 0x7F2108C0u: goto label_7F2108C0;
    case 0x7F2108C4u: goto label_7F2108C4;
    case 0x7F2108C8u: goto label_7F2108C8;
    case 0x7F2108CCu: goto label_7F2108CC;
    case 0x7F2108D0u: goto label_7F2108D0;
    case 0x7F2108D4u: goto label_7F2108D4;
    case 0x7F2108D8u: goto label_7F2108D8;
    case 0x7F2108DCu: goto label_7F2108DC;
    case 0x7F2108E0u: goto label_7F2108E0;
    case 0x7F2108E4u: goto label_7F2108E4;
    case 0x7F2108E8u: goto label_7F2108E8;
    case 0x7F2108ECu: goto label_7F2108EC;
    case 0x7F2108F0u: goto label_7F2108F0;
    case 0x7F2108F4u: goto label_7F2108F4;
    case 0x7F2108F8u: goto label_7F2108F8;
    case 0x7F2108FCu: goto label_7F2108FC;
    case 0x7F210900u: goto label_7F210900;
    case 0x7F210904u: goto label_7F210904;
    case 0x7F210908u: goto label_7F210908;
    case 0x7F21090Cu: goto label_7F21090C;
    case 0x7F210910u: goto label_7F210910;
    case 0x7F210914u: goto label_7F210914;
    case 0x7F210918u: goto label_7F210918;
    case 0x7F21091Cu: goto label_7F21091C;
    case 0x7F210920u: goto label_7F210920;
    case 0x7F210924u: goto label_7F210924;
    case 0x7F210928u: goto label_7F210928;
    case 0x7F21092Cu: goto label_7F21092C;
    case 0x7F210930u: goto label_7F210930;
    case 0x7F210934u: goto label_7F210934;
    case 0x7F210938u: goto label_7F210938;
    case 0x7F21093Cu: goto label_7F21093C;
    case 0x7F210940u: goto label_7F210940;
    case 0x7F210944u: goto label_7F210944;
    case 0x7F210948u: goto label_7F210948;
    case 0x7F21094Cu: goto label_7F21094C;
    case 0x7F210950u: goto label_7F210950;
    case 0x7F210954u: goto label_7F210954;
    case 0x7F210958u: goto label_7F210958;
    case 0x7F21095Cu: goto label_7F21095C;
    case 0x7F210960u: goto label_7F210960;
    case 0x7F210964u: goto label_7F210964;
    case 0x7F210968u: goto label_7F210968;
    case 0x7F21096Cu: goto label_7F21096C;
    case 0x7F210970u: goto label_7F210970;
    case 0x7F210974u: goto label_7F210974;
    case 0x7F210978u: goto label_7F210978;
    case 0x7F21097Cu: goto label_7F21097C;
    case 0x7F210980u: goto label_7F210980;
    case 0x7F210984u: goto label_7F210984;
    case 0x7F210988u: goto label_7F210988;
    case 0x7F21098Cu: goto label_7F21098C;
    case 0x7F210990u: goto label_7F210990;
    case 0x7F210994u: goto label_7F210994;
    case 0x7F210998u: goto label_7F210998;
    case 0x7F21099Cu: goto label_7F21099C;
    case 0x7F2109A0u: goto label_7F2109A0;
    case 0x7F2109A4u: goto label_7F2109A4;
    case 0x7F2109A8u: goto label_7F2109A8;
    case 0x7F2109ACu: goto label_7F2109AC;
    case 0x7F2109B0u: goto label_7F2109B0;
    case 0x7F2109B4u: goto label_7F2109B4;
    case 0x7F2109B8u: goto label_7F2109B8;
    case 0x7F2109BCu: goto label_7F2109BC;
    case 0x7F2109C0u: goto label_7F2109C0;
    case 0x7F2109C4u: goto label_7F2109C4;
    case 0x7F2109C8u: goto label_7F2109C8;
    case 0x7F2109CCu: goto label_7F2109CC;
    case 0x7F2109D0u: goto label_7F2109D0;
    case 0x7F2109D4u: goto label_7F2109D4;
    case 0x7F2109D8u: goto label_7F2109D8;
    case 0x7F2109DCu: goto label_7F2109DC;
    case 0x7F2109E0u: goto label_7F2109E0;
    case 0x7F2109E4u: goto label_7F2109E4;
    case 0x7F2109E8u: goto label_7F2109E8;
    case 0x7F2109ECu: goto label_7F2109EC;
    case 0x7F2109F0u: goto label_7F2109F0;
    case 0x7F2109F4u: goto label_7F2109F4;
    case 0x7F2109F8u: goto label_7F2109F8;
    case 0x7F2109FCu: goto label_7F2109FC;
    case 0x7F210A00u: goto label_7F210A00;
    case 0x7F210A04u: goto label_7F210A04;
    case 0x7F210A08u: goto label_7F210A08;
    case 0x7F210A0Cu: goto label_7F210A0C;
    case 0x7F210A10u: goto label_7F210A10;
    case 0x7F210A14u: goto label_7F210A14;
    case 0x7F210A18u: goto label_7F210A18;
    case 0x7F210A1Cu: goto label_7F210A1C;
    case 0x7F210A20u: goto label_7F210A20;
    case 0x7F210A24u: goto label_7F210A24;
    case 0x7F210A28u: goto label_7F210A28;
    case 0x7F210A2Cu: goto label_7F210A2C;
    case 0x7F210A30u: goto label_7F210A30;
    case 0x7F210A34u: goto label_7F210A34;
    case 0x7F210A38u: goto label_7F210A38;
    case 0x7F210A3Cu: goto label_7F210A3C;
    case 0x7F210A40u: goto label_7F210A40;
    case 0x7F210A44u: goto label_7F210A44;
    case 0x7F210A48u: goto label_7F210A48;
    case 0x7F210A4Cu: goto label_7F210A4C;
    case 0x7F210A50u: goto label_7F210A50;
    case 0x7F210A54u: goto label_7F210A54;
    case 0x7F210A58u: goto label_7F210A58;
    case 0x7F210A5Cu: goto label_7F210A5C;
    case 0x7F210A60u: goto label_7F210A60;
    case 0x7F210A64u: goto label_7F210A64;
    case 0x7F210A68u: goto label_7F210A68;
    case 0x7F210A6Cu: goto label_7F210A6C;
    case 0x7F210A70u: goto label_7F210A70;
    case 0x7F210A74u: goto label_7F210A74;
    case 0x7F210A78u: goto label_7F210A78;
    case 0x7F210A7Cu: goto label_7F210A7C;
    case 0x7F210A80u: goto label_7F210A80;
    case 0x7F210A84u: goto label_7F210A84;
    case 0x7F210A88u: goto label_7F210A88;
    case 0x7F210A8Cu: goto label_7F210A8C;
    case 0x7F210A90u: goto label_7F210A90;
    case 0x7F210A94u: goto label_7F210A94;
    case 0x7F210A98u: goto label_7F210A98;
    case 0x7F210A9Cu: goto label_7F210A9C;
    case 0x7F210AA0u: goto label_7F210AA0;
    case 0x7F210AA4u: goto label_7F210AA4;
    case 0x7F210AA8u: goto label_7F210AA8;
    case 0x7F210AACu: goto label_7F210AAC;
    case 0x7F210AB0u: goto label_7F210AB0;
    case 0x7F210AB4u: goto label_7F210AB4;
    case 0x7F210AB8u: goto label_7F210AB8;
    case 0x7F210ABCu: goto label_7F210ABC;
    case 0x7F210AC0u: goto label_7F210AC0;
    case 0x7F210AC4u: goto label_7F210AC4;
    case 0x7F210AC8u: goto label_7F210AC8;
    case 0x7F210ACCu: goto label_7F210ACC;
    case 0x7F210AD0u: goto label_7F210AD0;
    case 0x7F210AD4u: goto label_7F210AD4;
    case 0x7F210AD8u: goto label_7F210AD8;
    case 0x7F210ADCu: goto label_7F210ADC;
    case 0x7F210AE0u: goto label_7F210AE0;
    case 0x7F210AE4u: goto label_7F210AE4;
    case 0x7F210AE8u: goto label_7F210AE8;
    case 0x7F210AECu: goto label_7F210AEC;
    case 0x7F210AF0u: goto label_7F210AF0;
    case 0x7F210AF4u: goto label_7F210AF4;
    case 0x7F210AF8u: goto label_7F210AF8;
    case 0x7F210AFCu: goto label_7F210AFC;
    case 0x7F210B00u: goto label_7F210B00;
    case 0x7F210B04u: goto label_7F210B04;
    case 0x7F210B08u: goto label_7F210B08;
    case 0x7F210B0Cu: goto label_7F210B0C;
    case 0x7F210B10u: goto label_7F210B10;
    case 0x7F210B14u: goto label_7F210B14;
    case 0x7F210B18u: goto label_7F210B18;
    case 0x7F210B1Cu: goto label_7F210B1C;
    case 0x7F210B20u: goto label_7F210B20;
    case 0x7F210B24u: goto label_7F210B24;
    case 0x7F210B28u: goto label_7F210B28;
    case 0x7F210B2Cu: goto label_7F210B2C;
    case 0x7F210B30u: goto label_7F210B30;
    case 0x7F210B34u: goto label_7F210B34;
    case 0x7F210B38u: goto label_7F210B38;
    case 0x7F210B3Cu: goto label_7F210B3C;
    case 0x7F210B40u: goto label_7F210B40;
    case 0x7F210B44u: goto label_7F210B44;
    case 0x7F210B48u: goto label_7F210B48;
    case 0x7F210B4Cu: goto label_7F210B4C;
    case 0x7F210B50u: goto label_7F210B50;
    case 0x7F210B54u: goto label_7F210B54;
    case 0x7F210B58u: goto label_7F210B58;
    case 0x7F210B5Cu: goto label_7F210B5C;
    case 0x7F210B60u: goto label_7F210B60;
    case 0x7F210B64u: goto label_7F210B64;
    case 0x7F210B68u: goto label_7F210B68;
    case 0x7F210B6Cu: goto label_7F210B6C;
    case 0x7F210B70u: goto label_7F210B70;
    case 0x7F210B74u: goto label_7F210B74;
    case 0x7F210B78u: goto label_7F210B78;
    case 0x7F210B7Cu: goto label_7F210B7C;
    case 0x7F210B80u: goto label_7F210B80;
    case 0x7F210B84u: goto label_7F210B84;
    case 0x7F210B88u: goto label_7F210B88;
    case 0x7F210B8Cu: goto label_7F210B8C;
    case 0x7F210B90u: goto label_7F210B90;
    case 0x7F210B94u: goto label_7F210B94;
    case 0x7F210B98u: goto label_7F210B98;
    case 0x7F210B9Cu: goto label_7F210B9C;
    case 0x7F210BA0u: goto label_7F210BA0;
    case 0x7F210BA4u: goto label_7F210BA4;
    case 0x7F210BA8u: goto label_7F210BA8;
    case 0x7F210BACu: goto label_7F210BAC;
    case 0x7F210BB0u: goto label_7F210BB0;
    case 0x7F210BB4u: goto label_7F210BB4;
    case 0x7F210BB8u: goto label_7F210BB8;
    case 0x7F210BBCu: goto label_7F210BBC;
    case 0x7F210BC0u: goto label_7F210BC0;
    case 0x7F210BC4u: goto label_7F210BC4;
    case 0x7F210BC8u: goto label_7F210BC8;
    case 0x7F210BCCu: goto label_7F210BCC;
    case 0x7F210BD0u: goto label_7F210BD0;
    case 0x7F210BD4u: goto label_7F210BD4;
    case 0x7F210BD8u: goto label_7F210BD8;
    case 0x7F210BDCu: goto label_7F210BDC;
    case 0x7F210BE0u: goto label_7F210BE0;
    case 0x7F210BE4u: goto label_7F210BE4;
    case 0x7F210BE8u: goto label_7F210BE8;
    case 0x7F210BECu: goto label_7F210BEC;
    case 0x7F210BF0u: goto label_7F210BF0;
    case 0x7F210BF4u: goto label_7F210BF4;
    case 0x7F210BF8u: goto label_7F210BF8;
    case 0x7F210BFCu: goto label_7F210BFC;
    case 0x7F210C00u: goto label_7F210C00;
    case 0x7F210C04u: goto label_7F210C04;
    case 0x7F210C08u: goto label_7F210C08;
    case 0x7F210C0Cu: goto label_7F210C0C;
    case 0x7F210C10u: goto label_7F210C10;
    case 0x7F210C14u: goto label_7F210C14;
    case 0x7F210C18u: goto label_7F210C18;
    case 0x7F210C1Cu: goto label_7F210C1C;
    case 0x7F210C20u: goto label_7F210C20;
    case 0x7F210C24u: goto label_7F210C24;
    case 0x7F210C28u: goto label_7F210C28;
    case 0x7F210C2Cu: goto label_7F210C2C;
    case 0x7F210C30u: goto label_7F210C30;
    case 0x7F210C34u: goto label_7F210C34;
    case 0x7F210C38u: goto label_7F210C38;
    case 0x7F210C3Cu: goto label_7F210C3C;
    case 0x7F210C40u: goto label_7F210C40;
    case 0x7F210C44u: goto label_7F210C44;
    case 0x7F210C48u: goto label_7F210C48;
    case 0x7F210C4Cu: goto label_7F210C4C;
    case 0x7F210C50u: goto label_7F210C50;
    case 0x7F210C54u: goto label_7F210C54;
    case 0x7F210C58u: goto label_7F210C58;
    case 0x7F210C5Cu: goto label_7F210C5C;
    case 0x7F210C60u: goto label_7F210C60;
    case 0x7F210C64u: goto label_7F210C64;
    case 0x7F210C68u: goto label_7F210C68;
    case 0x7F210C6Cu: goto label_7F210C6C;
    case 0x7F210C70u: goto label_7F210C70;
    case 0x7F210C74u: goto label_7F210C74;
    case 0x7F210C78u: goto label_7F210C78;
    case 0x7F210C7Cu: goto label_7F210C7C;
    case 0x7F210C80u: goto label_7F210C80;
    case 0x7F210C84u: goto label_7F210C84;
    case 0x7F210C88u: goto label_7F210C88;
    case 0x7F210C8Cu: goto label_7F210C8C;
    case 0x7F210C90u: goto label_7F210C90;
    case 0x7F210C94u: goto label_7F210C94;
    case 0x7F210C98u: goto label_7F210C98;
    case 0x7F210C9Cu: goto label_7F210C9C;
    case 0x7F210CA0u: goto label_7F210CA0;
    case 0x7F210CA4u: goto label_7F210CA4;
    case 0x7F210CA8u: goto label_7F210CA8;
    case 0x7F210CACu: goto label_7F210CAC;
    case 0x7F210CB0u: goto label_7F210CB0;
    case 0x7F210CB4u: goto label_7F210CB4;
    case 0x7F210CB8u: goto label_7F210CB8;
    case 0x7F210CBCu: goto label_7F210CBC;
    case 0x7F210CC0u: goto label_7F210CC0;
    case 0x7F210CC4u: goto label_7F210CC4;
    case 0x7F210CC8u: goto label_7F210CC8;
    case 0x7F210CCCu: goto label_7F210CCC;
    case 0x7F210CD0u: goto label_7F210CD0;
    case 0x7F210CD4u: goto label_7F210CD4;
    case 0x7F210CD8u: goto label_7F210CD8;
    case 0x7F210CDCu: goto label_7F210CDC;
    case 0x7F210CE0u: goto label_7F210CE0;
    case 0x7F210CE4u: goto label_7F210CE4;
    case 0x7F210CE8u: goto label_7F210CE8;
    case 0x7F210CECu: goto label_7F210CEC;
    case 0x7F210CF0u: goto label_7F210CF0;
    case 0x7F210CF4u: goto label_7F210CF4;
    case 0x7F210CF8u: goto label_7F210CF8;
    case 0x7F210CFCu: goto label_7F210CFC;
    case 0x7F210D00u: goto label_7F210D00;
    case 0x7F210D04u: goto label_7F210D04;
    case 0x7F210D08u: goto label_7F210D08;
    case 0x7F210D0Cu: goto label_7F210D0C;
    case 0x7F210D10u: goto label_7F210D10;
    case 0x7F210D14u: goto label_7F210D14;
    case 0x7F210D18u: goto label_7F210D18;
    case 0x7F210D1Cu: goto label_7F210D1C;
    case 0x7F210D20u: goto label_7F210D20;
    case 0x7F210D24u: goto label_7F210D24;
    case 0x7F210D28u: goto label_7F210D28;
    case 0x7F210D2Cu: goto label_7F210D2C;
    case 0x7F210D30u: goto label_7F210D30;
    case 0x7F210D34u: goto label_7F210D34;
    case 0x7F210D38u: goto label_7F210D38;
    case 0x7F210D3Cu: goto label_7F210D3C;
    case 0x7F210D40u: goto label_7F210D40;
    case 0x7F210D44u: goto label_7F210D44;
    case 0x7F210D48u: goto label_7F210D48;
    case 0x7F210D4Cu: goto label_7F210D4C;
    case 0x7F210D50u: goto label_7F210D50;
    case 0x7F210D54u: goto label_7F210D54;
    case 0x7F210D58u: goto label_7F210D58;
    case 0x7F210D5Cu: goto label_7F210D5C;
    case 0x7F210D60u: goto label_7F210D60;
    case 0x7F210D64u: goto label_7F210D64;
    case 0x7F210D68u: goto label_7F210D68;
    case 0x7F210D6Cu: goto label_7F210D6C;
    case 0x7F210D70u: goto label_7F210D70;
    case 0x7F210D74u: goto label_7F210D74;
    case 0x7F210D78u: goto label_7F210D78;
    case 0x7F210D7Cu: goto label_7F210D7C;
    case 0x7F210D80u: goto label_7F210D80;
    case 0x7F210D84u: goto label_7F210D84;
    case 0x7F210D88u: goto label_7F210D88;
    case 0x7F210D8Cu: goto label_7F210D8C;
    case 0x7F210D90u: goto label_7F210D90;
    case 0x7F210D94u: goto label_7F210D94;
    case 0x7F210D98u: goto label_7F210D98;
    case 0x7F210D9Cu: goto label_7F210D9C;
    case 0x7F210DA0u: goto label_7F210DA0;
    case 0x7F210DA4u: goto label_7F210DA4;
    case 0x7F210DA8u: goto label_7F210DA8;
    case 0x7F210DACu: goto label_7F210DAC;
    case 0x7F210DB0u: goto label_7F210DB0;
    case 0x7F210DB4u: goto label_7F210DB4;
    case 0x7F210DB8u: goto label_7F210DB8;
    case 0x7F210DBCu: goto label_7F210DBC;
    case 0x7F210DC0u: goto label_7F210DC0;
    case 0x7F210DC4u: goto label_7F210DC4;
    case 0x7F210DC8u: goto label_7F210DC8;
    case 0x7F210DCCu: goto label_7F210DCC;
    case 0x7F210DD0u: goto label_7F210DD0;
    case 0x7F210DD4u: goto label_7F210DD4;
    case 0x7F210DD8u: goto label_7F210DD8;
    case 0x7F210DDCu: goto label_7F210DDC;
    case 0x7F210DE0u: goto label_7F210DE0;
    case 0x7F210DE4u: goto label_7F210DE4;
    case 0x7F210DE8u: goto label_7F210DE8;
    case 0x7F210DECu: goto label_7F210DEC;
    case 0x7F210DF0u: goto label_7F210DF0;
    case 0x7F210DF4u: goto label_7F210DF4;
    case 0x7F210DF8u: goto label_7F210DF8;
    case 0x7F210DFCu: goto label_7F210DFC;
    case 0x7F210E00u: goto label_7F210E00;
    case 0x7F210E04u: goto label_7F210E04;
    case 0x7F210E08u: goto label_7F210E08;
    case 0x7F210E0Cu: goto label_7F210E0C;
    case 0x7F210E10u: goto label_7F210E10;
    case 0x7F210E14u: goto label_7F210E14;
    case 0x7F210E18u: goto label_7F210E18;
    case 0x7F210E1Cu: goto label_7F210E1C;
    case 0x7F210E20u: goto label_7F210E20;
    case 0x7F210E24u: goto label_7F210E24;
    case 0x7F210E28u: goto label_7F210E28;
    case 0x7F210E2Cu: goto label_7F210E2C;
    case 0x7F210E30u: goto label_7F210E30;
    case 0x7F210E34u: goto label_7F210E34;
    case 0x7F210E38u: goto label_7F210E38;
    case 0x7F210E3Cu: goto label_7F210E3C;
    case 0x7F210E40u: goto label_7F210E40;
    case 0x7F210E44u: goto label_7F210E44;
    case 0x7F210E48u: goto label_7F210E48;
    case 0x7F210E4Cu: goto label_7F210E4C;
    case 0x7F210E50u: goto label_7F210E50;
    case 0x7F210E54u: goto label_7F210E54;
    case 0x7F210E58u: goto label_7F210E58;
    case 0x7F210E5Cu: goto label_7F210E5C;
    case 0x7F210E60u: goto label_7F210E60;
    case 0x7F210E64u: goto label_7F210E64;
    case 0x7F210E68u: goto label_7F210E68;
    case 0x7F210E6Cu: goto label_7F210E6C;
    case 0x7F210E70u: goto label_7F210E70;
    case 0x7F210E74u: goto label_7F210E74;
    case 0x7F210E78u: goto label_7F210E78;
    case 0x7F210E7Cu: goto label_7F210E7C;
    case 0x7F210E80u: goto label_7F210E80;
    case 0x7F210E84u: goto label_7F210E84;
    case 0x7F210E88u: goto label_7F210E88;
    case 0x7F210E8Cu: goto label_7F210E8C;
    case 0x7F210E90u: goto label_7F210E90;
    case 0x7F210E94u: goto label_7F210E94;
    case 0x7F210E98u: goto label_7F210E98;
    case 0x7F210E9Cu: goto label_7F210E9C;
    case 0x7F210EA0u: goto label_7F210EA0;
    case 0x7F210EA4u: goto label_7F210EA4;
    case 0x7F210EA8u: goto label_7F210EA8;
    case 0x7F210EACu: goto label_7F210EAC;
    case 0x7F210EB0u: goto label_7F210EB0;
    case 0x7F210EB4u: goto label_7F210EB4;
    case 0x7F210EB8u: goto label_7F210EB8;
    case 0x7F210EBCu: goto label_7F210EBC;
    case 0x7F210EC0u: goto label_7F210EC0;
    case 0x7F210EC4u: goto label_7F210EC4;
    case 0x7F210EC8u: goto label_7F210EC8;
    case 0x7F210ECCu: goto label_7F210ECC;
    case 0x7F210ED0u: goto label_7F210ED0;
    case 0x7F210ED4u: goto label_7F210ED4;
    case 0x7F210ED8u: goto label_7F210ED8;
    case 0x7F210EDCu: goto label_7F210EDC;
    case 0x7F210EE0u: goto label_7F210EE0;
    case 0x7F210EE4u: goto label_7F210EE4;
    case 0x7F210EE8u: goto label_7F210EE8;
    case 0x7F210EECu: goto label_7F210EEC;
    case 0x7F210EF0u: goto label_7F210EF0;
    case 0x7F210EF4u: goto label_7F210EF4;
    case 0x7F210EF8u: goto label_7F210EF8;
    case 0x7F210EFCu: goto label_7F210EFC;
    case 0x7F210F00u: goto label_7F210F00;
    case 0x7F210F04u: goto label_7F210F04;
    case 0x7F210F08u: goto label_7F210F08;
    case 0x7F210F0Cu: goto label_7F210F0C;
    case 0x7F210F10u: goto label_7F210F10;
    case 0x7F210F14u: goto label_7F210F14;
    case 0x7F210F18u: goto label_7F210F18;
    case 0x7F210F1Cu: goto label_7F210F1C;
    case 0x7F210F20u: goto label_7F210F20;
    case 0x7F210F24u: goto label_7F210F24;
    case 0x7F210F28u: goto label_7F210F28;
    case 0x7F210F2Cu: goto label_7F210F2C;
    case 0x7F210F30u: goto label_7F210F30;
    case 0x7F210F34u: goto label_7F210F34;
    case 0x7F210F38u: goto label_7F210F38;
    case 0x7F210F3Cu: goto label_7F210F3C;
    case 0x7F210F40u: goto label_7F210F40;
    case 0x7F210F44u: goto label_7F210F44;
    case 0x7F210F48u: goto label_7F210F48;
    case 0x7F210F4Cu: goto label_7F210F4C;
    case 0x7F210F50u: goto label_7F210F50;
    case 0x7F210F54u: goto label_7F210F54;
    case 0x7F210F58u: goto label_7F210F58;
    case 0x7F210F5Cu: goto label_7F210F5C;
    case 0x7F210F60u: goto label_7F210F60;
    case 0x7F210F64u: goto label_7F210F64;
    case 0x7F210F68u: goto label_7F210F68;
    case 0x7F210F6Cu: goto label_7F210F6C;
    case 0x7F210F70u: goto label_7F210F70;
    case 0x7F210F74u: goto label_7F210F74;
    case 0x7F210F78u: goto label_7F210F78;
    case 0x7F210F7Cu: goto label_7F210F7C;
    case 0x7F210F80u: goto label_7F210F80;
    case 0x7F210F84u: goto label_7F210F84;
    case 0x7F210F88u: goto label_7F210F88;
    case 0x7F210F8Cu: goto label_7F210F8C;
    case 0x7F210F90u: goto label_7F210F90;
    case 0x7F210F94u: goto label_7F210F94;
    case 0x7F210F98u: goto label_7F210F98;
    case 0x7F210F9Cu: goto label_7F210F9C;
    case 0x7F210FA0u: goto label_7F210FA0;
    case 0x7F210FA4u: goto label_7F210FA4;
    case 0x7F210FA8u: goto label_7F210FA8;
    case 0x7F210FACu: goto label_7F210FAC;
    case 0x7F210FB0u: goto label_7F210FB0;
    case 0x7F210FB4u: goto label_7F210FB4;
    case 0x7F210FB8u: goto label_7F210FB8;
    case 0x7F210FBCu: goto label_7F210FBC;
    case 0x7F210FC0u: goto label_7F210FC0;
    case 0x7F210FC4u: goto label_7F210FC4;
    case 0x7F210FC8u: goto label_7F210FC8;
    case 0x7F210FCCu: goto label_7F210FCC;
    case 0x7F210FD0u: goto label_7F210FD0;
    case 0x7F210FD4u: goto label_7F210FD4;
    case 0x7F210FD8u: goto label_7F210FD8;
    case 0x7F210FDCu: goto label_7F210FDC;
    case 0x7F210FE0u: goto label_7F210FE0;
    case 0x7F210FE4u: goto label_7F210FE4;
    case 0x7F210FE8u: goto label_7F210FE8;
    case 0x7F210FECu: goto label_7F210FEC;
    case 0x7F210FF0u: goto label_7F210FF0;
    case 0x7F210FF4u: goto label_7F210FF4;
    case 0x7F210FF8u: goto label_7F210FF8;
    case 0x7F210FFCu: goto label_7F210FFC;
    case 0x7F211000u: goto label_7F211000;
    case 0x7F211004u: goto label_7F211004;
    case 0x7F211008u: goto label_7F211008;
    case 0x7F21100Cu: goto label_7F21100C;
    case 0x7F211010u: goto label_7F211010;
    case 0x7F211014u: goto label_7F211014;
    case 0x7F211018u: goto label_7F211018;
    case 0x7F21101Cu: goto label_7F21101C;
    case 0x7F211020u: goto label_7F211020;
    case 0x7F211024u: goto label_7F211024;
    case 0x7F211028u: goto label_7F211028;
    case 0x7F21102Cu: goto label_7F21102C;
    case 0x7F211030u: goto label_7F211030;
    case 0x7F211034u: goto label_7F211034;
    case 0x7F211038u: goto label_7F211038;
    case 0x7F21103Cu: goto label_7F21103C;
    case 0x7F211040u: goto label_7F211040;
    case 0x7F211044u: goto label_7F211044;
    case 0x7F211048u: goto label_7F211048;
    case 0x7F21104Cu: goto label_7F21104C;
    case 0x7F211050u: goto label_7F211050;
    case 0x7F211054u: goto label_7F211054;
    case 0x7F211058u: goto label_7F211058;
    case 0x7F21105Cu: goto label_7F21105C;
    case 0x7F211060u: goto label_7F211060;
    case 0x7F211064u: goto label_7F211064;
    case 0x7F211068u: goto label_7F211068;
    case 0x7F21106Cu: goto label_7F21106C;
    case 0x7F211070u: goto label_7F211070;
    case 0x7F211074u: goto label_7F211074;
    case 0x7F211078u: goto label_7F211078;
    case 0x7F21107Cu: goto label_7F21107C;
    case 0x7F211080u: goto label_7F211080;
    case 0x7F211084u: goto label_7F211084;
    case 0x7F211088u: goto label_7F211088;
    case 0x7F21108Cu: goto label_7F21108C;
    case 0x7F211090u: goto label_7F211090;
    case 0x7F211094u: goto label_7F211094;
    case 0x7F211098u: goto label_7F211098;
    case 0x7F21109Cu: goto label_7F21109C;
    case 0x7F2110A0u: goto label_7F2110A0;
    case 0x7F2110A4u: goto label_7F2110A4;
    case 0x7F2110A8u: goto label_7F2110A8;
    case 0x7F2110ACu: goto label_7F2110AC;
    case 0x7F2110B0u: goto label_7F2110B0;
    case 0x7F2110B4u: goto label_7F2110B4;
    case 0x7F2110B8u: goto label_7F2110B8;
    case 0x7F2110BCu: goto label_7F2110BC;
    case 0x7F2110C0u: goto label_7F2110C0;
    case 0x7F2110C4u: goto label_7F2110C4;
    case 0x7F2110C8u: goto label_7F2110C8;
    case 0x7F2110CCu: goto label_7F2110CC;
    case 0x7F2110D0u: goto label_7F2110D0;
    case 0x7F2110D4u: goto label_7F2110D4;
    case 0x7F2110D8u: goto label_7F2110D8;
    case 0x7F2110DCu: goto label_7F2110DC;
    case 0x7F2110E0u: goto label_7F2110E0;
    case 0x7F2110E4u: goto label_7F2110E4;
    case 0x7F2110E8u: goto label_7F2110E8;
    case 0x7F2110ECu: goto label_7F2110EC;
    case 0x7F2110F0u: goto label_7F2110F0;
    case 0x7F2110F4u: goto label_7F2110F4;
    case 0x7F2110F8u: goto label_7F2110F8;
    case 0x7F2110FCu: goto label_7F2110FC;
    case 0x7F211100u: goto label_7F211100;
    case 0x7F211104u: goto label_7F211104;
    case 0x7F211108u: goto label_7F211108;
    case 0x7F21110Cu: goto label_7F21110C;
    case 0x7F211110u: goto label_7F211110;
    case 0x7F211114u: goto label_7F211114;
    case 0x7F211118u: goto label_7F211118;
    case 0x7F21111Cu: goto label_7F21111C;
    case 0x7F211120u: goto label_7F211120;
    case 0x7F211124u: goto label_7F211124;
    case 0x7F211128u: goto label_7F211128;
    case 0x7F21112Cu: goto label_7F21112C;
    case 0x7F211130u: goto label_7F211130;
    case 0x7F211134u: goto label_7F211134;
    case 0x7F211138u: goto label_7F211138;
    case 0x7F21113Cu: goto label_7F21113C;
    case 0x7F211140u: goto label_7F211140;
    case 0x7F211144u: goto label_7F211144;
    case 0x7F211148u: goto label_7F211148;
    case 0x7F21114Cu: goto label_7F21114C;
    case 0x7F211150u: goto label_7F211150;
    case 0x7F211154u: goto label_7F211154;
    case 0x7F211158u: goto label_7F211158;
    case 0x7F21115Cu: goto label_7F21115C;
    case 0x7F211160u: goto label_7F211160;
    case 0x7F211164u: goto label_7F211164;
    case 0x7F211168u: goto label_7F211168;
    case 0x7F21116Cu: goto label_7F21116C;
    case 0x7F211170u: goto label_7F211170;
    case 0x7F211174u: goto label_7F211174;
    case 0x7F211178u: goto label_7F211178;
    case 0x7F21117Cu: goto label_7F21117C;
    case 0x7F211180u: goto label_7F211180;
    case 0x7F211184u: goto label_7F211184;
    case 0x7F211188u: goto label_7F211188;
    case 0x7F21118Cu: goto label_7F21118C;
    case 0x7F211190u: goto label_7F211190;
    case 0x7F211194u: goto label_7F211194;
    case 0x7F211198u: goto label_7F211198;
    case 0x7F21119Cu: goto label_7F21119C;
    case 0x7F2111A0u: goto label_7F2111A0;
    case 0x7F2111A4u: goto label_7F2111A4;
    case 0x7F2111A8u: goto label_7F2111A8;
    case 0x7F2111ACu: goto label_7F2111AC;
    case 0x7F2111B0u: goto label_7F2111B0;
    case 0x7F2111B4u: goto label_7F2111B4;
    case 0x7F2111B8u: goto label_7F2111B8;
    case 0x7F2111BCu: goto label_7F2111BC;
    case 0x7F2111C0u: goto label_7F2111C0;
    case 0x7F2111C4u: goto label_7F2111C4;
    case 0x7F2111C8u: goto label_7F2111C8;
    case 0x7F2111CCu: goto label_7F2111CC;
    case 0x7F2111D0u: goto label_7F2111D0;
    case 0x7F2111D4u: goto label_7F2111D4;
    case 0x7F2111D8u: goto label_7F2111D8;
    case 0x7F2111DCu: goto label_7F2111DC;
    case 0x7F2111E0u: goto label_7F2111E0;
    case 0x7F2111E4u: goto label_7F2111E4;
    case 0x7F2111E8u: goto label_7F2111E8;
    case 0x7F2111ECu: goto label_7F2111EC;
    case 0x7F2111F0u: goto label_7F2111F0;
    case 0x7F2111F4u: goto label_7F2111F4;
    case 0x7F2111F8u: goto label_7F2111F8;
    case 0x7F2111FCu: goto label_7F2111FC;
    case 0x7F211200u: goto label_7F211200;
    case 0x7F211204u: goto label_7F211204;
    case 0x7F211208u: goto label_7F211208;
    case 0x7F21120Cu: goto label_7F21120C;
    case 0x7F211210u: goto label_7F211210;
    case 0x7F211214u: goto label_7F211214;
    case 0x7F211218u: goto label_7F211218;
    case 0x7F21121Cu: goto label_7F21121C;
    case 0x7F211220u: goto label_7F211220;
    case 0x7F211224u: goto label_7F211224;
    case 0x7F211228u: goto label_7F211228;
    case 0x7F21122Cu: goto label_7F21122C;
    case 0x7F211230u: goto label_7F211230;
    case 0x7F211234u: goto label_7F211234;
    case 0x7F211238u: goto label_7F211238;
    case 0x7F21123Cu: goto label_7F21123C;
    case 0x7F211240u: goto label_7F211240;
    case 0x7F211244u: goto label_7F211244;
    case 0x7F211248u: goto label_7F211248;
    case 0x7F21124Cu: goto label_7F21124C;
    case 0x7F211250u: goto label_7F211250;
    case 0x7F211254u: goto label_7F211254;
    case 0x7F211258u: goto label_7F211258;
    case 0x7F21125Cu: goto label_7F21125C;
    case 0x7F211260u: goto label_7F211260;
    case 0x7F211264u: goto label_7F211264;
    case 0x7F211268u: goto label_7F211268;
    case 0x7F21126Cu: goto label_7F21126C;
    case 0x7F211270u: goto label_7F211270;
    case 0x7F211274u: goto label_7F211274;
    case 0x7F211278u: goto label_7F211278;
    case 0x7F21127Cu: goto label_7F21127C;
    case 0x7F211280u: goto label_7F211280;
    case 0x7F211284u: goto label_7F211284;
    case 0x7F211288u: goto label_7F211288;
    case 0x7F21128Cu: goto label_7F21128C;
    case 0x7F211290u: goto label_7F211290;
    case 0x7F211294u: goto label_7F211294;
    case 0x7F211298u: goto label_7F211298;
    case 0x7F21129Cu: goto label_7F21129C;
    case 0x7F2112A0u: goto label_7F2112A0;
    case 0x7F2112A4u: goto label_7F2112A4;
    case 0x7F2112A8u: goto label_7F2112A8;
    case 0x7F2112ACu: goto label_7F2112AC;
    case 0x7F2112B0u: goto label_7F2112B0;
    case 0x7F2112B4u: goto label_7F2112B4;
    case 0x7F2112B8u: goto label_7F2112B8;
    case 0x7F2112BCu: goto label_7F2112BC;
    case 0x7F2112C0u: goto label_7F2112C0;
    case 0x7F2112C4u: goto label_7F2112C4;
    case 0x7F2112C8u: goto label_7F2112C8;
    case 0x7F2112CCu: goto label_7F2112CC;
    case 0x7F2112D0u: goto label_7F2112D0;
    case 0x7F2112D4u: goto label_7F2112D4;
    case 0x7F2112D8u: goto label_7F2112D8;
    case 0x7F2112DCu: goto label_7F2112DC;
    case 0x7F2112E0u: goto label_7F2112E0;
    case 0x7F2112E4u: goto label_7F2112E4;
    case 0x7F2112E8u: goto label_7F2112E8;
    case 0x7F2112ECu: goto label_7F2112EC;
    case 0x7F2112F0u: goto label_7F2112F0;
    case 0x7F2112F4u: goto label_7F2112F4;
    case 0x7F2112F8u: goto label_7F2112F8;
    case 0x7F2112FCu: goto label_7F2112FC;
    case 0x7F211300u: goto label_7F211300;
    case 0x7F211304u: goto label_7F211304;
    case 0x7F211308u: goto label_7F211308;
    case 0x7F21130Cu: goto label_7F21130C;
    case 0x7F211310u: goto label_7F211310;
    case 0x7F211314u: goto label_7F211314;
    case 0x7F211318u: goto label_7F211318;
    case 0x7F21131Cu: goto label_7F21131C;
    case 0x7F211320u: goto label_7F211320;
    case 0x7F211324u: goto label_7F211324;
    case 0x7F211328u: goto label_7F211328;
    case 0x7F21132Cu: goto label_7F21132C;
    case 0x7F211330u: goto label_7F211330;
    case 0x7F211334u: goto label_7F211334;
    case 0x7F211338u: goto label_7F211338;
    case 0x7F21133Cu: goto label_7F21133C;
    case 0x7F211340u: goto label_7F211340;
    case 0x7F211344u: goto label_7F211344;
    case 0x7F211348u: goto label_7F211348;
    case 0x7F21134Cu: goto label_7F21134C;
    case 0x7F211350u: goto label_7F211350;
    case 0x7F211354u: goto label_7F211354;
    case 0x7F211358u: goto label_7F211358;
    case 0x7F21135Cu: goto label_7F21135C;
    case 0x7F211360u: goto label_7F211360;
    case 0x7F211364u: goto label_7F211364;
    case 0x7F211368u: goto label_7F211368;
    case 0x7F21136Cu: goto label_7F21136C;
    case 0x7F211370u: goto label_7F211370;
    case 0x7F211374u: goto label_7F211374;
    case 0x7F211378u: goto label_7F211378;
    case 0x7F21137Cu: goto label_7F21137C;
    case 0x7F211380u: goto label_7F211380;
    case 0x7F211384u: goto label_7F211384;
    case 0x7F211388u: goto label_7F211388;
    case 0x7F21138Cu: goto label_7F21138C;
    case 0x7F211390u: goto label_7F211390;
    case 0x7F211394u: goto label_7F211394;
    case 0x7F211398u: goto label_7F211398;
    case 0x7F21139Cu: goto label_7F21139C;
    case 0x7F2113A0u: goto label_7F2113A0;
    case 0x7F2113A4u: goto label_7F2113A4;
    case 0x7F2113A8u: goto label_7F2113A8;
    case 0x7F2113ACu: goto label_7F2113AC;
    case 0x7F2113B0u: goto label_7F2113B0;
    case 0x7F2113B4u: goto label_7F2113B4;
    case 0x7F2113B8u: goto label_7F2113B8;
    case 0x7F2113BCu: goto label_7F2113BC;
    case 0x7F2113C0u: goto label_7F2113C0;
    case 0x7F2113C4u: goto label_7F2113C4;
    case 0x7F2113C8u: goto label_7F2113C8;
    case 0x7F2113CCu: goto label_7F2113CC;
    case 0x7F2113D0u: goto label_7F2113D0;
    case 0x7F2113D4u: goto label_7F2113D4;
    case 0x7F2113D8u: goto label_7F2113D8;
    case 0x7F2113DCu: goto label_7F2113DC;
    case 0x7F2113E0u: goto label_7F2113E0;
    case 0x7F2113E4u: goto label_7F2113E4;
    case 0x7F2113E8u: goto label_7F2113E8;
    case 0x7F2113ECu: goto label_7F2113EC;
    case 0x7F2113F0u: goto label_7F2113F0;
    case 0x7F2113F4u: goto label_7F2113F4;
    case 0x7F2113F8u: goto label_7F2113F8;
    case 0x7F2113FCu: goto label_7F2113FC;
    case 0x7F211400u: goto label_7F211400;
    case 0x7F211404u: goto label_7F211404;
    case 0x7F211408u: goto label_7F211408;
    case 0x7F21140Cu: goto label_7F21140C;
    case 0x7F211410u: goto label_7F211410;
    case 0x7F211414u: goto label_7F211414;
    case 0x7F211418u: goto label_7F211418;
    case 0x7F21141Cu: goto label_7F21141C;
    case 0x7F211420u: goto label_7F211420;
    case 0x7F211424u: goto label_7F211424;
    case 0x7F211428u: goto label_7F211428;
    case 0x7F21142Cu: goto label_7F21142C;
    case 0x7F211430u: goto label_7F211430;
    case 0x7F211434u: goto label_7F211434;
    case 0x7F211438u: goto label_7F211438;
    case 0x7F21143Cu: goto label_7F21143C;
    case 0x7F211440u: goto label_7F211440;
    case 0x7F211444u: goto label_7F211444;
    case 0x7F211448u: goto label_7F211448;
    case 0x7F21144Cu: goto label_7F21144C;
    case 0x7F211450u: goto label_7F211450;
    case 0x7F211454u: goto label_7F211454;
    case 0x7F211458u: goto label_7F211458;
    case 0x7F21145Cu: goto label_7F21145C;
    case 0x7F211460u: goto label_7F211460;
    case 0x7F211464u: goto label_7F211464;
    case 0x7F211468u: goto label_7F211468;
    case 0x7F21146Cu: goto label_7F21146C;
    case 0x7F211470u: goto label_7F211470;
    case 0x7F211474u: goto label_7F211474;
    case 0x7F211478u: goto label_7F211478;
    case 0x7F21147Cu: goto label_7F21147C;
    case 0x7F211480u: goto label_7F211480;
    case 0x7F211484u: goto label_7F211484;
    case 0x7F211488u: goto label_7F211488;
    case 0x7F21148Cu: goto label_7F21148C;
    case 0x7F211490u: goto label_7F211490;
    case 0x7F211494u: goto label_7F211494;
    case 0x7F211498u: goto label_7F211498;
    case 0x7F21149Cu: goto label_7F21149C;
    case 0x7F2114A0u: goto label_7F2114A0;
    case 0x7F2114A4u: goto label_7F2114A4;
    case 0x7F2114A8u: goto label_7F2114A8;
    case 0x7F2114ACu: goto label_7F2114AC;
    case 0x7F2114B0u: goto label_7F2114B0;
    case 0x7F2114B4u: goto label_7F2114B4;
    case 0x7F2114B8u: goto label_7F2114B8;
    case 0x7F2114BCu: goto label_7F2114BC;
    case 0x7F2114C0u: goto label_7F2114C0;
    case 0x7F2114C4u: goto label_7F2114C4;
    case 0x7F2114C8u: goto label_7F2114C8;
    case 0x7F2114CCu: goto label_7F2114CC;
    case 0x7F2114D0u: goto label_7F2114D0;
    case 0x7F2114D4u: goto label_7F2114D4;
    case 0x7F2114D8u: goto label_7F2114D8;
    case 0x7F2114DCu: goto label_7F2114DC;
    case 0x7F2114E0u: goto label_7F2114E0;
    case 0x7F2114E4u: goto label_7F2114E4;
    case 0x7F2114E8u: goto label_7F2114E8;
    case 0x7F2114ECu: goto label_7F2114EC;
    case 0x7F2114F0u: goto label_7F2114F0;
    case 0x7F2114F4u: goto label_7F2114F4;
    case 0x7F2114F8u: goto label_7F2114F8;
    case 0x7F2114FCu: goto label_7F2114FC;
    case 0x7F211500u: goto label_7F211500;
    case 0x7F211504u: goto label_7F211504;
    case 0x7F211508u: goto label_7F211508;
    case 0x7F21150Cu: goto label_7F21150C;
    case 0x7F211510u: goto label_7F211510;
    case 0x7F211514u: goto label_7F211514;
    case 0x7F211518u: goto label_7F211518;
    case 0x7F21151Cu: goto label_7F21151C;
    case 0x7F211520u: goto label_7F211520;
    case 0x7F211524u: goto label_7F211524;
    case 0x7F211528u: goto label_7F211528;
    case 0x7F21152Cu: goto label_7F21152C;
    case 0x7F211530u: goto label_7F211530;
    case 0x7F211534u: goto label_7F211534;
    case 0x7F211538u: goto label_7F211538;
    case 0x7F21153Cu: goto label_7F21153C;
    case 0x7F211540u: goto label_7F211540;
    case 0x7F211544u: goto label_7F211544;
    case 0x7F211548u: goto label_7F211548;
    case 0x7F21154Cu: goto label_7F21154C;
    case 0x7F211550u: goto label_7F211550;
    case 0x7F211554u: goto label_7F211554;
    case 0x7F211558u: goto label_7F211558;
    case 0x7F21155Cu: goto label_7F21155C;
    case 0x7F211560u: goto label_7F211560;
    case 0x7F211564u: goto label_7F211564;
    case 0x7F211568u: goto label_7F211568;
    case 0x7F21156Cu: goto label_7F21156C;
    case 0x7F211570u: goto label_7F211570;
    case 0x7F211574u: goto label_7F211574;
    case 0x7F211578u: goto label_7F211578;
    case 0x7F21157Cu: goto label_7F21157C;
    case 0x7F211580u: goto label_7F211580;
    case 0x7F211584u: goto label_7F211584;
    case 0x7F211588u: goto label_7F211588;
    case 0x7F21158Cu: goto label_7F21158C;
    case 0x7F211590u: goto label_7F211590;
    case 0x7F211594u: goto label_7F211594;
    case 0x7F211598u: goto label_7F211598;
    case 0x7F21159Cu: goto label_7F21159C;
    case 0x7F2115A0u: goto label_7F2115A0;
    case 0x7F2115A4u: goto label_7F2115A4;
    case 0x7F2115A8u: goto label_7F2115A8;
    case 0x7F2115ACu: goto label_7F2115AC;
    case 0x7F2115B0u: goto label_7F2115B0;
    case 0x7F2115B4u: goto label_7F2115B4;
    case 0x7F2115B8u: goto label_7F2115B8;
    case 0x7F2115BCu: goto label_7F2115BC;
    case 0x7F2115C0u: goto label_7F2115C0;
    case 0x7F2115C4u: goto label_7F2115C4;
    case 0x7F2115C8u: goto label_7F2115C8;
    case 0x7F2115CCu: goto label_7F2115CC;
    case 0x7F2115D0u: goto label_7F2115D0;
    case 0x7F2115D4u: goto label_7F2115D4;
    case 0x7F2115D8u: goto label_7F2115D8;
    case 0x7F2115DCu: goto label_7F2115DC;
    case 0x7F2115E0u: goto label_7F2115E0;
    case 0x7F2115E4u: goto label_7F2115E4;
    case 0x7F2115E8u: goto label_7F2115E8;
    case 0x7F2115ECu: goto label_7F2115EC;
    case 0x7F2115F0u: goto label_7F2115F0;
    case 0x7F2115F4u: goto label_7F2115F4;
    case 0x7F2115F8u: goto label_7F2115F8;
    case 0x7F2115FCu: goto label_7F2115FC;
    case 0x7F211600u: goto label_7F211600;
    case 0x7F211604u: goto label_7F211604;
    case 0x7F211608u: goto label_7F211608;
    case 0x7F21160Cu: goto label_7F21160C;
    case 0x7F211610u: goto label_7F211610;
    case 0x7F211614u: goto label_7F211614;
    case 0x7F211618u: goto label_7F211618;
    case 0x7F21161Cu: goto label_7F21161C;
    case 0x7F211620u: goto label_7F211620;
    case 0x7F211624u: goto label_7F211624;
    case 0x7F211628u: goto label_7F211628;
    case 0x7F21162Cu: goto label_7F21162C;
    case 0x7F211630u: goto label_7F211630;
    case 0x7F211634u: goto label_7F211634;
    case 0x7F211638u: goto label_7F211638;
    case 0x7F21163Cu: goto label_7F21163C;
    case 0x7F211640u: goto label_7F211640;
    case 0x7F211644u: goto label_7F211644;
    case 0x7F211648u: goto label_7F211648;
    case 0x7F21164Cu: goto label_7F21164C;
    case 0x7F211650u: goto label_7F211650;
    case 0x7F211654u: goto label_7F211654;
    case 0x7F211658u: goto label_7F211658;
    case 0x7F21165Cu: goto label_7F21165C;
    case 0x7F211660u: goto label_7F211660;
    case 0x7F211664u: goto label_7F211664;
    case 0x7F211668u: goto label_7F211668;
    case 0x7F21166Cu: goto label_7F21166C;
    case 0x7F211670u: goto label_7F211670;
    case 0x7F211674u: goto label_7F211674;
    case 0x7F211678u: goto label_7F211678;
    case 0x7F21167Cu: goto label_7F21167C;
    case 0x7F211680u: goto label_7F211680;
    case 0x7F211684u: goto label_7F211684;
    case 0x7F211688u: goto label_7F211688;
    case 0x7F21168Cu: goto label_7F21168C;
    case 0x7F211690u: goto label_7F211690;
    case 0x7F211694u: goto label_7F211694;
    case 0x7F211698u: goto label_7F211698;
    case 0x7F21169Cu: goto label_7F21169C;
    case 0x7F2116A0u: goto label_7F2116A0;
    case 0x7F2116A4u: goto label_7F2116A4;
    case 0x7F2116A8u: goto label_7F2116A8;
    case 0x7F2116ACu: goto label_7F2116AC;
    case 0x7F2116B0u: goto label_7F2116B0;
    case 0x7F2116B4u: goto label_7F2116B4;
    case 0x7F2116B8u: goto label_7F2116B8;
    case 0x7F2116BCu: goto label_7F2116BC;
    case 0x7F2116C0u: goto label_7F2116C0;
    case 0x7F2116C4u: goto label_7F2116C4;
    case 0x7F2116C8u: goto label_7F2116C8;
    case 0x7F2116CCu: goto label_7F2116CC;
    case 0x7F2116D0u: goto label_7F2116D0;
    case 0x7F2116D4u: goto label_7F2116D4;
    case 0x7F2116D8u: goto label_7F2116D8;
    case 0x7F2116DCu: goto label_7F2116DC;
    case 0x7F2116E0u: goto label_7F2116E0;
    case 0x7F2116E4u: goto label_7F2116E4;
    case 0x7F2116E8u: goto label_7F2116E8;
    case 0x7F2116ECu: goto label_7F2116EC;
    case 0x7F2116F0u: goto label_7F2116F0;
    case 0x7F2116F4u: goto label_7F2116F4;
    case 0x7F2116F8u: goto label_7F2116F8;
    case 0x7F2116FCu: goto label_7F2116FC;
    case 0x7F211700u: goto label_7F211700;
    case 0x7F211704u: goto label_7F211704;
    case 0x7F211708u: goto label_7F211708;
    case 0x7F21170Cu: goto label_7F21170C;
    case 0x7F211710u: goto label_7F211710;
    case 0x7F211714u: goto label_7F211714;
    case 0x7F211718u: goto label_7F211718;
    case 0x7F21171Cu: goto label_7F21171C;
    case 0x7F211720u: goto label_7F211720;
    case 0x7F211724u: goto label_7F211724;
    case 0x7F211728u: goto label_7F211728;
    case 0x7F21172Cu: goto label_7F21172C;
    case 0x7F211730u: goto label_7F211730;
    case 0x7F211734u: goto label_7F211734;
    case 0x7F211738u: goto label_7F211738;
    case 0x7F21173Cu: goto label_7F21173C;
    case 0x7F211740u: goto label_7F211740;
    case 0x7F211744u: goto label_7F211744;
    case 0x7F211748u: goto label_7F211748;
    case 0x7F21174Cu: goto label_7F21174C;
    case 0x7F211750u: goto label_7F211750;
    case 0x7F211754u: goto label_7F211754;
    case 0x7F211758u: goto label_7F211758;
    case 0x7F21175Cu: goto label_7F21175C;
    case 0x7F211760u: goto label_7F211760;
    case 0x7F211764u: goto label_7F211764;
    case 0x7F211768u: goto label_7F211768;
    case 0x7F21176Cu: goto label_7F21176C;
    case 0x7F211770u: goto label_7F211770;
    case 0x7F211774u: goto label_7F211774;
    case 0x7F211778u: goto label_7F211778;
    case 0x7F21177Cu: goto label_7F21177C;
    case 0x7F211780u: goto label_7F211780;
    case 0x7F211784u: goto label_7F211784;
    case 0x7F211788u: goto label_7F211788;
    case 0x7F21178Cu: goto label_7F21178C;
    case 0x7F211790u: goto label_7F211790;
    case 0x7F211794u: goto label_7F211794;
    case 0x7F211798u: goto label_7F211798;
    case 0x7F21179Cu: goto label_7F21179C;
    case 0x7F2117A0u: goto label_7F2117A0;
    case 0x7F2117A4u: goto label_7F2117A4;
    case 0x7F2117A8u: goto label_7F2117A8;
    case 0x7F2117ACu: goto label_7F2117AC;
    case 0x7F2117B0u: goto label_7F2117B0;
    case 0x7F2117B4u: goto label_7F2117B4;
    case 0x7F2117B8u: goto label_7F2117B8;
    case 0x7F2117BCu: goto label_7F2117BC;
    case 0x7F2117C0u: goto label_7F2117C0;
    case 0x7F2117C4u: goto label_7F2117C4;
    case 0x7F2117C8u: goto label_7F2117C8;
    case 0x7F2117CCu: goto label_7F2117CC;
    case 0x7F2117D0u: goto label_7F2117D0;
    case 0x7F2117D4u: goto label_7F2117D4;
    case 0x7F2117D8u: goto label_7F2117D8;
    case 0x7F2117DCu: goto label_7F2117DC;
    case 0x7F2117E0u: goto label_7F2117E0;
    case 0x7F2117E4u: goto label_7F2117E4;
    case 0x7F2117E8u: goto label_7F2117E8;
    case 0x7F2117ECu: goto label_7F2117EC;
    case 0x7F2117F0u: goto label_7F2117F0;
    case 0x7F2117F4u: goto label_7F2117F4;
    case 0x7F2117F8u: goto label_7F2117F8;
    case 0x7F2117FCu: goto label_7F2117FC;
    case 0x7F211800u: goto label_7F211800;
    case 0x7F211804u: goto label_7F211804;
    case 0x7F211808u: goto label_7F211808;
    case 0x7F21180Cu: goto label_7F21180C;
    case 0x7F211810u: goto label_7F211810;
    case 0x7F211814u: goto label_7F211814;
    case 0x7F211818u: goto label_7F211818;
    case 0x7F21181Cu: goto label_7F21181C;
    case 0x7F211820u: goto label_7F211820;
    case 0x7F211824u: goto label_7F211824;
    case 0x7F211828u: goto label_7F211828;
    case 0x7F21182Cu: goto label_7F21182C;
    case 0x7F211830u: goto label_7F211830;
    case 0x7F211834u: goto label_7F211834;
    case 0x7F211838u: goto label_7F211838;
    case 0x7F21183Cu: goto label_7F21183C;
    case 0x7F211840u: goto label_7F211840;
    case 0x7F211844u: goto label_7F211844;
    case 0x7F211848u: goto label_7F211848;
    case 0x7F21184Cu: goto label_7F21184C;
    case 0x7F211850u: goto label_7F211850;
    case 0x7F211854u: goto label_7F211854;
    case 0x7F211858u: goto label_7F211858;
    case 0x7F21185Cu: goto label_7F21185C;
    case 0x7F211860u: goto label_7F211860;
    case 0x7F211864u: goto label_7F211864;
    case 0x7F211868u: goto label_7F211868;
    case 0x7F21186Cu: goto label_7F21186C;
    case 0x7F211870u: goto label_7F211870;
    case 0x7F211874u: goto label_7F211874;
    case 0x7F211878u: goto label_7F211878;
    case 0x7F21187Cu: goto label_7F21187C;
    case 0x7F211880u: goto label_7F211880;
    case 0x7F211884u: goto label_7F211884;
    case 0x7F211888u: goto label_7F211888;
    case 0x7F21188Cu: goto label_7F21188C;
    case 0x7F211890u: goto label_7F211890;
    case 0x7F211894u: goto label_7F211894;
    case 0x7F211898u: goto label_7F211898;
    case 0x7F21189Cu: goto label_7F21189C;
    case 0x7F2118A0u: goto label_7F2118A0;
    case 0x7F2118A4u: goto label_7F2118A4;
    case 0x7F2118A8u: goto label_7F2118A8;
    case 0x7F2118ACu: goto label_7F2118AC;
    case 0x7F2118B0u: goto label_7F2118B0;
    case 0x7F2118B4u: goto label_7F2118B4;
    case 0x7F2118B8u: goto label_7F2118B8;
    case 0x7F2118BCu: goto label_7F2118BC;
    case 0x7F2118C0u: goto label_7F2118C0;
    case 0x7F2118C4u: goto label_7F2118C4;
    case 0x7F2118C8u: goto label_7F2118C8;
    case 0x7F2118CCu: goto label_7F2118CC;
    case 0x7F2118D0u: goto label_7F2118D0;
    case 0x7F2118D4u: goto label_7F2118D4;
    case 0x7F2118D8u: goto label_7F2118D8;
    case 0x7F2118DCu: goto label_7F2118DC;
    case 0x7F2118E0u: goto label_7F2118E0;
    case 0x7F2118E4u: goto label_7F2118E4;
    case 0x7F2118E8u: goto label_7F2118E8;
    case 0x7F2118ECu: goto label_7F2118EC;
    case 0x7F2118F0u: goto label_7F2118F0;
    case 0x7F2118F4u: goto label_7F2118F4;
    case 0x7F2118F8u: goto label_7F2118F8;
    case 0x7F2118FCu: goto label_7F2118FC;
    case 0x7F211900u: goto label_7F211900;
    case 0x7F211904u: goto label_7F211904;
    case 0x7F211908u: goto label_7F211908;
    case 0x7F21190Cu: goto label_7F21190C;
    case 0x7F211910u: goto label_7F211910;
    case 0x7F211914u: goto label_7F211914;
    case 0x7F211918u: goto label_7F211918;
    case 0x7F21191Cu: goto label_7F21191C;
    case 0x7F211920u: goto label_7F211920;
    case 0x7F211924u: goto label_7F211924;
    case 0x7F211928u: goto label_7F211928;
    case 0x7F21192Cu: goto label_7F21192C;
    case 0x7F211930u: goto label_7F211930;
    case 0x7F211934u: goto label_7F211934;
    case 0x7F211938u: goto label_7F211938;
    case 0x7F21193Cu: goto label_7F21193C;
    case 0x7F211940u: goto label_7F211940;
    case 0x7F211944u: goto label_7F211944;
    case 0x7F211948u: goto label_7F211948;
    case 0x7F21194Cu: goto label_7F21194C;
    case 0x7F211950u: goto label_7F211950;
    case 0x7F211954u: goto label_7F211954;
    case 0x7F211958u: goto label_7F211958;
    case 0x7F21195Cu: goto label_7F21195C;
    case 0x7F211960u: goto label_7F211960;
    case 0x7F211964u: goto label_7F211964;
    case 0x7F211968u: goto label_7F211968;
    case 0x7F21196Cu: goto label_7F21196C;
    case 0x7F211970u: goto label_7F211970;
    case 0x7F211974u: goto label_7F211974;
    case 0x7F211978u: goto label_7F211978;
    case 0x7F21197Cu: goto label_7F21197C;
    case 0x7F211980u: goto label_7F211980;
    case 0x7F211984u: goto label_7F211984;
    case 0x7F211988u: goto label_7F211988;
    case 0x7F21198Cu: goto label_7F21198C;
    case 0x7F211990u: goto label_7F211990;
    case 0x7F211994u: goto label_7F211994;
    case 0x7F211998u: goto label_7F211998;
    case 0x7F21199Cu: goto label_7F21199C;
    case 0x7F2119A0u: goto label_7F2119A0;
    case 0x7F2119A4u: goto label_7F2119A4;
    case 0x7F2119A8u: goto label_7F2119A8;
    case 0x7F2119ACu: goto label_7F2119AC;
    case 0x7F2119B0u: goto label_7F2119B0;
    case 0x7F2119B4u: goto label_7F2119B4;
    case 0x7F2119B8u: goto label_7F2119B8;
    case 0x7F2119BCu: goto label_7F2119BC;
    case 0x7F2119C0u: goto label_7F2119C0;
    case 0x7F2119C4u: goto label_7F2119C4;
    case 0x7F2119C8u: goto label_7F2119C8;
    case 0x7F2119CCu: goto label_7F2119CC;
    case 0x7F2119D0u: goto label_7F2119D0;
    case 0x7F2119D4u: goto label_7F2119D4;
    case 0x7F2119D8u: goto label_7F2119D8;
    case 0x7F2119DCu: goto label_7F2119DC;
    case 0x7F2119E0u: goto label_7F2119E0;
    case 0x7F2119E4u: goto label_7F2119E4;
    case 0x7F2119E8u: goto label_7F2119E8;
    case 0x7F2119ECu: goto label_7F2119EC;
    case 0x7F2119F0u: goto label_7F2119F0;
    case 0x7F2119F4u: goto label_7F2119F4;
    case 0x7F2119F8u: goto label_7F2119F8;
    case 0x7F2119FCu: goto label_7F2119FC;
    case 0x7F211A00u: goto label_7F211A00;
    case 0x7F211A04u: goto label_7F211A04;
    case 0x7F211A08u: goto label_7F211A08;
    case 0x7F211A0Cu: goto label_7F211A0C;
    case 0x7F211A10u: goto label_7F211A10;
    case 0x7F211A14u: goto label_7F211A14;
    case 0x7F211A18u: goto label_7F211A18;
    case 0x7F211A1Cu: goto label_7F211A1C;
    case 0x7F211A20u: goto label_7F211A20;
    case 0x7F211A24u: goto label_7F211A24;
    case 0x7F211A28u: goto label_7F211A28;
    case 0x7F211A2Cu: goto label_7F211A2C;
    case 0x7F211A30u: goto label_7F211A30;
    case 0x7F211A34u: goto label_7F211A34;
    case 0x7F211A38u: goto label_7F211A38;
    case 0x7F211A3Cu: goto label_7F211A3C;
    case 0x7F211A40u: goto label_7F211A40;
    case 0x7F211A44u: goto label_7F211A44;
    case 0x7F211A48u: goto label_7F211A48;
    case 0x7F211A4Cu: goto label_7F211A4C;
    case 0x7F211A50u: goto label_7F211A50;
    case 0x7F211A54u: goto label_7F211A54;
    case 0x7F211A58u: goto label_7F211A58;
    case 0x7F211A5Cu: goto label_7F211A5C;
    case 0x7F211A60u: goto label_7F211A60;
    case 0x7F211A64u: goto label_7F211A64;
    case 0x7F211A68u: goto label_7F211A68;
    case 0x7F211A6Cu: goto label_7F211A6C;
    case 0x7F211A70u: goto label_7F211A70;
    case 0x7F211A74u: goto label_7F211A74;
    case 0x7F211A78u: goto label_7F211A78;
    case 0x7F211A7Cu: goto label_7F211A7C;
    case 0x7F211A80u: goto label_7F211A80;
    case 0x7F211A84u: goto label_7F211A84;
    case 0x7F211A88u: goto label_7F211A88;
    case 0x7F211A8Cu: goto label_7F211A8C;
    case 0x7F211A90u: goto label_7F211A90;
    case 0x7F211A94u: goto label_7F211A94;
    case 0x7F211A98u: goto label_7F211A98;
    case 0x7F211A9Cu: goto label_7F211A9C;
    case 0x7F211AA0u: goto label_7F211AA0;
    case 0x7F211AA4u: goto label_7F211AA4;
    case 0x7F211AA8u: goto label_7F211AA8;
    case 0x7F211AACu: goto label_7F211AAC;
    case 0x7F211AB0u: goto label_7F211AB0;
    case 0x7F211AB4u: goto label_7F211AB4;
    case 0x7F211AB8u: goto label_7F211AB8;
    case 0x7F211ABCu: goto label_7F211ABC;
    case 0x7F211AC0u: goto label_7F211AC0;
    case 0x7F211AC4u: goto label_7F211AC4;
    case 0x7F211AC8u: goto label_7F211AC8;
    case 0x7F211ACCu: goto label_7F211ACC;
    case 0x7F211AD0u: goto label_7F211AD0;
    case 0x7F211AD4u: goto label_7F211AD4;
    case 0x7F211AD8u: goto label_7F211AD8;
    case 0x7F211ADCu: goto label_7F211ADC;
    case 0x7F211AE0u: goto label_7F211AE0;
    case 0x7F211AE4u: goto label_7F211AE4;
    case 0x7F211AE8u: goto label_7F211AE8;
    case 0x7F211AECu: goto label_7F211AEC;
    case 0x7F211AF0u: goto label_7F211AF0;
    case 0x7F211AF4u: goto label_7F211AF4;
    case 0x7F211AF8u: goto label_7F211AF8;
    case 0x7F211AFCu: goto label_7F211AFC;
    case 0x7F211B00u: goto label_7F211B00;
    case 0x7F211B04u: goto label_7F211B04;
    case 0x7F211B08u: goto label_7F211B08;
    case 0x7F211B0Cu: goto label_7F211B0C;
    case 0x7F211B10u: goto label_7F211B10;
    case 0x7F211B14u: goto label_7F211B14;
    case 0x7F211B18u: goto label_7F211B18;
    case 0x7F211B1Cu: goto label_7F211B1C;
    case 0x7F211B20u: goto label_7F211B20;
    case 0x7F211B24u: goto label_7F211B24;
    case 0x7F211B28u: goto label_7F211B28;
    case 0x7F211B2Cu: goto label_7F211B2C;
    case 0x7F211B30u: goto label_7F211B30;
    case 0x7F211B34u: goto label_7F211B34;
    case 0x7F211B38u: goto label_7F211B38;
    case 0x7F211B3Cu: goto label_7F211B3C;
    case 0x7F211B40u: goto label_7F211B40;
    case 0x7F211B44u: goto label_7F211B44;
    case 0x7F211B48u: goto label_7F211B48;
    case 0x7F211B4Cu: goto label_7F211B4C;
    case 0x7F211B50u: goto label_7F211B50;
    case 0x7F211B54u: goto label_7F211B54;
    case 0x7F211B58u: goto label_7F211B58;
    case 0x7F211B5Cu: goto label_7F211B5C;
    case 0x7F211B60u: goto label_7F211B60;
    case 0x7F211B64u: goto label_7F211B64;
    case 0x7F211B68u: goto label_7F211B68;
    case 0x7F211B6Cu: goto label_7F211B6C;
    case 0x7F211B70u: goto label_7F211B70;
    case 0x7F211B74u: goto label_7F211B74;
    case 0x7F211B78u: goto label_7F211B78;
    case 0x7F211B7Cu: goto label_7F211B7C;
    case 0x7F211B80u: goto label_7F211B80;
    case 0x7F211B84u: goto label_7F211B84;
    case 0x7F211B88u: goto label_7F211B88;
    case 0x7F211B8Cu: goto label_7F211B8C;
    case 0x7F211B90u: goto label_7F211B90;
    case 0x7F211B94u: goto label_7F211B94;
    case 0x7F211B98u: goto label_7F211B98;
    case 0x7F211B9Cu: goto label_7F211B9C;
    case 0x7F211BA0u: goto label_7F211BA0;
    case 0x7F211BA4u: goto label_7F211BA4;
    case 0x7F211BA8u: goto label_7F211BA8;
    case 0x7F211BACu: goto label_7F211BAC;
    case 0x7F211BB0u: goto label_7F211BB0;
    case 0x7F211BB4u: goto label_7F211BB4;
    case 0x7F211BB8u: goto label_7F211BB8;
    case 0x7F211BBCu: goto label_7F211BBC;
    case 0x7F211BC0u: goto label_7F211BC0;
    case 0x7F211BC4u: goto label_7F211BC4;
    case 0x7F211BC8u: goto label_7F211BC8;
    case 0x7F211BCCu: goto label_7F211BCC;
    case 0x7F211BD0u: goto label_7F211BD0;
    case 0x7F211BD4u: goto label_7F211BD4;
    case 0x7F211BD8u: goto label_7F211BD8;
    case 0x7F211BDCu: goto label_7F211BDC;
    case 0x7F211BE0u: goto label_7F211BE0;
    case 0x7F211BE4u: goto label_7F211BE4;
    case 0x7F211BE8u: goto label_7F211BE8;
    case 0x7F211BECu: goto label_7F211BEC;
    case 0x7F211BF0u: goto label_7F211BF0;
    case 0x7F211BF4u: goto label_7F211BF4;
    case 0x7F211BF8u: goto label_7F211BF8;
    case 0x7F211BFCu: goto label_7F211BFC;
    case 0x7F211C00u: goto label_7F211C00;
    case 0x7F211C04u: goto label_7F211C04;
    case 0x7F211C08u: goto label_7F211C08;
    case 0x7F211C0Cu: goto label_7F211C0C;
    case 0x7F211C10u: goto label_7F211C10;
    case 0x7F211C14u: goto label_7F211C14;
    case 0x7F211C18u: goto label_7F211C18;
    case 0x7F211C1Cu: goto label_7F211C1C;
    case 0x7F211C20u: goto label_7F211C20;
    case 0x7F211C24u: goto label_7F211C24;
    case 0x7F211C28u: goto label_7F211C28;
    case 0x7F211C2Cu: goto label_7F211C2C;
    case 0x7F211C30u: goto label_7F211C30;
    case 0x7F211C34u: goto label_7F211C34;
    case 0x7F211C38u: goto label_7F211C38;
    case 0x7F211C3Cu: goto label_7F211C3C;
    case 0x7F211C40u: goto label_7F211C40;
    case 0x7F211C44u: goto label_7F211C44;
    case 0x7F211C48u: goto label_7F211C48;
    case 0x7F211C4Cu: goto label_7F211C4C;
    case 0x7F211C50u: goto label_7F211C50;
    case 0x7F211C54u: goto label_7F211C54;
    case 0x7F211C58u: goto label_7F211C58;
    case 0x7F211C5Cu: goto label_7F211C5C;
    case 0x7F211C60u: goto label_7F211C60;
    case 0x7F211C64u: goto label_7F211C64;
    case 0x7F211C68u: goto label_7F211C68;
    case 0x7F211C6Cu: goto label_7F211C6C;
    case 0x7F211C70u: goto label_7F211C70;
    case 0x7F211C74u: goto label_7F211C74;
    case 0x7F211C78u: goto label_7F211C78;
    case 0x7F211C7Cu: goto label_7F211C7C;
    case 0x7F211C80u: goto label_7F211C80;
    case 0x7F211C84u: goto label_7F211C84;
    case 0x7F211C88u: goto label_7F211C88;
    case 0x7F211C8Cu: goto label_7F211C8C;
    case 0x7F211C90u: goto label_7F211C90;
    case 0x7F211C94u: goto label_7F211C94;
    case 0x7F211C98u: goto label_7F211C98;
    case 0x7F211C9Cu: goto label_7F211C9C;
    case 0x7F211CA0u: goto label_7F211CA0;
    case 0x7F211CA4u: goto label_7F211CA4;
    case 0x7F211CA8u: goto label_7F211CA8;
    case 0x7F211CACu: goto label_7F211CAC;
    case 0x7F211CB0u: goto label_7F211CB0;
    case 0x7F211CB4u: goto label_7F211CB4;
    case 0x7F211CB8u: goto label_7F211CB8;
    case 0x7F211CBCu: goto label_7F211CBC;
    case 0x7F211CC0u: goto label_7F211CC0;
    case 0x7F211CC4u: goto label_7F211CC4;
    case 0x7F211CC8u: goto label_7F211CC8;
    case 0x7F211CCCu: goto label_7F211CCC;
    case 0x7F211CD0u: goto label_7F211CD0;
    case 0x7F211CD4u: goto label_7F211CD4;
    case 0x7F211CD8u: goto label_7F211CD8;
    case 0x7F211CDCu: goto label_7F211CDC;
    case 0x7F211CE0u: goto label_7F211CE0;
    case 0x7F211CE4u: goto label_7F211CE4;
    case 0x7F211CE8u: goto label_7F211CE8;
    case 0x7F211CECu: goto label_7F211CEC;
    case 0x7F211CF0u: goto label_7F211CF0;
    case 0x7F211CF4u: goto label_7F211CF4;
    case 0x7F211CF8u: goto label_7F211CF8;
    case 0x7F211CFCu: goto label_7F211CFC;
    case 0x7F211D00u: goto label_7F211D00;
    case 0x7F211D04u: goto label_7F211D04;
    case 0x7F211D08u: goto label_7F211D08;
    case 0x7F211D0Cu: goto label_7F211D0C;
    case 0x7F211D10u: goto label_7F211D10;
    case 0x7F211D14u: goto label_7F211D14;
    case 0x7F211D18u: goto label_7F211D18;
    case 0x7F211D1Cu: goto label_7F211D1C;
    case 0x7F211D20u: goto label_7F211D20;
    case 0x7F211D24u: goto label_7F211D24;
    case 0x7F211D28u: goto label_7F211D28;
    case 0x7F211D2Cu: goto label_7F211D2C;
    case 0x7F211D30u: goto label_7F211D30;
    case 0x7F211D34u: goto label_7F211D34;
    case 0x7F211D38u: goto label_7F211D38;
    case 0x7F211D3Cu: goto label_7F211D3C;
    case 0x7F211D40u: goto label_7F211D40;
    case 0x7F211D44u: goto label_7F211D44;
    case 0x7F211D48u: goto label_7F211D48;
    case 0x7F211D4Cu: goto label_7F211D4C;
    case 0x7F211D50u: goto label_7F211D50;
    case 0x7F211D54u: goto label_7F211D54;
    case 0x7F211D58u: goto label_7F211D58;
    case 0x7F211D5Cu: goto label_7F211D5C;
    case 0x7F211D60u: goto label_7F211D60;
    case 0x7F211D64u: goto label_7F211D64;
    case 0x7F211D68u: goto label_7F211D68;
    case 0x7F211D6Cu: goto label_7F211D6C;
    case 0x7F211D70u: goto label_7F211D70;
    case 0x7F211D74u: goto label_7F211D74;
    case 0x7F211D78u: goto label_7F211D78;
    case 0x7F211D7Cu: goto label_7F211D7C;
    case 0x7F211D80u: goto label_7F211D80;
    case 0x7F211D84u: goto label_7F211D84;
    case 0x7F211D88u: goto label_7F211D88;
    case 0x7F211D8Cu: goto label_7F211D8C;
    case 0x7F211D90u: goto label_7F211D90;
    case 0x7F211D94u: goto label_7F211D94;
    case 0x7F211D98u: goto label_7F211D98;
    case 0x7F211D9Cu: goto label_7F211D9C;
    case 0x7F211DA0u: goto label_7F211DA0;
    case 0x7F211DA4u: goto label_7F211DA4;
    case 0x7F211DA8u: goto label_7F211DA8;
    case 0x7F211DACu: goto label_7F211DAC;
    case 0x7F211DB0u: goto label_7F211DB0;
    case 0x7F211DB4u: goto label_7F211DB4;
    case 0x7F211DB8u: goto label_7F211DB8;
    case 0x7F211DBCu: goto label_7F211DBC;
    case 0x7F211DC0u: goto label_7F211DC0;
    case 0x7F211DC4u: goto label_7F211DC4;
    case 0x7F211DC8u: goto label_7F211DC8;
    case 0x7F211DCCu: goto label_7F211DCC;
    case 0x7F211DD0u: goto label_7F211DD0;
    case 0x7F211DD4u: goto label_7F211DD4;
    case 0x7F211DD8u: goto label_7F211DD8;
    case 0x7F211DDCu: goto label_7F211DDC;
    case 0x7F211DE0u: goto label_7F211DE0;
    case 0x7F211DE4u: goto label_7F211DE4;
    case 0x7F211DE8u: goto label_7F211DE8;
    case 0x7F211DECu: goto label_7F211DEC;
    case 0x7F211DF0u: goto label_7F211DF0;
    case 0x7F211DF4u: goto label_7F211DF4;
    case 0x7F211DF8u: goto label_7F211DF8;
    case 0x7F211DFCu: goto label_7F211DFC;
    case 0x7F211E00u: goto label_7F211E00;
    case 0x7F211E04u: goto label_7F211E04;
    case 0x7F211E08u: goto label_7F211E08;
    case 0x7F211E0Cu: goto label_7F211E0C;
    case 0x7F211E10u: goto label_7F211E10;
    case 0x7F211E14u: goto label_7F211E14;
    case 0x7F211E18u: goto label_7F211E18;
    case 0x7F211E1Cu: goto label_7F211E1C;
    case 0x7F211E20u: goto label_7F211E20;
    case 0x7F211E24u: goto label_7F211E24;
    case 0x7F211E28u: goto label_7F211E28;
    case 0x7F211E2Cu: goto label_7F211E2C;
    case 0x7F211E30u: goto label_7F211E30;
    case 0x7F211E34u: goto label_7F211E34;
    case 0x7F211E38u: goto label_7F211E38;
    case 0x7F211E3Cu: goto label_7F211E3C;
    case 0x7F211E40u: goto label_7F211E40;
    case 0x7F211E44u: goto label_7F211E44;
    case 0x7F211E48u: goto label_7F211E48;
    case 0x7F211E4Cu: goto label_7F211E4C;
    case 0x7F211E50u: goto label_7F211E50;
    case 0x7F211E54u: goto label_7F211E54;
    case 0x7F211E58u: goto label_7F211E58;
    case 0x7F211E5Cu: goto label_7F211E5C;
    case 0x7F211E60u: goto label_7F211E60;
    case 0x7F211E64u: goto label_7F211E64;
    case 0x7F211E68u: goto label_7F211E68;
    case 0x7F211E6Cu: goto label_7F211E6C;
    case 0x7F211E70u: goto label_7F211E70;
    case 0x7F211E74u: goto label_7F211E74;
    case 0x7F211E78u: goto label_7F211E78;
    case 0x7F211E7Cu: goto label_7F211E7C;
    case 0x7F211E80u: goto label_7F211E80;
    case 0x7F211E84u: goto label_7F211E84;
    case 0x7F211E88u: goto label_7F211E88;
    case 0x7F211E8Cu: goto label_7F211E8C;
    case 0x7F211E90u: goto label_7F211E90;
    case 0x7F211E94u: goto label_7F211E94;
    case 0x7F211E98u: goto label_7F211E98;
    case 0x7F211E9Cu: goto label_7F211E9C;
    case 0x7F211EA0u: goto label_7F211EA0;
    case 0x7F211EA4u: goto label_7F211EA4;
    case 0x7F211EA8u: goto label_7F211EA8;
    case 0x7F211EACu: goto label_7F211EAC;
    case 0x7F211EB0u: goto label_7F211EB0;
    case 0x7F211EB4u: goto label_7F211EB4;
    case 0x7F211EB8u: goto label_7F211EB8;
    case 0x7F211EBCu: goto label_7F211EBC;
    case 0x7F211EC0u: goto label_7F211EC0;
    case 0x7F211EC4u: goto label_7F211EC4;
    case 0x7F211EC8u: goto label_7F211EC8;
    case 0x7F211ECCu: goto label_7F211ECC;
    case 0x7F211ED0u: goto label_7F211ED0;
    case 0x7F211ED4u: goto label_7F211ED4;
    case 0x7F211ED8u: goto label_7F211ED8;
    case 0x7F211EDCu: goto label_7F211EDC;
    case 0x7F211EE0u: goto label_7F211EE0;
    case 0x7F211EE4u: goto label_7F211EE4;
    case 0x7F211EE8u: goto label_7F211EE8;
    case 0x7F211EECu: goto label_7F211EEC;
    case 0x7F211EF0u: goto label_7F211EF0;
    case 0x7F211EF4u: goto label_7F211EF4;
    case 0x7F211EF8u: goto label_7F211EF8;
    case 0x7F211EFCu: goto label_7F211EFC;
    case 0x7F211F00u: goto label_7F211F00;
    case 0x7F211F04u: goto label_7F211F04;
    case 0x7F211F08u: goto label_7F211F08;
    case 0x7F211F0Cu: goto label_7F211F0C;
    case 0x7F211F10u: goto label_7F211F10;
    case 0x7F211F14u: goto label_7F211F14;
    case 0x7F211F18u: goto label_7F211F18;
    case 0x7F211F1Cu: goto label_7F211F1C;
    case 0x7F211F20u: goto label_7F211F20;
    case 0x7F211F24u: goto label_7F211F24;
    case 0x7F211F28u: goto label_7F211F28;
    case 0x7F211F2Cu: goto label_7F211F2C;
    case 0x7F211F30u: goto label_7F211F30;
    case 0x7F211F34u: goto label_7F211F34;
    case 0x7F211F38u: goto label_7F211F38;
    case 0x7F211F3Cu: goto label_7F211F3C;
    case 0x7F211F40u: goto label_7F211F40;
    case 0x7F211F44u: goto label_7F211F44;
    case 0x7F211F48u: goto label_7F211F48;
    case 0x7F211F4Cu: goto label_7F211F4C;
    case 0x7F211F50u: goto label_7F211F50;
    case 0x7F211F54u: goto label_7F211F54;
    case 0x7F211F58u: goto label_7F211F58;
    case 0x7F211F5Cu: goto label_7F211F5C;
    case 0x7F211F60u: goto label_7F211F60;
    case 0x7F211F64u: goto label_7F211F64;
    case 0x7F211F68u: goto label_7F211F68;
    case 0x7F211F6Cu: goto label_7F211F6C;
    case 0x7F211F70u: goto label_7F211F70;
    case 0x7F211F74u: goto label_7F211F74;
    case 0x7F211F78u: goto label_7F211F78;
    case 0x7F211F7Cu: goto label_7F211F7C;
    case 0x7F211F80u: goto label_7F211F80;
    case 0x7F211F84u: goto label_7F211F84;
    case 0x7F211F88u: goto label_7F211F88;
    case 0x7F211F8Cu: goto label_7F211F8C;
    case 0x7F211F90u: goto label_7F211F90;
    case 0x7F211F94u: goto label_7F211F94;
    case 0x7F211F98u: goto label_7F211F98;
    case 0x7F211F9Cu: goto label_7F211F9C;
    case 0x7F211FA0u: goto label_7F211FA0;
    case 0x7F211FA4u: goto label_7F211FA4;
    case 0x7F211FA8u: goto label_7F211FA8;
    case 0x7F211FACu: goto label_7F211FAC;
    case 0x7F211FB0u: goto label_7F211FB0;
    case 0x7F211FB4u: goto label_7F211FB4;
    case 0x7F211FB8u: goto label_7F211FB8;
    case 0x7F211FBCu: goto label_7F211FBC;
    case 0x7F211FC0u: goto label_7F211FC0;
    case 0x7F211FC4u: goto label_7F211FC4;
    case 0x7F211FC8u: goto label_7F211FC8;
    case 0x7F211FCCu: goto label_7F211FCC;
    case 0x7F211FD0u: goto label_7F211FD0;
    case 0x7F211FD4u: goto label_7F211FD4;
    case 0x7F211FD8u: goto label_7F211FD8;
    case 0x7F211FDCu: goto label_7F211FDC;
    case 0x7F211FE0u: goto label_7F211FE0;
    case 0x7F211FE4u: goto label_7F211FE4;
    case 0x7F211FE8u: goto label_7F211FE8;
    case 0x7F211FECu: goto label_7F211FEC;
    case 0x7F211FF0u: goto label_7F211FF0;
    case 0x7F211FF4u: goto label_7F211FF4;
    case 0x7F211FF8u: goto label_7F211FF8;
    case 0x7F211FFCu: goto label_7F211FFC;
    case 0x7F212000u: goto label_7F212000;
    case 0x7F212004u: goto label_7F212004;
    case 0x7F212008u: goto label_7F212008;
    case 0x7F21200Cu: goto label_7F21200C;
    case 0x7F212010u: goto label_7F212010;
    case 0x7F212014u: goto label_7F212014;
    case 0x7F212018u: goto label_7F212018;
    case 0x7F21201Cu: goto label_7F21201C;
    case 0x7F212020u: goto label_7F212020;
    case 0x7F212024u: goto label_7F212024;
    case 0x7F212028u: goto label_7F212028;
    case 0x7F21202Cu: goto label_7F21202C;
    case 0x7F212030u: goto label_7F212030;
    case 0x7F212034u: goto label_7F212034;
    case 0x7F212038u: goto label_7F212038;
    case 0x7F21203Cu: goto label_7F21203C;
    case 0x7F212040u: goto label_7F212040;
    case 0x7F212044u: goto label_7F212044;
    case 0x7F212048u: goto label_7F212048;
    case 0x7F21204Cu: goto label_7F21204C;
    case 0x7F212050u: goto label_7F212050;
    case 0x7F212054u: goto label_7F212054;
    case 0x7F212058u: goto label_7F212058;
    case 0x7F21205Cu: goto label_7F21205C;
    case 0x7F212060u: goto label_7F212060;
    case 0x7F212064u: goto label_7F212064;
    case 0x7F212068u: goto label_7F212068;
    case 0x7F21206Cu: goto label_7F21206C;
    case 0x7F212070u: goto label_7F212070;
    case 0x7F212074u: goto label_7F212074;
    case 0x7F212078u: goto label_7F212078;
    case 0x7F21207Cu: goto label_7F21207C;
    case 0x7F212080u: goto label_7F212080;
    case 0x7F212084u: goto label_7F212084;
    case 0x7F212088u: goto label_7F212088;
    case 0x7F21208Cu: goto label_7F21208C;
    case 0x7F212090u: goto label_7F212090;
    case 0x7F212094u: goto label_7F212094;
    case 0x7F212098u: goto label_7F212098;
    case 0x7F21209Cu: goto label_7F21209C;
    case 0x7F2120A0u: goto label_7F2120A0;
    case 0x7F2120A4u: goto label_7F2120A4;
    case 0x7F2120A8u: goto label_7F2120A8;
    case 0x7F2120ACu: goto label_7F2120AC;
    case 0x7F2120B0u: goto label_7F2120B0;
    case 0x7F2120B4u: goto label_7F2120B4;
    case 0x7F2120B8u: goto label_7F2120B8;
    case 0x7F2120BCu: goto label_7F2120BC;
    case 0x7F2120C0u: goto label_7F2120C0;
    case 0x7F2120C4u: goto label_7F2120C4;
    case 0x7F2120C8u: goto label_7F2120C8;
    case 0x7F2120CCu: goto label_7F2120CC;
    case 0x7F2120D0u: goto label_7F2120D0;
    case 0x7F2120D4u: goto label_7F2120D4;
    case 0x7F2120D8u: goto label_7F2120D8;
    case 0x7F2120DCu: goto label_7F2120DC;
    case 0x7F2120E0u: goto label_7F2120E0;
    case 0x7F2120E4u: goto label_7F2120E4;
    case 0x7F2120E8u: goto label_7F2120E8;
    case 0x7F2120ECu: goto label_7F2120EC;
    case 0x7F2120F0u: goto label_7F2120F0;
    case 0x7F2120F4u: goto label_7F2120F4;
    case 0x7F2120F8u: goto label_7F2120F8;
    case 0x7F2120FCu: goto label_7F2120FC;
    case 0x7F212100u: goto label_7F212100;
    case 0x7F212104u: goto label_7F212104;
    case 0x7F212108u: goto label_7F212108;
    case 0x7F21210Cu: goto label_7F21210C;
    case 0x7F212110u: goto label_7F212110;
    case 0x7F212114u: goto label_7F212114;
    case 0x7F212118u: goto label_7F212118;
    case 0x7F21211Cu: goto label_7F21211C;
    case 0x7F212120u: goto label_7F212120;
    case 0x7F212124u: goto label_7F212124;
    case 0x7F212128u: goto label_7F212128;
    case 0x7F21212Cu: goto label_7F21212C;
    case 0x7F212130u: goto label_7F212130;
    case 0x7F212134u: goto label_7F212134;
    case 0x7F212138u: goto label_7F212138;
    case 0x7F21213Cu: goto label_7F21213C;
    case 0x7F212140u: goto label_7F212140;
    case 0x7F212144u: goto label_7F212144;
    case 0x7F212148u: goto label_7F212148;
    case 0x7F21214Cu: goto label_7F21214C;
    case 0x7F212150u: goto label_7F212150;
    case 0x7F212154u: goto label_7F212154;
    case 0x7F212158u: goto label_7F212158;
    case 0x7F21215Cu: goto label_7F21215C;
    case 0x7F212160u: goto label_7F212160;
    case 0x7F212164u: goto label_7F212164;
    case 0x7F212168u: goto label_7F212168;
    case 0x7F21216Cu: goto label_7F21216C;
    case 0x7F212170u: goto label_7F212170;
    case 0x7F212174u: goto label_7F212174;
    case 0x7F212178u: goto label_7F212178;
    case 0x7F21217Cu: goto label_7F21217C;
    case 0x7F212180u: goto label_7F212180;
    case 0x7F212184u: goto label_7F212184;
    case 0x7F212188u: goto label_7F212188;
    case 0x7F21218Cu: goto label_7F21218C;
    case 0x7F212190u: goto label_7F212190;
    case 0x7F212194u: goto label_7F212194;
    case 0x7F212198u: goto label_7F212198;
    case 0x7F21219Cu: goto label_7F21219C;
    case 0x7F2121A0u: goto label_7F2121A0;
    case 0x7F2121A4u: goto label_7F2121A4;
    case 0x7F2121A8u: goto label_7F2121A8;
    case 0x7F2121ACu: goto label_7F2121AC;
    case 0x7F2121B0u: goto label_7F2121B0;
    case 0x7F2121B4u: goto label_7F2121B4;
    case 0x7F2121B8u: goto label_7F2121B8;
    case 0x7F2121BCu: goto label_7F2121BC;
    case 0x7F2121C0u: goto label_7F2121C0;
    case 0x7F2121C4u: goto label_7F2121C4;
    case 0x7F2121C8u: goto label_7F2121C8;
    case 0x7F2121CCu: goto label_7F2121CC;
    case 0x7F2121D0u: goto label_7F2121D0;
    case 0x7F2121D4u: goto label_7F2121D4;
    case 0x7F2121D8u: goto label_7F2121D8;
    case 0x7F2121DCu: goto label_7F2121DC;
    case 0x7F2121E0u: goto label_7F2121E0;
    case 0x7F2121E4u: goto label_7F2121E4;
    case 0x7F2121E8u: goto label_7F2121E8;
    case 0x7F2121ECu: goto label_7F2121EC;
    case 0x7F2121F0u: goto label_7F2121F0;
    case 0x7F2121F4u: goto label_7F2121F4;
    case 0x7F2121F8u: goto label_7F2121F8;
    case 0x7F2121FCu: goto label_7F2121FC;
    case 0x7F212200u: goto label_7F212200;
    case 0x7F212204u: goto label_7F212204;
    case 0x7F212208u: goto label_7F212208;
    case 0x7F21220Cu: goto label_7F21220C;
    case 0x7F212210u: goto label_7F212210;
    case 0x7F212214u: goto label_7F212214;
    case 0x7F212218u: goto label_7F212218;
    case 0x7F21221Cu: goto label_7F21221C;
    case 0x7F212220u: goto label_7F212220;
    case 0x7F212224u: goto label_7F212224;
    case 0x7F212228u: goto label_7F212228;
    case 0x7F21222Cu: goto label_7F21222C;
    case 0x7F212230u: goto label_7F212230;
    case 0x7F212234u: goto label_7F212234;
    case 0x7F212238u: goto label_7F212238;
    case 0x7F21223Cu: goto label_7F21223C;
    case 0x7F212240u: goto label_7F212240;
    case 0x7F212244u: goto label_7F212244;
    case 0x7F212248u: goto label_7F212248;
    case 0x7F21224Cu: goto label_7F21224C;
    case 0x7F212250u: goto label_7F212250;
    case 0x7F212254u: goto label_7F212254;
    case 0x7F212258u: goto label_7F212258;
    case 0x7F21225Cu: goto label_7F21225C;
    case 0x7F212260u: goto label_7F212260;
    case 0x7F212264u: goto label_7F212264;
    case 0x7F212268u: goto label_7F212268;
    case 0x7F21226Cu: goto label_7F21226C;
    case 0x7F212270u: goto label_7F212270;
    case 0x7F212274u: goto label_7F212274;
    case 0x7F212278u: goto label_7F212278;
    case 0x7F21227Cu: goto label_7F21227C;
    case 0x7F212280u: goto label_7F212280;
    case 0x7F212284u: goto label_7F212284;
    case 0x7F212288u: goto label_7F212288;
    case 0x7F21228Cu: goto label_7F21228C;
    case 0x7F212290u: goto label_7F212290;
    case 0x7F212294u: goto label_7F212294;
    case 0x7F212298u: goto label_7F212298;
    case 0x7F21229Cu: goto label_7F21229C;
    case 0x7F2122A0u: goto label_7F2122A0;
    case 0x7F2122A4u: goto label_7F2122A4;
    case 0x7F2122A8u: goto label_7F2122A8;
    case 0x7F2122ACu: goto label_7F2122AC;
    case 0x7F2122B0u: goto label_7F2122B0;
    case 0x7F2122B4u: goto label_7F2122B4;
    case 0x7F2122B8u: goto label_7F2122B8;
    case 0x7F2122BCu: goto label_7F2122BC;
    case 0x7F2122C0u: goto label_7F2122C0;
    case 0x7F2122C4u: goto label_7F2122C4;
    case 0x7F2122C8u: goto label_7F2122C8;
    case 0x7F2122CCu: goto label_7F2122CC;
    case 0x7F2122D0u: goto label_7F2122D0;
    case 0x7F2122D4u: goto label_7F2122D4;
    case 0x7F2122D8u: goto label_7F2122D8;
    case 0x7F2122DCu: goto label_7F2122DC;
    case 0x7F2122E0u: goto label_7F2122E0;
    case 0x7F2122E4u: goto label_7F2122E4;
    case 0x7F2122E8u: goto label_7F2122E8;
    case 0x7F2122ECu: goto label_7F2122EC;
    case 0x7F2122F0u: goto label_7F2122F0;
    case 0x7F2122F4u: goto label_7F2122F4;
    case 0x7F2122F8u: goto label_7F2122F8;
    case 0x7F2122FCu: goto label_7F2122FC;
    case 0x7F212300u: goto label_7F212300;
    case 0x7F212304u: goto label_7F212304;
    case 0x7F212308u: goto label_7F212308;
    case 0x7F21230Cu: goto label_7F21230C;
    case 0x7F212310u: goto label_7F212310;
    case 0x7F212314u: goto label_7F212314;
    case 0x7F212318u: goto label_7F212318;
    case 0x7F21231Cu: goto label_7F21231C;
    case 0x7F212320u: goto label_7F212320;
    case 0x7F212324u: goto label_7F212324;
    case 0x7F212328u: goto label_7F212328;
    case 0x7F21232Cu: goto label_7F21232C;
    case 0x7F212330u: goto label_7F212330;
    case 0x7F212334u: goto label_7F212334;
    case 0x7F212338u: goto label_7F212338;
    case 0x7F21233Cu: goto label_7F21233C;
    case 0x7F212340u: goto label_7F212340;
    case 0x7F212344u: goto label_7F212344;
    case 0x7F212348u: goto label_7F212348;
    case 0x7F21234Cu: goto label_7F21234C;
    case 0x7F212350u: goto label_7F212350;
    case 0x7F212354u: goto label_7F212354;
    case 0x7F212358u: goto label_7F212358;
    case 0x7F21235Cu: goto label_7F21235C;
    case 0x7F212360u: goto label_7F212360;
    case 0x7F212364u: goto label_7F212364;
    case 0x7F212368u: goto label_7F212368;
    case 0x7F21236Cu: goto label_7F21236C;
    case 0x7F212370u: goto label_7F212370;
    case 0x7F212374u: goto label_7F212374;
    case 0x7F212378u: goto label_7F212378;
    case 0x7F21237Cu: goto label_7F21237C;
    case 0x7F212380u: goto label_7F212380;
    case 0x7F212384u: goto label_7F212384;
    case 0x7F212388u: goto label_7F212388;
    case 0x7F21238Cu: goto label_7F21238C;
    case 0x7F212390u: goto label_7F212390;
    case 0x7F212394u: goto label_7F212394;
    case 0x7F212398u: goto label_7F212398;
    case 0x7F21239Cu: goto label_7F21239C;
    case 0x7F2123A0u: goto label_7F2123A0;
    case 0x7F2123A4u: goto label_7F2123A4;
    case 0x7F2123A8u: goto label_7F2123A8;
    case 0x7F2123ACu: goto label_7F2123AC;
    case 0x7F2123B0u: goto label_7F2123B0;
    case 0x7F2123B4u: goto label_7F2123B4;
    case 0x7F2123B8u: goto label_7F2123B8;
    case 0x7F2123BCu: goto label_7F2123BC;
    case 0x7F2123C0u: goto label_7F2123C0;
    case 0x7F2123C4u: goto label_7F2123C4;
    case 0x7F2123C8u: goto label_7F2123C8;
    case 0x7F2123CCu: goto label_7F2123CC;
    case 0x7F2123D0u: goto label_7F2123D0;
    case 0x7F2123D4u: goto label_7F2123D4;
    case 0x7F2123D8u: goto label_7F2123D8;
    case 0x7F2123DCu: goto label_7F2123DC;
    case 0x7F2123E0u: goto label_7F2123E0;
    case 0x7F2123E4u: goto label_7F2123E4;
    case 0x7F2123E8u: goto label_7F2123E8;
    case 0x7F2123ECu: goto label_7F2123EC;
    case 0x7F2123F0u: goto label_7F2123F0;
    case 0x7F2123F4u: goto label_7F2123F4;
    case 0x7F2123F8u: goto label_7F2123F8;
    case 0x7F2123FCu: goto label_7F2123FC;
    case 0x7F212400u: goto label_7F212400;
    case 0x7F212404u: goto label_7F212404;
    case 0x7F212408u: goto label_7F212408;
    case 0x7F21240Cu: goto label_7F21240C;
    case 0x7F212410u: goto label_7F212410;
    case 0x7F212414u: goto label_7F212414;
    case 0x7F212418u: goto label_7F212418;
    case 0x7F21241Cu: goto label_7F21241C;
    case 0x7F212420u: goto label_7F212420;
    case 0x7F212424u: goto label_7F212424;
    case 0x7F212428u: goto label_7F212428;
    case 0x7F21242Cu: goto label_7F21242C;
    case 0x7F212430u: goto label_7F212430;
    case 0x7F212434u: goto label_7F212434;
    case 0x7F212438u: goto label_7F212438;
    case 0x7F21243Cu: goto label_7F21243C;
    case 0x7F212440u: goto label_7F212440;
    case 0x7F212444u: goto label_7F212444;
    case 0x7F212448u: goto label_7F212448;
    case 0x7F21244Cu: goto label_7F21244C;
    case 0x7F212450u: goto label_7F212450;
    case 0x7F212454u: goto label_7F212454;
    case 0x7F212458u: goto label_7F212458;
    case 0x7F21245Cu: goto label_7F21245C;
    case 0x7F212460u: goto label_7F212460;
    case 0x7F212464u: goto label_7F212464;
    case 0x7F212468u: goto label_7F212468;
    case 0x7F21246Cu: goto label_7F21246C;
    case 0x7F212470u: goto label_7F212470;
    case 0x7F212474u: goto label_7F212474;
    case 0x7F212478u: goto label_7F212478;
    case 0x7F21247Cu: goto label_7F21247C;
    case 0x7F212480u: goto label_7F212480;
    case 0x7F212484u: goto label_7F212484;
    case 0x7F212488u: goto label_7F212488;
    case 0x7F21248Cu: goto label_7F21248C;
    case 0x7F212490u: goto label_7F212490;
    case 0x7F212494u: goto label_7F212494;
    case 0x7F212498u: goto label_7F212498;
    case 0x7F21249Cu: goto label_7F21249C;
    case 0x7F2124A0u: goto label_7F2124A0;
    case 0x7F2124A4u: goto label_7F2124A4;
    case 0x7F2124A8u: goto label_7F2124A8;
    case 0x7F2124ACu: goto label_7F2124AC;
    case 0x7F2124B0u: goto label_7F2124B0;
    case 0x7F2124B4u: goto label_7F2124B4;
    case 0x7F2124B8u: goto label_7F2124B8;
    case 0x7F2124BCu: goto label_7F2124BC;
    case 0x7F2124C0u: goto label_7F2124C0;
    case 0x7F2124C4u: goto label_7F2124C4;
    case 0x7F2124C8u: goto label_7F2124C8;
    case 0x7F2124CCu: goto label_7F2124CC;
    case 0x7F2124D0u: goto label_7F2124D0;
    case 0x7F2124D4u: goto label_7F2124D4;
    case 0x7F2124D8u: goto label_7F2124D8;
    case 0x7F2124DCu: goto label_7F2124DC;
    case 0x7F2124E0u: goto label_7F2124E0;
    case 0x7F2124E4u: goto label_7F2124E4;
    case 0x7F2124E8u: goto label_7F2124E8;
    case 0x7F2124ECu: goto label_7F2124EC;
    case 0x7F2124F0u: goto label_7F2124F0;
    case 0x7F2124F4u: goto label_7F2124F4;
    case 0x7F2124F8u: goto label_7F2124F8;
    case 0x7F2124FCu: goto label_7F2124FC;
    case 0x7F212500u: goto label_7F212500;
    case 0x7F212504u: goto label_7F212504;
    case 0x7F212508u: goto label_7F212508;
    case 0x7F21250Cu: goto label_7F21250C;
    case 0x7F212510u: goto label_7F212510;
    case 0x7F212514u: goto label_7F212514;
    case 0x7F212518u: goto label_7F212518;
    case 0x7F21251Cu: goto label_7F21251C;
    case 0x7F212520u: goto label_7F212520;
    case 0x7F212524u: goto label_7F212524;
    case 0x7F212528u: goto label_7F212528;
    case 0x7F21252Cu: goto label_7F21252C;
    case 0x7F212530u: goto label_7F212530;
    case 0x7F212534u: goto label_7F212534;
    case 0x7F212538u: goto label_7F212538;
    case 0x7F21253Cu: goto label_7F21253C;
    case 0x7F212540u: goto label_7F212540;
    case 0x7F212544u: goto label_7F212544;
    case 0x7F212548u: goto label_7F212548;
    case 0x7F21254Cu: goto label_7F21254C;
    case 0x7F212550u: goto label_7F212550;
    case 0x7F212554u: goto label_7F212554;
    case 0x7F212558u: goto label_7F212558;
    case 0x7F21255Cu: goto label_7F21255C;
    case 0x7F212560u: goto label_7F212560;
    case 0x7F212564u: goto label_7F212564;
    case 0x7F212568u: goto label_7F212568;
    case 0x7F21256Cu: goto label_7F21256C;
    case 0x7F212570u: goto label_7F212570;
    case 0x7F212574u: goto label_7F212574;
    case 0x7F212578u: goto label_7F212578;
    case 0x7F21257Cu: goto label_7F21257C;
    case 0x7F212580u: goto label_7F212580;
    case 0x7F212584u: goto label_7F212584;
    case 0x7F212588u: goto label_7F212588;
    case 0x7F21258Cu: goto label_7F21258C;
    case 0x7F212590u: goto label_7F212590;
    case 0x7F212594u: goto label_7F212594;
    case 0x7F212598u: goto label_7F212598;
    case 0x7F21259Cu: goto label_7F21259C;
    case 0x7F2125A0u: goto label_7F2125A0;
    case 0x7F2125A4u: goto label_7F2125A4;
    case 0x7F2125A8u: goto label_7F2125A8;
    case 0x7F2125ACu: goto label_7F2125AC;
    case 0x7F2125B0u: goto label_7F2125B0;
    case 0x7F2125B4u: goto label_7F2125B4;
    case 0x7F2125B8u: goto label_7F2125B8;
    case 0x7F2125BCu: goto label_7F2125BC;
    case 0x7F2125C0u: goto label_7F2125C0;
    case 0x7F2125C4u: goto label_7F2125C4;
    case 0x7F2125C8u: goto label_7F2125C8;
    case 0x7F2125CCu: goto label_7F2125CC;
    case 0x7F2125D0u: goto label_7F2125D0;
    case 0x7F2125D4u: goto label_7F2125D4;
    case 0x7F2125D8u: goto label_7F2125D8;
    case 0x7F2125DCu: goto label_7F2125DC;
    case 0x7F2125E0u: goto label_7F2125E0;
    case 0x7F2125E4u: goto label_7F2125E4;
    case 0x7F2125E8u: goto label_7F2125E8;
    case 0x7F2125ECu: goto label_7F2125EC;
    case 0x7F2125F0u: goto label_7F2125F0;
    case 0x7F2125F4u: goto label_7F2125F4;
    case 0x7F2125F8u: goto label_7F2125F8;
    case 0x7F2125FCu: goto label_7F2125FC;
    case 0x7F212600u: goto label_7F212600;
    case 0x7F212604u: goto label_7F212604;
    case 0x7F212608u: goto label_7F212608;
    case 0x7F21260Cu: goto label_7F21260C;
    case 0x7F212610u: goto label_7F212610;
    case 0x7F212614u: goto label_7F212614;
    case 0x7F212618u: goto label_7F212618;
    case 0x7F21261Cu: goto label_7F21261C;
    case 0x7F212620u: goto label_7F212620;
    case 0x7F212624u: goto label_7F212624;
    case 0x7F212628u: goto label_7F212628;
    case 0x7F21262Cu: goto label_7F21262C;
    case 0x7F212630u: goto label_7F212630;
    case 0x7F212634u: goto label_7F212634;
    case 0x7F212638u: goto label_7F212638;
    case 0x7F21263Cu: goto label_7F21263C;
    case 0x7F212640u: goto label_7F212640;
    case 0x7F212644u: goto label_7F212644;
    case 0x7F212648u: goto label_7F212648;
    case 0x7F21264Cu: goto label_7F21264C;
    case 0x7F212650u: goto label_7F212650;
    case 0x7F212654u: goto label_7F212654;
    case 0x7F212658u: goto label_7F212658;
    case 0x7F21265Cu: goto label_7F21265C;
    case 0x7F212660u: goto label_7F212660;
    case 0x7F212664u: goto label_7F212664;
    case 0x7F212668u: goto label_7F212668;
    case 0x7F21266Cu: goto label_7F21266C;
    case 0x7F212670u: goto label_7F212670;
    case 0x7F212674u: goto label_7F212674;
    case 0x7F212678u: goto label_7F212678;
    case 0x7F21267Cu: goto label_7F21267C;
    case 0x7F212680u: goto label_7F212680;
    case 0x7F212684u: goto label_7F212684;
    case 0x7F212688u: goto label_7F212688;
    case 0x7F21268Cu: goto label_7F21268C;
    case 0x7F212690u: goto label_7F212690;
    case 0x7F212694u: goto label_7F212694;
    case 0x7F212698u: goto label_7F212698;
    case 0x7F21269Cu: goto label_7F21269C;
    case 0x7F2126A0u: goto label_7F2126A0;
    case 0x7F2126A4u: goto label_7F2126A4;
    case 0x7F2126A8u: goto label_7F2126A8;
    case 0x7F2126ACu: goto label_7F2126AC;
    case 0x7F2126B0u: goto label_7F2126B0;
    case 0x7F2126B4u: goto label_7F2126B4;
    case 0x7F2126B8u: goto label_7F2126B8;
    case 0x7F2126BCu: goto label_7F2126BC;
    case 0x7F2126C0u: goto label_7F2126C0;
    case 0x7F2126C4u: goto label_7F2126C4;
    case 0x7F2126C8u: goto label_7F2126C8;
    case 0x7F2126CCu: goto label_7F2126CC;
    case 0x7F2126D0u: goto label_7F2126D0;
    case 0x7F2126D4u: goto label_7F2126D4;
    case 0x7F2126D8u: goto label_7F2126D8;
    case 0x7F2126DCu: goto label_7F2126DC;
    case 0x7F2126E0u: goto label_7F2126E0;
    case 0x7F2126E4u: goto label_7F2126E4;
    case 0x7F2126E8u: goto label_7F2126E8;
    case 0x7F2126ECu: goto label_7F2126EC;
    case 0x7F2126F0u: goto label_7F2126F0;
    case 0x7F2126F4u: goto label_7F2126F4;
    case 0x7F2126F8u: goto label_7F2126F8;
    case 0x7F2126FCu: goto label_7F2126FC;
    case 0x7F212700u: goto label_7F212700;
    case 0x7F212704u: goto label_7F212704;
    case 0x7F212708u: goto label_7F212708;
    case 0x7F21270Cu: goto label_7F21270C;
    case 0x7F212710u: goto label_7F212710;
    case 0x7F212714u: goto label_7F212714;
    case 0x7F212718u: goto label_7F212718;
    case 0x7F21271Cu: goto label_7F21271C;
    case 0x7F212720u: goto label_7F212720;
    case 0x7F212724u: goto label_7F212724;
    case 0x7F212728u: goto label_7F212728;
    case 0x7F21272Cu: goto label_7F21272C;
    case 0x7F212730u: goto label_7F212730;
    case 0x7F212734u: goto label_7F212734;
    case 0x7F212738u: goto label_7F212738;
    case 0x7F21273Cu: goto label_7F21273C;
    case 0x7F212740u: goto label_7F212740;
    case 0x7F212744u: goto label_7F212744;
    case 0x7F212748u: goto label_7F212748;
    case 0x7F21274Cu: goto label_7F21274C;
    case 0x7F212750u: goto label_7F212750;
    case 0x7F212754u: goto label_7F212754;
    case 0x7F212758u: goto label_7F212758;
    case 0x7F21275Cu: goto label_7F21275C;
    case 0x7F212760u: goto label_7F212760;
    case 0x7F212764u: goto label_7F212764;
    case 0x7F212768u: goto label_7F212768;
    case 0x7F21276Cu: goto label_7F21276C;
    case 0x7F212770u: goto label_7F212770;
    case 0x7F212774u: goto label_7F212774;
    case 0x7F212778u: goto label_7F212778;
    case 0x7F21277Cu: goto label_7F21277C;
    case 0x7F212780u: goto label_7F212780;
    case 0x7F212784u: goto label_7F212784;
    case 0x7F212788u: goto label_7F212788;
    case 0x7F21278Cu: goto label_7F21278C;
    case 0x7F212790u: goto label_7F212790;
    case 0x7F212794u: goto label_7F212794;
    case 0x7F212798u: goto label_7F212798;
    case 0x7F21279Cu: goto label_7F21279C;
    case 0x7F2127A0u: goto label_7F2127A0;
    case 0x7F2127A4u: goto label_7F2127A4;
    case 0x7F2127A8u: goto label_7F2127A8;
    case 0x7F2127ACu: goto label_7F2127AC;
    case 0x7F2127B0u: goto label_7F2127B0;
    case 0x7F2127B4u: goto label_7F2127B4;
    case 0x7F2127B8u: goto label_7F2127B8;
    case 0x7F2127BCu: goto label_7F2127BC;
    case 0x7F2127C0u: goto label_7F2127C0;
    case 0x7F2127C4u: goto label_7F2127C4;
    case 0x7F2127C8u: goto label_7F2127C8;
    case 0x7F2127CCu: goto label_7F2127CC;
    case 0x7F2127D0u: goto label_7F2127D0;
    case 0x7F2127D4u: goto label_7F2127D4;
    case 0x7F2127D8u: goto label_7F2127D8;
    case 0x7F2127DCu: goto label_7F2127DC;
    case 0x7F2127E0u: goto label_7F2127E0;
    case 0x7F2127E4u: goto label_7F2127E4;
    case 0x7F2127E8u: goto label_7F2127E8;
    case 0x7F2127ECu: goto label_7F2127EC;
    case 0x7F2127F0u: goto label_7F2127F0;
    case 0x7F2127F4u: goto label_7F2127F4;
    case 0x7F2127F8u: goto label_7F2127F8;
    case 0x7F2127FCu: goto label_7F2127FC;
    case 0x7F212800u: goto label_7F212800;
    case 0x7F212804u: goto label_7F212804;
    case 0x7F212808u: goto label_7F212808;
    case 0x7F21280Cu: goto label_7F21280C;
    case 0x7F212810u: goto label_7F212810;
    case 0x7F212814u: goto label_7F212814;
    case 0x7F212818u: goto label_7F212818;
    case 0x7F21281Cu: goto label_7F21281C;
    case 0x7F212820u: goto label_7F212820;
    case 0x7F212824u: goto label_7F212824;
    case 0x7F212828u: goto label_7F212828;
    case 0x7F21282Cu: goto label_7F21282C;
    case 0x7F212830u: goto label_7F212830;
    case 0x7F212834u: goto label_7F212834;
    case 0x7F212838u: goto label_7F212838;
    case 0x7F21283Cu: goto label_7F21283C;
    case 0x7F212840u: goto label_7F212840;
    case 0x7F212844u: goto label_7F212844;
    case 0x7F212848u: goto label_7F212848;
    case 0x7F21284Cu: goto label_7F21284C;
    case 0x7F212850u: goto label_7F212850;
    case 0x7F212854u: goto label_7F212854;
    case 0x7F212858u: goto label_7F212858;
    case 0x7F21285Cu: goto label_7F21285C;
    case 0x7F212860u: goto label_7F212860;
    case 0x7F212864u: goto label_7F212864;
    case 0x7F212868u: goto label_7F212868;
    case 0x7F21286Cu: goto label_7F21286C;
    case 0x7F212870u: goto label_7F212870;
    case 0x7F212874u: goto label_7F212874;
    case 0x7F212878u: goto label_7F212878;
    case 0x7F21287Cu: goto label_7F21287C;
    case 0x7F212880u: goto label_7F212880;
    case 0x7F212884u: goto label_7F212884;
    case 0x7F212888u: goto label_7F212888;
    case 0x7F21288Cu: goto label_7F21288C;
    case 0x7F212890u: goto label_7F212890;
    case 0x7F212894u: goto label_7F212894;
    case 0x7F212898u: goto label_7F212898;
    case 0x7F21289Cu: goto label_7F21289C;
    case 0x7F2128A0u: goto label_7F2128A0;
    case 0x7F2128A4u: goto label_7F2128A4;
    case 0x7F2128A8u: goto label_7F2128A8;
    case 0x7F2128ACu: goto label_7F2128AC;
    case 0x7F2128B0u: goto label_7F2128B0;
    case 0x7F2128B4u: goto label_7F2128B4;
    case 0x7F2128B8u: goto label_7F2128B8;
    case 0x7F2128BCu: goto label_7F2128BC;
    case 0x7F2128C0u: goto label_7F2128C0;
    case 0x7F2128C4u: goto label_7F2128C4;
    case 0x7F2128C8u: goto label_7F2128C8;
    case 0x7F2128CCu: goto label_7F2128CC;
    case 0x7F2128D0u: goto label_7F2128D0;
    case 0x7F2128D4u: goto label_7F2128D4;
    case 0x7F2128D8u: goto label_7F2128D8;
    case 0x7F2128DCu: goto label_7F2128DC;
    case 0x7F2128E0u: goto label_7F2128E0;
    case 0x7F2128E4u: goto label_7F2128E4;
    case 0x7F2128E8u: goto label_7F2128E8;
    case 0x7F2128ECu: goto label_7F2128EC;
    case 0x7F2128F0u: goto label_7F2128F0;
    case 0x7F2128F4u: goto label_7F2128F4;
    case 0x7F2128F8u: goto label_7F2128F8;
    case 0x7F2128FCu: goto label_7F2128FC;
    case 0x7F212900u: goto label_7F212900;
    case 0x7F212904u: goto label_7F212904;
    case 0x7F212908u: goto label_7F212908;
    case 0x7F21290Cu: goto label_7F21290C;
    case 0x7F212910u: goto label_7F212910;
    case 0x7F212914u: goto label_7F212914;
    case 0x7F212918u: goto label_7F212918;
    case 0x7F21291Cu: goto label_7F21291C;
    case 0x7F212920u: goto label_7F212920;
    case 0x7F212924u: goto label_7F212924;
    case 0x7F212928u: goto label_7F212928;
    case 0x7F21292Cu: goto label_7F21292C;
    case 0x7F212930u: goto label_7F212930;
    case 0x7F212934u: goto label_7F212934;
    case 0x7F212938u: goto label_7F212938;
    case 0x7F21293Cu: goto label_7F21293C;
    case 0x7F212940u: goto label_7F212940;
    case 0x7F212944u: goto label_7F212944;
    case 0x7F212948u: goto label_7F212948;
    case 0x7F21294Cu: goto label_7F21294C;
    case 0x7F212950u: goto label_7F212950;
    case 0x7F212954u: goto label_7F212954;
    case 0x7F212958u: goto label_7F212958;
    case 0x7F21295Cu: goto label_7F21295C;
    case 0x7F212960u: goto label_7F212960;
    case 0x7F212964u: goto label_7F212964;
    case 0x7F212968u: goto label_7F212968;
    case 0x7F21296Cu: goto label_7F21296C;
    case 0x7F212970u: goto label_7F212970;
    case 0x7F212974u: goto label_7F212974;
    case 0x7F212978u: goto label_7F212978;
    case 0x7F21297Cu: goto label_7F21297C;
    case 0x7F212980u: goto label_7F212980;
    case 0x7F212984u: goto label_7F212984;
    case 0x7F212988u: goto label_7F212988;
    case 0x7F21298Cu: goto label_7F21298C;
    case 0x7F212990u: goto label_7F212990;
    case 0x7F212994u: goto label_7F212994;
    case 0x7F212998u: goto label_7F212998;
    case 0x7F21299Cu: goto label_7F21299C;
    case 0x7F2129A0u: goto label_7F2129A0;
    case 0x7F2129A4u: goto label_7F2129A4;
    case 0x7F2129A8u: goto label_7F2129A8;
    case 0x7F2129ACu: goto label_7F2129AC;
    case 0x7F2129B0u: goto label_7F2129B0;
    case 0x7F2129B4u: goto label_7F2129B4;
    case 0x7F2129B8u: goto label_7F2129B8;
    case 0x7F2129BCu: goto label_7F2129BC;
    case 0x7F2129C0u: goto label_7F2129C0;
    case 0x7F2129C4u: goto label_7F2129C4;
    case 0x7F2129C8u: goto label_7F2129C8;
    case 0x7F2129CCu: goto label_7F2129CC;
    case 0x7F2129D0u: goto label_7F2129D0;
    case 0x7F2129D4u: goto label_7F2129D4;
    case 0x7F2129D8u: goto label_7F2129D8;
    case 0x7F2129DCu: goto label_7F2129DC;
    case 0x7F2129E0u: goto label_7F2129E0;
    case 0x7F2129E4u: goto label_7F2129E4;
    case 0x7F2129E8u: goto label_7F2129E8;
    case 0x7F2129ECu: goto label_7F2129EC;
    case 0x7F2129F0u: goto label_7F2129F0;
    case 0x7F2129F4u: goto label_7F2129F4;
    case 0x7F2129F8u: goto label_7F2129F8;
    case 0x7F2129FCu: goto label_7F2129FC;
    case 0x7F212A00u: goto label_7F212A00;
    case 0x7F212A04u: goto label_7F212A04;
    case 0x7F212A08u: goto label_7F212A08;
    case 0x7F212A0Cu: goto label_7F212A0C;
    case 0x7F212A10u: goto label_7F212A10;
    case 0x7F212A14u: goto label_7F212A14;
    case 0x7F212A18u: goto label_7F212A18;
    case 0x7F212A1Cu: goto label_7F212A1C;
    case 0x7F212A20u: goto label_7F212A20;
    case 0x7F212A24u: goto label_7F212A24;
    case 0x7F212A28u: goto label_7F212A28;
    case 0x7F212A2Cu: goto label_7F212A2C;
    case 0x7F212A30u: goto label_7F212A30;
    case 0x7F212A34u: goto label_7F212A34;
    case 0x7F212A38u: goto label_7F212A38;
    case 0x7F212A3Cu: goto label_7F212A3C;
    case 0x7F212A40u: goto label_7F212A40;
    case 0x7F212A44u: goto label_7F212A44;
    case 0x7F212A48u: goto label_7F212A48;
    case 0x7F212A4Cu: goto label_7F212A4C;
    case 0x7F212A50u: goto label_7F212A50;
    case 0x7F212A54u: goto label_7F212A54;
    case 0x7F212A58u: goto label_7F212A58;
    case 0x7F212A5Cu: goto label_7F212A5C;
    case 0x7F212A60u: goto label_7F212A60;
    case 0x7F212A64u: goto label_7F212A64;
    case 0x7F212A68u: goto label_7F212A68;
    case 0x7F212A6Cu: goto label_7F212A6C;
    case 0x7F212A70u: goto label_7F212A70;
    case 0x7F212A74u: goto label_7F212A74;
    case 0x7F212A78u: goto label_7F212A78;
    case 0x7F212A7Cu: goto label_7F212A7C;
    case 0x7F212A80u: goto label_7F212A80;
    case 0x7F212A84u: goto label_7F212A84;
    case 0x7F212A88u: goto label_7F212A88;
    case 0x7F212A8Cu: goto label_7F212A8C;
    case 0x7F212A90u: goto label_7F212A90;
    case 0x7F212A94u: goto label_7F212A94;
    case 0x7F212A98u: goto label_7F212A98;
    case 0x7F212A9Cu: goto label_7F212A9C;
    case 0x7F212AA0u: goto label_7F212AA0;
    case 0x7F212AA4u: goto label_7F212AA4;
    case 0x7F212AA8u: goto label_7F212AA8;
    case 0x7F212AACu: goto label_7F212AAC;
    case 0x7F212AB0u: goto label_7F212AB0;
    case 0x7F212AB4u: goto label_7F212AB4;
    case 0x7F212AB8u: goto label_7F212AB8;
    case 0x7F212ABCu: goto label_7F212ABC;
    case 0x7F212AC0u: goto label_7F212AC0;
    case 0x7F212AC4u: goto label_7F212AC4;
    case 0x7F212AC8u: goto label_7F212AC8;
    case 0x7F212ACCu: goto label_7F212ACC;
    case 0x7F212AD0u: goto label_7F212AD0;
    case 0x7F212AD4u: goto label_7F212AD4;
    case 0x7F212AD8u: goto label_7F212AD8;
    case 0x7F212ADCu: goto label_7F212ADC;
    case 0x7F212AE0u: goto label_7F212AE0;
    case 0x7F212AE4u: goto label_7F212AE4;
    case 0x7F212AE8u: goto label_7F212AE8;
    case 0x7F212AECu: goto label_7F212AEC;
    case 0x7F212AF0u: goto label_7F212AF0;
    case 0x7F212AF4u: goto label_7F212AF4;
    case 0x7F212AF8u: goto label_7F212AF8;
    case 0x7F212AFCu: goto label_7F212AFC;
    case 0x7F212B00u: goto label_7F212B00;
    case 0x7F212B04u: goto label_7F212B04;
    case 0x7F212B08u: goto label_7F212B08;
    case 0x7F212B0Cu: goto label_7F212B0C;
    case 0x7F212B10u: goto label_7F212B10;
    case 0x7F212B14u: goto label_7F212B14;
    case 0x7F212B18u: goto label_7F212B18;
    case 0x7F212B1Cu: goto label_7F212B1C;
    case 0x7F212B20u: goto label_7F212B20;
    case 0x7F212B24u: goto label_7F212B24;
    case 0x7F212B28u: goto label_7F212B28;
    case 0x7F212B2Cu: goto label_7F212B2C;
    case 0x7F212B30u: goto label_7F212B30;
    case 0x7F212B34u: goto label_7F212B34;
    case 0x7F212B38u: goto label_7F212B38;
    case 0x7F212B3Cu: goto label_7F212B3C;
    case 0x7F212B40u: goto label_7F212B40;
    case 0x7F212B44u: goto label_7F212B44;
    case 0x7F212B48u: goto label_7F212B48;
    case 0x7F212B4Cu: goto label_7F212B4C;
    case 0x7F212B50u: goto label_7F212B50;
    case 0x7F212B54u: goto label_7F212B54;
    case 0x7F212B58u: goto label_7F212B58;
    case 0x7F212B5Cu: goto label_7F212B5C;
    case 0x7F212B60u: goto label_7F212B60;
    case 0x7F212B64u: goto label_7F212B64;
    case 0x7F212B68u: goto label_7F212B68;
    case 0x7F212B6Cu: goto label_7F212B6C;
    case 0x7F212B70u: goto label_7F212B70;
    case 0x7F212B74u: goto label_7F212B74;
    case 0x7F212B78u: goto label_7F212B78;
    case 0x7F212B7Cu: goto label_7F212B7C;
    case 0x7F212B80u: goto label_7F212B80;
    case 0x7F212B84u: goto label_7F212B84;
    case 0x7F212B88u: goto label_7F212B88;
    case 0x7F212B8Cu: goto label_7F212B8C;
    case 0x7F212B90u: goto label_7F212B90;
    case 0x7F212B94u: goto label_7F212B94;
    case 0x7F212B98u: goto label_7F212B98;
    case 0x7F212B9Cu: goto label_7F212B9C;
    case 0x7F212BA0u: goto label_7F212BA0;
    case 0x7F212BA4u: goto label_7F212BA4;
    case 0x7F212BA8u: goto label_7F212BA8;
    case 0x7F212BACu: goto label_7F212BAC;
    case 0x7F212BB0u: goto label_7F212BB0;
    case 0x7F212BB4u: goto label_7F212BB4;
    case 0x7F212BB8u: goto label_7F212BB8;
    case 0x7F212BBCu: goto label_7F212BBC;
    case 0x7F212BC0u: goto label_7F212BC0;
    case 0x7F212BC4u: goto label_7F212BC4;
    case 0x7F212BC8u: goto label_7F212BC8;
    case 0x7F212BCCu: goto label_7F212BCC;
    case 0x7F212BD0u: goto label_7F212BD0;
    case 0x7F212BD4u: goto label_7F212BD4;
    case 0x7F212BD8u: goto label_7F212BD8;
    case 0x7F212BDCu: goto label_7F212BDC;
    case 0x7F212BE0u: goto label_7F212BE0;
    case 0x7F212BE4u: goto label_7F212BE4;
    case 0x7F212BE8u: goto label_7F212BE8;
    case 0x7F212BECu: goto label_7F212BEC;
    case 0x7F212BF0u: goto label_7F212BF0;
    case 0x7F212BF4u: goto label_7F212BF4;
    case 0x7F212BF8u: goto label_7F212BF8;
    case 0x7F212BFCu: goto label_7F212BFC;
    case 0x7F212C00u: goto label_7F212C00;
    case 0x7F212C04u: goto label_7F212C04;
    case 0x7F212C08u: goto label_7F212C08;
    case 0x7F212C0Cu: goto label_7F212C0C;
    case 0x7F212C10u: goto label_7F212C10;
    case 0x7F212C14u: goto label_7F212C14;
    case 0x7F212C18u: goto label_7F212C18;
    case 0x7F212C1Cu: goto label_7F212C1C;
    case 0x7F212C20u: goto label_7F212C20;
    case 0x7F212C24u: goto label_7F212C24;
    case 0x7F212C28u: goto label_7F212C28;
    case 0x7F212C2Cu: goto label_7F212C2C;
    case 0x7F212C30u: goto label_7F212C30;
    case 0x7F212C34u: goto label_7F212C34;
    case 0x7F212C38u: goto label_7F212C38;
    case 0x7F212C3Cu: goto label_7F212C3C;
    case 0x7F212C40u: goto label_7F212C40;
    case 0x7F212C44u: goto label_7F212C44;
    case 0x7F212C48u: goto label_7F212C48;
    case 0x7F212C4Cu: goto label_7F212C4C;
    case 0x7F212C50u: goto label_7F212C50;
    case 0x7F212C54u: goto label_7F212C54;
    case 0x7F212C58u: goto label_7F212C58;
    case 0x7F212C5Cu: goto label_7F212C5C;
    case 0x7F212C60u: goto label_7F212C60;
    case 0x7F212C64u: goto label_7F212C64;
    case 0x7F212C68u: goto label_7F212C68;
    case 0x7F212C6Cu: goto label_7F212C6C;
    case 0x7F212C70u: goto label_7F212C70;
    case 0x7F212C74u: goto label_7F212C74;
    case 0x7F212C78u: goto label_7F212C78;
    case 0x7F212C7Cu: goto label_7F212C7C;
    case 0x7F212C80u: goto label_7F212C80;
    case 0x7F212C84u: goto label_7F212C84;
    case 0x7F212C88u: goto label_7F212C88;
    case 0x7F212C8Cu: goto label_7F212C8C;
    case 0x7F212C90u: goto label_7F212C90;
    case 0x7F212C94u: goto label_7F212C94;
    case 0x7F212C98u: goto label_7F212C98;
    case 0x7F212C9Cu: goto label_7F212C9C;
    case 0x7F212CA0u: goto label_7F212CA0;
    case 0x7F212CA4u: goto label_7F212CA4;
    case 0x7F212CA8u: goto label_7F212CA8;
    case 0x7F212CACu: goto label_7F212CAC;
    case 0x7F212CB0u: goto label_7F212CB0;
    case 0x7F212CB4u: goto label_7F212CB4;
    case 0x7F212CB8u: goto label_7F212CB8;
    case 0x7F212CBCu: goto label_7F212CBC;
    case 0x7F212CC0u: goto label_7F212CC0;
    case 0x7F212CC4u: goto label_7F212CC4;
    case 0x7F212CC8u: goto label_7F212CC8;
    case 0x7F212CCCu: goto label_7F212CCC;
    case 0x7F212CD0u: goto label_7F212CD0;
    case 0x7F212CD4u: goto label_7F212CD4;
    case 0x7F212CD8u: goto label_7F212CD8;
    case 0x7F212CDCu: goto label_7F212CDC;
    case 0x7F212CE0u: goto label_7F212CE0;
    case 0x7F212CE4u: goto label_7F212CE4;
    case 0x7F212CE8u: goto label_7F212CE8;
    case 0x7F212CECu: goto label_7F212CEC;
    case 0x7F212CF0u: goto label_7F212CF0;
    case 0x7F212CF4u: goto label_7F212CF4;
    case 0x7F212CF8u: goto label_7F212CF8;
    case 0x7F212CFCu: goto label_7F212CFC;
    case 0x7F212D00u: goto label_7F212D00;
    case 0x7F212D04u: goto label_7F212D04;
    case 0x7F212D08u: goto label_7F212D08;
    case 0x7F212D0Cu: goto label_7F212D0C;
    case 0x7F212D10u: goto label_7F212D10;
    case 0x7F212D14u: goto label_7F212D14;
    case 0x7F212D18u: goto label_7F212D18;
    case 0x7F212D1Cu: goto label_7F212D1C;
    case 0x7F212D20u: goto label_7F212D20;
    case 0x7F212D24u: goto label_7F212D24;
    case 0x7F212D28u: goto label_7F212D28;
    case 0x7F212D2Cu: goto label_7F212D2C;
    case 0x7F212D30u: goto label_7F212D30;
    case 0x7F212D34u: goto label_7F212D34;
    case 0x7F212D38u: goto label_7F212D38;
    case 0x7F212D3Cu: goto label_7F212D3C;
    case 0x7F212D40u: goto label_7F212D40;
    case 0x7F212D44u: goto label_7F212D44;
    case 0x7F212D48u: goto label_7F212D48;
    case 0x7F212D4Cu: goto label_7F212D4C;
    case 0x7F212D50u: goto label_7F212D50;
    case 0x7F212D54u: goto label_7F212D54;
    case 0x7F212D58u: goto label_7F212D58;
    case 0x7F212D5Cu: goto label_7F212D5C;
    case 0x7F212D60u: goto label_7F212D60;
    case 0x7F212D64u: goto label_7F212D64;
    case 0x7F212D68u: goto label_7F212D68;
    case 0x7F212D6Cu: goto label_7F212D6C;
    case 0x7F212D70u: goto label_7F212D70;
    case 0x7F212D74u: goto label_7F212D74;
    case 0x7F212D78u: goto label_7F212D78;
    case 0x7F212D7Cu: goto label_7F212D7C;
    case 0x7F212D80u: goto label_7F212D80;
    case 0x7F212D84u: goto label_7F212D84;
    case 0x7F212D88u: goto label_7F212D88;
    case 0x7F212D8Cu: goto label_7F212D8C;
    case 0x7F212D90u: goto label_7F212D90;
    case 0x7F212D94u: goto label_7F212D94;
    case 0x7F212D98u: goto label_7F212D98;
    case 0x7F212D9Cu: goto label_7F212D9C;
    case 0x7F212DA0u: goto label_7F212DA0;
    case 0x7F212DA4u: goto label_7F212DA4;
    case 0x7F212DA8u: goto label_7F212DA8;
    case 0x7F212DACu: goto label_7F212DAC;
    case 0x7F212DB0u: goto label_7F212DB0;
    case 0x7F212DB4u: goto label_7F212DB4;
    case 0x7F212DB8u: goto label_7F212DB8;
    case 0x7F212DBCu: goto label_7F212DBC;
    case 0x7F212DC0u: goto label_7F212DC0;
    case 0x7F212DC4u: goto label_7F212DC4;
    case 0x7F212DC8u: goto label_7F212DC8;
    case 0x7F212DCCu: goto label_7F212DCC;
    case 0x7F212DD0u: goto label_7F212DD0;
    case 0x7F212DD4u: goto label_7F212DD4;
    case 0x7F212DD8u: goto label_7F212DD8;
    case 0x7F212DDCu: goto label_7F212DDC;
    case 0x7F212DE0u: goto label_7F212DE0;
    case 0x7F212DE4u: goto label_7F212DE4;
    case 0x7F212DE8u: goto label_7F212DE8;
    case 0x7F212DECu: goto label_7F212DEC;
    case 0x7F212DF0u: goto label_7F212DF0;
    case 0x7F212DF4u: goto label_7F212DF4;
    case 0x7F212DF8u: goto label_7F212DF8;
    case 0x7F212DFCu: goto label_7F212DFC;
    case 0x7F212E00u: goto label_7F212E00;
    case 0x7F212E04u: goto label_7F212E04;
    case 0x7F212E08u: goto label_7F212E08;
    case 0x7F212E0Cu: goto label_7F212E0C;
    case 0x7F212E10u: goto label_7F212E10;
    case 0x7F212E14u: goto label_7F212E14;
    case 0x7F212E18u: goto label_7F212E18;
    case 0x7F212E1Cu: goto label_7F212E1C;
    case 0x7F212E20u: goto label_7F212E20;
    case 0x7F212E24u: goto label_7F212E24;
    case 0x7F212E28u: goto label_7F212E28;
    case 0x7F212E2Cu: goto label_7F212E2C;
    case 0x7F212E30u: goto label_7F212E30;
    case 0x7F212E34u: goto label_7F212E34;
    case 0x7F212E38u: goto label_7F212E38;
    case 0x7F212E3Cu: goto label_7F212E3C;
    case 0x7F212E40u: goto label_7F212E40;
    case 0x7F212E44u: goto label_7F212E44;
    case 0x7F212E48u: goto label_7F212E48;
    case 0x7F212E4Cu: goto label_7F212E4C;
    case 0x7F212E50u: goto label_7F212E50;
    case 0x7F212E54u: goto label_7F212E54;
    case 0x7F212E58u: goto label_7F212E58;
    case 0x7F212E5Cu: goto label_7F212E5C;
    case 0x7F212E60u: goto label_7F212E60;
    case 0x7F212E64u: goto label_7F212E64;
    case 0x7F212E68u: goto label_7F212E68;
    case 0x7F212E6Cu: goto label_7F212E6C;
    case 0x7F212E70u: goto label_7F212E70;
    case 0x7F212E74u: goto label_7F212E74;
    case 0x7F212E78u: goto label_7F212E78;
    case 0x7F212E7Cu: goto label_7F212E7C;
    case 0x7F212E80u: goto label_7F212E80;
    case 0x7F212E84u: goto label_7F212E84;
    case 0x7F212E88u: goto label_7F212E88;
    case 0x7F212E8Cu: goto label_7F212E8C;
    case 0x7F212E90u: goto label_7F212E90;
    case 0x7F212E94u: goto label_7F212E94;
    case 0x7F212E98u: goto label_7F212E98;
    case 0x7F212E9Cu: goto label_7F212E9C;
    case 0x7F212EA0u: goto label_7F212EA0;
    case 0x7F212EA4u: goto label_7F212EA4;
    case 0x7F212EA8u: goto label_7F212EA8;
    case 0x7F212EACu: goto label_7F212EAC;
    case 0x7F212EB0u: goto label_7F212EB0;
    case 0x7F212EB4u: goto label_7F212EB4;
    case 0x7F212EB8u: goto label_7F212EB8;
    case 0x7F212EBCu: goto label_7F212EBC;
    case 0x7F212EC0u: goto label_7F212EC0;
    case 0x7F212EC4u: goto label_7F212EC4;
    case 0x7F212EC8u: goto label_7F212EC8;
    case 0x7F212ECCu: goto label_7F212ECC;
    case 0x7F212ED0u: goto label_7F212ED0;
    case 0x7F212ED4u: goto label_7F212ED4;
    case 0x7F212ED8u: goto label_7F212ED8;
    case 0x7F212EDCu: goto label_7F212EDC;
    case 0x7F212EE0u: goto label_7F212EE0;
    case 0x7F212EE4u: goto label_7F212EE4;
    case 0x7F212EE8u: goto label_7F212EE8;
    case 0x7F212EECu: goto label_7F212EEC;
    case 0x7F212EF0u: goto label_7F212EF0;
    case 0x7F212EF4u: goto label_7F212EF4;
    case 0x7F212EF8u: goto label_7F212EF8;
    case 0x7F212EFCu: goto label_7F212EFC;
    case 0x7F212F00u: goto label_7F212F00;
    case 0x7F212F04u: goto label_7F212F04;
    case 0x7F212F08u: goto label_7F212F08;
    case 0x7F212F0Cu: goto label_7F212F0C;
    case 0x7F212F10u: goto label_7F212F10;
    case 0x7F212F14u: goto label_7F212F14;
    case 0x7F212F18u: goto label_7F212F18;
    case 0x7F212F1Cu: goto label_7F212F1C;
    case 0x7F212F20u: goto label_7F212F20;
    case 0x7F212F24u: goto label_7F212F24;
    case 0x7F212F28u: goto label_7F212F28;
    case 0x7F212F2Cu: goto label_7F212F2C;
    case 0x7F212F30u: goto label_7F212F30;
    case 0x7F212F34u: goto label_7F212F34;
    case 0x7F212F38u: goto label_7F212F38;
    case 0x7F212F3Cu: goto label_7F212F3C;
    case 0x7F212F40u: goto label_7F212F40;
    case 0x7F212F44u: goto label_7F212F44;
    case 0x7F212F48u: goto label_7F212F48;
    case 0x7F212F4Cu: goto label_7F212F4C;
    case 0x7F212F50u: goto label_7F212F50;
    case 0x7F212F54u: goto label_7F212F54;
    case 0x7F212F58u: goto label_7F212F58;
    case 0x7F212F5Cu: goto label_7F212F5C;
    case 0x7F212F60u: goto label_7F212F60;
    case 0x7F212F64u: goto label_7F212F64;
    case 0x7F212F68u: goto label_7F212F68;
    case 0x7F212F6Cu: goto label_7F212F6C;
    case 0x7F212F70u: goto label_7F212F70;
    case 0x7F212F74u: goto label_7F212F74;
    case 0x7F212F78u: goto label_7F212F78;
    case 0x7F212F7Cu: goto label_7F212F7C;
    case 0x7F212F80u: goto label_7F212F80;
    case 0x7F212F84u: goto label_7F212F84;
    case 0x7F212F88u: goto label_7F212F88;
    case 0x7F212F8Cu: goto label_7F212F8C;
    case 0x7F212F90u: goto label_7F212F90;
    case 0x7F212F94u: goto label_7F212F94;
    case 0x7F212F98u: goto label_7F212F98;
    case 0x7F212F9Cu: goto label_7F212F9C;
    case 0x7F212FA0u: goto label_7F212FA0;
    case 0x7F212FA4u: goto label_7F212FA4;
    case 0x7F212FA8u: goto label_7F212FA8;
    case 0x7F212FACu: goto label_7F212FAC;
    case 0x7F212FB0u: goto label_7F212FB0;
    case 0x7F212FB4u: goto label_7F212FB4;
    case 0x7F212FB8u: goto label_7F212FB8;
    case 0x7F212FBCu: goto label_7F212FBC;
    case 0x7F212FC0u: goto label_7F212FC0;
    case 0x7F212FC4u: goto label_7F212FC4;
    case 0x7F212FC8u: goto label_7F212FC8;
    case 0x7F212FCCu: goto label_7F212FCC;
    case 0x7F212FD0u: goto label_7F212FD0;
    case 0x7F212FD4u: goto label_7F212FD4;
    case 0x7F212FD8u: goto label_7F212FD8;
    case 0x7F212FDCu: goto label_7F212FDC;
    case 0x7F212FE0u: goto label_7F212FE0;
    case 0x7F212FE4u: goto label_7F212FE4;
    case 0x7F212FE8u: goto label_7F212FE8;
    case 0x7F212FECu: goto label_7F212FEC;
    case 0x7F212FF0u: goto label_7F212FF0;
    case 0x7F212FF4u: goto label_7F212FF4;
    case 0x7F212FF8u: goto label_7F212FF8;
    case 0x7F212FFCu: goto label_7F212FFC;
    case 0x7F213000u: goto label_7F213000;
    case 0x7F213004u: goto label_7F213004;
    case 0x7F213008u: goto label_7F213008;
    case 0x7F21300Cu: goto label_7F21300C;
    case 0x7F213010u: goto label_7F213010;
    case 0x7F213014u: goto label_7F213014;
    case 0x7F213018u: goto label_7F213018;
    case 0x7F21301Cu: goto label_7F21301C;
    case 0x7F213020u: goto label_7F213020;
    case 0x7F213024u: goto label_7F213024;
    case 0x7F213028u: goto label_7F213028;
    case 0x7F21302Cu: goto label_7F21302C;
    case 0x7F213030u: goto label_7F213030;
    case 0x7F213034u: goto label_7F213034;
    case 0x7F213038u: goto label_7F213038;
    case 0x7F21303Cu: goto label_7F21303C;
    case 0x7F213040u: goto label_7F213040;
    case 0x7F213044u: goto label_7F213044;
    case 0x7F213048u: goto label_7F213048;
    case 0x7F21304Cu: goto label_7F21304C;
    case 0x7F213050u: goto label_7F213050;
    case 0x7F213054u: goto label_7F213054;
    case 0x7F213058u: goto label_7F213058;
    case 0x7F21305Cu: goto label_7F21305C;
    case 0x7F213060u: goto label_7F213060;
    case 0x7F213064u: goto label_7F213064;
    case 0x7F213068u: goto label_7F213068;
    case 0x7F21306Cu: goto label_7F21306C;
    case 0x7F213070u: goto label_7F213070;
    case 0x7F213074u: goto label_7F213074;
    case 0x7F213078u: goto label_7F213078;
    case 0x7F21307Cu: goto label_7F21307C;
    case 0x7F213080u: goto label_7F213080;
    case 0x7F213084u: goto label_7F213084;
    case 0x7F213088u: goto label_7F213088;
    case 0x7F21308Cu: goto label_7F21308C;
    case 0x7F213090u: goto label_7F213090;
    case 0x7F213094u: goto label_7F213094;
    case 0x7F213098u: goto label_7F213098;
    case 0x7F21309Cu: goto label_7F21309C;
    case 0x7F2130A0u: goto label_7F2130A0;
    case 0x7F2130A4u: goto label_7F2130A4;
    case 0x7F2130A8u: goto label_7F2130A8;
    case 0x7F2130ACu: goto label_7F2130AC;
    case 0x7F2130B0u: goto label_7F2130B0;
    case 0x7F2130B4u: goto label_7F2130B4;
    case 0x7F2130B8u: goto label_7F2130B8;
    case 0x7F2130BCu: goto label_7F2130BC;
    case 0x7F2130C0u: goto label_7F2130C0;
    case 0x7F2130C4u: goto label_7F2130C4;
    case 0x7F2130C8u: goto label_7F2130C8;
    case 0x7F2130CCu: goto label_7F2130CC;
    case 0x7F2130D0u: goto label_7F2130D0;
    case 0x7F2130D4u: goto label_7F2130D4;
    case 0x7F2130D8u: goto label_7F2130D8;
    case 0x7F2130DCu: goto label_7F2130DC;
    case 0x7F2130E0u: goto label_7F2130E0;
    case 0x7F2130E4u: goto label_7F2130E4;
    case 0x7F2130E8u: goto label_7F2130E8;
    case 0x7F2130ECu: goto label_7F2130EC;
    case 0x7F2130F0u: goto label_7F2130F0;
    case 0x7F2130F4u: goto label_7F2130F4;
    case 0x7F2130F8u: goto label_7F2130F8;
    case 0x7F2130FCu: goto label_7F2130FC;
    case 0x7F213100u: goto label_7F213100;
    case 0x7F213104u: goto label_7F213104;
    case 0x7F213108u: goto label_7F213108;
    case 0x7F21310Cu: goto label_7F21310C;
    case 0x7F213110u: goto label_7F213110;
    case 0x7F213114u: goto label_7F213114;
    case 0x7F213118u: goto label_7F213118;
    case 0x7F21311Cu: goto label_7F21311C;
    case 0x7F213120u: goto label_7F213120;
    case 0x7F213124u: goto label_7F213124;
    case 0x7F213128u: goto label_7F213128;
    case 0x7F21312Cu: goto label_7F21312C;
    case 0x7F213130u: goto label_7F213130;
    case 0x7F213134u: goto label_7F213134;
    case 0x7F213138u: goto label_7F213138;
    case 0x7F21313Cu: goto label_7F21313C;
    case 0x7F213140u: goto label_7F213140;
    case 0x7F213144u: goto label_7F213144;
    case 0x7F213148u: goto label_7F213148;
    case 0x7F21314Cu: goto label_7F21314C;
    case 0x7F213150u: goto label_7F213150;
    case 0x7F213154u: goto label_7F213154;
    case 0x7F213158u: goto label_7F213158;
    case 0x7F21315Cu: goto label_7F21315C;
    case 0x7F213160u: goto label_7F213160;
    case 0x7F213164u: goto label_7F213164;
    case 0x7F213168u: goto label_7F213168;
    case 0x7F21316Cu: goto label_7F21316C;
    case 0x7F213170u: goto label_7F213170;
    case 0x7F213174u: goto label_7F213174;
    case 0x7F213178u: goto label_7F213178;
    case 0x7F21317Cu: goto label_7F21317C;
    case 0x7F213180u: goto label_7F213180;
    case 0x7F213184u: goto label_7F213184;
    case 0x7F213188u: goto label_7F213188;
    case 0x7F21318Cu: goto label_7F21318C;
    case 0x7F213190u: goto label_7F213190;
    case 0x7F213194u: goto label_7F213194;
    case 0x7F213198u: goto label_7F213198;
    case 0x7F21319Cu: goto label_7F21319C;
    case 0x7F2131A0u: goto label_7F2131A0;
    case 0x7F2131A4u: goto label_7F2131A4;
    case 0x7F2131A8u: goto label_7F2131A8;
    case 0x7F2131ACu: goto label_7F2131AC;
    case 0x7F2131B0u: goto label_7F2131B0;
    case 0x7F2131B4u: goto label_7F2131B4;
    case 0x7F2131B8u: goto label_7F2131B8;
    case 0x7F2131BCu: goto label_7F2131BC;
    case 0x7F2131C0u: goto label_7F2131C0;
    case 0x7F2131C4u: goto label_7F2131C4;
    case 0x7F2131C8u: goto label_7F2131C8;
    case 0x7F2131CCu: goto label_7F2131CC;
    case 0x7F2131D0u: goto label_7F2131D0;
    case 0x7F2131D4u: goto label_7F2131D4;
    case 0x7F2131D8u: goto label_7F2131D8;
    case 0x7F2131DCu: goto label_7F2131DC;
    case 0x7F2131E0u: goto label_7F2131E0;
    case 0x7F2131E4u: goto label_7F2131E4;
    case 0x7F2131E8u: goto label_7F2131E8;
    case 0x7F2131ECu: goto label_7F2131EC;
    case 0x7F2131F0u: goto label_7F2131F0;
    case 0x7F2131F4u: goto label_7F2131F4;
    case 0x7F2131F8u: goto label_7F2131F8;
    case 0x7F2131FCu: goto label_7F2131FC;
    case 0x7F213200u: goto label_7F213200;
    case 0x7F213204u: goto label_7F213204;
    case 0x7F213208u: goto label_7F213208;
    case 0x7F21320Cu: goto label_7F21320C;
    case 0x7F213210u: goto label_7F213210;
    case 0x7F213214u: goto label_7F213214;
    case 0x7F213218u: goto label_7F213218;
    case 0x7F21321Cu: goto label_7F21321C;
    case 0x7F213220u: goto label_7F213220;
    case 0x7F213224u: goto label_7F213224;
    case 0x7F213228u: goto label_7F213228;
    case 0x7F21322Cu: goto label_7F21322C;
    case 0x7F213230u: goto label_7F213230;
    case 0x7F213234u: goto label_7F213234;
    case 0x7F213238u: goto label_7F213238;
    case 0x7F21323Cu: goto label_7F21323C;
    case 0x7F213240u: goto label_7F213240;
    case 0x7F213244u: goto label_7F213244;
    case 0x7F213248u: goto label_7F213248;
    case 0x7F21324Cu: goto label_7F21324C;
    case 0x7F213250u: goto label_7F213250;
    case 0x7F213254u: goto label_7F213254;
    case 0x7F213258u: goto label_7F213258;
    case 0x7F21325Cu: goto label_7F21325C;
    case 0x7F213260u: goto label_7F213260;
    case 0x7F213264u: goto label_7F213264;
    case 0x7F213268u: goto label_7F213268;
    case 0x7F21326Cu: goto label_7F21326C;
    case 0x7F213270u: goto label_7F213270;
    case 0x7F213274u: goto label_7F213274;
    case 0x7F213278u: goto label_7F213278;
    case 0x7F21327Cu: goto label_7F21327C;
    case 0x7F213280u: goto label_7F213280;
    case 0x7F213284u: goto label_7F213284;
    case 0x7F213288u: goto label_7F213288;
    case 0x7F21328Cu: goto label_7F21328C;
    case 0x7F213290u: goto label_7F213290;
    case 0x7F213294u: goto label_7F213294;
    case 0x7F213298u: goto label_7F213298;
    case 0x7F21329Cu: goto label_7F21329C;
    case 0x7F2132A0u: goto label_7F2132A0;
    case 0x7F2132A4u: goto label_7F2132A4;
    case 0x7F2132A8u: goto label_7F2132A8;
    case 0x7F2132ACu: goto label_7F2132AC;
    case 0x7F2132B0u: goto label_7F2132B0;
    case 0x7F2132B4u: goto label_7F2132B4;
    case 0x7F2132B8u: goto label_7F2132B8;
    case 0x7F2132BCu: goto label_7F2132BC;
    case 0x7F2132C0u: goto label_7F2132C0;
    case 0x7F2132C4u: goto label_7F2132C4;
    case 0x7F2132C8u: goto label_7F2132C8;
    case 0x7F2132CCu: goto label_7F2132CC;
    case 0x7F2132D0u: goto label_7F2132D0;
    case 0x7F2132D4u: goto label_7F2132D4;
    case 0x7F2132D8u: goto label_7F2132D8;
    case 0x7F2132DCu: goto label_7F2132DC;
    case 0x7F2132E0u: goto label_7F2132E0;
    case 0x7F2132E4u: goto label_7F2132E4;
    case 0x7F2132E8u: goto label_7F2132E8;
    case 0x7F2132ECu: goto label_7F2132EC;
    case 0x7F2132F0u: goto label_7F2132F0;
    case 0x7F2132F4u: goto label_7F2132F4;
    case 0x7F2132F8u: goto label_7F2132F8;
    case 0x7F2132FCu: goto label_7F2132FC;
    case 0x7F213300u: goto label_7F213300;
    case 0x7F213304u: goto label_7F213304;
    case 0x7F213308u: goto label_7F213308;
    case 0x7F21330Cu: goto label_7F21330C;
    case 0x7F213310u: goto label_7F213310;
    case 0x7F213314u: goto label_7F213314;
    case 0x7F213318u: goto label_7F213318;
    case 0x7F21331Cu: goto label_7F21331C;
    case 0x7F213320u: goto label_7F213320;
    case 0x7F213324u: goto label_7F213324;
    case 0x7F213328u: goto label_7F213328;
    case 0x7F21332Cu: goto label_7F21332C;
    case 0x7F213330u: goto label_7F213330;
    case 0x7F213334u: goto label_7F213334;
    case 0x7F213338u: goto label_7F213338;
    case 0x7F21333Cu: goto label_7F21333C;
    case 0x7F213340u: goto label_7F213340;
    case 0x7F213344u: goto label_7F213344;
    case 0x7F213348u: goto label_7F213348;
    case 0x7F21334Cu: goto label_7F21334C;
    case 0x7F213350u: goto label_7F213350;
    case 0x7F213354u: goto label_7F213354;
    case 0x7F213358u: goto label_7F213358;
    case 0x7F21335Cu: goto label_7F21335C;
    case 0x7F213360u: goto label_7F213360;
    case 0x7F213364u: goto label_7F213364;
    case 0x7F213368u: goto label_7F213368;
    case 0x7F21336Cu: goto label_7F21336C;
    case 0x7F213370u: goto label_7F213370;
    case 0x7F213374u: goto label_7F213374;
    case 0x7F213378u: goto label_7F213378;
    case 0x7F21337Cu: goto label_7F21337C;
    case 0x7F213380u: goto label_7F213380;
    case 0x7F213384u: goto label_7F213384;
    case 0x7F213388u: goto label_7F213388;
    case 0x7F21338Cu: goto label_7F21338C;
    case 0x7F213390u: goto label_7F213390;
    case 0x7F213394u: goto label_7F213394;
    case 0x7F213398u: goto label_7F213398;
    case 0x7F21339Cu: goto label_7F21339C;
    case 0x7F2133A0u: goto label_7F2133A0;
    case 0x7F2133A4u: goto label_7F2133A4;
    case 0x7F2133A8u: goto label_7F2133A8;
    case 0x7F2133ACu: goto label_7F2133AC;
    case 0x7F2133B0u: goto label_7F2133B0;
    case 0x7F2133B4u: goto label_7F2133B4;
    case 0x7F2133B8u: goto label_7F2133B8;
    case 0x7F2133BCu: goto label_7F2133BC;
    case 0x7F2133C0u: goto label_7F2133C0;
    case 0x7F2133C4u: goto label_7F2133C4;
    case 0x7F2133C8u: goto label_7F2133C8;
    case 0x7F2133CCu: goto label_7F2133CC;
    case 0x7F2133D0u: goto label_7F2133D0;
    case 0x7F2133D4u: goto label_7F2133D4;
    case 0x7F2133D8u: goto label_7F2133D8;
    case 0x7F2133DCu: goto label_7F2133DC;
    case 0x7F2133E0u: goto label_7F2133E0;
    case 0x7F2133E4u: goto label_7F2133E4;
    case 0x7F2133E8u: goto label_7F2133E8;
    case 0x7F2133ECu: goto label_7F2133EC;
    case 0x7F2133F0u: goto label_7F2133F0;
    case 0x7F2133F4u: goto label_7F2133F4;
    case 0x7F2133F8u: goto label_7F2133F8;
    case 0x7F2133FCu: goto label_7F2133FC;
    case 0x7F213400u: goto label_7F213400;
    case 0x7F213404u: goto label_7F213404;
    case 0x7F213408u: goto label_7F213408;
    case 0x7F21340Cu: goto label_7F21340C;
    case 0x7F213410u: goto label_7F213410;
    case 0x7F213414u: goto label_7F213414;
    case 0x7F213418u: goto label_7F213418;
    case 0x7F21341Cu: goto label_7F21341C;
    case 0x7F213420u: goto label_7F213420;
    case 0x7F213424u: goto label_7F213424;
    case 0x7F213428u: goto label_7F213428;
    case 0x7F21342Cu: goto label_7F21342C;
    case 0x7F213430u: goto label_7F213430;
    case 0x7F213434u: goto label_7F213434;
    case 0x7F213438u: goto label_7F213438;
    case 0x7F21343Cu: goto label_7F21343C;
    case 0x7F213440u: goto label_7F213440;
    case 0x7F213444u: goto label_7F213444;
    case 0x7F213448u: goto label_7F213448;
    case 0x7F21344Cu: goto label_7F21344C;
    case 0x7F213450u: goto label_7F213450;
    case 0x7F213454u: goto label_7F213454;
    case 0x7F213458u: goto label_7F213458;
    case 0x7F21345Cu: goto label_7F21345C;
    case 0x7F213460u: goto label_7F213460;
    case 0x7F213464u: goto label_7F213464;
    case 0x7F213468u: goto label_7F213468;
    case 0x7F21346Cu: goto label_7F21346C;
    case 0x7F213470u: goto label_7F213470;
    case 0x7F213474u: goto label_7F213474;
    case 0x7F213478u: goto label_7F213478;
    case 0x7F21347Cu: goto label_7F21347C;
    case 0x7F213480u: goto label_7F213480;
    case 0x7F213484u: goto label_7F213484;
    case 0x7F213488u: goto label_7F213488;
    case 0x7F21348Cu: goto label_7F21348C;
    case 0x7F213490u: goto label_7F213490;
    case 0x7F213494u: goto label_7F213494;
    case 0x7F213498u: goto label_7F213498;
    case 0x7F21349Cu: goto label_7F21349C;
    case 0x7F2134A0u: goto label_7F2134A0;
    case 0x7F2134A4u: goto label_7F2134A4;
    case 0x7F2134A8u: goto label_7F2134A8;
    case 0x7F2134ACu: goto label_7F2134AC;
    case 0x7F2134B0u: goto label_7F2134B0;
    case 0x7F2134B4u: goto label_7F2134B4;
    case 0x7F2134B8u: goto label_7F2134B8;
    case 0x7F2134BCu: goto label_7F2134BC;
    case 0x7F2134C0u: goto label_7F2134C0;
    case 0x7F2134C4u: goto label_7F2134C4;
    case 0x7F2134C8u: goto label_7F2134C8;
    case 0x7F2134CCu: goto label_7F2134CC;
    case 0x7F2134D0u: goto label_7F2134D0;
    case 0x7F2134D4u: goto label_7F2134D4;
    case 0x7F2134D8u: goto label_7F2134D8;
    case 0x7F2134DCu: goto label_7F2134DC;
    case 0x7F2134E0u: goto label_7F2134E0;
    case 0x7F2134E4u: goto label_7F2134E4;
    case 0x7F2134E8u: goto label_7F2134E8;
    case 0x7F2134ECu: goto label_7F2134EC;
    case 0x7F2134F0u: goto label_7F2134F0;
    case 0x7F2134F4u: goto label_7F2134F4;
    case 0x7F2134F8u: goto label_7F2134F8;
    case 0x7F2134FCu: goto label_7F2134FC;
    case 0x7F213500u: goto label_7F213500;
    case 0x7F213504u: goto label_7F213504;
    case 0x7F213508u: goto label_7F213508;
    case 0x7F21350Cu: goto label_7F21350C;
    case 0x7F213510u: goto label_7F213510;
    case 0x7F213514u: goto label_7F213514;
    case 0x7F213518u: goto label_7F213518;
    case 0x7F21351Cu: goto label_7F21351C;
    case 0x7F213520u: goto label_7F213520;
    case 0x7F213524u: goto label_7F213524;
    case 0x7F213528u: goto label_7F213528;
    case 0x7F21352Cu: goto label_7F21352C;
    case 0x7F213530u: goto label_7F213530;
    case 0x7F213534u: goto label_7F213534;
    case 0x7F213538u: goto label_7F213538;
    case 0x7F21353Cu: goto label_7F21353C;
    case 0x7F213540u: goto label_7F213540;
    case 0x7F213544u: goto label_7F213544;
    case 0x7F213548u: goto label_7F213548;
    case 0x7F21354Cu: goto label_7F21354C;
    case 0x7F213550u: goto label_7F213550;
    case 0x7F213554u: goto label_7F213554;
    case 0x7F213558u: goto label_7F213558;
    case 0x7F21355Cu: goto label_7F21355C;
    case 0x7F213560u: goto label_7F213560;
    case 0x7F213564u: goto label_7F213564;
    case 0x7F213568u: goto label_7F213568;
    case 0x7F21356Cu: goto label_7F21356C;
    case 0x7F213570u: goto label_7F213570;
    case 0x7F213574u: goto label_7F213574;
    case 0x7F213578u: goto label_7F213578;
    case 0x7F21357Cu: goto label_7F21357C;
    case 0x7F213580u: goto label_7F213580;
    case 0x7F213584u: goto label_7F213584;
    case 0x7F213588u: goto label_7F213588;
    case 0x7F21358Cu: goto label_7F21358C;
    case 0x7F213590u: goto label_7F213590;
    case 0x7F213594u: goto label_7F213594;
    case 0x7F213598u: goto label_7F213598;
    case 0x7F21359Cu: goto label_7F21359C;
    case 0x7F2135A0u: goto label_7F2135A0;
    case 0x7F2135A4u: goto label_7F2135A4;
    case 0x7F2135A8u: goto label_7F2135A8;
    case 0x7F2135ACu: goto label_7F2135AC;
    case 0x7F2135B0u: goto label_7F2135B0;
    case 0x7F2135B4u: goto label_7F2135B4;
    case 0x7F2135B8u: goto label_7F2135B8;
    case 0x7F2135BCu: goto label_7F2135BC;
    case 0x7F2135C0u: goto label_7F2135C0;
    case 0x7F2135C4u: goto label_7F2135C4;
    case 0x7F2135C8u: goto label_7F2135C8;
    case 0x7F2135CCu: goto label_7F2135CC;
    case 0x7F2135D0u: goto label_7F2135D0;
    case 0x7F2135D4u: goto label_7F2135D4;
    case 0x7F2135D8u: goto label_7F2135D8;
    case 0x7F2135DCu: goto label_7F2135DC;
    case 0x7F2135E0u: goto label_7F2135E0;
    case 0x7F2135E4u: goto label_7F2135E4;
    case 0x7F2135E8u: goto label_7F2135E8;
    case 0x7F2135ECu: goto label_7F2135EC;
    case 0x7F2135F0u: goto label_7F2135F0;
    case 0x7F2135F4u: goto label_7F2135F4;
    case 0x7F2135F8u: goto label_7F2135F8;
    case 0x7F2135FCu: goto label_7F2135FC;
    case 0x7F213600u: goto label_7F213600;
    case 0x7F213604u: goto label_7F213604;
    case 0x7F213608u: goto label_7F213608;
    case 0x7F21360Cu: goto label_7F21360C;
    case 0x7F213610u: goto label_7F213610;
    case 0x7F213614u: goto label_7F213614;
    case 0x7F213618u: goto label_7F213618;
    case 0x7F21361Cu: goto label_7F21361C;
    case 0x7F213620u: goto label_7F213620;
    case 0x7F213624u: goto label_7F213624;
    case 0x7F213628u: goto label_7F213628;
    case 0x7F21362Cu: goto label_7F21362C;
    case 0x7F213630u: goto label_7F213630;
    case 0x7F213634u: goto label_7F213634;
    case 0x7F213638u: goto label_7F213638;
    case 0x7F21363Cu: goto label_7F21363C;
    case 0x7F213640u: goto label_7F213640;
    case 0x7F213644u: goto label_7F213644;
    case 0x7F213648u: goto label_7F213648;
    case 0x7F21364Cu: goto label_7F21364C;
    case 0x7F213650u: goto label_7F213650;
    case 0x7F213654u: goto label_7F213654;
    case 0x7F213658u: goto label_7F213658;
    case 0x7F21365Cu: goto label_7F21365C;
    case 0x7F213660u: goto label_7F213660;
    case 0x7F213664u: goto label_7F213664;
    case 0x7F213668u: goto label_7F213668;
    case 0x7F21366Cu: goto label_7F21366C;
    case 0x7F213670u: goto label_7F213670;
    case 0x7F213674u: goto label_7F213674;
    case 0x7F213678u: goto label_7F213678;
    case 0x7F21367Cu: goto label_7F21367C;
    case 0x7F213680u: goto label_7F213680;
    case 0x7F213684u: goto label_7F213684;
    case 0x7F213688u: goto label_7F213688;
    case 0x7F21368Cu: goto label_7F21368C;
    case 0x7F213690u: goto label_7F213690;
    case 0x7F213694u: goto label_7F213694;
    case 0x7F213698u: goto label_7F213698;
    case 0x7F21369Cu: goto label_7F21369C;
    case 0x7F2136A0u: goto label_7F2136A0;
    case 0x7F2136A4u: goto label_7F2136A4;
    case 0x7F2136A8u: goto label_7F2136A8;
    case 0x7F2136ACu: goto label_7F2136AC;
    case 0x7F2136B0u: goto label_7F2136B0;
    case 0x7F2136B4u: goto label_7F2136B4;
    case 0x7F2136B8u: goto label_7F2136B8;
    case 0x7F2136BCu: goto label_7F2136BC;
    case 0x7F2136C0u: goto label_7F2136C0;
    case 0x7F2136C4u: goto label_7F2136C4;
    case 0x7F2136C8u: goto label_7F2136C8;
    case 0x7F2136CCu: goto label_7F2136CC;
    case 0x7F2136D0u: goto label_7F2136D0;
    case 0x7F2136D4u: goto label_7F2136D4;
    case 0x7F2136D8u: goto label_7F2136D8;
    case 0x7F2136DCu: goto label_7F2136DC;
    case 0x7F2136E0u: goto label_7F2136E0;
    case 0x7F2136E4u: goto label_7F2136E4;
    case 0x7F2136E8u: goto label_7F2136E8;
    case 0x7F2136ECu: goto label_7F2136EC;
    case 0x7F2136F0u: goto label_7F2136F0;
    case 0x7F2136F4u: goto label_7F2136F4;
    case 0x7F2136F8u: goto label_7F2136F8;
    case 0x7F2136FCu: goto label_7F2136FC;
    case 0x7F213700u: goto label_7F213700;
    case 0x7F213704u: goto label_7F213704;
    case 0x7F213708u: goto label_7F213708;
    case 0x7F21370Cu: goto label_7F21370C;
    case 0x7F213710u: goto label_7F213710;
    case 0x7F213714u: goto label_7F213714;
    case 0x7F213718u: goto label_7F213718;
    case 0x7F21371Cu: goto label_7F21371C;
    case 0x7F213720u: goto label_7F213720;
    case 0x7F213724u: goto label_7F213724;
    case 0x7F213728u: goto label_7F213728;
    case 0x7F21372Cu: goto label_7F21372C;
    case 0x7F213730u: goto label_7F213730;
    case 0x7F213734u: goto label_7F213734;
    case 0x7F213738u: goto label_7F213738;
    case 0x7F21373Cu: goto label_7F21373C;
    case 0x7F213740u: goto label_7F213740;
    case 0x7F213744u: goto label_7F213744;
    case 0x7F213748u: goto label_7F213748;
    case 0x7F21374Cu: goto label_7F21374C;
    case 0x7F213750u: goto label_7F213750;
    case 0x7F213754u: goto label_7F213754;
    case 0x7F213758u: goto label_7F213758;
    case 0x7F21375Cu: goto label_7F21375C;
    case 0x7F213760u: goto label_7F213760;
    case 0x7F213764u: goto label_7F213764;
    case 0x7F213768u: goto label_7F213768;
    case 0x7F21376Cu: goto label_7F21376C;
    case 0x7F213770u: goto label_7F213770;
    case 0x7F213774u: goto label_7F213774;
    case 0x7F213778u: goto label_7F213778;
    case 0x7F21377Cu: goto label_7F21377C;
    case 0x7F213780u: goto label_7F213780;
    case 0x7F213784u: goto label_7F213784;
    case 0x7F213788u: goto label_7F213788;
    case 0x7F21378Cu: goto label_7F21378C;
    case 0x7F213790u: goto label_7F213790;
    case 0x7F213794u: goto label_7F213794;
    case 0x7F213798u: goto label_7F213798;
    case 0x7F21379Cu: goto label_7F21379C;
    case 0x7F2137A0u: goto label_7F2137A0;
    case 0x7F2137A4u: goto label_7F2137A4;
    case 0x7F2137A8u: goto label_7F2137A8;
    case 0x7F2137ACu: goto label_7F2137AC;
    case 0x7F2137B0u: goto label_7F2137B0;
    case 0x7F2137B4u: goto label_7F2137B4;
    case 0x7F2137B8u: goto label_7F2137B8;
    case 0x7F2137BCu: goto label_7F2137BC;
    case 0x7F2137C0u: goto label_7F2137C0;
    case 0x7F2137C4u: goto label_7F2137C4;
    case 0x7F2137C8u: goto label_7F2137C8;
    case 0x7F2137CCu: goto label_7F2137CC;
    case 0x7F2137D0u: goto label_7F2137D0;
    case 0x7F2137D4u: goto label_7F2137D4;
    case 0x7F2137D8u: goto label_7F2137D8;
    case 0x7F2137DCu: goto label_7F2137DC;
    case 0x7F2137E0u: goto label_7F2137E0;
    case 0x7F2137E4u: goto label_7F2137E4;
    case 0x7F2137E8u: goto label_7F2137E8;
    case 0x7F2137ECu: goto label_7F2137EC;
    case 0x7F2137F0u: goto label_7F2137F0;
    case 0x7F2137F4u: goto label_7F2137F4;
    case 0x7F2137F8u: goto label_7F2137F8;
    case 0x7F2137FCu: goto label_7F2137FC;
    case 0x7F213800u: goto label_7F213800;
    case 0x7F213804u: goto label_7F213804;
    case 0x7F213808u: goto label_7F213808;
    case 0x7F21380Cu: goto label_7F21380C;
    case 0x7F213810u: goto label_7F213810;
    case 0x7F213814u: goto label_7F213814;
    case 0x7F213818u: goto label_7F213818;
    case 0x7F21381Cu: goto label_7F21381C;
    case 0x7F213820u: goto label_7F213820;
    case 0x7F213824u: goto label_7F213824;
    case 0x7F213828u: goto label_7F213828;
    case 0x7F21382Cu: goto label_7F21382C;
    case 0x7F213830u: goto label_7F213830;
    case 0x7F213834u: goto label_7F213834;
    case 0x7F213838u: goto label_7F213838;
    case 0x7F21383Cu: goto label_7F21383C;
    case 0x7F213840u: goto label_7F213840;
    case 0x7F213844u: goto label_7F213844;
    case 0x7F213848u: goto label_7F213848;
    case 0x7F21384Cu: goto label_7F21384C;
    case 0x7F213850u: goto label_7F213850;
    case 0x7F213854u: goto label_7F213854;
    case 0x7F213858u: goto label_7F213858;
    case 0x7F21385Cu: goto label_7F21385C;
    case 0x7F213860u: goto label_7F213860;
    case 0x7F213864u: goto label_7F213864;
    case 0x7F213868u: goto label_7F213868;
    case 0x7F21386Cu: goto label_7F21386C;
    case 0x7F213870u: goto label_7F213870;
    case 0x7F213874u: goto label_7F213874;
    case 0x7F213878u: goto label_7F213878;
    case 0x7F21387Cu: goto label_7F21387C;
    case 0x7F213880u: goto label_7F213880;
    case 0x7F213884u: goto label_7F213884;
    case 0x7F213888u: goto label_7F213888;
    case 0x7F21388Cu: goto label_7F21388C;
    case 0x7F213890u: goto label_7F213890;
    case 0x7F213894u: goto label_7F213894;
    case 0x7F213898u: goto label_7F213898;
    case 0x7F21389Cu: goto label_7F21389C;
    case 0x7F2138A0u: goto label_7F2138A0;
    case 0x7F2138A4u: goto label_7F2138A4;
    case 0x7F2138A8u: goto label_7F2138A8;
    case 0x7F2138ACu: goto label_7F2138AC;
    case 0x7F2138B0u: goto label_7F2138B0;
    case 0x7F2138B4u: goto label_7F2138B4;
    case 0x7F2138B8u: goto label_7F2138B8;
    case 0x7F2138BCu: goto label_7F2138BC;
    case 0x7F2138C0u: goto label_7F2138C0;
    case 0x7F2138C4u: goto label_7F2138C4;
    case 0x7F2138C8u: goto label_7F2138C8;
    case 0x7F2138CCu: goto label_7F2138CC;
    case 0x7F2138D0u: goto label_7F2138D0;
    case 0x7F2138D4u: goto label_7F2138D4;
    case 0x7F2138D8u: goto label_7F2138D8;
    case 0x7F2138DCu: goto label_7F2138DC;
    case 0x7F2138E0u: goto label_7F2138E0;
    case 0x7F2138E4u: goto label_7F2138E4;
    case 0x7F2138E8u: goto label_7F2138E8;
    case 0x7F2138ECu: goto label_7F2138EC;
    case 0x7F2138F0u: goto label_7F2138F0;
    case 0x7F2138F4u: goto label_7F2138F4;
    case 0x7F2138F8u: goto label_7F2138F8;
    case 0x7F2138FCu: goto label_7F2138FC;
    case 0x7F213900u: goto label_7F213900;
    case 0x7F213904u: goto label_7F213904;
    case 0x7F213908u: goto label_7F213908;
    case 0x7F21390Cu: goto label_7F21390C;
    case 0x7F213910u: goto label_7F213910;
    case 0x7F213914u: goto label_7F213914;
    case 0x7F213918u: goto label_7F213918;
    case 0x7F21391Cu: goto label_7F21391C;
    case 0x7F213920u: goto label_7F213920;
    case 0x7F213924u: goto label_7F213924;
    case 0x7F213928u: goto label_7F213928;
    case 0x7F21392Cu: goto label_7F21392C;
    case 0x7F213930u: goto label_7F213930;
    case 0x7F213934u: goto label_7F213934;
    case 0x7F213938u: goto label_7F213938;
    case 0x7F21393Cu: goto label_7F21393C;
    case 0x7F213940u: goto label_7F213940;
    case 0x7F213944u: goto label_7F213944;
    case 0x7F213948u: goto label_7F213948;
    case 0x7F21394Cu: goto label_7F21394C;
    case 0x7F213950u: goto label_7F213950;
    case 0x7F213954u: goto label_7F213954;
    case 0x7F213958u: goto label_7F213958;
    case 0x7F21395Cu: goto label_7F21395C;
    case 0x7F213960u: goto label_7F213960;
    case 0x7F213964u: goto label_7F213964;
    case 0x7F213968u: goto label_7F213968;
    case 0x7F21396Cu: goto label_7F21396C;
    case 0x7F213970u: goto label_7F213970;
    case 0x7F213974u: goto label_7F213974;
    case 0x7F213978u: goto label_7F213978;
    case 0x7F21397Cu: goto label_7F21397C;
    case 0x7F213980u: goto label_7F213980;
    case 0x7F213984u: goto label_7F213984;
    case 0x7F213988u: goto label_7F213988;
    case 0x7F21398Cu: goto label_7F21398C;
    case 0x7F213990u: goto label_7F213990;
    case 0x7F213994u: goto label_7F213994;
    case 0x7F213998u: goto label_7F213998;
    case 0x7F21399Cu: goto label_7F21399C;
    case 0x7F2139A0u: goto label_7F2139A0;
    case 0x7F2139A4u: goto label_7F2139A4;
    case 0x7F2139A8u: goto label_7F2139A8;
    case 0x7F2139ACu: goto label_7F2139AC;
    case 0x7F2139B0u: goto label_7F2139B0;
    case 0x7F2139B4u: goto label_7F2139B4;
    case 0x7F2139B8u: goto label_7F2139B8;
    case 0x7F2139BCu: goto label_7F2139BC;
    case 0x7F2139C0u: goto label_7F2139C0;
    case 0x7F2139C4u: goto label_7F2139C4;
    case 0x7F2139C8u: goto label_7F2139C8;
    case 0x7F2139CCu: goto label_7F2139CC;
    case 0x7F2139D0u: goto label_7F2139D0;
    case 0x7F2139D4u: goto label_7F2139D4;
    case 0x7F2139D8u: goto label_7F2139D8;
    case 0x7F2139DCu: goto label_7F2139DC;
    case 0x7F2139E0u: goto label_7F2139E0;
    case 0x7F2139E4u: goto label_7F2139E4;
    case 0x7F2139E8u: goto label_7F2139E8;
    case 0x7F2139ECu: goto label_7F2139EC;
    case 0x7F2139F0u: goto label_7F2139F0;
    case 0x7F2139F4u: goto label_7F2139F4;
    case 0x7F2139F8u: goto label_7F2139F8;
    case 0x7F2139FCu: goto label_7F2139FC;
    case 0x7F213A00u: goto label_7F213A00;
    case 0x7F213A04u: goto label_7F213A04;
    case 0x7F213A08u: goto label_7F213A08;
    case 0x7F213A0Cu: goto label_7F213A0C;
    case 0x7F213A10u: goto label_7F213A10;
    case 0x7F213A14u: goto label_7F213A14;
    case 0x7F213A18u: goto label_7F213A18;
    case 0x7F213A1Cu: goto label_7F213A1C;
    case 0x7F213A20u: goto label_7F213A20;
    case 0x7F213A24u: goto label_7F213A24;
    case 0x7F213A28u: goto label_7F213A28;
    case 0x7F213A2Cu: goto label_7F213A2C;
    case 0x7F213A30u: goto label_7F213A30;
    case 0x7F213A34u: goto label_7F213A34;
    case 0x7F213A38u: goto label_7F213A38;
    case 0x7F213A3Cu: goto label_7F213A3C;
    case 0x7F213A40u: goto label_7F213A40;
    case 0x7F213A44u: goto label_7F213A44;
    case 0x7F213A48u: goto label_7F213A48;
    case 0x7F213A4Cu: goto label_7F213A4C;
    case 0x7F213A50u: goto label_7F213A50;
    case 0x7F213A54u: goto label_7F213A54;
    case 0x7F213A58u: goto label_7F213A58;
    case 0x7F213A5Cu: goto label_7F213A5C;
    case 0x7F213A60u: goto label_7F213A60;
    case 0x7F213A64u: goto label_7F213A64;
    case 0x7F213A68u: goto label_7F213A68;
    case 0x7F213A6Cu: goto label_7F213A6C;
    case 0x7F213A70u: goto label_7F213A70;
    case 0x7F213A74u: goto label_7F213A74;
    case 0x7F213A78u: goto label_7F213A78;
    case 0x7F213A7Cu: goto label_7F213A7C;
    case 0x7F213A80u: goto label_7F213A80;
    case 0x7F213A84u: goto label_7F213A84;
    case 0x7F213A88u: goto label_7F213A88;
    case 0x7F213A8Cu: goto label_7F213A8C;
    case 0x7F213A90u: goto label_7F213A90;
    case 0x7F213A94u: goto label_7F213A94;
    case 0x7F213A98u: goto label_7F213A98;
    case 0x7F213A9Cu: goto label_7F213A9C;
    case 0x7F213AA0u: goto label_7F213AA0;
    case 0x7F213AA4u: goto label_7F213AA4;
    case 0x7F213AA8u: goto label_7F213AA8;
    case 0x7F213AACu: goto label_7F213AAC;
    case 0x7F213AB0u: goto label_7F213AB0;
    case 0x7F213AB4u: goto label_7F213AB4;
    case 0x7F213AB8u: goto label_7F213AB8;
    case 0x7F213ABCu: goto label_7F213ABC;
    case 0x7F213AC0u: goto label_7F213AC0;
    case 0x7F213AC4u: goto label_7F213AC4;
    case 0x7F213AC8u: goto label_7F213AC8;
    case 0x7F213ACCu: goto label_7F213ACC;
    case 0x7F213AD0u: goto label_7F213AD0;
    case 0x7F213AD4u: goto label_7F213AD4;
    case 0x7F213AD8u: goto label_7F213AD8;
    case 0x7F213ADCu: goto label_7F213ADC;
    case 0x7F213AE0u: goto label_7F213AE0;
    case 0x7F213AE4u: goto label_7F213AE4;
    case 0x7F213AE8u: goto label_7F213AE8;
    case 0x7F213AECu: goto label_7F213AEC;
    case 0x7F213AF0u: goto label_7F213AF0;
    case 0x7F213AF4u: goto label_7F213AF4;
    case 0x7F213AF8u: goto label_7F213AF8;
    case 0x7F213AFCu: goto label_7F213AFC;
    case 0x7F213B00u: goto label_7F213B00;
    case 0x7F213B04u: goto label_7F213B04;
    case 0x7F213B08u: goto label_7F213B08;
    case 0x7F213B0Cu: goto label_7F213B0C;
    case 0x7F213B10u: goto label_7F213B10;
    case 0x7F213B14u: goto label_7F213B14;
    case 0x7F213B18u: goto label_7F213B18;
    case 0x7F213B1Cu: goto label_7F213B1C;
    case 0x7F213B20u: goto label_7F213B20;
    case 0x7F213B24u: goto label_7F213B24;
    case 0x7F213B28u: goto label_7F213B28;
    case 0x7F213B2Cu: goto label_7F213B2C;
    case 0x7F213B30u: goto label_7F213B30;
    case 0x7F213B34u: goto label_7F213B34;
    case 0x7F213B38u: goto label_7F213B38;
    case 0x7F213B3Cu: goto label_7F213B3C;
    case 0x7F213B40u: goto label_7F213B40;
    case 0x7F213B44u: goto label_7F213B44;
    case 0x7F213B48u: goto label_7F213B48;
    case 0x7F213B4Cu: goto label_7F213B4C;
    case 0x7F213B50u: goto label_7F213B50;
    case 0x7F213B54u: goto label_7F213B54;
    case 0x7F213B58u: goto label_7F213B58;
    case 0x7F213B5Cu: goto label_7F213B5C;
    case 0x7F213B60u: goto label_7F213B60;
    case 0x7F213B64u: goto label_7F213B64;
    case 0x7F213B68u: goto label_7F213B68;
    case 0x7F213B6Cu: goto label_7F213B6C;
    case 0x7F213B70u: goto label_7F213B70;
    case 0x7F213B74u: goto label_7F213B74;
    case 0x7F213B78u: goto label_7F213B78;
    case 0x7F213B7Cu: goto label_7F213B7C;
    case 0x7F213B80u: goto label_7F213B80;
    case 0x7F213B84u: goto label_7F213B84;
    case 0x7F213B88u: goto label_7F213B88;
    case 0x7F213B8Cu: goto label_7F213B8C;
    case 0x7F213B90u: goto label_7F213B90;
    case 0x7F213B94u: goto label_7F213B94;
    case 0x7F213B98u: goto label_7F213B98;
    case 0x7F213B9Cu: goto label_7F213B9C;
    case 0x7F213BA0u: goto label_7F213BA0;
    case 0x7F213BA4u: goto label_7F213BA4;
    case 0x7F213BA8u: goto label_7F213BA8;
    case 0x7F213BACu: goto label_7F213BAC;
    case 0x7F213BB0u: goto label_7F213BB0;
    case 0x7F213BB4u: goto label_7F213BB4;
    case 0x7F213BB8u: goto label_7F213BB8;
    case 0x7F213BBCu: goto label_7F213BBC;
    case 0x7F213BC0u: goto label_7F213BC0;
    case 0x7F213BC4u: goto label_7F213BC4;
    case 0x7F213BC8u: goto label_7F213BC8;
    case 0x7F213BCCu: goto label_7F213BCC;
    case 0x7F213BD0u: goto label_7F213BD0;
    case 0x7F213BD4u: goto label_7F213BD4;
    case 0x7F213BD8u: goto label_7F213BD8;
    case 0x7F213BDCu: goto label_7F213BDC;
    case 0x7F213BE0u: goto label_7F213BE0;
    case 0x7F213BE4u: goto label_7F213BE4;
    case 0x7F213BE8u: goto label_7F213BE8;
    case 0x7F213BECu: goto label_7F213BEC;
    case 0x7F213BF0u: goto label_7F213BF0;
    case 0x7F213BF4u: goto label_7F213BF4;
    case 0x7F213BF8u: goto label_7F213BF8;
    case 0x7F213BFCu: goto label_7F213BFC;
    case 0x7F213C00u: goto label_7F213C00;
    case 0x7F213C04u: goto label_7F213C04;
    case 0x7F213C08u: goto label_7F213C08;
    case 0x7F213C0Cu: goto label_7F213C0C;
    case 0x7F213C10u: goto label_7F213C10;
    case 0x7F213C14u: goto label_7F213C14;
    case 0x7F213C18u: goto label_7F213C18;
    case 0x7F213C1Cu: goto label_7F213C1C;
    case 0x7F213C20u: goto label_7F213C20;
    case 0x7F213C24u: goto label_7F213C24;
    case 0x7F213C28u: goto label_7F213C28;
    case 0x7F213C2Cu: goto label_7F213C2C;
    case 0x7F213C30u: goto label_7F213C30;
    case 0x7F213C34u: goto label_7F213C34;
    case 0x7F213C38u: goto label_7F213C38;
    case 0x7F213C3Cu: goto label_7F213C3C;
    case 0x7F213C40u: goto label_7F213C40;
    case 0x7F213C44u: goto label_7F213C44;
    case 0x7F213C48u: goto label_7F213C48;
    case 0x7F213C4Cu: goto label_7F213C4C;
    case 0x7F213C50u: goto label_7F213C50;
    case 0x7F213C54u: goto label_7F213C54;
    case 0x7F213C58u: goto label_7F213C58;
    case 0x7F213C5Cu: goto label_7F213C5C;
    case 0x7F213C60u: goto label_7F213C60;
    case 0x7F213C64u: goto label_7F213C64;
    case 0x7F213C68u: goto label_7F213C68;
    case 0x7F213C6Cu: goto label_7F213C6C;
    case 0x7F213C70u: goto label_7F213C70;
    case 0x7F213C74u: goto label_7F213C74;
    case 0x7F213C78u: goto label_7F213C78;
    case 0x7F213C7Cu: goto label_7F213C7C;
    case 0x7F213C80u: goto label_7F213C80;
    case 0x7F213C84u: goto label_7F213C84;
    case 0x7F213C88u: goto label_7F213C88;
    case 0x7F213C8Cu: goto label_7F213C8C;
    case 0x7F213C90u: goto label_7F213C90;
    case 0x7F213C94u: goto label_7F213C94;
    case 0x7F213C98u: goto label_7F213C98;
    case 0x7F213C9Cu: goto label_7F213C9C;
    case 0x7F213CA0u: goto label_7F213CA0;
    case 0x7F213CA4u: goto label_7F213CA4;
    case 0x7F213CA8u: goto label_7F213CA8;
    case 0x7F213CACu: goto label_7F213CAC;
    case 0x7F213CB0u: goto label_7F213CB0;
    case 0x7F213CB4u: goto label_7F213CB4;
    case 0x7F213CB8u: goto label_7F213CB8;
    case 0x7F213CBCu: goto label_7F213CBC;
    case 0x7F213CC0u: goto label_7F213CC0;
    case 0x7F213CC4u: goto label_7F213CC4;
    case 0x7F213CC8u: goto label_7F213CC8;
    case 0x7F213CCCu: goto label_7F213CCC;
    case 0x7F213CD0u: goto label_7F213CD0;
    case 0x7F213CD4u: goto label_7F213CD4;
    case 0x7F213CD8u: goto label_7F213CD8;
    case 0x7F213CDCu: goto label_7F213CDC;
    case 0x7F213CE0u: goto label_7F213CE0;
    case 0x7F213CE4u: goto label_7F213CE4;
    case 0x7F213CE8u: goto label_7F213CE8;
    case 0x7F213CECu: goto label_7F213CEC;
    case 0x7F213CF0u: goto label_7F213CF0;
    case 0x7F213CF4u: goto label_7F213CF4;
    case 0x7F213CF8u: goto label_7F213CF8;
    case 0x7F213CFCu: goto label_7F213CFC;
    case 0x7F213D00u: goto label_7F213D00;
    case 0x7F213D04u: goto label_7F213D04;
    case 0x7F213D08u: goto label_7F213D08;
    case 0x7F213D0Cu: goto label_7F213D0C;
    case 0x7F213D10u: goto label_7F213D10;
    case 0x7F213D14u: goto label_7F213D14;
    case 0x7F213D18u: goto label_7F213D18;
    case 0x7F213D1Cu: goto label_7F213D1C;
    case 0x7F213D20u: goto label_7F213D20;
    case 0x7F213D24u: goto label_7F213D24;
    case 0x7F213D28u: goto label_7F213D28;
    case 0x7F213D2Cu: goto label_7F213D2C;
    case 0x7F213D30u: goto label_7F213D30;
    case 0x7F213D34u: goto label_7F213D34;
    case 0x7F213D38u: goto label_7F213D38;
    case 0x7F213D3Cu: goto label_7F213D3C;
    case 0x7F213D40u: goto label_7F213D40;
    case 0x7F213D44u: goto label_7F213D44;
    case 0x7F213D48u: goto label_7F213D48;
    case 0x7F213D4Cu: goto label_7F213D4C;
    case 0x7F213D50u: goto label_7F213D50;
    case 0x7F213D54u: goto label_7F213D54;
    case 0x7F213D58u: goto label_7F213D58;
    case 0x7F213D5Cu: goto label_7F213D5C;
    case 0x7F213D60u: goto label_7F213D60;
    case 0x7F213D64u: goto label_7F213D64;
    case 0x7F213D68u: goto label_7F213D68;
    case 0x7F213D6Cu: goto label_7F213D6C;
    case 0x7F213D70u: goto label_7F213D70;
    case 0x7F213D74u: goto label_7F213D74;
    case 0x7F213D78u: goto label_7F213D78;
    case 0x7F213D7Cu: goto label_7F213D7C;
    case 0x7F213D80u: goto label_7F213D80;
    case 0x7F213D84u: goto label_7F213D84;
    case 0x7F213D88u: goto label_7F213D88;
    case 0x7F213D8Cu: goto label_7F213D8C;
    case 0x7F213D90u: goto label_7F213D90;
    case 0x7F213D94u: goto label_7F213D94;
    case 0x7F213D98u: goto label_7F213D98;
    case 0x7F213D9Cu: goto label_7F213D9C;
    case 0x7F213DA0u: goto label_7F213DA0;
    case 0x7F213DA4u: goto label_7F213DA4;
    case 0x7F213DA8u: goto label_7F213DA8;
    case 0x7F213DACu: goto label_7F213DAC;
    case 0x7F213DB0u: goto label_7F213DB0;
    case 0x7F213DB4u: goto label_7F213DB4;
    case 0x7F213DB8u: goto label_7F213DB8;
    case 0x7F213DBCu: goto label_7F213DBC;
    case 0x7F213DC0u: goto label_7F213DC0;
    case 0x7F213DC4u: goto label_7F213DC4;
    case 0x7F213DC8u: goto label_7F213DC8;
    case 0x7F213DCCu: goto label_7F213DCC;
    case 0x7F213DD0u: goto label_7F213DD0;
    case 0x7F213DD4u: goto label_7F213DD4;
    case 0x7F213DD8u: goto label_7F213DD8;
    case 0x7F213DDCu: goto label_7F213DDC;
    case 0x7F213DE0u: goto label_7F213DE0;
    case 0x7F213DE4u: goto label_7F213DE4;
    case 0x7F213DE8u: goto label_7F213DE8;
    case 0x7F213DECu: goto label_7F213DEC;
    case 0x7F213DF0u: goto label_7F213DF0;
    case 0x7F213DF4u: goto label_7F213DF4;
    case 0x7F213DF8u: goto label_7F213DF8;
    case 0x7F213DFCu: goto label_7F213DFC;
    case 0x7F213E00u: goto label_7F213E00;
    case 0x7F213E04u: goto label_7F213E04;
    case 0x7F213E08u: goto label_7F213E08;
    case 0x7F213E0Cu: goto label_7F213E0C;
    case 0x7F213E10u: goto label_7F213E10;
    case 0x7F213E14u: goto label_7F213E14;
    case 0x7F213E18u: goto label_7F213E18;
    case 0x7F213E1Cu: goto label_7F213E1C;
    case 0x7F213E20u: goto label_7F213E20;
    case 0x7F213E24u: goto label_7F213E24;
    case 0x7F213E28u: goto label_7F213E28;
    case 0x7F213E2Cu: goto label_7F213E2C;
    case 0x7F213E30u: goto label_7F213E30;
    case 0x7F213E34u: goto label_7F213E34;
    case 0x7F213E38u: goto label_7F213E38;
    case 0x7F213E3Cu: goto label_7F213E3C;
    case 0x7F213E40u: goto label_7F213E40;
    case 0x7F213E44u: goto label_7F213E44;
    case 0x7F213E48u: goto label_7F213E48;
    case 0x7F213E4Cu: goto label_7F213E4C;
    case 0x7F213E50u: goto label_7F213E50;
    case 0x7F213E54u: goto label_7F213E54;
    case 0x7F213E58u: goto label_7F213E58;
    case 0x7F213E5Cu: goto label_7F213E5C;
    case 0x7F213E60u: goto label_7F213E60;
    case 0x7F213E64u: goto label_7F213E64;
    case 0x7F213E68u: goto label_7F213E68;
    case 0x7F213E6Cu: goto label_7F213E6C;
    case 0x7F213E70u: goto label_7F213E70;
    case 0x7F213E74u: goto label_7F213E74;
    case 0x7F213E78u: goto label_7F213E78;
    case 0x7F213E7Cu: goto label_7F213E7C;
    case 0x7F213E80u: goto label_7F213E80;
    case 0x7F213E84u: goto label_7F213E84;
    case 0x7F213E88u: goto label_7F213E88;
    case 0x7F213E8Cu: goto label_7F213E8C;
    case 0x7F213E90u: goto label_7F213E90;
    case 0x7F213E94u: goto label_7F213E94;
    case 0x7F213E98u: goto label_7F213E98;
    case 0x7F213E9Cu: goto label_7F213E9C;
    case 0x7F213EA0u: goto label_7F213EA0;
    case 0x7F213EA4u: goto label_7F213EA4;
    case 0x7F213EA8u: goto label_7F213EA8;
    case 0x7F213EACu: goto label_7F213EAC;
    case 0x7F213EB0u: goto label_7F213EB0;
    case 0x7F213EB4u: goto label_7F213EB4;
    case 0x7F213EB8u: goto label_7F213EB8;
    case 0x7F213EBCu: goto label_7F213EBC;
    case 0x7F213EC0u: goto label_7F213EC0;
    case 0x7F213EC4u: goto label_7F213EC4;
    case 0x7F213EC8u: goto label_7F213EC8;
    case 0x7F213ECCu: goto label_7F213ECC;
    case 0x7F213ED0u: goto label_7F213ED0;
    case 0x7F213ED4u: goto label_7F213ED4;
    case 0x7F213ED8u: goto label_7F213ED8;
    case 0x7F213EDCu: goto label_7F213EDC;
    case 0x7F213EE0u: goto label_7F213EE0;
    case 0x7F213EE4u: goto label_7F213EE4;
    case 0x7F213EE8u: goto label_7F213EE8;
    case 0x7F213EECu: goto label_7F213EEC;
    case 0x7F213EF0u: goto label_7F213EF0;
    case 0x7F213EF4u: goto label_7F213EF4;
    case 0x7F213EF8u: goto label_7F213EF8;
    case 0x7F213EFCu: goto label_7F213EFC;
    case 0x7F213F00u: goto label_7F213F00;
    case 0x7F213F04u: goto label_7F213F04;
    case 0x7F213F08u: goto label_7F213F08;
    case 0x7F213F0Cu: goto label_7F213F0C;
    case 0x7F213F10u: goto label_7F213F10;
    case 0x7F213F14u: goto label_7F213F14;
    case 0x7F213F18u: goto label_7F213F18;
    case 0x7F213F1Cu: goto label_7F213F1C;
    case 0x7F213F20u: goto label_7F213F20;
    case 0x7F213F24u: goto label_7F213F24;
    case 0x7F213F28u: goto label_7F213F28;
    case 0x7F213F2Cu: goto label_7F213F2C;
    case 0x7F213F30u: goto label_7F213F30;
    case 0x7F213F34u: goto label_7F213F34;
    case 0x7F213F38u: goto label_7F213F38;
    case 0x7F213F3Cu: goto label_7F213F3C;
    case 0x7F213F40u: goto label_7F213F40;
    case 0x7F213F44u: goto label_7F213F44;
    case 0x7F213F48u: goto label_7F213F48;
    case 0x7F213F4Cu: goto label_7F213F4C;
    case 0x7F213F50u: goto label_7F213F50;
    case 0x7F213F54u: goto label_7F213F54;
    case 0x7F213F58u: goto label_7F213F58;
    case 0x7F213F5Cu: goto label_7F213F5C;
    case 0x7F213F60u: goto label_7F213F60;
    case 0x7F213F64u: goto label_7F213F64;
    case 0x7F213F68u: goto label_7F213F68;
    case 0x7F213F6Cu: goto label_7F213F6C;
    case 0x7F213F70u: goto label_7F213F70;
    case 0x7F213F74u: goto label_7F213F74;
    case 0x7F213F78u: goto label_7F213F78;
    case 0x7F213F7Cu: goto label_7F213F7C;
    case 0x7F213F80u: goto label_7F213F80;
    case 0x7F213F84u: goto label_7F213F84;
    case 0x7F213F88u: goto label_7F213F88;
    case 0x7F213F8Cu: goto label_7F213F8C;
    case 0x7F213F90u: goto label_7F213F90;
    case 0x7F213F94u: goto label_7F213F94;
    case 0x7F213F98u: goto label_7F213F98;
    case 0x7F213F9Cu: goto label_7F213F9C;
    case 0x7F213FA0u: goto label_7F213FA0;
    case 0x7F213FA4u: goto label_7F213FA4;
    case 0x7F213FA8u: goto label_7F213FA8;
    case 0x7F213FACu: goto label_7F213FAC;
    case 0x7F213FB0u: goto label_7F213FB0;
    case 0x7F213FB4u: goto label_7F213FB4;
    case 0x7F213FB8u: goto label_7F213FB8;
    case 0x7F213FBCu: goto label_7F213FBC;
    case 0x7F213FC0u: goto label_7F213FC0;
    case 0x7F213FC4u: goto label_7F213FC4;
    case 0x7F213FC8u: goto label_7F213FC8;
    case 0x7F213FCCu: goto label_7F213FCC;
    case 0x7F213FD0u: goto label_7F213FD0;
    case 0x7F213FD4u: goto label_7F213FD4;
    case 0x7F213FD8u: goto label_7F213FD8;
    case 0x7F213FDCu: goto label_7F213FDC;
    case 0x7F213FE0u: goto label_7F213FE0;
    case 0x7F213FE4u: goto label_7F213FE4;
    case 0x7F213FE8u: goto label_7F213FE8;
    case 0x7F213FECu: goto label_7F213FEC;
    case 0x7F213FF0u: goto label_7F213FF0;
    case 0x7F213FF4u: goto label_7F213FF4;
    case 0x7F213FF8u: goto label_7F213FF8;
    case 0x7F213FFCu: goto label_7F213FFC;
    case 0x7F214000u: goto label_7F214000;
    case 0x7F214004u: goto label_7F214004;
    case 0x7F214008u: goto label_7F214008;
    case 0x7F21400Cu: goto label_7F21400C;
    case 0x7F214010u: goto label_7F214010;
    case 0x7F214014u: goto label_7F214014;
    case 0x7F214018u: goto label_7F214018;
    case 0x7F21401Cu: goto label_7F21401C;
    case 0x7F214020u: goto label_7F214020;
    case 0x7F214024u: goto label_7F214024;
    case 0x7F214028u: goto label_7F214028;
    case 0x7F21402Cu: goto label_7F21402C;
    case 0x7F214030u: goto label_7F214030;
    case 0x7F214034u: goto label_7F214034;
    case 0x7F214038u: goto label_7F214038;
    case 0x7F21403Cu: goto label_7F21403C;
    case 0x7F214040u: goto label_7F214040;
    case 0x7F214044u: goto label_7F214044;
    case 0x7F214048u: goto label_7F214048;
    case 0x7F21404Cu: goto label_7F21404C;
    case 0x7F214050u: goto label_7F214050;
    case 0x7F214054u: goto label_7F214054;
    case 0x7F214058u: goto label_7F214058;
    case 0x7F21405Cu: goto label_7F21405C;
    case 0x7F214060u: goto label_7F214060;
    case 0x7F214064u: goto label_7F214064;
    case 0x7F214068u: goto label_7F214068;
    case 0x7F21406Cu: goto label_7F21406C;
    case 0x7F214070u: goto label_7F214070;
    case 0x7F214074u: goto label_7F214074;
    case 0x7F214078u: goto label_7F214078;
    case 0x7F21407Cu: goto label_7F21407C;
    case 0x7F214080u: goto label_7F214080;
    case 0x7F214084u: goto label_7F214084;
    case 0x7F214088u: goto label_7F214088;
    case 0x7F21408Cu: goto label_7F21408C;
    case 0x7F214090u: goto label_7F214090;
    case 0x7F214094u: goto label_7F214094;
    case 0x7F214098u: goto label_7F214098;
    case 0x7F21409Cu: goto label_7F21409C;
    case 0x7F2140A0u: goto label_7F2140A0;
    case 0x7F2140A4u: goto label_7F2140A4;
    case 0x7F2140A8u: goto label_7F2140A8;
    case 0x7F2140ACu: goto label_7F2140AC;
    case 0x7F2140B0u: goto label_7F2140B0;
    case 0x7F2140B4u: goto label_7F2140B4;
    case 0x7F2140B8u: goto label_7F2140B8;
    case 0x7F2140BCu: goto label_7F2140BC;
    case 0x7F2140C0u: goto label_7F2140C0;
    case 0x7F2140C4u: goto label_7F2140C4;
    case 0x7F2140C8u: goto label_7F2140C8;
    case 0x7F2140CCu: goto label_7F2140CC;
    case 0x7F2140D0u: goto label_7F2140D0;
    case 0x7F2140D4u: goto label_7F2140D4;
    case 0x7F2140D8u: goto label_7F2140D8;
    case 0x7F2140DCu: goto label_7F2140DC;
    case 0x7F2140E0u: goto label_7F2140E0;
    case 0x7F2140E4u: goto label_7F2140E4;
    case 0x7F2140E8u: goto label_7F2140E8;
    default: return;
    }
label_7F2100EC:
    ctx->pc = 0x7F2100ECu;
    ctx->downcount -= 1;
    // 7F2100EC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2100F0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2100F0:
    ctx->pc = 0x7F2100F0u;
    ctx->downcount -= 2;
    // 7F2100F0: cmplwi  r3, 0x0000
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

label_7F2100F4:
    ctx->pc = 0x7F2100F4u;
    // 7F2100F4: bc    12, 2, 0x7F210104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210104;
        }
    }

label_7F2100F8:
    ctx->pc = 0x7F2100F8u;
    ctx->downcount -= 1;
    // 7F2100F8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2100FCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2100FC:
    ctx->pc = 0x7F2100FCu;
    ctx->downcount -= 2;
    // 7F2100FC: stw     r3, 776(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(776);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210100:
    ctx->pc = 0x7F210100u;
    // 7F210100: b       0x7F21010C
    {
            goto label_7F21010C;
    }

label_7F210104:
    ctx->pc = 0x7F210104u;
    ctx->downcount -= 2;
    // 7F210104: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F210108:
    ctx->pc = 0x7F210108u;
    // 7F210108: stw     r0, 776(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(776);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21010C:
    ctx->pc = 0x7F21010Cu;
    ctx->downcount -= 2;
    // 7F21010C: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F210110:
    ctx->pc = 0x7F210110u;
    // 7F210110: bl      0x7F3C664C
    {
            ctx->lr = 0x7F210114u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F210114:
    ctx->pc = 0x7F210114u;
    ctx->downcount -= 2;
    // 7F210114: cmplwi  r3, 0x0000
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

label_7F210118:
    ctx->pc = 0x7F210118u;
    // 7F210118: bc    12, 2, 0x7F210128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210128;
        }
    }

label_7F21011C:
    ctx->pc = 0x7F21011Cu;
    ctx->downcount -= 1;
    // 7F21011C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F210120u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F210120:
    ctx->pc = 0x7F210120u;
    ctx->downcount -= 2;
    // 7F210120: stw     r3, 772(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(772);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210124:
    ctx->pc = 0x7F210124u;
    // 7F210124: b       0x7F210130
    {
            goto label_7F210130;
    }

label_7F210128:
    ctx->pc = 0x7F210128u;
    ctx->downcount -= 2;
    // 7F210128: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F21012C:
    ctx->pc = 0x7F21012Cu;
    // 7F21012C: stw     r0, 772(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(772);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210130:
    ctx->pc = 0x7F210130u;
    ctx->downcount -= 2;
    // 7F210130: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F210134:
    ctx->pc = 0x7F210134u;
    // 7F210134: bl      0x7F3C664C
    {
            ctx->lr = 0x7F210138u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F210138:
    ctx->pc = 0x7F210138u;
    ctx->downcount -= 2;
    // 7F210138: cmplwi  r3, 0x0000
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

label_7F21013C:
    ctx->pc = 0x7F21013Cu;
    // 7F21013C: bc    12, 2, 0x7F21014C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21014C;
        }
    }

label_7F210140:
    ctx->pc = 0x7F210140u;
    ctx->downcount -= 1;
    // 7F210140: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F210144u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F210144:
    ctx->pc = 0x7F210144u;
    ctx->downcount -= 2;
    // 7F210144: stw     r3, 744(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(744);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210148:
    ctx->pc = 0x7F210148u;
    // 7F210148: b       0x7F210154
    {
            goto label_7F210154;
    }

label_7F21014C:
    ctx->pc = 0x7F21014Cu;
    ctx->downcount -= 2;
    // 7F21014C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F210150:
    ctx->pc = 0x7F210150u;
    // 7F210150: stw     r0, 744(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(744);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210154:
    ctx->pc = 0x7F210154u;
    ctx->downcount -= 15;
    // 7F210154: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F210158:
    ctx->pc = 0x7F210158u;
    // 7F210158: lwz     r0, 744(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(744);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21015C:
    ctx->pc = 0x7F21015Cu;
    // 7F21015C: addi    r3, r3, -27960
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27960);

label_7F210160:
    ctx->pc = 0x7F210160u;
    // 7F210160: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210164:
    ctx->pc = 0x7F210164u;
    // 7F210164: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_7F210168:
    ctx->pc = 0x7F210168u;
    // 7F210168: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21016C:
    ctx->pc = 0x7F21016Cu;
    // 7F21016C: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210170:
    ctx->pc = 0x7F210170u;
    // 7F210170: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F210174:
    ctx->pc = 0x7F210174u;
    // 7F210174: lha     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F210178:
    ctx->pc = 0x7F210178u;
    // 7F210178: stw     r0, 748(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(748);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21017C:
    ctx->pc = 0x7F21017Cu;
    // 7F21017C: lwz     r0, 748(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(748);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210180:
    ctx->pc = 0x7F210180u;
    // 7F210180: cmpwi   r0, 0
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

label_7F210184:
    ctx->pc = 0x7F210184u;
    // 7F210184: bc    12, 1, 0x7F210190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210190;
        }
    }

label_7F210188:
    ctx->pc = 0x7F210188u;
    ctx->downcount -= 2;
    // 7F210188: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21018C:
    ctx->pc = 0x7F21018Cu;
    // 7F21018C: b       0x7F2102A8
    {
            goto label_7F2102A8;
    }

label_7F210190:
    ctx->pc = 0x7F210190u;
    ctx->downcount -= 2;
    // 7F210190: cmpwi   r0, 80
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

label_7F210194:
    ctx->pc = 0x7F210194u;
    // 7F210194: bc    12, 0, 0x7F2101A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2101A0;
        }
    }

label_7F210198:
    ctx->pc = 0x7F210198u;
    ctx->downcount -= 2;
    // 7F210198: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21019C:
    ctx->pc = 0x7F21019Cu;
    // 7F21019C: b       0x7F2102A8
    {
            goto label_7F2102A8;
    }

label_7F2101A0:
    ctx->pc = 0x7F2101A0u;
    ctx->downcount -= 5;
    // 7F2101A0: lwz     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2101A4:
    ctx->pc = 0x7F2101A4u;
    // 7F2101A4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2101A8:
    ctx->pc = 0x7F2101A8u;
    // 7F2101A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2101AC:
    ctx->pc = 0x7F2101ACu;
    // 7F2101AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2101B0:
    ctx->pc = 0x7F2101B0u;
    // 7F2101B0: b       0x7F210210
    {
            goto label_7F210210;
    }

label_7F2101B4:
    ctx->pc = 0x7F2101B4u;
    ctx->downcount -= 23;
    // 7F2101B4: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2101B4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2101B8:
    // 7F2101B8: add   r6, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_7F2101BC:
    // 7F2101BC: addi    r0, r3, 784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(784);

label_7F2101C0:
    // 7F2101C0: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_7F2101C4:
    ctx->pc = 0x7F2101C4u;
    // 7F2101C4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2101C4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2101C8:
    // 7F2101C8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2101CC:
    // 7F2101CC: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F2101D0:
    ctx->pc = 0x7F2101D0u;
    // 7F2101D0: stfd     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2101D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2101D4:
    ctx->pc = 0x7F2101D4u;
    // 7F2101D4: lwz     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2101D8:
    ctx->pc = 0x7F2101D8u;
    // 7F2101D8: stw     r5, 1144(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1144);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2101DC:
    ctx->pc = 0x7F2101DCu;
    // 7F2101DC: lfs     f0, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2101DCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2101E0:
    ctx->pc = 0x7F2101E0u;
    // 7F2101E0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2101E0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2101E4:
    ctx->pc = 0x7F2101E4u;
    // 7F2101E4: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2101E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2101E8:
    ctx->pc = 0x7F2101E8u;
    // 7F2101E8: lwz     r5, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2101EC:
    ctx->pc = 0x7F2101ECu;
    // 7F2101EC: stw     r5, 1148(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2101F0:
    ctx->pc = 0x7F2101F0u;
    // 7F2101F0: lfs     f0, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2101F0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2101F4:
    ctx->pc = 0x7F2101F4u;
    // 7F2101F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2101F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2101F8:
    ctx->pc = 0x7F2101F8u;
    // 7F2101F8: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2101F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2101FC:
    ctx->pc = 0x7F2101FCu;
    // 7F2101FC: lwz     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F210200:
    ctx->pc = 0x7F210200u;
    // 7F210200: stw     r5, 1152(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F210204:
    ctx->pc = 0x7F210204u;
    // 7F210204: lha     r5, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F210208:
    // 7F210208: addi    r7, r7, 40
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(40);

label_7F21020C:
    ctx->pc = 0x7F21020Cu;
    // 7F21020C: stwx    r5, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F210210:
    ctx->pc = 0x7F210210u;
    ctx->downcount -= 3;
    // 7F210210: lwz     r0, 748(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(748);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210214:
    // 7F210214: cmpw    r8, r0
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

label_7F210218:
    // 7F210218: bc    12, 0, 0x7F2101B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2101B4u;
                return;
            }
            goto label_7F2101B4;
        }
    }

label_7F21021C:
    ctx->pc = 0x7F21021Cu;
    ctx->downcount -= 2;
    // 7F21021C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F210220:
    ctx->pc = 0x7F210220u;
    // 7F210220: bl      0x7F20F080
    {
            ctx->lr = 0x7F210224u;
            ctx->pc = 0x7F20F080u;
            return;
    }

label_7F210224:
    ctx->pc = 0x7F210224u;
    ctx->downcount -= 28;
    // 7F210224: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F210228:
    ctx->pc = 0x7F210228u;
    // 7F210228: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21022C:
    ctx->pc = 0x7F21022Cu;
    // 7F21022C: addi    r5, r4, 15876
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15876);

label_7F210230:
    ctx->pc = 0x7F210230u;
    // 7F210230: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F210234:
    ctx->pc = 0x7F210234u;
    // 7F210234: addi    r11, r3, 15892
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(15892);

label_7F210238:
    ctx->pc = 0x7F210238u;
    // 7F210238: lwz     r28, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F21023C:
    ctx->pc = 0x7F21023Cu;
    // 7F21023C: lwz     r29, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F210240:
    ctx->pc = 0x7F210240u;
    // 7F210240: addi    r3, r31, 496
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(496);

label_7F210244:
    ctx->pc = 0x7F210244u;
    // 7F210244: lwz     r30, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F210248:
    ctx->pc = 0x7F210248u;
    // 7F210248: addi    r4, r4, 16401
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16401);

label_7F21024C:
    ctx->pc = 0x7F21024Cu;
    // 7F21024C: lwz     r12, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F210250:
    ctx->pc = 0x7F210250u;
    // 7F210250: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F210254:
    ctx->pc = 0x7F210254u;
    // 7F210254: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F210258:
    ctx->pc = 0x7F210258u;
    // 7F210258: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21025C:
    ctx->pc = 0x7F21025Cu;
    // 7F21025C: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F210260:
    ctx->pc = 0x7F210260u;
    // 7F210260: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F210264:
    ctx->pc = 0x7F210264u;
    // 7F210264: lwz     r5, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F210268:
    ctx->pc = 0x7F210268u;
    // 7F210268: lwz     r0, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21026C:
    ctx->pc = 0x7F21026Cu;
    // 7F21026C: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F210270:
    ctx->pc = 0x7F210270u;
    // 7F210270: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F210274:
    ctx->pc = 0x7F210274u;
    // 7F210274: stw     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F210278:
    ctx->pc = 0x7F210278u;
    // 7F210278: stw     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F21027C:
    ctx->pc = 0x7F21027Cu;
    // 7F21027C: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F210280:
    ctx->pc = 0x7F210280u;
    // 7F210280: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F210284:
    ctx->pc = 0x7F210284u;
    // 7F210284: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F210288:
    ctx->pc = 0x7F210288u;
    // 7F210288: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21028C:
    ctx->pc = 0x7F21028Cu;
    // 7F21028C: lwz     r5, 260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(260);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F210290:
    ctx->pc = 0x7F210290u;
    // 7F210290: bl      0x7F014788
    {
            ctx->lr = 0x7F210294u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F210294:
    ctx->pc = 0x7F210294u;
    ctx->downcount -= 2;
    // 7F210294: addi    r3, r31, 496
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(496);

label_7F210298:
    ctx->pc = 0x7F210298u;
    // 7F210298: bl      0x7F0148A0
    {
            ctx->lr = 0x7F21029Cu;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F21029C:
    ctx->pc = 0x7F21029Cu;
    ctx->downcount -= 3;
    // 7F21029C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2102A0:
    ctx->pc = 0x7F2102A0u;
    // 7F2102A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2102A4:
    ctx->pc = 0x7F2102A4u;
    // 7F2102A4: stw     r0, 708(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2102A8:
    ctx->pc = 0x7F2102A8u;
    ctx->downcount -= 16;
    // 7F2102A8: lmw     r28, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2102AC:
    ctx->pc = 0x7F2102ACu;
    // 7F2102AC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2102B0:
    ctx->pc = 0x7F2102B0u;
    // 7F2102B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2102B4:
    ctx->pc = 0x7F2102B4u;
    // 7F2102B4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F2102B8:
    ctx->pc = 0x7F2102B8u;
    // 7F2102B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2102BC:
    ctx->pc = 0x7F2102BCu;
    ctx->downcount -= 24;
    // 7F2102BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2102C0:
    ctx->pc = 0x7F2102C0u;
    // 7F2102C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2102C4:
    ctx->pc = 0x7F2102C4u;
    // 7F2102C4: lis     r6, 256
    ctx->gpr[6] = ((u32)(s32)(256) << 16);

label_7F2102C8:
    ctx->pc = 0x7F2102C8u;
    // 7F2102C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2102CC:
    ctx->pc = 0x7F2102CCu;
    // 7F2102CC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2102D0:
    ctx->pc = 0x7F2102D0u;
    // 7F2102D0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2102D4:
    ctx->pc = 0x7F2102D4u;
    // 7F2102D4: lis     r4, 113
    ctx->gpr[4] = ((u32)(s32)(113) << 16);

label_7F2102D8:
    ctx->pc = 0x7F2102D8u;
    // 7F2102D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2102DC:
    ctx->pc = 0x7F2102DCu;
    // 7F2102DC: addi    r4, r4, 14927
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14927);

label_7F2102E0:
    ctx->pc = 0x7F2102E0u;
    // 7F2102E0: stw     r30, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2102E4:
    ctx->pc = 0x7F2102E4u;
    // 7F2102E4: addi    r3, r31, 40
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(40);

label_7F2102E8:
    ctx->pc = 0x7F2102E8u;
    // 7F2102E8: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2102EC:
    ctx->pc = 0x7F2102ECu;
    // 7F2102EC: addi    r5, r6, 290
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(290);

label_7F2102F0:
    ctx->pc = 0x7F2102F0u;
    // 7F2102F0: bl      0x7F04272C
    {
            ctx->lr = 0x7F2102F4u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2102F4:
    ctx->pc = 0x7F2102F4u;
    ctx->downcount -= 6;
    // 7F2102F4: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F2102F8:
    ctx->pc = 0x7F2102F8u;
    // 7F2102F8: addi    r3, r31, 40
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(40);

label_7F2102FC:
    ctx->pc = 0x7F2102FCu;
    // 7F2102FC: addi    r5, r4, -11116
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11116);

label_7F210300:
    ctx->pc = 0x7F210300u;
    // 7F210300: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210304:
    ctx->pc = 0x7F210304u;
    // 7F210304: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210308:
    ctx->pc = 0x7F210308u;
    // 7F210308: bl      0x7F042C2C
    {
            ctx->lr = 0x7F21030Cu;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F21030C:
    ctx->pc = 0x7F21030Cu;
    ctx->downcount -= 8;
    // 7F21030C: addi    r3, r31, 40
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(40);

label_7F210310:
    ctx->pc = 0x7F210310u;
    // 7F210310: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210314:
    ctx->pc = 0x7F210314u;
    // 7F210314: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210318:
    ctx->pc = 0x7F210318u;
    // 7F210318: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21031C:
    ctx->pc = 0x7F21031Cu;
    // 7F21031C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F210320:
    ctx->pc = 0x7F210320u;
    // 7F210320: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F210324:
    ctx->pc = 0x7F210324u;
    // 7F210324: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F210328:
    ctx->pc = 0x7F210328u;
    // 7F210328: bl      0x7F042C94
    {
            ctx->lr = 0x7F21032Cu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F21032C:
    ctx->pc = 0x7F21032Cu;
    ctx->downcount -= 3;
    // 7F21032C: addi    r3, r31, 40
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(40);

label_7F210330:
    ctx->pc = 0x7F210330u;
    // 7F210330: addi    r4, r31, 2472
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2472);

label_7F210334:
    ctx->pc = 0x7F210334u;
    // 7F210334: bl      0x7F042B20
    {
            ctx->lr = 0x7F210338u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F210338:
    ctx->pc = 0x7F210338u;
    ctx->downcount -= 5;
    // 7F210338: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21033C:
    ctx->pc = 0x7F21033Cu;
    // 7F21033C: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F210340:
    ctx->pc = 0x7F210340u;
    // 7F210340: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210344:
    ctx->pc = 0x7F210344u;
    // 7F210344: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F210348:
    ctx->pc = 0x7F210348u;
    // 7F210348: bl      0x7F022FB4
    {
            ctx->lr = 0x7F21034Cu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F21034C:
    ctx->pc = 0x7F21034Cu;
    ctx->downcount -= 2;
    // 7F21034C: addi    r3, r31, 96
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(96);

label_7F210350:
    ctx->pc = 0x7F210350u;
    // 7F210350: bl      0x7F023EA8
    {
            ctx->lr = 0x7F210354u;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F210354:
    ctx->pc = 0x7F210354u;
    ctx->downcount -= 2;
    // 7F210354: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F210358:
    ctx->pc = 0x7F210358u;
    // 7F210358: bl      0x7F210068
    {
            ctx->lr = 0x7F21035Cu;
            ctx->pc = 0x7F210068u;
            return;
    }

label_7F21035C:
    ctx->pc = 0x7F21035Cu;
    ctx->downcount -= 15;
    // 7F21035C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F210360:
    ctx->pc = 0x7F210360u;
    // 7F210360: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F210364:
    ctx->pc = 0x7F210364u;
    // 7F210364: addi    r5, r3, 15908
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15908);

label_7F210368:
    ctx->pc = 0x7F210368u;
    // 7F210368: lfs     f4, 15912(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210368u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F21036C:
    ctx->pc = 0x7F21036Cu;
    // 7F21036C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21036Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210370:
    ctx->pc = 0x7F210370u;
    // 7F210370: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F210374:
    ctx->pc = 0x7F210374u;
    // 7F210374: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F210378:
    ctx->pc = 0x7F210378u;
    // 7F210378: lfs     f6, 15916(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F210378u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15916);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F21037C:
    ctx->pc = 0x7F21037Cu;
    // 7F21037C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21037Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F210380:
    ctx->pc = 0x7F210380u;
    // 7F210380: addi    r5, r4, -32698
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32698);

label_7F210384:
    ctx->pc = 0x7F210384u;
    // 7F210384: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210384u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F210388:
    ctx->pc = 0x7F210388u;
    // 7F210388: addi    r3, r31, 2664
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2664);

label_7F21038C:
    ctx->pc = 0x7F21038Cu;
    // 7F21038C: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F21038Cu)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_7F210390:
    ctx->pc = 0x7F210390u;
    // 7F210390: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F210394:
    ctx->pc = 0x7F210394u;
    // 7F210394: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F210398u;
            ctx->pc = 0x7F1AD6F8u;
            return;
    }

label_7F210398:
    ctx->pc = 0x7F210398u;
    ctx->downcount -= 17;
    // 7F210398: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21039C:
    ctx->pc = 0x7F21039Cu;
    // 7F21039C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2103A0:
    ctx->pc = 0x7F2103A0u;
    // 7F2103A0: addi    r6, r4, 15908
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15908);

label_7F2103A4:
    ctx->pc = 0x7F2103A4u;
    // 7F2103A4: lfs     f4, 15912(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2103A4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(15912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2103A8:
    ctx->pc = 0x7F2103A8u;
    // 7F2103A8: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2103A8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2103AC:
    ctx->pc = 0x7F2103ACu;
    // 7F2103AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2103B0:
    ctx->pc = 0x7F2103B0u;
    // 7F2103B0: addi    r5, r4, 15916
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15916);

label_7F2103B4:
    ctx->pc = 0x7F2103B4u;
    // 7F2103B4: stw     r3, 692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(692);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2103B8:
    ctx->pc = 0x7F2103B8u;
    // 7F2103B8: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2103B8u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F2103BC:
    ctx->pc = 0x7F2103BCu;
    // 7F2103BC: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F2103C0:
    ctx->pc = 0x7F2103C0u;
    // 7F2103C0: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2103C0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F2103C4:
    ctx->pc = 0x7F2103C4u;
    // 7F2103C4: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2103C4u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F2103C8:
    ctx->pc = 0x7F2103C8u;
    // 7F2103C8: addi    r5, r4, -32697
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32697);

label_7F2103CC:
    ctx->pc = 0x7F2103CCu;
    // 7F2103CC: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F2103CCu)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_7F2103D0:
    ctx->pc = 0x7F2103D0u;
    // 7F2103D0: addi    r3, r31, 2664
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2664);

label_7F2103D4:
    ctx->pc = 0x7F2103D4u;
    // 7F2103D4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2103D8:
    ctx->pc = 0x7F2103D8u;
    // 7F2103D8: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F2103DCu;
            ctx->pc = 0x7F1AD6F8u;
            return;
    }

label_7F2103DC:
    ctx->pc = 0x7F2103DCu;
    ctx->downcount -= 17;
    // 7F2103DC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2103E0:
    ctx->pc = 0x7F2103E0u;
    // 7F2103E0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2103E4:
    ctx->pc = 0x7F2103E4u;
    // 7F2103E4: addi    r6, r4, 15908
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15908);

label_7F2103E8:
    ctx->pc = 0x7F2103E8u;
    // 7F2103E8: lfs     f4, 15912(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2103E8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(15912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F2103EC:
    ctx->pc = 0x7F2103ECu;
    // 7F2103EC: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2103ECu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2103F0:
    ctx->pc = 0x7F2103F0u;
    // 7F2103F0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2103F4:
    ctx->pc = 0x7F2103F4u;
    // 7F2103F4: addi    r5, r4, 15916
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15916);

label_7F2103F8:
    ctx->pc = 0x7F2103F8u;
    // 7F2103F8: stw     r3, 696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(696);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2103FC:
    ctx->pc = 0x7F2103FCu;
    // 7F2103FC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2103FCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F210400:
    ctx->pc = 0x7F210400u;
    // 7F210400: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F210404:
    ctx->pc = 0x7F210404u;
    // 7F210404: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F210404u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F210408:
    ctx->pc = 0x7F210408u;
    // 7F210408: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210408u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F21040C:
    ctx->pc = 0x7F21040Cu;
    // 7F21040C: addi    r5, r4, -32696
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32696);

label_7F210410:
    ctx->pc = 0x7F210410u;
    // 7F210410: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F210410u)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_7F210414:
    ctx->pc = 0x7F210414u;
    // 7F210414: addi    r3, r31, 2664
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2664);

label_7F210418:
    ctx->pc = 0x7F210418u;
    // 7F210418: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F21041C:
    ctx->pc = 0x7F21041Cu;
    // 7F21041C: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F210420u;
            ctx->pc = 0x7F1AD6F8u;
            return;
    }

label_7F210420:
    ctx->pc = 0x7F210420u;
    ctx->downcount -= 17;
    // 7F210420: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F210424:
    ctx->pc = 0x7F210424u;
    // 7F210424: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F210428:
    ctx->pc = 0x7F210428u;
    // 7F210428: addi    r6, r4, 15908
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15908);

label_7F21042C:
    ctx->pc = 0x7F21042Cu;
    // 7F21042C: lfs     f4, 15912(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21042Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(15912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F210430:
    ctx->pc = 0x7F210430u;
    // 7F210430: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F210430u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210434:
    ctx->pc = 0x7F210434u;
    // 7F210434: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F210438:
    ctx->pc = 0x7F210438u;
    // 7F210438: addi    r5, r4, 15916
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15916);

label_7F21043C:
    ctx->pc = 0x7F21043Cu;
    // 7F21043C: stw     r3, 700(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(700);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210440:
    ctx->pc = 0x7F210440u;
    // 7F210440: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210440u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F210444:
    ctx->pc = 0x7F210444u;
    // 7F210444: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F210448:
    ctx->pc = 0x7F210448u;
    // 7F210448: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F210448u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F21044C:
    ctx->pc = 0x7F21044Cu;
    // 7F21044C: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21044Cu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F210450:
    ctx->pc = 0x7F210450u;
    // 7F210450: addi    r5, r4, -32695
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32695);

label_7F210454:
    ctx->pc = 0x7F210454u;
    // 7F210454: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F210454u)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_7F210458:
    ctx->pc = 0x7F210458u;
    // 7F210458: addi    r3, r31, 2664
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2664);

label_7F21045C:
    ctx->pc = 0x7F21045Cu;
    // 7F21045C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F210460:
    ctx->pc = 0x7F210460u;
    // 7F210460: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F210464u;
            ctx->pc = 0x7F1AD6F8u;
            return;
    }

label_7F210464:
    ctx->pc = 0x7F210464u;
    ctx->downcount -= 18;
    // 7F210464: stw     r3, 704(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(704);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210468:
    ctx->pc = 0x7F210468u;
    // 7F210468: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21046C:
    ctx->pc = 0x7F21046Cu;
    // 7F21046C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F210470:
    ctx->pc = 0x7F210470u;
    // 7F210470: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210474:
    ctx->pc = 0x7F210474u;
    // 7F210474: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210478:
    ctx->pc = 0x7F210478u;
    // 7F210478: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F21047C:
    ctx->pc = 0x7F21047Cu;
    // 7F21047C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F210480:
    ctx->pc = 0x7F210480u;
    ctx->downcount -= 21;
    // 7F210480: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F210484:
    ctx->pc = 0x7F210484u;
    // 7F210484: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210488:
    ctx->pc = 0x7F210488u;
    // 7F210488: li      r5, 2736
    ctx->gpr[5] = (u32)(s32)(2736);

label_7F21048C:
    ctx->pc = 0x7F21048Cu;
    // 7F21048C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210490:
    ctx->pc = 0x7F210490u;
    // 7F210490: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210494:
    ctx->pc = 0x7F210494u;
    // 7F210494: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F210498:
    ctx->pc = 0x7F210498u;
    // 7F210498: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21049C:
    ctx->pc = 0x7F21049Cu;
    // 7F21049C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2104A0:
    ctx->pc = 0x7F2104A0u;
    // 7F2104A0: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2104A4:
    ctx->pc = 0x7F2104A4u;
    // 7F2104A4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2104A8:
    ctx->pc = 0x7F2104A8u;
    // 7F2104A8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2104ACu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2104AC:
    ctx->pc = 0x7F2104ACu;
    ctx->downcount -= 2;
    // 7F2104AC: or.   r31, r3, r3
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

label_7F2104B0:
    ctx->pc = 0x7F2104B0u;
    // 7F2104B0: bc    12, 2, 0x7F2104F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2104F0;
        }
    }

label_7F2104B4:
    ctx->pc = 0x7F2104B4u;
    ctx->downcount -= 5;
    // 7F2104B4: lis     r4, 32545
    ctx->gpr[4] = ((u32)(s32)(32545) << 16);

label_7F2104B8:
    ctx->pc = 0x7F2104B8u;
    // 7F2104B8: lis     r5, 32545
    ctx->gpr[5] = ((u32)(s32)(32545) << 16);

label_7F2104BC:
    ctx->pc = 0x7F2104BCu;
    // 7F2104BC: addi    r4, r4, -1208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1208);

label_7F2104C0:
    ctx->pc = 0x7F2104C0u;
    // 7F2104C0: addi    r5, r5, 32
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(32);

label_7F2104C4:
    ctx->pc = 0x7F2104C4u;
    // 7F2104C4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2104C8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2104C8:
    ctx->pc = 0x7F2104C8u;
    ctx->downcount -= 4;
    // 7F2104C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2104CC:
    ctx->pc = 0x7F2104CCu;
    // 7F2104CC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2104D0:
    ctx->pc = 0x7F2104D0u;
    // 7F2104D0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2104D4:
    ctx->pc = 0x7F2104D4u;
    // 7F2104D4: bl      0x7F2102BC
    {
            ctx->lr = 0x7F2104D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2102BCu;
                return;
            }
            goto label_7F2102BC;
    }

label_7F2104D8:
    ctx->pc = 0x7F2104D8u;
    ctx->downcount -= 2;
    // 7F2104D8: cmpwi   r3, 0
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

label_7F2104DC:
    ctx->pc = 0x7F2104DCu;
    // 7F2104DC: bc    4, 0, 0x7F2104F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2104F0;
        }
    }

label_7F2104E0:
    ctx->pc = 0x7F2104E0u;
    ctx->downcount -= 2;
    // 7F2104E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2104E4:
    ctx->pc = 0x7F2104E4u;
    // 7F2104E4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2104E8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2104E8:
    ctx->pc = 0x7F2104E8u;
    ctx->downcount -= 2;
    // 7F2104E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2104EC:
    ctx->pc = 0x7F2104ECu;
    // 7F2104EC: b       0x7F2104F4
    {
            goto label_7F2104F4;
    }

label_7F2104F0:
    ctx->pc = 0x7F2104F0u;
    ctx->downcount -= 1;
    // 7F2104F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2104F4:
    ctx->pc = 0x7F2104F4u;
    ctx->downcount -= 16;
    // 7F2104F4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2104F8:
    ctx->pc = 0x7F2104F8u;
    // 7F2104F8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2104FC:
    ctx->pc = 0x7F2104FCu;
    // 7F2104FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210500:
    ctx->pc = 0x7F210500u;
    // 7F210500: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F210504:
    ctx->pc = 0x7F210504u;
    // 7F210504: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F210508:
    ctx->pc = 0x7F210508u;
    ctx->downcount -= 8;
    // 7F210508: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21050C:
    ctx->pc = 0x7F21050Cu;
    // 7F21050C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210510:
    ctx->pc = 0x7F210510u;
    // 7F210510: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210514:
    ctx->pc = 0x7F210514u;
    // 7F210514: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F210518:
    ctx->pc = 0x7F210518u;
    // 7F210518: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21051C:
    ctx->pc = 0x7F21051Cu;
    // 7F21051C: lwz     r3, 2200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210520:
    ctx->pc = 0x7F210520u;
    // 7F210520: cmpwi   r3, 0
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

label_7F210524:
    ctx->pc = 0x7F210524u;
    // 7F210524: bc    4, 2, 0x7F210648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210648;
        }
    }

label_7F210528:
    ctx->pc = 0x7F210528u;
    ctx->downcount -= 32;
    // 7F210528: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F21052C:
    ctx->pc = 0x7F21052Cu;
    // 7F21052C: stw     r0, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210530:
    ctx->pc = 0x7F210530u;
    // 7F210530: lwz     r3, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210534:
    ctx->pc = 0x7F210534u;
    // 7F210534: lwz     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210538:
    ctx->pc = 0x7F210538u;
    // 7F210538: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F21053C:
    ctx->pc = 0x7F21053Cu;
    // 7F21053C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210540:
    ctx->pc = 0x7F210540u;
    // 7F210540: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F210544:
    ctx->pc = 0x7F210544u;
    // 7F210544: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F210548:
    ctx->pc = 0x7F210548u;
    // 7F210548: lfs     f1, 888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210548u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21054C:
    ctx->pc = 0x7F21054Cu;
    // 7F21054C: lfs     f0, 888(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21054Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210550:
    ctx->pc = 0x7F210550u;
    // 7F210550: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210550u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F210554:
    ctx->pc = 0x7F210554u;
    // 7F210554: stfs     f0, 2168(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210554u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210558:
    ctx->pc = 0x7F210558u;
    // 7F210558: lwz     r3, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21055C:
    ctx->pc = 0x7F21055Cu;
    // 7F21055C: lwz     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210560:
    ctx->pc = 0x7F210560u;
    // 7F210560: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F210564:
    ctx->pc = 0x7F210564u;
    // 7F210564: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210568:
    ctx->pc = 0x7F210568u;
    // 7F210568: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21056C:
    ctx->pc = 0x7F21056Cu;
    // 7F21056C: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F210570:
    ctx->pc = 0x7F210570u;
    // 7F210570: lfs     f1, 892(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210570u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210574:
    ctx->pc = 0x7F210574u;
    // 7F210574: lfs     f0, 892(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F210574u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210578:
    ctx->pc = 0x7F210578u;
    // 7F210578: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210578u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F21057C:
    ctx->pc = 0x7F21057Cu;
    // 7F21057C: stfs     f0, 2172(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21057Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2172);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210580:
    ctx->pc = 0x7F210580u;
    // 7F210580: lwz     r3, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210584:
    ctx->pc = 0x7F210584u;
    // 7F210584: lwz     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210588:
    ctx->pc = 0x7F210588u;
    // 7F210588: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F21058C:
    ctx->pc = 0x7F21058Cu;
    // 7F21058C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210590:
    ctx->pc = 0x7F210590u;
    // 7F210590: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F210594:
    ctx->pc = 0x7F210594u;
    // 7F210594: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F210598:
    ctx->pc = 0x7F210598u;
    // 7F210598: lfs     f1, 896(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210598u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21059C:
    ctx->pc = 0x7F21059Cu;
    // 7F21059C: lfs     f0, 896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21059Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2105A0:
    ctx->pc = 0x7F2105A0u;
    // 7F2105A0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2105A0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2105A4:
    ctx->pc = 0x7F2105A4u;
    // 7F2105A4: stfs     f0, 2176(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2105A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2105A8:
    ctx->pc = 0x7F2105A8u;
    ctx->downcount -= 9;
    // 7F2105A8: lwz     r0, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2105AC:
    ctx->pc = 0x7F2105ACu;
    // 7F2105AC: stw     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2105B0:
    ctx->pc = 0x7F2105B0u;
    // 7F2105B0: lwz     r3, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2105B4:
    // 7F2105B4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2105B8:
    ctx->pc = 0x7F2105B8u;
    // 7F2105B8: stw     r0, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2105BC:
    ctx->pc = 0x7F2105BCu;
    // 7F2105BC: lwz     r3, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2105C0:
    ctx->pc = 0x7F2105C0u;
    // 7F2105C0: lwz     r0, 2204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2105C4:
    // 7F2105C4: cmpw    r3, r0
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

label_7F2105C8:
    // 7F2105C8: bc    12, 0, 0x7F2105D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2105D4;
        }
    }

label_7F2105CC:
    ctx->downcount -= 2;
    // 7F2105CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2105D0:
    // 7F2105D0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2105D4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2105D4:
    ctx->pc = 0x7F2105D4u;
    ctx->downcount -= 6;
    // 7F2105D4: lwz     r4, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2105D8:
    // 7F2105D8: rlwinm r3, r4, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F2105DC:
    // 7F2105DC: addi    r0, r3, 2208
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2208);

label_7F2105E0:
    ctx->pc = 0x7F2105E0u;
    // 7F2105E0: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2105E4:
    // 7F2105E4: cmpwi   r0, 1
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

label_7F2105E8:
    // 7F2105E8: bc    12, 2, 0x7F2105A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2105A8u;
                return;
            }
            goto label_7F2105A8;
        }
    }

label_7F2105EC:
    ctx->pc = 0x7F2105ECu;
    ctx->downcount -= 22;
    // 7F2105EC: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F2105F0:
    ctx->pc = 0x7F2105F0u;
    // 7F2105F0: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F2105F4:
    ctx->pc = 0x7F2105F4u;
    // 7F2105F4: add   r5, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2105F8:
    ctx->pc = 0x7F2105F8u;
    // 7F2105F8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2105FC:
    ctx->pc = 0x7F2105FCu;
    // 7F2105FC: lfs     f0, 888(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2105FCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210600:
    ctx->pc = 0x7F210600u;
    // 7F210600: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210604:
    ctx->pc = 0x7F210604u;
    // 7F210604: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210608:
    ctx->pc = 0x7F210608u;
    // 7F210608: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F21060C:
    ctx->pc = 0x7F21060Cu;
    // 7F21060C: stfs     f0, 872(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21060Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210610:
    ctx->pc = 0x7F210610u;
    // 7F210610: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F210614:
    ctx->pc = 0x7F210614u;
    // 7F210614: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F210618:
    ctx->pc = 0x7F210618u;
    // 7F210618: lwz     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21061C:
    ctx->pc = 0x7F21061Cu;
    // 7F21061C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210620:
    ctx->pc = 0x7F210620u;
    // 7F210620: add   r10, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F210624:
    ctx->pc = 0x7F210624u;
    // 7F210624: lfs     f0, 892(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F210624u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210628:
    ctx->pc = 0x7F210628u;
    // 7F210628: stfs     f0, 876(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210628u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(876);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21062C:
    ctx->pc = 0x7F21062Cu;
    // 7F21062C: lwz     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210630:
    ctx->pc = 0x7F210630u;
    // 7F210630: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210634:
    ctx->pc = 0x7F210634u;
    // 7F210634: add   r10, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[10] = res;
    }

label_7F210638:
    ctx->pc = 0x7F210638u;
    // 7F210638: lfs     f0, 896(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F210638u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21063C:
    ctx->pc = 0x7F21063Cu;
    // 7F21063C: stfs     f0, 880(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21063Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(880);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210640:
    ctx->pc = 0x7F210640u;
    // 7F210640: bl      0x7F042C94
    {
            ctx->lr = 0x7F210644u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F210644:
    ctx->pc = 0x7F210644u;
    ctx->downcount -= 1;
    // 7F210644: b       0x7F2106B8
    {
            goto label_7F2106B8;
    }

label_7F210648:
    ctx->pc = 0x7F210648u;
    ctx->downcount -= 2;
    // 7F210648: cmpwi   r3, 1
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

label_7F21064C:
    ctx->pc = 0x7F21064Cu;
    // 7F21064C: bc    4, 2, 0x7F2106B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2106B8;
        }
    }

label_7F210650:
    ctx->pc = 0x7F210650u;
    ctx->downcount -= 10;
    // 7F210650: lwz     r3, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210654:
    ctx->pc = 0x7F210654u;
    // 7F210654: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F210658:
    ctx->pc = 0x7F210658u;
    // 7F210658: lwz     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21065C:
    ctx->pc = 0x7F21065Cu;
    // 7F21065C: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F210660:
    ctx->pc = 0x7F210660u;
    // 7F210660: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210664:
    ctx->pc = 0x7F210664u;
    // 7F210664: addi    r3, r3, 888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(888);

label_7F210668:
    ctx->pc = 0x7F210668u;
    // 7F210668: addi    r4, r4, 888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(888);

label_7F21066C:
    ctx->pc = 0x7F21066Cu;
    // 7F21066C: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F210670:
    ctx->pc = 0x7F210670u;
    // 7F210670: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F210674:
    ctx->pc = 0x7F210674u;
    // 7F210674: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F210678u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F210678:
    ctx->pc = 0x7F210678u;
    ctx->downcount -= 9;
    // 7F210678: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210678u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21067C:
    ctx->pc = 0x7F21067Cu;
    // 7F21067C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21067Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210680:
    ctx->pc = 0x7F210680u;
    // 7F210680: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210680u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F210684:
    ctx->pc = 0x7F210684u;
    // 7F210684: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210684u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F210688:
    ctx->pc = 0x7F210688u;
    // 7F210688: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210688u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F21068C:
    ctx->pc = 0x7F21068Cu;
    // 7F21068C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21068Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F210690:
    ctx->pc = 0x7F210690u;
    // 7F210690: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210694:
    ctx->pc = 0x7F210694u;
    // 7F210694: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F210698:
    ctx->pc = 0x7F210698u;
    // 7F210698: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F21069Cu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F21069C:
    ctx->pc = 0x7F21069Cu;
    ctx->downcount -= 7;
    // 7F21069C: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F2106A0:
    ctx->pc = 0x7F2106A0u;
    // 7F2106A0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2106A4:
    ctx->pc = 0x7F2106A4u;
    // 7F2106A4: sth     r0, 2186(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2186);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2106A8:
    ctx->pc = 0x7F2106A8u;
    // 7F2106A8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2106AC:
    ctx->pc = 0x7F2106ACu;
    // 7F2106AC: sth     r3, 2184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2184);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2106B0:
    ctx->pc = 0x7F2106B0u;
    // 7F2106B0: sth     r3, 2188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2188);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2106B4:
    ctx->pc = 0x7F2106B4u;
    // 7F2106B4: stw     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2106B8:
    ctx->pc = 0x7F2106B8u;
    ctx->downcount -= 6;
    // 7F2106B8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2106BC:
    ctx->pc = 0x7F2106BCu;
    // 7F2106BC: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2106C0:
    ctx->pc = 0x7F2106C0u;
    // 7F2106C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2106C4:
    ctx->pc = 0x7F2106C4u;
    // 7F2106C4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2106C8:
    ctx->pc = 0x7F2106C8u;
    // 7F2106C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2106CC:
    ctx->pc = 0x7F2106CCu;
    ctx->downcount -= 10;
    // 7F2106CC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2106D0:
    ctx->pc = 0x7F2106D0u;
    // 7F2106D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2106D4:
    ctx->pc = 0x7F2106D4u;
    // 7F2106D4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2106D8:
    ctx->pc = 0x7F2106D8u;
    // 7F2106D8: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2106D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2106DC:
    ctx->pc = 0x7F2106DCu;
    // 7F2106DC: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2106DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2106DCu);
        if (ctx->exception) return;
    }

label_7F2106E0:
    ctx->pc = 0x7F2106E0u;
    // 7F2106E0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2106E4:
    ctx->pc = 0x7F2106E4u;
    // 7F2106E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2106E8:
    ctx->pc = 0x7F2106E8u;
    // 7F2106E8: lwz     r3, 2200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2106EC:
    ctx->pc = 0x7F2106ECu;
    // 7F2106EC: cmpwi   r3, -1
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

label_7F2106F0:
    ctx->pc = 0x7F2106F0u;
    // 7F2106F0: bc    4, 2, 0x7F2107BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2107BC;
        }
    }

label_7F2106F4:
    ctx->pc = 0x7F2106F4u;
    ctx->downcount -= 25;
    // 7F2106F4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2106F8:
    ctx->pc = 0x7F2106F8u;
    // 7F2106F8: addi    r3, r31, 2168
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2168);

label_7F2106FC:
    ctx->pc = 0x7F2106FCu;
    // 7F2106FC: stw     r0, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210700:
    ctx->pc = 0x7F210700u;
    // 7F210700: lwz     r0, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210704:
    ctx->pc = 0x7F210704u;
    // 7F210704: lfs     f0, 872(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210704u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210708:
    ctx->pc = 0x7F210708u;
    // 7F210708: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21070C:
    ctx->pc = 0x7F21070Cu;
    // 7F21070C: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F210710:
    ctx->pc = 0x7F210710u;
    // 7F210710: lfs     f1, 888(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210710u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210714:
    ctx->pc = 0x7F210714u;
    // 7F210714: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210714u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F210718:
    ctx->pc = 0x7F210718u;
    // 7F210718: stfs     f0, 2168(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210718u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2168);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21071C:
    ctx->pc = 0x7F21071Cu;
    // 7F21071C: lwz     r0, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210720:
    ctx->pc = 0x7F210720u;
    // 7F210720: lfs     f0, 876(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210720u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210724:
    ctx->pc = 0x7F210724u;
    // 7F210724: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210728:
    ctx->pc = 0x7F210728u;
    // 7F210728: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21072C:
    ctx->pc = 0x7F21072Cu;
    // 7F21072C: lfs     f1, 892(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21072Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210730:
    ctx->pc = 0x7F210730u;
    // 7F210730: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210730u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F210734:
    ctx->pc = 0x7F210734u;
    // 7F210734: stfs     f0, 2172(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210734u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2172);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210738:
    ctx->pc = 0x7F210738u;
    // 7F210738: lwz     r0, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21073C:
    ctx->pc = 0x7F21073Cu;
    // 7F21073C: lfs     f0, 880(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21073Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210740:
    ctx->pc = 0x7F210740u;
    // 7F210740: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210744:
    ctx->pc = 0x7F210744u;
    // 7F210744: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F210748:
    ctx->pc = 0x7F210748u;
    // 7F210748: lfs     f1, 896(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210748u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21074C:
    ctx->pc = 0x7F21074Cu;
    // 7F21074C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21074Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F210750:
    ctx->pc = 0x7F210750u;
    // 7F210750: stfs     f0, 2176(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210750u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2176);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210754:
    ctx->pc = 0x7F210754u;
    // 7F210754: bl      0x7F3CC594
    {
            ctx->lr = 0x7F210758u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F210758:
    ctx->pc = 0x7F210758u;
    ctx->downcount -= 4;
    // 7F210758: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210758u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F21075C:
    ctx->pc = 0x7F21075Cu;
    // 7F21075C: addi    r3, r31, 2168
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2168);

label_7F210760:
    ctx->pc = 0x7F210760u;
    // 7F210760: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F210764:
    ctx->pc = 0x7F210764u;
    // 7F210764: bl      0x7F114F50
    {
            ctx->lr = 0x7F210768u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F210768:
    ctx->pc = 0x7F210768u;
    ctx->downcount -= 5;
    // 7F210768: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F21076C:
    ctx->pc = 0x7F21076Cu;
    // 7F21076C: addi    r3, r31, 2168
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2168);

label_7F210770:
    ctx->pc = 0x7F210770u;
    // 7F210770: lfs     f1, 15920(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210770u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(15920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210774:
    ctx->pc = 0x7F210774u;
    // 7F210774: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F210778:
    ctx->pc = 0x7F210778u;
    // 7F210778: bl      0x800261FC
    {
            ctx->lr = 0x7F21077Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F21077C:
    ctx->pc = 0x7F21077Cu;
    ctx->downcount -= 2;
    // 7F21077C: addi    r3, r31, 2168
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2168);

label_7F210780:
    ctx->pc = 0x7F210780u;
    // 7F210780: bl      0x7F3CC594
    {
            ctx->lr = 0x7F210784u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F210784:
    ctx->pc = 0x7F210784u;
    ctx->downcount -= 29;
    // 7F210784: fdivs   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210784u)) return;
    ppc_fdivs(ctx, 0, 31, 1);

label_7F210788:
    ctx->pc = 0x7F210788u;
    // 7F210788: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F21078C:
    ctx->pc = 0x7F21078Cu;
    // 7F21078C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210790:
    ctx->pc = 0x7F210790u;
    // 7F210790: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F210794:
    ctx->pc = 0x7F210794u;
    // 7F210794: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210798:
    ctx->pc = 0x7F210798u;
    // 7F210798: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F21079C:
    ctx->pc = 0x7F21079Cu;
    // 7F21079C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21079Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2107A0:
    ctx->pc = 0x7F2107A0u;
    // 7F2107A0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2107A4:
    ctx->pc = 0x7F2107A4u;
    // 7F2107A4: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F2107A8:
    ctx->pc = 0x7F2107A8u;
    // 7F2107A8: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2107A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2107AC:
    ctx->pc = 0x7F2107ACu;
    // 7F2107AC: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2107B0:
    ctx->pc = 0x7F2107B0u;
    // 7F2107B0: stw     r0, 2536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2107B4:
    ctx->pc = 0x7F2107B4u;
    // 7F2107B4: bl      0x7F042C94
    {
            ctx->lr = 0x7F2107B8u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F2107B8:
    ctx->pc = 0x7F2107B8u;
    ctx->downcount -= 1;
    // 7F2107B8: b       0x7F210840
    {
            goto label_7F210840;
    }

label_7F2107BC:
    ctx->pc = 0x7F2107BCu;
    ctx->downcount -= 51;
    // 7F2107BC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2107C0:
    ctx->pc = 0x7F2107C0u;
    // 7F2107C0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F2107C4:
    ctx->pc = 0x7F2107C4u;
    // 7F2107C4: stw     r0, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2107C8:
    ctx->pc = 0x7F2107C8u;
    // 7F2107C8: lwz     r4, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2107CC:
    ctx->pc = 0x7F2107CCu;
    // 7F2107CC: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2107D0:
    ctx->pc = 0x7F2107D0u;
    // 7F2107D0: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F2107D4:
    ctx->pc = 0x7F2107D4u;
    // 7F2107D4: subf.   r0, r0, r4
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

label_7F2107D8:
    ctx->pc = 0x7F2107D8u;
    // 7F2107D8: bc    4, 2, 0x7F2107EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2107EC;
        }
    }

label_7F2107DC:
    ctx->pc = 0x7F2107DCu;
    ctx->downcount -= 4;
    // 7F2107DC: addi    r4, r31, 872
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(872);

label_7F2107E0:
    ctx->pc = 0x7F2107E0u;
    // 7F2107E0: li      r3, 2094
    ctx->gpr[3] = (u32)(s32)(2094);

label_7F2107E4:
    ctx->pc = 0x7F2107E4u;
    // 7F2107E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2107E8:
    ctx->pc = 0x7F2107E8u;
    // 7F2107E8: bl      0x7F0117B8
    {
            ctx->lr = 0x7F2107ECu;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F2107EC:
    ctx->pc = 0x7F2107ECu;
    ctx->downcount -= 4;
    // 7F2107EC: lwz     r3, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2107F0:
    ctx->pc = 0x7F2107F0u;
    // 7F2107F0: lwz     r0, 2536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2536);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2107F4:
    ctx->pc = 0x7F2107F4u;
    // 7F2107F4: cmpw    r3, r0
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

label_7F2107F8:
    ctx->pc = 0x7F2107F8u;
    // 7F2107F8: bc    12, 0, 0x7F210810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210810;
        }
    }

label_7F2107FC:
    ctx->pc = 0x7F2107FCu;
    ctx->downcount -= 5;
    // 7F2107FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F210800:
    ctx->pc = 0x7F210800u;
    // 7F210800: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F210804:
    ctx->pc = 0x7F210804u;
    // 7F210804: stw     r3, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210808:
    ctx->pc = 0x7F210808u;
    // 7F210808: stw     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21080C:
    ctx->pc = 0x7F21080Cu;
    // 7F21080C: b       0x7F210840
    {
            goto label_7F210840;
    }

label_7F210810:
    ctx->pc = 0x7F210810u;
    ctx->downcount -= 12;
    // 7F210810: lfs     f1, 872(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210810u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210814:
    ctx->pc = 0x7F210814u;
    // 7F210814: lfs     f0, 2168(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210814u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210818:
    ctx->pc = 0x7F210818u;
    // 7F210818: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210818u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F21081C:
    ctx->pc = 0x7F21081Cu;
    // 7F21081C: stfs     f0, 872(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21081Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210820:
    ctx->pc = 0x7F210820u;
    // 7F210820: lfs     f1, 876(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210820u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210824:
    ctx->pc = 0x7F210824u;
    // 7F210824: lfs     f0, 2172(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210824u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210828:
    ctx->pc = 0x7F210828u;
    // 7F210828: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210828u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F21082C:
    ctx->pc = 0x7F21082Cu;
    // 7F21082C: stfs     f0, 876(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21082Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(876);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210830:
    ctx->pc = 0x7F210830u;
    // 7F210830: lfs     f1, 880(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210830u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210834:
    ctx->pc = 0x7F210834u;
    // 7F210834: lfs     f0, 2176(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210834u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210838:
    ctx->pc = 0x7F210838u;
    // 7F210838: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210838u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F21083C:
    ctx->pc = 0x7F21083Cu;
    // 7F21083C: stfs     f0, 880(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21083Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(880);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210840:
    ctx->pc = 0x7F210840u;
    ctx->downcount -= 8;
    // 7F210840: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F210840u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F210840u);
        if (ctx->exception) return;
    }

label_7F210844:
    ctx->pc = 0x7F210844u;
    // 7F210844: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210848:
    ctx->pc = 0x7F210848u;
    // 7F210848: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210848u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F21084C:
    ctx->pc = 0x7F21084Cu;
    // 7F21084C: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F210850:
    ctx->pc = 0x7F210850u;
    // 7F210850: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210854:
    ctx->pc = 0x7F210854u;
    // 7F210854: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F210858:
    ctx->pc = 0x7F210858u;
    // 7F210858: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21085C:
    ctx->pc = 0x7F21085Cu;
    ctx->downcount -= 11;
    // 7F21085C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F210860:
    ctx->pc = 0x7F210860u;
    // 7F210860: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210864:
    ctx->pc = 0x7F210864u;
    // 7F210864: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210868:
    ctx->pc = 0x7F210868u;
    // 7F210868: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21086C:
    ctx->pc = 0x7F21086Cu;
    // 7F21086C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F210870:
    ctx->pc = 0x7F210870u;
    // 7F210870: lwz     r3, 2200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210874:
    ctx->pc = 0x7F210874u;
    // 7F210874: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F210878:
    ctx->pc = 0x7F210878u;
    // 7F210878: stw     r0, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21087C:
    ctx->pc = 0x7F21087Cu;
    // 7F21087C: lwz     r0, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210880:
    ctx->pc = 0x7F210880u;
    // 7F210880: cmpwi   r0, 0
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

label_7F210884:
    ctx->pc = 0x7F210884u;
    // 7F210884: bc    4, 0, 0x7F2108F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2108F8;
        }
    }

label_7F210888:
    ctx->pc = 0x7F210888u;
    ctx->downcount -= 14;
    // 7F210888: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21088C:
    ctx->pc = 0x7F21088Cu;
    // 7F21088C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F210890:
    ctx->pc = 0x7F210890u;
    // 7F210890: stw     r3, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210894:
    ctx->pc = 0x7F210894u;
    // 7F210894: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F210898:
    ctx->pc = 0x7F210898u;
    // 7F210898: stw     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21089C:
    ctx->pc = 0x7F21089Cu;
    // 7F21089C: lwz     r3, 2532(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2108A0:
    ctx->pc = 0x7F2108A0u;
    // 7F2108A0: lwz     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2108A4:
    ctx->pc = 0x7F2108A4u;
    // 7F2108A4: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F2108A8:
    ctx->pc = 0x7F2108A8u;
    // 7F2108A8: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2108AC:
    ctx->pc = 0x7F2108ACu;
    // 7F2108AC: addi    r3, r3, 888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(888);

label_7F2108B0:
    ctx->pc = 0x7F2108B0u;
    // 7F2108B0: addi    r4, r4, 888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(888);

label_7F2108B4:
    ctx->pc = 0x7F2108B4u;
    // 7F2108B4: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2108B8:
    ctx->pc = 0x7F2108B8u;
    // 7F2108B8: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2108BC:
    ctx->pc = 0x7F2108BCu;
    // 7F2108BC: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F2108C0u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F2108C0:
    ctx->pc = 0x7F2108C0u;
    ctx->downcount -= 9;
    // 7F2108C0: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2108C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2108C4:
    ctx->pc = 0x7F2108C4u;
    // 7F2108C4: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2108C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2108C8:
    ctx->pc = 0x7F2108C8u;
    // 7F2108C8: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2108C8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2108CC:
    ctx->pc = 0x7F2108CCu;
    // 7F2108CC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2108CCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2108D0:
    ctx->pc = 0x7F2108D0u;
    // 7F2108D0: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2108D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2108D4:
    ctx->pc = 0x7F2108D4u;
    // 7F2108D4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2108D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2108D8:
    ctx->pc = 0x7F2108D8u;
    // 7F2108D8: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2108DC:
    ctx->pc = 0x7F2108DCu;
    // 7F2108DC: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2108E0:
    ctx->pc = 0x7F2108E0u;
    // 7F2108E0: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F2108E4u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F2108E4:
    ctx->pc = 0x7F2108E4u;
    ctx->downcount -= 5;
    // 7F2108E4: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F2108E8:
    ctx->pc = 0x7F2108E8u;
    // 7F2108E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2108EC:
    ctx->pc = 0x7F2108ECu;
    // 7F2108EC: sth     r3, 2186(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2186);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2108F0:
    ctx->pc = 0x7F2108F0u;
    // 7F2108F0: sth     r0, 2184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2184);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2108F4:
    ctx->pc = 0x7F2108F4u;
    // 7F2108F4: sth     r0, 2188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2188);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2108F8:
    ctx->pc = 0x7F2108F8u;
    ctx->downcount -= 6;
    // 7F2108F8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2108FC:
    ctx->pc = 0x7F2108FCu;
    // 7F2108FC: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F210900:
    ctx->pc = 0x7F210900u;
    // 7F210900: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210904:
    ctx->pc = 0x7F210904u;
    // 7F210904: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F210908:
    ctx->pc = 0x7F210908u;
    // 7F210908: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21090C:
    ctx->pc = 0x7F21090Cu;
    ctx->downcount -= 9;
    // 7F21090C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F210910:
    ctx->pc = 0x7F210910u;
    // 7F210910: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210914:
    ctx->pc = 0x7F210914u;
    // 7F210914: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F210918:
    ctx->pc = 0x7F210918u;
    // 7F210918: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21091C:
    ctx->pc = 0x7F21091Cu;
    // 7F21091C: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F210920:
    ctx->pc = 0x7F210920u;
    // 7F210920: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F210924:
    ctx->pc = 0x7F210924u;
    // 7F210924: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F210928:
    ctx->pc = 0x7F210928u;
    // 7F210928: addi    r3, r31, 872
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(872);

label_7F21092C:
    ctx->pc = 0x7F21092Cu;
    // 7F21092C: bl      0x7F3CC608
    {
            ctx->lr = 0x7F210930u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F210930:
    ctx->pc = 0x7F210930u;
    ctx->downcount -= 4;
    // 7F210930: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F210934:
    ctx->pc = 0x7F210934u;
    // 7F210934: lfs     f0, 15924(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F210934u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15924);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210938:
    ctx->pc = 0x7F210938u;
    // 7F210938: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210938u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F21093C:
    ctx->pc = 0x7F21093Cu;
    // 7F21093C: bc    4, 1, 0x7F2109C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2109C8;
        }
    }

label_7F210940:
    ctx->pc = 0x7F210940u;
    ctx->downcount -= 4;
    // 7F210940: addi    r4, r31, 872
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(872);

label_7F210944:
    ctx->pc = 0x7F210944u;
    // 7F210944: li      r3, 1893
    ctx->gpr[3] = (u32)(s32)(1893);

label_7F210948:
    ctx->pc = 0x7F210948u;
    // 7F210948: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21094C:
    ctx->pc = 0x7F21094Cu;
    // 7F21094C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F210950u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F210950:
    ctx->pc = 0x7F210950u;
    ctx->downcount -= 3;
    // 7F210950: addi    r3, r31, 808
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(808);

label_7F210954:
    ctx->pc = 0x7F210954u;
    // 7F210954: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F210958:
    ctx->pc = 0x7F210958u;
    // 7F210958: bl      0x7F21994C
    {
            ctx->lr = 0x7F21095Cu;
            ctx->pc = 0x7F21994Cu;
            return;
    }

label_7F21095C:
    ctx->pc = 0x7F21095Cu;
    ctx->downcount -= 13;
    // 7F21095C: stw     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210960:
    ctx->pc = 0x7F210960u;
    // 7F210960: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F210964:
    ctx->pc = 0x7F210964u;
    // 7F210964: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F210968:
    ctx->pc = 0x7F210968u;
    // 7F210968: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F21096C:
    ctx->pc = 0x7F21096Cu;
    // 7F21096C: stw     r4, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F210970:
    ctx->pc = 0x7F210970u;
    // 7F210970: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F210974:
    ctx->pc = 0x7F210974u;
    // 7F210974: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F210978:
    ctx->pc = 0x7F210978u;
    // 7F210978: stw     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21097C:
    ctx->pc = 0x7F21097Cu;
    // 7F21097C: lwz     r0, 2528(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210980:
    ctx->pc = 0x7F210980u;
    // 7F210980: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F210984:
    ctx->pc = 0x7F210984u;
    // 7F210984: addi    r4, r4, 888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(888);

label_7F210988:
    ctx->pc = 0x7F210988u;
    // 7F210988: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21098C:
    ctx->pc = 0x7F21098Cu;
    // 7F21098C: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F210990u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F210990:
    ctx->pc = 0x7F210990u;
    ctx->downcount -= 9;
    // 7F210990: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210994:
    ctx->pc = 0x7F210994u;
    // 7F210994: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210998:
    ctx->pc = 0x7F210998u;
    // 7F210998: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210998u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F21099C:
    ctx->pc = 0x7F21099Cu;
    // 7F21099C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21099Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2109A0:
    ctx->pc = 0x7F2109A0u;
    // 7F2109A0: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2109A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2109A4:
    ctx->pc = 0x7F2109A4u;
    // 7F2109A4: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2109A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2109A8:
    ctx->pc = 0x7F2109A8u;
    // 7F2109A8: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2109AC:
    ctx->pc = 0x7F2109ACu;
    // 7F2109AC: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2109B0:
    ctx->pc = 0x7F2109B0u;
    // 7F2109B0: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F2109B4u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F2109B4:
    ctx->pc = 0x7F2109B4u;
    ctx->downcount -= 5;
    // 7F2109B4: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F2109B8:
    ctx->pc = 0x7F2109B8u;
    // 7F2109B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2109BC:
    ctx->pc = 0x7F2109BCu;
    // 7F2109BC: sth     r3, 2186(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2186);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2109C0:
    ctx->pc = 0x7F2109C0u;
    // 7F2109C0: sth     r0, 2184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2184);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2109C4:
    ctx->pc = 0x7F2109C4u;
    // 7F2109C4: sth     r0, 2188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2188);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2109C8:
    ctx->pc = 0x7F2109C8u;
    ctx->downcount -= 6;
    // 7F2109C8: lwz     r3, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2109CC:
    ctx->pc = 0x7F2109CCu;
    // 7F2109CC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2109D0:
    ctx->pc = 0x7F2109D0u;
    // 7F2109D0: stw     r0, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2109D4:
    ctx->pc = 0x7F2109D4u;
    // 7F2109D4: lwz     r0, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2109D8:
    ctx->pc = 0x7F2109D8u;
    // 7F2109D8: cmpwi   r0, 0
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

label_7F2109DC:
    ctx->pc = 0x7F2109DCu;
    // 7F2109DC: bc    4, 0, 0x7F210A00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210A00;
        }
    }

label_7F2109E0:
    ctx->pc = 0x7F2109E0u;
    ctx->downcount -= 4;
    // 7F2109E0: addi    r4, r31, 872
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(872);

label_7F2109E4:
    ctx->pc = 0x7F2109E4u;
    // 7F2109E4: li      r3, 1830
    ctx->gpr[3] = (u32)(s32)(1830);

label_7F2109E8:
    ctx->pc = 0x7F2109E8u;
    // 7F2109E8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2109EC:
    ctx->pc = 0x7F2109ECu;
    // 7F2109EC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F2109F0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F2109F0:
    ctx->pc = 0x7F2109F0u;
    ctx->downcount -= 2;
    // 7F2109F0: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F2109F4:
    ctx->pc = 0x7F2109F4u;
    // 7F2109F4: bl      0x7F02A538
    {
            ctx->lr = 0x7F2109F8u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F2109F8:
    ctx->pc = 0x7F2109F8u;
    ctx->downcount -= 2;
    // 7F2109F8: addi    r0, r3, 256
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(256);

label_7F2109FC:
    ctx->pc = 0x7F2109FCu;
    // 7F2109FC: stw     r0, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210A00:
    ctx->pc = 0x7F210A00u;
    ctx->downcount -= 6;
    // 7F210A00: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210A04:
    ctx->pc = 0x7F210A04u;
    // 7F210A04: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F210A08:
    ctx->pc = 0x7F210A08u;
    // 7F210A08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210A0C:
    ctx->pc = 0x7F210A0Cu;
    // 7F210A0C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F210A10:
    ctx->pc = 0x7F210A10u;
    // 7F210A10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F210A14:
    ctx->pc = 0x7F210A14u;
    ctx->downcount -= 11;
    // 7F210A14: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F210A18:
    ctx->pc = 0x7F210A18u;
    // 7F210A18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210A1C:
    ctx->pc = 0x7F210A1Cu;
    // 7F210A1C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210A20:
    ctx->pc = 0x7F210A20u;
    // 7F210A20: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F210A24:
    ctx->pc = 0x7F210A24u;
    // 7F210A24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F210A28:
    ctx->pc = 0x7F210A28u;
    // 7F210A28: lwz     r3, 2540(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2540);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210A2C:
    ctx->pc = 0x7F210A2Cu;
    // 7F210A2C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F210A30:
    ctx->pc = 0x7F210A30u;
    // 7F210A30: stw     r0, 2540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210A34:
    ctx->pc = 0x7F210A34u;
    // 7F210A34: lwz     r0, 2540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2540);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210A38:
    ctx->pc = 0x7F210A38u;
    // 7F210A38: cmpwi   r0, 0
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

label_7F210A3C:
    ctx->pc = 0x7F210A3Cu;
    // 7F210A3C: bc    4, 0, 0x7F210AD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210AD4;
        }
    }

label_7F210A40:
    ctx->pc = 0x7F210A40u;
    ctx->downcount -= 2;
    // 7F210A40: lwz     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210A44:
    ctx->pc = 0x7F210A44u;
    // 7F210A44: bl      0x7F3C8210
    {
            ctx->lr = 0x7F210A48u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F210A48:
    ctx->pc = 0x7F210A48u;
    ctx->downcount -= 7;
    // 7F210A48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F210A4C:
    ctx->pc = 0x7F210A4Cu;
    // 7F210A4C: stw     r0, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210A50:
    ctx->pc = 0x7F210A50u;
    // 7F210A50: lwz     r0, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210A54:
    ctx->pc = 0x7F210A54u;
    // 7F210A54: stw     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210A58:
    ctx->pc = 0x7F210A58u;
    // 7F210A58: lwz     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210A5C:
    ctx->pc = 0x7F210A5Cu;
    // 7F210A5C: cmpwi   r0, 6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F210A60:
    ctx->pc = 0x7F210A60u;
    // 7F210A60: bc    12, 2, 0x7F210A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210A8C;
        }
    }

label_7F210A64:
    ctx->pc = 0x7F210A64u;
    ctx->downcount -= 1;
    // 7F210A64: bc    4, 0, 0x7F210A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210A80;
        }
    }

label_7F210A68:
    ctx->pc = 0x7F210A68u;
    ctx->downcount -= 2;
    // 7F210A68: cmpwi   r0, 1
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

label_7F210A6C:
    ctx->pc = 0x7F210A6Cu;
    // 7F210A6C: bc    12, 2, 0x7F210AB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210AB0;
        }
    }

label_7F210A70:
    ctx->pc = 0x7F210A70u;
    ctx->downcount -= 1;
    // 7F210A70: bc    12, 0, 0x7F210B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210B90;
        }
    }

label_7F210A74:
    ctx->pc = 0x7F210A74u;
    ctx->downcount -= 2;
    // 7F210A74: cmpwi   r0, 5
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

label_7F210A78:
    ctx->pc = 0x7F210A78u;
    // 7F210A78: bc    4, 0, 0x7F210B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210B90;
        }
    }

label_7F210A7C:
    ctx->pc = 0x7F210A7Cu;
    ctx->downcount -= 1;
    // 7F210A7C: b       0x7F210A8C
    {
            goto label_7F210A8C;
    }

label_7F210A80:
    ctx->pc = 0x7F210A80u;
    ctx->downcount -= 2;
    // 7F210A80: cmpwi   r0, 8
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

label_7F210A84:
    ctx->pc = 0x7F210A84u;
    // 7F210A84: bc    12, 2, 0x7F210A8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210A8C;
        }
    }

label_7F210A88:
    ctx->pc = 0x7F210A88u;
    ctx->downcount -= 1;
    // 7F210A88: b       0x7F210B90
    {
            goto label_7F210B90;
    }

label_7F210A8C:
    ctx->pc = 0x7F210A8Cu;
    ctx->downcount -= 8;
    // 7F210A8C: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210A90:
    ctx->pc = 0x7F210A90u;
    // 7F210A90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210A94:
    ctx->pc = 0x7F210A94u;
    // 7F210A94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210A98:
    ctx->pc = 0x7F210A98u;
    // 7F210A98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210A9C:
    ctx->pc = 0x7F210A9Cu;
    // 7F210A9C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F210AA0:
    ctx->pc = 0x7F210AA0u;
    // 7F210AA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F210AA4:
    ctx->pc = 0x7F210AA4u;
    // 7F210AA4: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F210AA8:
    ctx->pc = 0x7F210AA8u;
    // 7F210AA8: bl      0x7F042C94
    {
            ctx->lr = 0x7F210AACu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F210AAC:
    ctx->pc = 0x7F210AACu;
    ctx->downcount -= 1;
    // 7F210AAC: b       0x7F210B90
    {
            goto label_7F210B90;
    }

label_7F210AB0:
    ctx->pc = 0x7F210AB0u;
    ctx->downcount -= 8;
    // 7F210AB0: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210AB4:
    ctx->pc = 0x7F210AB4u;
    // 7F210AB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210AB8:
    ctx->pc = 0x7F210AB8u;
    // 7F210AB8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F210ABC:
    ctx->pc = 0x7F210ABCu;
    // 7F210ABC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210AC0:
    ctx->pc = 0x7F210AC0u;
    // 7F210AC0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F210AC4:
    ctx->pc = 0x7F210AC4u;
    // 7F210AC4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F210AC8:
    ctx->pc = 0x7F210AC8u;
    // 7F210AC8: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F210ACC:
    ctx->pc = 0x7F210ACCu;
    // 7F210ACC: bl      0x7F042C94
    {
            ctx->lr = 0x7F210AD0u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F210AD0:
    ctx->pc = 0x7F210AD0u;
    ctx->downcount -= 1;
    // 7F210AD0: b       0x7F210B90
    {
            goto label_7F210B90;
    }

label_7F210AD4:
    ctx->pc = 0x7F210AD4u;
    ctx->downcount -= 4;
    // 7F210AD4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F210AD8:
    ctx->pc = 0x7F210AD8u;
    // 7F210AD8: addi    r3, r31, 872
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(872);

label_7F210ADC:
    ctx->pc = 0x7F210ADCu;
    // 7F210ADC: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F210AE0:
    ctx->pc = 0x7F210AE0u;
    // 7F210AE0: bl      0x7F3CC608
    {
            ctx->lr = 0x7F210AE4u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F210AE4:
    ctx->pc = 0x7F210AE4u;
    ctx->downcount -= 4;
    // 7F210AE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F210AE8:
    ctx->pc = 0x7F210AE8u;
    // 7F210AE8: lfs     f0, 15928(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F210AE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15928);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210AEC:
    ctx->pc = 0x7F210AECu;
    // 7F210AEC: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210AECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F210AF0:
    ctx->pc = 0x7F210AF0u;
    // 7F210AF0: bc    4, 1, 0x7F210B90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210B90;
        }
    }

label_7F210AF4:
    ctx->pc = 0x7F210AF4u;
    ctx->downcount -= 2;
    // 7F210AF4: lwz     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210AF8:
    ctx->pc = 0x7F210AF8u;
    // 7F210AF8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F210AFCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F210AFC:
    ctx->pc = 0x7F210AFCu;
    ctx->downcount -= 5;
    // 7F210AFC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F210B00:
    ctx->pc = 0x7F210B00u;
    // 7F210B00: addi    r3, r31, 808
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(808);

label_7F210B04:
    ctx->pc = 0x7F210B04u;
    // 7F210B04: stw     r0, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210B08:
    ctx->pc = 0x7F210B08u;
    // 7F210B08: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F210B0C:
    ctx->pc = 0x7F210B0Cu;
    // 7F210B0C: bl      0x7F21994C
    {
            ctx->lr = 0x7F210B10u;
            ctx->pc = 0x7F21994Cu;
            return;
    }

label_7F210B10:
    ctx->pc = 0x7F210B10u;
    ctx->downcount -= 10;
    // 7F210B10: stw     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210B14:
    ctx->pc = 0x7F210B14u;
    // 7F210B14: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F210B18:
    ctx->pc = 0x7F210B18u;
    // 7F210B18: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F210B1C:
    ctx->pc = 0x7F210B1Cu;
    // 7F210B1C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F210B20:
    ctx->pc = 0x7F210B20u;
    // 7F210B20: stw     r4, 2200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F210B24:
    ctx->pc = 0x7F210B24u;
    // 7F210B24: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F210B28:
    ctx->pc = 0x7F210B28u;
    // 7F210B28: addi    r4, r31, 872
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(872);

label_7F210B2C:
    ctx->pc = 0x7F210B2Cu;
    // 7F210B2C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F210B30:
    ctx->pc = 0x7F210B30u;
    // 7F210B30: stw     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210B34:
    ctx->pc = 0x7F210B34u;
    // 7F210B34: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F210B38u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F210B38:
    ctx->pc = 0x7F210B38u;
    ctx->downcount -= 9;
    // 7F210B38: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210B38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210B3C:
    ctx->pc = 0x7F210B3Cu;
    // 7F210B3C: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210B3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210B40:
    ctx->pc = 0x7F210B40u;
    // 7F210B40: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F210B40u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F210B44:
    ctx->pc = 0x7F210B44u;
    // 7F210B44: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210B44u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F210B48:
    ctx->pc = 0x7F210B48u;
    // 7F210B48: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210B48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F210B4C:
    ctx->pc = 0x7F210B4Cu;
    // 7F210B4C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210B4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F210B50:
    ctx->pc = 0x7F210B50u;
    // 7F210B50: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210B54:
    ctx->pc = 0x7F210B54u;
    // 7F210B54: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F210B58:
    ctx->pc = 0x7F210B58u;
    // 7F210B58: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F210B5Cu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F210B5C:
    ctx->pc = 0x7F210B5Cu;
    ctx->downcount -= 13;
    // 7F210B5C: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F210B60:
    ctx->pc = 0x7F210B60u;
    // 7F210B60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F210B64:
    ctx->pc = 0x7F210B64u;
    // 7F210B64: sth     r3, 2186(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2186);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F210B68:
    ctx->pc = 0x7F210B68u;
    // 7F210B68: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210B6C:
    ctx->pc = 0x7F210B6Cu;
    // 7F210B6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210B70:
    ctx->pc = 0x7F210B70u;
    // 7F210B70: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F210B74:
    ctx->pc = 0x7F210B74u;
    // 7F210B74: sth     r0, 2184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2184);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F210B78:
    ctx->pc = 0x7F210B78u;
    // 7F210B78: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210B7C:
    ctx->pc = 0x7F210B7Cu;
    // 7F210B7C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F210B80:
    ctx->pc = 0x7F210B80u;
    // 7F210B80: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F210B84:
    ctx->pc = 0x7F210B84u;
    // 7F210B84: sth     r0, 2188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2188);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F210B88:
    ctx->pc = 0x7F210B88u;
    // 7F210B88: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F210B8C:
    ctx->pc = 0x7F210B8Cu;
    // 7F210B8C: bl      0x7F042C94
    {
            ctx->lr = 0x7F210B90u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F210B90:
    ctx->pc = 0x7F210B90u;
    ctx->downcount -= 6;
    // 7F210B90: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210B94:
    ctx->pc = 0x7F210B94u;
    // 7F210B94: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F210B98:
    ctx->pc = 0x7F210B98u;
    // 7F210B98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210B9C:
    ctx->pc = 0x7F210B9Cu;
    // 7F210B9C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F210BA0:
    ctx->pc = 0x7F210BA0u;
    // 7F210BA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F210BA4:
    ctx->pc = 0x7F210BA4u;
    ctx->downcount -= 6;
    // 7F210BA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F210BA8:
    ctx->pc = 0x7F210BA8u;
    // 7F210BA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210BAC:
    ctx->pc = 0x7F210BACu;
    // 7F210BAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210BB0:
    ctx->pc = 0x7F210BB0u;
    // 7F210BB0: lwz     r0, 2192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210BB4:
    ctx->pc = 0x7F210BB4u;
    // 7F210BB4: cmplwi  r0, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F210BB8:
    ctx->pc = 0x7F210BB8u;
    // 7F210BB8: bc    12, 1, 0x7F210BF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210BF8;
        }
    }

label_7F210BBC:
    ctx->pc = 0x7F210BBCu;
    ctx->downcount -= 7;
    // 7F210BBC: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F210BC0:
    ctx->pc = 0x7F210BC0u;
    // 7F210BC0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F210BC4:
    ctx->pc = 0x7F210BC4u;
    // 7F210BC4: addi    r4, r4, -2344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2344);

label_7F210BC8:
    ctx->pc = 0x7F210BC8u;
    // 7F210BC8: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210BCC:
    ctx->pc = 0x7F210BCCu;
    // 7F210BCC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F210BD0:
    ctx->pc = 0x7F210BD0u;
    // 7F210BD0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F210BD4:
    ctx->pc = 0x7F210BD4u;
    ctx->downcount -= 1;
    // 7F210BD4: bl      0x7F21090C
    {
            ctx->lr = 0x7F210BD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21090Cu;
                return;
            }
            goto label_7F21090C;
    }

label_7F210BD8:
    ctx->pc = 0x7F210BD8u;
    ctx->downcount -= 1;
    // 7F210BD8: b       0x7F210BF8
    {
            goto label_7F210BF8;
    }

label_7F210BDC:
    ctx->pc = 0x7F210BDCu;
    ctx->downcount -= 1;
    // 7F210BDC: bl      0x7F21085C
    {
            ctx->lr = 0x7F210BE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21085Cu;
                return;
            }
            goto label_7F21085C;
    }

label_7F210BE0:
    ctx->pc = 0x7F210BE0u;
    ctx->downcount -= 1;
    // 7F210BE0: b       0x7F210BF8
    {
            goto label_7F210BF8;
    }

label_7F210BE4:
    ctx->pc = 0x7F210BE4u;
    ctx->downcount -= 1;
    // 7F210BE4: bl      0x7F2106CC
    {
            ctx->lr = 0x7F210BE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2106CCu;
                return;
            }
            goto label_7F2106CC;
    }

label_7F210BE8:
    ctx->pc = 0x7F210BE8u;
    ctx->downcount -= 1;
    // 7F210BE8: b       0x7F210BF8
    {
            goto label_7F210BF8;
    }

label_7F210BEC:
    ctx->pc = 0x7F210BECu;
    ctx->downcount -= 1;
    // 7F210BEC: bl      0x7F210508
    {
            ctx->lr = 0x7F210BF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F210508u;
                return;
            }
            goto label_7F210508;
    }

label_7F210BF0:
    ctx->pc = 0x7F210BF0u;
    ctx->downcount -= 1;
    // 7F210BF0: b       0x7F210BF8
    {
            goto label_7F210BF8;
    }

label_7F210BF4:
    ctx->pc = 0x7F210BF4u;
    ctx->downcount -= 1;
    // 7F210BF4: bl      0x7F210A14
    {
            ctx->lr = 0x7F210BF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F210A14u;
                return;
            }
            goto label_7F210A14;
    }

label_7F210BF8:
    ctx->pc = 0x7F210BF8u;
    ctx->downcount -= 5;
    // 7F210BF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210BFC:
    ctx->pc = 0x7F210BFCu;
    // 7F210BFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210C00:
    ctx->pc = 0x7F210C00u;
    // 7F210C00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F210C04:
    ctx->pc = 0x7F210C04u;
    // 7F210C04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F210C08:
    ctx->pc = 0x7F210C08u;
    ctx->downcount -= 31;
    // 7F210C08: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F210C0C:
    ctx->pc = 0x7F210C0Cu;
    // 7F210C0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210C10:
    ctx->pc = 0x7F210C10u;
    // 7F210C10: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F210C14:
    ctx->pc = 0x7F210C14u;
    // 7F210C14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210C18:
    ctx->pc = 0x7F210C18u;
    // 7F210C18: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210C1C:
    ctx->pc = 0x7F210C1Cu;
    // 7F210C1C: addi    r6, r4, 15932
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(15932);

label_7F210C20:
    ctx->pc = 0x7F210C20u;
    // 7F210C20: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F210C24:
    ctx->pc = 0x7F210C24u;
    // 7F210C24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F210C28:
    ctx->pc = 0x7F210C28u;
    // 7F210C28: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F210C2C:
    ctx->pc = 0x7F210C2Cu;
    // 7F210C2C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F210C30:
    ctx->pc = 0x7F210C30u;
    // 7F210C30: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210C34:
    ctx->pc = 0x7F210C34u;
    // 7F210C34: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F210C38:
    ctx->pc = 0x7F210C38u;
    // 7F210C38: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210C3C:
    ctx->pc = 0x7F210C3Cu;
    // 7F210C3C: lwz     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210C40:
    ctx->pc = 0x7F210C40u;
    // 7F210C40: lwz     r4, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F210C44:
    ctx->pc = 0x7F210C44u;
    // 7F210C44: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F210C48:
    ctx->pc = 0x7F210C48u;
    // 7F210C48: and   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F210C4C:
    ctx->pc = 0x7F210C4Cu;
    // 7F210C4C: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F210C50:
    ctx->pc = 0x7F210C50u;
    // 7F210C50: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F210C54:
    ctx->pc = 0x7F210C54u;
    // 7F210C54: or.   r0, r3, r0
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

label_7F210C58:
    ctx->pc = 0x7F210C58u;
    // 7F210C58: bc    12, 2, 0x7F210E5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210E5C;
        }
    }

label_7F210C5C:
    ctx->pc = 0x7F210C5Cu;
    ctx->downcount -= 11;
    // 7F210C5C: stw     r5, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F210C60:
    ctx->pc = 0x7F210C60u;
    // 7F210C60: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F210C64:
    ctx->pc = 0x7F210C64u;
    // 7F210C64: stw     r5, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F210C68:
    ctx->pc = 0x7F210C68u;
    // 7F210C68: lwz     r6, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F210C6C:
    ctx->pc = 0x7F210C6Cu;
    // 7F210C6C: lwz     r7, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F210C70:
    ctx->pc = 0x7F210C70u;
    // 7F210C70: and   r4, r6, r5
    {
        ctx->gpr[4] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F210C74:
    ctx->pc = 0x7F210C74u;
    // 7F210C74: and   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F210C78:
    ctx->pc = 0x7F210C78u;
    // 7F210C78: xor   r3, r0, r5
    {
        ctx->gpr[3] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F210C7C:
    ctx->pc = 0x7F210C7Cu;
    // 7F210C7C: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F210C80:
    ctx->pc = 0x7F210C80u;
    // 7F210C80: or.   r0, r3, r0
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

label_7F210C84:
    ctx->pc = 0x7F210C84u;
    // 7F210C84: bc    12, 2, 0x7F210D28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210D28;
        }
    }

label_7F210C88:
    ctx->pc = 0x7F210C88u;
    ctx->downcount -= 8;
    // 7F210C88: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210C8C:
    ctx->pc = 0x7F210C8Cu;
    // 7F210C8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210C90:
    ctx->pc = 0x7F210C90u;
    // 7F210C90: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210C94:
    ctx->pc = 0x7F210C94u;
    // 7F210C94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210C98:
    ctx->pc = 0x7F210C98u;
    // 7F210C98: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F210C9C:
    ctx->pc = 0x7F210C9Cu;
    // 7F210C9C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F210CA0:
    ctx->pc = 0x7F210CA0u;
    // 7F210CA0: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F210CA4:
    ctx->pc = 0x7F210CA4u;
    // 7F210CA4: bl      0x7F042C94
    {
            ctx->lr = 0x7F210CA8u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F210CA8:
    ctx->pc = 0x7F210CA8u;
    ctx->downcount -= 3;
    // 7F210CA8: lwz     r0, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210CAC:
    ctx->pc = 0x7F210CACu;
    // 7F210CAC: cmplwi  r0, 0x0000
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

label_7F210CB0:
    ctx->pc = 0x7F210CB0u;
    // 7F210CB0: bc    4, 2, 0x7F210CFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210CFC;
        }
    }

label_7F210CB4:
    ctx->pc = 0x7F210CB4u;
    ctx->downcount -= 8;
    // 7F210CB4: lwz     r3, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210CB8:
    ctx->pc = 0x7F210CB8u;
    // 7F210CB8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F210CBC:
    ctx->pc = 0x7F210CBCu;
    // 7F210CBC: addi    r4, r31, 808
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(808);

label_7F210CC0:
    ctx->pc = 0x7F210CC0u;
    // 7F210CC0: stw     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210CC4:
    ctx->pc = 0x7F210CC4u;
    // 7F210CC4: stw     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210CC8:
    ctx->pc = 0x7F210CC8u;
    // 7F210CC8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210CCC:
    ctx->pc = 0x7F210CCCu;
    // 7F210CCC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F210CD0:
    ctx->pc = 0x7F210CD0u;
    // 7F210CD0: bl      0x80025A3C
    {
            ctx->lr = 0x7F210CD4u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F210CD4:
    ctx->pc = 0x7F210CD4u;
    ctx->downcount -= 9;
    // 7F210CD4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F210CD8:
    ctx->pc = 0x7F210CD8u;
    // 7F210CD8: lfs     f1, 860(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210CD8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210CDC:
    ctx->pc = 0x7F210CDCu;
    // 7F210CDC: addi    r4, r3, 15940
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15940);

label_7F210CE0:
    ctx->pc = 0x7F210CE0u;
    // 7F210CE0: addi    r3, r31, 808
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(808);

label_7F210CE4:
    ctx->pc = 0x7F210CE4u;
    // 7F210CE4: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210CE4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210CE8:
    ctx->pc = 0x7F210CE8u;
    // 7F210CE8: addi    r4, r31, 240
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(240);

label_7F210CEC:
    ctx->pc = 0x7F210CECu;
    // 7F210CEC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210CECu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F210CF0:
    ctx->pc = 0x7F210CF0u;
    // 7F210CF0: stfs     f0, 860(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210CF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210CF4:
    ctx->pc = 0x7F210CF4u;
    // 7F210CF4: bl      0x7F228688
    {
            ctx->lr = 0x7F210CF8u;
            ctx->pc = 0x7F228688u;
            return;
    }

label_7F210CF8:
    ctx->pc = 0x7F210CF8u;
    ctx->downcount -= 1;
    // 7F210CF8: stw     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210CFC:
    ctx->pc = 0x7F210CFCu;
    ctx->downcount -= 8;
    // 7F210CFC: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210D00:
    ctx->pc = 0x7F210D00u;
    // 7F210D00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210D04:
    ctx->pc = 0x7F210D04u;
    // 7F210D04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210D08:
    ctx->pc = 0x7F210D08u;
    // 7F210D08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210D0C:
    ctx->pc = 0x7F210D0Cu;
    // 7F210D0C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F210D10:
    ctx->pc = 0x7F210D10u;
    // 7F210D10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F210D14:
    ctx->pc = 0x7F210D14u;
    // 7F210D14: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F210D18:
    ctx->pc = 0x7F210D18u;
    // 7F210D18: bl      0x7F042C94
    {
            ctx->lr = 0x7F210D1Cu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F210D1C:
    ctx->pc = 0x7F210D1Cu;
    ctx->downcount -= 3;
    // 7F210D1C: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F210D20:
    ctx->pc = 0x7F210D20u;
    // 7F210D20: stw     r0, 2540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210D24:
    ctx->pc = 0x7F210D24u;
    // 7F210D24: b       0x7F210E50
    {
            goto label_7F210E50;
    }

label_7F210D28:
    ctx->pc = 0x7F210D28u;
    ctx->downcount -= 8;
    // 7F210D28: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F210D2C:
    ctx->pc = 0x7F210D2Cu;
    // 7F210D2C: li      r0, 16384
    ctx->gpr[0] = (u32)(s32)(16384);

label_7F210D30:
    ctx->pc = 0x7F210D30u;
    // 7F210D30: and   r3, r7, r3
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[3];
    }

label_7F210D34:
    ctx->pc = 0x7F210D34u;
    // 7F210D34: and   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F210D38:
    ctx->pc = 0x7F210D38u;
    // 7F210D38: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F210D3C:
    ctx->pc = 0x7F210D3Cu;
    // 7F210D3C: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F210D40:
    ctx->pc = 0x7F210D40u;
    // 7F210D40: or.   r0, r3, r0
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

label_7F210D44:
    ctx->pc = 0x7F210D44u;
    // 7F210D44: bc    12, 2, 0x7F210DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210DC8;
        }
    }

label_7F210D48:
    ctx->pc = 0x7F210D48u;
    ctx->downcount -= 3;
    // 7F210D48: lwz     r0, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210D4C:
    ctx->pc = 0x7F210D4Cu;
    // 7F210D4C: cmplwi  r0, 0x0000
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

label_7F210D50:
    ctx->pc = 0x7F210D50u;
    // 7F210D50: bc    4, 2, 0x7F210D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210D9C;
        }
    }

label_7F210D54:
    ctx->pc = 0x7F210D54u;
    ctx->downcount -= 8;
    // 7F210D54: lwz     r3, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210D58:
    ctx->pc = 0x7F210D58u;
    // 7F210D58: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F210D5C:
    ctx->pc = 0x7F210D5Cu;
    // 7F210D5C: addi    r4, r31, 808
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(808);

label_7F210D60:
    ctx->pc = 0x7F210D60u;
    // 7F210D60: stw     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210D64:
    ctx->pc = 0x7F210D64u;
    // 7F210D64: stw     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210D68:
    ctx->pc = 0x7F210D68u;
    // 7F210D68: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210D6C:
    ctx->pc = 0x7F210D6Cu;
    // 7F210D6C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F210D70:
    ctx->pc = 0x7F210D70u;
    // 7F210D70: bl      0x80025A3C
    {
            ctx->lr = 0x7F210D74u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F210D74:
    ctx->pc = 0x7F210D74u;
    ctx->downcount -= 9;
    // 7F210D74: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F210D78:
    ctx->pc = 0x7F210D78u;
    // 7F210D78: lfs     f1, 860(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210D78u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210D7C:
    ctx->pc = 0x7F210D7Cu;
    // 7F210D7C: addi    r4, r3, 15940
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15940);

label_7F210D80:
    ctx->pc = 0x7F210D80u;
    // 7F210D80: addi    r3, r31, 808
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(808);

label_7F210D84:
    ctx->pc = 0x7F210D84u;
    // 7F210D84: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210D84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210D88:
    ctx->pc = 0x7F210D88u;
    // 7F210D88: addi    r4, r31, 240
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(240);

label_7F210D8C:
    ctx->pc = 0x7F210D8Cu;
    // 7F210D8C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210D8Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F210D90:
    ctx->pc = 0x7F210D90u;
    // 7F210D90: stfs     f0, 860(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210D90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210D94:
    ctx->pc = 0x7F210D94u;
    // 7F210D94: bl      0x7F2368F4
    {
            ctx->lr = 0x7F210D98u;
            ctx->pc = 0x7F2368F4u;
            return;
    }

label_7F210D98:
    ctx->pc = 0x7F210D98u;
    ctx->downcount -= 1;
    // 7F210D98: stw     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F210D9C:
    ctx->pc = 0x7F210D9Cu;
    ctx->downcount -= 8;
    // 7F210D9C: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210DA0:
    ctx->pc = 0x7F210DA0u;
    // 7F210DA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F210DA4:
    ctx->pc = 0x7F210DA4u;
    // 7F210DA4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210DA8:
    ctx->pc = 0x7F210DA8u;
    // 7F210DA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F210DAC:
    ctx->pc = 0x7F210DACu;
    // 7F210DAC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F210DB0:
    ctx->pc = 0x7F210DB0u;
    // 7F210DB0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F210DB4:
    ctx->pc = 0x7F210DB4u;
    // 7F210DB4: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F210DB8:
    ctx->pc = 0x7F210DB8u;
    // 7F210DB8: bl      0x7F042C94
    {
            ctx->lr = 0x7F210DBCu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F210DBC:
    ctx->pc = 0x7F210DBCu;
    ctx->downcount -= 3;
    // 7F210DBC: li      r0, 500
    ctx->gpr[0] = (u32)(s32)(500);

label_7F210DC0:
    ctx->pc = 0x7F210DC0u;
    // 7F210DC0: stw     r0, 2540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210DC4:
    ctx->pc = 0x7F210DC4u;
    // 7F210DC4: b       0x7F210E50
    {
            goto label_7F210E50;
    }

label_7F210DC8:
    ctx->pc = 0x7F210DC8u;
    ctx->downcount -= 6;
    // 7F210DC8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F210DCC:
    ctx->pc = 0x7F210DCCu;
    // 7F210DCC: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F210DD0:
    ctx->pc = 0x7F210DD0u;
    // 7F210DD0: and   r3, r7, r3
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[3];
    }

label_7F210DD4:
    ctx->pc = 0x7F210DD4u;
    // 7F210DD4: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F210DD8:
    ctx->pc = 0x7F210DD8u;
    // 7F210DD8: or.   r0, r3, r0
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

label_7F210DDC:
    ctx->pc = 0x7F210DDCu;
    // 7F210DDC: bc    12, 2, 0x7F210E50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210E50;
        }
    }

label_7F210DE0:
    ctx->pc = 0x7F210DE0u;
    ctx->downcount -= 4;
    // 7F210DE0: addi    r4, r31, 872
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(872);

label_7F210DE4:
    ctx->pc = 0x7F210DE4u;
    // 7F210DE4: li      r3, 1707
    ctx->gpr[3] = (u32)(s32)(1707);

label_7F210DE8:
    ctx->pc = 0x7F210DE8u;
    // 7F210DE8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210DEC:
    ctx->pc = 0x7F210DECu;
    // 7F210DEC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F210DF0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F210DF0:
    ctx->pc = 0x7F210DF0u;
    ctx->downcount -= 12;
    // 7F210DF0: lfs     f0, 872(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210DF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210DF4:
    ctx->pc = 0x7F210DF4u;
    // 7F210DF4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F210DF8:
    ctx->pc = 0x7F210DF8u;
    // 7F210DF8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F210DFC:
    ctx->pc = 0x7F210DFCu;
    // 7F210DFC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F210E00:
    ctx->pc = 0x7F210E00u;
    // 7F210E00: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210E00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210E04:
    ctx->pc = 0x7F210E04u;
    // 7F210E04: lfs     f1, 876(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210E04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210E08:
    ctx->pc = 0x7F210E08u;
    // 7F210E08: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210E08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210E0C:
    ctx->pc = 0x7F210E0Cu;
    // 7F210E0C: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210E0Cu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F210E10:
    ctx->pc = 0x7F210E10u;
    // 7F210E10: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210E14:
    ctx->pc = 0x7F210E14u;
    // 7F210E14: lfs     f0, 880(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210E14u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210E18:
    ctx->pc = 0x7F210E18u;
    // 7F210E18: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210E18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210E1C:
    ctx->pc = 0x7F210E1Cu;
    // 7F210E1C: bl      0x7F1E8728
    {
            ctx->lr = 0x7F210E20u;
            ctx->pc = 0x7F1E8728u;
            return;
    }

label_7F210E20:
    ctx->pc = 0x7F210E20u;
    ctx->downcount -= 1;
    // 7F210E20: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F210E24:
    ctx->downcount -= 2;
    // 7F210E24: addi    r3, r31, 872
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(872);

label_7F210E28:
    // 7F210E28: bl      0x7F1D2694
    {
            ctx->lr = 0x7F210E2Cu;
            ctx->pc = 0x7F1D2694u;
            return;
    }

label_7F210E2C:
    ctx->downcount -= 3;
    // 7F210E2C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F210E30:
    // 7F210E30: cmpwi   r30, 4
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

label_7F210E34:
    // 7F210E34: bc    12, 0, 0x7F210E24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F210E24u;
                return;
            }
            goto label_7F210E24;
        }
    }

label_7F210E38:
    ctx->pc = 0x7F210E38u;
    ctx->downcount -= 3;
    // 7F210E38: lwz     r3, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210E3C:
    ctx->pc = 0x7F210E3Cu;
    // 7F210E3C: cmplwi  r3, 0x0000
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

label_7F210E40:
    ctx->pc = 0x7F210E40u;
    // 7F210E40: bc    12, 2, 0x7F210E48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210E48;
        }
    }

label_7F210E44:
    ctx->pc = 0x7F210E44u;
    ctx->downcount -= 1;
    // 7F210E44: bl      0x7F3C8210
    {
            ctx->lr = 0x7F210E48u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F210E48:
    ctx->pc = 0x7F210E48u;
    ctx->downcount -= 2;
    // 7F210E48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F210E4C:
    ctx->pc = 0x7F210E4Cu;
    // 7F210E4C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F210E50u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F210E50:
    ctx->pc = 0x7F210E50u;
    ctx->downcount -= 3;
    // 7F210E50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F210E54:
    ctx->pc = 0x7F210E54u;
    // 7F210E54: stw     r0, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210E58:
    ctx->pc = 0x7F210E58u;
    // 7F210E58: stw     r0, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210E5C:
    ctx->pc = 0x7F210E5Cu;
    ctx->downcount -= 7;
    // 7F210E5C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210E60:
    ctx->pc = 0x7F210E60u;
    // 7F210E60: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210E64:
    ctx->pc = 0x7F210E64u;
    // 7F210E64: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F210E68:
    ctx->pc = 0x7F210E68u;
    // 7F210E68: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210E6C:
    ctx->pc = 0x7F210E6Cu;
    // 7F210E6C: lwz     r0, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210E70:
    ctx->pc = 0x7F210E70u;
    // 7F210E70: cmpwi   r0, 6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F210E74:
    ctx->pc = 0x7F210E74u;
    // 7F210E74: bc    12, 2, 0x7F210EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210EE4;
        }
    }

label_7F210E78:
    ctx->pc = 0x7F210E78u;
    ctx->downcount -= 2;
    // 7F210E78: cmpwi   r0, 8
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

label_7F210E7C:
    ctx->pc = 0x7F210E7Cu;
    // 7F210E7C: bc    12, 2, 0x7F210EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210EE4;
        }
    }

label_7F210E80:
    ctx->pc = 0x7F210E80u;
    ctx->downcount -= 2;
    // 7F210E80: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210E84:
    ctx->pc = 0x7F210E84u;
    // 7F210E84: bl      0x7F04291C
    {
            ctx->lr = 0x7F210E88u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F210E88:
    ctx->pc = 0x7F210E88u;
    ctx->downcount -= 2;
    // 7F210E88: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F210E8C:
    ctx->pc = 0x7F210E8Cu;
    // 7F210E8C: bl      0x7F023170
    {
            ctx->lr = 0x7F210E90u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F210E90:
    ctx->pc = 0x7F210E90u;
    ctx->downcount -= 11;
    // 7F210E90: lfs     f0, 872(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210E90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210E94:
    ctx->pc = 0x7F210E94u;
    // 7F210E94: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F210E98:
    ctx->pc = 0x7F210E98u;
    // 7F210E98: addi    r4, r31, 2184
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2184);

label_7F210E9C:
    ctx->pc = 0x7F210E9Cu;
    // 7F210E9C: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210E9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210EA0:
    ctx->pc = 0x7F210EA0u;
    // 7F210EA0: lfs     f1, 876(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210EA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210EA4:
    ctx->pc = 0x7F210EA4u;
    // 7F210EA4: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210EA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210EA8:
    ctx->pc = 0x7F210EA8u;
    // 7F210EA8: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210EA8u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F210EAC:
    ctx->pc = 0x7F210EACu;
    // 7F210EAC: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210EACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210EB0:
    ctx->pc = 0x7F210EB0u;
    // 7F210EB0: lfs     f0, 880(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210EB0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210EB4:
    ctx->pc = 0x7F210EB4u;
    // 7F210EB4: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210EB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210EB8:
    ctx->pc = 0x7F210EB8u;
    // 7F210EB8: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F210EBCu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F210EBC:
    ctx->pc = 0x7F210EBCu;
    ctx->downcount -= 2;
    // 7F210EBC: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210EC0:
    ctx->pc = 0x7F210EC0u;
    // 7F210EC0: bl      0x7F0429C4
    {
            ctx->lr = 0x7F210EC4u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F210EC4:
    ctx->pc = 0x7F210EC4u;
    ctx->downcount -= 7;
    // 7F210EC4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F210EC8:
    ctx->pc = 0x7F210EC8u;
    // 7F210EC8: lwz     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F210ECC:
    ctx->pc = 0x7F210ECCu;
    // 7F210ECC: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F210ED0:
    ctx->pc = 0x7F210ED0u;
    // 7F210ED0: addi    r3, r31, 480
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(480);

label_7F210ED4:
    ctx->pc = 0x7F210ED4u;
    // 7F210ED4: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F210ED8:
    ctx->pc = 0x7F210ED8u;
    // 7F210ED8: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F210EDC:
    ctx->pc = 0x7F210EDCu;
    // 7F210EDC: bl      0x7F014964
    {
            ctx->lr = 0x7F210EE0u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F210EE0:
    ctx->pc = 0x7F210EE0u;
    ctx->downcount -= 1;
    // 7F210EE0: b       0x7F210F04
    {
            goto label_7F210F04;
    }

label_7F210EE4:
    ctx->pc = 0x7F210EE4u;
    ctx->downcount -= 8;
    // 7F210EE4: lfs     f0, 872(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210EE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(872);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210EE8:
    ctx->pc = 0x7F210EE8u;
    // 7F210EE8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210EE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210EEC:
    ctx->pc = 0x7F210EECu;
    // 7F210EEC: lfs     f1, 876(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210EECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(876);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210EF0:
    ctx->pc = 0x7F210EF0u;
    // 7F210EF0: lfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210EF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210EF4:
    ctx->pc = 0x7F210EF4u;
    // 7F210EF4: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210EF4u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F210EF8:
    ctx->pc = 0x7F210EF8u;
    // 7F210EF8: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210EF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210EFC:
    ctx->pc = 0x7F210EFCu;
    // 7F210EFC: lfs     f0, 880(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210EFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(880);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210F00:
    ctx->pc = 0x7F210F00u;
    // 7F210F00: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F210F00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210F04:
    ctx->pc = 0x7F210F04u;
    ctx->downcount -= 15;
    // 7F210F04: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F210F08:
    ctx->pc = 0x7F210F08u;
    // 7F210F08: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F210F0C:
    ctx->pc = 0x7F210F0Cu;
    // 7F210F0C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F210F10:
    ctx->pc = 0x7F210F10u;
    // 7F210F10: lfs     f0, 52(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210F10u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210F14:
    ctx->pc = 0x7F210F14u;
    // 7F210F14: stfs     f0, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210F14u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210F18:
    ctx->pc = 0x7F210F18u;
    // 7F210F18: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F210F1C:
    ctx->pc = 0x7F210F1Cu;
    // 7F210F1C: lfs     f0, 56(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210F1Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210F20:
    ctx->pc = 0x7F210F20u;
    // 7F210F20: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210F20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210F24:
    ctx->pc = 0x7F210F24u;
    // 7F210F24: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F210F28:
    ctx->pc = 0x7F210F28u;
    // 7F210F28: lfs     f0, 60(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210F28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210F2C:
    ctx->pc = 0x7F210F2Cu;
    // 7F210F2C: stfs     f0, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210F2Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210F30:
    ctx->pc = 0x7F210F30u;
    // 7F210F30: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210F34:
    ctx->pc = 0x7F210F34u;
    // 7F210F34: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F210F38:
    ctx->pc = 0x7F210F38u;
    // 7F210F38: cmpwi   r0, 12
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

label_7F210F3C:
    ctx->pc = 0x7F210F3Cu;
    // 7F210F3C: bc    12, 2, 0x7F210F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210F48;
        }
    }

label_7F210F40:
    ctx->pc = 0x7F210F40u;
    ctx->downcount -= 2;
    // 7F210F40: cmpwi   r0, 13
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

label_7F210F44:
    ctx->pc = 0x7F210F44u;
    // 7F210F44: bc    4, 2, 0x7F210F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F210F5C;
        }
    }

label_7F210F48:
    ctx->pc = 0x7F210F48u;
    ctx->downcount -= 5;
    // 7F210F48: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F210F4C:
    ctx->pc = 0x7F210F4Cu;
    // 7F210F4C: addi    r3, r31, 872
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(872);

label_7F210F50:
    ctx->pc = 0x7F210F50u;
    // 7F210F50: addi    r4, r31, 680
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(680);

label_7F210F54:
    ctx->pc = 0x7F210F54u;
    // 7F210F54: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F210F58:
    ctx->pc = 0x7F210F58u;
    // 7F210F58: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F210F5Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F210F5C:
    ctx->pc = 0x7F210F5Cu;
    ctx->downcount -= 4;
    // 7F210F5C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F210F60:
    ctx->pc = 0x7F210F60u;
    // 7F210F60: addi    r4, r31, 808
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(808);

label_7F210F64:
    ctx->pc = 0x7F210F64u;
    // 7F210F64: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F210F68:
    ctx->pc = 0x7F210F68u;
    // 7F210F68: bl      0x80025A3C
    {
            ctx->lr = 0x7F210F6Cu;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F210F6C:
    ctx->pc = 0x7F210F6Cu;
    ctx->downcount -= 8;
    // 7F210F6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F210F70:
    ctx->pc = 0x7F210F70u;
    // 7F210F70: lfs     f1, 860(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210F70u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F210F74:
    ctx->pc = 0x7F210F74u;
    // 7F210F74: addi    r4, r3, 15940
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15940);

label_7F210F78:
    ctx->pc = 0x7F210F78u;
    // 7F210F78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F210F7C:
    ctx->pc = 0x7F210F7Cu;
    // 7F210F7C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F210F7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F210F80:
    ctx->pc = 0x7F210F80u;
    // 7F210F80: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F210F80u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F210F84:
    ctx->pc = 0x7F210F84u;
    // 7F210F84: stfs     f0, 860(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F210F84u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(860);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F210F88:
    ctx->pc = 0x7F210F88u;
    // 7F210F88: bl      0x7F210BA4
    {
            ctx->lr = 0x7F210F8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F210BA4u;
                return;
            }
            goto label_7F210BA4;
    }

label_7F210F8C:
    ctx->pc = 0x7F210F8Cu;
    ctx->downcount -= 16;
    // 7F210F8C: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F210F90:
    ctx->pc = 0x7F210F90u;
    // 7F210F90: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210F94:
    ctx->pc = 0x7F210F94u;
    // 7F210F94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210F98:
    ctx->pc = 0x7F210F98u;
    // 7F210F98: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F210F9C:
    ctx->pc = 0x7F210F9Cu;
    // 7F210F9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F210FA0:
    ctx->pc = 0x7F210FA0u;
    ctx->downcount -= 7;
    // 7F210FA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F210FA4:
    ctx->pc = 0x7F210FA4u;
    // 7F210FA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210FA8:
    ctx->pc = 0x7F210FA8u;
    // 7F210FA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210FAC:
    ctx->pc = 0x7F210FACu;
    // 7F210FAC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F210FB0:
    ctx->pc = 0x7F210FB0u;
    // 7F210FB0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F210FB4:
    ctx->pc = 0x7F210FB4u;
    // 7F210FB4: addic.  r0, r31, 32
    {
        u64 a = ctx->gpr[31];
        u64 b = (u32)(s32)(32);
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

label_7F210FB8:
    ctx->pc = 0x7F210FB8u;
    // 7F210FB8: bc    12, 2, 0x7F210FC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F210FC4;
        }
    }

label_7F210FBC:
    ctx->pc = 0x7F210FBCu;
    ctx->downcount -= 2;
    // 7F210FBC: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F210FC0:
    ctx->pc = 0x7F210FC0u;
    // 7F210FC0: bl      0x7F042AAC
    {
            ctx->lr = 0x7F210FC4u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F210FC4:
    ctx->pc = 0x7F210FC4u;
    ctx->downcount -= 2;
    // 7F210FC4: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F210FC8:
    ctx->pc = 0x7F210FC8u;
    // 7F210FC8: bl      0x7F023E10
    {
            ctx->lr = 0x7F210FCCu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F210FCC:
    ctx->pc = 0x7F210FCCu;
    ctx->downcount -= 2;
    // 7F210FCC: addi    r3, r31, 480
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(480);

label_7F210FD0:
    ctx->pc = 0x7F210FD0u;
    // 7F210FD0: bl      0x7F0146B0
    {
            ctx->lr = 0x7F210FD4u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F210FD4:
    ctx->pc = 0x7F210FD4u;
    ctx->downcount -= 6;
    // 7F210FD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F210FD8:
    ctx->pc = 0x7F210FD8u;
    // 7F210FD8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F210FDC:
    ctx->pc = 0x7F210FDCu;
    // 7F210FDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F210FE0:
    ctx->pc = 0x7F210FE0u;
    // 7F210FE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F210FE4:
    ctx->pc = 0x7F210FE4u;
    // 7F210FE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F210FE8:
    ctx->pc = 0x7F210FE8u;
    ctx->downcount -= 18;
    // 7F210FE8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F210FEC:
    ctx->pc = 0x7F210FECu;
    // 7F210FEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F210FF0:
    ctx->pc = 0x7F210FF0u;
    // 7F210FF0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F210FF4:
    ctx->pc = 0x7F210FF4u;
    // 7F210FF4: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F210FF8:
    ctx->pc = 0x7F210FF8u;
    // 7F210FF8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F210FFC:
    ctx->pc = 0x7F210FFCu;
    // 7F210FFC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F211000:
    ctx->pc = 0x7F211000u;
    // 7F211000: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F211004:
    ctx->pc = 0x7F211004u;
    // 7F211004: bl      0x7F3C664C
    {
            ctx->lr = 0x7F211008u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F211008:
    ctx->pc = 0x7F211008u;
    ctx->downcount -= 2;
    // 7F211008: cmplwi  r3, 0x0000
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

label_7F21100C:
    ctx->pc = 0x7F21100Cu;
    // 7F21100C: bc    12, 2, 0x7F211018
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211018;
        }
    }

label_7F211010:
    ctx->pc = 0x7F211010u;
    ctx->downcount -= 1;
    // 7F211010: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F211014u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F211014:
    ctx->pc = 0x7F211014u;
    ctx->downcount -= 1;
    // 7F211014: b       0x7F21101C
    {
            goto label_7F21101C;
    }

label_7F211018:
    ctx->pc = 0x7F211018u;
    ctx->downcount -= 1;
    // 7F211018: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21101C:
    ctx->pc = 0x7F21101Cu;
    ctx->downcount -= 14;
    // 7F21101C: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F211020:
    ctx->pc = 0x7F211020u;
    // 7F211020: addi    r4, r4, -27960
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27960);

label_7F211024:
    ctx->pc = 0x7F211024u;
    // 7F211024: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211028:
    ctx->pc = 0x7F211028u;
    // 7F211028: mulli   r0, r3, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)12);

label_7F21102C:
    ctx->pc = 0x7F21102Cu;
    // 7F21102C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211030:
    ctx->pc = 0x7F211030u;
    // 7F211030: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211034:
    ctx->pc = 0x7F211034u;
    // 7F211034: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211038:
    ctx->pc = 0x7F211038u;
    // 7F211038: lha     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21103C:
    ctx->pc = 0x7F21103Cu;
    // 7F21103C: stw     r0, 2204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211040:
    ctx->pc = 0x7F211040u;
    // 7F211040: lwz     r0, 2204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211044:
    ctx->pc = 0x7F211044u;
    // 7F211044: cmpwi   r0, 0
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

label_7F211048:
    ctx->pc = 0x7F211048u;
    // 7F211048: bc    12, 1, 0x7F211054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211054;
        }
    }

label_7F21104C:
    ctx->pc = 0x7F21104Cu;
    ctx->downcount -= 2;
    // 7F21104C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F211050:
    ctx->pc = 0x7F211050u;
    // 7F211050: b       0x7F211268
    {
            goto label_7F211268;
    }

label_7F211054:
    ctx->pc = 0x7F211054u;
    ctx->downcount -= 2;
    // 7F211054: cmpwi   r0, 80
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

label_7F211058:
    ctx->pc = 0x7F211058u;
    // 7F211058: bc    12, 0, 0x7F211064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211064;
        }
    }

label_7F21105C:
    ctx->pc = 0x7F21105Cu;
    ctx->downcount -= 2;
    // 7F21105C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F211060:
    ctx->pc = 0x7F211060u;
    // 7F211060: b       0x7F211268
    {
            goto label_7F211268;
    }

label_7F211064:
    ctx->pc = 0x7F211064u;
    ctx->downcount -= 5;
    // 7F211064: lwz     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F211068:
    ctx->pc = 0x7F211068u;
    // 7F211068: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F21106C:
    ctx->pc = 0x7F21106Cu;
    // 7F21106C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F211070:
    ctx->pc = 0x7F211070u;
    // 7F211070: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F211074:
    ctx->pc = 0x7F211074u;
    // 7F211074: b       0x7F2110B0
    {
            goto label_7F2110B0;
    }

label_7F211078:
    ctx->pc = 0x7F211078u;
    ctx->downcount -= 14;
    // 7F211078: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F211078u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21107C:
    // 7F21107C: add   r5, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F211080:
    // 7F211080: addi    r0, r3, 2208
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2208);

label_7F211084:
    // 7F211084: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_7F211088:
    ctx->pc = 0x7F211088u;
    // 7F211088: stfs     f0, 888(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F211088u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(888);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21108C:
    // 7F21108C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F211090:
    // 7F211090: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F211094:
    ctx->pc = 0x7F211094u;
    // 7F211094: lfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F211094u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211098:
    ctx->pc = 0x7F211098u;
    // 7F211098: stfs     f0, 892(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F211098u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(892);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21109C:
    ctx->pc = 0x7F21109Cu;
    // 7F21109C: lfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F21109Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2110A0:
    ctx->pc = 0x7F2110A0u;
    // 7F2110A0: stfs     f0, 896(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2110A0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(896);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2110A4:
    ctx->pc = 0x7F2110A4u;
    // 7F2110A4: lha     r5, 24(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2110A8:
    // 7F2110A8: addi    r6, r6, 40
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(40);

label_7F2110AC:
    ctx->pc = 0x7F2110ACu;
    // 7F2110AC: stwx    r5, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2110B0:
    ctx->pc = 0x7F2110B0u;
    ctx->downcount -= 3;
    // 7F2110B0: lwz     r0, 2204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2110B4:
    // 7F2110B4: cmpw    r7, r0
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

label_7F2110B8:
    // 7F2110B8: bc    12, 0, 0x7F211078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211078u;
                return;
            }
            goto label_7F211078;
        }
    }

label_7F2110BC:
    ctx->pc = 0x7F2110BCu;
    ctx->downcount -= 32;
    // 7F2110BC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2110C0:
    ctx->pc = 0x7F2110C0u;
    // 7F2110C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2110C4:
    ctx->pc = 0x7F2110C4u;
    // 7F2110C4: stw     r0, 2192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2110C8:
    ctx->pc = 0x7F2110C8u;
    // 7F2110C8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2110CC:
    ctx->pc = 0x7F2110CCu;
    // 7F2110CC: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F2110D0:
    ctx->pc = 0x7F2110D0u;
    // 7F2110D0: stw     r3, 2200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2110D4:
    ctx->pc = 0x7F2110D4u;
    // 7F2110D4: stw     r3, 2528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2528);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2110D8:
    ctx->pc = 0x7F2110D8u;
    // 7F2110D8: stw     r0, 2532(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2532);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2110DC:
    ctx->pc = 0x7F2110DCu;
    // 7F2110DC: lwz     r0, 2528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2110E0:
    ctx->pc = 0x7F2110E0u;
    // 7F2110E0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2110E4:
    ctx->pc = 0x7F2110E4u;
    // 7F2110E4: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2110E8:
    ctx->pc = 0x7F2110E8u;
    // 7F2110E8: lfs     f0, 888(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2110E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2110EC:
    ctx->pc = 0x7F2110ECu;
    // 7F2110EC: stfs     f0, 872(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2110ECu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(872);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2110F0:
    ctx->pc = 0x7F2110F0u;
    // 7F2110F0: lwz     r0, 2528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2110F4:
    ctx->pc = 0x7F2110F4u;
    // 7F2110F4: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2110F8:
    ctx->pc = 0x7F2110F8u;
    // 7F2110F8: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2110FC:
    ctx->pc = 0x7F2110FCu;
    // 7F2110FC: lfs     f0, 892(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2110FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(892);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211100:
    ctx->pc = 0x7F211100u;
    // 7F211100: stfs     f0, 876(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F211100u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(876);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211104:
    ctx->pc = 0x7F211104u;
    // 7F211104: lwz     r0, 2528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211108:
    ctx->pc = 0x7F211108u;
    // 7F211108: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21110C:
    ctx->pc = 0x7F21110Cu;
    // 7F21110C: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211110:
    ctx->pc = 0x7F211110u;
    // 7F211110: lfs     f0, 896(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211110u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(896);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211114:
    ctx->pc = 0x7F211114u;
    // 7F211114: stfs     f0, 880(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F211114u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(880);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211118:
    ctx->pc = 0x7F211118u;
    // 7F211118: lwz     r3, 2532(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2532);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21111C:
    ctx->pc = 0x7F21111Cu;
    // 7F21111C: lwz     r0, 2528(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2528);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211120:
    ctx->pc = 0x7F211120u;
    // 7F211120: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F211124:
    ctx->pc = 0x7F211124u;
    // 7F211124: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211128:
    ctx->pc = 0x7F211128u;
    // 7F211128: addi    r3, r3, 888
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(888);

label_7F21112C:
    ctx->pc = 0x7F21112Cu;
    // 7F21112C: addi    r4, r4, 888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(888);

label_7F211130:
    ctx->pc = 0x7F211130u;
    // 7F211130: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211134:
    ctx->pc = 0x7F211134u;
    // 7F211134: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F211138:
    ctx->pc = 0x7F211138u;
    // 7F211138: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F21113Cu;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F21113C:
    ctx->pc = 0x7F21113Cu;
    ctx->downcount -= 9;
    // 7F21113C: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21113Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211140:
    ctx->pc = 0x7F211140u;
    // 7F211140: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211140u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211144:
    ctx->pc = 0x7F211144u;
    // 7F211144: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F211144u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F211148:
    ctx->pc = 0x7F211148u;
    // 7F211148: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211148u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F21114C:
    ctx->pc = 0x7F21114Cu;
    // 7F21114C: stfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21114Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F211150:
    ctx->pc = 0x7F211150u;
    // 7F211150: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F211154:
    ctx->pc = 0x7F211154u;
    // 7F211154: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211158:
    ctx->pc = 0x7F211158u;
    // 7F211158: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21115C:
    ctx->pc = 0x7F21115Cu;
    // 7F21115C: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F211160u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F211160:
    ctx->pc = 0x7F211160u;
    ctx->downcount -= 11;
    // 7F211160: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F211164:
    ctx->pc = 0x7F211164u;
    // 7F211164: lis     r4, 113
    ctx->gpr[4] = ((u32)(s32)(113) << 16);

label_7F211168:
    ctx->pc = 0x7F211168u;
    // 7F211168: sth     r0, 2186(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2186);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21116C:
    ctx->pc = 0x7F21116Cu;
    // 7F21116C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F211170:
    ctx->pc = 0x7F211170u;
    // 7F211170: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F211174:
    ctx->pc = 0x7F211174u;
    // 7F211174: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F211178:
    ctx->pc = 0x7F211178u;
    // 7F211178: sth     r0, 2184(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2184);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21117C:
    ctx->pc = 0x7F21117Cu;
    // 7F21117C: addi    r4, r4, 14927
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14927);

label_7F211180:
    ctx->pc = 0x7F211180u;
    // 7F211180: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F211184:
    ctx->pc = 0x7F211184u;
    // 7F211184: sth     r0, 2188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2188);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F211188:
    ctx->pc = 0x7F211188u;
    // 7F211188: bl      0x7F04272C
    {
            ctx->lr = 0x7F21118Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F21118C:
    ctx->pc = 0x7F21118Cu;
    ctx->downcount -= 6;
    // 7F21118C: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F211190:
    ctx->pc = 0x7F211190u;
    // 7F211190: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F211194:
    ctx->pc = 0x7F211194u;
    // 7F211194: addi    r5, r4, -11116
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11116);

label_7F211198:
    ctx->pc = 0x7F211198u;
    // 7F211198: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21119C:
    ctx->pc = 0x7F21119Cu;
    // 7F21119C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2111A0:
    ctx->pc = 0x7F2111A0u;
    // 7F2111A0: bl      0x7F042C2C
    {
            ctx->lr = 0x7F2111A4u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F2111A4:
    ctx->pc = 0x7F2111A4u;
    ctx->downcount -= 8;
    // 7F2111A4: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F2111A8:
    ctx->pc = 0x7F2111A8u;
    // 7F2111A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2111AC:
    ctx->pc = 0x7F2111ACu;
    // 7F2111AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2111B0:
    ctx->pc = 0x7F2111B0u;
    // 7F2111B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2111B4:
    ctx->pc = 0x7F2111B4u;
    // 7F2111B4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2111B8:
    ctx->pc = 0x7F2111B8u;
    // 7F2111B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2111BC:
    ctx->pc = 0x7F2111BCu;
    // 7F2111BC: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F2111C0:
    ctx->pc = 0x7F2111C0u;
    // 7F2111C0: bl      0x7F042C94
    {
            ctx->lr = 0x7F2111C4u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F2111C4:
    ctx->pc = 0x7F2111C4u;
    ctx->downcount -= 3;
    // 7F2111C4: addi    r3, r30, 32
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(32);

label_7F2111C8:
    ctx->pc = 0x7F2111C8u;
    // 7F2111C8: addi    r4, r30, 680
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(680);

label_7F2111CC:
    ctx->pc = 0x7F2111CCu;
    // 7F2111CC: bl      0x7F042B20
    {
            ctx->lr = 0x7F2111D0u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F2111D0:
    ctx->pc = 0x7F2111D0u;
    ctx->downcount -= 5;
    // 7F2111D0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2111D4:
    ctx->pc = 0x7F2111D4u;
    // 7F2111D4: addi    r3, r30, 80
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(80);

label_7F2111D8:
    ctx->pc = 0x7F2111D8u;
    // 7F2111D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2111DC:
    ctx->pc = 0x7F2111DCu;
    // 7F2111DC: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2111E0:
    ctx->pc = 0x7F2111E0u;
    // 7F2111E0: bl      0x7F022FB4
    {
            ctx->lr = 0x7F2111E4u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F2111E4:
    ctx->pc = 0x7F2111E4u;
    ctx->downcount -= 2;
    // 7F2111E4: addi    r3, r30, 80
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(80);

label_7F2111E8:
    ctx->pc = 0x7F2111E8u;
    // 7F2111E8: bl      0x7F023EA8
    {
            ctx->lr = 0x7F2111ECu;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F2111EC:
    ctx->pc = 0x7F2111ECu;
    ctx->downcount -= 28;
    // 7F2111EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2111F0:
    ctx->pc = 0x7F2111F0u;
    // 7F2111F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2111F4:
    ctx->pc = 0x7F2111F4u;
    // 7F2111F4: addi    r5, r4, 15944
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15944);

label_7F2111F8:
    ctx->pc = 0x7F2111F8u;
    // 7F2111F8: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F2111FC:
    ctx->pc = 0x7F2111FCu;
    // 7F2111FC: addi    r11, r3, 15960
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(15960);

label_7F211200:
    ctx->pc = 0x7F211200u;
    // 7F211200: lwz     r28, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F211204:
    ctx->pc = 0x7F211204u;
    // 7F211204: lwz     r29, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F211208:
    ctx->pc = 0x7F211208u;
    // 7F211208: addi    r3, r30, 480
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(480);

label_7F21120C:
    ctx->pc = 0x7F21120Cu;
    // 7F21120C: lwz     r31, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F211210:
    ctx->pc = 0x7F211210u;
    // 7F211210: addi    r4, r4, 16401
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16401);

label_7F211214:
    ctx->pc = 0x7F211214u;
    // 7F211214: lwz     r12, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F211218:
    ctx->pc = 0x7F211218u;
    // 7F211218: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F21121C:
    ctx->pc = 0x7F21121Cu;
    // 7F21121C: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F211220:
    ctx->pc = 0x7F211220u;
    // 7F211220: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F211224:
    ctx->pc = 0x7F211224u;
    // 7F211224: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F211228:
    ctx->pc = 0x7F211228u;
    // 7F211228: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F21122C:
    ctx->pc = 0x7F21122Cu;
    // 7F21122C: lwz     r5, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F211230:
    ctx->pc = 0x7F211230u;
    // 7F211230: lwz     r0, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211234:
    ctx->pc = 0x7F211234u;
    // 7F211234: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F211238:
    ctx->pc = 0x7F211238u;
    // 7F211238: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F21123C:
    ctx->pc = 0x7F21123Cu;
    // 7F21123C: stw     r31, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F211240:
    ctx->pc = 0x7F211240u;
    // 7F211240: stw     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F211244:
    ctx->pc = 0x7F211244u;
    // 7F211244: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F211248:
    ctx->pc = 0x7F211248u;
    // 7F211248: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F21124C:
    ctx->pc = 0x7F21124Cu;
    // 7F21124C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F211250:
    ctx->pc = 0x7F211250u;
    // 7F211250: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211254:
    ctx->pc = 0x7F211254u;
    // 7F211254: lwz     r5, 244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(244);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F211258:
    ctx->pc = 0x7F211258u;
    // 7F211258: bl      0x7F014788
    {
            ctx->lr = 0x7F21125Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F21125C:
    ctx->pc = 0x7F21125Cu;
    ctx->downcount -= 2;
    // 7F21125C: addi    r3, r30, 480
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(480);

label_7F211260:
    ctx->pc = 0x7F211260u;
    // 7F211260: bl      0x7F0148A0
    {
            ctx->lr = 0x7F211264u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F211264:
    ctx->pc = 0x7F211264u;
    ctx->downcount -= 1;
    // 7F211264: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F211268:
    ctx->pc = 0x7F211268u;
    ctx->downcount -= 16;
    // 7F211268: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21126C:
    ctx->pc = 0x7F21126Cu;
    // 7F21126C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211270:
    ctx->pc = 0x7F211270u;
    // 7F211270: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211274:
    ctx->pc = 0x7F211274u;
    // 7F211274: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F211278:
    ctx->pc = 0x7F211278u;
    // 7F211278: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21127C:
    ctx->pc = 0x7F21127Cu;
    ctx->downcount -= 21;
    // 7F21127C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211280:
    ctx->pc = 0x7F211280u;
    // 7F211280: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211284:
    ctx->pc = 0x7F211284u;
    // 7F211284: li      r5, 2560
    ctx->gpr[5] = (u32)(s32)(2560);

label_7F211288:
    ctx->pc = 0x7F211288u;
    // 7F211288: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21128C:
    ctx->pc = 0x7F21128Cu;
    // 7F21128C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211290:
    ctx->pc = 0x7F211290u;
    // 7F211290: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F211294:
    ctx->pc = 0x7F211294u;
    // 7F211294: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211298:
    ctx->pc = 0x7F211298u;
    // 7F211298: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21129C:
    ctx->pc = 0x7F21129Cu;
    // 7F21129C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2112A0:
    ctx->pc = 0x7F2112A0u;
    // 7F2112A0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2112A4:
    ctx->pc = 0x7F2112A4u;
    // 7F2112A4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2112A8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2112A8:
    ctx->pc = 0x7F2112A8u;
    ctx->downcount -= 2;
    // 7F2112A8: or.   r31, r3, r3
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

label_7F2112AC:
    ctx->pc = 0x7F2112ACu;
    // 7F2112AC: bc    12, 2, 0x7F2112EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2112EC;
        }
    }

label_7F2112B0:
    ctx->pc = 0x7F2112B0u;
    ctx->downcount -= 5;
    // 7F2112B0: lis     r4, 32545
    ctx->gpr[4] = ((u32)(s32)(32545) << 16);

label_7F2112B4:
    ctx->pc = 0x7F2112B4u;
    // 7F2112B4: lis     r5, 32545
    ctx->gpr[5] = ((u32)(s32)(32545) << 16);

label_7F2112B8:
    ctx->pc = 0x7F2112B8u;
    // 7F2112B8: addi    r4, r4, 3080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3080);

label_7F2112BC:
    ctx->pc = 0x7F2112BCu;
    // 7F2112BC: addi    r5, r5, 4000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4000);

label_7F2112C0:
    ctx->pc = 0x7F2112C0u;
    // 7F2112C0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2112C4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2112C4:
    ctx->pc = 0x7F2112C4u;
    ctx->downcount -= 4;
    // 7F2112C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2112C8:
    ctx->pc = 0x7F2112C8u;
    // 7F2112C8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2112CC:
    ctx->pc = 0x7F2112CCu;
    // 7F2112CC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2112D0:
    ctx->pc = 0x7F2112D0u;
    // 7F2112D0: bl      0x7F210FE8
    {
            ctx->lr = 0x7F2112D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F210FE8u;
                return;
            }
            goto label_7F210FE8;
    }

label_7F2112D4:
    ctx->pc = 0x7F2112D4u;
    ctx->downcount -= 2;
    // 7F2112D4: cmpwi   r3, 0
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

label_7F2112D8:
    ctx->pc = 0x7F2112D8u;
    // 7F2112D8: bc    4, 0, 0x7F2112EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2112EC;
        }
    }

label_7F2112DC:
    ctx->pc = 0x7F2112DCu;
    ctx->downcount -= 2;
    // 7F2112DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2112E0:
    ctx->pc = 0x7F2112E0u;
    // 7F2112E0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2112E4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2112E4:
    ctx->pc = 0x7F2112E4u;
    ctx->downcount -= 2;
    // 7F2112E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2112E8:
    ctx->pc = 0x7F2112E8u;
    // 7F2112E8: b       0x7F2112F0
    {
            goto label_7F2112F0;
    }

label_7F2112EC:
    ctx->pc = 0x7F2112ECu;
    ctx->downcount -= 1;
    // 7F2112EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2112F0:
    ctx->pc = 0x7F2112F0u;
    ctx->downcount -= 16;
    // 7F2112F0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2112F4:
    ctx->pc = 0x7F2112F4u;
    // 7F2112F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2112F8:
    ctx->pc = 0x7F2112F8u;
    // 7F2112F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2112FC:
    ctx->pc = 0x7F2112FCu;
    // 7F2112FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F211300:
    ctx->pc = 0x7F211300u;
    // 7F211300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211304:
    ctx->pc = 0x7F211304u;
    ctx->downcount -= 8;
    // 7F211304: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211308:
    ctx->pc = 0x7F211308u;
    // 7F211308: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21130C:
    ctx->pc = 0x7F21130Cu;
    // 7F21130C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211310:
    ctx->pc = 0x7F211310u;
    // 7F211310: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F211314:
    ctx->pc = 0x7F211314u;
    // 7F211314: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211318:
    ctx->pc = 0x7F211318u;
    // 7F211318: lwz     r0, 3028(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21131C:
    ctx->pc = 0x7F21131Cu;
    // 7F21131C: cmpwi   r0, 0
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

label_7F211320:
    ctx->pc = 0x7F211320u;
    // 7F211320: bc    4, 2, 0x7F211464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211464;
        }
    }

label_7F211324:
    ctx->pc = 0x7F211324u;
    ctx->downcount -= 2;
    // 7F211324: stw     r4, 3028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3028);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F211328:
    ctx->pc = 0x7F211328u;
    // 7F211328: b       0x7F211330
    {
            goto label_7F211330;
    }

label_7F21132C:
    ctx->pc = 0x7F21132Cu;
    ctx->downcount -= 1;
    // 7F21132C: b       0x7F211464
    {
            goto label_7F211464;
    }

label_7F211330:
    ctx->pc = 0x7F211330u;
    ctx->downcount -= 15;
    // 7F211330: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F211334:
    ctx->pc = 0x7F211334u;
    // 7F211334: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F211338:
    ctx->pc = 0x7F211338u;
    // 7F211338: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F21133C:
    ctx->pc = 0x7F21133Cu;
    // 7F21133C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F211340:
    ctx->pc = 0x7F211340u;
    // 7F211340: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211344:
    ctx->pc = 0x7F211344u;
    // 7F211344: lha     r4, 298(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(298);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F211348:
    ctx->pc = 0x7F211348u;
    // 7F211348: stw     r4, 3036(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3036);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21134C:
    ctx->pc = 0x7F21134Cu;
    // 7F21134C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211350:
    ctx->pc = 0x7F211350u;
    // 7F211350: lha     r4, 296(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(296);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F211354:
    ctx->pc = 0x7F211354u;
    // 7F211354: stw     r4, 3040(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3040);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F211358:
    ctx->pc = 0x7F211358u;
    // 7F211358: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21135C:
    ctx->pc = 0x7F21135Cu;
    // 7F21135C: sth     r0, 298(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(298);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F211360:
    ctx->pc = 0x7F211360u;
    // 7F211360: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211364:
    ctx->pc = 0x7F211364u;
    // 7F211364: sth     r0, 296(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F211368:
    ctx->pc = 0x7F211368u;
    // 7F211368: bl      0x7F02D178
    {
            ctx->lr = 0x7F21136Cu;
            ctx->pc = 0x7F02D178u;
            return;
    }

label_7F21136C:
    ctx->pc = 0x7F21136Cu;
    ctx->downcount -= 3;
    // 7F21136C: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211370:
    ctx->pc = 0x7F211370u;
    // 7F211370: cmpwi   r0, 22
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(22);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F211374:
    ctx->pc = 0x7F211374u;
    // 7F211374: bc    4, 0, 0x7F2113C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2113C8;
        }
    }

label_7F211378:
    ctx->pc = 0x7F211378u;
    ctx->downcount -= 20;
    // 7F211378: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F21137C:
    ctx->pc = 0x7F21137Cu;
    // 7F21137C: lwz     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F211380:
    ctx->pc = 0x7F211380u;
    // 7F211380: addi    r5, r3, 15976
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15976);

label_7F211384:
    ctx->pc = 0x7F211384u;
    // 7F211384: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F211388:
    ctx->pc = 0x7F211388u;
    // 7F211388: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F211388u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21138C:
    ctx->pc = 0x7F21138Cu;
    // 7F21138C: addi    r5, r4, 15980
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15980);

label_7F211390:
    ctx->pc = 0x7F211390u;
    // 7F211390: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F211394:
    ctx->pc = 0x7F211394u;
    // 7F211394: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F211394u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F211398:
    ctx->pc = 0x7F211398u;
    // 7F211398: stfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F211398u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21139C:
    ctx->pc = 0x7F21139Cu;
    // 7F21139C: addi    r4, r3, 15984
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(15984);

label_7F2113A0:
    ctx->pc = 0x7F2113A0u;
    // 7F2113A0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2113A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2113A4:
    ctx->pc = 0x7F2113A4u;
    // 7F2113A4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2113A8:
    ctx->pc = 0x7F2113A8u;
    // 7F2113A8: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2113AC:
    ctx->pc = 0x7F2113ACu;
    // 7F2113AC: lfs     f0, 15988(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2113ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2113B0:
    ctx->pc = 0x7F2113B0u;
    // 7F2113B0: stfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2113B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F2113B4:
    ctx->pc = 0x7F2113B4u;
    // 7F2113B4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2113B8:
    ctx->pc = 0x7F2113B8u;
    // 7F2113B8: stfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2113B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2113BC:
    ctx->pc = 0x7F2113BCu;
    // 7F2113BC: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2113C0:
    ctx->pc = 0x7F2113C0u;
    // 7F2113C0: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2113C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2113C4:
    ctx->pc = 0x7F2113C4u;
    // 7F2113C4: b       0x7F211414
    {
            goto label_7F211414;
    }

label_7F2113C8:
    ctx->pc = 0x7F2113C8u;
    ctx->downcount -= 19;
    // 7F2113C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2113CC:
    ctx->pc = 0x7F2113CCu;
    // 7F2113CC: lwz     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2113D0:
    ctx->pc = 0x7F2113D0u;
    // 7F2113D0: addi    r5, r3, 15992
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(15992);

label_7F2113D4:
    ctx->pc = 0x7F2113D4u;
    // 7F2113D4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2113D8:
    ctx->pc = 0x7F2113D8u;
    // 7F2113D8: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2113D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2113DC:
    ctx->pc = 0x7F2113DCu;
    // 7F2113DC: addi    r5, r4, 15996
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15996);

label_7F2113E0:
    ctx->pc = 0x7F2113E0u;
    // 7F2113E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2113E4:
    ctx->pc = 0x7F2113E4u;
    // 7F2113E4: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2113E4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2113E8:
    ctx->pc = 0x7F2113E8u;
    // 7F2113E8: stfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2113E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2113EC:
    ctx->pc = 0x7F2113ECu;
    // 7F2113EC: addi    r4, r3, 16000
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16000);

label_7F2113F0:
    ctx->pc = 0x7F2113F0u;
    // 7F2113F0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2113F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2113F4:
    ctx->pc = 0x7F2113F4u;
    // 7F2113F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2113F8:
    ctx->pc = 0x7F2113F8u;
    // 7F2113F8: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2113FC:
    ctx->pc = 0x7F2113FCu;
    // 7F2113FC: lfs     f0, 15988(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2113FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(15988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211400:
    ctx->pc = 0x7F211400u;
    // 7F211400: stfs     f2, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F211400u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F211404:
    ctx->pc = 0x7F211404u;
    // 7F211404: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211408:
    ctx->pc = 0x7F211408u;
    // 7F211408: stfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211408u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F21140C:
    ctx->pc = 0x7F21140Cu;
    // 7F21140C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211410:
    ctx->pc = 0x7F211410u;
    // 7F211410: stfs     f0, 12(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211410u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211414:
    ctx->pc = 0x7F211414u;
    ctx->downcount -= 15;
    // 7F211414: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F211418:
    ctx->pc = 0x7F211418u;
    // 7F211418: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F21141C:
    ctx->pc = 0x7F21141Cu;
    // 7F21141C: lwz     r4, 2276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211420:
    ctx->pc = 0x7F211420u;
    // 7F211420: lwz     r3, 2280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211424:
    ctx->pc = 0x7F211424u;
    // 7F211424: stw     r4, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F211428:
    ctx->pc = 0x7F211428u;
    // 7F211428: stw     r3, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21142C:
    ctx->pc = 0x7F21142Cu;
    // 7F21142C: lwz     r4, 2284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2284);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211430:
    ctx->pc = 0x7F211430u;
    // 7F211430: lwz     r3, 2288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211434:
    ctx->pc = 0x7F211434u;
    // 7F211434: stw     r4, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F211438:
    ctx->pc = 0x7F211438u;
    // 7F211438: stw     r3, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21143C:
    ctx->pc = 0x7F21143Cu;
    // 7F21143C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211440:
    ctx->pc = 0x7F211440u;
    // 7F211440: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211444:
    ctx->pc = 0x7F211444u;
    // 7F211444: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211448:
    ctx->pc = 0x7F211448u;
    // 7F211448: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21144C:
    ctx->pc = 0x7F21144Cu;
    // 7F21144C: bl      0x7F026B18
    {
            ctx->lr = 0x7F211450u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F211450:
    ctx->pc = 0x7F211450u;
    ctx->downcount -= 3;
    // 7F211450: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F211454:
    ctx->pc = 0x7F211454u;
    // 7F211454: addi    r3, r3, 64
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(64);

label_7F211458:
    ctx->pc = 0x7F211458u;
    // 7F211458: bl      0x7F0208E4
    {
            ctx->lr = 0x7F21145Cu;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F21145C:
    ctx->pc = 0x7F21145Cu;
    ctx->downcount -= 2;
    // 7F21145C: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F211460:
    ctx->pc = 0x7F211460u;
    // 7F211460: bl      0x7F0180A0
    {
            ctx->lr = 0x7F211464u;
            ctx->pc = 0x7F0180A0u;
            return;
    }

label_7F211464:
    ctx->pc = 0x7F211464u;
    ctx->downcount -= 6;
    // 7F211464: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211468:
    ctx->pc = 0x7F211468u;
    // 7F211468: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21146C:
    ctx->pc = 0x7F21146Cu;
    // 7F21146C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211470:
    ctx->pc = 0x7F211470u;
    // 7F211470: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F211474:
    ctx->pc = 0x7F211474u;
    // 7F211474: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211478:
    ctx->pc = 0x7F211478u;
    ctx->downcount -= 19;
    // 7F211478: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21147C:
    ctx->pc = 0x7F21147Cu;
    // 7F21147C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211480:
    ctx->pc = 0x7F211480u;
    // 7F211480: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211484:
    ctx->pc = 0x7F211484u;
    // 7F211484: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F211488:
    ctx->pc = 0x7F211488u;
    // 7F211488: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21148C:
    ctx->pc = 0x7F21148Cu;
    // 7F21148C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F211490:
    ctx->pc = 0x7F211490u;
    // 7F211490: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F211494:
    ctx->pc = 0x7F211494u;
    // 7F211494: lwz     r3, 2300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211498:
    ctx->pc = 0x7F211498u;
    // 7F211498: bl      0x7F1C34D8
    {
            ctx->lr = 0x7F21149Cu;
            ctx->pc = 0x7F1C34D8u;
            return;
    }

label_7F21149C:
    ctx->pc = 0x7F21149Cu;
    ctx->downcount -= 24;
    // 7F21149C: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21149Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2114A0:
    ctx->pc = 0x7F2114A0u;
    // 7F2114A0: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2114A4:
    ctx->pc = 0x7F2114A4u;
    // 7F2114A4: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2114A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2114A8:
    ctx->pc = 0x7F2114A8u;
    // 7F2114A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2114AC:
    ctx->pc = 0x7F2114ACu;
    // 7F2114AC: lfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2114ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2114B0:
    ctx->pc = 0x7F2114B0u;
    // 7F2114B0: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F2114B0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F2114B4:
    ctx->pc = 0x7F2114B4u;
    // 7F2114B4: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2114B4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2114B8:
    ctx->pc = 0x7F2114B8u;
    // 7F2114B8: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2114BC:
    ctx->pc = 0x7F2114BCu;
    // 7F2114BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2114BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2114C0:
    ctx->pc = 0x7F2114C0u;
    // 7F2114C0: stw     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2114C4:
    ctx->pc = 0x7F2114C4u;
    // 7F2114C4: stfd     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2114C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F2114C8:
    ctx->pc = 0x7F2114C8u;
    // 7F2114C8: stfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2114C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2114CC:
    ctx->pc = 0x7F2114CCu;
    // 7F2114CC: lwz     r6, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2114D0:
    ctx->pc = 0x7F2114D0u;
    // 7F2114D0: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2114D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2114D4:
    ctx->pc = 0x7F2114D4u;
    // 7F2114D4: lwz     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2114D8:
    ctx->pc = 0x7F2114D8u;
    // 7F2114D8: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2114DC:
    ctx->pc = 0x7F2114DCu;
    // 7F2114DC: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2114E0:
    ctx->pc = 0x7F2114E0u;
    // 7F2114E0: stw     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2114E4:
    ctx->pc = 0x7F2114E4u;
    // 7F2114E4: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2114E8:
    ctx->pc = 0x7F2114E8u;
    // 7F2114E8: sth     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2114EC:
    ctx->pc = 0x7F2114ECu;
    // 7F2114EC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2114F0:
    ctx->pc = 0x7F2114F0u;
    // 7F2114F0: lwz     r0, 3012(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3012);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2114F4:
    ctx->pc = 0x7F2114F4u;
    // 7F2114F4: cmpwi   r0, 0
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

label_7F2114F8:
    ctx->pc = 0x7F2114F8u;
    // 7F2114F8: bc    4, 1, 0x7F211508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211508;
        }
    }

label_7F2114FC:
    ctx->pc = 0x7F2114FCu;
    ctx->downcount -= 3;
    // 7F2114FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211500:
    ctx->pc = 0x7F211500u;
    // 7F211500: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F211504:
    ctx->pc = 0x7F211504u;
    // 7F211504: bl      0x7F3C7728
    {
            ctx->lr = 0x7F211508u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F211508:
    ctx->pc = 0x7F211508u;
    ctx->downcount -= 16;
    // 7F211508: lmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21150C:
    ctx->pc = 0x7F21150Cu;
    // 7F21150C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211510:
    ctx->pc = 0x7F211510u;
    // 7F211510: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211514:
    ctx->pc = 0x7F211514u;
    // 7F211514: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F211518:
    ctx->pc = 0x7F211518u;
    // 7F211518: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21151C:
    ctx->pc = 0x7F21151Cu;
    ctx->downcount -= 18;
    // 7F21151C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211520:
    ctx->pc = 0x7F211520u;
    // 7F211520: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211524:
    ctx->pc = 0x7F211524u;
    // 7F211524: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211528:
    ctx->pc = 0x7F211528u;
    // 7F211528: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21152C:
    ctx->pc = 0x7F21152Cu;
    // 7F21152C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211530:
    ctx->pc = 0x7F211530u;
    // 7F211530: lwz     r3, 2336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211534:
    ctx->pc = 0x7F211534u;
    // 7F211534: cmpwi   r3, -1
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

label_7F211538:
    ctx->pc = 0x7F211538u;
    // 7F211538: bc    4, 2, 0x7F21166C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21166C;
        }
    }

label_7F21153C:
    ctx->pc = 0x7F21153Cu;
    ctx->downcount -= 3;
    // 7F21153C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F211540:
    ctx->pc = 0x7F211540u;
    // 7F211540: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F211544:
    ctx->pc = 0x7F211544u;
    // 7F211544: stw     r0, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211548:
    ctx->pc = 0x7F211548u;
    ctx->downcount -= 9;
    // 7F211548: lwz     r0, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21154C:
    ctx->pc = 0x7F21154Cu;
    // 7F21154C: stw     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211550:
    ctx->pc = 0x7F211550u;
    // 7F211550: lwz     r3, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211554:
    // 7F211554: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F211558:
    ctx->pc = 0x7F211558u;
    // 7F211558: stw     r0, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21155C:
    ctx->pc = 0x7F21155Cu;
    // 7F21155C: lwz     r3, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211560:
    ctx->pc = 0x7F211560u;
    // 7F211560: lwz     r0, 2340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211564:
    // 7F211564: cmpw    r3, r0
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

label_7F211568:
    // 7F211568: bc    12, 0, 0x7F211570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211570;
        }
    }

label_7F21156C:
    ctx->pc = 0x7F21156Cu;
    ctx->downcount -= 1;
    // 7F21156C: stw     r4, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F211570:
    ctx->pc = 0x7F211570u;
    ctx->downcount -= 6;
    // 7F211570: lwz     r5, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F211574:
    // 7F211574: rlwinm r3, r5, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F211578:
    // 7F211578: addi    r0, r3, 2344
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2344);

label_7F21157C:
    ctx->pc = 0x7F21157Cu;
    // 7F21157C: lwzx    r0, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211580:
    // 7F211580: cmpwi   r0, 1
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

label_7F211584:
    // 7F211584: bc    12, 2, 0x7F211548
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211548u;
                return;
            }
            goto label_7F211548;
        }
    }

label_7F211588:
    ctx->pc = 0x7F211588u;
    ctx->downcount -= 24;
    // 7F211588: rlwinm r0, r5, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_7F21158C:
    ctx->pc = 0x7F21158Cu;
    // 7F21158C: addi    r5, r31, 2260
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(2260);

label_7F211590:
    ctx->pc = 0x7F211590u;
    // 7F211590: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211594:
    ctx->pc = 0x7F211594u;
    // 7F211594: lfs     f0, 980(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211594u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211598:
    ctx->pc = 0x7F211598u;
    // 7F211598: stfs     f0, 964(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211598u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21159C:
    ctx->pc = 0x7F21159Cu;
    // 7F21159C: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2115A0:
    ctx->pc = 0x7F2115A0u;
    // 7F2115A0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2115A4:
    ctx->pc = 0x7F2115A4u;
    // 7F2115A4: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2115A8:
    ctx->pc = 0x7F2115A8u;
    // 7F2115A8: lfs     f0, 984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2115A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2115AC:
    ctx->pc = 0x7F2115ACu;
    // 7F2115AC: stfs     f0, 968(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2115ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2115B0:
    ctx->pc = 0x7F2115B0u;
    // 7F2115B0: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2115B4:
    ctx->pc = 0x7F2115B4u;
    // 7F2115B4: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2115B8:
    ctx->pc = 0x7F2115B8u;
    // 7F2115B8: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2115BC:
    ctx->pc = 0x7F2115BCu;
    // 7F2115BC: lfs     f0, 988(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2115BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2115C0:
    ctx->pc = 0x7F2115C0u;
    // 7F2115C0: stfs     f0, 972(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2115C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2115C4:
    ctx->pc = 0x7F2115C4u;
    // 7F2115C4: lwz     r3, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2115C8:
    ctx->pc = 0x7F2115C8u;
    // 7F2115C8: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2115CC:
    ctx->pc = 0x7F2115CCu;
    // 7F2115CC: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F2115D0:
    ctx->pc = 0x7F2115D0u;
    // 7F2115D0: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2115D4:
    ctx->pc = 0x7F2115D4u;
    // 7F2115D4: addi    r3, r3, 980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(980);

label_7F2115D8:
    ctx->pc = 0x7F2115D8u;
    // 7F2115D8: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_7F2115DC:
    ctx->pc = 0x7F2115DCu;
    // 7F2115DC: add   r3, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2115E0:
    ctx->pc = 0x7F2115E0u;
    // 7F2115E0: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2115E4:
    ctx->pc = 0x7F2115E4u;
    // 7F2115E4: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F2115E8u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F2115E8:
    ctx->pc = 0x7F2115E8u;
    ctx->downcount -= 9;
    // 7F2115E8: lfs     f1, 2260(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2115E8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2115EC:
    ctx->pc = 0x7F2115ECu;
    // 7F2115EC: lfs     f0, 2268(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2115ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2115F0:
    ctx->pc = 0x7F2115F0u;
    // 7F2115F0: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2115F0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2115F4:
    ctx->pc = 0x7F2115F4u;
    // 7F2115F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2115F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2115F8:
    ctx->pc = 0x7F2115F8u;
    // 7F2115F8: stfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2115F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2115FC:
    ctx->pc = 0x7F2115FCu;
    // 7F2115FC: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2115FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F211600:
    ctx->pc = 0x7F211600u;
    // 7F211600: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211604:
    ctx->pc = 0x7F211604u;
    // 7F211604: lwz     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211608:
    ctx->pc = 0x7F211608u;
    // 7F211608: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F21160Cu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F21160C:
    ctx->pc = 0x7F21160Cu;
    ctx->downcount -= 3;
    // 7F21160C: rlwinm r30, r3, 0, 20, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F211610:
    ctx->pc = 0x7F211610u;
    // 7F211610: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F211614:
    ctx->pc = 0x7F211614u;
    // 7F211614: bl      0x7F02A538
    {
            ctx->lr = 0x7F211618u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F211618:
    ctx->pc = 0x7F211618u;
    ctx->downcount -= 7;
    // 7F211618: addi    r0, r3, 10
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(10);

label_7F21161C:
    ctx->pc = 0x7F21161Cu;
    // 7F21161C: stw     r0, 3016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3016);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211620:
    ctx->pc = 0x7F211620u;
    // 7F211620: lha     r0, 2294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2294);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F211624:
    ctx->pc = 0x7F211624u;
    // 7F211624: subf   r0, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F211628:
    ctx->pc = 0x7F211628u;
    // 7F211628: rlwinm r3, r0, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F21162C:
    ctx->pc = 0x7F21162Cu;
    // 7F21162C: cmpwi   r3, 2048
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F211630:
    ctx->pc = 0x7F211630u;
    // 7F211630: bc    4, 1, 0x7F211638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211638;
        }
    }

label_7F211634:
    ctx->pc = 0x7F211634u;
    ctx->downcount -= 1;
    // 7F211634: addi    r3, r3, -4096
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4096);

label_7F211638:
    ctx->pc = 0x7F211638u;
    ctx->downcount -= 51;
    // 7F211638: lwz     r0, 3016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21163C:
    ctx->pc = 0x7F21163Cu;
    // 7F21163C: extsh r5, r3
    {
        ctx->gpr[5] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F211640:
    ctx->pc = 0x7F211640u;
    // 7F211640: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F211644:
    ctx->pc = 0x7F211644u;
    // 7F211644: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F211648:
    ctx->pc = 0x7F211648u;
    // 7F211648: divw   r0, r5, r0
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F21164C:
    ctx->pc = 0x7F21164Cu;
    // 7F21164C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F211650:
    ctx->pc = 0x7F211650u;
    // 7F211650: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F211654:
    ctx->pc = 0x7F211654u;
    // 7F211654: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F211658:
    ctx->pc = 0x7F211658u;
    // 7F211658: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F21165C:
    ctx->pc = 0x7F21165Cu;
    // 7F21165C: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F211660:
    ctx->pc = 0x7F211660u;
    // 7F211660: stw     r0, 3024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3024);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211664:
    ctx->pc = 0x7F211664u;
    // 7F211664: bl      0x7F042C94
    {
            ctx->lr = 0x7F211668u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F211668:
    ctx->pc = 0x7F211668u;
    ctx->downcount -= 1;
    // 7F211668: b       0x7F2116EC
    {
            goto label_7F2116EC;
    }

label_7F21166C:
    ctx->pc = 0x7F21166Cu;
    ctx->downcount -= 6;
    // 7F21166C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F211670:
    ctx->pc = 0x7F211670u;
    // 7F211670: stw     r0, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211674:
    ctx->pc = 0x7F211674u;
    // 7F211674: lwz     r3, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211678:
    ctx->pc = 0x7F211678u;
    // 7F211678: lwz     r0, 3016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21167C:
    ctx->pc = 0x7F21167Cu;
    // 7F21167C: cmpw    r3, r0
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

label_7F211680:
    ctx->pc = 0x7F211680u;
    // 7F211680: bc    12, 0, 0x7F2116DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2116DC;
        }
    }

label_7F211684:
    ctx->pc = 0x7F211684u;
    ctx->downcount -= 9;
    // 7F211684: lfs     f1, 2260(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211684u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211688:
    ctx->pc = 0x7F211688u;
    // 7F211688: lfs     f0, 2268(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211688u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21168C:
    ctx->pc = 0x7F21168Cu;
    // 7F21168C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21168Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F211690:
    ctx->pc = 0x7F211690u;
    // 7F211690: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211690u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F211694:
    ctx->pc = 0x7F211694u;
    // 7F211694: stfd     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211694u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F211698:
    ctx->pc = 0x7F211698u;
    // 7F211698: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211698u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F21169C:
    ctx->pc = 0x7F21169Cu;
    // 7F21169C: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2116A0:
    ctx->pc = 0x7F2116A0u;
    // 7F2116A0: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2116A4:
    ctx->pc = 0x7F2116A4u;
    // 7F2116A4: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F2116A8u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F2116A8:
    ctx->pc = 0x7F2116A8u;
    ctx->downcount -= 10;
    // 7F2116A8: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F2116AC:
    ctx->pc = 0x7F2116ACu;
    // 7F2116AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2116B0:
    ctx->pc = 0x7F2116B0u;
    // 7F2116B0: sth     r0, 2294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2116B4:
    ctx->pc = 0x7F2116B4u;
    // 7F2116B4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2116B8:
    ctx->pc = 0x7F2116B8u;
    // 7F2116B8: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F2116BC:
    ctx->pc = 0x7F2116BCu;
    // 7F2116BC: sth     r4, 2292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2292);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2116C0:
    ctx->pc = 0x7F2116C0u;
    // 7F2116C0: sth     r4, 2296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2296);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2116C4:
    ctx->pc = 0x7F2116C4u;
    // 7F2116C4: stw     r4, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2116C8:
    ctx->pc = 0x7F2116C8u;
    // 7F2116C8: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2116CC:
    ctx->pc = 0x7F2116CCu;
    // 7F2116CC: bl      0x7F02A538
    {
            ctx->lr = 0x7F2116D0u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F2116D0:
    ctx->pc = 0x7F2116D0u;
    ctx->downcount -= 3;
    // 7F2116D0: addi    r0, r3, 15
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(15);

label_7F2116D4:
    ctx->pc = 0x7F2116D4u;
    // 7F2116D4: stw     r0, 3016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3016);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2116D8:
    ctx->pc = 0x7F2116D8u;
    // 7F2116D8: b       0x7F2116EC
    {
            goto label_7F2116EC;
    }

label_7F2116DC:
    ctx->pc = 0x7F2116DCu;
    ctx->downcount -= 4;
    // 7F2116DC: lha     r3, 2294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2294);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2116E0:
    ctx->pc = 0x7F2116E0u;
    // 7F2116E0: lwz     r0, 3024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2116E4:
    ctx->pc = 0x7F2116E4u;
    // 7F2116E4: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2116E8:
    ctx->pc = 0x7F2116E8u;
    // 7F2116E8: sth     r0, 2294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2116EC:
    ctx->pc = 0x7F2116ECu;
    ctx->downcount -= 16;
    // 7F2116EC: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2116F0:
    ctx->pc = 0x7F2116F0u;
    // 7F2116F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2116F4:
    ctx->pc = 0x7F2116F4u;
    // 7F2116F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2116F8:
    ctx->pc = 0x7F2116F8u;
    // 7F2116F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2116FC:
    ctx->pc = 0x7F2116FCu;
    // 7F2116FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211700:
    ctx->pc = 0x7F211700u;
    ctx->downcount -= 10;
    // 7F211700: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211704:
    ctx->pc = 0x7F211704u;
    // 7F211704: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211708:
    ctx->pc = 0x7F211708u;
    // 7F211708: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21170C:
    ctx->pc = 0x7F21170Cu;
    // 7F21170C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21170Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F211710:
    ctx->pc = 0x7F211710u;
    // 7F211710: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F211710u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F211710u);
        if (ctx->exception) return;
    }

label_7F211714:
    ctx->pc = 0x7F211714u;
    // 7F211714: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F211718:
    ctx->pc = 0x7F211718u;
    // 7F211718: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21171C:
    ctx->pc = 0x7F21171Cu;
    // 7F21171C: lwz     r3, 2336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211720:
    ctx->pc = 0x7F211720u;
    // 7F211720: cmpwi   r3, -1
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

label_7F211724:
    ctx->pc = 0x7F211724u;
    // 7F211724: bc    4, 2, 0x7F211814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211814;
        }
    }

label_7F211728:
    ctx->pc = 0x7F211728u;
    ctx->downcount -= 34;
    // 7F211728: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F21172C:
    ctx->pc = 0x7F21172Cu;
    // 7F21172C: addi    r3, r31, 2260
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2260);

label_7F211730:
    ctx->pc = 0x7F211730u;
    // 7F211730: stw     r0, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211734:
    ctx->pc = 0x7F211734u;
    // 7F211734: lwz     r4, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211738:
    ctx->pc = 0x7F211738u;
    // 7F211738: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21173C:
    ctx->pc = 0x7F21173Cu;
    // 7F21173C: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F211740:
    ctx->pc = 0x7F211740u;
    // 7F211740: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211744:
    ctx->pc = 0x7F211744u;
    // 7F211744: add   r5, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F211748:
    ctx->pc = 0x7F211748u;
    // 7F211748: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21174C:
    ctx->pc = 0x7F21174Cu;
    // 7F21174C: lfs     f1, 980(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21174Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211750:
    ctx->pc = 0x7F211750u;
    // 7F211750: lfs     f0, 980(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F211750u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211754:
    ctx->pc = 0x7F211754u;
    // 7F211754: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211754u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F211758:
    ctx->pc = 0x7F211758u;
    // 7F211758: stfs     f0, 2260(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211758u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2260);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21175C:
    ctx->pc = 0x7F21175Cu;
    // 7F21175C: lwz     r4, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211760:
    ctx->pc = 0x7F211760u;
    // 7F211760: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211764:
    ctx->pc = 0x7F211764u;
    // 7F211764: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F211768:
    ctx->pc = 0x7F211768u;
    // 7F211768: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21176C:
    ctx->pc = 0x7F21176Cu;
    // 7F21176C: add   r5, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F211770:
    ctx->pc = 0x7F211770u;
    // 7F211770: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F211774:
    ctx->pc = 0x7F211774u;
    // 7F211774: lfs     f1, 984(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F211774u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211778:
    ctx->pc = 0x7F211778u;
    // 7F211778: lfs     f0, 984(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F211778u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21177C:
    ctx->pc = 0x7F21177Cu;
    // 7F21177C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21177Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F211780:
    ctx->pc = 0x7F211780u;
    // 7F211780: stfs     f0, 2264(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211780u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2264);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211784:
    ctx->pc = 0x7F211784u;
    // 7F211784: lwz     r4, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211788:
    ctx->pc = 0x7F211788u;
    // 7F211788: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21178C:
    ctx->pc = 0x7F21178Cu;
    // 7F21178C: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_7F211790:
    ctx->pc = 0x7F211790u;
    // 7F211790: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211794:
    ctx->pc = 0x7F211794u;
    // 7F211794: add   r5, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F211798:
    ctx->pc = 0x7F211798u;
    // 7F211798: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21179C:
    ctx->pc = 0x7F21179Cu;
    // 7F21179C: lfs     f1, 988(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F21179Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2117A0:
    ctx->pc = 0x7F2117A0u;
    // 7F2117A0: lfs     f0, 988(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2117A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2117A4:
    ctx->pc = 0x7F2117A4u;
    // 7F2117A4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2117A4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2117A8:
    ctx->pc = 0x7F2117A8u;
    // 7F2117A8: stfs     f0, 2268(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2117A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2268);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2117AC:
    ctx->pc = 0x7F2117ACu;
    // 7F2117AC: bl      0x7F3CC594
    {
            ctx->lr = 0x7F2117B0u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F2117B0:
    ctx->pc = 0x7F2117B0u;
    ctx->downcount -= 4;
    // 7F2117B0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2117B0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F2117B4:
    ctx->pc = 0x7F2117B4u;
    // 7F2117B4: addi    r3, r31, 2260
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2260);

label_7F2117B8:
    ctx->pc = 0x7F2117B8u;
    // 7F2117B8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2117BC:
    ctx->pc = 0x7F2117BCu;
    // 7F2117BC: bl      0x7F114F50
    {
            ctx->lr = 0x7F2117C0u;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F2117C0:
    ctx->pc = 0x7F2117C0u;
    ctx->downcount -= 5;
    // 7F2117C0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2117C4:
    ctx->pc = 0x7F2117C4u;
    // 7F2117C4: addi    r3, r31, 2260
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2260);

label_7F2117C8:
    ctx->pc = 0x7F2117C8u;
    // 7F2117C8: lfs     f1, 16004(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2117C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16004);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2117CC:
    ctx->pc = 0x7F2117CCu;
    // 7F2117CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2117D0:
    ctx->pc = 0x7F2117D0u;
    // 7F2117D0: bl      0x800261FC
    {
            ctx->lr = 0x7F2117D4u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F2117D4:
    ctx->pc = 0x7F2117D4u;
    ctx->downcount -= 2;
    // 7F2117D4: addi    r3, r31, 2260
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2260);

label_7F2117D8:
    ctx->pc = 0x7F2117D8u;
    // 7F2117D8: bl      0x7F3CC594
    {
            ctx->lr = 0x7F2117DCu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F2117DC:
    ctx->pc = 0x7F2117DCu;
    ctx->downcount -= 29;
    // 7F2117DC: fdivs   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2117DCu)) return;
    ppc_fdivs(ctx, 0, 31, 1);

label_7F2117E0:
    ctx->pc = 0x7F2117E0u;
    // 7F2117E0: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F2117E4:
    ctx->pc = 0x7F2117E4u;
    // 7F2117E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2117E8:
    ctx->pc = 0x7F2117E8u;
    // 7F2117E8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2117EC:
    ctx->pc = 0x7F2117ECu;
    // 7F2117EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2117F0:
    ctx->pc = 0x7F2117F0u;
    // 7F2117F0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2117F4:
    ctx->pc = 0x7F2117F4u;
    // 7F2117F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2117F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2117F8:
    ctx->pc = 0x7F2117F8u;
    // 7F2117F8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2117FC:
    ctx->pc = 0x7F2117FCu;
    // 7F2117FC: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F211800:
    ctx->pc = 0x7F211800u;
    // 7F211800: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211800u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F211804:
    ctx->pc = 0x7F211804u;
    // 7F211804: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211808:
    ctx->pc = 0x7F211808u;
    // 7F211808: stw     r0, 3016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3016);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21180C:
    ctx->pc = 0x7F21180Cu;
    // 7F21180C: bl      0x7F042C94
    {
            ctx->lr = 0x7F211810u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F211810:
    ctx->pc = 0x7F211810u;
    ctx->downcount -= 1;
    // 7F211810: b       0x7F21189C
    {
            goto label_7F21189C;
    }

label_7F211814:
    ctx->pc = 0x7F211814u;
    ctx->downcount -= 9;
    // 7F211814: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F211818:
    ctx->pc = 0x7F211818u;
    // 7F211818: stw     r0, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21181C:
    ctx->pc = 0x7F21181Cu;
    // 7F21181C: lwz     r3, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211820:
    ctx->pc = 0x7F211820u;
    // 7F211820: rlwinm r0, r3, 30, 0, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 30u) & 0xC0000000u;
    }

label_7F211824:
    ctx->pc = 0x7F211824u;
    // 7F211824: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F211828:
    ctx->pc = 0x7F211828u;
    // 7F211828: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F21182C:
    ctx->pc = 0x7F21182Cu;
    // 7F21182C: rlwinm r0, r0, 2, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFFu;
    }

label_7F211830:
    ctx->pc = 0x7F211830u;
    // 7F211830: add.   r0, r0, r3
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

label_7F211834:
    ctx->pc = 0x7F211834u;
    // 7F211834: bc    4, 2, 0x7F211848
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211848;
        }
    }

label_7F211838:
    ctx->pc = 0x7F211838u;
    ctx->downcount -= 4;
    // 7F211838: addi    r4, r31, 964
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(964);

label_7F21183C:
    ctx->pc = 0x7F21183Cu;
    // 7F21183C: li      r3, 2094
    ctx->gpr[3] = (u32)(s32)(2094);

label_7F211840:
    ctx->pc = 0x7F211840u;
    // 7F211840: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F211844:
    ctx->pc = 0x7F211844u;
    // 7F211844: bl      0x7F0117B8
    {
            ctx->lr = 0x7F211848u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F211848:
    ctx->pc = 0x7F211848u;
    ctx->downcount -= 4;
    // 7F211848: lwz     r3, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21184C:
    ctx->pc = 0x7F21184Cu;
    // 7F21184C: lwz     r0, 3016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211850:
    ctx->pc = 0x7F211850u;
    // 7F211850: cmpw    r3, r0
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

label_7F211854:
    ctx->pc = 0x7F211854u;
    // 7F211854: bc    12, 0, 0x7F21186C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21186C;
        }
    }

label_7F211858:
    ctx->pc = 0x7F211858u;
    ctx->downcount -= 5;
    // 7F211858: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F21185C:
    ctx->pc = 0x7F21185Cu;
    // 7F21185C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F211860:
    ctx->pc = 0x7F211860u;
    // 7F211860: stw     r3, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F211864:
    ctx->pc = 0x7F211864u;
    // 7F211864: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211868:
    ctx->pc = 0x7F211868u;
    // 7F211868: b       0x7F21189C
    {
            goto label_7F21189C;
    }

label_7F21186C:
    ctx->pc = 0x7F21186Cu;
    ctx->downcount -= 12;
    // 7F21186C: lfs     f1, 964(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21186Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211870:
    ctx->pc = 0x7F211870u;
    // 7F211870: lfs     f0, 2260(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211870u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211874:
    ctx->pc = 0x7F211874u;
    // 7F211874: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211874u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F211878:
    ctx->pc = 0x7F211878u;
    // 7F211878: stfs     f0, 964(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211878u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21187C:
    ctx->pc = 0x7F21187Cu;
    // 7F21187C: lfs     f1, 968(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21187Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211880:
    ctx->pc = 0x7F211880u;
    // 7F211880: lfs     f0, 2264(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211880u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211884:
    ctx->pc = 0x7F211884u;
    // 7F211884: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211884u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F211888:
    ctx->pc = 0x7F211888u;
    // 7F211888: stfs     f0, 968(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211888u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21188C:
    ctx->pc = 0x7F21188Cu;
    // 7F21188C: lfs     f1, 972(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21188Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211890:
    ctx->pc = 0x7F211890u;
    // 7F211890: lfs     f0, 2268(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211890u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211894:
    ctx->pc = 0x7F211894u;
    // 7F211894: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211894u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F211898:
    ctx->pc = 0x7F211898u;
    // 7F211898: stfs     f0, 972(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211898u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21189C:
    ctx->pc = 0x7F21189Cu;
    ctx->downcount -= 8;
    // 7F21189C: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F21189Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F21189Cu);
        if (ctx->exception) return;
    }

label_7F2118A0:
    ctx->pc = 0x7F2118A0u;
    // 7F2118A0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2118A4:
    ctx->pc = 0x7F2118A4u;
    // 7F2118A4: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2118A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2118A8:
    ctx->pc = 0x7F2118A8u;
    // 7F2118A8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2118AC:
    ctx->pc = 0x7F2118ACu;
    // 7F2118AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2118B0:
    ctx->pc = 0x7F2118B0u;
    // 7F2118B0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2118B4:
    ctx->pc = 0x7F2118B4u;
    // 7F2118B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2118B8:
    ctx->pc = 0x7F2118B8u;
    ctx->downcount -= 24;
    // 7F2118B8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2118BC:
    ctx->pc = 0x7F2118BCu;
    // 7F2118BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2118C0:
    ctx->pc = 0x7F2118C0u;
    // 7F2118C0: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2118C4:
    ctx->pc = 0x7F2118C4u;
    // 7F2118C4: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2118C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2118C8:
    ctx->pc = 0x7F2118C8u;
    // 7F2118C8: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2118C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2118C8u);
        if (ctx->exception) return;
    }

label_7F2118CC:
    ctx->pc = 0x7F2118CCu;
    // 7F2118CC: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2118D0:
    ctx->pc = 0x7F2118D0u;
    // 7F2118D0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2118D4:
    ctx->pc = 0x7F2118D4u;
    // 7F2118D4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2118D8:
    ctx->pc = 0x7F2118D8u;
    // 7F2118D8: lwz     r3, 2336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2118DC:
    ctx->pc = 0x7F2118DCu;
    // 7F2118DC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2118E0:
    ctx->pc = 0x7F2118E0u;
    // 7F2118E0: stw     r0, 2336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2118E4:
    ctx->pc = 0x7F2118E4u;
    // 7F2118E4: lwz     r0, 2336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2118E8:
    ctx->pc = 0x7F2118E8u;
    // 7F2118E8: cmpwi   r0, 0
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

label_7F2118EC:
    ctx->pc = 0x7F2118ECu;
    // 7F2118EC: bc    4, 2, 0x7F211A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211A14;
        }
    }

label_7F2118F0:
    ctx->pc = 0x7F2118F0u;
    ctx->downcount -= 5;
    // 7F2118F0: addi    r4, r30, 964
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(964);

label_7F2118F4:
    ctx->pc = 0x7F2118F4u;
    // 7F2118F4: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F2118F8:
    ctx->pc = 0x7F2118F8u;
    // 7F2118F8: li      r3, 1893
    ctx->gpr[3] = (u32)(s32)(1893);

label_7F2118FC:
    ctx->pc = 0x7F2118FCu;
    // 7F2118FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F211900:
    ctx->pc = 0x7F211900u;
    // 7F211900: bl      0x7F0117B8
    {
            ctx->lr = 0x7F211904u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F211904:
    ctx->pc = 0x7F211904u;
    ctx->downcount -= 3;
    // 7F211904: addi    r3, r30, 836
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(836);

label_7F211908:
    ctx->pc = 0x7F211908u;
    // 7F211908: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F21190C:
    ctx->pc = 0x7F21190Cu;
    // 7F21190C: bl      0x7F21994C
    {
            ctx->lr = 0x7F211910u;
            ctx->pc = 0x7F21994Cu;
            return;
    }

label_7F211910:
    ctx->pc = 0x7F211910u;
    ctx->downcount -= 6;
    // 7F211910: lwz     r0, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211914:
    ctx->pc = 0x7F211914u;
    // 7F211914: addi    r3, r30, 964
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(964);

label_7F211918:
    ctx->pc = 0x7F211918u;
    // 7F211918: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F21191C:
    ctx->pc = 0x7F21191Cu;
    // 7F21191C: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_7F211920:
    ctx->pc = 0x7F211920u;
    // 7F211920: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F211924:
    ctx->pc = 0x7F211924u;
    // 7F211924: bl      0x7F3CC608
    {
            ctx->lr = 0x7F211928u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F211928:
    ctx->pc = 0x7F211928u;
    ctx->downcount -= 7;
    // 7F211928: lwz     r0, 2988(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21192C:
    ctx->pc = 0x7F21192Cu;
    // 7F21192C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21192Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F211930:
    ctx->pc = 0x7F211930u;
    // 7F211930: addi    r3, r30, 964
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(964);

label_7F211934:
    ctx->pc = 0x7F211934u;
    // 7F211934: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211938:
    ctx->pc = 0x7F211938u;
    // 7F211938: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_7F21193C:
    ctx->pc = 0x7F21193Cu;
    // 7F21193C: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F211940:
    ctx->pc = 0x7F211940u;
    // 7F211940: bl      0x7F3CC608
    {
            ctx->lr = 0x7F211944u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F211944:
    ctx->pc = 0x7F211944u;
    ctx->downcount -= 2;
    // 7F211944: fcmpo   cr0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F211944u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[1], true);

label_7F211948:
    ctx->pc = 0x7F211948u;
    // 7F211948: bc    4, 0, 0x7F211958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211958;
        }
    }

label_7F21194C:
    ctx->pc = 0x7F21194Cu;
    ctx->downcount -= 3;
    // 7F21194C: lwz     r0, 2984(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2984);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211950:
    ctx->pc = 0x7F211950u;
    // 7F211950: stw     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211954:
    ctx->pc = 0x7F211954u;
    // 7F211954: b       0x7F211960
    {
            goto label_7F211960;
    }

label_7F211958:
    ctx->pc = 0x7F211958u;
    ctx->downcount -= 2;
    // 7F211958: lwz     r0, 2988(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21195C:
    ctx->pc = 0x7F21195Cu;
    // 7F21195C: stw     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211960:
    ctx->pc = 0x7F211960u;
    ctx->downcount -= 9;
    // 7F211960: lwz     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211964:
    ctx->pc = 0x7F211964u;
    // 7F211964: addi    r4, r30, 964
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(964);

label_7F211968:
    ctx->pc = 0x7F211968u;
    // 7F211968: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21196C:
    ctx->pc = 0x7F21196Cu;
    // 7F21196C: stw     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211970:
    ctx->pc = 0x7F211970u;
    // 7F211970: lwz     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211974:
    ctx->pc = 0x7F211974u;
    // 7F211974: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211978:
    ctx->pc = 0x7F211978u;
    // 7F211978: addi    r3, r3, 980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(980);

label_7F21197C:
    ctx->pc = 0x7F21197Cu;
    // 7F21197C: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211980:
    ctx->pc = 0x7F211980u;
    // 7F211980: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F211984u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F211984:
    ctx->pc = 0x7F211984u;
    ctx->downcount -= 9;
    // 7F211984: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211984u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211988:
    ctx->pc = 0x7F211988u;
    // 7F211988: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211988u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21198C:
    ctx->pc = 0x7F21198Cu;
    // 7F21198C: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F21198Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F211990:
    ctx->pc = 0x7F211990u;
    // 7F211990: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211990u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F211994:
    ctx->pc = 0x7F211994u;
    // 7F211994: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F211998:
    ctx->pc = 0x7F211998u;
    // 7F211998: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211998u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F21199C:
    ctx->pc = 0x7F21199Cu;
    // 7F21199C: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2119A0:
    ctx->pc = 0x7F2119A0u;
    // 7F2119A0: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2119A4:
    ctx->pc = 0x7F2119A4u;
    // 7F2119A4: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F2119A8u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F2119A8:
    ctx->pc = 0x7F2119A8u;
    ctx->downcount -= 27;
    // 7F2119A8: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F2119AC:
    ctx->pc = 0x7F2119ACu;
    // 7F2119AC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2119B0:
    ctx->pc = 0x7F2119B0u;
    // 7F2119B0: sth     r3, 2294(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2294);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2119B4:
    ctx->pc = 0x7F2119B4u;
    // 7F2119B4: sth     r0, 2292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2292);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2119B8:
    ctx->pc = 0x7F2119B8u;
    // 7F2119B8: sth     r0, 2296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2119BC:
    ctx->pc = 0x7F2119BCu;
    // 7F2119BC: lwz     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2119C0:
    ctx->pc = 0x7F2119C0u;
    // 7F2119C0: lfs     f0, 964(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2119C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2119C4:
    ctx->pc = 0x7F2119C4u;
    // 7F2119C4: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2119C8:
    ctx->pc = 0x7F2119C8u;
    // 7F2119C8: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2119CC:
    ctx->pc = 0x7F2119CCu;
    // 7F2119CC: lfs     f1, 980(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2119CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2119D0:
    ctx->pc = 0x7F2119D0u;
    // 7F2119D0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2119D0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2119D4:
    ctx->pc = 0x7F2119D4u;
    // 7F2119D4: stfs     f0, 2260(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2119D4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2260);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2119D8:
    ctx->pc = 0x7F2119D8u;
    // 7F2119D8: lwz     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2119DC:
    ctx->pc = 0x7F2119DCu;
    // 7F2119DC: lfs     f0, 968(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2119DCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(968);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2119E0:
    ctx->pc = 0x7F2119E0u;
    // 7F2119E0: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2119E4:
    ctx->pc = 0x7F2119E4u;
    // 7F2119E4: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2119E8:
    ctx->pc = 0x7F2119E8u;
    // 7F2119E8: lfs     f1, 984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2119E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2119EC:
    ctx->pc = 0x7F2119ECu;
    // 7F2119EC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2119ECu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2119F0:
    ctx->pc = 0x7F2119F0u;
    // 7F2119F0: stfs     f0, 2264(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2119F0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2264);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2119F4:
    ctx->pc = 0x7F2119F4u;
    // 7F2119F4: lwz     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2119F8:
    ctx->pc = 0x7F2119F8u;
    // 7F2119F8: lfs     f0, 972(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2119F8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2119FC:
    ctx->pc = 0x7F2119FCu;
    // 7F2119FC: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211A00:
    ctx->pc = 0x7F211A00u;
    // 7F211A00: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211A04:
    ctx->pc = 0x7F211A04u;
    // 7F211A04: lfs     f1, 988(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211A04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211A08:
    ctx->pc = 0x7F211A08u;
    // 7F211A08: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211A08u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F211A0C:
    ctx->pc = 0x7F211A0Cu;
    // 7F211A0C: stfs     f0, 2268(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F211A0Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2268);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211A10:
    ctx->pc = 0x7F211A10u;
    // 7F211A10: b       0x7F211AFC
    {
            goto label_7F211AFC;
    }

label_7F211A14:
    ctx->pc = 0x7F211A14u;
    ctx->downcount -= 2;
    // 7F211A14: cmpwi   r0, -1
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

label_7F211A18:
    ctx->pc = 0x7F211A18u;
    // 7F211A18: bc    4, 2, 0x7F211AFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211AFC;
        }
    }

label_7F211A1C:
    ctx->pc = 0x7F211A1Cu;
    ctx->downcount -= 2;
    // 7F211A1C: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F211A20:
    ctx->pc = 0x7F211A20u;
    // 7F211A20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F211A24:
    ctx->pc = 0x7F211A24u;
    ctx->downcount -= 9;
    // 7F211A24: lwz     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211A28:
    ctx->pc = 0x7F211A28u;
    // 7F211A28: stw     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211A2C:
    ctx->pc = 0x7F211A2Cu;
    // 7F211A2C: lwz     r3, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211A30:
    // 7F211A30: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F211A34:
    ctx->pc = 0x7F211A34u;
    // 7F211A34: stw     r0, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211A38:
    ctx->pc = 0x7F211A38u;
    // 7F211A38: lwz     r3, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211A3C:
    ctx->pc = 0x7F211A3Cu;
    // 7F211A3C: lwz     r0, 2340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211A40:
    // 7F211A40: cmpw    r3, r0
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

label_7F211A44:
    // 7F211A44: bc    12, 0, 0x7F211A4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211A4C;
        }
    }

label_7F211A48:
    ctx->pc = 0x7F211A48u;
    ctx->downcount -= 1;
    // 7F211A48: stw     r4, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F211A4C:
    ctx->pc = 0x7F211A4Cu;
    ctx->downcount -= 6;
    // 7F211A4C: lwz     r5, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F211A50:
    // 7F211A50: rlwinm r3, r5, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F211A54:
    // 7F211A54: addi    r0, r3, 2664
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2664);

label_7F211A58:
    ctx->pc = 0x7F211A58u;
    // 7F211A58: lwzx    r0, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211A5C:
    // 7F211A5C: cmpwi   r0, 2
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

label_7F211A60:
    // 7F211A60: bc    12, 2, 0x7F211A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211A24u;
                return;
            }
            goto label_7F211A24;
        }
    }

label_7F211A64:
    ctx->pc = 0x7F211A64u;
    ctx->downcount -= 24;
    // 7F211A64: rlwinm r0, r5, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 4u) & 0xFFFFFFF0u;
    }

label_7F211A68:
    ctx->pc = 0x7F211A68u;
    // 7F211A68: addi    r5, r30, 2260
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(2260);

label_7F211A6C:
    ctx->pc = 0x7F211A6Cu;
    // 7F211A6C: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211A70:
    ctx->pc = 0x7F211A70u;
    // 7F211A70: lfs     f0, 980(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211A70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211A74:
    ctx->pc = 0x7F211A74u;
    // 7F211A74: stfs     f0, 964(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F211A74u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(964);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211A78:
    ctx->pc = 0x7F211A78u;
    // 7F211A78: lwz     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211A7C:
    ctx->pc = 0x7F211A7Cu;
    // 7F211A7C: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211A80:
    ctx->pc = 0x7F211A80u;
    // 7F211A80: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211A84:
    ctx->pc = 0x7F211A84u;
    // 7F211A84: lfs     f0, 984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211A84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211A88:
    ctx->pc = 0x7F211A88u;
    // 7F211A88: stfs     f0, 968(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F211A88u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(968);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211A8C:
    ctx->pc = 0x7F211A8Cu;
    // 7F211A8C: lwz     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211A90:
    ctx->pc = 0x7F211A90u;
    // 7F211A90: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211A94:
    ctx->pc = 0x7F211A94u;
    // 7F211A94: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211A98:
    ctx->pc = 0x7F211A98u;
    // 7F211A98: lfs     f0, 988(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211A98u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211A9C:
    ctx->pc = 0x7F211A9Cu;
    // 7F211A9C: stfs     f0, 972(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F211A9Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(972);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211AA0:
    ctx->pc = 0x7F211AA0u;
    // 7F211AA0: lwz     r3, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211AA4:
    ctx->pc = 0x7F211AA4u;
    // 7F211AA4: lwz     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211AA8:
    ctx->pc = 0x7F211AA8u;
    // 7F211AA8: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F211AAC:
    ctx->pc = 0x7F211AACu;
    // 7F211AAC: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211AB0:
    ctx->pc = 0x7F211AB0u;
    // 7F211AB0: addi    r3, r3, 980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(980);

label_7F211AB4:
    ctx->pc = 0x7F211AB4u;
    // 7F211AB4: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_7F211AB8:
    ctx->pc = 0x7F211AB8u;
    // 7F211AB8: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211ABC:
    ctx->pc = 0x7F211ABCu;
    // 7F211ABC: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F211AC0:
    ctx->pc = 0x7F211AC0u;
    // 7F211AC0: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F211AC4u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F211AC4:
    ctx->pc = 0x7F211AC4u;
    ctx->downcount -= 9;
    // 7F211AC4: lfs     f1, 2260(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F211AC4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211AC8:
    ctx->pc = 0x7F211AC8u;
    // 7F211AC8: lfs     f0, 2268(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F211AC8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211ACC:
    ctx->pc = 0x7F211ACCu;
    // 7F211ACC: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F211ACCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F211AD0:
    ctx->pc = 0x7F211AD0u;
    // 7F211AD0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211AD0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F211AD4:
    ctx->pc = 0x7F211AD4u;
    // 7F211AD4: stfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211AD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F211AD8:
    ctx->pc = 0x7F211AD8u;
    // 7F211AD8: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211AD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F211ADC:
    ctx->pc = 0x7F211ADCu;
    // 7F211ADC: lwz     r3, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211AE0:
    ctx->pc = 0x7F211AE0u;
    // 7F211AE0: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211AE4:
    ctx->pc = 0x7F211AE4u;
    // 7F211AE4: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F211AE8u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F211AE8:
    ctx->pc = 0x7F211AE8u;
    ctx->downcount -= 5;
    // 7F211AE8: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F211AEC:
    ctx->pc = 0x7F211AECu;
    // 7F211AEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F211AF0:
    ctx->pc = 0x7F211AF0u;
    // 7F211AF0: sth     r3, 2294(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2294);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F211AF4:
    ctx->pc = 0x7F211AF4u;
    // 7F211AF4: sth     r0, 2292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2292);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F211AF8:
    ctx->pc = 0x7F211AF8u;
    // 7F211AF8: sth     r0, 2296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F211AFC:
    ctx->pc = 0x7F211AFCu;
    ctx->downcount -= 2;
    // 7F211AFC: cmpwi   r31, 0
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

label_7F211B00:
    ctx->pc = 0x7F211B00u;
    // 7F211B00: bc    12, 2, 0x7F211B7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211B7C;
        }
    }

label_7F211B04:
    ctx->pc = 0x7F211B04u;
    ctx->downcount -= 6;
    // 7F211B04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F211B08:
    ctx->pc = 0x7F211B08u;
    // 7F211B08: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F211B0C:
    ctx->pc = 0x7F211B0Cu;
    // 7F211B0C: stw     r3, 2336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F211B10:
    ctx->pc = 0x7F211B10u;
    // 7F211B10: addi    r3, r30, 2260
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2260);

label_7F211B14:
    ctx->pc = 0x7F211B14u;
    // 7F211B14: stw     r0, 2328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211B18:
    ctx->pc = 0x7F211B18u;
    // 7F211B18: bl      0x7F3CC594
    {
            ctx->lr = 0x7F211B1Cu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F211B1C:
    ctx->pc = 0x7F211B1Cu;
    ctx->downcount -= 4;
    // 7F211B1C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F211B1Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F211B20:
    ctx->pc = 0x7F211B20u;
    // 7F211B20: addi    r3, r30, 2260
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2260);

label_7F211B24:
    ctx->pc = 0x7F211B24u;
    // 7F211B24: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211B28:
    ctx->pc = 0x7F211B28u;
    // 7F211B28: bl      0x7F114F50
    {
            ctx->lr = 0x7F211B2Cu;
            ctx->pc = 0x7F114F50u;
            return;
    }

label_7F211B2C:
    ctx->pc = 0x7F211B2Cu;
    ctx->downcount -= 5;
    // 7F211B2C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F211B30:
    ctx->pc = 0x7F211B30u;
    // 7F211B30: addi    r3, r30, 2260
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2260);

label_7F211B34:
    ctx->pc = 0x7F211B34u;
    // 7F211B34: lfs     f1, 16008(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F211B34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211B38:
    ctx->pc = 0x7F211B38u;
    // 7F211B38: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211B3C:
    ctx->pc = 0x7F211B3Cu;
    // 7F211B3C: bl      0x800261FC
    {
            ctx->lr = 0x7F211B40u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F211B40:
    ctx->pc = 0x7F211B40u;
    ctx->downcount -= 2;
    // 7F211B40: addi    r3, r30, 2260
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(2260);

label_7F211B44:
    ctx->pc = 0x7F211B44u;
    // 7F211B44: bl      0x7F3CC594
    {
            ctx->lr = 0x7F211B48u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F211B48:
    ctx->pc = 0x7F211B48u;
    ctx->downcount -= 29;
    // 7F211B48: fdivs   f0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F211B48u)) return;
    ppc_fdivs(ctx, 0, 31, 1);

label_7F211B4C:
    ctx->pc = 0x7F211B4Cu;
    // 7F211B4C: addi    r3, r30, 36
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(36);

label_7F211B50:
    ctx->pc = 0x7F211B50u;
    // 7F211B50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F211B54:
    ctx->pc = 0x7F211B54u;
    // 7F211B54: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F211B58:
    ctx->pc = 0x7F211B58u;
    // 7F211B58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F211B5C:
    ctx->pc = 0x7F211B5Cu;
    // 7F211B5C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F211B60:
    ctx->pc = 0x7F211B60u;
    // 7F211B60: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211B60u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F211B64:
    ctx->pc = 0x7F211B64u;
    // 7F211B64: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F211B68:
    ctx->pc = 0x7F211B68u;
    // 7F211B68: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F211B6C:
    ctx->pc = 0x7F211B6Cu;
    // 7F211B6C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211B6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F211B70:
    ctx->pc = 0x7F211B70u;
    // 7F211B70: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211B74:
    ctx->pc = 0x7F211B74u;
    // 7F211B74: stw     r0, 3016(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3016);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211B78:
    ctx->pc = 0x7F211B78u;
    // 7F211B78: bl      0x7F042C94
    {
            ctx->lr = 0x7F211B7Cu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F211B7C:
    ctx->pc = 0x7F211B7Cu;
    ctx->downcount -= 18;
    // 7F211B7C: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F211B7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F211B7Cu);
        if (ctx->exception) return;
    }

label_7F211B80:
    ctx->pc = 0x7F211B80u;
    // 7F211B80: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211B80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F211B84:
    ctx->pc = 0x7F211B84u;
    // 7F211B84: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F211B88:
    ctx->pc = 0x7F211B88u;
    // 7F211B88: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211B8C:
    ctx->pc = 0x7F211B8Cu;
    // 7F211B8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211B90:
    ctx->pc = 0x7F211B90u;
    // 7F211B90: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F211B94:
    ctx->pc = 0x7F211B94u;
    // 7F211B94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211B98:
    ctx->pc = 0x7F211B98u;
    ctx->downcount -= 12;
    // 7F211B98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211B9C:
    ctx->pc = 0x7F211B9Cu;
    // 7F211B9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211BA0:
    ctx->pc = 0x7F211BA0u;
    // 7F211BA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211BA4:
    ctx->pc = 0x7F211BA4u;
    // 7F211BA4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F211BA8:
    ctx->pc = 0x7F211BA8u;
    // 7F211BA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211BAC:
    ctx->pc = 0x7F211BACu;
    // 7F211BAC: lwz     r3, 2336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211BB0:
    ctx->pc = 0x7F211BB0u;
    // 7F211BB0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F211BB4:
    ctx->pc = 0x7F211BB4u;
    // 7F211BB4: stw     r0, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211BB8:
    ctx->pc = 0x7F211BB8u;
    // 7F211BB8: lwz     r3, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211BBC:
    ctx->pc = 0x7F211BBCu;
    // 7F211BBC: lwz     r0, 3016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211BC0:
    ctx->pc = 0x7F211BC0u;
    // 7F211BC0: cmpw    r3, r0
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

label_7F211BC4:
    ctx->pc = 0x7F211BC4u;
    // 7F211BC4: bc    12, 0, 0x7F211C08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211C08;
        }
    }

label_7F211BC8:
    ctx->pc = 0x7F211BC8u;
    ctx->downcount -= 6;
    // 7F211BC8: lwz     r0, 3004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211BCC:
    ctx->pc = 0x7F211BCCu;
    // 7F211BCC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F211BD0:
    ctx->pc = 0x7F211BD0u;
    // 7F211BD0: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211BD4:
    ctx->pc = 0x7F211BD4u;
    // 7F211BD4: lwz     r0, 2664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2664);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211BD8:
    ctx->pc = 0x7F211BD8u;
    // 7F211BD8: cmpwi   r0, 0
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

label_7F211BDC:
    ctx->pc = 0x7F211BDCu;
    // 7F211BDC: bc    4, 2, 0x7F211BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211BF4;
        }
    }

label_7F211BE0:
    ctx->pc = 0x7F211BE0u;
    ctx->downcount -= 5;
    // 7F211BE0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F211BE4:
    ctx->pc = 0x7F211BE4u;
    // 7F211BE4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F211BE8:
    ctx->pc = 0x7F211BE8u;
    // 7F211BE8: stw     r3, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F211BEC:
    ctx->pc = 0x7F211BECu;
    // 7F211BEC: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211BF0:
    ctx->pc = 0x7F211BF0u;
    // 7F211BF0: b       0x7F211C60
    {
            goto label_7F211C60;
    }

label_7F211BF4:
    ctx->pc = 0x7F211BF4u;
    ctx->downcount -= 5;
    // 7F211BF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F211BF8:
    ctx->pc = 0x7F211BF8u;
    // 7F211BF8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F211BFC:
    ctx->pc = 0x7F211BFCu;
    // 7F211BFC: stw     r3, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F211C00:
    ctx->pc = 0x7F211C00u;
    // 7F211C00: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211C04:
    ctx->pc = 0x7F211C04u;
    // 7F211C04: b       0x7F211C60
    {
            goto label_7F211C60;
    }

label_7F211C08:
    ctx->pc = 0x7F211C08u;
    ctx->downcount -= 6;
    // 7F211C08: rlwinm r0, r3, 30, 0, 1
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 30u) & 0xC0000000u;
    }

label_7F211C0C:
    ctx->pc = 0x7F211C0Cu;
    // 7F211C0C: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F211C10:
    ctx->pc = 0x7F211C10u;
    // 7F211C10: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F211C14:
    ctx->pc = 0x7F211C14u;
    // 7F211C14: rlwinm r0, r0, 2, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFFu;
    }

label_7F211C18:
    ctx->pc = 0x7F211C18u;
    // 7F211C18: add.   r0, r0, r3
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

label_7F211C1C:
    ctx->pc = 0x7F211C1Cu;
    // 7F211C1C: bc    4, 2, 0x7F211C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211C30;
        }
    }

label_7F211C20:
    ctx->pc = 0x7F211C20u;
    ctx->downcount -= 4;
    // 7F211C20: addi    r4, r31, 964
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(964);

label_7F211C24:
    ctx->pc = 0x7F211C24u;
    // 7F211C24: li      r3, 2094
    ctx->gpr[3] = (u32)(s32)(2094);

label_7F211C28:
    ctx->pc = 0x7F211C28u;
    // 7F211C28: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F211C2C:
    ctx->pc = 0x7F211C2Cu;
    // 7F211C2C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F211C30u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F211C30:
    ctx->pc = 0x7F211C30u;
    ctx->downcount -= 12;
    // 7F211C30: lfs     f1, 964(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211C34:
    ctx->pc = 0x7F211C34u;
    // 7F211C34: lfs     f0, 2260(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C34u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2260);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211C38:
    ctx->pc = 0x7F211C38u;
    // 7F211C38: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211C38u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F211C3C:
    ctx->pc = 0x7F211C3Cu;
    // 7F211C3C: stfs     f0, 964(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C3Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211C40:
    ctx->pc = 0x7F211C40u;
    // 7F211C40: lfs     f1, 968(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211C44:
    ctx->pc = 0x7F211C44u;
    // 7F211C44: lfs     f0, 2264(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2264);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211C48:
    ctx->pc = 0x7F211C48u;
    // 7F211C48: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211C48u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F211C4C:
    ctx->pc = 0x7F211C4Cu;
    // 7F211C4C: stfs     f0, 968(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211C50:
    ctx->pc = 0x7F211C50u;
    // 7F211C50: lfs     f1, 972(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211C54:
    ctx->pc = 0x7F211C54u;
    // 7F211C54: lfs     f0, 2268(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C54u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2268);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211C58:
    ctx->pc = 0x7F211C58u;
    // 7F211C58: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211C58u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F211C5C:
    ctx->pc = 0x7F211C5Cu;
    // 7F211C5C: stfs     f0, 972(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F211C5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F211C60:
    ctx->pc = 0x7F211C60u;
    ctx->downcount -= 6;
    // 7F211C60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211C64:
    ctx->pc = 0x7F211C64u;
    // 7F211C64: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F211C68:
    ctx->pc = 0x7F211C68u;
    // 7F211C68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211C6C:
    ctx->pc = 0x7F211C6Cu;
    // 7F211C6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F211C70:
    ctx->pc = 0x7F211C70u;
    // 7F211C70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211C74:
    ctx->pc = 0x7F211C74u;
    ctx->downcount -= 11;
    // 7F211C74: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211C78:
    ctx->pc = 0x7F211C78u;
    // 7F211C78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211C7C:
    ctx->pc = 0x7F211C7Cu;
    // 7F211C7C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211C80:
    ctx->pc = 0x7F211C80u;
    // 7F211C80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211C84:
    ctx->pc = 0x7F211C84u;
    // 7F211C84: lwz     r3, 2336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211C88:
    ctx->pc = 0x7F211C88u;
    // 7F211C88: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F211C8C:
    ctx->pc = 0x7F211C8Cu;
    // 7F211C8C: stw     r0, 2336(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211C90:
    ctx->pc = 0x7F211C90u;
    // 7F211C90: lwz     r3, 2336(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211C94:
    ctx->pc = 0x7F211C94u;
    // 7F211C94: lwz     r0, 3016(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(3016);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211C98:
    ctx->pc = 0x7F211C98u;
    // 7F211C98: cmpw    r3, r0
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

label_7F211C9C:
    ctx->pc = 0x7F211C9Cu;
    // 7F211C9C: bc    4, 1, 0x7F211CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211CC0;
        }
    }

label_7F211CA0:
    ctx->pc = 0x7F211CA0u;
    ctx->downcount -= 8;
    // 7F211CA0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F211CA4:
    ctx->pc = 0x7F211CA4u;
    // 7F211CA4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F211CA8:
    ctx->pc = 0x7F211CA8u;
    // 7F211CA8: stw     r3, 2336(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F211CAC:
    ctx->pc = 0x7F211CACu;
    // 7F211CAC: addi    r4, r6, 964
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(964);

label_7F211CB0:
    ctx->pc = 0x7F211CB0u;
    // 7F211CB0: li      r3, 1830
    ctx->gpr[3] = (u32)(s32)(1830);

label_7F211CB4:
    ctx->pc = 0x7F211CB4u;
    // 7F211CB4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F211CB8:
    ctx->pc = 0x7F211CB8u;
    // 7F211CB8: stw     r0, 2328(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211CBC:
    ctx->pc = 0x7F211CBCu;
    // 7F211CBC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F211CC0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F211CC0:
    ctx->pc = 0x7F211CC0u;
    ctx->downcount -= 5;
    // 7F211CC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211CC4:
    ctx->pc = 0x7F211CC4u;
    // 7F211CC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211CC8:
    ctx->pc = 0x7F211CC8u;
    // 7F211CC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F211CCC:
    ctx->pc = 0x7F211CCCu;
    // 7F211CCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211CD0:
    ctx->pc = 0x7F211CD0u;
    ctx->downcount -= 9;
    // 7F211CD0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211CD4:
    ctx->pc = 0x7F211CD4u;
    // 7F211CD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211CD8:
    ctx->pc = 0x7F211CD8u;
    // 7F211CD8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F211CDC:
    ctx->pc = 0x7F211CDCu;
    // 7F211CDC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211CE0:
    ctx->pc = 0x7F211CE0u;
    // 7F211CE0: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F211CE4:
    ctx->pc = 0x7F211CE4u;
    // 7F211CE4: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F211CE8:
    ctx->pc = 0x7F211CE8u;
    // 7F211CE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211CEC:
    ctx->pc = 0x7F211CECu;
    // 7F211CEC: addi    r3, r31, 964
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(964);

label_7F211CF0:
    ctx->pc = 0x7F211CF0u;
    // 7F211CF0: bl      0x7F3CC608
    {
            ctx->lr = 0x7F211CF4u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F211CF4:
    ctx->pc = 0x7F211CF4u;
    ctx->downcount -= 4;
    // 7F211CF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F211CF8:
    ctx->pc = 0x7F211CF8u;
    // 7F211CF8: lfs     f0, 16012(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211CF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16012);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211CFC:
    ctx->pc = 0x7F211CFCu;
    // 7F211CFC: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F211CFCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F211D00:
    ctx->pc = 0x7F211D00u;
    // 7F211D00: bc    4, 1, 0x7F211D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211D88;
        }
    }

label_7F211D04:
    ctx->pc = 0x7F211D04u;
    ctx->downcount -= 4;
    // 7F211D04: addi    r4, r31, 964
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(964);

label_7F211D08:
    ctx->pc = 0x7F211D08u;
    // 7F211D08: li      r3, 1893
    ctx->gpr[3] = (u32)(s32)(1893);

label_7F211D0C:
    ctx->pc = 0x7F211D0Cu;
    // 7F211D0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F211D10:
    ctx->pc = 0x7F211D10u;
    // 7F211D10: bl      0x7F0117B8
    {
            ctx->lr = 0x7F211D14u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F211D14:
    ctx->pc = 0x7F211D14u;
    ctx->downcount -= 3;
    // 7F211D14: addi    r3, r31, 836
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(836);

label_7F211D18:
    ctx->pc = 0x7F211D18u;
    // 7F211D18: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F211D1C:
    ctx->pc = 0x7F211D1Cu;
    // 7F211D1C: bl      0x7F21994C
    {
            ctx->lr = 0x7F211D20u;
            ctx->pc = 0x7F21994Cu;
            return;
    }

label_7F211D20:
    ctx->pc = 0x7F211D20u;
    ctx->downcount -= 12;
    // 7F211D20: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F211D24:
    ctx->pc = 0x7F211D24u;
    // 7F211D24: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F211D28:
    ctx->pc = 0x7F211D28u;
    // 7F211D28: stw     r0, 2336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211D2C:
    ctx->pc = 0x7F211D2Cu;
    // 7F211D2C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F211D30:
    ctx->pc = 0x7F211D30u;
    // 7F211D30: addi    r3, r3, -5708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5708);

label_7F211D34:
    ctx->pc = 0x7F211D34u;
    // 7F211D34: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F211D38:
    ctx->pc = 0x7F211D38u;
    // 7F211D38: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211D3C:
    ctx->pc = 0x7F211D3Cu;
    // 7F211D3C: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211D40:
    ctx->pc = 0x7F211D40u;
    // 7F211D40: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F211D44:
    ctx->pc = 0x7F211D44u;
    // 7F211D44: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_7F211D48:
    ctx->pc = 0x7F211D48u;
    // 7F211D48: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F211D4C:
    ctx->pc = 0x7F211D4Cu;
    // 7F211D4C: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F211D50u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F211D50:
    ctx->pc = 0x7F211D50u;
    ctx->downcount -= 9;
    // 7F211D50: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211D50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F211D54:
    ctx->pc = 0x7F211D54u;
    // 7F211D54: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211D54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211D58:
    ctx->pc = 0x7F211D58u;
    // 7F211D58: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F211D58u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F211D5C:
    ctx->pc = 0x7F211D5Cu;
    // 7F211D5C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F211D5Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F211D60:
    ctx->pc = 0x7F211D60u;
    // 7F211D60: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211D60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F211D64:
    ctx->pc = 0x7F211D64u;
    // 7F211D64: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211D64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F211D68:
    ctx->pc = 0x7F211D68u;
    // 7F211D68: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211D6C:
    ctx->pc = 0x7F211D6Cu;
    // 7F211D6C: lwz     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211D70:
    ctx->pc = 0x7F211D70u;
    // 7F211D70: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F211D74u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F211D74:
    ctx->pc = 0x7F211D74u;
    ctx->downcount -= 5;
    // 7F211D74: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F211D78:
    ctx->pc = 0x7F211D78u;
    // 7F211D78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F211D7C:
    ctx->pc = 0x7F211D7Cu;
    // 7F211D7C: sth     r3, 2294(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2294);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F211D80:
    ctx->pc = 0x7F211D80u;
    // 7F211D80: sth     r0, 2292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2292);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F211D84:
    ctx->pc = 0x7F211D84u;
    // 7F211D84: sth     r0, 2296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F211D88:
    ctx->pc = 0x7F211D88u;
    ctx->downcount -= 6;
    // 7F211D88: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211D8C:
    ctx->pc = 0x7F211D8Cu;
    // 7F211D8C: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F211D90:
    ctx->pc = 0x7F211D90u;
    // 7F211D90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211D94:
    ctx->pc = 0x7F211D94u;
    // 7F211D94: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F211D98:
    ctx->pc = 0x7F211D98u;
    // 7F211D98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211D9C:
    ctx->pc = 0x7F211D9Cu;
    ctx->downcount -= 11;
    // 7F211D9C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211DA0:
    ctx->pc = 0x7F211DA0u;
    // 7F211DA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211DA4:
    ctx->pc = 0x7F211DA4u;
    // 7F211DA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211DA8:
    ctx->pc = 0x7F211DA8u;
    // 7F211DA8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F211DAC:
    ctx->pc = 0x7F211DACu;
    // 7F211DAC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211DB0:
    ctx->pc = 0x7F211DB0u;
    // 7F211DB0: lwz     r3, 3020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211DB4:
    ctx->pc = 0x7F211DB4u;
    // 7F211DB4: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F211DB8:
    ctx->pc = 0x7F211DB8u;
    // 7F211DB8: stw     r0, 3020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211DBC:
    ctx->pc = 0x7F211DBCu;
    // 7F211DBC: lwz     r0, 3020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211DC0:
    ctx->pc = 0x7F211DC0u;
    // 7F211DC0: cmpwi   r0, 0
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

label_7F211DC4:
    ctx->pc = 0x7F211DC4u;
    // 7F211DC4: bc    4, 0, 0x7F211E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211E00;
        }
    }

label_7F211DC8:
    ctx->pc = 0x7F211DC8u;
    ctx->downcount -= 2;
    // 7F211DC8: lwz     r3, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211DCC:
    ctx->pc = 0x7F211DCCu;
    // 7F211DCC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F211DD0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F211DD0:
    ctx->pc = 0x7F211DD0u;
    ctx->downcount -= 12;
    // 7F211DD0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F211DD4:
    ctx->pc = 0x7F211DD4u;
    // 7F211DD4: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F211DD8:
    ctx->pc = 0x7F211DD8u;
    // 7F211DD8: stw     r0, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211DDC:
    ctx->pc = 0x7F211DDCu;
    // 7F211DDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F211DE0:
    ctx->pc = 0x7F211DE0u;
    // 7F211DE0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F211DE4:
    ctx->pc = 0x7F211DE4u;
    // 7F211DE4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F211DE8:
    ctx->pc = 0x7F211DE8u;
    // 7F211DE8: lwz     r0, 2332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2332);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211DEC:
    ctx->pc = 0x7F211DECu;
    // 7F211DEC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F211DF0:
    ctx->pc = 0x7F211DF0u;
    // 7F211DF0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F211DF4:
    ctx->pc = 0x7F211DF4u;
    // 7F211DF4: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F211DF8:
    ctx->pc = 0x7F211DF8u;
    // 7F211DF8: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211DFC:
    ctx->pc = 0x7F211DFCu;
    // 7F211DFC: bl      0x7F042C94
    {
            ctx->lr = 0x7F211E00u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F211E00:
    ctx->pc = 0x7F211E00u;
    ctx->downcount -= 4;
    // 7F211E00: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F211E04:
    ctx->pc = 0x7F211E04u;
    // 7F211E04: addi    r3, r31, 964
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(964);

label_7F211E08:
    ctx->pc = 0x7F211E08u;
    // 7F211E08: addi    r4, r4, -5708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F211E0C:
    ctx->pc = 0x7F211E0Cu;
    // 7F211E0C: bl      0x7F3CC608
    {
            ctx->lr = 0x7F211E10u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F211E10:
    ctx->pc = 0x7F211E10u;
    ctx->downcount -= 4;
    // 7F211E10: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F211E14:
    ctx->pc = 0x7F211E14u;
    // 7F211E14: lfs     f0, 16016(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F211E14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16016);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F211E18:
    ctx->pc = 0x7F211E18u;
    // 7F211E18: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F211E18u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F211E1C:
    ctx->pc = 0x7F211E1Cu;
    // 7F211E1C: bc    4, 1, 0x7F211E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211E38;
        }
    }

label_7F211E20:
    ctx->pc = 0x7F211E20u;
    ctx->downcount -= 4;
    // 7F211E20: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F211E24:
    ctx->pc = 0x7F211E24u;
    // 7F211E24: lwz     r0, 19604(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19604);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211E28:
    ctx->pc = 0x7F211E28u;
    // 7F211E28: cmpwi   r0, 0
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

label_7F211E2C:
    ctx->pc = 0x7F211E2Cu;
    // 7F211E2C: bc    4, 1, 0x7F211E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211E38;
        }
    }

label_7F211E30:
    ctx->pc = 0x7F211E30u;
    ctx->downcount -= 2;
    // 7F211E30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F211E34:
    ctx->pc = 0x7F211E34u;
    // 7F211E34: stw     r0, 3020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211E38:
    ctx->pc = 0x7F211E38u;
    ctx->downcount -= 6;
    // 7F211E38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211E3C:
    ctx->pc = 0x7F211E3Cu;
    // 7F211E3C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F211E40:
    ctx->pc = 0x7F211E40u;
    // 7F211E40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211E44:
    ctx->pc = 0x7F211E44u;
    // 7F211E44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F211E48:
    ctx->pc = 0x7F211E48u;
    // 7F211E48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211E4C:
    ctx->pc = 0x7F211E4Cu;
    ctx->downcount -= 11;
    // 7F211E4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211E50:
    ctx->pc = 0x7F211E50u;
    // 7F211E50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211E54:
    ctx->pc = 0x7F211E54u;
    // 7F211E54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211E58:
    ctx->pc = 0x7F211E58u;
    // 7F211E58: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F211E5C:
    ctx->pc = 0x7F211E5Cu;
    // 7F211E5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211E60:
    ctx->pc = 0x7F211E60u;
    // 7F211E60: lwz     r3, 3020(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3020);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211E64:
    ctx->pc = 0x7F211E64u;
    // 7F211E64: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F211E68:
    ctx->pc = 0x7F211E68u;
    // 7F211E68: stw     r0, 3020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211E6C:
    ctx->pc = 0x7F211E6Cu;
    // 7F211E6C: lwz     r0, 3020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211E70:
    ctx->pc = 0x7F211E70u;
    // 7F211E70: cmpwi   r0, 0
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

label_7F211E74:
    ctx->pc = 0x7F211E74u;
    // 7F211E74: bc    4, 0, 0x7F211EB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211EB0;
        }
    }

label_7F211E78:
    ctx->pc = 0x7F211E78u;
    ctx->downcount -= 2;
    // 7F211E78: lwz     r3, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211E7C:
    ctx->pc = 0x7F211E7Cu;
    // 7F211E7C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F211E80u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F211E80:
    ctx->pc = 0x7F211E80u;
    ctx->downcount -= 12;
    // 7F211E80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F211E84:
    ctx->pc = 0x7F211E84u;
    // 7F211E84: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F211E88:
    ctx->pc = 0x7F211E88u;
    // 7F211E88: stw     r0, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211E8C:
    ctx->pc = 0x7F211E8Cu;
    // 7F211E8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F211E90:
    ctx->pc = 0x7F211E90u;
    // 7F211E90: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F211E94:
    ctx->pc = 0x7F211E94u;
    // 7F211E94: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F211E98:
    ctx->pc = 0x7F211E98u;
    // 7F211E98: lwz     r0, 2332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2332);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211E9C:
    ctx->pc = 0x7F211E9Cu;
    // 7F211E9C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F211EA0:
    ctx->pc = 0x7F211EA0u;
    // 7F211EA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F211EA4:
    ctx->pc = 0x7F211EA4u;
    // 7F211EA4: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F211EA8:
    ctx->pc = 0x7F211EA8u;
    // 7F211EA8: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211EAC:
    ctx->pc = 0x7F211EACu;
    // 7F211EAC: bl      0x7F042C94
    {
            ctx->lr = 0x7F211EB0u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F211EB0:
    ctx->pc = 0x7F211EB0u;
    ctx->downcount -= 6;
    // 7F211EB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211EB4:
    ctx->pc = 0x7F211EB4u;
    // 7F211EB4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F211EB8:
    ctx->pc = 0x7F211EB8u;
    // 7F211EB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211EBC:
    ctx->pc = 0x7F211EBCu;
    // 7F211EBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F211EC0:
    ctx->pc = 0x7F211EC0u;
    // 7F211EC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211EC4:
    ctx->pc = 0x7F211EC4u;
    ctx->downcount -= 8;
    // 7F211EC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211EC8:
    ctx->pc = 0x7F211EC8u;
    // 7F211EC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211ECC:
    ctx->pc = 0x7F211ECCu;
    // 7F211ECC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211ED0:
    ctx->pc = 0x7F211ED0u;
    // 7F211ED0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F211ED4:
    ctx->pc = 0x7F211ED4u;
    // 7F211ED4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211ED8:
    ctx->pc = 0x7F211ED8u;
    // 7F211ED8: lwz     r3, 2328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F211EDC:
    ctx->pc = 0x7F211EDCu;
    // 7F211EDC: cmpwi   r3, 4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F211EE0:
    ctx->pc = 0x7F211EE0u;
    // 7F211EE0: bc    12, 2, 0x7F211F20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211F20;
        }
    }

label_7F211EE4:
    ctx->pc = 0x7F211EE4u;
    ctx->downcount -= 2;
    // 7F211EE4: cmpwi   r3, 8
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

label_7F211EE8:
    ctx->pc = 0x7F211EE8u;
    // 7F211EE8: bc    12, 2, 0x7F211F20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211F20;
        }
    }

label_7F211EEC:
    ctx->pc = 0x7F211EECu;
    ctx->downcount -= 3;
    // 7F211EEC: addi    r0, r3, -5
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-5);

label_7F211EF0:
    ctx->pc = 0x7F211EF0u;
    // 7F211EF0: cmplwi  r0, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F211EF4:
    ctx->pc = 0x7F211EF4u;
    // 7F211EF4: bc    4, 1, 0x7F211F20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211F20;
        }
    }

label_7F211EF8:
    ctx->pc = 0x7F211EF8u;
    ctx->downcount -= 6;
    // 7F211EF8: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211EFC:
    ctx->pc = 0x7F211EFCu;
    // 7F211EFC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F211F00:
    ctx->pc = 0x7F211F00u;
    // 7F211F00: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F211F04:
    ctx->pc = 0x7F211F04u;
    // 7F211F04: lwz     r0, 2344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211F08:
    ctx->pc = 0x7F211F08u;
    // 7F211F08: cmpwi   r0, 0
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

label_7F211F0C:
    ctx->pc = 0x7F211F0Cu;
    // 7F211F0C: bc    12, 2, 0x7F211F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211F18;
        }
    }

label_7F211F10:
    ctx->pc = 0x7F211F10u;
    ctx->downcount -= 2;
    // 7F211F10: cmpwi   r0, 2
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

label_7F211F14:
    ctx->pc = 0x7F211F14u;
    // 7F211F14: bc    4, 2, 0x7F211F20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F211F20;
        }
    }

label_7F211F18:
    ctx->pc = 0x7F211F18u;
    ctx->downcount -= 2;
    // 7F211F18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211F1C:
    ctx->pc = 0x7F211F1Cu;
    // 7F211F1C: bl      0x7F211CD0
    {
            ctx->lr = 0x7F211F20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211CD0u;
                return;
            }
            goto label_7F211CD0;
    }

label_7F211F20:
    ctx->pc = 0x7F211F20u;
    ctx->downcount -= 3;
    // 7F211F20: lwz     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211F24:
    ctx->pc = 0x7F211F24u;
    // 7F211F24: cmplwi  r0, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F211F28:
    ctx->pc = 0x7F211F28u;
    // 7F211F28: bc    12, 1, 0x7F211F94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F211F94;
        }
    }

label_7F211F2C:
    ctx->pc = 0x7F211F2Cu;
    ctx->downcount -= 7;
    // 7F211F2C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F211F30:
    ctx->pc = 0x7F211F30u;
    // 7F211F30: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F211F34:
    ctx->pc = 0x7F211F34u;
    // 7F211F34: addi    r3, r3, -2304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-2304);

label_7F211F38:
    ctx->pc = 0x7F211F38u;
    // 7F211F38: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211F3C:
    ctx->pc = 0x7F211F3Cu;
    // 7F211F3C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F211F40:
    ctx->pc = 0x7F211F40u;
    // 7F211F40: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F211F44:
    ctx->pc = 0x7F211F44u;
    ctx->downcount -= 2;
    // 7F211F44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211F48:
    ctx->pc = 0x7F211F48u;
    // 7F211F48: bl      0x7F211C74
    {
            ctx->lr = 0x7F211F4Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211C74u;
                return;
            }
            goto label_7F211C74;
    }

label_7F211F4C:
    ctx->pc = 0x7F211F4Cu;
    ctx->downcount -= 1;
    // 7F211F4C: b       0x7F211F94
    {
            goto label_7F211F94;
    }

label_7F211F50:
    ctx->pc = 0x7F211F50u;
    ctx->downcount -= 2;
    // 7F211F50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211F54:
    ctx->pc = 0x7F211F54u;
    // 7F211F54: bl      0x7F2118B8
    {
            ctx->lr = 0x7F211F58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2118B8u;
                return;
            }
            goto label_7F2118B8;
    }

label_7F211F58:
    ctx->pc = 0x7F211F58u;
    ctx->downcount -= 1;
    // 7F211F58: b       0x7F211F94
    {
            goto label_7F211F94;
    }

label_7F211F5C:
    ctx->pc = 0x7F211F5Cu;
    ctx->downcount -= 2;
    // 7F211F5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211F60:
    ctx->pc = 0x7F211F60u;
    // 7F211F60: bl      0x7F211700
    {
            ctx->lr = 0x7F211F64u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211700u;
                return;
            }
            goto label_7F211700;
    }

label_7F211F64:
    ctx->pc = 0x7F211F64u;
    ctx->downcount -= 1;
    // 7F211F64: b       0x7F211F94
    {
            goto label_7F211F94;
    }

label_7F211F68:
    ctx->pc = 0x7F211F68u;
    ctx->downcount -= 2;
    // 7F211F68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211F6C:
    ctx->pc = 0x7F211F6Cu;
    // 7F211F6C: bl      0x7F211B98
    {
            ctx->lr = 0x7F211F70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211B98u;
                return;
            }
            goto label_7F211B98;
    }

label_7F211F70:
    ctx->pc = 0x7F211F70u;
    ctx->downcount -= 1;
    // 7F211F70: b       0x7F211F94
    {
            goto label_7F211F94;
    }

label_7F211F74:
    ctx->pc = 0x7F211F74u;
    ctx->downcount -= 2;
    // 7F211F74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211F78:
    ctx->pc = 0x7F211F78u;
    // 7F211F78: bl      0x7F21151C
    {
            ctx->lr = 0x7F211F7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21151Cu;
                return;
            }
            goto label_7F21151C;
    }

label_7F211F7C:
    ctx->pc = 0x7F211F7Cu;
    ctx->downcount -= 1;
    // 7F211F7C: b       0x7F211F94
    {
            goto label_7F211F94;
    }

label_7F211F80:
    ctx->pc = 0x7F211F80u;
    ctx->downcount -= 2;
    // 7F211F80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211F84:
    ctx->pc = 0x7F211F84u;
    // 7F211F84: bl      0x7F211D9C
    {
            ctx->lr = 0x7F211F88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211D9Cu;
                return;
            }
            goto label_7F211D9C;
    }

label_7F211F88:
    ctx->pc = 0x7F211F88u;
    ctx->downcount -= 1;
    // 7F211F88: b       0x7F211F94
    {
            goto label_7F211F94;
    }

label_7F211F8C:
    ctx->pc = 0x7F211F8Cu;
    ctx->downcount -= 2;
    // 7F211F8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F211F90:
    ctx->pc = 0x7F211F90u;
    // 7F211F90: bl      0x7F211E4C
    {
            ctx->lr = 0x7F211F94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211E4Cu;
                return;
            }
            goto label_7F211E4C;
    }

label_7F211F94:
    ctx->pc = 0x7F211F94u;
    ctx->downcount -= 6;
    // 7F211F94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211F98:
    ctx->pc = 0x7F211F98u;
    // 7F211F98: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F211F9C:
    ctx->pc = 0x7F211F9Cu;
    // 7F211F9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F211FA0:
    ctx->pc = 0x7F211FA0u;
    // 7F211FA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F211FA4:
    ctx->pc = 0x7F211FA4u;
    // 7F211FA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F211FA8:
    ctx->pc = 0x7F211FA8u;
    ctx->downcount -= 33;
    // 7F211FA8: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F211FAC:
    ctx->pc = 0x7F211FACu;
    // 7F211FAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F211FB0:
    ctx->pc = 0x7F211FB0u;
    // 7F211FB0: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211FB4:
    ctx->pc = 0x7F211FB4u;
    // 7F211FB4: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F211FB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F211FB8:
    ctx->pc = 0x7F211FB8u;
    // 7F211FB8: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F211FB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F211FB8u);
        if (ctx->exception) return;
    }

label_7F211FBC:
    ctx->pc = 0x7F211FBCu;
    // 7F211FBC: stmw     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F211FC0:
    ctx->pc = 0x7F211FC0u;
    // 7F211FC0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F211FC4:
    ctx->pc = 0x7F211FC4u;
    // 7F211FC4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F211FC8:
    ctx->pc = 0x7F211FC8u;
    // 7F211FC8: addi    r6, r4, 16020
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(16020);

label_7F211FCC:
    ctx->pc = 0x7F211FCCu;
    // 7F211FCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F211FD0:
    ctx->pc = 0x7F211FD0u;
    // 7F211FD0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211FD4:
    ctx->pc = 0x7F211FD4u;
    // 7F211FD4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F211FD8:
    ctx->pc = 0x7F211FD8u;
    // 7F211FD8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211FDC:
    ctx->pc = 0x7F211FDCu;
    // 7F211FDC: stw     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F211FE0:
    ctx->pc = 0x7F211FE0u;
    // 7F211FE0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F211FE4:
    ctx->pc = 0x7F211FE4u;
    // 7F211FE4: lwz     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F211FE8:
    ctx->pc = 0x7F211FE8u;
    // 7F211FE8: lwz     r4, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F211FEC:
    ctx->pc = 0x7F211FECu;
    // 7F211FEC: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F211FF0:
    ctx->pc = 0x7F211FF0u;
    // 7F211FF0: and   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F211FF4:
    ctx->pc = 0x7F211FF4u;
    // 7F211FF4: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F211FF8:
    ctx->pc = 0x7F211FF8u;
    // 7F211FF8: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F211FFC:
    ctx->pc = 0x7F211FFCu;
    // 7F211FFC: or.   r0, r3, r0
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

label_7F212000:
    ctx->pc = 0x7F212000u;
    // 7F212000: bc    12, 2, 0x7F212544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212544;
        }
    }

label_7F212004:
    ctx->pc = 0x7F212004u;
    ctx->downcount -= 3;
    // 7F212004: lwz     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212008:
    ctx->pc = 0x7F212008u;
    // 7F212008: cmpwi   r0, 7
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

label_7F21200C:
    ctx->pc = 0x7F21200Cu;
    // 7F21200C: bc    12, 2, 0x7F212544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212544;
        }
    }

label_7F212010:
    ctx->pc = 0x7F212010u;
    ctx->downcount -= 3;
    // 7F212010: lwz     r3, 3028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3028);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212014:
    ctx->pc = 0x7F212014u;
    // 7F212014: cmpwi   r3, 0
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

label_7F212018:
    ctx->pc = 0x7F212018u;
    // 7F212018: bc    4, 1, 0x7F2120FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2120FC;
        }
    }

label_7F21201C:
    ctx->pc = 0x7F21201Cu;
    ctx->downcount -= 5;
    // 7F21201C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F212020:
    ctx->pc = 0x7F212020u;
    // 7F212020: stw     r0, 3028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3028);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212024:
    ctx->pc = 0x7F212024u;
    // 7F212024: lwz     r0, 3008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212028:
    ctx->pc = 0x7F212028u;
    // 7F212028: cmpwi   r0, 0
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

label_7F21202C:
    ctx->pc = 0x7F21202Cu;
    // 7F21202C: bc    12, 2, 0x7F212040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212040;
        }
    }

label_7F212030:
    ctx->pc = 0x7F212030u;
    ctx->downcount -= 4;
    // 7F212030: lwz     r4, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F212034:
    ctx->pc = 0x7F212034u;
    // 7F212034: lwz     r3, 2300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212038:
    ctx->pc = 0x7F212038u;
    // 7F212038: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_7F21203C:
    ctx->pc = 0x7F21203Cu;
    // 7F21203C: bl      0x7F1C34D8
    {
            ctx->lr = 0x7F212040u;
            ctx->pc = 0x7F1C34D8u;
            return;
    }

label_7F212040:
    ctx->pc = 0x7F212040u;
    ctx->downcount -= 3;
    // 7F212040: lwz     r0, 3028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3028);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212044:
    ctx->pc = 0x7F212044u;
    // 7F212044: cmpwi   r0, 0
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

label_7F212048:
    ctx->pc = 0x7F212048u;
    // 7F212048: bc    4, 2, 0x7F2126C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2126C8;
        }
    }

label_7F21204C:
    ctx->pc = 0x7F21204Cu;
    ctx->downcount -= 6;
    // 7F21204C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212050:
    ctx->pc = 0x7F212050u;
    // 7F212050: stw     r0, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212054:
    ctx->pc = 0x7F212054u;
    // 7F212054: stw     r0, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212058:
    ctx->pc = 0x7F212058u;
    // 7F212058: lwz     r0, 3008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21205C:
    ctx->pc = 0x7F21205Cu;
    // 7F21205C: cmpwi   r0, 0
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

label_7F212060:
    ctx->pc = 0x7F212060u;
    // 7F212060: bc    12, 2, 0x7F2120F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2120F0;
        }
    }

label_7F212064:
    ctx->pc = 0x7F212064u;
    ctx->downcount -= 2;
    // 7F212064: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F212068:
    ctx->pc = 0x7F212068u;
    // 7F212068: bl      0x7F3CBEAC
    {
            ctx->lr = 0x7F21206Cu;
            ctx->pc = 0x7F3CBEACu;
            return;
    }

label_7F21206C:
    ctx->pc = 0x7F21206Cu;
    ctx->downcount -= 2;
    // 7F21206C: lis     r3, 12288
    ctx->gpr[3] = ((u32)(s32)(12288) << 16);

label_7F212070:
    ctx->pc = 0x7F212070u;
    // 7F212070: bl      0x7F0208F8
    {
            ctx->lr = 0x7F212074u;
            ctx->pc = 0x7F0208F8u;
            return;
    }

label_7F212074:
    ctx->pc = 0x7F212074u;
    ctx->downcount -= 2;
    // 7F212074: li      r3, 63
    ctx->gpr[3] = (u32)(s32)(63);

label_7F212078:
    ctx->pc = 0x7F212078u;
    // 7F212078: bl      0x7F01808C
    {
            ctx->lr = 0x7F21207Cu;
            ctx->pc = 0x7F01808Cu;
            return;
    }

label_7F21207C:
    ctx->pc = 0x7F21207Cu;
    ctx->downcount -= 5;
    // 7F21207C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212080:
    ctx->pc = 0x7F212080u;
    // 7F212080: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F212084:
    ctx->pc = 0x7F212084u;
    // 7F212084: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F212088:
    ctx->pc = 0x7F212088u;
    // 7F212088: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21208C:
    ctx->pc = 0x7F21208Cu;
    // 7F21208C: bl      0x7F042E08
    {
            ctx->lr = 0x7F212090u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F212090:
    ctx->pc = 0x7F212090u;
    ctx->downcount -= 3;
    // 7F212090: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F212094:
    ctx->pc = 0x7F212094u;
    // 7F212094: addi    r3, r3, -32768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F212098:
    ctx->pc = 0x7F212098u;
    // 7F212098: bl      0x7F2126F8
    {
            ctx->lr = 0x7F21209Cu;
            goto label_7F2126F8;
    }

label_7F21209C:
    ctx->pc = 0x7F21209Cu;
    ctx->downcount -= 10;
    // 7F21209C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2120A0:
    ctx->pc = 0x7F2120A0u;
    // 7F2120A0: lwz     r0, 3040(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3040);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2120A4:
    ctx->pc = 0x7F2120A4u;
    // 7F2120A4: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2120A8:
    ctx->pc = 0x7F2120A8u;
    // 7F2120A8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2120AC:
    ctx->pc = 0x7F2120ACu;
    // 7F2120AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2120B0:
    ctx->pc = 0x7F2120B0u;
    // 7F2120B0: sth     r0, 296(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2120B4:
    ctx->pc = 0x7F2120B4u;
    // 7F2120B4: lwz     r0, 3036(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3036);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2120B8:
    ctx->pc = 0x7F2120B8u;
    // 7F2120B8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2120BC:
    ctx->pc = 0x7F2120BCu;
    // 7F2120BC: sth     r0, 298(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(298);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2120C0:
    ctx->pc = 0x7F2120C0u;
    // 7F2120C0: bl      0x7F02D178
    {
            ctx->lr = 0x7F2120C4u;
            ctx->pc = 0x7F02D178u;
            return;
    }

label_7F2120C4:
    ctx->pc = 0x7F2120C4u;
    ctx->downcount -= 5;
    // 7F2120C4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2120C8:
    ctx->pc = 0x7F2120C8u;
    // 7F2120C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2120CC:
    ctx->pc = 0x7F2120CCu;
    // 7F2120CC: stw     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2120D0:
    ctx->pc = 0x7F2120D0u;
    // 7F2120D0: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2120D4:
    ctx->pc = 0x7F2120D4u;
    // 7F2120D4: bl      0x7F0259FC
    {
            ctx->lr = 0x7F2120D8u;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F2120D8:
    ctx->pc = 0x7F2120D8u;
    ctx->downcount -= 3;
    // 7F2120D8: lwz     r3, 2300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2120DC:
    ctx->pc = 0x7F2120DCu;
    // 7F2120DC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F2120E0:
    ctx->pc = 0x7F2120E0u;
    // 7F2120E0: bl      0x7F1C3504
    {
            ctx->lr = 0x7F2120E4u;
            ctx->pc = 0x7F1C3504u;
            return;
    }

label_7F2120E4:
    ctx->pc = 0x7F2120E4u;
    ctx->downcount -= 3;
    // 7F2120E4: lwz     r4, 3012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3012);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2120E8:
    ctx->pc = 0x7F2120E8u;
    // 7F2120E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2120EC:
    ctx->pc = 0x7F2120ECu;
    // 7F2120EC: bl      0x7F211478
    {
            ctx->lr = 0x7F2120F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211478u;
                return;
            }
            goto label_7F211478;
    }

label_7F2120F0:
    ctx->pc = 0x7F2120F0u;
    ctx->downcount -= 2;
    // 7F2120F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2120F4:
    ctx->pc = 0x7F2120F4u;
    // 7F2120F4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2120F8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2120F8:
    ctx->pc = 0x7F2120F8u;
    ctx->downcount -= 1;
    // 7F2120F8: b       0x7F2126C8
    {
            goto label_7F2126C8;
    }

label_7F2120FC:
    ctx->pc = 0x7F2120FCu;
    ctx->downcount -= 9;
    // 7F2120FC: lwz     r6, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F212100:
    ctx->pc = 0x7F212100u;
    // 7F212100: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F212104:
    ctx->pc = 0x7F212104u;
    // 7F212104: lwz     r7, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F212108:
    ctx->pc = 0x7F212108u;
    // 7F212108: and   r4, r6, r5
    {
        ctx->gpr[4] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F21210C:
    ctx->pc = 0x7F21210Cu;
    // 7F21210C: and   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F212110:
    ctx->pc = 0x7F212110u;
    // 7F212110: xor   r3, r0, r5
    {
        ctx->gpr[3] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F212114:
    ctx->pc = 0x7F212114u;
    // 7F212114: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F212118:
    ctx->pc = 0x7F212118u;
    // 7F212118: or.   r0, r3, r0
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

label_7F21211C:
    ctx->pc = 0x7F21211Cu;
    // 7F21211C: bc    12, 2, 0x7F2121A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2121A8;
        }
    }

label_7F212120:
    ctx->pc = 0x7F212120u;
    ctx->downcount -= 5;
    // 7F212120: stw     r5, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F212124:
    ctx->pc = 0x7F212124u;
    // 7F212124: stw     r5, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F212128:
    ctx->pc = 0x7F212128u;
    // 7F212128: lwz     r0, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21212C:
    ctx->pc = 0x7F21212Cu;
    // 7F21212C: cmplwi  r0, 0x0000
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

label_7F212130:
    ctx->pc = 0x7F212130u;
    // 7F212130: bc    4, 2, 0x7F21219C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21219C;
        }
    }

label_7F212134:
    ctx->pc = 0x7F212134u;
    ctx->downcount -= 8;
    // 7F212134: lwz     r3, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212138:
    ctx->pc = 0x7F212138u;
    // 7F212138: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F21213C:
    ctx->pc = 0x7F21213Cu;
    // 7F21213C: addi    r4, r31, 836
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(836);

label_7F212140:
    ctx->pc = 0x7F212140u;
    // 7F212140: stw     r3, 2332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2332);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212144:
    ctx->pc = 0x7F212144u;
    // 7F212144: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212148:
    ctx->pc = 0x7F212148u;
    // 7F212148: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21214C:
    ctx->pc = 0x7F21214Cu;
    // 7F21214C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F212150:
    ctx->pc = 0x7F212150u;
    // 7F212150: bl      0x80025A3C
    {
            ctx->lr = 0x7F212154u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F212154:
    ctx->pc = 0x7F212154u;
    ctx->downcount -= 9;
    // 7F212154: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F212158:
    ctx->pc = 0x7F212158u;
    // 7F212158: lfs     f1, 888(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212158u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21215C:
    ctx->pc = 0x7F21215Cu;
    // 7F21215C: addi    r4, r3, 16028
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16028);

label_7F212160:
    ctx->pc = 0x7F212160u;
    // 7F212160: addi    r3, r31, 836
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(836);

label_7F212164:
    ctx->pc = 0x7F212164u;
    // 7F212164: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F212164u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F212168:
    ctx->pc = 0x7F212168u;
    // 7F212168: addi    r4, r31, 240
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(240);

label_7F21216C:
    ctx->pc = 0x7F21216Cu;
    // 7F21216C: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F21216Cu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F212170:
    ctx->pc = 0x7F212170u;
    // 7F212170: stfs     f0, 888(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212170u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(888);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212174:
    ctx->pc = 0x7F212174u;
    // 7F212174: bl      0x7F228688
    {
            ctx->lr = 0x7F212178u;
            ctx->pc = 0x7F228688u;
            return;
    }

label_7F212178:
    ctx->pc = 0x7F212178u;
    ctx->downcount -= 9;
    // 7F212178: stw     r3, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21217C:
    ctx->pc = 0x7F21217Cu;
    // 7F21217C: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F212180:
    ctx->pc = 0x7F212180u;
    // 7F212180: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212184:
    ctx->pc = 0x7F212184u;
    // 7F212184: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F212188:
    ctx->pc = 0x7F212188u;
    // 7F212188: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F21218C:
    ctx->pc = 0x7F21218Cu;
    // 7F21218C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F212190:
    ctx->pc = 0x7F212190u;
    // 7F212190: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F212194:
    ctx->pc = 0x7F212194u;
    // 7F212194: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F212198:
    ctx->pc = 0x7F212198u;
    // 7F212198: bl      0x7F042C94
    {
            ctx->lr = 0x7F21219Cu;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F21219C:
    ctx->pc = 0x7F21219Cu;
    ctx->downcount -= 3;
    // 7F21219C: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F2121A0:
    ctx->pc = 0x7F2121A0u;
    // 7F2121A0: stw     r0, 3020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2121A4:
    ctx->pc = 0x7F2121A4u;
    // 7F2121A4: b       0x7F212534
    {
            goto label_7F212534;
    }

label_7F2121A8:
    ctx->pc = 0x7F2121A8u;
    ctx->downcount -= 8;
    // 7F2121A8: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F2121AC:
    ctx->pc = 0x7F2121ACu;
    // 7F2121AC: li      r0, 16384
    ctx->gpr[0] = (u32)(s32)(16384);

label_7F2121B0:
    ctx->pc = 0x7F2121B0u;
    // 7F2121B0: and   r3, r7, r3
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[3];
    }

label_7F2121B4:
    ctx->pc = 0x7F2121B4u;
    // 7F2121B4: and   r0, r6, r0
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[0];
    }

label_7F2121B8:
    ctx->pc = 0x7F2121B8u;
    // 7F2121B8: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F2121BC:
    ctx->pc = 0x7F2121BCu;
    // 7F2121BC: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F2121C0:
    ctx->pc = 0x7F2121C0u;
    // 7F2121C0: or.   r0, r3, r0
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

label_7F2121C4:
    ctx->pc = 0x7F2121C4u;
    // 7F2121C4: bc    12, 2, 0x7F212250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212250;
        }
    }

label_7F2121C8:
    ctx->pc = 0x7F2121C8u;
    ctx->downcount -= 5;
    // 7F2121C8: stw     r5, 636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(636);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2121CC:
    ctx->pc = 0x7F2121CCu;
    // 7F2121CC: stw     r5, 632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(632);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2121D0:
    ctx->pc = 0x7F2121D0u;
    // 7F2121D0: lwz     r0, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2121D4:
    ctx->pc = 0x7F2121D4u;
    // 7F2121D4: cmplwi  r0, 0x0000
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

label_7F2121D8:
    ctx->pc = 0x7F2121D8u;
    // 7F2121D8: bc    4, 2, 0x7F212244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212244;
        }
    }

label_7F2121DC:
    ctx->pc = 0x7F2121DCu;
    ctx->downcount -= 8;
    // 7F2121DC: lwz     r3, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2121E0:
    ctx->pc = 0x7F2121E0u;
    // 7F2121E0: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F2121E4:
    ctx->pc = 0x7F2121E4u;
    // 7F2121E4: addi    r4, r31, 836
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(836);

label_7F2121E8:
    ctx->pc = 0x7F2121E8u;
    // 7F2121E8: stw     r3, 2332(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2332);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2121EC:
    ctx->pc = 0x7F2121ECu;
    // 7F2121EC: stw     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2121F0:
    ctx->pc = 0x7F2121F0u;
    // 7F2121F0: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2121F4:
    ctx->pc = 0x7F2121F4u;
    // 7F2121F4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2121F8:
    ctx->pc = 0x7F2121F8u;
    // 7F2121F8: bl      0x80025A3C
    {
            ctx->lr = 0x7F2121FCu;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F2121FC:
    ctx->pc = 0x7F2121FCu;
    ctx->downcount -= 9;
    // 7F2121FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F212200:
    ctx->pc = 0x7F212200u;
    // 7F212200: lfs     f1, 888(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212200u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F212204:
    ctx->pc = 0x7F212204u;
    // 7F212204: addi    r4, r3, 16028
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16028);

label_7F212208:
    ctx->pc = 0x7F212208u;
    // 7F212208: addi    r3, r31, 836
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(836);

label_7F21220C:
    ctx->pc = 0x7F21220Cu;
    // 7F21220C: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F21220Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F212210:
    ctx->pc = 0x7F212210u;
    // 7F212210: addi    r4, r31, 240
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(240);

label_7F212214:
    ctx->pc = 0x7F212214u;
    // 7F212214: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F212214u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F212218:
    ctx->pc = 0x7F212218u;
    // 7F212218: stfs     f0, 888(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212218u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(888);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21221C:
    ctx->pc = 0x7F21221Cu;
    // 7F21221C: bl      0x7F2368F4
    {
            ctx->lr = 0x7F212220u;
            ctx->pc = 0x7F2368F4u;
            return;
    }

label_7F212220:
    ctx->pc = 0x7F212220u;
    ctx->downcount -= 9;
    // 7F212220: stw     r3, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212224:
    ctx->pc = 0x7F212224u;
    // 7F212224: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F212228:
    ctx->pc = 0x7F212228u;
    // 7F212228: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21222C:
    ctx->pc = 0x7F21222Cu;
    // 7F21222C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F212230:
    ctx->pc = 0x7F212230u;
    // 7F212230: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F212234:
    ctx->pc = 0x7F212234u;
    // 7F212234: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F212238:
    ctx->pc = 0x7F212238u;
    // 7F212238: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F21223C:
    ctx->pc = 0x7F21223Cu;
    // 7F21223C: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F212240:
    ctx->pc = 0x7F212240u;
    // 7F212240: bl      0x7F042C94
    {
            ctx->lr = 0x7F212244u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F212244:
    ctx->pc = 0x7F212244u;
    ctx->downcount -= 3;
    // 7F212244: li      r0, 500
    ctx->gpr[0] = (u32)(s32)(500);

label_7F212248:
    ctx->pc = 0x7F212248u;
    // 7F212248: stw     r0, 3020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21224C:
    ctx->pc = 0x7F21224Cu;
    // 7F21224C: b       0x7F212534
    {
            goto label_7F212534;
    }

label_7F212250:
    ctx->pc = 0x7F212250u;
    ctx->downcount -= 6;
    // 7F212250: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F212254:
    ctx->pc = 0x7F212254u;
    // 7F212254: xor   r0, r4, r5
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F212258:
    ctx->pc = 0x7F212258u;
    // 7F212258: and   r3, r7, r3
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[3];
    }

label_7F21225C:
    ctx->pc = 0x7F21225Cu;
    // 7F21225C: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F212260:
    ctx->pc = 0x7F212260u;
    // 7F212260: or.   r0, r3, r0
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

label_7F212264:
    ctx->pc = 0x7F212264u;
    // 7F212264: bc    12, 2, 0x7F212534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212534;
        }
    }

label_7F212268:
    ctx->pc = 0x7F212268u;
    ctx->downcount -= 4;
    // 7F212268: addi    r4, r31, 964
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(964);

label_7F21226C:
    ctx->pc = 0x7F21226Cu;
    // 7F21226C: li      r3, 1707
    ctx->gpr[3] = (u32)(s32)(1707);

label_7F212270:
    ctx->pc = 0x7F212270u;
    // 7F212270: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F212274:
    ctx->pc = 0x7F212274u;
    // 7F212274: bl      0x7F0117B8
    {
            ctx->lr = 0x7F212278u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F212278:
    ctx->pc = 0x7F212278u;
    ctx->downcount -= 12;
    // 7F212278: lfs     f0, 964(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212278u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21227C:
    ctx->pc = 0x7F21227Cu;
    // 7F21227C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F212280:
    ctx->pc = 0x7F212280u;
    // 7F212280: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F212284:
    ctx->pc = 0x7F212284u;
    // 7F212284: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F212288:
    ctx->pc = 0x7F212288u;
    // 7F212288: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212288u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21228C:
    ctx->pc = 0x7F21228Cu;
    // 7F21228C: lfs     f1, 968(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21228Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F212290:
    ctx->pc = 0x7F212290u;
    // 7F212290: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212290u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F212294:
    ctx->pc = 0x7F212294u;
    // 7F212294: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F212294u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F212298:
    ctx->pc = 0x7F212298u;
    // 7F212298: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212298u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F21229C:
    ctx->pc = 0x7F21229Cu;
    // 7F21229C: lfs     f0, 972(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21229Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2122A0:
    ctx->pc = 0x7F2122A0u;
    // 7F2122A0: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2122A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2122A4:
    ctx->pc = 0x7F2122A4u;
    // 7F2122A4: bl      0x7F1E8728
    {
            ctx->lr = 0x7F2122A8u;
            ctx->pc = 0x7F1E8728u;
            return;
    }

label_7F2122A8:
    ctx->pc = 0x7F2122A8u;
    ctx->downcount -= 1;
    // 7F2122A8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F2122AC:
    ctx->downcount -= 2;
    // 7F2122AC: addi    r3, r31, 964
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(964);

label_7F2122B0:
    // 7F2122B0: bl      0x7F1D2694
    {
            ctx->lr = 0x7F2122B4u;
            ctx->pc = 0x7F1D2694u;
            return;
    }

label_7F2122B4:
    ctx->downcount -= 3;
    // 7F2122B4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2122B8:
    // 7F2122B8: cmpwi   r30, 4
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

label_7F2122BC:
    // 7F2122BC: bc    12, 0, 0x7F2122AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2122ACu;
                return;
            }
            goto label_7F2122AC;
        }
    }

label_7F2122C0:
    ctx->pc = 0x7F2122C0u;
    ctx->downcount -= 30;
    // 7F2122C0: li      r10, 200
    ctx->gpr[10] = (u32)(s32)(200);

label_7F2122C4:
    ctx->pc = 0x7F2122C4u;
    // 7F2122C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2122C8:
    ctx->pc = 0x7F2122C8u;
    // 7F2122C8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2122CC:
    ctx->pc = 0x7F2122CCu;
    // 7F2122CC: li      r12, 300
    ctx->gpr[12] = (u32)(s32)(300);

label_7F2122D0:
    ctx->pc = 0x7F2122D0u;
    // 7F2122D0: li      r11, 100
    ctx->gpr[11] = (u32)(s32)(100);

label_7F2122D4:
    ctx->pc = 0x7F2122D4u;
    // 7F2122D4: li      r9, 10
    ctx->gpr[9] = (u32)(s32)(10);

label_7F2122D8:
    ctx->pc = 0x7F2122D8u;
    // 7F2122D8: li      r8, 20
    ctx->gpr[8] = (u32)(s32)(20);

label_7F2122DC:
    ctx->pc = 0x7F2122DCu;
    // 7F2122DC: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F2122E0:
    ctx->pc = 0x7F2122E0u;
    // 7F2122E0: stw     r3, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2122E4:
    ctx->pc = 0x7F2122E4u;
    // 7F2122E4: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F2122E8:
    ctx->pc = 0x7F2122E8u;
    // 7F2122E8: lwz     r3, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2122EC:
    ctx->pc = 0x7F2122ECu;
    // 7F2122EC: addi    r6, r31, 900
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(900);

label_7F2122F0:
    ctx->pc = 0x7F2122F0u;
    // 7F2122F0: stw     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2122F4:
    ctx->pc = 0x7F2122F4u;
    // 7F2122F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2122F8:
    ctx->pc = 0x7F2122F8u;
    // 7F2122F8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2122FC:
    ctx->pc = 0x7F2122FCu;
    // 7F2122FC: stw     r12, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F212300:
    ctx->pc = 0x7F212300u;
    // 7F212300: stw     r11, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F212304:
    ctx->pc = 0x7F212304u;
    // 7F212304: stw     r10, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F212308:
    ctx->pc = 0x7F212308u;
    // 7F212308: stw     r9, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F21230C:
    ctx->pc = 0x7F21230Cu;
    // 7F21230C: stw     r8, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F212310:
    ctx->pc = 0x7F212310u;
    // 7F212310: stw     r7, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F212314:
    ctx->pc = 0x7F212314u;
    // 7F212314: stw     r10, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F212318:
    ctx->pc = 0x7F212318u;
    // 7F212318: stw     r3, 948(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(948);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21231C:
    ctx->pc = 0x7F21231Cu;
    // 7F21231C: stw     r0, 952(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(952);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212320:
    ctx->pc = 0x7F212320u;
    // 7F212320: lwz     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212324:
    ctx->pc = 0x7F212324u;
    // 7F212324: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212328:
    ctx->pc = 0x7F212328u;
    // 7F212328: stw     r3, 956(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(956);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21232C:
    ctx->pc = 0x7F21232Cu;
    // 7F21232C: stw     r0, 960(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212330:
    ctx->pc = 0x7F212330u;
    // 7F212330: lwz     r3, 2308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2308);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212334:
    ctx->pc = 0x7F212334u;
    // 7F212334: bl      0x7F1AD100
    {
            ctx->lr = 0x7F212338u;
            ctx->pc = 0x7F1AD100u;
            return;
    }

label_7F212338:
    ctx->pc = 0x7F212338u;
    ctx->downcount -= 5;
    // 7F212338: lwz     r3, 2312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21233C:
    ctx->pc = 0x7F21233Cu;
    // 7F21233C: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F212340:
    ctx->pc = 0x7F212340u;
    // 7F212340: addi    r6, r31, 900
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(900);

label_7F212344:
    ctx->pc = 0x7F212344u;
    // 7F212344: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212348:
    ctx->pc = 0x7F212348u;
    // 7F212348: bl      0x7F1AD100
    {
            ctx->lr = 0x7F21234Cu;
            ctx->pc = 0x7F1AD100u;
            return;
    }

label_7F21234C:
    ctx->pc = 0x7F21234Cu;
    ctx->downcount -= 5;
    // 7F21234C: lwz     r3, 2316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2316);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212350:
    ctx->pc = 0x7F212350u;
    // 7F212350: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F212354:
    ctx->pc = 0x7F212354u;
    // 7F212354: addi    r6, r31, 900
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(900);

label_7F212358:
    ctx->pc = 0x7F212358u;
    // 7F212358: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21235C:
    ctx->pc = 0x7F21235Cu;
    // 7F21235C: bl      0x7F1AD100
    {
            ctx->lr = 0x7F212360u;
            ctx->pc = 0x7F1AD100u;
            return;
    }

label_7F212360:
    ctx->pc = 0x7F212360u;
    ctx->downcount -= 5;
    // 7F212360: lwz     r3, 2320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212364:
    ctx->pc = 0x7F212364u;
    // 7F212364: addi    r5, r1, 56
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(56);

label_7F212368:
    ctx->pc = 0x7F212368u;
    // 7F212368: addi    r6, r31, 900
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(900);

label_7F21236C:
    ctx->pc = 0x7F21236Cu;
    // 7F21236C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212370:
    ctx->pc = 0x7F212370u;
    // 7F212370: bl      0x7F1AD100
    {
            ctx->lr = 0x7F212374u;
            ctx->pc = 0x7F1AD100u;
            return;
    }

label_7F212374:
    ctx->pc = 0x7F212374u;
    ctx->downcount -= 3;
    // 7F212374: lwz     r3, 2304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212378:
    ctx->pc = 0x7F212378u;
    // 7F212378: cmplwi  r3, 0x0000
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

label_7F21237C:
    ctx->pc = 0x7F21237Cu;
    // 7F21237C: bc    12, 2, 0x7F212384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212384;
        }
    }

label_7F212380:
    ctx->pc = 0x7F212380u;
    ctx->downcount -= 1;
    // 7F212380: bl      0x7F3C8210
    {
            ctx->lr = 0x7F212384u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F212384:
    ctx->pc = 0x7F212384u;
    ctx->downcount -= 3;
    // 7F212384: lwz     r0, 3008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212388:
    ctx->pc = 0x7F212388u;
    // 7F212388: cmpwi   r0, 0
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

label_7F21238C:
    ctx->pc = 0x7F21238Cu;
    // 7F21238C: bc    12, 2, 0x7F212510
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212510;
        }
    }

label_7F212390:
    ctx->pc = 0x7F212390u;
    ctx->downcount -= 6;
    // 7F212390: lwz     r0, 3000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212394:
    ctx->pc = 0x7F212394u;
    // 7F212394: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F212398:
    ctx->pc = 0x7F212398u;
    // 7F212398: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F21239C:
    ctx->pc = 0x7F21239Cu;
    // 7F21239C: lwz     r0, 2344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2344);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2123A0:
    ctx->pc = 0x7F2123A0u;
    // 7F2123A0: cmpwi   r0, 2
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

label_7F2123A4:
    ctx->pc = 0x7F2123A4u;
    // 7F2123A4: bc    12, 2, 0x7F2123B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2123B8;
        }
    }

label_7F2123A8:
    ctx->pc = 0x7F2123A8u;
    ctx->downcount -= 2;
    // 7F2123A8: cmpwi   r0, 3
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

label_7F2123AC:
    ctx->pc = 0x7F2123ACu;
    // 7F2123AC: bc    12, 2, 0x7F2123B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2123B8;
        }
    }

label_7F2123B0:
    ctx->pc = 0x7F2123B0u;
    ctx->downcount -= 2;
    // 7F2123B0: cmpwi   r0, 1
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

label_7F2123B4:
    ctx->pc = 0x7F2123B4u;
    // 7F2123B4: bc    4, 2, 0x7F21243C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21243C;
        }
    }

label_7F2123B8:
    ctx->pc = 0x7F2123B8u;
    ctx->downcount -= 6;
    // 7F2123B8: lwz     r0, 2992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2123BC:
    ctx->pc = 0x7F2123BCu;
    // 7F2123BC: addi    r3, r31, 964
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(964);

label_7F2123C0:
    ctx->pc = 0x7F2123C0u;
    // 7F2123C0: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2123C4:
    ctx->pc = 0x7F2123C4u;
    // 7F2123C4: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_7F2123C8:
    ctx->pc = 0x7F2123C8u;
    // 7F2123C8: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2123CC:
    ctx->pc = 0x7F2123CCu;
    // 7F2123CC: bl      0x7F3CC608
    {
            ctx->lr = 0x7F2123D0u;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F2123D0:
    ctx->pc = 0x7F2123D0u;
    ctx->downcount -= 7;
    // 7F2123D0: lwz     r0, 2996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2123D4:
    ctx->pc = 0x7F2123D4u;
    // 7F2123D4: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2123D4u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F2123D8:
    ctx->pc = 0x7F2123D8u;
    // 7F2123D8: addi    r3, r31, 964
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(964);

label_7F2123DC:
    ctx->pc = 0x7F2123DCu;
    // 7F2123DC: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2123E0:
    ctx->pc = 0x7F2123E0u;
    // 7F2123E0: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_7F2123E4:
    ctx->pc = 0x7F2123E4u;
    // 7F2123E4: add   r4, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2123E8:
    ctx->pc = 0x7F2123E8u;
    // 7F2123E8: bl      0x7F3CC608
    {
            ctx->lr = 0x7F2123ECu;
            ctx->pc = 0x7F3CC608u;
            return;
    }

label_7F2123EC:
    ctx->pc = 0x7F2123ECu;
    ctx->downcount -= 2;
    // 7F2123EC: fcmpo   cr0, f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2123ECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[1], true);

label_7F2123F0:
    ctx->pc = 0x7F2123F0u;
    // 7F2123F0: bc    4, 0, 0x7F212400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212400;
        }
    }

label_7F2123F4:
    ctx->pc = 0x7F2123F4u;
    ctx->downcount -= 3;
    // 7F2123F4: lwz     r0, 2992(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2992);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2123F8:
    ctx->pc = 0x7F2123F8u;
    // 7F2123F8: stw     r0, 3032(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3032);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2123FC:
    ctx->pc = 0x7F2123FCu;
    // 7F2123FC: b       0x7F212408
    {
            goto label_7F212408;
    }

label_7F212400:
    ctx->pc = 0x7F212400u;
    ctx->downcount -= 2;
    // 7F212400: lwz     r0, 2996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212404:
    ctx->pc = 0x7F212404u;
    // 7F212404: stw     r0, 3032(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3032);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212408:
    ctx->pc = 0x7F212408u;
    ctx->downcount -= 13;
    // 7F212408: lwz     r0, 3032(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3032);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21240C:
    ctx->pc = 0x7F21240Cu;
    // 7F21240C: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F212410:
    ctx->pc = 0x7F212410u;
    // 7F212410: addi    r0, r3, 980
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(980);

label_7F212414:
    ctx->pc = 0x7F212414u;
    // 7F212414: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F212418:
    ctx->pc = 0x7F212418u;
    // 7F212418: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21241C:
    ctx->pc = 0x7F21241Cu;
    // 7F21241C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212420:
    ctx->pc = 0x7F212420u;
    // 7F212420: stw     r3, 2276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212424:
    ctx->pc = 0x7F212424u;
    // 7F212424: stw     r0, 2280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212428:
    ctx->pc = 0x7F212428u;
    // 7F212428: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21242C:
    ctx->pc = 0x7F21242Cu;
    // 7F21242C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212430:
    ctx->pc = 0x7F212430u;
    // 7F212430: stw     r3, 2284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212434:
    ctx->pc = 0x7F212434u;
    // 7F212434: stw     r0, 2288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212438:
    ctx->pc = 0x7F212438u;
    // 7F212438: b       0x7F21245C
    {
            goto label_7F21245C;
    }

label_7F21243C:
    ctx->pc = 0x7F21243Cu;
    ctx->downcount -= 8;
    // 7F21243C: lwz     r3, 964(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212440:
    ctx->pc = 0x7F212440u;
    // 7F212440: lwz     r0, 968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212444:
    ctx->pc = 0x7F212444u;
    // 7F212444: stw     r3, 2276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212448:
    ctx->pc = 0x7F212448u;
    // 7F212448: stw     r0, 2280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21244C:
    ctx->pc = 0x7F21244Cu;
    // 7F21244C: lwz     r3, 972(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212450:
    ctx->pc = 0x7F212450u;
    // 7F212450: lwz     r0, 976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(976);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212454:
    ctx->pc = 0x7F212454u;
    // 7F212454: stw     r3, 2284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212458:
    ctx->pc = 0x7F212458u;
    // 7F212458: stw     r0, 2288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21245C:
    ctx->pc = 0x7F21245Cu;
    ctx->downcount -= 25;
    // 7F21245C: li      r0, 42
    ctx->gpr[0] = (u32)(s32)(42);

label_7F212460:
    ctx->pc = 0x7F212460u;
    // 7F212460: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F212464:
    ctx->pc = 0x7F212464u;
    // 7F212464: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212468:
    ctx->pc = 0x7F212468u;
    // 7F212468: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F21246C:
    ctx->pc = 0x7F21246Cu;
    // 7F21246C: lis     r6, 9
    ctx->gpr[6] = ((u32)(s32)(9) << 16);

label_7F212470:
    ctx->pc = 0x7F212470u;
    // 7F212470: lfs     f1, 16032(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F212470u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16032);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F212474:
    ctx->pc = 0x7F212474u;
    // 7F212474: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212478:
    ctx->pc = 0x7F212478u;
    // 7F212478: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F21247C:
    ctx->pc = 0x7F21247Cu;
    // 7F21247C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F212480:
    ctx->pc = 0x7F212480u;
    // 7F212480: lis     r7, 240
    ctx->gpr[7] = ((u32)(s32)(240) << 16);

label_7F212484:
    ctx->pc = 0x7F212484u;
    // 7F212484: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212488:
    ctx->pc = 0x7F212488u;
    // 7F212488: addi    r0, r7, -25135
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(-25135);

label_7F21248C:
    ctx->pc = 0x7F21248Cu;
    // 7F21248C: lis     r5, 19
    ctx->gpr[5] = ((u32)(s32)(19) << 16);

label_7F212490:
    ctx->pc = 0x7F212490u;
    // 7F212490: lis     r4, 35
    ctx->gpr[4] = ((u32)(s32)(35) << 16);

label_7F212494:
    ctx->pc = 0x7F212494u;
    // 7F212494: stw     r8, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F212498:
    ctx->pc = 0x7F212498u;
    // 7F212498: addi    r7, r5, -28887
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-28887);

label_7F21249C:
    ctx->pc = 0x7F21249Cu;
    // 7F21249C: addi    r8, r4, -25005
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-25005);

label_7F2124A0:
    ctx->pc = 0x7F2124A0u;
    // 7F2124A0: addi    r6, r6, -15838
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-15838);

label_7F2124A4:
    ctx->pc = 0x7F2124A4u;
    // 7F2124A4: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2124A8:
    ctx->pc = 0x7F2124A8u;
    // 7F2124A8: addi    r9, r31, 2276
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(2276);

label_7F2124AC:
    ctx->pc = 0x7F2124ACu;
    // 7F2124AC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2124B0:
    ctx->pc = 0x7F2124B0u;
    // 7F2124B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2124B4:
    ctx->pc = 0x7F2124B4u;
    // 7F2124B4: lwz     r4, 2324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2324);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2124B8:
    ctx->pc = 0x7F2124B8u;
    // 7F2124B8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2124BC:
    ctx->pc = 0x7F2124BCu;
    // 7F2124BC: bl      0x7F1C62E0
    {
            ctx->lr = 0x7F2124C0u;
            ctx->pc = 0x7F1C62E0u;
            return;
    }

label_7F2124C0:
    ctx->pc = 0x7F2124C0u;
    ctx->downcount -= 4;
    // 7F2124C0: stw     r3, 2300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2124C4:
    ctx->pc = 0x7F2124C4u;
    // 7F2124C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2124C8:
    ctx->pc = 0x7F2124C8u;
    // 7F2124C8: lwz     r3, 2300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2124CC:
    ctx->pc = 0x7F2124CCu;
    // 7F2124CC: bl      0x7F1C34FC
    {
            ctx->lr = 0x7F2124D0u;
            ctx->pc = 0x7F1C34FCu;
            return;
    }

label_7F2124D0:
    ctx->pc = 0x7F2124D0u;
    ctx->downcount -= 3;
    // 7F2124D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2124D4:
    ctx->pc = 0x7F2124D4u;
    // 7F2124D4: li      r4, 250
    ctx->gpr[4] = (u32)(s32)(250);

label_7F2124D8:
    ctx->pc = 0x7F2124D8u;
    // 7F2124D8: bl      0x7F211304
    {
            ctx->lr = 0x7F2124DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211304u;
                return;
            }
            goto label_7F211304;
    }

label_7F2124DC:
    ctx->pc = 0x7F2124DCu;
    ctx->downcount -= 2;
    // 7F2124DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2124E0:
    ctx->pc = 0x7F2124E0u;
    // 7F2124E0: bl      0x7F3CBE88
    {
            ctx->lr = 0x7F2124E4u;
            ctx->pc = 0x7F3CBE88u;
            return;
    }

label_7F2124E4:
    ctx->pc = 0x7F2124E4u;
    ctx->downcount -= 2;
    // 7F2124E4: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F2124E8:
    ctx->pc = 0x7F2124E8u;
    // 7F2124E8: bl      0x7F0208E4
    {
            ctx->lr = 0x7F2124ECu;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F2124EC:
    ctx->pc = 0x7F2124ECu;
    ctx->downcount -= 5;
    // 7F2124EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2124F0:
    ctx->pc = 0x7F2124F0u;
    // 7F2124F0: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2124F4:
    ctx->pc = 0x7F2124F4u;
    // 7F2124F4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2124F8:
    ctx->pc = 0x7F2124F8u;
    // 7F2124F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2124FC:
    ctx->pc = 0x7F2124FCu;
    // 7F2124FC: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F212500u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F212500:
    ctx->pc = 0x7F212500u;
    ctx->downcount -= 3;
    // 7F212500: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F212504:
    ctx->pc = 0x7F212504u;
    // 7F212504: addi    r3, r3, -32768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F212508:
    ctx->pc = 0x7F212508u;
    // 7F212508: bl      0x7F2126E4
    {
            ctx->lr = 0x7F21250Cu;
            goto label_7F2126E4;
    }

label_7F21250C:
    ctx->pc = 0x7F21250Cu;
    ctx->downcount -= 1;
    // 7F21250C: b       0x7F212518
    {
            goto label_7F212518;
    }

label_7F212510:
    ctx->pc = 0x7F212510u;
    ctx->downcount -= 2;
    // 7F212510: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F212514:
    ctx->pc = 0x7F212514u;
    // 7F212514: stw     r0, 3028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3028);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212518:
    ctx->pc = 0x7F212518u;
    ctx->downcount -= 7;
    // 7F212518: lwz     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21251C:
    ctx->pc = 0x7F21251Cu;
    // 7F21251C: addi    r3, r31, 672
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(672);

label_7F212520:
    ctx->pc = 0x7F212520u;
    // 7F212520: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212524:
    ctx->pc = 0x7F212524u;
    // 7F212524: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212528:
    ctx->pc = 0x7F212528u;
    // 7F212528: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F21252C:
    ctx->pc = 0x7F21252Cu;
    // 7F21252C: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212530:
    ctx->pc = 0x7F212530u;
    // 7F212530: bl      0x7F03C1CC
    {
            ctx->lr = 0x7F212534u;
            ctx->pc = 0x7F03C1CCu;
            return;
    }

label_7F212534:
    ctx->pc = 0x7F212534u;
    ctx->downcount -= 4;
    // 7F212534: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212538:
    ctx->pc = 0x7F212538u;
    // 7F212538: stw     r0, 628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(628);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21253C:
    ctx->pc = 0x7F21253Cu;
    // 7F21253C: stw     r0, 624(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(624);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212540:
    ctx->pc = 0x7F212540u;
    // 7F212540: b       0x7F2126C8
    {
            goto label_7F2126C8;
    }

label_7F212544:
    ctx->pc = 0x7F212544u;
    ctx->downcount -= 7;
    // 7F212544: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212548:
    ctx->pc = 0x7F212548u;
    // 7F212548: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21254C:
    ctx->pc = 0x7F21254Cu;
    // 7F21254C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F212550:
    ctx->pc = 0x7F212550u;
    // 7F212550: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212554:
    ctx->pc = 0x7F212554u;
    // 7F212554: lwz     r0, 2328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212558:
    ctx->pc = 0x7F212558u;
    // 7F212558: cmpwi   r0, 6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21255C:
    ctx->pc = 0x7F21255Cu;
    // 7F21255C: bc    12, 2, 0x7F2125CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2125CC;
        }
    }

label_7F212560:
    ctx->pc = 0x7F212560u;
    ctx->downcount -= 2;
    // 7F212560: cmpwi   r0, 8
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

label_7F212564:
    ctx->pc = 0x7F212564u;
    // 7F212564: bc    12, 2, 0x7F2125CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2125CC;
        }
    }

label_7F212568:
    ctx->pc = 0x7F212568u;
    ctx->downcount -= 2;
    // 7F212568: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F21256C:
    ctx->pc = 0x7F21256Cu;
    // 7F21256C: bl      0x7F04291C
    {
            ctx->lr = 0x7F212570u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F212570:
    ctx->pc = 0x7F212570u;
    ctx->downcount -= 2;
    // 7F212570: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F212574:
    ctx->pc = 0x7F212574u;
    // 7F212574: bl      0x7F023170
    {
            ctx->lr = 0x7F212578u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F212578:
    ctx->pc = 0x7F212578u;
    ctx->downcount -= 11;
    // 7F212578: lfs     f0, 964(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212578u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21257C:
    ctx->pc = 0x7F21257Cu;
    // 7F21257C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_7F212580:
    ctx->pc = 0x7F212580u;
    // 7F212580: addi    r4, r31, 2292
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(2292);

label_7F212584:
    ctx->pc = 0x7F212584u;
    // 7F212584: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212584u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212588:
    ctx->pc = 0x7F212588u;
    // 7F212588: lfs     f1, 968(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212588u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21258C:
    ctx->pc = 0x7F21258Cu;
    // 7F21258C: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21258Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F212590:
    ctx->pc = 0x7F212590u;
    // 7F212590: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F212590u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F212594:
    ctx->pc = 0x7F212594u;
    // 7F212594: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212594u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212598:
    ctx->pc = 0x7F212598u;
    // 7F212598: lfs     f0, 972(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212598u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21259C:
    ctx->pc = 0x7F21259Cu;
    // 7F21259C: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21259Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2125A0:
    ctx->pc = 0x7F2125A0u;
    // 7F2125A0: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2125A4u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2125A4:
    ctx->pc = 0x7F2125A4u;
    ctx->downcount -= 2;
    // 7F2125A4: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F2125A8:
    ctx->pc = 0x7F2125A8u;
    // 7F2125A8: bl      0x7F0429C4
    {
            ctx->lr = 0x7F2125ACu;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F2125AC:
    ctx->pc = 0x7F2125ACu;
    ctx->downcount -= 7;
    // 7F2125AC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2125B0:
    ctx->pc = 0x7F2125B0u;
    // 7F2125B0: lwz     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2125B4:
    ctx->pc = 0x7F2125B4u;
    // 7F2125B4: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F2125B8:
    ctx->pc = 0x7F2125B8u;
    // 7F2125B8: addi    r3, r31, 480
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(480);

label_7F2125BC:
    ctx->pc = 0x7F2125BCu;
    // 7F2125BC: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2125C0:
    ctx->pc = 0x7F2125C0u;
    // 7F2125C0: addi    r4, r6, 4
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(4);

label_7F2125C4:
    ctx->pc = 0x7F2125C4u;
    // 7F2125C4: bl      0x7F014964
    {
            ctx->lr = 0x7F2125C8u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F2125C8:
    ctx->pc = 0x7F2125C8u;
    ctx->downcount -= 1;
    // 7F2125C8: b       0x7F2125EC
    {
            goto label_7F2125EC;
    }

label_7F2125CC:
    ctx->pc = 0x7F2125CCu;
    ctx->downcount -= 8;
    // 7F2125CC: lfs     f0, 964(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2125CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(964);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2125D0:
    ctx->pc = 0x7F2125D0u;
    // 7F2125D0: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2125D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2125D4:
    ctx->pc = 0x7F2125D4u;
    // 7F2125D4: lfs     f1, 968(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2125D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(968);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2125D8:
    ctx->pc = 0x7F2125D8u;
    // 7F2125D8: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2125D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2125DC:
    ctx->pc = 0x7F2125DCu;
    // 7F2125DC: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2125DCu)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F2125E0:
    ctx->pc = 0x7F2125E0u;
    // 7F2125E0: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2125E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2125E4:
    ctx->pc = 0x7F2125E4u;
    // 7F2125E4: lfs     f0, 972(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2125E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(972);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2125E8:
    ctx->pc = 0x7F2125E8u;
    // 7F2125E8: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2125E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2125EC:
    ctx->pc = 0x7F2125ECu;
    ctx->downcount -= 12;
    // 7F2125EC: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2125F0:
    ctx->pc = 0x7F2125F0u;
    // 7F2125F0: lfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2125F0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2125F4:
    ctx->pc = 0x7F2125F4u;
    // 7F2125F4: stfs     f0, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2125F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2125F8:
    ctx->pc = 0x7F2125F8u;
    // 7F2125F8: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2125FC:
    ctx->pc = 0x7F2125FCu;
    // 7F2125FC: lfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2125FCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F212600:
    ctx->pc = 0x7F212600u;
    // 7F212600: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212600u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212604:
    ctx->pc = 0x7F212604u;
    // 7F212604: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212608:
    ctx->pc = 0x7F212608u;
    // 7F212608: lfs     f0, 60(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F212608u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21260C:
    ctx->pc = 0x7F21260Cu;
    // 7F21260C: stfs     f0, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F21260Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212610:
    ctx->pc = 0x7F212610u;
    // 7F212610: lwz     r0, 3008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3008);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212614:
    ctx->pc = 0x7F212614u;
    // 7F212614: cmpwi   r0, 0
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

label_7F212618:
    ctx->pc = 0x7F212618u;
    // 7F212618: bc    12, 2, 0x7F212644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212644;
        }
    }

label_7F21261C:
    ctx->pc = 0x7F21261Cu;
    ctx->downcount -= 6;
    // 7F21261C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F212620:
    ctx->pc = 0x7F212620u;
    // 7F212620: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F212624:
    ctx->pc = 0x7F212624u;
    // 7F212624: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212628:
    ctx->pc = 0x7F212628u;
    // 7F212628: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21262C:
    ctx->pc = 0x7F21262Cu;
    // 7F21262C: cmpwi   r0, 9
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

label_7F212630:
    ctx->pc = 0x7F212630u;
    // 7F212630: bc    4, 2, 0x7F212644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212644;
        }
    }

label_7F212634:
    ctx->pc = 0x7F212634u;
    ctx->downcount -= 3;
    // 7F212634: addi    r3, r31, 672
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(672);

label_7F212638:
    ctx->pc = 0x7F212638u;
    // 7F212638: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F21263C:
    ctx->pc = 0x7F21263Cu;
    // 7F21263C: bl      0x7F03C1BC
    {
            ctx->lr = 0x7F212640u;
            ctx->pc = 0x7F03C1BCu;
            return;
    }

label_7F212640:
    ctx->pc = 0x7F212640u;
    ctx->downcount -= 1;
    // 7F212640: b       0x7F212650
    {
            goto label_7F212650;
    }

label_7F212644:
    ctx->pc = 0x7F212644u;
    ctx->downcount -= 3;
    // 7F212644: addi    r3, r31, 672
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(672);

label_7F212648:
    ctx->pc = 0x7F212648u;
    // 7F212648: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F21264C:
    ctx->pc = 0x7F21264Cu;
    // 7F21264C: bl      0x7F03C1CC
    {
            ctx->lr = 0x7F212650u;
            ctx->pc = 0x7F03C1CCu;
            return;
    }

label_7F212650:
    ctx->pc = 0x7F212650u;
    ctx->downcount -= 6;
    // 7F212650: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F212654:
    ctx->pc = 0x7F212654u;
    // 7F212654: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F212658:
    ctx->pc = 0x7F212658u;
    // 7F212658: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21265C:
    ctx->pc = 0x7F21265Cu;
    // 7F21265C: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F212660:
    ctx->pc = 0x7F212660u;
    // 7F212660: cmpwi   r0, 12
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

label_7F212664:
    ctx->pc = 0x7F212664u;
    // 7F212664: bc    12, 2, 0x7F212670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212670;
        }
    }

label_7F212668:
    ctx->pc = 0x7F212668u;
    ctx->downcount -= 2;
    // 7F212668: cmpwi   r0, 13
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

label_7F21266C:
    ctx->pc = 0x7F21266Cu;
    // 7F21266C: bc    4, 2, 0x7F212684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212684;
        }
    }

label_7F212670:
    ctx->pc = 0x7F212670u;
    ctx->downcount -= 5;
    // 7F212670: lwz     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F212674:
    ctx->pc = 0x7F212674u;
    // 7F212674: addi    r3, r31, 964
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(964);

label_7F212678:
    ctx->pc = 0x7F212678u;
    // 7F212678: addi    r4, r31, 708
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(708);

label_7F21267C:
    ctx->pc = 0x7F21267Cu;
    // 7F21267C: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F212680:
    ctx->pc = 0x7F212680u;
    // 7F212680: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F212684u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F212684:
    ctx->pc = 0x7F212684u;
    ctx->downcount -= 4;
    // 7F212684: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212688:
    ctx->pc = 0x7F212688u;
    // 7F212688: addi    r4, r31, 836
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(836);

label_7F21268C:
    ctx->pc = 0x7F21268Cu;
    // 7F21268C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F212690:
    ctx->pc = 0x7F212690u;
    // 7F212690: bl      0x80025A3C
    {
            ctx->lr = 0x7F212694u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F212694:
    ctx->pc = 0x7F212694u;
    ctx->downcount -= 9;
    // 7F212694: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F212698:
    ctx->pc = 0x7F212698u;
    // 7F212698: lfs     f1, 888(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212698u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(888);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F21269C:
    ctx->pc = 0x7F21269Cu;
    // 7F21269C: lfs     f0, 16028(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21269Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16028);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2126A0:
    ctx->pc = 0x7F2126A0u;
    // 7F2126A0: addi    r4, r31, 900
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(900);

label_7F2126A4:
    ctx->pc = 0x7F2126A4u;
    // 7F2126A4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2126A4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2126A8:
    ctx->pc = 0x7F2126A8u;
    // 7F2126A8: stfs     f0, 888(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2126A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(888);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2126AC:
    ctx->pc = 0x7F2126ACu;
    // 7F2126AC: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2126B0:
    ctx->pc = 0x7F2126B0u;
    // 7F2126B0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2126B4:
    ctx->pc = 0x7F2126B4u;
    // 7F2126B4: bl      0x80025A3C
    {
            ctx->lr = 0x7F2126B8u;
            ctx->pc = 0x80025A3Cu;
            return;
    }

label_7F2126B8:
    ctx->pc = 0x7F2126B8u;
    ctx->downcount -= 4;
    // 7F2126B8: lfs     f0, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2126B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2126BC:
    ctx->pc = 0x7F2126BCu;
    // 7F2126BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2126C0:
    ctx->pc = 0x7F2126C0u;
    // 7F2126C0: stfs     f0, 952(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2126C0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(952);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2126C4:
    ctx->pc = 0x7F2126C4u;
    // 7F2126C4: bl      0x7F211EC4
    {
            ctx->lr = 0x7F2126C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F211EC4u;
                return;
            }
            goto label_7F211EC4;
    }

label_7F2126C8:
    ctx->pc = 0x7F2126C8u;
    ctx->downcount -= 18;
    // 7F2126C8: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2126C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2126C8u);
        if (ctx->exception) return;
    }

label_7F2126CC:
    ctx->pc = 0x7F2126CCu;
    // 7F2126CC: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2126CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2126D0:
    ctx->pc = 0x7F2126D0u;
    // 7F2126D0: lmw     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2126D4:
    ctx->pc = 0x7F2126D4u;
    // 7F2126D4: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2126D8:
    ctx->pc = 0x7F2126D8u;
    // 7F2126D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2126DC:
    ctx->pc = 0x7F2126DCu;
    // 7F2126DC: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F2126E0:
    ctx->pc = 0x7F2126E0u;
    // 7F2126E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2126E4:
    ctx->pc = 0x7F2126E4u;
    ctx->downcount -= 5;
    // 7F2126E4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2126E8:
    ctx->pc = 0x7F2126E8u;
    // 7F2126E8: lwzu     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F2126EC:
    ctx->pc = 0x7F2126ECu;
    // 7F2126EC: or   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[3];
    }

label_7F2126F0:
    ctx->pc = 0x7F2126F0u;
    // 7F2126F0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2126F4:
    ctx->pc = 0x7F2126F4u;
    // 7F2126F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2126F8:
    ctx->pc = 0x7F2126F8u;
    ctx->downcount -= 5;
    // 7F2126F8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2126FC:
    ctx->pc = 0x7F2126FCu;
    // 7F2126FC: lwzu     r0, 19556(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19556);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F212700:
    ctx->pc = 0x7F212700u;
    // 7F212700: andc   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[3];
    }

label_7F212704:
    ctx->pc = 0x7F212704u;
    // 7F212704: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212708:
    ctx->pc = 0x7F212708u;
    // 7F212708: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21270C:
    ctx->pc = 0x7F21270Cu;
    ctx->downcount -= 7;
    // 7F21270C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F212710:
    ctx->pc = 0x7F212710u;
    // 7F212710: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F212714:
    ctx->pc = 0x7F212714u;
    // 7F212714: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212718:
    ctx->pc = 0x7F212718u;
    // 7F212718: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F21271C:
    ctx->pc = 0x7F21271Cu;
    // 7F21271C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F212720:
    ctx->pc = 0x7F212720u;
    // 7F212720: addic.  r0, r31, 36
    {
        u64 a = ctx->gpr[31];
        u64 b = (u32)(s32)(36);
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

label_7F212724:
    ctx->pc = 0x7F212724u;
    // 7F212724: bc    12, 2, 0x7F212730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212730;
        }
    }

label_7F212728:
    ctx->pc = 0x7F212728u;
    ctx->downcount -= 2;
    // 7F212728: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F21272C:
    ctx->pc = 0x7F21272Cu;
    // 7F21272C: bl      0x7F042AAC
    {
            ctx->lr = 0x7F212730u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F212730:
    ctx->pc = 0x7F212730u;
    ctx->downcount -= 2;
    // 7F212730: addi    r3, r31, 80
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(80);

label_7F212734:
    ctx->pc = 0x7F212734u;
    // 7F212734: bl      0x7F023E10
    {
            ctx->lr = 0x7F212738u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F212738:
    ctx->pc = 0x7F212738u;
    ctx->downcount -= 2;
    // 7F212738: addi    r3, r31, 480
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(480);

label_7F21273C:
    ctx->pc = 0x7F21273Cu;
    // 7F21273C: bl      0x7F0146B0
    {
            ctx->lr = 0x7F212740u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F212740:
    ctx->pc = 0x7F212740u;
    ctx->downcount -= 2;
    // 7F212740: addi    r3, r31, 672
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(672);

label_7F212744:
    ctx->pc = 0x7F212744u;
    // 7F212744: bl      0x7F012144
    {
            ctx->lr = 0x7F212748u;
            ctx->pc = 0x7F012144u;
            return;
    }

label_7F212748:
    ctx->pc = 0x7F212748u;
    ctx->downcount -= 6;
    // 7F212748: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21274C:
    ctx->pc = 0x7F21274Cu;
    // 7F21274C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F212750:
    ctx->pc = 0x7F212750u;
    // 7F212750: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F212754:
    ctx->pc = 0x7F212754u;
    // 7F212754: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F212758:
    ctx->pc = 0x7F212758u;
    // 7F212758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21275C:
    ctx->pc = 0x7F21275Cu;
    ctx->downcount -= 35;
    // 7F21275C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F212760:
    ctx->pc = 0x7F212760u;
    // 7F212760: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F212764:
    ctx->pc = 0x7F212764u;
    // 7F212764: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212768:
    ctx->pc = 0x7F212768u;
    // 7F212768: mulli   r0, r6, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)12);

label_7F21276C:
    ctx->pc = 0x7F21276Cu;
    // 7F21276C: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F212770:
    ctx->pc = 0x7F212770u;
    // 7F212770: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F212774:
    ctx->pc = 0x7F212774u;
    // 7F212774: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F212778:
    ctx->pc = 0x7F212778u;
    // 7F212778: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F21277C:
    ctx->pc = 0x7F21277Cu;
    // 7F21277C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212780:
    ctx->pc = 0x7F212780u;
    // 7F212780: stw     r5, 2324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2324);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F212784:
    ctx->pc = 0x7F212784u;
    // 7F212784: addi    r5, r3, -27960
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-27960);

label_7F212788:
    ctx->pc = 0x7F212788u;
    // 7F212788: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F21278C:
    ctx->pc = 0x7F21278Cu;
    // 7F21278C: stw     r7, 3008(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3008);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F212790:
    ctx->pc = 0x7F212790u;
    // 7F212790: stw     r8, 3012(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3012);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F212794:
    ctx->pc = 0x7F212794u;
    // 7F212794: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F212798:
    ctx->pc = 0x7F212798u;
    // 7F212798: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21279C:
    ctx->pc = 0x7F21279Cu;
    // 7F21279C: lwz     r5, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2127A0:
    ctx->pc = 0x7F2127A0u;
    // 7F2127A0: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2127A4:
    ctx->pc = 0x7F2127A4u;
    // 7F2127A4: lha     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2127A8:
    ctx->pc = 0x7F2127A8u;
    // 7F2127A8: stw     r0, 2340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2127AC:
    ctx->pc = 0x7F2127ACu;
    // 7F2127AC: lwz     r0, 2340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2127B0:
    ctx->pc = 0x7F2127B0u;
    // 7F2127B0: cmpwi   r0, 0
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

label_7F2127B4:
    ctx->pc = 0x7F2127B4u;
    // 7F2127B4: bc    12, 1, 0x7F2127C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2127C0;
        }
    }

label_7F2127B8:
    ctx->pc = 0x7F2127B8u;
    ctx->downcount -= 2;
    // 7F2127B8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2127BC:
    ctx->pc = 0x7F2127BCu;
    // 7F2127BC: b       0x7F212BCC
    {
            goto label_7F212BCC;
    }

label_7F2127C0:
    ctx->pc = 0x7F2127C0u;
    ctx->downcount -= 2;
    // 7F2127C0: cmpwi   r0, 80
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

label_7F2127C4:
    ctx->pc = 0x7F2127C4u;
    // 7F2127C4: bc    12, 0, 0x7F2127D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2127D0;
        }
    }

label_7F2127C8:
    ctx->pc = 0x7F2127C8u;
    ctx->downcount -= 2;
    // 7F2127C8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2127CC:
    ctx->pc = 0x7F2127CCu;
    // 7F2127CC: b       0x7F212BCC
    {
            goto label_7F212BCC;
    }

label_7F2127D0:
    ctx->pc = 0x7F2127D0u;
    ctx->downcount -= 5;
    // 7F2127D0: lwz     r9, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2127D4:
    ctx->pc = 0x7F2127D4u;
    // 7F2127D4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2127D8:
    ctx->pc = 0x7F2127D8u;
    // 7F2127D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2127DC:
    ctx->pc = 0x7F2127DCu;
    // 7F2127DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2127E0:
    ctx->pc = 0x7F2127E0u;
    // 7F2127E0: b       0x7F212854
    {
            goto label_7F212854;
    }

label_7F2127E4:
    ctx->pc = 0x7F2127E4u;
    ctx->downcount -= 15;
    // 7F2127E4: lfs     f0, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F2127E4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2127E8:
    // 7F2127E8: add   r7, r30, r6
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F2127EC:
    // 7F2127EC: add   r8, r30, r5
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_7F2127F0:
    ctx->pc = 0x7F2127F0u;
    // 7F2127F0: stfs     f0, 980(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2127F0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(980);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2127F4:
    ctx->pc = 0x7F2127F4u;
    // 7F2127F4: lfs     f0, 8(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F2127F4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2127F8:
    ctx->pc = 0x7F2127F8u;
    // 7F2127F8: stfs     f0, 984(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2127F8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(984);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2127FC:
    ctx->pc = 0x7F2127FCu;
    // 7F2127FC: lfs     f0, 4(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F2127FCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F212800:
    ctx->pc = 0x7F212800u;
    // 7F212800: stfs     f0, 988(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F212800u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(988);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212804:
    ctx->pc = 0x7F212804u;
    // 7F212804: lha     r0, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F212808:
    ctx->pc = 0x7F212808u;
    // 7F212808: stw     r0, 2344(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21280C:
    ctx->pc = 0x7F21280Cu;
    // 7F21280C: lha     r0, 26(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(26);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F212810:
    ctx->pc = 0x7F212810u;
    // 7F212810: stw     r0, 2664(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212814:
    ctx->pc = 0x7F212814u;
    // 7F212814: lha     r0, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F212818:
    // 7F212818: cmpwi   r0, 2
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

label_7F21281C:
    // 7F21281C: bc    4, 2, 0x7F21282C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21282C;
        }
    }

label_7F212820:
    ctx->downcount -= 3;
    // 7F212820: addi    r0, r3, 2984
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2984);

label_7F212824:
    // 7F212824: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F212828:
    ctx->pc = 0x7F212828u;
    // 7F212828: stwx    r10, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F21282C:
    ctx->pc = 0x7F21282Cu;
    ctx->downcount -= 3;
    // 7F21282C: lha     r0, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F212830:
    // 7F212830: cmpwi   r0, 4
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

label_7F212834:
    // 7F212834: bc    4, 2, 0x7F212844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212844;
        }
    }

label_7F212838:
    ctx->downcount -= 3;
    // 7F212838: addi    r0, r4, 2992
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(2992);

label_7F21283C:
    // 7F21283C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_7F212840:
    ctx->pc = 0x7F212840u;
    // 7F212840: stwx    r10, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F212844:
    ctx->downcount -= 4;
    // 7F212844: addi    r9, r9, 40
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(40);

label_7F212848:
    // 7F212848: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_7F21284C:
    // 7F21284C: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_7F212850:
    // 7F212850: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_7F212854:
    ctx->pc = 0x7F212854u;
    ctx->downcount -= 3;
    // 7F212854: lwz     r0, 2340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212858:
    // 7F212858: cmpw    r10, r0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21285C:
    // 7F21285C: bc    12, 0, 0x7F2127E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2127E4u;
                return;
            }
            goto label_7F2127E4;
        }
    }

label_7F212860:
    ctx->pc = 0x7F212860u;
    ctx->downcount -= 31;
    // 7F212860: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F212864:
    ctx->pc = 0x7F212864u;
    // 7F212864: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212868:
    ctx->pc = 0x7F212868u;
    // 7F212868: stw     r3, 2328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2328);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21286C:
    ctx->pc = 0x7F21286Cu;
    // 7F21286C: addi    r5, r1, 40
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(40);

label_7F212870:
    ctx->pc = 0x7F212870u;
    // 7F212870: stw     r0, 2336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212874:
    ctx->pc = 0x7F212874u;
    // 7F212874: stw     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212878:
    ctx->pc = 0x7F212878u;
    // 7F212878: stw     r3, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F21287C:
    ctx->pc = 0x7F21287Cu;
    // 7F21287C: lwz     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212880:
    ctx->pc = 0x7F212880u;
    // 7F212880: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F212884:
    ctx->pc = 0x7F212884u;
    // 7F212884: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F212888:
    ctx->pc = 0x7F212888u;
    // 7F212888: lfs     f0, 980(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F212888u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(980);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F21288C:
    ctx->pc = 0x7F21288Cu;
    // 7F21288C: stfs     f0, 964(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F21288Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(964);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212890:
    ctx->pc = 0x7F212890u;
    // 7F212890: lwz     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212894:
    ctx->pc = 0x7F212894u;
    // 7F212894: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F212898:
    ctx->pc = 0x7F212898u;
    // 7F212898: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F21289C:
    ctx->pc = 0x7F21289Cu;
    // 7F21289C: lfs     f0, 984(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F21289Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(984);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2128A0:
    ctx->pc = 0x7F2128A0u;
    // 7F2128A0: stfs     f0, 968(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2128A0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(968);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2128A4:
    ctx->pc = 0x7F2128A4u;
    // 7F2128A4: lwz     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2128A8:
    ctx->pc = 0x7F2128A8u;
    // 7F2128A8: rlwinm r0, r0, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2128AC:
    ctx->pc = 0x7F2128ACu;
    // 7F2128AC: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2128B0:
    ctx->pc = 0x7F2128B0u;
    // 7F2128B0: lfs     f0, 988(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2128B0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(988);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2128B4:
    ctx->pc = 0x7F2128B4u;
    // 7F2128B4: stfs     f0, 972(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F2128B4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(972);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2128B8:
    ctx->pc = 0x7F2128B8u;
    // 7F2128B8: lwz     r3, 3004(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3004);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2128BC:
    ctx->pc = 0x7F2128BCu;
    // 7F2128BC: lwz     r0, 3000(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3000);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2128C0:
    ctx->pc = 0x7F2128C0u;
    // 7F2128C0: rlwinm r3, r3, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 4u) & 0xFFFFFFF0u;
    }

label_7F2128C4:
    ctx->pc = 0x7F2128C4u;
    // 7F2128C4: rlwinm r4, r0, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_7F2128C8:
    ctx->pc = 0x7F2128C8u;
    // 7F2128C8: addi    r3, r3, 980
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(980);

label_7F2128CC:
    ctx->pc = 0x7F2128CCu;
    // 7F2128CC: addi    r4, r4, 980
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(980);

label_7F2128D0:
    ctx->pc = 0x7F2128D0u;
    // 7F2128D0: add   r3, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2128D4:
    ctx->pc = 0x7F2128D4u;
    // 7F2128D4: add   r4, r30, r4
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2128D8:
    ctx->pc = 0x7F2128D8u;
    // 7F2128D8: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F2128DCu;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F2128DC:
    ctx->pc = 0x7F2128DCu;
    ctx->downcount -= 9;
    // 7F2128DC: lfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2128DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2128E0:
    ctx->pc = 0x7F2128E0u;
    // 7F2128E0: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2128E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2128E4:
    ctx->pc = 0x7F2128E4u;
    // 7F2128E4: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2128E4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2128E8:
    ctx->pc = 0x7F2128E8u;
    // 7F2128E8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2128E8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2128EC:
    ctx->pc = 0x7F2128ECu;
    // 7F2128EC: stfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2128ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2128F0:
    ctx->pc = 0x7F2128F0u;
    // 7F2128F0: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2128F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2128F4:
    ctx->pc = 0x7F2128F4u;
    // 7F2128F4: lwz     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2128F8:
    ctx->pc = 0x7F2128F8u;
    // 7F2128F8: lwz     r4, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2128FC:
    ctx->pc = 0x7F2128FCu;
    // 7F2128FC: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F212900u;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F212900:
    ctx->pc = 0x7F212900u;
    ctx->downcount -= 11;
    // 7F212900: rlwinm r0, r3, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F212904:
    ctx->pc = 0x7F212904u;
    // 7F212904: lis     r4, 113
    ctx->gpr[4] = ((u32)(s32)(113) << 16);

label_7F212908:
    ctx->pc = 0x7F212908u;
    // 7F212908: sth     r0, 2294(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21290C:
    ctx->pc = 0x7F21290Cu;
    // 7F21290C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212910:
    ctx->pc = 0x7F212910u;
    // 7F212910: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F212914:
    ctx->pc = 0x7F212914u;
    // 7F212914: addi    r3, r30, 36
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(36);

label_7F212918:
    ctx->pc = 0x7F212918u;
    // 7F212918: sth     r0, 2292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2292);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21291C:
    ctx->pc = 0x7F21291Cu;
    // 7F21291C: addi    r4, r4, 14927
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14927);

label_7F212920:
    ctx->pc = 0x7F212920u;
    // 7F212920: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F212924:
    ctx->pc = 0x7F212924u;
    // 7F212924: sth     r0, 2296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2296);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F212928:
    ctx->pc = 0x7F212928u;
    // 7F212928: bl      0x7F04272C
    {
            ctx->lr = 0x7F21292Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F21292C:
    ctx->pc = 0x7F21292Cu;
    ctx->downcount -= 6;
    // 7F21292C: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F212930:
    ctx->pc = 0x7F212930u;
    // 7F212930: addi    r3, r30, 36
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(36);

label_7F212934:
    ctx->pc = 0x7F212934u;
    // 7F212934: addi    r5, r4, -11116
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-11116);

label_7F212938:
    ctx->pc = 0x7F212938u;
    // 7F212938: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21293C:
    ctx->pc = 0x7F21293Cu;
    // 7F21293C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F212940:
    ctx->pc = 0x7F212940u;
    // 7F212940: bl      0x7F042C2C
    {
            ctx->lr = 0x7F212944u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F212944:
    ctx->pc = 0x7F212944u;
    ctx->downcount -= 8;
    // 7F212944: addi    r3, r30, 36
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(36);

label_7F212948:
    ctx->pc = 0x7F212948u;
    // 7F212948: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F21294C:
    ctx->pc = 0x7F21294Cu;
    // 7F21294C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F212950:
    ctx->pc = 0x7F212950u;
    // 7F212950: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F212954:
    ctx->pc = 0x7F212954u;
    // 7F212954: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F212958:
    ctx->pc = 0x7F212958u;
    // 7F212958: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F21295C:
    ctx->pc = 0x7F21295Cu;
    // 7F21295C: li      r9, 6
    ctx->gpr[9] = (u32)(s32)(6);

label_7F212960:
    ctx->pc = 0x7F212960u;
    // 7F212960: bl      0x7F042C94
    {
            ctx->lr = 0x7F212964u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F212964:
    ctx->pc = 0x7F212964u;
    ctx->downcount -= 3;
    // 7F212964: addi    r3, r30, 36
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(36);

label_7F212968:
    ctx->pc = 0x7F212968u;
    // 7F212968: addi    r4, r30, 708
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(708);

label_7F21296C:
    ctx->pc = 0x7F21296Cu;
    // 7F21296C: bl      0x7F042B20
    {
            ctx->lr = 0x7F212970u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F212970:
    ctx->pc = 0x7F212970u;
    ctx->downcount -= 5;
    // 7F212970: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F212974:
    ctx->pc = 0x7F212974u;
    // 7F212974: addi    r3, r30, 80
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(80);

label_7F212978:
    ctx->pc = 0x7F212978u;
    // 7F212978: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F21297C:
    ctx->pc = 0x7F21297Cu;
    // 7F21297C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F212980:
    ctx->pc = 0x7F212980u;
    // 7F212980: bl      0x7F022FB4
    {
            ctx->lr = 0x7F212984u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F212984:
    ctx->pc = 0x7F212984u;
    ctx->downcount -= 2;
    // 7F212984: addi    r3, r30, 80
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(80);

label_7F212988:
    ctx->pc = 0x7F212988u;
    // 7F212988: bl      0x7F023EA8
    {
            ctx->lr = 0x7F21298Cu;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F21298C:
    ctx->pc = 0x7F21298Cu;
    ctx->downcount -= 5;
    // 7F21298C: lwz     r6, 240(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(240);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F212990:
    ctx->pc = 0x7F212990u;
    // 7F212990: addi    r3, r30, 672
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(672);

label_7F212994:
    ctx->pc = 0x7F212994u;
    // 7F212994: addi    r4, r30, 80
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(80);

label_7F212998:
    ctx->pc = 0x7F212998u;
    // 7F212998: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F21299C:
    ctx->pc = 0x7F21299Cu;
    // 7F21299C: bl      0x7F0120F4
    {
            ctx->lr = 0x7F2129A0u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F2129A0:
    ctx->pc = 0x7F2129A0u;
    ctx->downcount -= 7;
    // 7F2129A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2129A4:
    ctx->pc = 0x7F2129A4u;
    // 7F2129A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2129A8:
    ctx->pc = 0x7F2129A8u;
    // 7F2129A8: addi    r5, r3, 16068
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(16068);

label_7F2129AC:
    ctx->pc = 0x7F2129ACu;
    // 7F2129AC: lfs     f2, 16072(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2129ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2129B0:
    ctx->pc = 0x7F2129B0u;
    // 7F2129B0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2129B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2129B4:
    ctx->pc = 0x7F2129B4u;
    // 7F2129B4: addi    r3, r30, 672
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(672);

label_7F2129B8:
    ctx->pc = 0x7F2129B8u;
    // 7F2129B8: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F2129BCu;
            ctx->pc = 0x7F03C1DCu;
            return;
    }

label_7F2129BC:
    ctx->pc = 0x7F2129BCu;
    ctx->downcount -= 28;
    // 7F2129BC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2129C0:
    ctx->pc = 0x7F2129C0u;
    // 7F2129C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2129C4:
    ctx->pc = 0x7F2129C4u;
    // 7F2129C4: addi    r5, r4, 16036
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16036);

label_7F2129C8:
    ctx->pc = 0x7F2129C8u;
    // 7F2129C8: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F2129CC:
    ctx->pc = 0x7F2129CCu;
    // 7F2129CC: addi    r11, r3, 16052
    ctx->gpr[11] = ctx->gpr[3] + (u32)(s32)(16052);

label_7F2129D0:
    ctx->pc = 0x7F2129D0u;
    // 7F2129D0: lwz     r28, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F2129D4:
    ctx->pc = 0x7F2129D4u;
    // 7F2129D4: lwz     r29, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F2129D8:
    ctx->pc = 0x7F2129D8u;
    // 7F2129D8: addi    r3, r30, 480
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(480);

label_7F2129DC:
    ctx->pc = 0x7F2129DCu;
    // 7F2129DC: lwz     r31, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2129E0:
    ctx->pc = 0x7F2129E0u;
    // 7F2129E0: addi    r4, r4, 16401
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16401);

label_7F2129E4:
    ctx->pc = 0x7F2129E4u;
    // 7F2129E4: lwz     r12, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2129E8:
    ctx->pc = 0x7F2129E8u;
    // 7F2129E8: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2129EC:
    ctx->pc = 0x7F2129ECu;
    // 7F2129EC: lwz     r10, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2129F0:
    ctx->pc = 0x7F2129F0u;
    // 7F2129F0: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2129F4:
    ctx->pc = 0x7F2129F4u;
    // 7F2129F4: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2129F8:
    ctx->pc = 0x7F2129F8u;
    // 7F2129F8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2129FC:
    ctx->pc = 0x7F2129FCu;
    // 7F2129FC: lwz     r5, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F212A00:
    ctx->pc = 0x7F212A00u;
    // 7F212A00: lwz     r0, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212A04:
    ctx->pc = 0x7F212A04u;
    // 7F212A04: stw     r28, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F212A08:
    ctx->pc = 0x7F212A08u;
    // 7F212A08: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F212A0C:
    ctx->pc = 0x7F212A0Cu;
    // 7F212A0C: stw     r31, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F212A10:
    ctx->pc = 0x7F212A10u;
    // 7F212A10: stw     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F212A14:
    ctx->pc = 0x7F212A14u;
    // 7F212A14: stw     r10, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F212A18:
    ctx->pc = 0x7F212A18u;
    // 7F212A18: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F212A1C:
    ctx->pc = 0x7F212A1Cu;
    // 7F212A1C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F212A20:
    ctx->pc = 0x7F212A20u;
    // 7F212A20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212A24:
    ctx->pc = 0x7F212A24u;
    // 7F212A24: lwz     r5, 244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(244);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F212A28:
    ctx->pc = 0x7F212A28u;
    // 7F212A28: bl      0x7F014788
    {
            ctx->lr = 0x7F212A2Cu;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F212A2C:
    ctx->pc = 0x7F212A2Cu;
    ctx->downcount -= 2;
    // 7F212A2C: addi    r3, r30, 480
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(480);

label_7F212A30:
    ctx->pc = 0x7F212A30u;
    // 7F212A30: bl      0x7F0148A0
    {
            ctx->lr = 0x7F212A34u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F212A34:
    ctx->pc = 0x7F212A34u;
    ctx->downcount -= 4;
    // 7F212A34: lis     r4, 217
    ctx->gpr[4] = ((u32)(s32)(217) << 16);

label_7F212A38:
    ctx->pc = 0x7F212A38u;
    // 7F212A38: addi    r3, r30, 480
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(480);

label_7F212A3C:
    ctx->pc = 0x7F212A3Cu;
    // 7F212A3C: addi    r4, r4, 11547
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11547);

label_7F212A40:
    ctx->pc = 0x7F212A40u;
    // 7F212A40: bl      0x7F01488C
    {
            ctx->lr = 0x7F212A44u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F212A44:
    ctx->pc = 0x7F212A44u;
    ctx->downcount -= 6;
    // 7F212A44: lis     r3, 78
    ctx->gpr[3] = ((u32)(s32)(78) << 16);

label_7F212A48:
    ctx->pc = 0x7F212A48u;
    // 7F212A48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212A4C:
    ctx->pc = 0x7F212A4Cu;
    // 7F212A4C: addi    r3, r3, -29197
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29197);

label_7F212A50:
    ctx->pc = 0x7F212A50u;
    // 7F212A50: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F212A54:
    ctx->pc = 0x7F212A54u;
    // 7F212A54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F212A58:
    ctx->pc = 0x7F212A58u;
    // 7F212A58: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F212A5Cu;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F212A5C:
    ctx->pc = 0x7F212A5Cu;
    ctx->downcount -= 5;
    // 7F212A5C: stw     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212A60:
    ctx->pc = 0x7F212A60u;
    // 7F212A60: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212A64:
    ctx->pc = 0x7F212A64u;
    // 7F212A64: li      r5, 1026
    ctx->gpr[5] = (u32)(s32)(1026);

label_7F212A68:
    ctx->pc = 0x7F212A68u;
    // 7F212A68: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212A6C:
    ctx->pc = 0x7F212A6Cu;
    // 7F212A6C: bl      0x7F026EBC
    {
            ctx->lr = 0x7F212A70u;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F212A70:
    ctx->pc = 0x7F212A70u;
    ctx->downcount -= 3;
    // 7F212A70: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212A74:
    ctx->pc = 0x7F212A74u;
    // 7F212A74: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F212A78:
    ctx->pc = 0x7F212A78u;
    // 7F212A78: bl      0x7F026F4C
    {
            ctx->lr = 0x7F212A7Cu;
            ctx->pc = 0x7F026F4Cu;
            return;
    }

label_7F212A7C:
    ctx->pc = 0x7F212A7Cu;
    ctx->downcount -= 4;
    // 7F212A7C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212A80:
    ctx->pc = 0x7F212A80u;
    // 7F212A80: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212A84:
    ctx->pc = 0x7F212A84u;
    // 7F212A84: lfs     f1, 16076(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F212A84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16076);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F212A88:
    ctx->pc = 0x7F212A88u;
    // 7F212A88: bl      0x7F026F54
    {
            ctx->lr = 0x7F212A8Cu;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F212A8C:
    ctx->pc = 0x7F212A8Cu;
    ctx->downcount -= 6;
    // 7F212A8C: lwz     r3, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212A90:
    ctx->pc = 0x7F212A90u;
    // 7F212A90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212A94:
    ctx->pc = 0x7F212A94u;
    // 7F212A94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F212A98:
    ctx->pc = 0x7F212A98u;
    // 7F212A98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F212A9C:
    ctx->pc = 0x7F212A9Cu;
    // 7F212A9C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F212AA0:
    ctx->pc = 0x7F212AA0u;
    // 7F212AA0: bl      0x7F026928
    {
            ctx->lr = 0x7F212AA4u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F212AA4:
    ctx->pc = 0x7F212AA4u;
    ctx->downcount -= 21;
    // 7F212AA4: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F212AA8:
    ctx->pc = 0x7F212AA8u;
    // 7F212AA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212AAC:
    ctx->pc = 0x7F212AACu;
    // 7F212AAC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212AB0:
    ctx->pc = 0x7F212AB0u;
    // 7F212AB0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F212AB4:
    ctx->pc = 0x7F212AB4u;
    // 7F212AB4: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212AB8:
    ctx->pc = 0x7F212AB8u;
    // 7F212AB8: lfs     f1, 16080(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F212AB8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F212ABC:
    ctx->pc = 0x7F212ABCu;
    // 7F212ABC: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F212AC0:
    ctx->pc = 0x7F212AC0u;
    // 7F212AC0: lfs     f4, 16084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F212AC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F212AC4:
    ctx->pc = 0x7F212AC4u;
    // 7F212AC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F212AC8:
    ctx->pc = 0x7F212AC8u;
    // 7F212AC8: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F212ACC:
    ctx->pc = 0x7F212ACCu;
    // 7F212ACC: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F212AD0:
    ctx->pc = 0x7F212AD0u;
    // 7F212AD0: lfs     f6, 16088(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F212AD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16088);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F212AD4:
    ctx->pc = 0x7F212AD4u;
    // 7F212AD4: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212AD4u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F212AD8:
    ctx->pc = 0x7F212AD8u;
    // 7F212AD8: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212AD8u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F212ADC:
    ctx->pc = 0x7F212ADCu;
    // 7F212ADC: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F212AE0:
    ctx->pc = 0x7F212AE0u;
    // 7F212AE0: sth     r0, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F212AE4:
    ctx->pc = 0x7F212AE4u;
    // 7F212AE4: addi    r5, r4, -32698
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32698);

label_7F212AE8:
    ctx->pc = 0x7F212AE8u;
    // 7F212AE8: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F212AE8u)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_7F212AEC:
    ctx->pc = 0x7F212AECu;
    // 7F212AEC: addi    r3, r30, 900
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(900);

label_7F212AF0:
    ctx->pc = 0x7F212AF0u;
    // 7F212AF0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212AF4:
    ctx->pc = 0x7F212AF4u;
    // 7F212AF4: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F212AF8u;
            ctx->pc = 0x7F1AD6F8u;
            return;
    }

label_7F212AF8:
    ctx->pc = 0x7F212AF8u;
    ctx->downcount -= 17;
    // 7F212AF8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212AFC:
    ctx->pc = 0x7F212AFCu;
    // 7F212AFC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F212B00:
    ctx->pc = 0x7F212B00u;
    // 7F212B00: addi    r6, r4, 16080
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(16080);

label_7F212B04:
    ctx->pc = 0x7F212B04u;
    // 7F212B04: lfs     f4, 16084(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F212B04u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F212B08:
    ctx->pc = 0x7F212B08u;
    // 7F212B08: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F212B08u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F212B0C:
    ctx->pc = 0x7F212B0Cu;
    // 7F212B0C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212B10:
    ctx->pc = 0x7F212B10u;
    // 7F212B10: addi    r5, r4, 16088
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16088);

label_7F212B14:
    ctx->pc = 0x7F212B14u;
    // 7F212B14: stw     r3, 2308(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2308);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212B18:
    ctx->pc = 0x7F212B18u;
    // 7F212B18: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212B18u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F212B1C:
    ctx->pc = 0x7F212B1Cu;
    // 7F212B1C: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F212B20:
    ctx->pc = 0x7F212B20u;
    // 7F212B20: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F212B20u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F212B24:
    ctx->pc = 0x7F212B24u;
    // 7F212B24: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212B24u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F212B28:
    ctx->pc = 0x7F212B28u;
    // 7F212B28: addi    r5, r4, -32697
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32697);

label_7F212B2C:
    ctx->pc = 0x7F212B2Cu;
    // 7F212B2C: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F212B2Cu)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_7F212B30:
    ctx->pc = 0x7F212B30u;
    // 7F212B30: addi    r3, r30, 900
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(900);

label_7F212B34:
    ctx->pc = 0x7F212B34u;
    // 7F212B34: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212B38:
    ctx->pc = 0x7F212B38u;
    // 7F212B38: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F212B3Cu;
            ctx->pc = 0x7F1AD6F8u;
            return;
    }

label_7F212B3C:
    ctx->pc = 0x7F212B3Cu;
    ctx->downcount -= 17;
    // 7F212B3C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212B40:
    ctx->pc = 0x7F212B40u;
    // 7F212B40: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F212B44:
    ctx->pc = 0x7F212B44u;
    // 7F212B44: addi    r6, r4, 16080
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(16080);

label_7F212B48:
    ctx->pc = 0x7F212B48u;
    // 7F212B48: lfs     f4, 16084(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F212B48u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F212B4C:
    ctx->pc = 0x7F212B4Cu;
    // 7F212B4C: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F212B4Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F212B50:
    ctx->pc = 0x7F212B50u;
    // 7F212B50: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212B54:
    ctx->pc = 0x7F212B54u;
    // 7F212B54: addi    r5, r4, 16088
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16088);

label_7F212B58:
    ctx->pc = 0x7F212B58u;
    // 7F212B58: stw     r3, 2312(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2312);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212B5C:
    ctx->pc = 0x7F212B5Cu;
    // 7F212B5C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212B5Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F212B60:
    ctx->pc = 0x7F212B60u;
    // 7F212B60: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F212B64:
    ctx->pc = 0x7F212B64u;
    // 7F212B64: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F212B64u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F212B68:
    ctx->pc = 0x7F212B68u;
    // 7F212B68: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212B68u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F212B6C:
    ctx->pc = 0x7F212B6Cu;
    // 7F212B6C: addi    r5, r4, -32696
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32696);

label_7F212B70:
    ctx->pc = 0x7F212B70u;
    // 7F212B70: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F212B70u)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_7F212B74:
    ctx->pc = 0x7F212B74u;
    // 7F212B74: addi    r3, r30, 900
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(900);

label_7F212B78:
    ctx->pc = 0x7F212B78u;
    // 7F212B78: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212B7C:
    ctx->pc = 0x7F212B7Cu;
    // 7F212B7C: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F212B80u;
            ctx->pc = 0x7F1AD6F8u;
            return;
    }

label_7F212B80:
    ctx->pc = 0x7F212B80u;
    ctx->downcount -= 17;
    // 7F212B80: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212B84:
    ctx->pc = 0x7F212B84u;
    // 7F212B84: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F212B88:
    ctx->pc = 0x7F212B88u;
    // 7F212B88: addi    r6, r4, 16080
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(16080);

label_7F212B8C:
    ctx->pc = 0x7F212B8Cu;
    // 7F212B8C: lfs     f4, 16084(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F212B8Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16084);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F212B90:
    ctx->pc = 0x7F212B90u;
    // 7F212B90: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F212B90u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F212B94:
    ctx->pc = 0x7F212B94u;
    // 7F212B94: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212B98:
    ctx->pc = 0x7F212B98u;
    // 7F212B98: addi    r5, r4, 16088
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16088);

label_7F212B9C:
    ctx->pc = 0x7F212B9Cu;
    // 7F212B9C: stw     r3, 2316(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2316);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212BA0:
    ctx->pc = 0x7F212BA0u;
    // 7F212BA0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212BA0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F212BA4:
    ctx->pc = 0x7F212BA4u;
    // 7F212BA4: lis     r4, 195
    ctx->gpr[4] = ((u32)(s32)(195) << 16);

label_7F212BA8:
    ctx->pc = 0x7F212BA8u;
    // 7F212BA8: lfs     f6, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F212BA8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[6] = value;
        ctx->ps1[6] = value;
    }

label_7F212BAC:
    ctx->pc = 0x7F212BACu;
    // 7F212BAC: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212BACu)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F212BB0:
    ctx->pc = 0x7F212BB0u;
    // 7F212BB0: addi    r5, r4, -32695
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-32695);

label_7F212BB4:
    ctx->pc = 0x7F212BB4u;
    // 7F212BB4: fmr    f5, f4
    if (!ppc_fp_available_inline(ctx, 0x7F212BB4u)) return;
    ctx->fpr[5] = ctx->fpr[4];

label_7F212BB8:
    ctx->pc = 0x7F212BB8u;
    // 7F212BB8: addi    r3, r30, 900
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(900);

label_7F212BBC:
    ctx->pc = 0x7F212BBCu;
    // 7F212BBC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212BC0:
    ctx->pc = 0x7F212BC0u;
    // 7F212BC0: bl      0x7F1AD6F8
    {
            ctx->lr = 0x7F212BC4u;
            ctx->pc = 0x7F1AD6F8u;
            return;
    }

label_7F212BC4:
    ctx->pc = 0x7F212BC4u;
    ctx->downcount -= 2;
    // 7F212BC4: stw     r3, 2320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2320);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212BC8:
    ctx->pc = 0x7F212BC8u;
    // 7F212BC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F212BCC:
    ctx->pc = 0x7F212BCCu;
    ctx->downcount -= 16;
    // 7F212BCC: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F212BD0:
    ctx->pc = 0x7F212BD0u;
    // 7F212BD0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212BD4:
    ctx->pc = 0x7F212BD4u;
    // 7F212BD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F212BD8:
    ctx->pc = 0x7F212BD8u;
    // 7F212BD8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F212BDC:
    ctx->pc = 0x7F212BDCu;
    // 7F212BDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F212BE0:
    ctx->pc = 0x7F212BE0u;
    ctx->downcount -= 24;
    // 7F212BE0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F212BE4:
    ctx->pc = 0x7F212BE4u;
    // 7F212BE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F212BE8:
    ctx->pc = 0x7F212BE8u;
    // 7F212BE8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212BEC:
    ctx->pc = 0x7F212BECu;
    // 7F212BEC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F212BF0:
    ctx->pc = 0x7F212BF0u;
    // 7F212BF0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F212BF4:
    ctx->pc = 0x7F212BF4u;
    // 7F212BF4: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F212BF8:
    ctx->pc = 0x7F212BF8u;
    // 7F212BF8: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F212BFC:
    ctx->pc = 0x7F212BFCu;
    // 7F212BFC: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F212C00:
    ctx->pc = 0x7F212C00u;
    // 7F212C00: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F212C04:
    ctx->pc = 0x7F212C04u;
    // 7F212C04: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F212C08:
    ctx->pc = 0x7F212C08u;
    // 7F212C08: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F212C0C:
    ctx->pc = 0x7F212C0Cu;
    // 7F212C0C: li      r5, 3056
    ctx->gpr[5] = (u32)(s32)(3056);

label_7F212C10:
    ctx->pc = 0x7F212C10u;
    // 7F212C10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F212C14:
    ctx->pc = 0x7F212C14u;
    // 7F212C14: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F212C18u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F212C18:
    ctx->pc = 0x7F212C18u;
    ctx->downcount -= 2;
    // 7F212C18: or.   r31, r3, r3
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

label_7F212C1C:
    ctx->pc = 0x7F212C1Cu;
    // 7F212C1C: bc    12, 2, 0x7F212C68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212C68;
        }
    }

label_7F212C20:
    ctx->pc = 0x7F212C20u;
    ctx->downcount -= 5;
    // 7F212C20: lis     r4, 32545
    ctx->gpr[4] = ((u32)(s32)(32545) << 16);

label_7F212C24:
    ctx->pc = 0x7F212C24u;
    // 7F212C24: lis     r5, 32545
    ctx->gpr[5] = ((u32)(s32)(32545) << 16);

label_7F212C28:
    ctx->pc = 0x7F212C28u;
    // 7F212C28: addi    r4, r4, 8104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8104);

label_7F212C2C:
    ctx->pc = 0x7F212C2Cu;
    // 7F212C2C: addi    r5, r5, 9996
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9996);

label_7F212C30:
    ctx->pc = 0x7F212C30u;
    // 7F212C30: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F212C34u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F212C34:
    ctx->pc = 0x7F212C34u;
    ctx->downcount -= 7;
    // 7F212C34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F212C38:
    ctx->pc = 0x7F212C38u;
    // 7F212C38: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F212C3C:
    ctx->pc = 0x7F212C3Cu;
    // 7F212C3C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F212C40:
    ctx->pc = 0x7F212C40u;
    // 7F212C40: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F212C44:
    ctx->pc = 0x7F212C44u;
    // 7F212C44: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F212C48:
    ctx->pc = 0x7F212C48u;
    // 7F212C48: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F212C4C:
    ctx->pc = 0x7F212C4Cu;
    // 7F212C4C: bl      0x7F21275C
    {
            ctx->lr = 0x7F212C50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21275Cu;
                return;
            }
            goto label_7F21275C;
    }

label_7F212C50:
    ctx->pc = 0x7F212C50u;
    ctx->downcount -= 2;
    // 7F212C50: cmpwi   r3, 0
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

label_7F212C54:
    ctx->pc = 0x7F212C54u;
    // 7F212C54: bc    4, 0, 0x7F212C68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212C68;
        }
    }

label_7F212C58:
    ctx->pc = 0x7F212C58u;
    ctx->downcount -= 2;
    // 7F212C58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F212C5C:
    ctx->pc = 0x7F212C5Cu;
    // 7F212C5C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F212C60u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F212C60:
    ctx->pc = 0x7F212C60u;
    ctx->downcount -= 2;
    // 7F212C60: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F212C64:
    ctx->pc = 0x7F212C64u;
    // 7F212C64: b       0x7F212C6C
    {
            goto label_7F212C6C;
    }

label_7F212C68:
    ctx->pc = 0x7F212C68u;
    ctx->downcount -= 1;
    // 7F212C68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F212C6C:
    ctx->pc = 0x7F212C6Cu;
    ctx->downcount -= 16;
    // 7F212C6C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F212C70:
    ctx->pc = 0x7F212C70u;
    // 7F212C70: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212C74:
    ctx->pc = 0x7F212C74u;
    // 7F212C74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F212C78:
    ctx->pc = 0x7F212C78u;
    // 7F212C78: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F212C7C:
    ctx->pc = 0x7F212C7Cu;
    // 7F212C7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F212C80:
    ctx->pc = 0x7F212C80u;
    ctx->downcount -= 5;
    // 7F212C80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F212C84:
    ctx->pc = 0x7F212C84u;
    // 7F212C84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F212C88:
    ctx->pc = 0x7F212C88u;
    // 7F212C88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212C8C:
    ctx->pc = 0x7F212C8Cu;
    // 7F212C8C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F212C90:
    ctx->pc = 0x7F212C90u;
    // 7F212C90: bl      0x7F3C9624
    {
            ctx->lr = 0x7F212C94u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F212C94:
    ctx->pc = 0x7F212C94u;
    ctx->downcount -= 4;
    // 7F212C94: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F212C98:
    ctx->pc = 0x7F212C98u;
    // 7F212C98: cmpwi   r3, 0
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

label_7F212C9C:
    ctx->pc = 0x7F212C9Cu;
    // 7F212C9C: bc    4, 1, 0x7F212CCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212CCC;
        }
    }

label_7F212CA0:
    ctx->pc = 0x7F212CA0u;
    ctx->downcount -= 5;
    // 7F212CA0: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F212CA4:
    ctx->pc = 0x7F212CA4u;
    // 7F212CA4: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212CA8:
    ctx->pc = 0x7F212CA8u;
    // 7F212CA8: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212CAC:
    // 7F212CAC: cmpwi   r0, 0
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

label_7F212CB0:
    // 7F212CB0: bc    12, 2, 0x7F212CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212CB8;
        }
    }

label_7F212CB4:
    ctx->downcount -= 1;
    // 7F212CB4: b       0x7F212CC0
    {
            goto label_7F212CC0;
    }

label_7F212CB8:
    ctx->downcount -= 2;
    // 7F212CB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F212CBC:
    // 7F212CBC: b       0x7F212CD0
    {
            goto label_7F212CD0;
    }

label_7F212CC0:
    ctx->downcount -= 3;
    // 7F212CC0: addi    r0, r4, 16
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(16);

label_7F212CC4:
    ctx->pc = 0x7F212CC4u;
    // 7F212CC4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212CC8:
    // 7F212CC8: bc    16, 0, 0x7F212CA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F212CA0u;
                return;
            }
            goto label_7F212CA0;
        }
    }

label_7F212CCC:
    ctx->pc = 0x7F212CCCu;
    ctx->downcount -= 1;
    // 7F212CCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F212CD0:
    ctx->pc = 0x7F212CD0u;
    ctx->downcount -= 5;
    // 7F212CD0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212CD4:
    ctx->pc = 0x7F212CD4u;
    // 7F212CD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F212CD8:
    ctx->pc = 0x7F212CD8u;
    // 7F212CD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F212CDC:
    ctx->pc = 0x7F212CDCu;
    // 7F212CDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F212CE0:
    ctx->pc = 0x7F212CE0u;
    ctx->downcount -= 7;
    // 7F212CE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F212CE4:
    ctx->pc = 0x7F212CE4u;
    // 7F212CE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F212CE8:
    ctx->pc = 0x7F212CE8u;
    // 7F212CE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212CEC:
    ctx->pc = 0x7F212CECu;
    // 7F212CEC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F212CF0:
    ctx->pc = 0x7F212CF0u;
    // 7F212CF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F212CF4:
    ctx->pc = 0x7F212CF4u;
    // 7F212CF4: lwz     r3, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212CF8:
    ctx->pc = 0x7F212CF8u;
    // 7F212CF8: bl      0x7F212C80
    {
            ctx->lr = 0x7F212CFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F212C80u;
                return;
            }
            goto label_7F212C80;
    }

label_7F212CFC:
    ctx->pc = 0x7F212CFCu;
    ctx->downcount -= 2;
    // 7F212CFC: cmpwi   r3, 0
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

label_7F212D00:
    ctx->pc = 0x7F212D00u;
    // 7F212D00: bc    12, 2, 0x7F212D08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212D08;
        }
    }

label_7F212D04:
    ctx->pc = 0x7F212D04u;
    ctx->downcount -= 1;
    // 7F212D04: b       0x7F212D3C
    {
            goto label_7F212D3C;
    }

label_7F212D08:
    ctx->pc = 0x7F212D08u;
    ctx->downcount -= 8;
    // 7F212D08: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F212D0C:
    ctx->pc = 0x7F212D0Cu;
    // 7F212D0C: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212D10:
    ctx->pc = 0x7F212D10u;
    // 7F212D10: stw     r0, 484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212D14:
    ctx->pc = 0x7F212D14u;
    // 7F212D14: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F212D18:
    ctx->pc = 0x7F212D18u;
    // 7F212D18: lhz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F212D1C:
    ctx->pc = 0x7F212D1Cu;
    // 7F212D1C: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F212D20:
    ctx->pc = 0x7F212D20u;
    // 7F212D20: sth     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F212D24:
    ctx->pc = 0x7F212D24u;
    // 7F212D24: bl      0x7F024060
    {
            ctx->lr = 0x7F212D28u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F212D28:
    ctx->pc = 0x7F212D28u;
    ctx->downcount -= 2;
    // 7F212D28: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212D2C:
    ctx->pc = 0x7F212D2Cu;
    // 7F212D2C: bl      0x7F023170
    {
            ctx->lr = 0x7F212D30u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F212D30:
    ctx->pc = 0x7F212D30u;
    ctx->downcount -= 2;
    // 7F212D30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F212D34:
    ctx->pc = 0x7F212D34u;
    // 7F212D34: bl      0x7F3C8210
    {
            ctx->lr = 0x7F212D38u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F212D38:
    ctx->pc = 0x7F212D38u;
    ctx->downcount -= 1;
    // 7F212D38: b       0x7F212DDC
    {
            goto label_7F212DDC;
    }

label_7F212D3C:
    ctx->pc = 0x7F212D3Cu;
    ctx->downcount -= 3;
    // 7F212D3C: lwz     r0, 484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212D40:
    ctx->pc = 0x7F212D40u;
    // 7F212D40: cmpwi   r0, 1
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

label_7F212D44:
    ctx->pc = 0x7F212D44u;
    // 7F212D44: bc    12, 2, 0x7F212D58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212D58;
        }
    }

label_7F212D48:
    ctx->pc = 0x7F212D48u;
    ctx->downcount -= 4;
    // 7F212D48: lhz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F212D4C:
    ctx->pc = 0x7F212D4Cu;
    // 7F212D4C: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F212D50:
    ctx->pc = 0x7F212D50u;
    // 7F212D50: sth     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F212D54:
    ctx->pc = 0x7F212D54u;
    // 7F212D54: b       0x7F212D64
    {
            goto label_7F212D64;
    }

label_7F212D58:
    ctx->pc = 0x7F212D58u;
    ctx->downcount -= 3;
    // 7F212D58: lhz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F212D5C:
    ctx->pc = 0x7F212D5Cu;
    // 7F212D5C: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F212D60:
    ctx->pc = 0x7F212D60u;
    // 7F212D60: sth     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F212D64:
    ctx->pc = 0x7F212D64u;
    ctx->downcount -= 3;
    // 7F212D64: lwz     r0, 476(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212D68:
    ctx->pc = 0x7F212D68u;
    // 7F212D68: cmpwi   r0, 0
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

label_7F212D6C:
    ctx->pc = 0x7F212D6Cu;
    // 7F212D6C: bc    12, 2, 0x7F212DDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212DDC;
        }
    }

label_7F212D70:
    ctx->pc = 0x7F212D70u;
    ctx->downcount -= 6;
    // 7F212D70: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F212D74:
    ctx->pc = 0x7F212D74u;
    // 7F212D74: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F212D78:
    ctx->pc = 0x7F212D78u;
    // 7F212D78: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F212D7C:
    ctx->pc = 0x7F212D7Cu;
    // 7F212D7C: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F212D80:
    ctx->pc = 0x7F212D80u;
    // 7F212D80: cmpwi   r0, 9
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

label_7F212D84:
    ctx->pc = 0x7F212D84u;
    // 7F212D84: bc    4, 2, 0x7F212DB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212DB4;
        }
    }

label_7F212D88:
    ctx->pc = 0x7F212D88u;
    ctx->downcount -= 3;
    // 7F212D88: lwz     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212D8C:
    ctx->pc = 0x7F212D8Cu;
    // 7F212D8C: cmpwi   r0, 0
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

label_7F212D90:
    ctx->pc = 0x7F212D90u;
    // 7F212D90: bc    4, 2, 0x7F212DDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212DDC;
        }
    }

label_7F212D94:
    ctx->pc = 0x7F212D94u;
    ctx->downcount -= 5;
    // 7F212D94: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F212D98:
    ctx->pc = 0x7F212D98u;
    // 7F212D98: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F212D9C:
    ctx->pc = 0x7F212D9Cu;
    // 7F212D9C: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212DA0:
    ctx->pc = 0x7F212DA0u;
    // 7F212DA0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212DA4:
    ctx->pc = 0x7F212DA4u;
    // 7F212DA4: bl      0x7F03C1BC
    {
            ctx->lr = 0x7F212DA8u;
            ctx->pc = 0x7F03C1BCu;
            return;
    }

label_7F212DA8:
    ctx->pc = 0x7F212DA8u;
    ctx->downcount -= 2;
    // 7F212DA8: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212DAC:
    ctx->pc = 0x7F212DACu;
    // 7F212DAC: bl      0x7F023170
    {
            ctx->lr = 0x7F212DB0u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F212DB0:
    ctx->pc = 0x7F212DB0u;
    ctx->downcount -= 1;
    // 7F212DB0: b       0x7F212DDC
    {
            goto label_7F212DDC;
    }

label_7F212DB4:
    ctx->pc = 0x7F212DB4u;
    ctx->downcount -= 3;
    // 7F212DB4: lwz     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212DB8:
    ctx->pc = 0x7F212DB8u;
    // 7F212DB8: cmpwi   r0, 1
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

label_7F212DBC:
    ctx->pc = 0x7F212DBCu;
    // 7F212DBC: bc    4, 2, 0x7F212DDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212DDC;
        }
    }

label_7F212DC0:
    ctx->pc = 0x7F212DC0u;
    ctx->downcount -= 5;
    // 7F212DC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212DC4:
    ctx->pc = 0x7F212DC4u;
    // 7F212DC4: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F212DC8:
    ctx->pc = 0x7F212DC8u;
    // 7F212DC8: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212DCC:
    ctx->pc = 0x7F212DCCu;
    // 7F212DCC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212DD0:
    ctx->pc = 0x7F212DD0u;
    // 7F212DD0: bl      0x7F03C1CC
    {
            ctx->lr = 0x7F212DD4u;
            ctx->pc = 0x7F03C1CCu;
            return;
    }

label_7F212DD4:
    ctx->pc = 0x7F212DD4u;
    ctx->downcount -= 2;
    // 7F212DD4: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212DD8:
    ctx->pc = 0x7F212DD8u;
    // 7F212DD8: bl      0x7F023170
    {
            ctx->lr = 0x7F212DDCu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F212DDC:
    ctx->pc = 0x7F212DDCu;
    ctx->downcount -= 6;
    // 7F212DDC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212DE0:
    ctx->pc = 0x7F212DE0u;
    // 7F212DE0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F212DE4:
    ctx->pc = 0x7F212DE4u;
    // 7F212DE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F212DE8:
    ctx->pc = 0x7F212DE8u;
    // 7F212DE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F212DEC:
    ctx->pc = 0x7F212DECu;
    // 7F212DEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F212DF0:
    ctx->pc = 0x7F212DF0u;
    ctx->downcount -= 21;
    // 7F212DF0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F212DF4:
    ctx->pc = 0x7F212DF4u;
    // 7F212DF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F212DF8:
    ctx->pc = 0x7F212DF8u;
    // 7F212DF8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F212DFC:
    ctx->pc = 0x7F212DFCu;
    // 7F212DFC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212E00:
    ctx->pc = 0x7F212E00u;
    // 7F212E00: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F212E04:
    ctx->pc = 0x7F212E04u;
    // 7F212E04: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F212E08:
    ctx->pc = 0x7F212E08u;
    // 7F212E08: stw     r4, 468(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F212E0C:
    ctx->pc = 0x7F212E0Cu;
    // 7F212E0C: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212E10:
    ctx->pc = 0x7F212E10u;
    // 7F212E10: stw     r5, 472(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(472);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F212E14:
    ctx->pc = 0x7F212E14u;
    // 7F212E14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F212E18:
    ctx->pc = 0x7F212E18u;
    // 7F212E18: bl      0x7F022FB4
    {
            ctx->lr = 0x7F212E1Cu;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F212E1C:
    ctx->pc = 0x7F212E1Cu;
    ctx->downcount -= 2;
    // 7F212E1C: cmpwi   r3, 0
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

label_7F212E20:
    ctx->pc = 0x7F212E20u;
    // 7F212E20: bc    4, 0, 0x7F212E2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F212E2C;
        }
    }

label_7F212E24:
    ctx->pc = 0x7F212E24u;
    ctx->downcount -= 2;
    // 7F212E24: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F212E28:
    ctx->pc = 0x7F212E28u;
    // 7F212E28: b       0x7F212FBC
    {
            goto label_7F212FBC;
    }

label_7F212E2C:
    ctx->pc = 0x7F212E2Cu;
    ctx->downcount -= 2;
    // 7F212E2C: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212E30:
    ctx->pc = 0x7F212E30u;
    // 7F212E30: bl      0x7F023EA8
    {
            ctx->lr = 0x7F212E34u;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F212E34:
    ctx->pc = 0x7F212E34u;
    ctx->downcount -= 2;
    // 7F212E34: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F212E38:
    ctx->pc = 0x7F212E38u;
    // 7F212E38: bl      0x7F3C664C
    {
            ctx->lr = 0x7F212E3Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F212E3C:
    ctx->pc = 0x7F212E3Cu;
    ctx->downcount -= 2;
    // 7F212E3C: cmplwi  r3, 0x0000
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

label_7F212E40:
    ctx->pc = 0x7F212E40u;
    // 7F212E40: bc    12, 2, 0x7F212EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212EC8;
        }
    }

label_7F212E44:
    ctx->pc = 0x7F212E44u;
    ctx->downcount -= 1;
    // 7F212E44: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F212E48u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F212E48:
    ctx->pc = 0x7F212E48u;
    ctx->downcount -= 10;
    // 7F212E48: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F212E4C:
    ctx->pc = 0x7F212E4Cu;
    // 7F212E4C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F212E50:
    ctx->pc = 0x7F212E50u;
    // 7F212E50: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212E54:
    ctx->pc = 0x7F212E54u;
    // 7F212E54: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212E58:
    ctx->pc = 0x7F212E58u;
    // 7F212E58: lfd     f1, 16104(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F212E58u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16104);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212E5C:
    ctx->pc = 0x7F212E5Cu;
    // 7F212E5C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212E60:
    ctx->pc = 0x7F212E60u;
    // 7F212E60: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212E60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212E64:
    ctx->pc = 0x7F212E64u;
    // 7F212E64: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212E64u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F212E68:
    ctx->pc = 0x7F212E68u;
    // 7F212E68: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212E68u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212E6C:
    ctx->pc = 0x7F212E6Cu;
    // 7F212E6C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F212E70u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F212E70:
    ctx->pc = 0x7F212E70u;
    ctx->downcount -= 10;
    // 7F212E70: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F212E74:
    ctx->pc = 0x7F212E74u;
    // 7F212E74: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F212E78:
    ctx->pc = 0x7F212E78u;
    // 7F212E78: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212E7C:
    ctx->pc = 0x7F212E7Cu;
    // 7F212E7C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212E80:
    ctx->pc = 0x7F212E80u;
    // 7F212E80: lfd     f1, 16104(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F212E80u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16104);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212E84:
    ctx->pc = 0x7F212E84u;
    // 7F212E84: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212E88:
    ctx->pc = 0x7F212E88u;
    // 7F212E88: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212E88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212E8C:
    ctx->pc = 0x7F212E8Cu;
    // 7F212E8C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F212E8Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F212E90:
    ctx->pc = 0x7F212E90u;
    // 7F212E90: stfs     f0, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212E90u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212E94:
    ctx->pc = 0x7F212E94u;
    // 7F212E94: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F212E98u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F212E98:
    ctx->pc = 0x7F212E98u;
    ctx->downcount -= 12;
    // 7F212E98: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F212E9C:
    ctx->pc = 0x7F212E9Cu;
    // 7F212E9C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F212EA0:
    ctx->pc = 0x7F212EA0u;
    // 7F212EA0: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F212EA4:
    ctx->pc = 0x7F212EA4u;
    // 7F212EA4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F212EA8:
    ctx->pc = 0x7F212EA8u;
    // 7F212EA8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F212EAC:
    ctx->pc = 0x7F212EACu;
    // 7F212EAC: lfd     f2, 16104(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F212EACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16104);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212EB0:
    ctx->pc = 0x7F212EB0u;
    // 7F212EB0: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212EB4:
    ctx->pc = 0x7F212EB4u;
    // 7F212EB4: lfs     f0, 16096(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F212EB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16096);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F212EB8:
    ctx->pc = 0x7F212EB8u;
    // 7F212EB8: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212EB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212EBC:
    ctx->pc = 0x7F212EBCu;
    // 7F212EBC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F212EBCu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F212EC0:
    ctx->pc = 0x7F212EC0u;
    // 7F212EC0: stfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212EC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F212EC4:
    ctx->pc = 0x7F212EC4u;
    // 7F212EC4: stfs     f0, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F212EC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F212EC8:
    ctx->pc = 0x7F212EC8u;
    ctx->downcount -= 2;
    // 7F212EC8: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F212ECC:
    ctx->pc = 0x7F212ECCu;
    // 7F212ECC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F212ED0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F212ED0:
    ctx->pc = 0x7F212ED0u;
    ctx->downcount -= 2;
    // 7F212ED0: cmplwi  r3, 0x0000
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

label_7F212ED4:
    ctx->pc = 0x7F212ED4u;
    // 7F212ED4: bc    12, 2, 0x7F212F04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212F04;
        }
    }

label_7F212ED8:
    ctx->pc = 0x7F212ED8u;
    ctx->downcount -= 7;
    // 7F212ED8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F212EDC:
    ctx->pc = 0x7F212EDCu;
    // 7F212EDC: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F212EE0:
    ctx->pc = 0x7F212EE0u;
    // 7F212EE0: stw     r0, 476(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212EE4:
    ctx->pc = 0x7F212EE4u;
    // 7F212EE4: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212EE8:
    ctx->pc = 0x7F212EE8u;
    // 7F212EE8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F212EEC:
    ctx->pc = 0x7F212EECu;
    // 7F212EEC: lwz     r6, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F212EF0:
    ctx->pc = 0x7F212EF0u;
    // 7F212EF0: bl      0x7F0120F4
    {
            ctx->lr = 0x7F212EF4u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F212EF4:
    ctx->pc = 0x7F212EF4u;
    ctx->downcount -= 3;
    // 7F212EF4: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F212EF8:
    ctx->pc = 0x7F212EF8u;
    // 7F212EF8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212EFC:
    ctx->pc = 0x7F212EFCu;
    // 7F212EFC: bl      0x7F03C1CC
    {
            ctx->lr = 0x7F212F00u;
            ctx->pc = 0x7F03C1CCu;
            return;
    }

label_7F212F00:
    ctx->pc = 0x7F212F00u;
    ctx->downcount -= 1;
    // 7F212F00: b       0x7F212F2C
    {
            goto label_7F212F2C;
    }

label_7F212F04:
    ctx->pc = 0x7F212F04u;
    ctx->downcount -= 7;
    // 7F212F04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212F08:
    ctx->pc = 0x7F212F08u;
    // 7F212F08: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F212F0C:
    ctx->pc = 0x7F212F0Cu;
    // 7F212F0C: stw     r0, 476(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212F10:
    ctx->pc = 0x7F212F10u;
    // 7F212F10: addi    r4, r31, 32
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212F14:
    ctx->pc = 0x7F212F14u;
    // 7F212F14: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F212F18:
    ctx->pc = 0x7F212F18u;
    // 7F212F18: lwz     r6, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F212F1C:
    ctx->pc = 0x7F212F1Cu;
    // 7F212F1C: bl      0x7F0120F4
    {
            ctx->lr = 0x7F212F20u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F212F20:
    ctx->pc = 0x7F212F20u;
    ctx->downcount -= 3;
    // 7F212F20: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F212F24:
    ctx->pc = 0x7F212F24u;
    // 7F212F24: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F212F28:
    ctx->pc = 0x7F212F28u;
    // 7F212F28: bl      0x7F03C1BC
    {
            ctx->lr = 0x7F212F2Cu;
            ctx->pc = 0x7F03C1BCu;
            return;
    }

label_7F212F2C:
    ctx->pc = 0x7F212F2Cu;
    ctx->downcount -= 2;
    // 7F212F2C: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F212F30:
    ctx->pc = 0x7F212F30u;
    // 7F212F30: bl      0x7F3C664C
    {
            ctx->lr = 0x7F212F34u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F212F34:
    ctx->pc = 0x7F212F34u;
    ctx->downcount -= 2;
    // 7F212F34: cmplwi  r3, 0x0000
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

label_7F212F38:
    ctx->pc = 0x7F212F38u;
    // 7F212F38: bc    12, 2, 0x7F212F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212F48;
        }
    }

label_7F212F3C:
    ctx->pc = 0x7F212F3Cu;
    ctx->downcount -= 3;
    // 7F212F3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F212F40:
    ctx->pc = 0x7F212F40u;
    // 7F212F40: stw     r0, 484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212F44:
    ctx->pc = 0x7F212F44u;
    // 7F212F44: b       0x7F212F50
    {
            goto label_7F212F50;
    }

label_7F212F48:
    ctx->pc = 0x7F212F48u;
    ctx->downcount -= 2;
    // 7F212F48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212F4C:
    ctx->pc = 0x7F212F4Cu;
    // 7F212F4C: stw     r0, 484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212F50:
    ctx->pc = 0x7F212F50u;
    ctx->downcount -= 2;
    // 7F212F50: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F212F54:
    ctx->pc = 0x7F212F54u;
    // 7F212F54: bl      0x7F3C664C
    {
            ctx->lr = 0x7F212F58u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F212F58:
    ctx->pc = 0x7F212F58u;
    ctx->downcount -= 2;
    // 7F212F58: cmplwi  r3, 0x0000
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

label_7F212F5C:
    ctx->pc = 0x7F212F5Cu;
    // 7F212F5C: bc    12, 2, 0x7F212FA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F212FA8;
        }
    }

label_7F212F60:
    ctx->pc = 0x7F212F60u;
    ctx->downcount -= 1;
    // 7F212F60: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F212F64u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F212F64:
    ctx->pc = 0x7F212F64u;
    ctx->downcount -= 2;
    // 7F212F64: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F212F68:
    ctx->pc = 0x7F212F68u;
    // 7F212F68: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F212F6Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F212F6C:
    ctx->pc = 0x7F212F6Cu;
    ctx->downcount -= 15;
    // 7F212F6C: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_7F212F70:
    ctx->pc = 0x7F212F70u;
    // 7F212F70: xoris   r5, r30, 0x8000
    ctx->gpr[5] = ctx->gpr[30] ^ (0x8000u << 16);

label_7F212F74:
    ctx->pc = 0x7F212F74u;
    // 7F212F74: stw     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F212F78:
    ctx->pc = 0x7F212F78u;
    // 7F212F78: xoris   r0, r3, 0x8000
    ctx->gpr[0] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F212F7C:
    ctx->pc = 0x7F212F7Cu;
    // 7F212F7C: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F212F80:
    ctx->pc = 0x7F212F80u;
    // 7F212F80: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F212F84:
    ctx->pc = 0x7F212F84u;
    // 7F212F84: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F212F88:
    ctx->pc = 0x7F212F88u;
    // 7F212F88: lfd     f2, 16104(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F212F88u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16104);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212F8C:
    ctx->pc = 0x7F212F8Cu;
    // 7F212F8C: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212F8Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212F90:
    ctx->pc = 0x7F212F90u;
    // 7F212F90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212F94:
    ctx->pc = 0x7F212F94u;
    // 7F212F94: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F212F94u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F212F98:
    ctx->pc = 0x7F212F98u;
    // 7F212F98: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F212F9C:
    ctx->pc = 0x7F212F9Cu;
    // 7F212F9C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F212F9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F212FA0:
    ctx->pc = 0x7F212FA0u;
    // 7F212FA0: fsubs   f2, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F212FA0u)) return;
    ppc_fsubs(ctx, 2, 0, 2);

label_7F212FA4:
    ctx->pc = 0x7F212FA4u;
    // 7F212FA4: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F212FA8u;
            ctx->pc = 0x7F03C1DCu;
            return;
    }

label_7F212FA8:
    ctx->pc = 0x7F212FA8u;
    ctx->downcount -= 4;
    // 7F212FA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F212FAC:
    ctx->pc = 0x7F212FACu;
    // 7F212FAC: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212FB0:
    ctx->pc = 0x7F212FB0u;
    // 7F212FB0: stw     r0, 480(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(480);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212FB4:
    ctx->pc = 0x7F212FB4u;
    // 7F212FB4: bl      0x7F023170
    {
            ctx->lr = 0x7F212FB8u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F212FB8:
    ctx->pc = 0x7F212FB8u;
    ctx->downcount -= 1;
    // 7F212FB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F212FBC:
    ctx->pc = 0x7F212FBCu;
    ctx->downcount -= 16;
    // 7F212FBC: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F212FC0:
    ctx->pc = 0x7F212FC0u;
    // 7F212FC0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212FC4:
    ctx->pc = 0x7F212FC4u;
    // 7F212FC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F212FC8:
    ctx->pc = 0x7F212FC8u;
    // 7F212FC8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F212FCC:
    ctx->pc = 0x7F212FCCu;
    // 7F212FCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F212FD0:
    ctx->pc = 0x7F212FD0u;
    ctx->downcount -= 7;
    // 7F212FD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F212FD4:
    ctx->pc = 0x7F212FD4u;
    // 7F212FD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F212FD8:
    ctx->pc = 0x7F212FD8u;
    // 7F212FD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F212FDC:
    ctx->pc = 0x7F212FDCu;
    // 7F212FDC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F212FE0:
    ctx->pc = 0x7F212FE0u;
    // 7F212FE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F212FE4:
    ctx->pc = 0x7F212FE4u;
    // 7F212FE4: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F212FE8:
    ctx->pc = 0x7F212FE8u;
    // 7F212FE8: bl      0x7F023E10
    {
            ctx->lr = 0x7F212FECu;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F212FEC:
    ctx->pc = 0x7F212FECu;
    ctx->downcount -= 2;
    // 7F212FEC: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F212FF0:
    ctx->pc = 0x7F212FF0u;
    // 7F212FF0: bl      0x7F012144
    {
            ctx->lr = 0x7F212FF4u;
            ctx->pc = 0x7F012144u;
            return;
    }

label_7F212FF4:
    ctx->pc = 0x7F212FF4u;
    ctx->downcount -= 6;
    // 7F212FF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F212FF8:
    ctx->pc = 0x7F212FF8u;
    // 7F212FF8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F212FFC:
    ctx->pc = 0x7F212FFCu;
    // 7F212FFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213000:
    ctx->pc = 0x7F213000u;
    // 7F213000: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213004:
    ctx->pc = 0x7F213004u;
    // 7F213004: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213008:
    ctx->pc = 0x7F213008u;
    ctx->downcount -= 21;
    // 7F213008: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21300C:
    ctx->pc = 0x7F21300Cu;
    // 7F21300C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213010:
    ctx->pc = 0x7F213010u;
    // 7F213010: li      r5, 496
    ctx->gpr[5] = (u32)(s32)(496);

label_7F213014:
    ctx->pc = 0x7F213014u;
    // 7F213014: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F213018:
    ctx->pc = 0x7F213018u;
    // 7F213018: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21301C:
    ctx->pc = 0x7F21301Cu;
    // 7F21301C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F213020:
    ctx->pc = 0x7F213020u;
    // 7F213020: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213024:
    ctx->pc = 0x7F213024u;
    // 7F213024: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F213028:
    ctx->pc = 0x7F213028u;
    // 7F213028: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F21302C:
    ctx->pc = 0x7F21302Cu;
    // 7F21302C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F213030:
    ctx->pc = 0x7F213030u;
    // 7F213030: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F213034u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F213034:
    ctx->pc = 0x7F213034u;
    ctx->downcount -= 2;
    // 7F213034: or.   r31, r3, r3
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

label_7F213038:
    ctx->pc = 0x7F213038u;
    // 7F213038: bc    12, 2, 0x7F213078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213078;
        }
    }

label_7F21303C:
    ctx->pc = 0x7F21303Cu;
    ctx->downcount -= 5;
    // 7F21303C: lis     r4, 32545
    ctx->gpr[4] = ((u32)(s32)(32545) << 16);

label_7F213040:
    ctx->pc = 0x7F213040u;
    // 7F213040: lis     r5, 32545
    ctx->gpr[5] = ((u32)(s32)(32545) << 16);

label_7F213044:
    ctx->pc = 0x7F213044u;
    // 7F213044: addi    r4, r4, 11488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11488);

label_7F213048:
    ctx->pc = 0x7F213048u;
    // 7F213048: addi    r5, r5, 12240
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12240);

label_7F21304C:
    ctx->pc = 0x7F21304Cu;
    // 7F21304C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F213050u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F213050:
    ctx->pc = 0x7F213050u;
    ctx->downcount -= 4;
    // 7F213050: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213054:
    ctx->pc = 0x7F213054u;
    // 7F213054: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F213058:
    ctx->pc = 0x7F213058u;
    // 7F213058: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21305C:
    ctx->pc = 0x7F21305Cu;
    // 7F21305C: bl      0x7F212DF0
    {
            ctx->lr = 0x7F213060u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F212DF0u;
                return;
            }
            goto label_7F212DF0;
    }

label_7F213060:
    ctx->pc = 0x7F213060u;
    ctx->downcount -= 2;
    // 7F213060: cmpwi   r3, 0
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

label_7F213064:
    ctx->pc = 0x7F213064u;
    // 7F213064: bc    4, 0, 0x7F213078
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213078;
        }
    }

label_7F213068:
    ctx->pc = 0x7F213068u;
    ctx->downcount -= 2;
    // 7F213068: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21306C:
    ctx->pc = 0x7F21306Cu;
    // 7F21306C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F213070u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F213070:
    ctx->pc = 0x7F213070u;
    ctx->downcount -= 2;
    // 7F213070: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F213074:
    ctx->pc = 0x7F213074u;
    // 7F213074: b       0x7F21307C
    {
            goto label_7F21307C;
    }

label_7F213078:
    ctx->pc = 0x7F213078u;
    ctx->downcount -= 1;
    // 7F213078: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21307C:
    ctx->pc = 0x7F21307Cu;
    ctx->downcount -= 16;
    // 7F21307C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F213080:
    ctx->pc = 0x7F213080u;
    // 7F213080: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213084:
    ctx->pc = 0x7F213084u;
    // 7F213084: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213088:
    ctx->pc = 0x7F213088u;
    // 7F213088: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21308C:
    ctx->pc = 0x7F21308Cu;
    // 7F21308C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213090:
    ctx->pc = 0x7F213090u;
    ctx->downcount -= 1;
    // 7F213090: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213094:
    ctx->pc = 0x7F213094u;
    ctx->downcount -= 1;
    // 7F213094: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213098:
    ctx->pc = 0x7F213098u;
    ctx->downcount -= 17;
    // 7F213098: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21309C:
    ctx->pc = 0x7F21309Cu;
    // 7F21309C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2130A0:
    ctx->pc = 0x7F2130A0u;
    // 7F2130A0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2130A4:
    ctx->pc = 0x7F2130A4u;
    // 7F2130A4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2130A8:
    ctx->pc = 0x7F2130A8u;
    // 7F2130A8: addi    r0, r1, 16
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2130AC:
    ctx->pc = 0x7F2130ACu;
    // 7F2130AC: lha     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2130B0:
    ctx->pc = 0x7F2130B0u;
    // 7F2130B0: stw     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2130B4:
    ctx->pc = 0x7F2130B4u;
    // 7F2130B4: lha     r6, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2130B8:
    ctx->pc = 0x7F2130B8u;
    // 7F2130B8: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2130BC:
    ctx->pc = 0x7F2130BCu;
    // 7F2130BC: lha     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2130C0:
    ctx->pc = 0x7F2130C0u;
    // 7F2130C0: stw     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2130C4:
    ctx->pc = 0x7F2130C4u;
    // 7F2130C4: lha     r6, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2130C8:
    ctx->pc = 0x7F2130C8u;
    // 7F2130C8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2130CC:
    ctx->pc = 0x7F2130CCu;
    // 7F2130CC: stw     r6, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2130D0:
    ctx->pc = 0x7F2130D0u;
    // 7F2130D0: sth     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2130D4:
    ctx->pc = 0x7F2130D4u;
    // 7F2130D4: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2130D8:
    ctx->pc = 0x7F2130D8u;
    // 7F2130D8: bl      0x7F3C7728
    {
            ctx->lr = 0x7F2130DCu;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F2130DC:
    ctx->pc = 0x7F2130DCu;
    ctx->downcount -= 5;
    // 7F2130DC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2130E0:
    ctx->pc = 0x7F2130E0u;
    // 7F2130E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2130E4:
    ctx->pc = 0x7F2130E4u;
    // 7F2130E4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2130E8:
    ctx->pc = 0x7F2130E8u;
    // 7F2130E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2130EC:
    ctx->pc = 0x7F2130ECu;
    ctx->downcount -= 16;
    // 7F2130EC: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2130F0:
    ctx->pc = 0x7F2130F0u;
    // 7F2130F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2130F4:
    ctx->pc = 0x7F2130F4u;
    // 7F2130F4: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2130F8:
    ctx->pc = 0x7F2130F8u;
    // 7F2130F8: stmw     r18, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        for (u32 r = 18; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2130FC:
    ctx->pc = 0x7F2130FCu;
    // 7F2130FC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213100:
    ctx->pc = 0x7F213100u;
    // 7F213100: bl      0x7F0688B8
    {
            ctx->lr = 0x7F213104u;
            ctx->pc = 0x7F0688B8u;
            return;
    }

label_7F213104:
    ctx->pc = 0x7F213104u;
    ctx->downcount -= 7;
    // 7F213104: rlwinm r0, r3, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 24u) & 0xFF000000u;
    }

label_7F213108:
    ctx->pc = 0x7F213108u;
    // 7F213108: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F21310C:
    ctx->pc = 0x7F21310Cu;
    // 7F21310C: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F213110:
    ctx->pc = 0x7F213110u;
    // 7F213110: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F213114:
    ctx->pc = 0x7F213114u;
    // 7F213114: rlwinm r0, r0, 8, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFFFFu;
    }

label_7F213118:
    ctx->pc = 0x7F213118u;
    // 7F213118: add   r20, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_7F21311C:
    ctx->pc = 0x7F21311Cu;
    // 7F21311C: b       0x7F21312C
    {
            goto label_7F21312C;
    }

label_7F213120:
    ctx->downcount -= 2;
    // 7F213120: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F213124:
    // 7F213124: bl      0x7F02A538
    {
            ctx->lr = 0x7F213128u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F213128:
    ctx->downcount -= 1;
    // 7F213128: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F21312C:
    ctx->downcount -= 2;
    // 7F21312C: cmpw    r18, r20
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(ctx->gpr[20]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213130:
    // 7F213130: bc    12, 0, 0x7F213120
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213120u;
                return;
            }
            goto label_7F213120;
        }
    }

label_7F213134:
    ctx->pc = 0x7F213134u;
    ctx->downcount -= 12;
    // 7F213134: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F213138:
    ctx->pc = 0x7F213138u;
    // 7F213138: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F21313C:
    ctx->pc = 0x7F21313Cu;
    // 7F21313C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F213140:
    ctx->pc = 0x7F213140u;
    // 7F213140: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F213144:
    ctx->pc = 0x7F213144u;
    // 7F213144: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F213148:
    ctx->pc = 0x7F213148u;
    // 7F213148: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F21314C:
    ctx->pc = 0x7F21314Cu;
    // 7F21314C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F213150:
    ctx->pc = 0x7F213150u;
    // 7F213150: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F213154:
    ctx->pc = 0x7F213154u;
    // 7F213154: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F213158:
    ctx->pc = 0x7F213158u;
    // 7F213158: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F21315C:
    ctx->pc = 0x7F21315Cu;
    // 7F21315C: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F213160:
    ctx->pc = 0x7F213160u;
    // 7F213160: bl      0x7F01B710
    {
            ctx->lr = 0x7F213164u;
            ctx->pc = 0x7F01B710u;
            return;
    }

label_7F213164:
    ctx->pc = 0x7F213164u;
    ctx->downcount -= 2;
    // 7F213164: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F213168:
    ctx->pc = 0x7F213168u;
    // 7F213168: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21316Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21316C:
    ctx->pc = 0x7F21316Cu;
    ctx->downcount -= 2;
    // 7F21316C: cmplwi  r3, 0x0000
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

label_7F213170:
    ctx->pc = 0x7F213170u;
    // 7F213170: bc    12, 2, 0x7F21317C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21317C;
        }
    }

label_7F213174:
    ctx->pc = 0x7F213174u;
    ctx->downcount -= 1;
    // 7F213174: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F213178u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F213178:
    ctx->pc = 0x7F213178u;
    ctx->downcount -= 1;
    // 7F213178: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21317C:
    ctx->pc = 0x7F21317Cu;
    ctx->downcount -= 2;
    // 7F21317C: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F213180:
    ctx->pc = 0x7F213180u;
    // 7F213180: bl      0x7F3C664C
    {
            ctx->lr = 0x7F213184u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F213184:
    ctx->pc = 0x7F213184u;
    ctx->downcount -= 2;
    // 7F213184: cmplwi  r3, 0x0000
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

label_7F213188:
    ctx->pc = 0x7F213188u;
    // 7F213188: bc    12, 2, 0x7F2131C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2131C4;
        }
    }

label_7F21318C:
    ctx->pc = 0x7F21318Cu;
    ctx->downcount -= 1;
    // 7F21318C: b       0x7F2131B8
    {
            goto label_7F2131B8;
    }

label_7F213190:
    ctx->downcount -= 1;
    // 7F213190: bl      0x7F3C674C
    {
            ctx->lr = 0x7F213194u;
            ctx->pc = 0x7F3C674Cu;
            return;
    }

label_7F213194:
    ctx->downcount -= 4;
    // 7F213194: addi    r20, r1, 72
    ctx->gpr[20] = ctx->gpr[1] + (u32)(s32)(72);

label_7F213198:
    // 7F213198: add   r20, r20, r18
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_7F21319C:
    ctx->pc = 0x7F21319Cu;
    // 7F21319C: sth     r3, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2131A0:
    // 7F2131A0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2131A4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2131A4:
    ctx->pc = 0x7F2131A4u;
    ctx->downcount -= 2;
    // 7F2131A4: sth     r3, 2(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2131A8:
    // 7F2131A8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2131ACu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2131AC:
    ctx->pc = 0x7F2131ACu;
    ctx->downcount -= 3;
    // 7F2131AC: sth     r3, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2131B0:
    // 7F2131B0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_7F2131B4:
    // 7F2131B4: addi    r18, r18, 8
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(8);

label_7F2131B8:
    ctx->downcount -= 1;
    // 7F2131B8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2131BCu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2131BC:
    ctx->downcount -= 2;
    // 7F2131BC: cmplwi  r3, 0x0000
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

label_7F2131C0:
    // 7F2131C0: bc    4, 2, 0x7F213190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213190u;
                return;
            }
            goto label_7F213190;
        }
    }

label_7F2131C4:
    ctx->pc = 0x7F2131C4u;
    ctx->downcount -= 7;
    // 7F2131C4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2131C8:
    ctx->pc = 0x7F2131C8u;
    // 7F2131C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2131CC:
    ctx->pc = 0x7F2131CCu;
    // 7F2131CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2131D0:
    ctx->pc = 0x7F2131D0u;
    // 7F2131D0: mtctr    r30
    ctx->ctr = ctx->gpr[30];

label_7F2131D4:
    ctx->pc = 0x7F2131D4u;
    // 7F2131D4: cmpwi   r30, 0
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

label_7F2131D8:
    ctx->pc = 0x7F2131D8u;
    // 7F2131D8: bc    4, 1, 0x7F2131EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2131EC;
        }
    }

label_7F2131DC:
    loop_7F2131DC(ctx);
    if (ctx->pc == 0x7F2131ECu) goto label_7F2131EC;
    return;
label_7F2131E0:
    // 7F2131E0: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2131E4:
    // 7F2131E4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2131E8:
    // 7F2131E8: bc    16, 0, 0x7F2131DC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2131DCu;
                return;
            }
            goto label_7F2131DC;
        }
    }

label_7F2131EC:
    ctx->pc = 0x7F2131ECu;
    ctx->downcount -= 4;
    // 7F2131EC: addi    r20, r1, 8
    ctx->gpr[20] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2131F0:
    ctx->pc = 0x7F2131F0u;
    // 7F2131F0: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_7F2131F4:
    ctx->pc = 0x7F2131F4u;
    // 7F2131F4: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F2131F8:
    ctx->pc = 0x7F2131F8u;
    // 7F2131F8: b       0x7F21322C
    {
            goto label_7F21322C;
    }

label_7F2131FC:
    ctx->downcount -= 2;
    // 7F2131FC: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F213200:
    // 7F213200: bl      0x7F02A538
    {
            ctx->lr = 0x7F213204u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F213204:
    ctx->downcount -= 53;
    // 7F213204: divw   r0, r3, r30
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[30];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F213208:
    ctx->pc = 0x7F213208u;
    // 7F213208: lwzx    r4, r20, r21
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[21];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F21320C:
    // 7F21320C: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_7F213210:
    // 7F213210: mullw   r0, r0, r30
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[30];
        ctx->gpr[0] = (u32)product;
    }

label_7F213214:
    // 7F213214: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F213218:
    // 7F213218: rlwinm r3, r0, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F21321C:
    ctx->pc = 0x7F21321Cu;
    // 7F21321C: lwzx    r0, r20, r3
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[3];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213220:
    ctx->pc = 0x7F213220u;
    // 7F213220: stwx    r0, r20, r21
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[21];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213224:
    // 7F213224: addi    r21, r21, 4
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(4);

label_7F213228:
    ctx->pc = 0x7F213228u;
    // 7F213228: stwx    r4, r20, r3
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[3];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F21322C:
    ctx->downcount -= 2;
    // 7F21322C: cmpw    r18, r30
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213230:
    // 7F213230: bc    12, 0, 0x7F2131FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2131FCu;
                return;
            }
            goto label_7F2131FC;
        }
    }

label_7F213234:
    ctx->pc = 0x7F213234u;
    ctx->downcount -= 2;
    // 7F213234: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F213238:
    ctx->pc = 0x7F213238u;
    // 7F213238: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21323Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21323C:
    ctx->pc = 0x7F21323Cu;
    ctx->downcount -= 2;
    // 7F21323C: cmplwi  r3, 0x0000
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

label_7F213240:
    ctx->pc = 0x7F213240u;
    // 7F213240: bc    12, 2, 0x7F21324C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21324C;
        }
    }

label_7F213244:
    ctx->pc = 0x7F213244u;
    ctx->downcount -= 1;
    // 7F213244: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F213248u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F213248:
    ctx->pc = 0x7F213248u;
    ctx->downcount -= 1;
    // 7F213248: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21324C:
    ctx->pc = 0x7F21324Cu;
    ctx->downcount -= 2;
    // 7F21324C: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F213250:
    ctx->pc = 0x7F213250u;
    // 7F213250: bl      0x7F3C664C
    {
            ctx->lr = 0x7F213254u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F213254:
    ctx->pc = 0x7F213254u;
    ctx->downcount -= 2;
    // 7F213254: cmplwi  r3, 0x0000
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

label_7F213258:
    ctx->pc = 0x7F213258u;
    // 7F213258: bc    12, 2, 0x7F213264
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213264;
        }
    }

label_7F21325C:
    ctx->pc = 0x7F21325Cu;
    ctx->downcount -= 1;
    // 7F21325C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F213260u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F213260:
    ctx->pc = 0x7F213260u;
    ctx->downcount -= 1;
    // 7F213260: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213264:
    ctx->pc = 0x7F213264u;
    ctx->downcount -= 2;
    // 7F213264: li      r3, 106
    ctx->gpr[3] = (u32)(s32)(106);

label_7F213268:
    ctx->pc = 0x7F213268u;
    // 7F213268: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21326Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21326C:
    ctx->pc = 0x7F21326Cu;
    ctx->downcount -= 2;
    // 7F21326C: cmplwi  r3, 0x0000
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

label_7F213270:
    ctx->pc = 0x7F213270u;
    // 7F213270: bc    12, 2, 0x7F21327C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21327C;
        }
    }

label_7F213274:
    ctx->pc = 0x7F213274u;
    ctx->downcount -= 1;
    // 7F213274: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F213278u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F213278:
    ctx->pc = 0x7F213278u;
    ctx->downcount -= 1;
    // 7F213278: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21327C:
    ctx->pc = 0x7F21327Cu;
    ctx->downcount -= 2;
    // 7F21327C: li      r3, 107
    ctx->gpr[3] = (u32)(s32)(107);

label_7F213280:
    ctx->pc = 0x7F213280u;
    // 7F213280: bl      0x7F3C664C
    {
            ctx->lr = 0x7F213284u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F213284:
    ctx->pc = 0x7F213284u;
    ctx->downcount -= 2;
    // 7F213284: cmplwi  r3, 0x0000
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

label_7F213288:
    ctx->pc = 0x7F213288u;
    // 7F213288: bc    12, 2, 0x7F213294
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213294;
        }
    }

label_7F21328C:
    ctx->pc = 0x7F21328Cu;
    ctx->downcount -= 1;
    // 7F21328C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F213290u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F213290:
    ctx->pc = 0x7F213290u;
    ctx->downcount -= 1;
    // 7F213290: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213294:
    ctx->pc = 0x7F213294u;
    ctx->downcount -= 2;
    // 7F213294: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F213298:
    ctx->pc = 0x7F213298u;
    // 7F213298: bl      0x7F3C664C
    {
            ctx->lr = 0x7F21329Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F21329C:
    ctx->pc = 0x7F21329Cu;
    ctx->downcount -= 2;
    // 7F21329C: cmplwi  r3, 0x0000
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

label_7F2132A0:
    ctx->pc = 0x7F2132A0u;
    // 7F2132A0: bc    12, 2, 0x7F2132AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2132AC;
        }
    }

label_7F2132A4:
    ctx->pc = 0x7F2132A4u;
    ctx->downcount -= 1;
    // 7F2132A4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2132A8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2132A8:
    ctx->pc = 0x7F2132A8u;
    ctx->downcount -= 1;
    // 7F2132A8: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2132AC:
    ctx->pc = 0x7F2132ACu;
    ctx->downcount -= 2;
    // 7F2132AC: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_7F2132B0:
    ctx->pc = 0x7F2132B0u;
    // 7F2132B0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2132B4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2132B4:
    ctx->pc = 0x7F2132B4u;
    ctx->downcount -= 2;
    // 7F2132B4: cmplwi  r3, 0x0000
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

label_7F2132B8:
    ctx->pc = 0x7F2132B8u;
    // 7F2132B8: bc    12, 2, 0x7F2132C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2132C4;
        }
    }

label_7F2132BC:
    ctx->pc = 0x7F2132BCu;
    ctx->downcount -= 1;
    // 7F2132BC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2132C0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2132C0:
    ctx->pc = 0x7F2132C0u;
    ctx->downcount -= 1;
    // 7F2132C0: or   r19, r3, r3
    {
        ctx->gpr[19] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2132C4:
    ctx->pc = 0x7F2132C4u;
    ctx->downcount -= 2;
    // 7F2132C4: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_7F2132C8:
    ctx->pc = 0x7F2132C8u;
    // 7F2132C8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2132CCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2132CC:
    ctx->pc = 0x7F2132CCu;
    ctx->downcount -= 2;
    // 7F2132CC: cmplwi  r3, 0x0000
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

label_7F2132D0:
    ctx->pc = 0x7F2132D0u;
    // 7F2132D0: bc    12, 2, 0x7F2132D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2132D8;
        }
    }

label_7F2132D4:
    ctx->pc = 0x7F2132D4u;
    ctx->downcount -= 1;
    // 7F2132D4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2132D8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2132D8:
    ctx->pc = 0x7F2132D8u;
    ctx->downcount -= 2;
    // 7F2132D8: li      r3, 114
    ctx->gpr[3] = (u32)(s32)(114);

label_7F2132DC:
    ctx->pc = 0x7F2132DCu;
    // 7F2132DC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2132E0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2132E0:
    ctx->pc = 0x7F2132E0u;
    ctx->downcount -= 2;
    // 7F2132E0: cmplwi  r3, 0x0000
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

label_7F2132E4:
    ctx->pc = 0x7F2132E4u;
    // 7F2132E4: bc    12, 2, 0x7F2132F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2132F0;
        }
    }

label_7F2132E8:
    ctx->pc = 0x7F2132E8u;
    ctx->downcount -= 1;
    // 7F2132E8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2132ECu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2132EC:
    ctx->pc = 0x7F2132ECu;
    ctx->downcount -= 1;
    // 7F2132EC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2132F0:
    ctx->pc = 0x7F2132F0u;
    ctx->downcount -= 3;
    // 7F2132F0: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_7F2132F4:
    ctx->pc = 0x7F2132F4u;
    // 7F2132F4: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_7F2132F8:
    ctx->pc = 0x7F2132F8u;
    // 7F2132F8: b       0x7F2134F0
    {
            goto label_7F2134F0;
    }

label_7F2132FC:
    ctx->downcount -= 2;
    // 7F2132FC: cmpwi   r21, 1
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213300:
    // 7F213300: bc    12, 2, 0x7F213400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213400;
        }
    }

label_7F213304:
    ctx->downcount -= 1;
    // 7F213304: bc    4, 0, 0x7F213314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213314;
        }
    }

label_7F213308:
    ctx->downcount -= 2;
    // 7F213308: cmpwi   r21, 0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F21330C:
    // 7F21330C: bc    4, 0, 0x7F213320
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213320;
        }
    }

label_7F213310:
    ctx->downcount -= 1;
    // 7F213310: b       0x7F21345C
    {
            goto label_7F21345C;
    }

label_7F213314:
    ctx->downcount -= 2;
    // 7F213314: cmpwi   r21, 3
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213318:
    // 7F213318: bc    4, 0, 0x7F21345C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21345C;
        }
    }

label_7F21331C:
    ctx->downcount -= 1;
    // 7F21331C: b       0x7F213428
    {
            goto label_7F213428;
    }

label_7F213320:
    ctx->downcount -= 2;
    // 7F213320: cmpwi   r29, 1
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

label_7F213324:
    // 7F213324: bc    4, 2, 0x7F213348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213348;
        }
    }

label_7F213328:
    ctx->downcount -= 7;
    // 7F213328: lis     r3, 100
    ctx->gpr[3] = ((u32)(s32)(100) << 16);

label_7F21332C:
    // 7F21332C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F213330:
    // 7F213330: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F213334:
    // 7F213334: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F213338:
    // 7F213338: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21333C:
    // 7F21333C: addi    r3, r3, 24930
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24930);

label_7F213340:
    // 7F213340: bl      0x7F212BE0
    {
            ctx->lr = 0x7F213344u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F212BE0u;
                return;
            }
            goto label_7F212BE0;
    }

label_7F213344:
    ctx->downcount -= 1;
    // 7F213344: b       0x7F2134E8
    {
            goto label_7F2134E8;
    }

label_7F213348:
    ctx->downcount -= 8;
    // 7F213348: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21334C:
    // 7F21334C: addi    r18, r1, 72
    ctx->gpr[18] = ctx->gpr[1] + (u32)(s32)(72);

label_7F213350:
    ctx->pc = 0x7F213350u;
    // 7F213350: lwzx    r0, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213354:
    // 7F213354: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F213358:
    // 7F213358: add   r18, r18, r0
    {
        u32 a = ctx->gpr[18];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[18] = res;
    }

label_7F21335C:
    ctx->pc = 0x7F21335Cu;
    // 7F21335C: lha     r0, 2(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213360:
    // 7F213360: cmpwi   r0, -10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213364:
    // 7F213364: bc    4, 1, 0x7F213380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213380;
        }
    }

label_7F213368:
    ctx->pc = 0x7F213368u;
    ctx->downcount -= 3;
    // 7F213368: lha     r0, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21336C:
    // 7F21336C: cmpwi   r0, -18010
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-18010);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213370:
    // 7F213370: bc    4, 1, 0x7F213380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213380;
        }
    }

label_7F213374:
    ctx->downcount -= 3;
    // 7F213374: li      r0, 500
    ctx->gpr[0] = (u32)(s32)(500);

label_7F213378:
    ctx->pc = 0x7F213378u;
    // 7F213378: sth     r0, 6(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21337C:
    // 7F21337C: b       0x7F2133D4
    {
            goto label_7F2133D4;
    }

label_7F213380:
    ctx->pc = 0x7F213380u;
    ctx->downcount -= 3;
    // 7F213380: lha     r3, 4(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(4);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213384:
    // 7F213384: cmpwi   r3, 5990
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(5990);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213388:
    // 7F213388: bc    4, 1, 0x7F2133AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2133AC;
        }
    }

label_7F21338C:
    ctx->downcount -= 2;
    // 7F21338C: cmpwi   r3, 7000
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(7000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213390:
    // 7F213390: bc    4, 1, 0x7F2133A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2133A0;
        }
    }

label_7F213394:
    ctx->downcount -= 3;
    // 7F213394: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F213398:
    ctx->pc = 0x7F213398u;
    // 7F213398: sth     r0, 6(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F21339C:
    // 7F21339C: b       0x7F2133D4
    {
            goto label_7F2133D4;
    }

label_7F2133A0:
    ctx->downcount -= 3;
    // 7F2133A0: li      r0, 500
    ctx->gpr[0] = (u32)(s32)(500);

label_7F2133A4:
    ctx->pc = 0x7F2133A4u;
    // 7F2133A4: sth     r0, 6(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2133A8:
    // 7F2133A8: b       0x7F2133D4
    {
            goto label_7F2133D4;
    }

label_7F2133AC:
    ctx->pc = 0x7F2133ACu;
    ctx->downcount -= 3;
    // 7F2133AC: lha     r0, 0(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2133B0:
    // 7F2133B0: cmpwi   r0, 11990
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(11990);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2133B4:
    // 7F2133B4: bc    4, 1, 0x7F2133CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2133CC;
        }
    }

label_7F2133B8:
    ctx->downcount -= 2;
    // 7F2133B8: cmpwi   r3, -4010
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(-4010);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2133BC:
    // 7F2133BC: bc    4, 1, 0x7F2133CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2133CC;
        }
    }

label_7F2133C0:
    ctx->downcount -= 3;
    // 7F2133C0: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F2133C4:
    ctx->pc = 0x7F2133C4u;
    // 7F2133C4: sth     r0, 6(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2133C8:
    // 7F2133C8: b       0x7F2133D4
    {
            goto label_7F2133D4;
    }

label_7F2133CC:
    ctx->downcount -= 2;
    // 7F2133CC: li      r0, 1000
    ctx->gpr[0] = (u32)(s32)(1000);

label_7F2133D0:
    ctx->pc = 0x7F2133D0u;
    // 7F2133D0: sth     r0, 6(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2133D4:
    ctx->downcount -= 7;
    // 7F2133D4: lis     r3, 100
    ctx->gpr[3] = ((u32)(s32)(100) << 16);

label_7F2133D8:
    // 7F2133D8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F2133DC:
    // 7F2133DC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2133E0:
    // 7F2133E0: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2133E4:
    // 7F2133E4: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2133E8:
    // 7F2133E8: addi    r3, r3, 24930
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24930);

label_7F2133EC:
    // 7F2133EC: bl      0x7F212BE0
    {
            ctx->lr = 0x7F2133F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F212BE0u;
                return;
            }
            goto label_7F212BE0;
    }

label_7F2133F0:
    ctx->downcount -= 3;
    // 7F2133F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2133F4:
    // 7F2133F4: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_7F2133F8:
    // 7F2133F8: bl      0x7F213098
    {
            ctx->lr = 0x7F2133FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213098u;
                return;
            }
            goto label_7F213098;
    }

label_7F2133FC:
    ctx->downcount -= 1;
    // 7F2133FC: b       0x7F2134E8
    {
            goto label_7F2134E8;
    }

label_7F213400:
    ctx->downcount -= 9;
    // 7F213400: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213404:
    // 7F213404: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F213408:
    ctx->pc = 0x7F213408u;
    // 7F213408: lwzx    r0, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21340C:
    // 7F21340C: li      r5, 500
    ctx->gpr[5] = (u32)(s32)(500);

label_7F213410:
    // 7F213410: or   r3, r24, r24
    {
        ctx->gpr[3] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F213414:
    // 7F213414: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F213418:
    // 7F213418: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F21341C:
    ctx->pc = 0x7F21341Cu;
    // 7F21341C: sth     r5, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F213420:
    // 7F213420: bl      0x7F213098
    {
            ctx->lr = 0x7F213424u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213098u;
                return;
            }
            goto label_7F213098;
    }

label_7F213424:
    ctx->downcount -= 1;
    // 7F213424: b       0x7F2134E8
    {
            goto label_7F2134E8;
    }

label_7F213428:
    ctx->downcount -= 2;
    // 7F213428: cmpwi   r22, 0
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

label_7F21342C:
    // 7F21342C: bc    4, 2, 0x7F2134E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2134E8;
        }
    }

label_7F213430:
    ctx->downcount -= 10;
    // 7F213430: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213434:
    // 7F213434: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F213438:
    ctx->pc = 0x7F213438u;
    // 7F213438: lwzx    r0, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21343C:
    // 7F21343C: li      r5, 500
    ctx->gpr[5] = (u32)(s32)(500);

label_7F213440:
    // 7F213440: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_7F213444:
    // 7F213444: li      r22, 1
    ctx->gpr[22] = (u32)(s32)(1);

label_7F213448:
    // 7F213448: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F21344C:
    // 7F21344C: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F213450:
    ctx->pc = 0x7F213450u;
    // 7F213450: sth     r5, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F213454:
    // 7F213454: bl      0x7F213098
    {
            ctx->lr = 0x7F213458u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213098u;
                return;
            }
            goto label_7F213098;
    }

label_7F213458:
    ctx->downcount -= 1;
    // 7F213458: b       0x7F2134E8
    {
            goto label_7F2134E8;
    }

label_7F21345C:
    ctx->downcount -= 2;
    // 7F21345C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F213460:
    // 7F213460: bl      0x7F02A538
    {
            ctx->lr = 0x7F213464u;
            ctx->pc = 0x7F02A538u;
            return;
    }

label_7F213464:
    ctx->downcount -= 2;
    // 7F213464: cmpwi   r3, 0
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

label_7F213468:
    // 7F213468: bc    4, 2, 0x7F213494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213494;
        }
    }

label_7F21346C:
    ctx->downcount -= 9;
    // 7F21346C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213470:
    // 7F213470: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F213474:
    ctx->pc = 0x7F213474u;
    // 7F213474: lwzx    r0, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213478:
    // 7F213478: li      r5, 500
    ctx->gpr[5] = (u32)(s32)(500);

label_7F21347C:
    // 7F21347C: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_7F213480:
    // 7F213480: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F213484:
    // 7F213484: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F213488:
    ctx->pc = 0x7F213488u;
    // 7F213488: sth     r5, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F21348C:
    // 7F21348C: bl      0x7F213098
    {
            ctx->lr = 0x7F213490u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213098u;
                return;
            }
            goto label_7F213098;
    }

label_7F213490:
    ctx->downcount -= 1;
    // 7F213490: b       0x7F2134E8
    {
            goto label_7F2134E8;
    }

label_7F213494:
    ctx->downcount -= 2;
    // 7F213494: cmpwi   r3, 1
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

label_7F213498:
    // 7F213498: bc    4, 2, 0x7F2134C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2134C4;
        }
    }

label_7F21349C:
    ctx->downcount -= 9;
    // 7F21349C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2134A0:
    // 7F2134A0: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F2134A4:
    ctx->pc = 0x7F2134A4u;
    // 7F2134A4: lwzx    r0, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2134A8:
    // 7F2134A8: li      r5, 500
    ctx->gpr[5] = (u32)(s32)(500);

label_7F2134AC:
    // 7F2134AC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F2134B0:
    // 7F2134B0: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F2134B4:
    // 7F2134B4: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2134B8:
    ctx->pc = 0x7F2134B8u;
    // 7F2134B8: sth     r5, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2134BC:
    // 7F2134BC: bl      0x7F213098
    {
            ctx->lr = 0x7F2134C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213098u;
                return;
            }
            goto label_7F213098;
    }

label_7F2134C0:
    ctx->downcount -= 1;
    // 7F2134C0: b       0x7F2134E8
    {
            goto label_7F2134E8;
    }

label_7F2134C4:
    ctx->downcount -= 9;
    // 7F2134C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2134C8:
    // 7F2134C8: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_7F2134CC:
    ctx->pc = 0x7F2134CCu;
    // 7F2134CC: lwzx    r0, r3, r20
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[20];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2134D0:
    // 7F2134D0: li      r5, 500
    ctx->gpr[5] = (u32)(s32)(500);

label_7F2134D4:
    // 7F2134D4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2134D8:
    // 7F2134D8: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_7F2134DC:
    // 7F2134DC: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2134E0:
    ctx->pc = 0x7F2134E0u;
    // 7F2134E0: sth     r5, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2134E4:
    // 7F2134E4: bl      0x7F213098
    {
            ctx->lr = 0x7F2134E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213098u;
                return;
            }
            goto label_7F213098;
    }

label_7F2134E8:
    ctx->downcount -= 2;
    // 7F2134E8: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_7F2134EC:
    // 7F2134EC: addi    r20, r20, 4
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(4);

label_7F2134F0:
    ctx->downcount -= 2;
    // 7F2134F0: cmpw    r21, r30
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2134F4:
    // 7F2134F4: bc    12, 0, 0x7F2132FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2132FCu;
                return;
            }
            goto label_7F2132FC;
        }
    }

label_7F2134F8:
    ctx->pc = 0x7F2134F8u;
    ctx->downcount -= 16;
    // 7F2134F8: lmw     r18, 200(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        for (u32 r = 18; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2134FC:
    ctx->pc = 0x7F2134FCu;
    // 7F2134FC: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213500:
    ctx->pc = 0x7F213500u;
    // 7F213500: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213504:
    ctx->pc = 0x7F213504u;
    // 7F213504: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_7F213508:
    ctx->pc = 0x7F213508u;
    // 7F213508: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21350C:
    ctx->pc = 0x7F21350Cu;
    ctx->downcount -= 20;
    // 7F21350C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213510:
    ctx->pc = 0x7F213510u;
    // 7F213510: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213514:
    ctx->pc = 0x7F213514u;
    // 7F213514: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F213518:
    ctx->pc = 0x7F213518u;
    // 7F213518: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_7F21351C:
    ctx->pc = 0x7F21351Cu;
    // 7F21351C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213520:
    ctx->pc = 0x7F213520u;
    // 7F213520: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F213524:
    ctx->pc = 0x7F213524u;
    // 7F213524: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F213528:
    ctx->pc = 0x7F213528u;
    // 7F213528: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F21352C:
    ctx->pc = 0x7F21352Cu;
    // 7F21352C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F213530:
    ctx->pc = 0x7F213530u;
    // 7F213530: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F213534u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F213534:
    ctx->pc = 0x7F213534u;
    ctx->downcount -= 2;
    // 7F213534: or.   r31, r3, r3
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

label_7F213538:
    ctx->pc = 0x7F213538u;
    // 7F213538: bc    12, 2, 0x7F213560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213560;
        }
    }

label_7F21353C:
    ctx->pc = 0x7F21353Cu;
    ctx->downcount -= 5;
    // 7F21353C: lis     r4, 32545
    ctx->gpr[4] = ((u32)(s32)(32545) << 16);

label_7F213540:
    ctx->pc = 0x7F213540u;
    // 7F213540: lis     r5, 32545
    ctx->gpr[5] = ((u32)(s32)(32545) << 16);

label_7F213544:
    ctx->pc = 0x7F213544u;
    // 7F213544: addi    r4, r4, 12432
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12432);

label_7F213548:
    ctx->pc = 0x7F213548u;
    // 7F213548: addi    r5, r5, 12436
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12436);

label_7F21354C:
    ctx->pc = 0x7F21354Cu;
    // 7F21354C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F213550u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F213550:
    ctx->pc = 0x7F213550u;
    ctx->downcount -= 2;
    // 7F213550: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F213554:
    ctx->pc = 0x7F213554u;
    // 7F213554: bl      0x7F2130EC
    {
            ctx->lr = 0x7F213558u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2130ECu;
                return;
            }
            goto label_7F2130EC;
    }

label_7F213558:
    ctx->pc = 0x7F213558u;
    ctx->downcount -= 2;
    // 7F213558: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21355C:
    ctx->pc = 0x7F21355Cu;
    // 7F21355C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F213560u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F213560:
    ctx->pc = 0x7F213560u;
    ctx->downcount -= 17;
    // 7F213560: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213564:
    ctx->pc = 0x7F213564u;
    // 7F213564: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F213568:
    ctx->pc = 0x7F213568u;
    // 7F213568: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21356C:
    ctx->pc = 0x7F21356Cu;
    // 7F21356C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213570:
    ctx->pc = 0x7F213570u;
    // 7F213570: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213574:
    ctx->pc = 0x7F213574u;
    // 7F213574: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213578:
    ctx->pc = 0x7F213578u;
    ctx->downcount -= 5;
    // 7F213578: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F21357C:
    ctx->pc = 0x7F21357Cu;
    // 7F21357C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213580:
    ctx->pc = 0x7F213580u;
    // 7F213580: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F213584:
    ctx->pc = 0x7F213584u;
    // 7F213584: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213588:
    ctx->pc = 0x7F213588u;
    // 7F213588: bl      0x7F042AAC
    {
            ctx->lr = 0x7F21358Cu;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F21358C:
    ctx->pc = 0x7F21358Cu;
    ctx->downcount -= 5;
    // 7F21358C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213590:
    ctx->pc = 0x7F213590u;
    // 7F213590: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213594:
    ctx->pc = 0x7F213594u;
    // 7F213594: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213598:
    ctx->pc = 0x7F213598u;
    // 7F213598: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21359C:
    ctx->pc = 0x7F21359Cu;
    ctx->downcount -= 9;
    // 7F21359C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2135A0:
    ctx->pc = 0x7F2135A0u;
    // 7F2135A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2135A4:
    ctx->pc = 0x7F2135A4u;
    // 7F2135A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2135A8:
    ctx->pc = 0x7F2135A8u;
    // 7F2135A8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2135AC:
    ctx->pc = 0x7F2135ACu;
    // 7F2135AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2135B0:
    ctx->pc = 0x7F2135B0u;
    // 7F2135B0: lwz     r4, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2135B4:
    ctx->pc = 0x7F2135B4u;
    // 7F2135B4: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2135B8:
    ctx->pc = 0x7F2135B8u;
    // 7F2135B8: cmpwi   r0, -1
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

label_7F2135BC:
    ctx->pc = 0x7F2135BCu;
    // 7F2135BC: bc    4, 2, 0x7F2135C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2135C4;
        }
    }

label_7F2135C0:
    ctx->pc = 0x7F2135C0u;
    ctx->downcount -= 1;
    // 7F2135C0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2135C4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2135C4:
    ctx->pc = 0x7F2135C4u;
    ctx->downcount -= 4;
    // 7F2135C4: lwz     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2135C8:
    ctx->pc = 0x7F2135C8u;
    // 7F2135C8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2135CC:
    ctx->pc = 0x7F2135CCu;
    // 7F2135CC: addi    r3, r3, 1092
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1092);

label_7F2135D0:
    ctx->pc = 0x7F2135D0u;
    // 7F2135D0: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2135D4u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2135D4:
    ctx->pc = 0x7F2135D4u;
    ctx->downcount -= 2;
    // 7F2135D4: lwz     r3, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2135D8:
    ctx->pc = 0x7F2135D8u;
    // 7F2135D8: bl      0x7F3B3134
    {
            ctx->lr = 0x7F2135DCu;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F2135DC:
    ctx->pc = 0x7F2135DCu;
    ctx->downcount -= 3;
    // 7F2135DC: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2135E0:
    ctx->pc = 0x7F2135E0u;
    // 7F2135E0: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2135E4:
    ctx->pc = 0x7F2135E4u;
    // 7F2135E4: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2135E8u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2135E8:
    ctx->pc = 0x7F2135E8u;
    ctx->downcount -= 3;
    // 7F2135E8: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2135EC:
    ctx->pc = 0x7F2135ECu;
    // 7F2135EC: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F2135F0:
    ctx->pc = 0x7F2135F0u;
    // 7F2135F0: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2135F4u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2135F4:
    ctx->pc = 0x7F2135F4u;
    ctx->downcount -= 8;
    // 7F2135F4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2135F8:
    ctx->pc = 0x7F2135F8u;
    // 7F2135F8: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2135FC:
    ctx->pc = 0x7F2135FCu;
    // 7F2135FC: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F213600:
    ctx->pc = 0x7F213600u;
    // 7F213600: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213604:
    ctx->pc = 0x7F213604u;
    // 7F213604: lwz     r4, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213608:
    ctx->pc = 0x7F213608u;
    // 7F213608: lwz     r3, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21360C:
    ctx->pc = 0x7F21360Cu;
    // 7F21360C: cmplwi  r3, 0x0000
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

label_7F213610:
    ctx->pc = 0x7F213610u;
    // 7F213610: bc    12, 2, 0x7F213630
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213630;
        }
    }

label_7F213614:
    ctx->pc = 0x7F213614u;
    ctx->downcount -= 7;
    // 7F213614: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213618:
    ctx->pc = 0x7F213618u;
    // 7F213618: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21361C:
    ctx->pc = 0x7F21361Cu;
    // 7F21361C: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213620:
    ctx->pc = 0x7F213620u;
    // 7F213620: rlwinm r0, r0, 4, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0x00003000u;
    }

label_7F213624:
    ctx->pc = 0x7F213624u;
    // 7F213624: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F213628:
    ctx->pc = 0x7F213628u;
    // 7F213628: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21362C:
    ctx->pc = 0x7F21362Cu;
    // 7F21362C: b       0x7F21364C
    {
            goto label_7F21364C;
    }

label_7F213630:
    ctx->pc = 0x7F213630u;
    ctx->downcount -= 7;
    // 7F213630: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213634:
    ctx->pc = 0x7F213634u;
    // 7F213634: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213638:
    ctx->pc = 0x7F213638u;
    // 7F213638: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21363C:
    ctx->pc = 0x7F21363Cu;
    // 7F21363C: lwz     r3, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213640:
    ctx->pc = 0x7F213640u;
    // 7F213640: rlwinm r0, r0, 0, 18, 19
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00003000u;
    }

label_7F213644:
    ctx->pc = 0x7F213644u;
    // 7F213644: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_7F213648:
    ctx->pc = 0x7F213648u;
    // 7F213648: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21364C:
    ctx->pc = 0x7F21364Cu;
    ctx->downcount -= 1;
    // 7F21364C: bl      0x7F2BB4C4
    {
            ctx->lr = 0x7F213650u;
            ctx->pc = 0x7F2BB4C4u;
            return;
    }

label_7F213650:
    ctx->pc = 0x7F213650u;
    ctx->downcount -= 2;
    // 7F213650: cmpwi   r3, 13
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

label_7F213654:
    ctx->pc = 0x7F213654u;
    // 7F213654: bc    12, 2, 0x7F213668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213668;
        }
    }

label_7F213658:
    ctx->pc = 0x7F213658u;
    ctx->downcount -= 4;
    // 7F213658: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F21365C:
    ctx->pc = 0x7F21365Cu;
    // 7F21365C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213660:
    ctx->pc = 0x7F213660u;
    // 7F213660: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F213664:
    ctx->pc = 0x7F213664u;
    // 7F213664: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213668:
    ctx->pc = 0x7F213668u;
    ctx->downcount -= 6;
    // 7F213668: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21366C:
    ctx->pc = 0x7F21366Cu;
    // 7F21366C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F213670:
    ctx->pc = 0x7F213670u;
    // 7F213670: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213674:
    ctx->pc = 0x7F213674u;
    // 7F213674: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213678:
    ctx->pc = 0x7F213678u;
    // 7F213678: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21367C:
    ctx->pc = 0x7F21367Cu;
    ctx->downcount -= 22;
    // 7F21367C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213680:
    ctx->pc = 0x7F213680u;
    // 7F213680: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213684:
    ctx->pc = 0x7F213684u;
    // 7F213684: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213688:
    ctx->pc = 0x7F213688u;
    // 7F213688: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F21368C:
    ctx->pc = 0x7F21368Cu;
    // 7F21368C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213690:
    ctx->pc = 0x7F213690u;
    // 7F213690: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F213694:
    ctx->pc = 0x7F213694u;
    // 7F213694: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F213698:
    ctx->pc = 0x7F213698u;
    // 7F213698: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F21369C:
    ctx->pc = 0x7F21369Cu;
    // 7F21369C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2136A0:
    ctx->pc = 0x7F2136A0u;
    // 7F2136A0: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F2136A4:
    ctx->pc = 0x7F2136A4u;
    // 7F2136A4: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_7F2136A8:
    ctx->pc = 0x7F2136A8u;
    // 7F2136A8: bl      0x7F04272C
    {
            ctx->lr = 0x7F2136ACu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2136AC:
    ctx->pc = 0x7F2136ACu;
    ctx->downcount -= 20;
    // 7F2136AC: stw     r29, 96(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2136B0:
    ctx->pc = 0x7F2136B0u;
    // 7F2136B0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2136B4:
    ctx->pc = 0x7F2136B4u;
    // 7F2136B4: stw     r30, 92(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2136B8:
    ctx->pc = 0x7F2136B8u;
    // 7F2136B8: stw     r31, 100(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2136BC:
    ctx->pc = 0x7F2136BCu;
    // 7F2136BC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2136C0:
    ctx->pc = 0x7F2136C0u;
    // 7F2136C0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2136C4:
    ctx->pc = 0x7F2136C4u;
    // 7F2136C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2136C8:
    ctx->pc = 0x7F2136C8u;
    // 7F2136C8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2136CC:
    ctx->pc = 0x7F2136CCu;
    // 7F2136CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2136D0:
    ctx->pc = 0x7F2136D0u;
    ctx->downcount -= 23;
    // 7F2136D0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2136D4:
    ctx->pc = 0x7F2136D4u;
    // 7F2136D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2136D8:
    ctx->pc = 0x7F2136D8u;
    // 7F2136D8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2136DC:
    ctx->pc = 0x7F2136DCu;
    // 7F2136DC: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2136E0:
    ctx->pc = 0x7F2136E0u;
    // 7F2136E0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2136E4:
    ctx->pc = 0x7F2136E4u;
    // 7F2136E4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2136E8:
    ctx->pc = 0x7F2136E8u;
    // 7F2136E8: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2136EC:
    ctx->pc = 0x7F2136ECu;
    // 7F2136EC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2136F0:
    ctx->pc = 0x7F2136F0u;
    // 7F2136F0: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F2136F4:
    ctx->pc = 0x7F2136F4u;
    // 7F2136F4: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F2136F8:
    ctx->pc = 0x7F2136F8u;
    // 7F2136F8: li      r5, 108
    ctx->gpr[5] = (u32)(s32)(108);

label_7F2136FC:
    ctx->pc = 0x7F2136FCu;
    // 7F2136FC: li      r6, 64
    ctx->gpr[6] = (u32)(s32)(64);

label_7F213700:
    ctx->pc = 0x7F213700u;
    // 7F213700: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F213704u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F213704:
    ctx->pc = 0x7F213704u;
    ctx->downcount -= 2;
    // 7F213704: or.   r31, r3, r3
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

label_7F213708:
    ctx->pc = 0x7F213708u;
    // 7F213708: bc    12, 2, 0x7F213778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213778;
        }
    }

label_7F21370C:
    ctx->pc = 0x7F21370Cu;
    ctx->downcount -= 5;
    // 7F21370C: lis     r4, 32545
    ctx->gpr[4] = ((u32)(s32)(32545) << 16);

label_7F213710:
    ctx->pc = 0x7F213710u;
    // 7F213710: lis     r5, 32545
    ctx->gpr[5] = ((u32)(s32)(32545) << 16);

label_7F213714:
    ctx->pc = 0x7F213714u;
    // 7F213714: addi    r4, r4, 13724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13724);

label_7F213718:
    ctx->pc = 0x7F213718u;
    // 7F213718: addi    r5, r5, 13688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13688);

label_7F21371C:
    ctx->pc = 0x7F21371Cu;
    // 7F21371C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F213720u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F213720:
    ctx->pc = 0x7F213720u;
    ctx->downcount -= 16;
    // 7F213720: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213724:
    ctx->pc = 0x7F213724u;
    // 7F213724: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F213728:
    ctx->pc = 0x7F213728u;
    // 7F213728: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F21372C:
    ctx->pc = 0x7F21372Cu;
    // 7F21372C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213730:
    ctx->pc = 0x7F213730u;
    // 7F213730: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F213734:
    ctx->pc = 0x7F213734u;
    // 7F213734: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F213738:
    ctx->pc = 0x7F213738u;
    // 7F213738: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F21373C:
    ctx->pc = 0x7F21373Cu;
    // 7F21373C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F213740:
    ctx->pc = 0x7F213740u;
    // 7F213740: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F213744:
    ctx->pc = 0x7F213744u;
    // 7F213744: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F213748:
    ctx->pc = 0x7F213748u;
    // 7F213748: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F21374C:
    ctx->pc = 0x7F21374Cu;
    // 7F21374C: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F213750:
    ctx->pc = 0x7F213750u;
    // 7F213750: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F213754:
    ctx->pc = 0x7F213754u;
    // 7F213754: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F213758:
    ctx->pc = 0x7F213758u;
    // 7F213758: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21375C:
    ctx->pc = 0x7F21375Cu;
    // 7F21375C: bl      0x7F21367C
    {
            ctx->lr = 0x7F213760u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F21367Cu;
                return;
            }
            goto label_7F21367C;
    }

label_7F213760:
    ctx->pc = 0x7F213760u;
    ctx->downcount -= 2;
    // 7F213760: cmpwi   r3, 0
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

label_7F213764:
    ctx->pc = 0x7F213764u;
    // 7F213764: bc    4, 2, 0x7F213778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213778;
        }
    }

label_7F213768:
    ctx->pc = 0x7F213768u;
    ctx->downcount -= 2;
    // 7F213768: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21376C:
    ctx->pc = 0x7F21376Cu;
    // 7F21376C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F213770u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F213770:
    ctx->pc = 0x7F213770u;
    ctx->downcount -= 2;
    // 7F213770: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F213774:
    ctx->pc = 0x7F213774u;
    // 7F213774: b       0x7F21377C
    {
            goto label_7F21377C;
    }

label_7F213778:
    ctx->pc = 0x7F213778u;
    ctx->downcount -= 1;
    // 7F213778: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F21377C:
    ctx->pc = 0x7F21377Cu;
    ctx->downcount -= 16;
    // 7F21377C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F213780:
    ctx->pc = 0x7F213780u;
    // 7F213780: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213784:
    ctx->pc = 0x7F213784u;
    // 7F213784: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213788:
    ctx->pc = 0x7F213788u;
    // 7F213788: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F21378C:
    ctx->pc = 0x7F21378Cu;
    // 7F21378C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213790:
    ctx->pc = 0x7F213790u;
    ctx->downcount -= 12;
    // 7F213790: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213794:
    ctx->pc = 0x7F213794u;
    // 7F213794: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213798:
    ctx->pc = 0x7F213798u;
    // 7F213798: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F21379C:
    ctx->pc = 0x7F21379Cu;
    // 7F21379C: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F21379Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2137A0:
    ctx->pc = 0x7F2137A0u;
    // 7F2137A0: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2137A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2137A0u);
        if (ctx->exception) return;
    }

label_7F2137A4:
    ctx->pc = 0x7F2137A4u;
    // 7F2137A4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2137A8:
    ctx->pc = 0x7F2137A8u;
    // 7F2137A8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2137AC:
    ctx->pc = 0x7F2137ACu;
    // 7F2137AC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2137B0:
    ctx->pc = 0x7F2137B0u;
    // 7F2137B0: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2137B4:
    ctx->pc = 0x7F2137B4u;
    // 7F2137B4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2137B8:
    ctx->pc = 0x7F2137B8u;
    // 7F2137B8: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2137BC:
    ctx->pc = 0x7F2137BCu;
    // 7F2137BC: bl      0x800261D8
    {
            ctx->lr = 0x7F2137C0u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F2137C0:
    ctx->pc = 0x7F2137C0u;
    ctx->downcount -= 2;
    // 7F2137C0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2137C4:
    ctx->pc = 0x7F2137C4u;
    // 7F2137C4: bl      0x7F3CC708
    {
            ctx->lr = 0x7F2137C8u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F2137C8:
    ctx->pc = 0x7F2137C8u;
    ctx->downcount -= 9;
    // 7F2137C8: sth     r3, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2137CC:
    ctx->pc = 0x7F2137CCu;
    // 7F2137CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2137D0:
    ctx->pc = 0x7F2137D0u;
    // 7F2137D0: addi    r4, r3, 16112
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(16112);

label_7F2137D4:
    ctx->pc = 0x7F2137D4u;
    // 7F2137D4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2137D8:
    ctx->pc = 0x7F2137D8u;
    // 7F2137D8: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2137D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2137DC:
    ctx->pc = 0x7F2137DCu;
    // 7F2137DC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2137DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2137E0:
    ctx->pc = 0x7F2137E0u;
    // 7F2137E0: fneg    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2137E0u)) return;
    ctx->fpr[31] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[1]) ^ 0x8000000000000000ull);

label_7F2137E4:
    ctx->pc = 0x7F2137E4u;
    // 7F2137E4: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2137E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2137E8:
    ctx->pc = 0x7F2137E8u;
    // 7F2137E8: bl      0x7F3CC594
    {
            ctx->lr = 0x7F2137ECu;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F2137EC:
    ctx->pc = 0x7F2137ECu;
    ctx->downcount -= 4;
    // 7F2137EC: stfs     f31, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2137ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_7F2137F0:
    ctx->pc = 0x7F2137F0u;
    // 7F2137F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2137F4:
    ctx->pc = 0x7F2137F4u;
    // 7F2137F4: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2137F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2137F8:
    ctx->pc = 0x7F2137F8u;
    // 7F2137F8: bl      0x7F3CC708
    {
            ctx->lr = 0x7F2137FCu;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F2137FC:
    ctx->pc = 0x7F2137FCu;
    ctx->downcount -= 11;
    // 7F2137FC: sth     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F213800:
    ctx->pc = 0x7F213800u;
    // 7F213800: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F213804:
    ctx->pc = 0x7F213804u;
    // 7F213804: sth     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213808:
    ctx->pc = 0x7F213808u;
    // 7F213808: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213808u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F213808u);
        if (ctx->exception) return;
    }

label_7F21380C:
    ctx->pc = 0x7F21380Cu;
    // 7F21380C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213810:
    ctx->pc = 0x7F213810u;
    // 7F213810: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213810u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F213814:
    ctx->pc = 0x7F213814u;
    // 7F213814: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F213818:
    ctx->pc = 0x7F213818u;
    // 7F213818: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F21381C:
    ctx->pc = 0x7F21381Cu;
    // 7F21381C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F213820:
    ctx->pc = 0x7F213820u;
    // 7F213820: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213824:
    ctx->pc = 0x7F213824u;
    ctx->downcount -= 9;
    // 7F213824: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213828:
    ctx->pc = 0x7F213828u;
    // 7F213828: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F21382C:
    ctx->pc = 0x7F21382Cu;
    // 7F21382C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213830:
    ctx->pc = 0x7F213830u;
    // 7F213830: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213834:
    ctx->pc = 0x7F213834u;
    // 7F213834: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F213838:
    ctx->pc = 0x7F213838u;
    // 7F213838: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F21383C:
    ctx->pc = 0x7F21383Cu;
    // 7F21383C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F213840:
    ctx->pc = 0x7F213840u;
    // 7F213840: lwz     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213844:
    ctx->pc = 0x7F213844u;
    // 7F213844: bl      0x800261D8
    {
            ctx->lr = 0x7F213848u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F213848:
    ctx->pc = 0x7F213848u;
    ctx->downcount -= 2;
    // 7F213848: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F21384C:
    ctx->pc = 0x7F21384Cu;
    // 7F21384C: bl      0x7F3CC594
    {
            ctx->lr = 0x7F213850u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F213850:
    ctx->pc = 0x7F213850u;
    ctx->downcount -= 3;
    // 7F213850: lfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F213850u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F213854:
    ctx->pc = 0x7F213854u;
    // 7F213854: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F213854u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F213858:
    ctx->pc = 0x7F213858u;
    // 7F213858: bc    4, 1, 0x7F213864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213864;
        }
    }

label_7F21385C:
    ctx->pc = 0x7F21385Cu;
    ctx->downcount -= 2;
    // 7F21385C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F213860:
    ctx->pc = 0x7F213860u;
    // 7F213860: b       0x7F2138C4
    {
            goto label_7F2138C4;
    }

label_7F213864:
    ctx->pc = 0x7F213864u;
    ctx->downcount -= 2;
    // 7F213864: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213868:
    ctx->pc = 0x7F213868u;
    // 7F213868: bl      0x7F3CC708
    {
            ctx->lr = 0x7F21386Cu;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F21386C:
    ctx->pc = 0x7F21386Cu;
    ctx->downcount -= 3;
    // 7F21386C: extsh r4, r3
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F213870:
    ctx->pc = 0x7F213870u;
    // 7F213870: lha     r3, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213874:
    ctx->pc = 0x7F213874u;
    // 7F213874: bl      0x7F3CC924
    {
            ctx->lr = 0x7F213878u;
            ctx->pc = 0x7F3CC924u;
            return;
    }

label_7F213878:
    ctx->pc = 0x7F213878u;
    ctx->downcount -= 3;
    // 7F213878: lha     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21387C:
    ctx->pc = 0x7F21387Cu;
    // 7F21387C: cmpw    r3, r0
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

label_7F213880:
    ctx->pc = 0x7F213880u;
    // 7F213880: bc    4, 1, 0x7F21388C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F21388C;
        }
    }

label_7F213884:
    ctx->pc = 0x7F213884u;
    ctx->downcount -= 2;
    // 7F213884: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F213888:
    ctx->pc = 0x7F213888u;
    // 7F213888: b       0x7F2138C4
    {
            goto label_7F2138C4;
    }

label_7F21388C:
    ctx->pc = 0x7F21388Cu;
    ctx->downcount -= 2;
    // 7F21388C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213890:
    ctx->pc = 0x7F213890u;
    // 7F213890: bl      0x7F3CC764
    {
            ctx->lr = 0x7F213894u;
            ctx->pc = 0x7F3CC764u;
            return;
    }

label_7F213894:
    ctx->pc = 0x7F213894u;
    ctx->downcount -= 3;
    // 7F213894: extsh r4, r3
    {
        ctx->gpr[4] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F213898:
    ctx->pc = 0x7F213898u;
    // 7F213898: lha     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F21389C:
    ctx->pc = 0x7F21389Cu;
    // 7F21389C: bl      0x7F3CC908
    {
            ctx->lr = 0x7F2138A0u;
            ctx->pc = 0x7F3CC908u;
            return;
    }

label_7F2138A0:
    ctx->pc = 0x7F2138A0u;
    ctx->downcount -= 3;
    // 7F2138A0: lha     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2138A4:
    ctx->pc = 0x7F2138A4u;
    // 7F2138A4: cmpw    r3, r0
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

label_7F2138A8:
    ctx->pc = 0x7F2138A8u;
    // 7F2138A8: bc    12, 1, 0x7F2138B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2138B8;
        }
    }

label_7F2138AC:
    ctx->pc = 0x7F2138ACu;
    ctx->downcount -= 3;
    // 7F2138AC: neg  r0, r0
    {
        u32 a = ctx->gpr[0];
        ctx->gpr[0] = (~a) + 1u;
    }

label_7F2138B0:
    ctx->pc = 0x7F2138B0u;
    // 7F2138B0: cmpw    r3, r0
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

label_7F2138B4:
    ctx->pc = 0x7F2138B4u;
    // 7F2138B4: bc    4, 0, 0x7F2138C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2138C0;
        }
    }

label_7F2138B8:
    ctx->pc = 0x7F2138B8u;
    ctx->downcount -= 2;
    // 7F2138B8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2138BC:
    ctx->pc = 0x7F2138BCu;
    // 7F2138BC: b       0x7F2138C4
    {
            goto label_7F2138C4;
    }

label_7F2138C0:
    ctx->pc = 0x7F2138C0u;
    ctx->downcount -= 1;
    // 7F2138C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2138C4:
    ctx->pc = 0x7F2138C4u;
    ctx->downcount -= 6;
    // 7F2138C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2138C8:
    ctx->pc = 0x7F2138C8u;
    // 7F2138C8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2138CC:
    ctx->pc = 0x7F2138CCu;
    // 7F2138CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2138D0:
    ctx->pc = 0x7F2138D0u;
    // 7F2138D0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2138D4:
    ctx->pc = 0x7F2138D4u;
    // 7F2138D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2138D8:
    ctx->pc = 0x7F2138D8u;
    ctx->downcount -= 17;
    // 7F2138D8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2138DC:
    ctx->pc = 0x7F2138DCu;
    // 7F2138DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2138E0:
    ctx->pc = 0x7F2138E0u;
    // 7F2138E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2138E4:
    ctx->pc = 0x7F2138E4u;
    // 7F2138E4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2138E8:
    ctx->pc = 0x7F2138E8u;
    // 7F2138E8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2138EC:
    ctx->pc = 0x7F2138ECu;
    // 7F2138EC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2138F0:
    ctx->pc = 0x7F2138F0u;
    // 7F2138F0: bl      0x7F121698
    {
            ctx->lr = 0x7F2138F4u;
            ctx->pc = 0x7F121698u;
            return;
    }

label_7F2138F4:
    ctx->pc = 0x7F2138F4u;
    ctx->downcount -= 2;
    // 7F2138F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2138F8:
    ctx->pc = 0x7F2138F8u;
    // 7F2138F8: b       0x7F21397C
    {
            goto label_7F21397C;
    }

label_7F2138FC:
    ctx->pc = 0x7F2138FCu;
    ctx->downcount -= 12;
    // 7F2138FC: lwz     r30, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F213900:
    // 7F213900: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F213904:
    ctx->pc = 0x7F213904u;
    // 7F213904: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F213908:
    // 7F213908: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21390C:
    ctx->pc = 0x7F21390Cu;
    // 7F21390C: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213910:
    ctx->pc = 0x7F213910u;
    // 7F213910: stw     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F213914:
    ctx->pc = 0x7F213914u;
    // 7F213914: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213918:
    ctx->pc = 0x7F213918u;
    // 7F213918: lwz     r5, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F21391C:
    ctx->pc = 0x7F21391Cu;
    // 7F21391C: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213920:
    ctx->pc = 0x7F213920u;
    // 7F213920: stw     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F213924:
    ctx->pc = 0x7F213924u;
    // 7F213924: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213928:
    // 7F213928: bl      0x7F213824
    {
            ctx->lr = 0x7F21392Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213824u;
                return;
            }
            goto label_7F213824;
    }

label_7F21392C:
    ctx->downcount -= 2;
    // 7F21392C: cmpwi   r3, 0
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

label_7F213930:
    // 7F213930: bc    12, 2, 0x7F213978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213978;
        }
    }

label_7F213934:
    ctx->pc = 0x7F213934u;
    ctx->downcount -= 5;
    // 7F213934: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213938:
    // 7F213938: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F21393C:
    ctx->pc = 0x7F21393Cu;
    // 7F21393C: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213940:
    ctx->pc = 0x7F213940u;
    // 7F213940: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213944:
    // 7F213944: bl      0x7F129B3C
    {
            ctx->lr = 0x7F213948u;
            ctx->pc = 0x7F129B3Cu;
            return;
    }

label_7F213948:
    ctx->downcount -= 2;
    // 7F213948: cmpwi   r3, 0
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

label_7F21394C:
    // 7F21394C: bc    4, 2, 0x7F213978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213978;
        }
    }

label_7F213950:
    ctx->pc = 0x7F213950u;
    ctx->downcount -= 10;
    // 7F213950: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213954:
    // 7F213954: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213958:
    ctx->pc = 0x7F213958u;
    // 7F213958: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21395C:
    ctx->pc = 0x7F21395Cu;
    // 7F21395C: stw     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F213960:
    ctx->pc = 0x7F213960u;
    // 7F213960: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213964:
    ctx->pc = 0x7F213964u;
    // 7F213964: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213968:
    ctx->pc = 0x7F213968u;
    // 7F213968: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21396C:
    ctx->pc = 0x7F21396Cu;
    // 7F21396C: stw     r4, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F213970:
    ctx->pc = 0x7F213970u;
    // 7F213970: stw     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213974:
    // 7F213974: b       0x7F213988
    {
            goto label_7F213988;
    }

label_7F213978:
    ctx->pc = 0x7F213978u;
    ctx->downcount -= 1;
    // 7F213978: lwz     r31, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F21397C:
    ctx->downcount -= 2;
    // 7F21397C: cmplwi  r31, 0x0000
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

label_7F213980:
    // 7F213980: bc    4, 2, 0x7F2138FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2138FCu;
                return;
            }
            goto label_7F2138FC;
        }
    }

label_7F213984:
    ctx->pc = 0x7F213984u;
    ctx->downcount -= 1;
    // 7F213984: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F213988:
    ctx->pc = 0x7F213988u;
    ctx->downcount -= 16;
    // 7F213988: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F21398C:
    ctx->pc = 0x7F21398Cu;
    // 7F21398C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213990:
    ctx->pc = 0x7F213990u;
    // 7F213990: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213994:
    ctx->pc = 0x7F213994u;
    // 7F213994: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F213998:
    ctx->pc = 0x7F213998u;
    // 7F213998: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F21399C:
    ctx->pc = 0x7F21399Cu;
    ctx->downcount -= 3;
    // 7F21399C: lha     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2139A0:
    ctx->pc = 0x7F2139A0u;
    // 7F2139A0: cmpw    r0, r4
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

label_7F2139A4:
    ctx->pc = 0x7F2139A4u;
    // 7F2139A4: bc    4, 1, 0x7F2139B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2139B8;
        }
    }

label_7F2139A8:
    ctx->pc = 0x7F2139A8u;
    ctx->downcount -= 2;
    // 7F2139A8: cmpwi   r0, 2048
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

label_7F2139AC:
    ctx->pc = 0x7F2139ACu;
    // 7F2139AC: bc    4, 0, 0x7F2139B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2139B8;
        }
    }

label_7F2139B0:
    ctx->pc = 0x7F2139B0u;
    ctx->downcount -= 2;
    // 7F2139B0: sth     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2139B4:
    ctx->pc = 0x7F2139B4u;
    // 7F2139B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2139B8:
    ctx->pc = 0x7F2139B8u;
    ctx->downcount -= 3;
    // 7F2139B8: subfic  r4, r5, 4096
    {
        u64 res = (u64)(u32)(s32)(4096) + (u64)(~ctx->gpr[5]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F2139BC:
    ctx->pc = 0x7F2139BCu;
    // 7F2139BC: cmpw    r0, r4
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

label_7F2139C0:
    ctx->pc = 0x7F2139C0u;
    // 7F2139C0: bclr  4, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2139C4:
    ctx->pc = 0x7F2139C4u;
    ctx->downcount -= 2;
    // 7F2139C4: cmpwi   r0, 2048
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

label_7F2139C8:
    ctx->pc = 0x7F2139C8u;
    // 7F2139C8: bclr  12, 0
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2139CC:
    ctx->pc = 0x7F2139CCu;
    ctx->downcount -= 2;
    // 7F2139CC: sth     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2139D0:
    ctx->pc = 0x7F2139D0u;
    // 7F2139D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2139D4:
    ctx->pc = 0x7F2139D4u;
    ctx->downcount -= 9;
    // 7F2139D4: lha     r7, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2139D8:
    ctx->pc = 0x7F2139D8u;
    // 7F2139D8: subf   r0, r4, r6
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F2139DC:
    ctx->pc = 0x7F2139DCu;
    // 7F2139DC: neg  r8, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[8] = (~a) + 1u;
    }

label_7F2139E0:
    ctx->pc = 0x7F2139E0u;
    // 7F2139E0: subf   r6, r4, r7
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F2139E4:
    ctx->pc = 0x7F2139E4u;
    // 7F2139E4: extsh r7, r0
    {
        ctx->gpr[7] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F2139E8:
    ctx->pc = 0x7F2139E8u;
    // 7F2139E8: sth     r6, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2139EC:
    ctx->pc = 0x7F2139ECu;
    // 7F2139EC: lha     r6, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2139F0:
    ctx->pc = 0x7F2139F0u;
    // 7F2139F0: cmpwi   r6, 2048
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2139F4:
    ctx->pc = 0x7F2139F4u;
    // 7F2139F4: bc    12, 0, 0x7F213A04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213A04;
        }
    }

label_7F2139F8:
    ctx->pc = 0x7F2139F8u;
    ctx->downcount -= 3;
    // 7F2139F8: addi    r0, r6, -4096
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-4096);

label_7F2139FC:
    ctx->pc = 0x7F2139FCu;
    // 7F2139FC: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213A00:
    ctx->pc = 0x7F213A00u;
    // 7F213A00: b       0x7F213A14
    {
            goto label_7F213A14;
    }

label_7F213A04:
    ctx->pc = 0x7F213A04u;
    ctx->downcount -= 2;
    // 7F213A04: cmpwi   r6, -2048
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(-2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213A08:
    ctx->pc = 0x7F213A08u;
    // 7F213A08: bc    12, 1, 0x7F213A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213A14;
        }
    }

label_7F213A0C:
    ctx->pc = 0x7F213A0Cu;
    ctx->downcount -= 2;
    // 7F213A0C: addi    r0, r6, 4096
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(4096);

label_7F213A10:
    ctx->pc = 0x7F213A10u;
    // 7F213A10: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213A14:
    ctx->pc = 0x7F213A14u;
    ctx->downcount -= 2;
    // 7F213A14: cmpwi   r7, 2048
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213A18:
    ctx->pc = 0x7F213A18u;
    // 7F213A18: bc    12, 0, 0x7F213A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213A24;
        }
    }

label_7F213A1C:
    ctx->pc = 0x7F213A1Cu;
    ctx->downcount -= 2;
    // 7F213A1C: addi    r7, r7, -4096
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-4096);

label_7F213A20:
    ctx->pc = 0x7F213A20u;
    // 7F213A20: b       0x7F213A30
    {
            goto label_7F213A30;
    }

label_7F213A24:
    ctx->pc = 0x7F213A24u;
    ctx->downcount -= 2;
    // 7F213A24: cmpwi   r7, -2048
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(-2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F213A28:
    ctx->pc = 0x7F213A28u;
    // 7F213A28: bc    12, 1, 0x7F213A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213A30;
        }
    }

label_7F213A2C:
    ctx->pc = 0x7F213A2Cu;
    ctx->downcount -= 1;
    // 7F213A2C: addi    r7, r7, 4096
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(4096);

label_7F213A30:
    ctx->pc = 0x7F213A30u;
    ctx->downcount -= 3;
    // 7F213A30: lha     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213A34:
    ctx->pc = 0x7F213A34u;
    // 7F213A34: cmpw    r8, r0
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

label_7F213A38:
    ctx->pc = 0x7F213A38u;
    // 7F213A38: bc    4, 1, 0x7F213A44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213A44;
        }
    }

label_7F213A3C:
    ctx->pc = 0x7F213A3Cu;
    ctx->downcount -= 2;
    // 7F213A3C: sth     r8, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F213A40:
    ctx->pc = 0x7F213A40u;
    // 7F213A40: b       0x7F213A50
    {
            goto label_7F213A50;
    }

label_7F213A44:
    ctx->pc = 0x7F213A44u;
    ctx->downcount -= 2;
    // 7F213A44: cmpw    r5, r0
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

label_7F213A48:
    ctx->pc = 0x7F213A48u;
    // 7F213A48: bc    4, 0, 0x7F213A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213A50;
        }
    }

label_7F213A4C:
    ctx->pc = 0x7F213A4Cu;
    ctx->downcount -= 1;
    // 7F213A4C: sth     r5, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F213A50:
    ctx->pc = 0x7F213A50u;
    ctx->downcount -= 8;
    // 7F213A50: lha     r6, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213A54:
    ctx->pc = 0x7F213A54u;
    // 7F213A54: extsh r7, r7
    {
        ctx->gpr[7] = (u32)(s32)(s16)ctx->gpr[7];
    }

label_7F213A58:
    ctx->pc = 0x7F213A58u;
    // 7F213A58: subf   r0, r6, r7
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F213A5C:
    ctx->pc = 0x7F213A5Cu;
    // 7F213A5C: srawi r5, r0, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[5] = value;
        } else if (sh > 31) {
            ctx->gpr[5] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[5] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F213A60:
    ctx->pc = 0x7F213A60u;
    // 7F213A60: xor   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F213A64:
    ctx->pc = 0x7F213A64u;
    // 7F213A64: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F213A68:
    ctx->pc = 0x7F213A68u;
    // 7F213A68: cmpwi   r0, 2000
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

label_7F213A6C:
    ctx->pc = 0x7F213A6Cu;
    // 7F213A6C: bc    4, 1, 0x7F213A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213A80;
        }
    }

label_7F213A70:
    ctx->pc = 0x7F213A70u;
    ctx->downcount -= 4;
    // 7F213A70: add   r0, r6, r7
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F213A74:
    ctx->pc = 0x7F213A74u;
    // 7F213A74: srawi r0, r0, 1
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

label_7F213A78:
    ctx->pc = 0x7F213A78u;
    // 7F213A78: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F213A7C:
    ctx->pc = 0x7F213A7Cu;
    // 7F213A7C: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213A80:
    ctx->pc = 0x7F213A80u;
    ctx->downcount -= 4;
    // 7F213A80: lha     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213A84:
    ctx->pc = 0x7F213A84u;
    // 7F213A84: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F213A88:
    ctx->pc = 0x7F213A88u;
    // 7F213A88: sth     r0, 2(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213A8C:
    ctx->pc = 0x7F213A8Cu;
    // 7F213A8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213A90:
    ctx->pc = 0x7F213A90u;
    ctx->downcount -= 15;
    // 7F213A90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F213A94:
    ctx->pc = 0x7F213A94u;
    // 7F213A94: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F213A98:
    ctx->pc = 0x7F213A98u;
    // 7F213A98: sth     r6, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F213A9C:
    ctx->pc = 0x7F213A9Cu;
    // 7F213A9C: li      r0, -10
    ctx->gpr[0] = (u32)(s32)(-10);

label_7F213AA0:
    ctx->pc = 0x7F213AA0u;
    // 7F213AA0: sth     r6, 30(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F213AA4:
    ctx->pc = 0x7F213AA4u;
    // 7F213AA4: sth     r6, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F213AA8:
    ctx->pc = 0x7F213AA8u;
    // 7F213AA8: sth     r6, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F213AAC:
    ctx->pc = 0x7F213AACu;
    // 7F213AAC: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F213AB0:
    ctx->pc = 0x7F213AB0u;
    // 7F213AB0: lwz     r4, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213AB4:
    ctx->pc = 0x7F213AB4u;
    // 7F213AB4: stw     r6, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F213AB8:
    ctx->pc = 0x7F213AB8u;
    // 7F213AB8: stw     r4, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F213ABC:
    ctx->pc = 0x7F213ABCu;
    // 7F213ABC: stfs     f1, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F213ABCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F213AC0:
    ctx->pc = 0x7F213AC0u;
    // 7F213AC0: stw     r5, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F213AC4:
    ctx->pc = 0x7F213AC4u;
    // 7F213AC4: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213AC8:
    ctx->pc = 0x7F213AC8u;
    // 7F213AC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213ACC:
    ctx->pc = 0x7F213ACCu;
    ctx->downcount -= 15;
    // 7F213ACC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213AD0:
    ctx->pc = 0x7F213AD0u;
    // 7F213AD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213AD4:
    ctx->pc = 0x7F213AD4u;
    // 7F213AD4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F213AD8:
    ctx->pc = 0x7F213AD8u;
    // 7F213AD8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213ADC:
    ctx->pc = 0x7F213ADCu;
    // 7F213ADC: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213AE0:
    ctx->pc = 0x7F213AE0u;
    // 7F213AE0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F213AE4:
    ctx->pc = 0x7F213AE4u;
    // 7F213AE4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213AE8:
    ctx->pc = 0x7F213AE8u;
    // 7F213AE8: sth     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F213AEC:
    ctx->pc = 0x7F213AECu;
    // 7F213AEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213AF0:
    ctx->pc = 0x7F213AF0u;
    // 7F213AF0: lwz     r0, 800(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(800);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213AF4:
    ctx->pc = 0x7F213AF4u;
    // 7F213AF4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213AF8:
    ctx->pc = 0x7F213AF8u;
    // 7F213AF8: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F213AFC:
    ctx->pc = 0x7F213AFCu;
    // 7F213AFC: lwz     r3, 1976(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1976);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213B00:
    ctx->pc = 0x7F213B00u;
    // 7F213B00: cmpwi   r3, 0
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

label_7F213B04:
    ctx->pc = 0x7F213B04u;
    // 7F213B04: bc    12, 2, 0x7F213B10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213B10;
        }
    }

label_7F213B08:
    ctx->pc = 0x7F213B08u;
    ctx->downcount -= 2;
    // 7F213B08: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213B0C:
    ctx->pc = 0x7F213B0Cu;
    // 7F213B0C: bl      0x7F01FA30
    {
            ctx->lr = 0x7F213B10u;
            ctx->pc = 0x7F01FA30u;
            return;
    }

label_7F213B10:
    ctx->pc = 0x7F213B10u;
    ctx->downcount -= 6;
    // 7F213B10: lwz     r3, 748(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(748);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213B14:
    ctx->pc = 0x7F213B14u;
    // 7F213B14: addi    r4, r31, 96
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(96);

label_7F213B18:
    ctx->pc = 0x7F213B18u;
    // 7F213B18: lwz     r5, 260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(260);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F213B1C:
    ctx->pc = 0x7F213B1Cu;
    // 7F213B1C: li      r6, 900
    ctx->gpr[6] = (u32)(s32)(900);

label_7F213B20:
    ctx->pc = 0x7F213B20u;
    // 7F213B20: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_7F213B24:
    ctx->pc = 0x7F213B24u;
    // 7F213B24: bl      0x7F16E4C0
    {
            ctx->lr = 0x7F213B28u;
            ctx->pc = 0x7F16E4C0u;
            return;
    }

label_7F213B28:
    ctx->pc = 0x7F213B28u;
    ctx->downcount -= 3;
    // 7F213B28: lwz     r0, 760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213B2C:
    ctx->pc = 0x7F213B2Cu;
    // 7F213B2C: cmpwi   r0, 1
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

label_7F213B30:
    ctx->pc = 0x7F213B30u;
    // 7F213B30: bc    4, 2, 0x7F213B64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213B64;
        }
    }

label_7F213B34:
    ctx->pc = 0x7F213B34u;
    ctx->downcount -= 10;
    // 7F213B34: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F213B38:
    ctx->pc = 0x7F213B38u;
    // 7F213B38: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F213B3C:
    ctx->pc = 0x7F213B3Cu;
    // 7F213B3C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213B40:
    ctx->pc = 0x7F213B40u;
    // 7F213B40: lha     r3, 384(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(384);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213B44:
    ctx->pc = 0x7F213B44u;
    // 7F213B44: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F213B48:
    ctx->pc = 0x7F213B48u;
    // 7F213B48: sth     r0, 384(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(384);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213B4C:
    ctx->pc = 0x7F213B4Cu;
    // 7F213B4C: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213B50:
    ctx->pc = 0x7F213B50u;
    // 7F213B50: lha     r0, 384(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(384);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213B54:
    ctx->pc = 0x7F213B54u;
    // 7F213B54: cmpwi   r0, 30000
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

label_7F213B58:
    ctx->pc = 0x7F213B58u;
    // 7F213B58: bc    4, 1, 0x7F213B64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213B64;
        }
    }

label_7F213B5C:
    ctx->pc = 0x7F213B5Cu;
    ctx->downcount -= 2;
    // 7F213B5C: li      r0, 30000
    ctx->gpr[0] = (u32)(s32)(30000);

label_7F213B60:
    ctx->pc = 0x7F213B60u;
    // 7F213B60: sth     r0, 384(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(384);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213B64:
    ctx->pc = 0x7F213B64u;
    ctx->downcount -= 6;
    // 7F213B64: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213B68:
    ctx->pc = 0x7F213B68u;
    // 7F213B68: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F213B6C:
    ctx->pc = 0x7F213B6Cu;
    // 7F213B6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213B70:
    ctx->pc = 0x7F213B70u;
    // 7F213B70: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F213B74:
    ctx->pc = 0x7F213B74u;
    // 7F213B74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213B78:
    ctx->pc = 0x7F213B78u;
    ctx->downcount -= 8;
    // 7F213B78: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213B7C:
    ctx->pc = 0x7F213B7Cu;
    // 7F213B7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213B80:
    ctx->pc = 0x7F213B80u;
    // 7F213B80: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213B84:
    ctx->pc = 0x7F213B84u;
    // 7F213B84: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F213B88:
    ctx->pc = 0x7F213B88u;
    // 7F213B88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213B8C:
    ctx->pc = 0x7F213B8Cu;
    // 7F213B8C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F213B90:
    ctx->pc = 0x7F213B90u;
    // 7F213B90: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213B94:
    ctx->pc = 0x7F213B94u;
    // 7F213B94: bl      0x7F174234
    {
            ctx->lr = 0x7F213B98u;
            ctx->pc = 0x7F174234u;
            return;
    }

label_7F213B98:
    ctx->pc = 0x7F213B98u;
    ctx->downcount -= 3;
    // 7F213B98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213B9C:
    ctx->pc = 0x7F213B9Cu;
    // 7F213B9C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213BA0:
    ctx->pc = 0x7F213BA0u;
    // 7F213BA0: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F213BA4u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F213BA4:
    ctx->pc = 0x7F213BA4u;
    ctx->downcount -= 2;
    // 7F213BA4: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213BA8:
    ctx->pc = 0x7F213BA8u;
    // 7F213BA8: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F213BACu;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F213BAC:
    ctx->pc = 0x7F213BACu;
    ctx->downcount -= 2;
    // 7F213BAC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213BB0:
    ctx->pc = 0x7F213BB0u;
    // 7F213BB0: bl      0x7F1E088C
    {
            ctx->lr = 0x7F213BB4u;
            ctx->pc = 0x7F1E088Cu;
            return;
    }

label_7F213BB4:
    ctx->pc = 0x7F213BB4u;
    ctx->downcount -= 6;
    // 7F213BB4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213BB8:
    ctx->pc = 0x7F213BB8u;
    // 7F213BB8: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F213BBC:
    ctx->pc = 0x7F213BBCu;
    // 7F213BBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213BC0:
    ctx->pc = 0x7F213BC0u;
    // 7F213BC0: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F213BC4:
    ctx->pc = 0x7F213BC4u;
    // 7F213BC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213BC8:
    ctx->pc = 0x7F213BC8u;
    ctx->downcount -= 10;
    // 7F213BC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213BCC:
    ctx->pc = 0x7F213BCCu;
    // 7F213BCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213BD0:
    ctx->pc = 0x7F213BD0u;
    // 7F213BD0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F213BD4:
    ctx->pc = 0x7F213BD4u;
    // 7F213BD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213BD8:
    ctx->pc = 0x7F213BD8u;
    // 7F213BD8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F213BDC:
    ctx->pc = 0x7F213BDCu;
    // 7F213BDC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213BE0:
    ctx->pc = 0x7F213BE0u;
    // 7F213BE0: li      r3, 560
    ctx->gpr[3] = (u32)(s32)(560);

label_7F213BE4:
    ctx->pc = 0x7F213BE4u;
    // 7F213BE4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213BE8:
    ctx->pc = 0x7F213BE8u;
    // 7F213BE8: addi    r4, r4, 816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(816);

label_7F213BEC:
    ctx->pc = 0x7F213BECu;
    // 7F213BEC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F213BF0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F213BF0:
    ctx->pc = 0x7F213BF0u;
    ctx->downcount -= 5;
    // 7F213BF0: lwz     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F213BF4:
    ctx->pc = 0x7F213BF4u;
    // 7F213BF4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F213BF8:
    ctx->pc = 0x7F213BF8u;
    // 7F213BF8: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F213BFC:
    ctx->pc = 0x7F213BFCu;
    // 7F213BFC: addi    r3, r5, 816
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(816);

label_7F213C00:
    ctx->pc = 0x7F213C00u;
    // 7F213C00: bl      0x7F1DDC54
    {
            ctx->lr = 0x7F213C04u;
            ctx->pc = 0x7F1DDC54u;
            return;
    }

label_7F213C04:
    ctx->pc = 0x7F213C04u;
    ctx->downcount -= 3;
    // 7F213C04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213C08:
    ctx->pc = 0x7F213C08u;
    // 7F213C08: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F213C0C:
    ctx->pc = 0x7F213C0Cu;
    // 7F213C0C: bl      0x7F213C84
    {
            ctx->lr = 0x7F213C10u;
            goto label_7F213C84;
    }

label_7F213C10:
    ctx->pc = 0x7F213C10u;
    ctx->downcount -= 15;
    // 7F213C10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F213C14:
    ctx->pc = 0x7F213C14u;
    // 7F213C14: li      r0, 750
    ctx->gpr[0] = (u32)(s32)(750);

label_7F213C18:
    ctx->pc = 0x7F213C18u;
    // 7F213C18: sth     r3, 888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(888);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F213C1C:
    ctx->pc = 0x7F213C1Cu;
    // 7F213C1C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F213C20:
    ctx->pc = 0x7F213C20u;
    // 7F213C20: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F213C24:
    ctx->pc = 0x7F213C24u;
    // 7F213C24: stw     r0, 2004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213C28:
    ctx->pc = 0x7F213C28u;
    // 7F213C28: lhz     r0, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F213C2C:
    ctx->pc = 0x7F213C2Cu;
    // 7F213C2C: rlwinm r0, r0, 0, 16, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFEu;
    }

label_7F213C30:
    ctx->pc = 0x7F213C30u;
    // 7F213C30: sth     r0, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213C34:
    ctx->pc = 0x7F213C34u;
    // 7F213C34: lwz     r0, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213C38:
    ctx->pc = 0x7F213C38u;
    // 7F213C38: rlwinm r0, r0, 0, 23, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFDFFu;
    }

label_7F213C3C:
    ctx->pc = 0x7F213C3Cu;
    // 7F213C3C: stw     r0, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213C40:
    ctx->pc = 0x7F213C40u;
    // 7F213C40: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213C44:
    ctx->pc = 0x7F213C44u;
    // 7F213C44: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213C48:
    ctx->pc = 0x7F213C48u;
    // 7F213C48: bl      0x7F3B052C
    {
            ctx->lr = 0x7F213C4Cu;
            ctx->pc = 0x7F3B052Cu;
            return;
    }

label_7F213C4C:
    ctx->pc = 0x7F213C4Cu;
    ctx->downcount -= 4;
    // 7F213C4C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213C50:
    ctx->pc = 0x7F213C50u;
    // 7F213C50: lha     r0, 254(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(254);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F213C54:
    ctx->pc = 0x7F213C54u;
    // 7F213C54: cmpwi   r0, 3
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

label_7F213C58:
    ctx->pc = 0x7F213C58u;
    // 7F213C58: bc    4, 2, 0x7F213C64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F213C64;
        }
    }

label_7F213C5C:
    ctx->pc = 0x7F213C5Cu;
    ctx->downcount -= 2;
    // 7F213C5C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F213C60:
    ctx->pc = 0x7F213C60u;
    // 7F213C60: bl      0x7F3B11CC
    {
            ctx->lr = 0x7F213C64u;
            ctx->pc = 0x7F3B11CCu;
            return;
    }

label_7F213C64:
    ctx->pc = 0x7F213C64u;
    ctx->downcount -= 3;
    // 7F213C64: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213C68:
    ctx->pc = 0x7F213C68u;
    // 7F213C68: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F213C6C:
    ctx->pc = 0x7F213C6Cu;
    // 7F213C6C: bl      0x7F213ACC
    {
            ctx->lr = 0x7F213C70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213ACCu;
                return;
            }
            goto label_7F213ACC;
    }

label_7F213C70:
    ctx->pc = 0x7F213C70u;
    ctx->downcount -= 6;
    // 7F213C70: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213C74:
    ctx->pc = 0x7F213C74u;
    // 7F213C74: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F213C78:
    ctx->pc = 0x7F213C78u;
    // 7F213C78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213C7C:
    ctx->pc = 0x7F213C7Cu;
    // 7F213C7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213C80:
    ctx->pc = 0x7F213C80u;
    // 7F213C80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213C84:
    ctx->pc = 0x7F213C84u;
    ctx->downcount -= 8;
    // 7F213C84: stb     r4, 2009(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2009);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F213C88:
    ctx->pc = 0x7F213C88u;
    // 7F213C88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F213C8C:
    ctx->pc = 0x7F213C8Cu;
    // 7F213C8C: stb     r0, 2010(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2010);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F213C90:
    ctx->pc = 0x7F213C90u;
    // 7F213C90: stb     r0, 2011(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2011);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F213C94:
    ctx->pc = 0x7F213C94u;
    // 7F213C94: stb     r0, 2012(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2012);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F213C98:
    ctx->pc = 0x7F213C98u;
    // 7F213C98: stw     r0, 784(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(784);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213C9C:
    ctx->pc = 0x7F213C9Cu;
    // 7F213C9C: stw     r0, 788(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(788);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213CA0:
    ctx->pc = 0x7F213CA0u;
    // 7F213CA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213CA4:
    ctx->pc = 0x7F213CA4u;
    ctx->downcount -= 39;
    // 7F213CA4: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213CA8:
    ctx->pc = 0x7F213CA8u;
    // 7F213CA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213CAC:
    ctx->pc = 0x7F213CACu;
    // 7F213CAC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213CB0:
    ctx->pc = 0x7F213CB0u;
    // 7F213CB0: stfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213CB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F213CB4:
    ctx->pc = 0x7F213CB4u;
    // 7F213CB4: psq_st   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213CB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F213CB4u);
        if (ctx->exception) return;
    }

label_7F213CB8:
    ctx->pc = 0x7F213CB8u;
    // 7F213CB8: stfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213CB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F213CBC:
    ctx->pc = 0x7F213CBCu;
    // 7F213CBC: psq_st   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213CBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F213CBCu);
        if (ctx->exception) return;
    }

label_7F213CC0:
    ctx->pc = 0x7F213CC0u;
    // 7F213CC0: stfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213CC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F213CC4:
    ctx->pc = 0x7F213CC4u;
    // 7F213CC4: psq_st   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213CC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F213CC4u);
        if (ctx->exception) return;
    }

label_7F213CC8:
    ctx->pc = 0x7F213CC8u;
    // 7F213CC8: stfd     f28, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213CC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F213CCC:
    ctx->pc = 0x7F213CCCu;
    // 7F213CCC: psq_st   f28, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213CCCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F213CCCu);
        if (ctx->exception) return;
    }

label_7F213CD0:
    ctx->pc = 0x7F213CD0u;
    // 7F213CD0: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F213CD4:
    ctx->pc = 0x7F213CD4u;
    // 7F213CD4: lis     r7, 32582
    ctx->gpr[7] = ((u32)(s32)(32582) << 16);

label_7F213CD8:
    ctx->pc = 0x7F213CD8u;
    // 7F213CD8: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F213CDC:
    ctx->pc = 0x7F213CDCu;
    // 7F213CDC: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F213CE0:
    ctx->pc = 0x7F213CE0u;
    // 7F213CE0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F213CE4:
    ctx->pc = 0x7F213CE4u;
    // 7F213CE4: addi    r8, r7, 16120
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(16120);

label_7F213CE8:
    ctx->pc = 0x7F213CE8u;
    // 7F213CE8: addi    r7, r6, 16144
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(16144);

label_7F213CEC:
    ctx->pc = 0x7F213CECu;
    // 7F213CEC: addi    r6, r5, 16140
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(16140);

label_7F213CF0:
    ctx->pc = 0x7F213CF0u;
    // 7F213CF0: addi    r5, r4, 16136
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(16136);

label_7F213CF4:
    ctx->pc = 0x7F213CF4u;
    // 7F213CF4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F213CF8:
    ctx->pc = 0x7F213CF8u;
    // 7F213CF8: lfs     f28, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F213CF8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F213CFC:
    ctx->pc = 0x7F213CFCu;
    // 7F213CFC: lfs     f29, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F213CFCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F213D00:
    ctx->pc = 0x7F213D00u;
    // 7F213D00: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213D04:
    ctx->pc = 0x7F213D04u;
    // 7F213D04: lfs     f30, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F213D04u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F213D08:
    ctx->pc = 0x7F213D08u;
    // 7F213D08: addi    r30, r4, 12832
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F213D0C:
    ctx->pc = 0x7F213D0Cu;
    // 7F213D0C: lfs     f31, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F213D0Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F213D10:
    ctx->pc = 0x7F213D10u;
    // 7F213D10: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F213D14:
    ctx->pc = 0x7F213D14u;
    // 7F213D14: b       0x7F213D84
    {
            goto label_7F213D84;
    }

label_7F213D18:
    ctx->pc = 0x7F213D18u;
    ctx->downcount -= 2;
    // 7F213D18: stfs     f28, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213D18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

label_7F213D1C:
    // 7F213D1C: bl      0x7F213E60
    {
            ctx->lr = 0x7F213D20u;
            goto label_7F213E60;
    }

label_7F213D20:
    ctx->pc = 0x7F213D20u;
    ctx->downcount -= 5;
    // 7F213D20: fmuls   f0, f29, f1
    if (!ppc_fp_available_inline(ctx, 0x7F213D20u)) return;
    ppc_fmuls(ctx, 0, 29, 1);

label_7F213D24:
    ctx->pc = 0x7F213D24u;
    // 7F213D24: stfs     f28, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213D24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[28]));
    }

label_7F213D28:
    ctx->pc = 0x7F213D28u;
    // 7F213D28: fmadds f0, f30, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F213D28u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[30], ctx->fpr[0], ctx->fpr[31], true, false, false, &result))
            ctx->fpr[0] = ctx->ps1[0] = result;
    }

label_7F213D2C:
    ctx->pc = 0x7F213D2Cu;
    // 7F213D2C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213D2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F213D30:
    // 7F213D30: bl      0x7F213E3C
    {
            ctx->lr = 0x7F213D34u;
            goto label_7F213E3C;
    }

label_7F213D34:
    ctx->downcount -= 3;
    // 7F213D34: rlwinm r0, r3, 0, 21, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000007FFu;
    }

label_7F213D38:
    ctx->pc = 0x7F213D38u;
    // 7F213D38: sth     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213D3C:
    // 7F213D3C: bl      0x7F213E3C
    {
            ctx->lr = 0x7F213D40u;
            goto label_7F213E3C;
    }

label_7F213D40:
    ctx->downcount -= 7;
    // 7F213D40: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F213D44:
    // 7F213D44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F213D48:
    ctx->pc = 0x7F213D48u;
    // 7F213D48: sth     r3, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F213D4C:
    // 7F213D4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F213D50:
    // 7F213D50: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F213D54:
    ctx->pc = 0x7F213D54u;
    // 7F213D54: sth     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213D58:
    // 7F213D58: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F213D5Cu;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F213D5C:
    ctx->downcount -= 4;
    // 7F213D5C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213D60:
    // 7F213D60: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F213D64:
    // 7F213D64: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F213D68:
    // 7F213D68: bl      0x7F3B3648
    {
            ctx->lr = 0x7F213D6Cu;
            ctx->pc = 0x7F3B3648u;
            return;
    }

label_7F213D6C:
    ctx->pc = 0x7F213D6Cu;
    ctx->downcount -= 5;
    // 7F213D6C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213D70:
    // 7F213D70: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213D74:
    // 7F213D74: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F213D78:
    // 7F213D78: addi    r3, r3, 816
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(816);

label_7F213D7C:
    // 7F213D7C: bl      0x7F1F4114
    {
            ctx->lr = 0x7F213D80u;
            ctx->pc = 0x7F1F4114u;
            return;
    }

label_7F213D80:
    ctx->downcount -= 1;
    // 7F213D80: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F213D84:
    ctx->downcount -= 3;
    // 7F213D84: extsh r0, r29
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[29];
    }

label_7F213D88:
    // 7F213D88: cmpwi   r0, 2
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

label_7F213D8C:
    // 7F213D8C: bc    12, 0, 0x7F213D18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213D18u;
                return;
            }
            goto label_7F213D18;
        }
    }

label_7F213D90:
    ctx->pc = 0x7F213D90u;
    ctx->downcount -= 24;
    // 7F213D90: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213D94:
    ctx->pc = 0x7F213D94u;
    // 7F213D94: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F213D98:
    ctx->pc = 0x7F213D98u;
    // 7F213D98: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F213D9C:
    ctx->pc = 0x7F213D9Cu;
    // 7F213D9C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F213DA0:
    ctx->pc = 0x7F213DA0u;
    // 7F213DA0: lwz     r3, 960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(960);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213DA4:
    ctx->pc = 0x7F213DA4u;
    // 7F213DA4: ori     r3, r3, 0x3000
    ctx->gpr[3] = ctx->gpr[3] | 0x3000u;

label_7F213DA8:
    ctx->pc = 0x7F213DA8u;
    // 7F213DA8: stw     r3, 960(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(960);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F213DAC:
    ctx->pc = 0x7F213DACu;
    // 7F213DAC: lwz     r3, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213DB0:
    ctx->pc = 0x7F213DB0u;
    // 7F213DB0: oris    r3, r3, 0x0008
    ctx->gpr[3] = ctx->gpr[3] | (0x0008u << 16);

label_7F213DB4:
    ctx->pc = 0x7F213DB4u;
    // 7F213DB4: stw     r3, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F213DB8:
    ctx->pc = 0x7F213DB8u;
    // 7F213DB8: lwz     r3, 1572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1572);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213DBC:
    ctx->pc = 0x7F213DBCu;
    // 7F213DBC: oris    r3, r3, 0x0008
    ctx->gpr[3] = ctx->gpr[3] | (0x0008u << 16);

label_7F213DC0:
    ctx->pc = 0x7F213DC0u;
    // 7F213DC0: stw     r3, 1572(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1572);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F213DC4:
    ctx->pc = 0x7F213DC4u;
    // 7F213DC4: sth     r0, 888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(888);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213DC8:
    ctx->pc = 0x7F213DC8u;
    // 7F213DC8: stw     r0, 2004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213DCC:
    ctx->pc = 0x7F213DCCu;
    // 7F213DCC: lhz     r0, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F213DD0:
    ctx->pc = 0x7F213DD0u;
    // 7F213DD0: rlwinm r0, r0, 0, 16, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFEu;
    }

label_7F213DD4:
    ctx->pc = 0x7F213DD4u;
    // 7F213DD4: sth     r0, 940(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(940);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F213DD8:
    ctx->pc = 0x7F213DD8u;
    // 7F213DD8: lwz     r0, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213DDC:
    ctx->pc = 0x7F213DDCu;
    // 7F213DDC: rlwinm r0, r0, 0, 23, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFDFFu;
    }

label_7F213DE0:
    ctx->pc = 0x7F213DE0u;
    // 7F213DE0: stw     r0, 996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213DE4:
    ctx->pc = 0x7F213DE4u;
    // 7F213DE4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F213DE8:
    ctx->pc = 0x7F213DE8u;
    // 7F213DE8: lwz     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213DEC:
    ctx->pc = 0x7F213DECu;
    // 7F213DEC: bl      0x7F3B052C
    {
            ctx->lr = 0x7F213DF0u;
            ctx->pc = 0x7F3B052Cu;
            return;
    }

label_7F213DF0:
    ctx->pc = 0x7F213DF0u;
    ctx->downcount -= 3;
    // 7F213DF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213DF4:
    ctx->pc = 0x7F213DF4u;
    // 7F213DF4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F213DF8:
    ctx->pc = 0x7F213DF8u;
    // 7F213DF8: bl      0x7F213ACC
    {
            ctx->lr = 0x7F213DFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213ACCu;
                return;
            }
            goto label_7F213ACC;
    }

label_7F213DFC:
    ctx->pc = 0x7F213DFCu;
    ctx->downcount -= 3;
    // 7F213DFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F213E00:
    ctx->pc = 0x7F213E00u;
    // 7F213E00: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F213E04:
    ctx->pc = 0x7F213E04u;
    // 7F213E04: bl      0x7F213C84
    {
            ctx->lr = 0x7F213E08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213C84u;
                return;
            }
            goto label_7F213C84;
    }

label_7F213E08:
    ctx->pc = 0x7F213E08u;
    ctx->downcount -= 24;
    // 7F213E08: psq_l   f31, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213E08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F213E08u);
        if (ctx->exception) return;
    }

label_7F213E0C:
    ctx->pc = 0x7F213E0Cu;
    // 7F213E0C: lfd     f31, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213E0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F213E10:
    ctx->pc = 0x7F213E10u;
    // 7F213E10: psq_l   f30, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213E10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F213E10u);
        if (ctx->exception) return;
    }

label_7F213E14:
    ctx->pc = 0x7F213E14u;
    // 7F213E14: lfd     f30, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213E14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F213E18:
    ctx->pc = 0x7F213E18u;
    // 7F213E18: psq_l   f29, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213E18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F213E18u);
        if (ctx->exception) return;
    }

label_7F213E1C:
    ctx->pc = 0x7F213E1Cu;
    // 7F213E1C: lfd     f29, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213E1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F213E20:
    ctx->pc = 0x7F213E20u;
    // 7F213E20: psq_l   f28, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F213E20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F213E20u);
        if (ctx->exception) return;
    }

label_7F213E24:
    ctx->pc = 0x7F213E24u;
    // 7F213E24: lfd     f28, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213E24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F213E28:
    ctx->pc = 0x7F213E28u;
    // 7F213E28: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F213E2C:
    ctx->pc = 0x7F213E2Cu;
    // 7F213E2C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213E30:
    ctx->pc = 0x7F213E30u;
    // 7F213E30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213E34:
    ctx->pc = 0x7F213E34u;
    // 7F213E34: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F213E38:
    ctx->pc = 0x7F213E38u;
    // 7F213E38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213E3C:
    ctx->pc = 0x7F213E3Cu;
    ctx->downcount -= 13;
    // 7F213E3C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F213E40:
    ctx->pc = 0x7F213E40u;
    // 7F213E40: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F213E44:
    ctx->pc = 0x7F213E44u;
    // 7F213E44: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F213E48:
    ctx->pc = 0x7F213E48u;
    // 7F213E48: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213E4C:
    ctx->pc = 0x7F213E4Cu;
    // 7F213E4C: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F213E50:
    ctx->pc = 0x7F213E50u;
    // 7F213E50: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F213E54:
    ctx->pc = 0x7F213E54u;
    // 7F213E54: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F213E58:
    ctx->pc = 0x7F213E58u;
    // 7F213E58: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F213E5C:
    ctx->pc = 0x7F213E5Cu;
    // 7F213E5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213E60:
    ctx->pc = 0x7F213E60u;
    ctx->downcount -= 4;
    // 7F213E60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213E64:
    ctx->pc = 0x7F213E64u;
    // 7F213E64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213E68:
    ctx->pc = 0x7F213E68u;
    // 7F213E68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213E6C:
    ctx->pc = 0x7F213E6Cu;
    // 7F213E6C: bl      0x7F213E3C
    {
            ctx->lr = 0x7F213E70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213E3Cu;
                return;
            }
            goto label_7F213E3C;
    }

label_7F213E70:
    ctx->pc = 0x7F213E70u;
    ctx->downcount -= 31;
    // 7F213E70: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F213E74:
    ctx->pc = 0x7F213E74u;
    // 7F213E74: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F213E78:
    ctx->pc = 0x7F213E78u;
    // 7F213E78: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F213E7C:
    ctx->pc = 0x7F213E7Cu;
    // 7F213E7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F213E80:
    ctx->pc = 0x7F213E80u;
    // 7F213E80: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213E84:
    ctx->pc = 0x7F213E84u;
    // 7F213E84: lfd     f2, 16152(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F213E84u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16152);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F213E88:
    ctx->pc = 0x7F213E88u;
    // 7F213E88: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F213E88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F213E8C:
    ctx->pc = 0x7F213E8Cu;
    // 7F213E8C: lfs     f0, 16148(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F213E8Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16148);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F213E90:
    ctx->pc = 0x7F213E90u;
    // 7F213E90: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F213E90u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F213E94:
    ctx->pc = 0x7F213E94u;
    // 7F213E94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213E98:
    ctx->pc = 0x7F213E98u;
    // 7F213E98: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F213E98u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F213E9C:
    ctx->pc = 0x7F213E9Cu;
    // 7F213E9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213EA0:
    ctx->pc = 0x7F213EA0u;
    // 7F213EA0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213EA4:
    ctx->pc = 0x7F213EA4u;
    // 7F213EA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213EA8:
    ctx->pc = 0x7F213EA8u;
    ctx->downcount -= 26;
    // 7F213EA8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213EAC:
    ctx->pc = 0x7F213EACu;
    // 7F213EAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213EB0:
    ctx->pc = 0x7F213EB0u;
    // 7F213EB0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F213EB4:
    ctx->pc = 0x7F213EB4u;
    // 7F213EB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213EB8:
    ctx->pc = 0x7F213EB8u;
    // 7F213EB8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F213EBC:
    ctx->pc = 0x7F213EBCu;
    // 7F213EBC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F213EC0:
    ctx->pc = 0x7F213EC0u;
    // 7F213EC0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F213EC4:
    ctx->pc = 0x7F213EC4u;
    // 7F213EC4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F213EC8:
    ctx->pc = 0x7F213EC8u;
    // 7F213EC8: lwz     r4, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213ECC:
    ctx->pc = 0x7F213ECCu;
    // 7F213ECC: lwz     r6, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F213ED0:
    ctx->pc = 0x7F213ED0u;
    // 7F213ED0: and   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[0];
    }

label_7F213ED4:
    ctx->pc = 0x7F213ED4u;
    // 7F213ED4: and   r0, r6, r7
    {
        ctx->gpr[0] = ctx->gpr[6] & ctx->gpr[7];
    }

label_7F213ED8:
    ctx->pc = 0x7F213ED8u;
    // 7F213ED8: xor   r4, r4, r7
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[7];
    }

label_7F213EDC:
    ctx->pc = 0x7F213EDCu;
    // 7F213EDC: xor   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[7];
    }

label_7F213EE0:
    ctx->pc = 0x7F213EE0u;
    // 7F213EE0: or.   r0, r4, r0
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

label_7F213EE4:
    ctx->pc = 0x7F213EE4u;
    // 7F213EE4: bc    12, 2, 0x7F213F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213F44;
        }
    }

label_7F213EE8:
    ctx->pc = 0x7F213EE8u;
    ctx->downcount -= 3;
    // 7F213EE8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213EEC:
    ctx->pc = 0x7F213EECu;
    // 7F213EEC: rlwinm. r0, r0, 0, 31, 31
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

label_7F213EF0:
    ctx->pc = 0x7F213EF0u;
    // 7F213EF0: bc    12, 2, 0x7F213F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213F44;
        }
    }

label_7F213EF4:
    ctx->pc = 0x7F213EF4u;
    ctx->downcount -= 11;
    // 7F213EF4: lis     r4, 13
    ctx->gpr[4] = ((u32)(s32)(13) << 16);

label_7F213EF8:
    ctx->pc = 0x7F213EF8u;
    // 7F213EF8: lwz     r5, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F213EFC:
    ctx->pc = 0x7F213EFCu;
    // 7F213EFC: lis     r0, 8
    ctx->gpr[0] = ((u32)(s32)(8) << 16);

label_7F213F00:
    ctx->pc = 0x7F213F00u;
    // 7F213F00: lwz     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F213F04:
    ctx->pc = 0x7F213F04u;
    // 7F213F04: addi    r4, r4, -32738
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32738);

label_7F213F08:
    ctx->pc = 0x7F213F08u;
    // 7F213F08: and   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] & ctx->gpr[4];
    }

label_7F213F0C:
    ctx->pc = 0x7F213F0Cu;
    // 7F213F0C: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F213F10:
    ctx->pc = 0x7F213F10u;
    // 7F213F10: xor   r4, r4, r7
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[7];
    }

label_7F213F14:
    ctx->pc = 0x7F213F14u;
    // 7F213F14: xor   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[7];
    }

label_7F213F18:
    ctx->pc = 0x7F213F18u;
    // 7F213F18: or.   r0, r4, r0
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

label_7F213F1C:
    ctx->pc = 0x7F213F1Cu;
    // 7F213F1C: bc    12, 2, 0x7F213F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213F44;
        }
    }

label_7F213F20:
    ctx->pc = 0x7F213F20u;
    ctx->downcount -= 3;
    // 7F213F20: lwz     r4, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213F24:
    ctx->pc = 0x7F213F24u;
    // 7F213F24: cmplwi  r4, 0x0000
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

label_7F213F28:
    ctx->pc = 0x7F213F28u;
    // 7F213F28: bc    12, 2, 0x7F213F44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213F44;
        }
    }

label_7F213F2C:
    ctx->pc = 0x7F213F2Cu;
    ctx->downcount -= 2;
    // 7F213F2C: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F213F30:
    ctx->pc = 0x7F213F30u;
    // 7F213F30: bl      0x7F213B78
    {
            ctx->lr = 0x7F213F34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213B78u;
                return;
            }
            goto label_7F213B78;
    }

label_7F213F34:
    ctx->pc = 0x7F213F34u;
    ctx->downcount -= 4;
    // 7F213F34: addi    r4, r31, 688
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(688);

label_7F213F38:
    ctx->pc = 0x7F213F38u;
    // 7F213F38: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_7F213F3C:
    ctx->pc = 0x7F213F3Cu;
    // 7F213F3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F213F40:
    ctx->pc = 0x7F213F40u;
    // 7F213F40: bl      0x7F0117B8
    {
            ctx->lr = 0x7F213F44u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F213F44:
    ctx->pc = 0x7F213F44u;
    ctx->downcount -= 19;
    // 7F213F44: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F213F48:
    ctx->pc = 0x7F213F48u;
    // 7F213F48: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213F4C:
    ctx->pc = 0x7F213F4Cu;
    // 7F213F4C: stw     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213F50:
    ctx->pc = 0x7F213F50u;
    // 7F213F50: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F213F54:
    ctx->pc = 0x7F213F54u;
    // 7F213F54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213F58:
    ctx->pc = 0x7F213F58u;
    // 7F213F58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F213F5C:
    ctx->pc = 0x7F213F5Cu;
    // 7F213F5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F213F60:
    ctx->pc = 0x7F213F60u;
    // 7F213F60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F213F64:
    ctx->pc = 0x7F213F64u;
    ctx->downcount -= 26;
    // 7F213F64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F213F68:
    ctx->pc = 0x7F213F68u;
    // 7F213F68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F213F6C:
    ctx->pc = 0x7F213F6Cu;
    // 7F213F6C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F213F70:
    ctx->pc = 0x7F213F70u;
    // 7F213F70: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F213F74:
    ctx->pc = 0x7F213F74u;
    // 7F213F74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F213F78:
    ctx->pc = 0x7F213F78u;
    // 7F213F78: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F213F7C:
    ctx->pc = 0x7F213F7Cu;
    // 7F213F7C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F213F80:
    ctx->pc = 0x7F213F80u;
    // 7F213F80: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F213F84:
    ctx->pc = 0x7F213F84u;
    // 7F213F84: lwz     r4, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213F88:
    ctx->pc = 0x7F213F88u;
    // 7F213F88: lwz     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213F8C:
    ctx->pc = 0x7F213F8Cu;
    // 7F213F8C: and   r4, r4, r7
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[7];
    }

label_7F213F90:
    ctx->pc = 0x7F213F90u;
    // 7F213F90: and   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[6];
    }

label_7F213F94:
    ctx->pc = 0x7F213F94u;
    // 7F213F94: xor   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[6];
    }

label_7F213F98:
    ctx->pc = 0x7F213F98u;
    // 7F213F98: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F213F9C:
    ctx->pc = 0x7F213F9Cu;
    // 7F213F9C: or.   r0, r4, r0
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

label_7F213FA0:
    ctx->pc = 0x7F213FA0u;
    // 7F213FA0: bc    12, 2, 0x7F2140BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2140BC;
        }
    }

label_7F213FA4:
    ctx->pc = 0x7F213FA4u;
    ctx->downcount -= 3;
    // 7F213FA4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F213FA8:
    ctx->pc = 0x7F213FA8u;
    // 7F213FA8: rlwinm. r0, r0, 0, 31, 31
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

label_7F213FAC:
    ctx->pc = 0x7F213FACu;
    // 7F213FAC: bc    12, 2, 0x7F2140BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2140BC;
        }
    }

label_7F213FB0:
    ctx->pc = 0x7F213FB0u;
    ctx->downcount -= 9;
    // 7F213FB0: lwz     r4, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F213FB4:
    ctx->pc = 0x7F213FB4u;
    // 7F213FB4: lis     r0, 4096
    ctx->gpr[0] = ((u32)(s32)(4096) << 16);

label_7F213FB8:
    ctx->pc = 0x7F213FB8u;
    // 7F213FB8: lwz     r5, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F213FBC:
    ctx->pc = 0x7F213FBCu;
    // 7F213FBC: and   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[6];
    }

label_7F213FC0:
    ctx->pc = 0x7F213FC0u;
    // 7F213FC0: and   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F213FC4:
    ctx->pc = 0x7F213FC4u;
    // 7F213FC4: xor   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[6];
    }

label_7F213FC8:
    ctx->pc = 0x7F213FC8u;
    // 7F213FC8: xor   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[6];
    }

label_7F213FCC:
    ctx->pc = 0x7F213FCCu;
    // 7F213FCC: or.   r0, r4, r0
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

label_7F213FD0:
    ctx->pc = 0x7F213FD0u;
    // 7F213FD0: bc    12, 2, 0x7F213FDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F213FDC;
        }
    }

label_7F213FD4:
    ctx->pc = 0x7F213FD4u;
    ctx->downcount -= 2;
    // 7F213FD4: stw     r6, 760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(760);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F213FD8:
    ctx->pc = 0x7F213FD8u;
    // 7F213FD8: b       0x7F213FE0
    {
            goto label_7F213FE0;
    }

label_7F213FDC:
    ctx->pc = 0x7F213FDCu;
    ctx->downcount -= 1;
    // 7F213FDC: stw     r7, 760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(760);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F213FE0:
    ctx->pc = 0x7F213FE0u;
    ctx->downcount -= 12;
    // 7F213FE0: lis     r4, 13
    ctx->gpr[4] = ((u32)(s32)(13) << 16);

label_7F213FE4:
    ctx->pc = 0x7F213FE4u;
    // 7F213FE4: lwz     r7, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F213FE8:
    ctx->pc = 0x7F213FE8u;
    // 7F213FE8: lis     r6, 8
    ctx->gpr[6] = ((u32)(s32)(8) << 16);

label_7F213FEC:
    ctx->pc = 0x7F213FECu;
    // 7F213FEC: lwz     r8, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F213FF0:
    ctx->pc = 0x7F213FF0u;
    // 7F213FF0: addi    r0, r4, -32738
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-32738);

label_7F213FF4:
    ctx->pc = 0x7F213FF4u;
    // 7F213FF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F213FF8:
    ctx->pc = 0x7F213FF8u;
    // 7F213FF8: and   r0, r8, r0
    {
        ctx->gpr[0] = ctx->gpr[8] & ctx->gpr[0];
    }

label_7F213FFC:
    ctx->pc = 0x7F213FFCu;
    // 7F213FFC: and   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] & ctx->gpr[6];
    }

label_7F214000:
    ctx->pc = 0x7F214000u;
    // 7F214000: xor   r4, r0, r5
    {
        ctx->gpr[4] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F214004:
    ctx->pc = 0x7F214004u;
    // 7F214004: xor   r0, r6, r5
    {
        ctx->gpr[0] = ctx->gpr[6] ^ ctx->gpr[5];
    }

label_7F214008:
    ctx->pc = 0x7F214008u;
    // 7F214008: or.   r0, r4, r0
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

label_7F21400C:
    ctx->pc = 0x7F21400Cu;
    // 7F21400C: bc    12, 2, 0x7F21406C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F21406C;
        }
    }

label_7F214010:
    ctx->pc = 0x7F214010u;
    ctx->downcount -= 7;
    // 7F214010: lis     r4, 5
    ctx->gpr[4] = ((u32)(s32)(5) << 16);

label_7F214014:
    ctx->pc = 0x7F214014u;
    // 7F214014: xor   r0, r6, r5
    {
        ctx->gpr[0] = ctx->gpr[6] ^ ctx->gpr[5];
    }

label_7F214018:
    ctx->pc = 0x7F214018u;
    // 7F214018: addi    r4, r4, -32740
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32740);

label_7F21401C:
    ctx->pc = 0x7F21401Cu;
    // 7F21401C: and   r4, r8, r4
    {
        ctx->gpr[4] = ctx->gpr[8] & ctx->gpr[4];
    }

label_7F214020:
    ctx->pc = 0x7F214020u;
    // 7F214020: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F214024:
    ctx->pc = 0x7F214024u;
    // 7F214024: or.   r0, r4, r0
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

label_7F214028:
    ctx->pc = 0x7F214028u;
    // 7F214028: bc    12, 2, 0x7F214044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F214044;
        }
    }

label_7F21402C:
    ctx->pc = 0x7F21402Cu;
    ctx->downcount -= 3;
    // 7F21402C: lbz     r0, 2009(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2009);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F214030:
    ctx->pc = 0x7F214030u;
    // 7F214030: cmpwi   r0, 1
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

label_7F214034:
    ctx->pc = 0x7F214034u;
    // 7F214034: bc    12, 2, 0x7F214044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F214044;
        }
    }

label_7F214038:
    ctx->pc = 0x7F214038u;
    ctx->downcount -= 3;
    // 7F214038: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F21403C:
    ctx->pc = 0x7F21403Cu;
    // 7F21403C: stw     r0, 780(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(780);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F214040:
    ctx->pc = 0x7F214040u;
    // 7F214040: b       0x7F2140BC
    {
            goto label_7F2140BC;
    }

label_7F214044:
    ctx->pc = 0x7F214044u;
    ctx->downcount -= 3;
    // 7F214044: lwz     r4, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F214048:
    ctx->pc = 0x7F214048u;
    // 7F214048: cmplwi  r4, 0x0000
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

label_7F21404C:
    ctx->pc = 0x7F21404Cu;
    // 7F21404C: bc    12, 2, 0x7F2140BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2140BC;
        }
    }

label_7F214050:
    ctx->pc = 0x7F214050u;
    ctx->downcount -= 2;
    // 7F214050: addi    r3, r30, 128
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(128);

label_7F214054:
    ctx->pc = 0x7F214054u;
    // 7F214054: bl      0x7F213B78
    {
            ctx->lr = 0x7F214058u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F213B78u;
                return;
            }
            goto label_7F213B78;
    }

label_7F214058:
    ctx->pc = 0x7F214058u;
    ctx->downcount -= 4;
    // 7F214058: addi    r4, r31, 688
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(688);

label_7F21405C:
    ctx->pc = 0x7F21405Cu;
    // 7F21405C: li      r3, 40
    ctx->gpr[3] = (u32)(s32)(40);

label_7F214060:
    ctx->pc = 0x7F214060u;
    // 7F214060: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F214064:
    ctx->pc = 0x7F214064u;
    // 7F214064: bl      0x7F0117B8
    {
            ctx->lr = 0x7F214068u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F214068:
    ctx->pc = 0x7F214068u;
    ctx->downcount -= 1;
    // 7F214068: b       0x7F2140BC
    {
            goto label_7F2140BC;
    }

label_7F21406C:
    ctx->pc = 0x7F21406Cu;
    ctx->downcount -= 8;
    // 7F21406C: lis     r3, 2
    ctx->gpr[3] = ((u32)(s32)(2) << 16);

label_7F214070:
    ctx->pc = 0x7F214070u;
    // 7F214070: and   r0, r7, r5
    {
        ctx->gpr[0] = ctx->gpr[7] & ctx->gpr[5];
    }

label_7F214074:
    ctx->pc = 0x7F214074u;
    // 7F214074: addi    r3, r3, 992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(992);

label_7F214078:
    ctx->pc = 0x7F214078u;
    // 7F214078: and   r3, r8, r3
    {
        ctx->gpr[3] = ctx->gpr[8] & ctx->gpr[3];
    }

label_7F21407C:
    ctx->pc = 0x7F21407Cu;
    // 7F21407C: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F214080:
    ctx->pc = 0x7F214080u;
    // 7F214080: xor   r3, r3, r5
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F214084:
    ctx->pc = 0x7F214084u;
    // 7F214084: or.   r0, r3, r0
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

label_7F214088:
    ctx->pc = 0x7F214088u;
    // 7F214088: bc    12, 2, 0x7F2140BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2140BC;
        }
    }

label_7F21408C:
    ctx->pc = 0x7F21408Cu;
    ctx->downcount -= 3;
    // 7F21408C: lbz     r0, 2009(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2009);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F214090:
    ctx->pc = 0x7F214090u;
    // 7F214090: cmpwi   r0, 1
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

label_7F214094:
    ctx->pc = 0x7F214094u;
    // 7F214094: bc    12, 2, 0x7F2140BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2140BC;
        }
    }

label_7F214098:
    ctx->pc = 0x7F214098u;
    ctx->downcount -= 3;
    // 7F214098: lwz     r0, 780(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(780);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F21409C:
    ctx->pc = 0x7F21409Cu;
    // 7F21409C: cmpwi   r0, 2
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

label_7F2140A0:
    ctx->pc = 0x7F2140A0u;
    // 7F2140A0: bc    12, 2, 0x7F2140BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2140BC;
        }
    }

label_7F2140A4:
    ctx->pc = 0x7F2140A4u;
    ctx->downcount -= 4;
    // 7F2140A4: addi    r4, r31, 688
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(688);

label_7F2140A8:
    ctx->pc = 0x7F2140A8u;
    // 7F2140A8: li      r3, 78
    ctx->gpr[3] = (u32)(s32)(78);

label_7F2140AC:
    ctx->pc = 0x7F2140ACu;
    // 7F2140AC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2140B0:
    ctx->pc = 0x7F2140B0u;
    // 7F2140B0: bl      0x7F0117B8
    {
            ctx->lr = 0x7F2140B4u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F2140B4:
    ctx->pc = 0x7F2140B4u;
    ctx->downcount -= 2;
    // 7F2140B4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2140B8:
    ctx->pc = 0x7F2140B8u;
    // 7F2140B8: stw     r0, 780(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(780);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2140BC:
    ctx->pc = 0x7F2140BCu;
    ctx->downcount -= 19;
    // 7F2140BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2140C0:
    ctx->pc = 0x7F2140C0u;
    // 7F2140C0: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2140C4:
    ctx->pc = 0x7F2140C4u;
    // 7F2140C4: stw     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2140C8:
    ctx->pc = 0x7F2140C8u;
    // 7F2140C8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2140CC:
    ctx->pc = 0x7F2140CCu;
    // 7F2140CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2140D0:
    ctx->pc = 0x7F2140D0u;
    // 7F2140D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2140D4:
    ctx->pc = 0x7F2140D4u;
    // 7F2140D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2140D8:
    ctx->pc = 0x7F2140D8u;
    // 7F2140D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2100EC;
        }
    }

label_7F2140DC:
    ctx->pc = 0x7F2140DCu;
    ctx->downcount -= 4;
    // 7F2140DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2140E0:
    ctx->pc = 0x7F2140E0u;
    // 7F2140E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2140E4:
    ctx->pc = 0x7F2140E4u;
    // 7F2140E4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_7F2140E8:
    ctx->pc = 0x7F2140E8u;
    // 7F2140E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

    ctx->pc = 0x7F2140ECu;
    return;
return_dispatch_7F2100EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F2100F0u: goto label_7F2100F0;
    case 0x7F2100FCu: goto label_7F2100FC;
    case 0x7F210114u: goto label_7F210114;
    case 0x7F210120u: goto label_7F210120;
    case 0x7F210138u: goto label_7F210138;
    case 0x7F210144u: goto label_7F210144;
    case 0x7F210224u: goto label_7F210224;
    case 0x7F210294u: goto label_7F210294;
    case 0x7F21029Cu: goto label_7F21029C;
    case 0x7F2102F4u: goto label_7F2102F4;
    case 0x7F21030Cu: goto label_7F21030C;
    case 0x7F21032Cu: goto label_7F21032C;
    case 0x7F210338u: goto label_7F210338;
    case 0x7F21034Cu: goto label_7F21034C;
    case 0x7F210354u: goto label_7F210354;
    case 0x7F21035Cu: goto label_7F21035C;
    case 0x7F210398u: goto label_7F210398;
    case 0x7F2103DCu: goto label_7F2103DC;
    case 0x7F210420u: goto label_7F210420;
    case 0x7F210464u: goto label_7F210464;
    case 0x7F2104ACu: goto label_7F2104AC;
    case 0x7F2104C8u: goto label_7F2104C8;
    case 0x7F2104D8u: goto label_7F2104D8;
    case 0x7F2104E8u: goto label_7F2104E8;
    case 0x7F2105D4u: goto label_7F2105D4;
    case 0x7F210644u: goto label_7F210644;
    case 0x7F210678u: goto label_7F210678;
    case 0x7F21069Cu: goto label_7F21069C;
    case 0x7F210758u: goto label_7F210758;
    case 0x7F210768u: goto label_7F210768;
    case 0x7F21077Cu: goto label_7F21077C;
    case 0x7F210784u: goto label_7F210784;
    case 0x7F2107B8u: goto label_7F2107B8;
    case 0x7F2107ECu: goto label_7F2107EC;
    case 0x7F2108C0u: goto label_7F2108C0;
    case 0x7F2108E4u: goto label_7F2108E4;
    case 0x7F210930u: goto label_7F210930;
    case 0x7F210950u: goto label_7F210950;
    case 0x7F21095Cu: goto label_7F21095C;
    case 0x7F210990u: goto label_7F210990;
    case 0x7F2109B4u: goto label_7F2109B4;
    case 0x7F2109F0u: goto label_7F2109F0;
    case 0x7F2109F8u: goto label_7F2109F8;
    case 0x7F210A48u: goto label_7F210A48;
    case 0x7F210AACu: goto label_7F210AAC;
    case 0x7F210AD0u: goto label_7F210AD0;
    case 0x7F210AE4u: goto label_7F210AE4;
    case 0x7F210AFCu: goto label_7F210AFC;
    case 0x7F210B10u: goto label_7F210B10;
    case 0x7F210B38u: goto label_7F210B38;
    case 0x7F210B5Cu: goto label_7F210B5C;
    case 0x7F210B90u: goto label_7F210B90;
    case 0x7F210BD8u: goto label_7F210BD8;
    case 0x7F210BE0u: goto label_7F210BE0;
    case 0x7F210BE8u: goto label_7F210BE8;
    case 0x7F210BF0u: goto label_7F210BF0;
    case 0x7F210BF8u: goto label_7F210BF8;
    case 0x7F210CA8u: goto label_7F210CA8;
    case 0x7F210CD4u: goto label_7F210CD4;
    case 0x7F210CF8u: goto label_7F210CF8;
    case 0x7F210D1Cu: goto label_7F210D1C;
    case 0x7F210D74u: goto label_7F210D74;
    case 0x7F210D98u: goto label_7F210D98;
    case 0x7F210DBCu: goto label_7F210DBC;
    case 0x7F210DF0u: goto label_7F210DF0;
    case 0x7F210E20u: goto label_7F210E20;
    case 0x7F210E2Cu: goto label_7F210E2C;
    case 0x7F210E48u: goto label_7F210E48;
    case 0x7F210E50u: goto label_7F210E50;
    case 0x7F210E88u: goto label_7F210E88;
    case 0x7F210E90u: goto label_7F210E90;
    case 0x7F210EBCu: goto label_7F210EBC;
    case 0x7F210EC4u: goto label_7F210EC4;
    case 0x7F210EE0u: goto label_7F210EE0;
    case 0x7F210F5Cu: goto label_7F210F5C;
    case 0x7F210F6Cu: goto label_7F210F6C;
    case 0x7F210F8Cu: goto label_7F210F8C;
    case 0x7F210FC4u: goto label_7F210FC4;
    case 0x7F210FCCu: goto label_7F210FCC;
    case 0x7F210FD4u: goto label_7F210FD4;
    case 0x7F211008u: goto label_7F211008;
    case 0x7F211014u: goto label_7F211014;
    case 0x7F21113Cu: goto label_7F21113C;
    case 0x7F211160u: goto label_7F211160;
    case 0x7F21118Cu: goto label_7F21118C;
    case 0x7F2111A4u: goto label_7F2111A4;
    case 0x7F2111C4u: goto label_7F2111C4;
    case 0x7F2111D0u: goto label_7F2111D0;
    case 0x7F2111E4u: goto label_7F2111E4;
    case 0x7F2111ECu: goto label_7F2111EC;
    case 0x7F21125Cu: goto label_7F21125C;
    case 0x7F211264u: goto label_7F211264;
    case 0x7F2112A8u: goto label_7F2112A8;
    case 0x7F2112C4u: goto label_7F2112C4;
    case 0x7F2112D4u: goto label_7F2112D4;
    case 0x7F2112E4u: goto label_7F2112E4;
    case 0x7F21136Cu: goto label_7F21136C;
    case 0x7F211450u: goto label_7F211450;
    case 0x7F21145Cu: goto label_7F21145C;
    case 0x7F211464u: goto label_7F211464;
    case 0x7F21149Cu: goto label_7F21149C;
    case 0x7F211508u: goto label_7F211508;
    case 0x7F2115E8u: goto label_7F2115E8;
    case 0x7F21160Cu: goto label_7F21160C;
    case 0x7F211618u: goto label_7F211618;
    case 0x7F211668u: goto label_7F211668;
    case 0x7F2116A8u: goto label_7F2116A8;
    case 0x7F2116D0u: goto label_7F2116D0;
    case 0x7F2117B0u: goto label_7F2117B0;
    case 0x7F2117C0u: goto label_7F2117C0;
    case 0x7F2117D4u: goto label_7F2117D4;
    case 0x7F2117DCu: goto label_7F2117DC;
    case 0x7F211810u: goto label_7F211810;
    case 0x7F211848u: goto label_7F211848;
    case 0x7F211904u: goto label_7F211904;
    case 0x7F211910u: goto label_7F211910;
    case 0x7F211928u: goto label_7F211928;
    case 0x7F211944u: goto label_7F211944;
    case 0x7F211984u: goto label_7F211984;
    case 0x7F2119A8u: goto label_7F2119A8;
    case 0x7F211AC4u: goto label_7F211AC4;
    case 0x7F211AE8u: goto label_7F211AE8;
    case 0x7F211B1Cu: goto label_7F211B1C;
    case 0x7F211B2Cu: goto label_7F211B2C;
    case 0x7F211B40u: goto label_7F211B40;
    case 0x7F211B48u: goto label_7F211B48;
    case 0x7F211B7Cu: goto label_7F211B7C;
    case 0x7F211C30u: goto label_7F211C30;
    case 0x7F211CC0u: goto label_7F211CC0;
    case 0x7F211CF4u: goto label_7F211CF4;
    case 0x7F211D14u: goto label_7F211D14;
    case 0x7F211D20u: goto label_7F211D20;
    case 0x7F211D50u: goto label_7F211D50;
    case 0x7F211D74u: goto label_7F211D74;
    case 0x7F211DD0u: goto label_7F211DD0;
    case 0x7F211E00u: goto label_7F211E00;
    case 0x7F211E10u: goto label_7F211E10;
    case 0x7F211E80u: goto label_7F211E80;
    case 0x7F211EB0u: goto label_7F211EB0;
    case 0x7F211F20u: goto label_7F211F20;
    case 0x7F211F4Cu: goto label_7F211F4C;
    case 0x7F211F58u: goto label_7F211F58;
    case 0x7F211F64u: goto label_7F211F64;
    case 0x7F211F70u: goto label_7F211F70;
    case 0x7F211F7Cu: goto label_7F211F7C;
    case 0x7F211F88u: goto label_7F211F88;
    case 0x7F211F94u: goto label_7F211F94;
    case 0x7F212040u: goto label_7F212040;
    case 0x7F21206Cu: goto label_7F21206C;
    case 0x7F212074u: goto label_7F212074;
    case 0x7F21207Cu: goto label_7F21207C;
    case 0x7F212090u: goto label_7F212090;
    case 0x7F21209Cu: goto label_7F21209C;
    case 0x7F2120C4u: goto label_7F2120C4;
    case 0x7F2120D8u: goto label_7F2120D8;
    case 0x7F2120E4u: goto label_7F2120E4;
    case 0x7F2120F0u: goto label_7F2120F0;
    case 0x7F2120F8u: goto label_7F2120F8;
    case 0x7F212154u: goto label_7F212154;
    case 0x7F212178u: goto label_7F212178;
    case 0x7F21219Cu: goto label_7F21219C;
    case 0x7F2121FCu: goto label_7F2121FC;
    case 0x7F212220u: goto label_7F212220;
    case 0x7F212244u: goto label_7F212244;
    case 0x7F212278u: goto label_7F212278;
    case 0x7F2122A8u: goto label_7F2122A8;
    case 0x7F2122B4u: goto label_7F2122B4;
    case 0x7F212338u: goto label_7F212338;
    case 0x7F21234Cu: goto label_7F21234C;
    case 0x7F212360u: goto label_7F212360;
    case 0x7F212374u: goto label_7F212374;
    case 0x7F212384u: goto label_7F212384;
    case 0x7F2123D0u: goto label_7F2123D0;
    case 0x7F2123ECu: goto label_7F2123EC;
    case 0x7F2124C0u: goto label_7F2124C0;
    case 0x7F2124D0u: goto label_7F2124D0;
    case 0x7F2124DCu: goto label_7F2124DC;
    case 0x7F2124E4u: goto label_7F2124E4;
    case 0x7F2124ECu: goto label_7F2124EC;
    case 0x7F212500u: goto label_7F212500;
    case 0x7F21250Cu: goto label_7F21250C;
    case 0x7F212534u: goto label_7F212534;
    case 0x7F212570u: goto label_7F212570;
    case 0x7F212578u: goto label_7F212578;
    case 0x7F2125A4u: goto label_7F2125A4;
    case 0x7F2125ACu: goto label_7F2125AC;
    case 0x7F2125C8u: goto label_7F2125C8;
    case 0x7F212640u: goto label_7F212640;
    case 0x7F212650u: goto label_7F212650;
    case 0x7F212684u: goto label_7F212684;
    case 0x7F212694u: goto label_7F212694;
    case 0x7F2126B8u: goto label_7F2126B8;
    case 0x7F2126C8u: goto label_7F2126C8;
    case 0x7F212730u: goto label_7F212730;
    case 0x7F212738u: goto label_7F212738;
    case 0x7F212740u: goto label_7F212740;
    case 0x7F212748u: goto label_7F212748;
    case 0x7F2128DCu: goto label_7F2128DC;
    case 0x7F212900u: goto label_7F212900;
    case 0x7F21292Cu: goto label_7F21292C;
    case 0x7F212944u: goto label_7F212944;
    case 0x7F212964u: goto label_7F212964;
    case 0x7F212970u: goto label_7F212970;
    case 0x7F212984u: goto label_7F212984;
    case 0x7F21298Cu: goto label_7F21298C;
    case 0x7F2129A0u: goto label_7F2129A0;
    case 0x7F2129BCu: goto label_7F2129BC;
    case 0x7F212A2Cu: goto label_7F212A2C;
    case 0x7F212A34u: goto label_7F212A34;
    case 0x7F212A44u: goto label_7F212A44;
    case 0x7F212A5Cu: goto label_7F212A5C;
    case 0x7F212A70u: goto label_7F212A70;
    case 0x7F212A7Cu: goto label_7F212A7C;
    case 0x7F212A8Cu: goto label_7F212A8C;
    case 0x7F212AA4u: goto label_7F212AA4;
    case 0x7F212AF8u: goto label_7F212AF8;
    case 0x7F212B3Cu: goto label_7F212B3C;
    case 0x7F212B80u: goto label_7F212B80;
    case 0x7F212BC4u: goto label_7F212BC4;
    case 0x7F212C18u: goto label_7F212C18;
    case 0x7F212C34u: goto label_7F212C34;
    case 0x7F212C50u: goto label_7F212C50;
    case 0x7F212C60u: goto label_7F212C60;
    case 0x7F212C94u: goto label_7F212C94;
    case 0x7F212CFCu: goto label_7F212CFC;
    case 0x7F212D28u: goto label_7F212D28;
    case 0x7F212D30u: goto label_7F212D30;
    case 0x7F212D38u: goto label_7F212D38;
    case 0x7F212DA8u: goto label_7F212DA8;
    case 0x7F212DB0u: goto label_7F212DB0;
    case 0x7F212DD4u: goto label_7F212DD4;
    case 0x7F212DDCu: goto label_7F212DDC;
    case 0x7F212E1Cu: goto label_7F212E1C;
    case 0x7F212E34u: goto label_7F212E34;
    case 0x7F212E3Cu: goto label_7F212E3C;
    case 0x7F212E48u: goto label_7F212E48;
    case 0x7F212E70u: goto label_7F212E70;
    case 0x7F212E98u: goto label_7F212E98;
    case 0x7F212ED0u: goto label_7F212ED0;
    case 0x7F212EF4u: goto label_7F212EF4;
    case 0x7F212F00u: goto label_7F212F00;
    case 0x7F212F20u: goto label_7F212F20;
    case 0x7F212F2Cu: goto label_7F212F2C;
    case 0x7F212F34u: goto label_7F212F34;
    case 0x7F212F58u: goto label_7F212F58;
    case 0x7F212F64u: goto label_7F212F64;
    case 0x7F212F6Cu: goto label_7F212F6C;
    case 0x7F212FA8u: goto label_7F212FA8;
    case 0x7F212FB8u: goto label_7F212FB8;
    case 0x7F212FECu: goto label_7F212FEC;
    case 0x7F212FF4u: goto label_7F212FF4;
    case 0x7F213034u: goto label_7F213034;
    case 0x7F213050u: goto label_7F213050;
    case 0x7F213060u: goto label_7F213060;
    case 0x7F213070u: goto label_7F213070;
    case 0x7F2130DCu: goto label_7F2130DC;
    case 0x7F213104u: goto label_7F213104;
    case 0x7F213128u: goto label_7F213128;
    case 0x7F213164u: goto label_7F213164;
    case 0x7F21316Cu: goto label_7F21316C;
    case 0x7F213178u: goto label_7F213178;
    case 0x7F213184u: goto label_7F213184;
    case 0x7F213194u: goto label_7F213194;
    case 0x7F2131A4u: goto label_7F2131A4;
    case 0x7F2131ACu: goto label_7F2131AC;
    case 0x7F2131BCu: goto label_7F2131BC;
    case 0x7F213204u: goto label_7F213204;
    case 0x7F21323Cu: goto label_7F21323C;
    case 0x7F213248u: goto label_7F213248;
    case 0x7F213254u: goto label_7F213254;
    case 0x7F213260u: goto label_7F213260;
    case 0x7F21326Cu: goto label_7F21326C;
    case 0x7F213278u: goto label_7F213278;
    case 0x7F213284u: goto label_7F213284;
    case 0x7F213290u: goto label_7F213290;
    case 0x7F21329Cu: goto label_7F21329C;
    case 0x7F2132A8u: goto label_7F2132A8;
    case 0x7F2132B4u: goto label_7F2132B4;
    case 0x7F2132C0u: goto label_7F2132C0;
    case 0x7F2132CCu: goto label_7F2132CC;
    case 0x7F2132D8u: goto label_7F2132D8;
    case 0x7F2132E0u: goto label_7F2132E0;
    case 0x7F2132ECu: goto label_7F2132EC;
    case 0x7F213344u: goto label_7F213344;
    case 0x7F2133F0u: goto label_7F2133F0;
    case 0x7F2133FCu: goto label_7F2133FC;
    case 0x7F213424u: goto label_7F213424;
    case 0x7F213458u: goto label_7F213458;
    case 0x7F213464u: goto label_7F213464;
    case 0x7F213490u: goto label_7F213490;
    case 0x7F2134C0u: goto label_7F2134C0;
    case 0x7F2134E8u: goto label_7F2134E8;
    case 0x7F213534u: goto label_7F213534;
    case 0x7F213550u: goto label_7F213550;
    case 0x7F213558u: goto label_7F213558;
    case 0x7F213560u: goto label_7F213560;
    case 0x7F21358Cu: goto label_7F21358C;
    case 0x7F2135C4u: goto label_7F2135C4;
    case 0x7F2135D4u: goto label_7F2135D4;
    case 0x7F2135DCu: goto label_7F2135DC;
    case 0x7F2135E8u: goto label_7F2135E8;
    case 0x7F2135F4u: goto label_7F2135F4;
    case 0x7F213650u: goto label_7F213650;
    case 0x7F2136ACu: goto label_7F2136AC;
    case 0x7F213704u: goto label_7F213704;
    case 0x7F213720u: goto label_7F213720;
    case 0x7F213760u: goto label_7F213760;
    case 0x7F213770u: goto label_7F213770;
    case 0x7F2137C0u: goto label_7F2137C0;
    case 0x7F2137C8u: goto label_7F2137C8;
    case 0x7F2137ECu: goto label_7F2137EC;
    case 0x7F2137FCu: goto label_7F2137FC;
    case 0x7F213848u: goto label_7F213848;
    case 0x7F213850u: goto label_7F213850;
    case 0x7F21386Cu: goto label_7F21386C;
    case 0x7F213878u: goto label_7F213878;
    case 0x7F213894u: goto label_7F213894;
    case 0x7F2138A0u: goto label_7F2138A0;
    case 0x7F2138F4u: goto label_7F2138F4;
    case 0x7F21392Cu: goto label_7F21392C;
    case 0x7F213948u: goto label_7F213948;
    case 0x7F213B10u: goto label_7F213B10;
    case 0x7F213B28u: goto label_7F213B28;
    case 0x7F213B98u: goto label_7F213B98;
    case 0x7F213BA4u: goto label_7F213BA4;
    case 0x7F213BACu: goto label_7F213BAC;
    case 0x7F213BB4u: goto label_7F213BB4;
    case 0x7F213BF0u: goto label_7F213BF0;
    case 0x7F213C04u: goto label_7F213C04;
    case 0x7F213C10u: goto label_7F213C10;
    case 0x7F213C4Cu: goto label_7F213C4C;
    case 0x7F213C64u: goto label_7F213C64;
    case 0x7F213C70u: goto label_7F213C70;
    case 0x7F213D20u: goto label_7F213D20;
    case 0x7F213D34u: goto label_7F213D34;
    case 0x7F213D40u: goto label_7F213D40;
    case 0x7F213D5Cu: goto label_7F213D5C;
    case 0x7F213D6Cu: goto label_7F213D6C;
    case 0x7F213D80u: goto label_7F213D80;
    case 0x7F213DF0u: goto label_7F213DF0;
    case 0x7F213DFCu: goto label_7F213DFC;
    case 0x7F213E08u: goto label_7F213E08;
    case 0x7F213E70u: goto label_7F213E70;
    case 0x7F213F34u: goto label_7F213F34;
    case 0x7F213F44u: goto label_7F213F44;
    case 0x7F214058u: goto label_7F214058;
    case 0x7F214068u: goto label_7F214068;
    case 0x7F2140B4u: goto label_7F2140B4;
    default: return;
    }
}

