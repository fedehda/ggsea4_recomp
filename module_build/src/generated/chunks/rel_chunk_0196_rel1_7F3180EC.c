// DolRecomp output
#include "../generated.h"

static void loop_7F318C60(CPUState* ctx) {
label_7F318C60:
    ctx->downcount -= 2;
    // 7F318C60: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

    // 7F318C64: bc    16, 0, 0x7F318C60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F318C60u;
                return;
            }
            goto label_7F318C60;
        }
    }

    ctx->pc = 0x7F318C68u;
}

void func_7F3180EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F3180ECu: goto label_7F3180EC;
    case 0x7F3180F0u: goto label_7F3180F0;
    case 0x7F3180F4u: goto label_7F3180F4;
    case 0x7F3180F8u: goto label_7F3180F8;
    case 0x7F3180FCu: goto label_7F3180FC;
    case 0x7F318100u: goto label_7F318100;
    case 0x7F318104u: goto label_7F318104;
    case 0x7F318108u: goto label_7F318108;
    case 0x7F31810Cu: goto label_7F31810C;
    case 0x7F318110u: goto label_7F318110;
    case 0x7F318114u: goto label_7F318114;
    case 0x7F318118u: goto label_7F318118;
    case 0x7F31811Cu: goto label_7F31811C;
    case 0x7F318120u: goto label_7F318120;
    case 0x7F318124u: goto label_7F318124;
    case 0x7F318128u: goto label_7F318128;
    case 0x7F31812Cu: goto label_7F31812C;
    case 0x7F318130u: goto label_7F318130;
    case 0x7F318134u: goto label_7F318134;
    case 0x7F318138u: goto label_7F318138;
    case 0x7F31813Cu: goto label_7F31813C;
    case 0x7F318140u: goto label_7F318140;
    case 0x7F318144u: goto label_7F318144;
    case 0x7F318148u: goto label_7F318148;
    case 0x7F31814Cu: goto label_7F31814C;
    case 0x7F318150u: goto label_7F318150;
    case 0x7F318154u: goto label_7F318154;
    case 0x7F318158u: goto label_7F318158;
    case 0x7F31815Cu: goto label_7F31815C;
    case 0x7F318160u: goto label_7F318160;
    case 0x7F318164u: goto label_7F318164;
    case 0x7F318168u: goto label_7F318168;
    case 0x7F31816Cu: goto label_7F31816C;
    case 0x7F318170u: goto label_7F318170;
    case 0x7F318174u: goto label_7F318174;
    case 0x7F318178u: goto label_7F318178;
    case 0x7F31817Cu: goto label_7F31817C;
    case 0x7F318180u: goto label_7F318180;
    case 0x7F318184u: goto label_7F318184;
    case 0x7F318188u: goto label_7F318188;
    case 0x7F31818Cu: goto label_7F31818C;
    case 0x7F318190u: goto label_7F318190;
    case 0x7F318194u: goto label_7F318194;
    case 0x7F318198u: goto label_7F318198;
    case 0x7F31819Cu: goto label_7F31819C;
    case 0x7F3181A0u: goto label_7F3181A0;
    case 0x7F3181A4u: goto label_7F3181A4;
    case 0x7F3181A8u: goto label_7F3181A8;
    case 0x7F3181ACu: goto label_7F3181AC;
    case 0x7F3181B0u: goto label_7F3181B0;
    case 0x7F3181B4u: goto label_7F3181B4;
    case 0x7F3181B8u: goto label_7F3181B8;
    case 0x7F3181BCu: goto label_7F3181BC;
    case 0x7F3181C0u: goto label_7F3181C0;
    case 0x7F3181C4u: goto label_7F3181C4;
    case 0x7F3181C8u: goto label_7F3181C8;
    case 0x7F3181CCu: goto label_7F3181CC;
    case 0x7F3181D0u: goto label_7F3181D0;
    case 0x7F3181D4u: goto label_7F3181D4;
    case 0x7F3181D8u: goto label_7F3181D8;
    case 0x7F3181DCu: goto label_7F3181DC;
    case 0x7F3181E0u: goto label_7F3181E0;
    case 0x7F3181E4u: goto label_7F3181E4;
    case 0x7F3181E8u: goto label_7F3181E8;
    case 0x7F3181ECu: goto label_7F3181EC;
    case 0x7F3181F0u: goto label_7F3181F0;
    case 0x7F3181F4u: goto label_7F3181F4;
    case 0x7F3181F8u: goto label_7F3181F8;
    case 0x7F3181FCu: goto label_7F3181FC;
    case 0x7F318200u: goto label_7F318200;
    case 0x7F318204u: goto label_7F318204;
    case 0x7F318208u: goto label_7F318208;
    case 0x7F31820Cu: goto label_7F31820C;
    case 0x7F318210u: goto label_7F318210;
    case 0x7F318214u: goto label_7F318214;
    case 0x7F318218u: goto label_7F318218;
    case 0x7F31821Cu: goto label_7F31821C;
    case 0x7F318220u: goto label_7F318220;
    case 0x7F318224u: goto label_7F318224;
    case 0x7F318228u: goto label_7F318228;
    case 0x7F31822Cu: goto label_7F31822C;
    case 0x7F318230u: goto label_7F318230;
    case 0x7F318234u: goto label_7F318234;
    case 0x7F318238u: goto label_7F318238;
    case 0x7F31823Cu: goto label_7F31823C;
    case 0x7F318240u: goto label_7F318240;
    case 0x7F318244u: goto label_7F318244;
    case 0x7F318248u: goto label_7F318248;
    case 0x7F31824Cu: goto label_7F31824C;
    case 0x7F318250u: goto label_7F318250;
    case 0x7F318254u: goto label_7F318254;
    case 0x7F318258u: goto label_7F318258;
    case 0x7F31825Cu: goto label_7F31825C;
    case 0x7F318260u: goto label_7F318260;
    case 0x7F318264u: goto label_7F318264;
    case 0x7F318268u: goto label_7F318268;
    case 0x7F31826Cu: goto label_7F31826C;
    case 0x7F318270u: goto label_7F318270;
    case 0x7F318274u: goto label_7F318274;
    case 0x7F318278u: goto label_7F318278;
    case 0x7F31827Cu: goto label_7F31827C;
    case 0x7F318280u: goto label_7F318280;
    case 0x7F318284u: goto label_7F318284;
    case 0x7F318288u: goto label_7F318288;
    case 0x7F31828Cu: goto label_7F31828C;
    case 0x7F318290u: goto label_7F318290;
    case 0x7F318294u: goto label_7F318294;
    case 0x7F318298u: goto label_7F318298;
    case 0x7F31829Cu: goto label_7F31829C;
    case 0x7F3182A0u: goto label_7F3182A0;
    case 0x7F3182A4u: goto label_7F3182A4;
    case 0x7F3182A8u: goto label_7F3182A8;
    case 0x7F3182ACu: goto label_7F3182AC;
    case 0x7F3182B0u: goto label_7F3182B0;
    case 0x7F3182B4u: goto label_7F3182B4;
    case 0x7F3182B8u: goto label_7F3182B8;
    case 0x7F3182BCu: goto label_7F3182BC;
    case 0x7F3182C0u: goto label_7F3182C0;
    case 0x7F3182C4u: goto label_7F3182C4;
    case 0x7F3182C8u: goto label_7F3182C8;
    case 0x7F3182CCu: goto label_7F3182CC;
    case 0x7F3182D0u: goto label_7F3182D0;
    case 0x7F3182D4u: goto label_7F3182D4;
    case 0x7F3182D8u: goto label_7F3182D8;
    case 0x7F3182DCu: goto label_7F3182DC;
    case 0x7F3182E0u: goto label_7F3182E0;
    case 0x7F3182E4u: goto label_7F3182E4;
    case 0x7F3182E8u: goto label_7F3182E8;
    case 0x7F3182ECu: goto label_7F3182EC;
    case 0x7F3182F0u: goto label_7F3182F0;
    case 0x7F3182F4u: goto label_7F3182F4;
    case 0x7F3182F8u: goto label_7F3182F8;
    case 0x7F3182FCu: goto label_7F3182FC;
    case 0x7F318300u: goto label_7F318300;
    case 0x7F318304u: goto label_7F318304;
    case 0x7F318308u: goto label_7F318308;
    case 0x7F31830Cu: goto label_7F31830C;
    case 0x7F318310u: goto label_7F318310;
    case 0x7F318314u: goto label_7F318314;
    case 0x7F318318u: goto label_7F318318;
    case 0x7F31831Cu: goto label_7F31831C;
    case 0x7F318320u: goto label_7F318320;
    case 0x7F318324u: goto label_7F318324;
    case 0x7F318328u: goto label_7F318328;
    case 0x7F31832Cu: goto label_7F31832C;
    case 0x7F318330u: goto label_7F318330;
    case 0x7F318334u: goto label_7F318334;
    case 0x7F318338u: goto label_7F318338;
    case 0x7F31833Cu: goto label_7F31833C;
    case 0x7F318340u: goto label_7F318340;
    case 0x7F318344u: goto label_7F318344;
    case 0x7F318348u: goto label_7F318348;
    case 0x7F31834Cu: goto label_7F31834C;
    case 0x7F318350u: goto label_7F318350;
    case 0x7F318354u: goto label_7F318354;
    case 0x7F318358u: goto label_7F318358;
    case 0x7F31835Cu: goto label_7F31835C;
    case 0x7F318360u: goto label_7F318360;
    case 0x7F318364u: goto label_7F318364;
    case 0x7F318368u: goto label_7F318368;
    case 0x7F31836Cu: goto label_7F31836C;
    case 0x7F318370u: goto label_7F318370;
    case 0x7F318374u: goto label_7F318374;
    case 0x7F318378u: goto label_7F318378;
    case 0x7F31837Cu: goto label_7F31837C;
    case 0x7F318380u: goto label_7F318380;
    case 0x7F318384u: goto label_7F318384;
    case 0x7F318388u: goto label_7F318388;
    case 0x7F31838Cu: goto label_7F31838C;
    case 0x7F318390u: goto label_7F318390;
    case 0x7F318394u: goto label_7F318394;
    case 0x7F318398u: goto label_7F318398;
    case 0x7F31839Cu: goto label_7F31839C;
    case 0x7F3183A0u: goto label_7F3183A0;
    case 0x7F3183A4u: goto label_7F3183A4;
    case 0x7F3183A8u: goto label_7F3183A8;
    case 0x7F3183ACu: goto label_7F3183AC;
    case 0x7F3183B0u: goto label_7F3183B0;
    case 0x7F3183B4u: goto label_7F3183B4;
    case 0x7F3183B8u: goto label_7F3183B8;
    case 0x7F3183BCu: goto label_7F3183BC;
    case 0x7F3183C0u: goto label_7F3183C0;
    case 0x7F3183C4u: goto label_7F3183C4;
    case 0x7F3183C8u: goto label_7F3183C8;
    case 0x7F3183CCu: goto label_7F3183CC;
    case 0x7F3183D0u: goto label_7F3183D0;
    case 0x7F3183D4u: goto label_7F3183D4;
    case 0x7F3183D8u: goto label_7F3183D8;
    case 0x7F3183DCu: goto label_7F3183DC;
    case 0x7F3183E0u: goto label_7F3183E0;
    case 0x7F3183E4u: goto label_7F3183E4;
    case 0x7F3183E8u: goto label_7F3183E8;
    case 0x7F3183ECu: goto label_7F3183EC;
    case 0x7F3183F0u: goto label_7F3183F0;
    case 0x7F3183F4u: goto label_7F3183F4;
    case 0x7F3183F8u: goto label_7F3183F8;
    case 0x7F3183FCu: goto label_7F3183FC;
    case 0x7F318400u: goto label_7F318400;
    case 0x7F318404u: goto label_7F318404;
    case 0x7F318408u: goto label_7F318408;
    case 0x7F31840Cu: goto label_7F31840C;
    case 0x7F318410u: goto label_7F318410;
    case 0x7F318414u: goto label_7F318414;
    case 0x7F318418u: goto label_7F318418;
    case 0x7F31841Cu: goto label_7F31841C;
    case 0x7F318420u: goto label_7F318420;
    case 0x7F318424u: goto label_7F318424;
    case 0x7F318428u: goto label_7F318428;
    case 0x7F31842Cu: goto label_7F31842C;
    case 0x7F318430u: goto label_7F318430;
    case 0x7F318434u: goto label_7F318434;
    case 0x7F318438u: goto label_7F318438;
    case 0x7F31843Cu: goto label_7F31843C;
    case 0x7F318440u: goto label_7F318440;
    case 0x7F318444u: goto label_7F318444;
    case 0x7F318448u: goto label_7F318448;
    case 0x7F31844Cu: goto label_7F31844C;
    case 0x7F318450u: goto label_7F318450;
    case 0x7F318454u: goto label_7F318454;
    case 0x7F318458u: goto label_7F318458;
    case 0x7F31845Cu: goto label_7F31845C;
    case 0x7F318460u: goto label_7F318460;
    case 0x7F318464u: goto label_7F318464;
    case 0x7F318468u: goto label_7F318468;
    case 0x7F31846Cu: goto label_7F31846C;
    case 0x7F318470u: goto label_7F318470;
    case 0x7F318474u: goto label_7F318474;
    case 0x7F318478u: goto label_7F318478;
    case 0x7F31847Cu: goto label_7F31847C;
    case 0x7F318480u: goto label_7F318480;
    case 0x7F318484u: goto label_7F318484;
    case 0x7F318488u: goto label_7F318488;
    case 0x7F31848Cu: goto label_7F31848C;
    case 0x7F318490u: goto label_7F318490;
    case 0x7F318494u: goto label_7F318494;
    case 0x7F318498u: goto label_7F318498;
    case 0x7F31849Cu: goto label_7F31849C;
    case 0x7F3184A0u: goto label_7F3184A0;
    case 0x7F3184A4u: goto label_7F3184A4;
    case 0x7F3184A8u: goto label_7F3184A8;
    case 0x7F3184ACu: goto label_7F3184AC;
    case 0x7F3184B0u: goto label_7F3184B0;
    case 0x7F3184B4u: goto label_7F3184B4;
    case 0x7F3184B8u: goto label_7F3184B8;
    case 0x7F3184BCu: goto label_7F3184BC;
    case 0x7F3184C0u: goto label_7F3184C0;
    case 0x7F3184C4u: goto label_7F3184C4;
    case 0x7F3184C8u: goto label_7F3184C8;
    case 0x7F3184CCu: goto label_7F3184CC;
    case 0x7F3184D0u: goto label_7F3184D0;
    case 0x7F3184D4u: goto label_7F3184D4;
    case 0x7F3184D8u: goto label_7F3184D8;
    case 0x7F3184DCu: goto label_7F3184DC;
    case 0x7F3184E0u: goto label_7F3184E0;
    case 0x7F3184E4u: goto label_7F3184E4;
    case 0x7F3184E8u: goto label_7F3184E8;
    case 0x7F3184ECu: goto label_7F3184EC;
    case 0x7F3184F0u: goto label_7F3184F0;
    case 0x7F3184F4u: goto label_7F3184F4;
    case 0x7F3184F8u: goto label_7F3184F8;
    case 0x7F3184FCu: goto label_7F3184FC;
    case 0x7F318500u: goto label_7F318500;
    case 0x7F318504u: goto label_7F318504;
    case 0x7F318508u: goto label_7F318508;
    case 0x7F31850Cu: goto label_7F31850C;
    case 0x7F318510u: goto label_7F318510;
    case 0x7F318514u: goto label_7F318514;
    case 0x7F318518u: goto label_7F318518;
    case 0x7F31851Cu: goto label_7F31851C;
    case 0x7F318520u: goto label_7F318520;
    case 0x7F318524u: goto label_7F318524;
    case 0x7F318528u: goto label_7F318528;
    case 0x7F31852Cu: goto label_7F31852C;
    case 0x7F318530u: goto label_7F318530;
    case 0x7F318534u: goto label_7F318534;
    case 0x7F318538u: goto label_7F318538;
    case 0x7F31853Cu: goto label_7F31853C;
    case 0x7F318540u: goto label_7F318540;
    case 0x7F318544u: goto label_7F318544;
    case 0x7F318548u: goto label_7F318548;
    case 0x7F31854Cu: goto label_7F31854C;
    case 0x7F318550u: goto label_7F318550;
    case 0x7F318554u: goto label_7F318554;
    case 0x7F318558u: goto label_7F318558;
    case 0x7F31855Cu: goto label_7F31855C;
    case 0x7F318560u: goto label_7F318560;
    case 0x7F318564u: goto label_7F318564;
    case 0x7F318568u: goto label_7F318568;
    case 0x7F31856Cu: goto label_7F31856C;
    case 0x7F318570u: goto label_7F318570;
    case 0x7F318574u: goto label_7F318574;
    case 0x7F318578u: goto label_7F318578;
    case 0x7F31857Cu: goto label_7F31857C;
    case 0x7F318580u: goto label_7F318580;
    case 0x7F318584u: goto label_7F318584;
    case 0x7F318588u: goto label_7F318588;
    case 0x7F31858Cu: goto label_7F31858C;
    case 0x7F318590u: goto label_7F318590;
    case 0x7F318594u: goto label_7F318594;
    case 0x7F318598u: goto label_7F318598;
    case 0x7F31859Cu: goto label_7F31859C;
    case 0x7F3185A0u: goto label_7F3185A0;
    case 0x7F3185A4u: goto label_7F3185A4;
    case 0x7F3185A8u: goto label_7F3185A8;
    case 0x7F3185ACu: goto label_7F3185AC;
    case 0x7F3185B0u: goto label_7F3185B0;
    case 0x7F3185B4u: goto label_7F3185B4;
    case 0x7F3185B8u: goto label_7F3185B8;
    case 0x7F3185BCu: goto label_7F3185BC;
    case 0x7F3185C0u: goto label_7F3185C0;
    case 0x7F3185C4u: goto label_7F3185C4;
    case 0x7F3185C8u: goto label_7F3185C8;
    case 0x7F3185CCu: goto label_7F3185CC;
    case 0x7F3185D0u: goto label_7F3185D0;
    case 0x7F3185D4u: goto label_7F3185D4;
    case 0x7F3185D8u: goto label_7F3185D8;
    case 0x7F3185DCu: goto label_7F3185DC;
    case 0x7F3185E0u: goto label_7F3185E0;
    case 0x7F3185E4u: goto label_7F3185E4;
    case 0x7F3185E8u: goto label_7F3185E8;
    case 0x7F3185ECu: goto label_7F3185EC;
    case 0x7F3185F0u: goto label_7F3185F0;
    case 0x7F3185F4u: goto label_7F3185F4;
    case 0x7F3185F8u: goto label_7F3185F8;
    case 0x7F3185FCu: goto label_7F3185FC;
    case 0x7F318600u: goto label_7F318600;
    case 0x7F318604u: goto label_7F318604;
    case 0x7F318608u: goto label_7F318608;
    case 0x7F31860Cu: goto label_7F31860C;
    case 0x7F318610u: goto label_7F318610;
    case 0x7F318614u: goto label_7F318614;
    case 0x7F318618u: goto label_7F318618;
    case 0x7F31861Cu: goto label_7F31861C;
    case 0x7F318620u: goto label_7F318620;
    case 0x7F318624u: goto label_7F318624;
    case 0x7F318628u: goto label_7F318628;
    case 0x7F31862Cu: goto label_7F31862C;
    case 0x7F318630u: goto label_7F318630;
    case 0x7F318634u: goto label_7F318634;
    case 0x7F318638u: goto label_7F318638;
    case 0x7F31863Cu: goto label_7F31863C;
    case 0x7F318640u: goto label_7F318640;
    case 0x7F318644u: goto label_7F318644;
    case 0x7F318648u: goto label_7F318648;
    case 0x7F31864Cu: goto label_7F31864C;
    case 0x7F318650u: goto label_7F318650;
    case 0x7F318654u: goto label_7F318654;
    case 0x7F318658u: goto label_7F318658;
    case 0x7F31865Cu: goto label_7F31865C;
    case 0x7F318660u: goto label_7F318660;
    case 0x7F318664u: goto label_7F318664;
    case 0x7F318668u: goto label_7F318668;
    case 0x7F31866Cu: goto label_7F31866C;
    case 0x7F318670u: goto label_7F318670;
    case 0x7F318674u: goto label_7F318674;
    case 0x7F318678u: goto label_7F318678;
    case 0x7F31867Cu: goto label_7F31867C;
    case 0x7F318680u: goto label_7F318680;
    case 0x7F318684u: goto label_7F318684;
    case 0x7F318688u: goto label_7F318688;
    case 0x7F31868Cu: goto label_7F31868C;
    case 0x7F318690u: goto label_7F318690;
    case 0x7F318694u: goto label_7F318694;
    case 0x7F318698u: goto label_7F318698;
    case 0x7F31869Cu: goto label_7F31869C;
    case 0x7F3186A0u: goto label_7F3186A0;
    case 0x7F3186A4u: goto label_7F3186A4;
    case 0x7F3186A8u: goto label_7F3186A8;
    case 0x7F3186ACu: goto label_7F3186AC;
    case 0x7F3186B0u: goto label_7F3186B0;
    case 0x7F3186B4u: goto label_7F3186B4;
    case 0x7F3186B8u: goto label_7F3186B8;
    case 0x7F3186BCu: goto label_7F3186BC;
    case 0x7F3186C0u: goto label_7F3186C0;
    case 0x7F3186C4u: goto label_7F3186C4;
    case 0x7F3186C8u: goto label_7F3186C8;
    case 0x7F3186CCu: goto label_7F3186CC;
    case 0x7F3186D0u: goto label_7F3186D0;
    case 0x7F3186D4u: goto label_7F3186D4;
    case 0x7F3186D8u: goto label_7F3186D8;
    case 0x7F3186DCu: goto label_7F3186DC;
    case 0x7F3186E0u: goto label_7F3186E0;
    case 0x7F3186E4u: goto label_7F3186E4;
    case 0x7F3186E8u: goto label_7F3186E8;
    case 0x7F3186ECu: goto label_7F3186EC;
    case 0x7F3186F0u: goto label_7F3186F0;
    case 0x7F3186F4u: goto label_7F3186F4;
    case 0x7F3186F8u: goto label_7F3186F8;
    case 0x7F3186FCu: goto label_7F3186FC;
    case 0x7F318700u: goto label_7F318700;
    case 0x7F318704u: goto label_7F318704;
    case 0x7F318708u: goto label_7F318708;
    case 0x7F31870Cu: goto label_7F31870C;
    case 0x7F318710u: goto label_7F318710;
    case 0x7F318714u: goto label_7F318714;
    case 0x7F318718u: goto label_7F318718;
    case 0x7F31871Cu: goto label_7F31871C;
    case 0x7F318720u: goto label_7F318720;
    case 0x7F318724u: goto label_7F318724;
    case 0x7F318728u: goto label_7F318728;
    case 0x7F31872Cu: goto label_7F31872C;
    case 0x7F318730u: goto label_7F318730;
    case 0x7F318734u: goto label_7F318734;
    case 0x7F318738u: goto label_7F318738;
    case 0x7F31873Cu: goto label_7F31873C;
    case 0x7F318740u: goto label_7F318740;
    case 0x7F318744u: goto label_7F318744;
    case 0x7F318748u: goto label_7F318748;
    case 0x7F31874Cu: goto label_7F31874C;
    case 0x7F318750u: goto label_7F318750;
    case 0x7F318754u: goto label_7F318754;
    case 0x7F318758u: goto label_7F318758;
    case 0x7F31875Cu: goto label_7F31875C;
    case 0x7F318760u: goto label_7F318760;
    case 0x7F318764u: goto label_7F318764;
    case 0x7F318768u: goto label_7F318768;
    case 0x7F31876Cu: goto label_7F31876C;
    case 0x7F318770u: goto label_7F318770;
    case 0x7F318774u: goto label_7F318774;
    case 0x7F318778u: goto label_7F318778;
    case 0x7F31877Cu: goto label_7F31877C;
    case 0x7F318780u: goto label_7F318780;
    case 0x7F318784u: goto label_7F318784;
    case 0x7F318788u: goto label_7F318788;
    case 0x7F31878Cu: goto label_7F31878C;
    case 0x7F318790u: goto label_7F318790;
    case 0x7F318794u: goto label_7F318794;
    case 0x7F318798u: goto label_7F318798;
    case 0x7F31879Cu: goto label_7F31879C;
    case 0x7F3187A0u: goto label_7F3187A0;
    case 0x7F3187A4u: goto label_7F3187A4;
    case 0x7F3187A8u: goto label_7F3187A8;
    case 0x7F3187ACu: goto label_7F3187AC;
    case 0x7F3187B0u: goto label_7F3187B0;
    case 0x7F3187B4u: goto label_7F3187B4;
    case 0x7F3187B8u: goto label_7F3187B8;
    case 0x7F3187BCu: goto label_7F3187BC;
    case 0x7F3187C0u: goto label_7F3187C0;
    case 0x7F3187C4u: goto label_7F3187C4;
    case 0x7F3187C8u: goto label_7F3187C8;
    case 0x7F3187CCu: goto label_7F3187CC;
    case 0x7F3187D0u: goto label_7F3187D0;
    case 0x7F3187D4u: goto label_7F3187D4;
    case 0x7F3187D8u: goto label_7F3187D8;
    case 0x7F3187DCu: goto label_7F3187DC;
    case 0x7F3187E0u: goto label_7F3187E0;
    case 0x7F3187E4u: goto label_7F3187E4;
    case 0x7F3187E8u: goto label_7F3187E8;
    case 0x7F3187ECu: goto label_7F3187EC;
    case 0x7F3187F0u: goto label_7F3187F0;
    case 0x7F3187F4u: goto label_7F3187F4;
    case 0x7F3187F8u: goto label_7F3187F8;
    case 0x7F3187FCu: goto label_7F3187FC;
    case 0x7F318800u: goto label_7F318800;
    case 0x7F318804u: goto label_7F318804;
    case 0x7F318808u: goto label_7F318808;
    case 0x7F31880Cu: goto label_7F31880C;
    case 0x7F318810u: goto label_7F318810;
    case 0x7F318814u: goto label_7F318814;
    case 0x7F318818u: goto label_7F318818;
    case 0x7F31881Cu: goto label_7F31881C;
    case 0x7F318820u: goto label_7F318820;
    case 0x7F318824u: goto label_7F318824;
    case 0x7F318828u: goto label_7F318828;
    case 0x7F31882Cu: goto label_7F31882C;
    case 0x7F318830u: goto label_7F318830;
    case 0x7F318834u: goto label_7F318834;
    case 0x7F318838u: goto label_7F318838;
    case 0x7F31883Cu: goto label_7F31883C;
    case 0x7F318840u: goto label_7F318840;
    case 0x7F318844u: goto label_7F318844;
    case 0x7F318848u: goto label_7F318848;
    case 0x7F31884Cu: goto label_7F31884C;
    case 0x7F318850u: goto label_7F318850;
    case 0x7F318854u: goto label_7F318854;
    case 0x7F318858u: goto label_7F318858;
    case 0x7F31885Cu: goto label_7F31885C;
    case 0x7F318860u: goto label_7F318860;
    case 0x7F318864u: goto label_7F318864;
    case 0x7F318868u: goto label_7F318868;
    case 0x7F31886Cu: goto label_7F31886C;
    case 0x7F318870u: goto label_7F318870;
    case 0x7F318874u: goto label_7F318874;
    case 0x7F318878u: goto label_7F318878;
    case 0x7F31887Cu: goto label_7F31887C;
    case 0x7F318880u: goto label_7F318880;
    case 0x7F318884u: goto label_7F318884;
    case 0x7F318888u: goto label_7F318888;
    case 0x7F31888Cu: goto label_7F31888C;
    case 0x7F318890u: goto label_7F318890;
    case 0x7F318894u: goto label_7F318894;
    case 0x7F318898u: goto label_7F318898;
    case 0x7F31889Cu: goto label_7F31889C;
    case 0x7F3188A0u: goto label_7F3188A0;
    case 0x7F3188A4u: goto label_7F3188A4;
    case 0x7F3188A8u: goto label_7F3188A8;
    case 0x7F3188ACu: goto label_7F3188AC;
    case 0x7F3188B0u: goto label_7F3188B0;
    case 0x7F3188B4u: goto label_7F3188B4;
    case 0x7F3188B8u: goto label_7F3188B8;
    case 0x7F3188BCu: goto label_7F3188BC;
    case 0x7F3188C0u: goto label_7F3188C0;
    case 0x7F3188C4u: goto label_7F3188C4;
    case 0x7F3188C8u: goto label_7F3188C8;
    case 0x7F3188CCu: goto label_7F3188CC;
    case 0x7F3188D0u: goto label_7F3188D0;
    case 0x7F3188D4u: goto label_7F3188D4;
    case 0x7F3188D8u: goto label_7F3188D8;
    case 0x7F3188DCu: goto label_7F3188DC;
    case 0x7F3188E0u: goto label_7F3188E0;
    case 0x7F3188E4u: goto label_7F3188E4;
    case 0x7F3188E8u: goto label_7F3188E8;
    case 0x7F3188ECu: goto label_7F3188EC;
    case 0x7F3188F0u: goto label_7F3188F0;
    case 0x7F3188F4u: goto label_7F3188F4;
    case 0x7F3188F8u: goto label_7F3188F8;
    case 0x7F3188FCu: goto label_7F3188FC;
    case 0x7F318900u: goto label_7F318900;
    case 0x7F318904u: goto label_7F318904;
    case 0x7F318908u: goto label_7F318908;
    case 0x7F31890Cu: goto label_7F31890C;
    case 0x7F318910u: goto label_7F318910;
    case 0x7F318914u: goto label_7F318914;
    case 0x7F318918u: goto label_7F318918;
    case 0x7F31891Cu: goto label_7F31891C;
    case 0x7F318920u: goto label_7F318920;
    case 0x7F318924u: goto label_7F318924;
    case 0x7F318928u: goto label_7F318928;
    case 0x7F31892Cu: goto label_7F31892C;
    case 0x7F318930u: goto label_7F318930;
    case 0x7F318934u: goto label_7F318934;
    case 0x7F318938u: goto label_7F318938;
    case 0x7F31893Cu: goto label_7F31893C;
    case 0x7F318940u: goto label_7F318940;
    case 0x7F318944u: goto label_7F318944;
    case 0x7F318948u: goto label_7F318948;
    case 0x7F31894Cu: goto label_7F31894C;
    case 0x7F318950u: goto label_7F318950;
    case 0x7F318954u: goto label_7F318954;
    case 0x7F318958u: goto label_7F318958;
    case 0x7F31895Cu: goto label_7F31895C;
    case 0x7F318960u: goto label_7F318960;
    case 0x7F318964u: goto label_7F318964;
    case 0x7F318968u: goto label_7F318968;
    case 0x7F31896Cu: goto label_7F31896C;
    case 0x7F318970u: goto label_7F318970;
    case 0x7F318974u: goto label_7F318974;
    case 0x7F318978u: goto label_7F318978;
    case 0x7F31897Cu: goto label_7F31897C;
    case 0x7F318980u: goto label_7F318980;
    case 0x7F318984u: goto label_7F318984;
    case 0x7F318988u: goto label_7F318988;
    case 0x7F31898Cu: goto label_7F31898C;
    case 0x7F318990u: goto label_7F318990;
    case 0x7F318994u: goto label_7F318994;
    case 0x7F318998u: goto label_7F318998;
    case 0x7F31899Cu: goto label_7F31899C;
    case 0x7F3189A0u: goto label_7F3189A0;
    case 0x7F3189A4u: goto label_7F3189A4;
    case 0x7F3189A8u: goto label_7F3189A8;
    case 0x7F3189ACu: goto label_7F3189AC;
    case 0x7F3189B0u: goto label_7F3189B0;
    case 0x7F3189B4u: goto label_7F3189B4;
    case 0x7F3189B8u: goto label_7F3189B8;
    case 0x7F3189BCu: goto label_7F3189BC;
    case 0x7F3189C0u: goto label_7F3189C0;
    case 0x7F3189C4u: goto label_7F3189C4;
    case 0x7F3189C8u: goto label_7F3189C8;
    case 0x7F3189CCu: goto label_7F3189CC;
    case 0x7F3189D0u: goto label_7F3189D0;
    case 0x7F3189D4u: goto label_7F3189D4;
    case 0x7F3189D8u: goto label_7F3189D8;
    case 0x7F3189DCu: goto label_7F3189DC;
    case 0x7F3189E0u: goto label_7F3189E0;
    case 0x7F3189E4u: goto label_7F3189E4;
    case 0x7F3189E8u: goto label_7F3189E8;
    case 0x7F3189ECu: goto label_7F3189EC;
    case 0x7F3189F0u: goto label_7F3189F0;
    case 0x7F3189F4u: goto label_7F3189F4;
    case 0x7F3189F8u: goto label_7F3189F8;
    case 0x7F3189FCu: goto label_7F3189FC;
    case 0x7F318A00u: goto label_7F318A00;
    case 0x7F318A04u: goto label_7F318A04;
    case 0x7F318A08u: goto label_7F318A08;
    case 0x7F318A0Cu: goto label_7F318A0C;
    case 0x7F318A10u: goto label_7F318A10;
    case 0x7F318A14u: goto label_7F318A14;
    case 0x7F318A18u: goto label_7F318A18;
    case 0x7F318A1Cu: goto label_7F318A1C;
    case 0x7F318A20u: goto label_7F318A20;
    case 0x7F318A24u: goto label_7F318A24;
    case 0x7F318A28u: goto label_7F318A28;
    case 0x7F318A2Cu: goto label_7F318A2C;
    case 0x7F318A30u: goto label_7F318A30;
    case 0x7F318A34u: goto label_7F318A34;
    case 0x7F318A38u: goto label_7F318A38;
    case 0x7F318A3Cu: goto label_7F318A3C;
    case 0x7F318A40u: goto label_7F318A40;
    case 0x7F318A44u: goto label_7F318A44;
    case 0x7F318A48u: goto label_7F318A48;
    case 0x7F318A4Cu: goto label_7F318A4C;
    case 0x7F318A50u: goto label_7F318A50;
    case 0x7F318A54u: goto label_7F318A54;
    case 0x7F318A58u: goto label_7F318A58;
    case 0x7F318A5Cu: goto label_7F318A5C;
    case 0x7F318A60u: goto label_7F318A60;
    case 0x7F318A64u: goto label_7F318A64;
    case 0x7F318A68u: goto label_7F318A68;
    case 0x7F318A6Cu: goto label_7F318A6C;
    case 0x7F318A70u: goto label_7F318A70;
    case 0x7F318A74u: goto label_7F318A74;
    case 0x7F318A78u: goto label_7F318A78;
    case 0x7F318A7Cu: goto label_7F318A7C;
    case 0x7F318A80u: goto label_7F318A80;
    case 0x7F318A84u: goto label_7F318A84;
    case 0x7F318A88u: goto label_7F318A88;
    case 0x7F318A8Cu: goto label_7F318A8C;
    case 0x7F318A90u: goto label_7F318A90;
    case 0x7F318A94u: goto label_7F318A94;
    case 0x7F318A98u: goto label_7F318A98;
    case 0x7F318A9Cu: goto label_7F318A9C;
    case 0x7F318AA0u: goto label_7F318AA0;
    case 0x7F318AA4u: goto label_7F318AA4;
    case 0x7F318AA8u: goto label_7F318AA8;
    case 0x7F318AACu: goto label_7F318AAC;
    case 0x7F318AB0u: goto label_7F318AB0;
    case 0x7F318AB4u: goto label_7F318AB4;
    case 0x7F318AB8u: goto label_7F318AB8;
    case 0x7F318ABCu: goto label_7F318ABC;
    case 0x7F318AC0u: goto label_7F318AC0;
    case 0x7F318AC4u: goto label_7F318AC4;
    case 0x7F318AC8u: goto label_7F318AC8;
    case 0x7F318ACCu: goto label_7F318ACC;
    case 0x7F318AD0u: goto label_7F318AD0;
    case 0x7F318AD4u: goto label_7F318AD4;
    case 0x7F318AD8u: goto label_7F318AD8;
    case 0x7F318ADCu: goto label_7F318ADC;
    case 0x7F318AE0u: goto label_7F318AE0;
    case 0x7F318AE4u: goto label_7F318AE4;
    case 0x7F318AE8u: goto label_7F318AE8;
    case 0x7F318AECu: goto label_7F318AEC;
    case 0x7F318AF0u: goto label_7F318AF0;
    case 0x7F318AF4u: goto label_7F318AF4;
    case 0x7F318AF8u: goto label_7F318AF8;
    case 0x7F318AFCu: goto label_7F318AFC;
    case 0x7F318B00u: goto label_7F318B00;
    case 0x7F318B04u: goto label_7F318B04;
    case 0x7F318B08u: goto label_7F318B08;
    case 0x7F318B0Cu: goto label_7F318B0C;
    case 0x7F318B10u: goto label_7F318B10;
    case 0x7F318B14u: goto label_7F318B14;
    case 0x7F318B18u: goto label_7F318B18;
    case 0x7F318B1Cu: goto label_7F318B1C;
    case 0x7F318B20u: goto label_7F318B20;
    case 0x7F318B24u: goto label_7F318B24;
    case 0x7F318B28u: goto label_7F318B28;
    case 0x7F318B2Cu: goto label_7F318B2C;
    case 0x7F318B30u: goto label_7F318B30;
    case 0x7F318B34u: goto label_7F318B34;
    case 0x7F318B38u: goto label_7F318B38;
    case 0x7F318B3Cu: goto label_7F318B3C;
    case 0x7F318B40u: goto label_7F318B40;
    case 0x7F318B44u: goto label_7F318B44;
    case 0x7F318B48u: goto label_7F318B48;
    case 0x7F318B4Cu: goto label_7F318B4C;
    case 0x7F318B50u: goto label_7F318B50;
    case 0x7F318B54u: goto label_7F318B54;
    case 0x7F318B58u: goto label_7F318B58;
    case 0x7F318B5Cu: goto label_7F318B5C;
    case 0x7F318B60u: goto label_7F318B60;
    case 0x7F318B64u: goto label_7F318B64;
    case 0x7F318B68u: goto label_7F318B68;
    case 0x7F318B6Cu: goto label_7F318B6C;
    case 0x7F318B70u: goto label_7F318B70;
    case 0x7F318B74u: goto label_7F318B74;
    case 0x7F318B78u: goto label_7F318B78;
    case 0x7F318B7Cu: goto label_7F318B7C;
    case 0x7F318B80u: goto label_7F318B80;
    case 0x7F318B84u: goto label_7F318B84;
    case 0x7F318B88u: goto label_7F318B88;
    case 0x7F318B8Cu: goto label_7F318B8C;
    case 0x7F318B90u: goto label_7F318B90;
    case 0x7F318B94u: goto label_7F318B94;
    case 0x7F318B98u: goto label_7F318B98;
    case 0x7F318B9Cu: goto label_7F318B9C;
    case 0x7F318BA0u: goto label_7F318BA0;
    case 0x7F318BA4u: goto label_7F318BA4;
    case 0x7F318BA8u: goto label_7F318BA8;
    case 0x7F318BACu: goto label_7F318BAC;
    case 0x7F318BB0u: goto label_7F318BB0;
    case 0x7F318BB4u: goto label_7F318BB4;
    case 0x7F318BB8u: goto label_7F318BB8;
    case 0x7F318BBCu: goto label_7F318BBC;
    case 0x7F318BC0u: goto label_7F318BC0;
    case 0x7F318BC4u: goto label_7F318BC4;
    case 0x7F318BC8u: goto label_7F318BC8;
    case 0x7F318BCCu: goto label_7F318BCC;
    case 0x7F318BD0u: goto label_7F318BD0;
    case 0x7F318BD4u: goto label_7F318BD4;
    case 0x7F318BD8u: goto label_7F318BD8;
    case 0x7F318BDCu: goto label_7F318BDC;
    case 0x7F318BE0u: goto label_7F318BE0;
    case 0x7F318BE4u: goto label_7F318BE4;
    case 0x7F318BE8u: goto label_7F318BE8;
    case 0x7F318BECu: goto label_7F318BEC;
    case 0x7F318BF0u: goto label_7F318BF0;
    case 0x7F318BF4u: goto label_7F318BF4;
    case 0x7F318BF8u: goto label_7F318BF8;
    case 0x7F318BFCu: goto label_7F318BFC;
    case 0x7F318C00u: goto label_7F318C00;
    case 0x7F318C04u: goto label_7F318C04;
    case 0x7F318C08u: goto label_7F318C08;
    case 0x7F318C0Cu: goto label_7F318C0C;
    case 0x7F318C10u: goto label_7F318C10;
    case 0x7F318C14u: goto label_7F318C14;
    case 0x7F318C18u: goto label_7F318C18;
    case 0x7F318C1Cu: goto label_7F318C1C;
    case 0x7F318C20u: goto label_7F318C20;
    case 0x7F318C24u: goto label_7F318C24;
    case 0x7F318C28u: goto label_7F318C28;
    case 0x7F318C2Cu: goto label_7F318C2C;
    case 0x7F318C30u: goto label_7F318C30;
    case 0x7F318C34u: goto label_7F318C34;
    case 0x7F318C38u: goto label_7F318C38;
    case 0x7F318C3Cu: goto label_7F318C3C;
    case 0x7F318C40u: goto label_7F318C40;
    case 0x7F318C44u: goto label_7F318C44;
    case 0x7F318C48u: goto label_7F318C48;
    case 0x7F318C4Cu: goto label_7F318C4C;
    case 0x7F318C50u: goto label_7F318C50;
    case 0x7F318C54u: goto label_7F318C54;
    case 0x7F318C58u: goto label_7F318C58;
    case 0x7F318C5Cu: goto label_7F318C5C;
    case 0x7F318C60u: goto label_7F318C60;
    case 0x7F318C64u: goto label_7F318C64;
    case 0x7F318C68u: goto label_7F318C68;
    case 0x7F318C6Cu: goto label_7F318C6C;
    case 0x7F318C70u: goto label_7F318C70;
    case 0x7F318C74u: goto label_7F318C74;
    case 0x7F318C78u: goto label_7F318C78;
    case 0x7F318C7Cu: goto label_7F318C7C;
    case 0x7F318C80u: goto label_7F318C80;
    case 0x7F318C84u: goto label_7F318C84;
    case 0x7F318C88u: goto label_7F318C88;
    case 0x7F318C8Cu: goto label_7F318C8C;
    case 0x7F318C90u: goto label_7F318C90;
    case 0x7F318C94u: goto label_7F318C94;
    case 0x7F318C98u: goto label_7F318C98;
    case 0x7F318C9Cu: goto label_7F318C9C;
    case 0x7F318CA0u: goto label_7F318CA0;
    case 0x7F318CA4u: goto label_7F318CA4;
    case 0x7F318CA8u: goto label_7F318CA8;
    case 0x7F318CACu: goto label_7F318CAC;
    case 0x7F318CB0u: goto label_7F318CB0;
    case 0x7F318CB4u: goto label_7F318CB4;
    case 0x7F318CB8u: goto label_7F318CB8;
    case 0x7F318CBCu: goto label_7F318CBC;
    case 0x7F318CC0u: goto label_7F318CC0;
    case 0x7F318CC4u: goto label_7F318CC4;
    case 0x7F318CC8u: goto label_7F318CC8;
    case 0x7F318CCCu: goto label_7F318CCC;
    case 0x7F318CD0u: goto label_7F318CD0;
    case 0x7F318CD4u: goto label_7F318CD4;
    case 0x7F318CD8u: goto label_7F318CD8;
    case 0x7F318CDCu: goto label_7F318CDC;
    case 0x7F318CE0u: goto label_7F318CE0;
    case 0x7F318CE4u: goto label_7F318CE4;
    case 0x7F318CE8u: goto label_7F318CE8;
    case 0x7F318CECu: goto label_7F318CEC;
    case 0x7F318CF0u: goto label_7F318CF0;
    case 0x7F318CF4u: goto label_7F318CF4;
    case 0x7F318CF8u: goto label_7F318CF8;
    case 0x7F318CFCu: goto label_7F318CFC;
    case 0x7F318D00u: goto label_7F318D00;
    case 0x7F318D04u: goto label_7F318D04;
    case 0x7F318D08u: goto label_7F318D08;
    case 0x7F318D0Cu: goto label_7F318D0C;
    case 0x7F318D10u: goto label_7F318D10;
    case 0x7F318D14u: goto label_7F318D14;
    case 0x7F318D18u: goto label_7F318D18;
    case 0x7F318D1Cu: goto label_7F318D1C;
    case 0x7F318D20u: goto label_7F318D20;
    case 0x7F318D24u: goto label_7F318D24;
    case 0x7F318D28u: goto label_7F318D28;
    case 0x7F318D2Cu: goto label_7F318D2C;
    case 0x7F318D30u: goto label_7F318D30;
    case 0x7F318D34u: goto label_7F318D34;
    case 0x7F318D38u: goto label_7F318D38;
    case 0x7F318D3Cu: goto label_7F318D3C;
    case 0x7F318D40u: goto label_7F318D40;
    case 0x7F318D44u: goto label_7F318D44;
    case 0x7F318D48u: goto label_7F318D48;
    case 0x7F318D4Cu: goto label_7F318D4C;
    case 0x7F318D50u: goto label_7F318D50;
    case 0x7F318D54u: goto label_7F318D54;
    case 0x7F318D58u: goto label_7F318D58;
    case 0x7F318D5Cu: goto label_7F318D5C;
    case 0x7F318D60u: goto label_7F318D60;
    case 0x7F318D64u: goto label_7F318D64;
    case 0x7F318D68u: goto label_7F318D68;
    case 0x7F318D6Cu: goto label_7F318D6C;
    case 0x7F318D70u: goto label_7F318D70;
    case 0x7F318D74u: goto label_7F318D74;
    case 0x7F318D78u: goto label_7F318D78;
    case 0x7F318D7Cu: goto label_7F318D7C;
    case 0x7F318D80u: goto label_7F318D80;
    case 0x7F318D84u: goto label_7F318D84;
    case 0x7F318D88u: goto label_7F318D88;
    case 0x7F318D8Cu: goto label_7F318D8C;
    case 0x7F318D90u: goto label_7F318D90;
    case 0x7F318D94u: goto label_7F318D94;
    case 0x7F318D98u: goto label_7F318D98;
    case 0x7F318D9Cu: goto label_7F318D9C;
    case 0x7F318DA0u: goto label_7F318DA0;
    case 0x7F318DA4u: goto label_7F318DA4;
    case 0x7F318DA8u: goto label_7F318DA8;
    case 0x7F318DACu: goto label_7F318DAC;
    case 0x7F318DB0u: goto label_7F318DB0;
    case 0x7F318DB4u: goto label_7F318DB4;
    case 0x7F318DB8u: goto label_7F318DB8;
    case 0x7F318DBCu: goto label_7F318DBC;
    case 0x7F318DC0u: goto label_7F318DC0;
    case 0x7F318DC4u: goto label_7F318DC4;
    case 0x7F318DC8u: goto label_7F318DC8;
    case 0x7F318DCCu: goto label_7F318DCC;
    case 0x7F318DD0u: goto label_7F318DD0;
    case 0x7F318DD4u: goto label_7F318DD4;
    case 0x7F318DD8u: goto label_7F318DD8;
    case 0x7F318DDCu: goto label_7F318DDC;
    case 0x7F318DE0u: goto label_7F318DE0;
    case 0x7F318DE4u: goto label_7F318DE4;
    case 0x7F318DE8u: goto label_7F318DE8;
    case 0x7F318DECu: goto label_7F318DEC;
    case 0x7F318DF0u: goto label_7F318DF0;
    case 0x7F318DF4u: goto label_7F318DF4;
    case 0x7F318DF8u: goto label_7F318DF8;
    case 0x7F318DFCu: goto label_7F318DFC;
    case 0x7F318E00u: goto label_7F318E00;
    case 0x7F318E04u: goto label_7F318E04;
    case 0x7F318E08u: goto label_7F318E08;
    case 0x7F318E0Cu: goto label_7F318E0C;
    case 0x7F318E10u: goto label_7F318E10;
    case 0x7F318E14u: goto label_7F318E14;
    case 0x7F318E18u: goto label_7F318E18;
    case 0x7F318E1Cu: goto label_7F318E1C;
    case 0x7F318E20u: goto label_7F318E20;
    case 0x7F318E24u: goto label_7F318E24;
    case 0x7F318E28u: goto label_7F318E28;
    case 0x7F318E2Cu: goto label_7F318E2C;
    case 0x7F318E30u: goto label_7F318E30;
    case 0x7F318E34u: goto label_7F318E34;
    case 0x7F318E38u: goto label_7F318E38;
    case 0x7F318E3Cu: goto label_7F318E3C;
    case 0x7F318E40u: goto label_7F318E40;
    case 0x7F318E44u: goto label_7F318E44;
    case 0x7F318E48u: goto label_7F318E48;
    case 0x7F318E4Cu: goto label_7F318E4C;
    case 0x7F318E50u: goto label_7F318E50;
    case 0x7F318E54u: goto label_7F318E54;
    case 0x7F318E58u: goto label_7F318E58;
    case 0x7F318E5Cu: goto label_7F318E5C;
    case 0x7F318E60u: goto label_7F318E60;
    case 0x7F318E64u: goto label_7F318E64;
    case 0x7F318E68u: goto label_7F318E68;
    case 0x7F318E6Cu: goto label_7F318E6C;
    case 0x7F318E70u: goto label_7F318E70;
    case 0x7F318E74u: goto label_7F318E74;
    case 0x7F318E78u: goto label_7F318E78;
    case 0x7F318E7Cu: goto label_7F318E7C;
    case 0x7F318E80u: goto label_7F318E80;
    case 0x7F318E84u: goto label_7F318E84;
    case 0x7F318E88u: goto label_7F318E88;
    case 0x7F318E8Cu: goto label_7F318E8C;
    case 0x7F318E90u: goto label_7F318E90;
    case 0x7F318E94u: goto label_7F318E94;
    case 0x7F318E98u: goto label_7F318E98;
    case 0x7F318E9Cu: goto label_7F318E9C;
    case 0x7F318EA0u: goto label_7F318EA0;
    case 0x7F318EA4u: goto label_7F318EA4;
    case 0x7F318EA8u: goto label_7F318EA8;
    case 0x7F318EACu: goto label_7F318EAC;
    case 0x7F318EB0u: goto label_7F318EB0;
    case 0x7F318EB4u: goto label_7F318EB4;
    case 0x7F318EB8u: goto label_7F318EB8;
    case 0x7F318EBCu: goto label_7F318EBC;
    case 0x7F318EC0u: goto label_7F318EC0;
    case 0x7F318EC4u: goto label_7F318EC4;
    case 0x7F318EC8u: goto label_7F318EC8;
    case 0x7F318ECCu: goto label_7F318ECC;
    case 0x7F318ED0u: goto label_7F318ED0;
    case 0x7F318ED4u: goto label_7F318ED4;
    case 0x7F318ED8u: goto label_7F318ED8;
    case 0x7F318EDCu: goto label_7F318EDC;
    case 0x7F318EE0u: goto label_7F318EE0;
    case 0x7F318EE4u: goto label_7F318EE4;
    case 0x7F318EE8u: goto label_7F318EE8;
    case 0x7F318EECu: goto label_7F318EEC;
    case 0x7F318EF0u: goto label_7F318EF0;
    case 0x7F318EF4u: goto label_7F318EF4;
    case 0x7F318EF8u: goto label_7F318EF8;
    case 0x7F318EFCu: goto label_7F318EFC;
    case 0x7F318F00u: goto label_7F318F00;
    case 0x7F318F04u: goto label_7F318F04;
    case 0x7F318F08u: goto label_7F318F08;
    case 0x7F318F0Cu: goto label_7F318F0C;
    case 0x7F318F10u: goto label_7F318F10;
    case 0x7F318F14u: goto label_7F318F14;
    case 0x7F318F18u: goto label_7F318F18;
    case 0x7F318F1Cu: goto label_7F318F1C;
    case 0x7F318F20u: goto label_7F318F20;
    case 0x7F318F24u: goto label_7F318F24;
    case 0x7F318F28u: goto label_7F318F28;
    case 0x7F318F2Cu: goto label_7F318F2C;
    case 0x7F318F30u: goto label_7F318F30;
    case 0x7F318F34u: goto label_7F318F34;
    case 0x7F318F38u: goto label_7F318F38;
    case 0x7F318F3Cu: goto label_7F318F3C;
    case 0x7F318F40u: goto label_7F318F40;
    case 0x7F318F44u: goto label_7F318F44;
    case 0x7F318F48u: goto label_7F318F48;
    case 0x7F318F4Cu: goto label_7F318F4C;
    case 0x7F318F50u: goto label_7F318F50;
    case 0x7F318F54u: goto label_7F318F54;
    case 0x7F318F58u: goto label_7F318F58;
    case 0x7F318F5Cu: goto label_7F318F5C;
    case 0x7F318F60u: goto label_7F318F60;
    case 0x7F318F64u: goto label_7F318F64;
    case 0x7F318F68u: goto label_7F318F68;
    case 0x7F318F6Cu: goto label_7F318F6C;
    case 0x7F318F70u: goto label_7F318F70;
    case 0x7F318F74u: goto label_7F318F74;
    case 0x7F318F78u: goto label_7F318F78;
    case 0x7F318F7Cu: goto label_7F318F7C;
    case 0x7F318F80u: goto label_7F318F80;
    case 0x7F318F84u: goto label_7F318F84;
    case 0x7F318F88u: goto label_7F318F88;
    case 0x7F318F8Cu: goto label_7F318F8C;
    case 0x7F318F90u: goto label_7F318F90;
    case 0x7F318F94u: goto label_7F318F94;
    case 0x7F318F98u: goto label_7F318F98;
    case 0x7F318F9Cu: goto label_7F318F9C;
    case 0x7F318FA0u: goto label_7F318FA0;
    case 0x7F318FA4u: goto label_7F318FA4;
    case 0x7F318FA8u: goto label_7F318FA8;
    case 0x7F318FACu: goto label_7F318FAC;
    case 0x7F318FB0u: goto label_7F318FB0;
    case 0x7F318FB4u: goto label_7F318FB4;
    case 0x7F318FB8u: goto label_7F318FB8;
    case 0x7F318FBCu: goto label_7F318FBC;
    case 0x7F318FC0u: goto label_7F318FC0;
    case 0x7F318FC4u: goto label_7F318FC4;
    case 0x7F318FC8u: goto label_7F318FC8;
    case 0x7F318FCCu: goto label_7F318FCC;
    case 0x7F318FD0u: goto label_7F318FD0;
    case 0x7F318FD4u: goto label_7F318FD4;
    case 0x7F318FD8u: goto label_7F318FD8;
    case 0x7F318FDCu: goto label_7F318FDC;
    case 0x7F318FE0u: goto label_7F318FE0;
    case 0x7F318FE4u: goto label_7F318FE4;
    case 0x7F318FE8u: goto label_7F318FE8;
    case 0x7F318FECu: goto label_7F318FEC;
    case 0x7F318FF0u: goto label_7F318FF0;
    case 0x7F318FF4u: goto label_7F318FF4;
    case 0x7F318FF8u: goto label_7F318FF8;
    case 0x7F318FFCu: goto label_7F318FFC;
    case 0x7F319000u: goto label_7F319000;
    case 0x7F319004u: goto label_7F319004;
    case 0x7F319008u: goto label_7F319008;
    case 0x7F31900Cu: goto label_7F31900C;
    case 0x7F319010u: goto label_7F319010;
    case 0x7F319014u: goto label_7F319014;
    case 0x7F319018u: goto label_7F319018;
    case 0x7F31901Cu: goto label_7F31901C;
    case 0x7F319020u: goto label_7F319020;
    case 0x7F319024u: goto label_7F319024;
    case 0x7F319028u: goto label_7F319028;
    case 0x7F31902Cu: goto label_7F31902C;
    case 0x7F319030u: goto label_7F319030;
    case 0x7F319034u: goto label_7F319034;
    case 0x7F319038u: goto label_7F319038;
    case 0x7F31903Cu: goto label_7F31903C;
    case 0x7F319040u: goto label_7F319040;
    case 0x7F319044u: goto label_7F319044;
    case 0x7F319048u: goto label_7F319048;
    case 0x7F31904Cu: goto label_7F31904C;
    case 0x7F319050u: goto label_7F319050;
    case 0x7F319054u: goto label_7F319054;
    case 0x7F319058u: goto label_7F319058;
    case 0x7F31905Cu: goto label_7F31905C;
    case 0x7F319060u: goto label_7F319060;
    case 0x7F319064u: goto label_7F319064;
    case 0x7F319068u: goto label_7F319068;
    case 0x7F31906Cu: goto label_7F31906C;
    case 0x7F319070u: goto label_7F319070;
    case 0x7F319074u: goto label_7F319074;
    case 0x7F319078u: goto label_7F319078;
    case 0x7F31907Cu: goto label_7F31907C;
    case 0x7F319080u: goto label_7F319080;
    case 0x7F319084u: goto label_7F319084;
    case 0x7F319088u: goto label_7F319088;
    case 0x7F31908Cu: goto label_7F31908C;
    case 0x7F319090u: goto label_7F319090;
    case 0x7F319094u: goto label_7F319094;
    case 0x7F319098u: goto label_7F319098;
    case 0x7F31909Cu: goto label_7F31909C;
    case 0x7F3190A0u: goto label_7F3190A0;
    case 0x7F3190A4u: goto label_7F3190A4;
    case 0x7F3190A8u: goto label_7F3190A8;
    case 0x7F3190ACu: goto label_7F3190AC;
    case 0x7F3190B0u: goto label_7F3190B0;
    case 0x7F3190B4u: goto label_7F3190B4;
    case 0x7F3190B8u: goto label_7F3190B8;
    case 0x7F3190BCu: goto label_7F3190BC;
    case 0x7F3190C0u: goto label_7F3190C0;
    case 0x7F3190C4u: goto label_7F3190C4;
    case 0x7F3190C8u: goto label_7F3190C8;
    case 0x7F3190CCu: goto label_7F3190CC;
    case 0x7F3190D0u: goto label_7F3190D0;
    case 0x7F3190D4u: goto label_7F3190D4;
    case 0x7F3190D8u: goto label_7F3190D8;
    case 0x7F3190DCu: goto label_7F3190DC;
    case 0x7F3190E0u: goto label_7F3190E0;
    case 0x7F3190E4u: goto label_7F3190E4;
    case 0x7F3190E8u: goto label_7F3190E8;
    case 0x7F3190ECu: goto label_7F3190EC;
    case 0x7F3190F0u: goto label_7F3190F0;
    case 0x7F3190F4u: goto label_7F3190F4;
    case 0x7F3190F8u: goto label_7F3190F8;
    case 0x7F3190FCu: goto label_7F3190FC;
    case 0x7F319100u: goto label_7F319100;
    case 0x7F319104u: goto label_7F319104;
    case 0x7F319108u: goto label_7F319108;
    case 0x7F31910Cu: goto label_7F31910C;
    case 0x7F319110u: goto label_7F319110;
    case 0x7F319114u: goto label_7F319114;
    case 0x7F319118u: goto label_7F319118;
    case 0x7F31911Cu: goto label_7F31911C;
    case 0x7F319120u: goto label_7F319120;
    case 0x7F319124u: goto label_7F319124;
    case 0x7F319128u: goto label_7F319128;
    case 0x7F31912Cu: goto label_7F31912C;
    case 0x7F319130u: goto label_7F319130;
    case 0x7F319134u: goto label_7F319134;
    case 0x7F319138u: goto label_7F319138;
    case 0x7F31913Cu: goto label_7F31913C;
    case 0x7F319140u: goto label_7F319140;
    case 0x7F319144u: goto label_7F319144;
    case 0x7F319148u: goto label_7F319148;
    case 0x7F31914Cu: goto label_7F31914C;
    case 0x7F319150u: goto label_7F319150;
    case 0x7F319154u: goto label_7F319154;
    case 0x7F319158u: goto label_7F319158;
    case 0x7F31915Cu: goto label_7F31915C;
    case 0x7F319160u: goto label_7F319160;
    case 0x7F319164u: goto label_7F319164;
    case 0x7F319168u: goto label_7F319168;
    case 0x7F31916Cu: goto label_7F31916C;
    case 0x7F319170u: goto label_7F319170;
    case 0x7F319174u: goto label_7F319174;
    case 0x7F319178u: goto label_7F319178;
    case 0x7F31917Cu: goto label_7F31917C;
    case 0x7F319180u: goto label_7F319180;
    case 0x7F319184u: goto label_7F319184;
    case 0x7F319188u: goto label_7F319188;
    case 0x7F31918Cu: goto label_7F31918C;
    case 0x7F319190u: goto label_7F319190;
    case 0x7F319194u: goto label_7F319194;
    case 0x7F319198u: goto label_7F319198;
    case 0x7F31919Cu: goto label_7F31919C;
    case 0x7F3191A0u: goto label_7F3191A0;
    case 0x7F3191A4u: goto label_7F3191A4;
    case 0x7F3191A8u: goto label_7F3191A8;
    case 0x7F3191ACu: goto label_7F3191AC;
    case 0x7F3191B0u: goto label_7F3191B0;
    case 0x7F3191B4u: goto label_7F3191B4;
    case 0x7F3191B8u: goto label_7F3191B8;
    case 0x7F3191BCu: goto label_7F3191BC;
    case 0x7F3191C0u: goto label_7F3191C0;
    case 0x7F3191C4u: goto label_7F3191C4;
    case 0x7F3191C8u: goto label_7F3191C8;
    case 0x7F3191CCu: goto label_7F3191CC;
    case 0x7F3191D0u: goto label_7F3191D0;
    case 0x7F3191D4u: goto label_7F3191D4;
    case 0x7F3191D8u: goto label_7F3191D8;
    case 0x7F3191DCu: goto label_7F3191DC;
    case 0x7F3191E0u: goto label_7F3191E0;
    case 0x7F3191E4u: goto label_7F3191E4;
    case 0x7F3191E8u: goto label_7F3191E8;
    case 0x7F3191ECu: goto label_7F3191EC;
    case 0x7F3191F0u: goto label_7F3191F0;
    case 0x7F3191F4u: goto label_7F3191F4;
    case 0x7F3191F8u: goto label_7F3191F8;
    case 0x7F3191FCu: goto label_7F3191FC;
    case 0x7F319200u: goto label_7F319200;
    case 0x7F319204u: goto label_7F319204;
    case 0x7F319208u: goto label_7F319208;
    case 0x7F31920Cu: goto label_7F31920C;
    case 0x7F319210u: goto label_7F319210;
    case 0x7F319214u: goto label_7F319214;
    case 0x7F319218u: goto label_7F319218;
    case 0x7F31921Cu: goto label_7F31921C;
    case 0x7F319220u: goto label_7F319220;
    case 0x7F319224u: goto label_7F319224;
    case 0x7F319228u: goto label_7F319228;
    case 0x7F31922Cu: goto label_7F31922C;
    case 0x7F319230u: goto label_7F319230;
    case 0x7F319234u: goto label_7F319234;
    case 0x7F319238u: goto label_7F319238;
    case 0x7F31923Cu: goto label_7F31923C;
    case 0x7F319240u: goto label_7F319240;
    case 0x7F319244u: goto label_7F319244;
    case 0x7F319248u: goto label_7F319248;
    case 0x7F31924Cu: goto label_7F31924C;
    case 0x7F319250u: goto label_7F319250;
    case 0x7F319254u: goto label_7F319254;
    case 0x7F319258u: goto label_7F319258;
    case 0x7F31925Cu: goto label_7F31925C;
    case 0x7F319260u: goto label_7F319260;
    case 0x7F319264u: goto label_7F319264;
    case 0x7F319268u: goto label_7F319268;
    case 0x7F31926Cu: goto label_7F31926C;
    case 0x7F319270u: goto label_7F319270;
    case 0x7F319274u: goto label_7F319274;
    case 0x7F319278u: goto label_7F319278;
    case 0x7F31927Cu: goto label_7F31927C;
    case 0x7F319280u: goto label_7F319280;
    case 0x7F319284u: goto label_7F319284;
    case 0x7F319288u: goto label_7F319288;
    case 0x7F31928Cu: goto label_7F31928C;
    case 0x7F319290u: goto label_7F319290;
    case 0x7F319294u: goto label_7F319294;
    case 0x7F319298u: goto label_7F319298;
    case 0x7F31929Cu: goto label_7F31929C;
    case 0x7F3192A0u: goto label_7F3192A0;
    case 0x7F3192A4u: goto label_7F3192A4;
    case 0x7F3192A8u: goto label_7F3192A8;
    case 0x7F3192ACu: goto label_7F3192AC;
    case 0x7F3192B0u: goto label_7F3192B0;
    case 0x7F3192B4u: goto label_7F3192B4;
    case 0x7F3192B8u: goto label_7F3192B8;
    case 0x7F3192BCu: goto label_7F3192BC;
    case 0x7F3192C0u: goto label_7F3192C0;
    case 0x7F3192C4u: goto label_7F3192C4;
    case 0x7F3192C8u: goto label_7F3192C8;
    case 0x7F3192CCu: goto label_7F3192CC;
    case 0x7F3192D0u: goto label_7F3192D0;
    case 0x7F3192D4u: goto label_7F3192D4;
    case 0x7F3192D8u: goto label_7F3192D8;
    case 0x7F3192DCu: goto label_7F3192DC;
    case 0x7F3192E0u: goto label_7F3192E0;
    case 0x7F3192E4u: goto label_7F3192E4;
    case 0x7F3192E8u: goto label_7F3192E8;
    case 0x7F3192ECu: goto label_7F3192EC;
    case 0x7F3192F0u: goto label_7F3192F0;
    case 0x7F3192F4u: goto label_7F3192F4;
    case 0x7F3192F8u: goto label_7F3192F8;
    case 0x7F3192FCu: goto label_7F3192FC;
    case 0x7F319300u: goto label_7F319300;
    case 0x7F319304u: goto label_7F319304;
    case 0x7F319308u: goto label_7F319308;
    case 0x7F31930Cu: goto label_7F31930C;
    case 0x7F319310u: goto label_7F319310;
    case 0x7F319314u: goto label_7F319314;
    case 0x7F319318u: goto label_7F319318;
    case 0x7F31931Cu: goto label_7F31931C;
    case 0x7F319320u: goto label_7F319320;
    case 0x7F319324u: goto label_7F319324;
    case 0x7F319328u: goto label_7F319328;
    case 0x7F31932Cu: goto label_7F31932C;
    case 0x7F319330u: goto label_7F319330;
    case 0x7F319334u: goto label_7F319334;
    case 0x7F319338u: goto label_7F319338;
    case 0x7F31933Cu: goto label_7F31933C;
    case 0x7F319340u: goto label_7F319340;
    case 0x7F319344u: goto label_7F319344;
    case 0x7F319348u: goto label_7F319348;
    case 0x7F31934Cu: goto label_7F31934C;
    case 0x7F319350u: goto label_7F319350;
    case 0x7F319354u: goto label_7F319354;
    case 0x7F319358u: goto label_7F319358;
    case 0x7F31935Cu: goto label_7F31935C;
    case 0x7F319360u: goto label_7F319360;
    case 0x7F319364u: goto label_7F319364;
    case 0x7F319368u: goto label_7F319368;
    case 0x7F31936Cu: goto label_7F31936C;
    case 0x7F319370u: goto label_7F319370;
    case 0x7F319374u: goto label_7F319374;
    case 0x7F319378u: goto label_7F319378;
    case 0x7F31937Cu: goto label_7F31937C;
    case 0x7F319380u: goto label_7F319380;
    case 0x7F319384u: goto label_7F319384;
    case 0x7F319388u: goto label_7F319388;
    case 0x7F31938Cu: goto label_7F31938C;
    case 0x7F319390u: goto label_7F319390;
    case 0x7F319394u: goto label_7F319394;
    case 0x7F319398u: goto label_7F319398;
    case 0x7F31939Cu: goto label_7F31939C;
    case 0x7F3193A0u: goto label_7F3193A0;
    case 0x7F3193A4u: goto label_7F3193A4;
    case 0x7F3193A8u: goto label_7F3193A8;
    case 0x7F3193ACu: goto label_7F3193AC;
    case 0x7F3193B0u: goto label_7F3193B0;
    case 0x7F3193B4u: goto label_7F3193B4;
    case 0x7F3193B8u: goto label_7F3193B8;
    case 0x7F3193BCu: goto label_7F3193BC;
    case 0x7F3193C0u: goto label_7F3193C0;
    case 0x7F3193C4u: goto label_7F3193C4;
    case 0x7F3193C8u: goto label_7F3193C8;
    case 0x7F3193CCu: goto label_7F3193CC;
    case 0x7F3193D0u: goto label_7F3193D0;
    case 0x7F3193D4u: goto label_7F3193D4;
    case 0x7F3193D8u: goto label_7F3193D8;
    case 0x7F3193DCu: goto label_7F3193DC;
    case 0x7F3193E0u: goto label_7F3193E0;
    case 0x7F3193E4u: goto label_7F3193E4;
    case 0x7F3193E8u: goto label_7F3193E8;
    case 0x7F3193ECu: goto label_7F3193EC;
    case 0x7F3193F0u: goto label_7F3193F0;
    case 0x7F3193F4u: goto label_7F3193F4;
    case 0x7F3193F8u: goto label_7F3193F8;
    case 0x7F3193FCu: goto label_7F3193FC;
    case 0x7F319400u: goto label_7F319400;
    case 0x7F319404u: goto label_7F319404;
    case 0x7F319408u: goto label_7F319408;
    case 0x7F31940Cu: goto label_7F31940C;
    case 0x7F319410u: goto label_7F319410;
    case 0x7F319414u: goto label_7F319414;
    case 0x7F319418u: goto label_7F319418;
    case 0x7F31941Cu: goto label_7F31941C;
    case 0x7F319420u: goto label_7F319420;
    case 0x7F319424u: goto label_7F319424;
    case 0x7F319428u: goto label_7F319428;
    case 0x7F31942Cu: goto label_7F31942C;
    case 0x7F319430u: goto label_7F319430;
    case 0x7F319434u: goto label_7F319434;
    case 0x7F319438u: goto label_7F319438;
    case 0x7F31943Cu: goto label_7F31943C;
    case 0x7F319440u: goto label_7F319440;
    case 0x7F319444u: goto label_7F319444;
    case 0x7F319448u: goto label_7F319448;
    case 0x7F31944Cu: goto label_7F31944C;
    case 0x7F319450u: goto label_7F319450;
    case 0x7F319454u: goto label_7F319454;
    case 0x7F319458u: goto label_7F319458;
    case 0x7F31945Cu: goto label_7F31945C;
    case 0x7F319460u: goto label_7F319460;
    case 0x7F319464u: goto label_7F319464;
    case 0x7F319468u: goto label_7F319468;
    case 0x7F31946Cu: goto label_7F31946C;
    case 0x7F319470u: goto label_7F319470;
    case 0x7F319474u: goto label_7F319474;
    case 0x7F319478u: goto label_7F319478;
    case 0x7F31947Cu: goto label_7F31947C;
    case 0x7F319480u: goto label_7F319480;
    case 0x7F319484u: goto label_7F319484;
    case 0x7F319488u: goto label_7F319488;
    case 0x7F31948Cu: goto label_7F31948C;
    case 0x7F319490u: goto label_7F319490;
    case 0x7F319494u: goto label_7F319494;
    case 0x7F319498u: goto label_7F319498;
    case 0x7F31949Cu: goto label_7F31949C;
    case 0x7F3194A0u: goto label_7F3194A0;
    case 0x7F3194A4u: goto label_7F3194A4;
    case 0x7F3194A8u: goto label_7F3194A8;
    case 0x7F3194ACu: goto label_7F3194AC;
    case 0x7F3194B0u: goto label_7F3194B0;
    case 0x7F3194B4u: goto label_7F3194B4;
    case 0x7F3194B8u: goto label_7F3194B8;
    case 0x7F3194BCu: goto label_7F3194BC;
    case 0x7F3194C0u: goto label_7F3194C0;
    case 0x7F3194C4u: goto label_7F3194C4;
    case 0x7F3194C8u: goto label_7F3194C8;
    case 0x7F3194CCu: goto label_7F3194CC;
    case 0x7F3194D0u: goto label_7F3194D0;
    case 0x7F3194D4u: goto label_7F3194D4;
    case 0x7F3194D8u: goto label_7F3194D8;
    case 0x7F3194DCu: goto label_7F3194DC;
    case 0x7F3194E0u: goto label_7F3194E0;
    case 0x7F3194E4u: goto label_7F3194E4;
    case 0x7F3194E8u: goto label_7F3194E8;
    case 0x7F3194ECu: goto label_7F3194EC;
    case 0x7F3194F0u: goto label_7F3194F0;
    case 0x7F3194F4u: goto label_7F3194F4;
    case 0x7F3194F8u: goto label_7F3194F8;
    case 0x7F3194FCu: goto label_7F3194FC;
    case 0x7F319500u: goto label_7F319500;
    case 0x7F319504u: goto label_7F319504;
    case 0x7F319508u: goto label_7F319508;
    case 0x7F31950Cu: goto label_7F31950C;
    case 0x7F319510u: goto label_7F319510;
    case 0x7F319514u: goto label_7F319514;
    case 0x7F319518u: goto label_7F319518;
    case 0x7F31951Cu: goto label_7F31951C;
    case 0x7F319520u: goto label_7F319520;
    case 0x7F319524u: goto label_7F319524;
    case 0x7F319528u: goto label_7F319528;
    case 0x7F31952Cu: goto label_7F31952C;
    case 0x7F319530u: goto label_7F319530;
    case 0x7F319534u: goto label_7F319534;
    case 0x7F319538u: goto label_7F319538;
    case 0x7F31953Cu: goto label_7F31953C;
    case 0x7F319540u: goto label_7F319540;
    case 0x7F319544u: goto label_7F319544;
    case 0x7F319548u: goto label_7F319548;
    case 0x7F31954Cu: goto label_7F31954C;
    case 0x7F319550u: goto label_7F319550;
    case 0x7F319554u: goto label_7F319554;
    case 0x7F319558u: goto label_7F319558;
    case 0x7F31955Cu: goto label_7F31955C;
    case 0x7F319560u: goto label_7F319560;
    case 0x7F319564u: goto label_7F319564;
    case 0x7F319568u: goto label_7F319568;
    case 0x7F31956Cu: goto label_7F31956C;
    case 0x7F319570u: goto label_7F319570;
    case 0x7F319574u: goto label_7F319574;
    case 0x7F319578u: goto label_7F319578;
    case 0x7F31957Cu: goto label_7F31957C;
    case 0x7F319580u: goto label_7F319580;
    case 0x7F319584u: goto label_7F319584;
    case 0x7F319588u: goto label_7F319588;
    case 0x7F31958Cu: goto label_7F31958C;
    case 0x7F319590u: goto label_7F319590;
    case 0x7F319594u: goto label_7F319594;
    case 0x7F319598u: goto label_7F319598;
    case 0x7F31959Cu: goto label_7F31959C;
    case 0x7F3195A0u: goto label_7F3195A0;
    case 0x7F3195A4u: goto label_7F3195A4;
    case 0x7F3195A8u: goto label_7F3195A8;
    case 0x7F3195ACu: goto label_7F3195AC;
    case 0x7F3195B0u: goto label_7F3195B0;
    case 0x7F3195B4u: goto label_7F3195B4;
    case 0x7F3195B8u: goto label_7F3195B8;
    case 0x7F3195BCu: goto label_7F3195BC;
    case 0x7F3195C0u: goto label_7F3195C0;
    case 0x7F3195C4u: goto label_7F3195C4;
    case 0x7F3195C8u: goto label_7F3195C8;
    case 0x7F3195CCu: goto label_7F3195CC;
    case 0x7F3195D0u: goto label_7F3195D0;
    case 0x7F3195D4u: goto label_7F3195D4;
    case 0x7F3195D8u: goto label_7F3195D8;
    case 0x7F3195DCu: goto label_7F3195DC;
    case 0x7F3195E0u: goto label_7F3195E0;
    case 0x7F3195E4u: goto label_7F3195E4;
    case 0x7F3195E8u: goto label_7F3195E8;
    case 0x7F3195ECu: goto label_7F3195EC;
    case 0x7F3195F0u: goto label_7F3195F0;
    case 0x7F3195F4u: goto label_7F3195F4;
    case 0x7F3195F8u: goto label_7F3195F8;
    case 0x7F3195FCu: goto label_7F3195FC;
    case 0x7F319600u: goto label_7F319600;
    case 0x7F319604u: goto label_7F319604;
    case 0x7F319608u: goto label_7F319608;
    case 0x7F31960Cu: goto label_7F31960C;
    case 0x7F319610u: goto label_7F319610;
    case 0x7F319614u: goto label_7F319614;
    case 0x7F319618u: goto label_7F319618;
    case 0x7F31961Cu: goto label_7F31961C;
    case 0x7F319620u: goto label_7F319620;
    case 0x7F319624u: goto label_7F319624;
    case 0x7F319628u: goto label_7F319628;
    case 0x7F31962Cu: goto label_7F31962C;
    case 0x7F319630u: goto label_7F319630;
    case 0x7F319634u: goto label_7F319634;
    case 0x7F319638u: goto label_7F319638;
    case 0x7F31963Cu: goto label_7F31963C;
    case 0x7F319640u: goto label_7F319640;
    case 0x7F319644u: goto label_7F319644;
    case 0x7F319648u: goto label_7F319648;
    case 0x7F31964Cu: goto label_7F31964C;
    case 0x7F319650u: goto label_7F319650;
    case 0x7F319654u: goto label_7F319654;
    case 0x7F319658u: goto label_7F319658;
    case 0x7F31965Cu: goto label_7F31965C;
    case 0x7F319660u: goto label_7F319660;
    case 0x7F319664u: goto label_7F319664;
    case 0x7F319668u: goto label_7F319668;
    case 0x7F31966Cu: goto label_7F31966C;
    case 0x7F319670u: goto label_7F319670;
    case 0x7F319674u: goto label_7F319674;
    case 0x7F319678u: goto label_7F319678;
    case 0x7F31967Cu: goto label_7F31967C;
    case 0x7F319680u: goto label_7F319680;
    case 0x7F319684u: goto label_7F319684;
    case 0x7F319688u: goto label_7F319688;
    case 0x7F31968Cu: goto label_7F31968C;
    case 0x7F319690u: goto label_7F319690;
    case 0x7F319694u: goto label_7F319694;
    case 0x7F319698u: goto label_7F319698;
    case 0x7F31969Cu: goto label_7F31969C;
    case 0x7F3196A0u: goto label_7F3196A0;
    case 0x7F3196A4u: goto label_7F3196A4;
    case 0x7F3196A8u: goto label_7F3196A8;
    case 0x7F3196ACu: goto label_7F3196AC;
    case 0x7F3196B0u: goto label_7F3196B0;
    case 0x7F3196B4u: goto label_7F3196B4;
    case 0x7F3196B8u: goto label_7F3196B8;
    case 0x7F3196BCu: goto label_7F3196BC;
    case 0x7F3196C0u: goto label_7F3196C0;
    case 0x7F3196C4u: goto label_7F3196C4;
    case 0x7F3196C8u: goto label_7F3196C8;
    case 0x7F3196CCu: goto label_7F3196CC;
    case 0x7F3196D0u: goto label_7F3196D0;
    case 0x7F3196D4u: goto label_7F3196D4;
    case 0x7F3196D8u: goto label_7F3196D8;
    case 0x7F3196DCu: goto label_7F3196DC;
    case 0x7F3196E0u: goto label_7F3196E0;
    case 0x7F3196E4u: goto label_7F3196E4;
    case 0x7F3196E8u: goto label_7F3196E8;
    case 0x7F3196ECu: goto label_7F3196EC;
    case 0x7F3196F0u: goto label_7F3196F0;
    case 0x7F3196F4u: goto label_7F3196F4;
    case 0x7F3196F8u: goto label_7F3196F8;
    case 0x7F3196FCu: goto label_7F3196FC;
    case 0x7F319700u: goto label_7F319700;
    case 0x7F319704u: goto label_7F319704;
    case 0x7F319708u: goto label_7F319708;
    case 0x7F31970Cu: goto label_7F31970C;
    case 0x7F319710u: goto label_7F319710;
    case 0x7F319714u: goto label_7F319714;
    case 0x7F319718u: goto label_7F319718;
    case 0x7F31971Cu: goto label_7F31971C;
    case 0x7F319720u: goto label_7F319720;
    case 0x7F319724u: goto label_7F319724;
    case 0x7F319728u: goto label_7F319728;
    case 0x7F31972Cu: goto label_7F31972C;
    case 0x7F319730u: goto label_7F319730;
    case 0x7F319734u: goto label_7F319734;
    case 0x7F319738u: goto label_7F319738;
    case 0x7F31973Cu: goto label_7F31973C;
    case 0x7F319740u: goto label_7F319740;
    case 0x7F319744u: goto label_7F319744;
    case 0x7F319748u: goto label_7F319748;
    case 0x7F31974Cu: goto label_7F31974C;
    case 0x7F319750u: goto label_7F319750;
    case 0x7F319754u: goto label_7F319754;
    case 0x7F319758u: goto label_7F319758;
    case 0x7F31975Cu: goto label_7F31975C;
    case 0x7F319760u: goto label_7F319760;
    case 0x7F319764u: goto label_7F319764;
    case 0x7F319768u: goto label_7F319768;
    case 0x7F31976Cu: goto label_7F31976C;
    case 0x7F319770u: goto label_7F319770;
    case 0x7F319774u: goto label_7F319774;
    case 0x7F319778u: goto label_7F319778;
    case 0x7F31977Cu: goto label_7F31977C;
    case 0x7F319780u: goto label_7F319780;
    case 0x7F319784u: goto label_7F319784;
    case 0x7F319788u: goto label_7F319788;
    case 0x7F31978Cu: goto label_7F31978C;
    case 0x7F319790u: goto label_7F319790;
    case 0x7F319794u: goto label_7F319794;
    case 0x7F319798u: goto label_7F319798;
    case 0x7F31979Cu: goto label_7F31979C;
    case 0x7F3197A0u: goto label_7F3197A0;
    case 0x7F3197A4u: goto label_7F3197A4;
    case 0x7F3197A8u: goto label_7F3197A8;
    case 0x7F3197ACu: goto label_7F3197AC;
    case 0x7F3197B0u: goto label_7F3197B0;
    case 0x7F3197B4u: goto label_7F3197B4;
    case 0x7F3197B8u: goto label_7F3197B8;
    case 0x7F3197BCu: goto label_7F3197BC;
    case 0x7F3197C0u: goto label_7F3197C0;
    case 0x7F3197C4u: goto label_7F3197C4;
    case 0x7F3197C8u: goto label_7F3197C8;
    case 0x7F3197CCu: goto label_7F3197CC;
    case 0x7F3197D0u: goto label_7F3197D0;
    case 0x7F3197D4u: goto label_7F3197D4;
    case 0x7F3197D8u: goto label_7F3197D8;
    case 0x7F3197DCu: goto label_7F3197DC;
    case 0x7F3197E0u: goto label_7F3197E0;
    case 0x7F3197E4u: goto label_7F3197E4;
    case 0x7F3197E8u: goto label_7F3197E8;
    case 0x7F3197ECu: goto label_7F3197EC;
    case 0x7F3197F0u: goto label_7F3197F0;
    case 0x7F3197F4u: goto label_7F3197F4;
    case 0x7F3197F8u: goto label_7F3197F8;
    case 0x7F3197FCu: goto label_7F3197FC;
    case 0x7F319800u: goto label_7F319800;
    case 0x7F319804u: goto label_7F319804;
    case 0x7F319808u: goto label_7F319808;
    case 0x7F31980Cu: goto label_7F31980C;
    case 0x7F319810u: goto label_7F319810;
    case 0x7F319814u: goto label_7F319814;
    case 0x7F319818u: goto label_7F319818;
    case 0x7F31981Cu: goto label_7F31981C;
    case 0x7F319820u: goto label_7F319820;
    case 0x7F319824u: goto label_7F319824;
    case 0x7F319828u: goto label_7F319828;
    case 0x7F31982Cu: goto label_7F31982C;
    case 0x7F319830u: goto label_7F319830;
    case 0x7F319834u: goto label_7F319834;
    case 0x7F319838u: goto label_7F319838;
    case 0x7F31983Cu: goto label_7F31983C;
    case 0x7F319840u: goto label_7F319840;
    case 0x7F319844u: goto label_7F319844;
    case 0x7F319848u: goto label_7F319848;
    case 0x7F31984Cu: goto label_7F31984C;
    case 0x7F319850u: goto label_7F319850;
    case 0x7F319854u: goto label_7F319854;
    case 0x7F319858u: goto label_7F319858;
    case 0x7F31985Cu: goto label_7F31985C;
    case 0x7F319860u: goto label_7F319860;
    case 0x7F319864u: goto label_7F319864;
    case 0x7F319868u: goto label_7F319868;
    case 0x7F31986Cu: goto label_7F31986C;
    case 0x7F319870u: goto label_7F319870;
    case 0x7F319874u: goto label_7F319874;
    case 0x7F319878u: goto label_7F319878;
    case 0x7F31987Cu: goto label_7F31987C;
    case 0x7F319880u: goto label_7F319880;
    case 0x7F319884u: goto label_7F319884;
    case 0x7F319888u: goto label_7F319888;
    case 0x7F31988Cu: goto label_7F31988C;
    case 0x7F319890u: goto label_7F319890;
    case 0x7F319894u: goto label_7F319894;
    case 0x7F319898u: goto label_7F319898;
    case 0x7F31989Cu: goto label_7F31989C;
    case 0x7F3198A0u: goto label_7F3198A0;
    case 0x7F3198A4u: goto label_7F3198A4;
    case 0x7F3198A8u: goto label_7F3198A8;
    case 0x7F3198ACu: goto label_7F3198AC;
    case 0x7F3198B0u: goto label_7F3198B0;
    case 0x7F3198B4u: goto label_7F3198B4;
    case 0x7F3198B8u: goto label_7F3198B8;
    case 0x7F3198BCu: goto label_7F3198BC;
    case 0x7F3198C0u: goto label_7F3198C0;
    case 0x7F3198C4u: goto label_7F3198C4;
    case 0x7F3198C8u: goto label_7F3198C8;
    case 0x7F3198CCu: goto label_7F3198CC;
    case 0x7F3198D0u: goto label_7F3198D0;
    case 0x7F3198D4u: goto label_7F3198D4;
    case 0x7F3198D8u: goto label_7F3198D8;
    case 0x7F3198DCu: goto label_7F3198DC;
    case 0x7F3198E0u: goto label_7F3198E0;
    case 0x7F3198E4u: goto label_7F3198E4;
    case 0x7F3198E8u: goto label_7F3198E8;
    case 0x7F3198ECu: goto label_7F3198EC;
    case 0x7F3198F0u: goto label_7F3198F0;
    case 0x7F3198F4u: goto label_7F3198F4;
    case 0x7F3198F8u: goto label_7F3198F8;
    case 0x7F3198FCu: goto label_7F3198FC;
    case 0x7F319900u: goto label_7F319900;
    case 0x7F319904u: goto label_7F319904;
    case 0x7F319908u: goto label_7F319908;
    case 0x7F31990Cu: goto label_7F31990C;
    case 0x7F319910u: goto label_7F319910;
    case 0x7F319914u: goto label_7F319914;
    case 0x7F319918u: goto label_7F319918;
    case 0x7F31991Cu: goto label_7F31991C;
    case 0x7F319920u: goto label_7F319920;
    case 0x7F319924u: goto label_7F319924;
    case 0x7F319928u: goto label_7F319928;
    case 0x7F31992Cu: goto label_7F31992C;
    case 0x7F319930u: goto label_7F319930;
    case 0x7F319934u: goto label_7F319934;
    case 0x7F319938u: goto label_7F319938;
    case 0x7F31993Cu: goto label_7F31993C;
    case 0x7F319940u: goto label_7F319940;
    case 0x7F319944u: goto label_7F319944;
    case 0x7F319948u: goto label_7F319948;
    case 0x7F31994Cu: goto label_7F31994C;
    case 0x7F319950u: goto label_7F319950;
    case 0x7F319954u: goto label_7F319954;
    case 0x7F319958u: goto label_7F319958;
    case 0x7F31995Cu: goto label_7F31995C;
    case 0x7F319960u: goto label_7F319960;
    case 0x7F319964u: goto label_7F319964;
    case 0x7F319968u: goto label_7F319968;
    case 0x7F31996Cu: goto label_7F31996C;
    case 0x7F319970u: goto label_7F319970;
    case 0x7F319974u: goto label_7F319974;
    case 0x7F319978u: goto label_7F319978;
    case 0x7F31997Cu: goto label_7F31997C;
    case 0x7F319980u: goto label_7F319980;
    case 0x7F319984u: goto label_7F319984;
    case 0x7F319988u: goto label_7F319988;
    case 0x7F31998Cu: goto label_7F31998C;
    case 0x7F319990u: goto label_7F319990;
    case 0x7F319994u: goto label_7F319994;
    case 0x7F319998u: goto label_7F319998;
    case 0x7F31999Cu: goto label_7F31999C;
    case 0x7F3199A0u: goto label_7F3199A0;
    case 0x7F3199A4u: goto label_7F3199A4;
    case 0x7F3199A8u: goto label_7F3199A8;
    case 0x7F3199ACu: goto label_7F3199AC;
    case 0x7F3199B0u: goto label_7F3199B0;
    case 0x7F3199B4u: goto label_7F3199B4;
    case 0x7F3199B8u: goto label_7F3199B8;
    case 0x7F3199BCu: goto label_7F3199BC;
    case 0x7F3199C0u: goto label_7F3199C0;
    case 0x7F3199C4u: goto label_7F3199C4;
    case 0x7F3199C8u: goto label_7F3199C8;
    case 0x7F3199CCu: goto label_7F3199CC;
    case 0x7F3199D0u: goto label_7F3199D0;
    case 0x7F3199D4u: goto label_7F3199D4;
    case 0x7F3199D8u: goto label_7F3199D8;
    case 0x7F3199DCu: goto label_7F3199DC;
    case 0x7F3199E0u: goto label_7F3199E0;
    case 0x7F3199E4u: goto label_7F3199E4;
    case 0x7F3199E8u: goto label_7F3199E8;
    case 0x7F3199ECu: goto label_7F3199EC;
    case 0x7F3199F0u: goto label_7F3199F0;
    case 0x7F3199F4u: goto label_7F3199F4;
    case 0x7F3199F8u: goto label_7F3199F8;
    case 0x7F3199FCu: goto label_7F3199FC;
    case 0x7F319A00u: goto label_7F319A00;
    case 0x7F319A04u: goto label_7F319A04;
    case 0x7F319A08u: goto label_7F319A08;
    case 0x7F319A0Cu: goto label_7F319A0C;
    case 0x7F319A10u: goto label_7F319A10;
    case 0x7F319A14u: goto label_7F319A14;
    case 0x7F319A18u: goto label_7F319A18;
    case 0x7F319A1Cu: goto label_7F319A1C;
    case 0x7F319A20u: goto label_7F319A20;
    case 0x7F319A24u: goto label_7F319A24;
    case 0x7F319A28u: goto label_7F319A28;
    case 0x7F319A2Cu: goto label_7F319A2C;
    case 0x7F319A30u: goto label_7F319A30;
    case 0x7F319A34u: goto label_7F319A34;
    case 0x7F319A38u: goto label_7F319A38;
    case 0x7F319A3Cu: goto label_7F319A3C;
    case 0x7F319A40u: goto label_7F319A40;
    case 0x7F319A44u: goto label_7F319A44;
    case 0x7F319A48u: goto label_7F319A48;
    case 0x7F319A4Cu: goto label_7F319A4C;
    case 0x7F319A50u: goto label_7F319A50;
    case 0x7F319A54u: goto label_7F319A54;
    case 0x7F319A58u: goto label_7F319A58;
    case 0x7F319A5Cu: goto label_7F319A5C;
    case 0x7F319A60u: goto label_7F319A60;
    case 0x7F319A64u: goto label_7F319A64;
    case 0x7F319A68u: goto label_7F319A68;
    case 0x7F319A6Cu: goto label_7F319A6C;
    case 0x7F319A70u: goto label_7F319A70;
    case 0x7F319A74u: goto label_7F319A74;
    case 0x7F319A78u: goto label_7F319A78;
    case 0x7F319A7Cu: goto label_7F319A7C;
    case 0x7F319A80u: goto label_7F319A80;
    case 0x7F319A84u: goto label_7F319A84;
    case 0x7F319A88u: goto label_7F319A88;
    case 0x7F319A8Cu: goto label_7F319A8C;
    case 0x7F319A90u: goto label_7F319A90;
    case 0x7F319A94u: goto label_7F319A94;
    case 0x7F319A98u: goto label_7F319A98;
    case 0x7F319A9Cu: goto label_7F319A9C;
    case 0x7F319AA0u: goto label_7F319AA0;
    case 0x7F319AA4u: goto label_7F319AA4;
    case 0x7F319AA8u: goto label_7F319AA8;
    case 0x7F319AACu: goto label_7F319AAC;
    case 0x7F319AB0u: goto label_7F319AB0;
    case 0x7F319AB4u: goto label_7F319AB4;
    case 0x7F319AB8u: goto label_7F319AB8;
    case 0x7F319ABCu: goto label_7F319ABC;
    case 0x7F319AC0u: goto label_7F319AC0;
    case 0x7F319AC4u: goto label_7F319AC4;
    case 0x7F319AC8u: goto label_7F319AC8;
    case 0x7F319ACCu: goto label_7F319ACC;
    case 0x7F319AD0u: goto label_7F319AD0;
    case 0x7F319AD4u: goto label_7F319AD4;
    case 0x7F319AD8u: goto label_7F319AD8;
    case 0x7F319ADCu: goto label_7F319ADC;
    case 0x7F319AE0u: goto label_7F319AE0;
    case 0x7F319AE4u: goto label_7F319AE4;
    case 0x7F319AE8u: goto label_7F319AE8;
    case 0x7F319AECu: goto label_7F319AEC;
    case 0x7F319AF0u: goto label_7F319AF0;
    case 0x7F319AF4u: goto label_7F319AF4;
    case 0x7F319AF8u: goto label_7F319AF8;
    case 0x7F319AFCu: goto label_7F319AFC;
    case 0x7F319B00u: goto label_7F319B00;
    case 0x7F319B04u: goto label_7F319B04;
    case 0x7F319B08u: goto label_7F319B08;
    case 0x7F319B0Cu: goto label_7F319B0C;
    case 0x7F319B10u: goto label_7F319B10;
    case 0x7F319B14u: goto label_7F319B14;
    case 0x7F319B18u: goto label_7F319B18;
    case 0x7F319B1Cu: goto label_7F319B1C;
    case 0x7F319B20u: goto label_7F319B20;
    case 0x7F319B24u: goto label_7F319B24;
    case 0x7F319B28u: goto label_7F319B28;
    case 0x7F319B2Cu: goto label_7F319B2C;
    case 0x7F319B30u: goto label_7F319B30;
    case 0x7F319B34u: goto label_7F319B34;
    case 0x7F319B38u: goto label_7F319B38;
    case 0x7F319B3Cu: goto label_7F319B3C;
    case 0x7F319B40u: goto label_7F319B40;
    case 0x7F319B44u: goto label_7F319B44;
    case 0x7F319B48u: goto label_7F319B48;
    case 0x7F319B4Cu: goto label_7F319B4C;
    case 0x7F319B50u: goto label_7F319B50;
    case 0x7F319B54u: goto label_7F319B54;
    case 0x7F319B58u: goto label_7F319B58;
    case 0x7F319B5Cu: goto label_7F319B5C;
    case 0x7F319B60u: goto label_7F319B60;
    case 0x7F319B64u: goto label_7F319B64;
    case 0x7F319B68u: goto label_7F319B68;
    case 0x7F319B6Cu: goto label_7F319B6C;
    case 0x7F319B70u: goto label_7F319B70;
    case 0x7F319B74u: goto label_7F319B74;
    case 0x7F319B78u: goto label_7F319B78;
    case 0x7F319B7Cu: goto label_7F319B7C;
    case 0x7F319B80u: goto label_7F319B80;
    case 0x7F319B84u: goto label_7F319B84;
    case 0x7F319B88u: goto label_7F319B88;
    case 0x7F319B8Cu: goto label_7F319B8C;
    case 0x7F319B90u: goto label_7F319B90;
    case 0x7F319B94u: goto label_7F319B94;
    case 0x7F319B98u: goto label_7F319B98;
    case 0x7F319B9Cu: goto label_7F319B9C;
    case 0x7F319BA0u: goto label_7F319BA0;
    case 0x7F319BA4u: goto label_7F319BA4;
    case 0x7F319BA8u: goto label_7F319BA8;
    case 0x7F319BACu: goto label_7F319BAC;
    case 0x7F319BB0u: goto label_7F319BB0;
    case 0x7F319BB4u: goto label_7F319BB4;
    case 0x7F319BB8u: goto label_7F319BB8;
    case 0x7F319BBCu: goto label_7F319BBC;
    case 0x7F319BC0u: goto label_7F319BC0;
    case 0x7F319BC4u: goto label_7F319BC4;
    case 0x7F319BC8u: goto label_7F319BC8;
    case 0x7F319BCCu: goto label_7F319BCC;
    case 0x7F319BD0u: goto label_7F319BD0;
    case 0x7F319BD4u: goto label_7F319BD4;
    case 0x7F319BD8u: goto label_7F319BD8;
    case 0x7F319BDCu: goto label_7F319BDC;
    case 0x7F319BE0u: goto label_7F319BE0;
    case 0x7F319BE4u: goto label_7F319BE4;
    case 0x7F319BE8u: goto label_7F319BE8;
    case 0x7F319BECu: goto label_7F319BEC;
    case 0x7F319BF0u: goto label_7F319BF0;
    case 0x7F319BF4u: goto label_7F319BF4;
    case 0x7F319BF8u: goto label_7F319BF8;
    case 0x7F319BFCu: goto label_7F319BFC;
    case 0x7F319C00u: goto label_7F319C00;
    case 0x7F319C04u: goto label_7F319C04;
    case 0x7F319C08u: goto label_7F319C08;
    case 0x7F319C0Cu: goto label_7F319C0C;
    case 0x7F319C10u: goto label_7F319C10;
    case 0x7F319C14u: goto label_7F319C14;
    case 0x7F319C18u: goto label_7F319C18;
    case 0x7F319C1Cu: goto label_7F319C1C;
    case 0x7F319C20u: goto label_7F319C20;
    case 0x7F319C24u: goto label_7F319C24;
    case 0x7F319C28u: goto label_7F319C28;
    case 0x7F319C2Cu: goto label_7F319C2C;
    case 0x7F319C30u: goto label_7F319C30;
    case 0x7F319C34u: goto label_7F319C34;
    case 0x7F319C38u: goto label_7F319C38;
    case 0x7F319C3Cu: goto label_7F319C3C;
    case 0x7F319C40u: goto label_7F319C40;
    case 0x7F319C44u: goto label_7F319C44;
    case 0x7F319C48u: goto label_7F319C48;
    case 0x7F319C4Cu: goto label_7F319C4C;
    case 0x7F319C50u: goto label_7F319C50;
    case 0x7F319C54u: goto label_7F319C54;
    case 0x7F319C58u: goto label_7F319C58;
    case 0x7F319C5Cu: goto label_7F319C5C;
    case 0x7F319C60u: goto label_7F319C60;
    case 0x7F319C64u: goto label_7F319C64;
    case 0x7F319C68u: goto label_7F319C68;
    case 0x7F319C6Cu: goto label_7F319C6C;
    case 0x7F319C70u: goto label_7F319C70;
    case 0x7F319C74u: goto label_7F319C74;
    case 0x7F319C78u: goto label_7F319C78;
    case 0x7F319C7Cu: goto label_7F319C7C;
    case 0x7F319C80u: goto label_7F319C80;
    case 0x7F319C84u: goto label_7F319C84;
    case 0x7F319C88u: goto label_7F319C88;
    case 0x7F319C8Cu: goto label_7F319C8C;
    case 0x7F319C90u: goto label_7F319C90;
    case 0x7F319C94u: goto label_7F319C94;
    case 0x7F319C98u: goto label_7F319C98;
    case 0x7F319C9Cu: goto label_7F319C9C;
    case 0x7F319CA0u: goto label_7F319CA0;
    case 0x7F319CA4u: goto label_7F319CA4;
    case 0x7F319CA8u: goto label_7F319CA8;
    case 0x7F319CACu: goto label_7F319CAC;
    case 0x7F319CB0u: goto label_7F319CB0;
    case 0x7F319CB4u: goto label_7F319CB4;
    case 0x7F319CB8u: goto label_7F319CB8;
    case 0x7F319CBCu: goto label_7F319CBC;
    case 0x7F319CC0u: goto label_7F319CC0;
    case 0x7F319CC4u: goto label_7F319CC4;
    case 0x7F319CC8u: goto label_7F319CC8;
    case 0x7F319CCCu: goto label_7F319CCC;
    case 0x7F319CD0u: goto label_7F319CD0;
    case 0x7F319CD4u: goto label_7F319CD4;
    case 0x7F319CD8u: goto label_7F319CD8;
    case 0x7F319CDCu: goto label_7F319CDC;
    case 0x7F319CE0u: goto label_7F319CE0;
    case 0x7F319CE4u: goto label_7F319CE4;
    case 0x7F319CE8u: goto label_7F319CE8;
    case 0x7F319CECu: goto label_7F319CEC;
    case 0x7F319CF0u: goto label_7F319CF0;
    case 0x7F319CF4u: goto label_7F319CF4;
    case 0x7F319CF8u: goto label_7F319CF8;
    case 0x7F319CFCu: goto label_7F319CFC;
    case 0x7F319D00u: goto label_7F319D00;
    case 0x7F319D04u: goto label_7F319D04;
    case 0x7F319D08u: goto label_7F319D08;
    case 0x7F319D0Cu: goto label_7F319D0C;
    case 0x7F319D10u: goto label_7F319D10;
    case 0x7F319D14u: goto label_7F319D14;
    case 0x7F319D18u: goto label_7F319D18;
    case 0x7F319D1Cu: goto label_7F319D1C;
    case 0x7F319D20u: goto label_7F319D20;
    case 0x7F319D24u: goto label_7F319D24;
    case 0x7F319D28u: goto label_7F319D28;
    case 0x7F319D2Cu: goto label_7F319D2C;
    case 0x7F319D30u: goto label_7F319D30;
    case 0x7F319D34u: goto label_7F319D34;
    case 0x7F319D38u: goto label_7F319D38;
    case 0x7F319D3Cu: goto label_7F319D3C;
    case 0x7F319D40u: goto label_7F319D40;
    case 0x7F319D44u: goto label_7F319D44;
    case 0x7F319D48u: goto label_7F319D48;
    case 0x7F319D4Cu: goto label_7F319D4C;
    case 0x7F319D50u: goto label_7F319D50;
    case 0x7F319D54u: goto label_7F319D54;
    case 0x7F319D58u: goto label_7F319D58;
    case 0x7F319D5Cu: goto label_7F319D5C;
    case 0x7F319D60u: goto label_7F319D60;
    case 0x7F319D64u: goto label_7F319D64;
    case 0x7F319D68u: goto label_7F319D68;
    case 0x7F319D6Cu: goto label_7F319D6C;
    case 0x7F319D70u: goto label_7F319D70;
    case 0x7F319D74u: goto label_7F319D74;
    case 0x7F319D78u: goto label_7F319D78;
    case 0x7F319D7Cu: goto label_7F319D7C;
    case 0x7F319D80u: goto label_7F319D80;
    case 0x7F319D84u: goto label_7F319D84;
    case 0x7F319D88u: goto label_7F319D88;
    case 0x7F319D8Cu: goto label_7F319D8C;
    case 0x7F319D90u: goto label_7F319D90;
    case 0x7F319D94u: goto label_7F319D94;
    case 0x7F319D98u: goto label_7F319D98;
    case 0x7F319D9Cu: goto label_7F319D9C;
    case 0x7F319DA0u: goto label_7F319DA0;
    case 0x7F319DA4u: goto label_7F319DA4;
    case 0x7F319DA8u: goto label_7F319DA8;
    case 0x7F319DACu: goto label_7F319DAC;
    case 0x7F319DB0u: goto label_7F319DB0;
    case 0x7F319DB4u: goto label_7F319DB4;
    case 0x7F319DB8u: goto label_7F319DB8;
    case 0x7F319DBCu: goto label_7F319DBC;
    case 0x7F319DC0u: goto label_7F319DC0;
    case 0x7F319DC4u: goto label_7F319DC4;
    case 0x7F319DC8u: goto label_7F319DC8;
    case 0x7F319DCCu: goto label_7F319DCC;
    case 0x7F319DD0u: goto label_7F319DD0;
    case 0x7F319DD4u: goto label_7F319DD4;
    case 0x7F319DD8u: goto label_7F319DD8;
    case 0x7F319DDCu: goto label_7F319DDC;
    case 0x7F319DE0u: goto label_7F319DE0;
    case 0x7F319DE4u: goto label_7F319DE4;
    case 0x7F319DE8u: goto label_7F319DE8;
    case 0x7F319DECu: goto label_7F319DEC;
    case 0x7F319DF0u: goto label_7F319DF0;
    case 0x7F319DF4u: goto label_7F319DF4;
    case 0x7F319DF8u: goto label_7F319DF8;
    case 0x7F319DFCu: goto label_7F319DFC;
    case 0x7F319E00u: goto label_7F319E00;
    case 0x7F319E04u: goto label_7F319E04;
    case 0x7F319E08u: goto label_7F319E08;
    case 0x7F319E0Cu: goto label_7F319E0C;
    case 0x7F319E10u: goto label_7F319E10;
    case 0x7F319E14u: goto label_7F319E14;
    case 0x7F319E18u: goto label_7F319E18;
    case 0x7F319E1Cu: goto label_7F319E1C;
    case 0x7F319E20u: goto label_7F319E20;
    case 0x7F319E24u: goto label_7F319E24;
    case 0x7F319E28u: goto label_7F319E28;
    case 0x7F319E2Cu: goto label_7F319E2C;
    case 0x7F319E30u: goto label_7F319E30;
    case 0x7F319E34u: goto label_7F319E34;
    case 0x7F319E38u: goto label_7F319E38;
    case 0x7F319E3Cu: goto label_7F319E3C;
    case 0x7F319E40u: goto label_7F319E40;
    case 0x7F319E44u: goto label_7F319E44;
    case 0x7F319E48u: goto label_7F319E48;
    case 0x7F319E4Cu: goto label_7F319E4C;
    case 0x7F319E50u: goto label_7F319E50;
    case 0x7F319E54u: goto label_7F319E54;
    case 0x7F319E58u: goto label_7F319E58;
    case 0x7F319E5Cu: goto label_7F319E5C;
    case 0x7F319E60u: goto label_7F319E60;
    case 0x7F319E64u: goto label_7F319E64;
    case 0x7F319E68u: goto label_7F319E68;
    case 0x7F319E6Cu: goto label_7F319E6C;
    case 0x7F319E70u: goto label_7F319E70;
    case 0x7F319E74u: goto label_7F319E74;
    case 0x7F319E78u: goto label_7F319E78;
    case 0x7F319E7Cu: goto label_7F319E7C;
    case 0x7F319E80u: goto label_7F319E80;
    case 0x7F319E84u: goto label_7F319E84;
    case 0x7F319E88u: goto label_7F319E88;
    case 0x7F319E8Cu: goto label_7F319E8C;
    case 0x7F319E90u: goto label_7F319E90;
    case 0x7F319E94u: goto label_7F319E94;
    case 0x7F319E98u: goto label_7F319E98;
    case 0x7F319E9Cu: goto label_7F319E9C;
    case 0x7F319EA0u: goto label_7F319EA0;
    case 0x7F319EA4u: goto label_7F319EA4;
    case 0x7F319EA8u: goto label_7F319EA8;
    case 0x7F319EACu: goto label_7F319EAC;
    case 0x7F319EB0u: goto label_7F319EB0;
    case 0x7F319EB4u: goto label_7F319EB4;
    case 0x7F319EB8u: goto label_7F319EB8;
    case 0x7F319EBCu: goto label_7F319EBC;
    case 0x7F319EC0u: goto label_7F319EC0;
    case 0x7F319EC4u: goto label_7F319EC4;
    case 0x7F319EC8u: goto label_7F319EC8;
    case 0x7F319ECCu: goto label_7F319ECC;
    case 0x7F319ED0u: goto label_7F319ED0;
    case 0x7F319ED4u: goto label_7F319ED4;
    case 0x7F319ED8u: goto label_7F319ED8;
    case 0x7F319EDCu: goto label_7F319EDC;
    case 0x7F319EE0u: goto label_7F319EE0;
    case 0x7F319EE4u: goto label_7F319EE4;
    case 0x7F319EE8u: goto label_7F319EE8;
    case 0x7F319EECu: goto label_7F319EEC;
    case 0x7F319EF0u: goto label_7F319EF0;
    case 0x7F319EF4u: goto label_7F319EF4;
    case 0x7F319EF8u: goto label_7F319EF8;
    case 0x7F319EFCu: goto label_7F319EFC;
    case 0x7F319F00u: goto label_7F319F00;
    case 0x7F319F04u: goto label_7F319F04;
    case 0x7F319F08u: goto label_7F319F08;
    case 0x7F319F0Cu: goto label_7F319F0C;
    case 0x7F319F10u: goto label_7F319F10;
    case 0x7F319F14u: goto label_7F319F14;
    case 0x7F319F18u: goto label_7F319F18;
    case 0x7F319F1Cu: goto label_7F319F1C;
    case 0x7F319F20u: goto label_7F319F20;
    case 0x7F319F24u: goto label_7F319F24;
    case 0x7F319F28u: goto label_7F319F28;
    case 0x7F319F2Cu: goto label_7F319F2C;
    case 0x7F319F30u: goto label_7F319F30;
    case 0x7F319F34u: goto label_7F319F34;
    case 0x7F319F38u: goto label_7F319F38;
    case 0x7F319F3Cu: goto label_7F319F3C;
    case 0x7F319F40u: goto label_7F319F40;
    case 0x7F319F44u: goto label_7F319F44;
    case 0x7F319F48u: goto label_7F319F48;
    case 0x7F319F4Cu: goto label_7F319F4C;
    case 0x7F319F50u: goto label_7F319F50;
    case 0x7F319F54u: goto label_7F319F54;
    case 0x7F319F58u: goto label_7F319F58;
    case 0x7F319F5Cu: goto label_7F319F5C;
    case 0x7F319F60u: goto label_7F319F60;
    case 0x7F319F64u: goto label_7F319F64;
    case 0x7F319F68u: goto label_7F319F68;
    case 0x7F319F6Cu: goto label_7F319F6C;
    case 0x7F319F70u: goto label_7F319F70;
    case 0x7F319F74u: goto label_7F319F74;
    case 0x7F319F78u: goto label_7F319F78;
    case 0x7F319F7Cu: goto label_7F319F7C;
    case 0x7F319F80u: goto label_7F319F80;
    case 0x7F319F84u: goto label_7F319F84;
    case 0x7F319F88u: goto label_7F319F88;
    case 0x7F319F8Cu: goto label_7F319F8C;
    case 0x7F319F90u: goto label_7F319F90;
    case 0x7F319F94u: goto label_7F319F94;
    case 0x7F319F98u: goto label_7F319F98;
    case 0x7F319F9Cu: goto label_7F319F9C;
    case 0x7F319FA0u: goto label_7F319FA0;
    case 0x7F319FA4u: goto label_7F319FA4;
    case 0x7F319FA8u: goto label_7F319FA8;
    case 0x7F319FACu: goto label_7F319FAC;
    case 0x7F319FB0u: goto label_7F319FB0;
    case 0x7F319FB4u: goto label_7F319FB4;
    case 0x7F319FB8u: goto label_7F319FB8;
    case 0x7F319FBCu: goto label_7F319FBC;
    case 0x7F319FC0u: goto label_7F319FC0;
    case 0x7F319FC4u: goto label_7F319FC4;
    case 0x7F319FC8u: goto label_7F319FC8;
    case 0x7F319FCCu: goto label_7F319FCC;
    case 0x7F319FD0u: goto label_7F319FD0;
    case 0x7F319FD4u: goto label_7F319FD4;
    case 0x7F319FD8u: goto label_7F319FD8;
    case 0x7F319FDCu: goto label_7F319FDC;
    case 0x7F319FE0u: goto label_7F319FE0;
    case 0x7F319FE4u: goto label_7F319FE4;
    case 0x7F319FE8u: goto label_7F319FE8;
    case 0x7F319FECu: goto label_7F319FEC;
    case 0x7F319FF0u: goto label_7F319FF0;
    case 0x7F319FF4u: goto label_7F319FF4;
    case 0x7F319FF8u: goto label_7F319FF8;
    case 0x7F319FFCu: goto label_7F319FFC;
    case 0x7F31A000u: goto label_7F31A000;
    case 0x7F31A004u: goto label_7F31A004;
    case 0x7F31A008u: goto label_7F31A008;
    case 0x7F31A00Cu: goto label_7F31A00C;
    case 0x7F31A010u: goto label_7F31A010;
    case 0x7F31A014u: goto label_7F31A014;
    case 0x7F31A018u: goto label_7F31A018;
    case 0x7F31A01Cu: goto label_7F31A01C;
    case 0x7F31A020u: goto label_7F31A020;
    case 0x7F31A024u: goto label_7F31A024;
    case 0x7F31A028u: goto label_7F31A028;
    case 0x7F31A02Cu: goto label_7F31A02C;
    case 0x7F31A030u: goto label_7F31A030;
    case 0x7F31A034u: goto label_7F31A034;
    case 0x7F31A038u: goto label_7F31A038;
    case 0x7F31A03Cu: goto label_7F31A03C;
    case 0x7F31A040u: goto label_7F31A040;
    case 0x7F31A044u: goto label_7F31A044;
    case 0x7F31A048u: goto label_7F31A048;
    case 0x7F31A04Cu: goto label_7F31A04C;
    case 0x7F31A050u: goto label_7F31A050;
    case 0x7F31A054u: goto label_7F31A054;
    case 0x7F31A058u: goto label_7F31A058;
    case 0x7F31A05Cu: goto label_7F31A05C;
    case 0x7F31A060u: goto label_7F31A060;
    case 0x7F31A064u: goto label_7F31A064;
    case 0x7F31A068u: goto label_7F31A068;
    case 0x7F31A06Cu: goto label_7F31A06C;
    case 0x7F31A070u: goto label_7F31A070;
    case 0x7F31A074u: goto label_7F31A074;
    case 0x7F31A078u: goto label_7F31A078;
    case 0x7F31A07Cu: goto label_7F31A07C;
    case 0x7F31A080u: goto label_7F31A080;
    case 0x7F31A084u: goto label_7F31A084;
    case 0x7F31A088u: goto label_7F31A088;
    case 0x7F31A08Cu: goto label_7F31A08C;
    case 0x7F31A090u: goto label_7F31A090;
    case 0x7F31A094u: goto label_7F31A094;
    case 0x7F31A098u: goto label_7F31A098;
    case 0x7F31A09Cu: goto label_7F31A09C;
    case 0x7F31A0A0u: goto label_7F31A0A0;
    case 0x7F31A0A4u: goto label_7F31A0A4;
    case 0x7F31A0A8u: goto label_7F31A0A8;
    case 0x7F31A0ACu: goto label_7F31A0AC;
    case 0x7F31A0B0u: goto label_7F31A0B0;
    case 0x7F31A0B4u: goto label_7F31A0B4;
    case 0x7F31A0B8u: goto label_7F31A0B8;
    case 0x7F31A0BCu: goto label_7F31A0BC;
    case 0x7F31A0C0u: goto label_7F31A0C0;
    case 0x7F31A0C4u: goto label_7F31A0C4;
    case 0x7F31A0C8u: goto label_7F31A0C8;
    case 0x7F31A0CCu: goto label_7F31A0CC;
    case 0x7F31A0D0u: goto label_7F31A0D0;
    case 0x7F31A0D4u: goto label_7F31A0D4;
    case 0x7F31A0D8u: goto label_7F31A0D8;
    case 0x7F31A0DCu: goto label_7F31A0DC;
    case 0x7F31A0E0u: goto label_7F31A0E0;
    case 0x7F31A0E4u: goto label_7F31A0E4;
    case 0x7F31A0E8u: goto label_7F31A0E8;
    case 0x7F31A0ECu: goto label_7F31A0EC;
    case 0x7F31A0F0u: goto label_7F31A0F0;
    case 0x7F31A0F4u: goto label_7F31A0F4;
    case 0x7F31A0F8u: goto label_7F31A0F8;
    case 0x7F31A0FCu: goto label_7F31A0FC;
    case 0x7F31A100u: goto label_7F31A100;
    case 0x7F31A104u: goto label_7F31A104;
    case 0x7F31A108u: goto label_7F31A108;
    case 0x7F31A10Cu: goto label_7F31A10C;
    case 0x7F31A110u: goto label_7F31A110;
    case 0x7F31A114u: goto label_7F31A114;
    case 0x7F31A118u: goto label_7F31A118;
    case 0x7F31A11Cu: goto label_7F31A11C;
    case 0x7F31A120u: goto label_7F31A120;
    case 0x7F31A124u: goto label_7F31A124;
    case 0x7F31A128u: goto label_7F31A128;
    case 0x7F31A12Cu: goto label_7F31A12C;
    case 0x7F31A130u: goto label_7F31A130;
    case 0x7F31A134u: goto label_7F31A134;
    case 0x7F31A138u: goto label_7F31A138;
    case 0x7F31A13Cu: goto label_7F31A13C;
    case 0x7F31A140u: goto label_7F31A140;
    case 0x7F31A144u: goto label_7F31A144;
    case 0x7F31A148u: goto label_7F31A148;
    case 0x7F31A14Cu: goto label_7F31A14C;
    case 0x7F31A150u: goto label_7F31A150;
    case 0x7F31A154u: goto label_7F31A154;
    case 0x7F31A158u: goto label_7F31A158;
    case 0x7F31A15Cu: goto label_7F31A15C;
    case 0x7F31A160u: goto label_7F31A160;
    case 0x7F31A164u: goto label_7F31A164;
    case 0x7F31A168u: goto label_7F31A168;
    case 0x7F31A16Cu: goto label_7F31A16C;
    case 0x7F31A170u: goto label_7F31A170;
    case 0x7F31A174u: goto label_7F31A174;
    case 0x7F31A178u: goto label_7F31A178;
    case 0x7F31A17Cu: goto label_7F31A17C;
    case 0x7F31A180u: goto label_7F31A180;
    case 0x7F31A184u: goto label_7F31A184;
    case 0x7F31A188u: goto label_7F31A188;
    case 0x7F31A18Cu: goto label_7F31A18C;
    case 0x7F31A190u: goto label_7F31A190;
    case 0x7F31A194u: goto label_7F31A194;
    case 0x7F31A198u: goto label_7F31A198;
    case 0x7F31A19Cu: goto label_7F31A19C;
    case 0x7F31A1A0u: goto label_7F31A1A0;
    case 0x7F31A1A4u: goto label_7F31A1A4;
    case 0x7F31A1A8u: goto label_7F31A1A8;
    case 0x7F31A1ACu: goto label_7F31A1AC;
    case 0x7F31A1B0u: goto label_7F31A1B0;
    case 0x7F31A1B4u: goto label_7F31A1B4;
    case 0x7F31A1B8u: goto label_7F31A1B8;
    case 0x7F31A1BCu: goto label_7F31A1BC;
    case 0x7F31A1C0u: goto label_7F31A1C0;
    case 0x7F31A1C4u: goto label_7F31A1C4;
    case 0x7F31A1C8u: goto label_7F31A1C8;
    case 0x7F31A1CCu: goto label_7F31A1CC;
    case 0x7F31A1D0u: goto label_7F31A1D0;
    case 0x7F31A1D4u: goto label_7F31A1D4;
    case 0x7F31A1D8u: goto label_7F31A1D8;
    case 0x7F31A1DCu: goto label_7F31A1DC;
    case 0x7F31A1E0u: goto label_7F31A1E0;
    case 0x7F31A1E4u: goto label_7F31A1E4;
    case 0x7F31A1E8u: goto label_7F31A1E8;
    case 0x7F31A1ECu: goto label_7F31A1EC;
    case 0x7F31A1F0u: goto label_7F31A1F0;
    case 0x7F31A1F4u: goto label_7F31A1F4;
    case 0x7F31A1F8u: goto label_7F31A1F8;
    case 0x7F31A1FCu: goto label_7F31A1FC;
    case 0x7F31A200u: goto label_7F31A200;
    case 0x7F31A204u: goto label_7F31A204;
    case 0x7F31A208u: goto label_7F31A208;
    case 0x7F31A20Cu: goto label_7F31A20C;
    case 0x7F31A210u: goto label_7F31A210;
    case 0x7F31A214u: goto label_7F31A214;
    case 0x7F31A218u: goto label_7F31A218;
    case 0x7F31A21Cu: goto label_7F31A21C;
    case 0x7F31A220u: goto label_7F31A220;
    case 0x7F31A224u: goto label_7F31A224;
    case 0x7F31A228u: goto label_7F31A228;
    case 0x7F31A22Cu: goto label_7F31A22C;
    case 0x7F31A230u: goto label_7F31A230;
    case 0x7F31A234u: goto label_7F31A234;
    case 0x7F31A238u: goto label_7F31A238;
    case 0x7F31A23Cu: goto label_7F31A23C;
    case 0x7F31A240u: goto label_7F31A240;
    case 0x7F31A244u: goto label_7F31A244;
    case 0x7F31A248u: goto label_7F31A248;
    case 0x7F31A24Cu: goto label_7F31A24C;
    case 0x7F31A250u: goto label_7F31A250;
    case 0x7F31A254u: goto label_7F31A254;
    case 0x7F31A258u: goto label_7F31A258;
    case 0x7F31A25Cu: goto label_7F31A25C;
    case 0x7F31A260u: goto label_7F31A260;
    case 0x7F31A264u: goto label_7F31A264;
    case 0x7F31A268u: goto label_7F31A268;
    case 0x7F31A26Cu: goto label_7F31A26C;
    case 0x7F31A270u: goto label_7F31A270;
    case 0x7F31A274u: goto label_7F31A274;
    case 0x7F31A278u: goto label_7F31A278;
    case 0x7F31A27Cu: goto label_7F31A27C;
    case 0x7F31A280u: goto label_7F31A280;
    case 0x7F31A284u: goto label_7F31A284;
    case 0x7F31A288u: goto label_7F31A288;
    case 0x7F31A28Cu: goto label_7F31A28C;
    case 0x7F31A290u: goto label_7F31A290;
    case 0x7F31A294u: goto label_7F31A294;
    case 0x7F31A298u: goto label_7F31A298;
    case 0x7F31A29Cu: goto label_7F31A29C;
    case 0x7F31A2A0u: goto label_7F31A2A0;
    case 0x7F31A2A4u: goto label_7F31A2A4;
    case 0x7F31A2A8u: goto label_7F31A2A8;
    case 0x7F31A2ACu: goto label_7F31A2AC;
    case 0x7F31A2B0u: goto label_7F31A2B0;
    case 0x7F31A2B4u: goto label_7F31A2B4;
    case 0x7F31A2B8u: goto label_7F31A2B8;
    case 0x7F31A2BCu: goto label_7F31A2BC;
    case 0x7F31A2C0u: goto label_7F31A2C0;
    case 0x7F31A2C4u: goto label_7F31A2C4;
    case 0x7F31A2C8u: goto label_7F31A2C8;
    case 0x7F31A2CCu: goto label_7F31A2CC;
    case 0x7F31A2D0u: goto label_7F31A2D0;
    case 0x7F31A2D4u: goto label_7F31A2D4;
    case 0x7F31A2D8u: goto label_7F31A2D8;
    case 0x7F31A2DCu: goto label_7F31A2DC;
    case 0x7F31A2E0u: goto label_7F31A2E0;
    case 0x7F31A2E4u: goto label_7F31A2E4;
    case 0x7F31A2E8u: goto label_7F31A2E8;
    case 0x7F31A2ECu: goto label_7F31A2EC;
    case 0x7F31A2F0u: goto label_7F31A2F0;
    case 0x7F31A2F4u: goto label_7F31A2F4;
    case 0x7F31A2F8u: goto label_7F31A2F8;
    case 0x7F31A2FCu: goto label_7F31A2FC;
    case 0x7F31A300u: goto label_7F31A300;
    case 0x7F31A304u: goto label_7F31A304;
    case 0x7F31A308u: goto label_7F31A308;
    case 0x7F31A30Cu: goto label_7F31A30C;
    case 0x7F31A310u: goto label_7F31A310;
    case 0x7F31A314u: goto label_7F31A314;
    case 0x7F31A318u: goto label_7F31A318;
    case 0x7F31A31Cu: goto label_7F31A31C;
    case 0x7F31A320u: goto label_7F31A320;
    case 0x7F31A324u: goto label_7F31A324;
    case 0x7F31A328u: goto label_7F31A328;
    case 0x7F31A32Cu: goto label_7F31A32C;
    case 0x7F31A330u: goto label_7F31A330;
    case 0x7F31A334u: goto label_7F31A334;
    case 0x7F31A338u: goto label_7F31A338;
    case 0x7F31A33Cu: goto label_7F31A33C;
    case 0x7F31A340u: goto label_7F31A340;
    case 0x7F31A344u: goto label_7F31A344;
    case 0x7F31A348u: goto label_7F31A348;
    case 0x7F31A34Cu: goto label_7F31A34C;
    case 0x7F31A350u: goto label_7F31A350;
    case 0x7F31A354u: goto label_7F31A354;
    case 0x7F31A358u: goto label_7F31A358;
    case 0x7F31A35Cu: goto label_7F31A35C;
    case 0x7F31A360u: goto label_7F31A360;
    case 0x7F31A364u: goto label_7F31A364;
    case 0x7F31A368u: goto label_7F31A368;
    case 0x7F31A36Cu: goto label_7F31A36C;
    case 0x7F31A370u: goto label_7F31A370;
    case 0x7F31A374u: goto label_7F31A374;
    case 0x7F31A378u: goto label_7F31A378;
    case 0x7F31A37Cu: goto label_7F31A37C;
    case 0x7F31A380u: goto label_7F31A380;
    case 0x7F31A384u: goto label_7F31A384;
    case 0x7F31A388u: goto label_7F31A388;
    case 0x7F31A38Cu: goto label_7F31A38C;
    case 0x7F31A390u: goto label_7F31A390;
    case 0x7F31A394u: goto label_7F31A394;
    case 0x7F31A398u: goto label_7F31A398;
    case 0x7F31A39Cu: goto label_7F31A39C;
    case 0x7F31A3A0u: goto label_7F31A3A0;
    case 0x7F31A3A4u: goto label_7F31A3A4;
    case 0x7F31A3A8u: goto label_7F31A3A8;
    case 0x7F31A3ACu: goto label_7F31A3AC;
    case 0x7F31A3B0u: goto label_7F31A3B0;
    case 0x7F31A3B4u: goto label_7F31A3B4;
    case 0x7F31A3B8u: goto label_7F31A3B8;
    case 0x7F31A3BCu: goto label_7F31A3BC;
    case 0x7F31A3C0u: goto label_7F31A3C0;
    case 0x7F31A3C4u: goto label_7F31A3C4;
    case 0x7F31A3C8u: goto label_7F31A3C8;
    case 0x7F31A3CCu: goto label_7F31A3CC;
    case 0x7F31A3D0u: goto label_7F31A3D0;
    case 0x7F31A3D4u: goto label_7F31A3D4;
    case 0x7F31A3D8u: goto label_7F31A3D8;
    case 0x7F31A3DCu: goto label_7F31A3DC;
    case 0x7F31A3E0u: goto label_7F31A3E0;
    case 0x7F31A3E4u: goto label_7F31A3E4;
    case 0x7F31A3E8u: goto label_7F31A3E8;
    case 0x7F31A3ECu: goto label_7F31A3EC;
    case 0x7F31A3F0u: goto label_7F31A3F0;
    case 0x7F31A3F4u: goto label_7F31A3F4;
    case 0x7F31A3F8u: goto label_7F31A3F8;
    case 0x7F31A3FCu: goto label_7F31A3FC;
    case 0x7F31A400u: goto label_7F31A400;
    case 0x7F31A404u: goto label_7F31A404;
    case 0x7F31A408u: goto label_7F31A408;
    case 0x7F31A40Cu: goto label_7F31A40C;
    case 0x7F31A410u: goto label_7F31A410;
    case 0x7F31A414u: goto label_7F31A414;
    case 0x7F31A418u: goto label_7F31A418;
    case 0x7F31A41Cu: goto label_7F31A41C;
    case 0x7F31A420u: goto label_7F31A420;
    case 0x7F31A424u: goto label_7F31A424;
    case 0x7F31A428u: goto label_7F31A428;
    case 0x7F31A42Cu: goto label_7F31A42C;
    case 0x7F31A430u: goto label_7F31A430;
    case 0x7F31A434u: goto label_7F31A434;
    case 0x7F31A438u: goto label_7F31A438;
    case 0x7F31A43Cu: goto label_7F31A43C;
    case 0x7F31A440u: goto label_7F31A440;
    case 0x7F31A444u: goto label_7F31A444;
    case 0x7F31A448u: goto label_7F31A448;
    case 0x7F31A44Cu: goto label_7F31A44C;
    case 0x7F31A450u: goto label_7F31A450;
    case 0x7F31A454u: goto label_7F31A454;
    case 0x7F31A458u: goto label_7F31A458;
    case 0x7F31A45Cu: goto label_7F31A45C;
    case 0x7F31A460u: goto label_7F31A460;
    case 0x7F31A464u: goto label_7F31A464;
    case 0x7F31A468u: goto label_7F31A468;
    case 0x7F31A46Cu: goto label_7F31A46C;
    case 0x7F31A470u: goto label_7F31A470;
    case 0x7F31A474u: goto label_7F31A474;
    case 0x7F31A478u: goto label_7F31A478;
    case 0x7F31A47Cu: goto label_7F31A47C;
    case 0x7F31A480u: goto label_7F31A480;
    case 0x7F31A484u: goto label_7F31A484;
    case 0x7F31A488u: goto label_7F31A488;
    case 0x7F31A48Cu: goto label_7F31A48C;
    case 0x7F31A490u: goto label_7F31A490;
    case 0x7F31A494u: goto label_7F31A494;
    case 0x7F31A498u: goto label_7F31A498;
    case 0x7F31A49Cu: goto label_7F31A49C;
    case 0x7F31A4A0u: goto label_7F31A4A0;
    case 0x7F31A4A4u: goto label_7F31A4A4;
    case 0x7F31A4A8u: goto label_7F31A4A8;
    case 0x7F31A4ACu: goto label_7F31A4AC;
    case 0x7F31A4B0u: goto label_7F31A4B0;
    case 0x7F31A4B4u: goto label_7F31A4B4;
    case 0x7F31A4B8u: goto label_7F31A4B8;
    case 0x7F31A4BCu: goto label_7F31A4BC;
    case 0x7F31A4C0u: goto label_7F31A4C0;
    case 0x7F31A4C4u: goto label_7F31A4C4;
    case 0x7F31A4C8u: goto label_7F31A4C8;
    case 0x7F31A4CCu: goto label_7F31A4CC;
    case 0x7F31A4D0u: goto label_7F31A4D0;
    case 0x7F31A4D4u: goto label_7F31A4D4;
    case 0x7F31A4D8u: goto label_7F31A4D8;
    case 0x7F31A4DCu: goto label_7F31A4DC;
    case 0x7F31A4E0u: goto label_7F31A4E0;
    case 0x7F31A4E4u: goto label_7F31A4E4;
    case 0x7F31A4E8u: goto label_7F31A4E8;
    case 0x7F31A4ECu: goto label_7F31A4EC;
    case 0x7F31A4F0u: goto label_7F31A4F0;
    case 0x7F31A4F4u: goto label_7F31A4F4;
    case 0x7F31A4F8u: goto label_7F31A4F8;
    case 0x7F31A4FCu: goto label_7F31A4FC;
    case 0x7F31A500u: goto label_7F31A500;
    case 0x7F31A504u: goto label_7F31A504;
    case 0x7F31A508u: goto label_7F31A508;
    case 0x7F31A50Cu: goto label_7F31A50C;
    case 0x7F31A510u: goto label_7F31A510;
    case 0x7F31A514u: goto label_7F31A514;
    case 0x7F31A518u: goto label_7F31A518;
    case 0x7F31A51Cu: goto label_7F31A51C;
    case 0x7F31A520u: goto label_7F31A520;
    case 0x7F31A524u: goto label_7F31A524;
    case 0x7F31A528u: goto label_7F31A528;
    case 0x7F31A52Cu: goto label_7F31A52C;
    case 0x7F31A530u: goto label_7F31A530;
    case 0x7F31A534u: goto label_7F31A534;
    case 0x7F31A538u: goto label_7F31A538;
    case 0x7F31A53Cu: goto label_7F31A53C;
    case 0x7F31A540u: goto label_7F31A540;
    case 0x7F31A544u: goto label_7F31A544;
    case 0x7F31A548u: goto label_7F31A548;
    case 0x7F31A54Cu: goto label_7F31A54C;
    case 0x7F31A550u: goto label_7F31A550;
    case 0x7F31A554u: goto label_7F31A554;
    case 0x7F31A558u: goto label_7F31A558;
    case 0x7F31A55Cu: goto label_7F31A55C;
    case 0x7F31A560u: goto label_7F31A560;
    case 0x7F31A564u: goto label_7F31A564;
    case 0x7F31A568u: goto label_7F31A568;
    case 0x7F31A56Cu: goto label_7F31A56C;
    case 0x7F31A570u: goto label_7F31A570;
    case 0x7F31A574u: goto label_7F31A574;
    case 0x7F31A578u: goto label_7F31A578;
    case 0x7F31A57Cu: goto label_7F31A57C;
    case 0x7F31A580u: goto label_7F31A580;
    case 0x7F31A584u: goto label_7F31A584;
    case 0x7F31A588u: goto label_7F31A588;
    case 0x7F31A58Cu: goto label_7F31A58C;
    case 0x7F31A590u: goto label_7F31A590;
    case 0x7F31A594u: goto label_7F31A594;
    case 0x7F31A598u: goto label_7F31A598;
    case 0x7F31A59Cu: goto label_7F31A59C;
    case 0x7F31A5A0u: goto label_7F31A5A0;
    case 0x7F31A5A4u: goto label_7F31A5A4;
    case 0x7F31A5A8u: goto label_7F31A5A8;
    case 0x7F31A5ACu: goto label_7F31A5AC;
    case 0x7F31A5B0u: goto label_7F31A5B0;
    case 0x7F31A5B4u: goto label_7F31A5B4;
    case 0x7F31A5B8u: goto label_7F31A5B8;
    case 0x7F31A5BCu: goto label_7F31A5BC;
    case 0x7F31A5C0u: goto label_7F31A5C0;
    case 0x7F31A5C4u: goto label_7F31A5C4;
    case 0x7F31A5C8u: goto label_7F31A5C8;
    case 0x7F31A5CCu: goto label_7F31A5CC;
    case 0x7F31A5D0u: goto label_7F31A5D0;
    case 0x7F31A5D4u: goto label_7F31A5D4;
    case 0x7F31A5D8u: goto label_7F31A5D8;
    case 0x7F31A5DCu: goto label_7F31A5DC;
    case 0x7F31A5E0u: goto label_7F31A5E0;
    case 0x7F31A5E4u: goto label_7F31A5E4;
    case 0x7F31A5E8u: goto label_7F31A5E8;
    case 0x7F31A5ECu: goto label_7F31A5EC;
    case 0x7F31A5F0u: goto label_7F31A5F0;
    case 0x7F31A5F4u: goto label_7F31A5F4;
    case 0x7F31A5F8u: goto label_7F31A5F8;
    case 0x7F31A5FCu: goto label_7F31A5FC;
    case 0x7F31A600u: goto label_7F31A600;
    case 0x7F31A604u: goto label_7F31A604;
    case 0x7F31A608u: goto label_7F31A608;
    case 0x7F31A60Cu: goto label_7F31A60C;
    case 0x7F31A610u: goto label_7F31A610;
    case 0x7F31A614u: goto label_7F31A614;
    case 0x7F31A618u: goto label_7F31A618;
    case 0x7F31A61Cu: goto label_7F31A61C;
    case 0x7F31A620u: goto label_7F31A620;
    case 0x7F31A624u: goto label_7F31A624;
    case 0x7F31A628u: goto label_7F31A628;
    case 0x7F31A62Cu: goto label_7F31A62C;
    case 0x7F31A630u: goto label_7F31A630;
    case 0x7F31A634u: goto label_7F31A634;
    case 0x7F31A638u: goto label_7F31A638;
    case 0x7F31A63Cu: goto label_7F31A63C;
    case 0x7F31A640u: goto label_7F31A640;
    case 0x7F31A644u: goto label_7F31A644;
    case 0x7F31A648u: goto label_7F31A648;
    case 0x7F31A64Cu: goto label_7F31A64C;
    case 0x7F31A650u: goto label_7F31A650;
    case 0x7F31A654u: goto label_7F31A654;
    case 0x7F31A658u: goto label_7F31A658;
    case 0x7F31A65Cu: goto label_7F31A65C;
    case 0x7F31A660u: goto label_7F31A660;
    case 0x7F31A664u: goto label_7F31A664;
    case 0x7F31A668u: goto label_7F31A668;
    case 0x7F31A66Cu: goto label_7F31A66C;
    case 0x7F31A670u: goto label_7F31A670;
    case 0x7F31A674u: goto label_7F31A674;
    case 0x7F31A678u: goto label_7F31A678;
    case 0x7F31A67Cu: goto label_7F31A67C;
    case 0x7F31A680u: goto label_7F31A680;
    case 0x7F31A684u: goto label_7F31A684;
    case 0x7F31A688u: goto label_7F31A688;
    case 0x7F31A68Cu: goto label_7F31A68C;
    case 0x7F31A690u: goto label_7F31A690;
    case 0x7F31A694u: goto label_7F31A694;
    case 0x7F31A698u: goto label_7F31A698;
    case 0x7F31A69Cu: goto label_7F31A69C;
    case 0x7F31A6A0u: goto label_7F31A6A0;
    case 0x7F31A6A4u: goto label_7F31A6A4;
    case 0x7F31A6A8u: goto label_7F31A6A8;
    case 0x7F31A6ACu: goto label_7F31A6AC;
    case 0x7F31A6B0u: goto label_7F31A6B0;
    case 0x7F31A6B4u: goto label_7F31A6B4;
    case 0x7F31A6B8u: goto label_7F31A6B8;
    case 0x7F31A6BCu: goto label_7F31A6BC;
    case 0x7F31A6C0u: goto label_7F31A6C0;
    case 0x7F31A6C4u: goto label_7F31A6C4;
    case 0x7F31A6C8u: goto label_7F31A6C8;
    case 0x7F31A6CCu: goto label_7F31A6CC;
    case 0x7F31A6D0u: goto label_7F31A6D0;
    case 0x7F31A6D4u: goto label_7F31A6D4;
    case 0x7F31A6D8u: goto label_7F31A6D8;
    case 0x7F31A6DCu: goto label_7F31A6DC;
    case 0x7F31A6E0u: goto label_7F31A6E0;
    case 0x7F31A6E4u: goto label_7F31A6E4;
    case 0x7F31A6E8u: goto label_7F31A6E8;
    case 0x7F31A6ECu: goto label_7F31A6EC;
    case 0x7F31A6F0u: goto label_7F31A6F0;
    case 0x7F31A6F4u: goto label_7F31A6F4;
    case 0x7F31A6F8u: goto label_7F31A6F8;
    case 0x7F31A6FCu: goto label_7F31A6FC;
    case 0x7F31A700u: goto label_7F31A700;
    case 0x7F31A704u: goto label_7F31A704;
    case 0x7F31A708u: goto label_7F31A708;
    case 0x7F31A70Cu: goto label_7F31A70C;
    case 0x7F31A710u: goto label_7F31A710;
    case 0x7F31A714u: goto label_7F31A714;
    case 0x7F31A718u: goto label_7F31A718;
    case 0x7F31A71Cu: goto label_7F31A71C;
    case 0x7F31A720u: goto label_7F31A720;
    case 0x7F31A724u: goto label_7F31A724;
    case 0x7F31A728u: goto label_7F31A728;
    case 0x7F31A72Cu: goto label_7F31A72C;
    case 0x7F31A730u: goto label_7F31A730;
    case 0x7F31A734u: goto label_7F31A734;
    case 0x7F31A738u: goto label_7F31A738;
    case 0x7F31A73Cu: goto label_7F31A73C;
    case 0x7F31A740u: goto label_7F31A740;
    case 0x7F31A744u: goto label_7F31A744;
    case 0x7F31A748u: goto label_7F31A748;
    case 0x7F31A74Cu: goto label_7F31A74C;
    case 0x7F31A750u: goto label_7F31A750;
    case 0x7F31A754u: goto label_7F31A754;
    case 0x7F31A758u: goto label_7F31A758;
    case 0x7F31A75Cu: goto label_7F31A75C;
    case 0x7F31A760u: goto label_7F31A760;
    case 0x7F31A764u: goto label_7F31A764;
    case 0x7F31A768u: goto label_7F31A768;
    case 0x7F31A76Cu: goto label_7F31A76C;
    case 0x7F31A770u: goto label_7F31A770;
    case 0x7F31A774u: goto label_7F31A774;
    case 0x7F31A778u: goto label_7F31A778;
    case 0x7F31A77Cu: goto label_7F31A77C;
    case 0x7F31A780u: goto label_7F31A780;
    case 0x7F31A784u: goto label_7F31A784;
    case 0x7F31A788u: goto label_7F31A788;
    case 0x7F31A78Cu: goto label_7F31A78C;
    case 0x7F31A790u: goto label_7F31A790;
    case 0x7F31A794u: goto label_7F31A794;
    case 0x7F31A798u: goto label_7F31A798;
    case 0x7F31A79Cu: goto label_7F31A79C;
    case 0x7F31A7A0u: goto label_7F31A7A0;
    case 0x7F31A7A4u: goto label_7F31A7A4;
    case 0x7F31A7A8u: goto label_7F31A7A8;
    case 0x7F31A7ACu: goto label_7F31A7AC;
    case 0x7F31A7B0u: goto label_7F31A7B0;
    case 0x7F31A7B4u: goto label_7F31A7B4;
    case 0x7F31A7B8u: goto label_7F31A7B8;
    case 0x7F31A7BCu: goto label_7F31A7BC;
    case 0x7F31A7C0u: goto label_7F31A7C0;
    case 0x7F31A7C4u: goto label_7F31A7C4;
    case 0x7F31A7C8u: goto label_7F31A7C8;
    case 0x7F31A7CCu: goto label_7F31A7CC;
    case 0x7F31A7D0u: goto label_7F31A7D0;
    case 0x7F31A7D4u: goto label_7F31A7D4;
    case 0x7F31A7D8u: goto label_7F31A7D8;
    case 0x7F31A7DCu: goto label_7F31A7DC;
    case 0x7F31A7E0u: goto label_7F31A7E0;
    case 0x7F31A7E4u: goto label_7F31A7E4;
    case 0x7F31A7E8u: goto label_7F31A7E8;
    case 0x7F31A7ECu: goto label_7F31A7EC;
    case 0x7F31A7F0u: goto label_7F31A7F0;
    case 0x7F31A7F4u: goto label_7F31A7F4;
    case 0x7F31A7F8u: goto label_7F31A7F8;
    case 0x7F31A7FCu: goto label_7F31A7FC;
    case 0x7F31A800u: goto label_7F31A800;
    case 0x7F31A804u: goto label_7F31A804;
    case 0x7F31A808u: goto label_7F31A808;
    case 0x7F31A80Cu: goto label_7F31A80C;
    case 0x7F31A810u: goto label_7F31A810;
    case 0x7F31A814u: goto label_7F31A814;
    case 0x7F31A818u: goto label_7F31A818;
    case 0x7F31A81Cu: goto label_7F31A81C;
    case 0x7F31A820u: goto label_7F31A820;
    case 0x7F31A824u: goto label_7F31A824;
    case 0x7F31A828u: goto label_7F31A828;
    case 0x7F31A82Cu: goto label_7F31A82C;
    case 0x7F31A830u: goto label_7F31A830;
    case 0x7F31A834u: goto label_7F31A834;
    case 0x7F31A838u: goto label_7F31A838;
    case 0x7F31A83Cu: goto label_7F31A83C;
    case 0x7F31A840u: goto label_7F31A840;
    case 0x7F31A844u: goto label_7F31A844;
    case 0x7F31A848u: goto label_7F31A848;
    case 0x7F31A84Cu: goto label_7F31A84C;
    case 0x7F31A850u: goto label_7F31A850;
    case 0x7F31A854u: goto label_7F31A854;
    case 0x7F31A858u: goto label_7F31A858;
    case 0x7F31A85Cu: goto label_7F31A85C;
    case 0x7F31A860u: goto label_7F31A860;
    case 0x7F31A864u: goto label_7F31A864;
    case 0x7F31A868u: goto label_7F31A868;
    case 0x7F31A86Cu: goto label_7F31A86C;
    case 0x7F31A870u: goto label_7F31A870;
    case 0x7F31A874u: goto label_7F31A874;
    case 0x7F31A878u: goto label_7F31A878;
    case 0x7F31A87Cu: goto label_7F31A87C;
    case 0x7F31A880u: goto label_7F31A880;
    case 0x7F31A884u: goto label_7F31A884;
    case 0x7F31A888u: goto label_7F31A888;
    case 0x7F31A88Cu: goto label_7F31A88C;
    case 0x7F31A890u: goto label_7F31A890;
    case 0x7F31A894u: goto label_7F31A894;
    case 0x7F31A898u: goto label_7F31A898;
    case 0x7F31A89Cu: goto label_7F31A89C;
    case 0x7F31A8A0u: goto label_7F31A8A0;
    case 0x7F31A8A4u: goto label_7F31A8A4;
    case 0x7F31A8A8u: goto label_7F31A8A8;
    case 0x7F31A8ACu: goto label_7F31A8AC;
    case 0x7F31A8B0u: goto label_7F31A8B0;
    case 0x7F31A8B4u: goto label_7F31A8B4;
    case 0x7F31A8B8u: goto label_7F31A8B8;
    case 0x7F31A8BCu: goto label_7F31A8BC;
    case 0x7F31A8C0u: goto label_7F31A8C0;
    case 0x7F31A8C4u: goto label_7F31A8C4;
    case 0x7F31A8C8u: goto label_7F31A8C8;
    case 0x7F31A8CCu: goto label_7F31A8CC;
    case 0x7F31A8D0u: goto label_7F31A8D0;
    case 0x7F31A8D4u: goto label_7F31A8D4;
    case 0x7F31A8D8u: goto label_7F31A8D8;
    case 0x7F31A8DCu: goto label_7F31A8DC;
    case 0x7F31A8E0u: goto label_7F31A8E0;
    case 0x7F31A8E4u: goto label_7F31A8E4;
    case 0x7F31A8E8u: goto label_7F31A8E8;
    case 0x7F31A8ECu: goto label_7F31A8EC;
    case 0x7F31A8F0u: goto label_7F31A8F0;
    case 0x7F31A8F4u: goto label_7F31A8F4;
    case 0x7F31A8F8u: goto label_7F31A8F8;
    case 0x7F31A8FCu: goto label_7F31A8FC;
    case 0x7F31A900u: goto label_7F31A900;
    case 0x7F31A904u: goto label_7F31A904;
    case 0x7F31A908u: goto label_7F31A908;
    case 0x7F31A90Cu: goto label_7F31A90C;
    case 0x7F31A910u: goto label_7F31A910;
    case 0x7F31A914u: goto label_7F31A914;
    case 0x7F31A918u: goto label_7F31A918;
    case 0x7F31A91Cu: goto label_7F31A91C;
    case 0x7F31A920u: goto label_7F31A920;
    case 0x7F31A924u: goto label_7F31A924;
    case 0x7F31A928u: goto label_7F31A928;
    case 0x7F31A92Cu: goto label_7F31A92C;
    case 0x7F31A930u: goto label_7F31A930;
    case 0x7F31A934u: goto label_7F31A934;
    case 0x7F31A938u: goto label_7F31A938;
    case 0x7F31A93Cu: goto label_7F31A93C;
    case 0x7F31A940u: goto label_7F31A940;
    case 0x7F31A944u: goto label_7F31A944;
    case 0x7F31A948u: goto label_7F31A948;
    case 0x7F31A94Cu: goto label_7F31A94C;
    case 0x7F31A950u: goto label_7F31A950;
    case 0x7F31A954u: goto label_7F31A954;
    case 0x7F31A958u: goto label_7F31A958;
    case 0x7F31A95Cu: goto label_7F31A95C;
    case 0x7F31A960u: goto label_7F31A960;
    case 0x7F31A964u: goto label_7F31A964;
    case 0x7F31A968u: goto label_7F31A968;
    case 0x7F31A96Cu: goto label_7F31A96C;
    case 0x7F31A970u: goto label_7F31A970;
    case 0x7F31A974u: goto label_7F31A974;
    case 0x7F31A978u: goto label_7F31A978;
    case 0x7F31A97Cu: goto label_7F31A97C;
    case 0x7F31A980u: goto label_7F31A980;
    case 0x7F31A984u: goto label_7F31A984;
    case 0x7F31A988u: goto label_7F31A988;
    case 0x7F31A98Cu: goto label_7F31A98C;
    case 0x7F31A990u: goto label_7F31A990;
    case 0x7F31A994u: goto label_7F31A994;
    case 0x7F31A998u: goto label_7F31A998;
    case 0x7F31A99Cu: goto label_7F31A99C;
    case 0x7F31A9A0u: goto label_7F31A9A0;
    case 0x7F31A9A4u: goto label_7F31A9A4;
    case 0x7F31A9A8u: goto label_7F31A9A8;
    case 0x7F31A9ACu: goto label_7F31A9AC;
    case 0x7F31A9B0u: goto label_7F31A9B0;
    case 0x7F31A9B4u: goto label_7F31A9B4;
    case 0x7F31A9B8u: goto label_7F31A9B8;
    case 0x7F31A9BCu: goto label_7F31A9BC;
    case 0x7F31A9C0u: goto label_7F31A9C0;
    case 0x7F31A9C4u: goto label_7F31A9C4;
    case 0x7F31A9C8u: goto label_7F31A9C8;
    case 0x7F31A9CCu: goto label_7F31A9CC;
    case 0x7F31A9D0u: goto label_7F31A9D0;
    case 0x7F31A9D4u: goto label_7F31A9D4;
    case 0x7F31A9D8u: goto label_7F31A9D8;
    case 0x7F31A9DCu: goto label_7F31A9DC;
    case 0x7F31A9E0u: goto label_7F31A9E0;
    case 0x7F31A9E4u: goto label_7F31A9E4;
    case 0x7F31A9E8u: goto label_7F31A9E8;
    case 0x7F31A9ECu: goto label_7F31A9EC;
    case 0x7F31A9F0u: goto label_7F31A9F0;
    case 0x7F31A9F4u: goto label_7F31A9F4;
    case 0x7F31A9F8u: goto label_7F31A9F8;
    case 0x7F31A9FCu: goto label_7F31A9FC;
    case 0x7F31AA00u: goto label_7F31AA00;
    case 0x7F31AA04u: goto label_7F31AA04;
    case 0x7F31AA08u: goto label_7F31AA08;
    case 0x7F31AA0Cu: goto label_7F31AA0C;
    case 0x7F31AA10u: goto label_7F31AA10;
    case 0x7F31AA14u: goto label_7F31AA14;
    case 0x7F31AA18u: goto label_7F31AA18;
    case 0x7F31AA1Cu: goto label_7F31AA1C;
    case 0x7F31AA20u: goto label_7F31AA20;
    case 0x7F31AA24u: goto label_7F31AA24;
    case 0x7F31AA28u: goto label_7F31AA28;
    case 0x7F31AA2Cu: goto label_7F31AA2C;
    case 0x7F31AA30u: goto label_7F31AA30;
    case 0x7F31AA34u: goto label_7F31AA34;
    case 0x7F31AA38u: goto label_7F31AA38;
    case 0x7F31AA3Cu: goto label_7F31AA3C;
    case 0x7F31AA40u: goto label_7F31AA40;
    case 0x7F31AA44u: goto label_7F31AA44;
    case 0x7F31AA48u: goto label_7F31AA48;
    case 0x7F31AA4Cu: goto label_7F31AA4C;
    case 0x7F31AA50u: goto label_7F31AA50;
    case 0x7F31AA54u: goto label_7F31AA54;
    case 0x7F31AA58u: goto label_7F31AA58;
    case 0x7F31AA5Cu: goto label_7F31AA5C;
    case 0x7F31AA60u: goto label_7F31AA60;
    case 0x7F31AA64u: goto label_7F31AA64;
    case 0x7F31AA68u: goto label_7F31AA68;
    case 0x7F31AA6Cu: goto label_7F31AA6C;
    case 0x7F31AA70u: goto label_7F31AA70;
    case 0x7F31AA74u: goto label_7F31AA74;
    case 0x7F31AA78u: goto label_7F31AA78;
    case 0x7F31AA7Cu: goto label_7F31AA7C;
    case 0x7F31AA80u: goto label_7F31AA80;
    case 0x7F31AA84u: goto label_7F31AA84;
    case 0x7F31AA88u: goto label_7F31AA88;
    case 0x7F31AA8Cu: goto label_7F31AA8C;
    case 0x7F31AA90u: goto label_7F31AA90;
    case 0x7F31AA94u: goto label_7F31AA94;
    case 0x7F31AA98u: goto label_7F31AA98;
    case 0x7F31AA9Cu: goto label_7F31AA9C;
    case 0x7F31AAA0u: goto label_7F31AAA0;
    case 0x7F31AAA4u: goto label_7F31AAA4;
    case 0x7F31AAA8u: goto label_7F31AAA8;
    case 0x7F31AAACu: goto label_7F31AAAC;
    case 0x7F31AAB0u: goto label_7F31AAB0;
    case 0x7F31AAB4u: goto label_7F31AAB4;
    case 0x7F31AAB8u: goto label_7F31AAB8;
    case 0x7F31AABCu: goto label_7F31AABC;
    case 0x7F31AAC0u: goto label_7F31AAC0;
    case 0x7F31AAC4u: goto label_7F31AAC4;
    case 0x7F31AAC8u: goto label_7F31AAC8;
    case 0x7F31AACCu: goto label_7F31AACC;
    case 0x7F31AAD0u: goto label_7F31AAD0;
    case 0x7F31AAD4u: goto label_7F31AAD4;
    case 0x7F31AAD8u: goto label_7F31AAD8;
    case 0x7F31AADCu: goto label_7F31AADC;
    case 0x7F31AAE0u: goto label_7F31AAE0;
    case 0x7F31AAE4u: goto label_7F31AAE4;
    case 0x7F31AAE8u: goto label_7F31AAE8;
    case 0x7F31AAECu: goto label_7F31AAEC;
    case 0x7F31AAF0u: goto label_7F31AAF0;
    case 0x7F31AAF4u: goto label_7F31AAF4;
    case 0x7F31AAF8u: goto label_7F31AAF8;
    case 0x7F31AAFCu: goto label_7F31AAFC;
    case 0x7F31AB00u: goto label_7F31AB00;
    case 0x7F31AB04u: goto label_7F31AB04;
    case 0x7F31AB08u: goto label_7F31AB08;
    case 0x7F31AB0Cu: goto label_7F31AB0C;
    case 0x7F31AB10u: goto label_7F31AB10;
    case 0x7F31AB14u: goto label_7F31AB14;
    case 0x7F31AB18u: goto label_7F31AB18;
    case 0x7F31AB1Cu: goto label_7F31AB1C;
    case 0x7F31AB20u: goto label_7F31AB20;
    case 0x7F31AB24u: goto label_7F31AB24;
    case 0x7F31AB28u: goto label_7F31AB28;
    case 0x7F31AB2Cu: goto label_7F31AB2C;
    case 0x7F31AB30u: goto label_7F31AB30;
    case 0x7F31AB34u: goto label_7F31AB34;
    case 0x7F31AB38u: goto label_7F31AB38;
    case 0x7F31AB3Cu: goto label_7F31AB3C;
    case 0x7F31AB40u: goto label_7F31AB40;
    case 0x7F31AB44u: goto label_7F31AB44;
    case 0x7F31AB48u: goto label_7F31AB48;
    case 0x7F31AB4Cu: goto label_7F31AB4C;
    case 0x7F31AB50u: goto label_7F31AB50;
    case 0x7F31AB54u: goto label_7F31AB54;
    case 0x7F31AB58u: goto label_7F31AB58;
    case 0x7F31AB5Cu: goto label_7F31AB5C;
    case 0x7F31AB60u: goto label_7F31AB60;
    case 0x7F31AB64u: goto label_7F31AB64;
    case 0x7F31AB68u: goto label_7F31AB68;
    case 0x7F31AB6Cu: goto label_7F31AB6C;
    case 0x7F31AB70u: goto label_7F31AB70;
    case 0x7F31AB74u: goto label_7F31AB74;
    case 0x7F31AB78u: goto label_7F31AB78;
    case 0x7F31AB7Cu: goto label_7F31AB7C;
    case 0x7F31AB80u: goto label_7F31AB80;
    case 0x7F31AB84u: goto label_7F31AB84;
    case 0x7F31AB88u: goto label_7F31AB88;
    case 0x7F31AB8Cu: goto label_7F31AB8C;
    case 0x7F31AB90u: goto label_7F31AB90;
    case 0x7F31AB94u: goto label_7F31AB94;
    case 0x7F31AB98u: goto label_7F31AB98;
    case 0x7F31AB9Cu: goto label_7F31AB9C;
    case 0x7F31ABA0u: goto label_7F31ABA0;
    case 0x7F31ABA4u: goto label_7F31ABA4;
    case 0x7F31ABA8u: goto label_7F31ABA8;
    case 0x7F31ABACu: goto label_7F31ABAC;
    case 0x7F31ABB0u: goto label_7F31ABB0;
    case 0x7F31ABB4u: goto label_7F31ABB4;
    case 0x7F31ABB8u: goto label_7F31ABB8;
    case 0x7F31ABBCu: goto label_7F31ABBC;
    case 0x7F31ABC0u: goto label_7F31ABC0;
    case 0x7F31ABC4u: goto label_7F31ABC4;
    case 0x7F31ABC8u: goto label_7F31ABC8;
    case 0x7F31ABCCu: goto label_7F31ABCC;
    case 0x7F31ABD0u: goto label_7F31ABD0;
    case 0x7F31ABD4u: goto label_7F31ABD4;
    case 0x7F31ABD8u: goto label_7F31ABD8;
    case 0x7F31ABDCu: goto label_7F31ABDC;
    case 0x7F31ABE0u: goto label_7F31ABE0;
    case 0x7F31ABE4u: goto label_7F31ABE4;
    case 0x7F31ABE8u: goto label_7F31ABE8;
    case 0x7F31ABECu: goto label_7F31ABEC;
    case 0x7F31ABF0u: goto label_7F31ABF0;
    case 0x7F31ABF4u: goto label_7F31ABF4;
    case 0x7F31ABF8u: goto label_7F31ABF8;
    case 0x7F31ABFCu: goto label_7F31ABFC;
    case 0x7F31AC00u: goto label_7F31AC00;
    case 0x7F31AC04u: goto label_7F31AC04;
    case 0x7F31AC08u: goto label_7F31AC08;
    case 0x7F31AC0Cu: goto label_7F31AC0C;
    case 0x7F31AC10u: goto label_7F31AC10;
    case 0x7F31AC14u: goto label_7F31AC14;
    case 0x7F31AC18u: goto label_7F31AC18;
    case 0x7F31AC1Cu: goto label_7F31AC1C;
    case 0x7F31AC20u: goto label_7F31AC20;
    case 0x7F31AC24u: goto label_7F31AC24;
    case 0x7F31AC28u: goto label_7F31AC28;
    case 0x7F31AC2Cu: goto label_7F31AC2C;
    case 0x7F31AC30u: goto label_7F31AC30;
    case 0x7F31AC34u: goto label_7F31AC34;
    case 0x7F31AC38u: goto label_7F31AC38;
    case 0x7F31AC3Cu: goto label_7F31AC3C;
    case 0x7F31AC40u: goto label_7F31AC40;
    case 0x7F31AC44u: goto label_7F31AC44;
    case 0x7F31AC48u: goto label_7F31AC48;
    case 0x7F31AC4Cu: goto label_7F31AC4C;
    case 0x7F31AC50u: goto label_7F31AC50;
    case 0x7F31AC54u: goto label_7F31AC54;
    case 0x7F31AC58u: goto label_7F31AC58;
    case 0x7F31AC5Cu: goto label_7F31AC5C;
    case 0x7F31AC60u: goto label_7F31AC60;
    case 0x7F31AC64u: goto label_7F31AC64;
    case 0x7F31AC68u: goto label_7F31AC68;
    case 0x7F31AC6Cu: goto label_7F31AC6C;
    case 0x7F31AC70u: goto label_7F31AC70;
    case 0x7F31AC74u: goto label_7F31AC74;
    case 0x7F31AC78u: goto label_7F31AC78;
    case 0x7F31AC7Cu: goto label_7F31AC7C;
    case 0x7F31AC80u: goto label_7F31AC80;
    case 0x7F31AC84u: goto label_7F31AC84;
    case 0x7F31AC88u: goto label_7F31AC88;
    case 0x7F31AC8Cu: goto label_7F31AC8C;
    case 0x7F31AC90u: goto label_7F31AC90;
    case 0x7F31AC94u: goto label_7F31AC94;
    case 0x7F31AC98u: goto label_7F31AC98;
    case 0x7F31AC9Cu: goto label_7F31AC9C;
    case 0x7F31ACA0u: goto label_7F31ACA0;
    case 0x7F31ACA4u: goto label_7F31ACA4;
    case 0x7F31ACA8u: goto label_7F31ACA8;
    case 0x7F31ACACu: goto label_7F31ACAC;
    case 0x7F31ACB0u: goto label_7F31ACB0;
    case 0x7F31ACB4u: goto label_7F31ACB4;
    case 0x7F31ACB8u: goto label_7F31ACB8;
    case 0x7F31ACBCu: goto label_7F31ACBC;
    case 0x7F31ACC0u: goto label_7F31ACC0;
    case 0x7F31ACC4u: goto label_7F31ACC4;
    case 0x7F31ACC8u: goto label_7F31ACC8;
    case 0x7F31ACCCu: goto label_7F31ACCC;
    case 0x7F31ACD0u: goto label_7F31ACD0;
    case 0x7F31ACD4u: goto label_7F31ACD4;
    case 0x7F31ACD8u: goto label_7F31ACD8;
    case 0x7F31ACDCu: goto label_7F31ACDC;
    case 0x7F31ACE0u: goto label_7F31ACE0;
    case 0x7F31ACE4u: goto label_7F31ACE4;
    case 0x7F31ACE8u: goto label_7F31ACE8;
    case 0x7F31ACECu: goto label_7F31ACEC;
    case 0x7F31ACF0u: goto label_7F31ACF0;
    case 0x7F31ACF4u: goto label_7F31ACF4;
    case 0x7F31ACF8u: goto label_7F31ACF8;
    case 0x7F31ACFCu: goto label_7F31ACFC;
    case 0x7F31AD00u: goto label_7F31AD00;
    case 0x7F31AD04u: goto label_7F31AD04;
    case 0x7F31AD08u: goto label_7F31AD08;
    case 0x7F31AD0Cu: goto label_7F31AD0C;
    case 0x7F31AD10u: goto label_7F31AD10;
    case 0x7F31AD14u: goto label_7F31AD14;
    case 0x7F31AD18u: goto label_7F31AD18;
    case 0x7F31AD1Cu: goto label_7F31AD1C;
    case 0x7F31AD20u: goto label_7F31AD20;
    case 0x7F31AD24u: goto label_7F31AD24;
    case 0x7F31AD28u: goto label_7F31AD28;
    case 0x7F31AD2Cu: goto label_7F31AD2C;
    case 0x7F31AD30u: goto label_7F31AD30;
    case 0x7F31AD34u: goto label_7F31AD34;
    case 0x7F31AD38u: goto label_7F31AD38;
    case 0x7F31AD3Cu: goto label_7F31AD3C;
    case 0x7F31AD40u: goto label_7F31AD40;
    case 0x7F31AD44u: goto label_7F31AD44;
    case 0x7F31AD48u: goto label_7F31AD48;
    case 0x7F31AD4Cu: goto label_7F31AD4C;
    case 0x7F31AD50u: goto label_7F31AD50;
    case 0x7F31AD54u: goto label_7F31AD54;
    case 0x7F31AD58u: goto label_7F31AD58;
    case 0x7F31AD5Cu: goto label_7F31AD5C;
    case 0x7F31AD60u: goto label_7F31AD60;
    case 0x7F31AD64u: goto label_7F31AD64;
    case 0x7F31AD68u: goto label_7F31AD68;
    case 0x7F31AD6Cu: goto label_7F31AD6C;
    case 0x7F31AD70u: goto label_7F31AD70;
    case 0x7F31AD74u: goto label_7F31AD74;
    case 0x7F31AD78u: goto label_7F31AD78;
    case 0x7F31AD7Cu: goto label_7F31AD7C;
    case 0x7F31AD80u: goto label_7F31AD80;
    case 0x7F31AD84u: goto label_7F31AD84;
    case 0x7F31AD88u: goto label_7F31AD88;
    case 0x7F31AD8Cu: goto label_7F31AD8C;
    case 0x7F31AD90u: goto label_7F31AD90;
    case 0x7F31AD94u: goto label_7F31AD94;
    case 0x7F31AD98u: goto label_7F31AD98;
    case 0x7F31AD9Cu: goto label_7F31AD9C;
    case 0x7F31ADA0u: goto label_7F31ADA0;
    case 0x7F31ADA4u: goto label_7F31ADA4;
    case 0x7F31ADA8u: goto label_7F31ADA8;
    case 0x7F31ADACu: goto label_7F31ADAC;
    case 0x7F31ADB0u: goto label_7F31ADB0;
    case 0x7F31ADB4u: goto label_7F31ADB4;
    case 0x7F31ADB8u: goto label_7F31ADB8;
    case 0x7F31ADBCu: goto label_7F31ADBC;
    case 0x7F31ADC0u: goto label_7F31ADC0;
    case 0x7F31ADC4u: goto label_7F31ADC4;
    case 0x7F31ADC8u: goto label_7F31ADC8;
    case 0x7F31ADCCu: goto label_7F31ADCC;
    case 0x7F31ADD0u: goto label_7F31ADD0;
    case 0x7F31ADD4u: goto label_7F31ADD4;
    case 0x7F31ADD8u: goto label_7F31ADD8;
    case 0x7F31ADDCu: goto label_7F31ADDC;
    case 0x7F31ADE0u: goto label_7F31ADE0;
    case 0x7F31ADE4u: goto label_7F31ADE4;
    case 0x7F31ADE8u: goto label_7F31ADE8;
    case 0x7F31ADECu: goto label_7F31ADEC;
    case 0x7F31ADF0u: goto label_7F31ADF0;
    case 0x7F31ADF4u: goto label_7F31ADF4;
    case 0x7F31ADF8u: goto label_7F31ADF8;
    case 0x7F31ADFCu: goto label_7F31ADFC;
    case 0x7F31AE00u: goto label_7F31AE00;
    case 0x7F31AE04u: goto label_7F31AE04;
    case 0x7F31AE08u: goto label_7F31AE08;
    case 0x7F31AE0Cu: goto label_7F31AE0C;
    case 0x7F31AE10u: goto label_7F31AE10;
    case 0x7F31AE14u: goto label_7F31AE14;
    case 0x7F31AE18u: goto label_7F31AE18;
    case 0x7F31AE1Cu: goto label_7F31AE1C;
    case 0x7F31AE20u: goto label_7F31AE20;
    case 0x7F31AE24u: goto label_7F31AE24;
    case 0x7F31AE28u: goto label_7F31AE28;
    case 0x7F31AE2Cu: goto label_7F31AE2C;
    case 0x7F31AE30u: goto label_7F31AE30;
    case 0x7F31AE34u: goto label_7F31AE34;
    case 0x7F31AE38u: goto label_7F31AE38;
    case 0x7F31AE3Cu: goto label_7F31AE3C;
    case 0x7F31AE40u: goto label_7F31AE40;
    case 0x7F31AE44u: goto label_7F31AE44;
    case 0x7F31AE48u: goto label_7F31AE48;
    case 0x7F31AE4Cu: goto label_7F31AE4C;
    case 0x7F31AE50u: goto label_7F31AE50;
    case 0x7F31AE54u: goto label_7F31AE54;
    case 0x7F31AE58u: goto label_7F31AE58;
    case 0x7F31AE5Cu: goto label_7F31AE5C;
    case 0x7F31AE60u: goto label_7F31AE60;
    case 0x7F31AE64u: goto label_7F31AE64;
    case 0x7F31AE68u: goto label_7F31AE68;
    case 0x7F31AE6Cu: goto label_7F31AE6C;
    case 0x7F31AE70u: goto label_7F31AE70;
    case 0x7F31AE74u: goto label_7F31AE74;
    case 0x7F31AE78u: goto label_7F31AE78;
    case 0x7F31AE7Cu: goto label_7F31AE7C;
    case 0x7F31AE80u: goto label_7F31AE80;
    case 0x7F31AE84u: goto label_7F31AE84;
    case 0x7F31AE88u: goto label_7F31AE88;
    case 0x7F31AE8Cu: goto label_7F31AE8C;
    case 0x7F31AE90u: goto label_7F31AE90;
    case 0x7F31AE94u: goto label_7F31AE94;
    case 0x7F31AE98u: goto label_7F31AE98;
    case 0x7F31AE9Cu: goto label_7F31AE9C;
    case 0x7F31AEA0u: goto label_7F31AEA0;
    case 0x7F31AEA4u: goto label_7F31AEA4;
    case 0x7F31AEA8u: goto label_7F31AEA8;
    case 0x7F31AEACu: goto label_7F31AEAC;
    case 0x7F31AEB0u: goto label_7F31AEB0;
    case 0x7F31AEB4u: goto label_7F31AEB4;
    case 0x7F31AEB8u: goto label_7F31AEB8;
    case 0x7F31AEBCu: goto label_7F31AEBC;
    case 0x7F31AEC0u: goto label_7F31AEC0;
    case 0x7F31AEC4u: goto label_7F31AEC4;
    case 0x7F31AEC8u: goto label_7F31AEC8;
    case 0x7F31AECCu: goto label_7F31AECC;
    case 0x7F31AED0u: goto label_7F31AED0;
    case 0x7F31AED4u: goto label_7F31AED4;
    case 0x7F31AED8u: goto label_7F31AED8;
    case 0x7F31AEDCu: goto label_7F31AEDC;
    case 0x7F31AEE0u: goto label_7F31AEE0;
    case 0x7F31AEE4u: goto label_7F31AEE4;
    case 0x7F31AEE8u: goto label_7F31AEE8;
    case 0x7F31AEECu: goto label_7F31AEEC;
    case 0x7F31AEF0u: goto label_7F31AEF0;
    case 0x7F31AEF4u: goto label_7F31AEF4;
    case 0x7F31AEF8u: goto label_7F31AEF8;
    case 0x7F31AEFCu: goto label_7F31AEFC;
    case 0x7F31AF00u: goto label_7F31AF00;
    case 0x7F31AF04u: goto label_7F31AF04;
    case 0x7F31AF08u: goto label_7F31AF08;
    case 0x7F31AF0Cu: goto label_7F31AF0C;
    case 0x7F31AF10u: goto label_7F31AF10;
    case 0x7F31AF14u: goto label_7F31AF14;
    case 0x7F31AF18u: goto label_7F31AF18;
    case 0x7F31AF1Cu: goto label_7F31AF1C;
    case 0x7F31AF20u: goto label_7F31AF20;
    case 0x7F31AF24u: goto label_7F31AF24;
    case 0x7F31AF28u: goto label_7F31AF28;
    case 0x7F31AF2Cu: goto label_7F31AF2C;
    case 0x7F31AF30u: goto label_7F31AF30;
    case 0x7F31AF34u: goto label_7F31AF34;
    case 0x7F31AF38u: goto label_7F31AF38;
    case 0x7F31AF3Cu: goto label_7F31AF3C;
    case 0x7F31AF40u: goto label_7F31AF40;
    case 0x7F31AF44u: goto label_7F31AF44;
    case 0x7F31AF48u: goto label_7F31AF48;
    case 0x7F31AF4Cu: goto label_7F31AF4C;
    case 0x7F31AF50u: goto label_7F31AF50;
    case 0x7F31AF54u: goto label_7F31AF54;
    case 0x7F31AF58u: goto label_7F31AF58;
    case 0x7F31AF5Cu: goto label_7F31AF5C;
    case 0x7F31AF60u: goto label_7F31AF60;
    case 0x7F31AF64u: goto label_7F31AF64;
    case 0x7F31AF68u: goto label_7F31AF68;
    case 0x7F31AF6Cu: goto label_7F31AF6C;
    case 0x7F31AF70u: goto label_7F31AF70;
    case 0x7F31AF74u: goto label_7F31AF74;
    case 0x7F31AF78u: goto label_7F31AF78;
    case 0x7F31AF7Cu: goto label_7F31AF7C;
    case 0x7F31AF80u: goto label_7F31AF80;
    case 0x7F31AF84u: goto label_7F31AF84;
    case 0x7F31AF88u: goto label_7F31AF88;
    case 0x7F31AF8Cu: goto label_7F31AF8C;
    case 0x7F31AF90u: goto label_7F31AF90;
    case 0x7F31AF94u: goto label_7F31AF94;
    case 0x7F31AF98u: goto label_7F31AF98;
    case 0x7F31AF9Cu: goto label_7F31AF9C;
    case 0x7F31AFA0u: goto label_7F31AFA0;
    case 0x7F31AFA4u: goto label_7F31AFA4;
    case 0x7F31AFA8u: goto label_7F31AFA8;
    case 0x7F31AFACu: goto label_7F31AFAC;
    case 0x7F31AFB0u: goto label_7F31AFB0;
    case 0x7F31AFB4u: goto label_7F31AFB4;
    case 0x7F31AFB8u: goto label_7F31AFB8;
    case 0x7F31AFBCu: goto label_7F31AFBC;
    case 0x7F31AFC0u: goto label_7F31AFC0;
    case 0x7F31AFC4u: goto label_7F31AFC4;
    case 0x7F31AFC8u: goto label_7F31AFC8;
    case 0x7F31AFCCu: goto label_7F31AFCC;
    case 0x7F31AFD0u: goto label_7F31AFD0;
    case 0x7F31AFD4u: goto label_7F31AFD4;
    case 0x7F31AFD8u: goto label_7F31AFD8;
    case 0x7F31AFDCu: goto label_7F31AFDC;
    case 0x7F31AFE0u: goto label_7F31AFE0;
    case 0x7F31AFE4u: goto label_7F31AFE4;
    case 0x7F31AFE8u: goto label_7F31AFE8;
    case 0x7F31AFECu: goto label_7F31AFEC;
    case 0x7F31AFF0u: goto label_7F31AFF0;
    case 0x7F31AFF4u: goto label_7F31AFF4;
    case 0x7F31AFF8u: goto label_7F31AFF8;
    case 0x7F31AFFCu: goto label_7F31AFFC;
    case 0x7F31B000u: goto label_7F31B000;
    case 0x7F31B004u: goto label_7F31B004;
    case 0x7F31B008u: goto label_7F31B008;
    case 0x7F31B00Cu: goto label_7F31B00C;
    case 0x7F31B010u: goto label_7F31B010;
    case 0x7F31B014u: goto label_7F31B014;
    case 0x7F31B018u: goto label_7F31B018;
    case 0x7F31B01Cu: goto label_7F31B01C;
    case 0x7F31B020u: goto label_7F31B020;
    case 0x7F31B024u: goto label_7F31B024;
    case 0x7F31B028u: goto label_7F31B028;
    case 0x7F31B02Cu: goto label_7F31B02C;
    case 0x7F31B030u: goto label_7F31B030;
    case 0x7F31B034u: goto label_7F31B034;
    case 0x7F31B038u: goto label_7F31B038;
    case 0x7F31B03Cu: goto label_7F31B03C;
    case 0x7F31B040u: goto label_7F31B040;
    case 0x7F31B044u: goto label_7F31B044;
    case 0x7F31B048u: goto label_7F31B048;
    case 0x7F31B04Cu: goto label_7F31B04C;
    case 0x7F31B050u: goto label_7F31B050;
    case 0x7F31B054u: goto label_7F31B054;
    case 0x7F31B058u: goto label_7F31B058;
    case 0x7F31B05Cu: goto label_7F31B05C;
    case 0x7F31B060u: goto label_7F31B060;
    case 0x7F31B064u: goto label_7F31B064;
    case 0x7F31B068u: goto label_7F31B068;
    case 0x7F31B06Cu: goto label_7F31B06C;
    case 0x7F31B070u: goto label_7F31B070;
    case 0x7F31B074u: goto label_7F31B074;
    case 0x7F31B078u: goto label_7F31B078;
    case 0x7F31B07Cu: goto label_7F31B07C;
    case 0x7F31B080u: goto label_7F31B080;
    case 0x7F31B084u: goto label_7F31B084;
    case 0x7F31B088u: goto label_7F31B088;
    case 0x7F31B08Cu: goto label_7F31B08C;
    case 0x7F31B090u: goto label_7F31B090;
    case 0x7F31B094u: goto label_7F31B094;
    case 0x7F31B098u: goto label_7F31B098;
    case 0x7F31B09Cu: goto label_7F31B09C;
    case 0x7F31B0A0u: goto label_7F31B0A0;
    case 0x7F31B0A4u: goto label_7F31B0A4;
    case 0x7F31B0A8u: goto label_7F31B0A8;
    case 0x7F31B0ACu: goto label_7F31B0AC;
    case 0x7F31B0B0u: goto label_7F31B0B0;
    case 0x7F31B0B4u: goto label_7F31B0B4;
    case 0x7F31B0B8u: goto label_7F31B0B8;
    case 0x7F31B0BCu: goto label_7F31B0BC;
    case 0x7F31B0C0u: goto label_7F31B0C0;
    case 0x7F31B0C4u: goto label_7F31B0C4;
    case 0x7F31B0C8u: goto label_7F31B0C8;
    case 0x7F31B0CCu: goto label_7F31B0CC;
    case 0x7F31B0D0u: goto label_7F31B0D0;
    case 0x7F31B0D4u: goto label_7F31B0D4;
    case 0x7F31B0D8u: goto label_7F31B0D8;
    case 0x7F31B0DCu: goto label_7F31B0DC;
    case 0x7F31B0E0u: goto label_7F31B0E0;
    case 0x7F31B0E4u: goto label_7F31B0E4;
    case 0x7F31B0E8u: goto label_7F31B0E8;
    case 0x7F31B0ECu: goto label_7F31B0EC;
    case 0x7F31B0F0u: goto label_7F31B0F0;
    case 0x7F31B0F4u: goto label_7F31B0F4;
    case 0x7F31B0F8u: goto label_7F31B0F8;
    case 0x7F31B0FCu: goto label_7F31B0FC;
    case 0x7F31B100u: goto label_7F31B100;
    case 0x7F31B104u: goto label_7F31B104;
    case 0x7F31B108u: goto label_7F31B108;
    case 0x7F31B10Cu: goto label_7F31B10C;
    case 0x7F31B110u: goto label_7F31B110;
    case 0x7F31B114u: goto label_7F31B114;
    case 0x7F31B118u: goto label_7F31B118;
    case 0x7F31B11Cu: goto label_7F31B11C;
    case 0x7F31B120u: goto label_7F31B120;
    case 0x7F31B124u: goto label_7F31B124;
    case 0x7F31B128u: goto label_7F31B128;
    case 0x7F31B12Cu: goto label_7F31B12C;
    case 0x7F31B130u: goto label_7F31B130;
    case 0x7F31B134u: goto label_7F31B134;
    case 0x7F31B138u: goto label_7F31B138;
    case 0x7F31B13Cu: goto label_7F31B13C;
    case 0x7F31B140u: goto label_7F31B140;
    case 0x7F31B144u: goto label_7F31B144;
    case 0x7F31B148u: goto label_7F31B148;
    case 0x7F31B14Cu: goto label_7F31B14C;
    case 0x7F31B150u: goto label_7F31B150;
    case 0x7F31B154u: goto label_7F31B154;
    case 0x7F31B158u: goto label_7F31B158;
    case 0x7F31B15Cu: goto label_7F31B15C;
    case 0x7F31B160u: goto label_7F31B160;
    case 0x7F31B164u: goto label_7F31B164;
    case 0x7F31B168u: goto label_7F31B168;
    case 0x7F31B16Cu: goto label_7F31B16C;
    case 0x7F31B170u: goto label_7F31B170;
    case 0x7F31B174u: goto label_7F31B174;
    case 0x7F31B178u: goto label_7F31B178;
    case 0x7F31B17Cu: goto label_7F31B17C;
    case 0x7F31B180u: goto label_7F31B180;
    case 0x7F31B184u: goto label_7F31B184;
    case 0x7F31B188u: goto label_7F31B188;
    case 0x7F31B18Cu: goto label_7F31B18C;
    case 0x7F31B190u: goto label_7F31B190;
    case 0x7F31B194u: goto label_7F31B194;
    case 0x7F31B198u: goto label_7F31B198;
    case 0x7F31B19Cu: goto label_7F31B19C;
    case 0x7F31B1A0u: goto label_7F31B1A0;
    case 0x7F31B1A4u: goto label_7F31B1A4;
    case 0x7F31B1A8u: goto label_7F31B1A8;
    case 0x7F31B1ACu: goto label_7F31B1AC;
    case 0x7F31B1B0u: goto label_7F31B1B0;
    case 0x7F31B1B4u: goto label_7F31B1B4;
    case 0x7F31B1B8u: goto label_7F31B1B8;
    case 0x7F31B1BCu: goto label_7F31B1BC;
    case 0x7F31B1C0u: goto label_7F31B1C0;
    case 0x7F31B1C4u: goto label_7F31B1C4;
    case 0x7F31B1C8u: goto label_7F31B1C8;
    case 0x7F31B1CCu: goto label_7F31B1CC;
    case 0x7F31B1D0u: goto label_7F31B1D0;
    case 0x7F31B1D4u: goto label_7F31B1D4;
    case 0x7F31B1D8u: goto label_7F31B1D8;
    case 0x7F31B1DCu: goto label_7F31B1DC;
    case 0x7F31B1E0u: goto label_7F31B1E0;
    case 0x7F31B1E4u: goto label_7F31B1E4;
    case 0x7F31B1E8u: goto label_7F31B1E8;
    case 0x7F31B1ECu: goto label_7F31B1EC;
    case 0x7F31B1F0u: goto label_7F31B1F0;
    case 0x7F31B1F4u: goto label_7F31B1F4;
    case 0x7F31B1F8u: goto label_7F31B1F8;
    case 0x7F31B1FCu: goto label_7F31B1FC;
    case 0x7F31B200u: goto label_7F31B200;
    case 0x7F31B204u: goto label_7F31B204;
    case 0x7F31B208u: goto label_7F31B208;
    case 0x7F31B20Cu: goto label_7F31B20C;
    case 0x7F31B210u: goto label_7F31B210;
    case 0x7F31B214u: goto label_7F31B214;
    case 0x7F31B218u: goto label_7F31B218;
    case 0x7F31B21Cu: goto label_7F31B21C;
    case 0x7F31B220u: goto label_7F31B220;
    case 0x7F31B224u: goto label_7F31B224;
    case 0x7F31B228u: goto label_7F31B228;
    case 0x7F31B22Cu: goto label_7F31B22C;
    case 0x7F31B230u: goto label_7F31B230;
    case 0x7F31B234u: goto label_7F31B234;
    case 0x7F31B238u: goto label_7F31B238;
    case 0x7F31B23Cu: goto label_7F31B23C;
    case 0x7F31B240u: goto label_7F31B240;
    case 0x7F31B244u: goto label_7F31B244;
    case 0x7F31B248u: goto label_7F31B248;
    case 0x7F31B24Cu: goto label_7F31B24C;
    case 0x7F31B250u: goto label_7F31B250;
    case 0x7F31B254u: goto label_7F31B254;
    case 0x7F31B258u: goto label_7F31B258;
    case 0x7F31B25Cu: goto label_7F31B25C;
    case 0x7F31B260u: goto label_7F31B260;
    case 0x7F31B264u: goto label_7F31B264;
    case 0x7F31B268u: goto label_7F31B268;
    case 0x7F31B26Cu: goto label_7F31B26C;
    case 0x7F31B270u: goto label_7F31B270;
    case 0x7F31B274u: goto label_7F31B274;
    case 0x7F31B278u: goto label_7F31B278;
    case 0x7F31B27Cu: goto label_7F31B27C;
    case 0x7F31B280u: goto label_7F31B280;
    case 0x7F31B284u: goto label_7F31B284;
    case 0x7F31B288u: goto label_7F31B288;
    case 0x7F31B28Cu: goto label_7F31B28C;
    case 0x7F31B290u: goto label_7F31B290;
    case 0x7F31B294u: goto label_7F31B294;
    case 0x7F31B298u: goto label_7F31B298;
    case 0x7F31B29Cu: goto label_7F31B29C;
    case 0x7F31B2A0u: goto label_7F31B2A0;
    case 0x7F31B2A4u: goto label_7F31B2A4;
    case 0x7F31B2A8u: goto label_7F31B2A8;
    case 0x7F31B2ACu: goto label_7F31B2AC;
    case 0x7F31B2B0u: goto label_7F31B2B0;
    case 0x7F31B2B4u: goto label_7F31B2B4;
    case 0x7F31B2B8u: goto label_7F31B2B8;
    case 0x7F31B2BCu: goto label_7F31B2BC;
    case 0x7F31B2C0u: goto label_7F31B2C0;
    case 0x7F31B2C4u: goto label_7F31B2C4;
    case 0x7F31B2C8u: goto label_7F31B2C8;
    case 0x7F31B2CCu: goto label_7F31B2CC;
    case 0x7F31B2D0u: goto label_7F31B2D0;
    case 0x7F31B2D4u: goto label_7F31B2D4;
    case 0x7F31B2D8u: goto label_7F31B2D8;
    case 0x7F31B2DCu: goto label_7F31B2DC;
    case 0x7F31B2E0u: goto label_7F31B2E0;
    case 0x7F31B2E4u: goto label_7F31B2E4;
    case 0x7F31B2E8u: goto label_7F31B2E8;
    case 0x7F31B2ECu: goto label_7F31B2EC;
    case 0x7F31B2F0u: goto label_7F31B2F0;
    case 0x7F31B2F4u: goto label_7F31B2F4;
    case 0x7F31B2F8u: goto label_7F31B2F8;
    case 0x7F31B2FCu: goto label_7F31B2FC;
    case 0x7F31B300u: goto label_7F31B300;
    case 0x7F31B304u: goto label_7F31B304;
    case 0x7F31B308u: goto label_7F31B308;
    case 0x7F31B30Cu: goto label_7F31B30C;
    case 0x7F31B310u: goto label_7F31B310;
    case 0x7F31B314u: goto label_7F31B314;
    case 0x7F31B318u: goto label_7F31B318;
    case 0x7F31B31Cu: goto label_7F31B31C;
    case 0x7F31B320u: goto label_7F31B320;
    case 0x7F31B324u: goto label_7F31B324;
    case 0x7F31B328u: goto label_7F31B328;
    case 0x7F31B32Cu: goto label_7F31B32C;
    case 0x7F31B330u: goto label_7F31B330;
    case 0x7F31B334u: goto label_7F31B334;
    case 0x7F31B338u: goto label_7F31B338;
    case 0x7F31B33Cu: goto label_7F31B33C;
    case 0x7F31B340u: goto label_7F31B340;
    case 0x7F31B344u: goto label_7F31B344;
    case 0x7F31B348u: goto label_7F31B348;
    case 0x7F31B34Cu: goto label_7F31B34C;
    case 0x7F31B350u: goto label_7F31B350;
    case 0x7F31B354u: goto label_7F31B354;
    case 0x7F31B358u: goto label_7F31B358;
    case 0x7F31B35Cu: goto label_7F31B35C;
    case 0x7F31B360u: goto label_7F31B360;
    case 0x7F31B364u: goto label_7F31B364;
    case 0x7F31B368u: goto label_7F31B368;
    case 0x7F31B36Cu: goto label_7F31B36C;
    case 0x7F31B370u: goto label_7F31B370;
    case 0x7F31B374u: goto label_7F31B374;
    case 0x7F31B378u: goto label_7F31B378;
    case 0x7F31B37Cu: goto label_7F31B37C;
    case 0x7F31B380u: goto label_7F31B380;
    case 0x7F31B384u: goto label_7F31B384;
    case 0x7F31B388u: goto label_7F31B388;
    case 0x7F31B38Cu: goto label_7F31B38C;
    case 0x7F31B390u: goto label_7F31B390;
    case 0x7F31B394u: goto label_7F31B394;
    case 0x7F31B398u: goto label_7F31B398;
    case 0x7F31B39Cu: goto label_7F31B39C;
    case 0x7F31B3A0u: goto label_7F31B3A0;
    case 0x7F31B3A4u: goto label_7F31B3A4;
    case 0x7F31B3A8u: goto label_7F31B3A8;
    case 0x7F31B3ACu: goto label_7F31B3AC;
    case 0x7F31B3B0u: goto label_7F31B3B0;
    case 0x7F31B3B4u: goto label_7F31B3B4;
    case 0x7F31B3B8u: goto label_7F31B3B8;
    case 0x7F31B3BCu: goto label_7F31B3BC;
    case 0x7F31B3C0u: goto label_7F31B3C0;
    case 0x7F31B3C4u: goto label_7F31B3C4;
    case 0x7F31B3C8u: goto label_7F31B3C8;
    case 0x7F31B3CCu: goto label_7F31B3CC;
    case 0x7F31B3D0u: goto label_7F31B3D0;
    case 0x7F31B3D4u: goto label_7F31B3D4;
    case 0x7F31B3D8u: goto label_7F31B3D8;
    case 0x7F31B3DCu: goto label_7F31B3DC;
    case 0x7F31B3E0u: goto label_7F31B3E0;
    case 0x7F31B3E4u: goto label_7F31B3E4;
    case 0x7F31B3E8u: goto label_7F31B3E8;
    case 0x7F31B3ECu: goto label_7F31B3EC;
    case 0x7F31B3F0u: goto label_7F31B3F0;
    case 0x7F31B3F4u: goto label_7F31B3F4;
    case 0x7F31B3F8u: goto label_7F31B3F8;
    case 0x7F31B3FCu: goto label_7F31B3FC;
    case 0x7F31B400u: goto label_7F31B400;
    case 0x7F31B404u: goto label_7F31B404;
    case 0x7F31B408u: goto label_7F31B408;
    case 0x7F31B40Cu: goto label_7F31B40C;
    case 0x7F31B410u: goto label_7F31B410;
    case 0x7F31B414u: goto label_7F31B414;
    case 0x7F31B418u: goto label_7F31B418;
    case 0x7F31B41Cu: goto label_7F31B41C;
    case 0x7F31B420u: goto label_7F31B420;
    case 0x7F31B424u: goto label_7F31B424;
    case 0x7F31B428u: goto label_7F31B428;
    case 0x7F31B42Cu: goto label_7F31B42C;
    case 0x7F31B430u: goto label_7F31B430;
    case 0x7F31B434u: goto label_7F31B434;
    case 0x7F31B438u: goto label_7F31B438;
    case 0x7F31B43Cu: goto label_7F31B43C;
    case 0x7F31B440u: goto label_7F31B440;
    case 0x7F31B444u: goto label_7F31B444;
    case 0x7F31B448u: goto label_7F31B448;
    case 0x7F31B44Cu: goto label_7F31B44C;
    case 0x7F31B450u: goto label_7F31B450;
    case 0x7F31B454u: goto label_7F31B454;
    case 0x7F31B458u: goto label_7F31B458;
    case 0x7F31B45Cu: goto label_7F31B45C;
    case 0x7F31B460u: goto label_7F31B460;
    case 0x7F31B464u: goto label_7F31B464;
    case 0x7F31B468u: goto label_7F31B468;
    case 0x7F31B46Cu: goto label_7F31B46C;
    case 0x7F31B470u: goto label_7F31B470;
    case 0x7F31B474u: goto label_7F31B474;
    case 0x7F31B478u: goto label_7F31B478;
    case 0x7F31B47Cu: goto label_7F31B47C;
    case 0x7F31B480u: goto label_7F31B480;
    case 0x7F31B484u: goto label_7F31B484;
    case 0x7F31B488u: goto label_7F31B488;
    case 0x7F31B48Cu: goto label_7F31B48C;
    case 0x7F31B490u: goto label_7F31B490;
    case 0x7F31B494u: goto label_7F31B494;
    case 0x7F31B498u: goto label_7F31B498;
    case 0x7F31B49Cu: goto label_7F31B49C;
    case 0x7F31B4A0u: goto label_7F31B4A0;
    case 0x7F31B4A4u: goto label_7F31B4A4;
    case 0x7F31B4A8u: goto label_7F31B4A8;
    case 0x7F31B4ACu: goto label_7F31B4AC;
    case 0x7F31B4B0u: goto label_7F31B4B0;
    case 0x7F31B4B4u: goto label_7F31B4B4;
    case 0x7F31B4B8u: goto label_7F31B4B8;
    case 0x7F31B4BCu: goto label_7F31B4BC;
    case 0x7F31B4C0u: goto label_7F31B4C0;
    case 0x7F31B4C4u: goto label_7F31B4C4;
    case 0x7F31B4C8u: goto label_7F31B4C8;
    case 0x7F31B4CCu: goto label_7F31B4CC;
    case 0x7F31B4D0u: goto label_7F31B4D0;
    case 0x7F31B4D4u: goto label_7F31B4D4;
    case 0x7F31B4D8u: goto label_7F31B4D8;
    case 0x7F31B4DCu: goto label_7F31B4DC;
    case 0x7F31B4E0u: goto label_7F31B4E0;
    case 0x7F31B4E4u: goto label_7F31B4E4;
    case 0x7F31B4E8u: goto label_7F31B4E8;
    case 0x7F31B4ECu: goto label_7F31B4EC;
    case 0x7F31B4F0u: goto label_7F31B4F0;
    case 0x7F31B4F4u: goto label_7F31B4F4;
    case 0x7F31B4F8u: goto label_7F31B4F8;
    case 0x7F31B4FCu: goto label_7F31B4FC;
    case 0x7F31B500u: goto label_7F31B500;
    case 0x7F31B504u: goto label_7F31B504;
    case 0x7F31B508u: goto label_7F31B508;
    case 0x7F31B50Cu: goto label_7F31B50C;
    case 0x7F31B510u: goto label_7F31B510;
    case 0x7F31B514u: goto label_7F31B514;
    case 0x7F31B518u: goto label_7F31B518;
    case 0x7F31B51Cu: goto label_7F31B51C;
    case 0x7F31B520u: goto label_7F31B520;
    case 0x7F31B524u: goto label_7F31B524;
    case 0x7F31B528u: goto label_7F31B528;
    case 0x7F31B52Cu: goto label_7F31B52C;
    case 0x7F31B530u: goto label_7F31B530;
    case 0x7F31B534u: goto label_7F31B534;
    case 0x7F31B538u: goto label_7F31B538;
    case 0x7F31B53Cu: goto label_7F31B53C;
    case 0x7F31B540u: goto label_7F31B540;
    case 0x7F31B544u: goto label_7F31B544;
    case 0x7F31B548u: goto label_7F31B548;
    case 0x7F31B54Cu: goto label_7F31B54C;
    case 0x7F31B550u: goto label_7F31B550;
    case 0x7F31B554u: goto label_7F31B554;
    case 0x7F31B558u: goto label_7F31B558;
    case 0x7F31B55Cu: goto label_7F31B55C;
    case 0x7F31B560u: goto label_7F31B560;
    case 0x7F31B564u: goto label_7F31B564;
    case 0x7F31B568u: goto label_7F31B568;
    case 0x7F31B56Cu: goto label_7F31B56C;
    case 0x7F31B570u: goto label_7F31B570;
    case 0x7F31B574u: goto label_7F31B574;
    case 0x7F31B578u: goto label_7F31B578;
    case 0x7F31B57Cu: goto label_7F31B57C;
    case 0x7F31B580u: goto label_7F31B580;
    case 0x7F31B584u: goto label_7F31B584;
    case 0x7F31B588u: goto label_7F31B588;
    case 0x7F31B58Cu: goto label_7F31B58C;
    case 0x7F31B590u: goto label_7F31B590;
    case 0x7F31B594u: goto label_7F31B594;
    case 0x7F31B598u: goto label_7F31B598;
    case 0x7F31B59Cu: goto label_7F31B59C;
    case 0x7F31B5A0u: goto label_7F31B5A0;
    case 0x7F31B5A4u: goto label_7F31B5A4;
    case 0x7F31B5A8u: goto label_7F31B5A8;
    case 0x7F31B5ACu: goto label_7F31B5AC;
    case 0x7F31B5B0u: goto label_7F31B5B0;
    case 0x7F31B5B4u: goto label_7F31B5B4;
    case 0x7F31B5B8u: goto label_7F31B5B8;
    case 0x7F31B5BCu: goto label_7F31B5BC;
    case 0x7F31B5C0u: goto label_7F31B5C0;
    case 0x7F31B5C4u: goto label_7F31B5C4;
    case 0x7F31B5C8u: goto label_7F31B5C8;
    case 0x7F31B5CCu: goto label_7F31B5CC;
    case 0x7F31B5D0u: goto label_7F31B5D0;
    case 0x7F31B5D4u: goto label_7F31B5D4;
    case 0x7F31B5D8u: goto label_7F31B5D8;
    case 0x7F31B5DCu: goto label_7F31B5DC;
    case 0x7F31B5E0u: goto label_7F31B5E0;
    case 0x7F31B5E4u: goto label_7F31B5E4;
    case 0x7F31B5E8u: goto label_7F31B5E8;
    case 0x7F31B5ECu: goto label_7F31B5EC;
    case 0x7F31B5F0u: goto label_7F31B5F0;
    case 0x7F31B5F4u: goto label_7F31B5F4;
    case 0x7F31B5F8u: goto label_7F31B5F8;
    case 0x7F31B5FCu: goto label_7F31B5FC;
    case 0x7F31B600u: goto label_7F31B600;
    case 0x7F31B604u: goto label_7F31B604;
    case 0x7F31B608u: goto label_7F31B608;
    case 0x7F31B60Cu: goto label_7F31B60C;
    case 0x7F31B610u: goto label_7F31B610;
    case 0x7F31B614u: goto label_7F31B614;
    case 0x7F31B618u: goto label_7F31B618;
    case 0x7F31B61Cu: goto label_7F31B61C;
    case 0x7F31B620u: goto label_7F31B620;
    case 0x7F31B624u: goto label_7F31B624;
    case 0x7F31B628u: goto label_7F31B628;
    case 0x7F31B62Cu: goto label_7F31B62C;
    case 0x7F31B630u: goto label_7F31B630;
    case 0x7F31B634u: goto label_7F31B634;
    case 0x7F31B638u: goto label_7F31B638;
    case 0x7F31B63Cu: goto label_7F31B63C;
    case 0x7F31B640u: goto label_7F31B640;
    case 0x7F31B644u: goto label_7F31B644;
    case 0x7F31B648u: goto label_7F31B648;
    case 0x7F31B64Cu: goto label_7F31B64C;
    case 0x7F31B650u: goto label_7F31B650;
    case 0x7F31B654u: goto label_7F31B654;
    case 0x7F31B658u: goto label_7F31B658;
    case 0x7F31B65Cu: goto label_7F31B65C;
    case 0x7F31B660u: goto label_7F31B660;
    case 0x7F31B664u: goto label_7F31B664;
    case 0x7F31B668u: goto label_7F31B668;
    case 0x7F31B66Cu: goto label_7F31B66C;
    case 0x7F31B670u: goto label_7F31B670;
    case 0x7F31B674u: goto label_7F31B674;
    case 0x7F31B678u: goto label_7F31B678;
    case 0x7F31B67Cu: goto label_7F31B67C;
    case 0x7F31B680u: goto label_7F31B680;
    case 0x7F31B684u: goto label_7F31B684;
    case 0x7F31B688u: goto label_7F31B688;
    case 0x7F31B68Cu: goto label_7F31B68C;
    case 0x7F31B690u: goto label_7F31B690;
    case 0x7F31B694u: goto label_7F31B694;
    case 0x7F31B698u: goto label_7F31B698;
    case 0x7F31B69Cu: goto label_7F31B69C;
    case 0x7F31B6A0u: goto label_7F31B6A0;
    case 0x7F31B6A4u: goto label_7F31B6A4;
    case 0x7F31B6A8u: goto label_7F31B6A8;
    case 0x7F31B6ACu: goto label_7F31B6AC;
    case 0x7F31B6B0u: goto label_7F31B6B0;
    case 0x7F31B6B4u: goto label_7F31B6B4;
    case 0x7F31B6B8u: goto label_7F31B6B8;
    case 0x7F31B6BCu: goto label_7F31B6BC;
    case 0x7F31B6C0u: goto label_7F31B6C0;
    case 0x7F31B6C4u: goto label_7F31B6C4;
    case 0x7F31B6C8u: goto label_7F31B6C8;
    case 0x7F31B6CCu: goto label_7F31B6CC;
    case 0x7F31B6D0u: goto label_7F31B6D0;
    case 0x7F31B6D4u: goto label_7F31B6D4;
    case 0x7F31B6D8u: goto label_7F31B6D8;
    case 0x7F31B6DCu: goto label_7F31B6DC;
    case 0x7F31B6E0u: goto label_7F31B6E0;
    case 0x7F31B6E4u: goto label_7F31B6E4;
    case 0x7F31B6E8u: goto label_7F31B6E8;
    case 0x7F31B6ECu: goto label_7F31B6EC;
    case 0x7F31B6F0u: goto label_7F31B6F0;
    case 0x7F31B6F4u: goto label_7F31B6F4;
    case 0x7F31B6F8u: goto label_7F31B6F8;
    case 0x7F31B6FCu: goto label_7F31B6FC;
    case 0x7F31B700u: goto label_7F31B700;
    case 0x7F31B704u: goto label_7F31B704;
    case 0x7F31B708u: goto label_7F31B708;
    case 0x7F31B70Cu: goto label_7F31B70C;
    case 0x7F31B710u: goto label_7F31B710;
    case 0x7F31B714u: goto label_7F31B714;
    case 0x7F31B718u: goto label_7F31B718;
    case 0x7F31B71Cu: goto label_7F31B71C;
    case 0x7F31B720u: goto label_7F31B720;
    case 0x7F31B724u: goto label_7F31B724;
    case 0x7F31B728u: goto label_7F31B728;
    case 0x7F31B72Cu: goto label_7F31B72C;
    case 0x7F31B730u: goto label_7F31B730;
    case 0x7F31B734u: goto label_7F31B734;
    case 0x7F31B738u: goto label_7F31B738;
    case 0x7F31B73Cu: goto label_7F31B73C;
    case 0x7F31B740u: goto label_7F31B740;
    case 0x7F31B744u: goto label_7F31B744;
    case 0x7F31B748u: goto label_7F31B748;
    case 0x7F31B74Cu: goto label_7F31B74C;
    case 0x7F31B750u: goto label_7F31B750;
    case 0x7F31B754u: goto label_7F31B754;
    case 0x7F31B758u: goto label_7F31B758;
    case 0x7F31B75Cu: goto label_7F31B75C;
    case 0x7F31B760u: goto label_7F31B760;
    case 0x7F31B764u: goto label_7F31B764;
    case 0x7F31B768u: goto label_7F31B768;
    case 0x7F31B76Cu: goto label_7F31B76C;
    case 0x7F31B770u: goto label_7F31B770;
    case 0x7F31B774u: goto label_7F31B774;
    case 0x7F31B778u: goto label_7F31B778;
    case 0x7F31B77Cu: goto label_7F31B77C;
    case 0x7F31B780u: goto label_7F31B780;
    case 0x7F31B784u: goto label_7F31B784;
    case 0x7F31B788u: goto label_7F31B788;
    case 0x7F31B78Cu: goto label_7F31B78C;
    case 0x7F31B790u: goto label_7F31B790;
    case 0x7F31B794u: goto label_7F31B794;
    case 0x7F31B798u: goto label_7F31B798;
    case 0x7F31B79Cu: goto label_7F31B79C;
    case 0x7F31B7A0u: goto label_7F31B7A0;
    case 0x7F31B7A4u: goto label_7F31B7A4;
    case 0x7F31B7A8u: goto label_7F31B7A8;
    case 0x7F31B7ACu: goto label_7F31B7AC;
    case 0x7F31B7B0u: goto label_7F31B7B0;
    case 0x7F31B7B4u: goto label_7F31B7B4;
    case 0x7F31B7B8u: goto label_7F31B7B8;
    case 0x7F31B7BCu: goto label_7F31B7BC;
    case 0x7F31B7C0u: goto label_7F31B7C0;
    case 0x7F31B7C4u: goto label_7F31B7C4;
    case 0x7F31B7C8u: goto label_7F31B7C8;
    case 0x7F31B7CCu: goto label_7F31B7CC;
    case 0x7F31B7D0u: goto label_7F31B7D0;
    case 0x7F31B7D4u: goto label_7F31B7D4;
    case 0x7F31B7D8u: goto label_7F31B7D8;
    case 0x7F31B7DCu: goto label_7F31B7DC;
    case 0x7F31B7E0u: goto label_7F31B7E0;
    case 0x7F31B7E4u: goto label_7F31B7E4;
    case 0x7F31B7E8u: goto label_7F31B7E8;
    case 0x7F31B7ECu: goto label_7F31B7EC;
    case 0x7F31B7F0u: goto label_7F31B7F0;
    case 0x7F31B7F4u: goto label_7F31B7F4;
    case 0x7F31B7F8u: goto label_7F31B7F8;
    case 0x7F31B7FCu: goto label_7F31B7FC;
    case 0x7F31B800u: goto label_7F31B800;
    case 0x7F31B804u: goto label_7F31B804;
    case 0x7F31B808u: goto label_7F31B808;
    case 0x7F31B80Cu: goto label_7F31B80C;
    case 0x7F31B810u: goto label_7F31B810;
    case 0x7F31B814u: goto label_7F31B814;
    case 0x7F31B818u: goto label_7F31B818;
    case 0x7F31B81Cu: goto label_7F31B81C;
    case 0x7F31B820u: goto label_7F31B820;
    case 0x7F31B824u: goto label_7F31B824;
    case 0x7F31B828u: goto label_7F31B828;
    case 0x7F31B82Cu: goto label_7F31B82C;
    case 0x7F31B830u: goto label_7F31B830;
    case 0x7F31B834u: goto label_7F31B834;
    case 0x7F31B838u: goto label_7F31B838;
    case 0x7F31B83Cu: goto label_7F31B83C;
    case 0x7F31B840u: goto label_7F31B840;
    case 0x7F31B844u: goto label_7F31B844;
    case 0x7F31B848u: goto label_7F31B848;
    case 0x7F31B84Cu: goto label_7F31B84C;
    case 0x7F31B850u: goto label_7F31B850;
    case 0x7F31B854u: goto label_7F31B854;
    case 0x7F31B858u: goto label_7F31B858;
    case 0x7F31B85Cu: goto label_7F31B85C;
    case 0x7F31B860u: goto label_7F31B860;
    case 0x7F31B864u: goto label_7F31B864;
    case 0x7F31B868u: goto label_7F31B868;
    case 0x7F31B86Cu: goto label_7F31B86C;
    case 0x7F31B870u: goto label_7F31B870;
    case 0x7F31B874u: goto label_7F31B874;
    case 0x7F31B878u: goto label_7F31B878;
    case 0x7F31B87Cu: goto label_7F31B87C;
    case 0x7F31B880u: goto label_7F31B880;
    case 0x7F31B884u: goto label_7F31B884;
    case 0x7F31B888u: goto label_7F31B888;
    case 0x7F31B88Cu: goto label_7F31B88C;
    case 0x7F31B890u: goto label_7F31B890;
    case 0x7F31B894u: goto label_7F31B894;
    case 0x7F31B898u: goto label_7F31B898;
    case 0x7F31B89Cu: goto label_7F31B89C;
    case 0x7F31B8A0u: goto label_7F31B8A0;
    case 0x7F31B8A4u: goto label_7F31B8A4;
    case 0x7F31B8A8u: goto label_7F31B8A8;
    case 0x7F31B8ACu: goto label_7F31B8AC;
    case 0x7F31B8B0u: goto label_7F31B8B0;
    case 0x7F31B8B4u: goto label_7F31B8B4;
    case 0x7F31B8B8u: goto label_7F31B8B8;
    case 0x7F31B8BCu: goto label_7F31B8BC;
    case 0x7F31B8C0u: goto label_7F31B8C0;
    case 0x7F31B8C4u: goto label_7F31B8C4;
    case 0x7F31B8C8u: goto label_7F31B8C8;
    case 0x7F31B8CCu: goto label_7F31B8CC;
    case 0x7F31B8D0u: goto label_7F31B8D0;
    case 0x7F31B8D4u: goto label_7F31B8D4;
    case 0x7F31B8D8u: goto label_7F31B8D8;
    case 0x7F31B8DCu: goto label_7F31B8DC;
    case 0x7F31B8E0u: goto label_7F31B8E0;
    case 0x7F31B8E4u: goto label_7F31B8E4;
    case 0x7F31B8E8u: goto label_7F31B8E8;
    case 0x7F31B8ECu: goto label_7F31B8EC;
    case 0x7F31B8F0u: goto label_7F31B8F0;
    case 0x7F31B8F4u: goto label_7F31B8F4;
    case 0x7F31B8F8u: goto label_7F31B8F8;
    case 0x7F31B8FCu: goto label_7F31B8FC;
    case 0x7F31B900u: goto label_7F31B900;
    case 0x7F31B904u: goto label_7F31B904;
    case 0x7F31B908u: goto label_7F31B908;
    case 0x7F31B90Cu: goto label_7F31B90C;
    case 0x7F31B910u: goto label_7F31B910;
    case 0x7F31B914u: goto label_7F31B914;
    case 0x7F31B918u: goto label_7F31B918;
    case 0x7F31B91Cu: goto label_7F31B91C;
    case 0x7F31B920u: goto label_7F31B920;
    case 0x7F31B924u: goto label_7F31B924;
    case 0x7F31B928u: goto label_7F31B928;
    case 0x7F31B92Cu: goto label_7F31B92C;
    case 0x7F31B930u: goto label_7F31B930;
    case 0x7F31B934u: goto label_7F31B934;
    case 0x7F31B938u: goto label_7F31B938;
    case 0x7F31B93Cu: goto label_7F31B93C;
    case 0x7F31B940u: goto label_7F31B940;
    case 0x7F31B944u: goto label_7F31B944;
    case 0x7F31B948u: goto label_7F31B948;
    case 0x7F31B94Cu: goto label_7F31B94C;
    case 0x7F31B950u: goto label_7F31B950;
    case 0x7F31B954u: goto label_7F31B954;
    case 0x7F31B958u: goto label_7F31B958;
    case 0x7F31B95Cu: goto label_7F31B95C;
    case 0x7F31B960u: goto label_7F31B960;
    case 0x7F31B964u: goto label_7F31B964;
    case 0x7F31B968u: goto label_7F31B968;
    case 0x7F31B96Cu: goto label_7F31B96C;
    case 0x7F31B970u: goto label_7F31B970;
    case 0x7F31B974u: goto label_7F31B974;
    case 0x7F31B978u: goto label_7F31B978;
    case 0x7F31B97Cu: goto label_7F31B97C;
    case 0x7F31B980u: goto label_7F31B980;
    case 0x7F31B984u: goto label_7F31B984;
    case 0x7F31B988u: goto label_7F31B988;
    case 0x7F31B98Cu: goto label_7F31B98C;
    case 0x7F31B990u: goto label_7F31B990;
    case 0x7F31B994u: goto label_7F31B994;
    case 0x7F31B998u: goto label_7F31B998;
    case 0x7F31B99Cu: goto label_7F31B99C;
    case 0x7F31B9A0u: goto label_7F31B9A0;
    case 0x7F31B9A4u: goto label_7F31B9A4;
    case 0x7F31B9A8u: goto label_7F31B9A8;
    case 0x7F31B9ACu: goto label_7F31B9AC;
    case 0x7F31B9B0u: goto label_7F31B9B0;
    case 0x7F31B9B4u: goto label_7F31B9B4;
    case 0x7F31B9B8u: goto label_7F31B9B8;
    case 0x7F31B9BCu: goto label_7F31B9BC;
    case 0x7F31B9C0u: goto label_7F31B9C0;
    case 0x7F31B9C4u: goto label_7F31B9C4;
    case 0x7F31B9C8u: goto label_7F31B9C8;
    case 0x7F31B9CCu: goto label_7F31B9CC;
    case 0x7F31B9D0u: goto label_7F31B9D0;
    case 0x7F31B9D4u: goto label_7F31B9D4;
    case 0x7F31B9D8u: goto label_7F31B9D8;
    case 0x7F31B9DCu: goto label_7F31B9DC;
    case 0x7F31B9E0u: goto label_7F31B9E0;
    case 0x7F31B9E4u: goto label_7F31B9E4;
    case 0x7F31B9E8u: goto label_7F31B9E8;
    case 0x7F31B9ECu: goto label_7F31B9EC;
    case 0x7F31B9F0u: goto label_7F31B9F0;
    case 0x7F31B9F4u: goto label_7F31B9F4;
    case 0x7F31B9F8u: goto label_7F31B9F8;
    case 0x7F31B9FCu: goto label_7F31B9FC;
    case 0x7F31BA00u: goto label_7F31BA00;
    case 0x7F31BA04u: goto label_7F31BA04;
    case 0x7F31BA08u: goto label_7F31BA08;
    case 0x7F31BA0Cu: goto label_7F31BA0C;
    case 0x7F31BA10u: goto label_7F31BA10;
    case 0x7F31BA14u: goto label_7F31BA14;
    case 0x7F31BA18u: goto label_7F31BA18;
    case 0x7F31BA1Cu: goto label_7F31BA1C;
    case 0x7F31BA20u: goto label_7F31BA20;
    case 0x7F31BA24u: goto label_7F31BA24;
    case 0x7F31BA28u: goto label_7F31BA28;
    case 0x7F31BA2Cu: goto label_7F31BA2C;
    case 0x7F31BA30u: goto label_7F31BA30;
    case 0x7F31BA34u: goto label_7F31BA34;
    case 0x7F31BA38u: goto label_7F31BA38;
    case 0x7F31BA3Cu: goto label_7F31BA3C;
    case 0x7F31BA40u: goto label_7F31BA40;
    case 0x7F31BA44u: goto label_7F31BA44;
    case 0x7F31BA48u: goto label_7F31BA48;
    case 0x7F31BA4Cu: goto label_7F31BA4C;
    case 0x7F31BA50u: goto label_7F31BA50;
    case 0x7F31BA54u: goto label_7F31BA54;
    case 0x7F31BA58u: goto label_7F31BA58;
    case 0x7F31BA5Cu: goto label_7F31BA5C;
    case 0x7F31BA60u: goto label_7F31BA60;
    case 0x7F31BA64u: goto label_7F31BA64;
    case 0x7F31BA68u: goto label_7F31BA68;
    case 0x7F31BA6Cu: goto label_7F31BA6C;
    case 0x7F31BA70u: goto label_7F31BA70;
    case 0x7F31BA74u: goto label_7F31BA74;
    case 0x7F31BA78u: goto label_7F31BA78;
    case 0x7F31BA7Cu: goto label_7F31BA7C;
    case 0x7F31BA80u: goto label_7F31BA80;
    case 0x7F31BA84u: goto label_7F31BA84;
    case 0x7F31BA88u: goto label_7F31BA88;
    case 0x7F31BA8Cu: goto label_7F31BA8C;
    case 0x7F31BA90u: goto label_7F31BA90;
    case 0x7F31BA94u: goto label_7F31BA94;
    case 0x7F31BA98u: goto label_7F31BA98;
    case 0x7F31BA9Cu: goto label_7F31BA9C;
    case 0x7F31BAA0u: goto label_7F31BAA0;
    case 0x7F31BAA4u: goto label_7F31BAA4;
    case 0x7F31BAA8u: goto label_7F31BAA8;
    case 0x7F31BAACu: goto label_7F31BAAC;
    case 0x7F31BAB0u: goto label_7F31BAB0;
    case 0x7F31BAB4u: goto label_7F31BAB4;
    case 0x7F31BAB8u: goto label_7F31BAB8;
    case 0x7F31BABCu: goto label_7F31BABC;
    case 0x7F31BAC0u: goto label_7F31BAC0;
    case 0x7F31BAC4u: goto label_7F31BAC4;
    case 0x7F31BAC8u: goto label_7F31BAC8;
    case 0x7F31BACCu: goto label_7F31BACC;
    case 0x7F31BAD0u: goto label_7F31BAD0;
    case 0x7F31BAD4u: goto label_7F31BAD4;
    case 0x7F31BAD8u: goto label_7F31BAD8;
    case 0x7F31BADCu: goto label_7F31BADC;
    case 0x7F31BAE0u: goto label_7F31BAE0;
    case 0x7F31BAE4u: goto label_7F31BAE4;
    case 0x7F31BAE8u: goto label_7F31BAE8;
    case 0x7F31BAECu: goto label_7F31BAEC;
    case 0x7F31BAF0u: goto label_7F31BAF0;
    case 0x7F31BAF4u: goto label_7F31BAF4;
    case 0x7F31BAF8u: goto label_7F31BAF8;
    case 0x7F31BAFCu: goto label_7F31BAFC;
    case 0x7F31BB00u: goto label_7F31BB00;
    case 0x7F31BB04u: goto label_7F31BB04;
    case 0x7F31BB08u: goto label_7F31BB08;
    case 0x7F31BB0Cu: goto label_7F31BB0C;
    case 0x7F31BB10u: goto label_7F31BB10;
    case 0x7F31BB14u: goto label_7F31BB14;
    case 0x7F31BB18u: goto label_7F31BB18;
    case 0x7F31BB1Cu: goto label_7F31BB1C;
    case 0x7F31BB20u: goto label_7F31BB20;
    case 0x7F31BB24u: goto label_7F31BB24;
    case 0x7F31BB28u: goto label_7F31BB28;
    case 0x7F31BB2Cu: goto label_7F31BB2C;
    case 0x7F31BB30u: goto label_7F31BB30;
    case 0x7F31BB34u: goto label_7F31BB34;
    case 0x7F31BB38u: goto label_7F31BB38;
    case 0x7F31BB3Cu: goto label_7F31BB3C;
    case 0x7F31BB40u: goto label_7F31BB40;
    case 0x7F31BB44u: goto label_7F31BB44;
    case 0x7F31BB48u: goto label_7F31BB48;
    case 0x7F31BB4Cu: goto label_7F31BB4C;
    case 0x7F31BB50u: goto label_7F31BB50;
    case 0x7F31BB54u: goto label_7F31BB54;
    case 0x7F31BB58u: goto label_7F31BB58;
    case 0x7F31BB5Cu: goto label_7F31BB5C;
    case 0x7F31BB60u: goto label_7F31BB60;
    case 0x7F31BB64u: goto label_7F31BB64;
    case 0x7F31BB68u: goto label_7F31BB68;
    case 0x7F31BB6Cu: goto label_7F31BB6C;
    case 0x7F31BB70u: goto label_7F31BB70;
    case 0x7F31BB74u: goto label_7F31BB74;
    case 0x7F31BB78u: goto label_7F31BB78;
    case 0x7F31BB7Cu: goto label_7F31BB7C;
    case 0x7F31BB80u: goto label_7F31BB80;
    case 0x7F31BB84u: goto label_7F31BB84;
    case 0x7F31BB88u: goto label_7F31BB88;
    case 0x7F31BB8Cu: goto label_7F31BB8C;
    case 0x7F31BB90u: goto label_7F31BB90;
    case 0x7F31BB94u: goto label_7F31BB94;
    case 0x7F31BB98u: goto label_7F31BB98;
    case 0x7F31BB9Cu: goto label_7F31BB9C;
    case 0x7F31BBA0u: goto label_7F31BBA0;
    case 0x7F31BBA4u: goto label_7F31BBA4;
    case 0x7F31BBA8u: goto label_7F31BBA8;
    case 0x7F31BBACu: goto label_7F31BBAC;
    case 0x7F31BBB0u: goto label_7F31BBB0;
    case 0x7F31BBB4u: goto label_7F31BBB4;
    case 0x7F31BBB8u: goto label_7F31BBB8;
    case 0x7F31BBBCu: goto label_7F31BBBC;
    case 0x7F31BBC0u: goto label_7F31BBC0;
    case 0x7F31BBC4u: goto label_7F31BBC4;
    case 0x7F31BBC8u: goto label_7F31BBC8;
    case 0x7F31BBCCu: goto label_7F31BBCC;
    case 0x7F31BBD0u: goto label_7F31BBD0;
    case 0x7F31BBD4u: goto label_7F31BBD4;
    case 0x7F31BBD8u: goto label_7F31BBD8;
    case 0x7F31BBDCu: goto label_7F31BBDC;
    case 0x7F31BBE0u: goto label_7F31BBE0;
    case 0x7F31BBE4u: goto label_7F31BBE4;
    case 0x7F31BBE8u: goto label_7F31BBE8;
    case 0x7F31BBECu: goto label_7F31BBEC;
    case 0x7F31BBF0u: goto label_7F31BBF0;
    case 0x7F31BBF4u: goto label_7F31BBF4;
    case 0x7F31BBF8u: goto label_7F31BBF8;
    case 0x7F31BBFCu: goto label_7F31BBFC;
    case 0x7F31BC00u: goto label_7F31BC00;
    case 0x7F31BC04u: goto label_7F31BC04;
    case 0x7F31BC08u: goto label_7F31BC08;
    case 0x7F31BC0Cu: goto label_7F31BC0C;
    case 0x7F31BC10u: goto label_7F31BC10;
    case 0x7F31BC14u: goto label_7F31BC14;
    case 0x7F31BC18u: goto label_7F31BC18;
    case 0x7F31BC1Cu: goto label_7F31BC1C;
    case 0x7F31BC20u: goto label_7F31BC20;
    case 0x7F31BC24u: goto label_7F31BC24;
    case 0x7F31BC28u: goto label_7F31BC28;
    case 0x7F31BC2Cu: goto label_7F31BC2C;
    case 0x7F31BC30u: goto label_7F31BC30;
    case 0x7F31BC34u: goto label_7F31BC34;
    case 0x7F31BC38u: goto label_7F31BC38;
    case 0x7F31BC3Cu: goto label_7F31BC3C;
    case 0x7F31BC40u: goto label_7F31BC40;
    case 0x7F31BC44u: goto label_7F31BC44;
    case 0x7F31BC48u: goto label_7F31BC48;
    case 0x7F31BC4Cu: goto label_7F31BC4C;
    case 0x7F31BC50u: goto label_7F31BC50;
    case 0x7F31BC54u: goto label_7F31BC54;
    case 0x7F31BC58u: goto label_7F31BC58;
    case 0x7F31BC5Cu: goto label_7F31BC5C;
    case 0x7F31BC60u: goto label_7F31BC60;
    case 0x7F31BC64u: goto label_7F31BC64;
    case 0x7F31BC68u: goto label_7F31BC68;
    case 0x7F31BC6Cu: goto label_7F31BC6C;
    case 0x7F31BC70u: goto label_7F31BC70;
    case 0x7F31BC74u: goto label_7F31BC74;
    case 0x7F31BC78u: goto label_7F31BC78;
    case 0x7F31BC7Cu: goto label_7F31BC7C;
    case 0x7F31BC80u: goto label_7F31BC80;
    case 0x7F31BC84u: goto label_7F31BC84;
    case 0x7F31BC88u: goto label_7F31BC88;
    case 0x7F31BC8Cu: goto label_7F31BC8C;
    case 0x7F31BC90u: goto label_7F31BC90;
    case 0x7F31BC94u: goto label_7F31BC94;
    case 0x7F31BC98u: goto label_7F31BC98;
    case 0x7F31BC9Cu: goto label_7F31BC9C;
    case 0x7F31BCA0u: goto label_7F31BCA0;
    case 0x7F31BCA4u: goto label_7F31BCA4;
    case 0x7F31BCA8u: goto label_7F31BCA8;
    case 0x7F31BCACu: goto label_7F31BCAC;
    case 0x7F31BCB0u: goto label_7F31BCB0;
    case 0x7F31BCB4u: goto label_7F31BCB4;
    case 0x7F31BCB8u: goto label_7F31BCB8;
    case 0x7F31BCBCu: goto label_7F31BCBC;
    case 0x7F31BCC0u: goto label_7F31BCC0;
    case 0x7F31BCC4u: goto label_7F31BCC4;
    case 0x7F31BCC8u: goto label_7F31BCC8;
    case 0x7F31BCCCu: goto label_7F31BCCC;
    case 0x7F31BCD0u: goto label_7F31BCD0;
    case 0x7F31BCD4u: goto label_7F31BCD4;
    case 0x7F31BCD8u: goto label_7F31BCD8;
    case 0x7F31BCDCu: goto label_7F31BCDC;
    case 0x7F31BCE0u: goto label_7F31BCE0;
    case 0x7F31BCE4u: goto label_7F31BCE4;
    case 0x7F31BCE8u: goto label_7F31BCE8;
    case 0x7F31BCECu: goto label_7F31BCEC;
    case 0x7F31BCF0u: goto label_7F31BCF0;
    case 0x7F31BCF4u: goto label_7F31BCF4;
    case 0x7F31BCF8u: goto label_7F31BCF8;
    case 0x7F31BCFCu: goto label_7F31BCFC;
    case 0x7F31BD00u: goto label_7F31BD00;
    case 0x7F31BD04u: goto label_7F31BD04;
    case 0x7F31BD08u: goto label_7F31BD08;
    case 0x7F31BD0Cu: goto label_7F31BD0C;
    case 0x7F31BD10u: goto label_7F31BD10;
    case 0x7F31BD14u: goto label_7F31BD14;
    case 0x7F31BD18u: goto label_7F31BD18;
    case 0x7F31BD1Cu: goto label_7F31BD1C;
    case 0x7F31BD20u: goto label_7F31BD20;
    case 0x7F31BD24u: goto label_7F31BD24;
    case 0x7F31BD28u: goto label_7F31BD28;
    case 0x7F31BD2Cu: goto label_7F31BD2C;
    case 0x7F31BD30u: goto label_7F31BD30;
    case 0x7F31BD34u: goto label_7F31BD34;
    case 0x7F31BD38u: goto label_7F31BD38;
    case 0x7F31BD3Cu: goto label_7F31BD3C;
    case 0x7F31BD40u: goto label_7F31BD40;
    case 0x7F31BD44u: goto label_7F31BD44;
    case 0x7F31BD48u: goto label_7F31BD48;
    case 0x7F31BD4Cu: goto label_7F31BD4C;
    case 0x7F31BD50u: goto label_7F31BD50;
    case 0x7F31BD54u: goto label_7F31BD54;
    case 0x7F31BD58u: goto label_7F31BD58;
    case 0x7F31BD5Cu: goto label_7F31BD5C;
    case 0x7F31BD60u: goto label_7F31BD60;
    case 0x7F31BD64u: goto label_7F31BD64;
    case 0x7F31BD68u: goto label_7F31BD68;
    case 0x7F31BD6Cu: goto label_7F31BD6C;
    case 0x7F31BD70u: goto label_7F31BD70;
    case 0x7F31BD74u: goto label_7F31BD74;
    case 0x7F31BD78u: goto label_7F31BD78;
    case 0x7F31BD7Cu: goto label_7F31BD7C;
    case 0x7F31BD80u: goto label_7F31BD80;
    case 0x7F31BD84u: goto label_7F31BD84;
    case 0x7F31BD88u: goto label_7F31BD88;
    case 0x7F31BD8Cu: goto label_7F31BD8C;
    case 0x7F31BD90u: goto label_7F31BD90;
    case 0x7F31BD94u: goto label_7F31BD94;
    case 0x7F31BD98u: goto label_7F31BD98;
    case 0x7F31BD9Cu: goto label_7F31BD9C;
    case 0x7F31BDA0u: goto label_7F31BDA0;
    case 0x7F31BDA4u: goto label_7F31BDA4;
    case 0x7F31BDA8u: goto label_7F31BDA8;
    case 0x7F31BDACu: goto label_7F31BDAC;
    case 0x7F31BDB0u: goto label_7F31BDB0;
    case 0x7F31BDB4u: goto label_7F31BDB4;
    case 0x7F31BDB8u: goto label_7F31BDB8;
    case 0x7F31BDBCu: goto label_7F31BDBC;
    case 0x7F31BDC0u: goto label_7F31BDC0;
    case 0x7F31BDC4u: goto label_7F31BDC4;
    case 0x7F31BDC8u: goto label_7F31BDC8;
    case 0x7F31BDCCu: goto label_7F31BDCC;
    case 0x7F31BDD0u: goto label_7F31BDD0;
    case 0x7F31BDD4u: goto label_7F31BDD4;
    case 0x7F31BDD8u: goto label_7F31BDD8;
    case 0x7F31BDDCu: goto label_7F31BDDC;
    case 0x7F31BDE0u: goto label_7F31BDE0;
    case 0x7F31BDE4u: goto label_7F31BDE4;
    case 0x7F31BDE8u: goto label_7F31BDE8;
    case 0x7F31BDECu: goto label_7F31BDEC;
    case 0x7F31BDF0u: goto label_7F31BDF0;
    case 0x7F31BDF4u: goto label_7F31BDF4;
    case 0x7F31BDF8u: goto label_7F31BDF8;
    case 0x7F31BDFCu: goto label_7F31BDFC;
    case 0x7F31BE00u: goto label_7F31BE00;
    case 0x7F31BE04u: goto label_7F31BE04;
    case 0x7F31BE08u: goto label_7F31BE08;
    case 0x7F31BE0Cu: goto label_7F31BE0C;
    case 0x7F31BE10u: goto label_7F31BE10;
    case 0x7F31BE14u: goto label_7F31BE14;
    case 0x7F31BE18u: goto label_7F31BE18;
    case 0x7F31BE1Cu: goto label_7F31BE1C;
    case 0x7F31BE20u: goto label_7F31BE20;
    case 0x7F31BE24u: goto label_7F31BE24;
    case 0x7F31BE28u: goto label_7F31BE28;
    case 0x7F31BE2Cu: goto label_7F31BE2C;
    case 0x7F31BE30u: goto label_7F31BE30;
    case 0x7F31BE34u: goto label_7F31BE34;
    case 0x7F31BE38u: goto label_7F31BE38;
    case 0x7F31BE3Cu: goto label_7F31BE3C;
    case 0x7F31BE40u: goto label_7F31BE40;
    case 0x7F31BE44u: goto label_7F31BE44;
    case 0x7F31BE48u: goto label_7F31BE48;
    case 0x7F31BE4Cu: goto label_7F31BE4C;
    case 0x7F31BE50u: goto label_7F31BE50;
    case 0x7F31BE54u: goto label_7F31BE54;
    case 0x7F31BE58u: goto label_7F31BE58;
    case 0x7F31BE5Cu: goto label_7F31BE5C;
    case 0x7F31BE60u: goto label_7F31BE60;
    case 0x7F31BE64u: goto label_7F31BE64;
    case 0x7F31BE68u: goto label_7F31BE68;
    case 0x7F31BE6Cu: goto label_7F31BE6C;
    case 0x7F31BE70u: goto label_7F31BE70;
    case 0x7F31BE74u: goto label_7F31BE74;
    case 0x7F31BE78u: goto label_7F31BE78;
    case 0x7F31BE7Cu: goto label_7F31BE7C;
    case 0x7F31BE80u: goto label_7F31BE80;
    case 0x7F31BE84u: goto label_7F31BE84;
    case 0x7F31BE88u: goto label_7F31BE88;
    case 0x7F31BE8Cu: goto label_7F31BE8C;
    case 0x7F31BE90u: goto label_7F31BE90;
    case 0x7F31BE94u: goto label_7F31BE94;
    case 0x7F31BE98u: goto label_7F31BE98;
    case 0x7F31BE9Cu: goto label_7F31BE9C;
    case 0x7F31BEA0u: goto label_7F31BEA0;
    case 0x7F31BEA4u: goto label_7F31BEA4;
    case 0x7F31BEA8u: goto label_7F31BEA8;
    case 0x7F31BEACu: goto label_7F31BEAC;
    case 0x7F31BEB0u: goto label_7F31BEB0;
    case 0x7F31BEB4u: goto label_7F31BEB4;
    case 0x7F31BEB8u: goto label_7F31BEB8;
    case 0x7F31BEBCu: goto label_7F31BEBC;
    case 0x7F31BEC0u: goto label_7F31BEC0;
    case 0x7F31BEC4u: goto label_7F31BEC4;
    case 0x7F31BEC8u: goto label_7F31BEC8;
    case 0x7F31BECCu: goto label_7F31BECC;
    case 0x7F31BED0u: goto label_7F31BED0;
    case 0x7F31BED4u: goto label_7F31BED4;
    case 0x7F31BED8u: goto label_7F31BED8;
    case 0x7F31BEDCu: goto label_7F31BEDC;
    case 0x7F31BEE0u: goto label_7F31BEE0;
    case 0x7F31BEE4u: goto label_7F31BEE4;
    case 0x7F31BEE8u: goto label_7F31BEE8;
    case 0x7F31BEECu: goto label_7F31BEEC;
    case 0x7F31BEF0u: goto label_7F31BEF0;
    case 0x7F31BEF4u: goto label_7F31BEF4;
    case 0x7F31BEF8u: goto label_7F31BEF8;
    case 0x7F31BEFCu: goto label_7F31BEFC;
    case 0x7F31BF00u: goto label_7F31BF00;
    case 0x7F31BF04u: goto label_7F31BF04;
    case 0x7F31BF08u: goto label_7F31BF08;
    case 0x7F31BF0Cu: goto label_7F31BF0C;
    case 0x7F31BF10u: goto label_7F31BF10;
    case 0x7F31BF14u: goto label_7F31BF14;
    case 0x7F31BF18u: goto label_7F31BF18;
    case 0x7F31BF1Cu: goto label_7F31BF1C;
    case 0x7F31BF20u: goto label_7F31BF20;
    case 0x7F31BF24u: goto label_7F31BF24;
    case 0x7F31BF28u: goto label_7F31BF28;
    case 0x7F31BF2Cu: goto label_7F31BF2C;
    case 0x7F31BF30u: goto label_7F31BF30;
    case 0x7F31BF34u: goto label_7F31BF34;
    case 0x7F31BF38u: goto label_7F31BF38;
    case 0x7F31BF3Cu: goto label_7F31BF3C;
    case 0x7F31BF40u: goto label_7F31BF40;
    case 0x7F31BF44u: goto label_7F31BF44;
    case 0x7F31BF48u: goto label_7F31BF48;
    case 0x7F31BF4Cu: goto label_7F31BF4C;
    case 0x7F31BF50u: goto label_7F31BF50;
    case 0x7F31BF54u: goto label_7F31BF54;
    case 0x7F31BF58u: goto label_7F31BF58;
    case 0x7F31BF5Cu: goto label_7F31BF5C;
    case 0x7F31BF60u: goto label_7F31BF60;
    case 0x7F31BF64u: goto label_7F31BF64;
    case 0x7F31BF68u: goto label_7F31BF68;
    case 0x7F31BF6Cu: goto label_7F31BF6C;
    case 0x7F31BF70u: goto label_7F31BF70;
    case 0x7F31BF74u: goto label_7F31BF74;
    case 0x7F31BF78u: goto label_7F31BF78;
    case 0x7F31BF7Cu: goto label_7F31BF7C;
    case 0x7F31BF80u: goto label_7F31BF80;
    case 0x7F31BF84u: goto label_7F31BF84;
    case 0x7F31BF88u: goto label_7F31BF88;
    case 0x7F31BF8Cu: goto label_7F31BF8C;
    case 0x7F31BF90u: goto label_7F31BF90;
    case 0x7F31BF94u: goto label_7F31BF94;
    case 0x7F31BF98u: goto label_7F31BF98;
    case 0x7F31BF9Cu: goto label_7F31BF9C;
    case 0x7F31BFA0u: goto label_7F31BFA0;
    case 0x7F31BFA4u: goto label_7F31BFA4;
    case 0x7F31BFA8u: goto label_7F31BFA8;
    case 0x7F31BFACu: goto label_7F31BFAC;
    case 0x7F31BFB0u: goto label_7F31BFB0;
    case 0x7F31BFB4u: goto label_7F31BFB4;
    case 0x7F31BFB8u: goto label_7F31BFB8;
    case 0x7F31BFBCu: goto label_7F31BFBC;
    case 0x7F31BFC0u: goto label_7F31BFC0;
    case 0x7F31BFC4u: goto label_7F31BFC4;
    case 0x7F31BFC8u: goto label_7F31BFC8;
    case 0x7F31BFCCu: goto label_7F31BFCC;
    case 0x7F31BFD0u: goto label_7F31BFD0;
    case 0x7F31BFD4u: goto label_7F31BFD4;
    case 0x7F31BFD8u: goto label_7F31BFD8;
    case 0x7F31BFDCu: goto label_7F31BFDC;
    case 0x7F31BFE0u: goto label_7F31BFE0;
    case 0x7F31BFE4u: goto label_7F31BFE4;
    case 0x7F31BFE8u: goto label_7F31BFE8;
    case 0x7F31BFECu: goto label_7F31BFEC;
    case 0x7F31BFF0u: goto label_7F31BFF0;
    case 0x7F31BFF4u: goto label_7F31BFF4;
    case 0x7F31BFF8u: goto label_7F31BFF8;
    case 0x7F31BFFCu: goto label_7F31BFFC;
    case 0x7F31C000u: goto label_7F31C000;
    case 0x7F31C004u: goto label_7F31C004;
    case 0x7F31C008u: goto label_7F31C008;
    case 0x7F31C00Cu: goto label_7F31C00C;
    case 0x7F31C010u: goto label_7F31C010;
    case 0x7F31C014u: goto label_7F31C014;
    case 0x7F31C018u: goto label_7F31C018;
    case 0x7F31C01Cu: goto label_7F31C01C;
    case 0x7F31C020u: goto label_7F31C020;
    case 0x7F31C024u: goto label_7F31C024;
    case 0x7F31C028u: goto label_7F31C028;
    case 0x7F31C02Cu: goto label_7F31C02C;
    case 0x7F31C030u: goto label_7F31C030;
    case 0x7F31C034u: goto label_7F31C034;
    case 0x7F31C038u: goto label_7F31C038;
    case 0x7F31C03Cu: goto label_7F31C03C;
    case 0x7F31C040u: goto label_7F31C040;
    case 0x7F31C044u: goto label_7F31C044;
    case 0x7F31C048u: goto label_7F31C048;
    case 0x7F31C04Cu: goto label_7F31C04C;
    case 0x7F31C050u: goto label_7F31C050;
    case 0x7F31C054u: goto label_7F31C054;
    case 0x7F31C058u: goto label_7F31C058;
    case 0x7F31C05Cu: goto label_7F31C05C;
    case 0x7F31C060u: goto label_7F31C060;
    case 0x7F31C064u: goto label_7F31C064;
    case 0x7F31C068u: goto label_7F31C068;
    case 0x7F31C06Cu: goto label_7F31C06C;
    case 0x7F31C070u: goto label_7F31C070;
    case 0x7F31C074u: goto label_7F31C074;
    case 0x7F31C078u: goto label_7F31C078;
    case 0x7F31C07Cu: goto label_7F31C07C;
    case 0x7F31C080u: goto label_7F31C080;
    case 0x7F31C084u: goto label_7F31C084;
    case 0x7F31C088u: goto label_7F31C088;
    case 0x7F31C08Cu: goto label_7F31C08C;
    case 0x7F31C090u: goto label_7F31C090;
    case 0x7F31C094u: goto label_7F31C094;
    case 0x7F31C098u: goto label_7F31C098;
    case 0x7F31C09Cu: goto label_7F31C09C;
    case 0x7F31C0A0u: goto label_7F31C0A0;
    case 0x7F31C0A4u: goto label_7F31C0A4;
    case 0x7F31C0A8u: goto label_7F31C0A8;
    case 0x7F31C0ACu: goto label_7F31C0AC;
    case 0x7F31C0B0u: goto label_7F31C0B0;
    case 0x7F31C0B4u: goto label_7F31C0B4;
    case 0x7F31C0B8u: goto label_7F31C0B8;
    case 0x7F31C0BCu: goto label_7F31C0BC;
    case 0x7F31C0C0u: goto label_7F31C0C0;
    case 0x7F31C0C4u: goto label_7F31C0C4;
    case 0x7F31C0C8u: goto label_7F31C0C8;
    case 0x7F31C0CCu: goto label_7F31C0CC;
    case 0x7F31C0D0u: goto label_7F31C0D0;
    case 0x7F31C0D4u: goto label_7F31C0D4;
    case 0x7F31C0D8u: goto label_7F31C0D8;
    case 0x7F31C0DCu: goto label_7F31C0DC;
    case 0x7F31C0E0u: goto label_7F31C0E0;
    case 0x7F31C0E4u: goto label_7F31C0E4;
    case 0x7F31C0E8u: goto label_7F31C0E8;
    default: return;
    }
label_7F3180EC:
    ctx->pc = 0x7F3180ECu;
    ctx->downcount -= 6;
    // 7F3180EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3180F0:
    ctx->pc = 0x7F3180F0u;
    // 7F3180F0: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3180F4:
    ctx->pc = 0x7F3180F4u;
    // 7F3180F4: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3180F8:
    ctx->pc = 0x7F3180F8u;
    // 7F3180F8: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F3180FC:
    ctx->pc = 0x7F3180FCu;
    // 7F3180FC: stb     r0, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318100:
    ctx->pc = 0x7F318100u;
    // 7F318100: bl      0x7F3169AC
    {
            ctx->lr = 0x7F318104u;
            ctx->pc = 0x7F3169ACu;
            return;
    }

label_7F318104:
    ctx->pc = 0x7F318104u;
    ctx->downcount -= 2;
    // 7F318104: cmpwi   r3, 1
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

label_7F318108:
    ctx->pc = 0x7F318108u;
    // 7F318108: bc    12, 2, 0x7F31811C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31811C;
        }
    }

label_7F31810C:
    ctx->pc = 0x7F31810Cu;
    ctx->downcount -= 1;
    // 7F31810C: bc    4, 0, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318110:
    ctx->pc = 0x7F318110u;
    ctx->downcount -= 2;
    // 7F318110: cmpwi   r3, -2
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

label_7F318114:
    ctx->pc = 0x7F318114u;
    // 7F318114: bc    12, 2, 0x7F3181E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3181E4;
        }
    }

label_7F318118:
    ctx->pc = 0x7F318118u;
    ctx->downcount -= 1;
    // 7F318118: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F31811C:
    ctx->pc = 0x7F31811Cu;
    ctx->downcount -= 3;
    // 7F31811C: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318120:
    ctx->pc = 0x7F318120u;
    // 7F318120: cmpwi   r3, 0
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

label_7F318124:
    ctx->pc = 0x7F318124u;
    // 7F318124: bc    4, 2, 0x7F318164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318164;
        }
    }

label_7F318128:
    ctx->pc = 0x7F318128u;
    ctx->downcount -= 2;
    // 7F318128: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_7F31812C:
    ctx->pc = 0x7F31812Cu;
    // 7F31812C: bl      0x7F314F14
    {
            ctx->lr = 0x7F318130u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F318130:
    ctx->pc = 0x7F318130u;
    ctx->downcount -= 9;
    // 7F318130: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F318134:
    ctx->pc = 0x7F318134u;
    // 7F318134: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F318138:
    ctx->pc = 0x7F318138u;
    // 7F318138: lwz     r6, 19356(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31813C:
    ctx->pc = 0x7F31813Cu;
    // 7F31813C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F318140:
    ctx->pc = 0x7F318140u;
    // 7F318140: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318144:
    ctx->pc = 0x7F318144u;
    // 7F318144: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F318148:
    ctx->pc = 0x7F318148u;
    // 7F318148: addi    r8, r6, 38
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(38);

label_7F31814C:
    ctx->pc = 0x7F31814Cu;
    // 7F31814C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F318150:
    ctx->pc = 0x7F318150u;
    // 7F318150: bl      0x7F3143B8
    {
            ctx->lr = 0x7F318154u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F318154:
    ctx->pc = 0x7F318154u;
    ctx->downcount -= 2;
    // 7F318154: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F318158:
    ctx->pc = 0x7F318158u;
    // 7F318158: bl      0x7F317C5C
    {
            ctx->lr = 0x7F31815Cu;
            ctx->pc = 0x7F317C5Cu;
            return;
    }

label_7F31815C:
    ctx->pc = 0x7F31815Cu;
    ctx->downcount -= 2;
    // 7F31815C: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318160:
    ctx->pc = 0x7F318160u;
    // 7F318160: b       0x7F3181D8
    {
            goto label_7F3181D8;
    }

label_7F318164:
    ctx->pc = 0x7F318164u;
    ctx->downcount -= 6;
    // 7F318164: lbz     r4, 17226(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17226);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F318168:
    ctx->pc = 0x7F318168u;
    // 7F318168: lbz     r0, 17224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17224);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31816C:
    ctx->pc = 0x7F31816Cu;
    // 7F31816C: extsb r4, r4
    {
        ctx->gpr[4] = (u32)(s32)(s8)ctx->gpr[4];
    }

label_7F318170:
    ctx->pc = 0x7F318170u;
    // 7F318170: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318174:
    ctx->pc = 0x7F318174u;
    // 7F318174: cmpw    r4, r0
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

label_7F318178:
    ctx->pc = 0x7F318178u;
    // 7F318178: bc    4, 0, 0x7F318198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318198;
        }
    }

label_7F31817C:
    ctx->pc = 0x7F31817Cu;
    ctx->downcount -= 2;
    // 7F31817C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F318180:
    ctx->pc = 0x7F318180u;
    // 7F318180: bl      0x7F314F14
    {
            ctx->lr = 0x7F318184u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F318184:
    ctx->pc = 0x7F318184u;
    ctx->downcount -= 3;
    // 7F318184: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F318188:
    ctx->pc = 0x7F318188u;
    // 7F318188: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F31818C:
    ctx->pc = 0x7F31818Cu;
    // 7F31818C: bl      0x7F317C5C
    {
            ctx->lr = 0x7F318190u;
            ctx->pc = 0x7F317C5Cu;
            return;
    }

label_7F318190:
    ctx->pc = 0x7F318190u;
    ctx->downcount -= 2;
    // 7F318190: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318194:
    ctx->pc = 0x7F318194u;
    // 7F318194: b       0x7F3181B0
    {
            goto label_7F3181B0;
    }

label_7F318198:
    ctx->pc = 0x7F318198u;
    ctx->downcount -= 2;
    // 7F318198: li      r4, 19
    ctx->gpr[4] = (u32)(s32)(19);

label_7F31819C:
    ctx->pc = 0x7F31819Cu;
    // 7F31819C: bl      0x7F314F14
    {
            ctx->lr = 0x7F3181A0u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F3181A0:
    ctx->pc = 0x7F3181A0u;
    ctx->downcount -= 3;
    // 7F3181A0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3181A4:
    ctx->pc = 0x7F3181A4u;
    // 7F3181A4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F3181A8:
    ctx->pc = 0x7F3181A8u;
    // 7F3181A8: bl      0x7F317C5C
    {
            ctx->lr = 0x7F3181ACu;
            ctx->pc = 0x7F317C5Cu;
            return;
    }

label_7F3181AC:
    ctx->pc = 0x7F3181ACu;
    ctx->downcount -= 1;
    // 7F3181AC: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3181B0:
    ctx->pc = 0x7F3181B0u;
    ctx->downcount -= 10;
    // 7F3181B0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F3181B4:
    ctx->pc = 0x7F3181B4u;
    // 7F3181B4: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3181B8:
    ctx->pc = 0x7F3181B8u;
    // 7F3181B8: addi    r5, r4, 19356
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19356);

label_7F3181BC:
    ctx->pc = 0x7F3181BCu;
    // 7F3181BC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3181C0:
    ctx->pc = 0x7F3181C0u;
    // 7F3181C0: lwz     r8, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F3181C4:
    ctx->pc = 0x7F3181C4u;
    // 7F3181C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3181C8:
    ctx->pc = 0x7F3181C8u;
    // 7F3181C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3181CC:
    ctx->pc = 0x7F3181CCu;
    // 7F3181CC: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F3181D0:
    ctx->pc = 0x7F3181D0u;
    // 7F3181D0: addi    r8, r8, 38
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(38);

label_7F3181D4:
    ctx->pc = 0x7F3181D4u;
    // 7F3181D4: bl      0x7F3143B8
    {
            ctx->lr = 0x7F3181D8u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F3181D8:
    ctx->pc = 0x7F3181D8u;
    ctx->downcount -= 3;
    // 7F3181D8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F3181DC:
    ctx->pc = 0x7F3181DCu;
    // 7F3181DC: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3181E0:
    ctx->pc = 0x7F3181E0u;
    // 7F3181E0: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3181E4:
    ctx->pc = 0x7F3181E4u;
    ctx->downcount -= 3;
    // 7F3181E4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3181E8:
    ctx->pc = 0x7F3181E8u;
    // 7F3181E8: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3181EC:
    ctx->pc = 0x7F3181ECu;
    // 7F3181EC: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3181F0:
    ctx->pc = 0x7F3181F0u;
    ctx->downcount -= 7;
    // 7F3181F0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3181F4:
    ctx->pc = 0x7F3181F4u;
    // 7F3181F4: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3181F8:
    ctx->pc = 0x7F3181F8u;
    // 7F3181F8: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3181FC:
    ctx->pc = 0x7F3181FCu;
    // 7F3181FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318200:
    ctx->pc = 0x7F318200u;
    // 7F318200: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F318204:
    ctx->pc = 0x7F318204u;
    // 7F318204: stb     r0, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318208:
    ctx->pc = 0x7F318208u;
    // 7F318208: bl      0x7F31676C
    {
            ctx->lr = 0x7F31820Cu;
            ctx->pc = 0x7F31676Cu;
            return;
    }

label_7F31820C:
    ctx->pc = 0x7F31820Cu;
    ctx->downcount -= 2;
    // 7F31820C: cmpwi   r3, 1
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

label_7F318210:
    ctx->pc = 0x7F318210u;
    // 7F318210: bc    12, 2, 0x7F318224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318224;
        }
    }

label_7F318214:
    ctx->pc = 0x7F318214u;
    ctx->downcount -= 1;
    // 7F318214: bc    4, 0, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318218:
    ctx->pc = 0x7F318218u;
    ctx->downcount -= 2;
    // 7F318218: cmpwi   r3, -2
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

label_7F31821C:
    ctx->pc = 0x7F31821Cu;
    // 7F31821C: bc    12, 2, 0x7F31825C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31825C;
        }
    }

label_7F318220:
    ctx->pc = 0x7F318220u;
    ctx->downcount -= 1;
    // 7F318220: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318224:
    ctx->pc = 0x7F318224u;
    ctx->downcount -= 11;
    // 7F318224: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F318228:
    ctx->pc = 0x7F318228u;
    // 7F318228: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F31822C:
    ctx->pc = 0x7F31822Cu;
    // 7F31822C: addi    r4, r3, 19356
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(19356);

label_7F318230:
    ctx->pc = 0x7F318230u;
    // 7F318230: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318234:
    ctx->pc = 0x7F318234u;
    // 7F318234: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F318238:
    ctx->pc = 0x7F318238u;
    // 7F318238: addi    r4, r5, -26000
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-26000);

label_7F31823C:
    ctx->pc = 0x7F31823Cu;
    // 7F31823C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F318240:
    ctx->pc = 0x7F318240u;
    // 7F318240: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F318244:
    ctx->pc = 0x7F318244u;
    // 7F318244: addi    r8, r6, 38
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(38);

label_7F318248:
    ctx->pc = 0x7F318248u;
    // 7F318248: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31824C:
    ctx->pc = 0x7F31824Cu;
    // 7F31824C: bl      0x7F3143B8
    {
            ctx->lr = 0x7F318250u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F318250:
    ctx->pc = 0x7F318250u;
    ctx->downcount -= 3;
    // 7F318250: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F318254:
    ctx->pc = 0x7F318254u;
    // 7F318254: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318258:
    ctx->pc = 0x7F318258u;
    // 7F318258: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F31825C:
    ctx->pc = 0x7F31825Cu;
    ctx->downcount -= 5;
    // 7F31825C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F318260:
    ctx->pc = 0x7F318260u;
    // 7F318260: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F318264:
    ctx->pc = 0x7F318264u;
    // 7F318264: stw     r3, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318268:
    ctx->pc = 0x7F318268u;
    // 7F318268: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31826C:
    ctx->pc = 0x7F31826Cu;
    // 7F31826C: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318270:
    ctx->pc = 0x7F318270u;
    ctx->downcount -= 8;
    // 7F318270: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318274:
    ctx->pc = 0x7F318274u;
    // 7F318274: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318278:
    ctx->pc = 0x7F318278u;
    // 7F318278: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31827C:
    ctx->pc = 0x7F31827Cu;
    // 7F31827C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F318280:
    ctx->pc = 0x7F318280u;
    // 7F318280: stb     r0, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318284:
    ctx->pc = 0x7F318284u;
    // 7F318284: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318288:
    ctx->pc = 0x7F318288u;
    // 7F318288: cmpwi   r0, 0
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

label_7F31828C:
    ctx->pc = 0x7F31828Cu;
    // 7F31828C: bc    4, 2, 0x7F3182AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3182AC;
        }
    }

label_7F318290:
    ctx->pc = 0x7F318290u;
    ctx->downcount -= 7;
    // 7F318290: li      r0, 11
    ctx->gpr[0] = (u32)(s32)(11);

label_7F318294:
    ctx->pc = 0x7F318294u;
    // 7F318294: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F318298:
    ctx->pc = 0x7F318298u;
    // 7F318298: stw     r0, 14892(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31829C:
    ctx->pc = 0x7F31829Cu;
    // 7F31829C: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F3182A0:
    ctx->pc = 0x7F3182A0u;
    // 7F3182A0: stw     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3182A4:
    ctx->pc = 0x7F3182A4u;
    // 7F3182A4: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3182A8:
    ctx->pc = 0x7F3182A8u;
    // 7F3182A8: b       0x7F3182BC
    {
            goto label_7F3182BC;
    }

label_7F3182AC:
    ctx->pc = 0x7F3182ACu;
    ctx->downcount -= 4;
    // 7F3182AC: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F3182B0:
    ctx->pc = 0x7F3182B0u;
    // 7F3182B0: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_7F3182B4:
    ctx->pc = 0x7F3182B4u;
    // 7F3182B4: stw     r3, 14892(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3182B8:
    ctx->pc = 0x7F3182B8u;
    // 7F3182B8: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3182BC:
    ctx->pc = 0x7F3182BCu;
    ctx->downcount -= 4;
    // 7F3182BC: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3182C0:
    ctx->pc = 0x7F3182C0u;
    // 7F3182C0: lbz     r4, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F3182C4:
    ctx->pc = 0x7F3182C4u;
    // 7F3182C4: addi    r3, r3, 14880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14880);

label_7F3182C8:
    ctx->pc = 0x7F3182C8u;
    // 7F3182C8: bl      0x7F314F54
    {
            ctx->lr = 0x7F3182CCu;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F3182CC:
    ctx->pc = 0x7F3182CCu;
    ctx->downcount -= 6;
    // 7F3182CC: lis     r3, 38
    ctx->gpr[3] = ((u32)(s32)(38) << 16);

label_7F3182D0:
    ctx->pc = 0x7F3182D0u;
    // 7F3182D0: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3182D4:
    ctx->pc = 0x7F3182D4u;
    // 7F3182D4: addi    r3, r3, 24501
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24501);

label_7F3182D8:
    ctx->pc = 0x7F3182D8u;
    // 7F3182D8: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3182DC:
    ctx->pc = 0x7F3182DCu;
    // 7F3182DC: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3182E0:
    ctx->pc = 0x7F3182E0u;
    // 7F3182E0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3182E4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3182E4:
    ctx->pc = 0x7F3182E4u;
    ctx->downcount -= 1;
    // 7F3182E4: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3182E8:
    ctx->pc = 0x7F3182E8u;
    ctx->downcount -= 6;
    // 7F3182E8: lwz     r3, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3182EC:
    ctx->pc = 0x7F3182ECu;
    // 7F3182EC: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F3182F0:
    ctx->pc = 0x7F3182F0u;
    // 7F3182F0: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3182F4:
    ctx->pc = 0x7F3182F4u;
    // 7F3182F4: lwz     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3182F8:
    ctx->pc = 0x7F3182F8u;
    // 7F3182F8: cmpwi   r0, 0
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

label_7F3182FC:
    ctx->pc = 0x7F3182FCu;
    // 7F3182FC: bc    4, 0, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318300:
    ctx->pc = 0x7F318300u;
    ctx->downcount -= 3;
    // 7F318300: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_7F318304:
    ctx->pc = 0x7F318304u;
    // 7F318304: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318308:
    ctx->pc = 0x7F318308u;
    // 7F318308: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F31830C:
    ctx->pc = 0x7F31830Cu;
    ctx->downcount -= 6;
    // 7F31830C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F318310:
    ctx->pc = 0x7F318310u;
    // 7F318310: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318314:
    ctx->pc = 0x7F318314u;
    // 7F318314: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318318:
    ctx->pc = 0x7F318318u;
    // 7F318318: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F31831C:
    ctx->pc = 0x7F31831Cu;
    // 7F31831C: stb     r0, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318320:
    ctx->pc = 0x7F318320u;
    // 7F318320: bl      0x7F316694
    {
            ctx->lr = 0x7F318324u;
            ctx->pc = 0x7F316694u;
            return;
    }

label_7F318324:
    ctx->pc = 0x7F318324u;
    ctx->downcount -= 2;
    // 7F318324: cmpwi   r3, 0
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

label_7F318328:
    ctx->pc = 0x7F318328u;
    // 7F318328: bc    12, 2, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F31832C:
    ctx->pc = 0x7F31832Cu;
    ctx->downcount -= 1;
    // 7F31832C: bc    4, 0, 0x7F318340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318340;
        }
    }

label_7F318330:
    ctx->pc = 0x7F318330u;
    ctx->downcount -= 2;
    // 7F318330: cmpwi   r3, -2
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

label_7F318334:
    ctx->pc = 0x7F318334u;
    // 7F318334: bc    12, 2, 0x7F31860C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31860C;
        }
    }

label_7F318338:
    ctx->pc = 0x7F318338u;
    ctx->downcount -= 1;
    // 7F318338: bc    4, 0, 0x7F3184FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3184FC;
        }
    }

label_7F31833C:
    ctx->pc = 0x7F31833Cu;
    ctx->downcount -= 1;
    // 7F31833C: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318340:
    ctx->pc = 0x7F318340u;
    ctx->downcount -= 2;
    // 7F318340: cmpwi   r3, 2
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

label_7F318344:
    ctx->pc = 0x7F318344u;
    // 7F318344: bc    4, 0, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318348:
    ctx->pc = 0x7F318348u;
    ctx->downcount -= 3;
    // 7F318348: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31834C:
    ctx->pc = 0x7F31834Cu;
    // 7F31834C: cmpwi   r0, 0
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

label_7F318350:
    ctx->pc = 0x7F318350u;
    // 7F318350: bc    4, 2, 0x7F318474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318474;
        }
    }

label_7F318354:
    ctx->pc = 0x7F318354u;
    ctx->downcount -= 13;
    // 7F318354: lbz     r0, 17226(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17226);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318358:
    ctx->pc = 0x7F318358u;
    // 7F318358: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F31835C:
    ctx->pc = 0x7F31835Cu;
    // 7F31835C: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F318360:
    ctx->pc = 0x7F318360u;
    // 7F318360: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318364:
    ctx->pc = 0x7F318364u;
    // 7F318364: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318368:
    ctx->pc = 0x7F318368u;
    // 7F318368: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F31836C:
    ctx->pc = 0x7F31836Cu;
    // 7F31836C: mulli   r7, r0, 108
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)108);

label_7F318370:
    ctx->pc = 0x7F318370u;
    // 7F318370: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318374:
    ctx->pc = 0x7F318374u;
    // 7F318374: addi    r30, r7, 968
    ctx->gpr[30] = ctx->gpr[7] + (u32)(s32)(968);

label_7F318378:
    ctx->pc = 0x7F318378u;
    // 7F318378: add   r30, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F31837C:
    ctx->pc = 0x7F31837Cu;
    // 7F31837C: bl      0x7F31435C
    {
            ctx->lr = 0x7F318380u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318380:
    ctx->pc = 0x7F318380u;
    ctx->downcount -= 3;
    // 7F318380: lbz     r0, 27(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(27);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318384:
    ctx->pc = 0x7F318384u;
    // 7F318384: rlwinm. r0, r0, 0, 30, 30
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

label_7F318388:
    ctx->pc = 0x7F318388u;
    // 7F318388: bc    12, 2, 0x7F318414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318414;
        }
    }

label_7F31838C:
    ctx->pc = 0x7F31838Cu;
    ctx->downcount -= 2;
    // 7F31838C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F318390:
    ctx->pc = 0x7F318390u;
    // 7F318390: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F318394u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F318394:
    ctx->pc = 0x7F318394u;
    ctx->downcount -= 7;
    // 7F318394: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F318398:
    ctx->pc = 0x7F318398u;
    // 7F318398: lis     r3, 32561
    ctx->gpr[3] = ((u32)(s32)(32561) << 16);

label_7F31839C:
    ctx->pc = 0x7F31839Cu;
    // 7F31839C: stw     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3183A0:
    ctx->pc = 0x7F3183A0u;
    // 7F3183A0: addi    r0, r3, 17784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17784);

label_7F3183A4:
    ctx->pc = 0x7F3183A4u;
    // 7F3183A4: lwz     r3, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3183A8:
    ctx->pc = 0x7F3183A8u;
    // 7F3183A8: cmplw   r3, r0
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

label_7F3183AC:
    ctx->pc = 0x7F3183ACu;
    // 7F3183AC: bc    12, 2, 0x7F3183E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3183E0;
        }
    }

label_7F3183B0:
    ctx->pc = 0x7F3183B0u;
    ctx->downcount -= 12;
    // 7F3183B0: lbz     r0, 17226(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17226);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3183B4:
    ctx->pc = 0x7F3183B4u;
    // 7F3183B4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3183B8:
    ctx->pc = 0x7F3183B8u;
    // 7F3183B8: lwz     r5, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F3183BC:
    ctx->pc = 0x7F3183BCu;
    // 7F3183BC: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F3183C0:
    ctx->pc = 0x7F3183C0u;
    // 7F3183C0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3183C4:
    ctx->pc = 0x7F3183C4u;
    // 7F3183C4: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3183C8:
    ctx->pc = 0x7F3183C8u;
    // 7F3183C8: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F3183CC:
    ctx->pc = 0x7F3183CCu;
    // 7F3183CC: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3183D0:
    ctx->pc = 0x7F3183D0u;
    // 7F3183D0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3183D4:
    ctx->pc = 0x7F3183D4u;
    // 7F3183D4: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3183D8:
    ctx->pc = 0x7F3183D8u;
    // 7F3183D8: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3183DC:
    ctx->pc = 0x7F3183DCu;
    // 7F3183DC: bl      0x7F31435C
    {
            ctx->lr = 0x7F3183E0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3183E0:
    ctx->pc = 0x7F3183E0u;
    ctx->downcount -= 10;
    // 7F3183E0: lbz     r0, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3183E4:
    ctx->pc = 0x7F3183E4u;
    // 7F3183E4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3183E8:
    ctx->pc = 0x7F3183E8u;
    // 7F3183E8: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F3183EC:
    ctx->pc = 0x7F3183ECu;
    // 7F3183EC: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3183F0:
    ctx->pc = 0x7F3183F0u;
    // 7F3183F0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3183F4:
    ctx->pc = 0x7F3183F4u;
    // 7F3183F4: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3183F8:
    ctx->pc = 0x7F3183F8u;
    // 7F3183F8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3183FC:
    ctx->pc = 0x7F3183FCu;
    // 7F3183FC: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318400:
    ctx->pc = 0x7F318400u;
    // 7F318400: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318404:
    ctx->pc = 0x7F318404u;
    // 7F318404: bl      0x7F31435C
    {
            ctx->lr = 0x7F318408u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318408:
    ctx->pc = 0x7F318408u;
    ctx->downcount -= 3;
    // 7F318408: li      r0, 19
    ctx->gpr[0] = (u32)(s32)(19);

label_7F31840C:
    ctx->pc = 0x7F31840Cu;
    // 7F31840C: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318410:
    ctx->pc = 0x7F318410u;
    // 7F318410: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318414:
    ctx->pc = 0x7F318414u;
    ctx->downcount -= 3;
    // 7F318414: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318418:
    ctx->pc = 0x7F318418u;
    // 7F318418: li      r4, 27
    ctx->gpr[4] = (u32)(s32)(27);

label_7F31841C:
    ctx->pc = 0x7F31841Cu;
    // 7F31841C: bl      0x7F314F14
    {
            ctx->lr = 0x7F318420u;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F318420:
    ctx->pc = 0x7F318420u;
    ctx->downcount -= 9;
    // 7F318420: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F318424:
    ctx->pc = 0x7F318424u;
    // 7F318424: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F318428:
    ctx->pc = 0x7F318428u;
    // 7F318428: lwz     r6, 19356(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31842C:
    ctx->pc = 0x7F31842Cu;
    // 7F31842C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F318430:
    ctx->pc = 0x7F318430u;
    // 7F318430: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318434:
    ctx->pc = 0x7F318434u;
    // 7F318434: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F318438:
    ctx->pc = 0x7F318438u;
    // 7F318438: addi    r8, r6, 38
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(38);

label_7F31843C:
    ctx->pc = 0x7F31843Cu;
    // 7F31843C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F318440:
    ctx->pc = 0x7F318440u;
    // 7F318440: bl      0x7F3143B8
    {
            ctx->lr = 0x7F318444u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F318444:
    ctx->pc = 0x7F318444u;
    ctx->downcount -= 2;
    // 7F318444: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F318448:
    ctx->pc = 0x7F318448u;
    // 7F318448: bl      0x7F317C5C
    {
            ctx->lr = 0x7F31844Cu;
            ctx->pc = 0x7F317C5Cu;
            return;
    }

label_7F31844C:
    ctx->pc = 0x7F31844Cu;
    ctx->downcount -= 7;
    // 7F31844C: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318450:
    ctx->pc = 0x7F318450u;
    // 7F318450: lis     r3, 244
    ctx->gpr[3] = ((u32)(s32)(244) << 16);

label_7F318454:
    ctx->pc = 0x7F318454u;
    // 7F318454: addi    r3, r3, -27471
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-27471);

label_7F318458:
    ctx->pc = 0x7F318458u;
    // 7F318458: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F31845C:
    ctx->pc = 0x7F31845Cu;
    // 7F31845C: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318460:
    ctx->pc = 0x7F318460u;
    // 7F318460: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318464:
    ctx->pc = 0x7F318464u;
    // 7F318464: bl      0x7F31435C
    {
            ctx->lr = 0x7F318468u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318468:
    ctx->pc = 0x7F318468u;
    ctx->downcount -= 3;
    // 7F318468: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F31846C:
    ctx->pc = 0x7F31846Cu;
    // 7F31846C: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318470:
    ctx->pc = 0x7F318470u;
    // 7F318470: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318474:
    ctx->pc = 0x7F318474u;
    ctx->downcount -= 1;
    // 7F318474: bl      0x8004DB8C
    {
            ctx->lr = 0x7F318478u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F318478:
    ctx->pc = 0x7F318478u;
    ctx->downcount -= 6;
    // 7F318478: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31847C:
    ctx->pc = 0x7F31847Cu;
    // 7F31847C: addi    r3, r31, 832
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(832);

label_7F318480:
    ctx->pc = 0x7F318480u;
    // 7F318480: or   r5, r0, r0
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F318484:
    ctx->pc = 0x7F318484u;
    // 7F318484: addi    r4, r31, 316
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(316);

label_7F318488:
    ctx->pc = 0x7F318488u;
    // 7F318488: addi    r6, r5, 4
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(4);

label_7F31848C:
    ctx->pc = 0x7F31848Cu;
    // 7F31848C: bl      0x7F316F60
    {
            ctx->lr = 0x7F318490u;
            ctx->pc = 0x7F316F60u;
            return;
    }

label_7F318490:
    ctx->pc = 0x7F318490u;
    ctx->downcount -= 7;
    // 7F318490: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F318494:
    ctx->pc = 0x7F318494u;
    // 7F318494: li      r0, 13
    ctx->gpr[0] = (u32)(s32)(13);

label_7F318498:
    ctx->pc = 0x7F318498u;
    // 7F318498: stb     r3, 379(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(379);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F31849C:
    ctx->pc = 0x7F31849Cu;
    // 7F31849C: li      r4, 22
    ctx->gpr[4] = (u32)(s32)(22);

label_7F3184A0:
    ctx->pc = 0x7F3184A0u;
    // 7F3184A0: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3184A4:
    ctx->pc = 0x7F3184A4u;
    // 7F3184A4: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3184A8:
    ctx->pc = 0x7F3184A8u;
    // 7F3184A8: bl      0x7F314F14
    {
            ctx->lr = 0x7F3184ACu;
            ctx->pc = 0x7F314F14u;
            return;
    }

label_7F3184AC:
    ctx->pc = 0x7F3184ACu;
    ctx->downcount -= 9;
    // 7F3184AC: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F3184B0:
    ctx->pc = 0x7F3184B0u;
    // 7F3184B0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3184B4:
    ctx->pc = 0x7F3184B4u;
    // 7F3184B4: lwz     r6, 19356(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(19356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3184B8:
    ctx->pc = 0x7F3184B8u;
    // 7F3184B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3184BC:
    ctx->pc = 0x7F3184BCu;
    // 7F3184BC: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3184C0:
    ctx->pc = 0x7F3184C0u;
    // 7F3184C0: li      r7, 720
    ctx->gpr[7] = (u32)(s32)(720);

label_7F3184C4:
    ctx->pc = 0x7F3184C4u;
    // 7F3184C4: addi    r8, r6, 38
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(38);

label_7F3184C8:
    ctx->pc = 0x7F3184C8u;
    // 7F3184C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3184CC:
    ctx->pc = 0x7F3184CCu;
    // 7F3184CC: bl      0x7F3143B8
    {
            ctx->lr = 0x7F3184D0u;
            ctx->pc = 0x7F3143B8u;
            return;
    }

label_7F3184D0:
    ctx->pc = 0x7F3184D0u;
    ctx->downcount -= 8;
    // 7F3184D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3184D4:
    ctx->pc = 0x7F3184D4u;
    // 7F3184D4: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F3184D8:
    ctx->pc = 0x7F3184D8u;
    // 7F3184D8: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3184DC:
    ctx->pc = 0x7F3184DCu;
    // 7F3184DC: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F3184E0:
    ctx->pc = 0x7F3184E0u;
    // 7F3184E0: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3184E4:
    ctx->pc = 0x7F3184E4u;
    // 7F3184E4: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3184E8:
    ctx->pc = 0x7F3184E8u;
    // 7F3184E8: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3184EC:
    ctx->pc = 0x7F3184ECu;
    // 7F3184EC: bl      0x7F31435C
    {
            ctx->lr = 0x7F3184F0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3184F0:
    ctx->pc = 0x7F3184F0u;
    ctx->downcount -= 3;
    // 7F3184F0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3184F4:
    ctx->pc = 0x7F3184F4u;
    // 7F3184F4: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3184F8:
    ctx->pc = 0x7F3184F8u;
    // 7F3184F8: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3184FC:
    ctx->pc = 0x7F3184FCu;
    ctx->downcount -= 7;
    // 7F3184FC: lbz     r0, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318500:
    ctx->pc = 0x7F318500u;
    // 7F318500: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318504:
    ctx->pc = 0x7F318504u;
    // 7F318504: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_7F318508:
    ctx->pc = 0x7F318508u;
    // 7F318508: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F31850C:
    ctx->pc = 0x7F31850Cu;
    // 7F31850C: lha     r0, 31680(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(31680);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F318510:
    ctx->pc = 0x7F318510u;
    // 7F318510: cmpwi   r0, 2
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

label_7F318514:
    ctx->pc = 0x7F318514u;
    // 7F318514: bc    4, 0, 0x7F318530
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318530;
        }
    }

label_7F318518:
    ctx->pc = 0x7F318518u;
    ctx->downcount -= 2;
    // 7F318518: cmpwi   r0, -128
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-128);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31851C:
    ctx->pc = 0x7F31851Cu;
    // 7F31851C: bc    12, 2, 0x7F318544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318544;
        }
    }

label_7F318520:
    ctx->pc = 0x7F318520u;
    ctx->downcount -= 1;
    // 7F318520: bc    12, 0, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318524:
    ctx->pc = 0x7F318524u;
    ctx->downcount -= 2;
    // 7F318524: cmpwi   r0, -14
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-14);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F318528:
    ctx->pc = 0x7F318528u;
    // 7F318528: bc    4, 0, 0x7F318544
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318544;
        }
    }

label_7F31852C:
    ctx->pc = 0x7F31852Cu;
    ctx->downcount -= 1;
    // 7F31852C: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318530:
    ctx->pc = 0x7F318530u;
    ctx->downcount -= 2;
    // 7F318530: cmpwi   r0, 102
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(102);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F318534:
    ctx->pc = 0x7F318534u;
    // 7F318534: bc    4, 0, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318538:
    ctx->pc = 0x7F318538u;
    ctx->downcount -= 2;
    // 7F318538: cmpwi   r0, 100
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

label_7F31853C:
    ctx->pc = 0x7F31853Cu;
    // 7F31853C: bc    4, 0, 0x7F3185E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3185E8;
        }
    }

label_7F318540:
    ctx->pc = 0x7F318540u;
    ctx->downcount -= 1;
    // 7F318540: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318544:
    ctx->pc = 0x7F318544u;
    ctx->downcount -= 3;
    // 7F318544: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318548:
    ctx->pc = 0x7F318548u;
    // 7F318548: cmpwi   r0, 0
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

label_7F31854C:
    ctx->pc = 0x7F31854Cu;
    // 7F31854C: bc    12, 2, 0x7F318558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318558;
        }
    }

label_7F318550:
    ctx->pc = 0x7F318550u;
    ctx->downcount -= 2;
    // 7F318550: cmpwi   r0, 3
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

label_7F318554:
    ctx->pc = 0x7F318554u;
    // 7F318554: bc    4, 2, 0x7F318564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318564;
        }
    }

label_7F318558:
    ctx->pc = 0x7F318558u;
    ctx->downcount -= 3;
    // 7F318558: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_7F31855C:
    ctx->pc = 0x7F31855Cu;
    // 7F31855C: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318560:
    ctx->pc = 0x7F318560u;
    // 7F318560: b       0x7F31856C
    {
            goto label_7F31856C;
    }

label_7F318564:
    ctx->pc = 0x7F318564u;
    ctx->downcount -= 2;
    // 7F318564: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F318568:
    ctx->pc = 0x7F318568u;
    // 7F318568: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31856C:
    ctx->pc = 0x7F31856Cu;
    ctx->downcount -= 12;
    // 7F31856C: lbz     r0, 17226(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17226);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318570:
    ctx->pc = 0x7F318570u;
    // 7F318570: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F318574:
    ctx->pc = 0x7F318574u;
    // 7F318574: lwz     r5, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F318578:
    ctx->pc = 0x7F318578u;
    // 7F318578: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F31857C:
    ctx->pc = 0x7F31857Cu;
    // 7F31857C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318580:
    ctx->pc = 0x7F318580u;
    // 7F318580: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318584:
    ctx->pc = 0x7F318584u;
    // 7F318584: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F318588:
    ctx->pc = 0x7F318588u;
    // 7F318588: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F31858C:
    ctx->pc = 0x7F31858Cu;
    // 7F31858C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F318590:
    ctx->pc = 0x7F318590u;
    // 7F318590: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318594:
    ctx->pc = 0x7F318594u;
    // 7F318594: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318598:
    ctx->pc = 0x7F318598u;
    // 7F318598: bl      0x7F31435C
    {
            ctx->lr = 0x7F31859Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F31859C:
    ctx->pc = 0x7F31859Cu;
    ctx->downcount -= 10;
    // 7F31859C: lbz     r0, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3185A0:
    ctx->pc = 0x7F3185A0u;
    // 7F3185A0: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3185A4:
    ctx->pc = 0x7F3185A4u;
    // 7F3185A4: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F3185A8:
    ctx->pc = 0x7F3185A8u;
    // 7F3185A8: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3185AC:
    ctx->pc = 0x7F3185ACu;
    // 7F3185AC: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3185B0:
    ctx->pc = 0x7F3185B0u;
    // 7F3185B0: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3185B4:
    ctx->pc = 0x7F3185B4u;
    // 7F3185B4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3185B8:
    ctx->pc = 0x7F3185B8u;
    // 7F3185B8: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3185BC:
    ctx->pc = 0x7F3185BCu;
    // 7F3185BC: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3185C0:
    ctx->pc = 0x7F3185C0u;
    // 7F3185C0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3185C4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3185C4:
    ctx->pc = 0x7F3185C4u;
    ctx->downcount -= 2;
    // 7F3185C4: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F3185C8:
    ctx->pc = 0x7F3185C8u;
    // 7F3185C8: bl      0x7F3175D0
    {
            ctx->lr = 0x7F3185CCu;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F3185CC:
    ctx->pc = 0x7F3185CCu;
    ctx->downcount -= 6;
    // 7F3185CC: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F3185D0:
    ctx->pc = 0x7F3185D0u;
    // 7F3185D0: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3185D4:
    ctx->pc = 0x7F3185D4u;
    // 7F3185D4: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F3185D8:
    ctx->pc = 0x7F3185D8u;
    // 7F3185D8: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3185DC:
    ctx->pc = 0x7F3185DCu;
    // 7F3185DC: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3185E0:
    ctx->pc = 0x7F3185E0u;
    // 7F3185E0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3185E4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3185E4:
    ctx->pc = 0x7F3185E4u;
    ctx->downcount -= 1;
    // 7F3185E4: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3185E8:
    ctx->pc = 0x7F3185E8u;
    ctx->downcount -= 8;
    // 7F3185E8: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F3185EC:
    ctx->pc = 0x7F3185ECu;
    // 7F3185EC: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F3185F0:
    ctx->pc = 0x7F3185F0u;
    // 7F3185F0: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3185F4:
    ctx->pc = 0x7F3185F4u;
    // 7F3185F4: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F3185F8:
    ctx->pc = 0x7F3185F8u;
    // 7F3185F8: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3185FC:
    ctx->pc = 0x7F3185FCu;
    // 7F3185FC: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318600:
    ctx->pc = 0x7F318600u;
    // 7F318600: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318604:
    ctx->pc = 0x7F318604u;
    // 7F318604: bl      0x7F31435C
    {
            ctx->lr = 0x7F318608u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318608:
    ctx->pc = 0x7F318608u;
    ctx->downcount -= 1;
    // 7F318608: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F31860C:
    ctx->pc = 0x7F31860Cu;
    ctx->downcount -= 8;
    // 7F31860C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F318610:
    ctx->pc = 0x7F318610u;
    // 7F318610: lis     r3, 159
    ctx->gpr[3] = ((u32)(s32)(159) << 16);

label_7F318614:
    ctx->pc = 0x7F318614u;
    // 7F318614: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318618:
    ctx->pc = 0x7F318618u;
    // 7F318618: addi    r3, r3, -16333
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16333);

label_7F31861C:
    ctx->pc = 0x7F31861Cu;
    // 7F31861C: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318620:
    ctx->pc = 0x7F318620u;
    // 7F318620: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318624:
    ctx->pc = 0x7F318624u;
    // 7F318624: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318628:
    ctx->pc = 0x7F318628u;
    // 7F318628: bl      0x7F31435C
    {
            ctx->lr = 0x7F31862Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F31862C:
    ctx->pc = 0x7F31862Cu;
    ctx->downcount -= 1;
    // 7F31862C: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318630:
    ctx->pc = 0x7F318630u;
    ctx->downcount -= 7;
    // 7F318630: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F318634:
    ctx->pc = 0x7F318634u;
    // 7F318634: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318638:
    ctx->pc = 0x7F318638u;
    // 7F318638: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31863C:
    ctx->pc = 0x7F31863Cu;
    // 7F31863C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318640:
    ctx->pc = 0x7F318640u;
    // 7F318640: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F318644:
    ctx->pc = 0x7F318644u;
    // 7F318644: stb     r0, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318648:
    ctx->pc = 0x7F318648u;
    // 7F318648: bl      0x7F314D8C
    {
            ctx->lr = 0x7F31864Cu;
            ctx->pc = 0x7F314D8Cu;
            return;
    }

label_7F31864C:
    ctx->pc = 0x7F31864Cu;
    ctx->downcount -= 2;
    // 7F31864C: cmpwi   r3, 0
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

label_7F318650:
    ctx->pc = 0x7F318650u;
    // 7F318650: bc    12, 2, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318654:
    ctx->pc = 0x7F318654u;
    ctx->downcount -= 7;
    // 7F318654: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318658:
    ctx->pc = 0x7F318658u;
    // 7F318658: lis     r3, 32561
    ctx->gpr[3] = ((u32)(s32)(32561) << 16);

label_7F31865C:
    ctx->pc = 0x7F31865Cu;
    // 7F31865C: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318660:
    ctx->pc = 0x7F318660u;
    // 7F318660: addi    r0, r3, 17784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17784);

label_7F318664:
    ctx->pc = 0x7F318664u;
    // 7F318664: lwz     r3, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318668:
    ctx->pc = 0x7F318668u;
    // 7F318668: cmplw   r3, r0
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

label_7F31866C:
    ctx->pc = 0x7F31866Cu;
    // 7F31866C: bc    12, 2, 0x7F3186A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3186A0;
        }
    }

label_7F318670:
    ctx->pc = 0x7F318670u;
    ctx->downcount -= 12;
    // 7F318670: lbz     r0, 17226(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17226);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318674:
    ctx->pc = 0x7F318674u;
    // 7F318674: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F318678:
    ctx->pc = 0x7F318678u;
    // 7F318678: lwz     r5, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31867C:
    ctx->pc = 0x7F31867Cu;
    // 7F31867C: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F318680:
    ctx->pc = 0x7F318680u;
    // 7F318680: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318684:
    ctx->pc = 0x7F318684u;
    // 7F318684: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318688:
    ctx->pc = 0x7F318688u;
    // 7F318688: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F31868C:
    ctx->pc = 0x7F31868Cu;
    // 7F31868C: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318690:
    ctx->pc = 0x7F318690u;
    // 7F318690: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F318694:
    ctx->pc = 0x7F318694u;
    // 7F318694: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318698:
    ctx->pc = 0x7F318698u;
    // 7F318698: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31869C:
    ctx->pc = 0x7F31869Cu;
    // 7F31869C: bl      0x7F31435C
    {
            ctx->lr = 0x7F3186A0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3186A0:
    ctx->pc = 0x7F3186A0u;
    ctx->downcount -= 10;
    // 7F3186A0: lbz     r0, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F3186A4:
    ctx->pc = 0x7F3186A4u;
    // 7F3186A4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F3186A8:
    ctx->pc = 0x7F3186A8u;
    // 7F3186A8: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F3186AC:
    ctx->pc = 0x7F3186ACu;
    // 7F3186AC: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3186B0:
    ctx->pc = 0x7F3186B0u;
    // 7F3186B0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F3186B4:
    ctx->pc = 0x7F3186B4u;
    // 7F3186B4: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3186B8:
    ctx->pc = 0x7F3186B8u;
    // 7F3186B8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F3186BC:
    ctx->pc = 0x7F3186BCu;
    // 7F3186BC: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3186C0:
    ctx->pc = 0x7F3186C0u;
    // 7F3186C0: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3186C4:
    ctx->pc = 0x7F3186C4u;
    // 7F3186C4: bl      0x7F31435C
    {
            ctx->lr = 0x7F3186C8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3186C8:
    ctx->pc = 0x7F3186C8u;
    ctx->downcount -= 3;
    // 7F3186C8: li      r0, 19
    ctx->gpr[0] = (u32)(s32)(19);

label_7F3186CC:
    ctx->pc = 0x7F3186CCu;
    // 7F3186CC: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3186D0:
    ctx->pc = 0x7F3186D0u;
    // 7F3186D0: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3186D4:
    ctx->pc = 0x7F3186D4u;
    ctx->downcount -= 8;
    // 7F3186D4: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3186D8:
    ctx->pc = 0x7F3186D8u;
    // 7F3186D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3186DC:
    ctx->pc = 0x7F3186DCu;
    // 7F3186DC: stb     r0, 14889(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3186E0:
    ctx->pc = 0x7F3186E0u;
    // 7F3186E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3186E4:
    ctx->pc = 0x7F3186E4u;
    // 7F3186E4: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3186E8:
    ctx->pc = 0x7F3186E8u;
    // 7F3186E8: lwz     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3186EC:
    ctx->pc = 0x7F3186ECu;
    // 7F3186EC: cmpwi   r4, 8192
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

label_7F3186F0:
    ctx->pc = 0x7F3186F0u;
    // 7F3186F0: bc    12, 2, 0x7F318864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318864;
        }
    }

label_7F3186F4:
    ctx->pc = 0x7F3186F4u;
    ctx->downcount -= 1;
    // 7F3186F4: bc    4, 0, 0x7F318710
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318710;
        }
    }

label_7F3186F8:
    ctx->pc = 0x7F3186F8u;
    ctx->downcount -= 2;
    // 7F3186F8: cmpwi   r4, 128
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

label_7F3186FC:
    ctx->pc = 0x7F3186FCu;
    // 7F3186FC: bc    12, 2, 0x7F31879C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31879C;
        }
    }

label_7F318700:
    ctx->pc = 0x7F318700u;
    ctx->downcount -= 1;
    // 7F318700: bc    4, 0, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318704:
    ctx->pc = 0x7F318704u;
    ctx->downcount -= 2;
    // 7F318704: cmpwi   r4, 32
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

label_7F318708:
    ctx->pc = 0x7F318708u;
    // 7F318708: bc    12, 2, 0x7F318724
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318724;
        }
    }

label_7F31870C:
    ctx->pc = 0x7F31870Cu;
    ctx->downcount -= 1;
    // 7F31870C: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318710:
    ctx->pc = 0x7F318710u;
    ctx->downcount -= 4;
    // 7F318710: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F318714:
    ctx->pc = 0x7F318714u;
    // 7F318714: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F318718:
    ctx->pc = 0x7F318718u;
    // 7F318718: cmpw    r4, r0
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

label_7F31871C:
    ctx->pc = 0x7F31871Cu;
    // 7F31871C: bc    12, 2, 0x7F318864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318864;
        }
    }

label_7F318720:
    ctx->pc = 0x7F318720u;
    ctx->downcount -= 1;
    // 7F318720: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318724:
    ctx->pc = 0x7F318724u;
    ctx->downcount -= 4;
    // 7F318724: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F318728:
    ctx->pc = 0x7F318728u;
    // 7F318728: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31872C:
    ctx->pc = 0x7F31872Cu;
    // 7F31872C: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F318730:
    ctx->pc = 0x7F318730u;
    // 7F318730: bl      0x7F011698
    {
            ctx->lr = 0x7F318734u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F318734:
    ctx->pc = 0x7F318734u;
    ctx->downcount -= 6;
    // 7F318734: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F318738:
    ctx->pc = 0x7F318738u;
    // 7F318738: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F31873C:
    ctx->pc = 0x7F31873Cu;
    // 7F31873C: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F318740:
    ctx->pc = 0x7F318740u;
    // 7F318740: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318744:
    ctx->pc = 0x7F318744u;
    // 7F318744: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318748:
    ctx->pc = 0x7F318748u;
    // 7F318748: bl      0x7F31435C
    {
            ctx->lr = 0x7F31874Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F31874C:
    ctx->pc = 0x7F31874Cu;
    ctx->downcount -= 5;
    // 7F31874C: lis     r3, 32561
    ctx->gpr[3] = ((u32)(s32)(32561) << 16);

label_7F318750:
    ctx->pc = 0x7F318750u;
    // 7F318750: lwz     r4, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F318754:
    ctx->pc = 0x7F318754u;
    // 7F318754: addi    r0, r3, 17784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17784);

label_7F318758:
    ctx->pc = 0x7F318758u;
    // 7F318758: cmplw   r4, r0
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

label_7F31875C:
    ctx->pc = 0x7F31875Cu;
    // 7F31875C: bc    12, 2, 0x7F318790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318790;
        }
    }

label_7F318760:
    ctx->pc = 0x7F318760u;
    ctx->downcount -= 12;
    // 7F318760: lbz     r0, 17226(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17226);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318764:
    ctx->pc = 0x7F318764u;
    // 7F318764: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F318768:
    ctx->pc = 0x7F318768u;
    // 7F318768: lwz     r5, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31876C:
    ctx->pc = 0x7F31876Cu;
    // 7F31876C: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F318770:
    ctx->pc = 0x7F318770u;
    // 7F318770: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318774:
    ctx->pc = 0x7F318774u;
    // 7F318774: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318778:
    ctx->pc = 0x7F318778u;
    // 7F318778: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F31877C:
    ctx->pc = 0x7F31877Cu;
    // 7F31877C: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318780:
    ctx->pc = 0x7F318780u;
    // 7F318780: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F318784:
    ctx->pc = 0x7F318784u;
    // 7F318784: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318788:
    ctx->pc = 0x7F318788u;
    // 7F318788: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31878C:
    ctx->pc = 0x7F31878Cu;
    // 7F31878C: bl      0x7F31435C
    {
            ctx->lr = 0x7F318790u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318790:
    ctx->pc = 0x7F318790u;
    ctx->downcount -= 3;
    // 7F318790: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F318794:
    ctx->pc = 0x7F318794u;
    // 7F318794: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318798:
    ctx->pc = 0x7F318798u;
    // 7F318798: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F31879C:
    ctx->pc = 0x7F31879Cu;
    ctx->downcount -= 4;
    // 7F31879C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F3187A0:
    ctx->pc = 0x7F3187A0u;
    // 7F3187A0: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F3187A4:
    ctx->pc = 0x7F3187A4u;
    // 7F3187A4: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F3187A8:
    ctx->pc = 0x7F3187A8u;
    // 7F3187A8: bl      0x7F011698
    {
            ctx->lr = 0x7F3187ACu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F3187AC:
    ctx->pc = 0x7F3187ACu;
    ctx->downcount -= 2;
    // 7F3187AC: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F3187B0:
    ctx->pc = 0x7F3187B0u;
    // 7F3187B0: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F3187B4u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F3187B4:
    ctx->pc = 0x7F3187B4u;
    ctx->downcount -= 3;
    // 7F3187B4: lwz     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3187B8:
    ctx->pc = 0x7F3187B8u;
    // 7F3187B8: cmpwi   r0, 0
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

label_7F3187BC:
    ctx->pc = 0x7F3187BCu;
    // 7F3187BC: bc    4, 2, 0x7F3187CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3187CC;
        }
    }

label_7F3187C0:
    ctx->pc = 0x7F3187C0u;
    ctx->downcount -= 3;
    // 7F3187C0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3187C4:
    ctx->pc = 0x7F3187C4u;
    // 7F3187C4: stw     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3187C8:
    ctx->pc = 0x7F3187C8u;
    // 7F3187C8: b       0x7F3187D4
    {
            goto label_7F3187D4;
    }

label_7F3187CC:
    ctx->pc = 0x7F3187CCu;
    ctx->downcount -= 2;
    // 7F3187CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3187D0:
    ctx->pc = 0x7F3187D0u;
    // 7F3187D0: stw     r0, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3187D4:
    ctx->pc = 0x7F3187D4u;
    ctx->downcount -= 6;
    // 7F3187D4: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F3187D8:
    ctx->pc = 0x7F3187D8u;
    // 7F3187D8: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3187DC:
    ctx->pc = 0x7F3187DCu;
    // 7F3187DC: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F3187E0:
    ctx->pc = 0x7F3187E0u;
    // 7F3187E0: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3187E4:
    ctx->pc = 0x7F3187E4u;
    // 7F3187E4: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3187E8:
    ctx->pc = 0x7F3187E8u;
    // 7F3187E8: bl      0x7F31435C
    {
            ctx->lr = 0x7F3187ECu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3187EC:
    ctx->pc = 0x7F3187ECu;
    ctx->downcount -= 5;
    // 7F3187EC: lis     r3, 32561
    ctx->gpr[3] = ((u32)(s32)(32561) << 16);

label_7F3187F0:
    ctx->pc = 0x7F3187F0u;
    // 7F3187F0: lwz     r4, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3187F4:
    ctx->pc = 0x7F3187F4u;
    // 7F3187F4: addi    r0, r3, 17784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17784);

label_7F3187F8:
    ctx->pc = 0x7F3187F8u;
    // 7F3187F8: cmplw   r4, r0
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

label_7F3187FC:
    ctx->pc = 0x7F3187FCu;
    // 7F3187FC: bc    12, 2, 0x7F318830
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318830;
        }
    }

label_7F318800:
    ctx->pc = 0x7F318800u;
    ctx->downcount -= 12;
    // 7F318800: lbz     r0, 17226(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17226);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318804:
    ctx->pc = 0x7F318804u;
    // 7F318804: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F318808:
    ctx->pc = 0x7F318808u;
    // 7F318808: lwz     r5, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31880C:
    ctx->pc = 0x7F31880Cu;
    // 7F31880C: addi    r3, r3, -29688
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29688);

label_7F318810:
    ctx->pc = 0x7F318810u;
    // 7F318810: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318814:
    ctx->pc = 0x7F318814u;
    // 7F318814: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318818:
    ctx->pc = 0x7F318818u;
    // 7F318818: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F31881C:
    ctx->pc = 0x7F31881Cu;
    // 7F31881C: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318820:
    ctx->pc = 0x7F318820u;
    // 7F318820: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F318824:
    ctx->pc = 0x7F318824u;
    // 7F318824: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318828:
    ctx->pc = 0x7F318828u;
    // 7F318828: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31882C:
    ctx->pc = 0x7F31882Cu;
    // 7F31882C: bl      0x7F31435C
    {
            ctx->lr = 0x7F318830u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318830:
    ctx->pc = 0x7F318830u;
    ctx->downcount -= 10;
    // 7F318830: lbz     r0, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318834:
    ctx->pc = 0x7F318834u;
    // 7F318834: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F318838:
    ctx->pc = 0x7F318838u;
    // 7F318838: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F31883C:
    ctx->pc = 0x7F31883Cu;
    // 7F31883C: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318840:
    ctx->pc = 0x7F318840u;
    // 7F318840: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318844:
    ctx->pc = 0x7F318844u;
    // 7F318844: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318848:
    ctx->pc = 0x7F318848u;
    // 7F318848: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31884C:
    ctx->pc = 0x7F31884Cu;
    // 7F31884C: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318850:
    ctx->pc = 0x7F318850u;
    // 7F318850: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318854:
    ctx->pc = 0x7F318854u;
    // 7F318854: bl      0x7F31435C
    {
            ctx->lr = 0x7F318858u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318858:
    ctx->pc = 0x7F318858u;
    ctx->downcount -= 3;
    // 7F318858: li      r0, 19
    ctx->gpr[0] = (u32)(s32)(19);

label_7F31885C:
    ctx->pc = 0x7F31885Cu;
    // 7F31885C: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318860:
    ctx->pc = 0x7F318860u;
    // 7F318860: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318864:
    ctx->pc = 0x7F318864u;
    ctx->downcount -= 4;
    // 7F318864: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F318868:
    ctx->pc = 0x7F318868u;
    // 7F318868: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31886C:
    ctx->pc = 0x7F31886Cu;
    // 7F31886C: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F318870:
    ctx->pc = 0x7F318870u;
    // 7F318870: bl      0x7F011698
    {
            ctx->lr = 0x7F318874u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F318874:
    ctx->pc = 0x7F318874u;
    ctx->downcount -= 6;
    // 7F318874: lwz     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318878:
    ctx->pc = 0x7F318878u;
    // 7F318878: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F31887C:
    ctx->pc = 0x7F31887Cu;
    // 7F31887C: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318880:
    ctx->pc = 0x7F318880u;
    // 7F318880: lwz     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318884:
    ctx->pc = 0x7F318884u;
    // 7F318884: cmpwi   r0, 1
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

label_7F318888:
    ctx->pc = 0x7F318888u;
    // 7F318888: bc    4, 2, 0x7F3188A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3188A8;
        }
    }

label_7F31888C:
    ctx->pc = 0x7F31888Cu;
    ctx->downcount -= 6;
    // 7F31888C: lis     r3, 96
    ctx->gpr[3] = ((u32)(s32)(96) << 16);

label_7F318890:
    ctx->pc = 0x7F318890u;
    // 7F318890: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318894:
    ctx->pc = 0x7F318894u;
    // 7F318894: addi    r3, r3, -1992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1992);

label_7F318898:
    ctx->pc = 0x7F318898u;
    // 7F318898: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F31889C:
    ctx->pc = 0x7F31889Cu;
    // 7F31889C: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3188A0:
    ctx->pc = 0x7F3188A0u;
    // 7F3188A0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3188A4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3188A4:
    ctx->pc = 0x7F3188A4u;
    ctx->downcount -= 1;
    // 7F3188A4: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3188A8:
    ctx->pc = 0x7F3188A8u;
    ctx->downcount -= 6;
    // 7F3188A8: lis     r3, 90
    ctx->gpr[3] = ((u32)(s32)(90) << 16);

label_7F3188AC:
    ctx->pc = 0x7F3188ACu;
    // 7F3188AC: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3188B0:
    ctx->pc = 0x7F3188B0u;
    // 7F3188B0: addi    r3, r3, 22149
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22149);

label_7F3188B4:
    ctx->pc = 0x7F3188B4u;
    // 7F3188B4: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3188B8:
    ctx->pc = 0x7F3188B8u;
    // 7F3188B8: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3188BC:
    ctx->pc = 0x7F3188BCu;
    // 7F3188BC: bl      0x7F31435C
    {
            ctx->lr = 0x7F3188C0u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3188C0:
    ctx->pc = 0x7F3188C0u;
    ctx->downcount -= 1;
    // 7F3188C0: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3188C4:
    ctx->pc = 0x7F3188C4u;
    ctx->downcount -= 8;
    // 7F3188C4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3188C8:
    ctx->pc = 0x7F3188C8u;
    // 7F3188C8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3188CC:
    ctx->pc = 0x7F3188CCu;
    // 7F3188CC: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3188D0:
    ctx->pc = 0x7F3188D0u;
    // 7F3188D0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3188D4:
    ctx->pc = 0x7F3188D4u;
    // 7F3188D4: stb     r0, 14889(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3188D8:
    ctx->pc = 0x7F3188D8u;
    // 7F3188D8: lbz     r3, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F3188DC:
    ctx->pc = 0x7F3188DCu;
    // 7F3188DC: extsb r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[3];
    }

label_7F3188E0:
    ctx->pc = 0x7F3188E0u;
    // 7F3188E0: bl      0x7F312524
    {
            ctx->lr = 0x7F3188E4u;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F3188E4:
    ctx->pc = 0x7F3188E4u;
    ctx->downcount -= 2;
    // 7F3188E4: cmpwi   r3, 0
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

label_7F3188E8:
    ctx->pc = 0x7F3188E8u;
    // 7F3188E8: bc    12, 2, 0x7F318954
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318954;
        }
    }

label_7F3188EC:
    ctx->pc = 0x7F3188ECu;
    ctx->downcount -= 7;
    // 7F3188EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3188F0:
    ctx->pc = 0x7F3188F0u;
    // 7F3188F0: lis     r3, 32561
    ctx->gpr[3] = ((u32)(s32)(32561) << 16);

label_7F3188F4:
    ctx->pc = 0x7F3188F4u;
    // 7F3188F4: stb     r0, 17228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17228);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F3188F8:
    ctx->pc = 0x7F3188F8u;
    // 7F3188F8: addi    r0, r3, 17784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17784);

label_7F3188FC:
    ctx->pc = 0x7F3188FCu;
    // 7F3188FC: lwz     r3, 384(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318900:
    ctx->pc = 0x7F318900u;
    // 7F318900: cmplw   r3, r0
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

label_7F318904:
    ctx->pc = 0x7F318904u;
    // 7F318904: bc    4, 2, 0x7F318920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318920;
        }
    }

label_7F318908:
    ctx->pc = 0x7F318908u;
    ctx->downcount -= 6;
    // 7F318908: lis     r3, 18
    ctx->gpr[3] = ((u32)(s32)(18) << 16);

label_7F31890C:
    ctx->pc = 0x7F31890Cu;
    // 7F31890C: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318910:
    ctx->pc = 0x7F318910u;
    // 7F318910: addi    r3, r3, 19596
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19596);

label_7F318914:
    ctx->pc = 0x7F318914u;
    // 7F318914: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318918:
    ctx->pc = 0x7F318918u;
    // 7F318918: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F31891C:
    ctx->pc = 0x7F31891Cu;
    // 7F31891C: bl      0x7F31435C
    {
            ctx->lr = 0x7F318920u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318920:
    ctx->pc = 0x7F318920u;
    ctx->downcount -= 10;
    // 7F318920: lbz     r0, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318924:
    ctx->pc = 0x7F318924u;
    // 7F318924: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F318928:
    ctx->pc = 0x7F318928u;
    // 7F318928: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F31892C:
    ctx->pc = 0x7F31892Cu;
    // 7F31892C: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318930:
    ctx->pc = 0x7F318930u;
    // 7F318930: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318934:
    ctx->pc = 0x7F318934u;
    // 7F318934: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318938:
    ctx->pc = 0x7F318938u;
    // 7F318938: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31893C:
    ctx->pc = 0x7F31893Cu;
    // 7F31893C: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318940:
    ctx->pc = 0x7F318940u;
    // 7F318940: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318944:
    ctx->pc = 0x7F318944u;
    // 7F318944: bl      0x7F31435C
    {
            ctx->lr = 0x7F318948u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318948:
    ctx->pc = 0x7F318948u;
    ctx->downcount -= 3;
    // 7F318948: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31894C:
    ctx->pc = 0x7F31894Cu;
    // 7F31894C: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318950:
    ctx->pc = 0x7F318950u;
    // 7F318950: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318954:
    ctx->pc = 0x7F318954u;
    ctx->downcount -= 2;
    // 7F318954: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F318958:
    ctx->pc = 0x7F318958u;
    // 7F318958: bl      0x7F314D8C
    {
            ctx->lr = 0x7F31895Cu;
            ctx->pc = 0x7F314D8Cu;
            return;
    }

label_7F31895C:
    ctx->pc = 0x7F31895Cu;
    ctx->downcount -= 2;
    // 7F31895C: cmpwi   r3, 0
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

label_7F318960:
    ctx->pc = 0x7F318960u;
    // 7F318960: bc    12, 2, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318964:
    ctx->pc = 0x7F318964u;
    ctx->downcount -= 10;
    // 7F318964: lbz     r0, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318968:
    ctx->pc = 0x7F318968u;
    // 7F318968: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31896C:
    ctx->pc = 0x7F31896Cu;
    // 7F31896C: addi    r3, r3, -29736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29736);

label_7F318970:
    ctx->pc = 0x7F318970u;
    // 7F318970: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318974:
    ctx->pc = 0x7F318974u;
    // 7F318974: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318978:
    ctx->pc = 0x7F318978u;
    // 7F318978: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F31897C:
    ctx->pc = 0x7F31897Cu;
    // 7F31897C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F318980:
    ctx->pc = 0x7F318980u;
    // 7F318980: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318984:
    ctx->pc = 0x7F318984u;
    // 7F318984: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318988:
    ctx->pc = 0x7F318988u;
    // 7F318988: bl      0x7F31435C
    {
            ctx->lr = 0x7F31898Cu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F31898C:
    ctx->pc = 0x7F31898Cu;
    ctx->downcount -= 3;
    // 7F31898C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F318990:
    ctx->pc = 0x7F318990u;
    // 7F318990: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318994:
    ctx->pc = 0x7F318994u;
    // 7F318994: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318998:
    ctx->pc = 0x7F318998u;
    ctx->downcount -= 9;
    // 7F318998: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31899C:
    ctx->pc = 0x7F31899Cu;
    // 7F31899C: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3189A0:
    ctx->pc = 0x7F3189A0u;
    // 7F3189A0: stw     r5, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3189A4:
    ctx->pc = 0x7F3189A4u;
    // 7F3189A4: li      r3, 17
    ctx->gpr[3] = (u32)(s32)(17);

label_7F3189A8:
    ctx->pc = 0x7F3189A8u;
    // 7F3189A8: li      r0, 22
    ctx->gpr[0] = (u32)(s32)(22);

label_7F3189AC:
    ctx->pc = 0x7F3189ACu;
    // 7F3189AC: stb     r5, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3189B0:
    ctx->pc = 0x7F3189B0u;
    // 7F3189B0: stw     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3189B4:
    ctx->pc = 0x7F3189B4u;
    // 7F3189B4: stw     r0, 14892(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3189B8:
    ctx->pc = 0x7F3189B8u;
    // 7F3189B8: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3189BC:
    ctx->pc = 0x7F3189BCu;
    ctx->downcount -= 8;
    // 7F3189BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F3189C0:
    ctx->pc = 0x7F3189C0u;
    // 7F3189C0: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3189C4:
    ctx->pc = 0x7F3189C4u;
    // 7F3189C4: stw     r4, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3189C8:
    ctx->pc = 0x7F3189C8u;
    // 7F3189C8: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_7F3189CC:
    ctx->pc = 0x7F3189CCu;
    // 7F3189CC: stb     r4, 14889(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_7F3189D0:
    ctx->pc = 0x7F3189D0u;
    // 7F3189D0: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3189D4:
    ctx->pc = 0x7F3189D4u;
    // 7F3189D4: stw     r0, 14892(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14892);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3189D8:
    ctx->pc = 0x7F3189D8u;
    // 7F3189D8: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F3189DC:
    ctx->pc = 0x7F3189DCu;
    ctx->downcount -= 9;
    // 7F3189DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3189E0:
    ctx->pc = 0x7F3189E0u;
    // 7F3189E0: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3189E4:
    ctx->pc = 0x7F3189E4u;
    // 7F3189E4: stw     r5, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3189E8:
    ctx->pc = 0x7F3189E8u;
    // 7F3189E8: li      r0, 17
    ctx->gpr[0] = (u32)(s32)(17);

label_7F3189EC:
    ctx->pc = 0x7F3189ECu;
    // 7F3189EC: addi    r3, r31, 832
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(832);

label_7F3189F0:
    ctx->pc = 0x7F3189F0u;
    // 7F3189F0: stb     r5, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F3189F4:
    ctx->pc = 0x7F3189F4u;
    // 7F3189F4: addi    r4, r4, 14892
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14892);

label_7F3189F8:
    ctx->pc = 0x7F3189F8u;
    // 7F3189F8: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3189FC:
    ctx->pc = 0x7F3189FCu;
    // 7F3189FC: bl      0x7F315530
    {
            ctx->lr = 0x7F318A00u;
            ctx->pc = 0x7F315530u;
            return;
    }

label_7F318A00:
    ctx->pc = 0x7F318A00u;
    ctx->downcount -= 1;
    // 7F318A00: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318A04:
    ctx->pc = 0x7F318A04u;
    ctx->downcount -= 9;
    // 7F318A04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F318A08:
    ctx->pc = 0x7F318A08u;
    // 7F318A08: addis   r5, r31, 1
    ctx->gpr[5] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318A0C:
    ctx->pc = 0x7F318A0Cu;
    // 7F318A0C: stw     r6, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F318A10:
    ctx->pc = 0x7F318A10u;
    // 7F318A10: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F318A14:
    ctx->pc = 0x7F318A14u;
    // 7F318A14: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F318A18:
    ctx->pc = 0x7F318A18u;
    // 7F318A18: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F318A1C:
    ctx->pc = 0x7F318A1Cu;
    // 7F318A1C: stb     r0, 14889(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318A20:
    ctx->pc = 0x7F318A20u;
    // 7F318A20: stw     r6, 14896(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14896);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F318A24:
    ctx->pc = 0x7F318A24u;
    // 7F318A24: bl      0x7F31733C
    {
            ctx->lr = 0x7F318A28u;
            ctx->pc = 0x7F31733Cu;
            return;
    }

label_7F318A28:
    ctx->pc = 0x7F318A28u;
    ctx->downcount -= 2;
    // 7F318A28: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F318A2C:
    ctx->pc = 0x7F318A2Cu;
    // 7F318A2C: bl      0x7F3177EC
    {
            ctx->lr = 0x7F318A30u;
            ctx->pc = 0x7F3177ECu;
            return;
    }

label_7F318A30:
    ctx->pc = 0x7F318A30u;
    ctx->downcount -= 6;
    // 7F318A30: lis     r3, 74
    ctx->gpr[3] = ((u32)(s32)(74) << 16);

label_7F318A34:
    ctx->pc = 0x7F318A34u;
    // 7F318A34: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318A38:
    ctx->pc = 0x7F318A38u;
    // 7F318A38: addi    r3, r3, -13619
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13619);

label_7F318A3C:
    ctx->pc = 0x7F318A3Cu;
    // 7F318A3C: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318A40:
    ctx->pc = 0x7F318A40u;
    // 7F318A40: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318A44:
    ctx->pc = 0x7F318A44u;
    // 7F318A44: bl      0x7F31435C
    {
            ctx->lr = 0x7F318A48u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318A48:
    ctx->pc = 0x7F318A48u;
    ctx->downcount -= 8;
    // 7F318A48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318A4C:
    ctx->pc = 0x7F318A4Cu;
    // 7F318A4C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318A50:
    ctx->pc = 0x7F318A50u;
    // 7F318A50: stb     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318A54:
    ctx->pc = 0x7F318A54u;
    // 7F318A54: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_7F318A58:
    ctx->pc = 0x7F318A58u;
    // 7F318A58: addi    r3, r3, 14880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14880);

label_7F318A5C:
    ctx->pc = 0x7F318A5Cu;
    // 7F318A5C: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318A60:
    ctx->pc = 0x7F318A60u;
    // 7F318A60: lbz     r4, 832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(832);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F318A64:
    ctx->pc = 0x7F318A64u;
    // 7F318A64: bl      0x7F314F54
    {
            ctx->lr = 0x7F318A68u;
            ctx->pc = 0x7F314F54u;
            return;
    }

label_7F318A68:
    ctx->pc = 0x7F318A68u;
    ctx->downcount -= 1;
    // 7F318A68: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318A6C:
    ctx->pc = 0x7F318A6Cu;
    ctx->downcount -= 4;
    // 7F318A6C: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318A70:
    ctx->pc = 0x7F318A70u;
    // 7F318A70: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F318A74:
    ctx->pc = 0x7F318A74u;
    // 7F318A74: stb     r0, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318A78:
    ctx->pc = 0x7F318A78u;
    // 7F318A78: bl      0x7F3161E4
    {
            ctx->lr = 0x7F318A7Cu;
            ctx->pc = 0x7F3161E4u;
            return;
    }

label_7F318A7C:
    ctx->pc = 0x7F318A7Cu;
    ctx->downcount -= 1;
    // 7F318A7C: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318A80:
    ctx->pc = 0x7F318A80u;
    ctx->downcount -= 8;
    // 7F318A80: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F318A84:
    ctx->pc = 0x7F318A84u;
    // 7F318A84: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318A88:
    ctx->pc = 0x7F318A88u;
    // 7F318A88: stw     r5, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F318A8C:
    ctx->pc = 0x7F318A8Cu;
    // 7F318A8C: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F318A90:
    ctx->pc = 0x7F318A90u;
    // 7F318A90: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F318A94:
    ctx->pc = 0x7F318A94u;
    // 7F318A94: stb     r5, 14889(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(14889);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_7F318A98:
    ctx->pc = 0x7F318A98u;
    // 7F318A98: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318A9C:
    ctx->pc = 0x7F318A9Cu;
    // 7F318A9C: bl      0x7F3175D0
    {
            ctx->lr = 0x7F318AA0u;
            ctx->pc = 0x7F3175D0u;
            return;
    }

label_7F318AA0:
    ctx->pc = 0x7F318AA0u;
    ctx->downcount -= 2;
    // 7F318AA0: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F318AA4:
    ctx->pc = 0x7F318AA4u;
    // 7F318AA4: bl      0x7F317238
    {
            ctx->lr = 0x7F318AA8u;
            ctx->pc = 0x7F317238u;
            return;
    }

label_7F318AA8:
    ctx->pc = 0x7F318AA8u;
    ctx->downcount -= 3;
    // 7F318AA8: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318AAC:
    ctx->pc = 0x7F318AACu;
    // 7F318AAC: cmpwi   r0, 0
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

label_7F318AB0:
    ctx->pc = 0x7F318AB0u;
    // 7F318AB0: bc    4, 2, 0x7F318AD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318AD0;
        }
    }

label_7F318AB4:
    ctx->pc = 0x7F318AB4u;
    ctx->downcount -= 6;
    // 7F318AB4: lis     r3, 92
    ctx->gpr[3] = ((u32)(s32)(92) << 16);

label_7F318AB8:
    ctx->pc = 0x7F318AB8u;
    // 7F318AB8: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318ABC:
    ctx->pc = 0x7F318ABCu;
    // 7F318ABC: addi    r3, r3, -16011
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-16011);

label_7F318AC0:
    ctx->pc = 0x7F318AC0u;
    // 7F318AC0: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318AC4:
    ctx->pc = 0x7F318AC4u;
    // 7F318AC4: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318AC8:
    ctx->pc = 0x7F318AC8u;
    // 7F318AC8: bl      0x7F31435C
    {
            ctx->lr = 0x7F318ACCu;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318ACC:
    ctx->pc = 0x7F318ACCu;
    ctx->downcount -= 1;
    // 7F318ACC: b       0x7F318AE8
    {
            goto label_7F318AE8;
    }

label_7F318AD0:
    ctx->pc = 0x7F318AD0u;
    ctx->downcount -= 6;
    // 7F318AD0: lis     r3, 177
    ctx->gpr[3] = ((u32)(s32)(177) << 16);

label_7F318AD4:
    ctx->pc = 0x7F318AD4u;
    // 7F318AD4: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318AD8:
    ctx->pc = 0x7F318AD8u;
    // 7F318AD8: addi    r3, r3, -13937
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-13937);

label_7F318ADC:
    ctx->pc = 0x7F318ADCu;
    // 7F318ADC: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F318AE0:
    ctx->pc = 0x7F318AE0u;
    // 7F318AE0: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318AE4:
    ctx->pc = 0x7F318AE4u;
    // 7F318AE4: bl      0x7F31435C
    {
            ctx->lr = 0x7F318AE8u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F318AE8:
    ctx->pc = 0x7F318AE8u;
    ctx->downcount -= 3;
    // 7F318AE8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F318AEC:
    ctx->pc = 0x7F318AECu;
    // 7F318AEC: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318AF0:
    ctx->pc = 0x7F318AF0u;
    // 7F318AF0: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318AF4:
    ctx->pc = 0x7F318AF4u;
    ctx->downcount -= 6;
    // 7F318AF4: lwz     r4, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F318AF8:
    ctx->pc = 0x7F318AF8u;
    // 7F318AF8: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F318AFC:
    ctx->pc = 0x7F318AFCu;
    // 7F318AFC: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318B00:
    ctx->pc = 0x7F318B00u;
    // 7F318B00: lwz     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318B04:
    ctx->pc = 0x7F318B04u;
    // 7F318B04: cmpwi   r0, 0
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

label_7F318B08:
    ctx->pc = 0x7F318B08u;
    // 7F318B08: bc    12, 1, 0x7F318B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318B50;
        }
    }

label_7F318B0C:
    ctx->pc = 0x7F318B0Cu;
    ctx->downcount -= 3;
    // 7F318B0C: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318B10:
    ctx->pc = 0x7F318B10u;
    // 7F318B10: cmpwi   r0, 1
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

label_7F318B14:
    ctx->pc = 0x7F318B14u;
    // 7F318B14: bc    4, 2, 0x7F318B1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318B1C;
        }
    }

label_7F318B18:
    ctx->pc = 0x7F318B18u;
    ctx->downcount -= 1;
    // 7F318B18: bl      0x7F316668
    {
            ctx->lr = 0x7F318B1Cu;
            ctx->pc = 0x7F316668u;
            return;
    }

label_7F318B1C:
    ctx->pc = 0x7F318B1Cu;
    ctx->downcount -= 3;
    // 7F318B1C: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_7F318B20:
    ctx->pc = 0x7F318B20u;
    // 7F318B20: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318B24:
    ctx->pc = 0x7F318B24u;
    // 7F318B24: b       0x7F318B50
    {
            goto label_7F318B50;
    }

label_7F318B28:
    ctx->pc = 0x7F318B28u;
    ctx->downcount -= 5;
    // 7F318B28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318B2C:
    ctx->pc = 0x7F318B2Cu;
    // 7F318B2C: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318B30:
    ctx->pc = 0x7F318B30u;
    // 7F318B30: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318B34:
    ctx->pc = 0x7F318B34u;
    // 7F318B34: cmpwi   r0, 1
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

label_7F318B38:
    ctx->pc = 0x7F318B38u;
    // 7F318B38: bc    4, 2, 0x7F318B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318B40;
        }
    }

label_7F318B3C:
    ctx->pc = 0x7F318B3Cu;
    ctx->downcount -= 1;
    // 7F318B3C: bl      0x7F316668
    {
            ctx->lr = 0x7F318B40u;
            ctx->pc = 0x7F316668u;
            return;
    }

label_7F318B40:
    ctx->pc = 0x7F318B40u;
    ctx->downcount -= 2;
    // 7F318B40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F318B44:
    ctx->pc = 0x7F318B44u;
    // 7F318B44: bl      0x7F316614
    {
            ctx->lr = 0x7F318B48u;
            ctx->pc = 0x7F316614u;
            return;
    }

label_7F318B48:
    ctx->pc = 0x7F318B48u;
    ctx->downcount -= 2;
    // 7F318B48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F318B4C:
    ctx->pc = 0x7F318B4Cu;
    // 7F318B4C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F318B50u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F318B50:
    ctx->pc = 0x7F318B50u;
    ctx->downcount -= 16;
    // 7F318B50: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F318B54:
    ctx->pc = 0x7F318B54u;
    // 7F318B54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318B58:
    ctx->pc = 0x7F318B58u;
    // 7F318B58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F318B5C:
    ctx->pc = 0x7F318B5Cu;
    // 7F318B5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F318B60:
    ctx->pc = 0x7F318B60u;
    // 7F318B60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F318B64:
    ctx->pc = 0x7F318B64u;
    ctx->downcount -= 7;
    // 7F318B64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F318B68:
    ctx->pc = 0x7F318B68u;
    // 7F318B68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F318B6C:
    ctx->pc = 0x7F318B6Cu;
    // 7F318B6C: lis     r5, 187
    ctx->gpr[5] = ((u32)(s32)(187) << 16);

label_7F318B70:
    ctx->pc = 0x7F318B70u;
    // 7F318B70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318B74:
    ctx->pc = 0x7F318B74u;
    // 7F318B74: addi    r0, r5, 3860
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(3860);

label_7F318B78:
    ctx->pc = 0x7F318B78u;
    // 7F318B78: cmpw    r4, r0
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

label_7F318B7C:
    ctx->pc = 0x7F318B7Cu;
    // 7F318B7C: bc    4, 0, 0x7F318BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318BA0;
        }
    }

label_7F318B80:
    ctx->pc = 0x7F318B80u;
    ctx->downcount -= 4;
    // 7F318B80: lis     r5, 90
    ctx->gpr[5] = ((u32)(s32)(90) << 16);

label_7F318B84:
    ctx->pc = 0x7F318B84u;
    // 7F318B84: addi    r0, r5, 32354
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(32354);

label_7F318B88:
    ctx->pc = 0x7F318B88u;
    // 7F318B88: cmpw    r4, r0
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

label_7F318B8C:
    ctx->pc = 0x7F318B8Cu;
    // 7F318B8C: bc    4, 0, 0x7F318BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318BFC;
        }
    }

label_7F318B90:
    ctx->pc = 0x7F318B90u;
    ctx->downcount -= 3;
    // 7F318B90: addi    r0, r5, 32352
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(32352);

label_7F318B94:
    ctx->pc = 0x7F318B94u;
    // 7F318B94: cmpw    r4, r0
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

label_7F318B98:
    ctx->pc = 0x7F318B98u;
    // 7F318B98: bc    4, 0, 0x7F318BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318BF0;
        }
    }

label_7F318B9C:
    ctx->pc = 0x7F318B9Cu;
    ctx->downcount -= 1;
    // 7F318B9C: b       0x7F318BFC
    {
            goto label_7F318BFC;
    }

label_7F318BA0:
    ctx->pc = 0x7F318BA0u;
    ctx->downcount -= 3;
    // 7F318BA0: addi    r0, r5, 3862
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(3862);

label_7F318BA4:
    ctx->pc = 0x7F318BA4u;
    // 7F318BA4: cmpw    r4, r0
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

label_7F318BA8:
    ctx->pc = 0x7F318BA8u;
    // 7F318BA8: bc    4, 0, 0x7F318BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318BFC;
        }
    }

label_7F318BAC:
    ctx->pc = 0x7F318BACu;
    ctx->downcount -= 16;
    // 7F318BAC: lbz     r0, 17226(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(17226);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318BB0:
    ctx->pc = 0x7F318BB0u;
    // 7F318BB0: lwz     r4, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F318BB4:
    ctx->pc = 0x7F318BB4u;
    // 7F318BB4: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F318BB8:
    ctx->pc = 0x7F318BB8u;
    // 7F318BB8: lwz     r7, 444(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(444);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F318BBC:
    ctx->pc = 0x7F318BBCu;
    // 7F318BBC: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F318BC0:
    ctx->pc = 0x7F318BC0u;
    // 7F318BC0: mulli   r0, r0, 36
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)36);

label_7F318BC4:
    ctx->pc = 0x7F318BC4u;
    // 7F318BC4: lbz     r4, 143(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(143);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_7F318BC8:
    ctx->pc = 0x7F318BC8u;
    // 7F318BC8: add   r5, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F318BCC:
    ctx->pc = 0x7F318BCCu;
    // 7F318BCC: lwz     r6, 444(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(444);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F318BD0:
    ctx->pc = 0x7F318BD0u;
    // 7F318BD0: lbz     r0, 143(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(143);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318BD4:
    ctx->pc = 0x7F318BD4u;
    // 7F318BD4: lwz     r5, 140(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(140);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F318BD8:
    ctx->pc = 0x7F318BD8u;
    // 7F318BD8: cmplw   r4, r0
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

label_7F318BDC:
    ctx->pc = 0x7F318BDCu;
    // 7F318BDC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F318BE0:
    ctx->pc = 0x7F318BE0u;
    // 7F318BE0: bc    4, 1, 0x7F318BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318BF0;
        }
    }

label_7F318BE4:
    ctx->pc = 0x7F318BE4u;
    ctx->downcount -= 3;
    // 7F318BE4: lwz     r0, 140(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318BE8:
    ctx->pc = 0x7F318BE8u;
    // 7F318BE8: stw     r0, 140(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318BEC:
    ctx->pc = 0x7F318BECu;
    // 7F318BEC: stw     r5, 140(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F318BF0:
    ctx->pc = 0x7F318BF0u;
    ctx->downcount -= 2;
    // 7F318BF0: addi    r3, r3, 296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(296);

label_7F318BF4:
    ctx->pc = 0x7F318BF4u;
    // 7F318BF4: bl      0x7F3147A8
    {
            ctx->lr = 0x7F318BF8u;
            ctx->pc = 0x7F3147A8u;
            return;
    }

label_7F318BF8:
    ctx->pc = 0x7F318BF8u;
    ctx->downcount -= 1;
    // 7F318BF8: b       0x7F318C28
    {
            goto label_7F318C28;
    }

label_7F318BFC:
    ctx->pc = 0x7F318BFCu;
    ctx->downcount -= 3;
    // 7F318BFC: lwz     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318C00:
    ctx->pc = 0x7F318C00u;
    // 7F318C00: cmplwi  r0, 0x0013
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0013u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F318C04:
    ctx->pc = 0x7F318C04u;
    // 7F318C04: bc    12, 1, 0x7F318C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318C28;
        }
    }

label_7F318C08:
    ctx->pc = 0x7F318C08u;
    ctx->downcount -= 7;
    // 7F318C08: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F318C0C:
    ctx->pc = 0x7F318C0Cu;
    // 7F318C0C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F318C10:
    ctx->pc = 0x7F318C10u;
    // 7F318C10: addi    r4, r4, -25640
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25640);

label_7F318C14:
    ctx->pc = 0x7F318C14u;
    // 7F318C14: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318C18:
    ctx->pc = 0x7F318C18u;
    // 7F318C18: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F318C1C:
    ctx->pc = 0x7F318C1Cu;
    // 7F318C1C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F318C20:
    ctx->pc = 0x7F318C20u;
    ctx->downcount -= 2;
    // 7F318C20: addi    r3, r3, 296
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(296);

label_7F318C24:
    ctx->pc = 0x7F318C24u;
    // 7F318C24: bl      0x7F3147A8
    {
            ctx->lr = 0x7F318C28u;
            ctx->pc = 0x7F3147A8u;
            return;
    }

label_7F318C28:
    ctx->pc = 0x7F318C28u;
    ctx->downcount -= 5;
    // 7F318C28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318C2C:
    ctx->pc = 0x7F318C2Cu;
    // 7F318C2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F318C30:
    ctx->pc = 0x7F318C30u;
    // 7F318C30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F318C34:
    ctx->pc = 0x7F318C34u;
    // 7F318C34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F318C38:
    ctx->pc = 0x7F318C38u;
    ctx->downcount -= 6;
    // 7F318C38: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F318C3C:
    ctx->pc = 0x7F318C3Cu;
    // 7F318C3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F318C40:
    ctx->pc = 0x7F318C40u;
    // 7F318C40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318C44:
    ctx->pc = 0x7F318C44u;
    // 7F318C44: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F318C48:
    ctx->pc = 0x7F318C48u;
    // 7F318C48: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318C4C:
    ctx->pc = 0x7F318C4Cu;
    // 7F318C4C: bl      0x7F3C9624
    {
            ctx->lr = 0x7F318C50u;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F318C50:
    ctx->pc = 0x7F318C50u;
    ctx->downcount -= 5;
    // 7F318C50: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F318C54:
    ctx->pc = 0x7F318C54u;
    // 7F318C54: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_7F318C58:
    ctx->pc = 0x7F318C58u;
    // 7F318C58: cmpwi   r3, 0
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

label_7F318C5C:
    ctx->pc = 0x7F318C5Cu;
    // 7F318C5C: bc    4, 1, 0x7F318C68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318C68;
        }
    }

label_7F318C60:
    loop_7F318C60(ctx);
    if (ctx->pc == 0x7F318C68u) goto label_7F318C68;
    return;
label_7F318C64:
    // 7F318C64: bc    16, 0, 0x7F318C60
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F318C60u;
                return;
            }
            goto label_7F318C60;
        }
    }

label_7F318C68:
    ctx->pc = 0x7F318C68u;
    ctx->downcount -= 6;
    // 7F318C68: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F318C6C:
    ctx->pc = 0x7F318C6Cu;
    // 7F318C6C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318C70:
    ctx->pc = 0x7F318C70u;
    // 7F318C70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F318C74:
    ctx->pc = 0x7F318C74u;
    // 7F318C74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F318C78:
    ctx->pc = 0x7F318C78u;
    // 7F318C78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F318C7C:
    ctx->pc = 0x7F318C7Cu;
    ctx->downcount -= 6;
    // 7F318C7C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F318C80:
    ctx->pc = 0x7F318C80u;
    // 7F318C80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F318C84:
    ctx->pc = 0x7F318C84u;
    // 7F318C84: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318C88:
    ctx->pc = 0x7F318C88u;
    // 7F318C88: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F318C8C:
    ctx->pc = 0x7F318C8Cu;
    // 7F318C8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F318C90:
    ctx->pc = 0x7F318C90u;
    // 7F318C90: bl      0x7F318C38
    {
            ctx->lr = 0x7F318C94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F318C38u;
                return;
            }
            goto label_7F318C38;
    }

label_7F318C94:
    ctx->pc = 0x7F318C94u;
    ctx->downcount -= 2;
    // 7F318C94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F318C98:
    ctx->pc = 0x7F318C98u;
    // 7F318C98: bl      0x7F312524
    {
            ctx->lr = 0x7F318C9Cu;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F318C9C:
    ctx->pc = 0x7F318C9Cu;
    ctx->downcount -= 2;
    // 7F318C9C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F318CA0:
    ctx->pc = 0x7F318CA0u;
    // 7F318CA0: bl      0x7F312524
    {
            ctx->lr = 0x7F318CA4u;
            ctx->pc = 0x7F312524u;
            return;
    }

label_7F318CA4:
    ctx->pc = 0x7F318CA4u;
    ctx->downcount -= 2;
    // 7F318CA4: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318CA8:
    ctx->pc = 0x7F318CA8u;
    // 7F318CA8: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F318CACu;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F318CAC:
    ctx->pc = 0x7F318CACu;
    ctx->downcount -= 2;
    // 7F318CAC: cmpwi   r3, 0
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

label_7F318CB0:
    ctx->pc = 0x7F318CB0u;
    // 7F318CB0: bc    4, 2, 0x7F318CF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318CF0;
        }
    }

label_7F318CB4:
    ctx->pc = 0x7F318CB4u;
    ctx->downcount -= 6;
    // 7F318CB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318CB8:
    ctx->pc = 0x7F318CB8u;
    // 7F318CB8: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318CBC:
    ctx->pc = 0x7F318CBCu;
    // 7F318CBC: lwz     r3, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318CC0:
    ctx->pc = 0x7F318CC0u;
    // 7F318CC0: lwz     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318CC4:
    ctx->pc = 0x7F318CC4u;
    // 7F318CC4: cmpw    r3, r0
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

label_7F318CC8:
    ctx->pc = 0x7F318CC8u;
    // 7F318CC8: bc    12, 2, 0x7F318CF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318CF8;
        }
    }

label_7F318CCC:
    ctx->pc = 0x7F318CCCu;
    ctx->downcount -= 3;
    // 7F318CCC: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F318CD0:
    ctx->pc = 0x7F318CD0u;
    // 7F318CD0: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_7F318CD4:
    ctx->pc = 0x7F318CD4u;
    // 7F318CD4: bl      0x7F31438C
    {
            ctx->lr = 0x7F318CD8u;
            ctx->pc = 0x7F31438Cu;
            return;
    }

label_7F318CD8:
    ctx->pc = 0x7F318CD8u;
    ctx->downcount -= 3;
    // 7F318CD8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F318CDC:
    ctx->pc = 0x7F318CDCu;
    // 7F318CDC: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318CE0:
    ctx->pc = 0x7F318CE0u;
    // 7F318CE0: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F318CE4u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F318CE4:
    ctx->pc = 0x7F318CE4u;
    ctx->downcount -= 3;
    // 7F318CE4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F318CE8:
    ctx->pc = 0x7F318CE8u;
    // 7F318CE8: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318CEC:
    ctx->pc = 0x7F318CECu;
    // 7F318CEC: b       0x7F318CF8
    {
            goto label_7F318CF8;
    }

label_7F318CF0:
    ctx->pc = 0x7F318CF0u;
    ctx->downcount -= 2;
    // 7F318CF0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F318CF4:
    ctx->pc = 0x7F318CF4u;
    // 7F318CF4: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318CF8:
    ctx->pc = 0x7F318CF8u;
    ctx->downcount -= 5;
    // 7F318CF8: lwz     r6, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F318CFC:
    ctx->pc = 0x7F318CFCu;
    // 7F318CFC: addi    r3, r31, 152
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(152);

label_7F318D00:
    ctx->pc = 0x7F318D00u;
    // 7F318D00: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F318D04:
    ctx->pc = 0x7F318D04u;
    // 7F318D04: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F318D08:
    ctx->pc = 0x7F318D08u;
    // 7F318D08: bl      0x7F306FA4
    {
            ctx->lr = 0x7F318D0Cu;
            ctx->pc = 0x7F306FA4u;
            return;
    }

label_7F318D0C:
    ctx->pc = 0x7F318D0Cu;
    ctx->downcount -= 3;
    // 7F318D0C: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318D10:
    ctx->pc = 0x7F318D10u;
    // 7F318D10: cmpwi   r0, 0
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

label_7F318D14:
    ctx->pc = 0x7F318D14u;
    // 7F318D14: bc    4, 2, 0x7F318D20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318D20;
        }
    }

label_7F318D18:
    ctx->pc = 0x7F318D18u;
    ctx->downcount -= 2;
    // 7F318D18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F318D1C:
    ctx->pc = 0x7F318D1Cu;
    // 7F318D1C: bl      0x7F317D98
    {
            ctx->lr = 0x7F318D20u;
            ctx->pc = 0x7F317D98u;
            return;
    }

label_7F318D20:
    ctx->pc = 0x7F318D20u;
    ctx->downcount -= 4;
    // 7F318D20: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318D24:
    ctx->pc = 0x7F318D24u;
    // 7F318D24: lbz     r0, 14889(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14889);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F318D28:
    ctx->pc = 0x7F318D28u;
    // 7F318D28: cmplwi  r0, 0x0000
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

label_7F318D2C:
    ctx->pc = 0x7F318D2Cu;
    // 7F318D2C: bc    12, 2, 0x7F318D3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318D3C;
        }
    }

label_7F318D30:
    ctx->pc = 0x7F318D30u;
    ctx->downcount -= 2;
    // 7F318D30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F318D34:
    ctx->pc = 0x7F318D34u;
    // 7F318D34: bl      0x7F315724
    {
            ctx->lr = 0x7F318D38u;
            ctx->pc = 0x7F315724u;
            return;
    }

label_7F318D38:
    ctx->pc = 0x7F318D38u;
    ctx->downcount -= 1;
    // 7F318D38: b       0x7F318D4C
    {
            goto label_7F318D4C;
    }

label_7F318D3C:
    ctx->pc = 0x7F318D3Cu;
    ctx->downcount -= 4;
    // 7F318D3C: lwz     r3, 14884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14884);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318D40:
    ctx->pc = 0x7F318D40u;
    // 7F318D40: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318D44:
    ctx->pc = 0x7F318D44u;
    // 7F318D44: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F318D48:
    ctx->pc = 0x7F318D48u;
    // 7F318D48: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318D4C:
    ctx->pc = 0x7F318D4Cu;
    ctx->downcount -= 3;
    // 7F318D4C: lwz     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318D50:
    ctx->pc = 0x7F318D50u;
    // 7F318D50: cmpwi   r0, 0
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

label_7F318D54:
    ctx->pc = 0x7F318D54u;
    // 7F318D54: bc    12, 2, 0x7F318DE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318DE8;
        }
    }

label_7F318D58:
    ctx->pc = 0x7F318D58u;
    ctx->downcount -= 3;
    // 7F318D58: lwz     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318D5C:
    ctx->pc = 0x7F318D5Cu;
    // 7F318D5C: cmpwi   r0, 0
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

label_7F318D60:
    ctx->pc = 0x7F318D60u;
    // 7F318D60: bc    12, 2, 0x7F318DA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318DA0;
        }
    }

label_7F318D64:
    ctx->pc = 0x7F318D64u;
    ctx->downcount -= 14;
    // 7F318D64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318D68:
    ctx->pc = 0x7F318D68u;
    // 7F318D68: lis     r3, -32623
    ctx->gpr[3] = ((u32)(s32)(-32623) << 16);

label_7F318D6C:
    ctx->pc = 0x7F318D6Cu;
    // 7F318D6C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318D70:
    ctx->pc = 0x7F318D70u;
    // 7F318D70: addi    r0, r3, -28528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28528);

label_7F318D74:
    ctx->pc = 0x7F318D74u;
    // 7F318D74: li      r4, 131
    ctx->gpr[4] = (u32)(s32)(131);

label_7F318D78:
    ctx->pc = 0x7F318D78u;
    // 7F318D78: li      r5, 310
    ctx->gpr[5] = (u32)(s32)(310);

label_7F318D7C:
    ctx->pc = 0x7F318D7Cu;
    // 7F318D7C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318D80:
    ctx->pc = 0x7F318D80u;
    // 7F318D80: li      r6, 480
    ctx->gpr[6] = (u32)(s32)(480);

label_7F318D84:
    ctx->pc = 0x7F318D84u;
    // 7F318D84: li      r7, 52
    ctx->gpr[7] = (u32)(s32)(52);

label_7F318D88:
    ctx->pc = 0x7F318D88u;
    // 7F318D88: li      r8, 720
    ctx->gpr[8] = (u32)(s32)(720);

label_7F318D8C:
    ctx->pc = 0x7F318D8Cu;
    // 7F318D8C: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318D90:
    ctx->pc = 0x7F318D90u;
    // 7F318D90: li      r9, 80
    ctx->gpr[9] = (u32)(s32)(80);

label_7F318D94:
    ctx->pc = 0x7F318D94u;
    // 7F318D94: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F318D98:
    ctx->pc = 0x7F318D98u;
    // 7F318D98: bl      0x7F314524
    {
            ctx->lr = 0x7F318D9Cu;
            ctx->pc = 0x7F314524u;
            return;
    }

label_7F318D9C:
    ctx->pc = 0x7F318D9Cu;
    ctx->downcount -= 1;
    // 7F318D9C: b       0x7F318DE8
    {
            goto label_7F318DE8;
    }

label_7F318DA0:
    ctx->pc = 0x7F318DA0u;
    ctx->downcount -= 57;
    // 7F318DA0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F318DA4:
    ctx->pc = 0x7F318DA4u;
    // 7F318DA4: lis     r3, -32623
    ctx->gpr[3] = ((u32)(s32)(-32623) << 16);

label_7F318DA8:
    ctx->pc = 0x7F318DA8u;
    // 7F318DA8: lwz     r7, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F318DAC:
    ctx->pc = 0x7F318DACu;
    // 7F318DAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F318DB0:
    ctx->pc = 0x7F318DB0u;
    // 7F318DB0: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F318DB4:
    ctx->pc = 0x7F318DB4u;
    // 7F318DB4: addi    r6, r3, -28528
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-28528);

label_7F318DB8:
    ctx->pc = 0x7F318DB8u;
    // 7F318DB8: addi    r9, r7, 38
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(38);

label_7F318DBC:
    ctx->pc = 0x7F318DBCu;
    // 7F318DBC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F318DC0:
    ctx->pc = 0x7F318DC0u;
    // 7F318DC0: rlwinm r3, r9, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[9], 4u) & 0xFFFFFFF0u;
    }

label_7F318DC4:
    ctx->pc = 0x7F318DC4u;
    // 7F318DC4: li      r4, 131
    ctx->gpr[4] = (u32)(s32)(131);

label_7F318DC8:
    ctx->pc = 0x7F318DC8u;
    // 7F318DC8: divw   r7, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F318DCC:
    ctx->pc = 0x7F318DCCu;
    // 7F318DCC: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F318DD0:
    ctx->pc = 0x7F318DD0u;
    // 7F318DD0: li      r5, 320
    ctx->gpr[5] = (u32)(s32)(320);

label_7F318DD4:
    ctx->pc = 0x7F318DD4u;
    // 7F318DD4: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318DD8:
    ctx->pc = 0x7F318DD8u;
    // 7F318DD8: li      r6, 480
    ctx->gpr[6] = (u32)(s32)(480);

label_7F318DDC:
    ctx->pc = 0x7F318DDCu;
    // 7F318DDC: li      r8, 720
    ctx->gpr[8] = (u32)(s32)(720);

label_7F318DE0:
    ctx->pc = 0x7F318DE0u;
    // 7F318DE0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F318DE4:
    ctx->pc = 0x7F318DE4u;
    // 7F318DE4: bl      0x7F314524
    {
            ctx->lr = 0x7F318DE8u;
            ctx->pc = 0x7F314524u;
            return;
    }

label_7F318DE8:
    ctx->pc = 0x7F318DE8u;
    ctx->downcount -= 6;
    // 7F318DE8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318DEC:
    ctx->pc = 0x7F318DECu;
    // 7F318DEC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F318DF0:
    ctx->pc = 0x7F318DF0u;
    // 7F318DF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F318DF4:
    ctx->pc = 0x7F318DF4u;
    // 7F318DF4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F318DF8:
    ctx->pc = 0x7F318DF8u;
    // 7F318DF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F318DFC:
    ctx->pc = 0x7F318DFCu;
    ctx->downcount -= 6;
    // 7F318DFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F318E00:
    ctx->pc = 0x7F318E00u;
    // 7F318E00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F318E04:
    ctx->pc = 0x7F318E04u;
    // 7F318E04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318E08:
    ctx->pc = 0x7F318E08u;
    // 7F318E08: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F318E0C:
    ctx->pc = 0x7F318E0Cu;
    // 7F318E0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F318E10:
    ctx->pc = 0x7F318E10u;
    // 7F318E10: bl      0x7F312224
    {
            ctx->lr = 0x7F318E14u;
            ctx->pc = 0x7F312224u;
            return;
    }

label_7F318E14:
    ctx->pc = 0x7F318E14u;
    ctx->downcount -= 3;
    // 7F318E14: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F318E18:
    ctx->pc = 0x7F318E18u;
    // 7F318E18: cmpwi   r3, 0
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

label_7F318E1C:
    ctx->pc = 0x7F318E1Cu;
    // 7F318E1C: bc    12, 0, 0x7F318E24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F318E24;
        }
    }

label_7F318E20:
    ctx->pc = 0x7F318E20u;
    ctx->downcount -= 1;
    // 7F318E20: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F318E24u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F318E24:
    ctx->pc = 0x7F318E24u;
    ctx->downcount -= 3;
    // 7F318E24: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F318E28:
    ctx->pc = 0x7F318E28u;
    // 7F318E28: addi    r3, r3, 14880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14880);

label_7F318E2C:
    ctx->pc = 0x7F318E2Cu;
    // 7F318E2C: bl      0x7F319298
    {
            ctx->lr = 0x7F318E30u;
            goto label_7F319298;
    }

label_7F318E30:
    ctx->pc = 0x7F318E30u;
    ctx->downcount -= 6;
    // 7F318E30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318E34:
    ctx->pc = 0x7F318E34u;
    // 7F318E34: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F318E38:
    ctx->pc = 0x7F318E38u;
    // 7F318E38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F318E3C:
    ctx->pc = 0x7F318E3Cu;
    // 7F318E3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F318E40:
    ctx->pc = 0x7F318E40u;
    // 7F318E40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F318E44:
    ctx->pc = 0x7F318E44u;
    ctx->downcount -= 11;
    // 7F318E44: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F318E48:
    ctx->pc = 0x7F318E48u;
    // 7F318E48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F318E4C:
    ctx->pc = 0x7F318E4Cu;
    // 7F318E4C: stw     r5, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F318E50:
    ctx->pc = 0x7F318E50u;
    // 7F318E50: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318E54:
    ctx->pc = 0x7F318E54u;
    // 7F318E54: stw     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318E58:
    ctx->pc = 0x7F318E58u;
    // 7F318E58: stw     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318E5C:
    ctx->pc = 0x7F318E5Cu;
    // 7F318E5C: stb     r6, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_7F318E60:
    ctx->pc = 0x7F318E60u;
    // 7F318E60: stb     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318E64:
    ctx->pc = 0x7F318E64u;
    // 7F318E64: stb     r0, 83(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(83);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318E68:
    ctx->pc = 0x7F318E68u;
    // 7F318E68: stb     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F318E6C:
    ctx->pc = 0x7F318E6Cu;
    // 7F318E6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F318E70:
    ctx->pc = 0x7F318E70u;
    ctx->downcount -= 27;
    // 7F318E70: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F318E74:
    ctx->pc = 0x7F318E74u;
    // 7F318E74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F318E78:
    ctx->pc = 0x7F318E78u;
    // 7F318E78: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318E7C:
    ctx->pc = 0x7F318E7Cu;
    // 7F318E7C: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F318E80:
    ctx->pc = 0x7F318E80u;
    // 7F318E80: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F318E84:
    ctx->pc = 0x7F318E84u;
    // 7F318E84: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F318E88:
    ctx->pc = 0x7F318E88u;
    // 7F318E88: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F318E8C:
    ctx->pc = 0x7F318E8Cu;
    // 7F318E8C: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F318E90:
    ctx->pc = 0x7F318E90u;
    // 7F318E90: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F318E94:
    ctx->pc = 0x7F318E94u;
    // 7F318E94: lwz     r31, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F318E98:
    ctx->pc = 0x7F318E98u;
    // 7F318E98: or   r28, r8, r8
    {
        ctx->gpr[28] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F318E9C:
    ctx->pc = 0x7F318E9Cu;
    // 7F318E9C: or   r29, r9, r9
    {
        ctx->gpr[29] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F318EA0:
    ctx->pc = 0x7F318EA0u;
    // 7F318EA0: or   r30, r10, r10
    {
        ctx->gpr[30] = ctx->gpr[10] | ctx->gpr[10];
    }

label_7F318EA4:
    ctx->pc = 0x7F318EA4u;
    // 7F318EA4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F318EA8:
    ctx->pc = 0x7F318EA8u;
    // 7F318EA8: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F318EAC:
    ctx->pc = 0x7F318EACu;
    // 7F318EAC: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F318EB0:
    ctx->pc = 0x7F318EB0u;
    // 7F318EB0: bl      0x7F314338
    {
            ctx->lr = 0x7F318EB4u;
            ctx->pc = 0x7F314338u;
            return;
    }

label_7F318EB4:
    ctx->pc = 0x7F318EB4u;
    ctx->downcount -= 24;
    // 7F318EB4: stw     r24, 32(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F318EB8:
    ctx->pc = 0x7F318EB8u;
    // 7F318EB8: stw     r25, 44(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[25]);
    }

label_7F318EBC:
    ctx->pc = 0x7F318EBCu;
    // 7F318EBC: stw     r26, 48(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_7F318EC0:
    ctx->pc = 0x7F318EC0u;
    // 7F318EC0: stw     r27, 52(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F318EC4:
    ctx->pc = 0x7F318EC4u;
    // 7F318EC4: stw     r28, 56(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F318EC8:
    ctx->pc = 0x7F318EC8u;
    // 7F318EC8: stw     r29, 60(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F318ECC:
    ctx->pc = 0x7F318ECCu;
    // 7F318ECC: stw     r30, 64(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F318ED0:
    ctx->pc = 0x7F318ED0u;
    // 7F318ED0: stw     r31, 68(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F318ED4:
    ctx->pc = 0x7F318ED4u;
    // 7F318ED4: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F318ED8:
    ctx->pc = 0x7F318ED8u;
    // 7F318ED8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F318EDC:
    ctx->pc = 0x7F318EDCu;
    // 7F318EDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F318EE0:
    ctx->pc = 0x7F318EE0u;
    // 7F318EE0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F318EE4:
    ctx->pc = 0x7F318EE4u;
    // 7F318EE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F318EE8:
    ctx->pc = 0x7F318EE8u;
    ctx->downcount -= 23;
    // 7F318EE8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F318EEC:
    ctx->pc = 0x7F318EECu;
    // 7F318EEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F318EF0:
    ctx->pc = 0x7F318EF0u;
    // 7F318EF0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F318EF4:
    ctx->pc = 0x7F318EF4u;
    // 7F318EF4: stmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F318EF8:
    ctx->pc = 0x7F318EF8u;
    // 7F318EF8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F318EFC:
    ctx->pc = 0x7F318EFCu;
    // 7F318EFC: lis     r3, 32561
    ctx->gpr[3] = ((u32)(s32)(32561) << 16);

label_7F318F00:
    ctx->pc = 0x7F318F00u;
    // 7F318F00: or   r22, r5, r5
    {
        ctx->gpr[22] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F318F04:
    ctx->pc = 0x7F318F04u;
    // 7F318F04: addi    r0, r3, 17784
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17784);

label_7F318F08:
    ctx->pc = 0x7F318F08u;
    // 7F318F08: cmplw   r4, r0
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

label_7F318F0C:
    ctx->pc = 0x7F318F0Cu;
    // 7F318F0C: lwz     r31, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F318F10:
    ctx->pc = 0x7F318F10u;
    // 7F318F10: lwz     r30, 32(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F318F14:
    ctx->pc = 0x7F318F14u;
    // 7F318F14: stw     r4, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F318F18:
    ctx->pc = 0x7F318F18u;
    // 7F318F18: bc    4, 2, 0x7F318FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F318FB4;
        }
    }

label_7F318F1C:
    ctx->pc = 0x7F318F1Cu;
    ctx->downcount -= 4;
    // 7F318F1C: lis     r4, 57
    ctx->gpr[4] = ((u32)(s32)(57) << 16);

label_7F318F20:
    ctx->pc = 0x7F318F20u;
    // 7F318F20: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F318F24:
    ctx->pc = 0x7F318F24u;
    // 7F318F24: addi    r4, r4, -6370
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6370);

label_7F318F28:
    ctx->pc = 0x7F318F28u;
    // 7F318F28: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F318F2Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F318F2C:
    ctx->pc = 0x7F318F2Cu;
    ctx->downcount -= 5;
    // 7F318F2C: stw     r3, 108(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318F30:
    ctx->pc = 0x7F318F30u;
    // 7F318F30: lis     r4, 149
    ctx->gpr[4] = ((u32)(s32)(149) << 16);

label_7F318F34:
    ctx->pc = 0x7F318F34u;
    // 7F318F34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F318F38:
    ctx->pc = 0x7F318F38u;
    // 7F318F38: addi    r4, r4, -26863
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26863);

label_7F318F3C:
    ctx->pc = 0x7F318F3Cu;
    // 7F318F3C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F318F40u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F318F40:
    ctx->pc = 0x7F318F40u;
    ctx->downcount -= 5;
    // 7F318F40: stw     r3, 112(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318F44:
    ctx->pc = 0x7F318F44u;
    // 7F318F44: lis     r4, 187
    ctx->gpr[4] = ((u32)(s32)(187) << 16);

label_7F318F48:
    ctx->pc = 0x7F318F48u;
    // 7F318F48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F318F4C:
    ctx->pc = 0x7F318F4Cu;
    // 7F318F4C: addi    r4, r4, 15216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15216);

label_7F318F50:
    ctx->pc = 0x7F318F50u;
    // 7F318F50: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F318F54u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F318F54:
    ctx->pc = 0x7F318F54u;
    ctx->downcount -= 6;
    // 7F318F54: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F318F58:
    ctx->pc = 0x7F318F58u;
    // 7F318F58: stw     r3, 116(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318F5C:
    ctx->pc = 0x7F318F5Cu;
    // 7F318F5C: addi    r26, r4, -30132
    ctx->gpr[26] = ctx->gpr[4] + (u32)(s32)(-30132);

label_7F318F60:
    ctx->pc = 0x7F318F60u;
    // 7F318F60: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_7F318F64:
    ctx->pc = 0x7F318F64u;
    // 7F318F64: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F318F68:
    ctx->pc = 0x7F318F68u;
    // 7F318F68: b       0x7F318FA8
    {
            goto label_7F318FA8;
    }

label_7F318F6C:
    ctx->downcount -= 4;
    // 7F318F6C: add   r25, r26, r27
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F318F70:
    // 7F318F70: add   r24, r29, r27
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F318F74:
    // 7F318F74: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F318F78:
    // 7F318F78: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F318F7C:
    ctx->pc = 0x7F318F7Cu;
    ctx->downcount -= 3;
    // 7F318F7C: lwzx    r4, r25, r28
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F318F80:
    // 7F318F80: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F318F84:
    // 7F318F84: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F318F88u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F318F88:
    ctx->downcount -= 6;
    // 7F318F88: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F318F8C:
    // 7F318F8C: addi    r0, r28, 140
    ctx->gpr[0] = ctx->gpr[28] + (u32)(s32)(140);

label_7F318F90:
    // 7F318F90: cmpwi   r23, 1
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F318F94:
    ctx->pc = 0x7F318F94u;
    // 7F318F94: stwx    r3, r24, r0
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318F98:
    // 7F318F98: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_7F318F9C:
    // 7F318F9C: bc    4, 1, 0x7F318F7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F318F7Cu;
                return;
            }
            goto label_7F318F7C;
        }
    }

label_7F318FA0:
    ctx->downcount -= 2;
    // 7F318FA0: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F318FA4:
    // 7F318FA4: addi    r27, r27, 36
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(36);

label_7F318FA8:
    ctx->downcount -= 2;
    // 7F318FA8: cmpw    r22, r31
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F318FAC:
    // 7F318FAC: bc    4, 1, 0x7F318F6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F318F6Cu;
                return;
            }
            goto label_7F318F6C;
        }
    }

label_7F318FB0:
    ctx->pc = 0x7F318FB0u;
    ctx->downcount -= 1;
    // 7F318FB0: b       0x7F3190D8
    {
            goto label_7F3190D8;
    }

label_7F318FB4:
    ctx->pc = 0x7F318FB4u;
    ctx->downcount -= 4;
    // 7F318FB4: lis     r3, 32561
    ctx->gpr[3] = ((u32)(s32)(32561) << 16);

label_7F318FB8:
    ctx->pc = 0x7F318FB8u;
    // 7F318FB8: addi    r0, r3, 18344
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(18344);

label_7F318FBC:
    ctx->pc = 0x7F318FBCu;
    // 7F318FBC: cmplw   r4, r0
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

label_7F318FC0:
    ctx->pc = 0x7F318FC0u;
    // 7F318FC0: bc    4, 2, 0x7F3190D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3190D8;
        }
    }

label_7F318FC4:
    ctx->pc = 0x7F318FC4u;
    ctx->downcount -= 4;
    // 7F318FC4: lis     r4, 57
    ctx->gpr[4] = ((u32)(s32)(57) << 16);

label_7F318FC8:
    ctx->pc = 0x7F318FC8u;
    // 7F318FC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F318FCC:
    ctx->pc = 0x7F318FCCu;
    // 7F318FCC: addi    r4, r4, -6370
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6370);

label_7F318FD0:
    ctx->pc = 0x7F318FD0u;
    // 7F318FD0: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F318FD4u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F318FD4:
    ctx->pc = 0x7F318FD4u;
    ctx->downcount -= 5;
    // 7F318FD4: stw     r3, 108(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318FD8:
    ctx->pc = 0x7F318FD8u;
    // 7F318FD8: lis     r4, 48
    ctx->gpr[4] = ((u32)(s32)(48) << 16);

label_7F318FDC:
    ctx->pc = 0x7F318FDCu;
    // 7F318FDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F318FE0:
    ctx->pc = 0x7F318FE0u;
    // 7F318FE0: addi    r4, r4, 12411
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12411);

label_7F318FE4:
    ctx->pc = 0x7F318FE4u;
    // 7F318FE4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F318FE8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F318FE8:
    ctx->pc = 0x7F318FE8u;
    ctx->downcount -= 5;
    // 7F318FE8: stw     r3, 92(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F318FEC:
    ctx->pc = 0x7F318FECu;
    // 7F318FEC: lis     r4, 185
    ctx->gpr[4] = ((u32)(s32)(185) << 16);

label_7F318FF0:
    ctx->pc = 0x7F318FF0u;
    // 7F318FF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F318FF4:
    ctx->pc = 0x7F318FF4u;
    // 7F318FF4: addi    r4, r4, 30734
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30734);

label_7F318FF8:
    ctx->pc = 0x7F318FF8u;
    // 7F318FF8: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F318FFCu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F318FFC:
    ctx->pc = 0x7F318FFCu;
    ctx->downcount -= 3;
    // 7F318FFC: cmpwi   r22, 0
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

label_7F319000:
    ctx->pc = 0x7F319000u;
    // 7F319000: stw     r3, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319004:
    ctx->pc = 0x7F319004u;
    // 7F319004: bc    12, 2, 0x7F31906C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31906C;
        }
    }

label_7F319008:
    ctx->pc = 0x7F319008u;
    ctx->downcount -= 4;
    // 7F319008: lis     r4, 37
    ctx->gpr[4] = ((u32)(s32)(37) << 16);

label_7F31900C:
    ctx->pc = 0x7F31900Cu;
    // 7F31900C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F319010:
    ctx->pc = 0x7F319010u;
    // 7F319010: addi    r4, r4, 20842
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20842);

label_7F319014:
    ctx->pc = 0x7F319014u;
    // 7F319014: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F319018u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F319018:
    ctx->pc = 0x7F319018u;
    ctx->downcount -= 5;
    // 7F319018: stw     r3, 120(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31901C:
    ctx->pc = 0x7F31901Cu;
    // 7F31901C: lis     r4, 120
    ctx->gpr[4] = ((u32)(s32)(120) << 16);

label_7F319020:
    ctx->pc = 0x7F319020u;
    // 7F319020: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F319024:
    ctx->pc = 0x7F319024u;
    // 7F319024: addi    r4, r4, 3941
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3941);

label_7F319028:
    ctx->pc = 0x7F319028u;
    // 7F319028: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F31902Cu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F31902C:
    ctx->pc = 0x7F31902Cu;
    ctx->downcount -= 5;
    // 7F31902C: stw     r3, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319030:
    ctx->pc = 0x7F319030u;
    // 7F319030: lis     r4, 29
    ctx->gpr[4] = ((u32)(s32)(29) << 16);

label_7F319034:
    ctx->pc = 0x7F319034u;
    // 7F319034: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F319038:
    ctx->pc = 0x7F319038u;
    // 7F319038: addi    r4, r4, -3457
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3457);

label_7F31903C:
    ctx->pc = 0x7F31903Cu;
    // 7F31903C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F319040u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F319040:
    ctx->pc = 0x7F319040u;
    ctx->downcount -= 5;
    // 7F319040: stw     r3, 128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319044:
    ctx->pc = 0x7F319044u;
    // 7F319044: lis     r4, 122
    ctx->gpr[4] = ((u32)(s32)(122) << 16);

label_7F319048:
    ctx->pc = 0x7F319048u;
    // 7F319048: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31904C:
    ctx->pc = 0x7F31904Cu;
    // 7F31904C: addi    r4, r4, -28880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28880);

label_7F319050:
    ctx->pc = 0x7F319050u;
    // 7F319050: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F319054u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F319054:
    ctx->pc = 0x7F319054u;
    ctx->downcount -= 5;
    // 7F319054: stw     r3, 132(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319058:
    ctx->pc = 0x7F319058u;
    // 7F319058: lis     r4, 193
    ctx->gpr[4] = ((u32)(s32)(193) << 16);

label_7F31905C:
    ctx->pc = 0x7F31905Cu;
    // 7F31905C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F319060:
    ctx->pc = 0x7F319060u;
    // 7F319060: addi    r4, r4, -8646
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-8646);

label_7F319064:
    ctx->pc = 0x7F319064u;
    // 7F319064: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F319068u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F319068:
    ctx->pc = 0x7F319068u;
    ctx->downcount -= 1;
    // 7F319068: stw     r3, 136(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31906C:
    ctx->pc = 0x7F31906Cu;
    ctx->downcount -= 6;
    // 7F31906C: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F319070:
    ctx->pc = 0x7F319070u;
    // 7F319070: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F319074:
    ctx->pc = 0x7F319074u;
    // 7F319074: stw     r23, 112(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F319078:
    ctx->pc = 0x7F319078u;
    // 7F319078: addi    r26, r3, -30132
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(-30132);

label_7F31907C:
    ctx->pc = 0x7F31907Cu;
    // 7F31907C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F319080:
    ctx->pc = 0x7F319080u;
    // 7F319080: b       0x7F3190D0
    {
            goto label_7F3190D0;
    }

label_7F319084:
    ctx->downcount -= 4;
    // 7F319084: add   r24, r26, r28
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[24] = res;
    }

label_7F319088:
    // 7F319088: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31908C:
    ctx->pc = 0x7F31908Cu;
    // 7F31908C: lwz     r4, 0(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F319090:
    // 7F319090: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F319094u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F319094:
    ctx->downcount -= 4;
    // 7F319094: add   r25, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_7F319098:
    // 7F319098: li      r22, 2
    ctx->gpr[22] = (u32)(s32)(2);

label_7F31909C:
    ctx->pc = 0x7F31909Cu;
    // 7F31909C: stw     r3, 140(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3190A0:
    // 7F3190A0: li      r27, 8
    ctx->gpr[27] = (u32)(s32)(8);

label_7F3190A4:
    ctx->pc = 0x7F3190A4u;
    ctx->downcount -= 3;
    // 7F3190A4: lwzx    r4, r24, r27
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[27];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3190A8:
    // 7F3190A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3190AC:
    // 7F3190AC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F3190B0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F3190B0:
    ctx->downcount -= 6;
    // 7F3190B0: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_7F3190B4:
    // 7F3190B4: addi    r0, r27, 140
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(140);

label_7F3190B8:
    // 7F3190B8: cmpwi   r22, 8
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3190BC:
    ctx->pc = 0x7F3190BCu;
    // 7F3190BC: stwx    r3, r25, r0
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3190C0:
    // 7F3190C0: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_7F3190C4:
    // 7F3190C4: bc    4, 1, 0x7F3190A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3190A4u;
                return;
            }
            goto label_7F3190A4;
        }
    }

label_7F3190C8:
    ctx->downcount -= 2;
    // 7F3190C8: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F3190CC:
    // 7F3190CC: addi    r28, r28, 36
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(36);

label_7F3190D0:
    ctx->downcount -= 2;
    // 7F3190D0: cmpw    r23, r31
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3190D4:
    // 7F3190D4: bc    4, 1, 0x7F319084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319084u;
                return;
            }
            goto label_7F319084;
        }
    }

label_7F3190D8:
    ctx->pc = 0x7F3190D8u;
    ctx->downcount -= 4;
    // 7F3190D8: lis     r4, 129
    ctx->gpr[4] = ((u32)(s32)(129) << 16);

label_7F3190DC:
    ctx->pc = 0x7F3190DCu;
    // 7F3190DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3190E0:
    ctx->pc = 0x7F3190E0u;
    // 7F3190E0: addi    r4, r4, -29628
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29628);

label_7F3190E4:
    ctx->pc = 0x7F3190E4u;
    // 7F3190E4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F3190E8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F3190E8:
    ctx->pc = 0x7F3190E8u;
    ctx->downcount -= 5;
    // 7F3190E8: stw     r3, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3190EC:
    ctx->pc = 0x7F3190ECu;
    // 7F3190EC: lis     r4, 129
    ctx->gpr[4] = ((u32)(s32)(129) << 16);

label_7F3190F0:
    ctx->pc = 0x7F3190F0u;
    // 7F3190F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3190F4:
    ctx->pc = 0x7F3190F4u;
    // 7F3190F4: addi    r4, r4, -29626
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29626);

label_7F3190F8:
    ctx->pc = 0x7F3190F8u;
    // 7F3190F8: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F3190FCu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F3190FC:
    ctx->pc = 0x7F3190FCu;
    ctx->downcount -= 23;
    // 7F3190FC: stw     r3, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319100:
    ctx->pc = 0x7F319100u;
    // 7F319100: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F319104:
    ctx->pc = 0x7F319104u;
    // 7F319104: stw     r0, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319108:
    ctx->pc = 0x7F319108u;
    // 7F319108: stw     r0, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31910C:
    ctx->pc = 0x7F31910Cu;
    // 7F31910C: stb     r0, 80(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F319110:
    ctx->pc = 0x7F319110u;
    // 7F319110: stb     r0, 82(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(82);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F319114:
    ctx->pc = 0x7F319114u;
    // 7F319114: stb     r0, 81(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(81);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F319118:
    ctx->pc = 0x7F319118u;
    // 7F319118: lmw     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31911C:
    ctx->pc = 0x7F31911Cu;
    // 7F31911C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319120:
    ctx->pc = 0x7F319120u;
    // 7F319120: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319124:
    ctx->pc = 0x7F319124u;
    // 7F319124: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F319128:
    ctx->pc = 0x7F319128u;
    // 7F319128: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31912C:
    ctx->pc = 0x7F31912Cu;
    ctx->downcount -= 13;
    // 7F31912C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F319130:
    ctx->pc = 0x7F319130u;
    // 7F319130: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319134:
    ctx->pc = 0x7F319134u;
    // 7F319134: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F319138:
    ctx->pc = 0x7F319138u;
    // 7F319138: li      r6, 366
    ctx->gpr[6] = (u32)(s32)(366);

label_7F31913C:
    ctx->pc = 0x7F31913Cu;
    // 7F31913C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319140:
    ctx->pc = 0x7F319140u;
    // 7F319140: li      r7, 6
    ctx->gpr[7] = (u32)(s32)(6);

label_7F319144:
    ctx->pc = 0x7F319144u;
    // 7F319144: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F319148:
    ctx->pc = 0x7F319148u;
    // 7F319148: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31914C:
    ctx->pc = 0x7F31914Cu;
    // 7F31914C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F319150:
    ctx->pc = 0x7F319150u;
    // 7F319150: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F319154:
    ctx->pc = 0x7F319154u;
    // 7F319154: lwz     r31, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F319158:
    ctx->pc = 0x7F319158u;
    // 7F319158: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F31915C:
    ctx->pc = 0x7F31915Cu;
    // 7F31915C: bl      0x8004439C
    {
            ctx->lr = 0x7F319160u;
            ctx->pc = 0x8004439Cu;
            return;
    }

label_7F319160:
    ctx->pc = 0x7F319160u;
    ctx->downcount -= 12;
    // 7F319160: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F319164:
    ctx->pc = 0x7F319164u;
    // 7F319164: addi    r3, r31, 36
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(36);

label_7F319168:
    ctx->pc = 0x7F319168u;
    // 7F319168: addi    r5, r4, -30136
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-30136);

label_7F31916C:
    ctx->pc = 0x7F31916Cu;
    // 7F31916C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F319170:
    ctx->pc = 0x7F319170u;
    // 7F319170: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F319170u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F319174:
    ctx->pc = 0x7F319174u;
    // 7F319174: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F319178:
    ctx->pc = 0x7F319178u;
    // 7F319178: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31917C:
    ctx->pc = 0x7F31917Cu;
    // 7F31917C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F319180:
    ctx->pc = 0x7F319180u;
    // 7F319180: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F319180u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F319184:
    ctx->pc = 0x7F319184u;
    // 7F319184: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F319188:
    ctx->pc = 0x7F319188u;
    // 7F319188: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x7F319188u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_7F31918C:
    ctx->pc = 0x7F31918Cu;
    // 7F31918C: bl      0x80044630
    {
            ctx->lr = 0x7F319190u;
            ctx->pc = 0x80044630u;
            return;
    }

label_7F319190:
    ctx->pc = 0x7F319190u;
    ctx->downcount -= 22;
    // 7F319190: lwz     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F319194:
    ctx->pc = 0x7F319194u;
    // 7F319194: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F319198:
    ctx->pc = 0x7F319198u;
    // 7F319198: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F31919C:
    ctx->pc = 0x7F31919Cu;
    // 7F31919C: li      r0, 368
    ctx->gpr[0] = (u32)(s32)(368);

label_7F3191A0:
    ctx->pc = 0x7F3191A0u;
    // 7F3191A0: rlwinm r5, r5, 0, 18, 16
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0xFFFFBFFFu;
    }

label_7F3191A4:
    ctx->pc = 0x7F3191A4u;
    // 7F3191A4: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3191A8:
    ctx->pc = 0x7F3191A8u;
    // 7F3191A8: stw     r4, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3191AC:
    ctx->pc = 0x7F3191ACu;
    // 7F3191AC: stw     r4, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3191B0:
    ctx->pc = 0x7F3191B0u;
    // 7F3191B0: stw     r4, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3191B4:
    ctx->pc = 0x7F3191B4u;
    // 7F3191B4: stw     r4, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3191B8:
    ctx->pc = 0x7F3191B8u;
    // 7F3191B8: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3191BC:
    ctx->pc = 0x7F3191BCu;
    // 7F3191BC: stw     r3, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3191C0:
    ctx->pc = 0x7F3191C0u;
    // 7F3191C0: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3191C4:
    ctx->pc = 0x7F3191C4u;
    // 7F3191C4: stw     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3191C8:
    ctx->pc = 0x7F3191C8u;
    // 7F3191C8: stw     r4, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3191CC:
    ctx->pc = 0x7F3191CCu;
    // 7F3191CC: stw     r4, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F3191D0:
    ctx->pc = 0x7F3191D0u;
    // 7F3191D0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3191D4:
    ctx->pc = 0x7F3191D4u;
    // 7F3191D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3191D8:
    ctx->pc = 0x7F3191D8u;
    // 7F3191D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3191DC:
    ctx->pc = 0x7F3191DCu;
    // 7F3191DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3191E0:
    ctx->pc = 0x7F3191E0u;
    // 7F3191E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F3191E4:
    ctx->pc = 0x7F3191E4u;
    ctx->downcount -= 5;
    // 7F3191E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3191E8:
    ctx->pc = 0x7F3191E8u;
    // 7F3191E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3191EC:
    ctx->pc = 0x7F3191ECu;
    // 7F3191EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3191F0:
    ctx->pc = 0x7F3191F0u;
    // 7F3191F0: lwz     r3, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3191F4:
    ctx->pc = 0x7F3191F4u;
    // 7F3191F4: bl      0x7F2E4010
    {
            ctx->lr = 0x7F3191F8u;
            ctx->pc = 0x7F2E4010u;
            return;
    }

label_7F3191F8:
    ctx->pc = 0x7F3191F8u;
    ctx->downcount -= 5;
    // 7F3191F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3191FC:
    ctx->pc = 0x7F3191FCu;
    // 7F3191FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319200:
    ctx->pc = 0x7F319200u;
    // 7F319200: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F319204:
    ctx->pc = 0x7F319204u;
    // 7F319204: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319208:
    ctx->pc = 0x7F319208u;
    ctx->downcount -= 5;
    // 7F319208: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31920C:
    ctx->pc = 0x7F31920Cu;
    // 7F31920C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319210:
    ctx->pc = 0x7F319210u;
    // 7F319210: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319214:
    ctx->pc = 0x7F319214u;
    // 7F319214: lwz     r3, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F319218:
    ctx->pc = 0x7F319218u;
    // 7F319218: bl      0x7F2E4010
    {
            ctx->lr = 0x7F31921Cu;
            ctx->pc = 0x7F2E4010u;
            return;
    }

label_7F31921C:
    ctx->pc = 0x7F31921Cu;
    ctx->downcount -= 5;
    // 7F31921C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319220:
    ctx->pc = 0x7F319220u;
    // 7F319220: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319224:
    ctx->pc = 0x7F319224u;
    // 7F319224: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F319228:
    ctx->pc = 0x7F319228u;
    // 7F319228: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31922C:
    ctx->pc = 0x7F31922Cu;
    ctx->downcount -= 7;
    // 7F31922C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F319230:
    ctx->pc = 0x7F319230u;
    // 7F319230: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F319234:
    ctx->pc = 0x7F319234u;
    // 7F319234: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F319238:
    ctx->pc = 0x7F319238u;
    // 7F319238: stw     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31923C:
    ctx->pc = 0x7F31923Cu;
    // 7F31923C: stw     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319240:
    ctx->pc = 0x7F319240u;
    // 7F319240: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F319244:
    ctx->pc = 0x7F319244u;
    // 7F319244: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319248:
    ctx->pc = 0x7F319248u;
    ctx->downcount -= 11;
    // 7F319248: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31924C:
    ctx->pc = 0x7F31924Cu;
    // 7F31924C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319250:
    ctx->pc = 0x7F319250u;
    // 7F319250: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319254:
    ctx->pc = 0x7F319254u;
    // 7F319254: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F319258:
    ctx->pc = 0x7F319258u;
    // 7F319258: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31925C:
    ctx->pc = 0x7F31925Cu;
    // 7F31925C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F319260:
    ctx->pc = 0x7F319260u;
    // 7F319260: stw     r0, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319264:
    ctx->pc = 0x7F319264u;
    // 7F319264: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F319268:
    ctx->pc = 0x7F319268u;
    // 7F319268: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F31926C:
    ctx->pc = 0x7F31926Cu;
    // 7F31926C: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319270:
    ctx->pc = 0x7F319270u;
    // 7F319270: bl      0x7F3C664C
    {
            ctx->lr = 0x7F319274u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F319274:
    ctx->pc = 0x7F319274u;
    ctx->downcount -= 2;
    // 7F319274: cmplwi  r3, 0x0000
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

label_7F319278:
    ctx->pc = 0x7F319278u;
    // 7F319278: bc    12, 2, 0x7F319284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319284;
        }
    }

label_7F31927C:
    ctx->pc = 0x7F31927Cu;
    ctx->downcount -= 1;
    // 7F31927C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F319280u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F319280:
    ctx->pc = 0x7F319280u;
    ctx->downcount -= 1;
    // 7F319280: stw     r3, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319284:
    ctx->pc = 0x7F319284u;
    ctx->downcount -= 6;
    // 7F319284: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319288:
    ctx->pc = 0x7F319288u;
    // 7F319288: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31928C:
    ctx->pc = 0x7F31928Cu;
    // 7F31928C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319290:
    ctx->pc = 0x7F319290u;
    // 7F319290: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F319294:
    ctx->pc = 0x7F319294u;
    // 7F319294: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319298:
    ctx->pc = 0x7F319298u;
    ctx->downcount -= 8;
    // 7F319298: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31929C:
    ctx->pc = 0x7F31929Cu;
    // 7F31929C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3192A0:
    ctx->pc = 0x7F3192A0u;
    // 7F3192A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3192A4:
    ctx->pc = 0x7F3192A4u;
    // 7F3192A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F3192A8:
    ctx->pc = 0x7F3192A8u;
    // 7F3192A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F3192AC:
    ctx->pc = 0x7F3192ACu;
    // 7F3192AC: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3192B0:
    ctx->pc = 0x7F3192B0u;
    // 7F3192B0: cmplwi  r3, 0x0000
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

label_7F3192B4:
    ctx->pc = 0x7F3192B4u;
    // 7F3192B4: bc    12, 2, 0x7F3192C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3192C4;
        }
    }

label_7F3192B8:
    ctx->pc = 0x7F3192B8u;
    ctx->downcount -= 1;
    // 7F3192B8: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F3192BCu;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F3192BC:
    ctx->pc = 0x7F3192BCu;
    ctx->downcount -= 2;
    // 7F3192BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3192C0:
    ctx->pc = 0x7F3192C0u;
    // 7F3192C0: stw     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3192C4:
    ctx->pc = 0x7F3192C4u;
    ctx->downcount -= 3;
    // 7F3192C4: lwz     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3192C8:
    ctx->pc = 0x7F3192C8u;
    // 7F3192C8: cmplwi  r3, 0x0000
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

label_7F3192CC:
    ctx->pc = 0x7F3192CCu;
    // 7F3192CC: bc    12, 2, 0x7F3192DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3192DC;
        }
    }

label_7F3192D0:
    ctx->pc = 0x7F3192D0u;
    ctx->downcount -= 1;
    // 7F3192D0: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F3192D4u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F3192D4:
    ctx->pc = 0x7F3192D4u;
    ctx->downcount -= 2;
    // 7F3192D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3192D8:
    ctx->pc = 0x7F3192D8u;
    // 7F3192D8: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3192DC:
    ctx->pc = 0x7F3192DCu;
    ctx->downcount -= 3;
    // 7F3192DC: lwz     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3192E0:
    ctx->pc = 0x7F3192E0u;
    // 7F3192E0: cmplwi  r3, 0x0000
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

label_7F3192E4:
    ctx->pc = 0x7F3192E4u;
    // 7F3192E4: bc    12, 2, 0x7F3192F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3192F4;
        }
    }

label_7F3192E8:
    ctx->pc = 0x7F3192E8u;
    ctx->downcount -= 1;
    // 7F3192E8: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F3192ECu;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F3192EC:
    ctx->pc = 0x7F3192ECu;
    ctx->downcount -= 2;
    // 7F3192EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3192F0:
    ctx->pc = 0x7F3192F0u;
    // 7F3192F0: stw     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3192F4:
    ctx->pc = 0x7F3192F4u;
    ctx->downcount -= 3;
    // 7F3192F4: lwz     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3192F8:
    ctx->pc = 0x7F3192F8u;
    // 7F3192F8: cmplwi  r3, 0x0000
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

label_7F3192FC:
    ctx->pc = 0x7F3192FCu;
    // 7F3192FC: bc    12, 2, 0x7F31930C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31930C;
        }
    }

label_7F319300:
    ctx->pc = 0x7F319300u;
    ctx->downcount -= 1;
    // 7F319300: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F319304u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F319304:
    ctx->pc = 0x7F319304u;
    ctx->downcount -= 2;
    // 7F319304: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F319308:
    ctx->pc = 0x7F319308u;
    // 7F319308: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31930C:
    ctx->pc = 0x7F31930Cu;
    ctx->downcount -= 6;
    // 7F31930C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319310:
    ctx->pc = 0x7F319310u;
    // 7F319310: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F319314:
    ctx->pc = 0x7F319314u;
    // 7F319314: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319318:
    ctx->pc = 0x7F319318u;
    // 7F319318: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31931C:
    ctx->pc = 0x7F31931Cu;
    // 7F31931C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319320:
    ctx->pc = 0x7F319320u;
    ctx->downcount -= 19;
    // 7F319320: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F319324:
    ctx->pc = 0x7F319324u;
    // 7F319324: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319328:
    ctx->pc = 0x7F319328u;
    // 7F319328: lis     r5, -28527
    ctx->gpr[5] = ((u32)(s32)(-28527) << 16);

label_7F31932C:
    ctx->pc = 0x7F31932Cu;
    // 7F31932C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319330:
    ctx->pc = 0x7F319330u;
    // 7F319330: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F319334:
    ctx->pc = 0x7F319334u;
    // 7F319334: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F319338:
    ctx->pc = 0x7F319338u;
    // 7F319338: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31933C:
    ctx->pc = 0x7F31933Cu;
    // 7F31933C: addi    r3, r5, -28544
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-28544);

label_7F319340:
    ctx->pc = 0x7F319340u;
    // 7F319340: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319344:
    ctx->pc = 0x7F319344u;
    // 7F319344: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319348:
    ctx->pc = 0x7F319348u;
    // 7F319348: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31934C:
    ctx->pc = 0x7F31934Cu;
    // 7F31934C: stw     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319350:
    ctx->pc = 0x7F319350u;
    // 7F319350: stb     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F319354:
    ctx->pc = 0x7F319354u;
    // 7F319354: stb     r0, 9(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F319358:
    ctx->pc = 0x7F319358u;
    // 7F319358: stw     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31935C:
    ctx->pc = 0x7F31935Cu;
    // 7F31935C: lwz     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F319360:
    ctx->pc = 0x7F319360u;
    // 7F319360: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319364:
    ctx->pc = 0x7F319364u;
    // 7F319364: cmpwi   r0, 1
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

label_7F319368:
    ctx->pc = 0x7F319368u;
    // 7F319368: bc    4, 2, 0x7F3193B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3193B0;
        }
    }

label_7F31936C:
    ctx->pc = 0x7F31936Cu;
    ctx->downcount -= 3;
    // 7F31936C: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F319370:
    ctx->pc = 0x7F319370u;
    // 7F319370: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F319374:
    ctx->pc = 0x7F319374u;
    // 7F319374: bl      0x7F19CF78
    {
            ctx->lr = 0x7F319378u;
            ctx->pc = 0x7F19CF78u;
            return;
    }

label_7F319378:
    ctx->pc = 0x7F319378u;
    ctx->downcount -= 4;
    // 7F319378: stw     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31937C:
    ctx->pc = 0x7F31937Cu;
    // 7F31937C: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F319380:
    ctx->pc = 0x7F319380u;
    // 7F319380: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F319384:
    ctx->pc = 0x7F319384u;
    // 7F319384: bl      0x7F19CF78
    {
            ctx->lr = 0x7F319388u;
            ctx->pc = 0x7F19CF78u;
            return;
    }

label_7F319388:
    ctx->pc = 0x7F319388u;
    ctx->downcount -= 4;
    // 7F319388: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31938C:
    ctx->pc = 0x7F31938Cu;
    // 7F31938C: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F319390:
    ctx->pc = 0x7F319390u;
    // 7F319390: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F319394:
    ctx->pc = 0x7F319394u;
    // 7F319394: bl      0x7F19CF78
    {
            ctx->lr = 0x7F319398u;
            ctx->pc = 0x7F19CF78u;
            return;
    }

label_7F319398:
    ctx->pc = 0x7F319398u;
    ctx->downcount -= 4;
    // 7F319398: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31939C:
    ctx->pc = 0x7F31939Cu;
    // 7F31939C: li      r3, 576
    ctx->gpr[3] = (u32)(s32)(576);

label_7F3193A0:
    ctx->pc = 0x7F3193A0u;
    // 7F3193A0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F3193A4:
    ctx->pc = 0x7F3193A4u;
    // 7F3193A4: bl      0x7F19CF78
    {
            ctx->lr = 0x7F3193A8u;
            ctx->pc = 0x7F19CF78u;
            return;
    }

label_7F3193A8:
    ctx->pc = 0x7F3193A8u;
    ctx->downcount -= 2;
    // 7F3193A8: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3193AC:
    ctx->pc = 0x7F3193ACu;
    // 7F3193AC: b       0x7F319400
    {
            goto label_7F319400;
    }

label_7F3193B0:
    ctx->pc = 0x7F3193B0u;
    ctx->downcount -= 4;
    // 7F3193B0: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F3193B4:
    ctx->pc = 0x7F3193B4u;
    // 7F3193B4: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F3193B8:
    ctx->pc = 0x7F3193B8u;
    // 7F3193B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3193BC:
    ctx->pc = 0x7F3193BCu;
    // 7F3193BC: bl      0x7F19CE98
    {
            ctx->lr = 0x7F3193C0u;
            ctx->pc = 0x7F19CE98u;
            return;
    }

label_7F3193C0:
    ctx->pc = 0x7F3193C0u;
    ctx->downcount -= 5;
    // 7F3193C0: stw     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3193C4:
    ctx->pc = 0x7F3193C4u;
    // 7F3193C4: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F3193C8:
    ctx->pc = 0x7F3193C8u;
    // 7F3193C8: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F3193CC:
    ctx->pc = 0x7F3193CCu;
    // 7F3193CC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3193D0:
    ctx->pc = 0x7F3193D0u;
    // 7F3193D0: bl      0x7F19CE98
    {
            ctx->lr = 0x7F3193D4u;
            ctx->pc = 0x7F19CE98u;
            return;
    }

label_7F3193D4:
    ctx->pc = 0x7F3193D4u;
    ctx->downcount -= 5;
    // 7F3193D4: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3193D8:
    ctx->pc = 0x7F3193D8u;
    // 7F3193D8: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F3193DC:
    ctx->pc = 0x7F3193DCu;
    // 7F3193DC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F3193E0:
    ctx->pc = 0x7F3193E0u;
    // 7F3193E0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3193E4:
    ctx->pc = 0x7F3193E4u;
    // 7F3193E4: bl      0x7F19CE98
    {
            ctx->lr = 0x7F3193E8u;
            ctx->pc = 0x7F19CE98u;
            return;
    }

label_7F3193E8:
    ctx->pc = 0x7F3193E8u;
    ctx->downcount -= 5;
    // 7F3193E8: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3193EC:
    ctx->pc = 0x7F3193ECu;
    // 7F3193EC: li      r3, 576
    ctx->gpr[3] = (u32)(s32)(576);

label_7F3193F0:
    ctx->pc = 0x7F3193F0u;
    // 7F3193F0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F3193F4:
    ctx->pc = 0x7F3193F4u;
    // 7F3193F4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3193F8:
    ctx->pc = 0x7F3193F8u;
    // 7F3193F8: bl      0x7F19CE98
    {
            ctx->lr = 0x7F3193FCu;
            ctx->pc = 0x7F19CE98u;
            return;
    }

label_7F3193FC:
    ctx->pc = 0x7F3193FCu;
    ctx->downcount -= 1;
    // 7F3193FC: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319400:
    ctx->pc = 0x7F319400u;
    ctx->downcount -= 7;
    // 7F319400: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319404:
    ctx->pc = 0x7F319404u;
    // 7F319404: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F319408:
    ctx->pc = 0x7F319408u;
    // 7F319408: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31940C:
    ctx->pc = 0x7F31940Cu;
    // 7F31940C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319410:
    ctx->pc = 0x7F319410u;
    // 7F319410: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F319414:
    ctx->pc = 0x7F319414u;
    // 7F319414: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319418:
    ctx->pc = 0x7F319418u;
    ctx->downcount -= 20;
    // 7F319418: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31941C:
    ctx->pc = 0x7F31941Cu;
    // 7F31941C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319420:
    ctx->pc = 0x7F319420u;
    // 7F319420: lis     r6, 139
    ctx->gpr[6] = ((u32)(s32)(139) << 16);

label_7F319424:
    ctx->pc = 0x7F319424u;
    // 7F319424: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319428:
    ctx->pc = 0x7F319428u;
    // 7F319428: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31942C:
    ctx->pc = 0x7F31942Cu;
    // 7F31942C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F319430:
    ctx->pc = 0x7F319430u;
    // 7F319430: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F319434:
    ctx->pc = 0x7F319434u;
    // 7F319434: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F319438:
    ctx->pc = 0x7F319438u;
    // 7F319438: addi    r4, r6, -9441
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-9441);

label_7F31943C:
    ctx->pc = 0x7F31943Cu;
    // 7F31943C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F319440u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F319440:
    ctx->pc = 0x7F319440u;
    ctx->downcount -= 4;
    // 7F319440: stw     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319444:
    ctx->pc = 0x7F319444u;
    // 7F319444: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F319448:
    ctx->pc = 0x7F319448u;
    // 7F319448: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31944C:
    ctx->pc = 0x7F31944Cu;
    // 7F31944C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F319450u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F319450:
    ctx->pc = 0x7F319450u;
    ctx->downcount -= 17;
    // 7F319450: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319454:
    ctx->pc = 0x7F319454u;
    // 7F319454: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F319458:
    ctx->pc = 0x7F319458u;
    // 7F319458: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31945C:
    ctx->pc = 0x7F31945Cu;
    // 7F31945C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319460:
    ctx->pc = 0x7F319460u;
    // 7F319460: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F319464:
    ctx->pc = 0x7F319464u;
    // 7F319464: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319468:
    ctx->pc = 0x7F319468u;
    ctx->downcount -= 21;
    // 7F319468: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31946C:
    ctx->pc = 0x7F31946Cu;
    // 7F31946C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319470:
    ctx->pc = 0x7F319470u;
    // 7F319470: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319474:
    ctx->pc = 0x7F319474u;
    // 7F319474: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F319478:
    ctx->pc = 0x7F319478u;
    // 7F319478: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31947C:
    ctx->pc = 0x7F31947Cu;
    // 7F31947C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F319480:
    ctx->pc = 0x7F319480u;
    // 7F319480: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F319484:
    ctx->pc = 0x7F319484u;
    // 7F319484: stw     r0, 140(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319488:
    ctx->pc = 0x7F319488u;
    // 7F319488: stw     r0, 136(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31948C:
    ctx->pc = 0x7F31948Cu;
    // 7F31948C: stw     r0, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319490:
    ctx->pc = 0x7F319490u;
    // 7F319490: bl      0x7F319248
    {
            ctx->lr = 0x7F319494u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319248u;
                return;
            }
            goto label_7F319248;
    }

label_7F319494:
    ctx->pc = 0x7F319494u;
    ctx->downcount -= 3;
    // 7F319494: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319498:
    ctx->pc = 0x7F319498u;
    // 7F319498: cmpwi   r0, 1
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

label_7F31949C:
    ctx->pc = 0x7F31949Cu;
    // 7F31949C: bc    12, 2, 0x7F3194EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3194EC;
        }
    }

label_7F3194A0:
    ctx->pc = 0x7F3194A0u;
    ctx->downcount -= 1;
    // 7F3194A0: bc    4, 0, 0x7F3194B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3194B0;
        }
    }

label_7F3194A4:
    ctx->pc = 0x7F3194A4u;
    ctx->downcount -= 2;
    // 7F3194A4: cmpwi   r0, 0
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

label_7F3194A8:
    ctx->pc = 0x7F3194A8u;
    // 7F3194A8: bc    4, 0, 0x7F3194B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3194B8;
        }
    }

label_7F3194AC:
    ctx->pc = 0x7F3194ACu;
    ctx->downcount -= 1;
    // 7F3194AC: b       0x7F319518
    {
            goto label_7F319518;
    }

label_7F3194B0:
    ctx->pc = 0x7F3194B0u;
    ctx->downcount -= 2;
    // 7F3194B0: cmpwi   r0, 3
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

label_7F3194B4:
    ctx->pc = 0x7F3194B4u;
    // 7F3194B4: bc    4, 0, 0x7F319518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319518;
        }
    }

label_7F3194B8:
    ctx->pc = 0x7F3194B8u;
    ctx->downcount -= 6;
    // 7F3194B8: lis     r3, 152
    ctx->gpr[3] = ((u32)(s32)(152) << 16);

label_7F3194BC:
    ctx->pc = 0x7F3194BCu;
    // 7F3194BC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3194C0:
    ctx->pc = 0x7F3194C0u;
    // 7F3194C0: addi    r3, r3, -5210
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5210);

label_7F3194C4:
    ctx->pc = 0x7F3194C4u;
    // 7F3194C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F3194C8:
    ctx->pc = 0x7F3194C8u;
    // 7F3194C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3194CC:
    ctx->pc = 0x7F3194CCu;
    // 7F3194CC: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F3194D0u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F3194D0:
    ctx->pc = 0x7F3194D0u;
    ctx->downcount -= 5;
    // 7F3194D0: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3194D4:
    ctx->pc = 0x7F3194D4u;
    // 7F3194D4: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F3194D8:
    ctx->pc = 0x7F3194D8u;
    // 7F3194D8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F3194DC:
    ctx->pc = 0x7F3194DCu;
    // 7F3194DC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F3194E0:
    ctx->pc = 0x7F3194E0u;
    // 7F3194E0: bl      0x7F19CE98
    {
            ctx->lr = 0x7F3194E4u;
            ctx->pc = 0x7F19CE98u;
            return;
    }

label_7F3194E4:
    ctx->pc = 0x7F3194E4u;
    ctx->downcount -= 2;
    // 7F3194E4: stw     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F3194E8:
    ctx->pc = 0x7F3194E8u;
    // 7F3194E8: b       0x7F319518
    {
            goto label_7F319518;
    }

label_7F3194EC:
    ctx->pc = 0x7F3194ECu;
    ctx->downcount -= 6;
    // 7F3194EC: lis     r3, 152
    ctx->gpr[3] = ((u32)(s32)(152) << 16);

label_7F3194F0:
    ctx->pc = 0x7F3194F0u;
    // 7F3194F0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F3194F4:
    ctx->pc = 0x7F3194F4u;
    // 7F3194F4: addi    r3, r3, -5210
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5210);

label_7F3194F8:
    ctx->pc = 0x7F3194F8u;
    // 7F3194F8: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F3194FC:
    ctx->pc = 0x7F3194FCu;
    // 7F3194FC: li      r6, 8192
    ctx->gpr[6] = (u32)(s32)(8192);

label_7F319500:
    ctx->pc = 0x7F319500u;
    // 7F319500: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F319504u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F319504:
    ctx->pc = 0x7F319504u;
    ctx->downcount -= 4;
    // 7F319504: stw     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319508:
    ctx->pc = 0x7F319508u;
    // 7F319508: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F31950C:
    ctx->pc = 0x7F31950Cu;
    // 7F31950C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F319510:
    ctx->pc = 0x7F319510u;
    // 7F319510: bl      0x7F19CF78
    {
            ctx->lr = 0x7F319514u;
            ctx->pc = 0x7F19CF78u;
            return;
    }

label_7F319514:
    ctx->pc = 0x7F319514u;
    ctx->downcount -= 1;
    // 7F319514: stw     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F319518:
    ctx->pc = 0x7F319518u;
    ctx->downcount -= 3;
    // 7F319518: lwz     r4, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31951C:
    ctx->pc = 0x7F31951Cu;
    // 7F31951C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F319520:
    ctx->pc = 0x7F319520u;
    // 7F319520: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F319524u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F319524:
    ctx->pc = 0x7F319524u;
    ctx->downcount -= 5;
    // 7F319524: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F319528:
    ctx->pc = 0x7F319528u;
    // 7F319528: addi    r4, r31, 832
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(832);

label_7F31952C:
    ctx->pc = 0x7F31952Cu;
    // 7F31952C: addi    r5, r31, 152
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(152);

label_7F319530:
    ctx->pc = 0x7F319530u;
    // 7F319530: li      r6, 103
    ctx->gpr[6] = (u32)(s32)(103);

label_7F319534:
    ctx->pc = 0x7F319534u;
    // 7F319534: bl      0x7F318E44
    {
            ctx->lr = 0x7F319538u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F318E44u;
                return;
            }
            goto label_7F318E44;
    }

label_7F319538:
    ctx->pc = 0x7F319538u;
    ctx->downcount -= 12;
    // 7F319538: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31953C:
    ctx->pc = 0x7F31953Cu;
    // 7F31953C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F319540:
    ctx->pc = 0x7F319540u;
    // 7F319540: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319544:
    ctx->pc = 0x7F319544u;
    // 7F319544: addi    r8, r3, -31648
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-31648);

label_7F319548:
    ctx->pc = 0x7F319548u;
    // 7F319548: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F31954C:
    ctx->pc = 0x7F31954Cu;
    // 7F31954C: addi    r5, r31, 64
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(64);

label_7F319550:
    ctx->pc = 0x7F319550u;
    // 7F319550: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F319554:
    ctx->pc = 0x7F319554u;
    // 7F319554: addi    r6, r31, 104
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(104);

label_7F319558:
    ctx->pc = 0x7F319558u;
    // 7F319558: addi    r7, r31, 108
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(108);

label_7F31955C:
    ctx->pc = 0x7F31955Cu;
    // 7F31955C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_7F319560:
    ctx->pc = 0x7F319560u;
    // 7F319560: li      r10, 7
    ctx->gpr[10] = (u32)(s32)(7);

label_7F319564:
    ctx->pc = 0x7F319564u;
    // 7F319564: bl      0x7F318E70
    {
            ctx->lr = 0x7F319568u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F318E70u;
                return;
            }
            goto label_7F318E70;
    }

label_7F319568:
    ctx->pc = 0x7F319568u;
    ctx->downcount -= 5;
    // 7F319568: lis     r4, 32561
    ctx->gpr[4] = ((u32)(s32)(32561) << 16);

label_7F31956C:
    ctx->pc = 0x7F31956Cu;
    // 7F31956C: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F319570:
    ctx->pc = 0x7F319570u;
    // 7F319570: addi    r4, r4, 18344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18344);

label_7F319574:
    ctx->pc = 0x7F319574u;
    // 7F319574: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F319578:
    ctx->pc = 0x7F319578u;
    // 7F319578: bl      0x7F318EE8
    {
            ctx->lr = 0x7F31957Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F318EE8u;
                return;
            }
            goto label_7F318EE8;
    }

label_7F31957C:
    ctx->pc = 0x7F31957Cu;
    ctx->downcount -= 5;
    // 7F31957C: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F319580:
    ctx->pc = 0x7F319580u;
    // 7F319580: lwz     r4, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F319584:
    ctx->pc = 0x7F319584u;
    // 7F319584: lwz     r5, 14892(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(14892);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F319588:
    ctx->pc = 0x7F319588u;
    // 7F319588: addi    r3, r31, 296
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(296);

label_7F31958C:
    ctx->pc = 0x7F31958Cu;
    // 7F31958C: bl      0x7F31922C
    {
            ctx->lr = 0x7F319590u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31922Cu;
                return;
            }
            goto label_7F31922C;
    }

label_7F319590:
    ctx->pc = 0x7F319590u;
    ctx->downcount -= 3;
    // 7F319590: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319594:
    ctx->pc = 0x7F319594u;
    // 7F319594: cmpwi   r0, 0
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

label_7F319598:
    ctx->pc = 0x7F319598u;
    // 7F319598: bc    12, 2, 0x7F3195AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3195AC;
        }
    }

label_7F31959C:
    ctx->pc = 0x7F31959Cu;
    ctx->downcount -= 1;
    // 7F31959C: bc    12, 0, 0x7F3195C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3195C0;
        }
    }

label_7F3195A0:
    ctx->pc = 0x7F3195A0u;
    ctx->downcount -= 2;
    // 7F3195A0: cmpwi   r0, 3
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

label_7F3195A4:
    ctx->pc = 0x7F3195A4u;
    // 7F3195A4: bc    4, 0, 0x7F3195C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3195C0;
        }
    }

label_7F3195A8:
    ctx->pc = 0x7F3195A8u;
    ctx->downcount -= 1;
    // 7F3195A8: b       0x7F3195B8
    {
            goto label_7F3195B8;
    }

label_7F3195AC:
    ctx->pc = 0x7F3195ACu;
    ctx->downcount -= 3;
    // 7F3195AC: lis     r3, 128
    ctx->gpr[3] = ((u32)(s32)(128) << 16);

label_7F3195B0:
    ctx->pc = 0x7F3195B0u;
    // 7F3195B0: addi    r30, r3, -4467
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-4467);

label_7F3195B4:
    ctx->pc = 0x7F3195B4u;
    // 7F3195B4: b       0x7F3195C0
    {
            goto label_7F3195C0;
    }

label_7F3195B8:
    ctx->pc = 0x7F3195B8u;
    ctx->downcount -= 2;
    // 7F3195B8: lis     r3, 213
    ctx->gpr[3] = ((u32)(s32)(213) << 16);

label_7F3195BC:
    ctx->pc = 0x7F3195BCu;
    // 7F3195BC: addi    r30, r3, -2393
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-2393);

label_7F3195C0:
    ctx->pc = 0x7F3195C0u;
    ctx->downcount -= 5;
    // 7F3195C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3195C4:
    ctx->pc = 0x7F3195C4u;
    // 7F3195C4: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F3195C8:
    ctx->pc = 0x7F3195C8u;
    // 7F3195C8: addi    r5, r31, 104
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(104);

label_7F3195CC:
    ctx->pc = 0x7F3195CCu;
    // 7F3195CC: addi    r6, r31, 108
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(108);

label_7F3195D0:
    ctx->pc = 0x7F3195D0u;
    // 7F3195D0: bl      0x7F31435C
    {
            ctx->lr = 0x7F3195D4u;
            ctx->pc = 0x7F31435Cu;
            return;
    }

label_7F3195D4:
    ctx->pc = 0x7F3195D4u;
    ctx->downcount -= 2;
    // 7F3195D4: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3195D8:
    ctx->pc = 0x7F3195D8u;
    // 7F3195D8: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F3195DCu;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F3195DC:
    ctx->pc = 0x7F3195DCu;
    ctx->downcount -= 5;
    // 7F3195DC: lis     r4, 32562
    ctx->gpr[4] = ((u32)(s32)(32562) << 16);

label_7F3195E0:
    ctx->pc = 0x7F3195E0u;
    // 7F3195E0: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F3195E4:
    ctx->pc = 0x7F3195E4u;
    // 7F3195E4: addi    r5, r4, -29852
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-29852);

label_7F3195E8:
    ctx->pc = 0x7F3195E8u;
    // 7F3195E8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3195EC:
    ctx->pc = 0x7F3195ECu;
    // 7F3195EC: bl      0x7F2E4B6C
    {
            ctx->lr = 0x7F3195F0u;
            ctx->pc = 0x7F2E4B6Cu;
            return;
    }

label_7F3195F0:
    ctx->pc = 0x7F3195F0u;
    ctx->downcount -= 2;
    // 7F3195F0: addi    r3, r31, 832
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(832);

label_7F3195F4:
    ctx->pc = 0x7F3195F4u;
    // 7F3195F4: bl      0x7F3121BC
    {
            ctx->lr = 0x7F3195F8u;
            ctx->pc = 0x7F3121BCu;
            return;
    }

label_7F3195F8:
    ctx->pc = 0x7F3195F8u;
    ctx->downcount -= 4;
    // 7F3195F8: addis   r3, r31, 1
    ctx->gpr[3] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F3195FC:
    ctx->pc = 0x7F3195FCu;
    // 7F3195FC: addi    r4, r31, 52
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(52);

label_7F319600:
    ctx->pc = 0x7F319600u;
    // 7F319600: addi    r3, r3, 14880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14880);

label_7F319604:
    ctx->pc = 0x7F319604u;
    // 7F319604: bl      0x7F319320
    {
            ctx->lr = 0x7F319608u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319320u;
                return;
            }
            goto label_7F319320;
    }

label_7F319608:
    ctx->pc = 0x7F319608u;
    ctx->downcount -= 2;
    // 7F319608: cmpwi   r3, 0
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

label_7F31960C:
    ctx->pc = 0x7F31960Cu;
    // 7F31960C: bc    4, 0, 0x7F319618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319618;
        }
    }

label_7F319610:
    ctx->pc = 0x7F319610u;
    ctx->downcount -= 2;
    // 7F319610: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F319614:
    ctx->pc = 0x7F319614u;
    // 7F319614: b       0x7F319634
    {
            goto label_7F319634;
    }

label_7F319618:
    ctx->pc = 0x7F319618u;
    ctx->downcount -= 6;
    // 7F319618: addis   r4, r31, 1
    ctx->gpr[4] = ctx->gpr[31] + ((u32)(s32)(1) << 16);

label_7F31961C:
    ctx->pc = 0x7F31961Cu;
    // 7F31961C: lis     r5, 164
    ctx->gpr[5] = ((u32)(s32)(164) << 16);

label_7F319620:
    ctx->pc = 0x7F319620u;
    // 7F319620: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F319624:
    ctx->pc = 0x7F319624u;
    // 7F319624: addi    r5, r5, 631
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(631);

label_7F319628:
    ctx->pc = 0x7F319628u;
    // 7F319628: addi    r4, r4, 14880
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14880);

label_7F31962C:
    ctx->pc = 0x7F31962Cu;
    // 7F31962C: bl      0x7F319418
    {
            ctx->lr = 0x7F319630u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319418u;
                return;
            }
            goto label_7F319418;
    }

label_7F319630:
    ctx->pc = 0x7F319630u;
    ctx->downcount -= 1;
    // 7F319630: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F319634:
    ctx->pc = 0x7F319634u;
    ctx->downcount -= 16;
    // 7F319634: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F319638:
    ctx->pc = 0x7F319638u;
    // 7F319638: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31963C:
    ctx->pc = 0x7F31963Cu;
    // 7F31963C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319640:
    ctx->pc = 0x7F319640u;
    // 7F319640: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F319644:
    ctx->pc = 0x7F319644u;
    // 7F319644: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319648:
    ctx->pc = 0x7F319648u;
    ctx->downcount -= 21;
    // 7F319648: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31964C:
    ctx->pc = 0x7F31964Cu;
    // 7F31964C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319650:
    ctx->pc = 0x7F319650u;
    // 7F319650: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F319654:
    ctx->pc = 0x7F319654u;
    // 7F319654: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F319658:
    ctx->pc = 0x7F319658u;
    // 7F319658: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31965C:
    ctx->pc = 0x7F31965Cu;
    // 7F31965C: addi    r5, r4, 15968
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15968);

label_7F319660:
    ctx->pc = 0x7F319660u;
    // 7F319660: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F319664:
    ctx->pc = 0x7F319664u;
    // 7F319664: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F319668:
    ctx->pc = 0x7F319668u;
    // 7F319668: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31966C:
    ctx->pc = 0x7F31966Cu;
    // 7F31966C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F319670:
    ctx->pc = 0x7F319670u;
    // 7F319670: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F319674u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F319674:
    ctx->pc = 0x7F319674u;
    ctx->downcount -= 2;
    // 7F319674: or.   r31, r3, r3
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

label_7F319678:
    ctx->pc = 0x7F319678u;
    // 7F319678: bc    12, 2, 0x7F319700
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319700;
        }
    }

label_7F31967C:
    ctx->pc = 0x7F31967Cu;
    ctx->downcount -= 5;
    // 7F31967C: lis     r4, 32562
    ctx->gpr[4] = ((u32)(s32)(32562) << 16);

label_7F319680:
    ctx->pc = 0x7F319680u;
    // 7F319680: lis     r5, 32562
    ctx->gpr[5] = ((u32)(s32)(32562) << 16);

label_7F319684:
    ctx->pc = 0x7F319684u;
    // 7F319684: addi    r4, r4, -29572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29572);

label_7F319688:
    ctx->pc = 0x7F319688u;
    // 7F319688: addi    r5, r5, -29188
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29188);

label_7F31968C:
    ctx->pc = 0x7F31968Cu;
    // 7F31968C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F319690u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F319690:
    ctx->pc = 0x7F319690u;
    ctx->downcount -= 13;
    // 7F319690: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319694:
    ctx->pc = 0x7F319694u;
    // 7F319694: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F319698:
    ctx->pc = 0x7F319698u;
    // 7F319698: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31969C:
    ctx->pc = 0x7F31969Cu;
    // 7F31969C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3196A0:
    ctx->pc = 0x7F3196A0u;
    // 7F3196A0: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F3196A4:
    ctx->pc = 0x7F3196A4u;
    // 7F3196A4: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F3196A8:
    ctx->pc = 0x7F3196A8u;
    // 7F3196A8: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3196AC:
    ctx->pc = 0x7F3196ACu;
    // 7F3196AC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3196B0:
    ctx->pc = 0x7F3196B0u;
    // 7F3196B0: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3196B4:
    ctx->pc = 0x7F3196B4u;
    // 7F3196B4: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3196B8:
    ctx->pc = 0x7F3196B8u;
    // 7F3196B8: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3196BC:
    ctx->pc = 0x7F3196BCu;
    // 7F3196BC: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3196C0:
    ctx->pc = 0x7F3196C0u;
    // 7F3196C0: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F3196C4u;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F3196C4:
    ctx->pc = 0x7F3196C4u;
    ctx->downcount -= 5;
    // 7F3196C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3196C8:
    ctx->pc = 0x7F3196C8u;
    // 7F3196C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3196CC:
    ctx->pc = 0x7F3196CCu;
    // 7F3196CC: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3196D0:
    ctx->pc = 0x7F3196D0u;
    // 7F3196D0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F3196D4:
    ctx->pc = 0x7F3196D4u;
    // 7F3196D4: bl      0x7F319468
    {
            ctx->lr = 0x7F3196D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319468u;
                return;
            }
            goto label_7F319468;
    }

label_7F3196D8:
    ctx->pc = 0x7F3196D8u;
    ctx->downcount -= 2;
    // 7F3196D8: cmpwi   r3, 0
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

label_7F3196DC:
    ctx->pc = 0x7F3196DCu;
    // 7F3196DC: bc    4, 0, 0x7F3196F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3196F0;
        }
    }

label_7F3196E0:
    ctx->pc = 0x7F3196E0u;
    ctx->downcount -= 2;
    // 7F3196E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3196E4:
    ctx->pc = 0x7F3196E4u;
    // 7F3196E4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3196E8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3196E8:
    ctx->pc = 0x7F3196E8u;
    ctx->downcount -= 2;
    // 7F3196E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3196EC:
    ctx->pc = 0x7F3196ECu;
    // 7F3196EC: b       0x7F319704
    {
            goto label_7F319704;
    }

label_7F3196F0:
    ctx->pc = 0x7F3196F0u;
    ctx->downcount -= 2;
    // 7F3196F0: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F3196F4:
    ctx->pc = 0x7F3196F4u;
    // 7F3196F4: bl      0x7F0208E4
    {
            ctx->lr = 0x7F3196F8u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F3196F8:
    ctx->pc = 0x7F3196F8u;
    ctx->downcount -= 2;
    // 7F3196F8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3196FC:
    ctx->pc = 0x7F3196FCu;
    // 7F3196FC: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F319700u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F319700:
    ctx->pc = 0x7F319700u;
    ctx->downcount -= 1;
    // 7F319700: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F319704:
    ctx->pc = 0x7F319704u;
    ctx->downcount -= 16;
    // 7F319704: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F319708:
    ctx->pc = 0x7F319708u;
    // 7F319708: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31970C:
    ctx->pc = 0x7F31970Cu;
    // 7F31970C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319710:
    ctx->pc = 0x7F319710u;
    // 7F319710: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F319714:
    ctx->pc = 0x7F319714u;
    // 7F319714: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319718:
    ctx->pc = 0x7F319718u;
    ctx->downcount -= 7;
    // 7F319718: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31971C:
    ctx->pc = 0x7F31971Cu;
    // 7F31971C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319720:
    ctx->pc = 0x7F319720u;
    // 7F319720: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F319724:
    ctx->pc = 0x7F319724u;
    // 7F319724: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319728:
    ctx->pc = 0x7F319728u;
    // 7F319728: addi    r3, r3, 15968
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15968);

label_7F31972C:
    ctx->pc = 0x7F31972Cu;
    // 7F31972C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F319730:
    ctx->pc = 0x7F319730u;
    // 7F319730: bl      0x7F3C9148
    {
            ctx->lr = 0x7F319734u;
            ctx->pc = 0x7F3C9148u;
            return;
    }

label_7F319734:
    ctx->pc = 0x7F319734u;
    ctx->downcount -= 2;
    // 7F319734: or.   r31, r3, r3
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

label_7F319738:
    ctx->pc = 0x7F319738u;
    // 7F319738: bc    12, 2, 0x7F3197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3197F0;
        }
    }

label_7F31973C:
    ctx->pc = 0x7F31973Cu;
    ctx->downcount -= 3;
    // 7F31973C: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F319740:
    ctx->pc = 0x7F319740u;
    // 7F319740: addi    r4, r4, 15968
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15968);

label_7F319744:
    ctx->pc = 0x7F319744u;
    // 7F319744: bl      0x7F3C9120
    {
            ctx->lr = 0x7F319748u;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F319748:
    ctx->pc = 0x7F319748u;
    ctx->downcount -= 4;
    // 7F319748: lis     r4, 32537
    ctx->gpr[4] = ((u32)(s32)(32537) << 16);

label_7F31974C:
    ctx->pc = 0x7F31974Cu;
    // 7F31974C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F319750:
    ctx->pc = 0x7F319750u;
    // 7F319750: addi    r4, r4, 13928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13928);

label_7F319754:
    ctx->pc = 0x7F319754u;
    // 7F319754: bl      0x7F3C8914
    {
            ctx->lr = 0x7F319758u;
            ctx->pc = 0x7F3C8914u;
            return;
    }

label_7F319758:
    ctx->pc = 0x7F319758u;
    ctx->downcount -= 3;
    // 7F319758: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31975C:
    ctx->pc = 0x7F31975Cu;
    // 7F31975C: li      r4, 16384
    ctx->gpr[4] = (u32)(s32)(16384);

label_7F319760:
    ctx->pc = 0x7F319760u;
    // 7F319760: bl      0x7F3C8924
    {
            ctx->lr = 0x7F319764u;
            ctx->pc = 0x7F3C8924u;
            return;
    }

label_7F319764:
    ctx->pc = 0x7F319764u;
    ctx->downcount -= 3;
    // 7F319764: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F319768:
    ctx->pc = 0x7F319768u;
    // 7F319768: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F31976C:
    ctx->pc = 0x7F31976Cu;
    // 7F31976C: bl      0x7F3C891C
    {
            ctx->lr = 0x7F319770u;
            ctx->pc = 0x7F3C891Cu;
            return;
    }

label_7F319770:
    ctx->pc = 0x7F319770u;
    ctx->downcount -= 4;
    // 7F319770: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F319774:
    ctx->pc = 0x7F319774u;
    // 7F319774: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F319778:
    ctx->pc = 0x7F319778u;
    // 7F319778: li      r5, 511
    ctx->gpr[5] = (u32)(s32)(511);

label_7F31977C:
    ctx->pc = 0x7F31977Cu;
    // 7F31977C: bl      0x7F3C7DD4
    {
            ctx->lr = 0x7F319780u;
            ctx->pc = 0x7F3C7DD4u;
            return;
    }

label_7F319780:
    ctx->pc = 0x7F319780u;
    ctx->downcount -= 6;
    // 7F319780: lis     r3, 32562
    ctx->gpr[3] = ((u32)(s32)(32562) << 16);

label_7F319784:
    ctx->pc = 0x7F319784u;
    // 7F319784: lis     r5, 32562
    ctx->gpr[5] = ((u32)(s32)(32562) << 16);

label_7F319788:
    ctx->pc = 0x7F319788u;
    // 7F319788: addi    r4, r3, -29572
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29572);

label_7F31978C:
    ctx->pc = 0x7F31978Cu;
    // 7F31978C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F319790:
    ctx->pc = 0x7F319790u;
    // 7F319790: addi    r5, r5, -29188
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29188);

label_7F319794:
    ctx->pc = 0x7F319794u;
    // 7F319794: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F319798u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F319798:
    ctx->pc = 0x7F319798u;
    ctx->downcount -= 16;
    // 7F319798: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31979C:
    ctx->pc = 0x7F31979Cu;
    // 7F31979C: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F3197A0:
    ctx->pc = 0x7F3197A0u;
    // 7F3197A0: lis     r4, 21
    ctx->gpr[4] = ((u32)(s32)(21) << 16);

label_7F3197A4:
    ctx->pc = 0x7F3197A4u;
    // 7F3197A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F3197A8:
    ctx->pc = 0x7F3197A8u;
    // 7F3197A8: ori     r0, r0, 0x0080
    ctx->gpr[0] = ctx->gpr[0] | 0x0080u;

label_7F3197AC:
    ctx->pc = 0x7F3197ACu;
    // 7F3197AC: addi    r5, r3, 32548
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F3197B0:
    ctx->pc = 0x7F3197B0u;
    // 7F3197B0: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3197B4:
    ctx->pc = 0x7F3197B4u;
    // 7F3197B4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F3197B8:
    ctx->pc = 0x7F3197B8u;
    // 7F3197B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3197BC:
    ctx->pc = 0x7F3197BCu;
    // 7F3197BC: addi    r4, r4, -6439
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6439);

label_7F3197C0:
    ctx->pc = 0x7F3197C0u;
    // 7F3197C0: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3197C4:
    ctx->pc = 0x7F3197C4u;
    // 7F3197C4: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3197C8:
    ctx->pc = 0x7F3197C8u;
    // 7F3197C8: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F3197CC:
    ctx->pc = 0x7F3197CCu;
    // 7F3197CC: stw     r5, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F3197D0:
    ctx->pc = 0x7F3197D0u;
    // 7F3197D0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3197D4:
    ctx->pc = 0x7F3197D4u;
    // 7F3197D4: bl      0x7F319468
    {
            ctx->lr = 0x7F3197D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319468u;
                return;
            }
            goto label_7F319468;
    }

label_7F3197D8:
    ctx->pc = 0x7F3197D8u;
    ctx->downcount -= 2;
    // 7F3197D8: cmpwi   r3, 0
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

label_7F3197DC:
    ctx->pc = 0x7F3197DCu;
    // 7F3197DC: bc    4, 0, 0x7F3197F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3197F0;
        }
    }

label_7F3197E0:
    ctx->pc = 0x7F3197E0u;
    ctx->downcount -= 2;
    // 7F3197E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3197E4:
    ctx->pc = 0x7F3197E4u;
    // 7F3197E4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3197E8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3197E8:
    ctx->pc = 0x7F3197E8u;
    ctx->downcount -= 2;
    // 7F3197E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3197EC:
    ctx->pc = 0x7F3197ECu;
    // 7F3197EC: b       0x7F3197F4
    {
            goto label_7F3197F4;
    }

label_7F3197F0:
    ctx->pc = 0x7F3197F0u;
    ctx->downcount -= 1;
    // 7F3197F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3197F4:
    ctx->pc = 0x7F3197F4u;
    ctx->downcount -= 6;
    // 7F3197F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3197F8:
    ctx->pc = 0x7F3197F8u;
    // 7F3197F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F3197FC:
    ctx->pc = 0x7F3197FCu;
    // 7F3197FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F319800:
    ctx->pc = 0x7F319800u;
    // 7F319800: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F319804:
    ctx->pc = 0x7F319804u;
    // 7F319804: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319808:
    ctx->pc = 0x7F319808u;
    ctx->downcount -= 21;
    // 7F319808: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31980C:
    ctx->pc = 0x7F31980Cu;
    // 7F31980C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F319810:
    ctx->pc = 0x7F319810u;
    // 7F319810: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F319814:
    ctx->pc = 0x7F319814u;
    // 7F319814: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F319818:
    ctx->pc = 0x7F319818u;
    // 7F319818: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31981C:
    ctx->pc = 0x7F31981Cu;
    // 7F31981C: addi    r5, r4, 15968
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15968);

label_7F319820:
    ctx->pc = 0x7F319820u;
    // 7F319820: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F319824:
    ctx->pc = 0x7F319824u;
    // 7F319824: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F319828:
    ctx->pc = 0x7F319828u;
    // 7F319828: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31982C:
    ctx->pc = 0x7F31982Cu;
    // 7F31982C: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F319830:
    ctx->pc = 0x7F319830u;
    // 7F319830: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F319834u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F319834:
    ctx->pc = 0x7F319834u;
    ctx->downcount -= 2;
    // 7F319834: or.   r31, r3, r3
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

label_7F319838:
    ctx->pc = 0x7F319838u;
    // 7F319838: bc    12, 2, 0x7F3198C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3198C0;
        }
    }

label_7F31983C:
    ctx->pc = 0x7F31983Cu;
    ctx->downcount -= 5;
    // 7F31983C: lis     r4, 32562
    ctx->gpr[4] = ((u32)(s32)(32562) << 16);

label_7F319840:
    ctx->pc = 0x7F319840u;
    // 7F319840: lis     r5, 32562
    ctx->gpr[5] = ((u32)(s32)(32562) << 16);

label_7F319844:
    ctx->pc = 0x7F319844u;
    // 7F319844: addi    r4, r4, -29572
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29572);

label_7F319848:
    ctx->pc = 0x7F319848u;
    // 7F319848: addi    r5, r5, -29188
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29188);

label_7F31984C:
    ctx->pc = 0x7F31984Cu;
    // 7F31984C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F319850u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F319850:
    ctx->pc = 0x7F319850u;
    ctx->downcount -= 13;
    // 7F319850: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319854:
    ctx->pc = 0x7F319854u;
    // 7F319854: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F319858:
    ctx->pc = 0x7F319858u;
    // 7F319858: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31985C:
    ctx->pc = 0x7F31985Cu;
    // 7F31985C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F319860:
    ctx->pc = 0x7F319860u;
    // 7F319860: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F319864:
    ctx->pc = 0x7F319864u;
    // 7F319864: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F319868:
    ctx->pc = 0x7F319868u;
    // 7F319868: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31986C:
    ctx->pc = 0x7F31986Cu;
    // 7F31986C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F319870:
    ctx->pc = 0x7F319870u;
    // 7F319870: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F319874:
    ctx->pc = 0x7F319874u;
    // 7F319874: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F319878:
    ctx->pc = 0x7F319878u;
    // 7F319878: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31987C:
    ctx->pc = 0x7F31987Cu;
    // 7F31987C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319880:
    ctx->pc = 0x7F319880u;
    // 7F319880: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F319884u;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F319884:
    ctx->pc = 0x7F319884u;
    ctx->downcount -= 5;
    // 7F319884: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F319888:
    ctx->pc = 0x7F319888u;
    // 7F319888: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31988C:
    ctx->pc = 0x7F31988Cu;
    // 7F31988C: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319890:
    ctx->pc = 0x7F319890u;
    // 7F319890: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F319894:
    ctx->pc = 0x7F319894u;
    // 7F319894: bl      0x7F319468
    {
            ctx->lr = 0x7F319898u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319468u;
                return;
            }
            goto label_7F319468;
    }

label_7F319898:
    ctx->pc = 0x7F319898u;
    ctx->downcount -= 2;
    // 7F319898: cmpwi   r3, 0
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

label_7F31989C:
    ctx->pc = 0x7F31989Cu;
    // 7F31989C: bc    4, 0, 0x7F3198B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3198B0;
        }
    }

label_7F3198A0:
    ctx->pc = 0x7F3198A0u;
    ctx->downcount -= 2;
    // 7F3198A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3198A4:
    ctx->pc = 0x7F3198A4u;
    // 7F3198A4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F3198A8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F3198A8:
    ctx->pc = 0x7F3198A8u;
    ctx->downcount -= 2;
    // 7F3198A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F3198AC:
    ctx->pc = 0x7F3198ACu;
    // 7F3198AC: b       0x7F3198C4
    {
            goto label_7F3198C4;
    }

label_7F3198B0:
    ctx->pc = 0x7F3198B0u;
    ctx->downcount -= 2;
    // 7F3198B0: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F3198B4:
    ctx->pc = 0x7F3198B4u;
    // 7F3198B4: bl      0x7F0208E4
    {
            ctx->lr = 0x7F3198B8u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F3198B8:
    ctx->pc = 0x7F3198B8u;
    ctx->downcount -= 2;
    // 7F3198B8: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F3198BC:
    ctx->pc = 0x7F3198BCu;
    // 7F3198BC: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F3198C0u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F3198C0:
    ctx->pc = 0x7F3198C0u;
    ctx->downcount -= 1;
    // 7F3198C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F3198C4:
    ctx->pc = 0x7F3198C4u;
    ctx->downcount -= 16;
    // 7F3198C4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F3198C8:
    ctx->pc = 0x7F3198C8u;
    // 7F3198C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F3198CC:
    ctx->pc = 0x7F3198CCu;
    // 7F3198CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F3198D0:
    ctx->pc = 0x7F3198D0u;
    // 7F3198D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F3198D4:
    ctx->pc = 0x7F3198D4u;
    // 7F3198D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F3198D8:
    ctx->pc = 0x7F3198D8u;
    ctx->downcount -= 6;
    // 7F3198D8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F3198DC:
    ctx->pc = 0x7F3198DCu;
    // 7F3198DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F3198E0:
    ctx->pc = 0x7F3198E0u;
    // 7F3198E0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3198E4:
    ctx->pc = 0x7F3198E4u;
    // 7F3198E4: lwz     r7, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F3198E8:
    ctx->pc = 0x7F3198E8u;
    // 7F3198E8: cmpwi   r7, 0
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

label_7F3198EC:
    ctx->pc = 0x7F3198ECu;
    // 7F3198EC: bc    12, 2, 0x7F319924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319924;
        }
    }

label_7F3198F0:
    ctx->pc = 0x7F3198F0u;
    ctx->downcount -= 2;
    // 7F3198F0: cmpwi   r7, 1
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F3198F4:
    ctx->pc = 0x7F3198F4u;
    // 7F3198F4: bc    12, 2, 0x7F319924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319924;
        }
    }

label_7F3198F8:
    ctx->pc = 0x7F3198F8u;
    ctx->downcount -= 11;
    // 7F3198F8: lwz     r6, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F3198FC:
    ctx->pc = 0x7F3198FCu;
    // 7F3198FC: addi    r0, r1, 8
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(8);

label_7F319900:
    ctx->pc = 0x7F319900u;
    // 7F319900: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F319904:
    ctx->pc = 0x7F319904u;
    // 7F319904: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F319908:
    ctx->pc = 0x7F319908u;
    // 7F319908: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31990C:
    ctx->pc = 0x7F31990Cu;
    // 7F31990C: lwz     r6, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F319910:
    ctx->pc = 0x7F319910u;
    // 7F319910: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F319914:
    ctx->pc = 0x7F319914u;
    // 7F319914: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F319918:
    ctx->pc = 0x7F319918u;
    // 7F319918: sth     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F31991C:
    ctx->pc = 0x7F31991Cu;
    // 7F31991C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319920:
    ctx->pc = 0x7F319920u;
    // 7F319920: bl      0x7F3C7728
    {
            ctx->lr = 0x7F319924u;
            ctx->pc = 0x7F3C7728u;
            return;
    }

label_7F319924:
    ctx->pc = 0x7F319924u;
    ctx->downcount -= 5;
    // 7F319924: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319928:
    ctx->pc = 0x7F319928u;
    // 7F319928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31992C:
    ctx->pc = 0x7F31992Cu;
    // 7F31992C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F319930:
    ctx->pc = 0x7F319930u;
    // 7F319930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319934:
    ctx->pc = 0x7F319934u;
    ctx->downcount -= 5;
    // 7F319934: cmpwi   r3, 1
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

label_7F319938:
    ctx->pc = 0x7F319938u;
    // 7F319938: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31993C:
    ctx->pc = 0x7F31993Cu;
    // 7F31993C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F319940:
    ctx->pc = 0x7F319940u;
    // 7F319940: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F319944:
    ctx->pc = 0x7F319944u;
    // 7F319944: bc    12, 2, 0x7F319998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319998;
        }
    }

label_7F319948:
    ctx->pc = 0x7F319948u;
    ctx->downcount -= 1;
    // 7F319948: bc    4, 0, 0x7F3199A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F3199A8;
        }
    }

label_7F31994C:
    ctx->pc = 0x7F31994Cu;
    ctx->downcount -= 2;
    // 7F31994C: cmpwi   r3, 0
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

label_7F319950:
    ctx->pc = 0x7F319950u;
    // 7F319950: bc    4, 0, 0x7F319958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319958;
        }
    }

label_7F319954:
    ctx->pc = 0x7F319954u;
    ctx->downcount -= 1;
    // 7F319954: b       0x7F3199A8
    {
            goto label_7F3199A8;
    }

label_7F319958:
    ctx->pc = 0x7F319958u;
    ctx->downcount -= 4;
    // 7F319958: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F31995C:
    ctx->pc = 0x7F31995Cu;
    // 7F31995C: lwz     r0, -3320(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F319960:
    ctx->pc = 0x7F319960u;
    // 7F319960: rlwinm. r0, r0, 0, 30, 30
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

label_7F319964:
    ctx->pc = 0x7F319964u;
    // 7F319964: bc    12, 2, 0x7F31997C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31997C;
        }
    }

label_7F319968:
    ctx->pc = 0x7F319968u;
    ctx->downcount -= 5;
    // 7F319968: lis     r8, 181
    ctx->gpr[8] = ((u32)(s32)(181) << 16);

label_7F31996C:
    ctx->pc = 0x7F31996Cu;
    // 7F31996C: lis     r7, 48
    ctx->gpr[7] = ((u32)(s32)(48) << 16);

label_7F319970:
    ctx->pc = 0x7F319970u;
    // 7F319970: addi    r0, r8, 23220
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(23220);

label_7F319974:
    ctx->pc = 0x7F319974u;
    // 7F319974: addi    r8, r7, -18512
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(-18512);

label_7F319978:
    ctx->pc = 0x7F319978u;
    // 7F319978: b       0x7F3199A8
    {
            goto label_7F3199A8;
    }

label_7F31997C:
    ctx->pc = 0x7F31997Cu;
    ctx->downcount -= 7;
    // 7F31997C: lis     r9, 181
    ctx->gpr[9] = ((u32)(s32)(181) << 16);

label_7F319980:
    ctx->pc = 0x7F319980u;
    // 7F319980: lis     r8, 48
    ctx->gpr[8] = ((u32)(s32)(48) << 16);

label_7F319984:
    ctx->pc = 0x7F319984u;
    // 7F319984: lis     r7, 173
    ctx->gpr[7] = ((u32)(s32)(173) << 16);

label_7F319988:
    ctx->pc = 0x7F319988u;
    // 7F319988: addi    r0, r9, 23219
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(23219);

label_7F31998C:
    ctx->pc = 0x7F31998Cu;
    // 7F31998C: addi    r8, r8, -18513
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-18513);

label_7F319990:
    ctx->pc = 0x7F319990u;
    // 7F319990: addi    r9, r7, -13151
    ctx->gpr[9] = ctx->gpr[7] + (u32)(s32)(-13151);

label_7F319994:
    ctx->pc = 0x7F319994u;
    // 7F319994: b       0x7F3199A8
    {
            goto label_7F3199A8;
    }

label_7F319998:
    ctx->pc = 0x7F319998u;
    ctx->downcount -= 4;
    // 7F319998: lis     r8, 249
    ctx->gpr[8] = ((u32)(s32)(249) << 16);

label_7F31999C:
    ctx->pc = 0x7F31999Cu;
    // 7F31999C: lis     r7, 56
    ctx->gpr[7] = ((u32)(s32)(56) << 16);

label_7F3199A0:
    ctx->pc = 0x7F3199A0u;
    // 7F3199A0: addi    r0, r8, 20156
    ctx->gpr[0] = ctx->gpr[8] + (u32)(s32)(20156);

label_7F3199A4:
    ctx->pc = 0x7F3199A4u;
    // 7F3199A4: addi    r8, r7, 11604
    ctx->gpr[8] = ctx->gpr[7] + (u32)(s32)(11604);

label_7F3199A8:
    ctx->pc = 0x7F3199A8u;
    ctx->downcount -= 2;
    // 7F3199A8: cmplwi  r4, 0x0000
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

label_7F3199AC:
    ctx->pc = 0x7F3199ACu;
    // 7F3199AC: bc    12, 2, 0x7F3199B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3199B4;
        }
    }

label_7F3199B0:
    ctx->pc = 0x7F3199B0u;
    ctx->downcount -= 1;
    // 7F3199B0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3199B4:
    ctx->pc = 0x7F3199B4u;
    ctx->downcount -= 2;
    // 7F3199B4: cmplwi  r5, 0x0000
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

label_7F3199B8:
    ctx->pc = 0x7F3199B8u;
    // 7F3199B8: bc    12, 2, 0x7F3199C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F3199C0;
        }
    }

label_7F3199BC:
    ctx->pc = 0x7F3199BCu;
    ctx->downcount -= 1;
    // 7F3199BC: stw     r8, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F3199C0:
    ctx->pc = 0x7F3199C0u;
    ctx->downcount -= 2;
    // 7F3199C0: cmplwi  r6, 0x0000
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

label_7F3199C4:
    ctx->pc = 0x7F3199C4u;
    // 7F3199C4: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F3199C8:
    ctx->pc = 0x7F3199C8u;
    ctx->downcount -= 9;
    // 7F3199C8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F3199CC:
    ctx->pc = 0x7F3199CCu;
    // 7F3199CC: stw     r9, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F3199D0:
    ctx->pc = 0x7F3199D0u;
    // 7F3199D0: addi    r5, r4, -3320
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3320);

label_7F3199D4:
    ctx->pc = 0x7F3199D4u;
    // 7F3199D4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F3199D8:
    ctx->pc = 0x7F3199D8u;
    // 7F3199D8: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F3199DC:
    ctx->pc = 0x7F3199DCu;
    // 7F3199DC: slw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F3199E0:
    ctx->pc = 0x7F3199E0u;
    // 7F3199E0: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F3199E4:
    ctx->pc = 0x7F3199E4u;
    // 7F3199E4: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F3199E8:
    ctx->pc = 0x7F3199E8u;
    // 7F3199E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F3199EC:
    ctx->pc = 0x7F3199ECu;
    ctx->downcount -= 5;
    // 7F3199EC: cmpwi   r3, 2
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

label_7F3199F0:
    ctx->pc = 0x7F3199F0u;
    // 7F3199F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F3199F4:
    ctx->pc = 0x7F3199F4u;
    // 7F3199F4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F3199F8:
    ctx->pc = 0x7F3199F8u;
    // 7F3199F8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F3199FC:
    ctx->pc = 0x7F3199FCu;
    // 7F3199FC: bc    12, 2, 0x7F319B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319B14;
        }
    }

label_7F319A00:
    ctx->pc = 0x7F319A00u;
    ctx->downcount -= 1;
    // 7F319A00: bc    4, 0, 0x7F319A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319A14;
        }
    }

label_7F319A04:
    ctx->pc = 0x7F319A04u;
    ctx->downcount -= 2;
    // 7F319A04: cmpwi   r3, 0
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

label_7F319A08:
    ctx->pc = 0x7F319A08u;
    // 7F319A08: bc    12, 2, 0x7F319A24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319A24;
        }
    }

label_7F319A0C:
    ctx->pc = 0x7F319A0Cu;
    ctx->downcount -= 1;
    // 7F319A0C: bc    4, 0, 0x7F319AC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319AC4;
        }
    }

label_7F319A10:
    ctx->pc = 0x7F319A10u;
    ctx->downcount -= 1;
    // 7F319A10: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319A14:
    ctx->pc = 0x7F319A14u;
    ctx->downcount -= 2;
    // 7F319A14: cmpwi   r3, 4
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

label_7F319A18:
    ctx->pc = 0x7F319A18u;
    // 7F319A18: bc    12, 2, 0x7F319C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319C04;
        }
    }

label_7F319A1C:
    ctx->pc = 0x7F319A1Cu;
    ctx->downcount -= 1;
    // 7F319A1C: bc    4, 0, 0x7F319C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319C90;
        }
    }

label_7F319A20:
    ctx->pc = 0x7F319A20u;
    ctx->downcount -= 1;
    // 7F319A20: b       0x7F319BB4
    {
            goto label_7F319BB4;
    }

label_7F319A24:
    ctx->pc = 0x7F319A24u;
    ctx->downcount -= 6;
    // 7F319A24: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F319A28:
    ctx->pc = 0x7F319A28u;
    // 7F319A28: addi    r9, r9, -3320
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3320);

label_7F319A2C:
    ctx->pc = 0x7F319A2Cu;
    // 7F319A2C: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F319A30:
    ctx->pc = 0x7F319A30u;
    // 7F319A30: andi.   r9, r9, 0x0028
    {
        ctx->gpr[9] = ctx->gpr[9] & 0x0028u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[9];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F319A34:
    ctx->pc = 0x7F319A34u;
    // 7F319A34: cmpwi   r9, 32
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319A38:
    ctx->pc = 0x7F319A38u;
    // 7F319A38: bc    12, 2, 0x7F319A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319A80;
        }
    }

label_7F319A3C:
    ctx->pc = 0x7F319A3Cu;
    ctx->downcount -= 1;
    // 7F319A3C: bc    4, 0, 0x7F319A58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319A58;
        }
    }

label_7F319A40:
    ctx->pc = 0x7F319A40u;
    ctx->downcount -= 2;
    // 7F319A40: cmpwi   r9, 8
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319A44:
    ctx->pc = 0x7F319A44u;
    // 7F319A44: bc    12, 2, 0x7F319A9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319A9C;
        }
    }

label_7F319A48:
    ctx->pc = 0x7F319A48u;
    ctx->downcount -= 1;
    // 7F319A48: bc    4, 0, 0x7F319C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319C90;
        }
    }

label_7F319A4C:
    ctx->pc = 0x7F319A4Cu;
    ctx->downcount -= 2;
    // 7F319A4C: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319A50:
    ctx->pc = 0x7F319A50u;
    // 7F319A50: bc    12, 2, 0x7F319A64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319A64;
        }
    }

label_7F319A54:
    ctx->pc = 0x7F319A54u;
    ctx->downcount -= 1;
    // 7F319A54: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319A58:
    ctx->pc = 0x7F319A58u;
    ctx->downcount -= 2;
    // 7F319A58: cmpwi   r9, 40
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(40);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319A5C:
    ctx->pc = 0x7F319A5Cu;
    // 7F319A5C: bc    12, 2, 0x7F319AB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319AB0;
        }
    }

label_7F319A60:
    ctx->pc = 0x7F319A60u;
    ctx->downcount -= 1;
    // 7F319A60: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319A64:
    ctx->pc = 0x7F319A64u;
    ctx->downcount -= 7;
    // 7F319A64: lis     r9, 233
    ctx->gpr[9] = ((u32)(s32)(233) << 16);

label_7F319A68:
    ctx->pc = 0x7F319A68u;
    // 7F319A68: lis     r7, 99
    ctx->gpr[7] = ((u32)(s32)(99) << 16);

label_7F319A6C:
    ctx->pc = 0x7F319A6Cu;
    // 7F319A6C: lis     r8, 32
    ctx->gpr[8] = ((u32)(s32)(32) << 16);

label_7F319A70:
    ctx->pc = 0x7F319A70u;
    // 7F319A70: addi    r0, r9, -1563
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-1563);

label_7F319A74:
    ctx->pc = 0x7F319A74u;
    // 7F319A74: addi    r7, r7, 22241
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(22241);

label_7F319A78:
    ctx->pc = 0x7F319A78u;
    // 7F319A78: addi    r8, r8, -8301
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-8301);

label_7F319A7C:
    ctx->pc = 0x7F319A7Cu;
    // 7F319A7C: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319A80:
    ctx->pc = 0x7F319A80u;
    ctx->downcount -= 7;
    // 7F319A80: lis     r9, 233
    ctx->gpr[9] = ((u32)(s32)(233) << 16);

label_7F319A84:
    ctx->pc = 0x7F319A84u;
    // 7F319A84: lis     r7, 99
    ctx->gpr[7] = ((u32)(s32)(99) << 16);

label_7F319A88:
    ctx->pc = 0x7F319A88u;
    // 7F319A88: lis     r8, 32
    ctx->gpr[8] = ((u32)(s32)(32) << 16);

label_7F319A8C:
    ctx->pc = 0x7F319A8Cu;
    // 7F319A8C: addi    r0, r9, -1562
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-1562);

label_7F319A90:
    ctx->pc = 0x7F319A90u;
    // 7F319A90: addi    r7, r7, 22242
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(22242);

label_7F319A94:
    ctx->pc = 0x7F319A94u;
    // 7F319A94: addi    r8, r8, -8300
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-8300);

label_7F319A98:
    ctx->pc = 0x7F319A98u;
    // 7F319A98: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319A9C:
    ctx->pc = 0x7F319A9Cu;
    ctx->downcount -= 5;
    // 7F319A9C: lis     r9, 233
    ctx->gpr[9] = ((u32)(s32)(233) << 16);

label_7F319AA0:
    ctx->pc = 0x7F319AA0u;
    // 7F319AA0: lis     r7, 99
    ctx->gpr[7] = ((u32)(s32)(99) << 16);

label_7F319AA4:
    ctx->pc = 0x7F319AA4u;
    // 7F319AA4: addi    r0, r9, -538
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-538);

label_7F319AA8:
    ctx->pc = 0x7F319AA8u;
    // 7F319AA8: addi    r7, r7, 23266
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(23266);

label_7F319AAC:
    ctx->pc = 0x7F319AACu;
    // 7F319AAC: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319AB0:
    ctx->pc = 0x7F319AB0u;
    ctx->downcount -= 5;
    // 7F319AB0: lis     r9, 233
    ctx->gpr[9] = ((u32)(s32)(233) << 16);

label_7F319AB4:
    ctx->pc = 0x7F319AB4u;
    // 7F319AB4: lis     r7, 99
    ctx->gpr[7] = ((u32)(s32)(99) << 16);

label_7F319AB8:
    ctx->pc = 0x7F319AB8u;
    // 7F319AB8: addi    r0, r9, -538
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-538);

label_7F319ABC:
    ctx->pc = 0x7F319ABCu;
    // 7F319ABC: addi    r7, r7, 23266
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(23266);

label_7F319AC0:
    ctx->pc = 0x7F319AC0u;
    // 7F319AC0: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319AC4:
    ctx->pc = 0x7F319AC4u;
    ctx->downcount -= 6;
    // 7F319AC4: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F319AC8:
    ctx->pc = 0x7F319AC8u;
    // 7F319AC8: addi    r9, r9, -3320
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3320);

label_7F319ACC:
    ctx->pc = 0x7F319ACCu;
    // 7F319ACC: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F319AD0:
    ctx->pc = 0x7F319AD0u;
    // 7F319AD0: rlwinm r9, r9, 0, 26, 26
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x00000020u;
    }

label_7F319AD4:
    ctx->pc = 0x7F319AD4u;
    // 7F319AD4: cmpwi   r9, 32
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319AD8:
    ctx->pc = 0x7F319AD8u;
    // 7F319AD8: bc    12, 2, 0x7F319B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319B00;
        }
    }

label_7F319ADC:
    ctx->pc = 0x7F319ADCu;
    ctx->downcount -= 1;
    // 7F319ADC: bc    4, 0, 0x7F319C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319C90;
        }
    }

label_7F319AE0:
    ctx->pc = 0x7F319AE0u;
    ctx->downcount -= 2;
    // 7F319AE0: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319AE4:
    ctx->pc = 0x7F319AE4u;
    // 7F319AE4: bc    12, 2, 0x7F319AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319AEC;
        }
    }

label_7F319AE8:
    ctx->pc = 0x7F319AE8u;
    ctx->downcount -= 1;
    // 7F319AE8: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319AEC:
    ctx->pc = 0x7F319AECu;
    ctx->downcount -= 5;
    // 7F319AEC: lis     r9, 198
    ctx->gpr[9] = ((u32)(s32)(198) << 16);

label_7F319AF0:
    ctx->pc = 0x7F319AF0u;
    // 7F319AF0: lis     r7, 67
    ctx->gpr[7] = ((u32)(s32)(67) << 16);

label_7F319AF4:
    ctx->pc = 0x7F319AF4u;
    // 7F319AF4: addi    r0, r9, -21310
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-21310);

label_7F319AF8:
    ctx->pc = 0x7F319AF8u;
    // 7F319AF8: addi    r7, r7, 27121
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(27121);

label_7F319AFC:
    ctx->pc = 0x7F319AFCu;
    // 7F319AFC: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319B00:
    ctx->pc = 0x7F319B00u;
    ctx->downcount -= 5;
    // 7F319B00: lis     r9, 198
    ctx->gpr[9] = ((u32)(s32)(198) << 16);

label_7F319B04:
    ctx->pc = 0x7F319B04u;
    // 7F319B04: lis     r7, 67
    ctx->gpr[7] = ((u32)(s32)(67) << 16);

label_7F319B08:
    ctx->pc = 0x7F319B08u;
    // 7F319B08: addi    r0, r9, -21309
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-21309);

label_7F319B0C:
    ctx->pc = 0x7F319B0Cu;
    // 7F319B0C: addi    r7, r7, 27122
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(27122);

label_7F319B10:
    ctx->pc = 0x7F319B10u;
    // 7F319B10: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319B14:
    ctx->pc = 0x7F319B14u;
    ctx->downcount -= 6;
    // 7F319B14: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F319B18:
    ctx->pc = 0x7F319B18u;
    // 7F319B18: addi    r9, r9, -3320
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3320);

label_7F319B1C:
    ctx->pc = 0x7F319B1Cu;
    // 7F319B1C: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F319B20:
    ctx->pc = 0x7F319B20u;
    // 7F319B20: andi.   r9, r9, 0x0028
    {
        ctx->gpr[9] = ctx->gpr[9] & 0x0028u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[9];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F319B24:
    ctx->pc = 0x7F319B24u;
    // 7F319B24: cmpwi   r9, 32
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319B28:
    ctx->pc = 0x7F319B28u;
    // 7F319B28: bc    12, 2, 0x7F319B70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319B70;
        }
    }

label_7F319B2C:
    ctx->pc = 0x7F319B2Cu;
    ctx->downcount -= 1;
    // 7F319B2C: bc    4, 0, 0x7F319B48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319B48;
        }
    }

label_7F319B30:
    ctx->pc = 0x7F319B30u;
    ctx->downcount -= 2;
    // 7F319B30: cmpwi   r9, 8
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319B34:
    ctx->pc = 0x7F319B34u;
    // 7F319B34: bc    12, 2, 0x7F319B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319B84;
        }
    }

label_7F319B38:
    ctx->pc = 0x7F319B38u;
    ctx->downcount -= 1;
    // 7F319B38: bc    4, 0, 0x7F319C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319C90;
        }
    }

label_7F319B3C:
    ctx->pc = 0x7F319B3Cu;
    ctx->downcount -= 2;
    // 7F319B3C: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319B40:
    ctx->pc = 0x7F319B40u;
    // 7F319B40: bc    12, 2, 0x7F319B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319B54;
        }
    }

label_7F319B44:
    ctx->pc = 0x7F319B44u;
    ctx->downcount -= 1;
    // 7F319B44: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319B48:
    ctx->pc = 0x7F319B48u;
    ctx->downcount -= 2;
    // 7F319B48: cmpwi   r9, 40
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(40);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319B4C:
    ctx->pc = 0x7F319B4Cu;
    // 7F319B4C: bc    12, 2, 0x7F319BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319BA0;
        }
    }

label_7F319B50:
    ctx->pc = 0x7F319B50u;
    ctx->downcount -= 1;
    // 7F319B50: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319B54:
    ctx->pc = 0x7F319B54u;
    ctx->downcount -= 7;
    // 7F319B54: lis     r9, 61
    ctx->gpr[9] = ((u32)(s32)(61) << 16);

label_7F319B58:
    ctx->pc = 0x7F319B58u;
    // 7F319B58: lis     r7, 25
    ctx->gpr[7] = ((u32)(s32)(25) << 16);

label_7F319B5C:
    ctx->pc = 0x7F319B5Cu;
    // 7F319B5C: lis     r8, 160
    ctx->gpr[8] = ((u32)(s32)(160) << 16);

label_7F319B60:
    ctx->pc = 0x7F319B60u;
    // 7F319B60: addi    r0, r9, 29332
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(29332);

label_7F319B64:
    ctx->pc = 0x7F319B64u;
    // 7F319B64: addi    r7, r7, 17788
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(17788);

label_7F319B68:
    ctx->pc = 0x7F319B68u;
    // 7F319B68: addi    r8, r8, -18298
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-18298);

label_7F319B6C:
    ctx->pc = 0x7F319B6Cu;
    // 7F319B6C: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319B70:
    ctx->pc = 0x7F319B70u;
    ctx->downcount -= 5;
    // 7F319B70: lis     r9, 61
    ctx->gpr[9] = ((u32)(s32)(61) << 16);

label_7F319B74:
    ctx->pc = 0x7F319B74u;
    // 7F319B74: lis     r7, 25
    ctx->gpr[7] = ((u32)(s32)(25) << 16);

label_7F319B78:
    ctx->pc = 0x7F319B78u;
    // 7F319B78: addi    r0, r9, 29333
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(29333);

label_7F319B7C:
    ctx->pc = 0x7F319B7Cu;
    // 7F319B7C: addi    r7, r7, 17789
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(17789);

label_7F319B80:
    ctx->pc = 0x7F319B80u;
    // 7F319B80: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319B84:
    ctx->pc = 0x7F319B84u;
    ctx->downcount -= 7;
    // 7F319B84: lis     r9, 61
    ctx->gpr[9] = ((u32)(s32)(61) << 16);

label_7F319B88:
    ctx->pc = 0x7F319B88u;
    // 7F319B88: lis     r7, 25
    ctx->gpr[7] = ((u32)(s32)(25) << 16);

label_7F319B8C:
    ctx->pc = 0x7F319B8Cu;
    // 7F319B8C: lis     r8, 160
    ctx->gpr[8] = ((u32)(s32)(160) << 16);

label_7F319B90:
    ctx->pc = 0x7F319B90u;
    // 7F319B90: addi    r0, r9, 30356
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(30356);

label_7F319B94:
    ctx->pc = 0x7F319B94u;
    // 7F319B94: addi    r7, r7, 18812
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(18812);

label_7F319B98:
    ctx->pc = 0x7F319B98u;
    // 7F319B98: addi    r8, r8, -17274
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-17274);

label_7F319B9C:
    ctx->pc = 0x7F319B9Cu;
    // 7F319B9C: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319BA0:
    ctx->pc = 0x7F319BA0u;
    ctx->downcount -= 5;
    // 7F319BA0: lis     r9, 61
    ctx->gpr[9] = ((u32)(s32)(61) << 16);

label_7F319BA4:
    ctx->pc = 0x7F319BA4u;
    // 7F319BA4: lis     r7, 25
    ctx->gpr[7] = ((u32)(s32)(25) << 16);

label_7F319BA8:
    ctx->pc = 0x7F319BA8u;
    // 7F319BA8: addi    r0, r9, 30357
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(30357);

label_7F319BAC:
    ctx->pc = 0x7F319BACu;
    // 7F319BAC: addi    r7, r7, 18813
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(18813);

label_7F319BB0:
    ctx->pc = 0x7F319BB0u;
    // 7F319BB0: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319BB4:
    ctx->pc = 0x7F319BB4u;
    ctx->downcount -= 6;
    // 7F319BB4: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F319BB8:
    ctx->pc = 0x7F319BB8u;
    // 7F319BB8: addi    r9, r9, -3320
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3320);

label_7F319BBC:
    ctx->pc = 0x7F319BBCu;
    // 7F319BBC: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F319BC0:
    ctx->pc = 0x7F319BC0u;
    // 7F319BC0: rlwinm r9, r9, 0, 28, 28
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[9], 0u) & 0x00000008u;
    }

label_7F319BC4:
    ctx->pc = 0x7F319BC4u;
    // 7F319BC4: cmpwi   r9, 8
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319BC8:
    ctx->pc = 0x7F319BC8u;
    // 7F319BC8: bc    12, 2, 0x7F319BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319BF0;
        }
    }

label_7F319BCC:
    ctx->pc = 0x7F319BCCu;
    ctx->downcount -= 1;
    // 7F319BCC: bc    4, 0, 0x7F319C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319C90;
        }
    }

label_7F319BD0:
    ctx->pc = 0x7F319BD0u;
    ctx->downcount -= 2;
    // 7F319BD0: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319BD4:
    ctx->pc = 0x7F319BD4u;
    // 7F319BD4: bc    12, 2, 0x7F319BDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319BDC;
        }
    }

label_7F319BD8:
    ctx->pc = 0x7F319BD8u;
    ctx->downcount -= 1;
    // 7F319BD8: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319BDC:
    ctx->pc = 0x7F319BDCu;
    ctx->downcount -= 5;
    // 7F319BDC: lis     r9, 243
    ctx->gpr[9] = ((u32)(s32)(243) << 16);

label_7F319BE0:
    ctx->pc = 0x7F319BE0u;
    // 7F319BE0: lis     r7, 62
    ctx->gpr[7] = ((u32)(s32)(62) << 16);

label_7F319BE4:
    ctx->pc = 0x7F319BE4u;
    // 7F319BE4: addi    r0, r9, -19131
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-19131);

label_7F319BE8:
    ctx->pc = 0x7F319BE8u;
    // 7F319BE8: addi    r7, r7, 21685
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(21685);

label_7F319BEC:
    ctx->pc = 0x7F319BECu;
    // 7F319BEC: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319BF0:
    ctx->pc = 0x7F319BF0u;
    ctx->downcount -= 5;
    // 7F319BF0: lis     r9, 243
    ctx->gpr[9] = ((u32)(s32)(243) << 16);

label_7F319BF4:
    ctx->pc = 0x7F319BF4u;
    // 7F319BF4: lis     r7, 62
    ctx->gpr[7] = ((u32)(s32)(62) << 16);

label_7F319BF8:
    ctx->pc = 0x7F319BF8u;
    // 7F319BF8: addi    r0, r9, -18107
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-18107);

label_7F319BFC:
    ctx->pc = 0x7F319BFCu;
    // 7F319BFC: addi    r7, r7, 22709
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(22709);

label_7F319C00:
    ctx->pc = 0x7F319C00u;
    // 7F319C00: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319C04:
    ctx->pc = 0x7F319C04u;
    ctx->downcount -= 6;
    // 7F319C04: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F319C08:
    ctx->pc = 0x7F319C08u;
    // 7F319C08: addi    r9, r9, -3320
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3320);

label_7F319C0C:
    ctx->pc = 0x7F319C0Cu;
    // 7F319C0C: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F319C10:
    ctx->pc = 0x7F319C10u;
    // 7F319C10: andi.   r9, r9, 0x0028
    {
        ctx->gpr[9] = ctx->gpr[9] & 0x0028u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[9];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F319C14:
    ctx->pc = 0x7F319C14u;
    // 7F319C14: cmpwi   r9, 32
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(32);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319C18:
    ctx->pc = 0x7F319C18u;
    // 7F319C18: bc    12, 2, 0x7F319C58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319C58;
        }
    }

label_7F319C1C:
    ctx->pc = 0x7F319C1Cu;
    ctx->downcount -= 1;
    // 7F319C1C: bc    4, 0, 0x7F319C38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319C38;
        }
    }

label_7F319C20:
    ctx->pc = 0x7F319C20u;
    ctx->downcount -= 2;
    // 7F319C20: cmpwi   r9, 8
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319C24:
    ctx->pc = 0x7F319C24u;
    // 7F319C24: bc    12, 2, 0x7F319C6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319C6C;
        }
    }

label_7F319C28:
    ctx->pc = 0x7F319C28u;
    ctx->downcount -= 1;
    // 7F319C28: bc    4, 0, 0x7F319C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319C90;
        }
    }

label_7F319C2C:
    ctx->pc = 0x7F319C2Cu;
    ctx->downcount -= 2;
    // 7F319C2C: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319C30:
    ctx->pc = 0x7F319C30u;
    // 7F319C30: bc    12, 2, 0x7F319C44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319C44;
        }
    }

label_7F319C34:
    ctx->pc = 0x7F319C34u;
    ctx->downcount -= 1;
    // 7F319C34: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319C38:
    ctx->pc = 0x7F319C38u;
    ctx->downcount -= 2;
    // 7F319C38: cmpwi   r9, 40
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(40);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319C3C:
    ctx->pc = 0x7F319C3Cu;
    // 7F319C3C: bc    12, 2, 0x7F319C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319C80;
        }
    }

label_7F319C40:
    ctx->pc = 0x7F319C40u;
    ctx->downcount -= 1;
    // 7F319C40: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319C44:
    ctx->pc = 0x7F319C44u;
    ctx->downcount -= 5;
    // 7F319C44: lis     r9, 112
    ctx->gpr[9] = ((u32)(s32)(112) << 16);

label_7F319C48:
    ctx->pc = 0x7F319C48u;
    // 7F319C48: lis     r7, 187
    ctx->gpr[7] = ((u32)(s32)(187) << 16);

label_7F319C4C:
    ctx->pc = 0x7F319C4Cu;
    // 7F319C4C: addi    r0, r9, -15561
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-15561);

label_7F319C50:
    ctx->pc = 0x7F319C50u;
    // 7F319C50: addi    r7, r7, 25254
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(25254);

label_7F319C54:
    ctx->pc = 0x7F319C54u;
    // 7F319C54: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319C58:
    ctx->pc = 0x7F319C58u;
    ctx->downcount -= 5;
    // 7F319C58: lis     r9, 112
    ctx->gpr[9] = ((u32)(s32)(112) << 16);

label_7F319C5C:
    ctx->pc = 0x7F319C5Cu;
    // 7F319C5C: lis     r7, 187
    ctx->gpr[7] = ((u32)(s32)(187) << 16);

label_7F319C60:
    ctx->pc = 0x7F319C60u;
    // 7F319C60: addi    r0, r9, -15560
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-15560);

label_7F319C64:
    ctx->pc = 0x7F319C64u;
    // 7F319C64: addi    r7, r7, 25255
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(25255);

label_7F319C68:
    ctx->pc = 0x7F319C68u;
    // 7F319C68: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319C6C:
    ctx->pc = 0x7F319C6Cu;
    ctx->downcount -= 5;
    // 7F319C6C: lis     r9, 112
    ctx->gpr[9] = ((u32)(s32)(112) << 16);

label_7F319C70:
    ctx->pc = 0x7F319C70u;
    // 7F319C70: lis     r7, 187
    ctx->gpr[7] = ((u32)(s32)(187) << 16);

label_7F319C74:
    ctx->pc = 0x7F319C74u;
    // 7F319C74: addi    r0, r9, -14537
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-14537);

label_7F319C78:
    ctx->pc = 0x7F319C78u;
    // 7F319C78: addi    r7, r7, 26278
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(26278);

label_7F319C7C:
    ctx->pc = 0x7F319C7Cu;
    // 7F319C7C: b       0x7F319C90
    {
            goto label_7F319C90;
    }

label_7F319C80:
    ctx->pc = 0x7F319C80u;
    ctx->downcount -= 4;
    // 7F319C80: lis     r9, 112
    ctx->gpr[9] = ((u32)(s32)(112) << 16);

label_7F319C84:
    ctx->pc = 0x7F319C84u;
    // 7F319C84: lis     r7, 187
    ctx->gpr[7] = ((u32)(s32)(187) << 16);

label_7F319C88:
    ctx->pc = 0x7F319C88u;
    // 7F319C88: addi    r0, r9, -14536
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-14536);

label_7F319C8C:
    ctx->pc = 0x7F319C8Cu;
    // 7F319C8C: addi    r7, r7, 26279
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(26279);

label_7F319C90:
    ctx->pc = 0x7F319C90u;
    ctx->downcount -= 2;
    // 7F319C90: cmplwi  r4, 0x0000
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

label_7F319C94:
    ctx->pc = 0x7F319C94u;
    // 7F319C94: bc    12, 2, 0x7F319C9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319C9C;
        }
    }

label_7F319C98:
    ctx->pc = 0x7F319C98u;
    ctx->downcount -= 1;
    // 7F319C98: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319C9C:
    ctx->pc = 0x7F319C9Cu;
    ctx->downcount -= 2;
    // 7F319C9C: cmplwi  r5, 0x0000
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

label_7F319CA0:
    ctx->pc = 0x7F319CA0u;
    // 7F319CA0: bc    12, 2, 0x7F319CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319CA8;
        }
    }

label_7F319CA4:
    ctx->pc = 0x7F319CA4u;
    ctx->downcount -= 1;
    // 7F319CA4: stw     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F319CA8:
    ctx->pc = 0x7F319CA8u;
    ctx->downcount -= 2;
    // 7F319CA8: cmplwi  r6, 0x0000
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

label_7F319CAC:
    ctx->pc = 0x7F319CACu;
    // 7F319CAC: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319CB0:
    ctx->pc = 0x7F319CB0u;
    ctx->downcount -= 9;
    // 7F319CB0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F319CB4:
    ctx->pc = 0x7F319CB4u;
    // 7F319CB4: stw     r8, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F319CB8:
    ctx->pc = 0x7F319CB8u;
    // 7F319CB8: addi    r5, r4, -3320
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3320);

label_7F319CBC:
    ctx->pc = 0x7F319CBCu;
    // 7F319CBC: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F319CC0:
    ctx->pc = 0x7F319CC0u;
    // 7F319CC0: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F319CC4:
    ctx->pc = 0x7F319CC4u;
    // 7F319CC4: slw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F319CC8:
    ctx->pc = 0x7F319CC8u;
    // 7F319CC8: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F319CCC:
    ctx->pc = 0x7F319CCCu;
    // 7F319CCC: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F319CD0:
    ctx->pc = 0x7F319CD0u;
    // 7F319CD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F319CD4:
    ctx->pc = 0x7F319CD4u;
    ctx->downcount -= 5;
    // 7F319CD4: cmplwi  r3, 0x0008
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0008u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319CD8:
    ctx->pc = 0x7F319CD8u;
    // 7F319CD8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F319CDC:
    ctx->pc = 0x7F319CDCu;
    // 7F319CDC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F319CE0:
    ctx->pc = 0x7F319CE0u;
    // 7F319CE0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F319CE4:
    ctx->pc = 0x7F319CE4u;
    // 7F319CE4: bc    12, 1, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F319CE8:
    ctx->pc = 0x7F319CE8u;
    ctx->downcount -= 7;
    // 7F319CE8: lis     r10, 32585
    ctx->gpr[10] = ((u32)(s32)(32585) << 16);

label_7F319CEC:
    ctx->pc = 0x7F319CECu;
    // 7F319CEC: rlwinm r9, r3, 2, 0, 29
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F319CF0:
    ctx->pc = 0x7F319CF0u;
    // 7F319CF0: addi    r10, r10, -25528
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-25528);

label_7F319CF4:
    ctx->pc = 0x7F319CF4u;
    // 7F319CF4: lwzx    r9, r10, r9
    {
        u32 ea = ctx->gpr[10] + ctx->gpr[9];
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F319CF8:
    ctx->pc = 0x7F319CF8u;
    // 7F319CF8: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_7F319CFC:
    ctx->pc = 0x7F319CFCu;
    // 7F319CFC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F319D00:
    ctx->pc = 0x7F319D00u;
    ctx->downcount -= 7;
    // 7F319D00: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F319D04:
    ctx->pc = 0x7F319D04u;
    // 7F319D04: lis     r10, 1
    ctx->gpr[10] = ((u32)(s32)(1) << 16);

label_7F319D08:
    ctx->pc = 0x7F319D08u;
    // 7F319D08: lwz     r11, -3320(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-3320);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F319D0C:
    ctx->pc = 0x7F319D0Cu;
    // 7F319D0C: addi    r9, r10, -32768
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-32768);

label_7F319D10:
    ctx->pc = 0x7F319D10u;
    // 7F319D10: andi.   r11, r11, 0xA800
    {
        ctx->gpr[11] = ctx->gpr[11] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F319D14:
    ctx->pc = 0x7F319D14u;
    // 7F319D14: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319D18:
    ctx->pc = 0x7F319D18u;
    // 7F319D18: bc    12, 2, 0x7F319D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319D94;
        }
    }

label_7F319D1C:
    ctx->pc = 0x7F319D1Cu;
    ctx->downcount -= 1;
    // 7F319D1C: bc    4, 0, 0x7F319D50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319D50;
        }
    }

label_7F319D20:
    ctx->pc = 0x7F319D20u;
    ctx->downcount -= 2;
    // 7F319D20: cmpwi   r11, 8192
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319D24:
    ctx->pc = 0x7F319D24u;
    // 7F319D24: bc    12, 2, 0x7F319DA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319DA8;
        }
    }

label_7F319D28:
    ctx->pc = 0x7F319D28u;
    ctx->downcount -= 1;
    // 7F319D28: bc    4, 0, 0x7F319D44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319D44;
        }
    }

label_7F319D2C:
    ctx->pc = 0x7F319D2Cu;
    ctx->downcount -= 2;
    // 7F319D2C: cmpwi   r11, 2048
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319D30:
    ctx->pc = 0x7F319D30u;
    // 7F319D30: bc    12, 2, 0x7F319DD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319DD0;
        }
    }

label_7F319D34:
    ctx->pc = 0x7F319D34u;
    ctx->downcount -= 1;
    // 7F319D34: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F319D38:
    ctx->pc = 0x7F319D38u;
    ctx->downcount -= 2;
    // 7F319D38: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319D3C:
    ctx->pc = 0x7F319D3Cu;
    // 7F319D3C: bc    12, 2, 0x7F319D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319D80;
        }
    }

label_7F319D40:
    ctx->pc = 0x7F319D40u;
    ctx->downcount -= 1;
    // 7F319D40: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319D44:
    ctx->pc = 0x7F319D44u;
    ctx->downcount -= 2;
    // 7F319D44: cmpwi   r11, 10240
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319D48:
    ctx->pc = 0x7F319D48u;
    // 7F319D48: bc    12, 2, 0x7F319DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319DF8;
        }
    }

label_7F319D4C:
    ctx->pc = 0x7F319D4Cu;
    ctx->downcount -= 1;
    // 7F319D4C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319D50:
    ctx->pc = 0x7F319D50u;
    ctx->downcount -= 3;
    // 7F319D50: addi    r9, r10, -24576
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-24576);

label_7F319D54:
    ctx->pc = 0x7F319D54u;
    // 7F319D54: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319D58:
    ctx->pc = 0x7F319D58u;
    // 7F319D58: bc    12, 2, 0x7F319DBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319DBC;
        }
    }

label_7F319D5C:
    ctx->pc = 0x7F319D5Cu;
    ctx->downcount -= 1;
    // 7F319D5C: bc    4, 0, 0x7F319D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319D70;
        }
    }

label_7F319D60:
    ctx->pc = 0x7F319D60u;
    ctx->downcount -= 3;
    // 7F319D60: addi    r9, r10, -30720
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-30720);

label_7F319D64:
    ctx->pc = 0x7F319D64u;
    // 7F319D64: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319D68:
    ctx->pc = 0x7F319D68u;
    // 7F319D68: bc    12, 2, 0x7F319DE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319DE4;
        }
    }

label_7F319D6C:
    ctx->pc = 0x7F319D6Cu;
    ctx->downcount -= 1;
    // 7F319D6C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319D70:
    ctx->pc = 0x7F319D70u;
    ctx->downcount -= 3;
    // 7F319D70: addi    r9, r10, -22528
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-22528);

label_7F319D74:
    ctx->pc = 0x7F319D74u;
    // 7F319D74: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319D78:
    ctx->pc = 0x7F319D78u;
    // 7F319D78: bc    12, 2, 0x7F319E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319E0C;
        }
    }

label_7F319D7C:
    ctx->pc = 0x7F319D7Cu;
    ctx->downcount -= 1;
    // 7F319D7C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319D80:
    ctx->pc = 0x7F319D80u;
    ctx->downcount -= 5;
    // 7F319D80: lis     r9, 139
    ctx->gpr[9] = ((u32)(s32)(139) << 16);

label_7F319D84:
    ctx->pc = 0x7F319D84u;
    // 7F319D84: lis     r7, 9
    ctx->gpr[7] = ((u32)(s32)(9) << 16);

label_7F319D88:
    ctx->pc = 0x7F319D88u;
    // 7F319D88: addi    r0, r9, -11098
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-11098);

label_7F319D8C:
    ctx->pc = 0x7F319D8Cu;
    // 7F319D8C: addi    r7, r7, -28203
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-28203);

label_7F319D90:
    ctx->pc = 0x7F319D90u;
    // 7F319D90: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319D94:
    ctx->pc = 0x7F319D94u;
    ctx->downcount -= 5;
    // 7F319D94: lis     r9, 139
    ctx->gpr[9] = ((u32)(s32)(139) << 16);

label_7F319D98:
    ctx->pc = 0x7F319D98u;
    // 7F319D98: lis     r7, 9
    ctx->gpr[7] = ((u32)(s32)(9) << 16);

label_7F319D9C:
    ctx->pc = 0x7F319D9Cu;
    // 7F319D9C: addi    r0, r9, -11097
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-11097);

label_7F319DA0:
    ctx->pc = 0x7F319DA0u;
    // 7F319DA0: addi    r7, r7, -28202
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-28202);

label_7F319DA4:
    ctx->pc = 0x7F319DA4u;
    // 7F319DA4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319DA8:
    ctx->pc = 0x7F319DA8u;
    ctx->downcount -= 5;
    // 7F319DA8: lis     r9, 139
    ctx->gpr[9] = ((u32)(s32)(139) << 16);

label_7F319DAC:
    ctx->pc = 0x7F319DACu;
    // 7F319DAC: lis     r7, 9
    ctx->gpr[7] = ((u32)(s32)(9) << 16);

label_7F319DB0:
    ctx->pc = 0x7F319DB0u;
    // 7F319DB0: addi    r0, r9, -11066
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-11066);

label_7F319DB4:
    ctx->pc = 0x7F319DB4u;
    // 7F319DB4: addi    r7, r7, -28171
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-28171);

label_7F319DB8:
    ctx->pc = 0x7F319DB8u;
    // 7F319DB8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319DBC:
    ctx->pc = 0x7F319DBCu;
    ctx->downcount -= 5;
    // 7F319DBC: lis     r9, 139
    ctx->gpr[9] = ((u32)(s32)(139) << 16);

label_7F319DC0:
    ctx->pc = 0x7F319DC0u;
    // 7F319DC0: lis     r7, 9
    ctx->gpr[7] = ((u32)(s32)(9) << 16);

label_7F319DC4:
    ctx->pc = 0x7F319DC4u;
    // 7F319DC4: addi    r0, r9, -11065
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-11065);

label_7F319DC8:
    ctx->pc = 0x7F319DC8u;
    // 7F319DC8: addi    r7, r7, -28170
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-28170);

label_7F319DCC:
    ctx->pc = 0x7F319DCCu;
    // 7F319DCC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319DD0:
    ctx->pc = 0x7F319DD0u;
    ctx->downcount -= 5;
    // 7F319DD0: lis     r9, 139
    ctx->gpr[9] = ((u32)(s32)(139) << 16);

label_7F319DD4:
    ctx->pc = 0x7F319DD4u;
    // 7F319DD4: lis     r7, 9
    ctx->gpr[7] = ((u32)(s32)(9) << 16);

label_7F319DD8:
    ctx->pc = 0x7F319DD8u;
    // 7F319DD8: addi    r0, r9, -10074
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-10074);

label_7F319DDC:
    ctx->pc = 0x7F319DDCu;
    // 7F319DDC: addi    r7, r7, -27179
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-27179);

label_7F319DE0:
    ctx->pc = 0x7F319DE0u;
    // 7F319DE0: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319DE4:
    ctx->pc = 0x7F319DE4u;
    ctx->downcount -= 5;
    // 7F319DE4: lis     r9, 139
    ctx->gpr[9] = ((u32)(s32)(139) << 16);

label_7F319DE8:
    ctx->pc = 0x7F319DE8u;
    // 7F319DE8: lis     r7, 9
    ctx->gpr[7] = ((u32)(s32)(9) << 16);

label_7F319DEC:
    ctx->pc = 0x7F319DECu;
    // 7F319DEC: addi    r0, r9, -10073
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-10073);

label_7F319DF0:
    ctx->pc = 0x7F319DF0u;
    // 7F319DF0: addi    r7, r7, -27178
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-27178);

label_7F319DF4:
    ctx->pc = 0x7F319DF4u;
    // 7F319DF4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319DF8:
    ctx->pc = 0x7F319DF8u;
    ctx->downcount -= 5;
    // 7F319DF8: lis     r9, 139
    ctx->gpr[9] = ((u32)(s32)(139) << 16);

label_7F319DFC:
    ctx->pc = 0x7F319DFCu;
    // 7F319DFC: lis     r7, 9
    ctx->gpr[7] = ((u32)(s32)(9) << 16);

label_7F319E00:
    ctx->pc = 0x7F319E00u;
    // 7F319E00: addi    r0, r9, -10042
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-10042);

label_7F319E04:
    ctx->pc = 0x7F319E04u;
    // 7F319E04: addi    r7, r7, -27147
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-27147);

label_7F319E08:
    ctx->pc = 0x7F319E08u;
    // 7F319E08: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319E0C:
    ctx->pc = 0x7F319E0Cu;
    ctx->downcount -= 5;
    // 7F319E0C: lis     r9, 139
    ctx->gpr[9] = ((u32)(s32)(139) << 16);

label_7F319E10:
    ctx->pc = 0x7F319E10u;
    // 7F319E10: lis     r7, 9
    ctx->gpr[7] = ((u32)(s32)(9) << 16);

label_7F319E14:
    ctx->pc = 0x7F319E14u;
    // 7F319E14: addi    r0, r9, -10041
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-10041);

label_7F319E18:
    ctx->pc = 0x7F319E18u;
    // 7F319E18: addi    r7, r7, -27146
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-27146);

label_7F319E1C:
    ctx->pc = 0x7F319E1Cu;
    // 7F319E1C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319E20:
    ctx->pc = 0x7F319E20u;
    ctx->downcount -= 7;
    // 7F319E20: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F319E24:
    ctx->pc = 0x7F319E24u;
    // 7F319E24: lis     r10, 1
    ctx->gpr[10] = ((u32)(s32)(1) << 16);

label_7F319E28:
    ctx->pc = 0x7F319E28u;
    // 7F319E28: lwz     r11, -3320(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-3320);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F319E2C:
    ctx->pc = 0x7F319E2Cu;
    // 7F319E2C: addi    r9, r10, -32768
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-32768);

label_7F319E30:
    ctx->pc = 0x7F319E30u;
    // 7F319E30: andi.   r11, r11, 0xA800
    {
        ctx->gpr[11] = ctx->gpr[11] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F319E34:
    ctx->pc = 0x7F319E34u;
    // 7F319E34: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319E38:
    ctx->pc = 0x7F319E38u;
    // 7F319E38: bc    12, 2, 0x7F319EB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319EB4;
        }
    }

label_7F319E3C:
    ctx->pc = 0x7F319E3Cu;
    ctx->downcount -= 1;
    // 7F319E3C: bc    4, 0, 0x7F319E70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319E70;
        }
    }

label_7F319E40:
    ctx->pc = 0x7F319E40u;
    ctx->downcount -= 2;
    // 7F319E40: cmpwi   r11, 8192
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319E44:
    ctx->pc = 0x7F319E44u;
    // 7F319E44: bc    12, 2, 0x7F319EC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319EC8;
        }
    }

label_7F319E48:
    ctx->pc = 0x7F319E48u;
    ctx->downcount -= 1;
    // 7F319E48: bc    4, 0, 0x7F319E64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319E64;
        }
    }

label_7F319E4C:
    ctx->pc = 0x7F319E4Cu;
    ctx->downcount -= 2;
    // 7F319E4C: cmpwi   r11, 2048
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319E50:
    ctx->pc = 0x7F319E50u;
    // 7F319E50: bc    12, 2, 0x7F319EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319EF0;
        }
    }

label_7F319E54:
    ctx->pc = 0x7F319E54u;
    ctx->downcount -= 1;
    // 7F319E54: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F319E58:
    ctx->pc = 0x7F319E58u;
    ctx->downcount -= 2;
    // 7F319E58: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319E5C:
    ctx->pc = 0x7F319E5Cu;
    // 7F319E5C: bc    12, 2, 0x7F319EA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319EA0;
        }
    }

label_7F319E60:
    ctx->pc = 0x7F319E60u;
    ctx->downcount -= 1;
    // 7F319E60: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319E64:
    ctx->pc = 0x7F319E64u;
    ctx->downcount -= 2;
    // 7F319E64: cmpwi   r11, 10240
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319E68:
    ctx->pc = 0x7F319E68u;
    // 7F319E68: bc    12, 2, 0x7F319F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319F18;
        }
    }

label_7F319E6C:
    ctx->pc = 0x7F319E6Cu;
    ctx->downcount -= 1;
    // 7F319E6C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319E70:
    ctx->pc = 0x7F319E70u;
    ctx->downcount -= 3;
    // 7F319E70: addi    r9, r10, -24576
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-24576);

label_7F319E74:
    ctx->pc = 0x7F319E74u;
    // 7F319E74: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319E78:
    ctx->pc = 0x7F319E78u;
    // 7F319E78: bc    12, 2, 0x7F319EDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319EDC;
        }
    }

label_7F319E7C:
    ctx->pc = 0x7F319E7Cu;
    ctx->downcount -= 1;
    // 7F319E7C: bc    4, 0, 0x7F319E90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319E90;
        }
    }

label_7F319E80:
    ctx->pc = 0x7F319E80u;
    ctx->downcount -= 3;
    // 7F319E80: addi    r9, r10, -30720
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-30720);

label_7F319E84:
    ctx->pc = 0x7F319E84u;
    // 7F319E84: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319E88:
    ctx->pc = 0x7F319E88u;
    // 7F319E88: bc    12, 2, 0x7F319F04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319F04;
        }
    }

label_7F319E8C:
    ctx->pc = 0x7F319E8Cu;
    ctx->downcount -= 1;
    // 7F319E8C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319E90:
    ctx->pc = 0x7F319E90u;
    ctx->downcount -= 3;
    // 7F319E90: addi    r9, r10, -22528
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-22528);

label_7F319E94:
    ctx->pc = 0x7F319E94u;
    // 7F319E94: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319E98:
    ctx->pc = 0x7F319E98u;
    // 7F319E98: bc    12, 2, 0x7F319F2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319F2C;
        }
    }

label_7F319E9C:
    ctx->pc = 0x7F319E9Cu;
    ctx->downcount -= 1;
    // 7F319E9C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319EA0:
    ctx->pc = 0x7F319EA0u;
    ctx->downcount -= 5;
    // 7F319EA0: lis     r9, 99
    ctx->gpr[9] = ((u32)(s32)(99) << 16);

label_7F319EA4:
    ctx->pc = 0x7F319EA4u;
    // 7F319EA4: lis     r7, 225
    ctx->gpr[7] = ((u32)(s32)(225) << 16);

label_7F319EA8:
    ctx->pc = 0x7F319EA8u;
    // 7F319EA8: addi    r0, r9, -12105
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-12105);

label_7F319EAC:
    ctx->pc = 0x7F319EACu;
    // 7F319EAC: addi    r7, r7, -29211
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29211);

label_7F319EB0:
    ctx->pc = 0x7F319EB0u;
    // 7F319EB0: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319EB4:
    ctx->pc = 0x7F319EB4u;
    ctx->downcount -= 5;
    // 7F319EB4: lis     r9, 99
    ctx->gpr[9] = ((u32)(s32)(99) << 16);

label_7F319EB8:
    ctx->pc = 0x7F319EB8u;
    // 7F319EB8: lis     r7, 225
    ctx->gpr[7] = ((u32)(s32)(225) << 16);

label_7F319EBC:
    ctx->pc = 0x7F319EBCu;
    // 7F319EBC: addi    r0, r9, -12104
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-12104);

label_7F319EC0:
    ctx->pc = 0x7F319EC0u;
    // 7F319EC0: addi    r7, r7, -29210
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29210);

label_7F319EC4:
    ctx->pc = 0x7F319EC4u;
    // 7F319EC4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319EC8:
    ctx->pc = 0x7F319EC8u;
    ctx->downcount -= 5;
    // 7F319EC8: lis     r9, 99
    ctx->gpr[9] = ((u32)(s32)(99) << 16);

label_7F319ECC:
    ctx->pc = 0x7F319ECCu;
    // 7F319ECC: lis     r7, 225
    ctx->gpr[7] = ((u32)(s32)(225) << 16);

label_7F319ED0:
    ctx->pc = 0x7F319ED0u;
    // 7F319ED0: addi    r0, r9, -12073
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-12073);

label_7F319ED4:
    ctx->pc = 0x7F319ED4u;
    // 7F319ED4: addi    r7, r7, -29179
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29179);

label_7F319ED8:
    ctx->pc = 0x7F319ED8u;
    // 7F319ED8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319EDC:
    ctx->pc = 0x7F319EDCu;
    ctx->downcount -= 5;
    // 7F319EDC: lis     r9, 99
    ctx->gpr[9] = ((u32)(s32)(99) << 16);

label_7F319EE0:
    ctx->pc = 0x7F319EE0u;
    // 7F319EE0: lis     r7, 225
    ctx->gpr[7] = ((u32)(s32)(225) << 16);

label_7F319EE4:
    ctx->pc = 0x7F319EE4u;
    // 7F319EE4: addi    r0, r9, -12072
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-12072);

label_7F319EE8:
    ctx->pc = 0x7F319EE8u;
    // 7F319EE8: addi    r7, r7, -29178
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-29178);

label_7F319EEC:
    ctx->pc = 0x7F319EECu;
    // 7F319EEC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319EF0:
    ctx->pc = 0x7F319EF0u;
    ctx->downcount -= 5;
    // 7F319EF0: lis     r9, 99
    ctx->gpr[9] = ((u32)(s32)(99) << 16);

label_7F319EF4:
    ctx->pc = 0x7F319EF4u;
    // 7F319EF4: lis     r7, 225
    ctx->gpr[7] = ((u32)(s32)(225) << 16);

label_7F319EF8:
    ctx->pc = 0x7F319EF8u;
    // 7F319EF8: addi    r0, r9, -11081
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-11081);

label_7F319EFC:
    ctx->pc = 0x7F319EFCu;
    // 7F319EFC: addi    r7, r7, -28187
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-28187);

label_7F319F00:
    ctx->pc = 0x7F319F00u;
    // 7F319F00: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319F04:
    ctx->pc = 0x7F319F04u;
    ctx->downcount -= 5;
    // 7F319F04: lis     r9, 99
    ctx->gpr[9] = ((u32)(s32)(99) << 16);

label_7F319F08:
    ctx->pc = 0x7F319F08u;
    // 7F319F08: lis     r7, 225
    ctx->gpr[7] = ((u32)(s32)(225) << 16);

label_7F319F0C:
    ctx->pc = 0x7F319F0Cu;
    // 7F319F0C: addi    r0, r9, -11080
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-11080);

label_7F319F10:
    ctx->pc = 0x7F319F10u;
    // 7F319F10: addi    r7, r7, -28186
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-28186);

label_7F319F14:
    ctx->pc = 0x7F319F14u;
    // 7F319F14: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319F18:
    ctx->pc = 0x7F319F18u;
    ctx->downcount -= 5;
    // 7F319F18: lis     r9, 99
    ctx->gpr[9] = ((u32)(s32)(99) << 16);

label_7F319F1C:
    ctx->pc = 0x7F319F1Cu;
    // 7F319F1C: lis     r7, 225
    ctx->gpr[7] = ((u32)(s32)(225) << 16);

label_7F319F20:
    ctx->pc = 0x7F319F20u;
    // 7F319F20: addi    r0, r9, -11049
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-11049);

label_7F319F24:
    ctx->pc = 0x7F319F24u;
    // 7F319F24: addi    r7, r7, -28155
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-28155);

label_7F319F28:
    ctx->pc = 0x7F319F28u;
    // 7F319F28: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319F2C:
    ctx->pc = 0x7F319F2Cu;
    ctx->downcount -= 5;
    // 7F319F2C: lis     r9, 99
    ctx->gpr[9] = ((u32)(s32)(99) << 16);

label_7F319F30:
    ctx->pc = 0x7F319F30u;
    // 7F319F30: lis     r7, 225
    ctx->gpr[7] = ((u32)(s32)(225) << 16);

label_7F319F34:
    ctx->pc = 0x7F319F34u;
    // 7F319F34: addi    r0, r9, -11048
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-11048);

label_7F319F38:
    ctx->pc = 0x7F319F38u;
    // 7F319F38: addi    r7, r7, -28154
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-28154);

label_7F319F3C:
    ctx->pc = 0x7F319F3Cu;
    // 7F319F3C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319F40:
    ctx->pc = 0x7F319F40u;
    ctx->downcount -= 7;
    // 7F319F40: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F319F44:
    ctx->pc = 0x7F319F44u;
    // 7F319F44: lis     r10, 1
    ctx->gpr[10] = ((u32)(s32)(1) << 16);

label_7F319F48:
    ctx->pc = 0x7F319F48u;
    // 7F319F48: lwz     r11, -3320(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-3320);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F319F4C:
    ctx->pc = 0x7F319F4Cu;
    // 7F319F4C: addi    r9, r10, -32768
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-32768);

label_7F319F50:
    ctx->pc = 0x7F319F50u;
    // 7F319F50: andi.   r11, r11, 0xA800
    {
        ctx->gpr[11] = ctx->gpr[11] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F319F54:
    ctx->pc = 0x7F319F54u;
    // 7F319F54: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319F58:
    ctx->pc = 0x7F319F58u;
    // 7F319F58: bc    12, 2, 0x7F319FD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319FD4;
        }
    }

label_7F319F5C:
    ctx->pc = 0x7F319F5Cu;
    ctx->downcount -= 1;
    // 7F319F5C: bc    4, 0, 0x7F319F90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319F90;
        }
    }

label_7F319F60:
    ctx->pc = 0x7F319F60u;
    ctx->downcount -= 2;
    // 7F319F60: cmpwi   r11, 8192
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319F64:
    ctx->pc = 0x7F319F64u;
    // 7F319F64: bc    12, 2, 0x7F319FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319FE8;
        }
    }

label_7F319F68:
    ctx->pc = 0x7F319F68u;
    ctx->downcount -= 1;
    // 7F319F68: bc    4, 0, 0x7F319F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319F84;
        }
    }

label_7F319F6C:
    ctx->pc = 0x7F319F6Cu;
    ctx->downcount -= 2;
    // 7F319F6C: cmpwi   r11, 2048
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319F70:
    ctx->pc = 0x7F319F70u;
    // 7F319F70: bc    12, 2, 0x7F31A010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A010;
        }
    }

label_7F319F74:
    ctx->pc = 0x7F319F74u;
    ctx->downcount -= 1;
    // 7F319F74: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F319F78:
    ctx->pc = 0x7F319F78u;
    ctx->downcount -= 2;
    // 7F319F78: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319F7C:
    ctx->pc = 0x7F319F7Cu;
    // 7F319F7C: bc    12, 2, 0x7F319FC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319FC0;
        }
    }

label_7F319F80:
    ctx->pc = 0x7F319F80u;
    ctx->downcount -= 1;
    // 7F319F80: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319F84:
    ctx->pc = 0x7F319F84u;
    ctx->downcount -= 2;
    // 7F319F84: cmpwi   r11, 10240
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319F88:
    ctx->pc = 0x7F319F88u;
    // 7F319F88: bc    12, 2, 0x7F31A038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A038;
        }
    }

label_7F319F8C:
    ctx->pc = 0x7F319F8Cu;
    ctx->downcount -= 1;
    // 7F319F8C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319F90:
    ctx->pc = 0x7F319F90u;
    ctx->downcount -= 3;
    // 7F319F90: addi    r9, r10, -24576
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-24576);

label_7F319F94:
    ctx->pc = 0x7F319F94u;
    // 7F319F94: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319F98:
    ctx->pc = 0x7F319F98u;
    // 7F319F98: bc    12, 2, 0x7F319FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F319FFC;
        }
    }

label_7F319F9C:
    ctx->pc = 0x7F319F9Cu;
    ctx->downcount -= 1;
    // 7F319F9C: bc    4, 0, 0x7F319FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F319FB0;
        }
    }

label_7F319FA0:
    ctx->pc = 0x7F319FA0u;
    ctx->downcount -= 3;
    // 7F319FA0: addi    r9, r10, -30720
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-30720);

label_7F319FA4:
    ctx->pc = 0x7F319FA4u;
    // 7F319FA4: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319FA8:
    ctx->pc = 0x7F319FA8u;
    // 7F319FA8: bc    12, 2, 0x7F31A024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A024;
        }
    }

label_7F319FAC:
    ctx->pc = 0x7F319FACu;
    ctx->downcount -= 1;
    // 7F319FAC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319FB0:
    ctx->pc = 0x7F319FB0u;
    ctx->downcount -= 3;
    // 7F319FB0: addi    r9, r10, -22528
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-22528);

label_7F319FB4:
    ctx->pc = 0x7F319FB4u;
    // 7F319FB4: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F319FB8:
    ctx->pc = 0x7F319FB8u;
    // 7F319FB8: bc    12, 2, 0x7F31A04C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A04C;
        }
    }

label_7F319FBC:
    ctx->pc = 0x7F319FBCu;
    ctx->downcount -= 1;
    // 7F319FBC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319FC0:
    ctx->pc = 0x7F319FC0u;
    ctx->downcount -= 5;
    // 7F319FC0: lis     r9, 222
    ctx->gpr[9] = ((u32)(s32)(222) << 16);

label_7F319FC4:
    ctx->pc = 0x7F319FC4u;
    // 7F319FC4: lis     r7, 82
    ctx->gpr[7] = ((u32)(s32)(82) << 16);

label_7F319FC8:
    ctx->pc = 0x7F319FC8u;
    // 7F319FC8: addi    r0, r9, 19241
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(19241);

label_7F319FCC:
    ctx->pc = 0x7F319FCCu;
    // 7F319FCC: addi    r7, r7, 14611
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14611);

label_7F319FD0:
    ctx->pc = 0x7F319FD0u;
    // 7F319FD0: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319FD4:
    ctx->pc = 0x7F319FD4u;
    ctx->downcount -= 5;
    // 7F319FD4: lis     r9, 222
    ctx->gpr[9] = ((u32)(s32)(222) << 16);

label_7F319FD8:
    ctx->pc = 0x7F319FD8u;
    // 7F319FD8: lis     r7, 82
    ctx->gpr[7] = ((u32)(s32)(82) << 16);

label_7F319FDC:
    ctx->pc = 0x7F319FDCu;
    // 7F319FDC: addi    r0, r9, 19242
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(19242);

label_7F319FE0:
    ctx->pc = 0x7F319FE0u;
    // 7F319FE0: addi    r7, r7, 14612
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14612);

label_7F319FE4:
    ctx->pc = 0x7F319FE4u;
    // 7F319FE4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319FE8:
    ctx->pc = 0x7F319FE8u;
    ctx->downcount -= 5;
    // 7F319FE8: lis     r9, 222
    ctx->gpr[9] = ((u32)(s32)(222) << 16);

label_7F319FEC:
    ctx->pc = 0x7F319FECu;
    // 7F319FEC: lis     r7, 82
    ctx->gpr[7] = ((u32)(s32)(82) << 16);

label_7F319FF0:
    ctx->pc = 0x7F319FF0u;
    // 7F319FF0: addi    r0, r9, 19273
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(19273);

label_7F319FF4:
    ctx->pc = 0x7F319FF4u;
    // 7F319FF4: addi    r7, r7, 14643
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14643);

label_7F319FF8:
    ctx->pc = 0x7F319FF8u;
    // 7F319FF8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F319FFC:
    ctx->pc = 0x7F319FFCu;
    ctx->downcount -= 5;
    // 7F319FFC: lis     r9, 222
    ctx->gpr[9] = ((u32)(s32)(222) << 16);

label_7F31A000:
    ctx->pc = 0x7F31A000u;
    // 7F31A000: lis     r7, 82
    ctx->gpr[7] = ((u32)(s32)(82) << 16);

label_7F31A004:
    ctx->pc = 0x7F31A004u;
    // 7F31A004: addi    r0, r9, 19274
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(19274);

label_7F31A008:
    ctx->pc = 0x7F31A008u;
    // 7F31A008: addi    r7, r7, 14644
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14644);

label_7F31A00C:
    ctx->pc = 0x7F31A00Cu;
    // 7F31A00C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A010:
    ctx->pc = 0x7F31A010u;
    ctx->downcount -= 5;
    // 7F31A010: lis     r9, 222
    ctx->gpr[9] = ((u32)(s32)(222) << 16);

label_7F31A014:
    ctx->pc = 0x7F31A014u;
    // 7F31A014: lis     r7, 82
    ctx->gpr[7] = ((u32)(s32)(82) << 16);

label_7F31A018:
    ctx->pc = 0x7F31A018u;
    // 7F31A018: addi    r0, r9, 20265
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(20265);

label_7F31A01C:
    ctx->pc = 0x7F31A01Cu;
    // 7F31A01C: addi    r7, r7, 15635
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(15635);

label_7F31A020:
    ctx->pc = 0x7F31A020u;
    // 7F31A020: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A024:
    ctx->pc = 0x7F31A024u;
    ctx->downcount -= 5;
    // 7F31A024: lis     r9, 222
    ctx->gpr[9] = ((u32)(s32)(222) << 16);

label_7F31A028:
    ctx->pc = 0x7F31A028u;
    // 7F31A028: lis     r7, 82
    ctx->gpr[7] = ((u32)(s32)(82) << 16);

label_7F31A02C:
    ctx->pc = 0x7F31A02Cu;
    // 7F31A02C: addi    r0, r9, 20266
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(20266);

label_7F31A030:
    ctx->pc = 0x7F31A030u;
    // 7F31A030: addi    r7, r7, 15636
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(15636);

label_7F31A034:
    ctx->pc = 0x7F31A034u;
    // 7F31A034: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A038:
    ctx->pc = 0x7F31A038u;
    ctx->downcount -= 5;
    // 7F31A038: lis     r9, 222
    ctx->gpr[9] = ((u32)(s32)(222) << 16);

label_7F31A03C:
    ctx->pc = 0x7F31A03Cu;
    // 7F31A03C: lis     r7, 82
    ctx->gpr[7] = ((u32)(s32)(82) << 16);

label_7F31A040:
    ctx->pc = 0x7F31A040u;
    // 7F31A040: addi    r0, r9, 20297
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(20297);

label_7F31A044:
    ctx->pc = 0x7F31A044u;
    // 7F31A044: addi    r7, r7, 15667
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(15667);

label_7F31A048:
    ctx->pc = 0x7F31A048u;
    // 7F31A048: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A04C:
    ctx->pc = 0x7F31A04Cu;
    ctx->downcount -= 5;
    // 7F31A04C: lis     r9, 222
    ctx->gpr[9] = ((u32)(s32)(222) << 16);

label_7F31A050:
    ctx->pc = 0x7F31A050u;
    // 7F31A050: lis     r7, 82
    ctx->gpr[7] = ((u32)(s32)(82) << 16);

label_7F31A054:
    ctx->pc = 0x7F31A054u;
    // 7F31A054: addi    r0, r9, 20298
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(20298);

label_7F31A058:
    ctx->pc = 0x7F31A058u;
    // 7F31A058: addi    r7, r7, 15668
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(15668);

label_7F31A05C:
    ctx->pc = 0x7F31A05Cu;
    // 7F31A05C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A060:
    ctx->pc = 0x7F31A060u;
    ctx->downcount -= 7;
    // 7F31A060: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F31A064:
    ctx->pc = 0x7F31A064u;
    // 7F31A064: lis     r10, 1
    ctx->gpr[10] = ((u32)(s32)(1) << 16);

label_7F31A068:
    ctx->pc = 0x7F31A068u;
    // 7F31A068: lwz     r11, -3320(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-3320);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F31A06C:
    ctx->pc = 0x7F31A06Cu;
    // 7F31A06C: addi    r9, r10, -32768
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-32768);

label_7F31A070:
    ctx->pc = 0x7F31A070u;
    // 7F31A070: andi.   r11, r11, 0xA800
    {
        ctx->gpr[11] = ctx->gpr[11] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31A074:
    ctx->pc = 0x7F31A074u;
    // 7F31A074: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A078:
    ctx->pc = 0x7F31A078u;
    // 7F31A078: bc    12, 2, 0x7F31A0FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A0FC;
        }
    }

label_7F31A07C:
    ctx->pc = 0x7F31A07Cu;
    ctx->downcount -= 1;
    // 7F31A07C: bc    4, 0, 0x7F31A0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A0B0;
        }
    }

label_7F31A080:
    ctx->pc = 0x7F31A080u;
    ctx->downcount -= 2;
    // 7F31A080: cmpwi   r11, 8192
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A084:
    ctx->pc = 0x7F31A084u;
    // 7F31A084: bc    12, 2, 0x7F31A118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A118;
        }
    }

label_7F31A088:
    ctx->pc = 0x7F31A088u;
    ctx->downcount -= 1;
    // 7F31A088: bc    4, 0, 0x7F31A0A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A0A4;
        }
    }

label_7F31A08C:
    ctx->pc = 0x7F31A08Cu;
    ctx->downcount -= 2;
    // 7F31A08C: cmpwi   r11, 2048
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A090:
    ctx->pc = 0x7F31A090u;
    // 7F31A090: bc    12, 2, 0x7F31A150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A150;
        }
    }

label_7F31A094:
    ctx->pc = 0x7F31A094u;
    ctx->downcount -= 1;
    // 7F31A094: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F31A098:
    ctx->pc = 0x7F31A098u;
    ctx->downcount -= 2;
    // 7F31A098: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A09C:
    ctx->pc = 0x7F31A09Cu;
    // 7F31A09C: bc    12, 2, 0x7F31A0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A0E0;
        }
    }

label_7F31A0A0:
    ctx->pc = 0x7F31A0A0u;
    ctx->downcount -= 1;
    // 7F31A0A0: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A0A4:
    ctx->pc = 0x7F31A0A4u;
    ctx->downcount -= 2;
    // 7F31A0A4: cmpwi   r11, 10240
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A0A8:
    ctx->pc = 0x7F31A0A8u;
    // 7F31A0A8: bc    12, 2, 0x7F31A178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A178;
        }
    }

label_7F31A0AC:
    ctx->pc = 0x7F31A0ACu;
    ctx->downcount -= 1;
    // 7F31A0AC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A0B0:
    ctx->pc = 0x7F31A0B0u;
    ctx->downcount -= 3;
    // 7F31A0B0: addi    r9, r10, -24576
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-24576);

label_7F31A0B4:
    ctx->pc = 0x7F31A0B4u;
    // 7F31A0B4: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A0B8:
    ctx->pc = 0x7F31A0B8u;
    // 7F31A0B8: bc    12, 2, 0x7F31A134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A134;
        }
    }

label_7F31A0BC:
    ctx->pc = 0x7F31A0BCu;
    ctx->downcount -= 1;
    // 7F31A0BC: bc    4, 0, 0x7F31A0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A0D0;
        }
    }

label_7F31A0C0:
    ctx->pc = 0x7F31A0C0u;
    ctx->downcount -= 3;
    // 7F31A0C0: addi    r9, r10, -30720
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-30720);

label_7F31A0C4:
    ctx->pc = 0x7F31A0C4u;
    // 7F31A0C4: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A0C8:
    ctx->pc = 0x7F31A0C8u;
    // 7F31A0C8: bc    12, 2, 0x7F31A164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A164;
        }
    }

label_7F31A0CC:
    ctx->pc = 0x7F31A0CCu;
    ctx->downcount -= 1;
    // 7F31A0CC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A0D0:
    ctx->pc = 0x7F31A0D0u;
    ctx->downcount -= 3;
    // 7F31A0D0: addi    r9, r10, -22528
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-22528);

label_7F31A0D4:
    ctx->pc = 0x7F31A0D4u;
    // 7F31A0D4: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A0D8:
    ctx->pc = 0x7F31A0D8u;
    // 7F31A0D8: bc    12, 2, 0x7F31A18C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A18C;
        }
    }

label_7F31A0DC:
    ctx->pc = 0x7F31A0DCu;
    ctx->downcount -= 1;
    // 7F31A0DC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A0E0:
    ctx->pc = 0x7F31A0E0u;
    ctx->downcount -= 7;
    // 7F31A0E0: lis     r9, 144
    ctx->gpr[9] = ((u32)(s32)(144) << 16);

label_7F31A0E4:
    ctx->pc = 0x7F31A0E4u;
    // 7F31A0E4: lis     r7, 4
    ctx->gpr[7] = ((u32)(s32)(4) << 16);

label_7F31A0E8:
    ctx->pc = 0x7F31A0E8u;
    // 7F31A0E8: lis     r8, 102
    ctx->gpr[8] = ((u32)(s32)(102) << 16);

label_7F31A0EC:
    ctx->pc = 0x7F31A0ECu;
    // 7F31A0EC: addi    r0, r9, 18533
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18533);

label_7F31A0F0:
    ctx->pc = 0x7F31A0F0u;
    // 7F31A0F0: addi    r7, r7, 13903
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(13903);

label_7F31A0F4:
    ctx->pc = 0x7F31A0F4u;
    // 7F31A0F4: addi    r8, r8, -27254
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-27254);

label_7F31A0F8:
    ctx->pc = 0x7F31A0F8u;
    // 7F31A0F8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A0FC:
    ctx->pc = 0x7F31A0FCu;
    ctx->downcount -= 7;
    // 7F31A0FC: lis     r9, 144
    ctx->gpr[9] = ((u32)(s32)(144) << 16);

label_7F31A100:
    ctx->pc = 0x7F31A100u;
    // 7F31A100: lis     r7, 4
    ctx->gpr[7] = ((u32)(s32)(4) << 16);

label_7F31A104:
    ctx->pc = 0x7F31A104u;
    // 7F31A104: lis     r8, 102
    ctx->gpr[8] = ((u32)(s32)(102) << 16);

label_7F31A108:
    ctx->pc = 0x7F31A108u;
    // 7F31A108: addi    r0, r9, 18534
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18534);

label_7F31A10C:
    ctx->pc = 0x7F31A10Cu;
    // 7F31A10C: addi    r7, r7, 13904
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(13904);

label_7F31A110:
    ctx->pc = 0x7F31A110u;
    // 7F31A110: addi    r8, r8, -27253
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-27253);

label_7F31A114:
    ctx->pc = 0x7F31A114u;
    // 7F31A114: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A118:
    ctx->pc = 0x7F31A118u;
    ctx->downcount -= 7;
    // 7F31A118: lis     r9, 144
    ctx->gpr[9] = ((u32)(s32)(144) << 16);

label_7F31A11C:
    ctx->pc = 0x7F31A11Cu;
    // 7F31A11C: lis     r7, 4
    ctx->gpr[7] = ((u32)(s32)(4) << 16);

label_7F31A120:
    ctx->pc = 0x7F31A120u;
    // 7F31A120: lis     r8, 102
    ctx->gpr[8] = ((u32)(s32)(102) << 16);

label_7F31A124:
    ctx->pc = 0x7F31A124u;
    // 7F31A124: addi    r0, r9, 18565
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18565);

label_7F31A128:
    ctx->pc = 0x7F31A128u;
    // 7F31A128: addi    r7, r7, 13935
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(13935);

label_7F31A12C:
    ctx->pc = 0x7F31A12Cu;
    // 7F31A12C: addi    r8, r8, -27222
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-27222);

label_7F31A130:
    ctx->pc = 0x7F31A130u;
    // 7F31A130: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A134:
    ctx->pc = 0x7F31A134u;
    ctx->downcount -= 7;
    // 7F31A134: lis     r9, 144
    ctx->gpr[9] = ((u32)(s32)(144) << 16);

label_7F31A138:
    ctx->pc = 0x7F31A138u;
    // 7F31A138: lis     r7, 4
    ctx->gpr[7] = ((u32)(s32)(4) << 16);

label_7F31A13C:
    ctx->pc = 0x7F31A13Cu;
    // 7F31A13C: lis     r8, 102
    ctx->gpr[8] = ((u32)(s32)(102) << 16);

label_7F31A140:
    ctx->pc = 0x7F31A140u;
    // 7F31A140: addi    r0, r9, 18566
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18566);

label_7F31A144:
    ctx->pc = 0x7F31A144u;
    // 7F31A144: addi    r7, r7, 13936
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(13936);

label_7F31A148:
    ctx->pc = 0x7F31A148u;
    // 7F31A148: addi    r8, r8, -27221
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-27221);

label_7F31A14C:
    ctx->pc = 0x7F31A14Cu;
    // 7F31A14C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A150:
    ctx->pc = 0x7F31A150u;
    ctx->downcount -= 5;
    // 7F31A150: lis     r9, 144
    ctx->gpr[9] = ((u32)(s32)(144) << 16);

label_7F31A154:
    ctx->pc = 0x7F31A154u;
    // 7F31A154: lis     r7, 4
    ctx->gpr[7] = ((u32)(s32)(4) << 16);

label_7F31A158:
    ctx->pc = 0x7F31A158u;
    // 7F31A158: addi    r0, r9, 19557
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(19557);

label_7F31A15C:
    ctx->pc = 0x7F31A15Cu;
    // 7F31A15C: addi    r7, r7, 14927
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14927);

label_7F31A160:
    ctx->pc = 0x7F31A160u;
    // 7F31A160: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A164:
    ctx->pc = 0x7F31A164u;
    ctx->downcount -= 5;
    // 7F31A164: lis     r9, 144
    ctx->gpr[9] = ((u32)(s32)(144) << 16);

label_7F31A168:
    ctx->pc = 0x7F31A168u;
    // 7F31A168: lis     r7, 4
    ctx->gpr[7] = ((u32)(s32)(4) << 16);

label_7F31A16C:
    ctx->pc = 0x7F31A16Cu;
    // 7F31A16C: addi    r0, r9, 19558
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(19558);

label_7F31A170:
    ctx->pc = 0x7F31A170u;
    // 7F31A170: addi    r7, r7, 14928
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14928);

label_7F31A174:
    ctx->pc = 0x7F31A174u;
    // 7F31A174: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A178:
    ctx->pc = 0x7F31A178u;
    ctx->downcount -= 5;
    // 7F31A178: lis     r9, 144
    ctx->gpr[9] = ((u32)(s32)(144) << 16);

label_7F31A17C:
    ctx->pc = 0x7F31A17Cu;
    // 7F31A17C: lis     r7, 4
    ctx->gpr[7] = ((u32)(s32)(4) << 16);

label_7F31A180:
    ctx->pc = 0x7F31A180u;
    // 7F31A180: addi    r0, r9, 19589
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(19589);

label_7F31A184:
    ctx->pc = 0x7F31A184u;
    // 7F31A184: addi    r7, r7, 14959
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14959);

label_7F31A188:
    ctx->pc = 0x7F31A188u;
    // 7F31A188: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A18C:
    ctx->pc = 0x7F31A18Cu;
    ctx->downcount -= 5;
    // 7F31A18C: lis     r9, 144
    ctx->gpr[9] = ((u32)(s32)(144) << 16);

label_7F31A190:
    ctx->pc = 0x7F31A190u;
    // 7F31A190: lis     r7, 4
    ctx->gpr[7] = ((u32)(s32)(4) << 16);

label_7F31A194:
    ctx->pc = 0x7F31A194u;
    // 7F31A194: addi    r0, r9, 19590
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(19590);

label_7F31A198:
    ctx->pc = 0x7F31A198u;
    // 7F31A198: addi    r7, r7, 14960
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(14960);

label_7F31A19C:
    ctx->pc = 0x7F31A19Cu;
    // 7F31A19C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A1A0:
    ctx->pc = 0x7F31A1A0u;
    ctx->downcount -= 7;
    // 7F31A1A0: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F31A1A4:
    ctx->pc = 0x7F31A1A4u;
    // 7F31A1A4: lis     r9, 1
    ctx->gpr[9] = ((u32)(s32)(1) << 16);

label_7F31A1A8:
    ctx->pc = 0x7F31A1A8u;
    // 7F31A1A8: lwz     r11, -3320(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-3320);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F31A1AC:
    ctx->pc = 0x7F31A1ACu;
    // 7F31A1AC: addi    r10, r9, -32768
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(-32768);

label_7F31A1B0:
    ctx->pc = 0x7F31A1B0u;
    // 7F31A1B0: andi.   r11, r11, 0xA000
    {
        ctx->gpr[11] = ctx->gpr[11] & 0xA000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31A1B4:
    ctx->pc = 0x7F31A1B4u;
    // 7F31A1B4: cmpw    r11, r10
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[10]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A1B8:
    ctx->pc = 0x7F31A1B8u;
    // 7F31A1B8: bc    12, 2, 0x7F31A1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A1FC;
        }
    }

label_7F31A1BC:
    ctx->pc = 0x7F31A1BCu;
    ctx->downcount -= 1;
    // 7F31A1BC: bc    4, 0, 0x7F31A1D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A1D8;
        }
    }

label_7F31A1C0:
    ctx->pc = 0x7F31A1C0u;
    ctx->downcount -= 2;
    // 7F31A1C0: cmpwi   r11, 8192
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A1C4:
    ctx->pc = 0x7F31A1C4u;
    // 7F31A1C4: bc    12, 2, 0x7F31A210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A210;
        }
    }

label_7F31A1C8:
    ctx->pc = 0x7F31A1C8u;
    ctx->downcount -= 1;
    // 7F31A1C8: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F31A1CC:
    ctx->pc = 0x7F31A1CCu;
    ctx->downcount -= 2;
    // 7F31A1CC: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A1D0:
    ctx->pc = 0x7F31A1D0u;
    // 7F31A1D0: bc    12, 2, 0x7F31A1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A1E8;
        }
    }

label_7F31A1D4:
    ctx->pc = 0x7F31A1D4u;
    ctx->downcount -= 1;
    // 7F31A1D4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A1D8:
    ctx->pc = 0x7F31A1D8u;
    ctx->downcount -= 3;
    // 7F31A1D8: addi    r9, r9, -24576
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-24576);

label_7F31A1DC:
    ctx->pc = 0x7F31A1DCu;
    // 7F31A1DC: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A1E0:
    ctx->pc = 0x7F31A1E0u;
    // 7F31A1E0: bc    12, 2, 0x7F31A224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A224;
        }
    }

label_7F31A1E4:
    ctx->pc = 0x7F31A1E4u;
    ctx->downcount -= 1;
    // 7F31A1E4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A1E8:
    ctx->pc = 0x7F31A1E8u;
    ctx->downcount -= 5;
    // 7F31A1E8: lis     r9, 91
    ctx->gpr[9] = ((u32)(s32)(91) << 16);

label_7F31A1EC:
    ctx->pc = 0x7F31A1ECu;
    // 7F31A1EC: lis     r7, 213
    ctx->gpr[7] = ((u32)(s32)(213) << 16);

label_7F31A1F0:
    ctx->pc = 0x7F31A1F0u;
    // 7F31A1F0: addi    r0, r9, -3195
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-3195);

label_7F31A1F4:
    ctx->pc = 0x7F31A1F4u;
    // 7F31A1F4: addi    r7, r7, 20608
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(20608);

label_7F31A1F8:
    ctx->pc = 0x7F31A1F8u;
    // 7F31A1F8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A1FC:
    ctx->pc = 0x7F31A1FCu;
    ctx->downcount -= 5;
    // 7F31A1FC: lis     r9, 91
    ctx->gpr[9] = ((u32)(s32)(91) << 16);

label_7F31A200:
    ctx->pc = 0x7F31A200u;
    // 7F31A200: lis     r7, 213
    ctx->gpr[7] = ((u32)(s32)(213) << 16);

label_7F31A204:
    ctx->pc = 0x7F31A204u;
    // 7F31A204: addi    r0, r9, -3194
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-3194);

label_7F31A208:
    ctx->pc = 0x7F31A208u;
    // 7F31A208: addi    r7, r7, 20609
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(20609);

label_7F31A20C:
    ctx->pc = 0x7F31A20Cu;
    // 7F31A20C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A210:
    ctx->pc = 0x7F31A210u;
    ctx->downcount -= 5;
    // 7F31A210: lis     r9, 91
    ctx->gpr[9] = ((u32)(s32)(91) << 16);

label_7F31A214:
    ctx->pc = 0x7F31A214u;
    // 7F31A214: lis     r7, 213
    ctx->gpr[7] = ((u32)(s32)(213) << 16);

label_7F31A218:
    ctx->pc = 0x7F31A218u;
    // 7F31A218: addi    r0, r9, -3163
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-3163);

label_7F31A21C:
    ctx->pc = 0x7F31A21Cu;
    // 7F31A21C: addi    r7, r7, 20640
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(20640);

label_7F31A220:
    ctx->pc = 0x7F31A220u;
    // 7F31A220: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A224:
    ctx->pc = 0x7F31A224u;
    ctx->downcount -= 5;
    // 7F31A224: lis     r9, 91
    ctx->gpr[9] = ((u32)(s32)(91) << 16);

label_7F31A228:
    ctx->pc = 0x7F31A228u;
    // 7F31A228: lis     r7, 213
    ctx->gpr[7] = ((u32)(s32)(213) << 16);

label_7F31A22C:
    ctx->pc = 0x7F31A22Cu;
    // 7F31A22C: addi    r0, r9, -3162
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-3162);

label_7F31A230:
    ctx->pc = 0x7F31A230u;
    // 7F31A230: addi    r7, r7, 20641
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(20641);

label_7F31A234:
    ctx->pc = 0x7F31A234u;
    // 7F31A234: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A238:
    ctx->pc = 0x7F31A238u;
    ctx->downcount -= 7;
    // 7F31A238: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F31A23C:
    ctx->pc = 0x7F31A23Cu;
    // 7F31A23C: lis     r10, 1
    ctx->gpr[10] = ((u32)(s32)(1) << 16);

label_7F31A240:
    ctx->pc = 0x7F31A240u;
    // 7F31A240: lwz     r11, -3320(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-3320);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F31A244:
    ctx->pc = 0x7F31A244u;
    // 7F31A244: addi    r9, r10, -32768
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-32768);

label_7F31A248:
    ctx->pc = 0x7F31A248u;
    // 7F31A248: andi.   r11, r11, 0xA800
    {
        ctx->gpr[11] = ctx->gpr[11] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31A24C:
    ctx->pc = 0x7F31A24Cu;
    // 7F31A24C: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A250:
    ctx->pc = 0x7F31A250u;
    // 7F31A250: bc    12, 2, 0x7F31A2D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A2D4;
        }
    }

label_7F31A254:
    ctx->pc = 0x7F31A254u;
    ctx->downcount -= 1;
    // 7F31A254: bc    4, 0, 0x7F31A288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A288;
        }
    }

label_7F31A258:
    ctx->pc = 0x7F31A258u;
    ctx->downcount -= 2;
    // 7F31A258: cmpwi   r11, 8192
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A25C:
    ctx->pc = 0x7F31A25Cu;
    // 7F31A25C: bc    12, 2, 0x7F31A2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A2F0;
        }
    }

label_7F31A260:
    ctx->pc = 0x7F31A260u;
    ctx->downcount -= 1;
    // 7F31A260: bc    4, 0, 0x7F31A27C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A27C;
        }
    }

label_7F31A264:
    ctx->pc = 0x7F31A264u;
    ctx->downcount -= 2;
    // 7F31A264: cmpwi   r11, 2048
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A268:
    ctx->pc = 0x7F31A268u;
    // 7F31A268: bc    12, 2, 0x7F31A318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A318;
        }
    }

label_7F31A26C:
    ctx->pc = 0x7F31A26Cu;
    ctx->downcount -= 1;
    // 7F31A26C: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F31A270:
    ctx->pc = 0x7F31A270u;
    ctx->downcount -= 2;
    // 7F31A270: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A274:
    ctx->pc = 0x7F31A274u;
    // 7F31A274: bc    12, 2, 0x7F31A2B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A2B8;
        }
    }

label_7F31A278:
    ctx->pc = 0x7F31A278u;
    ctx->downcount -= 1;
    // 7F31A278: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A27C:
    ctx->pc = 0x7F31A27Cu;
    ctx->downcount -= 2;
    // 7F31A27C: cmpwi   r11, 10240
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A280:
    ctx->pc = 0x7F31A280u;
    // 7F31A280: bc    12, 2, 0x7F31A350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A350;
        }
    }

label_7F31A284:
    ctx->pc = 0x7F31A284u;
    ctx->downcount -= 1;
    // 7F31A284: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A288:
    ctx->pc = 0x7F31A288u;
    ctx->downcount -= 3;
    // 7F31A288: addi    r9, r10, -24576
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-24576);

label_7F31A28C:
    ctx->pc = 0x7F31A28Cu;
    // 7F31A28C: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A290:
    ctx->pc = 0x7F31A290u;
    // 7F31A290: bc    12, 2, 0x7F31A304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A304;
        }
    }

label_7F31A294:
    ctx->pc = 0x7F31A294u;
    ctx->downcount -= 1;
    // 7F31A294: bc    4, 0, 0x7F31A2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A2A8;
        }
    }

label_7F31A298:
    ctx->pc = 0x7F31A298u;
    ctx->downcount -= 3;
    // 7F31A298: addi    r9, r10, -30720
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-30720);

label_7F31A29C:
    ctx->pc = 0x7F31A29Cu;
    // 7F31A29C: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A2A0:
    ctx->pc = 0x7F31A2A0u;
    // 7F31A2A0: bc    12, 2, 0x7F31A334
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A334;
        }
    }

label_7F31A2A4:
    ctx->pc = 0x7F31A2A4u;
    ctx->downcount -= 1;
    // 7F31A2A4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A2A8:
    ctx->pc = 0x7F31A2A8u;
    ctx->downcount -= 3;
    // 7F31A2A8: addi    r9, r10, -22528
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-22528);

label_7F31A2AC:
    ctx->pc = 0x7F31A2ACu;
    // 7F31A2AC: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A2B0:
    ctx->pc = 0x7F31A2B0u;
    // 7F31A2B0: bc    12, 2, 0x7F31A364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A364;
        }
    }

label_7F31A2B4:
    ctx->pc = 0x7F31A2B4u;
    ctx->downcount -= 1;
    // 7F31A2B4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A2B8:
    ctx->pc = 0x7F31A2B8u;
    ctx->downcount -= 7;
    // 7F31A2B8: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F31A2BC:
    ctx->pc = 0x7F31A2BCu;
    // 7F31A2BC: lis     r7, 119
    ctx->gpr[7] = ((u32)(s32)(119) << 16);

label_7F31A2C0:
    ctx->pc = 0x7F31A2C0u;
    // 7F31A2C0: lis     r8, 157
    ctx->gpr[8] = ((u32)(s32)(157) << 16);

label_7F31A2C4:
    ctx->pc = 0x7F31A2C4u;
    // 7F31A2C4: addi    r0, r9, 17506
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(17506);

label_7F31A2C8:
    ctx->pc = 0x7F31A2C8u;
    // 7F31A2C8: addi    r7, r7, -7215
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-7215);

label_7F31A2CC:
    ctx->pc = 0x7F31A2CCu;
    // 7F31A2CC: addi    r8, r8, 19339
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(19339);

label_7F31A2D0:
    ctx->pc = 0x7F31A2D0u;
    // 7F31A2D0: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A2D4:
    ctx->pc = 0x7F31A2D4u;
    ctx->downcount -= 7;
    // 7F31A2D4: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F31A2D8:
    ctx->pc = 0x7F31A2D8u;
    // 7F31A2D8: lis     r7, 119
    ctx->gpr[7] = ((u32)(s32)(119) << 16);

label_7F31A2DC:
    ctx->pc = 0x7F31A2DCu;
    // 7F31A2DC: lis     r8, 157
    ctx->gpr[8] = ((u32)(s32)(157) << 16);

label_7F31A2E0:
    ctx->pc = 0x7F31A2E0u;
    // 7F31A2E0: addi    r0, r9, 17507
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(17507);

label_7F31A2E4:
    ctx->pc = 0x7F31A2E4u;
    // 7F31A2E4: addi    r7, r7, -7214
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-7214);

label_7F31A2E8:
    ctx->pc = 0x7F31A2E8u;
    // 7F31A2E8: addi    r8, r8, 19340
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(19340);

label_7F31A2EC:
    ctx->pc = 0x7F31A2ECu;
    // 7F31A2EC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A2F0:
    ctx->pc = 0x7F31A2F0u;
    ctx->downcount -= 5;
    // 7F31A2F0: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F31A2F4:
    ctx->pc = 0x7F31A2F4u;
    // 7F31A2F4: lis     r7, 119
    ctx->gpr[7] = ((u32)(s32)(119) << 16);

label_7F31A2F8:
    ctx->pc = 0x7F31A2F8u;
    // 7F31A2F8: addi    r0, r9, 17538
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(17538);

label_7F31A2FC:
    ctx->pc = 0x7F31A2FCu;
    // 7F31A2FC: addi    r7, r7, -7183
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-7183);

label_7F31A300:
    ctx->pc = 0x7F31A300u;
    // 7F31A300: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A304:
    ctx->pc = 0x7F31A304u;
    ctx->downcount -= 5;
    // 7F31A304: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F31A308:
    ctx->pc = 0x7F31A308u;
    // 7F31A308: lis     r7, 119
    ctx->gpr[7] = ((u32)(s32)(119) << 16);

label_7F31A30C:
    ctx->pc = 0x7F31A30Cu;
    // 7F31A30C: addi    r0, r9, 17539
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(17539);

label_7F31A310:
    ctx->pc = 0x7F31A310u;
    // 7F31A310: addi    r7, r7, -7182
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-7182);

label_7F31A314:
    ctx->pc = 0x7F31A314u;
    // 7F31A314: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A318:
    ctx->pc = 0x7F31A318u;
    ctx->downcount -= 7;
    // 7F31A318: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F31A31C:
    ctx->pc = 0x7F31A31Cu;
    // 7F31A31C: lis     r7, 119
    ctx->gpr[7] = ((u32)(s32)(119) << 16);

label_7F31A320:
    ctx->pc = 0x7F31A320u;
    // 7F31A320: lis     r8, 157
    ctx->gpr[8] = ((u32)(s32)(157) << 16);

label_7F31A324:
    ctx->pc = 0x7F31A324u;
    // 7F31A324: addi    r0, r9, 18530
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18530);

label_7F31A328:
    ctx->pc = 0x7F31A328u;
    // 7F31A328: addi    r7, r7, -6191
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-6191);

label_7F31A32C:
    ctx->pc = 0x7F31A32Cu;
    // 7F31A32C: addi    r8, r8, 20363
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20363);

label_7F31A330:
    ctx->pc = 0x7F31A330u;
    // 7F31A330: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A334:
    ctx->pc = 0x7F31A334u;
    ctx->downcount -= 7;
    // 7F31A334: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F31A338:
    ctx->pc = 0x7F31A338u;
    // 7F31A338: lis     r7, 119
    ctx->gpr[7] = ((u32)(s32)(119) << 16);

label_7F31A33C:
    ctx->pc = 0x7F31A33Cu;
    // 7F31A33C: lis     r8, 157
    ctx->gpr[8] = ((u32)(s32)(157) << 16);

label_7F31A340:
    ctx->pc = 0x7F31A340u;
    // 7F31A340: addi    r0, r9, 18531
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18531);

label_7F31A344:
    ctx->pc = 0x7F31A344u;
    // 7F31A344: addi    r7, r7, -6190
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-6190);

label_7F31A348:
    ctx->pc = 0x7F31A348u;
    // 7F31A348: addi    r8, r8, 20364
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(20364);

label_7F31A34C:
    ctx->pc = 0x7F31A34Cu;
    // 7F31A34C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A350:
    ctx->pc = 0x7F31A350u;
    ctx->downcount -= 5;
    // 7F31A350: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F31A354:
    ctx->pc = 0x7F31A354u;
    // 7F31A354: lis     r7, 119
    ctx->gpr[7] = ((u32)(s32)(119) << 16);

label_7F31A358:
    ctx->pc = 0x7F31A358u;
    // 7F31A358: addi    r0, r9, 18562
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18562);

label_7F31A35C:
    ctx->pc = 0x7F31A35Cu;
    // 7F31A35C: addi    r7, r7, -6159
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-6159);

label_7F31A360:
    ctx->pc = 0x7F31A360u;
    // 7F31A360: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A364:
    ctx->pc = 0x7F31A364u;
    ctx->downcount -= 5;
    // 7F31A364: lis     r9, 43
    ctx->gpr[9] = ((u32)(s32)(43) << 16);

label_7F31A368:
    ctx->pc = 0x7F31A368u;
    // 7F31A368: lis     r7, 119
    ctx->gpr[7] = ((u32)(s32)(119) << 16);

label_7F31A36C:
    ctx->pc = 0x7F31A36Cu;
    // 7F31A36C: addi    r0, r9, 18563
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18563);

label_7F31A370:
    ctx->pc = 0x7F31A370u;
    // 7F31A370: addi    r7, r7, -6158
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-6158);

label_7F31A374:
    ctx->pc = 0x7F31A374u;
    // 7F31A374: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A378:
    ctx->pc = 0x7F31A378u;
    ctx->downcount -= 7;
    // 7F31A378: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F31A37C:
    ctx->pc = 0x7F31A37Cu;
    // 7F31A37C: lis     r9, 1
    ctx->gpr[9] = ((u32)(s32)(1) << 16);

label_7F31A380:
    ctx->pc = 0x7F31A380u;
    // 7F31A380: lwz     r11, -3320(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-3320);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F31A384:
    ctx->pc = 0x7F31A384u;
    // 7F31A384: addi    r10, r9, -32768
    ctx->gpr[10] = ctx->gpr[9] + (u32)(s32)(-32768);

label_7F31A388:
    ctx->pc = 0x7F31A388u;
    // 7F31A388: andi.   r11, r11, 0x8800
    {
        ctx->gpr[11] = ctx->gpr[11] & 0x8800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31A38C:
    ctx->pc = 0x7F31A38Cu;
    // 7F31A38C: cmpw    r11, r10
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[10]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A390:
    ctx->pc = 0x7F31A390u;
    // 7F31A390: bc    12, 2, 0x7F31A3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A3D4;
        }
    }

label_7F31A394:
    ctx->pc = 0x7F31A394u;
    ctx->downcount -= 1;
    // 7F31A394: bc    4, 0, 0x7F31A3B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A3B0;
        }
    }

label_7F31A398:
    ctx->pc = 0x7F31A398u;
    ctx->downcount -= 2;
    // 7F31A398: cmpwi   r11, 2048
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A39C:
    ctx->pc = 0x7F31A39Cu;
    // 7F31A39C: bc    12, 2, 0x7F31A3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A3E8;
        }
    }

label_7F31A3A0:
    ctx->pc = 0x7F31A3A0u;
    ctx->downcount -= 1;
    // 7F31A3A0: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F31A3A4:
    ctx->pc = 0x7F31A3A4u;
    ctx->downcount -= 2;
    // 7F31A3A4: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A3A8:
    ctx->pc = 0x7F31A3A8u;
    // 7F31A3A8: bc    12, 2, 0x7F31A3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A3C0;
        }
    }

label_7F31A3AC:
    ctx->pc = 0x7F31A3ACu;
    ctx->downcount -= 1;
    // 7F31A3AC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A3B0:
    ctx->pc = 0x7F31A3B0u;
    ctx->downcount -= 3;
    // 7F31A3B0: addi    r9, r9, -30720
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-30720);

label_7F31A3B4:
    ctx->pc = 0x7F31A3B4u;
    // 7F31A3B4: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A3B8:
    ctx->pc = 0x7F31A3B8u;
    // 7F31A3B8: bc    12, 2, 0x7F31A3FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A3FC;
        }
    }

label_7F31A3BC:
    ctx->pc = 0x7F31A3BCu;
    ctx->downcount -= 1;
    // 7F31A3BC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A3C0:
    ctx->pc = 0x7F31A3C0u;
    ctx->downcount -= 5;
    // 7F31A3C0: lis     r9, 214
    ctx->gpr[9] = ((u32)(s32)(214) << 16);

label_7F31A3C4:
    ctx->pc = 0x7F31A3C4u;
    // 7F31A3C4: lis     r7, 74
    ctx->gpr[7] = ((u32)(s32)(74) << 16);

label_7F31A3C8:
    ctx->pc = 0x7F31A3C8u;
    // 7F31A3C8: addi    r0, r9, 17101
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(17101);

label_7F31A3CC:
    ctx->pc = 0x7F31A3CCu;
    // 7F31A3CC: addi    r7, r7, 12471
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(12471);

label_7F31A3D0:
    ctx->pc = 0x7F31A3D0u;
    // 7F31A3D0: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A3D4:
    ctx->pc = 0x7F31A3D4u;
    ctx->downcount -= 5;
    // 7F31A3D4: lis     r9, 214
    ctx->gpr[9] = ((u32)(s32)(214) << 16);

label_7F31A3D8:
    ctx->pc = 0x7F31A3D8u;
    // 7F31A3D8: lis     r7, 74
    ctx->gpr[7] = ((u32)(s32)(74) << 16);

label_7F31A3DC:
    ctx->pc = 0x7F31A3DCu;
    // 7F31A3DC: addi    r0, r9, 17102
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(17102);

label_7F31A3E0:
    ctx->pc = 0x7F31A3E0u;
    // 7F31A3E0: addi    r7, r7, 12472
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(12472);

label_7F31A3E4:
    ctx->pc = 0x7F31A3E4u;
    // 7F31A3E4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A3E8:
    ctx->pc = 0x7F31A3E8u;
    ctx->downcount -= 5;
    // 7F31A3E8: lis     r9, 214
    ctx->gpr[9] = ((u32)(s32)(214) << 16);

label_7F31A3EC:
    ctx->pc = 0x7F31A3ECu;
    // 7F31A3EC: lis     r7, 74
    ctx->gpr[7] = ((u32)(s32)(74) << 16);

label_7F31A3F0:
    ctx->pc = 0x7F31A3F0u;
    // 7F31A3F0: addi    r0, r9, 18125
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18125);

label_7F31A3F4:
    ctx->pc = 0x7F31A3F4u;
    // 7F31A3F4: addi    r7, r7, 13495
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(13495);

label_7F31A3F8:
    ctx->pc = 0x7F31A3F8u;
    // 7F31A3F8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A3FC:
    ctx->pc = 0x7F31A3FCu;
    ctx->downcount -= 5;
    // 7F31A3FC: lis     r9, 214
    ctx->gpr[9] = ((u32)(s32)(214) << 16);

label_7F31A400:
    ctx->pc = 0x7F31A400u;
    // 7F31A400: lis     r7, 74
    ctx->gpr[7] = ((u32)(s32)(74) << 16);

label_7F31A404:
    ctx->pc = 0x7F31A404u;
    // 7F31A404: addi    r0, r9, 18126
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(18126);

label_7F31A408:
    ctx->pc = 0x7F31A408u;
    // 7F31A408: addi    r7, r7, 13496
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(13496);

label_7F31A40C:
    ctx->pc = 0x7F31A40Cu;
    // 7F31A40C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A410:
    ctx->pc = 0x7F31A410u;
    ctx->downcount -= 7;
    // 7F31A410: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F31A414:
    ctx->pc = 0x7F31A414u;
    // 7F31A414: lis     r10, 1
    ctx->gpr[10] = ((u32)(s32)(1) << 16);

label_7F31A418:
    ctx->pc = 0x7F31A418u;
    // 7F31A418: lwz     r11, -3320(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-3320);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F31A41C:
    ctx->pc = 0x7F31A41Cu;
    // 7F31A41C: addi    r9, r10, -32768
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-32768);

label_7F31A420:
    ctx->pc = 0x7F31A420u;
    // 7F31A420: andi.   r11, r11, 0xA800
    {
        ctx->gpr[11] = ctx->gpr[11] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31A424:
    ctx->pc = 0x7F31A424u;
    // 7F31A424: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A428:
    ctx->pc = 0x7F31A428u;
    // 7F31A428: bc    12, 2, 0x7F31A4AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A4AC;
        }
    }

label_7F31A42C:
    ctx->pc = 0x7F31A42Cu;
    ctx->downcount -= 1;
    // 7F31A42C: bc    4, 0, 0x7F31A460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A460;
        }
    }

label_7F31A430:
    ctx->pc = 0x7F31A430u;
    ctx->downcount -= 2;
    // 7F31A430: cmpwi   r11, 8192
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A434:
    ctx->pc = 0x7F31A434u;
    // 7F31A434: bc    12, 2, 0x7F31A4C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A4C0;
        }
    }

label_7F31A438:
    ctx->pc = 0x7F31A438u;
    ctx->downcount -= 1;
    // 7F31A438: bc    4, 0, 0x7F31A454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A454;
        }
    }

label_7F31A43C:
    ctx->pc = 0x7F31A43Cu;
    ctx->downcount -= 2;
    // 7F31A43C: cmpwi   r11, 2048
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A440:
    ctx->pc = 0x7F31A440u;
    // 7F31A440: bc    12, 2, 0x7F31A4F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A4F0;
        }
    }

label_7F31A444:
    ctx->pc = 0x7F31A444u;
    ctx->downcount -= 1;
    // 7F31A444: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F31A448:
    ctx->pc = 0x7F31A448u;
    ctx->downcount -= 2;
    // 7F31A448: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A44C:
    ctx->pc = 0x7F31A44Cu;
    // 7F31A44C: bc    12, 2, 0x7F31A490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A490;
        }
    }

label_7F31A450:
    ctx->pc = 0x7F31A450u;
    ctx->downcount -= 1;
    // 7F31A450: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A454:
    ctx->pc = 0x7F31A454u;
    ctx->downcount -= 2;
    // 7F31A454: cmpwi   r11, 10240
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A458:
    ctx->pc = 0x7F31A458u;
    // 7F31A458: bc    12, 2, 0x7F31A520
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A520;
        }
    }

label_7F31A45C:
    ctx->pc = 0x7F31A45Cu;
    ctx->downcount -= 1;
    // 7F31A45C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A460:
    ctx->pc = 0x7F31A460u;
    ctx->downcount -= 3;
    // 7F31A460: addi    r9, r10, -24576
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-24576);

label_7F31A464:
    ctx->pc = 0x7F31A464u;
    // 7F31A464: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A468:
    ctx->pc = 0x7F31A468u;
    // 7F31A468: bc    12, 2, 0x7F31A4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A4DC;
        }
    }

label_7F31A46C:
    ctx->pc = 0x7F31A46Cu;
    ctx->downcount -= 1;
    // 7F31A46C: bc    4, 0, 0x7F31A480
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A480;
        }
    }

label_7F31A470:
    ctx->pc = 0x7F31A470u;
    ctx->downcount -= 3;
    // 7F31A470: addi    r9, r10, -30720
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-30720);

label_7F31A474:
    ctx->pc = 0x7F31A474u;
    // 7F31A474: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A478:
    ctx->pc = 0x7F31A478u;
    // 7F31A478: bc    12, 2, 0x7F31A50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A50C;
        }
    }

label_7F31A47C:
    ctx->pc = 0x7F31A47Cu;
    ctx->downcount -= 1;
    // 7F31A47C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A480:
    ctx->pc = 0x7F31A480u;
    ctx->downcount -= 3;
    // 7F31A480: addi    r9, r10, -22528
    ctx->gpr[9] = ctx->gpr[10] + (u32)(s32)(-22528);

label_7F31A484:
    ctx->pc = 0x7F31A484u;
    // 7F31A484: cmpw    r11, r9
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A488:
    ctx->pc = 0x7F31A488u;
    // 7F31A488: bc    12, 2, 0x7F31A53C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A53C;
        }
    }

label_7F31A48C:
    ctx->pc = 0x7F31A48Cu;
    ctx->downcount -= 1;
    // 7F31A48C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A490:
    ctx->pc = 0x7F31A490u;
    ctx->downcount -= 7;
    // 7F31A490: lis     r9, 60
    ctx->gpr[9] = ((u32)(s32)(60) << 16);

label_7F31A494:
    ctx->pc = 0x7F31A494u;
    // 7F31A494: lis     r7, 24
    ctx->gpr[7] = ((u32)(s32)(24) << 16);

label_7F31A498:
    ctx->pc = 0x7F31A498u;
    // 7F31A498: lis     r8, 66
    ctx->gpr[8] = ((u32)(s32)(66) << 16);

label_7F31A49C:
    ctx->pc = 0x7F31A49Cu;
    // 7F31A49C: addi    r0, r9, 27780
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(27780);

label_7F31A4A0:
    ctx->pc = 0x7F31A4A0u;
    // 7F31A4A0: addi    r7, r7, 16236
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16236);

label_7F31A4A4:
    ctx->pc = 0x7F31A4A4u;
    // 7F31A4A4: addi    r8, r8, -13345
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-13345);

label_7F31A4A8:
    ctx->pc = 0x7F31A4A8u;
    // 7F31A4A8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A4AC:
    ctx->pc = 0x7F31A4ACu;
    ctx->downcount -= 5;
    // 7F31A4AC: lis     r9, 60
    ctx->gpr[9] = ((u32)(s32)(60) << 16);

label_7F31A4B0:
    ctx->pc = 0x7F31A4B0u;
    // 7F31A4B0: lis     r7, 24
    ctx->gpr[7] = ((u32)(s32)(24) << 16);

label_7F31A4B4:
    ctx->pc = 0x7F31A4B4u;
    // 7F31A4B4: addi    r0, r9, 27781
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(27781);

label_7F31A4B8:
    ctx->pc = 0x7F31A4B8u;
    // 7F31A4B8: addi    r7, r7, 16237
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16237);

label_7F31A4BC:
    ctx->pc = 0x7F31A4BCu;
    // 7F31A4BC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A4C0:
    ctx->pc = 0x7F31A4C0u;
    ctx->downcount -= 7;
    // 7F31A4C0: lis     r9, 60
    ctx->gpr[9] = ((u32)(s32)(60) << 16);

label_7F31A4C4:
    ctx->pc = 0x7F31A4C4u;
    // 7F31A4C4: lis     r7, 24
    ctx->gpr[7] = ((u32)(s32)(24) << 16);

label_7F31A4C8:
    ctx->pc = 0x7F31A4C8u;
    // 7F31A4C8: lis     r8, 36
    ctx->gpr[8] = ((u32)(s32)(36) << 16);

label_7F31A4CC:
    ctx->pc = 0x7F31A4CCu;
    // 7F31A4CC: addi    r0, r9, 27812
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(27812);

label_7F31A4D0:
    ctx->pc = 0x7F31A4D0u;
    // 7F31A4D0: addi    r7, r7, 16268
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16268);

label_7F31A4D4:
    ctx->pc = 0x7F31A4D4u;
    // 7F31A4D4: addi    r8, r8, 26353
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(26353);

label_7F31A4D8:
    ctx->pc = 0x7F31A4D8u;
    // 7F31A4D8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A4DC:
    ctx->pc = 0x7F31A4DCu;
    ctx->downcount -= 5;
    // 7F31A4DC: lis     r9, 60
    ctx->gpr[9] = ((u32)(s32)(60) << 16);

label_7F31A4E0:
    ctx->pc = 0x7F31A4E0u;
    // 7F31A4E0: lis     r7, 24
    ctx->gpr[7] = ((u32)(s32)(24) << 16);

label_7F31A4E4:
    ctx->pc = 0x7F31A4E4u;
    // 7F31A4E4: addi    r0, r9, 27813
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(27813);

label_7F31A4E8:
    ctx->pc = 0x7F31A4E8u;
    // 7F31A4E8: addi    r7, r7, 16269
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16269);

label_7F31A4EC:
    ctx->pc = 0x7F31A4ECu;
    // 7F31A4EC: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A4F0:
    ctx->pc = 0x7F31A4F0u;
    ctx->downcount -= 7;
    // 7F31A4F0: lis     r9, 60
    ctx->gpr[9] = ((u32)(s32)(60) << 16);

label_7F31A4F4:
    ctx->pc = 0x7F31A4F4u;
    // 7F31A4F4: lis     r7, 24
    ctx->gpr[7] = ((u32)(s32)(24) << 16);

label_7F31A4F8:
    ctx->pc = 0x7F31A4F8u;
    // 7F31A4F8: lis     r8, 36
    ctx->gpr[8] = ((u32)(s32)(36) << 16);

label_7F31A4FC:
    ctx->pc = 0x7F31A4FCu;
    // 7F31A4FC: addi    r0, r9, 28804
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(28804);

label_7F31A500:
    ctx->pc = 0x7F31A500u;
    // 7F31A500: addi    r7, r7, 17260
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(17260);

label_7F31A504:
    ctx->pc = 0x7F31A504u;
    // 7F31A504: addi    r8, r8, 26353
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(26353);

label_7F31A508:
    ctx->pc = 0x7F31A508u;
    // 7F31A508: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A50C:
    ctx->pc = 0x7F31A50Cu;
    ctx->downcount -= 5;
    // 7F31A50C: lis     r9, 60
    ctx->gpr[9] = ((u32)(s32)(60) << 16);

label_7F31A510:
    ctx->pc = 0x7F31A510u;
    // 7F31A510: lis     r7, 24
    ctx->gpr[7] = ((u32)(s32)(24) << 16);

label_7F31A514:
    ctx->pc = 0x7F31A514u;
    // 7F31A514: addi    r0, r9, 28805
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(28805);

label_7F31A518:
    ctx->pc = 0x7F31A518u;
    // 7F31A518: addi    r7, r7, 17261
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(17261);

label_7F31A51C:
    ctx->pc = 0x7F31A51Cu;
    // 7F31A51C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A520:
    ctx->pc = 0x7F31A520u;
    ctx->downcount -= 7;
    // 7F31A520: lis     r9, 60
    ctx->gpr[9] = ((u32)(s32)(60) << 16);

label_7F31A524:
    ctx->pc = 0x7F31A524u;
    // 7F31A524: lis     r7, 24
    ctx->gpr[7] = ((u32)(s32)(24) << 16);

label_7F31A528:
    ctx->pc = 0x7F31A528u;
    // 7F31A528: lis     r8, 66
    ctx->gpr[8] = ((u32)(s32)(66) << 16);

label_7F31A52C:
    ctx->pc = 0x7F31A52Cu;
    // 7F31A52C: addi    r0, r9, 28836
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(28836);

label_7F31A530:
    ctx->pc = 0x7F31A530u;
    // 7F31A530: addi    r7, r7, 17292
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(17292);

label_7F31A534:
    ctx->pc = 0x7F31A534u;
    // 7F31A534: addi    r8, r8, -12289
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-12289);

label_7F31A538:
    ctx->pc = 0x7F31A538u;
    // 7F31A538: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A53C:
    ctx->pc = 0x7F31A53Cu;
    ctx->downcount -= 5;
    // 7F31A53C: lis     r9, 60
    ctx->gpr[9] = ((u32)(s32)(60) << 16);

label_7F31A540:
    ctx->pc = 0x7F31A540u;
    // 7F31A540: lis     r7, 24
    ctx->gpr[7] = ((u32)(s32)(24) << 16);

label_7F31A544:
    ctx->pc = 0x7F31A544u;
    // 7F31A544: addi    r0, r9, 28837
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(28837);

label_7F31A548:
    ctx->pc = 0x7F31A548u;
    // 7F31A548: addi    r7, r7, 17293
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(17293);

label_7F31A54C:
    ctx->pc = 0x7F31A54Cu;
    // 7F31A54C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A550:
    ctx->pc = 0x7F31A550u;
    ctx->downcount -= 6;
    // 7F31A550: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F31A554:
    ctx->pc = 0x7F31A554u;
    // 7F31A554: addi    r9, r9, -3320
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(-3320);

label_7F31A558:
    ctx->pc = 0x7F31A558u;
    // 7F31A558: lwz     r9, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F31A55C:
    ctx->pc = 0x7F31A55Cu;
    // 7F31A55C: andi.   r9, r9, 0x2800
    {
        ctx->gpr[9] = ctx->gpr[9] & 0x2800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[9];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31A560:
    ctx->pc = 0x7F31A560u;
    // 7F31A560: cmpwi   r9, 8192
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A564:
    ctx->pc = 0x7F31A564u;
    // 7F31A564: bc    12, 2, 0x7F31A5A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5A4;
        }
    }

label_7F31A568:
    ctx->pc = 0x7F31A568u;
    ctx->downcount -= 1;
    // 7F31A568: bc    4, 0, 0x7F31A584
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A584;
        }
    }

label_7F31A56C:
    ctx->pc = 0x7F31A56Cu;
    ctx->downcount -= 2;
    // 7F31A56C: cmpwi   r9, 2048
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A570:
    ctx->pc = 0x7F31A570u;
    // 7F31A570: bc    12, 2, 0x7F31A5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5B8;
        }
    }

label_7F31A574:
    ctx->pc = 0x7F31A574u;
    ctx->downcount -= 1;
    // 7F31A574: bc    4, 0, 0x7F31A5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5DC;
        }
    }

label_7F31A578:
    ctx->pc = 0x7F31A578u;
    ctx->downcount -= 2;
    // 7F31A578: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A57C:
    ctx->pc = 0x7F31A57Cu;
    // 7F31A57C: bc    12, 2, 0x7F31A590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A590;
        }
    }

label_7F31A580:
    ctx->pc = 0x7F31A580u;
    ctx->downcount -= 1;
    // 7F31A580: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A584:
    ctx->pc = 0x7F31A584u;
    ctx->downcount -= 2;
    // 7F31A584: cmpwi   r9, 10240
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31A588:
    ctx->pc = 0x7F31A588u;
    // 7F31A588: bc    12, 2, 0x7F31A5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5CC;
        }
    }

label_7F31A58C:
    ctx->pc = 0x7F31A58Cu;
    ctx->downcount -= 1;
    // 7F31A58C: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A590:
    ctx->pc = 0x7F31A590u;
    ctx->downcount -= 5;
    // 7F31A590: lis     r9, 1
    ctx->gpr[9] = ((u32)(s32)(1) << 16);

label_7F31A594:
    ctx->pc = 0x7F31A594u;
    // 7F31A594: lis     r7, 116
    ctx->gpr[7] = ((u32)(s32)(116) << 16);

label_7F31A598:
    ctx->pc = 0x7F31A598u;
    // 7F31A598: addi    r0, r9, -30026
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-30026);

label_7F31A59C:
    ctx->pc = 0x7F31A59Cu;
    // 7F31A59C: addi    r7, r7, 30879
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(30879);

label_7F31A5A0:
    ctx->pc = 0x7F31A5A0u;
    // 7F31A5A0: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A5A4:
    ctx->pc = 0x7F31A5A4u;
    ctx->downcount -= 5;
    // 7F31A5A4: lis     r9, 1
    ctx->gpr[9] = ((u32)(s32)(1) << 16);

label_7F31A5A8:
    ctx->pc = 0x7F31A5A8u;
    // 7F31A5A8: lis     r7, 116
    ctx->gpr[7] = ((u32)(s32)(116) << 16);

label_7F31A5AC:
    ctx->pc = 0x7F31A5ACu;
    // 7F31A5AC: addi    r0, r9, -29994
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-29994);

label_7F31A5B0:
    ctx->pc = 0x7F31A5B0u;
    // 7F31A5B0: addi    r7, r7, 30911
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(30911);

label_7F31A5B4:
    ctx->pc = 0x7F31A5B4u;
    // 7F31A5B4: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A5B8:
    ctx->pc = 0x7F31A5B8u;
    ctx->downcount -= 5;
    // 7F31A5B8: lis     r9, 1
    ctx->gpr[9] = ((u32)(s32)(1) << 16);

label_7F31A5BC:
    ctx->pc = 0x7F31A5BCu;
    // 7F31A5BC: lis     r7, 116
    ctx->gpr[7] = ((u32)(s32)(116) << 16);

label_7F31A5C0:
    ctx->pc = 0x7F31A5C0u;
    // 7F31A5C0: addi    r0, r9, -29002
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-29002);

label_7F31A5C4:
    ctx->pc = 0x7F31A5C4u;
    // 7F31A5C4: addi    r7, r7, 30911
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(30911);

label_7F31A5C8:
    ctx->pc = 0x7F31A5C8u;
    // 7F31A5C8: b       0x7F31A5DC
    {
            goto label_7F31A5DC;
    }

label_7F31A5CC:
    ctx->pc = 0x7F31A5CCu;
    ctx->downcount -= 4;
    // 7F31A5CC: lis     r9, 1
    ctx->gpr[9] = ((u32)(s32)(1) << 16);

label_7F31A5D0:
    ctx->pc = 0x7F31A5D0u;
    // 7F31A5D0: lis     r7, 116
    ctx->gpr[7] = ((u32)(s32)(116) << 16);

label_7F31A5D4:
    ctx->pc = 0x7F31A5D4u;
    // 7F31A5D4: addi    r0, r9, -28970
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(-28970);

label_7F31A5D8:
    ctx->pc = 0x7F31A5D8u;
    // 7F31A5D8: addi    r7, r7, 31935
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(31935);

label_7F31A5DC:
    ctx->pc = 0x7F31A5DCu;
    ctx->downcount -= 2;
    // 7F31A5DC: cmplwi  r4, 0x0000
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

label_7F31A5E0:
    ctx->pc = 0x7F31A5E0u;
    // 7F31A5E0: bc    12, 2, 0x7F31A5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5E8;
        }
    }

label_7F31A5E4:
    ctx->pc = 0x7F31A5E4u;
    ctx->downcount -= 1;
    // 7F31A5E4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A5E8:
    ctx->pc = 0x7F31A5E8u;
    ctx->downcount -= 2;
    // 7F31A5E8: cmplwi  r5, 0x0000
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

label_7F31A5EC:
    ctx->pc = 0x7F31A5ECu;
    // 7F31A5EC: bc    12, 2, 0x7F31A5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A5F4;
        }
    }

label_7F31A5F0:
    ctx->pc = 0x7F31A5F0u;
    ctx->downcount -= 1;
    // 7F31A5F0: stw     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F31A5F4:
    ctx->pc = 0x7F31A5F4u;
    ctx->downcount -= 2;
    // 7F31A5F4: cmplwi  r6, 0x0000
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

label_7F31A5F8:
    ctx->pc = 0x7F31A5F8u;
    // 7F31A5F8: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31A5FC:
    ctx->pc = 0x7F31A5FCu;
    ctx->downcount -= 9;
    // 7F31A5FC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F31A600:
    ctx->pc = 0x7F31A600u;
    // 7F31A600: stw     r8, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F31A604:
    ctx->pc = 0x7F31A604u;
    // 7F31A604: addi    r5, r4, -3320
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-3320);

label_7F31A608:
    ctx->pc = 0x7F31A608u;
    // 7F31A608: li      r0, 256
    ctx->gpr[0] = (u32)(s32)(256);

label_7F31A60C:
    ctx->pc = 0x7F31A60Cu;
    // 7F31A60C: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31A610:
    ctx->pc = 0x7F31A610u;
    // 7F31A610: slw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F31A614:
    ctx->pc = 0x7F31A614u;
    // 7F31A614: or   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F31A618:
    ctx->pc = 0x7F31A618u;
    // 7F31A618: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A61C:
    ctx->pc = 0x7F31A61Cu;
    // 7F31A61C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31A620:
    ctx->pc = 0x7F31A620u;
    ctx->downcount -= 22;
    // 7F31A620: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31A624:
    ctx->pc = 0x7F31A624u;
    // 7F31A624: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31A628:
    ctx->pc = 0x7F31A628u;
    // 7F31A628: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F31A62C:
    ctx->pc = 0x7F31A62Cu;
    // 7F31A62C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A630:
    ctx->pc = 0x7F31A630u;
    // 7F31A630: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31A634:
    ctx->pc = 0x7F31A634u;
    // 7F31A634: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31A638:
    ctx->pc = 0x7F31A638u;
    // 7F31A638: li      r31, -1
    ctx->gpr[31] = (u32)(s32)(-1);

label_7F31A63C:
    ctx->pc = 0x7F31A63Cu;
    // 7F31A63C: stw     r6, 368(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31A640:
    ctx->pc = 0x7F31A640u;
    // 7F31A640: lwz     r3, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A644:
    ctx->pc = 0x7F31A644u;
    // 7F31A644: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F31A648:
    ctx->pc = 0x7F31A648u;
    // 7F31A648: cmplwi  r0, 0x0006
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

label_7F31A64C:
    ctx->pc = 0x7F31A64Cu;
    // 7F31A64C: bc    12, 1, 0x7F31B360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B360;
        }
    }

label_7F31A650:
    ctx->pc = 0x7F31A650u;
    ctx->downcount -= 7;
    // 7F31A650: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31A654:
    ctx->pc = 0x7F31A654u;
    // 7F31A654: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31A658:
    ctx->pc = 0x7F31A658u;
    // 7F31A658: addi    r3, r3, -25420
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25420);

label_7F31A65C:
    ctx->pc = 0x7F31A65Cu;
    // 7F31A65C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A660:
    ctx->pc = 0x7F31A660u;
    // 7F31A660: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31A664:
    ctx->pc = 0x7F31A664u;
    // 7F31A664: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F31A668:
    ctx->pc = 0x7F31A668u;
    ctx->downcount -= 3;
    // 7F31A668: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A66C:
    ctx->pc = 0x7F31A66Cu;
    // 7F31A66C: rlwinm. r0, r3, 0, 26, 26
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

label_7F31A670:
    ctx->pc = 0x7F31A670u;
    // 7F31A670: bc    12, 2, 0x7F31A6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A6A8;
        }
    }

label_7F31A674:
    ctx->pc = 0x7F31A674u;
    ctx->downcount -= 12;
    // 7F31A674: lis     r3, 189
    ctx->gpr[3] = ((u32)(s32)(189) << 16);

label_7F31A678:
    ctx->pc = 0x7F31A678u;
    // 7F31A678: lwz     r31, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31A67C:
    ctx->pc = 0x7F31A67Cu;
    // 7F31A67C: addi    r3, r3, 32165
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32165);

label_7F31A680:
    ctx->pc = 0x7F31A680u;
    // 7F31A680: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31A684:
    ctx->pc = 0x7F31A684u;
    // 7F31A684: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31A688:
    ctx->pc = 0x7F31A688u;
    // 7F31A688: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A68C:
    ctx->pc = 0x7F31A68Cu;
    // 7F31A68C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A690:
    ctx->pc = 0x7F31A690u;
    // 7F31A690: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F31A694:
    ctx->pc = 0x7F31A694u;
    // 7F31A694: stw     r0, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A698:
    ctx->pc = 0x7F31A698u;
    // 7F31A698: stw     r0, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A69C:
    ctx->pc = 0x7F31A69Cu;
    // 7F31A69C: stw     r6, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31A6A0:
    ctx->pc = 0x7F31A6A0u;
    // 7F31A6A0: bl      0x7F011698
    {
            ctx->lr = 0x7F31A6A4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A6A4:
    ctx->pc = 0x7F31A6A4u;
    ctx->downcount -= 1;
    // 7F31A6A4: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A6A8:
    ctx->pc = 0x7F31A6A8u;
    ctx->downcount -= 2;
    // 7F31A6A8: rlwinm. r0, r3, 0, 24, 24
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

label_7F31A6AC:
    ctx->pc = 0x7F31A6ACu;
    // 7F31A6AC: bc    12, 2, 0x7F31A6EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A6EC;
        }
    }

label_7F31A6B0:
    ctx->pc = 0x7F31A6B0u;
    ctx->downcount -= 14;
    // 7F31A6B0: lwz     r5, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31A6B4:
    ctx->pc = 0x7F31A6B4u;
    // 7F31A6B4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31A6B8:
    ctx->pc = 0x7F31A6B8u;
    // 7F31A6B8: addi    r4, r3, -29360
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29360);

label_7F31A6BC:
    ctx->pc = 0x7F31A6BCu;
    // 7F31A6BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31A6C0:
    ctx->pc = 0x7F31A6C0u;
    // 7F31A6C0: rlwinm r5, r5, 2, 0, 29
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F31A6C4:
    ctx->pc = 0x7F31A6C4u;
    // 7F31A6C4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A6C8:
    ctx->pc = 0x7F31A6C8u;
    // 7F31A6C8: lwzx    r6, r4, r5
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[5];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31A6CC:
    ctx->pc = 0x7F31A6CCu;
    // 7F31A6CC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A6D0:
    ctx->pc = 0x7F31A6D0u;
    // 7F31A6D0: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F31A6D4:
    ctx->pc = 0x7F31A6D4u;
    // 7F31A6D4: stw     r6, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31A6D8:
    ctx->pc = 0x7F31A6D8u;
    // 7F31A6D8: lwz     r6, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31A6DC:
    ctx->pc = 0x7F31A6DCu;
    // 7F31A6DC: stw     r6, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31A6E0:
    ctx->pc = 0x7F31A6E0u;
    // 7F31A6E0: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A6E4:
    ctx->pc = 0x7F31A6E4u;
    // 7F31A6E4: bl      0x7F011698
    {
            ctx->lr = 0x7F31A6E8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A6E8:
    ctx->pc = 0x7F31A6E8u;
    ctx->downcount -= 1;
    // 7F31A6E8: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A6EC:
    ctx->pc = 0x7F31A6ECu;
    ctx->downcount -= 3;
    // 7F31A6EC: andi.   r0, r3, 0x5000
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

label_7F31A6F0:
    ctx->pc = 0x7F31A6F0u;
    // 7F31A6F0: cmpwi   r0, 16384
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

label_7F31A6F4:
    ctx->pc = 0x7F31A6F4u;
    // 7F31A6F4: bc    12, 2, 0x7F31A76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A76C;
        }
    }

label_7F31A6F8:
    ctx->pc = 0x7F31A6F8u;
    ctx->downcount -= 1;
    // 7F31A6F8: bc    4, 0, 0x7F31A704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A704;
        }
    }

label_7F31A6FC:
    ctx->pc = 0x7F31A6FCu;
    ctx->downcount -= 2;
    // 7F31A6FC: cmpwi   r0, 4096
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

label_7F31A700:
    ctx->pc = 0x7F31A700u;
    // 7F31A700: bc    12, 2, 0x7F31A71C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A71C;
        }
    }

label_7F31A704:
    ctx->pc = 0x7F31A704u;
    ctx->downcount -= 3;
    // 7F31A704: lwz     r3, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A708:
    ctx->pc = 0x7F31A708u;
    // 7F31A708: cmpwi   r3, 4
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

label_7F31A70C:
    ctx->pc = 0x7F31A70Cu;
    // 7F31A70C: bc    12, 2, 0x7F31B360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B360;
        }
    }

label_7F31A710:
    ctx->pc = 0x7F31A710u;
    ctx->downcount -= 3;
    // 7F31A710: addi    r0, r3, 22
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22);

label_7F31A714:
    ctx->pc = 0x7F31A714u;
    // 7F31A714: stw     r0, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A718:
    ctx->pc = 0x7F31A718u;
    // 7F31A718: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A71C:
    ctx->pc = 0x7F31A71Cu;
    ctx->downcount -= 13;
    // 7F31A71C: lwz     r4, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31A720:
    ctx->pc = 0x7F31A720u;
    // 7F31A720: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31A724:
    ctx->pc = 0x7F31A724u;
    // 7F31A724: addi    r3, r3, -29320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29320);

label_7F31A728:
    ctx->pc = 0x7F31A728u;
    // 7F31A728: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F31A72C:
    ctx->pc = 0x7F31A72Cu;
    // 7F31A72C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F31A730:
    ctx->pc = 0x7F31A730u;
    // 7F31A730: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A734:
    ctx->pc = 0x7F31A734u;
    // 7F31A734: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A738:
    ctx->pc = 0x7F31A738u;
    // 7F31A738: lwz     r3, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A73C:
    ctx->pc = 0x7F31A73Cu;
    // 7F31A73C: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F31A740:
    ctx->pc = 0x7F31A740u;
    // 7F31A740: stw     r0, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A744:
    ctx->pc = 0x7F31A744u;
    // 7F31A744: lwz     r0, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A748:
    ctx->pc = 0x7F31A748u;
    // 7F31A748: cmpwi   r0, 0
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

label_7F31A74C:
    ctx->pc = 0x7F31A74Cu;
    // 7F31A74C: bc    4, 0, 0x7F31A758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A758;
        }
    }

label_7F31A750:
    ctx->pc = 0x7F31A750u;
    ctx->downcount -= 2;
    // 7F31A750: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31A754:
    ctx->pc = 0x7F31A754u;
    // 7F31A754: stw     r0, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A758:
    ctx->pc = 0x7F31A758u;
    ctx->downcount -= 4;
    // 7F31A758: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A75C:
    ctx->pc = 0x7F31A75Cu;
    // 7F31A75C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A760:
    ctx->pc = 0x7F31A760u;
    // 7F31A760: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31A764:
    ctx->pc = 0x7F31A764u;
    // 7F31A764: bl      0x7F011698
    {
            ctx->lr = 0x7F31A768u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A768:
    ctx->pc = 0x7F31A768u;
    ctx->downcount -= 1;
    // 7F31A768: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A76C:
    ctx->pc = 0x7F31A76Cu;
    ctx->downcount -= 13;
    // 7F31A76C: lwz     r4, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31A770:
    ctx->pc = 0x7F31A770u;
    // 7F31A770: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31A774:
    ctx->pc = 0x7F31A774u;
    // 7F31A774: addi    r3, r3, -29340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29340);

label_7F31A778:
    ctx->pc = 0x7F31A778u;
    // 7F31A778: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_7F31A77C:
    ctx->pc = 0x7F31A77Cu;
    // 7F31A77C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F31A780:
    ctx->pc = 0x7F31A780u;
    // 7F31A780: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A784:
    ctx->pc = 0x7F31A784u;
    // 7F31A784: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A788:
    ctx->pc = 0x7F31A788u;
    // 7F31A788: lwz     r3, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A78C:
    ctx->pc = 0x7F31A78Cu;
    // 7F31A78C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F31A790:
    ctx->pc = 0x7F31A790u;
    // 7F31A790: stw     r0, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A794:
    ctx->pc = 0x7F31A794u;
    // 7F31A794: lwz     r0, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A798:
    ctx->pc = 0x7F31A798u;
    // 7F31A798: cmpwi   r0, 5
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

label_7F31A79C:
    ctx->pc = 0x7F31A79Cu;
    // 7F31A79C: bc    12, 0, 0x7F31A7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A7A8;
        }
    }

label_7F31A7A0:
    ctx->pc = 0x7F31A7A0u;
    ctx->downcount -= 2;
    // 7F31A7A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31A7A4:
    ctx->pc = 0x7F31A7A4u;
    // 7F31A7A4: stw     r0, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A7A8:
    ctx->pc = 0x7F31A7A8u;
    ctx->downcount -= 4;
    // 7F31A7A8: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A7AC:
    ctx->pc = 0x7F31A7ACu;
    // 7F31A7AC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A7B0:
    ctx->pc = 0x7F31A7B0u;
    // 7F31A7B0: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31A7B4:
    ctx->pc = 0x7F31A7B4u;
    // 7F31A7B4: bl      0x7F011698
    {
            ctx->lr = 0x7F31A7B8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A7B8:
    ctx->pc = 0x7F31A7B8u;
    ctx->downcount -= 1;
    // 7F31A7B8: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A7BC:
    ctx->pc = 0x7F31A7BCu;
    ctx->downcount -= 3;
    // 7F31A7BC: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A7C0:
    ctx->pc = 0x7F31A7C0u;
    // 7F31A7C0: rlwinm. r0, r3, 0, 26, 26
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

label_7F31A7C4:
    ctx->pc = 0x7F31A7C4u;
    // 7F31A7C4: bc    12, 2, 0x7F31A7EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A7EC;
        }
    }

label_7F31A7C8:
    ctx->pc = 0x7F31A7C8u;
    ctx->downcount -= 8;
    // 7F31A7C8: lis     r3, 176
    ctx->gpr[3] = ((u32)(s32)(176) << 16);

label_7F31A7CC:
    ctx->pc = 0x7F31A7CCu;
    // 7F31A7CC: stw     r6, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31A7D0:
    ctx->pc = 0x7F31A7D0u;
    // 7F31A7D0: addi    r0, r3, 2089
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2089);

label_7F31A7D4:
    ctx->pc = 0x7F31A7D4u;
    // 7F31A7D4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A7D8:
    ctx->pc = 0x7F31A7D8u;
    // 7F31A7D8: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A7DC:
    ctx->pc = 0x7F31A7DCu;
    // 7F31A7DC: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A7E0:
    ctx->pc = 0x7F31A7E0u;
    // 7F31A7E0: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F31A7E4:
    ctx->pc = 0x7F31A7E4u;
    // 7F31A7E4: bl      0x7F011698
    {
            ctx->lr = 0x7F31A7E8u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A7E8:
    ctx->pc = 0x7F31A7E8u;
    ctx->downcount -= 1;
    // 7F31A7E8: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A7EC:
    ctx->pc = 0x7F31A7ECu;
    ctx->downcount -= 2;
    // 7F31A7EC: rlwinm. r0, r3, 0, 24, 24
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

label_7F31A7F0:
    ctx->pc = 0x7F31A7F0u;
    // 7F31A7F0: bc    12, 2, 0x7F31A824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A824;
        }
    }

label_7F31A7F4:
    ctx->pc = 0x7F31A7F4u;
    ctx->downcount -= 5;
    // 7F31A7F4: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A7F8:
    ctx->pc = 0x7F31A7F8u;
    // 7F31A7F8: addi    r4, r30, 64
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(64);

label_7F31A7FC:
    ctx->pc = 0x7F31A7FCu;
    // 7F31A7FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31A800:
    ctx->pc = 0x7F31A800u;
    // 7F31A800: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31A804:
    ctx->pc = 0x7F31A804u;
    // 7F31A804: bl      0x7F319934
    {
            ctx->lr = 0x7F31A808u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319934u;
                return;
            }
            goto label_7F319934;
    }

label_7F31A808:
    ctx->pc = 0x7F31A808u;
    ctx->downcount -= 6;
    // 7F31A808: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31A80C:
    ctx->pc = 0x7F31A80Cu;
    // 7F31A80C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A810:
    ctx->pc = 0x7F31A810u;
    // 7F31A810: stw     r0, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A814:
    ctx->pc = 0x7F31A814u;
    // 7F31A814: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A818:
    ctx->pc = 0x7F31A818u;
    // 7F31A818: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F31A81C:
    ctx->pc = 0x7F31A81Cu;
    // 7F31A81C: bl      0x7F011698
    {
            ctx->lr = 0x7F31A820u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A820:
    ctx->pc = 0x7F31A820u;
    ctx->downcount -= 1;
    // 7F31A820: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A824:
    ctx->pc = 0x7F31A824u;
    ctx->downcount -= 3;
    // 7F31A824: andi.   r0, r3, 0x5000
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

label_7F31A828:
    ctx->pc = 0x7F31A828u;
    // 7F31A828: cmpwi   r0, 16384
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

label_7F31A82C:
    ctx->pc = 0x7F31A82Cu;
    // 7F31A82C: bc    12, 2, 0x7F31A84C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A84C;
        }
    }

label_7F31A830:
    ctx->pc = 0x7F31A830u;
    ctx->downcount -= 1;
    // 7F31A830: bc    4, 0, 0x7F31A83C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A83C;
        }
    }

label_7F31A834:
    ctx->pc = 0x7F31A834u;
    ctx->downcount -= 2;
    // 7F31A834: cmpwi   r0, 4096
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

label_7F31A838:
    ctx->pc = 0x7F31A838u;
    // 7F31A838: bc    12, 2, 0x7F31A84C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A84C;
        }
    }

label_7F31A83C:
    ctx->pc = 0x7F31A83Cu;
    ctx->downcount -= 4;
    // 7F31A83C: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A840:
    ctx->pc = 0x7F31A840u;
    // 7F31A840: addi    r0, r3, 26
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(26);

label_7F31A844:
    ctx->pc = 0x7F31A844u;
    // 7F31A844: stw     r0, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A848:
    ctx->pc = 0x7F31A848u;
    // 7F31A848: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A84C:
    ctx->pc = 0x7F31A84Cu;
    ctx->downcount -= 3;
    // 7F31A84C: lwz     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A850:
    ctx->pc = 0x7F31A850u;
    // 7F31A850: cmpwi   r0, 1
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

label_7F31A854:
    ctx->pc = 0x7F31A854u;
    // 7F31A854: bc    12, 2, 0x7F31A8A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A8A0;
        }
    }

label_7F31A858:
    ctx->pc = 0x7F31A858u;
    ctx->downcount -= 1;
    // 7F31A858: bc    4, 0, 0x7F31B360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B360;
        }
    }

label_7F31A85C:
    ctx->pc = 0x7F31A85Cu;
    ctx->downcount -= 2;
    // 7F31A85C: cmpwi   r0, 0
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

label_7F31A860:
    ctx->pc = 0x7F31A860u;
    // 7F31A860: bc    4, 0, 0x7F31A868
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A868;
        }
    }

label_7F31A864:
    ctx->pc = 0x7F31A864u;
    ctx->downcount -= 1;
    // 7F31A864: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A868:
    ctx->pc = 0x7F31A868u;
    ctx->downcount -= 4;
    // 7F31A868: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31A86C:
    ctx->pc = 0x7F31A86Cu;
    // 7F31A86C: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A870:
    ctx->pc = 0x7F31A870u;
    // 7F31A870: rlwinm. r0, r0, 0, 30, 30
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

label_7F31A874:
    ctx->pc = 0x7F31A874u;
    // 7F31A874: bc    12, 2, 0x7F31B360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B360;
        }
    }

label_7F31A878:
    ctx->pc = 0x7F31A878u;
    ctx->downcount -= 9;
    // 7F31A878: lis     r3, 32
    ctx->gpr[3] = ((u32)(s32)(32) << 16);

label_7F31A87C:
    ctx->pc = 0x7F31A87Cu;
    // 7F31A87C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31A880:
    ctx->pc = 0x7F31A880u;
    // 7F31A880: addi    r4, r3, 10083
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(10083);

label_7F31A884:
    ctx->pc = 0x7F31A884u;
    // 7F31A884: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A888:
    ctx->pc = 0x7F31A888u;
    // 7F31A888: stw     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31A88C:
    ctx->pc = 0x7F31A88Cu;
    // 7F31A88C: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A890:
    ctx->pc = 0x7F31A890u;
    // 7F31A890: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31A894:
    ctx->pc = 0x7F31A894u;
    // 7F31A894: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A898:
    ctx->pc = 0x7F31A898u;
    // 7F31A898: bl      0x7F011698
    {
            ctx->lr = 0x7F31A89Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A89C:
    ctx->pc = 0x7F31A89Cu;
    ctx->downcount -= 1;
    // 7F31A89C: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A8A0:
    ctx->pc = 0x7F31A8A0u;
    ctx->downcount -= 9;
    // 7F31A8A0: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F31A8A4:
    ctx->pc = 0x7F31A8A4u;
    // 7F31A8A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31A8A8:
    ctx->pc = 0x7F31A8A8u;
    // 7F31A8A8: addi    r4, r3, -26150
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-26150);

label_7F31A8AC:
    ctx->pc = 0x7F31A8ACu;
    // 7F31A8AC: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A8B0:
    ctx->pc = 0x7F31A8B0u;
    // 7F31A8B0: stw     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31A8B4:
    ctx->pc = 0x7F31A8B4u;
    // 7F31A8B4: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A8B8:
    ctx->pc = 0x7F31A8B8u;
    // 7F31A8B8: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31A8BC:
    ctx->pc = 0x7F31A8BCu;
    // 7F31A8BC: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A8C0:
    ctx->pc = 0x7F31A8C0u;
    // 7F31A8C0: bl      0x7F011698
    {
            ctx->lr = 0x7F31A8C4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A8C4:
    ctx->pc = 0x7F31A8C4u;
    ctx->downcount -= 1;
    // 7F31A8C4: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A8C8:
    ctx->pc = 0x7F31A8C8u;
    ctx->downcount -= 3;
    // 7F31A8C8: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A8CC:
    ctx->pc = 0x7F31A8CCu;
    // 7F31A8CC: rlwinm. r0, r3, 0, 26, 26
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

label_7F31A8D0:
    ctx->pc = 0x7F31A8D0u;
    // 7F31A8D0: bc    12, 2, 0x7F31A968
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A968;
        }
    }

label_7F31A8D4:
    ctx->pc = 0x7F31A8D4u;
    ctx->downcount -= 5;
    // 7F31A8D4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31A8D8:
    ctx->pc = 0x7F31A8D8u;
    // 7F31A8D8: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A8DC:
    ctx->pc = 0x7F31A8DCu;
    // 7F31A8DC: andi.   r0, r0, 0x0028
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0028u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31A8E0:
    ctx->pc = 0x7F31A8E0u;
    // 7F31A8E0: cmpwi   r0, 32
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

label_7F31A8E4:
    ctx->pc = 0x7F31A8E4u;
    // 7F31A8E4: bc    12, 2, 0x7F31A920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A920;
        }
    }

label_7F31A8E8:
    ctx->pc = 0x7F31A8E8u;
    ctx->downcount -= 1;
    // 7F31A8E8: bc    4, 0, 0x7F31A904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A904;
        }
    }

label_7F31A8EC:
    ctx->pc = 0x7F31A8ECu;
    ctx->downcount -= 2;
    // 7F31A8EC: cmpwi   r0, 8
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

label_7F31A8F0:
    ctx->pc = 0x7F31A8F0u;
    // 7F31A8F0: bc    12, 2, 0x7F31A930
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A930;
        }
    }

label_7F31A8F4:
    ctx->pc = 0x7F31A8F4u;
    ctx->downcount -= 1;
    // 7F31A8F4: bc    4, 0, 0x7F31A94C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A94C;
        }
    }

label_7F31A8F8:
    ctx->pc = 0x7F31A8F8u;
    ctx->downcount -= 2;
    // 7F31A8F8: cmpwi   r0, 0
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

label_7F31A8FC:
    ctx->pc = 0x7F31A8FCu;
    // 7F31A8FC: bc    12, 2, 0x7F31A910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A910;
        }
    }

label_7F31A900:
    ctx->pc = 0x7F31A900u;
    ctx->downcount -= 1;
    // 7F31A900: b       0x7F31A94C
    {
            goto label_7F31A94C;
    }

label_7F31A904:
    ctx->pc = 0x7F31A904u;
    ctx->downcount -= 2;
    // 7F31A904: cmpwi   r0, 40
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

label_7F31A908:
    ctx->pc = 0x7F31A908u;
    // 7F31A908: bc    12, 2, 0x7F31A940
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A940;
        }
    }

label_7F31A90C:
    ctx->pc = 0x7F31A90Cu;
    ctx->downcount -= 1;
    // 7F31A90C: b       0x7F31A94C
    {
            goto label_7F31A94C;
    }

label_7F31A910:
    ctx->pc = 0x7F31A910u;
    ctx->downcount -= 4;
    // 7F31A910: lis     r3, 22
    ctx->gpr[3] = ((u32)(s32)(22) << 16);

label_7F31A914:
    ctx->pc = 0x7F31A914u;
    // 7F31A914: addi    r0, r3, 23348
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(23348);

label_7F31A918:
    ctx->pc = 0x7F31A918u;
    // 7F31A918: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A91C:
    ctx->pc = 0x7F31A91Cu;
    // 7F31A91C: b       0x7F31A94C
    {
            goto label_7F31A94C;
    }

label_7F31A920:
    ctx->pc = 0x7F31A920u;
    ctx->downcount -= 4;
    // 7F31A920: lis     r3, 22
    ctx->gpr[3] = ((u32)(s32)(22) << 16);

label_7F31A924:
    ctx->pc = 0x7F31A924u;
    // 7F31A924: addi    r0, r3, 23349
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(23349);

label_7F31A928:
    ctx->pc = 0x7F31A928u;
    // 7F31A928: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A92C:
    ctx->pc = 0x7F31A92Cu;
    // 7F31A92C: b       0x7F31A94C
    {
            goto label_7F31A94C;
    }

label_7F31A930:
    ctx->pc = 0x7F31A930u;
    ctx->downcount -= 4;
    // 7F31A930: lis     r3, 22
    ctx->gpr[3] = ((u32)(s32)(22) << 16);

label_7F31A934:
    ctx->pc = 0x7F31A934u;
    // 7F31A934: addi    r0, r3, 23380
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(23380);

label_7F31A938:
    ctx->pc = 0x7F31A938u;
    // 7F31A938: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A93C:
    ctx->pc = 0x7F31A93Cu;
    // 7F31A93C: b       0x7F31A94C
    {
            goto label_7F31A94C;
    }

label_7F31A940:
    ctx->pc = 0x7F31A940u;
    ctx->downcount -= 3;
    // 7F31A940: lis     r3, 22
    ctx->gpr[3] = ((u32)(s32)(22) << 16);

label_7F31A944:
    ctx->pc = 0x7F31A944u;
    // 7F31A944: addi    r0, r3, 23381
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(23381);

label_7F31A948:
    ctx->pc = 0x7F31A948u;
    // 7F31A948: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A94C:
    ctx->pc = 0x7F31A94Cu;
    ctx->downcount -= 6;
    // 7F31A94C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31A950:
    ctx->pc = 0x7F31A950u;
    // 7F31A950: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A954:
    ctx->pc = 0x7F31A954u;
    // 7F31A954: stw     r0, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A958:
    ctx->pc = 0x7F31A958u;
    // 7F31A958: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A95C:
    ctx->pc = 0x7F31A95Cu;
    // 7F31A95C: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F31A960:
    ctx->pc = 0x7F31A960u;
    // 7F31A960: bl      0x7F011698
    {
            ctx->lr = 0x7F31A964u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A964:
    ctx->pc = 0x7F31A964u;
    ctx->downcount -= 1;
    // 7F31A964: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A968:
    ctx->pc = 0x7F31A968u;
    ctx->downcount -= 2;
    // 7F31A968: rlwinm. r0, r3, 0, 24, 24
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

label_7F31A96C:
    ctx->pc = 0x7F31A96Cu;
    // 7F31A96C: bc    12, 2, 0x7F31A9A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A9A0;
        }
    }

label_7F31A970:
    ctx->pc = 0x7F31A970u;
    ctx->downcount -= 5;
    // 7F31A970: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A974:
    ctx->pc = 0x7F31A974u;
    // 7F31A974: addi    r4, r30, 64
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(64);

label_7F31A978:
    ctx->pc = 0x7F31A978u;
    // 7F31A978: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31A97C:
    ctx->pc = 0x7F31A97Cu;
    // 7F31A97C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31A980:
    ctx->pc = 0x7F31A980u;
    // 7F31A980: bl      0x7F3199EC
    {
            ctx->lr = 0x7F31A984u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3199ECu;
                return;
            }
            goto label_7F3199EC;
    }

label_7F31A984:
    ctx->pc = 0x7F31A984u;
    ctx->downcount -= 6;
    // 7F31A984: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31A988:
    ctx->pc = 0x7F31A988u;
    // 7F31A988: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31A98C:
    ctx->pc = 0x7F31A98Cu;
    // 7F31A98C: stw     r0, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A990:
    ctx->pc = 0x7F31A990u;
    // 7F31A990: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31A994:
    ctx->pc = 0x7F31A994u;
    // 7F31A994: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F31A998:
    ctx->pc = 0x7F31A998u;
    // 7F31A998: bl      0x7F011698
    {
            ctx->lr = 0x7F31A99Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31A99C:
    ctx->pc = 0x7F31A99Cu;
    ctx->downcount -= 1;
    // 7F31A99C: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A9A0:
    ctx->pc = 0x7F31A9A0u;
    ctx->downcount -= 3;
    // 7F31A9A0: andi.   r0, r3, 0x5000
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

label_7F31A9A4:
    ctx->pc = 0x7F31A9A4u;
    // 7F31A9A4: cmpwi   r0, 16384
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

label_7F31A9A8:
    ctx->pc = 0x7F31A9A8u;
    // 7F31A9A8: bc    12, 2, 0x7F31AB34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AB34;
        }
    }

label_7F31A9AC:
    ctx->pc = 0x7F31A9ACu;
    ctx->downcount -= 1;
    // 7F31A9AC: bc    4, 0, 0x7F31A9B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A9B8;
        }
    }

label_7F31A9B0:
    ctx->pc = 0x7F31A9B0u;
    ctx->downcount -= 2;
    // 7F31A9B0: cmpwi   r0, 4096
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

label_7F31A9B4:
    ctx->pc = 0x7F31A9B4u;
    // 7F31A9B4: bc    12, 2, 0x7F31A9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31A9C8;
        }
    }

label_7F31A9B8:
    ctx->pc = 0x7F31A9B8u;
    ctx->downcount -= 4;
    // 7F31A9B8: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31A9BC:
    ctx->pc = 0x7F31A9BCu;
    // 7F31A9BC: addi    r0, r3, 28
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28);

label_7F31A9C0:
    ctx->pc = 0x7F31A9C0u;
    // 7F31A9C0: stw     r0, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31A9C4:
    ctx->pc = 0x7F31A9C4u;
    // 7F31A9C4: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31A9C8:
    ctx->pc = 0x7F31A9C8u;
    ctx->downcount -= 3;
    // 7F31A9C8: lwz     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31A9CC:
    ctx->pc = 0x7F31A9CCu;
    // 7F31A9CC: cmpwi   r0, 2
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

label_7F31A9D0:
    ctx->pc = 0x7F31A9D0u;
    // 7F31A9D0: bc    12, 2, 0x7F31AA10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AA10;
        }
    }

label_7F31A9D4:
    ctx->pc = 0x7F31A9D4u;
    ctx->downcount -= 1;
    // 7F31A9D4: bc    4, 0, 0x7F31A9E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A9E8;
        }
    }

label_7F31A9D8:
    ctx->pc = 0x7F31A9D8u;
    ctx->downcount -= 2;
    // 7F31A9D8: cmpwi   r0, 0
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

label_7F31A9DC:
    ctx->pc = 0x7F31A9DCu;
    // 7F31A9DC: bc    12, 2, 0x7F31AB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AB20;
        }
    }

label_7F31A9E0:
    ctx->pc = 0x7F31A9E0u;
    ctx->downcount -= 1;
    // 7F31A9E0: bc    4, 0, 0x7F31A9F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31A9F8;
        }
    }

label_7F31A9E4:
    ctx->pc = 0x7F31A9E4u;
    ctx->downcount -= 1;
    // 7F31A9E4: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31A9E8:
    ctx->pc = 0x7F31A9E8u;
    ctx->downcount -= 2;
    // 7F31A9E8: cmpwi   r0, 4
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

label_7F31A9EC:
    ctx->pc = 0x7F31A9ECu;
    // 7F31A9EC: bc    12, 2, 0x7F31AA88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AA88;
        }
    }

label_7F31A9F0:
    ctx->pc = 0x7F31A9F0u;
    ctx->downcount -= 1;
    // 7F31A9F0: bc    4, 0, 0x7F31AB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AB20;
        }
    }

label_7F31A9F4:
    ctx->pc = 0x7F31A9F4u;
    ctx->downcount -= 1;
    // 7F31A9F4: b       0x7F31AA50
    {
            goto label_7F31AA50;
    }

label_7F31A9F8:
    ctx->pc = 0x7F31A9F8u;
    ctx->downcount -= 6;
    // 7F31A9F8: lis     r3, 21
    ctx->gpr[3] = ((u32)(s32)(21) << 16);

label_7F31A9FC:
    ctx->pc = 0x7F31A9FCu;
    // 7F31A9FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31AA00:
    ctx->pc = 0x7F31AA00u;
    // 7F31AA00: addi    r3, r3, -324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-324);

label_7F31AA04:
    ctx->pc = 0x7F31AA04u;
    // 7F31AA04: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AA08:
    ctx->pc = 0x7F31AA08u;
    // 7F31AA08: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AA0C:
    ctx->pc = 0x7F31AA0Cu;
    // 7F31AA0C: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AA10:
    ctx->pc = 0x7F31AA10u;
    ctx->downcount -= 4;
    // 7F31AA10: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AA14:
    ctx->pc = 0x7F31AA14u;
    // 7F31AA14: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AA18:
    ctx->pc = 0x7F31AA18u;
    // 7F31AA18: rlwinm. r0, r0, 0, 28, 28
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

label_7F31AA1C:
    ctx->pc = 0x7F31AA1Cu;
    // 7F31AA1C: bc    12, 2, 0x7F31AA38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AA38;
        }
    }

label_7F31AA20:
    ctx->pc = 0x7F31AA20u;
    ctx->downcount -= 6;
    // 7F31AA20: lis     r3, 122
    ctx->gpr[3] = ((u32)(s32)(122) << 16);

label_7F31AA24:
    ctx->pc = 0x7F31AA24u;
    // 7F31AA24: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31AA28:
    ctx->pc = 0x7F31AA28u;
    // 7F31AA28: addi    r3, r3, -25668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25668);

label_7F31AA2C:
    ctx->pc = 0x7F31AA2Cu;
    // 7F31AA2C: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AA30:
    ctx->pc = 0x7F31AA30u;
    // 7F31AA30: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AA34:
    ctx->pc = 0x7F31AA34u;
    // 7F31AA34: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AA38:
    ctx->pc = 0x7F31AA38u;
    ctx->downcount -= 6;
    // 7F31AA38: lis     r3, 151
    ctx->gpr[3] = ((u32)(s32)(151) << 16);

label_7F31AA3C:
    ctx->pc = 0x7F31AA3Cu;
    // 7F31AA3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31AA40:
    ctx->pc = 0x7F31AA40u;
    // 7F31AA40: addi    r3, r3, -15708
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15708);

label_7F31AA44:
    ctx->pc = 0x7F31AA44u;
    // 7F31AA44: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AA48:
    ctx->pc = 0x7F31AA48u;
    // 7F31AA48: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AA4C:
    ctx->pc = 0x7F31AA4Cu;
    // 7F31AA4C: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AA50:
    ctx->pc = 0x7F31AA50u;
    ctx->downcount -= 4;
    // 7F31AA50: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AA54:
    ctx->pc = 0x7F31AA54u;
    // 7F31AA54: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AA58:
    ctx->pc = 0x7F31AA58u;
    // 7F31AA58: rlwinm. r0, r0, 0, 28, 28
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

label_7F31AA5C:
    ctx->pc = 0x7F31AA5Cu;
    // 7F31AA5C: bc    12, 2, 0x7F31AA70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AA70;
        }
    }

label_7F31AA60:
    ctx->pc = 0x7F31AA60u;
    ctx->downcount -= 4;
    // 7F31AA60: lis     r3, 162
    ctx->gpr[3] = ((u32)(s32)(162) << 16);

label_7F31AA64:
    ctx->pc = 0x7F31AA64u;
    // 7F31AA64: addi    r0, r3, 29324
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29324);

label_7F31AA68:
    ctx->pc = 0x7F31AA68u;
    // 7F31AA68: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AA6C:
    ctx->pc = 0x7F31AA6Cu;
    // 7F31AA6C: b       0x7F31AA7C
    {
            goto label_7F31AA7C;
    }

label_7F31AA70:
    ctx->pc = 0x7F31AA70u;
    ctx->downcount -= 3;
    // 7F31AA70: lis     r3, 162
    ctx->gpr[3] = ((u32)(s32)(162) << 16);

label_7F31AA74:
    ctx->pc = 0x7F31AA74u;
    // 7F31AA74: addi    r0, r3, 28300
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28300);

label_7F31AA78:
    ctx->pc = 0x7F31AA78u;
    // 7F31AA78: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AA7C:
    ctx->pc = 0x7F31AA7Cu;
    ctx->downcount -= 3;
    // 7F31AA7C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31AA80:
    ctx->pc = 0x7F31AA80u;
    // 7F31AA80: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AA84:
    ctx->pc = 0x7F31AA84u;
    // 7F31AA84: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AA88:
    ctx->pc = 0x7F31AA88u;
    ctx->downcount -= 5;
    // 7F31AA88: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AA8C:
    ctx->pc = 0x7F31AA8Cu;
    // 7F31AA8C: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AA90:
    ctx->pc = 0x7F31AA90u;
    // 7F31AA90: andi.   r0, r0, 0x0028
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0028u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31AA94:
    ctx->pc = 0x7F31AA94u;
    // 7F31AA94: cmpwi   r0, 32
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

label_7F31AA98:
    ctx->pc = 0x7F31AA98u;
    // 7F31AA98: bc    12, 2, 0x7F31AADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AADC;
        }
    }

label_7F31AA9C:
    ctx->pc = 0x7F31AA9Cu;
    ctx->downcount -= 1;
    // 7F31AA9C: bc    4, 0, 0x7F31AAB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AAB8;
        }
    }

label_7F31AAA0:
    ctx->pc = 0x7F31AAA0u;
    ctx->downcount -= 2;
    // 7F31AAA0: cmpwi   r0, 8
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

label_7F31AAA4:
    ctx->pc = 0x7F31AAA4u;
    // 7F31AAA4: bc    12, 2, 0x7F31AAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AAF4;
        }
    }

label_7F31AAA8:
    ctx->pc = 0x7F31AAA8u;
    ctx->downcount -= 1;
    // 7F31AAA8: bc    4, 0, 0x7F31AB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AB20;
        }
    }

label_7F31AAAC:
    ctx->pc = 0x7F31AAACu;
    ctx->downcount -= 2;
    // 7F31AAAC: cmpwi   r0, 0
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

label_7F31AAB0:
    ctx->pc = 0x7F31AAB0u;
    // 7F31AAB0: bc    12, 2, 0x7F31AAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AAC4;
        }
    }

label_7F31AAB4:
    ctx->pc = 0x7F31AAB4u;
    ctx->downcount -= 1;
    // 7F31AAB4: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AAB8:
    ctx->pc = 0x7F31AAB8u;
    ctx->downcount -= 2;
    // 7F31AAB8: cmpwi   r0, 40
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

label_7F31AABC:
    ctx->pc = 0x7F31AABCu;
    // 7F31AABC: bc    12, 2, 0x7F31AB0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AB0C;
        }
    }

label_7F31AAC0:
    ctx->pc = 0x7F31AAC0u;
    ctx->downcount -= 1;
    // 7F31AAC0: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AAC4:
    ctx->pc = 0x7F31AAC4u;
    ctx->downcount -= 6;
    // 7F31AAC4: lis     r3, 115
    ctx->gpr[3] = ((u32)(s32)(115) << 16);

label_7F31AAC8:
    ctx->pc = 0x7F31AAC8u;
    // 7F31AAC8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31AACC:
    ctx->pc = 0x7F31AACCu;
    // 7F31AACC: addi    r3, r3, 19891
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19891);

label_7F31AAD0:
    ctx->pc = 0x7F31AAD0u;
    // 7F31AAD0: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AAD4:
    ctx->pc = 0x7F31AAD4u;
    // 7F31AAD4: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AAD8:
    ctx->pc = 0x7F31AAD8u;
    // 7F31AAD8: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AADC:
    ctx->pc = 0x7F31AADCu;
    ctx->downcount -= 6;
    // 7F31AADC: lis     r3, 11
    ctx->gpr[3] = ((u32)(s32)(11) << 16);

label_7F31AAE0:
    ctx->pc = 0x7F31AAE0u;
    // 7F31AAE0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31AAE4:
    ctx->pc = 0x7F31AAE4u;
    // 7F31AAE4: addi    r3, r3, 3490
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3490);

label_7F31AAE8:
    ctx->pc = 0x7F31AAE8u;
    // 7F31AAE8: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AAEC:
    ctx->pc = 0x7F31AAECu;
    // 7F31AAEC: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AAF0:
    ctx->pc = 0x7F31AAF0u;
    // 7F31AAF0: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AAF4:
    ctx->pc = 0x7F31AAF4u;
    ctx->downcount -= 6;
    // 7F31AAF4: lis     r3, 115
    ctx->gpr[3] = ((u32)(s32)(115) << 16);

label_7F31AAF8:
    ctx->pc = 0x7F31AAF8u;
    // 7F31AAF8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31AAFC:
    ctx->pc = 0x7F31AAFCu;
    // 7F31AAFC: addi    r3, r3, 20915
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20915);

label_7F31AB00:
    ctx->pc = 0x7F31AB00u;
    // 7F31AB00: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AB04:
    ctx->pc = 0x7F31AB04u;
    // 7F31AB04: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AB08:
    ctx->pc = 0x7F31AB08u;
    // 7F31AB08: b       0x7F31AB20
    {
            goto label_7F31AB20;
    }

label_7F31AB0C:
    ctx->pc = 0x7F31AB0Cu;
    ctx->downcount -= 5;
    // 7F31AB0C: lis     r3, 11
    ctx->gpr[3] = ((u32)(s32)(11) << 16);

label_7F31AB10:
    ctx->pc = 0x7F31AB10u;
    // 7F31AB10: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31AB14:
    ctx->pc = 0x7F31AB14u;
    // 7F31AB14: addi    r3, r3, 4514
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4514);

label_7F31AB18:
    ctx->pc = 0x7F31AB18u;
    // 7F31AB18: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AB1C:
    ctx->pc = 0x7F31AB1Cu;
    // 7F31AB1C: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AB20:
    ctx->pc = 0x7F31AB20u;
    ctx->downcount -= 4;
    // 7F31AB20: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31AB24:
    ctx->pc = 0x7F31AB24u;
    // 7F31AB24: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31AB28:
    ctx->pc = 0x7F31AB28u;
    // 7F31AB28: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31AB2C:
    ctx->pc = 0x7F31AB2Cu;
    // 7F31AB2C: bl      0x7F011698
    {
            ctx->lr = 0x7F31AB30u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31AB30:
    ctx->pc = 0x7F31AB30u;
    ctx->downcount -= 1;
    // 7F31AB30: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31AB34:
    ctx->pc = 0x7F31AB34u;
    ctx->downcount -= 3;
    // 7F31AB34: lwz     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AB38:
    ctx->pc = 0x7F31AB38u;
    // 7F31AB38: cmpwi   r0, 2
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

label_7F31AB3C:
    ctx->pc = 0x7F31AB3Cu;
    // 7F31AB3C: bc    12, 2, 0x7F31ABBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31ABBC;
        }
    }

label_7F31AB40:
    ctx->pc = 0x7F31AB40u;
    ctx->downcount -= 1;
    // 7F31AB40: bc    4, 0, 0x7F31AB54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AB54;
        }
    }

label_7F31AB44:
    ctx->pc = 0x7F31AB44u;
    ctx->downcount -= 2;
    // 7F31AB44: cmpwi   r0, 0
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

label_7F31AB48:
    ctx->pc = 0x7F31AB48u;
    // 7F31AB48: bc    12, 2, 0x7F31AB64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AB64;
        }
    }

label_7F31AB4C:
    ctx->pc = 0x7F31AB4Cu;
    ctx->downcount -= 1;
    // 7F31AB4C: bc    4, 0, 0x7F31ABA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31ABA4;
        }
    }

label_7F31AB50:
    ctx->pc = 0x7F31AB50u;
    ctx->downcount -= 1;
    // 7F31AB50: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31AB54:
    ctx->pc = 0x7F31AB54u;
    ctx->downcount -= 2;
    // 7F31AB54: cmpwi   r0, 4
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

label_7F31AB58:
    ctx->pc = 0x7F31AB58u;
    // 7F31AB58: bc    12, 2, 0x7F31AC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AC8C;
        }
    }

label_7F31AB5C:
    ctx->pc = 0x7F31AB5Cu;
    ctx->downcount -= 1;
    // 7F31AB5C: bc    4, 0, 0x7F31AC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AC8C;
        }
    }

label_7F31AB60:
    ctx->pc = 0x7F31AB60u;
    ctx->downcount -= 1;
    // 7F31AB60: b       0x7F31AC58
    {
            goto label_7F31AC58;
    }

label_7F31AB64:
    ctx->pc = 0x7F31AB64u;
    ctx->downcount -= 4;
    // 7F31AB64: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AB68:
    ctx->pc = 0x7F31AB68u;
    // 7F31AB68: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AB6C:
    ctx->pc = 0x7F31AB6Cu;
    // 7F31AB6C: rlwinm. r0, r0, 0, 28, 28
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

label_7F31AB70:
    ctx->pc = 0x7F31AB70u;
    // 7F31AB70: bc    12, 2, 0x7F31AB8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AB8C;
        }
    }

label_7F31AB74:
    ctx->pc = 0x7F31AB74u;
    ctx->downcount -= 6;
    // 7F31AB74: lis     r3, 144
    ctx->gpr[3] = ((u32)(s32)(144) << 16);

label_7F31AB78:
    ctx->pc = 0x7F31AB78u;
    // 7F31AB78: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31AB7C:
    ctx->pc = 0x7F31AB7Cu;
    // 7F31AB7C: addi    r3, r3, 19835
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19835);

label_7F31AB80:
    ctx->pc = 0x7F31AB80u;
    // 7F31AB80: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AB84:
    ctx->pc = 0x7F31AB84u;
    // 7F31AB84: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AB88:
    ctx->pc = 0x7F31AB88u;
    // 7F31AB88: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31AB8C:
    ctx->pc = 0x7F31AB8Cu;
    ctx->downcount -= 6;
    // 7F31AB8C: lis     r3, 69
    ctx->gpr[3] = ((u32)(s32)(69) << 16);

label_7F31AB90:
    ctx->pc = 0x7F31AB90u;
    // 7F31AB90: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31AB94:
    ctx->pc = 0x7F31AB94u;
    // 7F31AB94: addi    r3, r3, -8264
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-8264);

label_7F31AB98:
    ctx->pc = 0x7F31AB98u;
    // 7F31AB98: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AB9C:
    ctx->pc = 0x7F31AB9Cu;
    // 7F31AB9C: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31ABA0:
    ctx->pc = 0x7F31ABA0u;
    // 7F31ABA0: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31ABA4:
    ctx->pc = 0x7F31ABA4u;
    ctx->downcount -= 6;
    // 7F31ABA4: lis     r3, 138
    ctx->gpr[3] = ((u32)(s32)(138) << 16);

label_7F31ABA8:
    ctx->pc = 0x7F31ABA8u;
    // 7F31ABA8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31ABAC:
    ctx->pc = 0x7F31ABACu;
    // 7F31ABAC: addi    r3, r3, 7228
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7228);

label_7F31ABB0:
    ctx->pc = 0x7F31ABB0u;
    // 7F31ABB0: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31ABB4:
    ctx->pc = 0x7F31ABB4u;
    // 7F31ABB4: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31ABB8:
    ctx->pc = 0x7F31ABB8u;
    // 7F31ABB8: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31ABBC:
    ctx->pc = 0x7F31ABBCu;
    ctx->downcount -= 5;
    // 7F31ABBC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31ABC0:
    ctx->pc = 0x7F31ABC0u;
    // 7F31ABC0: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31ABC4:
    ctx->pc = 0x7F31ABC4u;
    // 7F31ABC4: andi.   r0, r0, 0x0028
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0028u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31ABC8:
    ctx->pc = 0x7F31ABC8u;
    // 7F31ABC8: cmpwi   r0, 32
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

label_7F31ABCC:
    ctx->pc = 0x7F31ABCCu;
    // 7F31ABCC: bc    12, 2, 0x7F31AC10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AC10;
        }
    }

label_7F31ABD0:
    ctx->pc = 0x7F31ABD0u;
    ctx->downcount -= 1;
    // 7F31ABD0: bc    4, 0, 0x7F31ABEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31ABEC;
        }
    }

label_7F31ABD4:
    ctx->pc = 0x7F31ABD4u;
    ctx->downcount -= 2;
    // 7F31ABD4: cmpwi   r0, 8
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

label_7F31ABD8:
    ctx->pc = 0x7F31ABD8u;
    // 7F31ABD8: bc    12, 2, 0x7F31AC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AC28;
        }
    }

label_7F31ABDC:
    ctx->pc = 0x7F31ABDCu;
    ctx->downcount -= 1;
    // 7F31ABDC: bc    4, 0, 0x7F31AC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AC8C;
        }
    }

label_7F31ABE0:
    ctx->pc = 0x7F31ABE0u;
    ctx->downcount -= 2;
    // 7F31ABE0: cmpwi   r0, 0
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

label_7F31ABE4:
    ctx->pc = 0x7F31ABE4u;
    // 7F31ABE4: bc    12, 2, 0x7F31ABF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31ABF8;
        }
    }

label_7F31ABE8:
    ctx->pc = 0x7F31ABE8u;
    ctx->downcount -= 1;
    // 7F31ABE8: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31ABEC:
    ctx->pc = 0x7F31ABECu;
    ctx->downcount -= 2;
    // 7F31ABEC: cmpwi   r0, 40
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

label_7F31ABF0:
    ctx->pc = 0x7F31ABF0u;
    // 7F31ABF0: bc    12, 2, 0x7F31AC40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AC40;
        }
    }

label_7F31ABF4:
    ctx->pc = 0x7F31ABF4u;
    ctx->downcount -= 1;
    // 7F31ABF4: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31ABF8:
    ctx->pc = 0x7F31ABF8u;
    ctx->downcount -= 6;
    // 7F31ABF8: lis     r3, 246
    ctx->gpr[3] = ((u32)(s32)(246) << 16);

label_7F31ABFC:
    ctx->pc = 0x7F31ABFCu;
    // 7F31ABFC: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31AC00:
    ctx->pc = 0x7F31AC00u;
    // 7F31AC00: addi    r3, r3, 31681
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(31681);

label_7F31AC04:
    ctx->pc = 0x7F31AC04u;
    // 7F31AC04: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AC08:
    ctx->pc = 0x7F31AC08u;
    // 7F31AC08: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AC0C:
    ctx->pc = 0x7F31AC0Cu;
    // 7F31AC0C: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31AC10:
    ctx->pc = 0x7F31AC10u;
    ctx->downcount -= 6;
    // 7F31AC10: lis     r3, 252
    ctx->gpr[3] = ((u32)(s32)(252) << 16);

label_7F31AC14:
    ctx->pc = 0x7F31AC14u;
    // 7F31AC14: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31AC18:
    ctx->pc = 0x7F31AC18u;
    // 7F31AC18: addi    r3, r3, 24541
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24541);

label_7F31AC1C:
    ctx->pc = 0x7F31AC1Cu;
    // 7F31AC1C: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AC20:
    ctx->pc = 0x7F31AC20u;
    // 7F31AC20: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AC24:
    ctx->pc = 0x7F31AC24u;
    // 7F31AC24: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31AC28:
    ctx->pc = 0x7F31AC28u;
    ctx->downcount -= 6;
    // 7F31AC28: lis     r3, 246
    ctx->gpr[3] = ((u32)(s32)(246) << 16);

label_7F31AC2C:
    ctx->pc = 0x7F31AC2Cu;
    // 7F31AC2C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31AC30:
    ctx->pc = 0x7F31AC30u;
    // 7F31AC30: addi    r3, r3, 32705
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32705);

label_7F31AC34:
    ctx->pc = 0x7F31AC34u;
    // 7F31AC34: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AC38:
    ctx->pc = 0x7F31AC38u;
    // 7F31AC38: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AC3C:
    ctx->pc = 0x7F31AC3Cu;
    // 7F31AC3C: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31AC40:
    ctx->pc = 0x7F31AC40u;
    ctx->downcount -= 6;
    // 7F31AC40: lis     r3, 252
    ctx->gpr[3] = ((u32)(s32)(252) << 16);

label_7F31AC44:
    ctx->pc = 0x7F31AC44u;
    // 7F31AC44: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31AC48:
    ctx->pc = 0x7F31AC48u;
    // 7F31AC48: addi    r3, r3, 25565
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25565);

label_7F31AC4C:
    ctx->pc = 0x7F31AC4Cu;
    // 7F31AC4C: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AC50:
    ctx->pc = 0x7F31AC50u;
    // 7F31AC50: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AC54:
    ctx->pc = 0x7F31AC54u;
    // 7F31AC54: b       0x7F31AC8C
    {
            goto label_7F31AC8C;
    }

label_7F31AC58:
    ctx->pc = 0x7F31AC58u;
    ctx->downcount -= 4;
    // 7F31AC58: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AC5C:
    ctx->pc = 0x7F31AC5Cu;
    // 7F31AC5C: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AC60:
    ctx->pc = 0x7F31AC60u;
    // 7F31AC60: rlwinm. r0, r0, 0, 28, 28
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

label_7F31AC64:
    ctx->pc = 0x7F31AC64u;
    // 7F31AC64: bc    12, 2, 0x7F31AC78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AC78;
        }
    }

label_7F31AC68:
    ctx->pc = 0x7F31AC68u;
    ctx->downcount -= 4;
    // 7F31AC68: lis     r3, 170
    ctx->gpr[3] = ((u32)(s32)(170) << 16);

label_7F31AC6C:
    ctx->pc = 0x7F31AC6Cu;
    // 7F31AC6C: addi    r0, r3, -14750
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-14750);

label_7F31AC70:
    ctx->pc = 0x7F31AC70u;
    // 7F31AC70: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AC74:
    ctx->pc = 0x7F31AC74u;
    // 7F31AC74: b       0x7F31AC84
    {
            goto label_7F31AC84;
    }

label_7F31AC78:
    ctx->pc = 0x7F31AC78u;
    ctx->downcount -= 3;
    // 7F31AC78: lis     r3, 170
    ctx->gpr[3] = ((u32)(s32)(170) << 16);

label_7F31AC7C:
    ctx->pc = 0x7F31AC7Cu;
    // 7F31AC7C: addi    r0, r3, -15774
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-15774);

label_7F31AC80:
    ctx->pc = 0x7F31AC80u;
    // 7F31AC80: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AC84:
    ctx->pc = 0x7F31AC84u;
    ctx->downcount -= 2;
    // 7F31AC84: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31AC88:
    ctx->pc = 0x7F31AC88u;
    // 7F31AC88: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AC8C:
    ctx->pc = 0x7F31AC8Cu;
    ctx->downcount -= 4;
    // 7F31AC8C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31AC90:
    ctx->pc = 0x7F31AC90u;
    // 7F31AC90: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31AC94:
    ctx->pc = 0x7F31AC94u;
    // 7F31AC94: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31AC98:
    ctx->pc = 0x7F31AC98u;
    // 7F31AC98: bl      0x7F011698
    {
            ctx->lr = 0x7F31AC9Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31AC9C:
    ctx->pc = 0x7F31AC9Cu;
    ctx->downcount -= 1;
    // 7F31AC9C: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31ACA0:
    ctx->pc = 0x7F31ACA0u;
    ctx->downcount -= 3;
    // 7F31ACA0: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31ACA4:
    ctx->pc = 0x7F31ACA4u;
    // 7F31ACA4: rlwinm. r0, r3, 0, 26, 26
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

label_7F31ACA8:
    ctx->pc = 0x7F31ACA8u;
    // 7F31ACA8: bc    12, 2, 0x7F31AD40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AD40;
        }
    }

label_7F31ACAC:
    ctx->pc = 0x7F31ACACu;
    ctx->downcount -= 5;
    // 7F31ACAC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31ACB0:
    ctx->pc = 0x7F31ACB0u;
    // 7F31ACB0: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31ACB4:
    ctx->pc = 0x7F31ACB4u;
    // 7F31ACB4: andi.   r0, r0, 0x2800
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x2800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31ACB8:
    ctx->pc = 0x7F31ACB8u;
    // 7F31ACB8: cmpwi   r0, 8192
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31ACBC:
    ctx->pc = 0x7F31ACBCu;
    // 7F31ACBC: bc    12, 2, 0x7F31ACF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31ACF8;
        }
    }

label_7F31ACC0:
    ctx->pc = 0x7F31ACC0u;
    ctx->downcount -= 1;
    // 7F31ACC0: bc    4, 0, 0x7F31ACDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31ACDC;
        }
    }

label_7F31ACC4:
    ctx->pc = 0x7F31ACC4u;
    ctx->downcount -= 2;
    // 7F31ACC4: cmpwi   r0, 2048
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

label_7F31ACC8:
    ctx->pc = 0x7F31ACC8u;
    // 7F31ACC8: bc    12, 2, 0x7F31AD08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AD08;
        }
    }

label_7F31ACCC:
    ctx->pc = 0x7F31ACCCu;
    ctx->downcount -= 1;
    // 7F31ACCC: bc    4, 0, 0x7F31AD24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AD24;
        }
    }

label_7F31ACD0:
    ctx->pc = 0x7F31ACD0u;
    ctx->downcount -= 2;
    // 7F31ACD0: cmpwi   r0, 0
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

label_7F31ACD4:
    ctx->pc = 0x7F31ACD4u;
    // 7F31ACD4: bc    12, 2, 0x7F31ACE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31ACE8;
        }
    }

label_7F31ACD8:
    ctx->pc = 0x7F31ACD8u;
    ctx->downcount -= 1;
    // 7F31ACD8: b       0x7F31AD24
    {
            goto label_7F31AD24;
    }

label_7F31ACDC:
    ctx->pc = 0x7F31ACDCu;
    ctx->downcount -= 2;
    // 7F31ACDC: cmpwi   r0, 10240
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31ACE0:
    ctx->pc = 0x7F31ACE0u;
    // 7F31ACE0: bc    12, 2, 0x7F31AD18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AD18;
        }
    }

label_7F31ACE4:
    ctx->pc = 0x7F31ACE4u;
    ctx->downcount -= 1;
    // 7F31ACE4: b       0x7F31AD24
    {
            goto label_7F31AD24;
    }

label_7F31ACE8:
    ctx->pc = 0x7F31ACE8u;
    ctx->downcount -= 4;
    // 7F31ACE8: lis     r3, 204
    ctx->gpr[3] = ((u32)(s32)(204) << 16);

label_7F31ACEC:
    ctx->pc = 0x7F31ACECu;
    // 7F31ACEC: addi    r0, r3, -31037
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31037);

label_7F31ACF0:
    ctx->pc = 0x7F31ACF0u;
    // 7F31ACF0: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31ACF4:
    ctx->pc = 0x7F31ACF4u;
    // 7F31ACF4: b       0x7F31AD24
    {
            goto label_7F31AD24;
    }

label_7F31ACF8:
    ctx->pc = 0x7F31ACF8u;
    ctx->downcount -= 4;
    // 7F31ACF8: lis     r3, 204
    ctx->gpr[3] = ((u32)(s32)(204) << 16);

label_7F31ACFC:
    ctx->pc = 0x7F31ACFCu;
    // 7F31ACFC: addi    r0, r3, -31005
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-31005);

label_7F31AD00:
    ctx->pc = 0x7F31AD00u;
    // 7F31AD00: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AD04:
    ctx->pc = 0x7F31AD04u;
    // 7F31AD04: b       0x7F31AD24
    {
            goto label_7F31AD24;
    }

label_7F31AD08:
    ctx->pc = 0x7F31AD08u;
    ctx->downcount -= 4;
    // 7F31AD08: lis     r3, 204
    ctx->gpr[3] = ((u32)(s32)(204) << 16);

label_7F31AD0C:
    ctx->pc = 0x7F31AD0Cu;
    // 7F31AD0C: addi    r0, r3, -30013
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30013);

label_7F31AD10:
    ctx->pc = 0x7F31AD10u;
    // 7F31AD10: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AD14:
    ctx->pc = 0x7F31AD14u;
    // 7F31AD14: b       0x7F31AD24
    {
            goto label_7F31AD24;
    }

label_7F31AD18:
    ctx->pc = 0x7F31AD18u;
    ctx->downcount -= 3;
    // 7F31AD18: lis     r3, 204
    ctx->gpr[3] = ((u32)(s32)(204) << 16);

label_7F31AD1C:
    ctx->pc = 0x7F31AD1Cu;
    // 7F31AD1C: addi    r0, r3, -29981
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29981);

label_7F31AD20:
    ctx->pc = 0x7F31AD20u;
    // 7F31AD20: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AD24:
    ctx->pc = 0x7F31AD24u;
    ctx->downcount -= 6;
    // 7F31AD24: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31AD28:
    ctx->pc = 0x7F31AD28u;
    // 7F31AD28: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31AD2C:
    ctx->pc = 0x7F31AD2Cu;
    // 7F31AD2C: stw     r0, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AD30:
    ctx->pc = 0x7F31AD30u;
    // 7F31AD30: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31AD34:
    ctx->pc = 0x7F31AD34u;
    // 7F31AD34: li      r5, 247
    ctx->gpr[5] = (u32)(s32)(247);

label_7F31AD38:
    ctx->pc = 0x7F31AD38u;
    // 7F31AD38: bl      0x7F011698
    {
            ctx->lr = 0x7F31AD3Cu;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31AD3C:
    ctx->pc = 0x7F31AD3Cu;
    ctx->downcount -= 1;
    // 7F31AD3C: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31AD40:
    ctx->pc = 0x7F31AD40u;
    ctx->downcount -= 2;
    // 7F31AD40: rlwinm. r0, r3, 0, 24, 24
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

label_7F31AD44:
    ctx->pc = 0x7F31AD44u;
    // 7F31AD44: bc    12, 2, 0x7F31AD78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AD78;
        }
    }

label_7F31AD48:
    ctx->pc = 0x7F31AD48u;
    ctx->downcount -= 5;
    // 7F31AD48: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31AD4C:
    ctx->pc = 0x7F31AD4Cu;
    // 7F31AD4C: addi    r4, r30, 64
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(64);

label_7F31AD50:
    ctx->pc = 0x7F31AD50u;
    // 7F31AD50: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31AD54:
    ctx->pc = 0x7F31AD54u;
    // 7F31AD54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31AD58:
    ctx->pc = 0x7F31AD58u;
    // 7F31AD58: bl      0x7F319CD4
    {
            ctx->lr = 0x7F31AD5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319CD4u;
                return;
            }
            goto label_7F319CD4;
    }

label_7F31AD5C:
    ctx->pc = 0x7F31AD5Cu;
    ctx->downcount -= 6;
    // 7F31AD5C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31AD60:
    ctx->pc = 0x7F31AD60u;
    // 7F31AD60: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31AD64:
    ctx->pc = 0x7F31AD64u;
    // 7F31AD64: stw     r0, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AD68:
    ctx->pc = 0x7F31AD68u;
    // 7F31AD68: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31AD6C:
    ctx->pc = 0x7F31AD6Cu;
    // 7F31AD6C: li      r5, 249
    ctx->gpr[5] = (u32)(s32)(249);

label_7F31AD70:
    ctx->pc = 0x7F31AD70u;
    // 7F31AD70: bl      0x7F011698
    {
            ctx->lr = 0x7F31AD74u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31AD74:
    ctx->pc = 0x7F31AD74u;
    ctx->downcount -= 1;
    // 7F31AD74: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31AD78:
    ctx->pc = 0x7F31AD78u;
    ctx->downcount -= 3;
    // 7F31AD78: andi.   r0, r3, 0x5000
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

label_7F31AD7C:
    ctx->pc = 0x7F31AD7Cu;
    // 7F31AD7C: cmpwi   r0, 16384
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

label_7F31AD80:
    ctx->pc = 0x7F31AD80u;
    // 7F31AD80: bc    12, 2, 0x7F31AFC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AFC8;
        }
    }

label_7F31AD84:
    ctx->pc = 0x7F31AD84u;
    ctx->downcount -= 1;
    // 7F31AD84: bc    4, 0, 0x7F31AD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AD90;
        }
    }

label_7F31AD88:
    ctx->pc = 0x7F31AD88u;
    ctx->downcount -= 2;
    // 7F31AD88: cmpwi   r0, 4096
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

label_7F31AD8C:
    ctx->pc = 0x7F31AD8Cu;
    // 7F31AD8C: bc    12, 2, 0x7F31ADA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31ADA0;
        }
    }

label_7F31AD90:
    ctx->pc = 0x7F31AD90u;
    ctx->downcount -= 4;
    // 7F31AD90: lwz     r3, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31AD94:
    ctx->pc = 0x7F31AD94u;
    // 7F31AD94: addi    r0, r3, 33
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(33);

label_7F31AD98:
    ctx->pc = 0x7F31AD98u;
    // 7F31AD98: stw     r0, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AD9C:
    ctx->pc = 0x7F31AD9Cu;
    // 7F31AD9C: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31ADA0:
    ctx->pc = 0x7F31ADA0u;
    ctx->downcount -= 3;
    // 7F31ADA0: lwz     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31ADA4:
    ctx->pc = 0x7F31ADA4u;
    // 7F31ADA4: cmplwi  r0, 0x0008
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

label_7F31ADA8:
    ctx->pc = 0x7F31ADA8u;
    // 7F31ADA8: bc    12, 1, 0x7F31AFB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AFB4;
        }
    }

label_7F31ADAC:
    ctx->pc = 0x7F31ADACu;
    ctx->downcount -= 7;
    // 7F31ADAC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31ADB0:
    ctx->pc = 0x7F31ADB0u;
    // 7F31ADB0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31ADB4:
    ctx->pc = 0x7F31ADB4u;
    // 7F31ADB4: addi    r3, r3, -25456
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25456);

label_7F31ADB8:
    ctx->pc = 0x7F31ADB8u;
    // 7F31ADB8: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31ADBC:
    ctx->pc = 0x7F31ADBCu;
    // 7F31ADBC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31ADC0:
    ctx->pc = 0x7F31ADC0u;
    // 7F31ADC0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F31ADC4:
    ctx->pc = 0x7F31ADC4u;
    ctx->downcount -= 6;
    // 7F31ADC4: lis     r3, 47
    ctx->gpr[3] = ((u32)(s32)(47) << 16);

label_7F31ADC8:
    ctx->pc = 0x7F31ADC8u;
    // 7F31ADC8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31ADCC:
    ctx->pc = 0x7F31ADCCu;
    // 7F31ADCC: addi    r3, r3, 15529
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15529);

label_7F31ADD0:
    ctx->pc = 0x7F31ADD0u;
    // 7F31ADD0: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31ADD4:
    ctx->pc = 0x7F31ADD4u;
    // 7F31ADD4: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31ADD8:
    ctx->pc = 0x7F31ADD8u;
    // 7F31ADD8: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31ADDC:
    ctx->pc = 0x7F31ADDCu;
    ctx->downcount -= 6;
    // 7F31ADDC: lis     r3, 214
    ctx->gpr[3] = ((u32)(s32)(214) << 16);

label_7F31ADE0:
    ctx->pc = 0x7F31ADE0u;
    // 7F31ADE0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31ADE4:
    ctx->pc = 0x7F31ADE4u;
    // 7F31ADE4: addi    r3, r3, 29745
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29745);

label_7F31ADE8:
    ctx->pc = 0x7F31ADE8u;
    // 7F31ADE8: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31ADEC:
    ctx->pc = 0x7F31ADECu;
    // 7F31ADEC: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31ADF0:
    ctx->pc = 0x7F31ADF0u;
    // 7F31ADF0: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31ADF4:
    ctx->pc = 0x7F31ADF4u;
    ctx->downcount -= 6;
    // 7F31ADF4: lis     r3, 111
    ctx->gpr[3] = ((u32)(s32)(111) << 16);

label_7F31ADF8:
    ctx->pc = 0x7F31ADF8u;
    // 7F31ADF8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31ADFC:
    ctx->pc = 0x7F31ADFCu;
    // 7F31ADFC: addi    r3, r3, -25240
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25240);

label_7F31AE00:
    ctx->pc = 0x7F31AE00u;
    // 7F31AE00: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AE04:
    ctx->pc = 0x7F31AE04u;
    // 7F31AE04: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AE08:
    ctx->pc = 0x7F31AE08u;
    // 7F31AE08: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AE0C:
    ctx->pc = 0x7F31AE0Cu;
    ctx->downcount -= 6;
    // 7F31AE0C: lis     r3, 45
    ctx->gpr[3] = ((u32)(s32)(45) << 16);

label_7F31AE10:
    ctx->pc = 0x7F31AE10u;
    // 7F31AE10: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31AE14:
    ctx->pc = 0x7F31AE14u;
    // 7F31AE14: addi    r3, r3, -15655
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15655);

label_7F31AE18:
    ctx->pc = 0x7F31AE18u;
    // 7F31AE18: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AE1C:
    ctx->pc = 0x7F31AE1Cu;
    // 7F31AE1C: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AE20:
    ctx->pc = 0x7F31AE20u;
    // 7F31AE20: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AE24:
    ctx->pc = 0x7F31AE24u;
    ctx->downcount -= 4;
    // 7F31AE24: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AE28:
    ctx->pc = 0x7F31AE28u;
    // 7F31AE28: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AE2C:
    ctx->pc = 0x7F31AE2Cu;
    // 7F31AE2C: rlwinm. r0, r0, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31AE30:
    ctx->pc = 0x7F31AE30u;
    // 7F31AE30: bc    12, 2, 0x7F31AE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AE48;
        }
    }

label_7F31AE34:
    ctx->pc = 0x7F31AE34u;
    ctx->downcount -= 5;
    // 7F31AE34: li      r3, 26167
    ctx->gpr[3] = (u32)(s32)(26167);

label_7F31AE38:
    ctx->pc = 0x7F31AE38u;
    // 7F31AE38: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31AE3C:
    ctx->pc = 0x7F31AE3Cu;
    // 7F31AE3C: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AE40:
    ctx->pc = 0x7F31AE40u;
    // 7F31AE40: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AE44:
    ctx->pc = 0x7F31AE44u;
    // 7F31AE44: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AE48:
    ctx->pc = 0x7F31AE48u;
    ctx->downcount -= 6;
    // 7F31AE48: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F31AE4C:
    ctx->pc = 0x7F31AE4Cu;
    // 7F31AE4C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31AE50:
    ctx->pc = 0x7F31AE50u;
    // 7F31AE50: addi    r3, r3, 30049
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(30049);

label_7F31AE54:
    ctx->pc = 0x7F31AE54u;
    // 7F31AE54: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AE58:
    ctx->pc = 0x7F31AE58u;
    // 7F31AE58: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AE5C:
    ctx->pc = 0x7F31AE5Cu;
    // 7F31AE5C: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AE60:
    ctx->pc = 0x7F31AE60u;
    ctx->downcount -= 4;
    // 7F31AE60: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AE64:
    ctx->pc = 0x7F31AE64u;
    // 7F31AE64: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AE68:
    ctx->pc = 0x7F31AE68u;
    // 7F31AE68: rlwinm. r0, r0, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31AE6C:
    ctx->pc = 0x7F31AE6Cu;
    // 7F31AE6C: bc    12, 2, 0x7F31AE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AE80;
        }
    }

label_7F31AE70:
    ctx->pc = 0x7F31AE70u;
    ctx->downcount -= 4;
    // 7F31AE70: lis     r3, 233
    ctx->gpr[3] = ((u32)(s32)(233) << 16);

label_7F31AE74:
    ctx->pc = 0x7F31AE74u;
    // 7F31AE74: addi    r0, r3, 18067
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(18067);

label_7F31AE78:
    ctx->pc = 0x7F31AE78u;
    // 7F31AE78: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AE7C:
    ctx->pc = 0x7F31AE7Cu;
    // 7F31AE7C: b       0x7F31AE8C
    {
            goto label_7F31AE8C;
    }

label_7F31AE80:
    ctx->pc = 0x7F31AE80u;
    ctx->downcount -= 3;
    // 7F31AE80: lis     r3, 233
    ctx->gpr[3] = ((u32)(s32)(233) << 16);

label_7F31AE84:
    ctx->pc = 0x7F31AE84u;
    // 7F31AE84: addi    r0, r3, 17043
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17043);

label_7F31AE88:
    ctx->pc = 0x7F31AE88u;
    // 7F31AE88: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AE8C:
    ctx->pc = 0x7F31AE8Cu;
    ctx->downcount -= 3;
    // 7F31AE8C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31AE90:
    ctx->pc = 0x7F31AE90u;
    // 7F31AE90: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AE94:
    ctx->pc = 0x7F31AE94u;
    // 7F31AE94: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AE98:
    ctx->pc = 0x7F31AE98u;
    ctx->downcount -= 5;
    // 7F31AE98: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AE9C:
    ctx->pc = 0x7F31AE9Cu;
    // 7F31AE9C: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AEA0:
    ctx->pc = 0x7F31AEA0u;
    // 7F31AEA0: andi.   r0, r0, 0x2800
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x2800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31AEA4:
    ctx->pc = 0x7F31AEA4u;
    // 7F31AEA4: cmpwi   r0, 8192
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31AEA8:
    ctx->pc = 0x7F31AEA8u;
    // 7F31AEA8: bc    12, 2, 0x7F31AEEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AEEC;
        }
    }

label_7F31AEAC:
    ctx->pc = 0x7F31AEACu;
    ctx->downcount -= 1;
    // 7F31AEAC: bc    4, 0, 0x7F31AEC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AEC8;
        }
    }

label_7F31AEB0:
    ctx->pc = 0x7F31AEB0u;
    ctx->downcount -= 2;
    // 7F31AEB0: cmpwi   r0, 2048
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

label_7F31AEB4:
    ctx->pc = 0x7F31AEB4u;
    // 7F31AEB4: bc    12, 2, 0x7F31AF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AF04;
        }
    }

label_7F31AEB8:
    ctx->pc = 0x7F31AEB8u;
    ctx->downcount -= 1;
    // 7F31AEB8: bc    4, 0, 0x7F31AFB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AFB4;
        }
    }

label_7F31AEBC:
    ctx->pc = 0x7F31AEBCu;
    ctx->downcount -= 2;
    // 7F31AEBC: cmpwi   r0, 0
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

label_7F31AEC0:
    ctx->pc = 0x7F31AEC0u;
    // 7F31AEC0: bc    12, 2, 0x7F31AED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AED4;
        }
    }

label_7F31AEC4:
    ctx->pc = 0x7F31AEC4u;
    ctx->downcount -= 1;
    // 7F31AEC4: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AEC8:
    ctx->pc = 0x7F31AEC8u;
    ctx->downcount -= 2;
    // 7F31AEC8: cmpwi   r0, 10240
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31AECC:
    ctx->pc = 0x7F31AECCu;
    // 7F31AECC: bc    12, 2, 0x7F31AF1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AF1C;
        }
    }

label_7F31AED0:
    ctx->pc = 0x7F31AED0u;
    ctx->downcount -= 1;
    // 7F31AED0: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AED4:
    ctx->pc = 0x7F31AED4u;
    ctx->downcount -= 6;
    // 7F31AED4: lis     r3, 94
    ctx->gpr[3] = ((u32)(s32)(94) << 16);

label_7F31AED8:
    ctx->pc = 0x7F31AED8u;
    // 7F31AED8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31AEDC:
    ctx->pc = 0x7F31AEDCu;
    // 7F31AEDC: addi    r3, r3, -32521
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32521);

label_7F31AEE0:
    ctx->pc = 0x7F31AEE0u;
    // 7F31AEE0: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AEE4:
    ctx->pc = 0x7F31AEE4u;
    // 7F31AEE4: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AEE8:
    ctx->pc = 0x7F31AEE8u;
    // 7F31AEE8: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AEEC:
    ctx->pc = 0x7F31AEECu;
    ctx->downcount -= 6;
    // 7F31AEEC: lis     r3, 114
    ctx->gpr[3] = ((u32)(s32)(114) << 16);

label_7F31AEF0:
    ctx->pc = 0x7F31AEF0u;
    // 7F31AEF0: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F31AEF4:
    ctx->pc = 0x7F31AEF4u;
    // 7F31AEF4: addi    r3, r3, -24966
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24966);

label_7F31AEF8:
    ctx->pc = 0x7F31AEF8u;
    // 7F31AEF8: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AEFC:
    ctx->pc = 0x7F31AEFCu;
    // 7F31AEFC: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AF00:
    ctx->pc = 0x7F31AF00u;
    // 7F31AF00: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AF04:
    ctx->pc = 0x7F31AF04u;
    ctx->downcount -= 6;
    // 7F31AF04: lis     r3, 94
    ctx->gpr[3] = ((u32)(s32)(94) << 16);

label_7F31AF08:
    ctx->pc = 0x7F31AF08u;
    // 7F31AF08: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31AF0C:
    ctx->pc = 0x7F31AF0Cu;
    // 7F31AF0C: addi    r3, r3, -31497
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31497);

label_7F31AF10:
    ctx->pc = 0x7F31AF10u;
    // 7F31AF10: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AF14:
    ctx->pc = 0x7F31AF14u;
    // 7F31AF14: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AF18:
    ctx->pc = 0x7F31AF18u;
    // 7F31AF18: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AF1C:
    ctx->pc = 0x7F31AF1Cu;
    ctx->downcount -= 6;
    // 7F31AF1C: lis     r3, 114
    ctx->gpr[3] = ((u32)(s32)(114) << 16);

label_7F31AF20:
    ctx->pc = 0x7F31AF20u;
    // 7F31AF20: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F31AF24:
    ctx->pc = 0x7F31AF24u;
    // 7F31AF24: addi    r3, r3, -23941
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23941);

label_7F31AF28:
    ctx->pc = 0x7F31AF28u;
    // 7F31AF28: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AF2C:
    ctx->pc = 0x7F31AF2Cu;
    // 7F31AF2C: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AF30:
    ctx->pc = 0x7F31AF30u;
    // 7F31AF30: b       0x7F31AFB4
    {
            goto label_7F31AFB4;
    }

label_7F31AF34:
    ctx->pc = 0x7F31AF34u;
    ctx->downcount -= 5;
    // 7F31AF34: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31AF38:
    ctx->pc = 0x7F31AF38u;
    // 7F31AF38: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AF3C:
    ctx->pc = 0x7F31AF3Cu;
    // 7F31AF3C: andi.   r0, r0, 0x2800
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x2800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31AF40:
    ctx->pc = 0x7F31AF40u;
    // 7F31AF40: cmpwi   r0, 8192
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31AF44:
    ctx->pc = 0x7F31AF44u;
    // 7F31AF44: bc    12, 2, 0x7F31AF80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AF80;
        }
    }

label_7F31AF48:
    ctx->pc = 0x7F31AF48u;
    ctx->downcount -= 1;
    // 7F31AF48: bc    4, 0, 0x7F31AF64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AF64;
        }
    }

label_7F31AF4C:
    ctx->pc = 0x7F31AF4Cu;
    ctx->downcount -= 2;
    // 7F31AF4C: cmpwi   r0, 2048
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

label_7F31AF50:
    ctx->pc = 0x7F31AF50u;
    // 7F31AF50: bc    12, 2, 0x7F31AF90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AF90;
        }
    }

label_7F31AF54:
    ctx->pc = 0x7F31AF54u;
    ctx->downcount -= 1;
    // 7F31AF54: bc    4, 0, 0x7F31AFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31AFAC;
        }
    }

label_7F31AF58:
    ctx->pc = 0x7F31AF58u;
    ctx->downcount -= 2;
    // 7F31AF58: cmpwi   r0, 0
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

label_7F31AF5C:
    ctx->pc = 0x7F31AF5Cu;
    // 7F31AF5C: bc    12, 2, 0x7F31AF70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AF70;
        }
    }

label_7F31AF60:
    ctx->pc = 0x7F31AF60u;
    ctx->downcount -= 1;
    // 7F31AF60: b       0x7F31AFAC
    {
            goto label_7F31AFAC;
    }

label_7F31AF64:
    ctx->pc = 0x7F31AF64u;
    ctx->downcount -= 2;
    // 7F31AF64: cmpwi   r0, 10240
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31AF68:
    ctx->pc = 0x7F31AF68u;
    // 7F31AF68: bc    12, 2, 0x7F31AFA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31AFA0;
        }
    }

label_7F31AF6C:
    ctx->pc = 0x7F31AF6Cu;
    ctx->downcount -= 1;
    // 7F31AF6C: b       0x7F31AFAC
    {
            goto label_7F31AFAC;
    }

label_7F31AF70:
    ctx->pc = 0x7F31AF70u;
    ctx->downcount -= 4;
    // 7F31AF70: lis     r3, 105
    ctx->gpr[3] = ((u32)(s32)(105) << 16);

label_7F31AF74:
    ctx->pc = 0x7F31AF74u;
    // 7F31AF74: addi    r0, r3, -29793
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29793);

label_7F31AF78:
    ctx->pc = 0x7F31AF78u;
    // 7F31AF78: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AF7C:
    ctx->pc = 0x7F31AF7Cu;
    // 7F31AF7C: b       0x7F31AFAC
    {
            goto label_7F31AFAC;
    }

label_7F31AF80:
    ctx->pc = 0x7F31AF80u;
    ctx->downcount -= 4;
    // 7F31AF80: lis     r3, 105
    ctx->gpr[3] = ((u32)(s32)(105) << 16);

label_7F31AF84:
    ctx->pc = 0x7F31AF84u;
    // 7F31AF84: addi    r0, r3, -29761
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29761);

label_7F31AF88:
    ctx->pc = 0x7F31AF88u;
    // 7F31AF88: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AF8C:
    ctx->pc = 0x7F31AF8Cu;
    // 7F31AF8C: b       0x7F31AFAC
    {
            goto label_7F31AFAC;
    }

label_7F31AF90:
    ctx->pc = 0x7F31AF90u;
    ctx->downcount -= 4;
    // 7F31AF90: lis     r3, 105
    ctx->gpr[3] = ((u32)(s32)(105) << 16);

label_7F31AF94:
    ctx->pc = 0x7F31AF94u;
    // 7F31AF94: addi    r0, r3, -29761
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29761);

label_7F31AF98:
    ctx->pc = 0x7F31AF98u;
    // 7F31AF98: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AF9C:
    ctx->pc = 0x7F31AF9Cu;
    // 7F31AF9C: b       0x7F31AFAC
    {
            goto label_7F31AFAC;
    }

label_7F31AFA0:
    ctx->pc = 0x7F31AFA0u;
    ctx->downcount -= 3;
    // 7F31AFA0: lis     r3, 105
    ctx->gpr[3] = ((u32)(s32)(105) << 16);

label_7F31AFA4:
    ctx->pc = 0x7F31AFA4u;
    // 7F31AFA4: addi    r0, r3, -28737
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-28737);

label_7F31AFA8:
    ctx->pc = 0x7F31AFA8u;
    // 7F31AFA8: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AFAC:
    ctx->pc = 0x7F31AFACu;
    ctx->downcount -= 2;
    // 7F31AFAC: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F31AFB0:
    ctx->pc = 0x7F31AFB0u;
    // 7F31AFB0: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31AFB4:
    ctx->pc = 0x7F31AFB4u;
    ctx->downcount -= 4;
    // 7F31AFB4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31AFB8:
    ctx->pc = 0x7F31AFB8u;
    // 7F31AFB8: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31AFBC:
    ctx->pc = 0x7F31AFBCu;
    // 7F31AFBC: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31AFC0:
    ctx->pc = 0x7F31AFC0u;
    // 7F31AFC0: bl      0x7F011698
    {
            ctx->lr = 0x7F31AFC4u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31AFC4:
    ctx->pc = 0x7F31AFC4u;
    ctx->downcount -= 1;
    // 7F31AFC4: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31AFC8:
    ctx->pc = 0x7F31AFC8u;
    ctx->downcount -= 3;
    // 7F31AFC8: lwz     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AFCC:
    ctx->pc = 0x7F31AFCCu;
    // 7F31AFCC: cmplwi  r0, 0x0008
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

label_7F31AFD0:
    ctx->pc = 0x7F31AFD0u;
    // 7F31AFD0: bc    12, 1, 0x7F31B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B240;
        }
    }

label_7F31AFD4:
    ctx->pc = 0x7F31AFD4u;
    ctx->downcount -= 7;
    // 7F31AFD4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31AFD8:
    ctx->pc = 0x7F31AFD8u;
    // 7F31AFD8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31AFDC:
    ctx->pc = 0x7F31AFDCu;
    // 7F31AFDC: addi    r3, r3, -25492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25492);

label_7F31AFE0:
    ctx->pc = 0x7F31AFE0u;
    // 7F31AFE0: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31AFE4:
    ctx->pc = 0x7F31AFE4u;
    // 7F31AFE4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31AFE8:
    ctx->pc = 0x7F31AFE8u;
    // 7F31AFE8: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F31AFEC:
    ctx->pc = 0x7F31AFECu;
    ctx->downcount -= 6;
    // 7F31AFEC: lis     r3, 104
    ctx->gpr[3] = ((u32)(s32)(104) << 16);

label_7F31AFF0:
    ctx->pc = 0x7F31AFF0u;
    // 7F31AFF0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31AFF4:
    ctx->pc = 0x7F31AFF4u;
    // 7F31AFF4: addi    r3, r3, 14665
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14665);

label_7F31AFF8:
    ctx->pc = 0x7F31AFF8u;
    // 7F31AFF8: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31AFFC:
    ctx->pc = 0x7F31AFFCu;
    // 7F31AFFC: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B000:
    ctx->pc = 0x7F31B000u;
    // 7F31B000: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B004:
    ctx->pc = 0x7F31B004u;
    ctx->downcount -= 6;
    // 7F31B004: lis     r3, 245
    ctx->gpr[3] = ((u32)(s32)(245) << 16);

label_7F31B008:
    ctx->pc = 0x7F31B008u;
    // 7F31B008: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31B00C:
    ctx->pc = 0x7F31B00Cu;
    // 7F31B00C: addi    r3, r3, -30034
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30034);

label_7F31B010:
    ctx->pc = 0x7F31B010u;
    // 7F31B010: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B014:
    ctx->pc = 0x7F31B014u;
    // 7F31B014: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B018:
    ctx->pc = 0x7F31B018u;
    // 7F31B018: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B01C:
    ctx->pc = 0x7F31B01Cu;
    ctx->downcount -= 6;
    // 7F31B01C: lis     r3, 45
    ctx->gpr[3] = ((u32)(s32)(45) << 16);

label_7F31B020:
    ctx->pc = 0x7F31B020u;
    // 7F31B020: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F31B024:
    ctx->pc = 0x7F31B024u;
    // 7F31B024: addi    r3, r3, -32374
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32374);

label_7F31B028:
    ctx->pc = 0x7F31B028u;
    // 7F31B028: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B02C:
    ctx->pc = 0x7F31B02Cu;
    // 7F31B02C: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B030:
    ctx->pc = 0x7F31B030u;
    // 7F31B030: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B034:
    ctx->pc = 0x7F31B034u;
    ctx->downcount -= 4;
    // 7F31B034: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31B038:
    ctx->pc = 0x7F31B038u;
    // 7F31B038: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B03C:
    ctx->pc = 0x7F31B03Cu;
    // 7F31B03C: rlwinm. r0, r0, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B040:
    ctx->pc = 0x7F31B040u;
    // 7F31B040: bc    12, 2, 0x7F31B05C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B05C;
        }
    }

label_7F31B044:
    ctx->pc = 0x7F31B044u;
    ctx->downcount -= 6;
    // 7F31B044: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F31B048:
    ctx->pc = 0x7F31B048u;
    // 7F31B048: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31B04C:
    ctx->pc = 0x7F31B04Cu;
    // 7F31B04C: addi    r3, r3, -23902
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-23902);

label_7F31B050:
    ctx->pc = 0x7F31B050u;
    // 7F31B050: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B054:
    ctx->pc = 0x7F31B054u;
    // 7F31B054: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B058:
    ctx->pc = 0x7F31B058u;
    // 7F31B058: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B05C:
    ctx->pc = 0x7F31B05Cu;
    ctx->downcount -= 6;
    // 7F31B05C: lis     r3, 252
    ctx->gpr[3] = ((u32)(s32)(252) << 16);

label_7F31B060:
    ctx->pc = 0x7F31B060u;
    // 7F31B060: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31B064:
    ctx->pc = 0x7F31B064u;
    // 7F31B064: addi    r3, r3, 19693
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(19693);

label_7F31B068:
    ctx->pc = 0x7F31B068u;
    // 7F31B068: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B06C:
    ctx->pc = 0x7F31B06Cu;
    // 7F31B06C: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B070:
    ctx->pc = 0x7F31B070u;
    // 7F31B070: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B074:
    ctx->pc = 0x7F31B074u;
    ctx->downcount -= 6;
    // 7F31B074: lis     r3, 40
    ctx->gpr[3] = ((u32)(s32)(40) << 16);

label_7F31B078:
    ctx->pc = 0x7F31B078u;
    // 7F31B078: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31B07C:
    ctx->pc = 0x7F31B07Cu;
    // 7F31B07C: addi    r3, r3, -22392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-22392);

label_7F31B080:
    ctx->pc = 0x7F31B080u;
    // 7F31B080: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B084:
    ctx->pc = 0x7F31B084u;
    // 7F31B084: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B088:
    ctx->pc = 0x7F31B088u;
    // 7F31B088: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B08C:
    ctx->pc = 0x7F31B08Cu;
    ctx->downcount -= 5;
    // 7F31B08C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31B090:
    ctx->pc = 0x7F31B090u;
    // 7F31B090: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B094:
    ctx->pc = 0x7F31B094u;
    // 7F31B094: andi.   r0, r0, 0x2800
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x2800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B098:
    ctx->pc = 0x7F31B098u;
    // 7F31B098: cmpwi   r0, 8192
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8192);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B09C:
    ctx->pc = 0x7F31B09Cu;
    // 7F31B09C: bc    12, 2, 0x7F31B0E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B0E0;
        }
    }

label_7F31B0A0:
    ctx->pc = 0x7F31B0A0u;
    ctx->downcount -= 1;
    // 7F31B0A0: bc    4, 0, 0x7F31B0BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B0BC;
        }
    }

label_7F31B0A4:
    ctx->pc = 0x7F31B0A4u;
    ctx->downcount -= 2;
    // 7F31B0A4: cmpwi   r0, 2048
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

label_7F31B0A8:
    ctx->pc = 0x7F31B0A8u;
    // 7F31B0A8: bc    12, 2, 0x7F31B0F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B0F8;
        }
    }

label_7F31B0AC:
    ctx->pc = 0x7F31B0ACu;
    ctx->downcount -= 1;
    // 7F31B0AC: bc    4, 0, 0x7F31B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B240;
        }
    }

label_7F31B0B0:
    ctx->pc = 0x7F31B0B0u;
    ctx->downcount -= 2;
    // 7F31B0B0: cmpwi   r0, 0
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

label_7F31B0B4:
    ctx->pc = 0x7F31B0B4u;
    // 7F31B0B4: bc    12, 2, 0x7F31B0C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B0C8;
        }
    }

label_7F31B0B8:
    ctx->pc = 0x7F31B0B8u;
    ctx->downcount -= 1;
    // 7F31B0B8: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B0BC:
    ctx->pc = 0x7F31B0BCu;
    ctx->downcount -= 2;
    // 7F31B0BC: cmpwi   r0, 10240
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B0C0:
    ctx->pc = 0x7F31B0C0u;
    // 7F31B0C0: bc    12, 2, 0x7F31B110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B110;
        }
    }

label_7F31B0C4:
    ctx->pc = 0x7F31B0C4u;
    ctx->downcount -= 1;
    // 7F31B0C4: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B0C8:
    ctx->pc = 0x7F31B0C8u;
    ctx->downcount -= 6;
    // 7F31B0C8: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F31B0CC:
    ctx->pc = 0x7F31B0CCu;
    // 7F31B0CC: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F31B0D0:
    ctx->pc = 0x7F31B0D0u;
    // 7F31B0D0: addi    r3, r3, 14455
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14455);

label_7F31B0D4:
    ctx->pc = 0x7F31B0D4u;
    // 7F31B0D4: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B0D8:
    ctx->pc = 0x7F31B0D8u;
    // 7F31B0D8: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B0DC:
    ctx->pc = 0x7F31B0DCu;
    // 7F31B0DC: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B0E0:
    ctx->pc = 0x7F31B0E0u;
    ctx->downcount -= 6;
    // 7F31B0E0: lis     r3, 225
    ctx->gpr[3] = ((u32)(s32)(225) << 16);

label_7F31B0E4:
    ctx->pc = 0x7F31B0E4u;
    // 7F31B0E4: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F31B0E8:
    ctx->pc = 0x7F31B0E8u;
    // 7F31B0E8: addi    r3, r3, -4447
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4447);

label_7F31B0EC:
    ctx->pc = 0x7F31B0ECu;
    // 7F31B0EC: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B0F0:
    ctx->pc = 0x7F31B0F0u;
    // 7F31B0F0: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B0F4:
    ctx->pc = 0x7F31B0F4u;
    // 7F31B0F4: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B0F8:
    ctx->pc = 0x7F31B0F8u;
    ctx->downcount -= 6;
    // 7F31B0F8: lis     r3, 42
    ctx->gpr[3] = ((u32)(s32)(42) << 16);

label_7F31B0FC:
    ctx->pc = 0x7F31B0FCu;
    // 7F31B0FC: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F31B100:
    ctx->pc = 0x7F31B100u;
    // 7F31B100: addi    r3, r3, 15479
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15479);

label_7F31B104:
    ctx->pc = 0x7F31B104u;
    // 7F31B104: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B108:
    ctx->pc = 0x7F31B108u;
    // 7F31B108: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B10C:
    ctx->pc = 0x7F31B10Cu;
    // 7F31B10C: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B110:
    ctx->pc = 0x7F31B110u;
    ctx->downcount -= 6;
    // 7F31B110: lis     r3, 225
    ctx->gpr[3] = ((u32)(s32)(225) << 16);

label_7F31B114:
    ctx->pc = 0x7F31B114u;
    // 7F31B114: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F31B118:
    ctx->pc = 0x7F31B118u;
    // 7F31B118: addi    r3, r3, -3423
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-3423);

label_7F31B11C:
    ctx->pc = 0x7F31B11Cu;
    // 7F31B11C: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B120:
    ctx->pc = 0x7F31B120u;
    // 7F31B120: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B124:
    ctx->pc = 0x7F31B124u;
    // 7F31B124: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B128:
    ctx->pc = 0x7F31B128u;
    ctx->downcount -= 4;
    // 7F31B128: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31B12C:
    ctx->pc = 0x7F31B12Cu;
    // 7F31B12C: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B130:
    ctx->pc = 0x7F31B130u;
    // 7F31B130: rlwinm. r0, r0, 0, 20, 20
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B134:
    ctx->pc = 0x7F31B134u;
    // 7F31B134: bc    12, 2, 0x7F31B148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B148;
        }
    }

label_7F31B138:
    ctx->pc = 0x7F31B138u;
    ctx->downcount -= 4;
    // 7F31B138: lis     r3, 196
    ctx->gpr[3] = ((u32)(s32)(196) << 16);

label_7F31B13C:
    ctx->pc = 0x7F31B13Cu;
    // 7F31B13C: addi    r0, r3, 3916
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(3916);

label_7F31B140:
    ctx->pc = 0x7F31B140u;
    // 7F31B140: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B144:
    ctx->pc = 0x7F31B144u;
    // 7F31B144: b       0x7F31B154
    {
            goto label_7F31B154;
    }

label_7F31B148:
    ctx->pc = 0x7F31B148u;
    ctx->downcount -= 3;
    // 7F31B148: lis     r3, 196
    ctx->gpr[3] = ((u32)(s32)(196) << 16);

label_7F31B14C:
    ctx->pc = 0x7F31B14Cu;
    // 7F31B14C: addi    r0, r3, 2891
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2891);

label_7F31B150:
    ctx->pc = 0x7F31B150u;
    // 7F31B150: stw     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B154:
    ctx->pc = 0x7F31B154u;
    ctx->downcount -= 3;
    // 7F31B154: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F31B158:
    ctx->pc = 0x7F31B158u;
    // 7F31B158: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B15C:
    ctx->pc = 0x7F31B15Cu;
    // 7F31B15C: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B160:
    ctx->pc = 0x7F31B160u;
    ctx->downcount -= 8;
    // 7F31B160: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F31B164:
    ctx->pc = 0x7F31B164u;
    // 7F31B164: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F31B168:
    ctx->pc = 0x7F31B168u;
    // 7F31B168: addi    r4, r4, -3320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3320);

label_7F31B16C:
    ctx->pc = 0x7F31B16Cu;
    // 7F31B16C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31B170:
    ctx->pc = 0x7F31B170u;
    // 7F31B170: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F31B174:
    ctx->pc = 0x7F31B174u;
    // 7F31B174: andi.   r4, r4, 0xA800
    {
        ctx->gpr[4] = ctx->gpr[4] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B178:
    ctx->pc = 0x7F31B178u;
    // 7F31B178: cmpw    r4, r0
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

label_7F31B17C:
    ctx->pc = 0x7F31B17Cu;
    // 7F31B17C: bc    12, 2, 0x7F31B1E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B1E4;
        }
    }

label_7F31B180:
    ctx->pc = 0x7F31B180u;
    ctx->downcount -= 1;
    // 7F31B180: bc    4, 0, 0x7F31B1B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B1B4;
        }
    }

label_7F31B184:
    ctx->pc = 0x7F31B184u;
    ctx->downcount -= 2;
    // 7F31B184: cmpwi   r4, 8192
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

label_7F31B188:
    ctx->pc = 0x7F31B188u;
    // 7F31B188: bc    12, 2, 0x7F31B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B240;
        }
    }

label_7F31B18C:
    ctx->pc = 0x7F31B18Cu;
    ctx->downcount -= 1;
    // 7F31B18C: bc    4, 0, 0x7F31B1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B1A8;
        }
    }

label_7F31B190:
    ctx->pc = 0x7F31B190u;
    ctx->downcount -= 2;
    // 7F31B190: cmpwi   r4, 2048
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B194:
    ctx->pc = 0x7F31B194u;
    // 7F31B194: bc    12, 2, 0x7F31B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B240;
        }
    }

label_7F31B198:
    ctx->pc = 0x7F31B198u;
    ctx->downcount -= 1;
    // 7F31B198: bc    4, 0, 0x7F31B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B240;
        }
    }

label_7F31B19C:
    ctx->pc = 0x7F31B19Cu;
    ctx->downcount -= 2;
    // 7F31B19C: cmpwi   r4, 0
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

label_7F31B1A0:
    ctx->pc = 0x7F31B1A0u;
    // 7F31B1A0: bc    12, 2, 0x7F31B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B240;
        }
    }

label_7F31B1A4:
    ctx->pc = 0x7F31B1A4u;
    ctx->downcount -= 1;
    // 7F31B1A4: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B1A8:
    ctx->pc = 0x7F31B1A8u;
    ctx->downcount -= 2;
    // 7F31B1A8: cmpwi   r4, 10240
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B1AC:
    ctx->pc = 0x7F31B1ACu;
    // 7F31B1AC: bc    12, 2, 0x7F31B240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B240;
        }
    }

label_7F31B1B0:
    ctx->pc = 0x7F31B1B0u;
    ctx->downcount -= 1;
    // 7F31B1B0: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B1B4:
    ctx->pc = 0x7F31B1B4u;
    ctx->downcount -= 3;
    // 7F31B1B4: addi    r0, r3, -24576
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24576);

label_7F31B1B8:
    ctx->pc = 0x7F31B1B8u;
    // 7F31B1B8: cmpw    r4, r0
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

label_7F31B1BC:
    ctx->pc = 0x7F31B1BCu;
    // 7F31B1BC: bc    12, 2, 0x7F31B1FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B1FC;
        }
    }

label_7F31B1C0:
    ctx->pc = 0x7F31B1C0u;
    ctx->downcount -= 1;
    // 7F31B1C0: bc    4, 0, 0x7F31B1D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B1D4;
        }
    }

label_7F31B1C4:
    ctx->pc = 0x7F31B1C4u;
    ctx->downcount -= 3;
    // 7F31B1C4: addi    r0, r3, -30720
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30720);

label_7F31B1C8:
    ctx->pc = 0x7F31B1C8u;
    // 7F31B1C8: cmpw    r4, r0
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

label_7F31B1CC:
    ctx->pc = 0x7F31B1CCu;
    // 7F31B1CC: bc    12, 2, 0x7F31B214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B214;
        }
    }

label_7F31B1D0:
    ctx->pc = 0x7F31B1D0u;
    ctx->downcount -= 1;
    // 7F31B1D0: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B1D4:
    ctx->pc = 0x7F31B1D4u;
    ctx->downcount -= 3;
    // 7F31B1D4: addi    r0, r3, -22528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-22528);

label_7F31B1D8:
    ctx->pc = 0x7F31B1D8u;
    // 7F31B1D8: cmpw    r4, r0
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

label_7F31B1DC:
    ctx->pc = 0x7F31B1DCu;
    // 7F31B1DC: bc    12, 2, 0x7F31B22C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B22C;
        }
    }

label_7F31B1E0:
    ctx->pc = 0x7F31B1E0u;
    ctx->downcount -= 1;
    // 7F31B1E0: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B1E4:
    ctx->pc = 0x7F31B1E4u;
    ctx->downcount -= 6;
    // 7F31B1E4: lis     r3, 198
    ctx->gpr[3] = ((u32)(s32)(198) << 16);

label_7F31B1E8:
    ctx->pc = 0x7F31B1E8u;
    // 7F31B1E8: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F31B1EC:
    ctx->pc = 0x7F31B1ECu;
    // 7F31B1EC: addi    r3, r3, 11881
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11881);

label_7F31B1F0:
    ctx->pc = 0x7F31B1F0u;
    // 7F31B1F0: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B1F4:
    ctx->pc = 0x7F31B1F4u;
    // 7F31B1F4: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B1F8:
    ctx->pc = 0x7F31B1F8u;
    // 7F31B1F8: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B1FC:
    ctx->pc = 0x7F31B1FCu;
    ctx->downcount -= 6;
    // 7F31B1FC: lis     r3, 198
    ctx->gpr[3] = ((u32)(s32)(198) << 16);

label_7F31B200:
    ctx->pc = 0x7F31B200u;
    // 7F31B200: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F31B204:
    ctx->pc = 0x7F31B204u;
    // 7F31B204: addi    r3, r3, 11913
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11913);

label_7F31B208:
    ctx->pc = 0x7F31B208u;
    // 7F31B208: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B20C:
    ctx->pc = 0x7F31B20Cu;
    // 7F31B20C: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B210:
    ctx->pc = 0x7F31B210u;
    // 7F31B210: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B214:
    ctx->pc = 0x7F31B214u;
    ctx->downcount -= 6;
    // 7F31B214: lis     r3, 198
    ctx->gpr[3] = ((u32)(s32)(198) << 16);

label_7F31B218:
    ctx->pc = 0x7F31B218u;
    // 7F31B218: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F31B21C:
    ctx->pc = 0x7F31B21Cu;
    // 7F31B21C: addi    r3, r3, 11913
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11913);

label_7F31B220:
    ctx->pc = 0x7F31B220u;
    // 7F31B220: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B224:
    ctx->pc = 0x7F31B224u;
    // 7F31B224: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B228:
    ctx->pc = 0x7F31B228u;
    // 7F31B228: b       0x7F31B240
    {
            goto label_7F31B240;
    }

label_7F31B22C:
    ctx->pc = 0x7F31B22Cu;
    ctx->downcount -= 5;
    // 7F31B22C: lis     r3, 198
    ctx->gpr[3] = ((u32)(s32)(198) << 16);

label_7F31B230:
    ctx->pc = 0x7F31B230u;
    // 7F31B230: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F31B234:
    ctx->pc = 0x7F31B234u;
    // 7F31B234: addi    r3, r3, 12937
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12937);

label_7F31B238:
    ctx->pc = 0x7F31B238u;
    // 7F31B238: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B23C:
    ctx->pc = 0x7F31B23Cu;
    // 7F31B23C: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B240:
    ctx->pc = 0x7F31B240u;
    ctx->downcount -= 4;
    // 7F31B240: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F31B244:
    ctx->pc = 0x7F31B244u;
    // 7F31B244: li      r4, 63
    ctx->gpr[4] = (u32)(s32)(63);

label_7F31B248:
    ctx->pc = 0x7F31B248u;
    // 7F31B248: li      r5, 248
    ctx->gpr[5] = (u32)(s32)(248);

label_7F31B24C:
    ctx->pc = 0x7F31B24Cu;
    // 7F31B24C: bl      0x7F011698
    {
            ctx->lr = 0x7F31B250u;
            ctx->pc = 0x7F011698u;
            return;
    }

label_7F31B250:
    ctx->pc = 0x7F31B250u;
    ctx->downcount -= 1;
    // 7F31B250: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31B254:
    ctx->pc = 0x7F31B254u;
    ctx->downcount -= 7;
    // 7F31B254: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31B258:
    ctx->pc = 0x7F31B258u;
    // 7F31B258: addi    r4, r3, -3320
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-3320);

label_7F31B25C:
    ctx->pc = 0x7F31B25Cu;
    // 7F31B25C: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31B260:
    ctx->pc = 0x7F31B260u;
    // 7F31B260: rlwinm r3, r5, 0, 15, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x0001FFFFu;
    }

label_7F31B264:
    ctx->pc = 0x7F31B264u;
    // 7F31B264: addis   r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-1) << 16);

label_7F31B268:
    ctx->pc = 0x7F31B268u;
    // 7F31B268: cmplwi  r0, 0xFFFF
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xFFFFu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B26C:
    ctx->pc = 0x7F31B26Cu;
    // 7F31B26C: bc    4, 2, 0x7F31B298
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B298;
        }
    }

label_7F31B270:
    ctx->pc = 0x7F31B270u;
    ctx->downcount -= 2;
    // 7F31B270: rlwinm. r0, r5, 0, 13, 13
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00040000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B274:
    ctx->pc = 0x7F31B274u;
    // 7F31B274: bc    4, 2, 0x7F31B28C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B28C;
        }
    }

label_7F31B278:
    ctx->pc = 0x7F31B278u;
    ctx->downcount -= 5;
    // 7F31B278: oris    r3, r5, 0x0004
    ctx->gpr[3] = ctx->gpr[5] | (0x0004u << 16);

label_7F31B27C:
    ctx->pc = 0x7F31B27Cu;
    // 7F31B27C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F31B280:
    ctx->pc = 0x7F31B280u;
    // 7F31B280: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B284:
    ctx->pc = 0x7F31B284u;
    // 7F31B284: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B288:
    ctx->pc = 0x7F31B288u;
    // 7F31B288: b       0x7F31B2BC
    {
            goto label_7F31B2BC;
    }

label_7F31B28C:
    ctx->pc = 0x7F31B28Cu;
    ctx->downcount -= 3;
    // 7F31B28C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31B290:
    ctx->pc = 0x7F31B290u;
    // 7F31B290: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B294:
    ctx->pc = 0x7F31B294u;
    // 7F31B294: b       0x7F31B2BC
    {
            goto label_7F31B2BC;
    }

label_7F31B298:
    ctx->pc = 0x7F31B298u;
    ctx->downcount -= 2;
    // 7F31B298: rlwinm. r0, r5, 0, 14, 14
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00020000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B29C:
    ctx->pc = 0x7F31B29Cu;
    // 7F31B29C: bc    4, 2, 0x7F31B2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B2B4;
        }
    }

label_7F31B2A0:
    ctx->pc = 0x7F31B2A0u;
    ctx->downcount -= 5;
    // 7F31B2A0: oris    r3, r5, 0x0002
    ctx->gpr[3] = ctx->gpr[5] | (0x0002u << 16);

label_7F31B2A4:
    ctx->pc = 0x7F31B2A4u;
    // 7F31B2A4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31B2A8:
    ctx->pc = 0x7F31B2A8u;
    // 7F31B2A8: stw     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B2AC:
    ctx->pc = 0x7F31B2ACu;
    // 7F31B2AC: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B2B0:
    ctx->pc = 0x7F31B2B0u;
    // 7F31B2B0: b       0x7F31B2BC
    {
            goto label_7F31B2BC;
    }

label_7F31B2B4:
    ctx->pc = 0x7F31B2B4u;
    ctx->downcount -= 2;
    // 7F31B2B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31B2B8:
    ctx->pc = 0x7F31B2B8u;
    // 7F31B2B8: stw     r0, 324(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B2BC:
    ctx->pc = 0x7F31B2BCu;
    ctx->downcount -= 8;
    // 7F31B2BC: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F31B2C0:
    ctx->pc = 0x7F31B2C0u;
    // 7F31B2C0: stw     r0, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B2C4:
    ctx->pc = 0x7F31B2C4u;
    // 7F31B2C4: lwz     r3, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B2C8:
    ctx->pc = 0x7F31B2C8u;
    // 7F31B2C8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F31B2CC:
    ctx->pc = 0x7F31B2CCu;
    // 7F31B2CC: stw     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B2D0:
    ctx->pc = 0x7F31B2D0u;
    // 7F31B2D0: lwz     r0, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B2D4:
    ctx->pc = 0x7F31B2D4u;
    // 7F31B2D4: cmpwi   r0, 20
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

label_7F31B2D8:
    ctx->pc = 0x7F31B2D8u;
    // 7F31B2D8: bc    4, 1, 0x7F31B300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B300;
        }
    }

label_7F31B2DC:
    ctx->pc = 0x7F31B2DCu;
    ctx->downcount -= 6;
    // 7F31B2DC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31B2E0:
    ctx->pc = 0x7F31B2E0u;
    // 7F31B2E0: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F31B2E4:
    ctx->pc = 0x7F31B2E4u;
    // 7F31B2E4: addi    r4, r3, 13516
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13516);

label_7F31B2E8:
    ctx->pc = 0x7F31B2E8u;
    // 7F31B2E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31B2EC:
    ctx->pc = 0x7F31B2ECu;
    // 7F31B2EC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B2F0:
    ctx->pc = 0x7F31B2F0u;
    // 7F31B2F0: bl      0x7F3198D8
    {
            ctx->lr = 0x7F31B2F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3198D8u;
                return;
            }
            goto label_7F3198D8;
    }

label_7F31B2F4:
    ctx->pc = 0x7F31B2F4u;
    ctx->downcount -= 2;
    // 7F31B2F4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31B2F8:
    ctx->pc = 0x7F31B2F8u;
    // 7F31B2F8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31B2FCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31B2FC:
    ctx->pc = 0x7F31B2FCu;
    ctx->downcount -= 1;
    // 7F31B2FC: b       0x7F31B360
    {
            goto label_7F31B360;
    }

label_7F31B300:
    ctx->pc = 0x7F31B300u;
    ctx->downcount -= 51;
    // 7F31B300: mulli   r4, r0, 255
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)255);

label_7F31B304:
    ctx->pc = 0x7F31B304u;
    // 7F31B304: li      r0, 20
    ctx->gpr[0] = (u32)(s32)(20);

label_7F31B308:
    ctx->pc = 0x7F31B308u;
    // 7F31B308: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31B30C:
    ctx->pc = 0x7F31B30Cu;
    // 7F31B30C: addi    r3, r30, 144
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(144);

label_7F31B310:
    ctx->pc = 0x7F31B310u;
    // 7F31B310: divw   r0, r4, r0
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F31B314:
    ctx->pc = 0x7F31B314u;
    // 7F31B314: addi    r4, r5, -29300
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-29300);

label_7F31B318:
    ctx->pc = 0x7F31B318u;
    // 7F31B318: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31B31C:
    ctx->pc = 0x7F31B31Cu;
    // 7F31B31C: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31B320:
    ctx->pc = 0x7F31B320u;
    // 7F31B320: stb     r0, 15(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31B324:
    ctx->pc = 0x7F31B324u;
    // 7F31B324: bl      0x7F2EA4A0
    {
            ctx->lr = 0x7F31B328u;
            ctx->pc = 0x7F2EA4A0u;
            return;
    }

label_7F31B328:
    ctx->pc = 0x7F31B328u;
    ctx->downcount -= 2;
    // 7F31B328: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31B32C:
    ctx->pc = 0x7F31B32Cu;
    // 7F31B32C: bl      0x7F2EA8C0
    {
            ctx->lr = 0x7F31B330u;
            ctx->pc = 0x7F2EA8C0u;
            return;
    }

label_7F31B330:
    ctx->pc = 0x7F31B330u;
    ctx->downcount -= 1;
    // 7F31B330: bl      0x7F2EA944
    {
            ctx->lr = 0x7F31B334u;
            ctx->pc = 0x7F2EA944u;
            return;
    }

label_7F31B334:
    ctx->pc = 0x7F31B334u;
    ctx->downcount -= 8;
    // 7F31B334: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B338:
    ctx->pc = 0x7F31B338u;
    // 7F31B338: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F31B33C:
    ctx->pc = 0x7F31B33Cu;
    // 7F31B33C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31B340:
    ctx->pc = 0x7F31B340u;
    // 7F31B340: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31B344:
    ctx->pc = 0x7F31B344u;
    // 7F31B344: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B348:
    ctx->pc = 0x7F31B348u;
    // 7F31B348: li      r5, 8192
    ctx->gpr[5] = (u32)(s32)(8192);

label_7F31B34C:
    ctx->pc = 0x7F31B34Cu;
    // 7F31B34C: li      r6, 7168
    ctx->gpr[6] = (u32)(s32)(7168);

label_7F31B350:
    ctx->pc = 0x7F31B350u;
    // 7F31B350: bl      0x7F2EAEA0
    {
            ctx->lr = 0x7F31B354u;
            ctx->pc = 0x7F2EAEA0u;
            return;
    }

label_7F31B354:
    ctx->pc = 0x7F31B354u;
    ctx->downcount -= 3;
    // 7F31B354: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F31B358:
    ctx->pc = 0x7F31B358u;
    // 7F31B358: addi    r3, r30, 144
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(144);

label_7F31B35C:
    ctx->pc = 0x7F31B35Cu;
    // 7F31B35C: bl      0x7F2EA688
    {
            ctx->lr = 0x7F31B360u;
            ctx->pc = 0x7F2EA688u;
            return;
    }

label_7F31B360:
    ctx->pc = 0x7F31B360u;
    ctx->downcount -= 2;
    // 7F31B360: cmpwi   r31, 0
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

label_7F31B364:
    ctx->pc = 0x7F31B364u;
    // 7F31B364: bc    12, 0, 0x7F31B6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B6F4;
        }
    }

label_7F31B368:
    ctx->pc = 0x7F31B368u;
    ctx->downcount -= 2;
    // 7F31B368: cmpwi   r31, 2
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

label_7F31B36C:
    ctx->pc = 0x7F31B36Cu;
    // 7F31B36C: bc    12, 2, 0x7F31B3C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B3C4;
        }
    }

label_7F31B370:
    ctx->pc = 0x7F31B370u;
    ctx->downcount -= 1;
    // 7F31B370: bc    4, 0, 0x7F31B380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B380;
        }
    }

label_7F31B374:
    ctx->pc = 0x7F31B374u;
    ctx->downcount -= 2;
    // 7F31B374: cmpwi   r31, 1
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

label_7F31B378:
    ctx->pc = 0x7F31B378u;
    // 7F31B378: bc    4, 0, 0x7F31B38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B38C;
        }
    }

label_7F31B37C:
    ctx->pc = 0x7F31B37Cu;
    ctx->downcount -= 1;
    // 7F31B37C: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B380:
    ctx->pc = 0x7F31B380u;
    ctx->downcount -= 2;
    // 7F31B380: cmpwi   r31, 4
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

label_7F31B384:
    ctx->pc = 0x7F31B384u;
    // 7F31B384: bc    4, 0, 0x7F31B528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B528;
        }
    }

label_7F31B388:
    ctx->pc = 0x7F31B388u;
    ctx->downcount -= 1;
    // 7F31B388: b       0x7F31B434
    {
            goto label_7F31B434;
    }

label_7F31B38C:
    ctx->pc = 0x7F31B38Cu;
    ctx->downcount -= 5;
    // 7F31B38C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31B390:
    ctx->pc = 0x7F31B390u;
    // 7F31B390: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B394:
    ctx->pc = 0x7F31B394u;
    // 7F31B394: rlwinm r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
    }

label_7F31B398:
    ctx->pc = 0x7F31B398u;
    // 7F31B398: cmpwi   r0, 2
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

label_7F31B39C:
    ctx->pc = 0x7F31B39Cu;
    // 7F31B39C: bc    12, 2, 0x7F31B3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B3A4;
        }
    }

label_7F31B3A0:
    ctx->pc = 0x7F31B3A0u;
    ctx->downcount -= 1;
    // 7F31B3A0: b       0x7F31B3B4
    {
            goto label_7F31B3B4;
    }

label_7F31B3A4:
    ctx->pc = 0x7F31B3A4u;
    ctx->downcount -= 4;
    // 7F31B3A4: lis     r3, 56
    ctx->gpr[3] = ((u32)(s32)(56) << 16);

label_7F31B3A8:
    ctx->pc = 0x7F31B3A8u;
    // 7F31B3A8: addi    r0, r3, 5257
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5257);

label_7F31B3AC:
    ctx->pc = 0x7F31B3ACu;
    // 7F31B3AC: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B3B0:
    ctx->pc = 0x7F31B3B0u;
    // 7F31B3B0: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B3B4:
    ctx->pc = 0x7F31B3B4u;
    ctx->downcount -= 4;
    // 7F31B3B4: lis     r3, 56
    ctx->gpr[3] = ((u32)(s32)(56) << 16);

label_7F31B3B8:
    ctx->pc = 0x7F31B3B8u;
    // 7F31B3B8: addi    r0, r3, 5256
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5256);

label_7F31B3BC:
    ctx->pc = 0x7F31B3BCu;
    // 7F31B3BC: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B3C0:
    ctx->pc = 0x7F31B3C0u;
    // 7F31B3C0: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B3C4:
    ctx->pc = 0x7F31B3C4u;
    ctx->downcount -= 5;
    // 7F31B3C4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31B3C8:
    ctx->pc = 0x7F31B3C8u;
    // 7F31B3C8: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B3CC:
    ctx->pc = 0x7F31B3CCu;
    // 7F31B3CC: andi.   r0, r0, 0x0028
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0028u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B3D0:
    ctx->pc = 0x7F31B3D0u;
    // 7F31B3D0: cmpwi   r0, 32
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

label_7F31B3D4:
    ctx->pc = 0x7F31B3D4u;
    // 7F31B3D4: bc    12, 2, 0x7F31B404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B404;
        }
    }

label_7F31B3D8:
    ctx->pc = 0x7F31B3D8u;
    ctx->downcount -= 1;
    // 7F31B3D8: bc    4, 0, 0x7F31B3E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B3E8;
        }
    }

label_7F31B3DC:
    ctx->pc = 0x7F31B3DCu;
    ctx->downcount -= 2;
    // 7F31B3DC: cmpwi   r0, 8
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

label_7F31B3E0:
    ctx->pc = 0x7F31B3E0u;
    // 7F31B3E0: bc    12, 2, 0x7F31B414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B414;
        }
    }

label_7F31B3E4:
    ctx->pc = 0x7F31B3E4u;
    ctx->downcount -= 1;
    // 7F31B3E4: b       0x7F31B424
    {
            goto label_7F31B424;
    }

label_7F31B3E8:
    ctx->pc = 0x7F31B3E8u;
    ctx->downcount -= 2;
    // 7F31B3E8: cmpwi   r0, 40
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

label_7F31B3EC:
    ctx->pc = 0x7F31B3ECu;
    // 7F31B3EC: bc    12, 2, 0x7F31B3F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B3F4;
        }
    }

label_7F31B3F0:
    ctx->pc = 0x7F31B3F0u;
    ctx->downcount -= 1;
    // 7F31B3F0: b       0x7F31B424
    {
            goto label_7F31B424;
    }

label_7F31B3F4:
    ctx->pc = 0x7F31B3F4u;
    ctx->downcount -= 4;
    // 7F31B3F4: lis     r3, 98
    ctx->gpr[3] = ((u32)(s32)(98) << 16);

label_7F31B3F8:
    ctx->pc = 0x7F31B3F8u;
    // 7F31B3F8: addi    r0, r3, 12529
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12529);

label_7F31B3FC:
    ctx->pc = 0x7F31B3FCu;
    // 7F31B3FC: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B400:
    ctx->pc = 0x7F31B400u;
    // 7F31B400: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B404:
    ctx->pc = 0x7F31B404u;
    ctx->downcount -= 4;
    // 7F31B404: lis     r3, 98
    ctx->gpr[3] = ((u32)(s32)(98) << 16);

label_7F31B408:
    ctx->pc = 0x7F31B408u;
    // 7F31B408: addi    r0, r3, 11505
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11505);

label_7F31B40C:
    ctx->pc = 0x7F31B40Cu;
    // 7F31B40C: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B410:
    ctx->pc = 0x7F31B410u;
    // 7F31B410: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B414:
    ctx->pc = 0x7F31B414u;
    ctx->downcount -= 4;
    // 7F31B414: lis     r3, 98
    ctx->gpr[3] = ((u32)(s32)(98) << 16);

label_7F31B418:
    ctx->pc = 0x7F31B418u;
    // 7F31B418: addi    r0, r3, 12528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(12528);

label_7F31B41C:
    ctx->pc = 0x7F31B41Cu;
    // 7F31B41C: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B420:
    ctx->pc = 0x7F31B420u;
    // 7F31B420: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B424:
    ctx->pc = 0x7F31B424u;
    ctx->downcount -= 4;
    // 7F31B424: lis     r3, 98
    ctx->gpr[3] = ((u32)(s32)(98) << 16);

label_7F31B428:
    ctx->pc = 0x7F31B428u;
    // 7F31B428: addi    r0, r3, 11504
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(11504);

label_7F31B42C:
    ctx->pc = 0x7F31B42Cu;
    // 7F31B42C: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B430:
    ctx->pc = 0x7F31B430u;
    // 7F31B430: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B434:
    ctx->pc = 0x7F31B434u;
    ctx->downcount -= 8;
    // 7F31B434: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F31B438:
    ctx->pc = 0x7F31B438u;
    // 7F31B438: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F31B43C:
    ctx->pc = 0x7F31B43Cu;
    // 7F31B43C: addi    r4, r4, -3320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3320);

label_7F31B440:
    ctx->pc = 0x7F31B440u;
    // 7F31B440: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31B444:
    ctx->pc = 0x7F31B444u;
    // 7F31B444: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F31B448:
    ctx->pc = 0x7F31B448u;
    // 7F31B448: andi.   r4, r4, 0xA800
    {
        ctx->gpr[4] = ctx->gpr[4] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B44C:
    ctx->pc = 0x7F31B44Cu;
    // 7F31B44C: cmpw    r4, r0
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

label_7F31B450:
    ctx->pc = 0x7F31B450u;
    // 7F31B450: bc    12, 2, 0x7F31B50C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B50C;
        }
    }

label_7F31B454:
    ctx->pc = 0x7F31B454u;
    ctx->downcount -= 1;
    // 7F31B454: bc    4, 0, 0x7F31B47C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B47C;
        }
    }

label_7F31B458:
    ctx->pc = 0x7F31B458u;
    ctx->downcount -= 2;
    // 7F31B458: cmpwi   r4, 8192
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

label_7F31B45C:
    ctx->pc = 0x7F31B45Cu;
    // 7F31B45C: bc    12, 2, 0x7F31B4FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B4FC;
        }
    }

label_7F31B460:
    ctx->pc = 0x7F31B460u;
    ctx->downcount -= 1;
    // 7F31B460: bc    4, 0, 0x7F31B470
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B470;
        }
    }

label_7F31B464:
    ctx->pc = 0x7F31B464u;
    ctx->downcount -= 2;
    // 7F31B464: cmpwi   r4, 2048
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B468:
    ctx->pc = 0x7F31B468u;
    // 7F31B468: bc    12, 2, 0x7F31B4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B4DC;
        }
    }

label_7F31B46C:
    ctx->pc = 0x7F31B46Cu;
    ctx->downcount -= 1;
    // 7F31B46C: b       0x7F31B51C
    {
            goto label_7F31B51C;
    }

label_7F31B470:
    ctx->pc = 0x7F31B470u;
    ctx->downcount -= 2;
    // 7F31B470: cmpwi   r4, 10240
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B474:
    ctx->pc = 0x7F31B474u;
    // 7F31B474: bc    12, 2, 0x7F31B4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B4BC;
        }
    }

label_7F31B478:
    ctx->pc = 0x7F31B478u;
    ctx->downcount -= 1;
    // 7F31B478: b       0x7F31B51C
    {
            goto label_7F31B51C;
    }

label_7F31B47C:
    ctx->pc = 0x7F31B47Cu;
    ctx->downcount -= 3;
    // 7F31B47C: addi    r0, r3, -24576
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24576);

label_7F31B480:
    ctx->pc = 0x7F31B480u;
    // 7F31B480: cmpw    r4, r0
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

label_7F31B484:
    ctx->pc = 0x7F31B484u;
    // 7F31B484: bc    12, 2, 0x7F31B4EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B4EC;
        }
    }

label_7F31B488:
    ctx->pc = 0x7F31B488u;
    ctx->downcount -= 1;
    // 7F31B488: bc    4, 0, 0x7F31B49C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B49C;
        }
    }

label_7F31B48C:
    ctx->pc = 0x7F31B48Cu;
    ctx->downcount -= 3;
    // 7F31B48C: addi    r0, r3, -30720
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30720);

label_7F31B490:
    ctx->pc = 0x7F31B490u;
    // 7F31B490: cmpw    r4, r0
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

label_7F31B494:
    ctx->pc = 0x7F31B494u;
    // 7F31B494: bc    12, 2, 0x7F31B4CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B4CC;
        }
    }

label_7F31B498:
    ctx->pc = 0x7F31B498u;
    ctx->downcount -= 1;
    // 7F31B498: b       0x7F31B51C
    {
            goto label_7F31B51C;
    }

label_7F31B49C:
    ctx->pc = 0x7F31B49Cu;
    ctx->downcount -= 3;
    // 7F31B49C: addi    r0, r3, -22528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-22528);

label_7F31B4A0:
    ctx->pc = 0x7F31B4A0u;
    // 7F31B4A0: cmpw    r4, r0
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

label_7F31B4A4:
    ctx->pc = 0x7F31B4A4u;
    // 7F31B4A4: bc    12, 2, 0x7F31B4AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B4AC;
        }
    }

label_7F31B4A8:
    ctx->pc = 0x7F31B4A8u;
    ctx->downcount -= 1;
    // 7F31B4A8: b       0x7F31B51C
    {
            goto label_7F31B51C;
    }

label_7F31B4AC:
    ctx->pc = 0x7F31B4ACu;
    ctx->downcount -= 4;
    // 7F31B4AC: lis     r3, 196
    ctx->gpr[3] = ((u32)(s32)(196) << 16);

label_7F31B4B0:
    ctx->pc = 0x7F31B4B0u;
    // 7F31B4B0: addi    r0, r3, -11815
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-11815);

label_7F31B4B4:
    ctx->pc = 0x7F31B4B4u;
    // 7F31B4B4: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B4B8:
    ctx->pc = 0x7F31B4B8u;
    // 7F31B4B8: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B4BC:
    ctx->pc = 0x7F31B4BCu;
    ctx->downcount -= 4;
    // 7F31B4BC: lis     r3, 196
    ctx->gpr[3] = ((u32)(s32)(196) << 16);

label_7F31B4C0:
    ctx->pc = 0x7F31B4C0u;
    // 7F31B4C0: addi    r0, r3, -11816
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-11816);

label_7F31B4C4:
    ctx->pc = 0x7F31B4C4u;
    // 7F31B4C4: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B4C8:
    ctx->pc = 0x7F31B4C8u;
    // 7F31B4C8: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B4CC:
    ctx->pc = 0x7F31B4CCu;
    ctx->downcount -= 4;
    // 7F31B4CC: lis     r3, 196
    ctx->gpr[3] = ((u32)(s32)(196) << 16);

label_7F31B4D0:
    ctx->pc = 0x7F31B4D0u;
    // 7F31B4D0: addi    r0, r3, -12839
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-12839);

label_7F31B4D4:
    ctx->pc = 0x7F31B4D4u;
    // 7F31B4D4: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B4D8:
    ctx->pc = 0x7F31B4D8u;
    // 7F31B4D8: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B4DC:
    ctx->pc = 0x7F31B4DCu;
    ctx->downcount -= 4;
    // 7F31B4DC: lis     r3, 196
    ctx->gpr[3] = ((u32)(s32)(196) << 16);

label_7F31B4E0:
    ctx->pc = 0x7F31B4E0u;
    // 7F31B4E0: addi    r0, r3, -12840
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-12840);

label_7F31B4E4:
    ctx->pc = 0x7F31B4E4u;
    // 7F31B4E4: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B4E8:
    ctx->pc = 0x7F31B4E8u;
    // 7F31B4E8: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B4EC:
    ctx->pc = 0x7F31B4ECu;
    ctx->downcount -= 4;
    // 7F31B4EC: lis     r3, 180
    ctx->gpr[3] = ((u32)(s32)(180) << 16);

label_7F31B4F0:
    ctx->pc = 0x7F31B4F0u;
    // 7F31B4F0: addi    r0, r3, -11815
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-11815);

label_7F31B4F4:
    ctx->pc = 0x7F31B4F4u;
    // 7F31B4F4: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B4F8:
    ctx->pc = 0x7F31B4F8u;
    // 7F31B4F8: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B4FC:
    ctx->pc = 0x7F31B4FCu;
    ctx->downcount -= 4;
    // 7F31B4FC: lis     r3, 180
    ctx->gpr[3] = ((u32)(s32)(180) << 16);

label_7F31B500:
    ctx->pc = 0x7F31B500u;
    // 7F31B500: addi    r0, r3, -11816
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-11816);

label_7F31B504:
    ctx->pc = 0x7F31B504u;
    // 7F31B504: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B508:
    ctx->pc = 0x7F31B508u;
    // 7F31B508: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B50C:
    ctx->pc = 0x7F31B50Cu;
    ctx->downcount -= 4;
    // 7F31B50C: lis     r3, 180
    ctx->gpr[3] = ((u32)(s32)(180) << 16);

label_7F31B510:
    ctx->pc = 0x7F31B510u;
    // 7F31B510: addi    r0, r3, -12839
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-12839);

label_7F31B514:
    ctx->pc = 0x7F31B514u;
    // 7F31B514: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B518:
    ctx->pc = 0x7F31B518u;
    // 7F31B518: b       0x7F31B528
    {
            goto label_7F31B528;
    }

label_7F31B51C:
    ctx->pc = 0x7F31B51Cu;
    ctx->downcount -= 3;
    // 7F31B51C: lis     r3, 180
    ctx->gpr[3] = ((u32)(s32)(180) << 16);

label_7F31B520:
    ctx->pc = 0x7F31B520u;
    // 7F31B520: addi    r0, r3, -12840
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-12840);

label_7F31B524:
    ctx->pc = 0x7F31B524u;
    // 7F31B524: stw     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B528:
    ctx->pc = 0x7F31B528u;
    ctx->downcount -= 3;
    // 7F31B528: lwz     r0, 328(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(328);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B52C:
    ctx->pc = 0x7F31B52Cu;
    // 7F31B52C: cmpw    r31, r0
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

label_7F31B530:
    ctx->pc = 0x7F31B530u;
    // 7F31B530: bc    12, 2, 0x7F31B6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B6F4;
        }
    }

label_7F31B534:
    ctx->pc = 0x7F31B534u;
    ctx->downcount -= 2;
    // 7F31B534: cmpwi   r0, 2
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

label_7F31B538:
    ctx->pc = 0x7F31B538u;
    // 7F31B538: bc    12, 2, 0x7F31B590
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B590;
        }
    }

label_7F31B53C:
    ctx->pc = 0x7F31B53Cu;
    ctx->downcount -= 1;
    // 7F31B53C: bc    4, 0, 0x7F31B54C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B54C;
        }
    }

label_7F31B540:
    ctx->pc = 0x7F31B540u;
    ctx->downcount -= 2;
    // 7F31B540: cmpwi   r0, 1
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

label_7F31B544:
    ctx->pc = 0x7F31B544u;
    // 7F31B544: bc    4, 0, 0x7F31B558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B558;
        }
    }

label_7F31B548:
    ctx->pc = 0x7F31B548u;
    ctx->downcount -= 1;
    // 7F31B548: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B54C:
    ctx->pc = 0x7F31B54Cu;
    ctx->downcount -= 2;
    // 7F31B54C: cmpwi   r0, 4
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

label_7F31B550:
    ctx->pc = 0x7F31B550u;
    // 7F31B550: bc    4, 0, 0x7F31B6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B6F4;
        }
    }

label_7F31B554:
    ctx->pc = 0x7F31B554u;
    ctx->downcount -= 1;
    // 7F31B554: b       0x7F31B600
    {
            goto label_7F31B600;
    }

label_7F31B558:
    ctx->pc = 0x7F31B558u;
    ctx->downcount -= 5;
    // 7F31B558: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31B55C:
    ctx->pc = 0x7F31B55Cu;
    // 7F31B55C: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B560:
    ctx->pc = 0x7F31B560u;
    // 7F31B560: rlwinm r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
    }

label_7F31B564:
    ctx->pc = 0x7F31B564u;
    // 7F31B564: cmpwi   r0, 2
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

label_7F31B568:
    ctx->pc = 0x7F31B568u;
    // 7F31B568: bc    12, 2, 0x7F31B570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B570;
        }
    }

label_7F31B56C:
    ctx->pc = 0x7F31B56Cu;
    ctx->downcount -= 1;
    // 7F31B56C: b       0x7F31B580
    {
            goto label_7F31B580;
    }

label_7F31B570:
    ctx->pc = 0x7F31B570u;
    ctx->downcount -= 4;
    // 7F31B570: lis     r3, 146
    ctx->gpr[3] = ((u32)(s32)(146) << 16);

label_7F31B574:
    ctx->pc = 0x7F31B574u;
    // 7F31B574: addi    r0, r3, 17617
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17617);

label_7F31B578:
    ctx->pc = 0x7F31B578u;
    // 7F31B578: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B57C:
    ctx->pc = 0x7F31B57Cu;
    // 7F31B57C: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B580:
    ctx->pc = 0x7F31B580u;
    ctx->downcount -= 4;
    // 7F31B580: lis     r3, 146
    ctx->gpr[3] = ((u32)(s32)(146) << 16);

label_7F31B584:
    ctx->pc = 0x7F31B584u;
    // 7F31B584: addi    r0, r3, 17616
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(17616);

label_7F31B588:
    ctx->pc = 0x7F31B588u;
    // 7F31B588: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B58C:
    ctx->pc = 0x7F31B58Cu;
    // 7F31B58C: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B590:
    ctx->pc = 0x7F31B590u;
    ctx->downcount -= 5;
    // 7F31B590: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31B594:
    ctx->pc = 0x7F31B594u;
    // 7F31B594: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B598:
    ctx->pc = 0x7F31B598u;
    // 7F31B598: andi.   r0, r0, 0x0028
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0028u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B59C:
    ctx->pc = 0x7F31B59Cu;
    // 7F31B59C: cmpwi   r0, 32
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

label_7F31B5A0:
    ctx->pc = 0x7F31B5A0u;
    // 7F31B5A0: bc    12, 2, 0x7F31B5D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B5D0;
        }
    }

label_7F31B5A4:
    ctx->pc = 0x7F31B5A4u;
    ctx->downcount -= 1;
    // 7F31B5A4: bc    4, 0, 0x7F31B5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B5B4;
        }
    }

label_7F31B5A8:
    ctx->pc = 0x7F31B5A8u;
    ctx->downcount -= 2;
    // 7F31B5A8: cmpwi   r0, 8
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

label_7F31B5AC:
    ctx->pc = 0x7F31B5ACu;
    // 7F31B5AC: bc    12, 2, 0x7F31B5E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B5E0;
        }
    }

label_7F31B5B0:
    ctx->pc = 0x7F31B5B0u;
    ctx->downcount -= 1;
    // 7F31B5B0: b       0x7F31B5F0
    {
            goto label_7F31B5F0;
    }

label_7F31B5B4:
    ctx->pc = 0x7F31B5B4u;
    ctx->downcount -= 2;
    // 7F31B5B4: cmpwi   r0, 40
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

label_7F31B5B8:
    ctx->pc = 0x7F31B5B8u;
    // 7F31B5B8: bc    12, 2, 0x7F31B5C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B5C0;
        }
    }

label_7F31B5BC:
    ctx->pc = 0x7F31B5BCu;
    ctx->downcount -= 1;
    // 7F31B5BC: b       0x7F31B5F0
    {
            goto label_7F31B5F0;
    }

label_7F31B5C0:
    ctx->pc = 0x7F31B5C0u;
    ctx->downcount -= 4;
    // 7F31B5C0: lis     r3, 35
    ctx->gpr[3] = ((u32)(s32)(35) << 16);

label_7F31B5C4:
    ctx->pc = 0x7F31B5C4u;
    // 7F31B5C4: addi    r0, r3, 21082
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(21082);

label_7F31B5C8:
    ctx->pc = 0x7F31B5C8u;
    // 7F31B5C8: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B5CC:
    ctx->pc = 0x7F31B5CCu;
    // 7F31B5CC: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B5D0:
    ctx->pc = 0x7F31B5D0u;
    ctx->downcount -= 4;
    // 7F31B5D0: lis     r3, 35
    ctx->gpr[3] = ((u32)(s32)(35) << 16);

label_7F31B5D4:
    ctx->pc = 0x7F31B5D4u;
    // 7F31B5D4: addi    r0, r3, 20058
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20058);

label_7F31B5D8:
    ctx->pc = 0x7F31B5D8u;
    // 7F31B5D8: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B5DC:
    ctx->pc = 0x7F31B5DCu;
    // 7F31B5DC: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B5E0:
    ctx->pc = 0x7F31B5E0u;
    ctx->downcount -= 4;
    // 7F31B5E0: lis     r3, 35
    ctx->gpr[3] = ((u32)(s32)(35) << 16);

label_7F31B5E4:
    ctx->pc = 0x7F31B5E4u;
    // 7F31B5E4: addi    r0, r3, 21081
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(21081);

label_7F31B5E8:
    ctx->pc = 0x7F31B5E8u;
    // 7F31B5E8: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B5EC:
    ctx->pc = 0x7F31B5ECu;
    // 7F31B5EC: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B5F0:
    ctx->pc = 0x7F31B5F0u;
    ctx->downcount -= 4;
    // 7F31B5F0: lis     r3, 35
    ctx->gpr[3] = ((u32)(s32)(35) << 16);

label_7F31B5F4:
    ctx->pc = 0x7F31B5F4u;
    // 7F31B5F4: addi    r0, r3, 20057
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(20057);

label_7F31B5F8:
    ctx->pc = 0x7F31B5F8u;
    // 7F31B5F8: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B5FC:
    ctx->pc = 0x7F31B5FCu;
    // 7F31B5FC: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B600:
    ctx->pc = 0x7F31B600u;
    ctx->downcount -= 8;
    // 7F31B600: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F31B604:
    ctx->pc = 0x7F31B604u;
    // 7F31B604: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F31B608:
    ctx->pc = 0x7F31B608u;
    // 7F31B608: addi    r4, r4, -3320
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-3320);

label_7F31B60C:
    ctx->pc = 0x7F31B60Cu;
    // 7F31B60C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31B610:
    ctx->pc = 0x7F31B610u;
    // 7F31B610: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F31B614:
    ctx->pc = 0x7F31B614u;
    // 7F31B614: andi.   r4, r4, 0xA800
    {
        ctx->gpr[4] = ctx->gpr[4] & 0xA800u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F31B618:
    ctx->pc = 0x7F31B618u;
    // 7F31B618: cmpw    r4, r0
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

label_7F31B61C:
    ctx->pc = 0x7F31B61Cu;
    // 7F31B61C: bc    12, 2, 0x7F31B6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B6D8;
        }
    }

label_7F31B620:
    ctx->pc = 0x7F31B620u;
    ctx->downcount -= 1;
    // 7F31B620: bc    4, 0, 0x7F31B648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B648;
        }
    }

label_7F31B624:
    ctx->pc = 0x7F31B624u;
    ctx->downcount -= 2;
    // 7F31B624: cmpwi   r4, 8192
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

label_7F31B628:
    ctx->pc = 0x7F31B628u;
    // 7F31B628: bc    12, 2, 0x7F31B6C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B6C8;
        }
    }

label_7F31B62C:
    ctx->pc = 0x7F31B62Cu;
    ctx->downcount -= 1;
    // 7F31B62C: bc    4, 0, 0x7F31B63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B63C;
        }
    }

label_7F31B630:
    ctx->pc = 0x7F31B630u;
    ctx->downcount -= 2;
    // 7F31B630: cmpwi   r4, 2048
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2048);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B634:
    ctx->pc = 0x7F31B634u;
    // 7F31B634: bc    12, 2, 0x7F31B6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B6A8;
        }
    }

label_7F31B638:
    ctx->pc = 0x7F31B638u;
    ctx->downcount -= 1;
    // 7F31B638: b       0x7F31B6E8
    {
            goto label_7F31B6E8;
    }

label_7F31B63C:
    ctx->pc = 0x7F31B63Cu;
    ctx->downcount -= 2;
    // 7F31B63C: cmpwi   r4, 10240
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(10240);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31B640:
    ctx->pc = 0x7F31B640u;
    // 7F31B640: bc    12, 2, 0x7F31B688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B688;
        }
    }

label_7F31B644:
    ctx->pc = 0x7F31B644u;
    ctx->downcount -= 1;
    // 7F31B644: b       0x7F31B6E8
    {
            goto label_7F31B6E8;
    }

label_7F31B648:
    ctx->pc = 0x7F31B648u;
    ctx->downcount -= 3;
    // 7F31B648: addi    r0, r3, -24576
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24576);

label_7F31B64C:
    ctx->pc = 0x7F31B64Cu;
    // 7F31B64C: cmpw    r4, r0
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

label_7F31B650:
    ctx->pc = 0x7F31B650u;
    // 7F31B650: bc    12, 2, 0x7F31B6B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B6B8;
        }
    }

label_7F31B654:
    ctx->pc = 0x7F31B654u;
    ctx->downcount -= 1;
    // 7F31B654: bc    4, 0, 0x7F31B668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B668;
        }
    }

label_7F31B658:
    ctx->pc = 0x7F31B658u;
    ctx->downcount -= 3;
    // 7F31B658: addi    r0, r3, -30720
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-30720);

label_7F31B65C:
    ctx->pc = 0x7F31B65Cu;
    // 7F31B65C: cmpw    r4, r0
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

label_7F31B660:
    ctx->pc = 0x7F31B660u;
    // 7F31B660: bc    12, 2, 0x7F31B698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B698;
        }
    }

label_7F31B664:
    ctx->pc = 0x7F31B664u;
    ctx->downcount -= 1;
    // 7F31B664: b       0x7F31B6E8
    {
            goto label_7F31B6E8;
    }

label_7F31B668:
    ctx->pc = 0x7F31B668u;
    ctx->downcount -= 3;
    // 7F31B668: addi    r0, r3, -22528
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-22528);

label_7F31B66C:
    ctx->pc = 0x7F31B66Cu;
    // 7F31B66C: cmpw    r4, r0
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

label_7F31B670:
    ctx->pc = 0x7F31B670u;
    // 7F31B670: bc    12, 2, 0x7F31B678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B678;
        }
    }

label_7F31B674:
    ctx->pc = 0x7F31B674u;
    ctx->downcount -= 1;
    // 7F31B674: b       0x7F31B6E8
    {
            goto label_7F31B6E8;
    }

label_7F31B678:
    ctx->pc = 0x7F31B678u;
    ctx->downcount -= 4;
    // 7F31B678: lis     r3, 73
    ctx->gpr[3] = ((u32)(s32)(73) << 16);

label_7F31B67C:
    ctx->pc = 0x7F31B67Cu;
    // 7F31B67C: addi    r0, r3, 29918
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29918);

label_7F31B680:
    ctx->pc = 0x7F31B680u;
    // 7F31B680: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B684:
    ctx->pc = 0x7F31B684u;
    // 7F31B684: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B688:
    ctx->pc = 0x7F31B688u;
    ctx->downcount -= 4;
    // 7F31B688: lis     r3, 73
    ctx->gpr[3] = ((u32)(s32)(73) << 16);

label_7F31B68C:
    ctx->pc = 0x7F31B68Cu;
    // 7F31B68C: addi    r0, r3, 29917
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29917);

label_7F31B690:
    ctx->pc = 0x7F31B690u;
    // 7F31B690: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B694:
    ctx->pc = 0x7F31B694u;
    // 7F31B694: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B698:
    ctx->pc = 0x7F31B698u;
    ctx->downcount -= 4;
    // 7F31B698: lis     r3, 73
    ctx->gpr[3] = ((u32)(s32)(73) << 16);

label_7F31B69C:
    ctx->pc = 0x7F31B69Cu;
    // 7F31B69C: addi    r0, r3, 28894
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28894);

label_7F31B6A0:
    ctx->pc = 0x7F31B6A0u;
    // 7F31B6A0: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B6A4:
    ctx->pc = 0x7F31B6A4u;
    // 7F31B6A4: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B6A8:
    ctx->pc = 0x7F31B6A8u;
    ctx->downcount -= 4;
    // 7F31B6A8: lis     r3, 73
    ctx->gpr[3] = ((u32)(s32)(73) << 16);

label_7F31B6AC:
    ctx->pc = 0x7F31B6ACu;
    // 7F31B6AC: addi    r0, r3, 28893
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28893);

label_7F31B6B0:
    ctx->pc = 0x7F31B6B0u;
    // 7F31B6B0: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B6B4:
    ctx->pc = 0x7F31B6B4u;
    // 7F31B6B4: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B6B8:
    ctx->pc = 0x7F31B6B8u;
    ctx->downcount -= 4;
    // 7F31B6B8: lis     r3, 57
    ctx->gpr[3] = ((u32)(s32)(57) << 16);

label_7F31B6BC:
    ctx->pc = 0x7F31B6BCu;
    // 7F31B6BC: addi    r0, r3, 29918
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29918);

label_7F31B6C0:
    ctx->pc = 0x7F31B6C0u;
    // 7F31B6C0: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B6C4:
    ctx->pc = 0x7F31B6C4u;
    // 7F31B6C4: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B6C8:
    ctx->pc = 0x7F31B6C8u;
    ctx->downcount -= 4;
    // 7F31B6C8: lis     r3, 57
    ctx->gpr[3] = ((u32)(s32)(57) << 16);

label_7F31B6CC:
    ctx->pc = 0x7F31B6CCu;
    // 7F31B6CC: addi    r0, r3, 29917
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(29917);

label_7F31B6D0:
    ctx->pc = 0x7F31B6D0u;
    // 7F31B6D0: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B6D4:
    ctx->pc = 0x7F31B6D4u;
    // 7F31B6D4: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B6D8:
    ctx->pc = 0x7F31B6D8u;
    ctx->downcount -= 4;
    // 7F31B6D8: lis     r3, 57
    ctx->gpr[3] = ((u32)(s32)(57) << 16);

label_7F31B6DC:
    ctx->pc = 0x7F31B6DCu;
    // 7F31B6DC: addi    r0, r3, 28894
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28894);

label_7F31B6E0:
    ctx->pc = 0x7F31B6E0u;
    // 7F31B6E0: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B6E4:
    ctx->pc = 0x7F31B6E4u;
    // 7F31B6E4: b       0x7F31B6F4
    {
            goto label_7F31B6F4;
    }

label_7F31B6E8:
    ctx->pc = 0x7F31B6E8u;
    ctx->downcount -= 3;
    // 7F31B6E8: lis     r3, 57
    ctx->gpr[3] = ((u32)(s32)(57) << 16);

label_7F31B6EC:
    ctx->pc = 0x7F31B6ECu;
    // 7F31B6EC: addi    r0, r3, 28893
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(28893);

label_7F31B6F0:
    ctx->pc = 0x7F31B6F0u;
    // 7F31B6F0: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B6F4:
    ctx->pc = 0x7F31B6F4u;
    ctx->downcount -= 16;
    // 7F31B6F4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31B6F8:
    ctx->pc = 0x7F31B6F8u;
    // 7F31B6F8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B6FC:
    ctx->pc = 0x7F31B6FCu;
    // 7F31B6FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31B700:
    ctx->pc = 0x7F31B700u;
    // 7F31B700: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31B704:
    ctx->pc = 0x7F31B704u;
    // 7F31B704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31B708:
    ctx->pc = 0x7F31B708u;
    ctx->downcount -= 7;
    // 7F31B708: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31B70C:
    ctx->pc = 0x7F31B70Cu;
    // 7F31B70C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31B710:
    ctx->pc = 0x7F31B710u;
    // 7F31B710: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B714:
    ctx->pc = 0x7F31B714u;
    // 7F31B714: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31B718:
    ctx->pc = 0x7F31B718u;
    // 7F31B718: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31B71C:
    ctx->pc = 0x7F31B71Cu;
    // 7F31B71C: addi    r3, r31, 144
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(144);

label_7F31B720:
    ctx->pc = 0x7F31B720u;
    // 7F31B720: bl      0x7F2EA428
    {
            ctx->lr = 0x7F31B724u;
            ctx->pc = 0x7F2EA428u;
            return;
    }

label_7F31B724:
    ctx->pc = 0x7F31B724u;
    ctx->downcount -= 3;
    // 7F31B724: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B728:
    ctx->pc = 0x7F31B728u;
    // 7F31B728: cmpwi   r0, 0
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

label_7F31B72C:
    ctx->pc = 0x7F31B72Cu;
    // 7F31B72C: bc    12, 2, 0x7F31B74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B74C;
        }
    }

label_7F31B730:
    ctx->pc = 0x7F31B730u;
    ctx->downcount -= 2;
    // 7F31B730: addi    r3, r31, 76
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(76);

label_7F31B734:
    ctx->pc = 0x7F31B734u;
    // 7F31B734: bl      0x7F31E024
    {
            ctx->lr = 0x7F31B738u;
            ctx->pc = 0x7F31E024u;
            return;
    }

label_7F31B738:
    ctx->pc = 0x7F31B738u;
    ctx->downcount -= 2;
    // 7F31B738: cmpwi   r3, 0
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

label_7F31B73C:
    ctx->pc = 0x7F31B73Cu;
    // 7F31B73C: bc    12, 2, 0x7F31B7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B7F8;
        }
    }

label_7F31B740:
    ctx->pc = 0x7F31B740u;
    ctx->downcount -= 3;
    // 7F31B740: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31B744:
    ctx->pc = 0x7F31B744u;
    // 7F31B744: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B748:
    ctx->pc = 0x7F31B748u;
    // 7F31B748: b       0x7F31B7F8
    {
            goto label_7F31B7F8;
    }

label_7F31B74C:
    ctx->pc = 0x7F31B74Cu;
    ctx->downcount -= 2;
    // 7F31B74C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B750:
    ctx->pc = 0x7F31B750u;
    // 7F31B750: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F31B754u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F31B754:
    ctx->pc = 0x7F31B754u;
    ctx->downcount -= 2;
    // 7F31B754: cmpwi   r3, 0
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

label_7F31B758:
    ctx->pc = 0x7F31B758u;
    // 7F31B758: bc    4, 2, 0x7F31B7C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B7C8;
        }
    }

label_7F31B75C:
    ctx->pc = 0x7F31B75Cu;
    ctx->downcount -= 3;
    // 7F31B75C: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31B760:
    ctx->pc = 0x7F31B760u;
    // 7F31B760: cmpwi   r5, 0
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

label_7F31B764:
    ctx->pc = 0x7F31B764u;
    // 7F31B764: bc    4, 2, 0x7F31B774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B774;
        }
    }

label_7F31B768:
    ctx->pc = 0x7F31B768u;
    ctx->downcount -= 3;
    // 7F31B768: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B76C:
    ctx->pc = 0x7F31B76Cu;
    // 7F31B76C: cmpwi   r0, 0
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

label_7F31B770:
    ctx->pc = 0x7F31B770u;
    // 7F31B770: bc    12, 2, 0x7F31B7BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B7BC;
        }
    }

label_7F31B774:
    ctx->pc = 0x7F31B774u;
    ctx->downcount -= 3;
    // 7F31B774: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31B778:
    ctx->pc = 0x7F31B778u;
    // 7F31B778: cmpwi   r4, 0
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

label_7F31B77C:
    ctx->pc = 0x7F31B77Cu;
    // 7F31B77C: bc    12, 2, 0x7F31B794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B794;
        }
    }

label_7F31B780:
    ctx->pc = 0x7F31B780u;
    ctx->downcount -= 2;
    // 7F31B780: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B784:
    ctx->pc = 0x7F31B784u;
    // 7F31B784: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F31B788u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F31B788:
    ctx->pc = 0x7F31B788u;
    ctx->downcount -= 3;
    // 7F31B788: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31B78C:
    ctx->pc = 0x7F31B78Cu;
    // 7F31B78C: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B790:
    ctx->pc = 0x7F31B790u;
    // 7F31B790: b       0x7F31B7B0
    {
            goto label_7F31B7B0;
    }

label_7F31B794:
    ctx->pc = 0x7F31B794u;
    ctx->downcount -= 3;
    // 7F31B794: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B798:
    ctx->pc = 0x7F31B798u;
    // 7F31B798: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F31B79C:
    ctx->pc = 0x7F31B79Cu;
    // 7F31B79C: bl      0x7F2E4C98
    {
            ctx->lr = 0x7F31B7A0u;
            ctx->pc = 0x7F2E4C98u;
            return;
    }

label_7F31B7A0:
    ctx->pc = 0x7F31B7A0u;
    ctx->downcount -= 4;
    // 7F31B7A0: lwz     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B7A4:
    ctx->pc = 0x7F31B7A4u;
    // 7F31B7A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31B7A8:
    ctx->pc = 0x7F31B7A8u;
    // 7F31B7A8: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B7AC:
    ctx->pc = 0x7F31B7ACu;
    // 7F31B7AC: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B7B0:
    ctx->pc = 0x7F31B7B0u;
    ctx->downcount -= 3;
    // 7F31B7B0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31B7B4:
    ctx->pc = 0x7F31B7B4u;
    // 7F31B7B4: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B7B8:
    ctx->pc = 0x7F31B7B8u;
    // 7F31B7B8: b       0x7F31B7D0
    {
            goto label_7F31B7D0;
    }

label_7F31B7BC:
    ctx->pc = 0x7F31B7BCu;
    ctx->downcount -= 3;
    // 7F31B7BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31B7C0:
    ctx->pc = 0x7F31B7C0u;
    // 7F31B7C0: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B7C4:
    ctx->pc = 0x7F31B7C4u;
    // 7F31B7C4: b       0x7F31B7D0
    {
            goto label_7F31B7D0;
    }

label_7F31B7C8:
    ctx->pc = 0x7F31B7C8u;
    ctx->downcount -= 2;
    // 7F31B7C8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31B7CC:
    ctx->pc = 0x7F31B7CCu;
    // 7F31B7CC: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B7D0:
    ctx->pc = 0x7F31B7D0u;
    ctx->downcount -= 5;
    // 7F31B7D0: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31B7D4:
    ctx->pc = 0x7F31B7D4u;
    // 7F31B7D4: addi    r3, r31, 176
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(176);

label_7F31B7D8:
    ctx->pc = 0x7F31B7D8u;
    // 7F31B7D8: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F31B7DC:
    ctx->pc = 0x7F31B7DCu;
    // 7F31B7DC: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_7F31B7E0:
    ctx->pc = 0x7F31B7E0u;
    // 7F31B7E0: bl      0x7F306FA4
    {
            ctx->lr = 0x7F31B7E4u;
            ctx->pc = 0x7F306FA4u;
            return;
    }

label_7F31B7E4:
    ctx->pc = 0x7F31B7E4u;
    ctx->downcount -= 3;
    // 7F31B7E4: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B7E8:
    ctx->pc = 0x7F31B7E8u;
    // 7F31B7E8: cmpwi   r0, 0
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

label_7F31B7EC:
    ctx->pc = 0x7F31B7ECu;
    // 7F31B7EC: bc    4, 2, 0x7F31B7F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B7F8;
        }
    }

label_7F31B7F0:
    ctx->pc = 0x7F31B7F0u;
    ctx->downcount -= 2;
    // 7F31B7F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31B7F4:
    ctx->pc = 0x7F31B7F4u;
    // 7F31B7F4: bl      0x7F31A620
    {
            ctx->lr = 0x7F31B7F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31A620u;
                return;
            }
            goto label_7F31A620;
    }

label_7F31B7F8:
    ctx->pc = 0x7F31B7F8u;
    ctx->downcount -= 4;
    // 7F31B7F8: lwz     r3, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B7FC:
    ctx->pc = 0x7F31B7FCu;
    // 7F31B7FC: lwz     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B800:
    ctx->pc = 0x7F31B800u;
    // 7F31B800: cmpw    r3, r0
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

label_7F31B804:
    ctx->pc = 0x7F31B804u;
    // 7F31B804: bc    12, 2, 0x7F31B874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B874;
        }
    }

label_7F31B808:
    ctx->pc = 0x7F31B808u;
    ctx->downcount -= 2;
    // 7F31B808: lwz     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B80C:
    ctx->pc = 0x7F31B80Cu;
    // 7F31B80C: bl      0x7F19C738
    {
            ctx->lr = 0x7F31B810u;
            ctx->pc = 0x7F19C738u;
            return;
    }

label_7F31B810:
    ctx->pc = 0x7F31B810u;
    ctx->downcount -= 3;
    // 7F31B810: lwz     r4, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31B814:
    ctx->pc = 0x7F31B814u;
    // 7F31B814: cmpwi   r4, 0
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

label_7F31B818:
    ctx->pc = 0x7F31B818u;
    // 7F31B818: bc    12, 0, 0x7F31B86C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B86C;
        }
    }

label_7F31B81C:
    ctx->pc = 0x7F31B81Cu;
    ctx->downcount -= 8;
    // 7F31B81C: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_7F31B820:
    ctx->pc = 0x7F31B820u;
    // 7F31B820: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31B824:
    ctx->pc = 0x7F31B824u;
    // 7F31B824: lbz     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31B828:
    ctx->pc = 0x7F31B828u;
    // 7F31B828: addi    r3, r5, -32088
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-32088);

label_7F31B82C:
    ctx->pc = 0x7F31B82Cu;
    // 7F31B82C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31B830:
    ctx->pc = 0x7F31B830u;
    // 7F31B830: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F31B834:
    ctx->pc = 0x7F31B834u;
    // 7F31B834: lwz     r3, -4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B838:
    ctx->pc = 0x7F31B838u;
    // 7F31B838: bl      0x7F2FFA44
    {
            ctx->lr = 0x7F31B83Cu;
            ctx->pc = 0x7F2FFA44u;
            return;
    }

label_7F31B83C:
    ctx->pc = 0x7F31B83Cu;
    ctx->downcount -= 12;
    // 7F31B83C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F31B840:
    ctx->pc = 0x7F31B840u;
    // 7F31B840: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31B844:
    ctx->pc = 0x7F31B844u;
    // 7F31B844: lwz     r5, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31B848:
    ctx->pc = 0x7F31B848u;
    // 7F31B848: or   r10, r0, r0
    {
        ctx->gpr[10] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F31B84C:
    ctx->pc = 0x7F31B84Cu;
    // 7F31B84C: lwz     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B850:
    ctx->pc = 0x7F31B850u;
    // 7F31B850: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31B854:
    ctx->pc = 0x7F31B854u;
    // 7F31B854: addi    r7, r5, 182
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(182);

label_7F31B858:
    ctx->pc = 0x7F31B858u;
    // 7F31B858: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31B85C:
    ctx->pc = 0x7F31B85Cu;
    // 7F31B85C: li      r6, 336
    ctx->gpr[6] = (u32)(s32)(336);

label_7F31B860:
    ctx->pc = 0x7F31B860u;
    // 7F31B860: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F31B864:
    ctx->pc = 0x7F31B864u;
    // 7F31B864: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31B868:
    ctx->pc = 0x7F31B868u;
    // 7F31B868: bl      0x7F19C814
    {
            ctx->lr = 0x7F31B86Cu;
            ctx->pc = 0x7F19C814u;
            return;
    }

label_7F31B86C:
    ctx->pc = 0x7F31B86Cu;
    ctx->downcount -= 2;
    // 7F31B86C: lwz     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B870:
    ctx->pc = 0x7F31B870u;
    // 7F31B870: stw     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B874:
    ctx->pc = 0x7F31B874u;
    ctx->downcount -= 4;
    // 7F31B874: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_7F31B878:
    ctx->pc = 0x7F31B878u;
    // 7F31B878: lbz     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31B87C:
    ctx->pc = 0x7F31B87Cu;
    // 7F31B87C: cmpwi   r0, 7
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

label_7F31B880:
    ctx->pc = 0x7F31B880u;
    // 7F31B880: bc    12, 2, 0x7F31B8DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B8DC;
        }
    }

label_7F31B884:
    ctx->pc = 0x7F31B884u;
    ctx->downcount -= 1;
    // 7F31B884: bc    4, 0, 0x7F31B890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31B890;
        }
    }

label_7F31B888:
    ctx->pc = 0x7F31B888u;
    ctx->downcount -= 2;
    // 7F31B888: cmpwi   r0, 1
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

label_7F31B88C:
    ctx->pc = 0x7F31B88Cu;
    // 7F31B88C: bc    12, 2, 0x7F31B8DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B8DC;
        }
    }

label_7F31B890:
    ctx->pc = 0x7F31B890u;
    ctx->downcount -= 58;
    // 7F31B890: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F31B894:
    ctx->pc = 0x7F31B894u;
    // 7F31B894: lis     r3, -32623
    ctx->gpr[3] = ((u32)(s32)(-32623) << 16);

label_7F31B898:
    ctx->pc = 0x7F31B898u;
    // 7F31B898: lwz     r6, 19356(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19356);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31B89C:
    ctx->pc = 0x7F31B89Cu;
    // 7F31B89C: li      r0, 24
    ctx->gpr[0] = (u32)(s32)(24);

label_7F31B8A0:
    ctx->pc = 0x7F31B8A0u;
    // 7F31B8A0: addi    r9, r3, -28528
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(-28528);

label_7F31B8A4:
    ctx->pc = 0x7F31B8A4u;
    // 7F31B8A4: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_7F31B8A8:
    ctx->pc = 0x7F31B8A8u;
    // 7F31B8A8: addi    r7, r6, 182
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(182);

label_7F31B8AC:
    ctx->pc = 0x7F31B8ACu;
    // 7F31B8AC: li      r5, 195
    ctx->gpr[5] = (u32)(s32)(195);

label_7F31B8B0:
    ctx->pc = 0x7F31B8B0u;
    // 7F31B8B0: rlwinm r3, r7, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 4u) & 0xFFFFFFF0u;
    }

label_7F31B8B4:
    ctx->pc = 0x7F31B8B4u;
    // 7F31B8B4: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F31B8B8:
    ctx->pc = 0x7F31B8B8u;
    // 7F31B8B8: divw   r7, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[7] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F31B8BC:
    ctx->pc = 0x7F31B8BCu;
    // 7F31B8BC: li      r6, 257
    ctx->gpr[6] = (u32)(s32)(257);

label_7F31B8C0:
    ctx->pc = 0x7F31B8C0u;
    // 7F31B8C0: stw     r9, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F31B8C4:
    ctx->pc = 0x7F31B8C4u;
    // 7F31B8C4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F31B8C8:
    ctx->pc = 0x7F31B8C8u;
    // 7F31B8C8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F31B8CC:
    ctx->pc = 0x7F31B8CCu;
    // 7F31B8CC: lwz     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B8D0:
    ctx->pc = 0x7F31B8D0u;
    // 7F31B8D0: li      r10, 336
    ctx->gpr[10] = (u32)(s32)(336);

label_7F31B8D4:
    ctx->pc = 0x7F31B8D4u;
    // 7F31B8D4: addi    r7, r7, 195
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(195);

label_7F31B8D8:
    ctx->pc = 0x7F31B8D8u;
    // 7F31B8D8: bl      0x7F19C9BC
    {
            ctx->lr = 0x7F31B8DCu;
            ctx->pc = 0x7F19C9BCu;
            return;
    }

label_7F31B8DC:
    ctx->pc = 0x7F31B8DCu;
    ctx->downcount -= 6;
    // 7F31B8DC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B8E0:
    ctx->pc = 0x7F31B8E0u;
    // 7F31B8E0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31B8E4:
    ctx->pc = 0x7F31B8E4u;
    // 7F31B8E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31B8E8:
    ctx->pc = 0x7F31B8E8u;
    // 7F31B8E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31B8EC:
    ctx->pc = 0x7F31B8ECu;
    // 7F31B8EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31B8F0:
    ctx->pc = 0x7F31B8F0u;
    ctx->downcount -= 5;
    // 7F31B8F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31B8F4:
    ctx->pc = 0x7F31B8F4u;
    // 7F31B8F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31B8F8:
    ctx->pc = 0x7F31B8F8u;
    // 7F31B8F8: addi    r3, r3, 144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(144);

label_7F31B8FC:
    ctx->pc = 0x7F31B8FCu;
    // 7F31B8FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B900:
    ctx->pc = 0x7F31B900u;
    // 7F31B900: bl      0x7F2EA6CC
    {
            ctx->lr = 0x7F31B904u;
            ctx->pc = 0x7F2EA6CCu;
            return;
    }

label_7F31B904:
    ctx->pc = 0x7F31B904u;
    ctx->downcount -= 5;
    // 7F31B904: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B908:
    ctx->pc = 0x7F31B908u;
    // 7F31B908: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31B90C:
    ctx->pc = 0x7F31B90Cu;
    // 7F31B90C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31B910:
    ctx->pc = 0x7F31B910u;
    // 7F31B910: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31B914:
    ctx->pc = 0x7F31B914u;
    ctx->downcount -= 8;
    // 7F31B914: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31B918:
    ctx->pc = 0x7F31B918u;
    // 7F31B918: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31B91C:
    ctx->pc = 0x7F31B91Cu;
    // 7F31B91C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B920:
    ctx->pc = 0x7F31B920u;
    // 7F31B920: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F31B924:
    ctx->pc = 0x7F31B924u;
    // 7F31B924: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31B928:
    ctx->pc = 0x7F31B928u;
    // 7F31B928: lwz     r3, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B92C:
    ctx->pc = 0x7F31B92Cu;
    // 7F31B92C: cmplwi  r3, 0x0000
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

label_7F31B930:
    ctx->pc = 0x7F31B930u;
    // 7F31B930: bc    12, 2, 0x7F31B940
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B940;
        }
    }

label_7F31B934:
    ctx->pc = 0x7F31B934u;
    ctx->downcount -= 1;
    // 7F31B934: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31B938u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31B938:
    ctx->pc = 0x7F31B938u;
    ctx->downcount -= 2;
    // 7F31B938: lwz     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B93C:
    ctx->pc = 0x7F31B93Cu;
    // 7F31B93C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31B940u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31B940:
    ctx->pc = 0x7F31B940u;
    ctx->downcount -= 3;
    // 7F31B940: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B944:
    ctx->pc = 0x7F31B944u;
    // 7F31B944: cmpwi   r3, 0
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

label_7F31B948:
    ctx->pc = 0x7F31B948u;
    // 7F31B948: bc    12, 0, 0x7F31B950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B950;
        }
    }

label_7F31B94C:
    ctx->pc = 0x7F31B94Cu;
    ctx->downcount -= 1;
    // 7F31B94C: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F31B950u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F31B950:
    ctx->pc = 0x7F31B950u;
    ctx->downcount -= 3;
    // 7F31B950: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B954:
    ctx->pc = 0x7F31B954u;
    // 7F31B954: cmplwi  r3, 0x0000
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

label_7F31B958:
    ctx->pc = 0x7F31B958u;
    // 7F31B958: bc    12, 2, 0x7F31B970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B970;
        }
    }

label_7F31B95C:
    ctx->pc = 0x7F31B95Cu;
    ctx->downcount -= 1;
    // 7F31B95C: bl      0x7F3BA300
    {
            ctx->lr = 0x7F31B960u;
            ctx->pc = 0x7F3BA300u;
            return;
    }

label_7F31B960:
    ctx->pc = 0x7F31B960u;
    ctx->downcount -= 2;
    // 7F31B960: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31B964:
    ctx->pc = 0x7F31B964u;
    // 7F31B964: bl      0x7F3BA234
    {
            ctx->lr = 0x7F31B968u;
            ctx->pc = 0x7F3BA234u;
            return;
    }

label_7F31B968:
    ctx->pc = 0x7F31B968u;
    ctx->downcount -= 2;
    // 7F31B968: addi    r3, r31, 144
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(144);

label_7F31B96C:
    ctx->pc = 0x7F31B96Cu;
    // 7F31B96C: bl      0x7F2EA3DC
    {
            ctx->lr = 0x7F31B970u;
            ctx->pc = 0x7F2EA3DCu;
            return;
    }

label_7F31B970:
    ctx->pc = 0x7F31B970u;
    ctx->downcount -= 2;
    // 7F31B970: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F31B974:
    ctx->pc = 0x7F31B974u;
    // 7F31B974: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F31B978u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F31B978:
    ctx->pc = 0x7F31B978u;
    ctx->downcount -= 6;
    // 7F31B978: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B97C:
    ctx->pc = 0x7F31B97Cu;
    // 7F31B97C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31B980:
    ctx->pc = 0x7F31B980u;
    // 7F31B980: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31B984:
    ctx->pc = 0x7F31B984u;
    // 7F31B984: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31B988:
    ctx->pc = 0x7F31B988u;
    // 7F31B988: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31B98C:
    ctx->pc = 0x7F31B98Cu;
    ctx->downcount -= 21;
    // 7F31B98C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31B990:
    ctx->pc = 0x7F31B990u;
    // 7F31B990: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31B994:
    ctx->pc = 0x7F31B994u;
    // 7F31B994: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B998:
    ctx->pc = 0x7F31B998u;
    // 7F31B998: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31B99C:
    ctx->pc = 0x7F31B99Cu;
    // 7F31B99C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31B9A0:
    ctx->pc = 0x7F31B9A0u;
    // 7F31B9A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31B9A4:
    ctx->pc = 0x7F31B9A4u;
    // 7F31B9A4: stw     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B9A8:
    ctx->pc = 0x7F31B9A8u;
    // 7F31B9A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31B9AC:
    ctx->pc = 0x7F31B9ACu;
    // 7F31B9AC: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F31B9B0:
    ctx->pc = 0x7F31B9B0u;
    // 7F31B9B0: stw     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B9B4:
    ctx->pc = 0x7F31B9B4u;
    // 7F31B9B4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F31B9B8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F31B9B8:
    ctx->pc = 0x7F31B9B8u;
    ctx->downcount -= 2;
    // 7F31B9B8: cmplwi  r3, 0x0000
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

label_7F31B9BC:
    ctx->pc = 0x7F31B9BCu;
    // 7F31B9BC: bc    12, 2, 0x7F31B9C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31B9C8;
        }
    }

label_7F31B9C0:
    ctx->pc = 0x7F31B9C0u;
    ctx->downcount -= 1;
    // 7F31B9C0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31B9C4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31B9C4:
    ctx->pc = 0x7F31B9C4u;
    ctx->downcount -= 1;
    // 7F31B9C4: stw     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B9C8:
    ctx->pc = 0x7F31B9C8u;
    ctx->downcount -= 2;
    // 7F31B9C8: li      r3, 99
    ctx->gpr[3] = (u32)(s32)(99);

label_7F31B9CC:
    ctx->pc = 0x7F31B9CCu;
    // 7F31B9CC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F31B9D0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F31B9D0:
    ctx->pc = 0x7F31B9D0u;
    ctx->downcount -= 2;
    // 7F31B9D0: cmplwi  r3, 0x0000
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

label_7F31B9D4:
    ctx->pc = 0x7F31B9D4u;
    // 7F31B9D4: bc    12, 2, 0x7F31BB24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BB24;
        }
    }

label_7F31B9D8:
    ctx->pc = 0x7F31B9D8u;
    ctx->downcount -= 1;
    // 7F31B9D8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31B9DCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31B9DC:
    ctx->pc = 0x7F31B9DCu;
    ctx->downcount -= 2;
    // 7F31B9DC: stw     r3, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B9E0:
    ctx->pc = 0x7F31B9E0u;
    // 7F31B9E0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31B9E4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31B9E4:
    ctx->pc = 0x7F31B9E4u;
    ctx->downcount -= 2;
    // 7F31B9E4: stw     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31B9E8:
    ctx->pc = 0x7F31B9E8u;
    // 7F31B9E8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F31B9ECu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F31B9EC:
    ctx->pc = 0x7F31B9ECu;
    ctx->downcount -= 11;
    // 7F31B9EC: lwz     r0, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31B9F0:
    ctx->pc = 0x7F31B9F0u;
    // 7F31B9F0: cntlzw r3, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_7F31B9F4:
    ctx->pc = 0x7F31B9F4u;
    // 7F31B9F4: rlwinm r6, r3, 27, 5, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x07FFFFFFu;
    }

label_7F31B9F8:
    ctx->pc = 0x7F31B9F8u;
    // 7F31B9F8: stw     r0, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31B9FC:
    ctx->pc = 0x7F31B9FCu;
    // 7F31B9FC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31BA00:
    ctx->pc = 0x7F31BA00u;
    // 7F31BA00: addi    r3, r3, -25392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25392);

label_7F31BA04:
    ctx->pc = 0x7F31BA04u;
    // 7F31BA04: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F31BA08:
    ctx->pc = 0x7F31BA08u;
    // 7F31BA08: lwz     r4, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31BA0C:
    ctx->pc = 0x7F31BA0Cu;
    // 7F31BA0C: lwz     r5, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31BA10:
    ctx->pc = 0x7F31BA10u;
    // 7F31BA10: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F31BA14:
    ctx->pc = 0x7F31BA14u;
    // 7F31BA14: bl      0x8001E8F8
    {
            ctx->lr = 0x7F31BA18u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_7F31BA18:
    ctx->pc = 0x7F31BA18u;
    ctx->downcount -= 7;
    // 7F31BA18: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31BA1C:
    ctx->pc = 0x7F31BA1Cu;
    // 7F31BA1C: lwz     r4, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31BA20:
    ctx->pc = 0x7F31BA20u;
    // 7F31BA20: lwz     r5, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31BA24:
    ctx->pc = 0x7F31BA24u;
    // 7F31BA24: addi    r3, r3, -25392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25392);

label_7F31BA28:
    ctx->pc = 0x7F31BA28u;
    // 7F31BA28: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31BA2C:
    ctx->pc = 0x7F31BA2Cu;
    // 7F31BA2C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F31BA30:
    ctx->pc = 0x7F31BA30u;
    // 7F31BA30: bl      0x8001E8F8
    {
            ctx->lr = 0x7F31BA34u;
            ctx->pc = 0x8001E8F8u;
            return;
    }

label_7F31BA34:
    ctx->pc = 0x7F31BA34u;
    ctx->downcount -= 2;
    // 7F31BA34: cmpwi   r30, 0
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

label_7F31BA38:
    ctx->pc = 0x7F31BA38u;
    // 7F31BA38: bc    12, 2, 0x7F31BA44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BA44;
        }
    }

label_7F31BA3C:
    ctx->pc = 0x7F31BA3Cu;
    ctx->downcount -= 2;
    // 7F31BA3C: addi    r6, r31, 68
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(68);

label_7F31BA40:
    ctx->pc = 0x7F31BA40u;
    // 7F31BA40: b       0x7F31BA48
    {
            goto label_7F31BA48;
    }

label_7F31BA44:
    ctx->pc = 0x7F31BA44u;
    ctx->downcount -= 1;
    // 7F31BA44: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31BA48:
    ctx->pc = 0x7F31BA48u;
    ctx->downcount -= 3;
    // 7F31BA48: lwz     r0, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BA4C:
    ctx->pc = 0x7F31BA4Cu;
    // 7F31BA4C: cmpwi   r0, 1
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

label_7F31BA50:
    ctx->pc = 0x7F31BA50u;
    // 7F31BA50: bc    12, 2, 0x7F31BAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BAD8;
        }
    }

label_7F31BA54:
    ctx->pc = 0x7F31BA54u;
    ctx->downcount -= 1;
    // 7F31BA54: bc    4, 0, 0x7F31BA68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BA68;
        }
    }

label_7F31BA58:
    ctx->pc = 0x7F31BA58u;
    ctx->downcount -= 2;
    // 7F31BA58: cmpwi   r0, -1
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

label_7F31BA5C:
    ctx->pc = 0x7F31BA5Cu;
    // 7F31BA5C: bc    12, 2, 0x7F31BA78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BA78;
        }
    }

label_7F31BA60:
    ctx->pc = 0x7F31BA60u;
    ctx->downcount -= 1;
    // 7F31BA60: bc    4, 0, 0x7F31BAA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BAA8;
        }
    }

label_7F31BA64:
    ctx->pc = 0x7F31BA64u;
    ctx->downcount -= 1;
    // 7F31BA64: b       0x7F31BB14
    {
            goto label_7F31BB14;
    }

label_7F31BA68:
    ctx->pc = 0x7F31BA68u;
    ctx->downcount -= 2;
    // 7F31BA68: cmpwi   r0, 3
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

label_7F31BA6C:
    ctx->pc = 0x7F31BA6Cu;
    // 7F31BA6C: bc    12, 2, 0x7F31BB00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BB00;
        }
    }

label_7F31BA70:
    ctx->pc = 0x7F31BA70u;
    ctx->downcount -= 1;
    // 7F31BA70: bc    4, 0, 0x7F31BB14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BB14;
        }
    }

label_7F31BA74:
    ctx->pc = 0x7F31BA74u;
    ctx->downcount -= 1;
    // 7F31BA74: b       0x7F31BAEC
    {
            goto label_7F31BAEC;
    }

label_7F31BA78:
    ctx->pc = 0x7F31BA78u;
    ctx->downcount -= 7;
    // 7F31BA78: lis     r3, 174
    ctx->gpr[3] = ((u32)(s32)(174) << 16);

label_7F31BA7C:
    ctx->pc = 0x7F31BA7Cu;
    // 7F31BA7C: cmpwi   r30, 0
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

label_7F31BA80:
    ctx->pc = 0x7F31BA80u;
    // 7F31BA80: addi    r3, r3, 2337
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2337);

label_7F31BA84:
    ctx->pc = 0x7F31BA84u;
    // 7F31BA84: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F31BA88:
    ctx->pc = 0x7F31BA88u;
    // 7F31BA88: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BA8C:
    ctx->pc = 0x7F31BA8Cu;
    // 7F31BA8C: stw     r0, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BA90:
    ctx->pc = 0x7F31BA90u;
    // 7F31BA90: bc    12, 2, 0x7F31BB38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BB38;
        }
    }

label_7F31BA94:
    ctx->pc = 0x7F31BA94u;
    ctx->downcount -= 5;
    // 7F31BA94: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31BA98:
    ctx->pc = 0x7F31BA98u;
    // 7F31BA98: lwzu     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F31BA9C:
    ctx->pc = 0x7F31BA9Cu;
    // 7F31BA9C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F31BAA0:
    ctx->pc = 0x7F31BAA0u;
    // 7F31BAA0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BAA4:
    ctx->pc = 0x7F31BAA4u;
    // 7F31BAA4: b       0x7F31BB38
    {
            goto label_7F31BB38;
    }

label_7F31BAA8:
    ctx->pc = 0x7F31BAA8u;
    ctx->downcount -= 7;
    // 7F31BAA8: lis     r3, 67
    ctx->gpr[3] = ((u32)(s32)(67) << 16);

label_7F31BAAC:
    ctx->pc = 0x7F31BAACu;
    // 7F31BAAC: cmpwi   r30, 0
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

label_7F31BAB0:
    ctx->pc = 0x7F31BAB0u;
    // 7F31BAB0: addi    r3, r3, -1426
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-1426);

label_7F31BAB4:
    ctx->pc = 0x7F31BAB4u;
    // 7F31BAB4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31BAB8:
    ctx->pc = 0x7F31BAB8u;
    // 7F31BAB8: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BABC:
    ctx->pc = 0x7F31BABCu;
    // 7F31BABC: stw     r0, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BAC0:
    ctx->pc = 0x7F31BAC0u;
    // 7F31BAC0: bc    12, 2, 0x7F31BB38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BB38;
        }
    }

label_7F31BAC4:
    ctx->pc = 0x7F31BAC4u;
    ctx->downcount -= 5;
    // 7F31BAC4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31BAC8:
    ctx->pc = 0x7F31BAC8u;
    // 7F31BAC8: lwzu     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F31BACC:
    ctx->pc = 0x7F31BACCu;
    // 7F31BACC: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F31BAD0:
    ctx->pc = 0x7F31BAD0u;
    // 7F31BAD0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BAD4:
    ctx->pc = 0x7F31BAD4u;
    // 7F31BAD4: b       0x7F31BB38
    {
            goto label_7F31BB38;
    }

label_7F31BAD8:
    ctx->pc = 0x7F31BAD8u;
    ctx->downcount -= 4;
    // 7F31BAD8: lwz     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BADC:
    ctx->pc = 0x7F31BADCu;
    // 7F31BADC: addi    r5, r31, 64
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(64);

label_7F31BAE0:
    ctx->pc = 0x7F31BAE0u;
    // 7F31BAE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31BAE4:
    ctx->pc = 0x7F31BAE4u;
    // 7F31BAE4: bl      0x7F319934
    {
            ctx->lr = 0x7F31BAE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319934u;
                return;
            }
            goto label_7F319934;
    }

label_7F31BAE8:
    ctx->pc = 0x7F31BAE8u;
    ctx->downcount -= 1;
    // 7F31BAE8: b       0x7F31BB38
    {
            goto label_7F31BB38;
    }

label_7F31BAEC:
    ctx->pc = 0x7F31BAECu;
    ctx->downcount -= 4;
    // 7F31BAEC: lwz     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BAF0:
    ctx->pc = 0x7F31BAF0u;
    // 7F31BAF0: addi    r5, r31, 64
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(64);

label_7F31BAF4:
    ctx->pc = 0x7F31BAF4u;
    // 7F31BAF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31BAF8:
    ctx->pc = 0x7F31BAF8u;
    // 7F31BAF8: bl      0x7F3199EC
    {
            ctx->lr = 0x7F31BAFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F3199ECu;
                return;
            }
            goto label_7F3199EC;
    }

label_7F31BAFC:
    ctx->pc = 0x7F31BAFCu;
    ctx->downcount -= 1;
    // 7F31BAFC: b       0x7F31BB38
    {
            goto label_7F31BB38;
    }

label_7F31BB00:
    ctx->pc = 0x7F31BB00u;
    ctx->downcount -= 4;
    // 7F31BB00: lwz     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BB04:
    ctx->pc = 0x7F31BB04u;
    // 7F31BB04: addi    r5, r31, 64
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(64);

label_7F31BB08:
    ctx->pc = 0x7F31BB08u;
    // 7F31BB08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F31BB0C:
    ctx->pc = 0x7F31BB0Cu;
    // 7F31BB0C: bl      0x7F319CD4
    {
            ctx->lr = 0x7F31BB10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F319CD4u;
                return;
            }
            goto label_7F319CD4;
    }

label_7F31BB10:
    ctx->pc = 0x7F31BB10u;
    ctx->downcount -= 1;
    // 7F31BB10: b       0x7F31BB38
    {
            goto label_7F31BB38;
    }

label_7F31BB14:
    ctx->pc = 0x7F31BB14u;
    ctx->downcount -= 4;
    // 7F31BB14: lis     r3, 174
    ctx->gpr[3] = ((u32)(s32)(174) << 16);

label_7F31BB18:
    ctx->pc = 0x7F31BB18u;
    // 7F31BB18: addi    r0, r3, 2337
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2337);

label_7F31BB1C:
    ctx->pc = 0x7F31BB1Cu;
    // 7F31BB1C: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BB20:
    ctx->pc = 0x7F31BB20u;
    // 7F31BB20: b       0x7F31BB38
    {
            goto label_7F31BB38;
    }

label_7F31BB24:
    ctx->pc = 0x7F31BB24u;
    ctx->downcount -= 5;
    // 7F31BB24: lis     r3, 174
    ctx->gpr[3] = ((u32)(s32)(174) << 16);

label_7F31BB28:
    ctx->pc = 0x7F31BB28u;
    // 7F31BB28: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31BB2C:
    ctx->pc = 0x7F31BB2Cu;
    // 7F31BB2C: addi    r3, r3, 2337
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2337);

label_7F31BB30:
    ctx->pc = 0x7F31BB30u;
    // 7F31BB30: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BB34:
    ctx->pc = 0x7F31BB34u;
    // 7F31BB34: stw     r0, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BB38:
    ctx->pc = 0x7F31BB38u;
    ctx->downcount -= 16;
    // 7F31BB38: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31BB3C:
    ctx->pc = 0x7F31BB3Cu;
    // 7F31BB3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BB40:
    ctx->pc = 0x7F31BB40u;
    // 7F31BB40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31BB44:
    ctx->pc = 0x7F31BB44u;
    // 7F31BB44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31BB48:
    ctx->pc = 0x7F31BB48u;
    // 7F31BB48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31BB4C:
    ctx->pc = 0x7F31BB4Cu;
    ctx->downcount -= 26;
    // 7F31BB4C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31BB50:
    ctx->pc = 0x7F31BB50u;
    // 7F31BB50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31BB54:
    ctx->pc = 0x7F31BB54u;
    // 7F31BB54: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F31BB58:
    ctx->pc = 0x7F31BB58u;
    // 7F31BB58: lis     r7, 32583
    ctx->gpr[7] = ((u32)(s32)(32583) << 16);

label_7F31BB5C:
    ctx->pc = 0x7F31BB5Cu;
    // 7F31BB5C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BB60:
    ctx->pc = 0x7F31BB60u;
    // 7F31BB60: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F31BB64:
    ctx->pc = 0x7F31BB64u;
    // 7F31BB64: lis     r5, 32583
    ctx->gpr[5] = ((u32)(s32)(32583) << 16);

label_7F31BB68:
    ctx->pc = 0x7F31BB68u;
    // 7F31BB68: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31BB6C:
    ctx->pc = 0x7F31BB6Cu;
    // 7F31BB6C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31BB70:
    ctx->pc = 0x7F31BB70u;
    // 7F31BB70: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F31BB74:
    ctx->pc = 0x7F31BB74u;
    // 7F31BB74: addi    r28, r8, -3320
    ctx->gpr[28] = ctx->gpr[8] + (u32)(s32)(-3320);

label_7F31BB78:
    ctx->pc = 0x7F31BB78u;
    // 7F31BB78: addi    r27, r7, -29248
    ctx->gpr[27] = ctx->gpr[7] + (u32)(s32)(-29248);

label_7F31BB7C:
    ctx->pc = 0x7F31BB7Cu;
    // 7F31BB7C: addi    r26, r6, -29296
    ctx->gpr[26] = ctx->gpr[6] + (u32)(s32)(-29296);

label_7F31BB80:
    ctx->pc = 0x7F31BB80u;
    // 7F31BB80: addi    r25, r5, -29272
    ctx->gpr[25] = ctx->gpr[5] + (u32)(s32)(-29272);

label_7F31BB84:
    ctx->pc = 0x7F31BB84u;
    // 7F31BB84: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F31BB88:
    ctx->pc = 0x7F31BB88u;
    // 7F31BB88: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F31BB8C:
    ctx->pc = 0x7F31BB8Cu;
    ctx->downcount -= 4;
    // 7F31BB8C: lwz     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BB90:
    ctx->pc = 0x7F31BB90u;
    // 7F31BB90: lwzx    r0, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BB94:
    // 7F31BB94: and.   r0, r3, r0
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

label_7F31BB98:
    // 7F31BB98: bc    4, 2, 0x7F31BBCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BBCC;
        }
    }

label_7F31BB9C:
    ctx->pc = 0x7F31BB9Cu;
    ctx->downcount -= 3;
    // 7F31BB9C: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BBA0:
    ctx->pc = 0x7F31BBA0u;
    // 7F31BBA0: lwzx    r4, r26, r29
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31BBA4:
    // 7F31BBA4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F31BBA8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F31BBA8:
    ctx->pc = 0x7F31BBA8u;
    ctx->downcount -= 6;
    // 7F31BBA8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BBAC:
    ctx->pc = 0x7F31BBACu;
    // 7F31BBAC: lwzx    r4, r25, r29
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31BBB0:
    // 7F31BBB0: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F31BBB4:
    ctx->pc = 0x7F31BBB4u;
    // 7F31BBB4: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BBB8:
    ctx->pc = 0x7F31BBB8u;
    // 7F31BBB8: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BBBC:
    // 7F31BBBC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F31BBC0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F31BBC0:
    ctx->pc = 0x7F31BBC0u;
    ctx->downcount -= 3;
    // 7F31BBC0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BBC4:
    // 7F31BBC4: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F31BBC8:
    ctx->pc = 0x7F31BBC8u;
    // 7F31BBC8: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BBCC:
    ctx->downcount -= 4;
    // 7F31BBCC: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F31BBD0:
    // 7F31BBD0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F31BBD4:
    // 7F31BBD4: cmplwi  r24, 0x0006
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(0x0006u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BBD8:
    // 7F31BBD8: bc    12, 0, 0x7F31BB8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31BB8Cu;
                return;
            }
            goto label_7F31BB8C;
        }
    }

label_7F31BBDC:
    ctx->pc = 0x7F31BBDCu;
    ctx->downcount -= 2;
    // 7F31BBDC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F31BBE0:
    ctx->pc = 0x7F31BBE0u;
    // 7F31BBE0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F31BBE4:
    ctx->downcount -= 4;
    // 7F31BBE4: addi    r0, r29, 372
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(372);

label_7F31BBE8:
    ctx->pc = 0x7F31BBE8u;
    // 7F31BBE8: lwzx    r3, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BBEC:
    ctx->pc = 0x7F31BBECu;
    // 7F31BBEC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BBF0:
    // 7F31BBF0: bl      0x7F2E2A04
    {
            ctx->lr = 0x7F31BBF4u;
            ctx->pc = 0x7F2E2A04u;
            return;
    }

label_7F31BBF4:
    ctx->downcount -= 4;
    // 7F31BBF4: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F31BBF8:
    // 7F31BBF8: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F31BBFC:
    // 7F31BBFC: cmplwi  r24, 0x0014
    {
        u32 val_a = (u32)(ctx->gpr[24]);
        u32 val_b = (u32)(0x0014u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BC00:
    // 7F31BC00: bc    12, 0, 0x7F31BBE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31BBE4u;
                return;
            }
            goto label_7F31BBE4;
        }
    }

label_7F31BC04:
    ctx->pc = 0x7F31BC04u;
    ctx->downcount -= 3;
    // 7F31BC04: addis   r0, r31, -8
    ctx->gpr[0] = ctx->gpr[31] + ((u32)(s32)(-8) << 16);

label_7F31BC08:
    ctx->pc = 0x7F31BC08u;
    // 7F31BC08: cmplwi  r0, 0xA3FB
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xA3FBu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BC0C:
    ctx->pc = 0x7F31BC0Cu;
    // 7F31BC0C: bc    12, 2, 0x7F31BD3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BD3C;
        }
    }

label_7F31BC10:
    ctx->pc = 0x7F31BC10u;
    ctx->downcount -= 9;
    // 7F31BC10: lwz     r4, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31BC14:
    ctx->pc = 0x7F31BC14u;
    // 7F31BC14: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31BC18:
    ctx->pc = 0x7F31BC18u;
    // 7F31BC18: addi    r25, r3, -3320
    ctx->gpr[25] = ctx->gpr[3] + (u32)(s32)(-3320);

label_7F31BC1C:
    ctx->pc = 0x7F31BC1Cu;
    // 7F31BC1C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F31BC20:
    ctx->pc = 0x7F31BC20u;
    // 7F31BC20: lwz     r31, 124(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F31BC24:
    ctx->pc = 0x7F31BC24u;
    // 7F31BC24: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F31BC28:
    ctx->pc = 0x7F31BC28u;
    // 7F31BC28: li      r26, 1
    ctx->gpr[26] = (u32)(s32)(1);

label_7F31BC2C:
    ctx->pc = 0x7F31BC2Cu;
    // 7F31BC2C: lis     r27, 236
    ctx->gpr[27] = ((u32)(s32)(236) << 16);

label_7F31BC30:
    ctx->pc = 0x7F31BC30u;
    // 7F31BC30: lis     r28, 71
    ctx->gpr[28] = ((u32)(s32)(71) << 16);

label_7F31BC34:
    ctx->pc = 0x7F31BC34u;
    ctx->downcount -= 6;
    // 7F31BC34: lwz     r3, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BC38:
    // 7F31BC38: slw   r0, r26, r24
    {
        u32 sh = ctx->gpr[24] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[26] << sh);
    }

label_7F31BC3C:
    // 7F31BC3C: addi    r4, r29, 372
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(372);

label_7F31BC40:
    // 7F31BC40: and.   r0, r3, r0
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

label_7F31BC44:
    ctx->pc = 0x7F31BC44u;
    // 7F31BC44: lwzx    r3, r30, r4
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[4];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BC48:
    // 7F31BC48: bc    12, 2, 0x7F31BC5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BC5C;
        }
    }

label_7F31BC4C:
    ctx->downcount -= 3;
    // 7F31BC4C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BC50:
    // 7F31BC50: addi    r4, r27, -28150
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(-28150);

label_7F31BC54:
    // 7F31BC54: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F31BC58u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F31BC58:
    ctx->downcount -= 1;
    // 7F31BC58: b       0x7F31BC68
    {
            goto label_7F31BC68;
    }

label_7F31BC5C:
    ctx->downcount -= 3;
    // 7F31BC5C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BC60:
    // 7F31BC60: addi    r4, r28, 28773
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(28773);

label_7F31BC64:
    // 7F31BC64: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F31BC68u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F31BC68:
    ctx->downcount -= 4;
    // 7F31BC68: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F31BC6C:
    // 7F31BC6C: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_7F31BC70:
    // 7F31BC70: cmpwi   r24, 16
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BC74:
    // 7F31BC74: bc    4, 1, 0x7F31BC34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31BC34u;
                return;
            }
            goto label_7F31BC34;
        }
    }

label_7F31BC78:
    ctx->pc = 0x7F31BC78u;
    ctx->downcount -= 5;
    // 7F31BC78: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31BC7C:
    ctx->pc = 0x7F31BC7Cu;
    // 7F31BC7C: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BC80:
    ctx->pc = 0x7F31BC80u;
    // 7F31BC80: rlwinm r0, r0, 0, 29, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000006u;
    }

label_7F31BC84:
    ctx->pc = 0x7F31BC84u;
    // 7F31BC84: cmplwi  r0, 0x0006
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

label_7F31BC88:
    ctx->pc = 0x7F31BC88u;
    // 7F31BC88: bc    4, 2, 0x7F31BCA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BCA4;
        }
    }

label_7F31BC8C:
    ctx->pc = 0x7F31BC8Cu;
    ctx->downcount -= 5;
    // 7F31BC8C: lis     r4, 236
    ctx->gpr[4] = ((u32)(s32)(236) << 16);

label_7F31BC90:
    ctx->pc = 0x7F31BC90u;
    // 7F31BC90: lwz     r3, 440(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BC94:
    ctx->pc = 0x7F31BC94u;
    // 7F31BC94: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BC98:
    ctx->pc = 0x7F31BC98u;
    // 7F31BC98: addi    r4, r4, -28150
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28150);

label_7F31BC9C:
    ctx->pc = 0x7F31BC9Cu;
    // 7F31BC9C: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F31BCA0u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F31BCA0:
    ctx->pc = 0x7F31BCA0u;
    ctx->downcount -= 1;
    // 7F31BCA0: b       0x7F31BCB8
    {
            goto label_7F31BCB8;
    }

label_7F31BCA4:
    ctx->pc = 0x7F31BCA4u;
    ctx->downcount -= 5;
    // 7F31BCA4: lis     r4, 71
    ctx->gpr[4] = ((u32)(s32)(71) << 16);

label_7F31BCA8:
    ctx->pc = 0x7F31BCA8u;
    // 7F31BCA8: lwz     r3, 440(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BCAC:
    ctx->pc = 0x7F31BCACu;
    // 7F31BCAC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BCB0:
    ctx->pc = 0x7F31BCB0u;
    // 7F31BCB0: addi    r4, r4, 28773
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28773);

label_7F31BCB4:
    ctx->pc = 0x7F31BCB4u;
    // 7F31BCB4: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F31BCB8u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F31BCB8:
    ctx->pc = 0x7F31BCB8u;
    ctx->downcount -= 5;
    // 7F31BCB8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31BCBC:
    ctx->pc = 0x7F31BCBCu;
    // 7F31BCBC: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BCC0:
    ctx->pc = 0x7F31BCC0u;
    // 7F31BCC0: rlwinm r0, r0, 0, 24, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000F8u;
    }

label_7F31BCC4:
    ctx->pc = 0x7F31BCC4u;
    // 7F31BCC4: cmplwi  r0, 0x00F8
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x00F8u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BCC8:
    ctx->pc = 0x7F31BCC8u;
    // 7F31BCC8: bc    4, 2, 0x7F31BCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BCE4;
        }
    }

label_7F31BCCC:
    ctx->pc = 0x7F31BCCCu;
    ctx->downcount -= 5;
    // 7F31BCCC: lis     r4, 236
    ctx->gpr[4] = ((u32)(s32)(236) << 16);

label_7F31BCD0:
    ctx->pc = 0x7F31BCD0u;
    // 7F31BCD0: lwz     r3, 444(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BCD4:
    ctx->pc = 0x7F31BCD4u;
    // 7F31BCD4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BCD8:
    ctx->pc = 0x7F31BCD8u;
    // 7F31BCD8: addi    r4, r4, -28150
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28150);

label_7F31BCDC:
    ctx->pc = 0x7F31BCDCu;
    // 7F31BCDC: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F31BCE0u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F31BCE0:
    ctx->pc = 0x7F31BCE0u;
    ctx->downcount -= 1;
    // 7F31BCE0: b       0x7F31BCF8
    {
            goto label_7F31BCF8;
    }

label_7F31BCE4:
    ctx->pc = 0x7F31BCE4u;
    ctx->downcount -= 5;
    // 7F31BCE4: lis     r4, 71
    ctx->gpr[4] = ((u32)(s32)(71) << 16);

label_7F31BCE8:
    ctx->pc = 0x7F31BCE8u;
    // 7F31BCE8: lwz     r3, 444(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BCEC:
    ctx->pc = 0x7F31BCECu;
    // 7F31BCEC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BCF0:
    ctx->pc = 0x7F31BCF0u;
    // 7F31BCF0: addi    r4, r4, 28773
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28773);

label_7F31BCF4:
    ctx->pc = 0x7F31BCF4u;
    // 7F31BCF4: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F31BCF8u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F31BCF8:
    ctx->pc = 0x7F31BCF8u;
    ctx->downcount -= 6;
    // 7F31BCF8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F31BCFC:
    ctx->pc = 0x7F31BCFCu;
    // 7F31BCFC: lwz     r0, -3320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-3320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BD00:
    ctx->pc = 0x7F31BD00u;
    // 7F31BD00: rlwinm r3, r0, 0, 15, 23
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0001FF00u;
    }

label_7F31BD04:
    ctx->pc = 0x7F31BD04u;
    // 7F31BD04: addis   r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-1) << 16);

label_7F31BD08:
    ctx->pc = 0x7F31BD08u;
    // 7F31BD08: cmplwi  r0, 0xFF00
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xFF00u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BD0C:
    ctx->pc = 0x7F31BD0Cu;
    // 7F31BD0C: bc    4, 2, 0x7F31BD28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BD28;
        }
    }

label_7F31BD10:
    ctx->pc = 0x7F31BD10u;
    ctx->downcount -= 5;
    // 7F31BD10: lis     r4, 236
    ctx->gpr[4] = ((u32)(s32)(236) << 16);

label_7F31BD14:
    ctx->pc = 0x7F31BD14u;
    // 7F31BD14: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BD18:
    ctx->pc = 0x7F31BD18u;
    // 7F31BD18: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BD1C:
    ctx->pc = 0x7F31BD1Cu;
    // 7F31BD1C: addi    r4, r4, -28150
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28150);

label_7F31BD20:
    ctx->pc = 0x7F31BD20u;
    // 7F31BD20: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F31BD24u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F31BD24:
    ctx->pc = 0x7F31BD24u;
    ctx->downcount -= 1;
    // 7F31BD24: b       0x7F31BD3C
    {
            goto label_7F31BD3C;
    }

label_7F31BD28:
    ctx->pc = 0x7F31BD28u;
    ctx->downcount -= 5;
    // 7F31BD28: lis     r4, 71
    ctx->gpr[4] = ((u32)(s32)(71) << 16);

label_7F31BD2C:
    ctx->pc = 0x7F31BD2Cu;
    // 7F31BD2C: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BD30:
    ctx->pc = 0x7F31BD30u;
    // 7F31BD30: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BD34:
    ctx->pc = 0x7F31BD34u;
    // 7F31BD34: addi    r4, r4, 28773
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(28773);

label_7F31BD38:
    ctx->pc = 0x7F31BD38u;
    // 7F31BD38: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F31BD3Cu;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F31BD3C:
    ctx->pc = 0x7F31BD3Cu;
    ctx->downcount -= 16;
    // 7F31BD3C: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31BD40:
    ctx->pc = 0x7F31BD40u;
    // 7F31BD40: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BD44:
    ctx->pc = 0x7F31BD44u;
    // 7F31BD44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31BD48:
    ctx->pc = 0x7F31BD48u;
    // 7F31BD48: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F31BD4C:
    ctx->pc = 0x7F31BD4Cu;
    // 7F31BD4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31BD50:
    ctx->pc = 0x7F31BD50u;
    ctx->downcount -= 16;
    // 7F31BD50: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31BD54:
    ctx->pc = 0x7F31BD54u;
    // 7F31BD54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31BD58:
    ctx->pc = 0x7F31BD58u;
    // 7F31BD58: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BD5C:
    ctx->pc = 0x7F31BD5Cu;
    // 7F31BD5C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31BD60:
    ctx->pc = 0x7F31BD60u;
    // 7F31BD60: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31BD64:
    ctx->pc = 0x7F31BD64u;
    // 7F31BD64: bl      0x7F31B98C
    {
            ctx->lr = 0x7F31BD68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31B98Cu;
                return;
            }
            goto label_7F31B98C;
    }

label_7F31BD68:
    ctx->pc = 0x7F31BD68u;
    ctx->downcount -= 4;
    // 7F31BD68: lis     r3, -32737
    ctx->gpr[3] = ((u32)(s32)(-32737) << 16);

label_7F31BD6C:
    ctx->pc = 0x7F31BD6Cu;
    // 7F31BD6C: lbz     r0, -32744(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31BD70:
    ctx->pc = 0x7F31BD70u;
    // 7F31BD70: cmplwi  r0, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BD74:
    ctx->pc = 0x7F31BD74u;
    // 7F31BD74: bc    4, 2, 0x7F31BD98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BD98;
        }
    }

label_7F31BD78:
    ctx->pc = 0x7F31BD78u;
    ctx->downcount -= 6;
    // 7F31BD78: lis     r3, 135
    ctx->gpr[3] = ((u32)(s32)(135) << 16);

label_7F31BD7C:
    ctx->pc = 0x7F31BD7Cu;
    // 7F31BD7C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31BD80:
    ctx->pc = 0x7F31BD80u;
    // 7F31BD80: addi    r3, r3, -11519
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11519);

label_7F31BD84:
    ctx->pc = 0x7F31BD84u;
    // 7F31BD84: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31BD88:
    ctx->pc = 0x7F31BD88u;
    // 7F31BD88: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31BD8C:
    ctx->pc = 0x7F31BD8Cu;
    // 7F31BD8C: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F31BD90u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F31BD90:
    ctx->pc = 0x7F31BD90u;
    ctx->downcount -= 2;
    // 7F31BD90: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BD94:
    ctx->pc = 0x7F31BD94u;
    // 7F31BD94: b       0x7F31BDB4
    {
            goto label_7F31BDB4;
    }

label_7F31BD98:
    ctx->pc = 0x7F31BD98u;
    ctx->downcount -= 6;
    // 7F31BD98: lis     r3, 135
    ctx->gpr[3] = ((u32)(s32)(135) << 16);

label_7F31BD9C:
    ctx->pc = 0x7F31BD9Cu;
    // 7F31BD9C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31BDA0:
    ctx->pc = 0x7F31BDA0u;
    // 7F31BDA0: addi    r3, r3, -11524
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-11524);

label_7F31BDA4:
    ctx->pc = 0x7F31BDA4u;
    // 7F31BDA4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31BDA8:
    ctx->pc = 0x7F31BDA8u;
    // 7F31BDA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31BDAC:
    ctx->pc = 0x7F31BDACu;
    // 7F31BDAC: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F31BDB0u;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F31BDB0:
    ctx->pc = 0x7F31BDB0u;
    ctx->downcount -= 1;
    // 7F31BDB0: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BDB4:
    ctx->pc = 0x7F31BDB4u;
    ctx->downcount -= 5;
    // 7F31BDB4: lis     r4, 32562
    ctx->gpr[4] = ((u32)(s32)(32562) << 16);

label_7F31BDB8:
    ctx->pc = 0x7F31BDB8u;
    // 7F31BDB8: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BDBC:
    ctx->pc = 0x7F31BDBCu;
    // 7F31BDBC: addi    r5, r4, -17588
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-17588);

label_7F31BDC0:
    ctx->pc = 0x7F31BDC0u;
    // 7F31BDC0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BDC4:
    ctx->pc = 0x7F31BDC4u;
    // 7F31BDC4: bl      0x7F2E4B6C
    {
            ctx->lr = 0x7F31BDC8u;
            ctx->pc = 0x7F2E4B6Cu;
            return;
    }

label_7F31BDC8:
    ctx->pc = 0x7F31BDC8u;
    ctx->downcount -= 2;
    // 7F31BDC8: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BDCC:
    ctx->pc = 0x7F31BDCCu;
    // 7F31BDCC: bl      0x7F2E57F8
    {
            ctx->lr = 0x7F31BDD0u;
            ctx->pc = 0x7F2E57F8u;
            return;
    }

label_7F31BDD0:
    ctx->pc = 0x7F31BDD0u;
    ctx->downcount -= 1;
    // 7F31BDD0: bl      0x7F2CF874
    {
            ctx->lr = 0x7F31BDD4u;
            ctx->pc = 0x7F2CF874u;
            return;
    }

label_7F31BDD4:
    ctx->pc = 0x7F31BDD4u;
    ctx->downcount -= 2;
    // 7F31BDD4: stw     r3, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BDD8:
    ctx->pc = 0x7F31BDD8u;
    // 7F31BDD8: bl      0x7F19CF4C
    {
            ctx->lr = 0x7F31BDDCu;
            ctx->pc = 0x7F19CF4Cu;
            return;
    }

label_7F31BDDC:
    ctx->pc = 0x7F31BDDCu;
    ctx->downcount -= 5;
    // 7F31BDDC: stw     r3, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BDE0:
    ctx->pc = 0x7F31BDE0u;
    // 7F31BDE0: li      r3, 225
    ctx->gpr[3] = (u32)(s32)(225);

label_7F31BDE4:
    ctx->pc = 0x7F31BDE4u;
    // 7F31BDE4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F31BDE8:
    ctx->pc = 0x7F31BDE8u;
    // 7F31BDE8: li      r5, 150
    ctx->gpr[5] = (u32)(s32)(150);

label_7F31BDEC:
    ctx->pc = 0x7F31BDECu;
    // 7F31BDEC: bl      0x7F3BA1AC
    {
            ctx->lr = 0x7F31BDF0u;
            ctx->pc = 0x7F3BA1ACu;
            return;
    }

label_7F31BDF0:
    ctx->pc = 0x7F31BDF0u;
    ctx->downcount -= 3;
    // 7F31BDF0: stw     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BDF4:
    ctx->pc = 0x7F31BDF4u;
    // 7F31BDF4: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BDF8:
    ctx->pc = 0x7F31BDF8u;
    // 7F31BDF8: bl      0x7F3BA260
    {
            ctx->lr = 0x7F31BDFCu;
            ctx->pc = 0x7F3BA260u;
            return;
    }

label_7F31BDFC:
    ctx->pc = 0x7F31BDFCu;
    ctx->downcount -= 5;
    // 7F31BDFC: lis     r4, 32562
    ctx->gpr[4] = ((u32)(s32)(32562) << 16);

label_7F31BE00:
    ctx->pc = 0x7F31BE00u;
    // 7F31BE00: lwz     r3, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BE04:
    ctx->pc = 0x7F31BE04u;
    // 7F31BE04: addi    r4, r4, -18192
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18192);

label_7F31BE08:
    ctx->pc = 0x7F31BE08u;
    // 7F31BE08: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BE0C:
    ctx->pc = 0x7F31BE0Cu;
    // 7F31BE0C: bl      0x7F3BA254
    {
            ctx->lr = 0x7F31BE10u;
            ctx->pc = 0x7F3BA254u;
            return;
    }

label_7F31BE10:
    ctx->pc = 0x7F31BE10u;
    ctx->downcount -= 3;
    // 7F31BE10: addi    r3, r31, 144
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(144);

label_7F31BE14:
    ctx->pc = 0x7F31BE14u;
    // 7F31BE14: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F31BE18:
    ctx->pc = 0x7F31BE18u;
    // 7F31BE18: bl      0x7F2EA328
    {
            ctx->lr = 0x7F31BE1Cu;
            ctx->pc = 0x7F2EA328u;
            return;
    }

label_7F31BE1C:
    ctx->pc = 0x7F31BE1Cu;
    ctx->downcount -= 6;
    // 7F31BE1C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F31BE20:
    ctx->pc = 0x7F31BE20u;
    // 7F31BE20: addi    r3, r31, 76
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(76);

label_7F31BE24:
    ctx->pc = 0x7F31BE24u;
    // 7F31BE24: addi    r4, r4, -25560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25560);

label_7F31BE28:
    ctx->pc = 0x7F31BE28u;
    // 7F31BE28: addi    r6, r31, 144
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(144);

label_7F31BE2C:
    ctx->pc = 0x7F31BE2Cu;
    // 7F31BE2C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F31BE30:
    ctx->pc = 0x7F31BE30u;
    // 7F31BE30: bl      0x7F31DFD8
    {
            ctx->lr = 0x7F31BE34u;
            ctx->pc = 0x7F31DFD8u;
            return;
    }

label_7F31BE34:
    ctx->pc = 0x7F31BE34u;
    ctx->downcount -= 22;
    // 7F31BE34: lis     r4, 32559
    ctx->gpr[4] = ((u32)(s32)(32559) << 16);

label_7F31BE38:
    ctx->pc = 0x7F31BE38u;
    // 7F31BE38: lis     r3, 20527
    ctx->gpr[3] = ((u32)(s32)(20527) << 16);

label_7F31BE3C:
    ctx->pc = 0x7F31BE3Cu;
    // 7F31BE3C: addi    r0, r4, 255
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(255);

label_7F31BE40:
    ctx->pc = 0x7F31BE40u;
    // 7F31BE40: lis     r5, 2565
    ctx->gpr[5] = ((u32)(s32)(2565) << 16);

label_7F31BE44:
    ctx->pc = 0x7F31BE44u;
    // 7F31BE44: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BE48:
    ctx->pc = 0x7F31BE48u;
    // 7F31BE48: addi    r0, r4, 50
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(50);

label_7F31BE4C:
    ctx->pc = 0x7F31BE4Cu;
    // 7F31BE4C: addi    r6, r3, 200
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(200);

label_7F31BE50:
    ctx->pc = 0x7F31BE50u;
    // 7F31BE50: addi    r4, r3, 90
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(90);

label_7F31BE54:
    ctx->pc = 0x7F31BE54u;
    // 7F31BE54: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BE58:
    ctx->pc = 0x7F31BE58u;
    // 7F31BE58: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_7F31BE5C:
    ctx->pc = 0x7F31BE5Cu;
    // 7F31BE5C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F31BE60:
    ctx->pc = 0x7F31BE60u;
    // 7F31BE60: stw     r6, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31BE64:
    ctx->pc = 0x7F31BE64u;
    // 7F31BE64: stw     r5, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31BE68:
    ctx->pc = 0x7F31BE68u;
    // 7F31BE68: stw     r4, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F31BE6C:
    ctx->pc = 0x7F31BE6Cu;
    // 7F31BE6C: stw     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BE70:
    ctx->pc = 0x7F31BE70u;
    // 7F31BE70: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BE74:
    ctx->pc = 0x7F31BE74u;
    // 7F31BE74: stw     r0, 368(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BE78:
    ctx->pc = 0x7F31BE78u;
    // 7F31BE78: stw     r0, 364(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BE7C:
    ctx->pc = 0x7F31BE7Cu;
    // 7F31BE7C: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BE80:
    ctx->pc = 0x7F31BE80u;
    // 7F31BE80: addis   r0, r3, -174
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-174) << 16);

label_7F31BE84:
    ctx->pc = 0x7F31BE84u;
    // 7F31BE84: cmplwi  r0, 0x0921
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0921u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BE88:
    ctx->pc = 0x7F31BE88u;
    // 7F31BE88: bc    4, 2, 0x7F31BE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F31BE9C;
        }
    }

label_7F31BE8C:
    ctx->pc = 0x7F31BE8Cu;
    ctx->downcount -= 4;
    // 7F31BE8C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F31BE90:
    ctx->pc = 0x7F31BE90u;
    // 7F31BE90: addi    r3, r31, 76
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(76);

label_7F31BE94:
    ctx->pc = 0x7F31BE94u;
    // 7F31BE94: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BE98:
    ctx->pc = 0x7F31BE98u;
    // 7F31BE98: bl      0x7F31E5F4
    {
            ctx->lr = 0x7F31BE9Cu;
            ctx->pc = 0x7F31E5F4u;
            return;
    }

label_7F31BE9C:
    ctx->pc = 0x7F31BE9Cu;
    ctx->downcount -= 4;
    // 7F31BE9C: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F31BEA0:
    ctx->pc = 0x7F31BEA0u;
    // 7F31BEA0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F31BEA4:
    ctx->pc = 0x7F31BEA4u;
    // 7F31BEA4: addi    r29, r3, -29440
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-29440);

label_7F31BEA8:
    ctx->pc = 0x7F31BEA8u;
    // 7F31BEA8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F31BEAC:
    ctx->pc = 0x7F31BEACu;
    ctx->downcount -= 3;
    // 7F31BEAC: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BEB0:
    ctx->pc = 0x7F31BEB0u;
    // 7F31BEB0: lwzx    r4, r29, r30
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F31BEB4:
    // 7F31BEB4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F31BEB8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F31BEB8:
    ctx->downcount -= 6;
    // 7F31BEB8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F31BEBC:
    // 7F31BEBC: addi    r0, r30, 372
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(372);

label_7F31BEC0:
    // 7F31BEC0: cmplwi  r28, 0x0014
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0014u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31BEC4:
    ctx->pc = 0x7F31BEC4u;
    // 7F31BEC4: stwx    r3, r31, r0
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F31BEC8:
    // 7F31BEC8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_7F31BECC:
    // 7F31BECC: bc    12, 0, 0x7F31BEAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31BEACu;
                return;
            }
            goto label_7F31BEAC;
        }
    }

label_7F31BED0:
    ctx->pc = 0x7F31BED0u;
    ctx->downcount -= 16;
    // 7F31BED0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31BED4:
    ctx->pc = 0x7F31BED4u;
    // 7F31BED4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BED8:
    ctx->pc = 0x7F31BED8u;
    // 7F31BED8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31BEDC:
    ctx->pc = 0x7F31BEDCu;
    // 7F31BEDC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F31BEE0:
    ctx->pc = 0x7F31BEE0u;
    // 7F31BEE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31BEE4:
    ctx->pc = 0x7F31BEE4u;
    ctx->downcount -= 20;
    // 7F31BEE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31BEE8:
    ctx->pc = 0x7F31BEE8u;
    // 7F31BEE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31BEEC:
    ctx->pc = 0x7F31BEECu;
    // 7F31BEEC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F31BEF0:
    ctx->pc = 0x7F31BEF0u;
    // 7F31BEF0: li      r5, 452
    ctx->gpr[5] = (u32)(s32)(452);

label_7F31BEF4:
    ctx->pc = 0x7F31BEF4u;
    // 7F31BEF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BEF8:
    ctx->pc = 0x7F31BEF8u;
    // 7F31BEF8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F31BEFC:
    ctx->pc = 0x7F31BEFCu;
    // 7F31BEFC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31BF00:
    ctx->pc = 0x7F31BF00u;
    // 7F31BF00: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31BF04:
    ctx->pc = 0x7F31BF04u;
    // 7F31BF04: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F31BF08:
    ctx->pc = 0x7F31BF08u;
    // 7F31BF08: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F31BF0Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F31BF0C:
    ctx->pc = 0x7F31BF0Cu;
    ctx->downcount -= 2;
    // 7F31BF0C: or.   r31, r3, r3
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

label_7F31BF10:
    ctx->pc = 0x7F31BF10u;
    // 7F31BF10: bc    12, 2, 0x7F31BF74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31BF74;
        }
    }

label_7F31BF14:
    ctx->pc = 0x7F31BF14u;
    ctx->downcount -= 3;
    // 7F31BF14: stw     r30, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F31BF18:
    ctx->pc = 0x7F31BF18u;
    // 7F31BF18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F31BF1C:
    ctx->pc = 0x7F31BF1Cu;
    // 7F31BF1C: bl      0x7F31F7DC
    {
            ctx->lr = 0x7F31BF20u;
            ctx->pc = 0x7F31F7DCu;
            return;
    }

label_7F31BF20:
    ctx->pc = 0x7F31BF20u;
    ctx->downcount -= 6;
    // 7F31BF20: lis     r3, 32562
    ctx->gpr[3] = ((u32)(s32)(32562) << 16);

label_7F31BF24:
    ctx->pc = 0x7F31BF24u;
    // 7F31BF24: lis     r5, 32562
    ctx->gpr[5] = ((u32)(s32)(32562) << 16);

label_7F31BF28:
    ctx->pc = 0x7F31BF28u;
    // 7F31BF28: addi    r4, r3, -18680
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-18680);

label_7F31BF2C:
    ctx->pc = 0x7F31BF2Cu;
    // 7F31BF2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BF30:
    ctx->pc = 0x7F31BF30u;
    // 7F31BF30: addi    r5, r5, -18156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-18156);

label_7F31BF34:
    ctx->pc = 0x7F31BF34u;
    // 7F31BF34: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F31BF38u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F31BF38:
    ctx->pc = 0x7F31BF38u;
    ctx->downcount -= 13;
    // 7F31BF38: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BF3C:
    ctx->pc = 0x7F31BF3Cu;
    // 7F31BF3C: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F31BF40:
    ctx->pc = 0x7F31BF40u;
    // 7F31BF40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F31BF44:
    ctx->pc = 0x7F31BF44u;
    // 7F31BF44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BF48:
    ctx->pc = 0x7F31BF48u;
    // 7F31BF48: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F31BF4C:
    ctx->pc = 0x7F31BF4Cu;
    // 7F31BF4C: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F31BF50:
    ctx->pc = 0x7F31BF50u;
    // 7F31BF50: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F31BF54:
    ctx->pc = 0x7F31BF54u;
    // 7F31BF54: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F31BF58:
    ctx->pc = 0x7F31BF58u;
    // 7F31BF58: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31BF5C:
    ctx->pc = 0x7F31BF5Cu;
    // 7F31BF5C: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31BF60:
    ctx->pc = 0x7F31BF60u;
    // 7F31BF60: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F31BF64:
    ctx->pc = 0x7F31BF64u;
    // 7F31BF64: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BF68:
    ctx->pc = 0x7F31BF68u;
    // 7F31BF68: bl      0x7F3C89DC
    {
            ctx->lr = 0x7F31BF6Cu;
            ctx->pc = 0x7F3C89DCu;
            return;
    }

label_7F31BF6C:
    ctx->pc = 0x7F31BF6Cu;
    ctx->downcount -= 2;
    // 7F31BF6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BF70:
    ctx->pc = 0x7F31BF70u;
    // 7F31BF70: bl      0x7F31BD50
    {
            ctx->lr = 0x7F31BF74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31BD50u;
                return;
            }
            goto label_7F31BD50;
    }

label_7F31BF74:
    ctx->pc = 0x7F31BF74u;
    ctx->downcount -= 17;
    // 7F31BF74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F31BF78:
    ctx->pc = 0x7F31BF78u;
    // 7F31BF78: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31BF7C:
    ctx->pc = 0x7F31BF7Cu;
    // 7F31BF7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BF80:
    ctx->pc = 0x7F31BF80u;
    // 7F31BF80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31BF84:
    ctx->pc = 0x7F31BF84u;
    // 7F31BF84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31BF88:
    ctx->pc = 0x7F31BF88u;
    // 7F31BF88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31BF8C:
    ctx->pc = 0x7F31BF8Cu;
    ctx->downcount -= 2;
    // 7F31BF8C: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31BF90:
    ctx->pc = 0x7F31BF90u;
    // 7F31BF90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31BF94:
    ctx->pc = 0x7F31BF94u;
    ctx->downcount -= 4;
    // 7F31BF94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31BF98:
    ctx->pc = 0x7F31BF98u;
    // 7F31BF98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31BF9C:
    ctx->pc = 0x7F31BF9Cu;
    // 7F31BF9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BFA0:
    ctx->pc = 0x7F31BFA0u;
    // 7F31BFA0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F31BFA4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F31BFA4:
    ctx->pc = 0x7F31BFA4u;
    ctx->downcount -= 5;
    // 7F31BFA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BFA8:
    ctx->pc = 0x7F31BFA8u;
    // 7F31BFA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31BFAC:
    ctx->pc = 0x7F31BFACu;
    // 7F31BFAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F31BFB0:
    ctx->pc = 0x7F31BFB0u;
    // 7F31BFB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31BFB4:
    ctx->pc = 0x7F31BFB4u;
    ctx->downcount -= 16;
    // 7F31BFB4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31BFB8:
    ctx->pc = 0x7F31BFB8u;
    // 7F31BFB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31BFBC:
    ctx->pc = 0x7F31BFBCu;
    // 7F31BFBC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31BFC0:
    ctx->pc = 0x7F31BFC0u;
    // 7F31BFC0: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31BFC4:
    ctx->pc = 0x7F31BFC4u;
    // 7F31BFC4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31BFC8:
    ctx->pc = 0x7F31BFC8u;
    // 7F31BFC8: bl      0x8004DB8C
    {
            ctx->lr = 0x7F31BFCCu;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F31BFCC:
    ctx->pc = 0x7F31BFCCu;
    ctx->downcount -= 5;
    // 7F31BFCC: lbz     r0, 3(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31BFD0:
    ctx->pc = 0x7F31BFD0u;
    // 7F31BFD0: extsb r3, r0
    {
        ctx->gpr[3] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F31BFD4:
    ctx->pc = 0x7F31BFD4u;
    // 7F31BFD4: addi    r0, r3, -69
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-69);

label_7F31BFD8:
    ctx->pc = 0x7F31BFD8u;
    // 7F31BFD8: cmplwi  r0, 0x0012
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

label_7F31BFDC:
    ctx->pc = 0x7F31BFDCu;
    // 7F31BFDC: bc    12, 1, 0x7F31C014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F31C014;
        }
    }

label_7F31BFE0:
    ctx->pc = 0x7F31BFE0u;
    ctx->downcount -= 7;
    // 7F31BFE0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31BFE4:
    ctx->pc = 0x7F31BFE4u;
    // 7F31BFE4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F31BFE8:
    ctx->pc = 0x7F31BFE8u;
    // 7F31BFE8: addi    r3, r3, -25188
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25188);

label_7F31BFEC:
    ctx->pc = 0x7F31BFECu;
    // 7F31BFEC: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31BFF0:
    ctx->pc = 0x7F31BFF0u;
    // 7F31BFF0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F31BFF4:
    ctx->pc = 0x7F31BFF4u;
    // 7F31BFF4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F31BFF8:
    ctx->pc = 0x7F31BFF8u;
    ctx->downcount -= 2;
    // 7F31BFF8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F31BFFC:
    ctx->pc = 0x7F31BFFCu;
    // 7F31BFFC: b       0x7F31C014
    {
            goto label_7F31C014;
    }

label_7F31C000:
    ctx->pc = 0x7F31C000u;
    ctx->downcount -= 2;
    // 7F31C000: li      r24, 1
    ctx->gpr[24] = (u32)(s32)(1);

label_7F31C004:
    ctx->pc = 0x7F31C004u;
    // 7F31C004: b       0x7F31C014
    {
            goto label_7F31C014;
    }

label_7F31C008:
    ctx->pc = 0x7F31C008u;
    ctx->downcount -= 2;
    // 7F31C008: li      r24, 2
    ctx->gpr[24] = (u32)(s32)(2);

label_7F31C00C:
    ctx->pc = 0x7F31C00Cu;
    // 7F31C00C: b       0x7F31C014
    {
            goto label_7F31C014;
    }

label_7F31C010:
    ctx->pc = 0x7F31C010u;
    ctx->downcount -= 1;
    // 7F31C010: li      r24, 3
    ctx->gpr[24] = (u32)(s32)(3);

label_7F31C014:
    ctx->pc = 0x7F31C014u;
    ctx->downcount -= 9;
    // 7F31C014: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F31C018:
    ctx->pc = 0x7F31C018u;
    // 7F31C018: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31C01C:
    ctx->pc = 0x7F31C01Cu;
    // 7F31C01C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F31C020:
    ctx->pc = 0x7F31C020u;
    // 7F31C020: rlwinm r25, r24, 2, 0, 29
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[24], 2u) & 0xFFFFFFFCu;
    }

label_7F31C024:
    ctx->pc = 0x7F31C024u;
    // 7F31C024: addi    r28, r4, -25192
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(-25192);

label_7F31C028:
    ctx->pc = 0x7F31C028u;
    // 7F31C028: addi    r29, r3, -25196
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-25196);

label_7F31C02C:
    ctx->pc = 0x7F31C02Cu;
    // 7F31C02C: addi    r26, r5, -25264
    ctx->gpr[26] = ctx->gpr[5] + (u32)(s32)(-25264);

label_7F31C030:
    ctx->pc = 0x7F31C030u;
    // 7F31C030: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F31C034:
    ctx->pc = 0x7F31C034u;
    // 7F31C034: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F31C038:
    ctx->downcount -= 2;
    // 7F31C038: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_7F31C03C:
    // 7F31C03C: add   r27, r26, r30
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_7F31C040:
    ctx->pc = 0x7F31C040u;
    ctx->downcount -= 3;
    // 7F31C040: stb     r23, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write8(ctx, ea, (u8)ctx->gpr[23]);
    }

label_7F31C044:
    // 7F31C044: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F31C048:
    // 7F31C048: bl      0x7F312888
    {
            ctx->lr = 0x7F31C04Cu;
            ctx->pc = 0x7F312888u;
            return;
    }

label_7F31C04C:
    ctx->pc = 0x7F31C04Cu;
    ctx->downcount -= 5;
    // 7F31C04C: lwzx    r5, r27, r25
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[25];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F31C050:
    // 7F31C050: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F31C054:
    ctx->pc = 0x7F31C054u;
    // 7F31C054: lwz     r6, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F31C058:
    // 7F31C058: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F31C05C:
    // 7F31C05C: bl      0x7F3128C4
    {
            ctx->lr = 0x7F31C060u;
            ctx->pc = 0x7F3128C4u;
            return;
    }

label_7F31C060:
    ctx->pc = 0x7F31C060u;
    ctx->downcount -= 9;
    // 7F31C060: lwz     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F31C064:
    // 7F31C064: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_7F31C068:
    ctx->pc = 0x7F31C068u;
    // 7F31C068: lbz     r0, 16456(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16456);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F31C06C:
    // 7F31C06C: cmpwi   r23, 2
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

label_7F31C070:
    // 7F31C070: addi    r4, r3, 3
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(3);

label_7F31C074:
    ctx->pc = 0x7F31C074u;
    // 7F31C074: lbzx    r3, r24, r4
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[4];
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F31C078:
    // 7F31C078: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F31C07C:
    ctx->pc = 0x7F31C07Cu;
    // 7F31C07C: stbx    r0, r24, r4
    {
        u32 ea = ctx->gpr[24] + ctx->gpr[4];
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F31C080:
    // 7F31C080: bc    12, 0, 0x7F31C040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C040u;
                return;
            }
            goto label_7F31C040;
        }
    }

label_7F31C084:
    ctx->downcount -= 4;
    // 7F31C084: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_7F31C088:
    // 7F31C088: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_7F31C08C:
    // 7F31C08C: cmpwi   r24, 4
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F31C090:
    // 7F31C090: bc    12, 0, 0x7F31C038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F31C038u;
                return;
            }
            goto label_7F31C038;
        }
    }

label_7F31C094:
    ctx->pc = 0x7F31C094u;
    ctx->downcount -= 16;
    // 7F31C094: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F31C098:
    ctx->pc = 0x7F31C098u;
    // 7F31C098: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F31C09C:
    ctx->pc = 0x7F31C09Cu;
    // 7F31C09C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F31C0A0:
    ctx->pc = 0x7F31C0A0u;
    // 7F31C0A0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F31C0A4:
    ctx->pc = 0x7F31C0A4u;
    // 7F31C0A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F3180EC;
        }
    }

label_7F31C0A8:
    ctx->pc = 0x7F31C0A8u;
    ctx->downcount -= 16;
    // 7F31C0A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F31C0AC:
    ctx->pc = 0x7F31C0ACu;
    // 7F31C0AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F31C0B0:
    ctx->pc = 0x7F31C0B0u;
    // 7F31C0B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F31C0B4:
    ctx->pc = 0x7F31C0B4u;
    // 7F31C0B4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F31C0B8:
    ctx->pc = 0x7F31C0B8u;
    // 7F31C0B8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C0BC:
    ctx->pc = 0x7F31C0BCu;
    // 7F31C0BC: bl      0x8004DB8C
    {
            ctx->lr = 0x7F31C0C0u;
            ctx->pc = 0x8004DB8Cu;
            return;
    }

label_7F31C0C0:
    ctx->pc = 0x7F31C0C0u;
    ctx->downcount -= 4;
    // 7F31C0C0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F31C0C4:
    ctx->pc = 0x7F31C0C4u;
    // 7F31C0C4: addi    r3, r27, 64
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(64);

label_7F31C0C8:
    ctx->pc = 0x7F31C0C8u;
    // 7F31C0C8: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F31C0CC:
    ctx->pc = 0x7F31C0CCu;
    // 7F31C0CC: bl      0x7F312888
    {
            ctx->lr = 0x7F31C0D0u;
            ctx->pc = 0x7F312888u;
            return;
    }

label_7F31C0D0:
    ctx->pc = 0x7F31C0D0u;
    ctx->downcount -= 7;
    // 7F31C0D0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F31C0D4:
    ctx->pc = 0x7F31C0D4u;
    // 7F31C0D4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F31C0D8:
    ctx->pc = 0x7F31C0D8u;
    // 7F31C0D8: addi    r30, r4, -25112
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-25112);

label_7F31C0DC:
    ctx->pc = 0x7F31C0DCu;
    // 7F31C0DC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F31C0E0:
    ctx->pc = 0x7F31C0E0u;
    // 7F31C0E0: addi    r31, r3, -25108
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-25108);

label_7F31C0E4:
    ctx->pc = 0x7F31C0E4u;
    // 7F31C0E4: stb     r28, 64(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(64);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_7F31C0E8:
    ctx->pc = 0x7F31C0E8u;
    // 7F31C0E8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

    ctx->pc = 0x7F31C0ECu;
    return;
return_dispatch_7F3180EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F318104u: goto label_7F318104;
    case 0x7F318130u: goto label_7F318130;
    case 0x7F318154u: goto label_7F318154;
    case 0x7F31815Cu: goto label_7F31815C;
    case 0x7F318184u: goto label_7F318184;
    case 0x7F318190u: goto label_7F318190;
    case 0x7F3181A0u: goto label_7F3181A0;
    case 0x7F3181ACu: goto label_7F3181AC;
    case 0x7F3181D8u: goto label_7F3181D8;
    case 0x7F31820Cu: goto label_7F31820C;
    case 0x7F318250u: goto label_7F318250;
    case 0x7F3182CCu: goto label_7F3182CC;
    case 0x7F3182E4u: goto label_7F3182E4;
    case 0x7F318324u: goto label_7F318324;
    case 0x7F318380u: goto label_7F318380;
    case 0x7F318394u: goto label_7F318394;
    case 0x7F3183E0u: goto label_7F3183E0;
    case 0x7F318408u: goto label_7F318408;
    case 0x7F318420u: goto label_7F318420;
    case 0x7F318444u: goto label_7F318444;
    case 0x7F31844Cu: goto label_7F31844C;
    case 0x7F318468u: goto label_7F318468;
    case 0x7F318478u: goto label_7F318478;
    case 0x7F318490u: goto label_7F318490;
    case 0x7F3184ACu: goto label_7F3184AC;
    case 0x7F3184D0u: goto label_7F3184D0;
    case 0x7F3184F0u: goto label_7F3184F0;
    case 0x7F31859Cu: goto label_7F31859C;
    case 0x7F3185C4u: goto label_7F3185C4;
    case 0x7F3185CCu: goto label_7F3185CC;
    case 0x7F3185E4u: goto label_7F3185E4;
    case 0x7F318608u: goto label_7F318608;
    case 0x7F31862Cu: goto label_7F31862C;
    case 0x7F31864Cu: goto label_7F31864C;
    case 0x7F3186A0u: goto label_7F3186A0;
    case 0x7F3186C8u: goto label_7F3186C8;
    case 0x7F318734u: goto label_7F318734;
    case 0x7F31874Cu: goto label_7F31874C;
    case 0x7F318790u: goto label_7F318790;
    case 0x7F3187ACu: goto label_7F3187AC;
    case 0x7F3187B4u: goto label_7F3187B4;
    case 0x7F3187ECu: goto label_7F3187EC;
    case 0x7F318830u: goto label_7F318830;
    case 0x7F318858u: goto label_7F318858;
    case 0x7F318874u: goto label_7F318874;
    case 0x7F3188A4u: goto label_7F3188A4;
    case 0x7F3188C0u: goto label_7F3188C0;
    case 0x7F3188E4u: goto label_7F3188E4;
    case 0x7F318920u: goto label_7F318920;
    case 0x7F318948u: goto label_7F318948;
    case 0x7F31895Cu: goto label_7F31895C;
    case 0x7F31898Cu: goto label_7F31898C;
    case 0x7F318A00u: goto label_7F318A00;
    case 0x7F318A28u: goto label_7F318A28;
    case 0x7F318A30u: goto label_7F318A30;
    case 0x7F318A48u: goto label_7F318A48;
    case 0x7F318A68u: goto label_7F318A68;
    case 0x7F318A7Cu: goto label_7F318A7C;
    case 0x7F318AA0u: goto label_7F318AA0;
    case 0x7F318AA8u: goto label_7F318AA8;
    case 0x7F318ACCu: goto label_7F318ACC;
    case 0x7F318AE8u: goto label_7F318AE8;
    case 0x7F318B1Cu: goto label_7F318B1C;
    case 0x7F318B40u: goto label_7F318B40;
    case 0x7F318B48u: goto label_7F318B48;
    case 0x7F318B50u: goto label_7F318B50;
    case 0x7F318BF8u: goto label_7F318BF8;
    case 0x7F318C28u: goto label_7F318C28;
    case 0x7F318C50u: goto label_7F318C50;
    case 0x7F318C94u: goto label_7F318C94;
    case 0x7F318C9Cu: goto label_7F318C9C;
    case 0x7F318CA4u: goto label_7F318CA4;
    case 0x7F318CACu: goto label_7F318CAC;
    case 0x7F318CD8u: goto label_7F318CD8;
    case 0x7F318CE4u: goto label_7F318CE4;
    case 0x7F318D0Cu: goto label_7F318D0C;
    case 0x7F318D20u: goto label_7F318D20;
    case 0x7F318D38u: goto label_7F318D38;
    case 0x7F318D9Cu: goto label_7F318D9C;
    case 0x7F318DE8u: goto label_7F318DE8;
    case 0x7F318E14u: goto label_7F318E14;
    case 0x7F318E24u: goto label_7F318E24;
    case 0x7F318E30u: goto label_7F318E30;
    case 0x7F318EB4u: goto label_7F318EB4;
    case 0x7F318F2Cu: goto label_7F318F2C;
    case 0x7F318F40u: goto label_7F318F40;
    case 0x7F318F54u: goto label_7F318F54;
    case 0x7F318F88u: goto label_7F318F88;
    case 0x7F318FD4u: goto label_7F318FD4;
    case 0x7F318FE8u: goto label_7F318FE8;
    case 0x7F318FFCu: goto label_7F318FFC;
    case 0x7F319018u: goto label_7F319018;
    case 0x7F31902Cu: goto label_7F31902C;
    case 0x7F319040u: goto label_7F319040;
    case 0x7F319054u: goto label_7F319054;
    case 0x7F319068u: goto label_7F319068;
    case 0x7F319094u: goto label_7F319094;
    case 0x7F3190B0u: goto label_7F3190B0;
    case 0x7F3190E8u: goto label_7F3190E8;
    case 0x7F3190FCu: goto label_7F3190FC;
    case 0x7F319160u: goto label_7F319160;
    case 0x7F319190u: goto label_7F319190;
    case 0x7F3191F8u: goto label_7F3191F8;
    case 0x7F31921Cu: goto label_7F31921C;
    case 0x7F319274u: goto label_7F319274;
    case 0x7F319280u: goto label_7F319280;
    case 0x7F3192BCu: goto label_7F3192BC;
    case 0x7F3192D4u: goto label_7F3192D4;
    case 0x7F3192ECu: goto label_7F3192EC;
    case 0x7F319304u: goto label_7F319304;
    case 0x7F319378u: goto label_7F319378;
    case 0x7F319388u: goto label_7F319388;
    case 0x7F319398u: goto label_7F319398;
    case 0x7F3193A8u: goto label_7F3193A8;
    case 0x7F3193C0u: goto label_7F3193C0;
    case 0x7F3193D4u: goto label_7F3193D4;
    case 0x7F3193E8u: goto label_7F3193E8;
    case 0x7F3193FCu: goto label_7F3193FC;
    case 0x7F319440u: goto label_7F319440;
    case 0x7F319450u: goto label_7F319450;
    case 0x7F319494u: goto label_7F319494;
    case 0x7F3194D0u: goto label_7F3194D0;
    case 0x7F3194E4u: goto label_7F3194E4;
    case 0x7F319504u: goto label_7F319504;
    case 0x7F319514u: goto label_7F319514;
    case 0x7F319524u: goto label_7F319524;
    case 0x7F319538u: goto label_7F319538;
    case 0x7F319568u: goto label_7F319568;
    case 0x7F31957Cu: goto label_7F31957C;
    case 0x7F319590u: goto label_7F319590;
    case 0x7F3195D4u: goto label_7F3195D4;
    case 0x7F3195DCu: goto label_7F3195DC;
    case 0x7F3195F0u: goto label_7F3195F0;
    case 0x7F3195F8u: goto label_7F3195F8;
    case 0x7F319608u: goto label_7F319608;
    case 0x7F319630u: goto label_7F319630;
    case 0x7F319674u: goto label_7F319674;
    case 0x7F319690u: goto label_7F319690;
    case 0x7F3196C4u: goto label_7F3196C4;
    case 0x7F3196D8u: goto label_7F3196D8;
    case 0x7F3196E8u: goto label_7F3196E8;
    case 0x7F3196F8u: goto label_7F3196F8;
    case 0x7F319700u: goto label_7F319700;
    case 0x7F319734u: goto label_7F319734;
    case 0x7F319748u: goto label_7F319748;
    case 0x7F319758u: goto label_7F319758;
    case 0x7F319764u: goto label_7F319764;
    case 0x7F319770u: goto label_7F319770;
    case 0x7F319780u: goto label_7F319780;
    case 0x7F319798u: goto label_7F319798;
    case 0x7F3197D8u: goto label_7F3197D8;
    case 0x7F3197E8u: goto label_7F3197E8;
    case 0x7F319834u: goto label_7F319834;
    case 0x7F319850u: goto label_7F319850;
    case 0x7F319884u: goto label_7F319884;
    case 0x7F319898u: goto label_7F319898;
    case 0x7F3198A8u: goto label_7F3198A8;
    case 0x7F3198B8u: goto label_7F3198B8;
    case 0x7F3198C0u: goto label_7F3198C0;
    case 0x7F319924u: goto label_7F319924;
    case 0x7F31A6A4u: goto label_7F31A6A4;
    case 0x7F31A6E8u: goto label_7F31A6E8;
    case 0x7F31A768u: goto label_7F31A768;
    case 0x7F31A7B8u: goto label_7F31A7B8;
    case 0x7F31A7E8u: goto label_7F31A7E8;
    case 0x7F31A808u: goto label_7F31A808;
    case 0x7F31A820u: goto label_7F31A820;
    case 0x7F31A89Cu: goto label_7F31A89C;
    case 0x7F31A8C4u: goto label_7F31A8C4;
    case 0x7F31A964u: goto label_7F31A964;
    case 0x7F31A984u: goto label_7F31A984;
    case 0x7F31A99Cu: goto label_7F31A99C;
    case 0x7F31AB30u: goto label_7F31AB30;
    case 0x7F31AC9Cu: goto label_7F31AC9C;
    case 0x7F31AD3Cu: goto label_7F31AD3C;
    case 0x7F31AD5Cu: goto label_7F31AD5C;
    case 0x7F31AD74u: goto label_7F31AD74;
    case 0x7F31AFC4u: goto label_7F31AFC4;
    case 0x7F31B250u: goto label_7F31B250;
    case 0x7F31B2F4u: goto label_7F31B2F4;
    case 0x7F31B2FCu: goto label_7F31B2FC;
    case 0x7F31B328u: goto label_7F31B328;
    case 0x7F31B330u: goto label_7F31B330;
    case 0x7F31B334u: goto label_7F31B334;
    case 0x7F31B354u: goto label_7F31B354;
    case 0x7F31B360u: goto label_7F31B360;
    case 0x7F31B724u: goto label_7F31B724;
    case 0x7F31B738u: goto label_7F31B738;
    case 0x7F31B754u: goto label_7F31B754;
    case 0x7F31B788u: goto label_7F31B788;
    case 0x7F31B7A0u: goto label_7F31B7A0;
    case 0x7F31B7E4u: goto label_7F31B7E4;
    case 0x7F31B7F8u: goto label_7F31B7F8;
    case 0x7F31B810u: goto label_7F31B810;
    case 0x7F31B83Cu: goto label_7F31B83C;
    case 0x7F31B86Cu: goto label_7F31B86C;
    case 0x7F31B8DCu: goto label_7F31B8DC;
    case 0x7F31B904u: goto label_7F31B904;
    case 0x7F31B938u: goto label_7F31B938;
    case 0x7F31B940u: goto label_7F31B940;
    case 0x7F31B950u: goto label_7F31B950;
    case 0x7F31B960u: goto label_7F31B960;
    case 0x7F31B968u: goto label_7F31B968;
    case 0x7F31B970u: goto label_7F31B970;
    case 0x7F31B978u: goto label_7F31B978;
    case 0x7F31B9B8u: goto label_7F31B9B8;
    case 0x7F31B9C4u: goto label_7F31B9C4;
    case 0x7F31B9D0u: goto label_7F31B9D0;
    case 0x7F31B9DCu: goto label_7F31B9DC;
    case 0x7F31B9E4u: goto label_7F31B9E4;
    case 0x7F31B9ECu: goto label_7F31B9EC;
    case 0x7F31BA18u: goto label_7F31BA18;
    case 0x7F31BA34u: goto label_7F31BA34;
    case 0x7F31BAE8u: goto label_7F31BAE8;
    case 0x7F31BAFCu: goto label_7F31BAFC;
    case 0x7F31BB10u: goto label_7F31BB10;
    case 0x7F31BBA8u: goto label_7F31BBA8;
    case 0x7F31BBC0u: goto label_7F31BBC0;
    case 0x7F31BBF4u: goto label_7F31BBF4;
    case 0x7F31BC58u: goto label_7F31BC58;
    case 0x7F31BC68u: goto label_7F31BC68;
    case 0x7F31BCA0u: goto label_7F31BCA0;
    case 0x7F31BCB8u: goto label_7F31BCB8;
    case 0x7F31BCE0u: goto label_7F31BCE0;
    case 0x7F31BCF8u: goto label_7F31BCF8;
    case 0x7F31BD24u: goto label_7F31BD24;
    case 0x7F31BD3Cu: goto label_7F31BD3C;
    case 0x7F31BD68u: goto label_7F31BD68;
    case 0x7F31BD90u: goto label_7F31BD90;
    case 0x7F31BDB0u: goto label_7F31BDB0;
    case 0x7F31BDC8u: goto label_7F31BDC8;
    case 0x7F31BDD0u: goto label_7F31BDD0;
    case 0x7F31BDD4u: goto label_7F31BDD4;
    case 0x7F31BDDCu: goto label_7F31BDDC;
    case 0x7F31BDF0u: goto label_7F31BDF0;
    case 0x7F31BDFCu: goto label_7F31BDFC;
    case 0x7F31BE10u: goto label_7F31BE10;
    case 0x7F31BE1Cu: goto label_7F31BE1C;
    case 0x7F31BE34u: goto label_7F31BE34;
    case 0x7F31BE9Cu: goto label_7F31BE9C;
    case 0x7F31BEB8u: goto label_7F31BEB8;
    case 0x7F31BF0Cu: goto label_7F31BF0C;
    case 0x7F31BF20u: goto label_7F31BF20;
    case 0x7F31BF38u: goto label_7F31BF38;
    case 0x7F31BF6Cu: goto label_7F31BF6C;
    case 0x7F31BF74u: goto label_7F31BF74;
    case 0x7F31BFA4u: goto label_7F31BFA4;
    case 0x7F31BFCCu: goto label_7F31BFCC;
    case 0x7F31C04Cu: goto label_7F31C04C;
    case 0x7F31C060u: goto label_7F31C060;
    case 0x7F31C0C0u: goto label_7F31C0C0;
    case 0x7F31C0D0u: goto label_7F31C0D0;
    default: return;
    }
}

