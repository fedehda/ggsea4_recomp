// DolRecomp output
#include "../generated.h"

static void loop_7F0A9264(CPUState* ctx) {
label_7F0A9264:
    ctx->downcount -= 5;
    ctx->pc = 0x7F0A9264u;
    // 7F0A9264: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F0A9268u;
    // 7F0A9268: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F0A926Cu;
    // 7F0A926C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F0A9270u;
    // 7F0A9270: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F0A9274: bc    16, 0, 0x7F0A9264
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9264u;
                return;
            }
            goto label_7F0A9264;
        }
    }

    ctx->pc = 0x7F0A9278u;
}

void func_7F0A80EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F0A80ECu: goto label_7F0A80EC;
    case 0x7F0A80F0u: goto label_7F0A80F0;
    case 0x7F0A80F4u: goto label_7F0A80F4;
    case 0x7F0A80F8u: goto label_7F0A80F8;
    case 0x7F0A80FCu: goto label_7F0A80FC;
    case 0x7F0A8100u: goto label_7F0A8100;
    case 0x7F0A8104u: goto label_7F0A8104;
    case 0x7F0A8108u: goto label_7F0A8108;
    case 0x7F0A810Cu: goto label_7F0A810C;
    case 0x7F0A8110u: goto label_7F0A8110;
    case 0x7F0A8114u: goto label_7F0A8114;
    case 0x7F0A8118u: goto label_7F0A8118;
    case 0x7F0A811Cu: goto label_7F0A811C;
    case 0x7F0A8120u: goto label_7F0A8120;
    case 0x7F0A8124u: goto label_7F0A8124;
    case 0x7F0A8128u: goto label_7F0A8128;
    case 0x7F0A812Cu: goto label_7F0A812C;
    case 0x7F0A8130u: goto label_7F0A8130;
    case 0x7F0A8134u: goto label_7F0A8134;
    case 0x7F0A8138u: goto label_7F0A8138;
    case 0x7F0A813Cu: goto label_7F0A813C;
    case 0x7F0A8140u: goto label_7F0A8140;
    case 0x7F0A8144u: goto label_7F0A8144;
    case 0x7F0A8148u: goto label_7F0A8148;
    case 0x7F0A814Cu: goto label_7F0A814C;
    case 0x7F0A8150u: goto label_7F0A8150;
    case 0x7F0A8154u: goto label_7F0A8154;
    case 0x7F0A8158u: goto label_7F0A8158;
    case 0x7F0A815Cu: goto label_7F0A815C;
    case 0x7F0A8160u: goto label_7F0A8160;
    case 0x7F0A8164u: goto label_7F0A8164;
    case 0x7F0A8168u: goto label_7F0A8168;
    case 0x7F0A816Cu: goto label_7F0A816C;
    case 0x7F0A8170u: goto label_7F0A8170;
    case 0x7F0A8174u: goto label_7F0A8174;
    case 0x7F0A8178u: goto label_7F0A8178;
    case 0x7F0A817Cu: goto label_7F0A817C;
    case 0x7F0A8180u: goto label_7F0A8180;
    case 0x7F0A8184u: goto label_7F0A8184;
    case 0x7F0A8188u: goto label_7F0A8188;
    case 0x7F0A818Cu: goto label_7F0A818C;
    case 0x7F0A8190u: goto label_7F0A8190;
    case 0x7F0A8194u: goto label_7F0A8194;
    case 0x7F0A8198u: goto label_7F0A8198;
    case 0x7F0A819Cu: goto label_7F0A819C;
    case 0x7F0A81A0u: goto label_7F0A81A0;
    case 0x7F0A81A4u: goto label_7F0A81A4;
    case 0x7F0A81A8u: goto label_7F0A81A8;
    case 0x7F0A81ACu: goto label_7F0A81AC;
    case 0x7F0A81B0u: goto label_7F0A81B0;
    case 0x7F0A81B4u: goto label_7F0A81B4;
    case 0x7F0A81B8u: goto label_7F0A81B8;
    case 0x7F0A81BCu: goto label_7F0A81BC;
    case 0x7F0A81C0u: goto label_7F0A81C0;
    case 0x7F0A81C4u: goto label_7F0A81C4;
    case 0x7F0A81C8u: goto label_7F0A81C8;
    case 0x7F0A81CCu: goto label_7F0A81CC;
    case 0x7F0A81D0u: goto label_7F0A81D0;
    case 0x7F0A81D4u: goto label_7F0A81D4;
    case 0x7F0A81D8u: goto label_7F0A81D8;
    case 0x7F0A81DCu: goto label_7F0A81DC;
    case 0x7F0A81E0u: goto label_7F0A81E0;
    case 0x7F0A81E4u: goto label_7F0A81E4;
    case 0x7F0A81E8u: goto label_7F0A81E8;
    case 0x7F0A81ECu: goto label_7F0A81EC;
    case 0x7F0A81F0u: goto label_7F0A81F0;
    case 0x7F0A81F4u: goto label_7F0A81F4;
    case 0x7F0A81F8u: goto label_7F0A81F8;
    case 0x7F0A81FCu: goto label_7F0A81FC;
    case 0x7F0A8200u: goto label_7F0A8200;
    case 0x7F0A8204u: goto label_7F0A8204;
    case 0x7F0A8208u: goto label_7F0A8208;
    case 0x7F0A820Cu: goto label_7F0A820C;
    case 0x7F0A8210u: goto label_7F0A8210;
    case 0x7F0A8214u: goto label_7F0A8214;
    case 0x7F0A8218u: goto label_7F0A8218;
    case 0x7F0A821Cu: goto label_7F0A821C;
    case 0x7F0A8220u: goto label_7F0A8220;
    case 0x7F0A8224u: goto label_7F0A8224;
    case 0x7F0A8228u: goto label_7F0A8228;
    case 0x7F0A822Cu: goto label_7F0A822C;
    case 0x7F0A8230u: goto label_7F0A8230;
    case 0x7F0A8234u: goto label_7F0A8234;
    case 0x7F0A8238u: goto label_7F0A8238;
    case 0x7F0A823Cu: goto label_7F0A823C;
    case 0x7F0A8240u: goto label_7F0A8240;
    case 0x7F0A8244u: goto label_7F0A8244;
    case 0x7F0A8248u: goto label_7F0A8248;
    case 0x7F0A824Cu: goto label_7F0A824C;
    case 0x7F0A8250u: goto label_7F0A8250;
    case 0x7F0A8254u: goto label_7F0A8254;
    case 0x7F0A8258u: goto label_7F0A8258;
    case 0x7F0A825Cu: goto label_7F0A825C;
    case 0x7F0A8260u: goto label_7F0A8260;
    case 0x7F0A8264u: goto label_7F0A8264;
    case 0x7F0A8268u: goto label_7F0A8268;
    case 0x7F0A826Cu: goto label_7F0A826C;
    case 0x7F0A8270u: goto label_7F0A8270;
    case 0x7F0A8274u: goto label_7F0A8274;
    case 0x7F0A8278u: goto label_7F0A8278;
    case 0x7F0A827Cu: goto label_7F0A827C;
    case 0x7F0A8280u: goto label_7F0A8280;
    case 0x7F0A8284u: goto label_7F0A8284;
    case 0x7F0A8288u: goto label_7F0A8288;
    case 0x7F0A828Cu: goto label_7F0A828C;
    case 0x7F0A8290u: goto label_7F0A8290;
    case 0x7F0A8294u: goto label_7F0A8294;
    case 0x7F0A8298u: goto label_7F0A8298;
    case 0x7F0A829Cu: goto label_7F0A829C;
    case 0x7F0A82A0u: goto label_7F0A82A0;
    case 0x7F0A82A4u: goto label_7F0A82A4;
    case 0x7F0A82A8u: goto label_7F0A82A8;
    case 0x7F0A82ACu: goto label_7F0A82AC;
    case 0x7F0A82B0u: goto label_7F0A82B0;
    case 0x7F0A82B4u: goto label_7F0A82B4;
    case 0x7F0A82B8u: goto label_7F0A82B8;
    case 0x7F0A82BCu: goto label_7F0A82BC;
    case 0x7F0A82C0u: goto label_7F0A82C0;
    case 0x7F0A82C4u: goto label_7F0A82C4;
    case 0x7F0A82C8u: goto label_7F0A82C8;
    case 0x7F0A82CCu: goto label_7F0A82CC;
    case 0x7F0A82D0u: goto label_7F0A82D0;
    case 0x7F0A82D4u: goto label_7F0A82D4;
    case 0x7F0A82D8u: goto label_7F0A82D8;
    case 0x7F0A82DCu: goto label_7F0A82DC;
    case 0x7F0A82E0u: goto label_7F0A82E0;
    case 0x7F0A82E4u: goto label_7F0A82E4;
    case 0x7F0A82E8u: goto label_7F0A82E8;
    case 0x7F0A82ECu: goto label_7F0A82EC;
    case 0x7F0A82F0u: goto label_7F0A82F0;
    case 0x7F0A82F4u: goto label_7F0A82F4;
    case 0x7F0A82F8u: goto label_7F0A82F8;
    case 0x7F0A82FCu: goto label_7F0A82FC;
    case 0x7F0A8300u: goto label_7F0A8300;
    case 0x7F0A8304u: goto label_7F0A8304;
    case 0x7F0A8308u: goto label_7F0A8308;
    case 0x7F0A830Cu: goto label_7F0A830C;
    case 0x7F0A8310u: goto label_7F0A8310;
    case 0x7F0A8314u: goto label_7F0A8314;
    case 0x7F0A8318u: goto label_7F0A8318;
    case 0x7F0A831Cu: goto label_7F0A831C;
    case 0x7F0A8320u: goto label_7F0A8320;
    case 0x7F0A8324u: goto label_7F0A8324;
    case 0x7F0A8328u: goto label_7F0A8328;
    case 0x7F0A832Cu: goto label_7F0A832C;
    case 0x7F0A8330u: goto label_7F0A8330;
    case 0x7F0A8334u: goto label_7F0A8334;
    case 0x7F0A8338u: goto label_7F0A8338;
    case 0x7F0A833Cu: goto label_7F0A833C;
    case 0x7F0A8340u: goto label_7F0A8340;
    case 0x7F0A8344u: goto label_7F0A8344;
    case 0x7F0A8348u: goto label_7F0A8348;
    case 0x7F0A834Cu: goto label_7F0A834C;
    case 0x7F0A8350u: goto label_7F0A8350;
    case 0x7F0A8354u: goto label_7F0A8354;
    case 0x7F0A8358u: goto label_7F0A8358;
    case 0x7F0A835Cu: goto label_7F0A835C;
    case 0x7F0A8360u: goto label_7F0A8360;
    case 0x7F0A8364u: goto label_7F0A8364;
    case 0x7F0A8368u: goto label_7F0A8368;
    case 0x7F0A836Cu: goto label_7F0A836C;
    case 0x7F0A8370u: goto label_7F0A8370;
    case 0x7F0A8374u: goto label_7F0A8374;
    case 0x7F0A8378u: goto label_7F0A8378;
    case 0x7F0A837Cu: goto label_7F0A837C;
    case 0x7F0A8380u: goto label_7F0A8380;
    case 0x7F0A8384u: goto label_7F0A8384;
    case 0x7F0A8388u: goto label_7F0A8388;
    case 0x7F0A838Cu: goto label_7F0A838C;
    case 0x7F0A8390u: goto label_7F0A8390;
    case 0x7F0A8394u: goto label_7F0A8394;
    case 0x7F0A8398u: goto label_7F0A8398;
    case 0x7F0A839Cu: goto label_7F0A839C;
    case 0x7F0A83A0u: goto label_7F0A83A0;
    case 0x7F0A83A4u: goto label_7F0A83A4;
    case 0x7F0A83A8u: goto label_7F0A83A8;
    case 0x7F0A83ACu: goto label_7F0A83AC;
    case 0x7F0A83B0u: goto label_7F0A83B0;
    case 0x7F0A83B4u: goto label_7F0A83B4;
    case 0x7F0A83B8u: goto label_7F0A83B8;
    case 0x7F0A83BCu: goto label_7F0A83BC;
    case 0x7F0A83C0u: goto label_7F0A83C0;
    case 0x7F0A83C4u: goto label_7F0A83C4;
    case 0x7F0A83C8u: goto label_7F0A83C8;
    case 0x7F0A83CCu: goto label_7F0A83CC;
    case 0x7F0A83D0u: goto label_7F0A83D0;
    case 0x7F0A83D4u: goto label_7F0A83D4;
    case 0x7F0A83D8u: goto label_7F0A83D8;
    case 0x7F0A83DCu: goto label_7F0A83DC;
    case 0x7F0A83E0u: goto label_7F0A83E0;
    case 0x7F0A83E4u: goto label_7F0A83E4;
    case 0x7F0A83E8u: goto label_7F0A83E8;
    case 0x7F0A83ECu: goto label_7F0A83EC;
    case 0x7F0A83F0u: goto label_7F0A83F0;
    case 0x7F0A83F4u: goto label_7F0A83F4;
    case 0x7F0A83F8u: goto label_7F0A83F8;
    case 0x7F0A83FCu: goto label_7F0A83FC;
    case 0x7F0A8400u: goto label_7F0A8400;
    case 0x7F0A8404u: goto label_7F0A8404;
    case 0x7F0A8408u: goto label_7F0A8408;
    case 0x7F0A840Cu: goto label_7F0A840C;
    case 0x7F0A8410u: goto label_7F0A8410;
    case 0x7F0A8414u: goto label_7F0A8414;
    case 0x7F0A8418u: goto label_7F0A8418;
    case 0x7F0A841Cu: goto label_7F0A841C;
    case 0x7F0A8420u: goto label_7F0A8420;
    case 0x7F0A8424u: goto label_7F0A8424;
    case 0x7F0A8428u: goto label_7F0A8428;
    case 0x7F0A842Cu: goto label_7F0A842C;
    case 0x7F0A8430u: goto label_7F0A8430;
    case 0x7F0A8434u: goto label_7F0A8434;
    case 0x7F0A8438u: goto label_7F0A8438;
    case 0x7F0A843Cu: goto label_7F0A843C;
    case 0x7F0A8440u: goto label_7F0A8440;
    case 0x7F0A8444u: goto label_7F0A8444;
    case 0x7F0A8448u: goto label_7F0A8448;
    case 0x7F0A844Cu: goto label_7F0A844C;
    case 0x7F0A8450u: goto label_7F0A8450;
    case 0x7F0A8454u: goto label_7F0A8454;
    case 0x7F0A8458u: goto label_7F0A8458;
    case 0x7F0A845Cu: goto label_7F0A845C;
    case 0x7F0A8460u: goto label_7F0A8460;
    case 0x7F0A8464u: goto label_7F0A8464;
    case 0x7F0A8468u: goto label_7F0A8468;
    case 0x7F0A846Cu: goto label_7F0A846C;
    case 0x7F0A8470u: goto label_7F0A8470;
    case 0x7F0A8474u: goto label_7F0A8474;
    case 0x7F0A8478u: goto label_7F0A8478;
    case 0x7F0A847Cu: goto label_7F0A847C;
    case 0x7F0A8480u: goto label_7F0A8480;
    case 0x7F0A8484u: goto label_7F0A8484;
    case 0x7F0A8488u: goto label_7F0A8488;
    case 0x7F0A848Cu: goto label_7F0A848C;
    case 0x7F0A8490u: goto label_7F0A8490;
    case 0x7F0A8494u: goto label_7F0A8494;
    case 0x7F0A8498u: goto label_7F0A8498;
    case 0x7F0A849Cu: goto label_7F0A849C;
    case 0x7F0A84A0u: goto label_7F0A84A0;
    case 0x7F0A84A4u: goto label_7F0A84A4;
    case 0x7F0A84A8u: goto label_7F0A84A8;
    case 0x7F0A84ACu: goto label_7F0A84AC;
    case 0x7F0A84B0u: goto label_7F0A84B0;
    case 0x7F0A84B4u: goto label_7F0A84B4;
    case 0x7F0A84B8u: goto label_7F0A84B8;
    case 0x7F0A84BCu: goto label_7F0A84BC;
    case 0x7F0A84C0u: goto label_7F0A84C0;
    case 0x7F0A84C4u: goto label_7F0A84C4;
    case 0x7F0A84C8u: goto label_7F0A84C8;
    case 0x7F0A84CCu: goto label_7F0A84CC;
    case 0x7F0A84D0u: goto label_7F0A84D0;
    case 0x7F0A84D4u: goto label_7F0A84D4;
    case 0x7F0A84D8u: goto label_7F0A84D8;
    case 0x7F0A84DCu: goto label_7F0A84DC;
    case 0x7F0A84E0u: goto label_7F0A84E0;
    case 0x7F0A84E4u: goto label_7F0A84E4;
    case 0x7F0A84E8u: goto label_7F0A84E8;
    case 0x7F0A84ECu: goto label_7F0A84EC;
    case 0x7F0A84F0u: goto label_7F0A84F0;
    case 0x7F0A84F4u: goto label_7F0A84F4;
    case 0x7F0A84F8u: goto label_7F0A84F8;
    case 0x7F0A84FCu: goto label_7F0A84FC;
    case 0x7F0A8500u: goto label_7F0A8500;
    case 0x7F0A8504u: goto label_7F0A8504;
    case 0x7F0A8508u: goto label_7F0A8508;
    case 0x7F0A850Cu: goto label_7F0A850C;
    case 0x7F0A8510u: goto label_7F0A8510;
    case 0x7F0A8514u: goto label_7F0A8514;
    case 0x7F0A8518u: goto label_7F0A8518;
    case 0x7F0A851Cu: goto label_7F0A851C;
    case 0x7F0A8520u: goto label_7F0A8520;
    case 0x7F0A8524u: goto label_7F0A8524;
    case 0x7F0A8528u: goto label_7F0A8528;
    case 0x7F0A852Cu: goto label_7F0A852C;
    case 0x7F0A8530u: goto label_7F0A8530;
    case 0x7F0A8534u: goto label_7F0A8534;
    case 0x7F0A8538u: goto label_7F0A8538;
    case 0x7F0A853Cu: goto label_7F0A853C;
    case 0x7F0A8540u: goto label_7F0A8540;
    case 0x7F0A8544u: goto label_7F0A8544;
    case 0x7F0A8548u: goto label_7F0A8548;
    case 0x7F0A854Cu: goto label_7F0A854C;
    case 0x7F0A8550u: goto label_7F0A8550;
    case 0x7F0A8554u: goto label_7F0A8554;
    case 0x7F0A8558u: goto label_7F0A8558;
    case 0x7F0A855Cu: goto label_7F0A855C;
    case 0x7F0A8560u: goto label_7F0A8560;
    case 0x7F0A8564u: goto label_7F0A8564;
    case 0x7F0A8568u: goto label_7F0A8568;
    case 0x7F0A856Cu: goto label_7F0A856C;
    case 0x7F0A8570u: goto label_7F0A8570;
    case 0x7F0A8574u: goto label_7F0A8574;
    case 0x7F0A8578u: goto label_7F0A8578;
    case 0x7F0A857Cu: goto label_7F0A857C;
    case 0x7F0A8580u: goto label_7F0A8580;
    case 0x7F0A8584u: goto label_7F0A8584;
    case 0x7F0A8588u: goto label_7F0A8588;
    case 0x7F0A858Cu: goto label_7F0A858C;
    case 0x7F0A8590u: goto label_7F0A8590;
    case 0x7F0A8594u: goto label_7F0A8594;
    case 0x7F0A8598u: goto label_7F0A8598;
    case 0x7F0A859Cu: goto label_7F0A859C;
    case 0x7F0A85A0u: goto label_7F0A85A0;
    case 0x7F0A85A4u: goto label_7F0A85A4;
    case 0x7F0A85A8u: goto label_7F0A85A8;
    case 0x7F0A85ACu: goto label_7F0A85AC;
    case 0x7F0A85B0u: goto label_7F0A85B0;
    case 0x7F0A85B4u: goto label_7F0A85B4;
    case 0x7F0A85B8u: goto label_7F0A85B8;
    case 0x7F0A85BCu: goto label_7F0A85BC;
    case 0x7F0A85C0u: goto label_7F0A85C0;
    case 0x7F0A85C4u: goto label_7F0A85C4;
    case 0x7F0A85C8u: goto label_7F0A85C8;
    case 0x7F0A85CCu: goto label_7F0A85CC;
    case 0x7F0A85D0u: goto label_7F0A85D0;
    case 0x7F0A85D4u: goto label_7F0A85D4;
    case 0x7F0A85D8u: goto label_7F0A85D8;
    case 0x7F0A85DCu: goto label_7F0A85DC;
    case 0x7F0A85E0u: goto label_7F0A85E0;
    case 0x7F0A85E4u: goto label_7F0A85E4;
    case 0x7F0A85E8u: goto label_7F0A85E8;
    case 0x7F0A85ECu: goto label_7F0A85EC;
    case 0x7F0A85F0u: goto label_7F0A85F0;
    case 0x7F0A85F4u: goto label_7F0A85F4;
    case 0x7F0A85F8u: goto label_7F0A85F8;
    case 0x7F0A85FCu: goto label_7F0A85FC;
    case 0x7F0A8600u: goto label_7F0A8600;
    case 0x7F0A8604u: goto label_7F0A8604;
    case 0x7F0A8608u: goto label_7F0A8608;
    case 0x7F0A860Cu: goto label_7F0A860C;
    case 0x7F0A8610u: goto label_7F0A8610;
    case 0x7F0A8614u: goto label_7F0A8614;
    case 0x7F0A8618u: goto label_7F0A8618;
    case 0x7F0A861Cu: goto label_7F0A861C;
    case 0x7F0A8620u: goto label_7F0A8620;
    case 0x7F0A8624u: goto label_7F0A8624;
    case 0x7F0A8628u: goto label_7F0A8628;
    case 0x7F0A862Cu: goto label_7F0A862C;
    case 0x7F0A8630u: goto label_7F0A8630;
    case 0x7F0A8634u: goto label_7F0A8634;
    case 0x7F0A8638u: goto label_7F0A8638;
    case 0x7F0A863Cu: goto label_7F0A863C;
    case 0x7F0A8640u: goto label_7F0A8640;
    case 0x7F0A8644u: goto label_7F0A8644;
    case 0x7F0A8648u: goto label_7F0A8648;
    case 0x7F0A864Cu: goto label_7F0A864C;
    case 0x7F0A8650u: goto label_7F0A8650;
    case 0x7F0A8654u: goto label_7F0A8654;
    case 0x7F0A8658u: goto label_7F0A8658;
    case 0x7F0A865Cu: goto label_7F0A865C;
    case 0x7F0A8660u: goto label_7F0A8660;
    case 0x7F0A8664u: goto label_7F0A8664;
    case 0x7F0A8668u: goto label_7F0A8668;
    case 0x7F0A866Cu: goto label_7F0A866C;
    case 0x7F0A8670u: goto label_7F0A8670;
    case 0x7F0A8674u: goto label_7F0A8674;
    case 0x7F0A8678u: goto label_7F0A8678;
    case 0x7F0A867Cu: goto label_7F0A867C;
    case 0x7F0A8680u: goto label_7F0A8680;
    case 0x7F0A8684u: goto label_7F0A8684;
    case 0x7F0A8688u: goto label_7F0A8688;
    case 0x7F0A868Cu: goto label_7F0A868C;
    case 0x7F0A8690u: goto label_7F0A8690;
    case 0x7F0A8694u: goto label_7F0A8694;
    case 0x7F0A8698u: goto label_7F0A8698;
    case 0x7F0A869Cu: goto label_7F0A869C;
    case 0x7F0A86A0u: goto label_7F0A86A0;
    case 0x7F0A86A4u: goto label_7F0A86A4;
    case 0x7F0A86A8u: goto label_7F0A86A8;
    case 0x7F0A86ACu: goto label_7F0A86AC;
    case 0x7F0A86B0u: goto label_7F0A86B0;
    case 0x7F0A86B4u: goto label_7F0A86B4;
    case 0x7F0A86B8u: goto label_7F0A86B8;
    case 0x7F0A86BCu: goto label_7F0A86BC;
    case 0x7F0A86C0u: goto label_7F0A86C0;
    case 0x7F0A86C4u: goto label_7F0A86C4;
    case 0x7F0A86C8u: goto label_7F0A86C8;
    case 0x7F0A86CCu: goto label_7F0A86CC;
    case 0x7F0A86D0u: goto label_7F0A86D0;
    case 0x7F0A86D4u: goto label_7F0A86D4;
    case 0x7F0A86D8u: goto label_7F0A86D8;
    case 0x7F0A86DCu: goto label_7F0A86DC;
    case 0x7F0A86E0u: goto label_7F0A86E0;
    case 0x7F0A86E4u: goto label_7F0A86E4;
    case 0x7F0A86E8u: goto label_7F0A86E8;
    case 0x7F0A86ECu: goto label_7F0A86EC;
    case 0x7F0A86F0u: goto label_7F0A86F0;
    case 0x7F0A86F4u: goto label_7F0A86F4;
    case 0x7F0A86F8u: goto label_7F0A86F8;
    case 0x7F0A86FCu: goto label_7F0A86FC;
    case 0x7F0A8700u: goto label_7F0A8700;
    case 0x7F0A8704u: goto label_7F0A8704;
    case 0x7F0A8708u: goto label_7F0A8708;
    case 0x7F0A870Cu: goto label_7F0A870C;
    case 0x7F0A8710u: goto label_7F0A8710;
    case 0x7F0A8714u: goto label_7F0A8714;
    case 0x7F0A8718u: goto label_7F0A8718;
    case 0x7F0A871Cu: goto label_7F0A871C;
    case 0x7F0A8720u: goto label_7F0A8720;
    case 0x7F0A8724u: goto label_7F0A8724;
    case 0x7F0A8728u: goto label_7F0A8728;
    case 0x7F0A872Cu: goto label_7F0A872C;
    case 0x7F0A8730u: goto label_7F0A8730;
    case 0x7F0A8734u: goto label_7F0A8734;
    case 0x7F0A8738u: goto label_7F0A8738;
    case 0x7F0A873Cu: goto label_7F0A873C;
    case 0x7F0A8740u: goto label_7F0A8740;
    case 0x7F0A8744u: goto label_7F0A8744;
    case 0x7F0A8748u: goto label_7F0A8748;
    case 0x7F0A874Cu: goto label_7F0A874C;
    case 0x7F0A8750u: goto label_7F0A8750;
    case 0x7F0A8754u: goto label_7F0A8754;
    case 0x7F0A8758u: goto label_7F0A8758;
    case 0x7F0A875Cu: goto label_7F0A875C;
    case 0x7F0A8760u: goto label_7F0A8760;
    case 0x7F0A8764u: goto label_7F0A8764;
    case 0x7F0A8768u: goto label_7F0A8768;
    case 0x7F0A876Cu: goto label_7F0A876C;
    case 0x7F0A8770u: goto label_7F0A8770;
    case 0x7F0A8774u: goto label_7F0A8774;
    case 0x7F0A8778u: goto label_7F0A8778;
    case 0x7F0A877Cu: goto label_7F0A877C;
    case 0x7F0A8780u: goto label_7F0A8780;
    case 0x7F0A8784u: goto label_7F0A8784;
    case 0x7F0A8788u: goto label_7F0A8788;
    case 0x7F0A878Cu: goto label_7F0A878C;
    case 0x7F0A8790u: goto label_7F0A8790;
    case 0x7F0A8794u: goto label_7F0A8794;
    case 0x7F0A8798u: goto label_7F0A8798;
    case 0x7F0A879Cu: goto label_7F0A879C;
    case 0x7F0A87A0u: goto label_7F0A87A0;
    case 0x7F0A87A4u: goto label_7F0A87A4;
    case 0x7F0A87A8u: goto label_7F0A87A8;
    case 0x7F0A87ACu: goto label_7F0A87AC;
    case 0x7F0A87B0u: goto label_7F0A87B0;
    case 0x7F0A87B4u: goto label_7F0A87B4;
    case 0x7F0A87B8u: goto label_7F0A87B8;
    case 0x7F0A87BCu: goto label_7F0A87BC;
    case 0x7F0A87C0u: goto label_7F0A87C0;
    case 0x7F0A87C4u: goto label_7F0A87C4;
    case 0x7F0A87C8u: goto label_7F0A87C8;
    case 0x7F0A87CCu: goto label_7F0A87CC;
    case 0x7F0A87D0u: goto label_7F0A87D0;
    case 0x7F0A87D4u: goto label_7F0A87D4;
    case 0x7F0A87D8u: goto label_7F0A87D8;
    case 0x7F0A87DCu: goto label_7F0A87DC;
    case 0x7F0A87E0u: goto label_7F0A87E0;
    case 0x7F0A87E4u: goto label_7F0A87E4;
    case 0x7F0A87E8u: goto label_7F0A87E8;
    case 0x7F0A87ECu: goto label_7F0A87EC;
    case 0x7F0A87F0u: goto label_7F0A87F0;
    case 0x7F0A87F4u: goto label_7F0A87F4;
    case 0x7F0A87F8u: goto label_7F0A87F8;
    case 0x7F0A87FCu: goto label_7F0A87FC;
    case 0x7F0A8800u: goto label_7F0A8800;
    case 0x7F0A8804u: goto label_7F0A8804;
    case 0x7F0A8808u: goto label_7F0A8808;
    case 0x7F0A880Cu: goto label_7F0A880C;
    case 0x7F0A8810u: goto label_7F0A8810;
    case 0x7F0A8814u: goto label_7F0A8814;
    case 0x7F0A8818u: goto label_7F0A8818;
    case 0x7F0A881Cu: goto label_7F0A881C;
    case 0x7F0A8820u: goto label_7F0A8820;
    case 0x7F0A8824u: goto label_7F0A8824;
    case 0x7F0A8828u: goto label_7F0A8828;
    case 0x7F0A882Cu: goto label_7F0A882C;
    case 0x7F0A8830u: goto label_7F0A8830;
    case 0x7F0A8834u: goto label_7F0A8834;
    case 0x7F0A8838u: goto label_7F0A8838;
    case 0x7F0A883Cu: goto label_7F0A883C;
    case 0x7F0A8840u: goto label_7F0A8840;
    case 0x7F0A8844u: goto label_7F0A8844;
    case 0x7F0A8848u: goto label_7F0A8848;
    case 0x7F0A884Cu: goto label_7F0A884C;
    case 0x7F0A8850u: goto label_7F0A8850;
    case 0x7F0A8854u: goto label_7F0A8854;
    case 0x7F0A8858u: goto label_7F0A8858;
    case 0x7F0A885Cu: goto label_7F0A885C;
    case 0x7F0A8860u: goto label_7F0A8860;
    case 0x7F0A8864u: goto label_7F0A8864;
    case 0x7F0A8868u: goto label_7F0A8868;
    case 0x7F0A886Cu: goto label_7F0A886C;
    case 0x7F0A8870u: goto label_7F0A8870;
    case 0x7F0A8874u: goto label_7F0A8874;
    case 0x7F0A8878u: goto label_7F0A8878;
    case 0x7F0A887Cu: goto label_7F0A887C;
    case 0x7F0A8880u: goto label_7F0A8880;
    case 0x7F0A8884u: goto label_7F0A8884;
    case 0x7F0A8888u: goto label_7F0A8888;
    case 0x7F0A888Cu: goto label_7F0A888C;
    case 0x7F0A8890u: goto label_7F0A8890;
    case 0x7F0A8894u: goto label_7F0A8894;
    case 0x7F0A8898u: goto label_7F0A8898;
    case 0x7F0A889Cu: goto label_7F0A889C;
    case 0x7F0A88A0u: goto label_7F0A88A0;
    case 0x7F0A88A4u: goto label_7F0A88A4;
    case 0x7F0A88A8u: goto label_7F0A88A8;
    case 0x7F0A88ACu: goto label_7F0A88AC;
    case 0x7F0A88B0u: goto label_7F0A88B0;
    case 0x7F0A88B4u: goto label_7F0A88B4;
    case 0x7F0A88B8u: goto label_7F0A88B8;
    case 0x7F0A88BCu: goto label_7F0A88BC;
    case 0x7F0A88C0u: goto label_7F0A88C0;
    case 0x7F0A88C4u: goto label_7F0A88C4;
    case 0x7F0A88C8u: goto label_7F0A88C8;
    case 0x7F0A88CCu: goto label_7F0A88CC;
    case 0x7F0A88D0u: goto label_7F0A88D0;
    case 0x7F0A88D4u: goto label_7F0A88D4;
    case 0x7F0A88D8u: goto label_7F0A88D8;
    case 0x7F0A88DCu: goto label_7F0A88DC;
    case 0x7F0A88E0u: goto label_7F0A88E0;
    case 0x7F0A88E4u: goto label_7F0A88E4;
    case 0x7F0A88E8u: goto label_7F0A88E8;
    case 0x7F0A88ECu: goto label_7F0A88EC;
    case 0x7F0A88F0u: goto label_7F0A88F0;
    case 0x7F0A88F4u: goto label_7F0A88F4;
    case 0x7F0A88F8u: goto label_7F0A88F8;
    case 0x7F0A88FCu: goto label_7F0A88FC;
    case 0x7F0A8900u: goto label_7F0A8900;
    case 0x7F0A8904u: goto label_7F0A8904;
    case 0x7F0A8908u: goto label_7F0A8908;
    case 0x7F0A890Cu: goto label_7F0A890C;
    case 0x7F0A8910u: goto label_7F0A8910;
    case 0x7F0A8914u: goto label_7F0A8914;
    case 0x7F0A8918u: goto label_7F0A8918;
    case 0x7F0A891Cu: goto label_7F0A891C;
    case 0x7F0A8920u: goto label_7F0A8920;
    case 0x7F0A8924u: goto label_7F0A8924;
    case 0x7F0A8928u: goto label_7F0A8928;
    case 0x7F0A892Cu: goto label_7F0A892C;
    case 0x7F0A8930u: goto label_7F0A8930;
    case 0x7F0A8934u: goto label_7F0A8934;
    case 0x7F0A8938u: goto label_7F0A8938;
    case 0x7F0A893Cu: goto label_7F0A893C;
    case 0x7F0A8940u: goto label_7F0A8940;
    case 0x7F0A8944u: goto label_7F0A8944;
    case 0x7F0A8948u: goto label_7F0A8948;
    case 0x7F0A894Cu: goto label_7F0A894C;
    case 0x7F0A8950u: goto label_7F0A8950;
    case 0x7F0A8954u: goto label_7F0A8954;
    case 0x7F0A8958u: goto label_7F0A8958;
    case 0x7F0A895Cu: goto label_7F0A895C;
    case 0x7F0A8960u: goto label_7F0A8960;
    case 0x7F0A8964u: goto label_7F0A8964;
    case 0x7F0A8968u: goto label_7F0A8968;
    case 0x7F0A896Cu: goto label_7F0A896C;
    case 0x7F0A8970u: goto label_7F0A8970;
    case 0x7F0A8974u: goto label_7F0A8974;
    case 0x7F0A8978u: goto label_7F0A8978;
    case 0x7F0A897Cu: goto label_7F0A897C;
    case 0x7F0A8980u: goto label_7F0A8980;
    case 0x7F0A8984u: goto label_7F0A8984;
    case 0x7F0A8988u: goto label_7F0A8988;
    case 0x7F0A898Cu: goto label_7F0A898C;
    case 0x7F0A8990u: goto label_7F0A8990;
    case 0x7F0A8994u: goto label_7F0A8994;
    case 0x7F0A8998u: goto label_7F0A8998;
    case 0x7F0A899Cu: goto label_7F0A899C;
    case 0x7F0A89A0u: goto label_7F0A89A0;
    case 0x7F0A89A4u: goto label_7F0A89A4;
    case 0x7F0A89A8u: goto label_7F0A89A8;
    case 0x7F0A89ACu: goto label_7F0A89AC;
    case 0x7F0A89B0u: goto label_7F0A89B0;
    case 0x7F0A89B4u: goto label_7F0A89B4;
    case 0x7F0A89B8u: goto label_7F0A89B8;
    case 0x7F0A89BCu: goto label_7F0A89BC;
    case 0x7F0A89C0u: goto label_7F0A89C0;
    case 0x7F0A89C4u: goto label_7F0A89C4;
    case 0x7F0A89C8u: goto label_7F0A89C8;
    case 0x7F0A89CCu: goto label_7F0A89CC;
    case 0x7F0A89D0u: goto label_7F0A89D0;
    case 0x7F0A89D4u: goto label_7F0A89D4;
    case 0x7F0A89D8u: goto label_7F0A89D8;
    case 0x7F0A89DCu: goto label_7F0A89DC;
    case 0x7F0A89E0u: goto label_7F0A89E0;
    case 0x7F0A89E4u: goto label_7F0A89E4;
    case 0x7F0A89E8u: goto label_7F0A89E8;
    case 0x7F0A89ECu: goto label_7F0A89EC;
    case 0x7F0A89F0u: goto label_7F0A89F0;
    case 0x7F0A89F4u: goto label_7F0A89F4;
    case 0x7F0A89F8u: goto label_7F0A89F8;
    case 0x7F0A89FCu: goto label_7F0A89FC;
    case 0x7F0A8A00u: goto label_7F0A8A00;
    case 0x7F0A8A04u: goto label_7F0A8A04;
    case 0x7F0A8A08u: goto label_7F0A8A08;
    case 0x7F0A8A0Cu: goto label_7F0A8A0C;
    case 0x7F0A8A10u: goto label_7F0A8A10;
    case 0x7F0A8A14u: goto label_7F0A8A14;
    case 0x7F0A8A18u: goto label_7F0A8A18;
    case 0x7F0A8A1Cu: goto label_7F0A8A1C;
    case 0x7F0A8A20u: goto label_7F0A8A20;
    case 0x7F0A8A24u: goto label_7F0A8A24;
    case 0x7F0A8A28u: goto label_7F0A8A28;
    case 0x7F0A8A2Cu: goto label_7F0A8A2C;
    case 0x7F0A8A30u: goto label_7F0A8A30;
    case 0x7F0A8A34u: goto label_7F0A8A34;
    case 0x7F0A8A38u: goto label_7F0A8A38;
    case 0x7F0A8A3Cu: goto label_7F0A8A3C;
    case 0x7F0A8A40u: goto label_7F0A8A40;
    case 0x7F0A8A44u: goto label_7F0A8A44;
    case 0x7F0A8A48u: goto label_7F0A8A48;
    case 0x7F0A8A4Cu: goto label_7F0A8A4C;
    case 0x7F0A8A50u: goto label_7F0A8A50;
    case 0x7F0A8A54u: goto label_7F0A8A54;
    case 0x7F0A8A58u: goto label_7F0A8A58;
    case 0x7F0A8A5Cu: goto label_7F0A8A5C;
    case 0x7F0A8A60u: goto label_7F0A8A60;
    case 0x7F0A8A64u: goto label_7F0A8A64;
    case 0x7F0A8A68u: goto label_7F0A8A68;
    case 0x7F0A8A6Cu: goto label_7F0A8A6C;
    case 0x7F0A8A70u: goto label_7F0A8A70;
    case 0x7F0A8A74u: goto label_7F0A8A74;
    case 0x7F0A8A78u: goto label_7F0A8A78;
    case 0x7F0A8A7Cu: goto label_7F0A8A7C;
    case 0x7F0A8A80u: goto label_7F0A8A80;
    case 0x7F0A8A84u: goto label_7F0A8A84;
    case 0x7F0A8A88u: goto label_7F0A8A88;
    case 0x7F0A8A8Cu: goto label_7F0A8A8C;
    case 0x7F0A8A90u: goto label_7F0A8A90;
    case 0x7F0A8A94u: goto label_7F0A8A94;
    case 0x7F0A8A98u: goto label_7F0A8A98;
    case 0x7F0A8A9Cu: goto label_7F0A8A9C;
    case 0x7F0A8AA0u: goto label_7F0A8AA0;
    case 0x7F0A8AA4u: goto label_7F0A8AA4;
    case 0x7F0A8AA8u: goto label_7F0A8AA8;
    case 0x7F0A8AACu: goto label_7F0A8AAC;
    case 0x7F0A8AB0u: goto label_7F0A8AB0;
    case 0x7F0A8AB4u: goto label_7F0A8AB4;
    case 0x7F0A8AB8u: goto label_7F0A8AB8;
    case 0x7F0A8ABCu: goto label_7F0A8ABC;
    case 0x7F0A8AC0u: goto label_7F0A8AC0;
    case 0x7F0A8AC4u: goto label_7F0A8AC4;
    case 0x7F0A8AC8u: goto label_7F0A8AC8;
    case 0x7F0A8ACCu: goto label_7F0A8ACC;
    case 0x7F0A8AD0u: goto label_7F0A8AD0;
    case 0x7F0A8AD4u: goto label_7F0A8AD4;
    case 0x7F0A8AD8u: goto label_7F0A8AD8;
    case 0x7F0A8ADCu: goto label_7F0A8ADC;
    case 0x7F0A8AE0u: goto label_7F0A8AE0;
    case 0x7F0A8AE4u: goto label_7F0A8AE4;
    case 0x7F0A8AE8u: goto label_7F0A8AE8;
    case 0x7F0A8AECu: goto label_7F0A8AEC;
    case 0x7F0A8AF0u: goto label_7F0A8AF0;
    case 0x7F0A8AF4u: goto label_7F0A8AF4;
    case 0x7F0A8AF8u: goto label_7F0A8AF8;
    case 0x7F0A8AFCu: goto label_7F0A8AFC;
    case 0x7F0A8B00u: goto label_7F0A8B00;
    case 0x7F0A8B04u: goto label_7F0A8B04;
    case 0x7F0A8B08u: goto label_7F0A8B08;
    case 0x7F0A8B0Cu: goto label_7F0A8B0C;
    case 0x7F0A8B10u: goto label_7F0A8B10;
    case 0x7F0A8B14u: goto label_7F0A8B14;
    case 0x7F0A8B18u: goto label_7F0A8B18;
    case 0x7F0A8B1Cu: goto label_7F0A8B1C;
    case 0x7F0A8B20u: goto label_7F0A8B20;
    case 0x7F0A8B24u: goto label_7F0A8B24;
    case 0x7F0A8B28u: goto label_7F0A8B28;
    case 0x7F0A8B2Cu: goto label_7F0A8B2C;
    case 0x7F0A8B30u: goto label_7F0A8B30;
    case 0x7F0A8B34u: goto label_7F0A8B34;
    case 0x7F0A8B38u: goto label_7F0A8B38;
    case 0x7F0A8B3Cu: goto label_7F0A8B3C;
    case 0x7F0A8B40u: goto label_7F0A8B40;
    case 0x7F0A8B44u: goto label_7F0A8B44;
    case 0x7F0A8B48u: goto label_7F0A8B48;
    case 0x7F0A8B4Cu: goto label_7F0A8B4C;
    case 0x7F0A8B50u: goto label_7F0A8B50;
    case 0x7F0A8B54u: goto label_7F0A8B54;
    case 0x7F0A8B58u: goto label_7F0A8B58;
    case 0x7F0A8B5Cu: goto label_7F0A8B5C;
    case 0x7F0A8B60u: goto label_7F0A8B60;
    case 0x7F0A8B64u: goto label_7F0A8B64;
    case 0x7F0A8B68u: goto label_7F0A8B68;
    case 0x7F0A8B6Cu: goto label_7F0A8B6C;
    case 0x7F0A8B70u: goto label_7F0A8B70;
    case 0x7F0A8B74u: goto label_7F0A8B74;
    case 0x7F0A8B78u: goto label_7F0A8B78;
    case 0x7F0A8B7Cu: goto label_7F0A8B7C;
    case 0x7F0A8B80u: goto label_7F0A8B80;
    case 0x7F0A8B84u: goto label_7F0A8B84;
    case 0x7F0A8B88u: goto label_7F0A8B88;
    case 0x7F0A8B8Cu: goto label_7F0A8B8C;
    case 0x7F0A8B90u: goto label_7F0A8B90;
    case 0x7F0A8B94u: goto label_7F0A8B94;
    case 0x7F0A8B98u: goto label_7F0A8B98;
    case 0x7F0A8B9Cu: goto label_7F0A8B9C;
    case 0x7F0A8BA0u: goto label_7F0A8BA0;
    case 0x7F0A8BA4u: goto label_7F0A8BA4;
    case 0x7F0A8BA8u: goto label_7F0A8BA8;
    case 0x7F0A8BACu: goto label_7F0A8BAC;
    case 0x7F0A8BB0u: goto label_7F0A8BB0;
    case 0x7F0A8BB4u: goto label_7F0A8BB4;
    case 0x7F0A8BB8u: goto label_7F0A8BB8;
    case 0x7F0A8BBCu: goto label_7F0A8BBC;
    case 0x7F0A8BC0u: goto label_7F0A8BC0;
    case 0x7F0A8BC4u: goto label_7F0A8BC4;
    case 0x7F0A8BC8u: goto label_7F0A8BC8;
    case 0x7F0A8BCCu: goto label_7F0A8BCC;
    case 0x7F0A8BD0u: goto label_7F0A8BD0;
    case 0x7F0A8BD4u: goto label_7F0A8BD4;
    case 0x7F0A8BD8u: goto label_7F0A8BD8;
    case 0x7F0A8BDCu: goto label_7F0A8BDC;
    case 0x7F0A8BE0u: goto label_7F0A8BE0;
    case 0x7F0A8BE4u: goto label_7F0A8BE4;
    case 0x7F0A8BE8u: goto label_7F0A8BE8;
    case 0x7F0A8BECu: goto label_7F0A8BEC;
    case 0x7F0A8BF0u: goto label_7F0A8BF0;
    case 0x7F0A8BF4u: goto label_7F0A8BF4;
    case 0x7F0A8BF8u: goto label_7F0A8BF8;
    case 0x7F0A8BFCu: goto label_7F0A8BFC;
    case 0x7F0A8C00u: goto label_7F0A8C00;
    case 0x7F0A8C04u: goto label_7F0A8C04;
    case 0x7F0A8C08u: goto label_7F0A8C08;
    case 0x7F0A8C0Cu: goto label_7F0A8C0C;
    case 0x7F0A8C10u: goto label_7F0A8C10;
    case 0x7F0A8C14u: goto label_7F0A8C14;
    case 0x7F0A8C18u: goto label_7F0A8C18;
    case 0x7F0A8C1Cu: goto label_7F0A8C1C;
    case 0x7F0A8C20u: goto label_7F0A8C20;
    case 0x7F0A8C24u: goto label_7F0A8C24;
    case 0x7F0A8C28u: goto label_7F0A8C28;
    case 0x7F0A8C2Cu: goto label_7F0A8C2C;
    case 0x7F0A8C30u: goto label_7F0A8C30;
    case 0x7F0A8C34u: goto label_7F0A8C34;
    case 0x7F0A8C38u: goto label_7F0A8C38;
    case 0x7F0A8C3Cu: goto label_7F0A8C3C;
    case 0x7F0A8C40u: goto label_7F0A8C40;
    case 0x7F0A8C44u: goto label_7F0A8C44;
    case 0x7F0A8C48u: goto label_7F0A8C48;
    case 0x7F0A8C4Cu: goto label_7F0A8C4C;
    case 0x7F0A8C50u: goto label_7F0A8C50;
    case 0x7F0A8C54u: goto label_7F0A8C54;
    case 0x7F0A8C58u: goto label_7F0A8C58;
    case 0x7F0A8C5Cu: goto label_7F0A8C5C;
    case 0x7F0A8C60u: goto label_7F0A8C60;
    case 0x7F0A8C64u: goto label_7F0A8C64;
    case 0x7F0A8C68u: goto label_7F0A8C68;
    case 0x7F0A8C6Cu: goto label_7F0A8C6C;
    case 0x7F0A8C70u: goto label_7F0A8C70;
    case 0x7F0A8C74u: goto label_7F0A8C74;
    case 0x7F0A8C78u: goto label_7F0A8C78;
    case 0x7F0A8C7Cu: goto label_7F0A8C7C;
    case 0x7F0A8C80u: goto label_7F0A8C80;
    case 0x7F0A8C84u: goto label_7F0A8C84;
    case 0x7F0A8C88u: goto label_7F0A8C88;
    case 0x7F0A8C8Cu: goto label_7F0A8C8C;
    case 0x7F0A8C90u: goto label_7F0A8C90;
    case 0x7F0A8C94u: goto label_7F0A8C94;
    case 0x7F0A8C98u: goto label_7F0A8C98;
    case 0x7F0A8C9Cu: goto label_7F0A8C9C;
    case 0x7F0A8CA0u: goto label_7F0A8CA0;
    case 0x7F0A8CA4u: goto label_7F0A8CA4;
    case 0x7F0A8CA8u: goto label_7F0A8CA8;
    case 0x7F0A8CACu: goto label_7F0A8CAC;
    case 0x7F0A8CB0u: goto label_7F0A8CB0;
    case 0x7F0A8CB4u: goto label_7F0A8CB4;
    case 0x7F0A8CB8u: goto label_7F0A8CB8;
    case 0x7F0A8CBCu: goto label_7F0A8CBC;
    case 0x7F0A8CC0u: goto label_7F0A8CC0;
    case 0x7F0A8CC4u: goto label_7F0A8CC4;
    case 0x7F0A8CC8u: goto label_7F0A8CC8;
    case 0x7F0A8CCCu: goto label_7F0A8CCC;
    case 0x7F0A8CD0u: goto label_7F0A8CD0;
    case 0x7F0A8CD4u: goto label_7F0A8CD4;
    case 0x7F0A8CD8u: goto label_7F0A8CD8;
    case 0x7F0A8CDCu: goto label_7F0A8CDC;
    case 0x7F0A8CE0u: goto label_7F0A8CE0;
    case 0x7F0A8CE4u: goto label_7F0A8CE4;
    case 0x7F0A8CE8u: goto label_7F0A8CE8;
    case 0x7F0A8CECu: goto label_7F0A8CEC;
    case 0x7F0A8CF0u: goto label_7F0A8CF0;
    case 0x7F0A8CF4u: goto label_7F0A8CF4;
    case 0x7F0A8CF8u: goto label_7F0A8CF8;
    case 0x7F0A8CFCu: goto label_7F0A8CFC;
    case 0x7F0A8D00u: goto label_7F0A8D00;
    case 0x7F0A8D04u: goto label_7F0A8D04;
    case 0x7F0A8D08u: goto label_7F0A8D08;
    case 0x7F0A8D0Cu: goto label_7F0A8D0C;
    case 0x7F0A8D10u: goto label_7F0A8D10;
    case 0x7F0A8D14u: goto label_7F0A8D14;
    case 0x7F0A8D18u: goto label_7F0A8D18;
    case 0x7F0A8D1Cu: goto label_7F0A8D1C;
    case 0x7F0A8D20u: goto label_7F0A8D20;
    case 0x7F0A8D24u: goto label_7F0A8D24;
    case 0x7F0A8D28u: goto label_7F0A8D28;
    case 0x7F0A8D2Cu: goto label_7F0A8D2C;
    case 0x7F0A8D30u: goto label_7F0A8D30;
    case 0x7F0A8D34u: goto label_7F0A8D34;
    case 0x7F0A8D38u: goto label_7F0A8D38;
    case 0x7F0A8D3Cu: goto label_7F0A8D3C;
    case 0x7F0A8D40u: goto label_7F0A8D40;
    case 0x7F0A8D44u: goto label_7F0A8D44;
    case 0x7F0A8D48u: goto label_7F0A8D48;
    case 0x7F0A8D4Cu: goto label_7F0A8D4C;
    case 0x7F0A8D50u: goto label_7F0A8D50;
    case 0x7F0A8D54u: goto label_7F0A8D54;
    case 0x7F0A8D58u: goto label_7F0A8D58;
    case 0x7F0A8D5Cu: goto label_7F0A8D5C;
    case 0x7F0A8D60u: goto label_7F0A8D60;
    case 0x7F0A8D64u: goto label_7F0A8D64;
    case 0x7F0A8D68u: goto label_7F0A8D68;
    case 0x7F0A8D6Cu: goto label_7F0A8D6C;
    case 0x7F0A8D70u: goto label_7F0A8D70;
    case 0x7F0A8D74u: goto label_7F0A8D74;
    case 0x7F0A8D78u: goto label_7F0A8D78;
    case 0x7F0A8D7Cu: goto label_7F0A8D7C;
    case 0x7F0A8D80u: goto label_7F0A8D80;
    case 0x7F0A8D84u: goto label_7F0A8D84;
    case 0x7F0A8D88u: goto label_7F0A8D88;
    case 0x7F0A8D8Cu: goto label_7F0A8D8C;
    case 0x7F0A8D90u: goto label_7F0A8D90;
    case 0x7F0A8D94u: goto label_7F0A8D94;
    case 0x7F0A8D98u: goto label_7F0A8D98;
    case 0x7F0A8D9Cu: goto label_7F0A8D9C;
    case 0x7F0A8DA0u: goto label_7F0A8DA0;
    case 0x7F0A8DA4u: goto label_7F0A8DA4;
    case 0x7F0A8DA8u: goto label_7F0A8DA8;
    case 0x7F0A8DACu: goto label_7F0A8DAC;
    case 0x7F0A8DB0u: goto label_7F0A8DB0;
    case 0x7F0A8DB4u: goto label_7F0A8DB4;
    case 0x7F0A8DB8u: goto label_7F0A8DB8;
    case 0x7F0A8DBCu: goto label_7F0A8DBC;
    case 0x7F0A8DC0u: goto label_7F0A8DC0;
    case 0x7F0A8DC4u: goto label_7F0A8DC4;
    case 0x7F0A8DC8u: goto label_7F0A8DC8;
    case 0x7F0A8DCCu: goto label_7F0A8DCC;
    case 0x7F0A8DD0u: goto label_7F0A8DD0;
    case 0x7F0A8DD4u: goto label_7F0A8DD4;
    case 0x7F0A8DD8u: goto label_7F0A8DD8;
    case 0x7F0A8DDCu: goto label_7F0A8DDC;
    case 0x7F0A8DE0u: goto label_7F0A8DE0;
    case 0x7F0A8DE4u: goto label_7F0A8DE4;
    case 0x7F0A8DE8u: goto label_7F0A8DE8;
    case 0x7F0A8DECu: goto label_7F0A8DEC;
    case 0x7F0A8DF0u: goto label_7F0A8DF0;
    case 0x7F0A8DF4u: goto label_7F0A8DF4;
    case 0x7F0A8DF8u: goto label_7F0A8DF8;
    case 0x7F0A8DFCu: goto label_7F0A8DFC;
    case 0x7F0A8E00u: goto label_7F0A8E00;
    case 0x7F0A8E04u: goto label_7F0A8E04;
    case 0x7F0A8E08u: goto label_7F0A8E08;
    case 0x7F0A8E0Cu: goto label_7F0A8E0C;
    case 0x7F0A8E10u: goto label_7F0A8E10;
    case 0x7F0A8E14u: goto label_7F0A8E14;
    case 0x7F0A8E18u: goto label_7F0A8E18;
    case 0x7F0A8E1Cu: goto label_7F0A8E1C;
    case 0x7F0A8E20u: goto label_7F0A8E20;
    case 0x7F0A8E24u: goto label_7F0A8E24;
    case 0x7F0A8E28u: goto label_7F0A8E28;
    case 0x7F0A8E2Cu: goto label_7F0A8E2C;
    case 0x7F0A8E30u: goto label_7F0A8E30;
    case 0x7F0A8E34u: goto label_7F0A8E34;
    case 0x7F0A8E38u: goto label_7F0A8E38;
    case 0x7F0A8E3Cu: goto label_7F0A8E3C;
    case 0x7F0A8E40u: goto label_7F0A8E40;
    case 0x7F0A8E44u: goto label_7F0A8E44;
    case 0x7F0A8E48u: goto label_7F0A8E48;
    case 0x7F0A8E4Cu: goto label_7F0A8E4C;
    case 0x7F0A8E50u: goto label_7F0A8E50;
    case 0x7F0A8E54u: goto label_7F0A8E54;
    case 0x7F0A8E58u: goto label_7F0A8E58;
    case 0x7F0A8E5Cu: goto label_7F0A8E5C;
    case 0x7F0A8E60u: goto label_7F0A8E60;
    case 0x7F0A8E64u: goto label_7F0A8E64;
    case 0x7F0A8E68u: goto label_7F0A8E68;
    case 0x7F0A8E6Cu: goto label_7F0A8E6C;
    case 0x7F0A8E70u: goto label_7F0A8E70;
    case 0x7F0A8E74u: goto label_7F0A8E74;
    case 0x7F0A8E78u: goto label_7F0A8E78;
    case 0x7F0A8E7Cu: goto label_7F0A8E7C;
    case 0x7F0A8E80u: goto label_7F0A8E80;
    case 0x7F0A8E84u: goto label_7F0A8E84;
    case 0x7F0A8E88u: goto label_7F0A8E88;
    case 0x7F0A8E8Cu: goto label_7F0A8E8C;
    case 0x7F0A8E90u: goto label_7F0A8E90;
    case 0x7F0A8E94u: goto label_7F0A8E94;
    case 0x7F0A8E98u: goto label_7F0A8E98;
    case 0x7F0A8E9Cu: goto label_7F0A8E9C;
    case 0x7F0A8EA0u: goto label_7F0A8EA0;
    case 0x7F0A8EA4u: goto label_7F0A8EA4;
    case 0x7F0A8EA8u: goto label_7F0A8EA8;
    case 0x7F0A8EACu: goto label_7F0A8EAC;
    case 0x7F0A8EB0u: goto label_7F0A8EB0;
    case 0x7F0A8EB4u: goto label_7F0A8EB4;
    case 0x7F0A8EB8u: goto label_7F0A8EB8;
    case 0x7F0A8EBCu: goto label_7F0A8EBC;
    case 0x7F0A8EC0u: goto label_7F0A8EC0;
    case 0x7F0A8EC4u: goto label_7F0A8EC4;
    case 0x7F0A8EC8u: goto label_7F0A8EC8;
    case 0x7F0A8ECCu: goto label_7F0A8ECC;
    case 0x7F0A8ED0u: goto label_7F0A8ED0;
    case 0x7F0A8ED4u: goto label_7F0A8ED4;
    case 0x7F0A8ED8u: goto label_7F0A8ED8;
    case 0x7F0A8EDCu: goto label_7F0A8EDC;
    case 0x7F0A8EE0u: goto label_7F0A8EE0;
    case 0x7F0A8EE4u: goto label_7F0A8EE4;
    case 0x7F0A8EE8u: goto label_7F0A8EE8;
    case 0x7F0A8EECu: goto label_7F0A8EEC;
    case 0x7F0A8EF0u: goto label_7F0A8EF0;
    case 0x7F0A8EF4u: goto label_7F0A8EF4;
    case 0x7F0A8EF8u: goto label_7F0A8EF8;
    case 0x7F0A8EFCu: goto label_7F0A8EFC;
    case 0x7F0A8F00u: goto label_7F0A8F00;
    case 0x7F0A8F04u: goto label_7F0A8F04;
    case 0x7F0A8F08u: goto label_7F0A8F08;
    case 0x7F0A8F0Cu: goto label_7F0A8F0C;
    case 0x7F0A8F10u: goto label_7F0A8F10;
    case 0x7F0A8F14u: goto label_7F0A8F14;
    case 0x7F0A8F18u: goto label_7F0A8F18;
    case 0x7F0A8F1Cu: goto label_7F0A8F1C;
    case 0x7F0A8F20u: goto label_7F0A8F20;
    case 0x7F0A8F24u: goto label_7F0A8F24;
    case 0x7F0A8F28u: goto label_7F0A8F28;
    case 0x7F0A8F2Cu: goto label_7F0A8F2C;
    case 0x7F0A8F30u: goto label_7F0A8F30;
    case 0x7F0A8F34u: goto label_7F0A8F34;
    case 0x7F0A8F38u: goto label_7F0A8F38;
    case 0x7F0A8F3Cu: goto label_7F0A8F3C;
    case 0x7F0A8F40u: goto label_7F0A8F40;
    case 0x7F0A8F44u: goto label_7F0A8F44;
    case 0x7F0A8F48u: goto label_7F0A8F48;
    case 0x7F0A8F4Cu: goto label_7F0A8F4C;
    case 0x7F0A8F50u: goto label_7F0A8F50;
    case 0x7F0A8F54u: goto label_7F0A8F54;
    case 0x7F0A8F58u: goto label_7F0A8F58;
    case 0x7F0A8F5Cu: goto label_7F0A8F5C;
    case 0x7F0A8F60u: goto label_7F0A8F60;
    case 0x7F0A8F64u: goto label_7F0A8F64;
    case 0x7F0A8F68u: goto label_7F0A8F68;
    case 0x7F0A8F6Cu: goto label_7F0A8F6C;
    case 0x7F0A8F70u: goto label_7F0A8F70;
    case 0x7F0A8F74u: goto label_7F0A8F74;
    case 0x7F0A8F78u: goto label_7F0A8F78;
    case 0x7F0A8F7Cu: goto label_7F0A8F7C;
    case 0x7F0A8F80u: goto label_7F0A8F80;
    case 0x7F0A8F84u: goto label_7F0A8F84;
    case 0x7F0A8F88u: goto label_7F0A8F88;
    case 0x7F0A8F8Cu: goto label_7F0A8F8C;
    case 0x7F0A8F90u: goto label_7F0A8F90;
    case 0x7F0A8F94u: goto label_7F0A8F94;
    case 0x7F0A8F98u: goto label_7F0A8F98;
    case 0x7F0A8F9Cu: goto label_7F0A8F9C;
    case 0x7F0A8FA0u: goto label_7F0A8FA0;
    case 0x7F0A8FA4u: goto label_7F0A8FA4;
    case 0x7F0A8FA8u: goto label_7F0A8FA8;
    case 0x7F0A8FACu: goto label_7F0A8FAC;
    case 0x7F0A8FB0u: goto label_7F0A8FB0;
    case 0x7F0A8FB4u: goto label_7F0A8FB4;
    case 0x7F0A8FB8u: goto label_7F0A8FB8;
    case 0x7F0A8FBCu: goto label_7F0A8FBC;
    case 0x7F0A8FC0u: goto label_7F0A8FC0;
    case 0x7F0A8FC4u: goto label_7F0A8FC4;
    case 0x7F0A8FC8u: goto label_7F0A8FC8;
    case 0x7F0A8FCCu: goto label_7F0A8FCC;
    case 0x7F0A8FD0u: goto label_7F0A8FD0;
    case 0x7F0A8FD4u: goto label_7F0A8FD4;
    case 0x7F0A8FD8u: goto label_7F0A8FD8;
    case 0x7F0A8FDCu: goto label_7F0A8FDC;
    case 0x7F0A8FE0u: goto label_7F0A8FE0;
    case 0x7F0A8FE4u: goto label_7F0A8FE4;
    case 0x7F0A8FE8u: goto label_7F0A8FE8;
    case 0x7F0A8FECu: goto label_7F0A8FEC;
    case 0x7F0A8FF0u: goto label_7F0A8FF0;
    case 0x7F0A8FF4u: goto label_7F0A8FF4;
    case 0x7F0A8FF8u: goto label_7F0A8FF8;
    case 0x7F0A8FFCu: goto label_7F0A8FFC;
    case 0x7F0A9000u: goto label_7F0A9000;
    case 0x7F0A9004u: goto label_7F0A9004;
    case 0x7F0A9008u: goto label_7F0A9008;
    case 0x7F0A900Cu: goto label_7F0A900C;
    case 0x7F0A9010u: goto label_7F0A9010;
    case 0x7F0A9014u: goto label_7F0A9014;
    case 0x7F0A9018u: goto label_7F0A9018;
    case 0x7F0A901Cu: goto label_7F0A901C;
    case 0x7F0A9020u: goto label_7F0A9020;
    case 0x7F0A9024u: goto label_7F0A9024;
    case 0x7F0A9028u: goto label_7F0A9028;
    case 0x7F0A902Cu: goto label_7F0A902C;
    case 0x7F0A9030u: goto label_7F0A9030;
    case 0x7F0A9034u: goto label_7F0A9034;
    case 0x7F0A9038u: goto label_7F0A9038;
    case 0x7F0A903Cu: goto label_7F0A903C;
    case 0x7F0A9040u: goto label_7F0A9040;
    case 0x7F0A9044u: goto label_7F0A9044;
    case 0x7F0A9048u: goto label_7F0A9048;
    case 0x7F0A904Cu: goto label_7F0A904C;
    case 0x7F0A9050u: goto label_7F0A9050;
    case 0x7F0A9054u: goto label_7F0A9054;
    case 0x7F0A9058u: goto label_7F0A9058;
    case 0x7F0A905Cu: goto label_7F0A905C;
    case 0x7F0A9060u: goto label_7F0A9060;
    case 0x7F0A9064u: goto label_7F0A9064;
    case 0x7F0A9068u: goto label_7F0A9068;
    case 0x7F0A906Cu: goto label_7F0A906C;
    case 0x7F0A9070u: goto label_7F0A9070;
    case 0x7F0A9074u: goto label_7F0A9074;
    case 0x7F0A9078u: goto label_7F0A9078;
    case 0x7F0A907Cu: goto label_7F0A907C;
    case 0x7F0A9080u: goto label_7F0A9080;
    case 0x7F0A9084u: goto label_7F0A9084;
    case 0x7F0A9088u: goto label_7F0A9088;
    case 0x7F0A908Cu: goto label_7F0A908C;
    case 0x7F0A9090u: goto label_7F0A9090;
    case 0x7F0A9094u: goto label_7F0A9094;
    case 0x7F0A9098u: goto label_7F0A9098;
    case 0x7F0A909Cu: goto label_7F0A909C;
    case 0x7F0A90A0u: goto label_7F0A90A0;
    case 0x7F0A90A4u: goto label_7F0A90A4;
    case 0x7F0A90A8u: goto label_7F0A90A8;
    case 0x7F0A90ACu: goto label_7F0A90AC;
    case 0x7F0A90B0u: goto label_7F0A90B0;
    case 0x7F0A90B4u: goto label_7F0A90B4;
    case 0x7F0A90B8u: goto label_7F0A90B8;
    case 0x7F0A90BCu: goto label_7F0A90BC;
    case 0x7F0A90C0u: goto label_7F0A90C0;
    case 0x7F0A90C4u: goto label_7F0A90C4;
    case 0x7F0A90C8u: goto label_7F0A90C8;
    case 0x7F0A90CCu: goto label_7F0A90CC;
    case 0x7F0A90D0u: goto label_7F0A90D0;
    case 0x7F0A90D4u: goto label_7F0A90D4;
    case 0x7F0A90D8u: goto label_7F0A90D8;
    case 0x7F0A90DCu: goto label_7F0A90DC;
    case 0x7F0A90E0u: goto label_7F0A90E0;
    case 0x7F0A90E4u: goto label_7F0A90E4;
    case 0x7F0A90E8u: goto label_7F0A90E8;
    case 0x7F0A90ECu: goto label_7F0A90EC;
    case 0x7F0A90F0u: goto label_7F0A90F0;
    case 0x7F0A90F4u: goto label_7F0A90F4;
    case 0x7F0A90F8u: goto label_7F0A90F8;
    case 0x7F0A90FCu: goto label_7F0A90FC;
    case 0x7F0A9100u: goto label_7F0A9100;
    case 0x7F0A9104u: goto label_7F0A9104;
    case 0x7F0A9108u: goto label_7F0A9108;
    case 0x7F0A910Cu: goto label_7F0A910C;
    case 0x7F0A9110u: goto label_7F0A9110;
    case 0x7F0A9114u: goto label_7F0A9114;
    case 0x7F0A9118u: goto label_7F0A9118;
    case 0x7F0A911Cu: goto label_7F0A911C;
    case 0x7F0A9120u: goto label_7F0A9120;
    case 0x7F0A9124u: goto label_7F0A9124;
    case 0x7F0A9128u: goto label_7F0A9128;
    case 0x7F0A912Cu: goto label_7F0A912C;
    case 0x7F0A9130u: goto label_7F0A9130;
    case 0x7F0A9134u: goto label_7F0A9134;
    case 0x7F0A9138u: goto label_7F0A9138;
    case 0x7F0A913Cu: goto label_7F0A913C;
    case 0x7F0A9140u: goto label_7F0A9140;
    case 0x7F0A9144u: goto label_7F0A9144;
    case 0x7F0A9148u: goto label_7F0A9148;
    case 0x7F0A914Cu: goto label_7F0A914C;
    case 0x7F0A9150u: goto label_7F0A9150;
    case 0x7F0A9154u: goto label_7F0A9154;
    case 0x7F0A9158u: goto label_7F0A9158;
    case 0x7F0A915Cu: goto label_7F0A915C;
    case 0x7F0A9160u: goto label_7F0A9160;
    case 0x7F0A9164u: goto label_7F0A9164;
    case 0x7F0A9168u: goto label_7F0A9168;
    case 0x7F0A916Cu: goto label_7F0A916C;
    case 0x7F0A9170u: goto label_7F0A9170;
    case 0x7F0A9174u: goto label_7F0A9174;
    case 0x7F0A9178u: goto label_7F0A9178;
    case 0x7F0A917Cu: goto label_7F0A917C;
    case 0x7F0A9180u: goto label_7F0A9180;
    case 0x7F0A9184u: goto label_7F0A9184;
    case 0x7F0A9188u: goto label_7F0A9188;
    case 0x7F0A918Cu: goto label_7F0A918C;
    case 0x7F0A9190u: goto label_7F0A9190;
    case 0x7F0A9194u: goto label_7F0A9194;
    case 0x7F0A9198u: goto label_7F0A9198;
    case 0x7F0A919Cu: goto label_7F0A919C;
    case 0x7F0A91A0u: goto label_7F0A91A0;
    case 0x7F0A91A4u: goto label_7F0A91A4;
    case 0x7F0A91A8u: goto label_7F0A91A8;
    case 0x7F0A91ACu: goto label_7F0A91AC;
    case 0x7F0A91B0u: goto label_7F0A91B0;
    case 0x7F0A91B4u: goto label_7F0A91B4;
    case 0x7F0A91B8u: goto label_7F0A91B8;
    case 0x7F0A91BCu: goto label_7F0A91BC;
    case 0x7F0A91C0u: goto label_7F0A91C0;
    case 0x7F0A91C4u: goto label_7F0A91C4;
    case 0x7F0A91C8u: goto label_7F0A91C8;
    case 0x7F0A91CCu: goto label_7F0A91CC;
    case 0x7F0A91D0u: goto label_7F0A91D0;
    case 0x7F0A91D4u: goto label_7F0A91D4;
    case 0x7F0A91D8u: goto label_7F0A91D8;
    case 0x7F0A91DCu: goto label_7F0A91DC;
    case 0x7F0A91E0u: goto label_7F0A91E0;
    case 0x7F0A91E4u: goto label_7F0A91E4;
    case 0x7F0A91E8u: goto label_7F0A91E8;
    case 0x7F0A91ECu: goto label_7F0A91EC;
    case 0x7F0A91F0u: goto label_7F0A91F0;
    case 0x7F0A91F4u: goto label_7F0A91F4;
    case 0x7F0A91F8u: goto label_7F0A91F8;
    case 0x7F0A91FCu: goto label_7F0A91FC;
    case 0x7F0A9200u: goto label_7F0A9200;
    case 0x7F0A9204u: goto label_7F0A9204;
    case 0x7F0A9208u: goto label_7F0A9208;
    case 0x7F0A920Cu: goto label_7F0A920C;
    case 0x7F0A9210u: goto label_7F0A9210;
    case 0x7F0A9214u: goto label_7F0A9214;
    case 0x7F0A9218u: goto label_7F0A9218;
    case 0x7F0A921Cu: goto label_7F0A921C;
    case 0x7F0A9220u: goto label_7F0A9220;
    case 0x7F0A9224u: goto label_7F0A9224;
    case 0x7F0A9228u: goto label_7F0A9228;
    case 0x7F0A922Cu: goto label_7F0A922C;
    case 0x7F0A9230u: goto label_7F0A9230;
    case 0x7F0A9234u: goto label_7F0A9234;
    case 0x7F0A9238u: goto label_7F0A9238;
    case 0x7F0A923Cu: goto label_7F0A923C;
    case 0x7F0A9240u: goto label_7F0A9240;
    case 0x7F0A9244u: goto label_7F0A9244;
    case 0x7F0A9248u: goto label_7F0A9248;
    case 0x7F0A924Cu: goto label_7F0A924C;
    case 0x7F0A9250u: goto label_7F0A9250;
    case 0x7F0A9254u: goto label_7F0A9254;
    case 0x7F0A9258u: goto label_7F0A9258;
    case 0x7F0A925Cu: goto label_7F0A925C;
    case 0x7F0A9260u: goto label_7F0A9260;
    case 0x7F0A9264u: goto label_7F0A9264;
    case 0x7F0A9268u: goto label_7F0A9268;
    case 0x7F0A926Cu: goto label_7F0A926C;
    case 0x7F0A9270u: goto label_7F0A9270;
    case 0x7F0A9274u: goto label_7F0A9274;
    case 0x7F0A9278u: goto label_7F0A9278;
    case 0x7F0A927Cu: goto label_7F0A927C;
    case 0x7F0A9280u: goto label_7F0A9280;
    case 0x7F0A9284u: goto label_7F0A9284;
    case 0x7F0A9288u: goto label_7F0A9288;
    case 0x7F0A928Cu: goto label_7F0A928C;
    case 0x7F0A9290u: goto label_7F0A9290;
    case 0x7F0A9294u: goto label_7F0A9294;
    case 0x7F0A9298u: goto label_7F0A9298;
    case 0x7F0A929Cu: goto label_7F0A929C;
    case 0x7F0A92A0u: goto label_7F0A92A0;
    case 0x7F0A92A4u: goto label_7F0A92A4;
    case 0x7F0A92A8u: goto label_7F0A92A8;
    case 0x7F0A92ACu: goto label_7F0A92AC;
    case 0x7F0A92B0u: goto label_7F0A92B0;
    case 0x7F0A92B4u: goto label_7F0A92B4;
    case 0x7F0A92B8u: goto label_7F0A92B8;
    case 0x7F0A92BCu: goto label_7F0A92BC;
    case 0x7F0A92C0u: goto label_7F0A92C0;
    case 0x7F0A92C4u: goto label_7F0A92C4;
    case 0x7F0A92C8u: goto label_7F0A92C8;
    case 0x7F0A92CCu: goto label_7F0A92CC;
    case 0x7F0A92D0u: goto label_7F0A92D0;
    case 0x7F0A92D4u: goto label_7F0A92D4;
    case 0x7F0A92D8u: goto label_7F0A92D8;
    case 0x7F0A92DCu: goto label_7F0A92DC;
    case 0x7F0A92E0u: goto label_7F0A92E0;
    case 0x7F0A92E4u: goto label_7F0A92E4;
    case 0x7F0A92E8u: goto label_7F0A92E8;
    case 0x7F0A92ECu: goto label_7F0A92EC;
    case 0x7F0A92F0u: goto label_7F0A92F0;
    case 0x7F0A92F4u: goto label_7F0A92F4;
    case 0x7F0A92F8u: goto label_7F0A92F8;
    case 0x7F0A92FCu: goto label_7F0A92FC;
    case 0x7F0A9300u: goto label_7F0A9300;
    case 0x7F0A9304u: goto label_7F0A9304;
    case 0x7F0A9308u: goto label_7F0A9308;
    case 0x7F0A930Cu: goto label_7F0A930C;
    case 0x7F0A9310u: goto label_7F0A9310;
    case 0x7F0A9314u: goto label_7F0A9314;
    case 0x7F0A9318u: goto label_7F0A9318;
    case 0x7F0A931Cu: goto label_7F0A931C;
    case 0x7F0A9320u: goto label_7F0A9320;
    case 0x7F0A9324u: goto label_7F0A9324;
    case 0x7F0A9328u: goto label_7F0A9328;
    case 0x7F0A932Cu: goto label_7F0A932C;
    case 0x7F0A9330u: goto label_7F0A9330;
    case 0x7F0A9334u: goto label_7F0A9334;
    case 0x7F0A9338u: goto label_7F0A9338;
    case 0x7F0A933Cu: goto label_7F0A933C;
    case 0x7F0A9340u: goto label_7F0A9340;
    case 0x7F0A9344u: goto label_7F0A9344;
    case 0x7F0A9348u: goto label_7F0A9348;
    case 0x7F0A934Cu: goto label_7F0A934C;
    case 0x7F0A9350u: goto label_7F0A9350;
    case 0x7F0A9354u: goto label_7F0A9354;
    case 0x7F0A9358u: goto label_7F0A9358;
    case 0x7F0A935Cu: goto label_7F0A935C;
    case 0x7F0A9360u: goto label_7F0A9360;
    case 0x7F0A9364u: goto label_7F0A9364;
    case 0x7F0A9368u: goto label_7F0A9368;
    case 0x7F0A936Cu: goto label_7F0A936C;
    case 0x7F0A9370u: goto label_7F0A9370;
    case 0x7F0A9374u: goto label_7F0A9374;
    case 0x7F0A9378u: goto label_7F0A9378;
    case 0x7F0A937Cu: goto label_7F0A937C;
    case 0x7F0A9380u: goto label_7F0A9380;
    case 0x7F0A9384u: goto label_7F0A9384;
    case 0x7F0A9388u: goto label_7F0A9388;
    case 0x7F0A938Cu: goto label_7F0A938C;
    case 0x7F0A9390u: goto label_7F0A9390;
    case 0x7F0A9394u: goto label_7F0A9394;
    case 0x7F0A9398u: goto label_7F0A9398;
    case 0x7F0A939Cu: goto label_7F0A939C;
    case 0x7F0A93A0u: goto label_7F0A93A0;
    case 0x7F0A93A4u: goto label_7F0A93A4;
    case 0x7F0A93A8u: goto label_7F0A93A8;
    case 0x7F0A93ACu: goto label_7F0A93AC;
    case 0x7F0A93B0u: goto label_7F0A93B0;
    case 0x7F0A93B4u: goto label_7F0A93B4;
    case 0x7F0A93B8u: goto label_7F0A93B8;
    case 0x7F0A93BCu: goto label_7F0A93BC;
    case 0x7F0A93C0u: goto label_7F0A93C0;
    case 0x7F0A93C4u: goto label_7F0A93C4;
    case 0x7F0A93C8u: goto label_7F0A93C8;
    case 0x7F0A93CCu: goto label_7F0A93CC;
    case 0x7F0A93D0u: goto label_7F0A93D0;
    case 0x7F0A93D4u: goto label_7F0A93D4;
    case 0x7F0A93D8u: goto label_7F0A93D8;
    case 0x7F0A93DCu: goto label_7F0A93DC;
    case 0x7F0A93E0u: goto label_7F0A93E0;
    case 0x7F0A93E4u: goto label_7F0A93E4;
    case 0x7F0A93E8u: goto label_7F0A93E8;
    case 0x7F0A93ECu: goto label_7F0A93EC;
    case 0x7F0A93F0u: goto label_7F0A93F0;
    case 0x7F0A93F4u: goto label_7F0A93F4;
    case 0x7F0A93F8u: goto label_7F0A93F8;
    case 0x7F0A93FCu: goto label_7F0A93FC;
    case 0x7F0A9400u: goto label_7F0A9400;
    case 0x7F0A9404u: goto label_7F0A9404;
    case 0x7F0A9408u: goto label_7F0A9408;
    case 0x7F0A940Cu: goto label_7F0A940C;
    case 0x7F0A9410u: goto label_7F0A9410;
    case 0x7F0A9414u: goto label_7F0A9414;
    case 0x7F0A9418u: goto label_7F0A9418;
    case 0x7F0A941Cu: goto label_7F0A941C;
    case 0x7F0A9420u: goto label_7F0A9420;
    case 0x7F0A9424u: goto label_7F0A9424;
    case 0x7F0A9428u: goto label_7F0A9428;
    case 0x7F0A942Cu: goto label_7F0A942C;
    case 0x7F0A9430u: goto label_7F0A9430;
    case 0x7F0A9434u: goto label_7F0A9434;
    case 0x7F0A9438u: goto label_7F0A9438;
    case 0x7F0A943Cu: goto label_7F0A943C;
    case 0x7F0A9440u: goto label_7F0A9440;
    case 0x7F0A9444u: goto label_7F0A9444;
    case 0x7F0A9448u: goto label_7F0A9448;
    case 0x7F0A944Cu: goto label_7F0A944C;
    case 0x7F0A9450u: goto label_7F0A9450;
    case 0x7F0A9454u: goto label_7F0A9454;
    case 0x7F0A9458u: goto label_7F0A9458;
    case 0x7F0A945Cu: goto label_7F0A945C;
    case 0x7F0A9460u: goto label_7F0A9460;
    case 0x7F0A9464u: goto label_7F0A9464;
    case 0x7F0A9468u: goto label_7F0A9468;
    case 0x7F0A946Cu: goto label_7F0A946C;
    case 0x7F0A9470u: goto label_7F0A9470;
    case 0x7F0A9474u: goto label_7F0A9474;
    case 0x7F0A9478u: goto label_7F0A9478;
    case 0x7F0A947Cu: goto label_7F0A947C;
    case 0x7F0A9480u: goto label_7F0A9480;
    case 0x7F0A9484u: goto label_7F0A9484;
    case 0x7F0A9488u: goto label_7F0A9488;
    case 0x7F0A948Cu: goto label_7F0A948C;
    case 0x7F0A9490u: goto label_7F0A9490;
    case 0x7F0A9494u: goto label_7F0A9494;
    case 0x7F0A9498u: goto label_7F0A9498;
    case 0x7F0A949Cu: goto label_7F0A949C;
    case 0x7F0A94A0u: goto label_7F0A94A0;
    case 0x7F0A94A4u: goto label_7F0A94A4;
    case 0x7F0A94A8u: goto label_7F0A94A8;
    case 0x7F0A94ACu: goto label_7F0A94AC;
    case 0x7F0A94B0u: goto label_7F0A94B0;
    case 0x7F0A94B4u: goto label_7F0A94B4;
    case 0x7F0A94B8u: goto label_7F0A94B8;
    case 0x7F0A94BCu: goto label_7F0A94BC;
    case 0x7F0A94C0u: goto label_7F0A94C0;
    case 0x7F0A94C4u: goto label_7F0A94C4;
    case 0x7F0A94C8u: goto label_7F0A94C8;
    case 0x7F0A94CCu: goto label_7F0A94CC;
    case 0x7F0A94D0u: goto label_7F0A94D0;
    case 0x7F0A94D4u: goto label_7F0A94D4;
    case 0x7F0A94D8u: goto label_7F0A94D8;
    case 0x7F0A94DCu: goto label_7F0A94DC;
    case 0x7F0A94E0u: goto label_7F0A94E0;
    case 0x7F0A94E4u: goto label_7F0A94E4;
    case 0x7F0A94E8u: goto label_7F0A94E8;
    case 0x7F0A94ECu: goto label_7F0A94EC;
    case 0x7F0A94F0u: goto label_7F0A94F0;
    case 0x7F0A94F4u: goto label_7F0A94F4;
    case 0x7F0A94F8u: goto label_7F0A94F8;
    case 0x7F0A94FCu: goto label_7F0A94FC;
    case 0x7F0A9500u: goto label_7F0A9500;
    case 0x7F0A9504u: goto label_7F0A9504;
    case 0x7F0A9508u: goto label_7F0A9508;
    case 0x7F0A950Cu: goto label_7F0A950C;
    case 0x7F0A9510u: goto label_7F0A9510;
    case 0x7F0A9514u: goto label_7F0A9514;
    case 0x7F0A9518u: goto label_7F0A9518;
    case 0x7F0A951Cu: goto label_7F0A951C;
    case 0x7F0A9520u: goto label_7F0A9520;
    case 0x7F0A9524u: goto label_7F0A9524;
    case 0x7F0A9528u: goto label_7F0A9528;
    case 0x7F0A952Cu: goto label_7F0A952C;
    case 0x7F0A9530u: goto label_7F0A9530;
    case 0x7F0A9534u: goto label_7F0A9534;
    case 0x7F0A9538u: goto label_7F0A9538;
    case 0x7F0A953Cu: goto label_7F0A953C;
    case 0x7F0A9540u: goto label_7F0A9540;
    case 0x7F0A9544u: goto label_7F0A9544;
    case 0x7F0A9548u: goto label_7F0A9548;
    case 0x7F0A954Cu: goto label_7F0A954C;
    case 0x7F0A9550u: goto label_7F0A9550;
    case 0x7F0A9554u: goto label_7F0A9554;
    case 0x7F0A9558u: goto label_7F0A9558;
    case 0x7F0A955Cu: goto label_7F0A955C;
    case 0x7F0A9560u: goto label_7F0A9560;
    case 0x7F0A9564u: goto label_7F0A9564;
    case 0x7F0A9568u: goto label_7F0A9568;
    case 0x7F0A956Cu: goto label_7F0A956C;
    case 0x7F0A9570u: goto label_7F0A9570;
    case 0x7F0A9574u: goto label_7F0A9574;
    case 0x7F0A9578u: goto label_7F0A9578;
    case 0x7F0A957Cu: goto label_7F0A957C;
    case 0x7F0A9580u: goto label_7F0A9580;
    case 0x7F0A9584u: goto label_7F0A9584;
    case 0x7F0A9588u: goto label_7F0A9588;
    case 0x7F0A958Cu: goto label_7F0A958C;
    case 0x7F0A9590u: goto label_7F0A9590;
    case 0x7F0A9594u: goto label_7F0A9594;
    case 0x7F0A9598u: goto label_7F0A9598;
    case 0x7F0A959Cu: goto label_7F0A959C;
    case 0x7F0A95A0u: goto label_7F0A95A0;
    case 0x7F0A95A4u: goto label_7F0A95A4;
    case 0x7F0A95A8u: goto label_7F0A95A8;
    case 0x7F0A95ACu: goto label_7F0A95AC;
    case 0x7F0A95B0u: goto label_7F0A95B0;
    case 0x7F0A95B4u: goto label_7F0A95B4;
    case 0x7F0A95B8u: goto label_7F0A95B8;
    case 0x7F0A95BCu: goto label_7F0A95BC;
    case 0x7F0A95C0u: goto label_7F0A95C0;
    case 0x7F0A95C4u: goto label_7F0A95C4;
    case 0x7F0A95C8u: goto label_7F0A95C8;
    case 0x7F0A95CCu: goto label_7F0A95CC;
    case 0x7F0A95D0u: goto label_7F0A95D0;
    case 0x7F0A95D4u: goto label_7F0A95D4;
    case 0x7F0A95D8u: goto label_7F0A95D8;
    case 0x7F0A95DCu: goto label_7F0A95DC;
    case 0x7F0A95E0u: goto label_7F0A95E0;
    case 0x7F0A95E4u: goto label_7F0A95E4;
    case 0x7F0A95E8u: goto label_7F0A95E8;
    case 0x7F0A95ECu: goto label_7F0A95EC;
    case 0x7F0A95F0u: goto label_7F0A95F0;
    case 0x7F0A95F4u: goto label_7F0A95F4;
    case 0x7F0A95F8u: goto label_7F0A95F8;
    case 0x7F0A95FCu: goto label_7F0A95FC;
    case 0x7F0A9600u: goto label_7F0A9600;
    case 0x7F0A9604u: goto label_7F0A9604;
    case 0x7F0A9608u: goto label_7F0A9608;
    case 0x7F0A960Cu: goto label_7F0A960C;
    case 0x7F0A9610u: goto label_7F0A9610;
    case 0x7F0A9614u: goto label_7F0A9614;
    case 0x7F0A9618u: goto label_7F0A9618;
    case 0x7F0A961Cu: goto label_7F0A961C;
    case 0x7F0A9620u: goto label_7F0A9620;
    case 0x7F0A9624u: goto label_7F0A9624;
    case 0x7F0A9628u: goto label_7F0A9628;
    case 0x7F0A962Cu: goto label_7F0A962C;
    case 0x7F0A9630u: goto label_7F0A9630;
    case 0x7F0A9634u: goto label_7F0A9634;
    case 0x7F0A9638u: goto label_7F0A9638;
    case 0x7F0A963Cu: goto label_7F0A963C;
    case 0x7F0A9640u: goto label_7F0A9640;
    case 0x7F0A9644u: goto label_7F0A9644;
    case 0x7F0A9648u: goto label_7F0A9648;
    case 0x7F0A964Cu: goto label_7F0A964C;
    case 0x7F0A9650u: goto label_7F0A9650;
    case 0x7F0A9654u: goto label_7F0A9654;
    case 0x7F0A9658u: goto label_7F0A9658;
    case 0x7F0A965Cu: goto label_7F0A965C;
    case 0x7F0A9660u: goto label_7F0A9660;
    case 0x7F0A9664u: goto label_7F0A9664;
    case 0x7F0A9668u: goto label_7F0A9668;
    case 0x7F0A966Cu: goto label_7F0A966C;
    case 0x7F0A9670u: goto label_7F0A9670;
    case 0x7F0A9674u: goto label_7F0A9674;
    case 0x7F0A9678u: goto label_7F0A9678;
    case 0x7F0A967Cu: goto label_7F0A967C;
    case 0x7F0A9680u: goto label_7F0A9680;
    case 0x7F0A9684u: goto label_7F0A9684;
    case 0x7F0A9688u: goto label_7F0A9688;
    case 0x7F0A968Cu: goto label_7F0A968C;
    case 0x7F0A9690u: goto label_7F0A9690;
    case 0x7F0A9694u: goto label_7F0A9694;
    case 0x7F0A9698u: goto label_7F0A9698;
    case 0x7F0A969Cu: goto label_7F0A969C;
    case 0x7F0A96A0u: goto label_7F0A96A0;
    case 0x7F0A96A4u: goto label_7F0A96A4;
    case 0x7F0A96A8u: goto label_7F0A96A8;
    case 0x7F0A96ACu: goto label_7F0A96AC;
    case 0x7F0A96B0u: goto label_7F0A96B0;
    case 0x7F0A96B4u: goto label_7F0A96B4;
    case 0x7F0A96B8u: goto label_7F0A96B8;
    case 0x7F0A96BCu: goto label_7F0A96BC;
    case 0x7F0A96C0u: goto label_7F0A96C0;
    case 0x7F0A96C4u: goto label_7F0A96C4;
    case 0x7F0A96C8u: goto label_7F0A96C8;
    case 0x7F0A96CCu: goto label_7F0A96CC;
    case 0x7F0A96D0u: goto label_7F0A96D0;
    case 0x7F0A96D4u: goto label_7F0A96D4;
    case 0x7F0A96D8u: goto label_7F0A96D8;
    case 0x7F0A96DCu: goto label_7F0A96DC;
    case 0x7F0A96E0u: goto label_7F0A96E0;
    case 0x7F0A96E4u: goto label_7F0A96E4;
    case 0x7F0A96E8u: goto label_7F0A96E8;
    case 0x7F0A96ECu: goto label_7F0A96EC;
    case 0x7F0A96F0u: goto label_7F0A96F0;
    case 0x7F0A96F4u: goto label_7F0A96F4;
    case 0x7F0A96F8u: goto label_7F0A96F8;
    case 0x7F0A96FCu: goto label_7F0A96FC;
    case 0x7F0A9700u: goto label_7F0A9700;
    case 0x7F0A9704u: goto label_7F0A9704;
    case 0x7F0A9708u: goto label_7F0A9708;
    case 0x7F0A970Cu: goto label_7F0A970C;
    case 0x7F0A9710u: goto label_7F0A9710;
    case 0x7F0A9714u: goto label_7F0A9714;
    case 0x7F0A9718u: goto label_7F0A9718;
    case 0x7F0A971Cu: goto label_7F0A971C;
    case 0x7F0A9720u: goto label_7F0A9720;
    case 0x7F0A9724u: goto label_7F0A9724;
    case 0x7F0A9728u: goto label_7F0A9728;
    case 0x7F0A972Cu: goto label_7F0A972C;
    case 0x7F0A9730u: goto label_7F0A9730;
    case 0x7F0A9734u: goto label_7F0A9734;
    case 0x7F0A9738u: goto label_7F0A9738;
    case 0x7F0A973Cu: goto label_7F0A973C;
    case 0x7F0A9740u: goto label_7F0A9740;
    case 0x7F0A9744u: goto label_7F0A9744;
    case 0x7F0A9748u: goto label_7F0A9748;
    case 0x7F0A974Cu: goto label_7F0A974C;
    case 0x7F0A9750u: goto label_7F0A9750;
    case 0x7F0A9754u: goto label_7F0A9754;
    case 0x7F0A9758u: goto label_7F0A9758;
    case 0x7F0A975Cu: goto label_7F0A975C;
    case 0x7F0A9760u: goto label_7F0A9760;
    case 0x7F0A9764u: goto label_7F0A9764;
    case 0x7F0A9768u: goto label_7F0A9768;
    case 0x7F0A976Cu: goto label_7F0A976C;
    case 0x7F0A9770u: goto label_7F0A9770;
    case 0x7F0A9774u: goto label_7F0A9774;
    case 0x7F0A9778u: goto label_7F0A9778;
    case 0x7F0A977Cu: goto label_7F0A977C;
    case 0x7F0A9780u: goto label_7F0A9780;
    case 0x7F0A9784u: goto label_7F0A9784;
    case 0x7F0A9788u: goto label_7F0A9788;
    case 0x7F0A978Cu: goto label_7F0A978C;
    case 0x7F0A9790u: goto label_7F0A9790;
    case 0x7F0A9794u: goto label_7F0A9794;
    case 0x7F0A9798u: goto label_7F0A9798;
    case 0x7F0A979Cu: goto label_7F0A979C;
    case 0x7F0A97A0u: goto label_7F0A97A0;
    case 0x7F0A97A4u: goto label_7F0A97A4;
    case 0x7F0A97A8u: goto label_7F0A97A8;
    case 0x7F0A97ACu: goto label_7F0A97AC;
    case 0x7F0A97B0u: goto label_7F0A97B0;
    case 0x7F0A97B4u: goto label_7F0A97B4;
    case 0x7F0A97B8u: goto label_7F0A97B8;
    case 0x7F0A97BCu: goto label_7F0A97BC;
    case 0x7F0A97C0u: goto label_7F0A97C0;
    case 0x7F0A97C4u: goto label_7F0A97C4;
    case 0x7F0A97C8u: goto label_7F0A97C8;
    case 0x7F0A97CCu: goto label_7F0A97CC;
    case 0x7F0A97D0u: goto label_7F0A97D0;
    case 0x7F0A97D4u: goto label_7F0A97D4;
    case 0x7F0A97D8u: goto label_7F0A97D8;
    case 0x7F0A97DCu: goto label_7F0A97DC;
    case 0x7F0A97E0u: goto label_7F0A97E0;
    case 0x7F0A97E4u: goto label_7F0A97E4;
    case 0x7F0A97E8u: goto label_7F0A97E8;
    case 0x7F0A97ECu: goto label_7F0A97EC;
    case 0x7F0A97F0u: goto label_7F0A97F0;
    case 0x7F0A97F4u: goto label_7F0A97F4;
    case 0x7F0A97F8u: goto label_7F0A97F8;
    case 0x7F0A97FCu: goto label_7F0A97FC;
    case 0x7F0A9800u: goto label_7F0A9800;
    case 0x7F0A9804u: goto label_7F0A9804;
    case 0x7F0A9808u: goto label_7F0A9808;
    case 0x7F0A980Cu: goto label_7F0A980C;
    case 0x7F0A9810u: goto label_7F0A9810;
    case 0x7F0A9814u: goto label_7F0A9814;
    case 0x7F0A9818u: goto label_7F0A9818;
    case 0x7F0A981Cu: goto label_7F0A981C;
    case 0x7F0A9820u: goto label_7F0A9820;
    case 0x7F0A9824u: goto label_7F0A9824;
    case 0x7F0A9828u: goto label_7F0A9828;
    case 0x7F0A982Cu: goto label_7F0A982C;
    case 0x7F0A9830u: goto label_7F0A9830;
    case 0x7F0A9834u: goto label_7F0A9834;
    case 0x7F0A9838u: goto label_7F0A9838;
    case 0x7F0A983Cu: goto label_7F0A983C;
    case 0x7F0A9840u: goto label_7F0A9840;
    case 0x7F0A9844u: goto label_7F0A9844;
    case 0x7F0A9848u: goto label_7F0A9848;
    case 0x7F0A984Cu: goto label_7F0A984C;
    case 0x7F0A9850u: goto label_7F0A9850;
    case 0x7F0A9854u: goto label_7F0A9854;
    case 0x7F0A9858u: goto label_7F0A9858;
    case 0x7F0A985Cu: goto label_7F0A985C;
    case 0x7F0A9860u: goto label_7F0A9860;
    case 0x7F0A9864u: goto label_7F0A9864;
    case 0x7F0A9868u: goto label_7F0A9868;
    case 0x7F0A986Cu: goto label_7F0A986C;
    case 0x7F0A9870u: goto label_7F0A9870;
    case 0x7F0A9874u: goto label_7F0A9874;
    case 0x7F0A9878u: goto label_7F0A9878;
    case 0x7F0A987Cu: goto label_7F0A987C;
    case 0x7F0A9880u: goto label_7F0A9880;
    case 0x7F0A9884u: goto label_7F0A9884;
    case 0x7F0A9888u: goto label_7F0A9888;
    case 0x7F0A988Cu: goto label_7F0A988C;
    case 0x7F0A9890u: goto label_7F0A9890;
    case 0x7F0A9894u: goto label_7F0A9894;
    case 0x7F0A9898u: goto label_7F0A9898;
    case 0x7F0A989Cu: goto label_7F0A989C;
    case 0x7F0A98A0u: goto label_7F0A98A0;
    case 0x7F0A98A4u: goto label_7F0A98A4;
    case 0x7F0A98A8u: goto label_7F0A98A8;
    case 0x7F0A98ACu: goto label_7F0A98AC;
    case 0x7F0A98B0u: goto label_7F0A98B0;
    case 0x7F0A98B4u: goto label_7F0A98B4;
    case 0x7F0A98B8u: goto label_7F0A98B8;
    case 0x7F0A98BCu: goto label_7F0A98BC;
    case 0x7F0A98C0u: goto label_7F0A98C0;
    case 0x7F0A98C4u: goto label_7F0A98C4;
    case 0x7F0A98C8u: goto label_7F0A98C8;
    case 0x7F0A98CCu: goto label_7F0A98CC;
    case 0x7F0A98D0u: goto label_7F0A98D0;
    case 0x7F0A98D4u: goto label_7F0A98D4;
    case 0x7F0A98D8u: goto label_7F0A98D8;
    case 0x7F0A98DCu: goto label_7F0A98DC;
    case 0x7F0A98E0u: goto label_7F0A98E0;
    case 0x7F0A98E4u: goto label_7F0A98E4;
    case 0x7F0A98E8u: goto label_7F0A98E8;
    case 0x7F0A98ECu: goto label_7F0A98EC;
    case 0x7F0A98F0u: goto label_7F0A98F0;
    case 0x7F0A98F4u: goto label_7F0A98F4;
    case 0x7F0A98F8u: goto label_7F0A98F8;
    case 0x7F0A98FCu: goto label_7F0A98FC;
    case 0x7F0A9900u: goto label_7F0A9900;
    case 0x7F0A9904u: goto label_7F0A9904;
    case 0x7F0A9908u: goto label_7F0A9908;
    case 0x7F0A990Cu: goto label_7F0A990C;
    case 0x7F0A9910u: goto label_7F0A9910;
    case 0x7F0A9914u: goto label_7F0A9914;
    case 0x7F0A9918u: goto label_7F0A9918;
    case 0x7F0A991Cu: goto label_7F0A991C;
    case 0x7F0A9920u: goto label_7F0A9920;
    case 0x7F0A9924u: goto label_7F0A9924;
    case 0x7F0A9928u: goto label_7F0A9928;
    case 0x7F0A992Cu: goto label_7F0A992C;
    case 0x7F0A9930u: goto label_7F0A9930;
    case 0x7F0A9934u: goto label_7F0A9934;
    case 0x7F0A9938u: goto label_7F0A9938;
    case 0x7F0A993Cu: goto label_7F0A993C;
    case 0x7F0A9940u: goto label_7F0A9940;
    case 0x7F0A9944u: goto label_7F0A9944;
    case 0x7F0A9948u: goto label_7F0A9948;
    case 0x7F0A994Cu: goto label_7F0A994C;
    case 0x7F0A9950u: goto label_7F0A9950;
    case 0x7F0A9954u: goto label_7F0A9954;
    case 0x7F0A9958u: goto label_7F0A9958;
    case 0x7F0A995Cu: goto label_7F0A995C;
    case 0x7F0A9960u: goto label_7F0A9960;
    case 0x7F0A9964u: goto label_7F0A9964;
    case 0x7F0A9968u: goto label_7F0A9968;
    case 0x7F0A996Cu: goto label_7F0A996C;
    case 0x7F0A9970u: goto label_7F0A9970;
    case 0x7F0A9974u: goto label_7F0A9974;
    case 0x7F0A9978u: goto label_7F0A9978;
    case 0x7F0A997Cu: goto label_7F0A997C;
    case 0x7F0A9980u: goto label_7F0A9980;
    case 0x7F0A9984u: goto label_7F0A9984;
    case 0x7F0A9988u: goto label_7F0A9988;
    case 0x7F0A998Cu: goto label_7F0A998C;
    case 0x7F0A9990u: goto label_7F0A9990;
    case 0x7F0A9994u: goto label_7F0A9994;
    case 0x7F0A9998u: goto label_7F0A9998;
    case 0x7F0A999Cu: goto label_7F0A999C;
    case 0x7F0A99A0u: goto label_7F0A99A0;
    case 0x7F0A99A4u: goto label_7F0A99A4;
    case 0x7F0A99A8u: goto label_7F0A99A8;
    case 0x7F0A99ACu: goto label_7F0A99AC;
    case 0x7F0A99B0u: goto label_7F0A99B0;
    case 0x7F0A99B4u: goto label_7F0A99B4;
    case 0x7F0A99B8u: goto label_7F0A99B8;
    case 0x7F0A99BCu: goto label_7F0A99BC;
    case 0x7F0A99C0u: goto label_7F0A99C0;
    case 0x7F0A99C4u: goto label_7F0A99C4;
    case 0x7F0A99C8u: goto label_7F0A99C8;
    case 0x7F0A99CCu: goto label_7F0A99CC;
    case 0x7F0A99D0u: goto label_7F0A99D0;
    case 0x7F0A99D4u: goto label_7F0A99D4;
    case 0x7F0A99D8u: goto label_7F0A99D8;
    case 0x7F0A99DCu: goto label_7F0A99DC;
    case 0x7F0A99E0u: goto label_7F0A99E0;
    case 0x7F0A99E4u: goto label_7F0A99E4;
    case 0x7F0A99E8u: goto label_7F0A99E8;
    case 0x7F0A99ECu: goto label_7F0A99EC;
    case 0x7F0A99F0u: goto label_7F0A99F0;
    case 0x7F0A99F4u: goto label_7F0A99F4;
    case 0x7F0A99F8u: goto label_7F0A99F8;
    case 0x7F0A99FCu: goto label_7F0A99FC;
    case 0x7F0A9A00u: goto label_7F0A9A00;
    case 0x7F0A9A04u: goto label_7F0A9A04;
    case 0x7F0A9A08u: goto label_7F0A9A08;
    case 0x7F0A9A0Cu: goto label_7F0A9A0C;
    case 0x7F0A9A10u: goto label_7F0A9A10;
    case 0x7F0A9A14u: goto label_7F0A9A14;
    case 0x7F0A9A18u: goto label_7F0A9A18;
    case 0x7F0A9A1Cu: goto label_7F0A9A1C;
    case 0x7F0A9A20u: goto label_7F0A9A20;
    case 0x7F0A9A24u: goto label_7F0A9A24;
    case 0x7F0A9A28u: goto label_7F0A9A28;
    case 0x7F0A9A2Cu: goto label_7F0A9A2C;
    case 0x7F0A9A30u: goto label_7F0A9A30;
    case 0x7F0A9A34u: goto label_7F0A9A34;
    case 0x7F0A9A38u: goto label_7F0A9A38;
    case 0x7F0A9A3Cu: goto label_7F0A9A3C;
    case 0x7F0A9A40u: goto label_7F0A9A40;
    case 0x7F0A9A44u: goto label_7F0A9A44;
    case 0x7F0A9A48u: goto label_7F0A9A48;
    case 0x7F0A9A4Cu: goto label_7F0A9A4C;
    case 0x7F0A9A50u: goto label_7F0A9A50;
    case 0x7F0A9A54u: goto label_7F0A9A54;
    case 0x7F0A9A58u: goto label_7F0A9A58;
    case 0x7F0A9A5Cu: goto label_7F0A9A5C;
    case 0x7F0A9A60u: goto label_7F0A9A60;
    case 0x7F0A9A64u: goto label_7F0A9A64;
    case 0x7F0A9A68u: goto label_7F0A9A68;
    case 0x7F0A9A6Cu: goto label_7F0A9A6C;
    case 0x7F0A9A70u: goto label_7F0A9A70;
    case 0x7F0A9A74u: goto label_7F0A9A74;
    case 0x7F0A9A78u: goto label_7F0A9A78;
    case 0x7F0A9A7Cu: goto label_7F0A9A7C;
    case 0x7F0A9A80u: goto label_7F0A9A80;
    case 0x7F0A9A84u: goto label_7F0A9A84;
    case 0x7F0A9A88u: goto label_7F0A9A88;
    case 0x7F0A9A8Cu: goto label_7F0A9A8C;
    case 0x7F0A9A90u: goto label_7F0A9A90;
    case 0x7F0A9A94u: goto label_7F0A9A94;
    case 0x7F0A9A98u: goto label_7F0A9A98;
    case 0x7F0A9A9Cu: goto label_7F0A9A9C;
    case 0x7F0A9AA0u: goto label_7F0A9AA0;
    case 0x7F0A9AA4u: goto label_7F0A9AA4;
    case 0x7F0A9AA8u: goto label_7F0A9AA8;
    case 0x7F0A9AACu: goto label_7F0A9AAC;
    case 0x7F0A9AB0u: goto label_7F0A9AB0;
    case 0x7F0A9AB4u: goto label_7F0A9AB4;
    case 0x7F0A9AB8u: goto label_7F0A9AB8;
    case 0x7F0A9ABCu: goto label_7F0A9ABC;
    case 0x7F0A9AC0u: goto label_7F0A9AC0;
    case 0x7F0A9AC4u: goto label_7F0A9AC4;
    case 0x7F0A9AC8u: goto label_7F0A9AC8;
    case 0x7F0A9ACCu: goto label_7F0A9ACC;
    case 0x7F0A9AD0u: goto label_7F0A9AD0;
    case 0x7F0A9AD4u: goto label_7F0A9AD4;
    case 0x7F0A9AD8u: goto label_7F0A9AD8;
    case 0x7F0A9ADCu: goto label_7F0A9ADC;
    case 0x7F0A9AE0u: goto label_7F0A9AE0;
    case 0x7F0A9AE4u: goto label_7F0A9AE4;
    case 0x7F0A9AE8u: goto label_7F0A9AE8;
    case 0x7F0A9AECu: goto label_7F0A9AEC;
    case 0x7F0A9AF0u: goto label_7F0A9AF0;
    case 0x7F0A9AF4u: goto label_7F0A9AF4;
    case 0x7F0A9AF8u: goto label_7F0A9AF8;
    case 0x7F0A9AFCu: goto label_7F0A9AFC;
    case 0x7F0A9B00u: goto label_7F0A9B00;
    case 0x7F0A9B04u: goto label_7F0A9B04;
    case 0x7F0A9B08u: goto label_7F0A9B08;
    case 0x7F0A9B0Cu: goto label_7F0A9B0C;
    case 0x7F0A9B10u: goto label_7F0A9B10;
    case 0x7F0A9B14u: goto label_7F0A9B14;
    case 0x7F0A9B18u: goto label_7F0A9B18;
    case 0x7F0A9B1Cu: goto label_7F0A9B1C;
    case 0x7F0A9B20u: goto label_7F0A9B20;
    case 0x7F0A9B24u: goto label_7F0A9B24;
    case 0x7F0A9B28u: goto label_7F0A9B28;
    case 0x7F0A9B2Cu: goto label_7F0A9B2C;
    case 0x7F0A9B30u: goto label_7F0A9B30;
    case 0x7F0A9B34u: goto label_7F0A9B34;
    case 0x7F0A9B38u: goto label_7F0A9B38;
    case 0x7F0A9B3Cu: goto label_7F0A9B3C;
    case 0x7F0A9B40u: goto label_7F0A9B40;
    case 0x7F0A9B44u: goto label_7F0A9B44;
    case 0x7F0A9B48u: goto label_7F0A9B48;
    case 0x7F0A9B4Cu: goto label_7F0A9B4C;
    case 0x7F0A9B50u: goto label_7F0A9B50;
    case 0x7F0A9B54u: goto label_7F0A9B54;
    case 0x7F0A9B58u: goto label_7F0A9B58;
    case 0x7F0A9B5Cu: goto label_7F0A9B5C;
    case 0x7F0A9B60u: goto label_7F0A9B60;
    case 0x7F0A9B64u: goto label_7F0A9B64;
    case 0x7F0A9B68u: goto label_7F0A9B68;
    case 0x7F0A9B6Cu: goto label_7F0A9B6C;
    case 0x7F0A9B70u: goto label_7F0A9B70;
    case 0x7F0A9B74u: goto label_7F0A9B74;
    case 0x7F0A9B78u: goto label_7F0A9B78;
    case 0x7F0A9B7Cu: goto label_7F0A9B7C;
    case 0x7F0A9B80u: goto label_7F0A9B80;
    case 0x7F0A9B84u: goto label_7F0A9B84;
    case 0x7F0A9B88u: goto label_7F0A9B88;
    case 0x7F0A9B8Cu: goto label_7F0A9B8C;
    case 0x7F0A9B90u: goto label_7F0A9B90;
    case 0x7F0A9B94u: goto label_7F0A9B94;
    case 0x7F0A9B98u: goto label_7F0A9B98;
    case 0x7F0A9B9Cu: goto label_7F0A9B9C;
    case 0x7F0A9BA0u: goto label_7F0A9BA0;
    case 0x7F0A9BA4u: goto label_7F0A9BA4;
    case 0x7F0A9BA8u: goto label_7F0A9BA8;
    case 0x7F0A9BACu: goto label_7F0A9BAC;
    case 0x7F0A9BB0u: goto label_7F0A9BB0;
    case 0x7F0A9BB4u: goto label_7F0A9BB4;
    case 0x7F0A9BB8u: goto label_7F0A9BB8;
    case 0x7F0A9BBCu: goto label_7F0A9BBC;
    case 0x7F0A9BC0u: goto label_7F0A9BC0;
    case 0x7F0A9BC4u: goto label_7F0A9BC4;
    case 0x7F0A9BC8u: goto label_7F0A9BC8;
    case 0x7F0A9BCCu: goto label_7F0A9BCC;
    case 0x7F0A9BD0u: goto label_7F0A9BD0;
    case 0x7F0A9BD4u: goto label_7F0A9BD4;
    case 0x7F0A9BD8u: goto label_7F0A9BD8;
    case 0x7F0A9BDCu: goto label_7F0A9BDC;
    case 0x7F0A9BE0u: goto label_7F0A9BE0;
    case 0x7F0A9BE4u: goto label_7F0A9BE4;
    case 0x7F0A9BE8u: goto label_7F0A9BE8;
    case 0x7F0A9BECu: goto label_7F0A9BEC;
    case 0x7F0A9BF0u: goto label_7F0A9BF0;
    case 0x7F0A9BF4u: goto label_7F0A9BF4;
    case 0x7F0A9BF8u: goto label_7F0A9BF8;
    case 0x7F0A9BFCu: goto label_7F0A9BFC;
    case 0x7F0A9C00u: goto label_7F0A9C00;
    case 0x7F0A9C04u: goto label_7F0A9C04;
    case 0x7F0A9C08u: goto label_7F0A9C08;
    case 0x7F0A9C0Cu: goto label_7F0A9C0C;
    case 0x7F0A9C10u: goto label_7F0A9C10;
    case 0x7F0A9C14u: goto label_7F0A9C14;
    case 0x7F0A9C18u: goto label_7F0A9C18;
    case 0x7F0A9C1Cu: goto label_7F0A9C1C;
    case 0x7F0A9C20u: goto label_7F0A9C20;
    case 0x7F0A9C24u: goto label_7F0A9C24;
    case 0x7F0A9C28u: goto label_7F0A9C28;
    case 0x7F0A9C2Cu: goto label_7F0A9C2C;
    case 0x7F0A9C30u: goto label_7F0A9C30;
    case 0x7F0A9C34u: goto label_7F0A9C34;
    case 0x7F0A9C38u: goto label_7F0A9C38;
    case 0x7F0A9C3Cu: goto label_7F0A9C3C;
    case 0x7F0A9C40u: goto label_7F0A9C40;
    case 0x7F0A9C44u: goto label_7F0A9C44;
    case 0x7F0A9C48u: goto label_7F0A9C48;
    case 0x7F0A9C4Cu: goto label_7F0A9C4C;
    case 0x7F0A9C50u: goto label_7F0A9C50;
    case 0x7F0A9C54u: goto label_7F0A9C54;
    case 0x7F0A9C58u: goto label_7F0A9C58;
    case 0x7F0A9C5Cu: goto label_7F0A9C5C;
    case 0x7F0A9C60u: goto label_7F0A9C60;
    case 0x7F0A9C64u: goto label_7F0A9C64;
    case 0x7F0A9C68u: goto label_7F0A9C68;
    case 0x7F0A9C6Cu: goto label_7F0A9C6C;
    case 0x7F0A9C70u: goto label_7F0A9C70;
    case 0x7F0A9C74u: goto label_7F0A9C74;
    case 0x7F0A9C78u: goto label_7F0A9C78;
    case 0x7F0A9C7Cu: goto label_7F0A9C7C;
    case 0x7F0A9C80u: goto label_7F0A9C80;
    case 0x7F0A9C84u: goto label_7F0A9C84;
    case 0x7F0A9C88u: goto label_7F0A9C88;
    case 0x7F0A9C8Cu: goto label_7F0A9C8C;
    case 0x7F0A9C90u: goto label_7F0A9C90;
    case 0x7F0A9C94u: goto label_7F0A9C94;
    case 0x7F0A9C98u: goto label_7F0A9C98;
    case 0x7F0A9C9Cu: goto label_7F0A9C9C;
    case 0x7F0A9CA0u: goto label_7F0A9CA0;
    case 0x7F0A9CA4u: goto label_7F0A9CA4;
    case 0x7F0A9CA8u: goto label_7F0A9CA8;
    case 0x7F0A9CACu: goto label_7F0A9CAC;
    case 0x7F0A9CB0u: goto label_7F0A9CB0;
    case 0x7F0A9CB4u: goto label_7F0A9CB4;
    case 0x7F0A9CB8u: goto label_7F0A9CB8;
    case 0x7F0A9CBCu: goto label_7F0A9CBC;
    case 0x7F0A9CC0u: goto label_7F0A9CC0;
    case 0x7F0A9CC4u: goto label_7F0A9CC4;
    case 0x7F0A9CC8u: goto label_7F0A9CC8;
    case 0x7F0A9CCCu: goto label_7F0A9CCC;
    case 0x7F0A9CD0u: goto label_7F0A9CD0;
    case 0x7F0A9CD4u: goto label_7F0A9CD4;
    case 0x7F0A9CD8u: goto label_7F0A9CD8;
    case 0x7F0A9CDCu: goto label_7F0A9CDC;
    case 0x7F0A9CE0u: goto label_7F0A9CE0;
    case 0x7F0A9CE4u: goto label_7F0A9CE4;
    case 0x7F0A9CE8u: goto label_7F0A9CE8;
    case 0x7F0A9CECu: goto label_7F0A9CEC;
    case 0x7F0A9CF0u: goto label_7F0A9CF0;
    case 0x7F0A9CF4u: goto label_7F0A9CF4;
    case 0x7F0A9CF8u: goto label_7F0A9CF8;
    case 0x7F0A9CFCu: goto label_7F0A9CFC;
    case 0x7F0A9D00u: goto label_7F0A9D00;
    case 0x7F0A9D04u: goto label_7F0A9D04;
    case 0x7F0A9D08u: goto label_7F0A9D08;
    case 0x7F0A9D0Cu: goto label_7F0A9D0C;
    case 0x7F0A9D10u: goto label_7F0A9D10;
    case 0x7F0A9D14u: goto label_7F0A9D14;
    case 0x7F0A9D18u: goto label_7F0A9D18;
    case 0x7F0A9D1Cu: goto label_7F0A9D1C;
    case 0x7F0A9D20u: goto label_7F0A9D20;
    case 0x7F0A9D24u: goto label_7F0A9D24;
    case 0x7F0A9D28u: goto label_7F0A9D28;
    case 0x7F0A9D2Cu: goto label_7F0A9D2C;
    case 0x7F0A9D30u: goto label_7F0A9D30;
    case 0x7F0A9D34u: goto label_7F0A9D34;
    case 0x7F0A9D38u: goto label_7F0A9D38;
    case 0x7F0A9D3Cu: goto label_7F0A9D3C;
    case 0x7F0A9D40u: goto label_7F0A9D40;
    case 0x7F0A9D44u: goto label_7F0A9D44;
    case 0x7F0A9D48u: goto label_7F0A9D48;
    case 0x7F0A9D4Cu: goto label_7F0A9D4C;
    case 0x7F0A9D50u: goto label_7F0A9D50;
    case 0x7F0A9D54u: goto label_7F0A9D54;
    case 0x7F0A9D58u: goto label_7F0A9D58;
    case 0x7F0A9D5Cu: goto label_7F0A9D5C;
    case 0x7F0A9D60u: goto label_7F0A9D60;
    case 0x7F0A9D64u: goto label_7F0A9D64;
    case 0x7F0A9D68u: goto label_7F0A9D68;
    case 0x7F0A9D6Cu: goto label_7F0A9D6C;
    case 0x7F0A9D70u: goto label_7F0A9D70;
    case 0x7F0A9D74u: goto label_7F0A9D74;
    case 0x7F0A9D78u: goto label_7F0A9D78;
    case 0x7F0A9D7Cu: goto label_7F0A9D7C;
    case 0x7F0A9D80u: goto label_7F0A9D80;
    case 0x7F0A9D84u: goto label_7F0A9D84;
    case 0x7F0A9D88u: goto label_7F0A9D88;
    case 0x7F0A9D8Cu: goto label_7F0A9D8C;
    case 0x7F0A9D90u: goto label_7F0A9D90;
    case 0x7F0A9D94u: goto label_7F0A9D94;
    case 0x7F0A9D98u: goto label_7F0A9D98;
    case 0x7F0A9D9Cu: goto label_7F0A9D9C;
    case 0x7F0A9DA0u: goto label_7F0A9DA0;
    case 0x7F0A9DA4u: goto label_7F0A9DA4;
    case 0x7F0A9DA8u: goto label_7F0A9DA8;
    case 0x7F0A9DACu: goto label_7F0A9DAC;
    case 0x7F0A9DB0u: goto label_7F0A9DB0;
    case 0x7F0A9DB4u: goto label_7F0A9DB4;
    case 0x7F0A9DB8u: goto label_7F0A9DB8;
    case 0x7F0A9DBCu: goto label_7F0A9DBC;
    case 0x7F0A9DC0u: goto label_7F0A9DC0;
    case 0x7F0A9DC4u: goto label_7F0A9DC4;
    case 0x7F0A9DC8u: goto label_7F0A9DC8;
    case 0x7F0A9DCCu: goto label_7F0A9DCC;
    case 0x7F0A9DD0u: goto label_7F0A9DD0;
    case 0x7F0A9DD4u: goto label_7F0A9DD4;
    case 0x7F0A9DD8u: goto label_7F0A9DD8;
    case 0x7F0A9DDCu: goto label_7F0A9DDC;
    case 0x7F0A9DE0u: goto label_7F0A9DE0;
    case 0x7F0A9DE4u: goto label_7F0A9DE4;
    case 0x7F0A9DE8u: goto label_7F0A9DE8;
    case 0x7F0A9DECu: goto label_7F0A9DEC;
    case 0x7F0A9DF0u: goto label_7F0A9DF0;
    case 0x7F0A9DF4u: goto label_7F0A9DF4;
    case 0x7F0A9DF8u: goto label_7F0A9DF8;
    case 0x7F0A9DFCu: goto label_7F0A9DFC;
    case 0x7F0A9E00u: goto label_7F0A9E00;
    case 0x7F0A9E04u: goto label_7F0A9E04;
    case 0x7F0A9E08u: goto label_7F0A9E08;
    case 0x7F0A9E0Cu: goto label_7F0A9E0C;
    case 0x7F0A9E10u: goto label_7F0A9E10;
    case 0x7F0A9E14u: goto label_7F0A9E14;
    case 0x7F0A9E18u: goto label_7F0A9E18;
    case 0x7F0A9E1Cu: goto label_7F0A9E1C;
    case 0x7F0A9E20u: goto label_7F0A9E20;
    case 0x7F0A9E24u: goto label_7F0A9E24;
    case 0x7F0A9E28u: goto label_7F0A9E28;
    case 0x7F0A9E2Cu: goto label_7F0A9E2C;
    case 0x7F0A9E30u: goto label_7F0A9E30;
    case 0x7F0A9E34u: goto label_7F0A9E34;
    case 0x7F0A9E38u: goto label_7F0A9E38;
    case 0x7F0A9E3Cu: goto label_7F0A9E3C;
    case 0x7F0A9E40u: goto label_7F0A9E40;
    case 0x7F0A9E44u: goto label_7F0A9E44;
    case 0x7F0A9E48u: goto label_7F0A9E48;
    case 0x7F0A9E4Cu: goto label_7F0A9E4C;
    case 0x7F0A9E50u: goto label_7F0A9E50;
    case 0x7F0A9E54u: goto label_7F0A9E54;
    case 0x7F0A9E58u: goto label_7F0A9E58;
    case 0x7F0A9E5Cu: goto label_7F0A9E5C;
    case 0x7F0A9E60u: goto label_7F0A9E60;
    case 0x7F0A9E64u: goto label_7F0A9E64;
    case 0x7F0A9E68u: goto label_7F0A9E68;
    case 0x7F0A9E6Cu: goto label_7F0A9E6C;
    case 0x7F0A9E70u: goto label_7F0A9E70;
    case 0x7F0A9E74u: goto label_7F0A9E74;
    case 0x7F0A9E78u: goto label_7F0A9E78;
    case 0x7F0A9E7Cu: goto label_7F0A9E7C;
    case 0x7F0A9E80u: goto label_7F0A9E80;
    case 0x7F0A9E84u: goto label_7F0A9E84;
    case 0x7F0A9E88u: goto label_7F0A9E88;
    case 0x7F0A9E8Cu: goto label_7F0A9E8C;
    case 0x7F0A9E90u: goto label_7F0A9E90;
    case 0x7F0A9E94u: goto label_7F0A9E94;
    case 0x7F0A9E98u: goto label_7F0A9E98;
    case 0x7F0A9E9Cu: goto label_7F0A9E9C;
    case 0x7F0A9EA0u: goto label_7F0A9EA0;
    case 0x7F0A9EA4u: goto label_7F0A9EA4;
    case 0x7F0A9EA8u: goto label_7F0A9EA8;
    case 0x7F0A9EACu: goto label_7F0A9EAC;
    case 0x7F0A9EB0u: goto label_7F0A9EB0;
    case 0x7F0A9EB4u: goto label_7F0A9EB4;
    case 0x7F0A9EB8u: goto label_7F0A9EB8;
    case 0x7F0A9EBCu: goto label_7F0A9EBC;
    case 0x7F0A9EC0u: goto label_7F0A9EC0;
    case 0x7F0A9EC4u: goto label_7F0A9EC4;
    case 0x7F0A9EC8u: goto label_7F0A9EC8;
    case 0x7F0A9ECCu: goto label_7F0A9ECC;
    case 0x7F0A9ED0u: goto label_7F0A9ED0;
    case 0x7F0A9ED4u: goto label_7F0A9ED4;
    case 0x7F0A9ED8u: goto label_7F0A9ED8;
    case 0x7F0A9EDCu: goto label_7F0A9EDC;
    case 0x7F0A9EE0u: goto label_7F0A9EE0;
    case 0x7F0A9EE4u: goto label_7F0A9EE4;
    case 0x7F0A9EE8u: goto label_7F0A9EE8;
    case 0x7F0A9EECu: goto label_7F0A9EEC;
    case 0x7F0A9EF0u: goto label_7F0A9EF0;
    case 0x7F0A9EF4u: goto label_7F0A9EF4;
    case 0x7F0A9EF8u: goto label_7F0A9EF8;
    case 0x7F0A9EFCu: goto label_7F0A9EFC;
    case 0x7F0A9F00u: goto label_7F0A9F00;
    case 0x7F0A9F04u: goto label_7F0A9F04;
    case 0x7F0A9F08u: goto label_7F0A9F08;
    case 0x7F0A9F0Cu: goto label_7F0A9F0C;
    case 0x7F0A9F10u: goto label_7F0A9F10;
    case 0x7F0A9F14u: goto label_7F0A9F14;
    case 0x7F0A9F18u: goto label_7F0A9F18;
    case 0x7F0A9F1Cu: goto label_7F0A9F1C;
    case 0x7F0A9F20u: goto label_7F0A9F20;
    case 0x7F0A9F24u: goto label_7F0A9F24;
    case 0x7F0A9F28u: goto label_7F0A9F28;
    case 0x7F0A9F2Cu: goto label_7F0A9F2C;
    case 0x7F0A9F30u: goto label_7F0A9F30;
    case 0x7F0A9F34u: goto label_7F0A9F34;
    case 0x7F0A9F38u: goto label_7F0A9F38;
    case 0x7F0A9F3Cu: goto label_7F0A9F3C;
    case 0x7F0A9F40u: goto label_7F0A9F40;
    case 0x7F0A9F44u: goto label_7F0A9F44;
    case 0x7F0A9F48u: goto label_7F0A9F48;
    case 0x7F0A9F4Cu: goto label_7F0A9F4C;
    case 0x7F0A9F50u: goto label_7F0A9F50;
    case 0x7F0A9F54u: goto label_7F0A9F54;
    case 0x7F0A9F58u: goto label_7F0A9F58;
    case 0x7F0A9F5Cu: goto label_7F0A9F5C;
    case 0x7F0A9F60u: goto label_7F0A9F60;
    case 0x7F0A9F64u: goto label_7F0A9F64;
    case 0x7F0A9F68u: goto label_7F0A9F68;
    case 0x7F0A9F6Cu: goto label_7F0A9F6C;
    case 0x7F0A9F70u: goto label_7F0A9F70;
    case 0x7F0A9F74u: goto label_7F0A9F74;
    case 0x7F0A9F78u: goto label_7F0A9F78;
    case 0x7F0A9F7Cu: goto label_7F0A9F7C;
    case 0x7F0A9F80u: goto label_7F0A9F80;
    case 0x7F0A9F84u: goto label_7F0A9F84;
    case 0x7F0A9F88u: goto label_7F0A9F88;
    case 0x7F0A9F8Cu: goto label_7F0A9F8C;
    case 0x7F0A9F90u: goto label_7F0A9F90;
    case 0x7F0A9F94u: goto label_7F0A9F94;
    case 0x7F0A9F98u: goto label_7F0A9F98;
    case 0x7F0A9F9Cu: goto label_7F0A9F9C;
    case 0x7F0A9FA0u: goto label_7F0A9FA0;
    case 0x7F0A9FA4u: goto label_7F0A9FA4;
    case 0x7F0A9FA8u: goto label_7F0A9FA8;
    case 0x7F0A9FACu: goto label_7F0A9FAC;
    case 0x7F0A9FB0u: goto label_7F0A9FB0;
    case 0x7F0A9FB4u: goto label_7F0A9FB4;
    case 0x7F0A9FB8u: goto label_7F0A9FB8;
    case 0x7F0A9FBCu: goto label_7F0A9FBC;
    case 0x7F0A9FC0u: goto label_7F0A9FC0;
    case 0x7F0A9FC4u: goto label_7F0A9FC4;
    case 0x7F0A9FC8u: goto label_7F0A9FC8;
    case 0x7F0A9FCCu: goto label_7F0A9FCC;
    case 0x7F0A9FD0u: goto label_7F0A9FD0;
    case 0x7F0A9FD4u: goto label_7F0A9FD4;
    case 0x7F0A9FD8u: goto label_7F0A9FD8;
    case 0x7F0A9FDCu: goto label_7F0A9FDC;
    case 0x7F0A9FE0u: goto label_7F0A9FE0;
    case 0x7F0A9FE4u: goto label_7F0A9FE4;
    case 0x7F0A9FE8u: goto label_7F0A9FE8;
    case 0x7F0A9FECu: goto label_7F0A9FEC;
    case 0x7F0A9FF0u: goto label_7F0A9FF0;
    case 0x7F0A9FF4u: goto label_7F0A9FF4;
    case 0x7F0A9FF8u: goto label_7F0A9FF8;
    case 0x7F0A9FFCu: goto label_7F0A9FFC;
    case 0x7F0AA000u: goto label_7F0AA000;
    case 0x7F0AA004u: goto label_7F0AA004;
    case 0x7F0AA008u: goto label_7F0AA008;
    case 0x7F0AA00Cu: goto label_7F0AA00C;
    case 0x7F0AA010u: goto label_7F0AA010;
    case 0x7F0AA014u: goto label_7F0AA014;
    case 0x7F0AA018u: goto label_7F0AA018;
    case 0x7F0AA01Cu: goto label_7F0AA01C;
    case 0x7F0AA020u: goto label_7F0AA020;
    case 0x7F0AA024u: goto label_7F0AA024;
    case 0x7F0AA028u: goto label_7F0AA028;
    case 0x7F0AA02Cu: goto label_7F0AA02C;
    case 0x7F0AA030u: goto label_7F0AA030;
    case 0x7F0AA034u: goto label_7F0AA034;
    case 0x7F0AA038u: goto label_7F0AA038;
    case 0x7F0AA03Cu: goto label_7F0AA03C;
    case 0x7F0AA040u: goto label_7F0AA040;
    case 0x7F0AA044u: goto label_7F0AA044;
    case 0x7F0AA048u: goto label_7F0AA048;
    case 0x7F0AA04Cu: goto label_7F0AA04C;
    case 0x7F0AA050u: goto label_7F0AA050;
    case 0x7F0AA054u: goto label_7F0AA054;
    case 0x7F0AA058u: goto label_7F0AA058;
    case 0x7F0AA05Cu: goto label_7F0AA05C;
    case 0x7F0AA060u: goto label_7F0AA060;
    case 0x7F0AA064u: goto label_7F0AA064;
    case 0x7F0AA068u: goto label_7F0AA068;
    case 0x7F0AA06Cu: goto label_7F0AA06C;
    case 0x7F0AA070u: goto label_7F0AA070;
    case 0x7F0AA074u: goto label_7F0AA074;
    case 0x7F0AA078u: goto label_7F0AA078;
    case 0x7F0AA07Cu: goto label_7F0AA07C;
    case 0x7F0AA080u: goto label_7F0AA080;
    case 0x7F0AA084u: goto label_7F0AA084;
    case 0x7F0AA088u: goto label_7F0AA088;
    case 0x7F0AA08Cu: goto label_7F0AA08C;
    case 0x7F0AA090u: goto label_7F0AA090;
    case 0x7F0AA094u: goto label_7F0AA094;
    case 0x7F0AA098u: goto label_7F0AA098;
    case 0x7F0AA09Cu: goto label_7F0AA09C;
    case 0x7F0AA0A0u: goto label_7F0AA0A0;
    case 0x7F0AA0A4u: goto label_7F0AA0A4;
    case 0x7F0AA0A8u: goto label_7F0AA0A8;
    case 0x7F0AA0ACu: goto label_7F0AA0AC;
    case 0x7F0AA0B0u: goto label_7F0AA0B0;
    case 0x7F0AA0B4u: goto label_7F0AA0B4;
    case 0x7F0AA0B8u: goto label_7F0AA0B8;
    case 0x7F0AA0BCu: goto label_7F0AA0BC;
    case 0x7F0AA0C0u: goto label_7F0AA0C0;
    case 0x7F0AA0C4u: goto label_7F0AA0C4;
    case 0x7F0AA0C8u: goto label_7F0AA0C8;
    case 0x7F0AA0CCu: goto label_7F0AA0CC;
    case 0x7F0AA0D0u: goto label_7F0AA0D0;
    case 0x7F0AA0D4u: goto label_7F0AA0D4;
    case 0x7F0AA0D8u: goto label_7F0AA0D8;
    case 0x7F0AA0DCu: goto label_7F0AA0DC;
    case 0x7F0AA0E0u: goto label_7F0AA0E0;
    case 0x7F0AA0E4u: goto label_7F0AA0E4;
    case 0x7F0AA0E8u: goto label_7F0AA0E8;
    case 0x7F0AA0ECu: goto label_7F0AA0EC;
    case 0x7F0AA0F0u: goto label_7F0AA0F0;
    case 0x7F0AA0F4u: goto label_7F0AA0F4;
    case 0x7F0AA0F8u: goto label_7F0AA0F8;
    case 0x7F0AA0FCu: goto label_7F0AA0FC;
    case 0x7F0AA100u: goto label_7F0AA100;
    case 0x7F0AA104u: goto label_7F0AA104;
    case 0x7F0AA108u: goto label_7F0AA108;
    case 0x7F0AA10Cu: goto label_7F0AA10C;
    case 0x7F0AA110u: goto label_7F0AA110;
    case 0x7F0AA114u: goto label_7F0AA114;
    case 0x7F0AA118u: goto label_7F0AA118;
    case 0x7F0AA11Cu: goto label_7F0AA11C;
    case 0x7F0AA120u: goto label_7F0AA120;
    case 0x7F0AA124u: goto label_7F0AA124;
    case 0x7F0AA128u: goto label_7F0AA128;
    case 0x7F0AA12Cu: goto label_7F0AA12C;
    case 0x7F0AA130u: goto label_7F0AA130;
    case 0x7F0AA134u: goto label_7F0AA134;
    case 0x7F0AA138u: goto label_7F0AA138;
    case 0x7F0AA13Cu: goto label_7F0AA13C;
    case 0x7F0AA140u: goto label_7F0AA140;
    case 0x7F0AA144u: goto label_7F0AA144;
    case 0x7F0AA148u: goto label_7F0AA148;
    case 0x7F0AA14Cu: goto label_7F0AA14C;
    case 0x7F0AA150u: goto label_7F0AA150;
    case 0x7F0AA154u: goto label_7F0AA154;
    case 0x7F0AA158u: goto label_7F0AA158;
    case 0x7F0AA15Cu: goto label_7F0AA15C;
    case 0x7F0AA160u: goto label_7F0AA160;
    case 0x7F0AA164u: goto label_7F0AA164;
    case 0x7F0AA168u: goto label_7F0AA168;
    case 0x7F0AA16Cu: goto label_7F0AA16C;
    case 0x7F0AA170u: goto label_7F0AA170;
    case 0x7F0AA174u: goto label_7F0AA174;
    case 0x7F0AA178u: goto label_7F0AA178;
    case 0x7F0AA17Cu: goto label_7F0AA17C;
    case 0x7F0AA180u: goto label_7F0AA180;
    case 0x7F0AA184u: goto label_7F0AA184;
    case 0x7F0AA188u: goto label_7F0AA188;
    case 0x7F0AA18Cu: goto label_7F0AA18C;
    case 0x7F0AA190u: goto label_7F0AA190;
    case 0x7F0AA194u: goto label_7F0AA194;
    case 0x7F0AA198u: goto label_7F0AA198;
    case 0x7F0AA19Cu: goto label_7F0AA19C;
    case 0x7F0AA1A0u: goto label_7F0AA1A0;
    case 0x7F0AA1A4u: goto label_7F0AA1A4;
    case 0x7F0AA1A8u: goto label_7F0AA1A8;
    case 0x7F0AA1ACu: goto label_7F0AA1AC;
    case 0x7F0AA1B0u: goto label_7F0AA1B0;
    case 0x7F0AA1B4u: goto label_7F0AA1B4;
    case 0x7F0AA1B8u: goto label_7F0AA1B8;
    case 0x7F0AA1BCu: goto label_7F0AA1BC;
    case 0x7F0AA1C0u: goto label_7F0AA1C0;
    case 0x7F0AA1C4u: goto label_7F0AA1C4;
    case 0x7F0AA1C8u: goto label_7F0AA1C8;
    case 0x7F0AA1CCu: goto label_7F0AA1CC;
    case 0x7F0AA1D0u: goto label_7F0AA1D0;
    case 0x7F0AA1D4u: goto label_7F0AA1D4;
    case 0x7F0AA1D8u: goto label_7F0AA1D8;
    case 0x7F0AA1DCu: goto label_7F0AA1DC;
    case 0x7F0AA1E0u: goto label_7F0AA1E0;
    case 0x7F0AA1E4u: goto label_7F0AA1E4;
    case 0x7F0AA1E8u: goto label_7F0AA1E8;
    case 0x7F0AA1ECu: goto label_7F0AA1EC;
    case 0x7F0AA1F0u: goto label_7F0AA1F0;
    case 0x7F0AA1F4u: goto label_7F0AA1F4;
    case 0x7F0AA1F8u: goto label_7F0AA1F8;
    case 0x7F0AA1FCu: goto label_7F0AA1FC;
    case 0x7F0AA200u: goto label_7F0AA200;
    case 0x7F0AA204u: goto label_7F0AA204;
    case 0x7F0AA208u: goto label_7F0AA208;
    case 0x7F0AA20Cu: goto label_7F0AA20C;
    case 0x7F0AA210u: goto label_7F0AA210;
    case 0x7F0AA214u: goto label_7F0AA214;
    case 0x7F0AA218u: goto label_7F0AA218;
    case 0x7F0AA21Cu: goto label_7F0AA21C;
    case 0x7F0AA220u: goto label_7F0AA220;
    case 0x7F0AA224u: goto label_7F0AA224;
    case 0x7F0AA228u: goto label_7F0AA228;
    case 0x7F0AA22Cu: goto label_7F0AA22C;
    case 0x7F0AA230u: goto label_7F0AA230;
    case 0x7F0AA234u: goto label_7F0AA234;
    case 0x7F0AA238u: goto label_7F0AA238;
    case 0x7F0AA23Cu: goto label_7F0AA23C;
    case 0x7F0AA240u: goto label_7F0AA240;
    case 0x7F0AA244u: goto label_7F0AA244;
    case 0x7F0AA248u: goto label_7F0AA248;
    case 0x7F0AA24Cu: goto label_7F0AA24C;
    case 0x7F0AA250u: goto label_7F0AA250;
    case 0x7F0AA254u: goto label_7F0AA254;
    case 0x7F0AA258u: goto label_7F0AA258;
    case 0x7F0AA25Cu: goto label_7F0AA25C;
    case 0x7F0AA260u: goto label_7F0AA260;
    case 0x7F0AA264u: goto label_7F0AA264;
    case 0x7F0AA268u: goto label_7F0AA268;
    case 0x7F0AA26Cu: goto label_7F0AA26C;
    case 0x7F0AA270u: goto label_7F0AA270;
    case 0x7F0AA274u: goto label_7F0AA274;
    case 0x7F0AA278u: goto label_7F0AA278;
    case 0x7F0AA27Cu: goto label_7F0AA27C;
    case 0x7F0AA280u: goto label_7F0AA280;
    case 0x7F0AA284u: goto label_7F0AA284;
    case 0x7F0AA288u: goto label_7F0AA288;
    case 0x7F0AA28Cu: goto label_7F0AA28C;
    case 0x7F0AA290u: goto label_7F0AA290;
    case 0x7F0AA294u: goto label_7F0AA294;
    case 0x7F0AA298u: goto label_7F0AA298;
    case 0x7F0AA29Cu: goto label_7F0AA29C;
    case 0x7F0AA2A0u: goto label_7F0AA2A0;
    case 0x7F0AA2A4u: goto label_7F0AA2A4;
    case 0x7F0AA2A8u: goto label_7F0AA2A8;
    case 0x7F0AA2ACu: goto label_7F0AA2AC;
    case 0x7F0AA2B0u: goto label_7F0AA2B0;
    case 0x7F0AA2B4u: goto label_7F0AA2B4;
    case 0x7F0AA2B8u: goto label_7F0AA2B8;
    case 0x7F0AA2BCu: goto label_7F0AA2BC;
    case 0x7F0AA2C0u: goto label_7F0AA2C0;
    case 0x7F0AA2C4u: goto label_7F0AA2C4;
    case 0x7F0AA2C8u: goto label_7F0AA2C8;
    case 0x7F0AA2CCu: goto label_7F0AA2CC;
    case 0x7F0AA2D0u: goto label_7F0AA2D0;
    case 0x7F0AA2D4u: goto label_7F0AA2D4;
    case 0x7F0AA2D8u: goto label_7F0AA2D8;
    case 0x7F0AA2DCu: goto label_7F0AA2DC;
    case 0x7F0AA2E0u: goto label_7F0AA2E0;
    case 0x7F0AA2E4u: goto label_7F0AA2E4;
    case 0x7F0AA2E8u: goto label_7F0AA2E8;
    case 0x7F0AA2ECu: goto label_7F0AA2EC;
    case 0x7F0AA2F0u: goto label_7F0AA2F0;
    case 0x7F0AA2F4u: goto label_7F0AA2F4;
    case 0x7F0AA2F8u: goto label_7F0AA2F8;
    case 0x7F0AA2FCu: goto label_7F0AA2FC;
    case 0x7F0AA300u: goto label_7F0AA300;
    case 0x7F0AA304u: goto label_7F0AA304;
    case 0x7F0AA308u: goto label_7F0AA308;
    case 0x7F0AA30Cu: goto label_7F0AA30C;
    case 0x7F0AA310u: goto label_7F0AA310;
    case 0x7F0AA314u: goto label_7F0AA314;
    case 0x7F0AA318u: goto label_7F0AA318;
    case 0x7F0AA31Cu: goto label_7F0AA31C;
    case 0x7F0AA320u: goto label_7F0AA320;
    case 0x7F0AA324u: goto label_7F0AA324;
    case 0x7F0AA328u: goto label_7F0AA328;
    case 0x7F0AA32Cu: goto label_7F0AA32C;
    case 0x7F0AA330u: goto label_7F0AA330;
    case 0x7F0AA334u: goto label_7F0AA334;
    case 0x7F0AA338u: goto label_7F0AA338;
    case 0x7F0AA33Cu: goto label_7F0AA33C;
    case 0x7F0AA340u: goto label_7F0AA340;
    case 0x7F0AA344u: goto label_7F0AA344;
    case 0x7F0AA348u: goto label_7F0AA348;
    case 0x7F0AA34Cu: goto label_7F0AA34C;
    case 0x7F0AA350u: goto label_7F0AA350;
    case 0x7F0AA354u: goto label_7F0AA354;
    case 0x7F0AA358u: goto label_7F0AA358;
    case 0x7F0AA35Cu: goto label_7F0AA35C;
    case 0x7F0AA360u: goto label_7F0AA360;
    case 0x7F0AA364u: goto label_7F0AA364;
    case 0x7F0AA368u: goto label_7F0AA368;
    case 0x7F0AA36Cu: goto label_7F0AA36C;
    case 0x7F0AA370u: goto label_7F0AA370;
    case 0x7F0AA374u: goto label_7F0AA374;
    case 0x7F0AA378u: goto label_7F0AA378;
    case 0x7F0AA37Cu: goto label_7F0AA37C;
    case 0x7F0AA380u: goto label_7F0AA380;
    case 0x7F0AA384u: goto label_7F0AA384;
    case 0x7F0AA388u: goto label_7F0AA388;
    case 0x7F0AA38Cu: goto label_7F0AA38C;
    case 0x7F0AA390u: goto label_7F0AA390;
    case 0x7F0AA394u: goto label_7F0AA394;
    case 0x7F0AA398u: goto label_7F0AA398;
    case 0x7F0AA39Cu: goto label_7F0AA39C;
    case 0x7F0AA3A0u: goto label_7F0AA3A0;
    case 0x7F0AA3A4u: goto label_7F0AA3A4;
    case 0x7F0AA3A8u: goto label_7F0AA3A8;
    case 0x7F0AA3ACu: goto label_7F0AA3AC;
    case 0x7F0AA3B0u: goto label_7F0AA3B0;
    case 0x7F0AA3B4u: goto label_7F0AA3B4;
    case 0x7F0AA3B8u: goto label_7F0AA3B8;
    case 0x7F0AA3BCu: goto label_7F0AA3BC;
    case 0x7F0AA3C0u: goto label_7F0AA3C0;
    case 0x7F0AA3C4u: goto label_7F0AA3C4;
    case 0x7F0AA3C8u: goto label_7F0AA3C8;
    case 0x7F0AA3CCu: goto label_7F0AA3CC;
    case 0x7F0AA3D0u: goto label_7F0AA3D0;
    case 0x7F0AA3D4u: goto label_7F0AA3D4;
    case 0x7F0AA3D8u: goto label_7F0AA3D8;
    case 0x7F0AA3DCu: goto label_7F0AA3DC;
    case 0x7F0AA3E0u: goto label_7F0AA3E0;
    case 0x7F0AA3E4u: goto label_7F0AA3E4;
    case 0x7F0AA3E8u: goto label_7F0AA3E8;
    case 0x7F0AA3ECu: goto label_7F0AA3EC;
    case 0x7F0AA3F0u: goto label_7F0AA3F0;
    case 0x7F0AA3F4u: goto label_7F0AA3F4;
    case 0x7F0AA3F8u: goto label_7F0AA3F8;
    case 0x7F0AA3FCu: goto label_7F0AA3FC;
    case 0x7F0AA400u: goto label_7F0AA400;
    case 0x7F0AA404u: goto label_7F0AA404;
    case 0x7F0AA408u: goto label_7F0AA408;
    case 0x7F0AA40Cu: goto label_7F0AA40C;
    case 0x7F0AA410u: goto label_7F0AA410;
    case 0x7F0AA414u: goto label_7F0AA414;
    case 0x7F0AA418u: goto label_7F0AA418;
    case 0x7F0AA41Cu: goto label_7F0AA41C;
    case 0x7F0AA420u: goto label_7F0AA420;
    case 0x7F0AA424u: goto label_7F0AA424;
    case 0x7F0AA428u: goto label_7F0AA428;
    case 0x7F0AA42Cu: goto label_7F0AA42C;
    case 0x7F0AA430u: goto label_7F0AA430;
    case 0x7F0AA434u: goto label_7F0AA434;
    case 0x7F0AA438u: goto label_7F0AA438;
    case 0x7F0AA43Cu: goto label_7F0AA43C;
    case 0x7F0AA440u: goto label_7F0AA440;
    case 0x7F0AA444u: goto label_7F0AA444;
    case 0x7F0AA448u: goto label_7F0AA448;
    case 0x7F0AA44Cu: goto label_7F0AA44C;
    case 0x7F0AA450u: goto label_7F0AA450;
    case 0x7F0AA454u: goto label_7F0AA454;
    case 0x7F0AA458u: goto label_7F0AA458;
    case 0x7F0AA45Cu: goto label_7F0AA45C;
    case 0x7F0AA460u: goto label_7F0AA460;
    case 0x7F0AA464u: goto label_7F0AA464;
    case 0x7F0AA468u: goto label_7F0AA468;
    case 0x7F0AA46Cu: goto label_7F0AA46C;
    case 0x7F0AA470u: goto label_7F0AA470;
    case 0x7F0AA474u: goto label_7F0AA474;
    case 0x7F0AA478u: goto label_7F0AA478;
    case 0x7F0AA47Cu: goto label_7F0AA47C;
    case 0x7F0AA480u: goto label_7F0AA480;
    case 0x7F0AA484u: goto label_7F0AA484;
    case 0x7F0AA488u: goto label_7F0AA488;
    case 0x7F0AA48Cu: goto label_7F0AA48C;
    case 0x7F0AA490u: goto label_7F0AA490;
    case 0x7F0AA494u: goto label_7F0AA494;
    case 0x7F0AA498u: goto label_7F0AA498;
    case 0x7F0AA49Cu: goto label_7F0AA49C;
    case 0x7F0AA4A0u: goto label_7F0AA4A0;
    case 0x7F0AA4A4u: goto label_7F0AA4A4;
    case 0x7F0AA4A8u: goto label_7F0AA4A8;
    case 0x7F0AA4ACu: goto label_7F0AA4AC;
    case 0x7F0AA4B0u: goto label_7F0AA4B0;
    case 0x7F0AA4B4u: goto label_7F0AA4B4;
    case 0x7F0AA4B8u: goto label_7F0AA4B8;
    case 0x7F0AA4BCu: goto label_7F0AA4BC;
    case 0x7F0AA4C0u: goto label_7F0AA4C0;
    case 0x7F0AA4C4u: goto label_7F0AA4C4;
    case 0x7F0AA4C8u: goto label_7F0AA4C8;
    case 0x7F0AA4CCu: goto label_7F0AA4CC;
    case 0x7F0AA4D0u: goto label_7F0AA4D0;
    case 0x7F0AA4D4u: goto label_7F0AA4D4;
    case 0x7F0AA4D8u: goto label_7F0AA4D8;
    case 0x7F0AA4DCu: goto label_7F0AA4DC;
    case 0x7F0AA4E0u: goto label_7F0AA4E0;
    case 0x7F0AA4E4u: goto label_7F0AA4E4;
    case 0x7F0AA4E8u: goto label_7F0AA4E8;
    case 0x7F0AA4ECu: goto label_7F0AA4EC;
    case 0x7F0AA4F0u: goto label_7F0AA4F0;
    case 0x7F0AA4F4u: goto label_7F0AA4F4;
    case 0x7F0AA4F8u: goto label_7F0AA4F8;
    case 0x7F0AA4FCu: goto label_7F0AA4FC;
    case 0x7F0AA500u: goto label_7F0AA500;
    case 0x7F0AA504u: goto label_7F0AA504;
    case 0x7F0AA508u: goto label_7F0AA508;
    case 0x7F0AA50Cu: goto label_7F0AA50C;
    case 0x7F0AA510u: goto label_7F0AA510;
    case 0x7F0AA514u: goto label_7F0AA514;
    case 0x7F0AA518u: goto label_7F0AA518;
    case 0x7F0AA51Cu: goto label_7F0AA51C;
    case 0x7F0AA520u: goto label_7F0AA520;
    case 0x7F0AA524u: goto label_7F0AA524;
    case 0x7F0AA528u: goto label_7F0AA528;
    case 0x7F0AA52Cu: goto label_7F0AA52C;
    case 0x7F0AA530u: goto label_7F0AA530;
    case 0x7F0AA534u: goto label_7F0AA534;
    case 0x7F0AA538u: goto label_7F0AA538;
    case 0x7F0AA53Cu: goto label_7F0AA53C;
    case 0x7F0AA540u: goto label_7F0AA540;
    case 0x7F0AA544u: goto label_7F0AA544;
    case 0x7F0AA548u: goto label_7F0AA548;
    case 0x7F0AA54Cu: goto label_7F0AA54C;
    case 0x7F0AA550u: goto label_7F0AA550;
    case 0x7F0AA554u: goto label_7F0AA554;
    case 0x7F0AA558u: goto label_7F0AA558;
    case 0x7F0AA55Cu: goto label_7F0AA55C;
    case 0x7F0AA560u: goto label_7F0AA560;
    case 0x7F0AA564u: goto label_7F0AA564;
    case 0x7F0AA568u: goto label_7F0AA568;
    case 0x7F0AA56Cu: goto label_7F0AA56C;
    case 0x7F0AA570u: goto label_7F0AA570;
    case 0x7F0AA574u: goto label_7F0AA574;
    case 0x7F0AA578u: goto label_7F0AA578;
    case 0x7F0AA57Cu: goto label_7F0AA57C;
    case 0x7F0AA580u: goto label_7F0AA580;
    case 0x7F0AA584u: goto label_7F0AA584;
    case 0x7F0AA588u: goto label_7F0AA588;
    case 0x7F0AA58Cu: goto label_7F0AA58C;
    case 0x7F0AA590u: goto label_7F0AA590;
    case 0x7F0AA594u: goto label_7F0AA594;
    case 0x7F0AA598u: goto label_7F0AA598;
    case 0x7F0AA59Cu: goto label_7F0AA59C;
    case 0x7F0AA5A0u: goto label_7F0AA5A0;
    case 0x7F0AA5A4u: goto label_7F0AA5A4;
    case 0x7F0AA5A8u: goto label_7F0AA5A8;
    case 0x7F0AA5ACu: goto label_7F0AA5AC;
    case 0x7F0AA5B0u: goto label_7F0AA5B0;
    case 0x7F0AA5B4u: goto label_7F0AA5B4;
    case 0x7F0AA5B8u: goto label_7F0AA5B8;
    case 0x7F0AA5BCu: goto label_7F0AA5BC;
    case 0x7F0AA5C0u: goto label_7F0AA5C0;
    case 0x7F0AA5C4u: goto label_7F0AA5C4;
    case 0x7F0AA5C8u: goto label_7F0AA5C8;
    case 0x7F0AA5CCu: goto label_7F0AA5CC;
    case 0x7F0AA5D0u: goto label_7F0AA5D0;
    case 0x7F0AA5D4u: goto label_7F0AA5D4;
    case 0x7F0AA5D8u: goto label_7F0AA5D8;
    case 0x7F0AA5DCu: goto label_7F0AA5DC;
    case 0x7F0AA5E0u: goto label_7F0AA5E0;
    case 0x7F0AA5E4u: goto label_7F0AA5E4;
    case 0x7F0AA5E8u: goto label_7F0AA5E8;
    case 0x7F0AA5ECu: goto label_7F0AA5EC;
    case 0x7F0AA5F0u: goto label_7F0AA5F0;
    case 0x7F0AA5F4u: goto label_7F0AA5F4;
    case 0x7F0AA5F8u: goto label_7F0AA5F8;
    case 0x7F0AA5FCu: goto label_7F0AA5FC;
    case 0x7F0AA600u: goto label_7F0AA600;
    case 0x7F0AA604u: goto label_7F0AA604;
    case 0x7F0AA608u: goto label_7F0AA608;
    case 0x7F0AA60Cu: goto label_7F0AA60C;
    case 0x7F0AA610u: goto label_7F0AA610;
    case 0x7F0AA614u: goto label_7F0AA614;
    case 0x7F0AA618u: goto label_7F0AA618;
    case 0x7F0AA61Cu: goto label_7F0AA61C;
    case 0x7F0AA620u: goto label_7F0AA620;
    case 0x7F0AA624u: goto label_7F0AA624;
    case 0x7F0AA628u: goto label_7F0AA628;
    case 0x7F0AA62Cu: goto label_7F0AA62C;
    case 0x7F0AA630u: goto label_7F0AA630;
    case 0x7F0AA634u: goto label_7F0AA634;
    case 0x7F0AA638u: goto label_7F0AA638;
    case 0x7F0AA63Cu: goto label_7F0AA63C;
    case 0x7F0AA640u: goto label_7F0AA640;
    case 0x7F0AA644u: goto label_7F0AA644;
    case 0x7F0AA648u: goto label_7F0AA648;
    case 0x7F0AA64Cu: goto label_7F0AA64C;
    case 0x7F0AA650u: goto label_7F0AA650;
    case 0x7F0AA654u: goto label_7F0AA654;
    case 0x7F0AA658u: goto label_7F0AA658;
    case 0x7F0AA65Cu: goto label_7F0AA65C;
    case 0x7F0AA660u: goto label_7F0AA660;
    case 0x7F0AA664u: goto label_7F0AA664;
    case 0x7F0AA668u: goto label_7F0AA668;
    case 0x7F0AA66Cu: goto label_7F0AA66C;
    case 0x7F0AA670u: goto label_7F0AA670;
    case 0x7F0AA674u: goto label_7F0AA674;
    case 0x7F0AA678u: goto label_7F0AA678;
    case 0x7F0AA67Cu: goto label_7F0AA67C;
    case 0x7F0AA680u: goto label_7F0AA680;
    case 0x7F0AA684u: goto label_7F0AA684;
    case 0x7F0AA688u: goto label_7F0AA688;
    case 0x7F0AA68Cu: goto label_7F0AA68C;
    case 0x7F0AA690u: goto label_7F0AA690;
    case 0x7F0AA694u: goto label_7F0AA694;
    case 0x7F0AA698u: goto label_7F0AA698;
    case 0x7F0AA69Cu: goto label_7F0AA69C;
    case 0x7F0AA6A0u: goto label_7F0AA6A0;
    case 0x7F0AA6A4u: goto label_7F0AA6A4;
    case 0x7F0AA6A8u: goto label_7F0AA6A8;
    case 0x7F0AA6ACu: goto label_7F0AA6AC;
    case 0x7F0AA6B0u: goto label_7F0AA6B0;
    case 0x7F0AA6B4u: goto label_7F0AA6B4;
    case 0x7F0AA6B8u: goto label_7F0AA6B8;
    case 0x7F0AA6BCu: goto label_7F0AA6BC;
    case 0x7F0AA6C0u: goto label_7F0AA6C0;
    case 0x7F0AA6C4u: goto label_7F0AA6C4;
    case 0x7F0AA6C8u: goto label_7F0AA6C8;
    case 0x7F0AA6CCu: goto label_7F0AA6CC;
    case 0x7F0AA6D0u: goto label_7F0AA6D0;
    case 0x7F0AA6D4u: goto label_7F0AA6D4;
    case 0x7F0AA6D8u: goto label_7F0AA6D8;
    case 0x7F0AA6DCu: goto label_7F0AA6DC;
    case 0x7F0AA6E0u: goto label_7F0AA6E0;
    case 0x7F0AA6E4u: goto label_7F0AA6E4;
    case 0x7F0AA6E8u: goto label_7F0AA6E8;
    case 0x7F0AA6ECu: goto label_7F0AA6EC;
    case 0x7F0AA6F0u: goto label_7F0AA6F0;
    case 0x7F0AA6F4u: goto label_7F0AA6F4;
    case 0x7F0AA6F8u: goto label_7F0AA6F8;
    case 0x7F0AA6FCu: goto label_7F0AA6FC;
    case 0x7F0AA700u: goto label_7F0AA700;
    case 0x7F0AA704u: goto label_7F0AA704;
    case 0x7F0AA708u: goto label_7F0AA708;
    case 0x7F0AA70Cu: goto label_7F0AA70C;
    case 0x7F0AA710u: goto label_7F0AA710;
    case 0x7F0AA714u: goto label_7F0AA714;
    case 0x7F0AA718u: goto label_7F0AA718;
    case 0x7F0AA71Cu: goto label_7F0AA71C;
    case 0x7F0AA720u: goto label_7F0AA720;
    case 0x7F0AA724u: goto label_7F0AA724;
    case 0x7F0AA728u: goto label_7F0AA728;
    case 0x7F0AA72Cu: goto label_7F0AA72C;
    case 0x7F0AA730u: goto label_7F0AA730;
    case 0x7F0AA734u: goto label_7F0AA734;
    case 0x7F0AA738u: goto label_7F0AA738;
    case 0x7F0AA73Cu: goto label_7F0AA73C;
    case 0x7F0AA740u: goto label_7F0AA740;
    case 0x7F0AA744u: goto label_7F0AA744;
    case 0x7F0AA748u: goto label_7F0AA748;
    case 0x7F0AA74Cu: goto label_7F0AA74C;
    case 0x7F0AA750u: goto label_7F0AA750;
    case 0x7F0AA754u: goto label_7F0AA754;
    case 0x7F0AA758u: goto label_7F0AA758;
    case 0x7F0AA75Cu: goto label_7F0AA75C;
    case 0x7F0AA760u: goto label_7F0AA760;
    case 0x7F0AA764u: goto label_7F0AA764;
    case 0x7F0AA768u: goto label_7F0AA768;
    case 0x7F0AA76Cu: goto label_7F0AA76C;
    case 0x7F0AA770u: goto label_7F0AA770;
    case 0x7F0AA774u: goto label_7F0AA774;
    case 0x7F0AA778u: goto label_7F0AA778;
    case 0x7F0AA77Cu: goto label_7F0AA77C;
    case 0x7F0AA780u: goto label_7F0AA780;
    case 0x7F0AA784u: goto label_7F0AA784;
    case 0x7F0AA788u: goto label_7F0AA788;
    case 0x7F0AA78Cu: goto label_7F0AA78C;
    case 0x7F0AA790u: goto label_7F0AA790;
    case 0x7F0AA794u: goto label_7F0AA794;
    case 0x7F0AA798u: goto label_7F0AA798;
    case 0x7F0AA79Cu: goto label_7F0AA79C;
    case 0x7F0AA7A0u: goto label_7F0AA7A0;
    case 0x7F0AA7A4u: goto label_7F0AA7A4;
    case 0x7F0AA7A8u: goto label_7F0AA7A8;
    case 0x7F0AA7ACu: goto label_7F0AA7AC;
    case 0x7F0AA7B0u: goto label_7F0AA7B0;
    case 0x7F0AA7B4u: goto label_7F0AA7B4;
    case 0x7F0AA7B8u: goto label_7F0AA7B8;
    case 0x7F0AA7BCu: goto label_7F0AA7BC;
    case 0x7F0AA7C0u: goto label_7F0AA7C0;
    case 0x7F0AA7C4u: goto label_7F0AA7C4;
    case 0x7F0AA7C8u: goto label_7F0AA7C8;
    case 0x7F0AA7CCu: goto label_7F0AA7CC;
    case 0x7F0AA7D0u: goto label_7F0AA7D0;
    case 0x7F0AA7D4u: goto label_7F0AA7D4;
    case 0x7F0AA7D8u: goto label_7F0AA7D8;
    case 0x7F0AA7DCu: goto label_7F0AA7DC;
    case 0x7F0AA7E0u: goto label_7F0AA7E0;
    case 0x7F0AA7E4u: goto label_7F0AA7E4;
    case 0x7F0AA7E8u: goto label_7F0AA7E8;
    case 0x7F0AA7ECu: goto label_7F0AA7EC;
    case 0x7F0AA7F0u: goto label_7F0AA7F0;
    case 0x7F0AA7F4u: goto label_7F0AA7F4;
    case 0x7F0AA7F8u: goto label_7F0AA7F8;
    case 0x7F0AA7FCu: goto label_7F0AA7FC;
    case 0x7F0AA800u: goto label_7F0AA800;
    case 0x7F0AA804u: goto label_7F0AA804;
    case 0x7F0AA808u: goto label_7F0AA808;
    case 0x7F0AA80Cu: goto label_7F0AA80C;
    case 0x7F0AA810u: goto label_7F0AA810;
    case 0x7F0AA814u: goto label_7F0AA814;
    case 0x7F0AA818u: goto label_7F0AA818;
    case 0x7F0AA81Cu: goto label_7F0AA81C;
    case 0x7F0AA820u: goto label_7F0AA820;
    case 0x7F0AA824u: goto label_7F0AA824;
    case 0x7F0AA828u: goto label_7F0AA828;
    case 0x7F0AA82Cu: goto label_7F0AA82C;
    case 0x7F0AA830u: goto label_7F0AA830;
    case 0x7F0AA834u: goto label_7F0AA834;
    case 0x7F0AA838u: goto label_7F0AA838;
    case 0x7F0AA83Cu: goto label_7F0AA83C;
    case 0x7F0AA840u: goto label_7F0AA840;
    case 0x7F0AA844u: goto label_7F0AA844;
    case 0x7F0AA848u: goto label_7F0AA848;
    case 0x7F0AA84Cu: goto label_7F0AA84C;
    case 0x7F0AA850u: goto label_7F0AA850;
    case 0x7F0AA854u: goto label_7F0AA854;
    case 0x7F0AA858u: goto label_7F0AA858;
    case 0x7F0AA85Cu: goto label_7F0AA85C;
    case 0x7F0AA860u: goto label_7F0AA860;
    case 0x7F0AA864u: goto label_7F0AA864;
    case 0x7F0AA868u: goto label_7F0AA868;
    case 0x7F0AA86Cu: goto label_7F0AA86C;
    case 0x7F0AA870u: goto label_7F0AA870;
    case 0x7F0AA874u: goto label_7F0AA874;
    case 0x7F0AA878u: goto label_7F0AA878;
    case 0x7F0AA87Cu: goto label_7F0AA87C;
    case 0x7F0AA880u: goto label_7F0AA880;
    case 0x7F0AA884u: goto label_7F0AA884;
    case 0x7F0AA888u: goto label_7F0AA888;
    case 0x7F0AA88Cu: goto label_7F0AA88C;
    case 0x7F0AA890u: goto label_7F0AA890;
    case 0x7F0AA894u: goto label_7F0AA894;
    case 0x7F0AA898u: goto label_7F0AA898;
    case 0x7F0AA89Cu: goto label_7F0AA89C;
    case 0x7F0AA8A0u: goto label_7F0AA8A0;
    case 0x7F0AA8A4u: goto label_7F0AA8A4;
    case 0x7F0AA8A8u: goto label_7F0AA8A8;
    case 0x7F0AA8ACu: goto label_7F0AA8AC;
    case 0x7F0AA8B0u: goto label_7F0AA8B0;
    case 0x7F0AA8B4u: goto label_7F0AA8B4;
    case 0x7F0AA8B8u: goto label_7F0AA8B8;
    case 0x7F0AA8BCu: goto label_7F0AA8BC;
    case 0x7F0AA8C0u: goto label_7F0AA8C0;
    case 0x7F0AA8C4u: goto label_7F0AA8C4;
    case 0x7F0AA8C8u: goto label_7F0AA8C8;
    case 0x7F0AA8CCu: goto label_7F0AA8CC;
    case 0x7F0AA8D0u: goto label_7F0AA8D0;
    case 0x7F0AA8D4u: goto label_7F0AA8D4;
    case 0x7F0AA8D8u: goto label_7F0AA8D8;
    case 0x7F0AA8DCu: goto label_7F0AA8DC;
    case 0x7F0AA8E0u: goto label_7F0AA8E0;
    case 0x7F0AA8E4u: goto label_7F0AA8E4;
    case 0x7F0AA8E8u: goto label_7F0AA8E8;
    case 0x7F0AA8ECu: goto label_7F0AA8EC;
    case 0x7F0AA8F0u: goto label_7F0AA8F0;
    case 0x7F0AA8F4u: goto label_7F0AA8F4;
    case 0x7F0AA8F8u: goto label_7F0AA8F8;
    case 0x7F0AA8FCu: goto label_7F0AA8FC;
    case 0x7F0AA900u: goto label_7F0AA900;
    case 0x7F0AA904u: goto label_7F0AA904;
    case 0x7F0AA908u: goto label_7F0AA908;
    case 0x7F0AA90Cu: goto label_7F0AA90C;
    case 0x7F0AA910u: goto label_7F0AA910;
    case 0x7F0AA914u: goto label_7F0AA914;
    case 0x7F0AA918u: goto label_7F0AA918;
    case 0x7F0AA91Cu: goto label_7F0AA91C;
    case 0x7F0AA920u: goto label_7F0AA920;
    case 0x7F0AA924u: goto label_7F0AA924;
    case 0x7F0AA928u: goto label_7F0AA928;
    case 0x7F0AA92Cu: goto label_7F0AA92C;
    case 0x7F0AA930u: goto label_7F0AA930;
    case 0x7F0AA934u: goto label_7F0AA934;
    case 0x7F0AA938u: goto label_7F0AA938;
    case 0x7F0AA93Cu: goto label_7F0AA93C;
    case 0x7F0AA940u: goto label_7F0AA940;
    case 0x7F0AA944u: goto label_7F0AA944;
    case 0x7F0AA948u: goto label_7F0AA948;
    case 0x7F0AA94Cu: goto label_7F0AA94C;
    case 0x7F0AA950u: goto label_7F0AA950;
    case 0x7F0AA954u: goto label_7F0AA954;
    case 0x7F0AA958u: goto label_7F0AA958;
    case 0x7F0AA95Cu: goto label_7F0AA95C;
    case 0x7F0AA960u: goto label_7F0AA960;
    case 0x7F0AA964u: goto label_7F0AA964;
    case 0x7F0AA968u: goto label_7F0AA968;
    case 0x7F0AA96Cu: goto label_7F0AA96C;
    case 0x7F0AA970u: goto label_7F0AA970;
    case 0x7F0AA974u: goto label_7F0AA974;
    case 0x7F0AA978u: goto label_7F0AA978;
    case 0x7F0AA97Cu: goto label_7F0AA97C;
    case 0x7F0AA980u: goto label_7F0AA980;
    case 0x7F0AA984u: goto label_7F0AA984;
    case 0x7F0AA988u: goto label_7F0AA988;
    case 0x7F0AA98Cu: goto label_7F0AA98C;
    case 0x7F0AA990u: goto label_7F0AA990;
    case 0x7F0AA994u: goto label_7F0AA994;
    case 0x7F0AA998u: goto label_7F0AA998;
    case 0x7F0AA99Cu: goto label_7F0AA99C;
    case 0x7F0AA9A0u: goto label_7F0AA9A0;
    case 0x7F0AA9A4u: goto label_7F0AA9A4;
    case 0x7F0AA9A8u: goto label_7F0AA9A8;
    case 0x7F0AA9ACu: goto label_7F0AA9AC;
    case 0x7F0AA9B0u: goto label_7F0AA9B0;
    case 0x7F0AA9B4u: goto label_7F0AA9B4;
    case 0x7F0AA9B8u: goto label_7F0AA9B8;
    case 0x7F0AA9BCu: goto label_7F0AA9BC;
    case 0x7F0AA9C0u: goto label_7F0AA9C0;
    case 0x7F0AA9C4u: goto label_7F0AA9C4;
    case 0x7F0AA9C8u: goto label_7F0AA9C8;
    case 0x7F0AA9CCu: goto label_7F0AA9CC;
    case 0x7F0AA9D0u: goto label_7F0AA9D0;
    case 0x7F0AA9D4u: goto label_7F0AA9D4;
    case 0x7F0AA9D8u: goto label_7F0AA9D8;
    case 0x7F0AA9DCu: goto label_7F0AA9DC;
    case 0x7F0AA9E0u: goto label_7F0AA9E0;
    case 0x7F0AA9E4u: goto label_7F0AA9E4;
    case 0x7F0AA9E8u: goto label_7F0AA9E8;
    case 0x7F0AA9ECu: goto label_7F0AA9EC;
    case 0x7F0AA9F0u: goto label_7F0AA9F0;
    case 0x7F0AA9F4u: goto label_7F0AA9F4;
    case 0x7F0AA9F8u: goto label_7F0AA9F8;
    case 0x7F0AA9FCu: goto label_7F0AA9FC;
    case 0x7F0AAA00u: goto label_7F0AAA00;
    case 0x7F0AAA04u: goto label_7F0AAA04;
    case 0x7F0AAA08u: goto label_7F0AAA08;
    case 0x7F0AAA0Cu: goto label_7F0AAA0C;
    case 0x7F0AAA10u: goto label_7F0AAA10;
    case 0x7F0AAA14u: goto label_7F0AAA14;
    case 0x7F0AAA18u: goto label_7F0AAA18;
    case 0x7F0AAA1Cu: goto label_7F0AAA1C;
    case 0x7F0AAA20u: goto label_7F0AAA20;
    case 0x7F0AAA24u: goto label_7F0AAA24;
    case 0x7F0AAA28u: goto label_7F0AAA28;
    case 0x7F0AAA2Cu: goto label_7F0AAA2C;
    case 0x7F0AAA30u: goto label_7F0AAA30;
    case 0x7F0AAA34u: goto label_7F0AAA34;
    case 0x7F0AAA38u: goto label_7F0AAA38;
    case 0x7F0AAA3Cu: goto label_7F0AAA3C;
    case 0x7F0AAA40u: goto label_7F0AAA40;
    case 0x7F0AAA44u: goto label_7F0AAA44;
    case 0x7F0AAA48u: goto label_7F0AAA48;
    case 0x7F0AAA4Cu: goto label_7F0AAA4C;
    case 0x7F0AAA50u: goto label_7F0AAA50;
    case 0x7F0AAA54u: goto label_7F0AAA54;
    case 0x7F0AAA58u: goto label_7F0AAA58;
    case 0x7F0AAA5Cu: goto label_7F0AAA5C;
    case 0x7F0AAA60u: goto label_7F0AAA60;
    case 0x7F0AAA64u: goto label_7F0AAA64;
    case 0x7F0AAA68u: goto label_7F0AAA68;
    case 0x7F0AAA6Cu: goto label_7F0AAA6C;
    case 0x7F0AAA70u: goto label_7F0AAA70;
    case 0x7F0AAA74u: goto label_7F0AAA74;
    case 0x7F0AAA78u: goto label_7F0AAA78;
    case 0x7F0AAA7Cu: goto label_7F0AAA7C;
    case 0x7F0AAA80u: goto label_7F0AAA80;
    case 0x7F0AAA84u: goto label_7F0AAA84;
    case 0x7F0AAA88u: goto label_7F0AAA88;
    case 0x7F0AAA8Cu: goto label_7F0AAA8C;
    case 0x7F0AAA90u: goto label_7F0AAA90;
    case 0x7F0AAA94u: goto label_7F0AAA94;
    case 0x7F0AAA98u: goto label_7F0AAA98;
    case 0x7F0AAA9Cu: goto label_7F0AAA9C;
    case 0x7F0AAAA0u: goto label_7F0AAAA0;
    case 0x7F0AAAA4u: goto label_7F0AAAA4;
    case 0x7F0AAAA8u: goto label_7F0AAAA8;
    case 0x7F0AAAACu: goto label_7F0AAAAC;
    case 0x7F0AAAB0u: goto label_7F0AAAB0;
    case 0x7F0AAAB4u: goto label_7F0AAAB4;
    case 0x7F0AAAB8u: goto label_7F0AAAB8;
    case 0x7F0AAABCu: goto label_7F0AAABC;
    case 0x7F0AAAC0u: goto label_7F0AAAC0;
    case 0x7F0AAAC4u: goto label_7F0AAAC4;
    case 0x7F0AAAC8u: goto label_7F0AAAC8;
    case 0x7F0AAACCu: goto label_7F0AAACC;
    case 0x7F0AAAD0u: goto label_7F0AAAD0;
    case 0x7F0AAAD4u: goto label_7F0AAAD4;
    case 0x7F0AAAD8u: goto label_7F0AAAD8;
    case 0x7F0AAADCu: goto label_7F0AAADC;
    case 0x7F0AAAE0u: goto label_7F0AAAE0;
    case 0x7F0AAAE4u: goto label_7F0AAAE4;
    case 0x7F0AAAE8u: goto label_7F0AAAE8;
    case 0x7F0AAAECu: goto label_7F0AAAEC;
    case 0x7F0AAAF0u: goto label_7F0AAAF0;
    case 0x7F0AAAF4u: goto label_7F0AAAF4;
    case 0x7F0AAAF8u: goto label_7F0AAAF8;
    case 0x7F0AAAFCu: goto label_7F0AAAFC;
    case 0x7F0AAB00u: goto label_7F0AAB00;
    case 0x7F0AAB04u: goto label_7F0AAB04;
    case 0x7F0AAB08u: goto label_7F0AAB08;
    case 0x7F0AAB0Cu: goto label_7F0AAB0C;
    case 0x7F0AAB10u: goto label_7F0AAB10;
    case 0x7F0AAB14u: goto label_7F0AAB14;
    case 0x7F0AAB18u: goto label_7F0AAB18;
    case 0x7F0AAB1Cu: goto label_7F0AAB1C;
    case 0x7F0AAB20u: goto label_7F0AAB20;
    case 0x7F0AAB24u: goto label_7F0AAB24;
    case 0x7F0AAB28u: goto label_7F0AAB28;
    case 0x7F0AAB2Cu: goto label_7F0AAB2C;
    case 0x7F0AAB30u: goto label_7F0AAB30;
    case 0x7F0AAB34u: goto label_7F0AAB34;
    case 0x7F0AAB38u: goto label_7F0AAB38;
    case 0x7F0AAB3Cu: goto label_7F0AAB3C;
    case 0x7F0AAB40u: goto label_7F0AAB40;
    case 0x7F0AAB44u: goto label_7F0AAB44;
    case 0x7F0AAB48u: goto label_7F0AAB48;
    case 0x7F0AAB4Cu: goto label_7F0AAB4C;
    case 0x7F0AAB50u: goto label_7F0AAB50;
    case 0x7F0AAB54u: goto label_7F0AAB54;
    case 0x7F0AAB58u: goto label_7F0AAB58;
    case 0x7F0AAB5Cu: goto label_7F0AAB5C;
    case 0x7F0AAB60u: goto label_7F0AAB60;
    case 0x7F0AAB64u: goto label_7F0AAB64;
    case 0x7F0AAB68u: goto label_7F0AAB68;
    case 0x7F0AAB6Cu: goto label_7F0AAB6C;
    case 0x7F0AAB70u: goto label_7F0AAB70;
    case 0x7F0AAB74u: goto label_7F0AAB74;
    case 0x7F0AAB78u: goto label_7F0AAB78;
    case 0x7F0AAB7Cu: goto label_7F0AAB7C;
    case 0x7F0AAB80u: goto label_7F0AAB80;
    case 0x7F0AAB84u: goto label_7F0AAB84;
    case 0x7F0AAB88u: goto label_7F0AAB88;
    case 0x7F0AAB8Cu: goto label_7F0AAB8C;
    case 0x7F0AAB90u: goto label_7F0AAB90;
    case 0x7F0AAB94u: goto label_7F0AAB94;
    case 0x7F0AAB98u: goto label_7F0AAB98;
    case 0x7F0AAB9Cu: goto label_7F0AAB9C;
    case 0x7F0AABA0u: goto label_7F0AABA0;
    case 0x7F0AABA4u: goto label_7F0AABA4;
    case 0x7F0AABA8u: goto label_7F0AABA8;
    case 0x7F0AABACu: goto label_7F0AABAC;
    case 0x7F0AABB0u: goto label_7F0AABB0;
    case 0x7F0AABB4u: goto label_7F0AABB4;
    case 0x7F0AABB8u: goto label_7F0AABB8;
    case 0x7F0AABBCu: goto label_7F0AABBC;
    case 0x7F0AABC0u: goto label_7F0AABC0;
    case 0x7F0AABC4u: goto label_7F0AABC4;
    case 0x7F0AABC8u: goto label_7F0AABC8;
    case 0x7F0AABCCu: goto label_7F0AABCC;
    case 0x7F0AABD0u: goto label_7F0AABD0;
    case 0x7F0AABD4u: goto label_7F0AABD4;
    case 0x7F0AABD8u: goto label_7F0AABD8;
    case 0x7F0AABDCu: goto label_7F0AABDC;
    case 0x7F0AABE0u: goto label_7F0AABE0;
    case 0x7F0AABE4u: goto label_7F0AABE4;
    case 0x7F0AABE8u: goto label_7F0AABE8;
    case 0x7F0AABECu: goto label_7F0AABEC;
    case 0x7F0AABF0u: goto label_7F0AABF0;
    case 0x7F0AABF4u: goto label_7F0AABF4;
    case 0x7F0AABF8u: goto label_7F0AABF8;
    case 0x7F0AABFCu: goto label_7F0AABFC;
    case 0x7F0AAC00u: goto label_7F0AAC00;
    case 0x7F0AAC04u: goto label_7F0AAC04;
    case 0x7F0AAC08u: goto label_7F0AAC08;
    case 0x7F0AAC0Cu: goto label_7F0AAC0C;
    case 0x7F0AAC10u: goto label_7F0AAC10;
    case 0x7F0AAC14u: goto label_7F0AAC14;
    case 0x7F0AAC18u: goto label_7F0AAC18;
    case 0x7F0AAC1Cu: goto label_7F0AAC1C;
    case 0x7F0AAC20u: goto label_7F0AAC20;
    case 0x7F0AAC24u: goto label_7F0AAC24;
    case 0x7F0AAC28u: goto label_7F0AAC28;
    case 0x7F0AAC2Cu: goto label_7F0AAC2C;
    case 0x7F0AAC30u: goto label_7F0AAC30;
    case 0x7F0AAC34u: goto label_7F0AAC34;
    case 0x7F0AAC38u: goto label_7F0AAC38;
    case 0x7F0AAC3Cu: goto label_7F0AAC3C;
    case 0x7F0AAC40u: goto label_7F0AAC40;
    case 0x7F0AAC44u: goto label_7F0AAC44;
    case 0x7F0AAC48u: goto label_7F0AAC48;
    case 0x7F0AAC4Cu: goto label_7F0AAC4C;
    case 0x7F0AAC50u: goto label_7F0AAC50;
    case 0x7F0AAC54u: goto label_7F0AAC54;
    case 0x7F0AAC58u: goto label_7F0AAC58;
    case 0x7F0AAC5Cu: goto label_7F0AAC5C;
    case 0x7F0AAC60u: goto label_7F0AAC60;
    case 0x7F0AAC64u: goto label_7F0AAC64;
    case 0x7F0AAC68u: goto label_7F0AAC68;
    case 0x7F0AAC6Cu: goto label_7F0AAC6C;
    case 0x7F0AAC70u: goto label_7F0AAC70;
    case 0x7F0AAC74u: goto label_7F0AAC74;
    case 0x7F0AAC78u: goto label_7F0AAC78;
    case 0x7F0AAC7Cu: goto label_7F0AAC7C;
    case 0x7F0AAC80u: goto label_7F0AAC80;
    case 0x7F0AAC84u: goto label_7F0AAC84;
    case 0x7F0AAC88u: goto label_7F0AAC88;
    case 0x7F0AAC8Cu: goto label_7F0AAC8C;
    case 0x7F0AAC90u: goto label_7F0AAC90;
    case 0x7F0AAC94u: goto label_7F0AAC94;
    case 0x7F0AAC98u: goto label_7F0AAC98;
    case 0x7F0AAC9Cu: goto label_7F0AAC9C;
    case 0x7F0AACA0u: goto label_7F0AACA0;
    case 0x7F0AACA4u: goto label_7F0AACA4;
    case 0x7F0AACA8u: goto label_7F0AACA8;
    case 0x7F0AACACu: goto label_7F0AACAC;
    case 0x7F0AACB0u: goto label_7F0AACB0;
    case 0x7F0AACB4u: goto label_7F0AACB4;
    case 0x7F0AACB8u: goto label_7F0AACB8;
    case 0x7F0AACBCu: goto label_7F0AACBC;
    case 0x7F0AACC0u: goto label_7F0AACC0;
    case 0x7F0AACC4u: goto label_7F0AACC4;
    case 0x7F0AACC8u: goto label_7F0AACC8;
    case 0x7F0AACCCu: goto label_7F0AACCC;
    case 0x7F0AACD0u: goto label_7F0AACD0;
    case 0x7F0AACD4u: goto label_7F0AACD4;
    case 0x7F0AACD8u: goto label_7F0AACD8;
    case 0x7F0AACDCu: goto label_7F0AACDC;
    case 0x7F0AACE0u: goto label_7F0AACE0;
    case 0x7F0AACE4u: goto label_7F0AACE4;
    case 0x7F0AACE8u: goto label_7F0AACE8;
    case 0x7F0AACECu: goto label_7F0AACEC;
    case 0x7F0AACF0u: goto label_7F0AACF0;
    case 0x7F0AACF4u: goto label_7F0AACF4;
    case 0x7F0AACF8u: goto label_7F0AACF8;
    case 0x7F0AACFCu: goto label_7F0AACFC;
    case 0x7F0AAD00u: goto label_7F0AAD00;
    case 0x7F0AAD04u: goto label_7F0AAD04;
    case 0x7F0AAD08u: goto label_7F0AAD08;
    case 0x7F0AAD0Cu: goto label_7F0AAD0C;
    case 0x7F0AAD10u: goto label_7F0AAD10;
    case 0x7F0AAD14u: goto label_7F0AAD14;
    case 0x7F0AAD18u: goto label_7F0AAD18;
    case 0x7F0AAD1Cu: goto label_7F0AAD1C;
    case 0x7F0AAD20u: goto label_7F0AAD20;
    case 0x7F0AAD24u: goto label_7F0AAD24;
    case 0x7F0AAD28u: goto label_7F0AAD28;
    case 0x7F0AAD2Cu: goto label_7F0AAD2C;
    case 0x7F0AAD30u: goto label_7F0AAD30;
    case 0x7F0AAD34u: goto label_7F0AAD34;
    case 0x7F0AAD38u: goto label_7F0AAD38;
    case 0x7F0AAD3Cu: goto label_7F0AAD3C;
    case 0x7F0AAD40u: goto label_7F0AAD40;
    case 0x7F0AAD44u: goto label_7F0AAD44;
    case 0x7F0AAD48u: goto label_7F0AAD48;
    case 0x7F0AAD4Cu: goto label_7F0AAD4C;
    case 0x7F0AAD50u: goto label_7F0AAD50;
    case 0x7F0AAD54u: goto label_7F0AAD54;
    case 0x7F0AAD58u: goto label_7F0AAD58;
    case 0x7F0AAD5Cu: goto label_7F0AAD5C;
    case 0x7F0AAD60u: goto label_7F0AAD60;
    case 0x7F0AAD64u: goto label_7F0AAD64;
    case 0x7F0AAD68u: goto label_7F0AAD68;
    case 0x7F0AAD6Cu: goto label_7F0AAD6C;
    case 0x7F0AAD70u: goto label_7F0AAD70;
    case 0x7F0AAD74u: goto label_7F0AAD74;
    case 0x7F0AAD78u: goto label_7F0AAD78;
    case 0x7F0AAD7Cu: goto label_7F0AAD7C;
    case 0x7F0AAD80u: goto label_7F0AAD80;
    case 0x7F0AAD84u: goto label_7F0AAD84;
    case 0x7F0AAD88u: goto label_7F0AAD88;
    case 0x7F0AAD8Cu: goto label_7F0AAD8C;
    case 0x7F0AAD90u: goto label_7F0AAD90;
    case 0x7F0AAD94u: goto label_7F0AAD94;
    case 0x7F0AAD98u: goto label_7F0AAD98;
    case 0x7F0AAD9Cu: goto label_7F0AAD9C;
    case 0x7F0AADA0u: goto label_7F0AADA0;
    case 0x7F0AADA4u: goto label_7F0AADA4;
    case 0x7F0AADA8u: goto label_7F0AADA8;
    case 0x7F0AADACu: goto label_7F0AADAC;
    case 0x7F0AADB0u: goto label_7F0AADB0;
    case 0x7F0AADB4u: goto label_7F0AADB4;
    case 0x7F0AADB8u: goto label_7F0AADB8;
    case 0x7F0AADBCu: goto label_7F0AADBC;
    case 0x7F0AADC0u: goto label_7F0AADC0;
    case 0x7F0AADC4u: goto label_7F0AADC4;
    case 0x7F0AADC8u: goto label_7F0AADC8;
    case 0x7F0AADCCu: goto label_7F0AADCC;
    case 0x7F0AADD0u: goto label_7F0AADD0;
    case 0x7F0AADD4u: goto label_7F0AADD4;
    case 0x7F0AADD8u: goto label_7F0AADD8;
    case 0x7F0AADDCu: goto label_7F0AADDC;
    case 0x7F0AADE0u: goto label_7F0AADE0;
    case 0x7F0AADE4u: goto label_7F0AADE4;
    case 0x7F0AADE8u: goto label_7F0AADE8;
    case 0x7F0AADECu: goto label_7F0AADEC;
    case 0x7F0AADF0u: goto label_7F0AADF0;
    case 0x7F0AADF4u: goto label_7F0AADF4;
    case 0x7F0AADF8u: goto label_7F0AADF8;
    case 0x7F0AADFCu: goto label_7F0AADFC;
    case 0x7F0AAE00u: goto label_7F0AAE00;
    case 0x7F0AAE04u: goto label_7F0AAE04;
    case 0x7F0AAE08u: goto label_7F0AAE08;
    case 0x7F0AAE0Cu: goto label_7F0AAE0C;
    case 0x7F0AAE10u: goto label_7F0AAE10;
    case 0x7F0AAE14u: goto label_7F0AAE14;
    case 0x7F0AAE18u: goto label_7F0AAE18;
    case 0x7F0AAE1Cu: goto label_7F0AAE1C;
    case 0x7F0AAE20u: goto label_7F0AAE20;
    case 0x7F0AAE24u: goto label_7F0AAE24;
    case 0x7F0AAE28u: goto label_7F0AAE28;
    case 0x7F0AAE2Cu: goto label_7F0AAE2C;
    case 0x7F0AAE30u: goto label_7F0AAE30;
    case 0x7F0AAE34u: goto label_7F0AAE34;
    case 0x7F0AAE38u: goto label_7F0AAE38;
    case 0x7F0AAE3Cu: goto label_7F0AAE3C;
    case 0x7F0AAE40u: goto label_7F0AAE40;
    case 0x7F0AAE44u: goto label_7F0AAE44;
    case 0x7F0AAE48u: goto label_7F0AAE48;
    case 0x7F0AAE4Cu: goto label_7F0AAE4C;
    case 0x7F0AAE50u: goto label_7F0AAE50;
    case 0x7F0AAE54u: goto label_7F0AAE54;
    case 0x7F0AAE58u: goto label_7F0AAE58;
    case 0x7F0AAE5Cu: goto label_7F0AAE5C;
    case 0x7F0AAE60u: goto label_7F0AAE60;
    case 0x7F0AAE64u: goto label_7F0AAE64;
    case 0x7F0AAE68u: goto label_7F0AAE68;
    case 0x7F0AAE6Cu: goto label_7F0AAE6C;
    case 0x7F0AAE70u: goto label_7F0AAE70;
    case 0x7F0AAE74u: goto label_7F0AAE74;
    case 0x7F0AAE78u: goto label_7F0AAE78;
    case 0x7F0AAE7Cu: goto label_7F0AAE7C;
    case 0x7F0AAE80u: goto label_7F0AAE80;
    case 0x7F0AAE84u: goto label_7F0AAE84;
    case 0x7F0AAE88u: goto label_7F0AAE88;
    case 0x7F0AAE8Cu: goto label_7F0AAE8C;
    case 0x7F0AAE90u: goto label_7F0AAE90;
    case 0x7F0AAE94u: goto label_7F0AAE94;
    case 0x7F0AAE98u: goto label_7F0AAE98;
    case 0x7F0AAE9Cu: goto label_7F0AAE9C;
    case 0x7F0AAEA0u: goto label_7F0AAEA0;
    case 0x7F0AAEA4u: goto label_7F0AAEA4;
    case 0x7F0AAEA8u: goto label_7F0AAEA8;
    case 0x7F0AAEACu: goto label_7F0AAEAC;
    case 0x7F0AAEB0u: goto label_7F0AAEB0;
    case 0x7F0AAEB4u: goto label_7F0AAEB4;
    case 0x7F0AAEB8u: goto label_7F0AAEB8;
    case 0x7F0AAEBCu: goto label_7F0AAEBC;
    case 0x7F0AAEC0u: goto label_7F0AAEC0;
    case 0x7F0AAEC4u: goto label_7F0AAEC4;
    case 0x7F0AAEC8u: goto label_7F0AAEC8;
    case 0x7F0AAECCu: goto label_7F0AAECC;
    case 0x7F0AAED0u: goto label_7F0AAED0;
    case 0x7F0AAED4u: goto label_7F0AAED4;
    case 0x7F0AAED8u: goto label_7F0AAED8;
    case 0x7F0AAEDCu: goto label_7F0AAEDC;
    case 0x7F0AAEE0u: goto label_7F0AAEE0;
    case 0x7F0AAEE4u: goto label_7F0AAEE4;
    case 0x7F0AAEE8u: goto label_7F0AAEE8;
    case 0x7F0AAEECu: goto label_7F0AAEEC;
    case 0x7F0AAEF0u: goto label_7F0AAEF0;
    case 0x7F0AAEF4u: goto label_7F0AAEF4;
    case 0x7F0AAEF8u: goto label_7F0AAEF8;
    case 0x7F0AAEFCu: goto label_7F0AAEFC;
    case 0x7F0AAF00u: goto label_7F0AAF00;
    case 0x7F0AAF04u: goto label_7F0AAF04;
    case 0x7F0AAF08u: goto label_7F0AAF08;
    case 0x7F0AAF0Cu: goto label_7F0AAF0C;
    case 0x7F0AAF10u: goto label_7F0AAF10;
    case 0x7F0AAF14u: goto label_7F0AAF14;
    case 0x7F0AAF18u: goto label_7F0AAF18;
    case 0x7F0AAF1Cu: goto label_7F0AAF1C;
    case 0x7F0AAF20u: goto label_7F0AAF20;
    case 0x7F0AAF24u: goto label_7F0AAF24;
    case 0x7F0AAF28u: goto label_7F0AAF28;
    case 0x7F0AAF2Cu: goto label_7F0AAF2C;
    case 0x7F0AAF30u: goto label_7F0AAF30;
    case 0x7F0AAF34u: goto label_7F0AAF34;
    case 0x7F0AAF38u: goto label_7F0AAF38;
    case 0x7F0AAF3Cu: goto label_7F0AAF3C;
    case 0x7F0AAF40u: goto label_7F0AAF40;
    case 0x7F0AAF44u: goto label_7F0AAF44;
    case 0x7F0AAF48u: goto label_7F0AAF48;
    case 0x7F0AAF4Cu: goto label_7F0AAF4C;
    case 0x7F0AAF50u: goto label_7F0AAF50;
    case 0x7F0AAF54u: goto label_7F0AAF54;
    case 0x7F0AAF58u: goto label_7F0AAF58;
    case 0x7F0AAF5Cu: goto label_7F0AAF5C;
    case 0x7F0AAF60u: goto label_7F0AAF60;
    case 0x7F0AAF64u: goto label_7F0AAF64;
    case 0x7F0AAF68u: goto label_7F0AAF68;
    case 0x7F0AAF6Cu: goto label_7F0AAF6C;
    case 0x7F0AAF70u: goto label_7F0AAF70;
    case 0x7F0AAF74u: goto label_7F0AAF74;
    case 0x7F0AAF78u: goto label_7F0AAF78;
    case 0x7F0AAF7Cu: goto label_7F0AAF7C;
    case 0x7F0AAF80u: goto label_7F0AAF80;
    case 0x7F0AAF84u: goto label_7F0AAF84;
    case 0x7F0AAF88u: goto label_7F0AAF88;
    case 0x7F0AAF8Cu: goto label_7F0AAF8C;
    case 0x7F0AAF90u: goto label_7F0AAF90;
    case 0x7F0AAF94u: goto label_7F0AAF94;
    case 0x7F0AAF98u: goto label_7F0AAF98;
    case 0x7F0AAF9Cu: goto label_7F0AAF9C;
    case 0x7F0AAFA0u: goto label_7F0AAFA0;
    case 0x7F0AAFA4u: goto label_7F0AAFA4;
    case 0x7F0AAFA8u: goto label_7F0AAFA8;
    case 0x7F0AAFACu: goto label_7F0AAFAC;
    case 0x7F0AAFB0u: goto label_7F0AAFB0;
    case 0x7F0AAFB4u: goto label_7F0AAFB4;
    case 0x7F0AAFB8u: goto label_7F0AAFB8;
    case 0x7F0AAFBCu: goto label_7F0AAFBC;
    case 0x7F0AAFC0u: goto label_7F0AAFC0;
    case 0x7F0AAFC4u: goto label_7F0AAFC4;
    case 0x7F0AAFC8u: goto label_7F0AAFC8;
    case 0x7F0AAFCCu: goto label_7F0AAFCC;
    case 0x7F0AAFD0u: goto label_7F0AAFD0;
    case 0x7F0AAFD4u: goto label_7F0AAFD4;
    case 0x7F0AAFD8u: goto label_7F0AAFD8;
    case 0x7F0AAFDCu: goto label_7F0AAFDC;
    case 0x7F0AAFE0u: goto label_7F0AAFE0;
    case 0x7F0AAFE4u: goto label_7F0AAFE4;
    case 0x7F0AAFE8u: goto label_7F0AAFE8;
    case 0x7F0AAFECu: goto label_7F0AAFEC;
    case 0x7F0AAFF0u: goto label_7F0AAFF0;
    case 0x7F0AAFF4u: goto label_7F0AAFF4;
    case 0x7F0AAFF8u: goto label_7F0AAFF8;
    case 0x7F0AAFFCu: goto label_7F0AAFFC;
    case 0x7F0AB000u: goto label_7F0AB000;
    case 0x7F0AB004u: goto label_7F0AB004;
    case 0x7F0AB008u: goto label_7F0AB008;
    case 0x7F0AB00Cu: goto label_7F0AB00C;
    case 0x7F0AB010u: goto label_7F0AB010;
    case 0x7F0AB014u: goto label_7F0AB014;
    case 0x7F0AB018u: goto label_7F0AB018;
    case 0x7F0AB01Cu: goto label_7F0AB01C;
    case 0x7F0AB020u: goto label_7F0AB020;
    case 0x7F0AB024u: goto label_7F0AB024;
    case 0x7F0AB028u: goto label_7F0AB028;
    case 0x7F0AB02Cu: goto label_7F0AB02C;
    case 0x7F0AB030u: goto label_7F0AB030;
    case 0x7F0AB034u: goto label_7F0AB034;
    case 0x7F0AB038u: goto label_7F0AB038;
    case 0x7F0AB03Cu: goto label_7F0AB03C;
    case 0x7F0AB040u: goto label_7F0AB040;
    case 0x7F0AB044u: goto label_7F0AB044;
    case 0x7F0AB048u: goto label_7F0AB048;
    case 0x7F0AB04Cu: goto label_7F0AB04C;
    case 0x7F0AB050u: goto label_7F0AB050;
    case 0x7F0AB054u: goto label_7F0AB054;
    case 0x7F0AB058u: goto label_7F0AB058;
    case 0x7F0AB05Cu: goto label_7F0AB05C;
    case 0x7F0AB060u: goto label_7F0AB060;
    case 0x7F0AB064u: goto label_7F0AB064;
    case 0x7F0AB068u: goto label_7F0AB068;
    case 0x7F0AB06Cu: goto label_7F0AB06C;
    case 0x7F0AB070u: goto label_7F0AB070;
    case 0x7F0AB074u: goto label_7F0AB074;
    case 0x7F0AB078u: goto label_7F0AB078;
    case 0x7F0AB07Cu: goto label_7F0AB07C;
    case 0x7F0AB080u: goto label_7F0AB080;
    case 0x7F0AB084u: goto label_7F0AB084;
    case 0x7F0AB088u: goto label_7F0AB088;
    case 0x7F0AB08Cu: goto label_7F0AB08C;
    case 0x7F0AB090u: goto label_7F0AB090;
    case 0x7F0AB094u: goto label_7F0AB094;
    case 0x7F0AB098u: goto label_7F0AB098;
    case 0x7F0AB09Cu: goto label_7F0AB09C;
    case 0x7F0AB0A0u: goto label_7F0AB0A0;
    case 0x7F0AB0A4u: goto label_7F0AB0A4;
    case 0x7F0AB0A8u: goto label_7F0AB0A8;
    case 0x7F0AB0ACu: goto label_7F0AB0AC;
    case 0x7F0AB0B0u: goto label_7F0AB0B0;
    case 0x7F0AB0B4u: goto label_7F0AB0B4;
    case 0x7F0AB0B8u: goto label_7F0AB0B8;
    case 0x7F0AB0BCu: goto label_7F0AB0BC;
    case 0x7F0AB0C0u: goto label_7F0AB0C0;
    case 0x7F0AB0C4u: goto label_7F0AB0C4;
    case 0x7F0AB0C8u: goto label_7F0AB0C8;
    case 0x7F0AB0CCu: goto label_7F0AB0CC;
    case 0x7F0AB0D0u: goto label_7F0AB0D0;
    case 0x7F0AB0D4u: goto label_7F0AB0D4;
    case 0x7F0AB0D8u: goto label_7F0AB0D8;
    case 0x7F0AB0DCu: goto label_7F0AB0DC;
    case 0x7F0AB0E0u: goto label_7F0AB0E0;
    case 0x7F0AB0E4u: goto label_7F0AB0E4;
    case 0x7F0AB0E8u: goto label_7F0AB0E8;
    case 0x7F0AB0ECu: goto label_7F0AB0EC;
    case 0x7F0AB0F0u: goto label_7F0AB0F0;
    case 0x7F0AB0F4u: goto label_7F0AB0F4;
    case 0x7F0AB0F8u: goto label_7F0AB0F8;
    case 0x7F0AB0FCu: goto label_7F0AB0FC;
    case 0x7F0AB100u: goto label_7F0AB100;
    case 0x7F0AB104u: goto label_7F0AB104;
    case 0x7F0AB108u: goto label_7F0AB108;
    case 0x7F0AB10Cu: goto label_7F0AB10C;
    case 0x7F0AB110u: goto label_7F0AB110;
    case 0x7F0AB114u: goto label_7F0AB114;
    case 0x7F0AB118u: goto label_7F0AB118;
    case 0x7F0AB11Cu: goto label_7F0AB11C;
    case 0x7F0AB120u: goto label_7F0AB120;
    case 0x7F0AB124u: goto label_7F0AB124;
    case 0x7F0AB128u: goto label_7F0AB128;
    case 0x7F0AB12Cu: goto label_7F0AB12C;
    case 0x7F0AB130u: goto label_7F0AB130;
    case 0x7F0AB134u: goto label_7F0AB134;
    case 0x7F0AB138u: goto label_7F0AB138;
    case 0x7F0AB13Cu: goto label_7F0AB13C;
    case 0x7F0AB140u: goto label_7F0AB140;
    case 0x7F0AB144u: goto label_7F0AB144;
    case 0x7F0AB148u: goto label_7F0AB148;
    case 0x7F0AB14Cu: goto label_7F0AB14C;
    case 0x7F0AB150u: goto label_7F0AB150;
    case 0x7F0AB154u: goto label_7F0AB154;
    case 0x7F0AB158u: goto label_7F0AB158;
    case 0x7F0AB15Cu: goto label_7F0AB15C;
    case 0x7F0AB160u: goto label_7F0AB160;
    case 0x7F0AB164u: goto label_7F0AB164;
    case 0x7F0AB168u: goto label_7F0AB168;
    case 0x7F0AB16Cu: goto label_7F0AB16C;
    case 0x7F0AB170u: goto label_7F0AB170;
    case 0x7F0AB174u: goto label_7F0AB174;
    case 0x7F0AB178u: goto label_7F0AB178;
    case 0x7F0AB17Cu: goto label_7F0AB17C;
    case 0x7F0AB180u: goto label_7F0AB180;
    case 0x7F0AB184u: goto label_7F0AB184;
    case 0x7F0AB188u: goto label_7F0AB188;
    case 0x7F0AB18Cu: goto label_7F0AB18C;
    case 0x7F0AB190u: goto label_7F0AB190;
    case 0x7F0AB194u: goto label_7F0AB194;
    case 0x7F0AB198u: goto label_7F0AB198;
    case 0x7F0AB19Cu: goto label_7F0AB19C;
    case 0x7F0AB1A0u: goto label_7F0AB1A0;
    case 0x7F0AB1A4u: goto label_7F0AB1A4;
    case 0x7F0AB1A8u: goto label_7F0AB1A8;
    case 0x7F0AB1ACu: goto label_7F0AB1AC;
    case 0x7F0AB1B0u: goto label_7F0AB1B0;
    case 0x7F0AB1B4u: goto label_7F0AB1B4;
    case 0x7F0AB1B8u: goto label_7F0AB1B8;
    case 0x7F0AB1BCu: goto label_7F0AB1BC;
    case 0x7F0AB1C0u: goto label_7F0AB1C0;
    case 0x7F0AB1C4u: goto label_7F0AB1C4;
    case 0x7F0AB1C8u: goto label_7F0AB1C8;
    case 0x7F0AB1CCu: goto label_7F0AB1CC;
    case 0x7F0AB1D0u: goto label_7F0AB1D0;
    case 0x7F0AB1D4u: goto label_7F0AB1D4;
    case 0x7F0AB1D8u: goto label_7F0AB1D8;
    case 0x7F0AB1DCu: goto label_7F0AB1DC;
    case 0x7F0AB1E0u: goto label_7F0AB1E0;
    case 0x7F0AB1E4u: goto label_7F0AB1E4;
    case 0x7F0AB1E8u: goto label_7F0AB1E8;
    case 0x7F0AB1ECu: goto label_7F0AB1EC;
    case 0x7F0AB1F0u: goto label_7F0AB1F0;
    case 0x7F0AB1F4u: goto label_7F0AB1F4;
    case 0x7F0AB1F8u: goto label_7F0AB1F8;
    case 0x7F0AB1FCu: goto label_7F0AB1FC;
    case 0x7F0AB200u: goto label_7F0AB200;
    case 0x7F0AB204u: goto label_7F0AB204;
    case 0x7F0AB208u: goto label_7F0AB208;
    case 0x7F0AB20Cu: goto label_7F0AB20C;
    case 0x7F0AB210u: goto label_7F0AB210;
    case 0x7F0AB214u: goto label_7F0AB214;
    case 0x7F0AB218u: goto label_7F0AB218;
    case 0x7F0AB21Cu: goto label_7F0AB21C;
    case 0x7F0AB220u: goto label_7F0AB220;
    case 0x7F0AB224u: goto label_7F0AB224;
    case 0x7F0AB228u: goto label_7F0AB228;
    case 0x7F0AB22Cu: goto label_7F0AB22C;
    case 0x7F0AB230u: goto label_7F0AB230;
    case 0x7F0AB234u: goto label_7F0AB234;
    case 0x7F0AB238u: goto label_7F0AB238;
    case 0x7F0AB23Cu: goto label_7F0AB23C;
    case 0x7F0AB240u: goto label_7F0AB240;
    case 0x7F0AB244u: goto label_7F0AB244;
    case 0x7F0AB248u: goto label_7F0AB248;
    case 0x7F0AB24Cu: goto label_7F0AB24C;
    case 0x7F0AB250u: goto label_7F0AB250;
    case 0x7F0AB254u: goto label_7F0AB254;
    case 0x7F0AB258u: goto label_7F0AB258;
    case 0x7F0AB25Cu: goto label_7F0AB25C;
    case 0x7F0AB260u: goto label_7F0AB260;
    case 0x7F0AB264u: goto label_7F0AB264;
    case 0x7F0AB268u: goto label_7F0AB268;
    case 0x7F0AB26Cu: goto label_7F0AB26C;
    case 0x7F0AB270u: goto label_7F0AB270;
    case 0x7F0AB274u: goto label_7F0AB274;
    case 0x7F0AB278u: goto label_7F0AB278;
    case 0x7F0AB27Cu: goto label_7F0AB27C;
    case 0x7F0AB280u: goto label_7F0AB280;
    case 0x7F0AB284u: goto label_7F0AB284;
    case 0x7F0AB288u: goto label_7F0AB288;
    case 0x7F0AB28Cu: goto label_7F0AB28C;
    case 0x7F0AB290u: goto label_7F0AB290;
    case 0x7F0AB294u: goto label_7F0AB294;
    case 0x7F0AB298u: goto label_7F0AB298;
    case 0x7F0AB29Cu: goto label_7F0AB29C;
    case 0x7F0AB2A0u: goto label_7F0AB2A0;
    case 0x7F0AB2A4u: goto label_7F0AB2A4;
    case 0x7F0AB2A8u: goto label_7F0AB2A8;
    case 0x7F0AB2ACu: goto label_7F0AB2AC;
    case 0x7F0AB2B0u: goto label_7F0AB2B0;
    case 0x7F0AB2B4u: goto label_7F0AB2B4;
    case 0x7F0AB2B8u: goto label_7F0AB2B8;
    case 0x7F0AB2BCu: goto label_7F0AB2BC;
    case 0x7F0AB2C0u: goto label_7F0AB2C0;
    case 0x7F0AB2C4u: goto label_7F0AB2C4;
    case 0x7F0AB2C8u: goto label_7F0AB2C8;
    case 0x7F0AB2CCu: goto label_7F0AB2CC;
    case 0x7F0AB2D0u: goto label_7F0AB2D0;
    case 0x7F0AB2D4u: goto label_7F0AB2D4;
    case 0x7F0AB2D8u: goto label_7F0AB2D8;
    case 0x7F0AB2DCu: goto label_7F0AB2DC;
    case 0x7F0AB2E0u: goto label_7F0AB2E0;
    case 0x7F0AB2E4u: goto label_7F0AB2E4;
    case 0x7F0AB2E8u: goto label_7F0AB2E8;
    case 0x7F0AB2ECu: goto label_7F0AB2EC;
    case 0x7F0AB2F0u: goto label_7F0AB2F0;
    case 0x7F0AB2F4u: goto label_7F0AB2F4;
    case 0x7F0AB2F8u: goto label_7F0AB2F8;
    case 0x7F0AB2FCu: goto label_7F0AB2FC;
    case 0x7F0AB300u: goto label_7F0AB300;
    case 0x7F0AB304u: goto label_7F0AB304;
    case 0x7F0AB308u: goto label_7F0AB308;
    case 0x7F0AB30Cu: goto label_7F0AB30C;
    case 0x7F0AB310u: goto label_7F0AB310;
    case 0x7F0AB314u: goto label_7F0AB314;
    case 0x7F0AB318u: goto label_7F0AB318;
    case 0x7F0AB31Cu: goto label_7F0AB31C;
    case 0x7F0AB320u: goto label_7F0AB320;
    case 0x7F0AB324u: goto label_7F0AB324;
    case 0x7F0AB328u: goto label_7F0AB328;
    case 0x7F0AB32Cu: goto label_7F0AB32C;
    case 0x7F0AB330u: goto label_7F0AB330;
    case 0x7F0AB334u: goto label_7F0AB334;
    case 0x7F0AB338u: goto label_7F0AB338;
    case 0x7F0AB33Cu: goto label_7F0AB33C;
    case 0x7F0AB340u: goto label_7F0AB340;
    case 0x7F0AB344u: goto label_7F0AB344;
    case 0x7F0AB348u: goto label_7F0AB348;
    case 0x7F0AB34Cu: goto label_7F0AB34C;
    case 0x7F0AB350u: goto label_7F0AB350;
    case 0x7F0AB354u: goto label_7F0AB354;
    case 0x7F0AB358u: goto label_7F0AB358;
    case 0x7F0AB35Cu: goto label_7F0AB35C;
    case 0x7F0AB360u: goto label_7F0AB360;
    case 0x7F0AB364u: goto label_7F0AB364;
    case 0x7F0AB368u: goto label_7F0AB368;
    case 0x7F0AB36Cu: goto label_7F0AB36C;
    case 0x7F0AB370u: goto label_7F0AB370;
    case 0x7F0AB374u: goto label_7F0AB374;
    case 0x7F0AB378u: goto label_7F0AB378;
    case 0x7F0AB37Cu: goto label_7F0AB37C;
    case 0x7F0AB380u: goto label_7F0AB380;
    case 0x7F0AB384u: goto label_7F0AB384;
    case 0x7F0AB388u: goto label_7F0AB388;
    case 0x7F0AB38Cu: goto label_7F0AB38C;
    case 0x7F0AB390u: goto label_7F0AB390;
    case 0x7F0AB394u: goto label_7F0AB394;
    case 0x7F0AB398u: goto label_7F0AB398;
    case 0x7F0AB39Cu: goto label_7F0AB39C;
    case 0x7F0AB3A0u: goto label_7F0AB3A0;
    case 0x7F0AB3A4u: goto label_7F0AB3A4;
    case 0x7F0AB3A8u: goto label_7F0AB3A8;
    case 0x7F0AB3ACu: goto label_7F0AB3AC;
    case 0x7F0AB3B0u: goto label_7F0AB3B0;
    case 0x7F0AB3B4u: goto label_7F0AB3B4;
    case 0x7F0AB3B8u: goto label_7F0AB3B8;
    case 0x7F0AB3BCu: goto label_7F0AB3BC;
    case 0x7F0AB3C0u: goto label_7F0AB3C0;
    case 0x7F0AB3C4u: goto label_7F0AB3C4;
    case 0x7F0AB3C8u: goto label_7F0AB3C8;
    case 0x7F0AB3CCu: goto label_7F0AB3CC;
    case 0x7F0AB3D0u: goto label_7F0AB3D0;
    case 0x7F0AB3D4u: goto label_7F0AB3D4;
    case 0x7F0AB3D8u: goto label_7F0AB3D8;
    case 0x7F0AB3DCu: goto label_7F0AB3DC;
    case 0x7F0AB3E0u: goto label_7F0AB3E0;
    case 0x7F0AB3E4u: goto label_7F0AB3E4;
    case 0x7F0AB3E8u: goto label_7F0AB3E8;
    case 0x7F0AB3ECu: goto label_7F0AB3EC;
    case 0x7F0AB3F0u: goto label_7F0AB3F0;
    case 0x7F0AB3F4u: goto label_7F0AB3F4;
    case 0x7F0AB3F8u: goto label_7F0AB3F8;
    case 0x7F0AB3FCu: goto label_7F0AB3FC;
    case 0x7F0AB400u: goto label_7F0AB400;
    case 0x7F0AB404u: goto label_7F0AB404;
    case 0x7F0AB408u: goto label_7F0AB408;
    case 0x7F0AB40Cu: goto label_7F0AB40C;
    case 0x7F0AB410u: goto label_7F0AB410;
    case 0x7F0AB414u: goto label_7F0AB414;
    case 0x7F0AB418u: goto label_7F0AB418;
    case 0x7F0AB41Cu: goto label_7F0AB41C;
    case 0x7F0AB420u: goto label_7F0AB420;
    case 0x7F0AB424u: goto label_7F0AB424;
    case 0x7F0AB428u: goto label_7F0AB428;
    case 0x7F0AB42Cu: goto label_7F0AB42C;
    case 0x7F0AB430u: goto label_7F0AB430;
    case 0x7F0AB434u: goto label_7F0AB434;
    case 0x7F0AB438u: goto label_7F0AB438;
    case 0x7F0AB43Cu: goto label_7F0AB43C;
    case 0x7F0AB440u: goto label_7F0AB440;
    case 0x7F0AB444u: goto label_7F0AB444;
    case 0x7F0AB448u: goto label_7F0AB448;
    case 0x7F0AB44Cu: goto label_7F0AB44C;
    case 0x7F0AB450u: goto label_7F0AB450;
    case 0x7F0AB454u: goto label_7F0AB454;
    case 0x7F0AB458u: goto label_7F0AB458;
    case 0x7F0AB45Cu: goto label_7F0AB45C;
    case 0x7F0AB460u: goto label_7F0AB460;
    case 0x7F0AB464u: goto label_7F0AB464;
    case 0x7F0AB468u: goto label_7F0AB468;
    case 0x7F0AB46Cu: goto label_7F0AB46C;
    case 0x7F0AB470u: goto label_7F0AB470;
    case 0x7F0AB474u: goto label_7F0AB474;
    case 0x7F0AB478u: goto label_7F0AB478;
    case 0x7F0AB47Cu: goto label_7F0AB47C;
    case 0x7F0AB480u: goto label_7F0AB480;
    case 0x7F0AB484u: goto label_7F0AB484;
    case 0x7F0AB488u: goto label_7F0AB488;
    case 0x7F0AB48Cu: goto label_7F0AB48C;
    case 0x7F0AB490u: goto label_7F0AB490;
    case 0x7F0AB494u: goto label_7F0AB494;
    case 0x7F0AB498u: goto label_7F0AB498;
    case 0x7F0AB49Cu: goto label_7F0AB49C;
    case 0x7F0AB4A0u: goto label_7F0AB4A0;
    case 0x7F0AB4A4u: goto label_7F0AB4A4;
    case 0x7F0AB4A8u: goto label_7F0AB4A8;
    case 0x7F0AB4ACu: goto label_7F0AB4AC;
    case 0x7F0AB4B0u: goto label_7F0AB4B0;
    case 0x7F0AB4B4u: goto label_7F0AB4B4;
    case 0x7F0AB4B8u: goto label_7F0AB4B8;
    case 0x7F0AB4BCu: goto label_7F0AB4BC;
    case 0x7F0AB4C0u: goto label_7F0AB4C0;
    case 0x7F0AB4C4u: goto label_7F0AB4C4;
    case 0x7F0AB4C8u: goto label_7F0AB4C8;
    case 0x7F0AB4CCu: goto label_7F0AB4CC;
    case 0x7F0AB4D0u: goto label_7F0AB4D0;
    case 0x7F0AB4D4u: goto label_7F0AB4D4;
    case 0x7F0AB4D8u: goto label_7F0AB4D8;
    case 0x7F0AB4DCu: goto label_7F0AB4DC;
    case 0x7F0AB4E0u: goto label_7F0AB4E0;
    case 0x7F0AB4E4u: goto label_7F0AB4E4;
    case 0x7F0AB4E8u: goto label_7F0AB4E8;
    case 0x7F0AB4ECu: goto label_7F0AB4EC;
    case 0x7F0AB4F0u: goto label_7F0AB4F0;
    case 0x7F0AB4F4u: goto label_7F0AB4F4;
    case 0x7F0AB4F8u: goto label_7F0AB4F8;
    case 0x7F0AB4FCu: goto label_7F0AB4FC;
    case 0x7F0AB500u: goto label_7F0AB500;
    case 0x7F0AB504u: goto label_7F0AB504;
    case 0x7F0AB508u: goto label_7F0AB508;
    case 0x7F0AB50Cu: goto label_7F0AB50C;
    case 0x7F0AB510u: goto label_7F0AB510;
    case 0x7F0AB514u: goto label_7F0AB514;
    case 0x7F0AB518u: goto label_7F0AB518;
    case 0x7F0AB51Cu: goto label_7F0AB51C;
    case 0x7F0AB520u: goto label_7F0AB520;
    case 0x7F0AB524u: goto label_7F0AB524;
    case 0x7F0AB528u: goto label_7F0AB528;
    case 0x7F0AB52Cu: goto label_7F0AB52C;
    case 0x7F0AB530u: goto label_7F0AB530;
    case 0x7F0AB534u: goto label_7F0AB534;
    case 0x7F0AB538u: goto label_7F0AB538;
    case 0x7F0AB53Cu: goto label_7F0AB53C;
    case 0x7F0AB540u: goto label_7F0AB540;
    case 0x7F0AB544u: goto label_7F0AB544;
    case 0x7F0AB548u: goto label_7F0AB548;
    case 0x7F0AB54Cu: goto label_7F0AB54C;
    case 0x7F0AB550u: goto label_7F0AB550;
    case 0x7F0AB554u: goto label_7F0AB554;
    case 0x7F0AB558u: goto label_7F0AB558;
    case 0x7F0AB55Cu: goto label_7F0AB55C;
    case 0x7F0AB560u: goto label_7F0AB560;
    case 0x7F0AB564u: goto label_7F0AB564;
    case 0x7F0AB568u: goto label_7F0AB568;
    case 0x7F0AB56Cu: goto label_7F0AB56C;
    case 0x7F0AB570u: goto label_7F0AB570;
    case 0x7F0AB574u: goto label_7F0AB574;
    case 0x7F0AB578u: goto label_7F0AB578;
    case 0x7F0AB57Cu: goto label_7F0AB57C;
    case 0x7F0AB580u: goto label_7F0AB580;
    case 0x7F0AB584u: goto label_7F0AB584;
    case 0x7F0AB588u: goto label_7F0AB588;
    case 0x7F0AB58Cu: goto label_7F0AB58C;
    case 0x7F0AB590u: goto label_7F0AB590;
    case 0x7F0AB594u: goto label_7F0AB594;
    case 0x7F0AB598u: goto label_7F0AB598;
    case 0x7F0AB59Cu: goto label_7F0AB59C;
    case 0x7F0AB5A0u: goto label_7F0AB5A0;
    case 0x7F0AB5A4u: goto label_7F0AB5A4;
    case 0x7F0AB5A8u: goto label_7F0AB5A8;
    case 0x7F0AB5ACu: goto label_7F0AB5AC;
    case 0x7F0AB5B0u: goto label_7F0AB5B0;
    case 0x7F0AB5B4u: goto label_7F0AB5B4;
    case 0x7F0AB5B8u: goto label_7F0AB5B8;
    case 0x7F0AB5BCu: goto label_7F0AB5BC;
    case 0x7F0AB5C0u: goto label_7F0AB5C0;
    case 0x7F0AB5C4u: goto label_7F0AB5C4;
    case 0x7F0AB5C8u: goto label_7F0AB5C8;
    case 0x7F0AB5CCu: goto label_7F0AB5CC;
    case 0x7F0AB5D0u: goto label_7F0AB5D0;
    case 0x7F0AB5D4u: goto label_7F0AB5D4;
    case 0x7F0AB5D8u: goto label_7F0AB5D8;
    case 0x7F0AB5DCu: goto label_7F0AB5DC;
    case 0x7F0AB5E0u: goto label_7F0AB5E0;
    case 0x7F0AB5E4u: goto label_7F0AB5E4;
    case 0x7F0AB5E8u: goto label_7F0AB5E8;
    case 0x7F0AB5ECu: goto label_7F0AB5EC;
    case 0x7F0AB5F0u: goto label_7F0AB5F0;
    case 0x7F0AB5F4u: goto label_7F0AB5F4;
    case 0x7F0AB5F8u: goto label_7F0AB5F8;
    case 0x7F0AB5FCu: goto label_7F0AB5FC;
    case 0x7F0AB600u: goto label_7F0AB600;
    case 0x7F0AB604u: goto label_7F0AB604;
    case 0x7F0AB608u: goto label_7F0AB608;
    case 0x7F0AB60Cu: goto label_7F0AB60C;
    case 0x7F0AB610u: goto label_7F0AB610;
    case 0x7F0AB614u: goto label_7F0AB614;
    case 0x7F0AB618u: goto label_7F0AB618;
    case 0x7F0AB61Cu: goto label_7F0AB61C;
    case 0x7F0AB620u: goto label_7F0AB620;
    case 0x7F0AB624u: goto label_7F0AB624;
    case 0x7F0AB628u: goto label_7F0AB628;
    case 0x7F0AB62Cu: goto label_7F0AB62C;
    case 0x7F0AB630u: goto label_7F0AB630;
    case 0x7F0AB634u: goto label_7F0AB634;
    case 0x7F0AB638u: goto label_7F0AB638;
    case 0x7F0AB63Cu: goto label_7F0AB63C;
    case 0x7F0AB640u: goto label_7F0AB640;
    case 0x7F0AB644u: goto label_7F0AB644;
    case 0x7F0AB648u: goto label_7F0AB648;
    case 0x7F0AB64Cu: goto label_7F0AB64C;
    case 0x7F0AB650u: goto label_7F0AB650;
    case 0x7F0AB654u: goto label_7F0AB654;
    case 0x7F0AB658u: goto label_7F0AB658;
    case 0x7F0AB65Cu: goto label_7F0AB65C;
    case 0x7F0AB660u: goto label_7F0AB660;
    case 0x7F0AB664u: goto label_7F0AB664;
    case 0x7F0AB668u: goto label_7F0AB668;
    case 0x7F0AB66Cu: goto label_7F0AB66C;
    case 0x7F0AB670u: goto label_7F0AB670;
    case 0x7F0AB674u: goto label_7F0AB674;
    case 0x7F0AB678u: goto label_7F0AB678;
    case 0x7F0AB67Cu: goto label_7F0AB67C;
    case 0x7F0AB680u: goto label_7F0AB680;
    case 0x7F0AB684u: goto label_7F0AB684;
    case 0x7F0AB688u: goto label_7F0AB688;
    case 0x7F0AB68Cu: goto label_7F0AB68C;
    case 0x7F0AB690u: goto label_7F0AB690;
    case 0x7F0AB694u: goto label_7F0AB694;
    case 0x7F0AB698u: goto label_7F0AB698;
    case 0x7F0AB69Cu: goto label_7F0AB69C;
    case 0x7F0AB6A0u: goto label_7F0AB6A0;
    case 0x7F0AB6A4u: goto label_7F0AB6A4;
    case 0x7F0AB6A8u: goto label_7F0AB6A8;
    case 0x7F0AB6ACu: goto label_7F0AB6AC;
    case 0x7F0AB6B0u: goto label_7F0AB6B0;
    case 0x7F0AB6B4u: goto label_7F0AB6B4;
    case 0x7F0AB6B8u: goto label_7F0AB6B8;
    case 0x7F0AB6BCu: goto label_7F0AB6BC;
    case 0x7F0AB6C0u: goto label_7F0AB6C0;
    case 0x7F0AB6C4u: goto label_7F0AB6C4;
    case 0x7F0AB6C8u: goto label_7F0AB6C8;
    case 0x7F0AB6CCu: goto label_7F0AB6CC;
    case 0x7F0AB6D0u: goto label_7F0AB6D0;
    case 0x7F0AB6D4u: goto label_7F0AB6D4;
    case 0x7F0AB6D8u: goto label_7F0AB6D8;
    case 0x7F0AB6DCu: goto label_7F0AB6DC;
    case 0x7F0AB6E0u: goto label_7F0AB6E0;
    case 0x7F0AB6E4u: goto label_7F0AB6E4;
    case 0x7F0AB6E8u: goto label_7F0AB6E8;
    case 0x7F0AB6ECu: goto label_7F0AB6EC;
    case 0x7F0AB6F0u: goto label_7F0AB6F0;
    case 0x7F0AB6F4u: goto label_7F0AB6F4;
    case 0x7F0AB6F8u: goto label_7F0AB6F8;
    case 0x7F0AB6FCu: goto label_7F0AB6FC;
    case 0x7F0AB700u: goto label_7F0AB700;
    case 0x7F0AB704u: goto label_7F0AB704;
    case 0x7F0AB708u: goto label_7F0AB708;
    case 0x7F0AB70Cu: goto label_7F0AB70C;
    case 0x7F0AB710u: goto label_7F0AB710;
    case 0x7F0AB714u: goto label_7F0AB714;
    case 0x7F0AB718u: goto label_7F0AB718;
    case 0x7F0AB71Cu: goto label_7F0AB71C;
    case 0x7F0AB720u: goto label_7F0AB720;
    case 0x7F0AB724u: goto label_7F0AB724;
    case 0x7F0AB728u: goto label_7F0AB728;
    case 0x7F0AB72Cu: goto label_7F0AB72C;
    case 0x7F0AB730u: goto label_7F0AB730;
    case 0x7F0AB734u: goto label_7F0AB734;
    case 0x7F0AB738u: goto label_7F0AB738;
    case 0x7F0AB73Cu: goto label_7F0AB73C;
    case 0x7F0AB740u: goto label_7F0AB740;
    case 0x7F0AB744u: goto label_7F0AB744;
    case 0x7F0AB748u: goto label_7F0AB748;
    case 0x7F0AB74Cu: goto label_7F0AB74C;
    case 0x7F0AB750u: goto label_7F0AB750;
    case 0x7F0AB754u: goto label_7F0AB754;
    case 0x7F0AB758u: goto label_7F0AB758;
    case 0x7F0AB75Cu: goto label_7F0AB75C;
    case 0x7F0AB760u: goto label_7F0AB760;
    case 0x7F0AB764u: goto label_7F0AB764;
    case 0x7F0AB768u: goto label_7F0AB768;
    case 0x7F0AB76Cu: goto label_7F0AB76C;
    case 0x7F0AB770u: goto label_7F0AB770;
    case 0x7F0AB774u: goto label_7F0AB774;
    case 0x7F0AB778u: goto label_7F0AB778;
    case 0x7F0AB77Cu: goto label_7F0AB77C;
    case 0x7F0AB780u: goto label_7F0AB780;
    case 0x7F0AB784u: goto label_7F0AB784;
    case 0x7F0AB788u: goto label_7F0AB788;
    case 0x7F0AB78Cu: goto label_7F0AB78C;
    case 0x7F0AB790u: goto label_7F0AB790;
    case 0x7F0AB794u: goto label_7F0AB794;
    case 0x7F0AB798u: goto label_7F0AB798;
    case 0x7F0AB79Cu: goto label_7F0AB79C;
    case 0x7F0AB7A0u: goto label_7F0AB7A0;
    case 0x7F0AB7A4u: goto label_7F0AB7A4;
    case 0x7F0AB7A8u: goto label_7F0AB7A8;
    case 0x7F0AB7ACu: goto label_7F0AB7AC;
    case 0x7F0AB7B0u: goto label_7F0AB7B0;
    case 0x7F0AB7B4u: goto label_7F0AB7B4;
    case 0x7F0AB7B8u: goto label_7F0AB7B8;
    case 0x7F0AB7BCu: goto label_7F0AB7BC;
    case 0x7F0AB7C0u: goto label_7F0AB7C0;
    case 0x7F0AB7C4u: goto label_7F0AB7C4;
    case 0x7F0AB7C8u: goto label_7F0AB7C8;
    case 0x7F0AB7CCu: goto label_7F0AB7CC;
    case 0x7F0AB7D0u: goto label_7F0AB7D0;
    case 0x7F0AB7D4u: goto label_7F0AB7D4;
    case 0x7F0AB7D8u: goto label_7F0AB7D8;
    case 0x7F0AB7DCu: goto label_7F0AB7DC;
    case 0x7F0AB7E0u: goto label_7F0AB7E0;
    case 0x7F0AB7E4u: goto label_7F0AB7E4;
    case 0x7F0AB7E8u: goto label_7F0AB7E8;
    case 0x7F0AB7ECu: goto label_7F0AB7EC;
    case 0x7F0AB7F0u: goto label_7F0AB7F0;
    case 0x7F0AB7F4u: goto label_7F0AB7F4;
    case 0x7F0AB7F8u: goto label_7F0AB7F8;
    case 0x7F0AB7FCu: goto label_7F0AB7FC;
    case 0x7F0AB800u: goto label_7F0AB800;
    case 0x7F0AB804u: goto label_7F0AB804;
    case 0x7F0AB808u: goto label_7F0AB808;
    case 0x7F0AB80Cu: goto label_7F0AB80C;
    case 0x7F0AB810u: goto label_7F0AB810;
    case 0x7F0AB814u: goto label_7F0AB814;
    case 0x7F0AB818u: goto label_7F0AB818;
    case 0x7F0AB81Cu: goto label_7F0AB81C;
    case 0x7F0AB820u: goto label_7F0AB820;
    case 0x7F0AB824u: goto label_7F0AB824;
    case 0x7F0AB828u: goto label_7F0AB828;
    case 0x7F0AB82Cu: goto label_7F0AB82C;
    case 0x7F0AB830u: goto label_7F0AB830;
    case 0x7F0AB834u: goto label_7F0AB834;
    case 0x7F0AB838u: goto label_7F0AB838;
    case 0x7F0AB83Cu: goto label_7F0AB83C;
    case 0x7F0AB840u: goto label_7F0AB840;
    case 0x7F0AB844u: goto label_7F0AB844;
    case 0x7F0AB848u: goto label_7F0AB848;
    case 0x7F0AB84Cu: goto label_7F0AB84C;
    case 0x7F0AB850u: goto label_7F0AB850;
    case 0x7F0AB854u: goto label_7F0AB854;
    case 0x7F0AB858u: goto label_7F0AB858;
    case 0x7F0AB85Cu: goto label_7F0AB85C;
    case 0x7F0AB860u: goto label_7F0AB860;
    case 0x7F0AB864u: goto label_7F0AB864;
    case 0x7F0AB868u: goto label_7F0AB868;
    case 0x7F0AB86Cu: goto label_7F0AB86C;
    case 0x7F0AB870u: goto label_7F0AB870;
    case 0x7F0AB874u: goto label_7F0AB874;
    case 0x7F0AB878u: goto label_7F0AB878;
    case 0x7F0AB87Cu: goto label_7F0AB87C;
    case 0x7F0AB880u: goto label_7F0AB880;
    case 0x7F0AB884u: goto label_7F0AB884;
    case 0x7F0AB888u: goto label_7F0AB888;
    case 0x7F0AB88Cu: goto label_7F0AB88C;
    case 0x7F0AB890u: goto label_7F0AB890;
    case 0x7F0AB894u: goto label_7F0AB894;
    case 0x7F0AB898u: goto label_7F0AB898;
    case 0x7F0AB89Cu: goto label_7F0AB89C;
    case 0x7F0AB8A0u: goto label_7F0AB8A0;
    case 0x7F0AB8A4u: goto label_7F0AB8A4;
    case 0x7F0AB8A8u: goto label_7F0AB8A8;
    case 0x7F0AB8ACu: goto label_7F0AB8AC;
    case 0x7F0AB8B0u: goto label_7F0AB8B0;
    case 0x7F0AB8B4u: goto label_7F0AB8B4;
    case 0x7F0AB8B8u: goto label_7F0AB8B8;
    case 0x7F0AB8BCu: goto label_7F0AB8BC;
    case 0x7F0AB8C0u: goto label_7F0AB8C0;
    case 0x7F0AB8C4u: goto label_7F0AB8C4;
    case 0x7F0AB8C8u: goto label_7F0AB8C8;
    case 0x7F0AB8CCu: goto label_7F0AB8CC;
    case 0x7F0AB8D0u: goto label_7F0AB8D0;
    case 0x7F0AB8D4u: goto label_7F0AB8D4;
    case 0x7F0AB8D8u: goto label_7F0AB8D8;
    case 0x7F0AB8DCu: goto label_7F0AB8DC;
    case 0x7F0AB8E0u: goto label_7F0AB8E0;
    case 0x7F0AB8E4u: goto label_7F0AB8E4;
    case 0x7F0AB8E8u: goto label_7F0AB8E8;
    case 0x7F0AB8ECu: goto label_7F0AB8EC;
    case 0x7F0AB8F0u: goto label_7F0AB8F0;
    case 0x7F0AB8F4u: goto label_7F0AB8F4;
    case 0x7F0AB8F8u: goto label_7F0AB8F8;
    case 0x7F0AB8FCu: goto label_7F0AB8FC;
    case 0x7F0AB900u: goto label_7F0AB900;
    case 0x7F0AB904u: goto label_7F0AB904;
    case 0x7F0AB908u: goto label_7F0AB908;
    case 0x7F0AB90Cu: goto label_7F0AB90C;
    case 0x7F0AB910u: goto label_7F0AB910;
    case 0x7F0AB914u: goto label_7F0AB914;
    case 0x7F0AB918u: goto label_7F0AB918;
    case 0x7F0AB91Cu: goto label_7F0AB91C;
    case 0x7F0AB920u: goto label_7F0AB920;
    case 0x7F0AB924u: goto label_7F0AB924;
    case 0x7F0AB928u: goto label_7F0AB928;
    case 0x7F0AB92Cu: goto label_7F0AB92C;
    case 0x7F0AB930u: goto label_7F0AB930;
    case 0x7F0AB934u: goto label_7F0AB934;
    case 0x7F0AB938u: goto label_7F0AB938;
    case 0x7F0AB93Cu: goto label_7F0AB93C;
    case 0x7F0AB940u: goto label_7F0AB940;
    case 0x7F0AB944u: goto label_7F0AB944;
    case 0x7F0AB948u: goto label_7F0AB948;
    case 0x7F0AB94Cu: goto label_7F0AB94C;
    case 0x7F0AB950u: goto label_7F0AB950;
    case 0x7F0AB954u: goto label_7F0AB954;
    case 0x7F0AB958u: goto label_7F0AB958;
    case 0x7F0AB95Cu: goto label_7F0AB95C;
    case 0x7F0AB960u: goto label_7F0AB960;
    case 0x7F0AB964u: goto label_7F0AB964;
    case 0x7F0AB968u: goto label_7F0AB968;
    case 0x7F0AB96Cu: goto label_7F0AB96C;
    case 0x7F0AB970u: goto label_7F0AB970;
    case 0x7F0AB974u: goto label_7F0AB974;
    case 0x7F0AB978u: goto label_7F0AB978;
    case 0x7F0AB97Cu: goto label_7F0AB97C;
    case 0x7F0AB980u: goto label_7F0AB980;
    case 0x7F0AB984u: goto label_7F0AB984;
    case 0x7F0AB988u: goto label_7F0AB988;
    case 0x7F0AB98Cu: goto label_7F0AB98C;
    case 0x7F0AB990u: goto label_7F0AB990;
    case 0x7F0AB994u: goto label_7F0AB994;
    case 0x7F0AB998u: goto label_7F0AB998;
    case 0x7F0AB99Cu: goto label_7F0AB99C;
    case 0x7F0AB9A0u: goto label_7F0AB9A0;
    case 0x7F0AB9A4u: goto label_7F0AB9A4;
    case 0x7F0AB9A8u: goto label_7F0AB9A8;
    case 0x7F0AB9ACu: goto label_7F0AB9AC;
    case 0x7F0AB9B0u: goto label_7F0AB9B0;
    case 0x7F0AB9B4u: goto label_7F0AB9B4;
    case 0x7F0AB9B8u: goto label_7F0AB9B8;
    case 0x7F0AB9BCu: goto label_7F0AB9BC;
    case 0x7F0AB9C0u: goto label_7F0AB9C0;
    case 0x7F0AB9C4u: goto label_7F0AB9C4;
    case 0x7F0AB9C8u: goto label_7F0AB9C8;
    case 0x7F0AB9CCu: goto label_7F0AB9CC;
    case 0x7F0AB9D0u: goto label_7F0AB9D0;
    case 0x7F0AB9D4u: goto label_7F0AB9D4;
    case 0x7F0AB9D8u: goto label_7F0AB9D8;
    case 0x7F0AB9DCu: goto label_7F0AB9DC;
    case 0x7F0AB9E0u: goto label_7F0AB9E0;
    case 0x7F0AB9E4u: goto label_7F0AB9E4;
    case 0x7F0AB9E8u: goto label_7F0AB9E8;
    case 0x7F0AB9ECu: goto label_7F0AB9EC;
    case 0x7F0AB9F0u: goto label_7F0AB9F0;
    case 0x7F0AB9F4u: goto label_7F0AB9F4;
    case 0x7F0AB9F8u: goto label_7F0AB9F8;
    case 0x7F0AB9FCu: goto label_7F0AB9FC;
    case 0x7F0ABA00u: goto label_7F0ABA00;
    case 0x7F0ABA04u: goto label_7F0ABA04;
    case 0x7F0ABA08u: goto label_7F0ABA08;
    case 0x7F0ABA0Cu: goto label_7F0ABA0C;
    case 0x7F0ABA10u: goto label_7F0ABA10;
    case 0x7F0ABA14u: goto label_7F0ABA14;
    case 0x7F0ABA18u: goto label_7F0ABA18;
    case 0x7F0ABA1Cu: goto label_7F0ABA1C;
    case 0x7F0ABA20u: goto label_7F0ABA20;
    case 0x7F0ABA24u: goto label_7F0ABA24;
    case 0x7F0ABA28u: goto label_7F0ABA28;
    case 0x7F0ABA2Cu: goto label_7F0ABA2C;
    case 0x7F0ABA30u: goto label_7F0ABA30;
    case 0x7F0ABA34u: goto label_7F0ABA34;
    case 0x7F0ABA38u: goto label_7F0ABA38;
    case 0x7F0ABA3Cu: goto label_7F0ABA3C;
    case 0x7F0ABA40u: goto label_7F0ABA40;
    case 0x7F0ABA44u: goto label_7F0ABA44;
    case 0x7F0ABA48u: goto label_7F0ABA48;
    case 0x7F0ABA4Cu: goto label_7F0ABA4C;
    case 0x7F0ABA50u: goto label_7F0ABA50;
    case 0x7F0ABA54u: goto label_7F0ABA54;
    case 0x7F0ABA58u: goto label_7F0ABA58;
    case 0x7F0ABA5Cu: goto label_7F0ABA5C;
    case 0x7F0ABA60u: goto label_7F0ABA60;
    case 0x7F0ABA64u: goto label_7F0ABA64;
    case 0x7F0ABA68u: goto label_7F0ABA68;
    case 0x7F0ABA6Cu: goto label_7F0ABA6C;
    case 0x7F0ABA70u: goto label_7F0ABA70;
    case 0x7F0ABA74u: goto label_7F0ABA74;
    case 0x7F0ABA78u: goto label_7F0ABA78;
    case 0x7F0ABA7Cu: goto label_7F0ABA7C;
    case 0x7F0ABA80u: goto label_7F0ABA80;
    case 0x7F0ABA84u: goto label_7F0ABA84;
    case 0x7F0ABA88u: goto label_7F0ABA88;
    case 0x7F0ABA8Cu: goto label_7F0ABA8C;
    case 0x7F0ABA90u: goto label_7F0ABA90;
    case 0x7F0ABA94u: goto label_7F0ABA94;
    case 0x7F0ABA98u: goto label_7F0ABA98;
    case 0x7F0ABA9Cu: goto label_7F0ABA9C;
    case 0x7F0ABAA0u: goto label_7F0ABAA0;
    case 0x7F0ABAA4u: goto label_7F0ABAA4;
    case 0x7F0ABAA8u: goto label_7F0ABAA8;
    case 0x7F0ABAACu: goto label_7F0ABAAC;
    case 0x7F0ABAB0u: goto label_7F0ABAB0;
    case 0x7F0ABAB4u: goto label_7F0ABAB4;
    case 0x7F0ABAB8u: goto label_7F0ABAB8;
    case 0x7F0ABABCu: goto label_7F0ABABC;
    case 0x7F0ABAC0u: goto label_7F0ABAC0;
    case 0x7F0ABAC4u: goto label_7F0ABAC4;
    case 0x7F0ABAC8u: goto label_7F0ABAC8;
    case 0x7F0ABACCu: goto label_7F0ABACC;
    case 0x7F0ABAD0u: goto label_7F0ABAD0;
    case 0x7F0ABAD4u: goto label_7F0ABAD4;
    case 0x7F0ABAD8u: goto label_7F0ABAD8;
    case 0x7F0ABADCu: goto label_7F0ABADC;
    case 0x7F0ABAE0u: goto label_7F0ABAE0;
    case 0x7F0ABAE4u: goto label_7F0ABAE4;
    case 0x7F0ABAE8u: goto label_7F0ABAE8;
    case 0x7F0ABAECu: goto label_7F0ABAEC;
    case 0x7F0ABAF0u: goto label_7F0ABAF0;
    case 0x7F0ABAF4u: goto label_7F0ABAF4;
    case 0x7F0ABAF8u: goto label_7F0ABAF8;
    case 0x7F0ABAFCu: goto label_7F0ABAFC;
    case 0x7F0ABB00u: goto label_7F0ABB00;
    case 0x7F0ABB04u: goto label_7F0ABB04;
    case 0x7F0ABB08u: goto label_7F0ABB08;
    case 0x7F0ABB0Cu: goto label_7F0ABB0C;
    case 0x7F0ABB10u: goto label_7F0ABB10;
    case 0x7F0ABB14u: goto label_7F0ABB14;
    case 0x7F0ABB18u: goto label_7F0ABB18;
    case 0x7F0ABB1Cu: goto label_7F0ABB1C;
    case 0x7F0ABB20u: goto label_7F0ABB20;
    case 0x7F0ABB24u: goto label_7F0ABB24;
    case 0x7F0ABB28u: goto label_7F0ABB28;
    case 0x7F0ABB2Cu: goto label_7F0ABB2C;
    case 0x7F0ABB30u: goto label_7F0ABB30;
    case 0x7F0ABB34u: goto label_7F0ABB34;
    case 0x7F0ABB38u: goto label_7F0ABB38;
    case 0x7F0ABB3Cu: goto label_7F0ABB3C;
    case 0x7F0ABB40u: goto label_7F0ABB40;
    case 0x7F0ABB44u: goto label_7F0ABB44;
    case 0x7F0ABB48u: goto label_7F0ABB48;
    case 0x7F0ABB4Cu: goto label_7F0ABB4C;
    case 0x7F0ABB50u: goto label_7F0ABB50;
    case 0x7F0ABB54u: goto label_7F0ABB54;
    case 0x7F0ABB58u: goto label_7F0ABB58;
    case 0x7F0ABB5Cu: goto label_7F0ABB5C;
    case 0x7F0ABB60u: goto label_7F0ABB60;
    case 0x7F0ABB64u: goto label_7F0ABB64;
    case 0x7F0ABB68u: goto label_7F0ABB68;
    case 0x7F0ABB6Cu: goto label_7F0ABB6C;
    case 0x7F0ABB70u: goto label_7F0ABB70;
    case 0x7F0ABB74u: goto label_7F0ABB74;
    case 0x7F0ABB78u: goto label_7F0ABB78;
    case 0x7F0ABB7Cu: goto label_7F0ABB7C;
    case 0x7F0ABB80u: goto label_7F0ABB80;
    case 0x7F0ABB84u: goto label_7F0ABB84;
    case 0x7F0ABB88u: goto label_7F0ABB88;
    case 0x7F0ABB8Cu: goto label_7F0ABB8C;
    case 0x7F0ABB90u: goto label_7F0ABB90;
    case 0x7F0ABB94u: goto label_7F0ABB94;
    case 0x7F0ABB98u: goto label_7F0ABB98;
    case 0x7F0ABB9Cu: goto label_7F0ABB9C;
    case 0x7F0ABBA0u: goto label_7F0ABBA0;
    case 0x7F0ABBA4u: goto label_7F0ABBA4;
    case 0x7F0ABBA8u: goto label_7F0ABBA8;
    case 0x7F0ABBACu: goto label_7F0ABBAC;
    case 0x7F0ABBB0u: goto label_7F0ABBB0;
    case 0x7F0ABBB4u: goto label_7F0ABBB4;
    case 0x7F0ABBB8u: goto label_7F0ABBB8;
    case 0x7F0ABBBCu: goto label_7F0ABBBC;
    case 0x7F0ABBC0u: goto label_7F0ABBC0;
    case 0x7F0ABBC4u: goto label_7F0ABBC4;
    case 0x7F0ABBC8u: goto label_7F0ABBC8;
    case 0x7F0ABBCCu: goto label_7F0ABBCC;
    case 0x7F0ABBD0u: goto label_7F0ABBD0;
    case 0x7F0ABBD4u: goto label_7F0ABBD4;
    case 0x7F0ABBD8u: goto label_7F0ABBD8;
    case 0x7F0ABBDCu: goto label_7F0ABBDC;
    case 0x7F0ABBE0u: goto label_7F0ABBE0;
    case 0x7F0ABBE4u: goto label_7F0ABBE4;
    case 0x7F0ABBE8u: goto label_7F0ABBE8;
    case 0x7F0ABBECu: goto label_7F0ABBEC;
    case 0x7F0ABBF0u: goto label_7F0ABBF0;
    case 0x7F0ABBF4u: goto label_7F0ABBF4;
    case 0x7F0ABBF8u: goto label_7F0ABBF8;
    case 0x7F0ABBFCu: goto label_7F0ABBFC;
    case 0x7F0ABC00u: goto label_7F0ABC00;
    case 0x7F0ABC04u: goto label_7F0ABC04;
    case 0x7F0ABC08u: goto label_7F0ABC08;
    case 0x7F0ABC0Cu: goto label_7F0ABC0C;
    case 0x7F0ABC10u: goto label_7F0ABC10;
    case 0x7F0ABC14u: goto label_7F0ABC14;
    case 0x7F0ABC18u: goto label_7F0ABC18;
    case 0x7F0ABC1Cu: goto label_7F0ABC1C;
    case 0x7F0ABC20u: goto label_7F0ABC20;
    case 0x7F0ABC24u: goto label_7F0ABC24;
    case 0x7F0ABC28u: goto label_7F0ABC28;
    case 0x7F0ABC2Cu: goto label_7F0ABC2C;
    case 0x7F0ABC30u: goto label_7F0ABC30;
    case 0x7F0ABC34u: goto label_7F0ABC34;
    case 0x7F0ABC38u: goto label_7F0ABC38;
    case 0x7F0ABC3Cu: goto label_7F0ABC3C;
    case 0x7F0ABC40u: goto label_7F0ABC40;
    case 0x7F0ABC44u: goto label_7F0ABC44;
    case 0x7F0ABC48u: goto label_7F0ABC48;
    case 0x7F0ABC4Cu: goto label_7F0ABC4C;
    case 0x7F0ABC50u: goto label_7F0ABC50;
    case 0x7F0ABC54u: goto label_7F0ABC54;
    case 0x7F0ABC58u: goto label_7F0ABC58;
    case 0x7F0ABC5Cu: goto label_7F0ABC5C;
    case 0x7F0ABC60u: goto label_7F0ABC60;
    case 0x7F0ABC64u: goto label_7F0ABC64;
    case 0x7F0ABC68u: goto label_7F0ABC68;
    case 0x7F0ABC6Cu: goto label_7F0ABC6C;
    case 0x7F0ABC70u: goto label_7F0ABC70;
    case 0x7F0ABC74u: goto label_7F0ABC74;
    case 0x7F0ABC78u: goto label_7F0ABC78;
    case 0x7F0ABC7Cu: goto label_7F0ABC7C;
    case 0x7F0ABC80u: goto label_7F0ABC80;
    case 0x7F0ABC84u: goto label_7F0ABC84;
    case 0x7F0ABC88u: goto label_7F0ABC88;
    case 0x7F0ABC8Cu: goto label_7F0ABC8C;
    case 0x7F0ABC90u: goto label_7F0ABC90;
    case 0x7F0ABC94u: goto label_7F0ABC94;
    case 0x7F0ABC98u: goto label_7F0ABC98;
    case 0x7F0ABC9Cu: goto label_7F0ABC9C;
    case 0x7F0ABCA0u: goto label_7F0ABCA0;
    case 0x7F0ABCA4u: goto label_7F0ABCA4;
    case 0x7F0ABCA8u: goto label_7F0ABCA8;
    case 0x7F0ABCACu: goto label_7F0ABCAC;
    case 0x7F0ABCB0u: goto label_7F0ABCB0;
    case 0x7F0ABCB4u: goto label_7F0ABCB4;
    case 0x7F0ABCB8u: goto label_7F0ABCB8;
    case 0x7F0ABCBCu: goto label_7F0ABCBC;
    case 0x7F0ABCC0u: goto label_7F0ABCC0;
    case 0x7F0ABCC4u: goto label_7F0ABCC4;
    case 0x7F0ABCC8u: goto label_7F0ABCC8;
    case 0x7F0ABCCCu: goto label_7F0ABCCC;
    case 0x7F0ABCD0u: goto label_7F0ABCD0;
    case 0x7F0ABCD4u: goto label_7F0ABCD4;
    case 0x7F0ABCD8u: goto label_7F0ABCD8;
    case 0x7F0ABCDCu: goto label_7F0ABCDC;
    case 0x7F0ABCE0u: goto label_7F0ABCE0;
    case 0x7F0ABCE4u: goto label_7F0ABCE4;
    case 0x7F0ABCE8u: goto label_7F0ABCE8;
    case 0x7F0ABCECu: goto label_7F0ABCEC;
    case 0x7F0ABCF0u: goto label_7F0ABCF0;
    case 0x7F0ABCF4u: goto label_7F0ABCF4;
    case 0x7F0ABCF8u: goto label_7F0ABCF8;
    case 0x7F0ABCFCu: goto label_7F0ABCFC;
    case 0x7F0ABD00u: goto label_7F0ABD00;
    case 0x7F0ABD04u: goto label_7F0ABD04;
    case 0x7F0ABD08u: goto label_7F0ABD08;
    case 0x7F0ABD0Cu: goto label_7F0ABD0C;
    case 0x7F0ABD10u: goto label_7F0ABD10;
    case 0x7F0ABD14u: goto label_7F0ABD14;
    case 0x7F0ABD18u: goto label_7F0ABD18;
    case 0x7F0ABD1Cu: goto label_7F0ABD1C;
    case 0x7F0ABD20u: goto label_7F0ABD20;
    case 0x7F0ABD24u: goto label_7F0ABD24;
    case 0x7F0ABD28u: goto label_7F0ABD28;
    case 0x7F0ABD2Cu: goto label_7F0ABD2C;
    case 0x7F0ABD30u: goto label_7F0ABD30;
    case 0x7F0ABD34u: goto label_7F0ABD34;
    case 0x7F0ABD38u: goto label_7F0ABD38;
    case 0x7F0ABD3Cu: goto label_7F0ABD3C;
    case 0x7F0ABD40u: goto label_7F0ABD40;
    case 0x7F0ABD44u: goto label_7F0ABD44;
    case 0x7F0ABD48u: goto label_7F0ABD48;
    case 0x7F0ABD4Cu: goto label_7F0ABD4C;
    case 0x7F0ABD50u: goto label_7F0ABD50;
    case 0x7F0ABD54u: goto label_7F0ABD54;
    case 0x7F0ABD58u: goto label_7F0ABD58;
    case 0x7F0ABD5Cu: goto label_7F0ABD5C;
    case 0x7F0ABD60u: goto label_7F0ABD60;
    case 0x7F0ABD64u: goto label_7F0ABD64;
    case 0x7F0ABD68u: goto label_7F0ABD68;
    case 0x7F0ABD6Cu: goto label_7F0ABD6C;
    case 0x7F0ABD70u: goto label_7F0ABD70;
    case 0x7F0ABD74u: goto label_7F0ABD74;
    case 0x7F0ABD78u: goto label_7F0ABD78;
    case 0x7F0ABD7Cu: goto label_7F0ABD7C;
    case 0x7F0ABD80u: goto label_7F0ABD80;
    case 0x7F0ABD84u: goto label_7F0ABD84;
    case 0x7F0ABD88u: goto label_7F0ABD88;
    case 0x7F0ABD8Cu: goto label_7F0ABD8C;
    case 0x7F0ABD90u: goto label_7F0ABD90;
    case 0x7F0ABD94u: goto label_7F0ABD94;
    case 0x7F0ABD98u: goto label_7F0ABD98;
    case 0x7F0ABD9Cu: goto label_7F0ABD9C;
    case 0x7F0ABDA0u: goto label_7F0ABDA0;
    case 0x7F0ABDA4u: goto label_7F0ABDA4;
    case 0x7F0ABDA8u: goto label_7F0ABDA8;
    case 0x7F0ABDACu: goto label_7F0ABDAC;
    case 0x7F0ABDB0u: goto label_7F0ABDB0;
    case 0x7F0ABDB4u: goto label_7F0ABDB4;
    case 0x7F0ABDB8u: goto label_7F0ABDB8;
    case 0x7F0ABDBCu: goto label_7F0ABDBC;
    case 0x7F0ABDC0u: goto label_7F0ABDC0;
    case 0x7F0ABDC4u: goto label_7F0ABDC4;
    case 0x7F0ABDC8u: goto label_7F0ABDC8;
    case 0x7F0ABDCCu: goto label_7F0ABDCC;
    case 0x7F0ABDD0u: goto label_7F0ABDD0;
    case 0x7F0ABDD4u: goto label_7F0ABDD4;
    case 0x7F0ABDD8u: goto label_7F0ABDD8;
    case 0x7F0ABDDCu: goto label_7F0ABDDC;
    case 0x7F0ABDE0u: goto label_7F0ABDE0;
    case 0x7F0ABDE4u: goto label_7F0ABDE4;
    case 0x7F0ABDE8u: goto label_7F0ABDE8;
    case 0x7F0ABDECu: goto label_7F0ABDEC;
    case 0x7F0ABDF0u: goto label_7F0ABDF0;
    case 0x7F0ABDF4u: goto label_7F0ABDF4;
    case 0x7F0ABDF8u: goto label_7F0ABDF8;
    case 0x7F0ABDFCu: goto label_7F0ABDFC;
    case 0x7F0ABE00u: goto label_7F0ABE00;
    case 0x7F0ABE04u: goto label_7F0ABE04;
    case 0x7F0ABE08u: goto label_7F0ABE08;
    case 0x7F0ABE0Cu: goto label_7F0ABE0C;
    case 0x7F0ABE10u: goto label_7F0ABE10;
    case 0x7F0ABE14u: goto label_7F0ABE14;
    case 0x7F0ABE18u: goto label_7F0ABE18;
    case 0x7F0ABE1Cu: goto label_7F0ABE1C;
    case 0x7F0ABE20u: goto label_7F0ABE20;
    case 0x7F0ABE24u: goto label_7F0ABE24;
    case 0x7F0ABE28u: goto label_7F0ABE28;
    case 0x7F0ABE2Cu: goto label_7F0ABE2C;
    case 0x7F0ABE30u: goto label_7F0ABE30;
    case 0x7F0ABE34u: goto label_7F0ABE34;
    case 0x7F0ABE38u: goto label_7F0ABE38;
    case 0x7F0ABE3Cu: goto label_7F0ABE3C;
    case 0x7F0ABE40u: goto label_7F0ABE40;
    case 0x7F0ABE44u: goto label_7F0ABE44;
    case 0x7F0ABE48u: goto label_7F0ABE48;
    case 0x7F0ABE4Cu: goto label_7F0ABE4C;
    case 0x7F0ABE50u: goto label_7F0ABE50;
    case 0x7F0ABE54u: goto label_7F0ABE54;
    case 0x7F0ABE58u: goto label_7F0ABE58;
    case 0x7F0ABE5Cu: goto label_7F0ABE5C;
    case 0x7F0ABE60u: goto label_7F0ABE60;
    case 0x7F0ABE64u: goto label_7F0ABE64;
    case 0x7F0ABE68u: goto label_7F0ABE68;
    case 0x7F0ABE6Cu: goto label_7F0ABE6C;
    case 0x7F0ABE70u: goto label_7F0ABE70;
    case 0x7F0ABE74u: goto label_7F0ABE74;
    case 0x7F0ABE78u: goto label_7F0ABE78;
    case 0x7F0ABE7Cu: goto label_7F0ABE7C;
    case 0x7F0ABE80u: goto label_7F0ABE80;
    case 0x7F0ABE84u: goto label_7F0ABE84;
    case 0x7F0ABE88u: goto label_7F0ABE88;
    case 0x7F0ABE8Cu: goto label_7F0ABE8C;
    case 0x7F0ABE90u: goto label_7F0ABE90;
    case 0x7F0ABE94u: goto label_7F0ABE94;
    case 0x7F0ABE98u: goto label_7F0ABE98;
    case 0x7F0ABE9Cu: goto label_7F0ABE9C;
    case 0x7F0ABEA0u: goto label_7F0ABEA0;
    case 0x7F0ABEA4u: goto label_7F0ABEA4;
    case 0x7F0ABEA8u: goto label_7F0ABEA8;
    case 0x7F0ABEACu: goto label_7F0ABEAC;
    case 0x7F0ABEB0u: goto label_7F0ABEB0;
    case 0x7F0ABEB4u: goto label_7F0ABEB4;
    case 0x7F0ABEB8u: goto label_7F0ABEB8;
    case 0x7F0ABEBCu: goto label_7F0ABEBC;
    case 0x7F0ABEC0u: goto label_7F0ABEC0;
    case 0x7F0ABEC4u: goto label_7F0ABEC4;
    case 0x7F0ABEC8u: goto label_7F0ABEC8;
    case 0x7F0ABECCu: goto label_7F0ABECC;
    case 0x7F0ABED0u: goto label_7F0ABED0;
    case 0x7F0ABED4u: goto label_7F0ABED4;
    case 0x7F0ABED8u: goto label_7F0ABED8;
    case 0x7F0ABEDCu: goto label_7F0ABEDC;
    case 0x7F0ABEE0u: goto label_7F0ABEE0;
    case 0x7F0ABEE4u: goto label_7F0ABEE4;
    case 0x7F0ABEE8u: goto label_7F0ABEE8;
    case 0x7F0ABEECu: goto label_7F0ABEEC;
    case 0x7F0ABEF0u: goto label_7F0ABEF0;
    case 0x7F0ABEF4u: goto label_7F0ABEF4;
    case 0x7F0ABEF8u: goto label_7F0ABEF8;
    case 0x7F0ABEFCu: goto label_7F0ABEFC;
    case 0x7F0ABF00u: goto label_7F0ABF00;
    case 0x7F0ABF04u: goto label_7F0ABF04;
    case 0x7F0ABF08u: goto label_7F0ABF08;
    case 0x7F0ABF0Cu: goto label_7F0ABF0C;
    case 0x7F0ABF10u: goto label_7F0ABF10;
    case 0x7F0ABF14u: goto label_7F0ABF14;
    case 0x7F0ABF18u: goto label_7F0ABF18;
    case 0x7F0ABF1Cu: goto label_7F0ABF1C;
    case 0x7F0ABF20u: goto label_7F0ABF20;
    case 0x7F0ABF24u: goto label_7F0ABF24;
    case 0x7F0ABF28u: goto label_7F0ABF28;
    case 0x7F0ABF2Cu: goto label_7F0ABF2C;
    case 0x7F0ABF30u: goto label_7F0ABF30;
    case 0x7F0ABF34u: goto label_7F0ABF34;
    case 0x7F0ABF38u: goto label_7F0ABF38;
    case 0x7F0ABF3Cu: goto label_7F0ABF3C;
    case 0x7F0ABF40u: goto label_7F0ABF40;
    case 0x7F0ABF44u: goto label_7F0ABF44;
    case 0x7F0ABF48u: goto label_7F0ABF48;
    case 0x7F0ABF4Cu: goto label_7F0ABF4C;
    case 0x7F0ABF50u: goto label_7F0ABF50;
    case 0x7F0ABF54u: goto label_7F0ABF54;
    case 0x7F0ABF58u: goto label_7F0ABF58;
    case 0x7F0ABF5Cu: goto label_7F0ABF5C;
    case 0x7F0ABF60u: goto label_7F0ABF60;
    case 0x7F0ABF64u: goto label_7F0ABF64;
    case 0x7F0ABF68u: goto label_7F0ABF68;
    case 0x7F0ABF6Cu: goto label_7F0ABF6C;
    case 0x7F0ABF70u: goto label_7F0ABF70;
    case 0x7F0ABF74u: goto label_7F0ABF74;
    case 0x7F0ABF78u: goto label_7F0ABF78;
    case 0x7F0ABF7Cu: goto label_7F0ABF7C;
    case 0x7F0ABF80u: goto label_7F0ABF80;
    case 0x7F0ABF84u: goto label_7F0ABF84;
    case 0x7F0ABF88u: goto label_7F0ABF88;
    case 0x7F0ABF8Cu: goto label_7F0ABF8C;
    case 0x7F0ABF90u: goto label_7F0ABF90;
    case 0x7F0ABF94u: goto label_7F0ABF94;
    case 0x7F0ABF98u: goto label_7F0ABF98;
    case 0x7F0ABF9Cu: goto label_7F0ABF9C;
    case 0x7F0ABFA0u: goto label_7F0ABFA0;
    case 0x7F0ABFA4u: goto label_7F0ABFA4;
    case 0x7F0ABFA8u: goto label_7F0ABFA8;
    case 0x7F0ABFACu: goto label_7F0ABFAC;
    case 0x7F0ABFB0u: goto label_7F0ABFB0;
    case 0x7F0ABFB4u: goto label_7F0ABFB4;
    case 0x7F0ABFB8u: goto label_7F0ABFB8;
    case 0x7F0ABFBCu: goto label_7F0ABFBC;
    case 0x7F0ABFC0u: goto label_7F0ABFC0;
    case 0x7F0ABFC4u: goto label_7F0ABFC4;
    case 0x7F0ABFC8u: goto label_7F0ABFC8;
    case 0x7F0ABFCCu: goto label_7F0ABFCC;
    case 0x7F0ABFD0u: goto label_7F0ABFD0;
    case 0x7F0ABFD4u: goto label_7F0ABFD4;
    case 0x7F0ABFD8u: goto label_7F0ABFD8;
    case 0x7F0ABFDCu: goto label_7F0ABFDC;
    case 0x7F0ABFE0u: goto label_7F0ABFE0;
    case 0x7F0ABFE4u: goto label_7F0ABFE4;
    case 0x7F0ABFE8u: goto label_7F0ABFE8;
    case 0x7F0ABFECu: goto label_7F0ABFEC;
    case 0x7F0ABFF0u: goto label_7F0ABFF0;
    case 0x7F0ABFF4u: goto label_7F0ABFF4;
    case 0x7F0ABFF8u: goto label_7F0ABFF8;
    case 0x7F0ABFFCu: goto label_7F0ABFFC;
    case 0x7F0AC000u: goto label_7F0AC000;
    case 0x7F0AC004u: goto label_7F0AC004;
    case 0x7F0AC008u: goto label_7F0AC008;
    case 0x7F0AC00Cu: goto label_7F0AC00C;
    case 0x7F0AC010u: goto label_7F0AC010;
    case 0x7F0AC014u: goto label_7F0AC014;
    case 0x7F0AC018u: goto label_7F0AC018;
    case 0x7F0AC01Cu: goto label_7F0AC01C;
    case 0x7F0AC020u: goto label_7F0AC020;
    case 0x7F0AC024u: goto label_7F0AC024;
    case 0x7F0AC028u: goto label_7F0AC028;
    case 0x7F0AC02Cu: goto label_7F0AC02C;
    case 0x7F0AC030u: goto label_7F0AC030;
    case 0x7F0AC034u: goto label_7F0AC034;
    case 0x7F0AC038u: goto label_7F0AC038;
    case 0x7F0AC03Cu: goto label_7F0AC03C;
    case 0x7F0AC040u: goto label_7F0AC040;
    case 0x7F0AC044u: goto label_7F0AC044;
    case 0x7F0AC048u: goto label_7F0AC048;
    case 0x7F0AC04Cu: goto label_7F0AC04C;
    case 0x7F0AC050u: goto label_7F0AC050;
    case 0x7F0AC054u: goto label_7F0AC054;
    case 0x7F0AC058u: goto label_7F0AC058;
    case 0x7F0AC05Cu: goto label_7F0AC05C;
    case 0x7F0AC060u: goto label_7F0AC060;
    case 0x7F0AC064u: goto label_7F0AC064;
    case 0x7F0AC068u: goto label_7F0AC068;
    case 0x7F0AC06Cu: goto label_7F0AC06C;
    case 0x7F0AC070u: goto label_7F0AC070;
    case 0x7F0AC074u: goto label_7F0AC074;
    case 0x7F0AC078u: goto label_7F0AC078;
    case 0x7F0AC07Cu: goto label_7F0AC07C;
    case 0x7F0AC080u: goto label_7F0AC080;
    case 0x7F0AC084u: goto label_7F0AC084;
    case 0x7F0AC088u: goto label_7F0AC088;
    case 0x7F0AC08Cu: goto label_7F0AC08C;
    case 0x7F0AC090u: goto label_7F0AC090;
    case 0x7F0AC094u: goto label_7F0AC094;
    case 0x7F0AC098u: goto label_7F0AC098;
    case 0x7F0AC09Cu: goto label_7F0AC09C;
    case 0x7F0AC0A0u: goto label_7F0AC0A0;
    case 0x7F0AC0A4u: goto label_7F0AC0A4;
    case 0x7F0AC0A8u: goto label_7F0AC0A8;
    case 0x7F0AC0ACu: goto label_7F0AC0AC;
    case 0x7F0AC0B0u: goto label_7F0AC0B0;
    case 0x7F0AC0B4u: goto label_7F0AC0B4;
    case 0x7F0AC0B8u: goto label_7F0AC0B8;
    case 0x7F0AC0BCu: goto label_7F0AC0BC;
    case 0x7F0AC0C0u: goto label_7F0AC0C0;
    case 0x7F0AC0C4u: goto label_7F0AC0C4;
    case 0x7F0AC0C8u: goto label_7F0AC0C8;
    case 0x7F0AC0CCu: goto label_7F0AC0CC;
    case 0x7F0AC0D0u: goto label_7F0AC0D0;
    case 0x7F0AC0D4u: goto label_7F0AC0D4;
    case 0x7F0AC0D8u: goto label_7F0AC0D8;
    case 0x7F0AC0DCu: goto label_7F0AC0DC;
    case 0x7F0AC0E0u: goto label_7F0AC0E0;
    case 0x7F0AC0E4u: goto label_7F0AC0E4;
    case 0x7F0AC0E8u: goto label_7F0AC0E8;
    default: return;
    }
label_7F0A80EC:
    ctx->pc = 0x7F0A80ECu;
    ctx->downcount -= 4;
    // 7F0A80EC: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A80F0:
    ctx->pc = 0x7F0A80F0u;
    // 7F0A80F0: addis   r0, r4, -59
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(-59) << 16);

label_7F0A80F4:
    ctx->pc = 0x7F0A80F4u;
    // 7F0A80F4: cmplwi  r0, 0xE2AE
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xE2AEu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A80F8:
    ctx->pc = 0x7F0A80F8u;
    // 7F0A80F8: bc    4, 2, 0x7F0A810C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A810C;
        }
    }

label_7F0A80FC:
    ctx->pc = 0x7F0A80FCu;
    ctx->downcount -= 4;
    // 7F0A80FC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8100:
    ctx->pc = 0x7F0A8100u;
    // 7F0A8100: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_7F0A8104:
    ctx->pc = 0x7F0A8104u;
    // 7F0A8104: sth     r0, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A8108:
    ctx->pc = 0x7F0A8108u;
    // 7F0A8108: b       0x7F0A811C
    {
            goto label_7F0A811C;
    }

label_7F0A810C:
    ctx->pc = 0x7F0A810Cu;
    ctx->downcount -= 3;
    // 7F0A810C: addis   r0, r4, -244
    ctx->gpr[0] = ctx->gpr[4] + ((u32)(s32)(-244) << 16);

label_7F0A8110:
    ctx->pc = 0x7F0A8110u;
    // 7F0A8110: cmplwi  r0, 0x132B
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x132Bu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A8114:
    ctx->pc = 0x7F0A8114u;
    // 7F0A8114: bc    4, 2, 0x7F0A811C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A811C;
        }
    }

label_7F0A8118:
    ctx->pc = 0x7F0A8118u;
    ctx->downcount -= 1;
    // 7F0A8118: stfs     f0, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8118u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A811C:
    ctx->pc = 0x7F0A811Cu;
    ctx->downcount -= 4;
    // 7F0A811C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8120:
    ctx->pc = 0x7F0A8120u;
    // 7F0A8120: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F0A8124:
    ctx->pc = 0x7F0A8124u;
    // 7F0A8124: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8128:
    ctx->pc = 0x7F0A8128u;
    // 7F0A8128: bc    16, 0, 0x7F0A80DC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x7F0A80DCu;
            return;
        }
    }

label_7F0A812C:
    ctx->pc = 0x7F0A812Cu;
    ctx->downcount -= 17;
    // 7F0A812C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8130:
    ctx->pc = 0x7F0A8130u;
    // 7F0A8130: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A8134:
    ctx->pc = 0x7F0A8134u;
    // 7F0A8134: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8138:
    ctx->pc = 0x7F0A8138u;
    // 7F0A8138: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A813C:
    ctx->pc = 0x7F0A813Cu;
    // 7F0A813C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8140:
    ctx->pc = 0x7F0A8140u;
    // 7F0A8140: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8144:
    ctx->pc = 0x7F0A8144u;
    ctx->downcount -= 7;
    // 7F0A8144: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8148:
    ctx->pc = 0x7F0A8148u;
    // 7F0A8148: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A814C:
    ctx->pc = 0x7F0A814Cu;
    // 7F0A814C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8150:
    ctx->pc = 0x7F0A8150u;
    // 7F0A8150: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A8154:
    ctx->pc = 0x7F0A8154u;
    // 7F0A8154: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8158:
    ctx->pc = 0x7F0A8158u;
    // 7F0A8158: addi    r3, r31, 32
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(32);

label_7F0A815C:
    ctx->pc = 0x7F0A815Cu;
    // 7F0A815C: bl      0x7F023E10
    {
            ctx->lr = 0x7F0A8160u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F0A8160:
    ctx->pc = 0x7F0A8160u;
    ctx->downcount -= 2;
    // 7F0A8160: addi    r3, r31, 432
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(432);

label_7F0A8164:
    ctx->pc = 0x7F0A8164u;
    // 7F0A8164: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0A8168u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0A8168:
    ctx->pc = 0x7F0A8168u;
    ctx->downcount -= 6;
    // 7F0A8168: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A816C:
    ctx->pc = 0x7F0A816Cu;
    // 7F0A816C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A8170:
    ctx->pc = 0x7F0A8170u;
    // 7F0A8170: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8174:
    ctx->pc = 0x7F0A8174u;
    // 7F0A8174: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8178:
    ctx->pc = 0x7F0A8178u;
    // 7F0A8178: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A817C:
    ctx->pc = 0x7F0A817Cu;
    ctx->downcount -= 19;
    // 7F0A817C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8180:
    ctx->pc = 0x7F0A8180u;
    // 7F0A8180: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8184:
    ctx->pc = 0x7F0A8184u;
    // 7F0A8184: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A8188:
    ctx->pc = 0x7F0A8188u;
    // 7F0A8188: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A818C:
    ctx->pc = 0x7F0A818Cu;
    // 7F0A818C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A8190:
    ctx->pc = 0x7F0A8190u;
    // 7F0A8190: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8194:
    ctx->pc = 0x7F0A8194u;
    // 7F0A8194: addi    r30, r29, 32
    ctx->gpr[30] = ctx->gpr[29] + (u32)(s32)(32);

label_7F0A8198:
    ctx->pc = 0x7F0A8198u;
    // 7F0A8198: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A819C:
    ctx->pc = 0x7F0A819Cu;
    // 7F0A819C: bl      0x7F022FB4
    {
            ctx->lr = 0x7F0A81A0u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F0A81A0:
    ctx->pc = 0x7F0A81A0u;
    ctx->downcount -= 2;
    // 7F0A81A0: cmpwi   r3, 0
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

label_7F0A81A4:
    ctx->pc = 0x7F0A81A4u;
    // 7F0A81A4: bc    4, 0, 0x7F0A81B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A81B0;
        }
    }

label_7F0A81A8:
    ctx->pc = 0x7F0A81A8u;
    ctx->downcount -= 2;
    // 7F0A81A8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0A81AC:
    ctx->pc = 0x7F0A81ACu;
    // 7F0A81AC: b       0x7F0A8250
    {
            goto label_7F0A8250;
    }

label_7F0A81B0:
    ctx->pc = 0x7F0A81B0u;
    ctx->downcount -= 2;
    // 7F0A81B0: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F0A81B4:
    ctx->pc = 0x7F0A81B4u;
    // 7F0A81B4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0A81B8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0A81B8:
    ctx->pc = 0x7F0A81B8u;
    ctx->downcount -= 3;
    // 7F0A81B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A81BC:
    ctx->pc = 0x7F0A81BCu;
    // 7F0A81BC: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F0A81C0:
    ctx->pc = 0x7F0A81C0u;
    // 7F0A81C0: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0A81C4u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0A81C4:
    ctx->pc = 0x7F0A81C4u;
    ctx->downcount -= 4;
    // 7F0A81C4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A81C8:
    ctx->pc = 0x7F0A81C8u;
    // 7F0A81C8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A81CC:
    ctx->pc = 0x7F0A81CCu;
    // 7F0A81CC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A81D0:
    ctx->pc = 0x7F0A81D0u;
    // 7F0A81D0: bl      0x7F0242F4
    {
            ctx->lr = 0x7F0A81D4u;
            ctx->pc = 0x7F0242F4u;
            return;
    }

label_7F0A81D4:
    ctx->pc = 0x7F0A81D4u;
    ctx->downcount -= 5;
    // 7F0A81D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A81D8:
    ctx->pc = 0x7F0A81D8u;
    // 7F0A81D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0A81DC:
    ctx->pc = 0x7F0A81DCu;
    // 7F0A81DC: li      r5, -2
    ctx->gpr[5] = (u32)(s32)(-2);

label_7F0A81E0:
    ctx->pc = 0x7F0A81E0u;
    // 7F0A81E0: li      r6, -2
    ctx->gpr[6] = (u32)(s32)(-2);

label_7F0A81E4:
    ctx->pc = 0x7F0A81E4u;
    // 7F0A81E4: bl      0x7F023F7C
    {
            ctx->lr = 0x7F0A81E8u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F0A81E8:
    ctx->pc = 0x7F0A81E8u;
    ctx->downcount -= 8;
    // 7F0A81E8: lhz     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0A81EC:
    ctx->pc = 0x7F0A81ECu;
    // 7F0A81EC: lis     r4, 28
    ctx->gpr[4] = ((u32)(s32)(28) << 16);

label_7F0A81F0:
    ctx->pc = 0x7F0A81F0u;
    // 7F0A81F0: addi    r31, r29, 432
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(432);

label_7F0A81F4:
    ctx->pc = 0x7F0A81F4u;
    // 7F0A81F4: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F0A81F8:
    ctx->pc = 0x7F0A81F8u;
    // 7F0A81F8: ori     r0, r0, 0x0003
    ctx->gpr[0] = ctx->gpr[0] | 0x0003u;

label_7F0A81FC:
    ctx->pc = 0x7F0A81FCu;
    // 7F0A81FC: addi    r4, r4, -17245
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17245);

label_7F0A8200:
    ctx->pc = 0x7F0A8200u;
    // 7F0A8200: sth     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A8204:
    ctx->pc = 0x7F0A8204u;
    // 7F0A8204: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F0A8208u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F0A8208:
    ctx->pc = 0x7F0A8208u;
    ctx->downcount -= 5;
    // 7F0A8208: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A820C:
    ctx->pc = 0x7F0A820Cu;
    // 7F0A820C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8210:
    ctx->pc = 0x7F0A8210u;
    // 7F0A8210: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0A8214:
    ctx->pc = 0x7F0A8214u;
    // 7F0A8214: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0A8218:
    ctx->pc = 0x7F0A8218u;
    // 7F0A8218: bl      0x7F04272C
    {
            ctx->lr = 0x7F0A821Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0A821C:
    ctx->pc = 0x7F0A821Cu;
    ctx->downcount -= 3;
    // 7F0A821C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8220:
    ctx->pc = 0x7F0A8220u;
    // 7F0A8220: addi    r4, r29, 476
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(476);

label_7F0A8224:
    ctx->pc = 0x7F0A8224u;
    // 7F0A8224: bl      0x7F042B20
    {
            ctx->lr = 0x7F0A8228u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0A8228:
    ctx->pc = 0x7F0A8228u;
    ctx->downcount -= 2;
    // 7F0A8228: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F0A822C:
    ctx->pc = 0x7F0A822Cu;
    // 7F0A822C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0A8230u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0A8230:
    ctx->pc = 0x7F0A8230u;
    ctx->downcount -= 2;
    // 7F0A8230: cmplwi  r3, 0x0000
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

label_7F0A8234:
    ctx->pc = 0x7F0A8234u;
    // 7F0A8234: bc    4, 2, 0x7F0A8240
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8240;
        }
    }

label_7F0A8238:
    ctx->pc = 0x7F0A8238u;
    ctx->downcount -= 2;
    // 7F0A8238: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0A823C:
    ctx->pc = 0x7F0A823Cu;
    // 7F0A823C: b       0x7F0A8250
    {
            goto label_7F0A8250;
    }

label_7F0A8240:
    ctx->pc = 0x7F0A8240u;
    ctx->downcount -= 1;
    // 7F0A8240: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F0A8244u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F0A8244:
    ctx->pc = 0x7F0A8244u;
    ctx->downcount -= 2;
    // 7F0A8244: addi    r4, r29, 604
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(604);

label_7F0A8248:
    ctx->pc = 0x7F0A8248u;
    // 7F0A8248: bl      0x7F3C6904
    {
            ctx->lr = 0x7F0A824Cu;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F0A824C:
    ctx->pc = 0x7F0A824Cu;
    ctx->downcount -= 1;
    // 7F0A824C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A8250:
    ctx->pc = 0x7F0A8250u;
    ctx->downcount -= 16;
    // 7F0A8250: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A8254:
    ctx->pc = 0x7F0A8254u;
    // 7F0A8254: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8258:
    ctx->pc = 0x7F0A8258u;
    // 7F0A8258: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A825C:
    ctx->pc = 0x7F0A825Cu;
    // 7F0A825C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8260:
    ctx->pc = 0x7F0A8260u;
    // 7F0A8260: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8264:
    ctx->pc = 0x7F0A8264u;
    ctx->downcount -= 21;
    // 7F0A8264: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8268:
    ctx->pc = 0x7F0A8268u;
    // 7F0A8268: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A826C:
    ctx->pc = 0x7F0A826Cu;
    // 7F0A826C: li      r5, 624
    ctx->gpr[5] = (u32)(s32)(624);

label_7F0A8270:
    ctx->pc = 0x7F0A8270u;
    // 7F0A8270: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A8274:
    ctx->pc = 0x7F0A8274u;
    // 7F0A8274: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8278:
    ctx->pc = 0x7F0A8278u;
    // 7F0A8278: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A827C:
    ctx->pc = 0x7F0A827Cu;
    // 7F0A827C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8280:
    ctx->pc = 0x7F0A8280u;
    // 7F0A8280: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A8284:
    ctx->pc = 0x7F0A8284u;
    // 7F0A8284: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F0A8288:
    ctx->pc = 0x7F0A8288u;
    // 7F0A8288: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0A828C:
    ctx->pc = 0x7F0A828Cu;
    // 7F0A828C: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0A8290u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0A8290:
    ctx->pc = 0x7F0A8290u;
    ctx->downcount -= 2;
    // 7F0A8290: or.   r31, r3, r3
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

label_7F0A8294:
    ctx->pc = 0x7F0A8294u;
    // 7F0A8294: bc    12, 2, 0x7F0A82D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A82D4;
        }
    }

label_7F0A8298:
    ctx->pc = 0x7F0A8298u;
    ctx->downcount -= 5;
    // 7F0A8298: lis     r4, 32522
    ctx->gpr[4] = ((u32)(s32)(32522) << 16);

label_7F0A829C:
    ctx->pc = 0x7F0A829Cu;
    // 7F0A829C: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0A82A0:
    ctx->pc = 0x7F0A82A0u;
    // 7F0A82A0: addi    r4, r4, 32760
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32760);

label_7F0A82A4:
    ctx->pc = 0x7F0A82A4u;
    // 7F0A82A4: addi    r5, r5, -32444
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-32444);

label_7F0A82A8:
    ctx->pc = 0x7F0A82A8u;
    // 7F0A82A8: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0A82ACu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0A82AC:
    ctx->pc = 0x7F0A82ACu;
    ctx->downcount -= 4;
    // 7F0A82AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A82B0:
    ctx->pc = 0x7F0A82B0u;
    // 7F0A82B0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A82B4:
    ctx->pc = 0x7F0A82B4u;
    // 7F0A82B4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A82B8:
    ctx->pc = 0x7F0A82B8u;
    // 7F0A82B8: bl      0x7F0A817C
    {
            ctx->lr = 0x7F0A82BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A817Cu;
                return;
            }
            goto label_7F0A817C;
    }

label_7F0A82BC:
    ctx->pc = 0x7F0A82BCu;
    ctx->downcount -= 2;
    // 7F0A82BC: cmpwi   r3, 0
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

label_7F0A82C0:
    ctx->pc = 0x7F0A82C0u;
    // 7F0A82C0: bc    4, 0, 0x7F0A82D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A82D4;
        }
    }

label_7F0A82C4:
    ctx->pc = 0x7F0A82C4u;
    ctx->downcount -= 2;
    // 7F0A82C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A82C8:
    ctx->pc = 0x7F0A82C8u;
    // 7F0A82C8: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0A82CCu;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0A82CC:
    ctx->pc = 0x7F0A82CCu;
    ctx->downcount -= 2;
    // 7F0A82CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A82D0:
    ctx->pc = 0x7F0A82D0u;
    // 7F0A82D0: b       0x7F0A82D8
    {
            goto label_7F0A82D8;
    }

label_7F0A82D4:
    ctx->pc = 0x7F0A82D4u;
    ctx->downcount -= 1;
    // 7F0A82D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A82D8:
    ctx->pc = 0x7F0A82D8u;
    ctx->downcount -= 16;
    // 7F0A82D8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A82DC:
    ctx->pc = 0x7F0A82DCu;
    // 7F0A82DC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A82E0:
    ctx->pc = 0x7F0A82E0u;
    // 7F0A82E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A82E4:
    ctx->pc = 0x7F0A82E4u;
    // 7F0A82E4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A82E8:
    ctx->pc = 0x7F0A82E8u;
    // 7F0A82E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A82EC:
    ctx->pc = 0x7F0A82ECu;
    ctx->downcount -= 8;
    // 7F0A82EC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A82F0:
    ctx->pc = 0x7F0A82F0u;
    // 7F0A82F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A82F4:
    ctx->pc = 0x7F0A82F4u;
    // 7F0A82F4: lis     r4, 220
    ctx->gpr[4] = ((u32)(s32)(220) << 16);

label_7F0A82F8:
    ctx->pc = 0x7F0A82F8u;
    // 7F0A82F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A82FC:
    ctx->pc = 0x7F0A82FCu;
    // 7F0A82FC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A8300:
    ctx->pc = 0x7F0A8300u;
    // 7F0A8300: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8304:
    ctx->pc = 0x7F0A8304u;
    // 7F0A8304: addi    r3, r4, 1335
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(1335);

label_7F0A8308:
    ctx->pc = 0x7F0A8308u;
    // 7F0A8308: bl      0x7F2E425C
    {
            ctx->lr = 0x7F0A830Cu;
            ctx->pc = 0x7F2E425Cu;
            return;
    }

label_7F0A830C:
    ctx->pc = 0x7F0A830Cu;
    ctx->downcount -= 5;
    // 7F0A830C: stw     r3, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8310:
    ctx->pc = 0x7F0A8310u;
    // 7F0A8310: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F0A8314:
    ctx->pc = 0x7F0A8314u;
    // 7F0A8314: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0A8318:
    ctx->pc = 0x7F0A8318u;
    // 7F0A8318: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0A831C:
    ctx->pc = 0x7F0A831Cu;
    // 7F0A831C: bl      0x7F2E17D4
    {
            ctx->lr = 0x7F0A8320u;
            ctx->pc = 0x7F2E17D4u;
            return;
    }

label_7F0A8320:
    ctx->pc = 0x7F0A8320u;
    ctx->downcount -= 5;
    // 7F0A8320: stw     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8324:
    ctx->pc = 0x7F0A8324u;
    // 7F0A8324: lis     r4, -32737
    ctx->gpr[4] = ((u32)(s32)(-32737) << 16);

label_7F0A8328:
    ctx->pc = 0x7F0A8328u;
    // 7F0A8328: lbz     r0, -32744(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32744);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F0A832C:
    ctx->pc = 0x7F0A832Cu;
    // 7F0A832C: cmplwi  r0, 0x0007
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

label_7F0A8330:
    ctx->pc = 0x7F0A8330u;
    // 7F0A8330: bc    12, 1, 0x7F0A83AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A83AC;
        }
    }

label_7F0A8334:
    ctx->pc = 0x7F0A8334u;
    ctx->downcount -= 7;
    // 7F0A8334: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0A8338:
    ctx->pc = 0x7F0A8338u;
    // 7F0A8338: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F0A833C:
    ctx->pc = 0x7F0A833Cu;
    // 7F0A833C: addi    r3, r3, 32592
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32592);

label_7F0A8340:
    ctx->pc = 0x7F0A8340u;
    // 7F0A8340: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8344:
    ctx->pc = 0x7F0A8344u;
    // 7F0A8344: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0A8348:
    ctx->pc = 0x7F0A8348u;
    // 7F0A8348: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F0A834C:
    ctx->pc = 0x7F0A834Cu;
    ctx->downcount -= 3;
    // 7F0A834C: lis     r3, 195
    ctx->gpr[3] = ((u32)(s32)(195) << 16);

label_7F0A8350:
    ctx->pc = 0x7F0A8350u;
    // 7F0A8350: addi    r4, r3, -29280
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29280);

label_7F0A8354:
    ctx->pc = 0x7F0A8354u;
    // 7F0A8354: b       0x7F0A83B0
    {
            goto label_7F0A83B0;
    }

label_7F0A8358:
    ctx->pc = 0x7F0A8358u;
    ctx->downcount -= 3;
    // 7F0A8358: lis     r3, 195
    ctx->gpr[3] = ((u32)(s32)(195) << 16);

label_7F0A835C:
    ctx->pc = 0x7F0A835Cu;
    // 7F0A835C: addi    r4, r3, -29280
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29280);

label_7F0A8360:
    ctx->pc = 0x7F0A8360u;
    // 7F0A8360: b       0x7F0A83B0
    {
            goto label_7F0A83B0;
    }

label_7F0A8364:
    ctx->pc = 0x7F0A8364u;
    ctx->downcount -= 3;
    // 7F0A8364: lis     r3, 55
    ctx->gpr[3] = ((u32)(s32)(55) << 16);

label_7F0A8368:
    ctx->pc = 0x7F0A8368u;
    // 7F0A8368: addi    r4, r3, -28848
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28848);

label_7F0A836C:
    ctx->pc = 0x7F0A836Cu;
    // 7F0A836C: b       0x7F0A83B0
    {
            goto label_7F0A83B0;
    }

label_7F0A8370:
    ctx->pc = 0x7F0A8370u;
    ctx->downcount -= 3;
    // 7F0A8370: lis     r3, 55
    ctx->gpr[3] = ((u32)(s32)(55) << 16);

label_7F0A8374:
    ctx->pc = 0x7F0A8374u;
    // 7F0A8374: addi    r4, r3, -28847
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28847);

label_7F0A8378:
    ctx->pc = 0x7F0A8378u;
    // 7F0A8378: b       0x7F0A83B0
    {
            goto label_7F0A83B0;
    }

label_7F0A837C:
    ctx->pc = 0x7F0A837Cu;
    ctx->downcount -= 3;
    // 7F0A837C: lis     r3, 55
    ctx->gpr[3] = ((u32)(s32)(55) << 16);

label_7F0A8380:
    ctx->pc = 0x7F0A8380u;
    // 7F0A8380: addi    r4, r3, -28845
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28845);

label_7F0A8384:
    ctx->pc = 0x7F0A8384u;
    // 7F0A8384: b       0x7F0A83B0
    {
            goto label_7F0A83B0;
    }

label_7F0A8388:
    ctx->pc = 0x7F0A8388u;
    ctx->downcount -= 3;
    // 7F0A8388: lis     r3, 55
    ctx->gpr[3] = ((u32)(s32)(55) << 16);

label_7F0A838C:
    ctx->pc = 0x7F0A838Cu;
    // 7F0A838C: addi    r4, r3, -28835
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28835);

label_7F0A8390:
    ctx->pc = 0x7F0A8390u;
    // 7F0A8390: b       0x7F0A83B0
    {
            goto label_7F0A83B0;
    }

label_7F0A8394:
    ctx->pc = 0x7F0A8394u;
    ctx->downcount -= 3;
    // 7F0A8394: lis     r3, 195
    ctx->gpr[3] = ((u32)(s32)(195) << 16);

label_7F0A8398:
    ctx->pc = 0x7F0A8398u;
    // 7F0A8398: addi    r4, r3, -29280
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-29280);

label_7F0A839C:
    ctx->pc = 0x7F0A839Cu;
    // 7F0A839C: b       0x7F0A83B0
    {
            goto label_7F0A83B0;
    }

label_7F0A83A0:
    ctx->pc = 0x7F0A83A0u;
    ctx->downcount -= 3;
    // 7F0A83A0: lis     r3, 55
    ctx->gpr[3] = ((u32)(s32)(55) << 16);

label_7F0A83A4:
    ctx->pc = 0x7F0A83A4u;
    // 7F0A83A4: addi    r4, r3, -28844
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-28844);

label_7F0A83A8:
    ctx->pc = 0x7F0A83A8u;
    // 7F0A83A8: b       0x7F0A83B0
    {
            goto label_7F0A83B0;
    }

label_7F0A83AC:
    ctx->pc = 0x7F0A83ACu;
    ctx->downcount -= 1;
    // 7F0A83AC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0A83B0:
    ctx->pc = 0x7F0A83B0u;
    ctx->downcount -= 2;
    // 7F0A83B0: cmpwi   r4, -1
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

label_7F0A83B4:
    ctx->pc = 0x7F0A83B4u;
    // 7F0A83B4: bc    12, 2, 0x7F0A83C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A83C4;
        }
    }

label_7F0A83B8:
    ctx->pc = 0x7F0A83B8u;
    ctx->downcount -= 3;
    // 7F0A83B8: lwz     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A83BC:
    ctx->pc = 0x7F0A83BCu;
    // 7F0A83BC: lwz     r5, 2192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A83C0:
    ctx->pc = 0x7F0A83C0u;
    // 7F0A83C0: bl      0x7F2E3F94
    {
            ctx->lr = 0x7F0A83C4u;
            ctx->pc = 0x7F2E3F94u;
            return;
    }

label_7F0A83C4:
    ctx->pc = 0x7F0A83C4u;
    ctx->downcount -= 9;
    // 7F0A83C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A83C8:
    ctx->pc = 0x7F0A83C8u;
    // 7F0A83C8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A83CC:
    ctx->pc = 0x7F0A83CCu;
    // 7F0A83CC: addi    r5, r3, -5400
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5400);

label_7F0A83D0:
    ctx->pc = 0x7F0A83D0u;
    // 7F0A83D0: lwz     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A83D4:
    ctx->pc = 0x7F0A83D4u;
    // 7F0A83D4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A83D8:
    ctx->pc = 0x7F0A83D8u;
    // 7F0A83D8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A83DC:
    ctx->pc = 0x7F0A83DCu;
    // 7F0A83DC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A83E0:
    ctx->pc = 0x7F0A83E0u;
    // 7F0A83E0: lwz     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A83E4:
    ctx->pc = 0x7F0A83E4u;
    // 7F0A83E4: bl      0x7F2E1CD4
    {
            ctx->lr = 0x7F0A83E8u;
            ctx->pc = 0x7F2E1CD4u;
            return;
    }

label_7F0A83E8:
    ctx->pc = 0x7F0A83E8u;
    ctx->downcount -= 7;
    // 7F0A83E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A83EC:
    ctx->pc = 0x7F0A83ECu;
    // 7F0A83EC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A83F0:
    ctx->pc = 0x7F0A83F0u;
    // 7F0A83F0: addi    r5, r3, -5392
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5392);

label_7F0A83F4:
    ctx->pc = 0x7F0A83F4u;
    // 7F0A83F4: lwz     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A83F8:
    ctx->pc = 0x7F0A83F8u;
    // 7F0A83F8: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A83F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A83FC:
    ctx->pc = 0x7F0A83FCu;
    // 7F0A83FC: lfs     f2, -5388(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0A83FCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5388);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0A8400:
    ctx->pc = 0x7F0A8400u;
    // 7F0A8400: bl      0x7F2E1D00
    {
            ctx->lr = 0x7F0A8404u;
            ctx->pc = 0x7F2E1D00u;
            return;
    }

label_7F0A8404:
    ctx->pc = 0x7F0A8404u;
    ctx->downcount -= 6;
    // 7F0A8404: lwz     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8408:
    ctx->pc = 0x7F0A8408u;
    // 7F0A8408: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F0A840C:
    ctx->pc = 0x7F0A840Cu;
    // 7F0A840C: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F0A8410:
    ctx->pc = 0x7F0A8410u;
    // 7F0A8410: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F0A8414:
    ctx->pc = 0x7F0A8414u;
    // 7F0A8414: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F0A8418:
    ctx->pc = 0x7F0A8418u;
    // 7F0A8418: bl      0x7F2E1D24
    {
            ctx->lr = 0x7F0A841Cu;
            ctx->pc = 0x7F2E1D24u;
            return;
    }

label_7F0A841C:
    ctx->pc = 0x7F0A841Cu;
    ctx->downcount -= 3;
    // 7F0A841C: lwz     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8420:
    ctx->pc = 0x7F0A8420u;
    // 7F0A8420: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0A8424:
    ctx->pc = 0x7F0A8424u;
    // 7F0A8424: bl      0x7F2E1578
    {
            ctx->lr = 0x7F0A8428u;
            ctx->pc = 0x7F2E1578u;
            return;
    }

label_7F0A8428:
    ctx->pc = 0x7F0A8428u;
    ctx->downcount -= 10;
    // 7F0A8428: lwz     r3, 2196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A842C:
    ctx->pc = 0x7F0A842Cu;
    // 7F0A842C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8430:
    ctx->pc = 0x7F0A8430u;
    // 7F0A8430: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F0A8434:
    ctx->pc = 0x7F0A8434u;
    // 7F0A8434: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8438:
    ctx->pc = 0x7F0A8438u;
    // 7F0A8438: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A843C:
    ctx->pc = 0x7F0A843Cu;
    // 7F0A843C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8440:
    ctx->pc = 0x7F0A8440u;
    // 7F0A8440: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8444:
    ctx->pc = 0x7F0A8444u;
    // 7F0A8444: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8448:
    ctx->pc = 0x7F0A8448u;
    // 7F0A8448: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A844C:
    ctx->pc = 0x7F0A844Cu;
    ctx->downcount -= 3;
    // 7F0A844C: lwz     r3, 2196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8450:
    ctx->pc = 0x7F0A8450u;
    // 7F0A8450: cmplwi  r3, 0x0000
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

label_7F0A8454:
    ctx->pc = 0x7F0A8454u;
    // 7F0A8454: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8458:
    ctx->pc = 0x7F0A8458u;
    ctx->downcount -= 4;
    // 7F0A8458: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A845C:
    ctx->pc = 0x7F0A845Cu;
    // 7F0A845C: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F0A8460:
    ctx->pc = 0x7F0A8460u;
    // 7F0A8460: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8464:
    ctx->pc = 0x7F0A8464u;
    // 7F0A8464: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8468:
    ctx->pc = 0x7F0A8468u;
    ctx->downcount -= 12;
    // 7F0A8468: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A846C:
    ctx->pc = 0x7F0A846Cu;
    // 7F0A846C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8470:
    ctx->pc = 0x7F0A8470u;
    // 7F0A8470: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8474:
    ctx->pc = 0x7F0A8474u;
    // 7F0A8474: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0A8478:
    ctx->pc = 0x7F0A8478u;
    // 7F0A8478: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A847C:
    ctx->pc = 0x7F0A847Cu;
    // 7F0A847C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8480:
    ctx->pc = 0x7F0A8480u;
    // 7F0A8480: stw     r0, 3812(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8484:
    ctx->pc = 0x7F0A8484u;
    // 7F0A8484: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A8488:
    ctx->pc = 0x7F0A8488u;
    // 7F0A8488: stw     r0, 3808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A848C:
    ctx->pc = 0x7F0A848Cu;
    // 7F0A848C: lwz     r0, 3816(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3816);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8490:
    ctx->pc = 0x7F0A8490u;
    // 7F0A8490: cmpwi   r0, 0
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

label_7F0A8494:
    ctx->pc = 0x7F0A8494u;
    // 7F0A8494: bc    12, 2, 0x7F0A849C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A849C;
        }
    }

label_7F0A8498:
    ctx->pc = 0x7F0A8498u;
    ctx->downcount -= 1;
    // 7F0A8498: b       0x7F0A84AC
    {
            goto label_7F0A84AC;
    }

label_7F0A849C:
    ctx->pc = 0x7F0A849Cu;
    ctx->downcount -= 1;
    // 7F0A849C: bl      0x7F0A84C0
    {
            ctx->lr = 0x7F0A84A0u;
            goto label_7F0A84C0;
    }

label_7F0A84A0:
    ctx->pc = 0x7F0A84A0u;
    ctx->downcount -= 3;
    // 7F0A84A0: lwz     r3, 3916(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3916);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A84A4:
    ctx->pc = 0x7F0A84A4u;
    // 7F0A84A4: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0A84A8:
    ctx->pc = 0x7F0A84A8u;
    // 7F0A84A8: stw     r0, 3916(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3916);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A84AC:
    ctx->pc = 0x7F0A84ACu;
    ctx->downcount -= 6;
    // 7F0A84AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A84B0:
    ctx->pc = 0x7F0A84B0u;
    // 7F0A84B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A84B4:
    ctx->pc = 0x7F0A84B4u;
    // 7F0A84B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A84B8:
    ctx->pc = 0x7F0A84B8u;
    // 7F0A84B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A84BC:
    ctx->pc = 0x7F0A84BCu;
    // 7F0A84BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A84C0:
    ctx->pc = 0x7F0A84C0u;
    ctx->downcount -= 6;
    // 7F0A84C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A84C4:
    ctx->pc = 0x7F0A84C4u;
    // 7F0A84C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A84C8:
    ctx->pc = 0x7F0A84C8u;
    // 7F0A84C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A84CC:
    ctx->pc = 0x7F0A84CCu;
    // 7F0A84CC: lwz     r0, 3820(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3820);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A84D0:
    ctx->pc = 0x7F0A84D0u;
    // 7F0A84D0: cmpwi   r0, 0
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

label_7F0A84D4:
    ctx->pc = 0x7F0A84D4u;
    // 7F0A84D4: bc    12, 2, 0x7F0A84DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A84DC;
        }
    }

label_7F0A84D8:
    ctx->pc = 0x7F0A84D8u;
    ctx->downcount -= 1;
    // 7F0A84D8: b       0x7F0A84E0
    {
            goto label_7F0A84E0;
    }

label_7F0A84DC:
    ctx->pc = 0x7F0A84DCu;
    ctx->downcount -= 1;
    // 7F0A84DC: bl      0x7F0A84F0
    {
            ctx->lr = 0x7F0A84E0u;
            goto label_7F0A84F0;
    }

label_7F0A84E0:
    ctx->pc = 0x7F0A84E0u;
    ctx->downcount -= 5;
    // 7F0A84E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A84E4:
    ctx->pc = 0x7F0A84E4u;
    // 7F0A84E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A84E8:
    ctx->pc = 0x7F0A84E8u;
    // 7F0A84E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A84EC:
    ctx->pc = 0x7F0A84ECu;
    // 7F0A84EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A84F0:
    ctx->pc = 0x7F0A84F0u;
    ctx->downcount -= 6;
    // 7F0A84F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A84F4:
    ctx->pc = 0x7F0A84F4u;
    // 7F0A84F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A84F8:
    ctx->pc = 0x7F0A84F8u;
    // 7F0A84F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A84FC:
    ctx->pc = 0x7F0A84FCu;
    // 7F0A84FC: lwz     r0, 3824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3824);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8500:
    ctx->pc = 0x7F0A8500u;
    // 7F0A8500: cmplwi  r0, 0x0007
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

label_7F0A8504:
    ctx->pc = 0x7F0A8504u;
    // 7F0A8504: bc    12, 1, 0x7F0A8554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8554;
        }
    }

label_7F0A8508:
    ctx->pc = 0x7F0A8508u;
    ctx->downcount -= 7;
    // 7F0A8508: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0A850C:
    ctx->pc = 0x7F0A850Cu;
    // 7F0A850C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F0A8510:
    ctx->pc = 0x7F0A8510u;
    // 7F0A8510: addi    r4, r4, 32624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32624);

label_7F0A8514:
    ctx->pc = 0x7F0A8514u;
    // 7F0A8514: lwzx    r0, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8518:
    ctx->pc = 0x7F0A8518u;
    // 7F0A8518: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0A851C:
    ctx->pc = 0x7F0A851Cu;
    // 7F0A851C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F0A8520:
    ctx->pc = 0x7F0A8520u;
    ctx->downcount -= 1;
    // 7F0A8520: bl      0x7F0A8564
    {
            ctx->lr = 0x7F0A8524u;
            goto label_7F0A8564;
    }

label_7F0A8524:
    ctx->pc = 0x7F0A8524u;
    ctx->downcount -= 1;
    // 7F0A8524: b       0x7F0A8554
    {
            goto label_7F0A8554;
    }

label_7F0A8528:
    ctx->pc = 0x7F0A8528u;
    ctx->downcount -= 1;
    // 7F0A8528: bl      0x7F0A85D8
    {
            ctx->lr = 0x7F0A852Cu;
            goto label_7F0A85D8;
    }

label_7F0A852C:
    ctx->pc = 0x7F0A852Cu;
    ctx->downcount -= 1;
    // 7F0A852C: b       0x7F0A8554
    {
            goto label_7F0A8554;
    }

label_7F0A8530:
    ctx->pc = 0x7F0A8530u;
    ctx->downcount -= 1;
    // 7F0A8530: bl      0x7F0A8690
    {
            ctx->lr = 0x7F0A8534u;
            goto label_7F0A8690;
    }

label_7F0A8534:
    ctx->pc = 0x7F0A8534u;
    ctx->downcount -= 1;
    // 7F0A8534: b       0x7F0A8554
    {
            goto label_7F0A8554;
    }

label_7F0A8538:
    ctx->pc = 0x7F0A8538u;
    ctx->downcount -= 1;
    // 7F0A8538: bl      0x7F0A874C
    {
            ctx->lr = 0x7F0A853Cu;
            goto label_7F0A874C;
    }

label_7F0A853C:
    ctx->pc = 0x7F0A853Cu;
    ctx->downcount -= 1;
    // 7F0A853C: b       0x7F0A8554
    {
            goto label_7F0A8554;
    }

label_7F0A8540:
    ctx->pc = 0x7F0A8540u;
    ctx->downcount -= 1;
    // 7F0A8540: bl      0x7F0A87B4
    {
            ctx->lr = 0x7F0A8544u;
            goto label_7F0A87B4;
    }

label_7F0A8544:
    ctx->pc = 0x7F0A8544u;
    ctx->downcount -= 1;
    // 7F0A8544: b       0x7F0A8554
    {
            goto label_7F0A8554;
    }

label_7F0A8548:
    ctx->pc = 0x7F0A8548u;
    ctx->downcount -= 1;
    // 7F0A8548: bl      0x7F0A8898
    {
            ctx->lr = 0x7F0A854Cu;
            goto label_7F0A8898;
    }

label_7F0A854C:
    ctx->pc = 0x7F0A854Cu;
    ctx->downcount -= 1;
    // 7F0A854C: b       0x7F0A8554
    {
            goto label_7F0A8554;
    }

label_7F0A8550:
    ctx->pc = 0x7F0A8550u;
    ctx->downcount -= 1;
    // 7F0A8550: bl      0x7F0A8908
    {
            ctx->lr = 0x7F0A8554u;
            goto label_7F0A8908;
    }

label_7F0A8554:
    ctx->pc = 0x7F0A8554u;
    ctx->downcount -= 5;
    // 7F0A8554: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8558:
    ctx->pc = 0x7F0A8558u;
    // 7F0A8558: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A855C:
    ctx->pc = 0x7F0A855Cu;
    // 7F0A855C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8560:
    ctx->pc = 0x7F0A8560u;
    // 7F0A8560: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8564:
    ctx->pc = 0x7F0A8564u;
    ctx->downcount -= 7;
    // 7F0A8564: lwz     r0, 3808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8568:
    ctx->pc = 0x7F0A8568u;
    // 7F0A8568: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0A856C:
    ctx->pc = 0x7F0A856Cu;
    // 7F0A856C: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F0A8570:
    ctx->pc = 0x7F0A8570u;
    // 7F0A8570: stw     r0, 3808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8574:
    ctx->pc = 0x7F0A8574u;
    // 7F0A8574: lwz     r0, 29504(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8578:
    ctx->pc = 0x7F0A8578u;
    // 7F0A8578: cmpwi   r0, 2
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

label_7F0A857C:
    ctx->pc = 0x7F0A857Cu;
    // 7F0A857C: bc    12, 2, 0x7F0A8588
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8588;
        }
    }

label_7F0A8580:
    ctx->pc = 0x7F0A8580u;
    ctx->downcount -= 2;
    // 7F0A8580: cmpwi   r0, 3
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

label_7F0A8584:
    ctx->pc = 0x7F0A8584u;
    // 7F0A8584: bc    4, 2, 0x7F0A8594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8594;
        }
    }

label_7F0A8588:
    ctx->pc = 0x7F0A8588u;
    ctx->downcount -= 3;
    // 7F0A8588: lwz     r0, 3732(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3732);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A858C:
    ctx->pc = 0x7F0A858Cu;
    // 7F0A858C: stw     r0, 3792(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3792);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8590:
    ctx->pc = 0x7F0A8590u;
    // 7F0A8590: b       0x7F0A859C
    {
            goto label_7F0A859C;
    }

label_7F0A8594:
    ctx->pc = 0x7F0A8594u;
    ctx->downcount -= 2;
    // 7F0A8594: lwz     r0, 3928(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3928);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8598:
    ctx->pc = 0x7F0A8598u;
    // 7F0A8598: stw     r0, 3792(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3792);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A859C:
    ctx->pc = 0x7F0A859Cu;
    ctx->downcount -= 4;
    // 7F0A859C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0A85A0:
    ctx->pc = 0x7F0A85A0u;
    // 7F0A85A0: lwz     r0, 29504(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A85A4:
    ctx->pc = 0x7F0A85A4u;
    // 7F0A85A4: cmpwi   r0, 0
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

label_7F0A85A8:
    ctx->pc = 0x7F0A85A8u;
    // 7F0A85A8: bc    12, 2, 0x7F0A85B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A85B4;
        }
    }

label_7F0A85AC:
    ctx->pc = 0x7F0A85ACu;
    ctx->downcount -= 2;
    // 7F0A85AC: cmpwi   r0, 4
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

label_7F0A85B0:
    ctx->pc = 0x7F0A85B0u;
    // 7F0A85B0: bc    4, 2, 0x7F0A85C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A85C8;
        }
    }

label_7F0A85B4:
    ctx->pc = 0x7F0A85B4u;
    ctx->downcount -= 5;
    // 7F0A85B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0A85B8:
    ctx->pc = 0x7F0A85B8u;
    // 7F0A85B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A85BC:
    ctx->pc = 0x7F0A85BCu;
    // 7F0A85BC: stw     r4, 3824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0A85C0:
    ctx->pc = 0x7F0A85C0u;
    // 7F0A85C0: stw     r0, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A85C4:
    ctx->pc = 0x7F0A85C4u;
    // 7F0A85C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A85C8:
    ctx->pc = 0x7F0A85C8u;
    ctx->downcount -= 4;
    // 7F0A85C8: lwz     r4, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A85CC:
    ctx->pc = 0x7F0A85CCu;
    // 7F0A85CC: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0A85D0:
    ctx->pc = 0x7F0A85D0u;
    // 7F0A85D0: stw     r0, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A85D4:
    ctx->pc = 0x7F0A85D4u;
    // 7F0A85D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A85D8:
    ctx->pc = 0x7F0A85D8u;
    ctx->downcount -= 9;
    // 7F0A85D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A85DC:
    ctx->pc = 0x7F0A85DCu;
    // 7F0A85DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A85E0:
    ctx->pc = 0x7F0A85E0u;
    // 7F0A85E0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0A85E4:
    ctx->pc = 0x7F0A85E4u;
    // 7F0A85E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A85E8:
    ctx->pc = 0x7F0A85E8u;
    // 7F0A85E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A85EC:
    ctx->pc = 0x7F0A85ECu;
    // 7F0A85EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A85F0:
    ctx->pc = 0x7F0A85F0u;
    // 7F0A85F0: lwz     r0, 29504(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A85F4:
    ctx->pc = 0x7F0A85F4u;
    // 7F0A85F4: cmpwi   r0, 2
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

label_7F0A85F8:
    ctx->pc = 0x7F0A85F8u;
    // 7F0A85F8: bc    4, 2, 0x7F0A860C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A860C;
        }
    }

label_7F0A85FC:
    ctx->pc = 0x7F0A85FCu;
    ctx->downcount -= 4;
    // 7F0A85FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A8600:
    ctx->pc = 0x7F0A8600u;
    // 7F0A8600: stw     r0, 3824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8604:
    ctx->pc = 0x7F0A8604u;
    // 7F0A8604: stw     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8608:
    ctx->pc = 0x7F0A8608u;
    // 7F0A8608: b       0x7F0A867C
    {
            goto label_7F0A867C;
    }

label_7F0A860C:
    ctx->pc = 0x7F0A860Cu;
    ctx->downcount -= 2;
    // 7F0A860C: cmpwi   r0, 6
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

label_7F0A8610:
    ctx->pc = 0x7F0A8610u;
    // 7F0A8610: bc    4, 2, 0x7F0A8638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8638;
        }
    }

label_7F0A8614:
    ctx->pc = 0x7F0A8614u;
    ctx->downcount -= 2;
    // 7F0A8614: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0A8618:
    ctx->pc = 0x7F0A8618u;
    // 7F0A8618: bl      0x7F0A8AEC
    {
            ctx->lr = 0x7F0A861Cu;
            goto label_7F0A8AEC;
    }

label_7F0A861C:
    ctx->pc = 0x7F0A861Cu;
    ctx->downcount -= 7;
    // 7F0A861C: li      r0, 250
    ctx->gpr[0] = (u32)(s32)(250);

label_7F0A8620:
    ctx->pc = 0x7F0A8620u;
    // 7F0A8620: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F0A8624:
    ctx->pc = 0x7F0A8624u;
    // 7F0A8624: sth     r0, 3804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3804);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A8628:
    ctx->pc = 0x7F0A8628u;
    // 7F0A8628: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A862C:
    ctx->pc = 0x7F0A862Cu;
    // 7F0A862C: stw     r3, 3824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8630:
    ctx->pc = 0x7F0A8630u;
    // 7F0A8630: stw     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8634:
    ctx->pc = 0x7F0A8634u;
    // 7F0A8634: b       0x7F0A867C
    {
            goto label_7F0A867C;
    }

label_7F0A8638:
    ctx->pc = 0x7F0A8638u;
    ctx->downcount -= 3;
    // 7F0A8638: lwz     r0, 3920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3920);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A863C:
    ctx->pc = 0x7F0A863Cu;
    // 7F0A863C: cmpwi   r0, 600
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

label_7F0A8640:
    ctx->pc = 0x7F0A8640u;
    // 7F0A8640: bc    4, 0, 0x7F0A8670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8670;
        }
    }

label_7F0A8644:
    ctx->pc = 0x7F0A8644u;
    ctx->downcount -= 2;
    // 7F0A8644: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0A8648:
    ctx->pc = 0x7F0A8648u;
    // 7F0A8648: bl      0x7F0A8AEC
    {
            ctx->lr = 0x7F0A864Cu;
            goto label_7F0A8AEC;
    }

label_7F0A864C:
    ctx->pc = 0x7F0A864Cu;
    ctx->downcount -= 2;
    // 7F0A864C: cmpwi   r3, 0
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

label_7F0A8650:
    ctx->pc = 0x7F0A8650u;
    // 7F0A8650: bc    12, 2, 0x7F0A8664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8664;
        }
    }

label_7F0A8654:
    ctx->pc = 0x7F0A8654u;
    ctx->downcount -= 4;
    // 7F0A8654: lwz     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8658:
    ctx->pc = 0x7F0A8658u;
    // 7F0A8658: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F0A865C:
    ctx->pc = 0x7F0A865Cu;
    // 7F0A865C: stw     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8660:
    ctx->pc = 0x7F0A8660u;
    // 7F0A8660: b       0x7F0A8670
    {
            goto label_7F0A8670;
    }

label_7F0A8664:
    ctx->pc = 0x7F0A8664u;
    ctx->downcount -= 3;
    // 7F0A8664: lwz     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8668:
    ctx->pc = 0x7F0A8668u;
    // 7F0A8668: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F0A866C:
    ctx->pc = 0x7F0A866Cu;
    // 7F0A866C: stw     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8670:
    ctx->pc = 0x7F0A8670u;
    ctx->downcount -= 3;
    // 7F0A8670: lwz     r3, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8674:
    ctx->pc = 0x7F0A8674u;
    // 7F0A8674: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0A8678:
    ctx->pc = 0x7F0A8678u;
    // 7F0A8678: stw     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A867C:
    ctx->pc = 0x7F0A867Cu;
    ctx->downcount -= 6;
    // 7F0A867C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8680:
    ctx->pc = 0x7F0A8680u;
    // 7F0A8680: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A8684:
    ctx->pc = 0x7F0A8684u;
    // 7F0A8684: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8688:
    ctx->pc = 0x7F0A8688u;
    // 7F0A8688: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A868C:
    ctx->pc = 0x7F0A868Cu;
    // 7F0A868C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8690:
    ctx->pc = 0x7F0A8690u;
    ctx->downcount -= 7;
    // 7F0A8690: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8694:
    ctx->pc = 0x7F0A8694u;
    // 7F0A8694: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8698:
    ctx->pc = 0x7F0A8698u;
    // 7F0A8698: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F0A869C:
    ctx->pc = 0x7F0A869Cu;
    // 7F0A869C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A86A0:
    ctx->pc = 0x7F0A86A0u;
    // 7F0A86A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A86A4:
    ctx->pc = 0x7F0A86A4u;
    // 7F0A86A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A86A8:
    ctx->pc = 0x7F0A86A8u;
    // 7F0A86A8: bl      0x7F0A8AEC
    {
            ctx->lr = 0x7F0A86ACu;
            goto label_7F0A8AEC;
    }

label_7F0A86AC:
    ctx->pc = 0x7F0A86ACu;
    ctx->downcount -= 2;
    // 7F0A86AC: cmpwi   r3, 0
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

label_7F0A86B0:
    ctx->pc = 0x7F0A86B0u;
    // 7F0A86B0: bc    12, 2, 0x7F0A8720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8720;
        }
    }

label_7F0A86B4:
    ctx->pc = 0x7F0A86B4u;
    ctx->downcount -= 7;
    // 7F0A86B4: lwz     r3, 3920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3920);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A86B8:
    ctx->pc = 0x7F0A86B8u;
    // 7F0A86B8: rlwinm r0, r3, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 25u) & 0xFE000000u;
    }

label_7F0A86BC:
    ctx->pc = 0x7F0A86BCu;
    // 7F0A86BC: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F0A86C0:
    ctx->pc = 0x7F0A86C0u;
    // 7F0A86C0: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0A86C4:
    ctx->pc = 0x7F0A86C4u;
    // 7F0A86C4: rlwinm r0, r0, 7, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 7u) & 0xFFFFFFFFu;
    }

label_7F0A86C8:
    ctx->pc = 0x7F0A86C8u;
    // 7F0A86C8: add.   r0, r0, r3
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

label_7F0A86CC:
    ctx->pc = 0x7F0A86CCu;
    // 7F0A86CC: bc    4, 2, 0x7F0A8720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8720;
        }
    }

label_7F0A86D0:
    ctx->pc = 0x7F0A86D0u;
    ctx->downcount -= 2;
    // 7F0A86D0: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F0A86D4:
    ctx->pc = 0x7F0A86D4u;
    // 7F0A86D4: bl      0x7F0A8BE8
    {
            ctx->lr = 0x7F0A86D8u;
            goto label_7F0A8BE8;
    }

label_7F0A86D8:
    ctx->pc = 0x7F0A86D8u;
    ctx->downcount -= 5;
    // 7F0A86D8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0A86DC:
    ctx->pc = 0x7F0A86DCu;
    // 7F0A86DC: addi    r5, r3, 28
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(28);

label_7F0A86E0:
    ctx->pc = 0x7F0A86E0u;
    // 7F0A86E0: lwz     r0, 29504(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A86E4:
    ctx->pc = 0x7F0A86E4u;
    // 7F0A86E4: cmpwi   r0, 8
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

label_7F0A86E8:
    ctx->pc = 0x7F0A86E8u;
    // 7F0A86E8: bc    4, 1, 0x7F0A8708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8708;
        }
    }

label_7F0A86EC:
    ctx->pc = 0x7F0A86ECu;
    ctx->downcount -= 2;
    // 7F0A86EC: cmpwi   r0, 10
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

label_7F0A86F0:
    ctx->pc = 0x7F0A86F0u;
    // 7F0A86F0: bc    12, 1, 0x7F0A86FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A86FC;
        }
    }

label_7F0A86F4:
    ctx->pc = 0x7F0A86F4u;
    ctx->downcount -= 2;
    // 7F0A86F4: addi    r5, r5, 6
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(6);

label_7F0A86F8:
    ctx->pc = 0x7F0A86F8u;
    // 7F0A86F8: b       0x7F0A8708
    {
            goto label_7F0A8708;
    }

label_7F0A86FC:
    ctx->pc = 0x7F0A86FCu;
    ctx->downcount -= 2;
    // 7F0A86FC: cmpwi   r0, 12
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

label_7F0A8700:
    ctx->pc = 0x7F0A8700u;
    // 7F0A8700: bc    12, 1, 0x7F0A8708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8708;
        }
    }

label_7F0A8704:
    ctx->pc = 0x7F0A8704u;
    ctx->downcount -= 1;
    // 7F0A8704: addi    r5, r5, 12
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12);

label_7F0A8708:
    ctx->pc = 0x7F0A8708u;
    ctx->downcount -= 6;
    // 7F0A8708: sth     r5, 3804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3804);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0A870C:
    ctx->pc = 0x7F0A870Cu;
    // 7F0A870C: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_7F0A8710:
    ctx->pc = 0x7F0A8710u;
    // 7F0A8710: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A8714:
    ctx->pc = 0x7F0A8714u;
    // 7F0A8714: stw     r3, 3824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8718:
    ctx->pc = 0x7F0A8718u;
    // 7F0A8718: stw     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A871C:
    ctx->pc = 0x7F0A871Cu;
    // 7F0A871C: b       0x7F0A8738
    {
            goto label_7F0A8738;
    }

label_7F0A8720:
    ctx->pc = 0x7F0A8720u;
    ctx->downcount -= 6;
    // 7F0A8720: lwz     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8724:
    ctx->pc = 0x7F0A8724u;
    // 7F0A8724: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F0A8728:
    ctx->pc = 0x7F0A8728u;
    // 7F0A8728: stw     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A872C:
    ctx->pc = 0x7F0A872Cu;
    // 7F0A872C: lwz     r3, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8730:
    ctx->pc = 0x7F0A8730u;
    // 7F0A8730: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0A8734:
    ctx->pc = 0x7F0A8734u;
    // 7F0A8734: stw     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8738:
    ctx->pc = 0x7F0A8738u;
    ctx->downcount -= 6;
    // 7F0A8738: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A873C:
    ctx->pc = 0x7F0A873Cu;
    // 7F0A873C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A8740:
    ctx->pc = 0x7F0A8740u;
    // 7F0A8740: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8744:
    ctx->pc = 0x7F0A8744u;
    // 7F0A8744: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8748:
    ctx->pc = 0x7F0A8748u;
    // 7F0A8748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A874C:
    ctx->pc = 0x7F0A874Cu;
    ctx->downcount -= 7;
    // 7F0A874C: lwz     r0, 3808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8750:
    ctx->pc = 0x7F0A8750u;
    // 7F0A8750: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F0A8754:
    ctx->pc = 0x7F0A8754u;
    // 7F0A8754: stw     r0, 3808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8758:
    ctx->pc = 0x7F0A8758u;
    // 7F0A8758: lwz     r5, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A875C:
    ctx->pc = 0x7F0A875Cu;
    // 7F0A875C: lha     r0, 3804(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3804);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A8760:
    ctx->pc = 0x7F0A8760u;
    // 7F0A8760: cmpw    r5, r0
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

label_7F0A8764:
    ctx->pc = 0x7F0A8764u;
    // 7F0A8764: bc    4, 1, 0x7F0A877C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A877C;
        }
    }

label_7F0A8768:
    ctx->pc = 0x7F0A8768u;
    ctx->downcount -= 5;
    // 7F0A8768: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0A876C:
    ctx->pc = 0x7F0A876Cu;
    // 7F0A876C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A8770:
    ctx->pc = 0x7F0A8770u;
    // 7F0A8770: stw     r4, 3824(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0A8774:
    ctx->pc = 0x7F0A8774u;
    // 7F0A8774: stw     r0, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8778:
    ctx->pc = 0x7F0A8778u;
    // 7F0A8778: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A877C:
    ctx->pc = 0x7F0A877Cu;
    ctx->downcount -= 48;
    // 7F0A877C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F0A8780:
    ctx->pc = 0x7F0A8780u;
    // 7F0A8780: divw   r0, r5, r4
    {
        s32 dividend = (s32)ctx->gpr[5];
        s32 divisor = (s32)ctx->gpr[4];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0A8784:
    ctx->pc = 0x7F0A8784u;
    // 7F0A8784: mullw   r0, r0, r4
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[4];
        ctx->gpr[0] = (u32)product;
    }

label_7F0A8788:
    ctx->pc = 0x7F0A8788u;
    // 7F0A8788: subf.   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
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

label_7F0A878C:
    ctx->pc = 0x7F0A878Cu;
    // 7F0A878C: bc    4, 2, 0x7F0A87A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A87A4;
        }
    }

label_7F0A8790:
    ctx->pc = 0x7F0A8790u;
    ctx->downcount -= 5;
    // 7F0A8790: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_7F0A8794:
    ctx->pc = 0x7F0A8794u;
    // 7F0A8794: stw     r0, 3832(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8798:
    ctx->pc = 0x7F0A8798u;
    // 7F0A8798: lwz     r0, 3808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A879C:
    ctx->pc = 0x7F0A879Cu;
    // 7F0A879C: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F0A87A0:
    ctx->pc = 0x7F0A87A0u;
    // 7F0A87A0: stw     r0, 3808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A87A4:
    ctx->pc = 0x7F0A87A4u;
    ctx->downcount -= 4;
    // 7F0A87A4: lwz     r4, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A87A8:
    ctx->pc = 0x7F0A87A8u;
    // 7F0A87A8: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0A87AC:
    ctx->pc = 0x7F0A87ACu;
    // 7F0A87AC: stw     r0, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A87B0:
    ctx->pc = 0x7F0A87B0u;
    // 7F0A87B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A87B4:
    ctx->pc = 0x7F0A87B4u;
    ctx->downcount -= 11;
    // 7F0A87B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A87B8:
    ctx->pc = 0x7F0A87B8u;
    // 7F0A87B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A87BC:
    ctx->pc = 0x7F0A87BCu;
    // 7F0A87BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0A87C0:
    ctx->pc = 0x7F0A87C0u;
    // 7F0A87C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A87C4:
    ctx->pc = 0x7F0A87C4u;
    // 7F0A87C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A87C8:
    ctx->pc = 0x7F0A87C8u;
    // 7F0A87C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A87CC:
    ctx->pc = 0x7F0A87CCu;
    // 7F0A87CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A87D0:
    ctx->pc = 0x7F0A87D0u;
    // 7F0A87D0: lwz     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A87D4:
    ctx->pc = 0x7F0A87D4u;
    // 7F0A87D4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F0A87D8:
    ctx->pc = 0x7F0A87D8u;
    // 7F0A87D8: stw     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A87DC:
    ctx->pc = 0x7F0A87DCu;
    // 7F0A87DC: bl      0x7F16F8E0
    {
            ctx->lr = 0x7F0A87E0u;
            ctx->pc = 0x7F16F8E0u;
            return;
    }

label_7F0A87E0:
    ctx->pc = 0x7F0A87E0u;
    ctx->downcount -= 2;
    // 7F0A87E0: cmpwi   r3, 5
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

label_7F0A87E4:
    ctx->pc = 0x7F0A87E4u;
    // 7F0A87E4: bc    4, 1, 0x7F0A87F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A87F8;
        }
    }

label_7F0A87E8:
    ctx->pc = 0x7F0A87E8u;
    ctx->downcount -= 4;
    // 7F0A87E8: lwz     r3, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A87EC:
    ctx->pc = 0x7F0A87ECu;
    // 7F0A87EC: lha     r0, 3804(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3804);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A87F0:
    ctx->pc = 0x7F0A87F0u;
    // 7F0A87F0: cmpw    r3, r0
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

label_7F0A87F4:
    ctx->pc = 0x7F0A87F4u;
    // 7F0A87F4: bc    12, 1, 0x7F0A8804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8804;
        }
    }

label_7F0A87F8:
    ctx->pc = 0x7F0A87F8u;
    ctx->downcount -= 3;
    // 7F0A87F8: lwz     r4, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A87FC:
    ctx->pc = 0x7F0A87FCu;
    // 7F0A87FC: cmpwi   r4, 600
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(600);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A8800:
    ctx->pc = 0x7F0A8800u;
    // 7F0A8800: bc    4, 1, 0x7F0A8818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8818;
        }
    }

label_7F0A8804:
    ctx->pc = 0x7F0A8804u;
    ctx->downcount -= 5;
    // 7F0A8804: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F0A8808:
    ctx->pc = 0x7F0A8808u;
    // 7F0A8808: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A880C:
    ctx->pc = 0x7F0A880Cu;
    // 7F0A880C: stw     r3, 3824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8810:
    ctx->pc = 0x7F0A8810u;
    // 7F0A8810: stw     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8814:
    ctx->pc = 0x7F0A8814u;
    // 7F0A8814: b       0x7F0A8884
    {
            goto label_7F0A8884;
    }

label_7F0A8818:
    ctx->pc = 0x7F0A8818u;
    ctx->downcount -= 48;
    // 7F0A8818: li      r3, 20
    ctx->gpr[3] = (u32)(s32)(20);

label_7F0A881C:
    ctx->pc = 0x7F0A881Cu;
    // 7F0A881C: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0A8820:
    ctx->pc = 0x7F0A8820u;
    // 7F0A8820: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F0A8824:
    ctx->pc = 0x7F0A8824u;
    // 7F0A8824: subf.   r0, r0, r4
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

label_7F0A8828:
    ctx->pc = 0x7F0A8828u;
    // 7F0A8828: bc    4, 2, 0x7F0A884C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A884C;
        }
    }

label_7F0A882C:
    ctx->pc = 0x7F0A882Cu;
    ctx->downcount -= 3;
    // 7F0A882C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8830:
    ctx->pc = 0x7F0A8830u;
    // 7F0A8830: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F0A8834:
    ctx->pc = 0x7F0A8834u;
    // 7F0A8834: bl      0x7F0A8AEC
    {
            ctx->lr = 0x7F0A8838u;
            goto label_7F0A8AEC;
    }

label_7F0A8838:
    ctx->pc = 0x7F0A8838u;
    ctx->downcount -= 2;
    // 7F0A8838: cmpwi   r3, 0
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

label_7F0A883C:
    ctx->pc = 0x7F0A883Cu;
    // 7F0A883C: bc    12, 2, 0x7F0A884C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A884C;
        }
    }

label_7F0A8840:
    ctx->pc = 0x7F0A8840u;
    ctx->downcount -= 3;
    // 7F0A8840: lwz     r3, 3792(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3792);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8844:
    ctx->pc = 0x7F0A8844u;
    // 7F0A8844: lwz     r4, 3928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3928);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A8848:
    ctx->pc = 0x7F0A8848u;
    // 7F0A8848: bl      0x7F3CC924
    {
            ctx->lr = 0x7F0A884Cu;
            ctx->pc = 0x7F3CC924u;
            return;
    }

label_7F0A884C:
    ctx->pc = 0x7F0A884Cu;
    ctx->downcount -= 49;
    // 7F0A884C: lwz     r4, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A8850:
    ctx->pc = 0x7F0A8850u;
    // 7F0A8850: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F0A8854:
    ctx->pc = 0x7F0A8854u;
    // 7F0A8854: divw   r0, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F0A8858:
    ctx->pc = 0x7F0A8858u;
    // 7F0A8858: mullw   r0, r0, r3
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[3];
        ctx->gpr[0] = (u32)product;
    }

label_7F0A885C:
    ctx->pc = 0x7F0A885Cu;
    // 7F0A885C: subf.   r0, r0, r4
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

label_7F0A8860:
    ctx->pc = 0x7F0A8860u;
    // 7F0A8860: bc    4, 2, 0x7F0A8878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8878;
        }
    }

label_7F0A8864:
    ctx->pc = 0x7F0A8864u;
    ctx->downcount -= 5;
    // 7F0A8864: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F0A8868:
    ctx->pc = 0x7F0A8868u;
    // 7F0A8868: stw     r0, 3832(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3832);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A886C:
    ctx->pc = 0x7F0A886Cu;
    // 7F0A886C: lwz     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8870:
    ctx->pc = 0x7F0A8870u;
    // 7F0A8870: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_7F0A8874:
    ctx->pc = 0x7F0A8874u;
    // 7F0A8874: stw     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8878:
    ctx->pc = 0x7F0A8878u;
    ctx->downcount -= 3;
    // 7F0A8878: lwz     r3, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A887C:
    ctx->pc = 0x7F0A887Cu;
    // 7F0A887C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0A8880:
    ctx->pc = 0x7F0A8880u;
    // 7F0A8880: stw     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8884:
    ctx->pc = 0x7F0A8884u;
    ctx->downcount -= 6;
    // 7F0A8884: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8888:
    ctx->pc = 0x7F0A8888u;
    // 7F0A8888: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A888C:
    ctx->pc = 0x7F0A888Cu;
    // 7F0A888C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8890:
    ctx->pc = 0x7F0A8890u;
    // 7F0A8890: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8894:
    ctx->pc = 0x7F0A8894u;
    // 7F0A8894: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8898:
    ctx->pc = 0x7F0A8898u;
    ctx->downcount -= 8;
    // 7F0A8898: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A889C:
    ctx->pc = 0x7F0A889Cu;
    // 7F0A889C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A88A0:
    ctx->pc = 0x7F0A88A0u;
    // 7F0A88A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A88A4:
    ctx->pc = 0x7F0A88A4u;
    // 7F0A88A4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A88A8:
    ctx->pc = 0x7F0A88A8u;
    // 7F0A88A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A88AC:
    ctx->pc = 0x7F0A88ACu;
    // 7F0A88AC: lwz     r0, 3828(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3828);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A88B0:
    ctx->pc = 0x7F0A88B0u;
    // 7F0A88B0: cmpwi   r0, 8
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

label_7F0A88B4:
    ctx->pc = 0x7F0A88B4u;
    // 7F0A88B4: bc    4, 0, 0x7F0A88C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A88C4;
        }
    }

label_7F0A88B8:
    ctx->pc = 0x7F0A88B8u;
    ctx->downcount -= 3;
    // 7F0A88B8: lwz     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A88BC:
    ctx->pc = 0x7F0A88BCu;
    // 7F0A88BC: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F0A88C0:
    ctx->pc = 0x7F0A88C0u;
    // 7F0A88C0: stw     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A88C4:
    ctx->pc = 0x7F0A88C4u;
    ctx->downcount -= 4;
    // 7F0A88C4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A88C8:
    ctx->pc = 0x7F0A88C8u;
    // 7F0A88C8: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A88CC:
    ctx->pc = 0x7F0A88CCu;
    // 7F0A88CC: cmpwi   r0, 8
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

label_7F0A88D0:
    ctx->pc = 0x7F0A88D0u;
    // 7F0A88D0: bc    4, 2, 0x7F0A88DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A88DC;
        }
    }

label_7F0A88D4:
    ctx->pc = 0x7F0A88D4u;
    ctx->downcount -= 2;
    // 7F0A88D4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F0A88D8:
    ctx->pc = 0x7F0A88D8u;
    // 7F0A88D8: stw     r0, 3824(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A88DC:
    ctx->pc = 0x7F0A88DCu;
    ctx->downcount -= 3;
    // 7F0A88DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A88E0:
    ctx->pc = 0x7F0A88E0u;
    // 7F0A88E0: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F0A88E4:
    ctx->pc = 0x7F0A88E4u;
    // 7F0A88E4: bl      0x7F0A8AEC
    {
            ctx->lr = 0x7F0A88E8u;
            goto label_7F0A8AEC;
    }

label_7F0A88E8:
    ctx->pc = 0x7F0A88E8u;
    ctx->downcount -= 9;
    // 7F0A88E8: lwz     r3, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A88EC:
    ctx->pc = 0x7F0A88ECu;
    // 7F0A88EC: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0A88F0:
    ctx->pc = 0x7F0A88F0u;
    // 7F0A88F0: stw     r0, 3828(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A88F4:
    ctx->pc = 0x7F0A88F4u;
    // 7F0A88F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A88F8:
    ctx->pc = 0x7F0A88F8u;
    // 7F0A88F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A88FC:
    ctx->pc = 0x7F0A88FCu;
    // 7F0A88FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8900:
    ctx->pc = 0x7F0A8900u;
    // 7F0A8900: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8904:
    ctx->pc = 0x7F0A8904u;
    // 7F0A8904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8908:
    ctx->pc = 0x7F0A8908u;
    ctx->downcount -= 18;
    // 7F0A8908: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A890C:
    ctx->pc = 0x7F0A890Cu;
    // 7F0A890C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8910:
    ctx->pc = 0x7F0A8910u;
    // 7F0A8910: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8914:
    ctx->pc = 0x7F0A8914u;
    // 7F0A8914: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A8918:
    ctx->pc = 0x7F0A8918u;
    // 7F0A8918: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A891C:
    ctx->pc = 0x7F0A891Cu;
    // 7F0A891C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8920:
    ctx->pc = 0x7F0A8920u;
    // 7F0A8920: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0A8924:
    ctx->pc = 0x7F0A8924u;
    // 7F0A8924: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0A8928u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0A8928:
    ctx->pc = 0x7F0A8928u;
    ctx->downcount -= 4;
    // 7F0A8928: addi    r3, r30, 3764
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(3764);

label_7F0A892C:
    ctx->pc = 0x7F0A892Cu;
    // 7F0A892C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A8930:
    ctx->pc = 0x7F0A8930u;
    // 7F0A8930: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8934:
    ctx->pc = 0x7F0A8934u;
    // 7F0A8934: bl      0x7F3CC634
    {
            ctx->lr = 0x7F0A8938u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F0A8938:
    ctx->pc = 0x7F0A8938u;
    ctx->downcount -= 4;
    // 7F0A8938: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A893C:
    ctx->pc = 0x7F0A893Cu;
    // 7F0A893C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8940:
    ctx->pc = 0x7F0A8940u;
    // 7F0A8940: sth     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A8944:
    ctx->pc = 0x7F0A8944u;
    // 7F0A8944: bl      0x7F3CC44C
    {
            ctx->lr = 0x7F0A8948u;
            ctx->pc = 0x7F3CC44Cu;
            return;
    }

label_7F0A8948:
    ctx->pc = 0x7F0A8948u;
    ctx->downcount -= 4;
    // 7F0A8948: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A894C:
    ctx->pc = 0x7F0A894Cu;
    // 7F0A894C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8950:
    ctx->pc = 0x7F0A8950u;
    // 7F0A8950: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0A8954:
    ctx->pc = 0x7F0A8954u;
    // 7F0A8954: bl      0x7F3CC990
    {
            ctx->lr = 0x7F0A8958u;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F0A8958:
    ctx->pc = 0x7F0A8958u;
    ctx->downcount -= 2;
    // 7F0A8958: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0A895C:
    ctx->pc = 0x7F0A895Cu;
    // 7F0A895C: bl      0x7F3CC708
    {
            ctx->lr = 0x7F0A8960u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F0A8960:
    ctx->pc = 0x7F0A8960u;
    ctx->downcount -= 4;
    // 7F0A8960: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0A8964:
    ctx->pc = 0x7F0A8964u;
    // 7F0A8964: cmpwi   r31, 500
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(500);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A8968:
    ctx->pc = 0x7F0A8968u;
    // 7F0A8968: stw     r0, 3812(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3812);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A896C:
    ctx->pc = 0x7F0A896Cu;
    // 7F0A896C: bc    4, 0, 0x7F0A8984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8984;
        }
    }

label_7F0A8970:
    ctx->pc = 0x7F0A8970u;
    ctx->downcount -= 5;
    // 7F0A8970: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F0A8974:
    ctx->pc = 0x7F0A8974u;
    // 7F0A8974: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A8978:
    ctx->pc = 0x7F0A8978u;
    // 7F0A8978: stw     r3, 3824(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3824);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A897C:
    ctx->pc = 0x7F0A897Cu;
    // 7F0A897C: stw     r0, 3828(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8980:
    ctx->pc = 0x7F0A8980u;
    // 7F0A8980: b       0x7F0A8990
    {
            goto label_7F0A8990;
    }

label_7F0A8984:
    ctx->pc = 0x7F0A8984u;
    ctx->downcount -= 3;
    // 7F0A8984: lwz     r3, 3828(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3828);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8988:
    ctx->pc = 0x7F0A8988u;
    // 7F0A8988: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0A898C:
    ctx->pc = 0x7F0A898Cu;
    // 7F0A898C: stw     r0, 3828(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3828);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8990:
    ctx->pc = 0x7F0A8990u;
    ctx->downcount -= 16;
    // 7F0A8990: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A8994:
    ctx->pc = 0x7F0A8994u;
    // 7F0A8994: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8998:
    ctx->pc = 0x7F0A8998u;
    // 7F0A8998: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A899C:
    ctx->pc = 0x7F0A899Cu;
    // 7F0A899C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0A89A0:
    ctx->pc = 0x7F0A89A0u;
    // 7F0A89A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A89A4:
    ctx->pc = 0x7F0A89A4u;
    ctx->downcount -= 28;
    // 7F0A89A4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A89A8:
    ctx->pc = 0x7F0A89A8u;
    // 7F0A89A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A89AC:
    ctx->pc = 0x7F0A89ACu;
    // 7F0A89AC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A89B0:
    ctx->pc = 0x7F0A89B0u;
    // 7F0A89B0: stmw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A89B4:
    ctx->pc = 0x7F0A89B4u;
    // 7F0A89B4: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A89B8:
    ctx->pc = 0x7F0A89B8u;
    // 7F0A89B8: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0A89BC:
    ctx->pc = 0x7F0A89BCu;
    // 7F0A89BC: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F0A89C0:
    ctx->pc = 0x7F0A89C0u;
    // 7F0A89C0: or   r24, r8, r8
    {
        ctx->gpr[24] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F0A89C4:
    ctx->pc = 0x7F0A89C4u;
    // 7F0A89C4: or   r29, r9, r9
    {
        ctx->gpr[29] = ctx->gpr[9] | ctx->gpr[9];
    }

label_7F0A89C8:
    ctx->pc = 0x7F0A89C8u;
    // 7F0A89C8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0A89CC:
    ctx->pc = 0x7F0A89CCu;
    // 7F0A89CC: lfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A89CCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A89D0:
    ctx->pc = 0x7F0A89D0u;
    // 7F0A89D0: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A89D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A89D4:
    ctx->pc = 0x7F0A89D4u;
    // 7F0A89D4: lfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A89D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A89D8:
    ctx->pc = 0x7F0A89D8u;
    // 7F0A89D8: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A89D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A89DC:
    ctx->pc = 0x7F0A89DCu;
    // 7F0A89DC: lfs     f0, 56(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A89DCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A89E0:
    ctx->pc = 0x7F0A89E0u;
    // 7F0A89E0: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A89E4:
    ctx->pc = 0x7F0A89E4u;
    // 7F0A89E4: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A89E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A89E8:
    ctx->pc = 0x7F0A89E8u;
    // 7F0A89E8: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0A89ECu;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0A89EC:
    ctx->pc = 0x7F0A89ECu;
    ctx->downcount -= 6;
    // 7F0A89EC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0A89F0:
    ctx->pc = 0x7F0A89F0u;
    // 7F0A89F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A89F4:
    ctx->pc = 0x7F0A89F4u;
    // 7F0A89F4: stw     r3, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A89F8:
    ctx->pc = 0x7F0A89F8u;
    // 7F0A89F8: addi    r31, r24, 100
    ctx->gpr[31] = ctx->gpr[24] + (u32)(s32)(100);

label_7F0A89FC:
    ctx->pc = 0x7F0A89FCu;
    // 7F0A89FC: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8A00:
    ctx->pc = 0x7F0A8A00u;
    // 7F0A8A00: bl      0x7F01D4CC
    {
            ctx->lr = 0x7F0A8A04u;
            ctx->pc = 0x7F01D4CCu;
            return;
    }

label_7F0A8A04:
    ctx->pc = 0x7F0A8A04u;
    ctx->downcount -= 2;
    // 7F0A8A04: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8A08:
    ctx->pc = 0x7F0A8A08u;
    // 7F0A8A08: b       0x7F0A8ACC
    {
            goto label_7F0A8ACC;
    }

label_7F0A8A0C:
    ctx->pc = 0x7F0A8A0Cu;
    ctx->downcount -= 3;
    // 7F0A8A0C: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8A10:
    // 7F0A8A10: rlwinm. r0, r3, 0, 30, 30
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

label_7F0A8A14:
    // 7F0A8A14: bc    12, 2, 0x7F0A8AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8AC8;
        }
    }

label_7F0A8A18:
    ctx->downcount -= 2;
    // 7F0A8A18: rlwinm. r0, r3, 0, 27, 27
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

label_7F0A8A1C:
    // 7F0A8A1C: bc    4, 2, 0x7F0A8AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8AC8;
        }
    }

label_7F0A8A20:
    ctx->downcount -= 2;
    // 7F0A8A20: rlwinm. r0, r3, 0, 31, 31
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

label_7F0A8A24:
    // 7F0A8A24: bc    4, 2, 0x7F0A8AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8AC8;
        }
    }

label_7F0A8A28:
    ctx->pc = 0x7F0A8A28u;
    ctx->downcount -= 10;
    // 7F0A8A28: lwz     r5, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A8A2C:
    // 7F0A8A2C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8A30:
    // 7F0A8A30: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8A34:
    ctx->pc = 0x7F0A8A34u;
    // 7F0A8A34: lfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8A34u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A8A38:
    ctx->pc = 0x7F0A8A38u;
    // 7F0A8A38: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8A38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A8A3C:
    ctx->pc = 0x7F0A8A3Cu;
    // 7F0A8A3C: lfs     f0, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8A3Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A8A40:
    ctx->pc = 0x7F0A8A40u;
    // 7F0A8A40: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8A40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A8A44:
    ctx->pc = 0x7F0A8A44u;
    // 7F0A8A44: lfs     f0, 56(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8A44u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A8A48:
    ctx->pc = 0x7F0A8A48u;
    // 7F0A8A48: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8A48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A8A4C:
    // 7F0A8A4C: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0A8A50u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0A8A50:
    ctx->downcount -= 4;
    // 7F0A8A50: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8A54:
    // 7F0A8A54: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0A8A58:
    // 7F0A8A58: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A8A5C:
    // 7F0A8A5C: bl      0x7F3CC634
    {
            ctx->lr = 0x7F0A8A60u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F0A8A60:
    ctx->downcount -= 2;
    // 7F0A8A60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A8A64:
    // 7F0A8A64: bl      0x7F3CC44C
    {
            ctx->lr = 0x7F0A8A68u;
            ctx->pc = 0x7F3CC44Cu;
            return;
    }

label_7F0A8A68:
    ctx->downcount -= 3;
    // 7F0A8A68: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8A6C:
    // 7F0A8A6C: cmpw    r25, r31
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A8A70:
    // 7F0A8A70: bc    4, 0, 0x7F0A8AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8AC8;
        }
    }

label_7F0A8A74:
    ctx->downcount -= 3;
    // 7F0A8A74: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A8A78:
    // 7F0A8A78: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8A7C:
    // 7F0A8A7C: bl      0x7F3CC990
    {
            ctx->lr = 0x7F0A8A80u;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F0A8A80:
    ctx->downcount -= 2;
    // 7F0A8A80: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8A84:
    // 7F0A8A84: bl      0x7F3CC708
    {
            ctx->lr = 0x7F0A8A88u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F0A8A88:
    ctx->downcount -= 4;
    // 7F0A8A88: extsh r24, r3
    {
        ctx->gpr[24] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0A8A8C:
    // 7F0A8A8C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F0A8A90:
    // 7F0A8A90: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_7F0A8A94:
    // 7F0A8A94: bl      0x7F3CC924
    {
            ctx->lr = 0x7F0A8A98u;
            ctx->pc = 0x7F3CC924u;
            return;
    }

label_7F0A8A98:
    ctx->downcount -= 2;
    // 7F0A8A98: cmpw    r3, r29
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A8A9C:
    // 7F0A8A9C: bc    4, 0, 0x7F0A8AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8AC8;
        }
    }

label_7F0A8AA0:
    ctx->pc = 0x7F0A8AA0u;
    ctx->downcount -= 7;
    // 7F0A8AA0: stw     r24, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F0A8AA4:
    // 7F0A8AA4: or   r31, r25, r25
    {
        ctx->gpr[31] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F0A8AA8:
    // 7F0A8AA8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F0A8AAC:
    ctx->pc = 0x7F0A8AACu;
    // 7F0A8AAC: lha     r4, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A8AB0:
    ctx->pc = 0x7F0A8AB0u;
    // 7F0A8AB0: lha     r0, 18(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A8AB4:
    // 7F0A8AB4: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_7F0A8AB8:
    // 7F0A8AB8: bl      0x7F02A6B0
    {
            ctx->lr = 0x7F0A8ABCu;
            ctx->pc = 0x7F02A6B0u;
            return;
    }

label_7F0A8ABC:
    ctx->downcount -= 3;
    // 7F0A8ABC: rlwinm r3, r3, 0, 20, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000FFFu;
    }

label_7F0A8AC0:
    // 7F0A8AC0: addi    r0, r3, -1024
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1024);

label_7F0A8AC4:
    ctx->pc = 0x7F0A8AC4u;
    // 7F0A8AC4: stw     r0, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8AC8:
    ctx->pc = 0x7F0A8AC8u;
    ctx->downcount -= 1;
    // 7F0A8AC8: lwz     r30, 28(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F0A8ACC:
    ctx->downcount -= 2;
    // 7F0A8ACC: cmplwi  r30, 0x0000
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

label_7F0A8AD0:
    // 7F0A8AD0: bc    4, 2, 0x7F0A8A0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8A0Cu;
                return;
            }
            goto label_7F0A8A0C;
        }
    }

label_7F0A8AD4:
    ctx->pc = 0x7F0A8AD4u;
    ctx->downcount -= 17;
    // 7F0A8AD4: lmw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A8AD8:
    ctx->pc = 0x7F0A8AD8u;
    // 7F0A8AD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A8ADC:
    ctx->pc = 0x7F0A8ADCu;
    // 7F0A8ADC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8AE0:
    ctx->pc = 0x7F0A8AE0u;
    // 7F0A8AE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8AE4:
    ctx->pc = 0x7F0A8AE4u;
    // 7F0A8AE4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0A8AE8:
    ctx->pc = 0x7F0A8AE8u;
    // 7F0A8AE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8AEC:
    ctx->pc = 0x7F0A8AECu;
    ctx->downcount -= 26;
    // 7F0A8AEC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8AF0:
    ctx->pc = 0x7F0A8AF0u;
    // 7F0A8AF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8AF4:
    ctx->pc = 0x7F0A8AF4u;
    // 7F0A8AF4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0A8AF8:
    ctx->pc = 0x7F0A8AF8u;
    // 7F0A8AF8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8AFC:
    ctx->pc = 0x7F0A8AFCu;
    // 7F0A8AFC: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A8B00:
    ctx->pc = 0x7F0A8B00u;
    // 7F0A8B00: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8B04:
    ctx->pc = 0x7F0A8B04u;
    // 7F0A8B04: addi    r3, r5, -5384
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-5384);

label_7F0A8B08:
    ctx->pc = 0x7F0A8B08u;
    // 7F0A8B08: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A8B0C:
    ctx->pc = 0x7F0A8B0Cu;
    // 7F0A8B0C: addi    r30, r28, 48
    ctx->gpr[30] = ctx->gpr[28] + (u32)(s32)(48);

label_7F0A8B10:
    ctx->pc = 0x7F0A8B10u;
    // 7F0A8B10: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A8B14:
    ctx->pc = 0x7F0A8B14u;
    // 7F0A8B14: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8B18:
    ctx->pc = 0x7F0A8B18u;
    // 7F0A8B18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A8B1C:
    ctx->pc = 0x7F0A8B1Cu;
    // 7F0A8B1C: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0A8B20:
    ctx->pc = 0x7F0A8B20u;
    // 7F0A8B20: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8B24:
    ctx->pc = 0x7F0A8B24u;
    // 7F0A8B24: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8B28:
    ctx->pc = 0x7F0A8B28u;
    // 7F0A8B28: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0A8B2Cu;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0A8B2C:
    ctx->pc = 0x7F0A8B2Cu;
    ctx->downcount -= 3;
    // 7F0A8B2C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8B30:
    ctx->pc = 0x7F0A8B30u;
    // 7F0A8B30: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A8B34:
    ctx->pc = 0x7F0A8B34u;
    // 7F0A8B34: bl      0x7F0A94E8
    {
            ctx->lr = 0x7F0A8B38u;
            goto label_7F0A94E8;
    }

label_7F0A8B38:
    ctx->pc = 0x7F0A8B38u;
    ctx->downcount -= 10;
    // 7F0A8B38: lwz     r5, 448(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A8B3C:
    ctx->pc = 0x7F0A8B3Cu;
    // 7F0A8B3C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8B40:
    ctx->pc = 0x7F0A8B40u;
    // 7F0A8B40: lwz     r7, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0A8B44:
    ctx->pc = 0x7F0A8B44u;
    // 7F0A8B44: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8B48:
    ctx->pc = 0x7F0A8B48u;
    // 7F0A8B48: addi    r3, r5, 4332
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(4332);

label_7F0A8B4C:
    ctx->pc = 0x7F0A8B4Cu;
    // 7F0A8B4C: addi    r5, r28, 3796
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(3796);

label_7F0A8B50:
    ctx->pc = 0x7F0A8B50u;
    // 7F0A8B50: addi    r6, r28, 3800
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(3800);

label_7F0A8B54:
    ctx->pc = 0x7F0A8B54u;
    // 7F0A8B54: li      r8, 6000
    ctx->gpr[8] = (u32)(s32)(6000);

label_7F0A8B58:
    ctx->pc = 0x7F0A8B58u;
    // 7F0A8B58: li      r9, 768
    ctx->gpr[9] = (u32)(s32)(768);

label_7F0A8B5C:
    ctx->pc = 0x7F0A8B5Cu;
    // 7F0A8B5C: bl      0x7F0A89A4
    {
            ctx->lr = 0x7F0A8B60u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A89A4u;
                return;
            }
            goto label_7F0A89A4;
    }

label_7F0A8B60:
    ctx->pc = 0x7F0A8B60u;
    ctx->downcount -= 4;
    // 7F0A8B60: stw     r31, 3732(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3732);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A8B64:
    ctx->pc = 0x7F0A8B64u;
    // 7F0A8B64: lwz     r0, 3796(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3796);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8B68:
    ctx->pc = 0x7F0A8B68u;
    // 7F0A8B68: cmpwi   r0, 0
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

label_7F0A8B6C:
    ctx->pc = 0x7F0A8B6Cu;
    // 7F0A8B6C: bc    4, 0, 0x7F0A8B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8B88;
        }
    }

label_7F0A8B70:
    ctx->pc = 0x7F0A8B70u;
    ctx->downcount -= 2;
    // 7F0A8B70: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A8B74:
    ctx->pc = 0x7F0A8B74u;
    // 7F0A8B74: bl      0x7F0A8BB4
    {
            ctx->lr = 0x7F0A8B78u;
            goto label_7F0A8BB4;
    }

label_7F0A8B78:
    ctx->pc = 0x7F0A8B78u;
    ctx->downcount -= 4;
    // 7F0A8B78: add   r0, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0A8B7C:
    ctx->pc = 0x7F0A8B7Cu;
    // 7F0A8B7C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A8B80:
    ctx->pc = 0x7F0A8B80u;
    // 7F0A8B80: stw     r0, 3796(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8B84:
    ctx->pc = 0x7F0A8B84u;
    // 7F0A8B84: b       0x7F0A8BA0
    {
            goto label_7F0A8BA0;
    }

label_7F0A8B88:
    ctx->pc = 0x7F0A8B88u;
    ctx->downcount -= 2;
    // 7F0A8B88: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A8B8C:
    ctx->pc = 0x7F0A8B8Cu;
    // 7F0A8B8C: bl      0x7F0A8BB4
    {
            ctx->lr = 0x7F0A8B90u;
            goto label_7F0A8BB4;
    }

label_7F0A8B90:
    ctx->pc = 0x7F0A8B90u;
    ctx->downcount -= 4;
    // 7F0A8B90: lwz     r0, 3796(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3796);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8B94:
    ctx->pc = 0x7F0A8B94u;
    // 7F0A8B94: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F0A8B98:
    ctx->pc = 0x7F0A8B98u;
    // 7F0A8B98: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0A8B9C:
    ctx->pc = 0x7F0A8B9Cu;
    // 7F0A8B9C: stw     r0, 3796(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8BA0:
    ctx->pc = 0x7F0A8BA0u;
    ctx->downcount -= 16;
    // 7F0A8BA0: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A8BA4:
    ctx->pc = 0x7F0A8BA4u;
    // 7F0A8BA4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8BA8:
    ctx->pc = 0x7F0A8BA8u;
    // 7F0A8BA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8BAC:
    ctx->pc = 0x7F0A8BACu;
    // 7F0A8BAC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0A8BB0:
    ctx->pc = 0x7F0A8BB0u;
    // 7F0A8BB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8BB4:
    ctx->pc = 0x7F0A8BB4u;
    ctx->downcount -= 6;
    // 7F0A8BB4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8BB8:
    ctx->pc = 0x7F0A8BB8u;
    // 7F0A8BB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8BBC:
    ctx->pc = 0x7F0A8BBCu;
    // 7F0A8BBC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8BC0:
    ctx->pc = 0x7F0A8BC0u;
    // 7F0A8BC0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A8BC4:
    ctx->pc = 0x7F0A8BC4u;
    // 7F0A8BC4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8BC8:
    ctx->pc = 0x7F0A8BC8u;
    // 7F0A8BC8: bl      0x800147F8
    {
            ctx->lr = 0x7F0A8BCCu;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F0A8BCC:
    ctx->pc = 0x7F0A8BCCu;
    ctx->downcount -= 8;
    // 7F0A8BCC: and   r0, r31, r3
    {
        ctx->gpr[0] = ctx->gpr[31] & ctx->gpr[3];
    }

label_7F0A8BD0:
    ctx->pc = 0x7F0A8BD0u;
    // 7F0A8BD0: subf   r3, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_7F0A8BD4:
    ctx->pc = 0x7F0A8BD4u;
    // 7F0A8BD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8BD8:
    ctx->pc = 0x7F0A8BD8u;
    // 7F0A8BD8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A8BDC:
    ctx->pc = 0x7F0A8BDCu;
    // 7F0A8BDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8BE0:
    ctx->pc = 0x7F0A8BE0u;
    // 7F0A8BE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8BE4:
    ctx->pc = 0x7F0A8BE4u;
    // 7F0A8BE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8BE8:
    ctx->pc = 0x7F0A8BE8u;
    ctx->downcount -= 6;
    // 7F0A8BE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8BEC:
    ctx->pc = 0x7F0A8BECu;
    // 7F0A8BEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8BF0:
    ctx->pc = 0x7F0A8BF0u;
    // 7F0A8BF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8BF4:
    ctx->pc = 0x7F0A8BF4u;
    // 7F0A8BF4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A8BF8:
    ctx->pc = 0x7F0A8BF8u;
    // 7F0A8BF8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8BFC:
    ctx->pc = 0x7F0A8BFCu;
    // 7F0A8BFC: bl      0x800147F8
    {
            ctx->lr = 0x7F0A8C00u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F0A8C00:
    ctx->pc = 0x7F0A8C00u;
    ctx->downcount -= 8;
    // 7F0A8C00: addi    r0, r31, -1
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-1);

label_7F0A8C04:
    ctx->pc = 0x7F0A8C04u;
    // 7F0A8C04: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A8C08:
    ctx->pc = 0x7F0A8C08u;
    // 7F0A8C08: and   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F0A8C0C:
    ctx->pc = 0x7F0A8C0Cu;
    // 7F0A8C0C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8C10:
    ctx->pc = 0x7F0A8C10u;
    // 7F0A8C10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8C14:
    ctx->pc = 0x7F0A8C14u;
    // 7F0A8C14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8C18:
    ctx->pc = 0x7F0A8C18u;
    // 7F0A8C18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C1C:
    ctx->pc = 0x7F0A8C1Cu;
    ctx->downcount -= 5;
    // 7F0A8C1C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A8C20:
    ctx->pc = 0x7F0A8C20u;
    // 7F0A8C20: addi    r3, r3, 29512
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29512);

label_7F0A8C24:
    ctx->pc = 0x7F0A8C24u;
    // 7F0A8C24: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8C28:
    ctx->pc = 0x7F0A8C28u;
    // 7F0A8C28: cmplwi  r3, 0x0000
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

label_7F0A8C2C:
    ctx->pc = 0x7F0A8C2Cu;
    // 7F0A8C2C: bc    12, 2, 0x7F0A8C38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8C38;
        }
    }

label_7F0A8C30:
    ctx->pc = 0x7F0A8C30u;
    ctx->downcount -= 2;
    // 7F0A8C30: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F0A8C34:
    ctx->pc = 0x7F0A8C34u;
    // 7F0A8C34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C38:
    ctx->pc = 0x7F0A8C38u;
    ctx->downcount -= 2;
    // 7F0A8C38: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A8C3C:
    ctx->pc = 0x7F0A8C3Cu;
    // 7F0A8C3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C40:
    ctx->pc = 0x7F0A8C40u;
    ctx->downcount -= 6;
    // 7F0A8C40: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0A8C44:
    ctx->pc = 0x7F0A8C44u;
    // 7F0A8C44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A8C48:
    ctx->pc = 0x7F0A8C48u;
    // 7F0A8C48: addi    r4, r4, 29512
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29512);

label_7F0A8C4C:
    ctx->pc = 0x7F0A8C4Cu;
    // 7F0A8C4C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A8C50:
    ctx->pc = 0x7F0A8C50u;
    // 7F0A8C50: cmplwi  r4, 0x0000
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

label_7F0A8C54:
    ctx->pc = 0x7F0A8C54u;
    // 7F0A8C54: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C58:
    ctx->pc = 0x7F0A8C58u;
    ctx->downcount -= 3;
    // 7F0A8C58: lha     r0, 3602(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3602);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A8C5C:
    ctx->pc = 0x7F0A8C5Cu;
    // 7F0A8C5C: cmpwi   r0, 0
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

label_7F0A8C60:
    ctx->pc = 0x7F0A8C60u;
    // 7F0A8C60: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C64:
    ctx->pc = 0x7F0A8C64u;
    ctx->downcount -= 2;
    // 7F0A8C64: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0A8C68:
    ctx->pc = 0x7F0A8C68u;
    // 7F0A8C68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C6C:
    ctx->pc = 0x7F0A8C6Cu;
    ctx->downcount -= 7;
    // 7F0A8C6C: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0A8C70:
    ctx->pc = 0x7F0A8C70u;
    // 7F0A8C70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A8C74:
    ctx->pc = 0x7F0A8C74u;
    // 7F0A8C74: addi    r4, r4, 29512
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29512);

label_7F0A8C78:
    ctx->pc = 0x7F0A8C78u;
    // 7F0A8C78: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A8C7C:
    ctx->pc = 0x7F0A8C7Cu;
    // 7F0A8C7C: lha     r0, 3602(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3602);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A8C80:
    ctx->pc = 0x7F0A8C80u;
    // 7F0A8C80: cmpwi   r0, 0
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

label_7F0A8C84:
    ctx->pc = 0x7F0A8C84u;
    // 7F0A8C84: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C88:
    ctx->pc = 0x7F0A8C88u;
    ctx->downcount -= 3;
    // 7F0A8C88: lwz     r0, 3836(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8C8C:
    ctx->pc = 0x7F0A8C8Cu;
    // 7F0A8C8C: cmpwi   r0, 0
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

label_7F0A8C90:
    ctx->pc = 0x7F0A8C90u;
    // 7F0A8C90: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C94:
    ctx->pc = 0x7F0A8C94u;
    ctx->downcount -= 2;
    // 7F0A8C94: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0A8C98:
    ctx->pc = 0x7F0A8C98u;
    // 7F0A8C98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8C9C:
    ctx->pc = 0x7F0A8C9Cu;
    ctx->downcount -= 6;
    // 7F0A8C9C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A8CA0:
    ctx->pc = 0x7F0A8CA0u;
    // 7F0A8CA0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A8CA4:
    ctx->pc = 0x7F0A8CA4u;
    // 7F0A8CA4: lwz     r5, 29512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29512);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A8CA8:
    ctx->pc = 0x7F0A8CA8u;
    // 7F0A8CA8: lfs     f1, -5376(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8CA8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5376);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A8CAC:
    ctx->pc = 0x7F0A8CACu;
    // 7F0A8CAC: cmplwi  r5, 0x0000
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

label_7F0A8CB0:
    ctx->pc = 0x7F0A8CB0u;
    // 7F0A8CB0: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8CB4:
    ctx->pc = 0x7F0A8CB4u;
    ctx->downcount -= 6;
    // 7F0A8CB4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A8CB8:
    ctx->pc = 0x7F0A8CB8u;
    // 7F0A8CB8: lfs     f1, 3948(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8CB8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3948);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A8CBC:
    ctx->pc = 0x7F0A8CBCu;
    // 7F0A8CBC: lfs     f0, -5372(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8CBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5372);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A8CC0:
    ctx->pc = 0x7F0A8CC0u;
    // 7F0A8CC0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0A8CC0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0A8CC4:
    ctx->pc = 0x7F0A8CC4u;
    // 7F0A8CC4: cror    2, 1, 2
    {
        u32 a = (ctx->cr >> (31u - 1u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F0A8CC8:
    ctx->pc = 0x7F0A8CC8u;
    // 7F0A8CC8: bc    4, 2, 0x7F0A8CDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8CDC;
        }
    }

label_7F0A8CCC:
    ctx->pc = 0x7F0A8CCCu;
    ctx->downcount -= 4;
    // 7F0A8CCC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A8CD0:
    ctx->pc = 0x7F0A8CD0u;
    // 7F0A8CD0: lfs     f0, -5368(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8CD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5368);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A8CD4:
    ctx->pc = 0x7F0A8CD4u;
    // 7F0A8CD4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0A8CD4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0A8CD8:
    ctx->pc = 0x7F0A8CD8u;
    // 7F0A8CD8: stfs     f0, 3948(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8CD8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(3948);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A8CDC:
    ctx->pc = 0x7F0A8CDCu;
    ctx->downcount -= 5;
    // 7F0A8CDC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A8CE0:
    ctx->pc = 0x7F0A8CE0u;
    // 7F0A8CE0: addi    r3, r3, 29512
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(29512);

label_7F0A8CE4:
    ctx->pc = 0x7F0A8CE4u;
    // 7F0A8CE4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8CE8:
    ctx->pc = 0x7F0A8CE8u;
    // 7F0A8CE8: lfs     f1, 3948(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8CE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3948);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A8CEC:
    ctx->pc = 0x7F0A8CECu;
    // 7F0A8CEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8CF0:
    ctx->pc = 0x7F0A8CF0u;
    ctx->downcount -= 8;
    // 7F0A8CF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8CF4:
    ctx->pc = 0x7F0A8CF4u;
    // 7F0A8CF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8CF8:
    ctx->pc = 0x7F0A8CF8u;
    // 7F0A8CF8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8CFC:
    ctx->pc = 0x7F0A8CFCu;
    // 7F0A8CFC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A8D00:
    ctx->pc = 0x7F0A8D00u;
    // 7F0A8D00: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8D04:
    ctx->pc = 0x7F0A8D04u;
    // 7F0A8D04: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A8D08:
    ctx->pc = 0x7F0A8D08u;
    // 7F0A8D08: addi    r4, r31, 448
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0A8D0C:
    ctx->pc = 0x7F0A8D0Cu;
    // 7F0A8D0C: bl      0x7F2D2410
    {
            ctx->lr = 0x7F0A8D10u;
            ctx->pc = 0x7F2D2410u;
            return;
    }

label_7F0A8D10:
    ctx->pc = 0x7F0A8D10u;
    ctx->downcount -= 9;
    // 7F0A8D10: stw     r3, 3888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3888);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8D14:
    ctx->pc = 0x7F0A8D14u;
    // 7F0A8D14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A8D18:
    ctx->pc = 0x7F0A8D18u;
    // 7F0A8D18: stw     r0, 3884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8D1C:
    ctx->pc = 0x7F0A8D1Cu;
    // 7F0A8D1C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A8D20:
    ctx->pc = 0x7F0A8D20u;
    // 7F0A8D20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8D24:
    ctx->pc = 0x7F0A8D24u;
    // 7F0A8D24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8D28:
    ctx->pc = 0x7F0A8D28u;
    // 7F0A8D28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8D2C:
    ctx->pc = 0x7F0A8D2Cu;
    // 7F0A8D2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8D30:
    ctx->pc = 0x7F0A8D30u;
    ctx->downcount -= 19;
    // 7F0A8D30: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8D34:
    ctx->pc = 0x7F0A8D34u;
    // 7F0A8D34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8D38:
    ctx->pc = 0x7F0A8D38u;
    // 7F0A8D38: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8D3C:
    ctx->pc = 0x7F0A8D3Cu;
    // 7F0A8D3C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A8D40:
    ctx->pc = 0x7F0A8D40u;
    // 7F0A8D40: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8D44:
    ctx->pc = 0x7F0A8D44u;
    // 7F0A8D44: lwz     r30, 3884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3884);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F0A8D48:
    ctx->pc = 0x7F0A8D48u;
    // 7F0A8D48: lwz     r31, 3888(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3888);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A8D4C:
    ctx->pc = 0x7F0A8D4Cu;
    // 7F0A8D4C: rlwinm. r0, r30, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0A8D50:
    ctx->pc = 0x7F0A8D50u;
    // 7F0A8D50: bc    12, 2, 0x7F0A8D5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8D5C;
        }
    }

label_7F0A8D54:
    ctx->pc = 0x7F0A8D54u;
    ctx->downcount -= 2;
    // 7F0A8D54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0A8D58:
    ctx->pc = 0x7F0A8D58u;
    // 7F0A8D58: b       0x7F0A8D80
    {
            goto label_7F0A8D80;
    }

label_7F0A8D5C:
    ctx->pc = 0x7F0A8D5Cu;
    ctx->downcount -= 2;
    // 7F0A8D5C: rlwinm. r0, r30, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0A8D60:
    ctx->pc = 0x7F0A8D60u;
    // 7F0A8D60: bc    12, 2, 0x7F0A8D6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8D6C;
        }
    }

label_7F0A8D64:
    ctx->pc = 0x7F0A8D64u;
    ctx->downcount -= 2;
    // 7F0A8D64: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0A8D68:
    ctx->pc = 0x7F0A8D68u;
    // 7F0A8D68: b       0x7F0A8D80
    {
            goto label_7F0A8D80;
    }

label_7F0A8D6C:
    ctx->pc = 0x7F0A8D6Cu;
    ctx->downcount -= 2;
    // 7F0A8D6C: rlwinm. r0, r30, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0A8D70:
    ctx->pc = 0x7F0A8D70u;
    // 7F0A8D70: bc    12, 2, 0x7F0A8D7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8D7C;
        }
    }

label_7F0A8D74:
    ctx->pc = 0x7F0A8D74u;
    ctx->downcount -= 2;
    // 7F0A8D74: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0A8D78:
    ctx->pc = 0x7F0A8D78u;
    // 7F0A8D78: b       0x7F0A8D80
    {
            goto label_7F0A8D80;
    }

label_7F0A8D7C:
    ctx->pc = 0x7F0A8D7Cu;
    ctx->downcount -= 1;
    // 7F0A8D7C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0A8D80:
    ctx->pc = 0x7F0A8D80u;
    ctx->downcount -= 2;
    // 7F0A8D80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8D84:
    ctx->pc = 0x7F0A8D84u;
    // 7F0A8D84: bl      0x7F2D2900
    {
            ctx->lr = 0x7F0A8D88u;
            ctx->pc = 0x7F2D2900u;
            return;
    }

label_7F0A8D88:
    ctx->pc = 0x7F0A8D88u;
    ctx->downcount -= 2;
    // 7F0A8D88: rlwinm. r0, r30, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0A8D8C:
    ctx->pc = 0x7F0A8D8Cu;
    // 7F0A8D8C: bc    12, 2, 0x7F0A8DD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8DD4;
        }
    }

label_7F0A8D90:
    ctx->pc = 0x7F0A8D90u;
    ctx->downcount -= 2;
    // 7F0A8D90: lwz     r3, 3696(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3696);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8D94:
    ctx->pc = 0x7F0A8D94u;
    // 7F0A8D94: bl      0x7F0B2170
    {
            ctx->lr = 0x7F0A8D98u;
            ctx->pc = 0x7F0B2170u;
            return;
    }

label_7F0A8D98:
    ctx->pc = 0x7F0A8D98u;
    ctx->downcount -= 3;
    // 7F0A8D98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8D9C:
    ctx->pc = 0x7F0A8D9Cu;
    // 7F0A8D9C: cmpwi   r4, 12
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A8DA0:
    ctx->pc = 0x7F0A8DA0u;
    // 7F0A8DA0: bc    12, 2, 0x7F0A8DBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8DBC;
        }
    }

label_7F0A8DA4:
    ctx->pc = 0x7F0A8DA4u;
    ctx->downcount -= 1;
    // 7F0A8DA4: bc    4, 0, 0x7F0A8DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8DCC;
        }
    }

label_7F0A8DA8:
    ctx->pc = 0x7F0A8DA8u;
    ctx->downcount -= 2;
    // 7F0A8DA8: cmpwi   r4, 3
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

label_7F0A8DAC:
    ctx->pc = 0x7F0A8DACu;
    // 7F0A8DAC: bc    4, 0, 0x7F0A8DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8DCC;
        }
    }

label_7F0A8DB0:
    ctx->pc = 0x7F0A8DB0u;
    ctx->downcount -= 2;
    // 7F0A8DB0: cmpwi   r4, 0
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

label_7F0A8DB4:
    ctx->pc = 0x7F0A8DB4u;
    // 7F0A8DB4: bc    4, 0, 0x7F0A8DBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8DBC;
        }
    }

label_7F0A8DB8:
    ctx->pc = 0x7F0A8DB8u;
    ctx->downcount -= 1;
    // 7F0A8DB8: b       0x7F0A8DCC
    {
            goto label_7F0A8DCC;
    }

label_7F0A8DBC:
    ctx->pc = 0x7F0A8DBCu;
    ctx->downcount -= 3;
    // 7F0A8DBC: lwz     r3, 3888(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3888);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8DC0:
    ctx->pc = 0x7F0A8DC0u;
    // 7F0A8DC0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F0A8DC4:
    ctx->pc = 0x7F0A8DC4u;
    // 7F0A8DC4: bl      0x7F2D2D64
    {
            ctx->lr = 0x7F0A8DC8u;
            ctx->pc = 0x7F2D2D64u;
            return;
    }

label_7F0A8DC8:
    ctx->pc = 0x7F0A8DC8u;
    ctx->downcount -= 1;
    // 7F0A8DC8: b       0x7F0A8DD4
    {
            goto label_7F0A8DD4;
    }

label_7F0A8DCC:
    ctx->pc = 0x7F0A8DCCu;
    ctx->downcount -= 2;
    // 7F0A8DCC: lwz     r3, 3888(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3888);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8DD0:
    ctx->pc = 0x7F0A8DD0u;
    // 7F0A8DD0: bl      0x7F2D2D64
    {
            ctx->lr = 0x7F0A8DD4u;
            ctx->pc = 0x7F2D2D64u;
            return;
    }

label_7F0A8DD4:
    ctx->pc = 0x7F0A8DD4u;
    ctx->downcount -= 2;
    // 7F0A8DD4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8DD8:
    ctx->pc = 0x7F0A8DD8u;
    // 7F0A8DD8: bl      0x7F2D1DE0
    {
            ctx->lr = 0x7F0A8DDCu;
            ctx->pc = 0x7F2D1DE0u;
            return;
    }

label_7F0A8DDC:
    ctx->pc = 0x7F0A8DDCu;
    ctx->downcount -= 16;
    // 7F0A8DDC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A8DE0:
    ctx->pc = 0x7F0A8DE0u;
    // 7F0A8DE0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8DE4:
    ctx->pc = 0x7F0A8DE4u;
    // 7F0A8DE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8DE8:
    ctx->pc = 0x7F0A8DE8u;
    // 7F0A8DE8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8DEC:
    ctx->pc = 0x7F0A8DECu;
    // 7F0A8DEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8DF0:
    ctx->pc = 0x7F0A8DF0u;
    ctx->downcount -= 37;
    // 7F0A8DF0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8DF4:
    ctx->pc = 0x7F0A8DF4u;
    // 7F0A8DF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8DF8:
    ctx->pc = 0x7F0A8DF8u;
    // 7F0A8DF8: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0A8DFC:
    ctx->pc = 0x7F0A8DFCu;
    // 7F0A8DFC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A8E00:
    ctx->pc = 0x7F0A8E00u;
    // 7F0A8E00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8E04:
    ctx->pc = 0x7F0A8E04u;
    // 7F0A8E04: addi    r7, r4, -5356
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-5356);

label_7F0A8E08:
    ctx->pc = 0x7F0A8E08u;
    // 7F0A8E08: addi    r8, r5, -5364
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-5364);

label_7F0A8E0C:
    ctx->pc = 0x7F0A8E0Cu;
    // 7F0A8E0C: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8E0Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0A8E10:
    ctx->pc = 0x7F0A8E10u;
    // 7F0A8E10: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A8E14:
    ctx->pc = 0x7F0A8E14u;
    // 7F0A8E14: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8E18:
    ctx->pc = 0x7F0A8E18u;
    // 7F0A8E18: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A8E1C:
    ctx->pc = 0x7F0A8E1Cu;
    // 7F0A8E1C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F0A8E20:
    ctx->pc = 0x7F0A8E20u;
    // 7F0A8E20: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A8E24:
    ctx->pc = 0x7F0A8E24u;
    // 7F0A8E24: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A8E28:
    ctx->pc = 0x7F0A8E28u;
    // 7F0A8E28: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8E2C:
    ctx->pc = 0x7F0A8E2Cu;
    // 7F0A8E2C: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0A8E30:
    ctx->pc = 0x7F0A8E30u;
    // 7F0A8E30: addi    r5, r4, -5352
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5352);

label_7F0A8E34:
    ctx->pc = 0x7F0A8E34u;
    // 7F0A8E34: lfs     f0, -5348(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8E34u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5348);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A8E38:
    ctx->pc = 0x7F0A8E38u;
    // 7F0A8E38: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8E3C:
    ctx->pc = 0x7F0A8E3Cu;
    // 7F0A8E3C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8E40:
    ctx->pc = 0x7F0A8E40u;
    // 7F0A8E40: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8E40u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A8E44:
    ctx->pc = 0x7F0A8E44u;
    // 7F0A8E44: lwz     r7, 3748(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3748);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0A8E48:
    ctx->pc = 0x7F0A8E48u;
    // 7F0A8E48: lwz     r0, 3752(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3752);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8E4C:
    ctx->pc = 0x7F0A8E4Cu;
    // 7F0A8E4C: stw     r7, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0A8E50:
    ctx->pc = 0x7F0A8E50u;
    // 7F0A8E50: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8E54:
    ctx->pc = 0x7F0A8E54u;
    // 7F0A8E54: lwz     r3, 3756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3756);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8E58:
    ctx->pc = 0x7F0A8E58u;
    // 7F0A8E58: lwz     r0, 3760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8E5C:
    ctx->pc = 0x7F0A8E5Cu;
    // 7F0A8E5C: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8E60:
    ctx->pc = 0x7F0A8E60u;
    // 7F0A8E60: stw     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8E64:
    ctx->pc = 0x7F0A8E64u;
    // 7F0A8E64: lwzu     r3, -5664(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5664);
        ctx->gpr[3] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_7F0A8E68:
    ctx->pc = 0x7F0A8E68u;
    // 7F0A8E68: stfs     f2, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8E68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0A8E6C:
    ctx->pc = 0x7F0A8E6Cu;
    // 7F0A8E6C: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8E70:
    ctx->pc = 0x7F0A8E70u;
    // 7F0A8E70: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8E70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0A8E74:
    ctx->pc = 0x7F0A8E74u;
    // 7F0A8E74: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8E78:
    ctx->pc = 0x7F0A8E78u;
    // 7F0A8E78: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A8E78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A8E7C:
    ctx->pc = 0x7F0A8E7Cu;
    // 7F0A8E7C: lwz     r3, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8E80:
    ctx->pc = 0x7F0A8E80u;
    // 7F0A8E80: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0A8E84u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0A8E84:
    ctx->pc = 0x7F0A8E84u;
    ctx->downcount -= 3;
    // 7F0A8E84: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A8E88:
    ctx->pc = 0x7F0A8E88u;
    // 7F0A8E88: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A8E8C:
    ctx->pc = 0x7F0A8E8Cu;
    // 7F0A8E8C: bl      0x7F0A94E8
    {
            ctx->lr = 0x7F0A8E90u;
            goto label_7F0A94E8;
    }

label_7F0A8E90:
    ctx->pc = 0x7F0A8E90u;
    ctx->downcount -= 10;
    // 7F0A8E90: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F0A8E94:
    ctx->pc = 0x7F0A8E94u;
    // 7F0A8E94: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0A8E98:
    ctx->pc = 0x7F0A8E98u;
    // 7F0A8E98: addi    r6, r5, -5664
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-5664);

label_7F0A8E9C:
    ctx->pc = 0x7F0A8E9Cu;
    // 7F0A8E9C: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0A8EA0:
    ctx->pc = 0x7F0A8EA0u;
    // 7F0A8EA0: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0A8EA4:
    ctx->pc = 0x7F0A8EA4u;
    // 7F0A8EA4: addi    r4, r4, -28168
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28168);

label_7F0A8EA8:
    ctx->pc = 0x7F0A8EA8u;
    // 7F0A8EA8: sth     r3, 42(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0A8EAC:
    ctx->pc = 0x7F0A8EACu;
    // 7F0A8EAC: addi    r5, r5, -27956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27956);

label_7F0A8EB0:
    ctx->pc = 0x7F0A8EB0u;
    // 7F0A8EB0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8EB4:
    ctx->pc = 0x7F0A8EB4u;
    // 7F0A8EB4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0A8EB8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0A8EB8:
    ctx->pc = 0x7F0A8EB8u;
    ctx->downcount -= 10;
    // 7F0A8EB8: lwz     r3, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8EBC:
    ctx->pc = 0x7F0A8EBCu;
    // 7F0A8EBC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8EC0:
    ctx->pc = 0x7F0A8EC0u;
    // 7F0A8EC0: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F0A8EC4:
    ctx->pc = 0x7F0A8EC4u;
    // 7F0A8EC4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8EC8:
    ctx->pc = 0x7F0A8EC8u;
    // 7F0A8EC8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A8ECC:
    ctx->pc = 0x7F0A8ECCu;
    // 7F0A8ECC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8ED0:
    ctx->pc = 0x7F0A8ED0u;
    // 7F0A8ED0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8ED4:
    ctx->pc = 0x7F0A8ED4u;
    // 7F0A8ED4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8ED8:
    ctx->pc = 0x7F0A8ED8u;
    // 7F0A8ED8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8EDC:
    ctx->pc = 0x7F0A8EDCu;
    ctx->downcount -= 27;
    // 7F0A8EDC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8EE0:
    ctx->pc = 0x7F0A8EE0u;
    // 7F0A8EE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8EE4:
    ctx->pc = 0x7F0A8EE4u;
    // 7F0A8EE4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0A8EE8:
    ctx->pc = 0x7F0A8EE8u;
    // 7F0A8EE8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F0A8EEC:
    ctx->pc = 0x7F0A8EECu;
    // 7F0A8EEC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8EF0:
    ctx->pc = 0x7F0A8EF0u;
    // 7F0A8EF0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A8EF4:
    ctx->pc = 0x7F0A8EF4u;
    // 7F0A8EF4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0A8EF8:
    ctx->pc = 0x7F0A8EF8u;
    // 7F0A8EF8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A8EFC:
    ctx->pc = 0x7F0A8EFCu;
    // 7F0A8EFC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8F00:
    ctx->pc = 0x7F0A8F00u;
    // 7F0A8F00: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8F04:
    ctx->pc = 0x7F0A8F04u;
    // 7F0A8F04: lwz     r8, 156(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(156);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0A8F08:
    ctx->pc = 0x7F0A8F08u;
    // 7F0A8F08: and   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[7];
    }

label_7F0A8F0C:
    ctx->pc = 0x7F0A8F0Cu;
    // 7F0A8F0C: and   r6, r8, r6
    {
        ctx->gpr[6] = ctx->gpr[8] & ctx->gpr[6];
    }

label_7F0A8F10:
    ctx->pc = 0x7F0A8F10u;
    // 7F0A8F10: xor   r5, r6, r7
    {
        ctx->gpr[5] = ctx->gpr[6] ^ ctx->gpr[7];
    }

label_7F0A8F14:
    ctx->pc = 0x7F0A8F14u;
    // 7F0A8F14: xor   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[7];
    }

label_7F0A8F18:
    ctx->pc = 0x7F0A8F18u;
    // 7F0A8F18: or.   r0, r5, r0
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

label_7F0A8F1C:
    ctx->pc = 0x7F0A8F1Cu;
    // 7F0A8F1C: bc    12, 2, 0x7F0A8FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8FC8;
        }
    }

label_7F0A8F20:
    ctx->pc = 0x7F0A8F20u;
    ctx->downcount -= 3;
    // 7F0A8F20: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8F24:
    ctx->pc = 0x7F0A8F24u;
    // 7F0A8F24: rlwinm. r0, r0, 0, 31, 31
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

label_7F0A8F28:
    ctx->pc = 0x7F0A8F28u;
    // 7F0A8F28: bc    12, 2, 0x7F0A8FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8FC8;
        }
    }

label_7F0A8F2C:
    ctx->pc = 0x7F0A8F2Cu;
    ctx->downcount -= 3;
    // 7F0A8F2C: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8F30:
    ctx->pc = 0x7F0A8F30u;
    // 7F0A8F30: rlwinm. r0, r0, 0, 30, 30
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

label_7F0A8F34:
    ctx->pc = 0x7F0A8F34u;
    // 7F0A8F34: bc    12, 2, 0x7F0A8FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8FC8;
        }
    }

label_7F0A8F38:
    ctx->pc = 0x7F0A8F38u;
    ctx->downcount -= 10;
    // 7F0A8F38: lwz     r0, 144(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8F3C:
    ctx->pc = 0x7F0A8F3Cu;
    // 7F0A8F3C: lis     r5, 8
    ctx->gpr[5] = ((u32)(s32)(8) << 16);

label_7F0A8F40:
    ctx->pc = 0x7F0A8F40u;
    // 7F0A8F40: lwz     r6, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0A8F44:
    ctx->pc = 0x7F0A8F44u;
    // 7F0A8F44: addi    r5, r5, 1026
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1026);

label_7F0A8F48:
    ctx->pc = 0x7F0A8F48u;
    // 7F0A8F48: and   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[7];
    }

label_7F0A8F4C:
    ctx->pc = 0x7F0A8F4Cu;
    // 7F0A8F4C: and   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] & ctx->gpr[5];
    }

label_7F0A8F50:
    ctx->pc = 0x7F0A8F50u;
    // 7F0A8F50: xor   r5, r5, r7
    {
        ctx->gpr[5] = ctx->gpr[5] ^ ctx->gpr[7];
    }

label_7F0A8F54:
    ctx->pc = 0x7F0A8F54u;
    // 7F0A8F54: xor   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[7];
    }

label_7F0A8F58:
    ctx->pc = 0x7F0A8F58u;
    // 7F0A8F58: or.   r0, r5, r0
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

label_7F0A8F5C:
    ctx->pc = 0x7F0A8F5Cu;
    // 7F0A8F5C: bc    4, 2, 0x7F0A8FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8FA0;
        }
    }

label_7F0A8F60:
    ctx->pc = 0x7F0A8F60u;
    ctx->downcount -= 4;
    // 7F0A8F60: lwz     r5, 3912(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3912);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A8F64:
    ctx->pc = 0x7F0A8F64u;
    // 7F0A8F64: lwz     r0, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8F68:
    ctx->pc = 0x7F0A8F68u;
    // 7F0A8F68: cmplw   r5, r0
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

label_7F0A8F6C:
    ctx->pc = 0x7F0A8F6Cu;
    // 7F0A8F6C: bc    12, 2, 0x7F0A8F98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8F98;
        }
    }

label_7F0A8F70:
    ctx->pc = 0x7F0A8F70u;
    ctx->downcount -= 1;
    // 7F0A8F70: bl      0x7F014DF8
    {
            ctx->lr = 0x7F0A8F74u;
            ctx->pc = 0x7F014DF8u;
            return;
    }

label_7F0A8F74:
    ctx->pc = 0x7F0A8F74u;
    ctx->downcount -= 9;
    // 7F0A8F74: lwz     r3, 80(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8F78:
    ctx->pc = 0x7F0A8F78u;
    // 7F0A8F78: lwz     r0, 84(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8F7C:
    ctx->pc = 0x7F0A8F7Cu;
    // 7F0A8F7C: stw     r3, 3896(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3896);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8F80:
    ctx->pc = 0x7F0A8F80u;
    // 7F0A8F80: stw     r0, 3900(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3900);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8F84:
    ctx->pc = 0x7F0A8F84u;
    // 7F0A8F84: lwz     r3, 88(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(88);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8F88:
    ctx->pc = 0x7F0A8F88u;
    // 7F0A8F88: lwz     r0, 92(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8F8C:
    ctx->pc = 0x7F0A8F8Cu;
    // 7F0A8F8C: stw     r3, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A8F90:
    ctx->pc = 0x7F0A8F90u;
    // 7F0A8F90: stw     r0, 3908(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3908);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8F94:
    ctx->pc = 0x7F0A8F94u;
    // 7F0A8F94: b       0x7F0A8FA0
    {
            goto label_7F0A8FA0;
    }

label_7F0A8F98:
    ctx->pc = 0x7F0A8F98u;
    ctx->downcount -= 2;
    // 7F0A8F98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8F9C:
    ctx->pc = 0x7F0A8F9Cu;
    // 7F0A8F9C: bl      0x7F0AAFD4
    {
            ctx->lr = 0x7F0A8FA0u;
            goto label_7F0AAFD4;
    }

label_7F0A8FA0:
    ctx->pc = 0x7F0A8FA0u;
    ctx->downcount -= 4;
    // 7F0A8FA0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A8FA4:
    ctx->pc = 0x7F0A8FA4u;
    // 7F0A8FA4: lwz     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8FA8:
    ctx->pc = 0x7F0A8FA8u;
    // 7F0A8FA8: cmpwi   r0, 0
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

label_7F0A8FAC:
    ctx->pc = 0x7F0A8FACu;
    // 7F0A8FAC: bc    12, 2, 0x7F0A8FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8FC8;
        }
    }

label_7F0A8FB0:
    ctx->pc = 0x7F0A8FB0u;
    ctx->downcount -= 4;
    // 7F0A8FB0: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A8FB4:
    ctx->pc = 0x7F0A8FB4u;
    // 7F0A8FB4: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A8FB8:
    ctx->pc = 0x7F0A8FB8u;
    // 7F0A8FB8: cmpwi   r0, 0
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

label_7F0A8FBC:
    ctx->pc = 0x7F0A8FBCu;
    // 7F0A8FBC: bc    12, 1, 0x7F0A8FC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A8FC8;
        }
    }

label_7F0A8FC0:
    ctx->pc = 0x7F0A8FC0u;
    ctx->downcount -= 2;
    // 7F0A8FC0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0A8FC4:
    ctx->pc = 0x7F0A8FC4u;
    // 7F0A8FC4: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A8FC8:
    ctx->pc = 0x7F0A8FC8u;
    ctx->downcount -= 16;
    // 7F0A8FC8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A8FCC:
    ctx->pc = 0x7F0A8FCCu;
    // 7F0A8FCC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A8FD0:
    ctx->pc = 0x7F0A8FD0u;
    // 7F0A8FD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A8FD4:
    ctx->pc = 0x7F0A8FD4u;
    // 7F0A8FD4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A8FD8:
    ctx->pc = 0x7F0A8FD8u;
    // 7F0A8FD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A8FDC:
    ctx->pc = 0x7F0A8FDCu;
    ctx->downcount -= 6;
    // 7F0A8FDC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A8FE0:
    ctx->pc = 0x7F0A8FE0u;
    // 7F0A8FE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A8FE4:
    ctx->pc = 0x7F0A8FE4u;
    // 7F0A8FE4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A8FE8:
    ctx->pc = 0x7F0A8FE8u;
    // 7F0A8FE8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A8FEC:
    ctx->pc = 0x7F0A8FECu;
    // 7F0A8FEC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A8FF0:
    ctx->pc = 0x7F0A8FF0u;
    // 7F0A8FF0: bl      0x7F0A9044
    {
            ctx->lr = 0x7F0A8FF4u;
            goto label_7F0A9044;
    }

label_7F0A8FF4:
    ctx->pc = 0x7F0A8FF4u;
    ctx->downcount -= 2;
    // 7F0A8FF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A8FF8:
    ctx->pc = 0x7F0A8FF8u;
    // 7F0A8FF8: bl      0x7F0A910C
    {
            ctx->lr = 0x7F0A8FFCu;
            goto label_7F0A910C;
    }

label_7F0A8FFC:
    ctx->pc = 0x7F0A8FFCu;
    ctx->downcount -= 6;
    // 7F0A8FFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9000:
    ctx->pc = 0x7F0A9000u;
    // 7F0A9000: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A9004:
    ctx->pc = 0x7F0A9004u;
    // 7F0A9004: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9008:
    ctx->pc = 0x7F0A9008u;
    // 7F0A9008: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A900C:
    ctx->pc = 0x7F0A900Cu;
    // 7F0A900C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9010:
    ctx->pc = 0x7F0A9010u;
    ctx->downcount -= 6;
    // 7F0A9010: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9014:
    ctx->pc = 0x7F0A9014u;
    // 7F0A9014: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9018:
    ctx->pc = 0x7F0A9018u;
    // 7F0A9018: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A901C:
    ctx->pc = 0x7F0A901Cu;
    // 7F0A901C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A9020:
    ctx->pc = 0x7F0A9020u;
    // 7F0A9020: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9024:
    ctx->pc = 0x7F0A9024u;
    // 7F0A9024: bl      0x7F0A9150
    {
            ctx->lr = 0x7F0A9028u;
            goto label_7F0A9150;
    }

label_7F0A9028:
    ctx->pc = 0x7F0A9028u;
    ctx->downcount -= 2;
    // 7F0A9028: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A902C:
    ctx->pc = 0x7F0A902Cu;
    // 7F0A902C: bl      0x7F0A91B4
    {
            ctx->lr = 0x7F0A9030u;
            goto label_7F0A91B4;
    }

label_7F0A9030:
    ctx->pc = 0x7F0A9030u;
    ctx->downcount -= 6;
    // 7F0A9030: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9034:
    ctx->pc = 0x7F0A9034u;
    // 7F0A9034: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A9038:
    ctx->pc = 0x7F0A9038u;
    // 7F0A9038: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A903C:
    ctx->pc = 0x7F0A903Cu;
    // 7F0A903C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9040:
    ctx->pc = 0x7F0A9040u;
    // 7F0A9040: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9044:
    ctx->pc = 0x7F0A9044u;
    ctx->downcount -= 18;
    // 7F0A9044: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9048:
    ctx->pc = 0x7F0A9048u;
    // 7F0A9048: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A904C:
    ctx->pc = 0x7F0A904Cu;
    // 7F0A904C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9050:
    ctx->pc = 0x7F0A9050u;
    // 7F0A9050: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A9054:
    ctx->pc = 0x7F0A9054u;
    // 7F0A9054: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9058:
    ctx->pc = 0x7F0A9058u;
    // 7F0A9058: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0A905C:
    ctx->pc = 0x7F0A905Cu;
    // 7F0A905C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0A9060:
    ctx->pc = 0x7F0A9060u;
    // 7F0A9060: lis     r30, 512
    ctx->gpr[30] = ((u32)(s32)(512) << 16);

label_7F0A9064:
    ctx->downcount -= 5;
    // 7F0A9064: addi    r29, r31, 704
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(704);

label_7F0A9068:
    // 7F0A9068: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0A906C:
    // 7F0A906C: add   r29, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F0A9070:
    // 7F0A9070: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9074:
    // 7F0A9074: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0A9078u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0A9078:
    ctx->downcount -= 3;
    // 7F0A9078: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A907C:
    // 7F0A907C: addi    r4, r30, 19
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(19);

label_7F0A9080:
    // 7F0A9080: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0A9084u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0A9084:
    ctx->downcount -= 4;
    // 7F0A9084: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F0A9088:
    // 7F0A9088: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F0A908C:
    // 7F0A908C: cmpwi   r28, 13
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A9090:
    // 7F0A9090: bc    12, 0, 0x7F0A9064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9064u;
                return;
            }
            goto label_7F0A9064;
        }
    }

label_7F0A9094:
    ctx->pc = 0x7F0A9094u;
    ctx->downcount -= 16;
    // 7F0A9094: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A9098:
    ctx->pc = 0x7F0A9098u;
    // 7F0A9098: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A909C:
    ctx->pc = 0x7F0A909Cu;
    // 7F0A909C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A90A0:
    ctx->pc = 0x7F0A90A0u;
    // 7F0A90A0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A90A4:
    ctx->pc = 0x7F0A90A4u;
    // 7F0A90A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A90A8:
    ctx->pc = 0x7F0A90A8u;
    ctx->downcount -= 18;
    // 7F0A90A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A90AC:
    ctx->pc = 0x7F0A90ACu;
    // 7F0A90AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A90B0:
    ctx->pc = 0x7F0A90B0u;
    // 7F0A90B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A90B4:
    ctx->pc = 0x7F0A90B4u;
    // 7F0A90B4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A90B8:
    ctx->pc = 0x7F0A90B8u;
    // 7F0A90B8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A90BC:
    ctx->pc = 0x7F0A90BCu;
    // 7F0A90BC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0A90C0:
    ctx->pc = 0x7F0A90C0u;
    // 7F0A90C0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0A90C4:
    ctx->pc = 0x7F0A90C4u;
    // 7F0A90C4: lis     r30, 520
    ctx->gpr[30] = ((u32)(s32)(520) << 16);

label_7F0A90C8:
    ctx->downcount -= 5;
    // 7F0A90C8: addi    r29, r31, 704
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(704);

label_7F0A90CC:
    // 7F0A90CC: addi    r4, r30, 19
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(19);

label_7F0A90D0:
    // 7F0A90D0: add   r29, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F0A90D4:
    // 7F0A90D4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A90D8:
    // 7F0A90D8: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0A90DCu;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0A90DC:
    ctx->downcount -= 3;
    // 7F0A90DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A90E0:
    // 7F0A90E0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0A90E4:
    // 7F0A90E4: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0A90E8u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0A90E8:
    ctx->downcount -= 4;
    // 7F0A90E8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F0A90EC:
    // 7F0A90EC: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F0A90F0:
    // 7F0A90F0: cmpwi   r28, 13
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A90F4:
    // 7F0A90F4: bc    12, 0, 0x7F0A90C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A90C8u;
                return;
            }
            goto label_7F0A90C8;
        }
    }

label_7F0A90F8:
    ctx->pc = 0x7F0A90F8u;
    ctx->downcount -= 16;
    // 7F0A90F8: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A90FC:
    ctx->pc = 0x7F0A90FCu;
    // 7F0A90FC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9100:
    ctx->pc = 0x7F0A9100u;
    // 7F0A9100: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9104:
    ctx->pc = 0x7F0A9104u;
    // 7F0A9104: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A9108:
    ctx->pc = 0x7F0A9108u;
    // 7F0A9108: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A910C:
    ctx->pc = 0x7F0A910Cu;
    ctx->downcount -= 8;
    // 7F0A910C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9110:
    ctx->pc = 0x7F0A9110u;
    // 7F0A9110: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9114:
    ctx->pc = 0x7F0A9114u;
    // 7F0A9114: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0A9118:
    ctx->pc = 0x7F0A9118u;
    // 7F0A9118: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A911C:
    ctx->pc = 0x7F0A911Cu;
    // 7F0A911C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A9120:
    ctx->pc = 0x7F0A9120u;
    // 7F0A9120: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9124:
    ctx->pc = 0x7F0A9124u;
    // 7F0A9124: addi    r3, r31, 3392
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3392);

label_7F0A9128:
    ctx->pc = 0x7F0A9128u;
    // 7F0A9128: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0A912Cu;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0A912C:
    ctx->pc = 0x7F0A912Cu;
    ctx->downcount -= 4;
    // 7F0A912C: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F0A9130:
    ctx->pc = 0x7F0A9130u;
    // 7F0A9130: addi    r3, r31, 3392
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3392);

label_7F0A9134:
    ctx->pc = 0x7F0A9134u;
    // 7F0A9134: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F0A9138:
    ctx->pc = 0x7F0A9138u;
    // 7F0A9138: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0A913Cu;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0A913C:
    ctx->pc = 0x7F0A913Cu;
    ctx->downcount -= 6;
    // 7F0A913C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9140:
    ctx->pc = 0x7F0A9140u;
    // 7F0A9140: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A9144:
    ctx->pc = 0x7F0A9144u;
    // 7F0A9144: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9148:
    ctx->pc = 0x7F0A9148u;
    // 7F0A9148: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A914C:
    ctx->pc = 0x7F0A914Cu;
    // 7F0A914C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9150:
    ctx->pc = 0x7F0A9150u;
    ctx->downcount -= 18;
    // 7F0A9150: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9154:
    ctx->pc = 0x7F0A9154u;
    // 7F0A9154: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9158:
    ctx->pc = 0x7F0A9158u;
    // 7F0A9158: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A915C:
    ctx->pc = 0x7F0A915Cu;
    // 7F0A915C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A9160:
    ctx->pc = 0x7F0A9160u;
    // 7F0A9160: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9164:
    ctx->pc = 0x7F0A9164u;
    // 7F0A9164: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0A9168:
    ctx->pc = 0x7F0A9168u;
    // 7F0A9168: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0A916C:
    ctx->pc = 0x7F0A916Cu;
    // 7F0A916C: lis     r30, 512
    ctx->gpr[30] = ((u32)(s32)(512) << 16);

label_7F0A9170:
    ctx->downcount -= 5;
    // 7F0A9170: addi    r29, r31, 704
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(704);

label_7F0A9174:
    // 7F0A9174: addi    r4, r30, 19
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(19);

label_7F0A9178:
    // 7F0A9178: add   r29, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F0A917C:
    // 7F0A917C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9180:
    // 7F0A9180: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0A9184u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0A9184:
    ctx->downcount -= 3;
    // 7F0A9184: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9188:
    // 7F0A9188: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0A918C:
    // 7F0A918C: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0A9190u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0A9190:
    ctx->downcount -= 4;
    // 7F0A9190: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_7F0A9194:
    // 7F0A9194: addi    r31, r31, 192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(192);

label_7F0A9198:
    // 7F0A9198: cmpwi   r28, 13
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A919C:
    // 7F0A919C: bc    12, 0, 0x7F0A9170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9170u;
                return;
            }
            goto label_7F0A9170;
        }
    }

label_7F0A91A0:
    ctx->pc = 0x7F0A91A0u;
    ctx->downcount -= 16;
    // 7F0A91A0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A91A4:
    ctx->pc = 0x7F0A91A4u;
    // 7F0A91A4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A91A8:
    ctx->pc = 0x7F0A91A8u;
    // 7F0A91A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A91AC:
    ctx->pc = 0x7F0A91ACu;
    // 7F0A91AC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A91B0:
    ctx->pc = 0x7F0A91B0u;
    // 7F0A91B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A91B4:
    ctx->pc = 0x7F0A91B4u;
    ctx->downcount -= 9;
    // 7F0A91B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A91B8:
    ctx->pc = 0x7F0A91B8u;
    // 7F0A91B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A91BC:
    ctx->pc = 0x7F0A91BCu;
    // 7F0A91BC: lis     r4, 512
    ctx->gpr[4] = ((u32)(s32)(512) << 16);

label_7F0A91C0:
    ctx->pc = 0x7F0A91C0u;
    // 7F0A91C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A91C4:
    ctx->pc = 0x7F0A91C4u;
    // 7F0A91C4: addi    r4, r4, 128
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(128);

label_7F0A91C8:
    ctx->pc = 0x7F0A91C8u;
    // 7F0A91C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A91CC:
    ctx->pc = 0x7F0A91CCu;
    // 7F0A91CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A91D0:
    ctx->pc = 0x7F0A91D0u;
    // 7F0A91D0: addi    r3, r31, 3392
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3392);

label_7F0A91D4:
    ctx->pc = 0x7F0A91D4u;
    // 7F0A91D4: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0A91D8u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0A91D8:
    ctx->pc = 0x7F0A91D8u;
    ctx->downcount -= 3;
    // 7F0A91D8: addi    r3, r31, 3392
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3392);

label_7F0A91DC:
    ctx->pc = 0x7F0A91DCu;
    // 7F0A91DC: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0A91E0:
    ctx->pc = 0x7F0A91E0u;
    // 7F0A91E0: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0A91E4u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0A91E4:
    ctx->pc = 0x7F0A91E4u;
    ctx->downcount -= 6;
    // 7F0A91E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A91E8:
    ctx->pc = 0x7F0A91E8u;
    // 7F0A91E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A91EC:
    ctx->pc = 0x7F0A91ECu;
    // 7F0A91EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A91F0:
    ctx->pc = 0x7F0A91F0u;
    // 7F0A91F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A91F4:
    ctx->pc = 0x7F0A91F4u;
    // 7F0A91F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A91F8:
    ctx->pc = 0x7F0A91F8u;
    ctx->downcount -= 9;
    // 7F0A91F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A91FC:
    ctx->pc = 0x7F0A91FCu;
    // 7F0A91FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9200:
    ctx->pc = 0x7F0A9200u;
    // 7F0A9200: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0A9204:
    ctx->pc = 0x7F0A9204u;
    // 7F0A9204: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9208:
    ctx->pc = 0x7F0A9208u;
    // 7F0A9208: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A920C:
    ctx->pc = 0x7F0A920Cu;
    // 7F0A920C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9210:
    ctx->pc = 0x7F0A9210u;
    // 7F0A9210: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9214:
    ctx->pc = 0x7F0A9214u;
    // 7F0A9214: stw     r31, 29512(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(29512);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A9218:
    ctx->pc = 0x7F0A9218u;
    // 7F0A9218: bl      0x7F023170
    {
            ctx->lr = 0x7F0A921Cu;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F0A921C:
    ctx->pc = 0x7F0A921Cu;
    ctx->downcount -= 2;
    // 7F0A921C: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0A9220:
    ctx->pc = 0x7F0A9220u;
    // 7F0A9220: bl      0x7F0427FC
    {
            ctx->lr = 0x7F0A9224u;
            ctx->pc = 0x7F0427FCu;
            return;
    }

label_7F0A9224:
    ctx->pc = 0x7F0A9224u;
    ctx->downcount -= 2;
    // 7F0A9224: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9228:
    ctx->pc = 0x7F0A9228u;
    // 7F0A9228: bl      0x7F0A8D30
    {
            ctx->lr = 0x7F0A922Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8D30u;
                return;
            }
            goto label_7F0A8D30;
    }

label_7F0A922C:
    ctx->pc = 0x7F0A922Cu;
    ctx->downcount -= 8;
    // 7F0A922C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A9230:
    ctx->pc = 0x7F0A9230u;
    // 7F0A9230: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9234:
    ctx->pc = 0x7F0A9234u;
    // 7F0A9234: stw     r0, 3884(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9238:
    ctx->pc = 0x7F0A9238u;
    // 7F0A9238: addi    r4, r31, 528
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(528);

label_7F0A923C:
    ctx->pc = 0x7F0A923Cu;
    // 7F0A923C: stw     r0, 3696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3696);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9240:
    ctx->pc = 0x7F0A9240u;
    // 7F0A9240: lwz     r5, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A9244:
    ctx->pc = 0x7F0A9244u;
    // 7F0A9244: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F0A9248:
    ctx->pc = 0x7F0A9248u;
    // 7F0A9248: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F0A924Cu;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F0A924C:
    ctx->pc = 0x7F0A924Cu;
    ctx->downcount -= 7;
    // 7F0A924C: lwz     r4, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A9250:
    ctx->pc = 0x7F0A9250u;
    // 7F0A9250: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_7F0A9254:
    ctx->pc = 0x7F0A9254u;
    // 7F0A9254: lwz     r3, 660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9258:
    ctx->pc = 0x7F0A9258u;
    // 7F0A9258: addi    r4, r4, 152
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(152);

label_7F0A925C:
    ctx->pc = 0x7F0A925Cu;
    // 7F0A925C: addi    r5, r3, 152
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(152);

label_7F0A9260:
    ctx->pc = 0x7F0A9260u;
    // 7F0A9260: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0A9264:
    loop_7F0A9264(ctx);
    if (ctx->pc == 0x7F0A9278u) goto label_7F0A9278;
    return;
label_7F0A9268:
    ctx->pc = 0x7F0A9268u;
    // 7F0A9268: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F0A926C:
    ctx->pc = 0x7F0A926Cu;
    // 7F0A926C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9270:
    ctx->pc = 0x7F0A9270u;
    // 7F0A9270: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F0A9274:
    // 7F0A9274: bc    16, 0, 0x7F0A9264
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9264u;
                return;
            }
            goto label_7F0A9264;
        }
    }

label_7F0A9278:
    ctx->pc = 0x7F0A9278u;
    ctx->downcount -= 4;
    // 7F0A9278: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A927C:
    ctx->pc = 0x7F0A927Cu;
    // 7F0A927C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9280:
    ctx->pc = 0x7F0A9280u;
    // 7F0A9280: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9284:
    ctx->pc = 0x7F0A9284u;
    // 7F0A9284: bl      0x7F0A9A68
    {
            ctx->lr = 0x7F0A9288u;
            goto label_7F0A9A68;
    }

label_7F0A9288:
    ctx->pc = 0x7F0A9288u;
    ctx->downcount -= 5;
    // 7F0A9288: addi    r3, r31, 704
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(704);

label_7F0A928C:
    ctx->pc = 0x7F0A928Cu;
    // 7F0A928C: addi    r4, r31, 3392
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3392);

label_7F0A9290:
    ctx->pc = 0x7F0A9290u;
    // 7F0A9290: addi    r5, r31, 448
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0A9294:
    ctx->pc = 0x7F0A9294u;
    // 7F0A9294: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9298:
    ctx->pc = 0x7F0A9298u;
    // 7F0A9298: bl      0x7F0B1F28
    {
            ctx->lr = 0x7F0A929Cu;
            ctx->pc = 0x7F0B1F28u;
            return;
    }

label_7F0A929C:
    ctx->pc = 0x7F0A929Cu;
    ctx->downcount -= 4;
    // 7F0A929C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A92A0:
    ctx->pc = 0x7F0A92A0u;
    // 7F0A92A0: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A92A4:
    ctx->pc = 0x7F0A92A4u;
    // 7F0A92A4: cmpwi   r0, 7
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

label_7F0A92A8:
    ctx->pc = 0x7F0A92A8u;
    // 7F0A92A8: bc    12, 0, 0x7F0A92B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A92B8;
        }
    }

label_7F0A92AC:
    ctx->pc = 0x7F0A92ACu;
    ctx->downcount -= 3;
    // 7F0A92AC: lwz     r3, 3920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3920);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A92B0:
    ctx->pc = 0x7F0A92B0u;
    // 7F0A92B0: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F0A92B4:
    ctx->pc = 0x7F0A92B4u;
    // 7F0A92B4: stw     r0, 3920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3920);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A92B8:
    ctx->pc = 0x7F0A92B8u;
    ctx->downcount -= 6;
    // 7F0A92B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A92BC:
    ctx->pc = 0x7F0A92BCu;
    // 7F0A92BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A92C0:
    ctx->pc = 0x7F0A92C0u;
    // 7F0A92C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A92C4:
    ctx->pc = 0x7F0A92C4u;
    // 7F0A92C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A92C8:
    ctx->pc = 0x7F0A92C8u;
    // 7F0A92C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A92CC:
    ctx->pc = 0x7F0A92CCu;
    ctx->downcount -= 8;
    // 7F0A92CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A92D0:
    ctx->pc = 0x7F0A92D0u;
    // 7F0A92D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A92D4:
    ctx->pc = 0x7F0A92D4u;
    // 7F0A92D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A92D8:
    ctx->pc = 0x7F0A92D8u;
    // 7F0A92D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A92DC:
    ctx->pc = 0x7F0A92DCu;
    // 7F0A92DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A92E0:
    ctx->pc = 0x7F0A92E0u;
    // 7F0A92E0: lwz     r3, 3940(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3940);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A92E4:
    ctx->pc = 0x7F0A92E4u;
    // 7F0A92E4: cmplwi  r3, 0x0000
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

label_7F0A92E8:
    ctx->pc = 0x7F0A92E8u;
    // 7F0A92E8: bc    12, 2, 0x7F0A92F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A92F0;
        }
    }

label_7F0A92EC:
    ctx->pc = 0x7F0A92ECu;
    ctx->downcount -= 1;
    // 7F0A92EC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0A92F0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0A92F0:
    ctx->pc = 0x7F0A92F0u;
    ctx->downcount -= 3;
    // 7F0A92F0: lwz     r3, 3944(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A92F4:
    ctx->pc = 0x7F0A92F4u;
    // 7F0A92F4: cmplwi  r3, 0x0000
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

label_7F0A92F8:
    ctx->pc = 0x7F0A92F8u;
    // 7F0A92F8: bc    12, 2, 0x7F0A9300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9300;
        }
    }

label_7F0A92FC:
    ctx->pc = 0x7F0A92FCu;
    ctx->downcount -= 1;
    // 7F0A92FC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0A9300u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0A9300:
    ctx->pc = 0x7F0A9300u;
    ctx->downcount -= 2;
    // 7F0A9300: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9304:
    ctx->pc = 0x7F0A9304u;
    // 7F0A9304: bl      0x7F023E10
    {
            ctx->lr = 0x7F0A9308u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F0A9308:
    ctx->pc = 0x7F0A9308u;
    ctx->downcount -= 2;
    // 7F0A9308: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0A930C:
    ctx->pc = 0x7F0A930Cu;
    // 7F0A930C: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0A9310u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0A9310:
    ctx->pc = 0x7F0A9310u;
    ctx->downcount -= 2;
    // 7F0A9310: addi    r3, r31, 660
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(660);

label_7F0A9314:
    ctx->pc = 0x7F0A9314u;
    // 7F0A9314: bl      0x7F042AAC
    {
            ctx->lr = 0x7F0A9318u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F0A9318:
    ctx->pc = 0x7F0A9318u;
    ctx->downcount -= 2;
    // 7F0A9318: addi    r3, r31, 492
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(492);

label_7F0A931C:
    ctx->pc = 0x7F0A931Cu;
    // 7F0A931C: bl      0x7F012144
    {
            ctx->lr = 0x7F0A9320u;
            ctx->pc = 0x7F012144u;
            return;
    }

label_7F0A9320:
    ctx->pc = 0x7F0A9320u;
    ctx->downcount -= 2;
    // 7F0A9320: addi    r3, r31, 3392
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3392);

label_7F0A9324:
    ctx->pc = 0x7F0A9324u;
    // 7F0A9324: bl      0x7F0146B0
    {
            ctx->lr = 0x7F0A9328u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F0A9328:
    ctx->pc = 0x7F0A9328u;
    ctx->downcount -= 2;
    // 7F0A9328: addi    r3, r31, 704
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(704);

label_7F0A932C:
    ctx->pc = 0x7F0A932Cu;
    // 7F0A932C: bl      0x7F0B20E4
    {
            ctx->lr = 0x7F0A9330u;
            ctx->pc = 0x7F0B20E4u;
            return;
    }

label_7F0A9330:
    ctx->pc = 0x7F0A9330u;
    ctx->downcount -= 5;
    // 7F0A9330: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A9334:
    ctx->pc = 0x7F0A9334u;
    // 7F0A9334: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A9338:
    ctx->pc = 0x7F0A9338u;
    // 7F0A9338: stw     r0, 29512(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29512);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A933C:
    ctx->pc = 0x7F0A933Cu;
    // 7F0A933C: lwz     r3, 3888(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3888);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9340:
    ctx->pc = 0x7F0A9340u;
    // 7F0A9340: bl      0x7F2D23E8
    {
            ctx->lr = 0x7F0A9344u;
            ctx->pc = 0x7F2D23E8u;
            return;
    }

label_7F0A9344:
    ctx->pc = 0x7F0A9344u;
    ctx->downcount -= 6;
    // 7F0A9344: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9348:
    ctx->pc = 0x7F0A9348u;
    // 7F0A9348: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A934C:
    ctx->pc = 0x7F0A934Cu;
    // 7F0A934C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9350:
    ctx->pc = 0x7F0A9350u;
    // 7F0A9350: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9354:
    ctx->pc = 0x7F0A9354u;
    // 7F0A9354: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9358:
    ctx->pc = 0x7F0A9358u;
    ctx->downcount -= 62;
    // 7F0A9358: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A935C:
    ctx->pc = 0x7F0A935Cu;
    // 7F0A935C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9360:
    ctx->pc = 0x7F0A9360u;
    // 7F0A9360: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A9364:
    ctx->pc = 0x7F0A9364u;
    // 7F0A9364: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9368:
    ctx->pc = 0x7F0A9368u;
    // 7F0A9368: addi    r8, r4, -5344
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-5344);

label_7F0A936C:
    ctx->pc = 0x7F0A936Cu;
    // 7F0A936C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0A9370:
    ctx->pc = 0x7F0A9370u;
    // 7F0A9370: addi    r12, r1, 8
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A9374:
    ctx->pc = 0x7F0A9374u;
    // 7F0A9374: stmw     r27, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A9378:
    ctx->pc = 0x7F0A9378u;
    // 7F0A9378: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A937C:
    ctx->pc = 0x7F0A937Cu;
    // 7F0A937C: addi    r29, r4, -28964
    ctx->gpr[29] = ctx->gpr[4] + (u32)(s32)(-28964);

label_7F0A9380:
    ctx->pc = 0x7F0A9380u;
    // 7F0A9380: li      r27, 100
    ctx->gpr[27] = (u32)(s32)(100);

label_7F0A9384:
    ctx->pc = 0x7F0A9384u;
    // 7F0A9384: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0A9388:
    ctx->pc = 0x7F0A9388u;
    // 7F0A9388: addi    r28, r31, 3584
    ctx->gpr[28] = ctx->gpr[31] + (u32)(s32)(3584);

label_7F0A938C:
    ctx->pc = 0x7F0A938Cu;
    // 7F0A938C: addi    r30, r31, 704
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(704);

label_7F0A9390:
    ctx->pc = 0x7F0A9390u;
    // 7F0A9390: addi    r11, r31, 3680
    ctx->gpr[11] = ctx->gpr[31] + (u32)(s32)(3680);

label_7F0A9394:
    ctx->pc = 0x7F0A9394u;
    // 7F0A9394: addi    r10, r31, 48
    ctx->gpr[10] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9398:
    ctx->pc = 0x7F0A9398u;
    // 7F0A9398: addi    r9, r31, 448
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0A939C:
    ctx->pc = 0x7F0A939Cu;
    // 7F0A939C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0A93A0:
    ctx->pc = 0x7F0A93A0u;
    // 7F0A93A0: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0A93A4:
    ctx->pc = 0x7F0A93A4u;
    // 7F0A93A4: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0A93A8:
    ctx->pc = 0x7F0A93A8u;
    // 7F0A93A8: lwz     r5, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A93AC:
    ctx->pc = 0x7F0A93ACu;
    // 7F0A93AC: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A93B0:
    ctx->pc = 0x7F0A93B0u;
    // 7F0A93B0: li      r8, 3
    ctx->gpr[8] = (u32)(s32)(3);

label_7F0A93B4:
    ctx->pc = 0x7F0A93B4u;
    // 7F0A93B4: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0A93B8:
    ctx->pc = 0x7F0A93B8u;
    // 7F0A93B8: addi    r7, r31, 3392
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(3392);

label_7F0A93BC:
    ctx->pc = 0x7F0A93BCu;
    // 7F0A93BC: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A93C0:
    ctx->pc = 0x7F0A93C0u;
    // 7F0A93C0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F0A93C4:
    ctx->pc = 0x7F0A93C4u;
    // 7F0A93C4: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0A93C8:
    ctx->pc = 0x7F0A93C8u;
    // 7F0A93C8: addi    r5, r3, 8704
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(8704);

label_7F0A93CC:
    ctx->pc = 0x7F0A93CCu;
    // 7F0A93CC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0A93D0:
    ctx->pc = 0x7F0A93D0u;
    // 7F0A93D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A93D4:
    ctx->pc = 0x7F0A93D4u;
    // 7F0A93D4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A93D8:
    ctx->pc = 0x7F0A93D8u;
    // 7F0A93D8: stw     r27, 3844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3844);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F0A93DC:
    ctx->pc = 0x7F0A93DCu;
    // 7F0A93DC: stw     r27, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F0A93E0:
    ctx->pc = 0x7F0A93E0u;
    // 7F0A93E0: stw     r31, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A93E4:
    ctx->pc = 0x7F0A93E4u;
    // 7F0A93E4: stw     r28, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F0A93E8:
    ctx->pc = 0x7F0A93E8u;
    // 7F0A93E8: stw     r29, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0A93EC:
    ctx->pc = 0x7F0A93ECu;
    // 7F0A93EC: stw     r30, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0A93F0:
    ctx->pc = 0x7F0A93F0u;
    // 7F0A93F0: stw     r12, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F0A93F4:
    ctx->pc = 0x7F0A93F4u;
    // 7F0A93F4: stw     r27, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F0A93F8:
    ctx->pc = 0x7F0A93F8u;
    // 7F0A93F8: stw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_7F0A93FC:
    ctx->pc = 0x7F0A93FCu;
    // 7F0A93FC: stw     r11, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F0A9400:
    ctx->pc = 0x7F0A9400u;
    // 7F0A9400: stw     r10, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F0A9404:
    ctx->pc = 0x7F0A9404u;
    // 7F0A9404: stw     r9, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0A9408:
    ctx->pc = 0x7F0A9408u;
    // 7F0A9408: stw     r8, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F0A940C:
    ctx->pc = 0x7F0A940Cu;
    // 7F0A940C: stw     r7, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F0A9410:
    ctx->pc = 0x7F0A9410u;
    // 7F0A9410: stw     r6, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A9414:
    ctx->pc = 0x7F0A9414u;
    // 7F0A9414: stw     r5, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0A9418:
    ctx->pc = 0x7F0A9418u;
    // 7F0A9418: stw     r0, 3696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3696);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A941C:
    ctx->pc = 0x7F0A941Cu;
    // 7F0A941C: stw     r0, 3852(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9420:
    ctx->pc = 0x7F0A9420u;
    // 7F0A9420: stw     r0, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9424:
    ctx->pc = 0x7F0A9424u;
    // 7F0A9424: bl      0x7F0B1A5C
    {
            ctx->lr = 0x7F0A9428u;
            ctx->pc = 0x7F0B1A5Cu;
            return;
    }

label_7F0A9428:
    ctx->pc = 0x7F0A9428u;
    ctx->downcount -= 19;
    // 7F0A9428: lis     r3, 4
    ctx->gpr[3] = ((u32)(s32)(4) << 16);

label_7F0A942C:
    ctx->pc = 0x7F0A942Cu;
    // 7F0A942C: addi    r0, r3, 22417
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(22417);

label_7F0A9430:
    ctx->pc = 0x7F0A9430u;
    // 7F0A9430: stw     r0, 3580(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3580);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9434:
    ctx->pc = 0x7F0A9434u;
    // 7F0A9434: lmw     r27, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A9438:
    ctx->pc = 0x7F0A9438u;
    // 7F0A9438: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A943C:
    ctx->pc = 0x7F0A943Cu;
    // 7F0A943C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9440:
    ctx->pc = 0x7F0A9440u;
    // 7F0A9440: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F0A9444:
    ctx->pc = 0x7F0A9444u;
    // 7F0A9444: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9448:
    ctx->pc = 0x7F0A9448u;
    ctx->downcount -= 10;
    // 7F0A9448: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A944C:
    ctx->pc = 0x7F0A944Cu;
    // 7F0A944C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9450:
    ctx->pc = 0x7F0A9450u;
    // 7F0A9450: li      r5, 11
    ctx->gpr[5] = (u32)(s32)(11);

label_7F0A9454:
    ctx->pc = 0x7F0A9454u;
    // 7F0A9454: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9458:
    ctx->pc = 0x7F0A9458u;
    // 7F0A9458: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A945C:
    ctx->pc = 0x7F0A945Cu;
    // 7F0A945C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9460:
    ctx->pc = 0x7F0A9460u;
    // 7F0A9460: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9464:
    ctx->pc = 0x7F0A9464u;
    // 7F0A9464: lwz     r6, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0A9468:
    ctx->pc = 0x7F0A9468u;
    // 7F0A9468: addi    r3, r31, 492
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(492);

label_7F0A946C:
    ctx->pc = 0x7F0A946Cu;
    // 7F0A946C: bl      0x7F0120F4
    {
            ctx->lr = 0x7F0A9470u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F0A9470:
    ctx->pc = 0x7F0A9470u;
    ctx->downcount -= 7;
    // 7F0A9470: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A9474:
    ctx->pc = 0x7F0A9474u;
    // 7F0A9474: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A9478:
    ctx->pc = 0x7F0A9478u;
    // 7F0A9478: addi    r5, r3, -5328
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5328);

label_7F0A947C:
    ctx->pc = 0x7F0A947Cu;
    // 7F0A947C: lfs     f2, -5324(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0A947Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5324);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0A9480:
    ctx->pc = 0x7F0A9480u;
    // 7F0A9480: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9480u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A9484:
    ctx->pc = 0x7F0A9484u;
    // 7F0A9484: addi    r3, r31, 492
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(492);

label_7F0A9488:
    ctx->pc = 0x7F0A9488u;
    // 7F0A9488: bl      0x7F03C1DC
    {
            ctx->lr = 0x7F0A948Cu;
            ctx->pc = 0x7F03C1DCu;
            return;
    }

label_7F0A948C:
    ctx->pc = 0x7F0A948Cu;
    ctx->downcount -= 8;
    // 7F0A948C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A9490:
    ctx->pc = 0x7F0A9490u;
    // 7F0A9490: lha     r4, 82(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(82);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A9494:
    ctx->pc = 0x7F0A9494u;
    // 7F0A9494: addi    r5, r3, -5320
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5320);

label_7F0A9498:
    ctx->pc = 0x7F0A9498u;
    // 7F0A9498: addi    r3, r31, 492
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(492);

label_7F0A949C:
    ctx->pc = 0x7F0A949Cu;
    // 7F0A949C: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A949Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A94A0:
    ctx->pc = 0x7F0A94A0u;
    // 7F0A94A0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F0A94A4:
    ctx->pc = 0x7F0A94A4u;
    // 7F0A94A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A94A8:
    ctx->pc = 0x7F0A94A8u;
    // 7F0A94A8: bl      0x7F041A9C
    {
            ctx->lr = 0x7F0A94ACu;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F0A94AC:
    ctx->pc = 0x7F0A94ACu;
    ctx->downcount -= 6;
    // 7F0A94AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A94B0:
    ctx->pc = 0x7F0A94B0u;
    // 7F0A94B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A94B4:
    ctx->pc = 0x7F0A94B4u;
    // 7F0A94B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A94B8:
    ctx->pc = 0x7F0A94B8u;
    // 7F0A94B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A94BC:
    ctx->pc = 0x7F0A94BCu;
    // 7F0A94BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A94C0:
    ctx->pc = 0x7F0A94C0u;
    ctx->downcount -= 10;
    // 7F0A94C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A94C4:
    ctx->pc = 0x7F0A94C4u;
    // 7F0A94C4: li      r5, 6014
    ctx->gpr[5] = (u32)(s32)(6014);

label_7F0A94C8:
    ctx->pc = 0x7F0A94C8u;
    // 7F0A94C8: stw     r6, 3700(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3700);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A94CC:
    ctx->pc = 0x7F0A94CCu;
    // 7F0A94CC: li      r4, 1826
    ctx->gpr[4] = (u32)(s32)(1826);

label_7F0A94D0:
    ctx->pc = 0x7F0A94D0u;
    // 7F0A94D0: li      r0, 1827
    ctx->gpr[0] = (u32)(s32)(1827);

label_7F0A94D4:
    ctx->pc = 0x7F0A94D4u;
    // 7F0A94D4: stw     r5, 3704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3704);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0A94D8:
    ctx->pc = 0x7F0A94D8u;
    // 7F0A94D8: stw     r6, 3708(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3708);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A94DC:
    ctx->pc = 0x7F0A94DCu;
    // 7F0A94DC: stw     r4, 3712(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3712);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0A94E0:
    ctx->pc = 0x7F0A94E0u;
    // 7F0A94E0: stw     r0, 3716(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3716);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A94E4:
    ctx->pc = 0x7F0A94E4u;
    // 7F0A94E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A94E8:
    ctx->pc = 0x7F0A94E8u;
    ctx->downcount -= 8;
    // 7F0A94E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A94EC:
    ctx->pc = 0x7F0A94ECu;
    // 7F0A94EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A94F0:
    ctx->pc = 0x7F0A94F0u;
    // 7F0A94F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A94F4:
    ctx->pc = 0x7F0A94F4u;
    // 7F0A94F4: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A94F8:
    ctx->pc = 0x7F0A94F8u;
    // 7F0A94F8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A94FC:
    ctx->pc = 0x7F0A94FCu;
    // 7F0A94FC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A9500:
    ctx->pc = 0x7F0A9500u;
    // 7F0A9500: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0A9504:
    ctx->pc = 0x7F0A9504u;
    // 7F0A9504: bl      0x7F3CC634
    {
            ctx->lr = 0x7F0A9508u;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F0A9508:
    ctx->pc = 0x7F0A9508u;
    ctx->downcount -= 5;
    // 7F0A9508: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A950C:
    ctx->pc = 0x7F0A950Cu;
    // 7F0A950C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A9510:
    ctx->pc = 0x7F0A9510u;
    // 7F0A9510: sth     r0, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A9514:
    ctx->pc = 0x7F0A9514u;
    // 7F0A9514: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9518:
    ctx->pc = 0x7F0A9518u;
    // 7F0A9518: bl      0x7F3CC990
    {
            ctx->lr = 0x7F0A951Cu;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F0A951C:
    ctx->pc = 0x7F0A951Cu;
    ctx->downcount -= 2;
    // 7F0A951C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9520:
    ctx->pc = 0x7F0A9520u;
    // 7F0A9520: bl      0x7F3CC708
    {
            ctx->lr = 0x7F0A9524u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F0A9524:
    ctx->pc = 0x7F0A9524u;
    ctx->downcount -= 6;
    // 7F0A9524: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9528:
    ctx->pc = 0x7F0A9528u;
    // 7F0A9528: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0A952C:
    ctx->pc = 0x7F0A952Cu;
    // 7F0A952C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9530:
    ctx->pc = 0x7F0A9530u;
    // 7F0A9530: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A9534:
    ctx->pc = 0x7F0A9534u;
    // 7F0A9534: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9538:
    ctx->pc = 0x7F0A9538u;
    ctx->downcount -= 21;
    // 7F0A9538: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A953C:
    ctx->pc = 0x7F0A953Cu;
    // 7F0A953C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9540:
    ctx->pc = 0x7F0A9540u;
    // 7F0A9540: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A9544:
    ctx->pc = 0x7F0A9544u;
    // 7F0A9544: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9548:
    ctx->pc = 0x7F0A9548u;
    // 7F0A9548: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A954C:
    ctx->pc = 0x7F0A954Cu;
    // 7F0A954C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9550:
    ctx->pc = 0x7F0A9550u;
    // 7F0A9550: addi    r29, r30, 48
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0A9554:
    ctx->pc = 0x7F0A9554u;
    // 7F0A9554: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9558:
    ctx->pc = 0x7F0A9558u;
    // 7F0A9558: addi    r31, r30, 448
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0A955C:
    ctx->pc = 0x7F0A955Cu;
    // 7F0A955C: addi    r28, r30, 660
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(660);

label_7F0A9560:
    ctx->pc = 0x7F0A9560u;
    // 7F0A9560: bl      0x7F022FB4
    {
            ctx->lr = 0x7F0A9564u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F0A9564:
    ctx->pc = 0x7F0A9564u;
    ctx->downcount -= 2;
    // 7F0A9564: cmpwi   r3, 0
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

label_7F0A9568:
    ctx->pc = 0x7F0A9568u;
    // 7F0A9568: bc    4, 0, 0x7F0A9574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9574;
        }
    }

label_7F0A956C:
    ctx->pc = 0x7F0A956Cu;
    ctx->downcount -= 2;
    // 7F0A956C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0A9570:
    ctx->pc = 0x7F0A9570u;
    // 7F0A9570: b       0x7F0A9870
    {
            goto label_7F0A9870;
    }

label_7F0A9574:
    ctx->pc = 0x7F0A9574u;
    ctx->downcount -= 9;
    // 7F0A9574: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A9578:
    ctx->pc = 0x7F0A9578u;
    // 7F0A9578: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A957C:
    ctx->pc = 0x7F0A957Cu;
    // 7F0A957C: addi    r5, r4, -5316
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5316);

label_7F0A9580:
    ctx->pc = 0x7F0A9580u;
    // 7F0A9580: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F0A9584:
    ctx->pc = 0x7F0A9584u;
    // 7F0A9584: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9584u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9588:
    ctx->pc = 0x7F0A9588u;
    // 7F0A9588: li      r5, 450
    ctx->gpr[5] = (u32)(s32)(450);

label_7F0A958C:
    ctx->pc = 0x7F0A958Cu;
    // 7F0A958C: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F0A9590:
    ctx->pc = 0x7F0A9590u;
    // 7F0A9590: stfs     f0, 56(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9590u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9594:
    ctx->pc = 0x7F0A9594u;
    // 7F0A9594: bl      0x7F023F7C
    {
            ctx->lr = 0x7F0A9598u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F0A9598:
    ctx->pc = 0x7F0A9598u;
    ctx->downcount -= 6;
    // 7F0A9598: lhz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0A959C:
    ctx->pc = 0x7F0A959Cu;
    // 7F0A959C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A95A0:
    ctx->pc = 0x7F0A95A0u;
    // 7F0A95A0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0A95A4:
    ctx->pc = 0x7F0A95A4u;
    // 7F0A95A4: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F0A95A8:
    ctx->pc = 0x7F0A95A8u;
    // 7F0A95A8: sth     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A95AC:
    ctx->pc = 0x7F0A95ACu;
    // 7F0A95AC: bl      0x7F0688B0
    {
            ctx->lr = 0x7F0A95B0u;
            ctx->pc = 0x7F0688B0u;
            return;
    }

label_7F0A95B0:
    ctx->pc = 0x7F0A95B0u;
    ctx->downcount -= 4;
    // 7F0A95B0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A95B4:
    ctx->pc = 0x7F0A95B4u;
    // 7F0A95B4: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F0A95B8:
    ctx->pc = 0x7F0A95B8u;
    // 7F0A95B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0A95BC:
    ctx->pc = 0x7F0A95BCu;
    // 7F0A95BC: bl      0x7F023FC0
    {
            ctx->lr = 0x7F0A95C0u;
            ctx->pc = 0x7F023FC0u;
            return;
    }

label_7F0A95C0:
    ctx->pc = 0x7F0A95C0u;
    ctx->downcount -= 2;
    // 7F0A95C0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A95C4:
    ctx->pc = 0x7F0A95C4u;
    // 7F0A95C4: bl      0x7F023FDC
    {
            ctx->lr = 0x7F0A95C8u;
            ctx->pc = 0x7F023FDCu;
            return;
    }

label_7F0A95C8:
    ctx->pc = 0x7F0A95C8u;
    ctx->downcount -= 2;
    // 7F0A95C8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A95CC:
    ctx->pc = 0x7F0A95CCu;
    // 7F0A95CC: bl      0x7F023FCC
    {
            ctx->lr = 0x7F0A95D0u;
            ctx->pc = 0x7F023FCCu;
            return;
    }

label_7F0A95D0:
    ctx->pc = 0x7F0A95D0u;
    ctx->downcount -= 2;
    // 7F0A95D0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A95D4:
    ctx->pc = 0x7F0A95D4u;
    // 7F0A95D4: bl      0x7F023FEC
    {
            ctx->lr = 0x7F0A95D8u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F0A95D8:
    ctx->pc = 0x7F0A95D8u;
    ctx->downcount -= 6;
    // 7F0A95D8: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0A95DC:
    ctx->pc = 0x7F0A95DCu;
    // 7F0A95DC: lis     r5, 256
    ctx->gpr[5] = ((u32)(s32)(256) << 16);

label_7F0A95E0:
    ctx->pc = 0x7F0A95E0u;
    // 7F0A95E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A95E4:
    ctx->pc = 0x7F0A95E4u;
    // 7F0A95E4: addi    r4, r4, 12450
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12450);

label_7F0A95E8:
    ctx->pc = 0x7F0A95E8u;
    // 7F0A95E8: addi    r5, r5, 290
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(290);

label_7F0A95EC:
    ctx->pc = 0x7F0A95ECu;
    // 7F0A95EC: bl      0x7F04272C
    {
            ctx->lr = 0x7F0A95F0u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0A95F0:
    ctx->pc = 0x7F0A95F0u;
    ctx->downcount -= 6;
    // 7F0A95F0: lis     r4, 11
    ctx->gpr[4] = ((u32)(s32)(11) << 16);

label_7F0A95F4:
    ctx->pc = 0x7F0A95F4u;
    // 7F0A95F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A95F8:
    ctx->pc = 0x7F0A95F8u;
    // 7F0A95F8: addi    r5, r4, -18886
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-18886);

label_7F0A95FC:
    ctx->pc = 0x7F0A95FCu;
    // 7F0A95FC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0A9600:
    ctx->pc = 0x7F0A9600u;
    // 7F0A9600: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F0A9604:
    ctx->pc = 0x7F0A9604u;
    // 7F0A9604: bl      0x7F042C2C
    {
            ctx->lr = 0x7F0A9608u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F0A9608:
    ctx->pc = 0x7F0A9608u;
    ctx->downcount -= 3;
    // 7F0A9608: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A960C:
    ctx->pc = 0x7F0A960Cu;
    // 7F0A960C: addi    r4, r29, 16
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(16);

label_7F0A9610:
    ctx->pc = 0x7F0A9610u;
    // 7F0A9610: bl      0x7F042B6C
    {
            ctx->lr = 0x7F0A9614u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F0A9614:
    ctx->pc = 0x7F0A9614u;
    ctx->downcount -= 3;
    // 7F0A9614: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9618:
    ctx->pc = 0x7F0A9618u;
    // 7F0A9618: addi    r4, r30, 528
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(528);

label_7F0A961C:
    ctx->pc = 0x7F0A961Cu;
    // 7F0A961C: bl      0x7F042B20
    {
            ctx->lr = 0x7F0A9620u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0A9620:
    ctx->pc = 0x7F0A9620u;
    ctx->downcount -= 9;
    // 7F0A9620: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0A9624:
    ctx->pc = 0x7F0A9624u;
    // 7F0A9624: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9628:
    ctx->pc = 0x7F0A9628u;
    // 7F0A9628: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0A962C:
    ctx->pc = 0x7F0A962Cu;
    // 7F0A962C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0A9630:
    ctx->pc = 0x7F0A9630u;
    // 7F0A9630: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0A9634:
    ctx->pc = 0x7F0A9634u;
    // 7F0A9634: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A9638:
    ctx->pc = 0x7F0A9638u;
    // 7F0A9638: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0A963C:
    ctx->pc = 0x7F0A963Cu;
    // 7F0A963C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0A9640:
    ctx->pc = 0x7F0A9640u;
    // 7F0A9640: bl      0x7F042C94
    {
            ctx->lr = 0x7F0A9644u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0A9644:
    ctx->pc = 0x7F0A9644u;
    ctx->downcount -= 3;
    // 7F0A9644: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9648:
    ctx->pc = 0x7F0A9648u;
    // 7F0A9648: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A964C:
    ctx->pc = 0x7F0A964Cu;
    // 7F0A964C: bl      0x7F023E5C
    {
            ctx->lr = 0x7F0A9650u;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F0A9650:
    ctx->pc = 0x7F0A9650u;
    ctx->downcount -= 5;
    // 7F0A9650: lis     r4, 97
    ctx->gpr[4] = ((u32)(s32)(97) << 16);

label_7F0A9654:
    ctx->pc = 0x7F0A9654u;
    // 7F0A9654: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0A9658:
    ctx->pc = 0x7F0A9658u;
    // 7F0A9658: addi    r4, r4, 29869
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29869);

label_7F0A965C:
    ctx->pc = 0x7F0A965Cu;
    // 7F0A965C: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F0A9660:
    ctx->pc = 0x7F0A9660u;
    // 7F0A9660: bl      0x7F04272C
    {
            ctx->lr = 0x7F0A9664u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F0A9664:
    ctx->pc = 0x7F0A9664u;
    ctx->downcount -= 3;
    // 7F0A9664: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0A9668:
    ctx->pc = 0x7F0A9668u;
    // 7F0A9668: addi    r4, r30, 528
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(528);

label_7F0A966C:
    ctx->pc = 0x7F0A966Cu;
    // 7F0A966C: bl      0x7F042B20
    {
            ctx->lr = 0x7F0A9670u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F0A9670:
    ctx->pc = 0x7F0A9670u;
    ctx->downcount -= 4;
    // 7F0A9670: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0A9674:
    ctx->pc = 0x7F0A9674u;
    // 7F0A9674: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9678:
    ctx->pc = 0x7F0A9678u;
    // 7F0A9678: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F0A967C:
    ctx->pc = 0x7F0A967Cu;
    // 7F0A967C: bl      0x7F042B74
    {
            ctx->lr = 0x7F0A9680u;
            ctx->pc = 0x7F042B74u;
            return;
    }

label_7F0A9680:
    ctx->pc = 0x7F0A9680u;
    ctx->downcount -= 3;
    // 7F0A9680: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9684:
    ctx->pc = 0x7F0A9684u;
    // 7F0A9684: lwz     r4, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A9688:
    ctx->pc = 0x7F0A9688u;
    // 7F0A9688: bl      0x7F3B0938
    {
            ctx->lr = 0x7F0A968Cu;
            ctx->pc = 0x7F3B0938u;
            return;
    }

label_7F0A968C:
    ctx->pc = 0x7F0A968Cu;
    ctx->downcount -= 4;
    // 7F0A968C: addi    r3, r30, 3724
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(3724);

label_7F0A9690:
    ctx->pc = 0x7F0A9690u;
    // 7F0A9690: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0A9694:
    ctx->pc = 0x7F0A9694u;
    // 7F0A9694: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F0A9698:
    ctx->pc = 0x7F0A9698u;
    // 7F0A9698: bl      0x800050B4
    {
            ctx->lr = 0x7F0A969Cu;
            ctx->pc = 0x800050B4u;
            return;
    }

label_7F0A969C:
    ctx->pc = 0x7F0A969Cu;
    ctx->downcount -= 11;
    // 7F0A969C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A96A0:
    ctx->pc = 0x7F0A96A0u;
    // 7F0A96A0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A96A4:
    ctx->pc = 0x7F0A96A4u;
    // 7F0A96A4: stw     r0, 3796(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3796);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A96A8:
    ctx->pc = 0x7F0A96A8u;
    // 7F0A96A8: addi    r4, r30, 704
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(704);

label_7F0A96AC:
    ctx->pc = 0x7F0A96ACu;
    // 7F0A96AC: stw     r0, 3732(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3732);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A96B0:
    ctx->pc = 0x7F0A96B0u;
    // 7F0A96B0: stw     r0, 3736(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3736);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A96B4:
    ctx->pc = 0x7F0A96B4u;
    // 7F0A96B4: stw     r0, 3740(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3740);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A96B8:
    ctx->pc = 0x7F0A96B8u;
    // 7F0A96B8: stw     r0, 3744(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3744);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A96BC:
    ctx->pc = 0x7F0A96BCu;
    // 7F0A96BC: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A96C0:
    ctx->pc = 0x7F0A96C0u;
    // 7F0A96C0: addi    r3, r3, 4332
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4332);

label_7F0A96C4:
    ctx->pc = 0x7F0A96C4u;
    // 7F0A96C4: bl      0x7F22DD68
    {
            ctx->lr = 0x7F0A96C8u;
            ctx->pc = 0x7F22DD68u;
            return;
    }

label_7F0A96C8:
    ctx->pc = 0x7F0A96C8u;
    ctx->downcount -= 4;
    // 7F0A96C8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A96CC:
    ctx->pc = 0x7F0A96CCu;
    // 7F0A96CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A96D0:
    ctx->pc = 0x7F0A96D0u;
    // 7F0A96D0: stw     r4, 3880(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3880);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0A96D4:
    ctx->pc = 0x7F0A96D4u;
    // 7F0A96D4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0A96D8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0A96D8:
    ctx->pc = 0x7F0A96D8u;
    ctx->downcount -= 4;
    // 7F0A96D8: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F0A96DC:
    ctx->pc = 0x7F0A96DCu;
    // 7F0A96DC: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A96E0:
    ctx->pc = 0x7F0A96E0u;
    // 7F0A96E0: addi    r4, r4, 12450
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12450);

label_7F0A96E4:
    ctx->pc = 0x7F0A96E4u;
    // 7F0A96E4: bl      0x7F2D8CF0
    {
            ctx->lr = 0x7F0A96E8u;
            ctx->pc = 0x7F2D8CF0u;
            return;
    }

label_7F0A96E8:
    ctx->pc = 0x7F0A96E8u;
    ctx->downcount -= 7;
    // 7F0A96E8: stw     r3, 3892(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3892);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A96EC:
    ctx->pc = 0x7F0A96ECu;
    // 7F0A96EC: li      r3, 110
    ctx->gpr[3] = (u32)(s32)(110);

label_7F0A96F0:
    ctx->pc = 0x7F0A96F0u;
    // 7F0A96F0: lwz     r4, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A96F4:
    ctx->pc = 0x7F0A96F4u;
    // 7F0A96F4: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A96F8:
    ctx->pc = 0x7F0A96F8u;
    // 7F0A96F8: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F0A96FC:
    ctx->pc = 0x7F0A96FCu;
    // 7F0A96FC: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9700:
    ctx->pc = 0x7F0A9700u;
    // 7F0A9700: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0A9704u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0A9704:
    ctx->pc = 0x7F0A9704u;
    ctx->downcount -= 2;
    // 7F0A9704: cmplwi  r3, 0x0000
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

label_7F0A9708:
    ctx->pc = 0x7F0A9708u;
    // 7F0A9708: bc    12, 2, 0x7F0A9714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9714;
        }
    }

label_7F0A970C:
    ctx->pc = 0x7F0A970Cu;
    ctx->downcount -= 1;
    // 7F0A970C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F0A9710u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F0A9710:
    ctx->pc = 0x7F0A9710u;
    ctx->downcount -= 1;
    // 7F0A9710: stw     r3, 124(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9714:
    ctx->pc = 0x7F0A9714u;
    ctx->downcount -= 2;
    // 7F0A9714: li      r3, 106
    ctx->gpr[3] = (u32)(s32)(106);

label_7F0A9718:
    ctx->pc = 0x7F0A9718u;
    // 7F0A9718: bl      0x7F3C664C
    {
            ctx->lr = 0x7F0A971Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F0A971C:
    ctx->pc = 0x7F0A971Cu;
    ctx->downcount -= 2;
    // 7F0A971C: cmplwi  r3, 0x0000
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

label_7F0A9720:
    ctx->pc = 0x7F0A9720u;
    // 7F0A9720: bc    12, 2, 0x7F0A9858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9858;
        }
    }

label_7F0A9724:
    ctx->pc = 0x7F0A9724u;
    ctx->downcount -= 7;
    // 7F0A9724: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0A9728:
    ctx->pc = 0x7F0A9728u;
    // 7F0A9728: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0A972C:
    ctx->pc = 0x7F0A972Cu;
    // 7F0A972C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F0A9730:
    ctx->pc = 0x7F0A9730u;
    // 7F0A9730: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9734:
    ctx->pc = 0x7F0A9734u;
    // 7F0A9734: lha     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0A9738:
    ctx->pc = 0x7F0A9738u;
    // 7F0A9738: cmpwi   r0, 30
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

label_7F0A973C:
    ctx->pc = 0x7F0A973Cu;
    // 7F0A973C: bc    12, 2, 0x7F0A977C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A977C;
        }
    }

label_7F0A9740:
    ctx->pc = 0x7F0A9740u;
    ctx->downcount -= 1;
    // 7F0A9740: bc    4, 0, 0x7F0A975C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A975C;
        }
    }

label_7F0A9744:
    ctx->pc = 0x7F0A9744u;
    ctx->downcount -= 2;
    // 7F0A9744: cmpwi   r0, 20
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

label_7F0A9748:
    ctx->pc = 0x7F0A9748u;
    // 7F0A9748: bc    12, 2, 0x7F0A9774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9774;
        }
    }

label_7F0A974C:
    ctx->pc = 0x7F0A974Cu;
    ctx->downcount -= 1;
    // 7F0A974C: bc    4, 0, 0x7F0A9794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9794;
        }
    }

label_7F0A9750:
    ctx->pc = 0x7F0A9750u;
    ctx->downcount -= 2;
    // 7F0A9750: cmpwi   r0, 10
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

label_7F0A9754:
    ctx->pc = 0x7F0A9754u;
    // 7F0A9754: bc    12, 2, 0x7F0A9798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9798;
        }
    }

label_7F0A9758:
    ctx->pc = 0x7F0A9758u;
    ctx->downcount -= 1;
    // 7F0A9758: b       0x7F0A9794
    {
            goto label_7F0A9794;
    }

label_7F0A975C:
    ctx->pc = 0x7F0A975Cu;
    ctx->downcount -= 2;
    // 7F0A975C: cmpwi   r0, 50
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

label_7F0A9760:
    ctx->pc = 0x7F0A9760u;
    // 7F0A9760: bc    12, 2, 0x7F0A978C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A978C;
        }
    }

label_7F0A9764:
    ctx->pc = 0x7F0A9764u;
    ctx->downcount -= 1;
    // 7F0A9764: bc    4, 0, 0x7F0A9794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9794;
        }
    }

label_7F0A9768:
    ctx->pc = 0x7F0A9768u;
    ctx->downcount -= 2;
    // 7F0A9768: cmpwi   r0, 40
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

label_7F0A976C:
    ctx->pc = 0x7F0A976Cu;
    // 7F0A976C: bc    12, 2, 0x7F0A9784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9784;
        }
    }

label_7F0A9770:
    ctx->pc = 0x7F0A9770u;
    ctx->downcount -= 1;
    // 7F0A9770: b       0x7F0A9794
    {
            goto label_7F0A9794;
    }

label_7F0A9774:
    ctx->pc = 0x7F0A9774u;
    ctx->downcount -= 2;
    // 7F0A9774: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F0A9778:
    ctx->pc = 0x7F0A9778u;
    // 7F0A9778: b       0x7F0A9798
    {
            goto label_7F0A9798;
    }

label_7F0A977C:
    ctx->pc = 0x7F0A977Cu;
    ctx->downcount -= 2;
    // 7F0A977C: li      r28, 2
    ctx->gpr[28] = (u32)(s32)(2);

label_7F0A9780:
    ctx->pc = 0x7F0A9780u;
    // 7F0A9780: b       0x7F0A9798
    {
            goto label_7F0A9798;
    }

label_7F0A9784:
    ctx->pc = 0x7F0A9784u;
    ctx->downcount -= 2;
    // 7F0A9784: li      r28, 3
    ctx->gpr[28] = (u32)(s32)(3);

label_7F0A9788:
    ctx->pc = 0x7F0A9788u;
    // 7F0A9788: b       0x7F0A9798
    {
            goto label_7F0A9798;
    }

label_7F0A978C:
    ctx->pc = 0x7F0A978Cu;
    ctx->downcount -= 2;
    // 7F0A978C: li      r28, 4
    ctx->gpr[28] = (u32)(s32)(4);

label_7F0A9790:
    ctx->pc = 0x7F0A9790u;
    // 7F0A9790: b       0x7F0A9798
    {
            goto label_7F0A9798;
    }

label_7F0A9794:
    ctx->pc = 0x7F0A9794u;
    ctx->downcount -= 1;
    // 7F0A9794: li      r28, 4
    ctx->gpr[28] = (u32)(s32)(4);

label_7F0A9798:
    ctx->pc = 0x7F0A9798u;
    ctx->downcount -= 3;
    // 7F0A9798: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A979C:
    ctx->pc = 0x7F0A979Cu;
    // 7F0A979C: stw     r0, 3992(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A97A0:
    ctx->pc = 0x7F0A97A0u;
    // 7F0A97A0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F0A97A4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F0A97A4:
    ctx->pc = 0x7F0A97A4u;
    ctx->downcount -= 2;
    // 7F0A97A4: stw     r3, 3952(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3952);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A97A8:
    ctx->pc = 0x7F0A97A8u;
    // 7F0A97A8: bl      0x7F3C6B04
    {
            ctx->lr = 0x7F0A97ACu;
            ctx->pc = 0x7F3C6B04u;
            return;
    }

label_7F0A97AC:
    ctx->pc = 0x7F0A97ACu;
    ctx->downcount -= 2;
    // 7F0A97AC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0A97B0:
    ctx->pc = 0x7F0A97B0u;
    // 7F0A97B0: b       0x7F0A97BC
    {
            goto label_7F0A97BC;
    }

label_7F0A97B4:
    ctx->downcount -= 1;
    // 7F0A97B4: bl      0x7F3C6B04
    {
            ctx->lr = 0x7F0A97B8u;
            ctx->pc = 0x7F3C6B04u;
            return;
    }

label_7F0A97B8:
    ctx->downcount -= 1;
    // 7F0A97B8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F0A97BC:
    ctx->downcount -= 2;
    // 7F0A97BC: cmpw    r29, r28
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A97C0:
    // 7F0A97C0: bc    12, 0, 0x7F0A97B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A97B4u;
                return;
            }
            goto label_7F0A97B4;
        }
    }

label_7F0A97C4:
    ctx->pc = 0x7F0A97C4u;
    ctx->downcount -= 1;
    // 7F0A97C4: bl      0x7F3C6640
    {
            ctx->lr = 0x7F0A97C8u;
            ctx->pc = 0x7F3C6640u;
            return;
    }

label_7F0A97C8:
    ctx->pc = 0x7F0A97C8u;
    ctx->downcount -= 1;
    // 7F0A97C8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F0A97CCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F0A97CC:
    ctx->pc = 0x7F0A97CCu;
    ctx->downcount -= 2;
    // 7F0A97CC: stw     r3, 3988(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3988);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A97D0:
    ctx->pc = 0x7F0A97D0u;
    // 7F0A97D0: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F0A97D4u;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F0A97D4:
    ctx->pc = 0x7F0A97D4u;
    ctx->downcount -= 2;
    // 7F0A97D4: stw     r3, 3980(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A97D8:
    ctx->pc = 0x7F0A97D8u;
    // 7F0A97D8: bl      0x7F3C6AE0
    {
            ctx->lr = 0x7F0A97DCu;
            ctx->pc = 0x7F3C6AE0u;
            return;
    }

label_7F0A97DC:
    ctx->pc = 0x7F0A97DCu;
    ctx->downcount -= 1;
    // 7F0A97DC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F0A97E0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F0A97E0:
    ctx->pc = 0x7F0A97E0u;
    ctx->downcount -= 8;
    // 7F0A97E0: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F0A97E4:
    ctx->pc = 0x7F0A97E4u;
    // 7F0A97E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0A97E8:
    ctx->pc = 0x7F0A97E8u;
    // 7F0A97E8: stb     r0, 3968(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3968);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F0A97EC:
    ctx->pc = 0x7F0A97ECu;
    // 7F0A97EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A97F0:
    ctx->pc = 0x7F0A97F0u;
    // 7F0A97F0: sth     r3, 3974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3974);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0A97F4:
    ctx->pc = 0x7F0A97F4u;
    // 7F0A97F4: sth     r0, 3972(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3972);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A97F8:
    ctx->pc = 0x7F0A97F8u;
    // 7F0A97F8: lwz     r3, 3988(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3988);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A97FC:
    ctx->pc = 0x7F0A97FCu;
    // 7F0A97FC: bl      0x7F37CE50
    {
            ctx->lr = 0x7F0A9800u;
            ctx->pc = 0x7F37CE50u;
            return;
    }

label_7F0A9800:
    ctx->pc = 0x7F0A9800u;
    ctx->downcount -= 2;
    // 7F0A9800: cmpwi   r3, 0
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

label_7F0A9804:
    ctx->pc = 0x7F0A9804u;
    // 7F0A9804: bc    12, 2, 0x7F0A9814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9814;
        }
    }

label_7F0A9808:
    ctx->pc = 0x7F0A9808u;
    ctx->downcount -= 3;
    // 7F0A9808: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0A980C:
    ctx->pc = 0x7F0A980Cu;
    // 7F0A980C: sth     r0, 3972(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3972);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A9810:
    ctx->pc = 0x7F0A9810u;
    // 7F0A9810: b       0x7F0A986C
    {
            goto label_7F0A986C;
    }

label_7F0A9814:
    ctx->pc = 0x7F0A9814u;
    ctx->downcount -= 3;
    // 7F0A9814: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9818:
    ctx->pc = 0x7F0A9818u;
    // 7F0A9818: addi    r4, r30, 3992
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(3992);

label_7F0A981C:
    ctx->pc = 0x7F0A981Cu;
    // 7F0A981C: bl      0x7F17D79C
    {
            ctx->lr = 0x7F0A9820u;
            ctx->pc = 0x7F17D79Cu;
            return;
    }

label_7F0A9820:
    ctx->pc = 0x7F0A9820u;
    ctx->downcount -= 3;
    // 7F0A9820: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9824:
    ctx->pc = 0x7F0A9824u;
    // 7F0A9824: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9828:
    ctx->pc = 0x7F0A9828u;
    // 7F0A9828: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0A982Cu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0A982C:
    ctx->pc = 0x7F0A982Cu;
    ctx->downcount -= 7;
    // 7F0A982C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0A9830:
    ctx->pc = 0x7F0A9830u;
    // 7F0A9830: lis     r4, 148
    ctx->gpr[4] = ((u32)(s32)(148) << 16);

label_7F0A9834:
    ctx->pc = 0x7F0A9834u;
    // 7F0A9834: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0A9838:
    ctx->pc = 0x7F0A9838u;
    // 7F0A9838: addi    r6, r30, 3992
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(3992);

label_7F0A983C:
    ctx->pc = 0x7F0A983Cu;
    // 7F0A983C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9840:
    ctx->pc = 0x7F0A9840u;
    // 7F0A9840: addi    r4, r4, -32696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32696);

label_7F0A9844:
    ctx->pc = 0x7F0A9844u;
    // 7F0A9844: bl      0x7F2136D0
    {
            ctx->lr = 0x7F0A9848u;
            ctx->pc = 0x7F2136D0u;
            return;
    }

label_7F0A9848:
    ctx->pc = 0x7F0A9848u;
    ctx->downcount -= 3;
    // 7F0A9848: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A984C:
    ctx->pc = 0x7F0A984Cu;
    // 7F0A984C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9850:
    ctx->pc = 0x7F0A9850u;
    // 7F0A9850: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0A9854u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0A9854:
    ctx->pc = 0x7F0A9854u;
    ctx->downcount -= 1;
    // 7F0A9854: b       0x7F0A986C
    {
            goto label_7F0A986C;
    }

label_7F0A9858:
    ctx->pc = 0x7F0A9858u;
    ctx->downcount -= 5;
    // 7F0A9858: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0A985C:
    ctx->pc = 0x7F0A985Cu;
    // 7F0A985C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A9860:
    ctx->pc = 0x7F0A9860u;
    // 7F0A9860: stw     r3, 3988(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3988);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9864:
    ctx->pc = 0x7F0A9864u;
    // 7F0A9864: sth     r0, 3974(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3974);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A9868:
    ctx->pc = 0x7F0A9868u;
    // 7F0A9868: sth     r0, 3972(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3972);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A986C:
    ctx->pc = 0x7F0A986Cu;
    ctx->downcount -= 1;
    // 7F0A986C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A9870:
    ctx->pc = 0x7F0A9870u;
    ctx->downcount -= 16;
    // 7F0A9870: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A9874:
    ctx->pc = 0x7F0A9874u;
    // 7F0A9874: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9878:
    ctx->pc = 0x7F0A9878u;
    // 7F0A9878: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A987C:
    ctx->pc = 0x7F0A987Cu;
    // 7F0A987C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A9880:
    ctx->pc = 0x7F0A9880u;
    // 7F0A9880: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9884:
    ctx->pc = 0x7F0A9884u;
    ctx->downcount -= 6;
    // 7F0A9884: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9888:
    ctx->pc = 0x7F0A9888u;
    // 7F0A9888: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A988C:
    ctx->pc = 0x7F0A988Cu;
    // 7F0A988C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9890:
    ctx->pc = 0x7F0A9890u;
    // 7F0A9890: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A9894:
    ctx->pc = 0x7F0A9894u;
    // 7F0A9894: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9898:
    ctx->pc = 0x7F0A9898u;
    // 7F0A9898: bl      0x7F0A9538
    {
            ctx->lr = 0x7F0A989Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9538u;
                return;
            }
            goto label_7F0A9538;
    }

label_7F0A989C:
    ctx->pc = 0x7F0A989Cu;
    ctx->downcount -= 2;
    // 7F0A989C: cmpwi   r3, 0
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

label_7F0A98A0:
    ctx->pc = 0x7F0A98A0u;
    // 7F0A98A0: bc    4, 0, 0x7F0A98AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A98AC;
        }
    }

label_7F0A98A4:
    ctx->pc = 0x7F0A98A4u;
    ctx->downcount -= 2;
    // 7F0A98A4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F0A98A8:
    ctx->pc = 0x7F0A98A8u;
    // 7F0A98A8: b       0x7F0A99A8
    {
            goto label_7F0A99A8;
    }

label_7F0A98AC:
    ctx->pc = 0x7F0A98ACu;
    ctx->downcount -= 2;
    // 7F0A98AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A98B0:
    ctx->pc = 0x7F0A98B0u;
    // 7F0A98B0: bl      0x7F0A9448
    {
            ctx->lr = 0x7F0A98B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9448u;
                return;
            }
            goto label_7F0A9448;
    }

label_7F0A98B4:
    ctx->pc = 0x7F0A98B4u;
    ctx->downcount -= 2;
    // 7F0A98B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A98B8:
    ctx->pc = 0x7F0A98B8u;
    // 7F0A98B8: bl      0x7F0A9358
    {
            ctx->lr = 0x7F0A98BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9358u;
                return;
            }
            goto label_7F0A9358;
    }

label_7F0A98BC:
    ctx->pc = 0x7F0A98BCu;
    ctx->downcount -= 2;
    // 7F0A98BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A98C0:
    ctx->pc = 0x7F0A98C0u;
    // 7F0A98C0: bl      0x7F0A94C0
    {
            ctx->lr = 0x7F0A98C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A94C0u;
                return;
            }
            goto label_7F0A94C0;
    }

label_7F0A98C4:
    ctx->pc = 0x7F0A98C4u;
    ctx->downcount -= 2;
    // 7F0A98C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A98C8:
    ctx->pc = 0x7F0A98C8u;
    // 7F0A98C8: bl      0x7F0A8CF0
    {
            ctx->lr = 0x7F0A98CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8CF0u;
                return;
            }
            goto label_7F0A8CF0;
    }

label_7F0A98CC:
    ctx->pc = 0x7F0A98CCu;
    ctx->downcount -= 39;
    // 7F0A98CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A98D0:
    ctx->pc = 0x7F0A98D0u;
    // 7F0A98D0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F0A98D4:
    ctx->pc = 0x7F0A98D4u;
    // 7F0A98D4: addi    r4, r3, -5312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5312);

label_7F0A98D8:
    ctx->pc = 0x7F0A98D8u;
    // 7F0A98D8: stw     r9, 3772(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3772);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0A98DC:
    ctx->pc = 0x7F0A98DCu;
    // 7F0A98DC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0A98DCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A98E0:
    ctx->pc = 0x7F0A98E0u;
    // 7F0A98E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A98E4:
    ctx->pc = 0x7F0A98E4u;
    // 7F0A98E4: addi    r8, r3, -5376
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-5376);

label_7F0A98E8:
    ctx->pc = 0x7F0A98E8u;
    // 7F0A98E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A98EC:
    ctx->pc = 0x7F0A98ECu;
    // 7F0A98EC: stfs     f1, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A98ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0A98F0:
    ctx->pc = 0x7F0A98F0u;
    // 7F0A98F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A98F4:
    ctx->pc = 0x7F0A98F4u;
    // 7F0A98F4: addi    r7, r3, -5308
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(-5308);

label_7F0A98F8:
    ctx->pc = 0x7F0A98F8u;
    // 7F0A98F8: lfs     f0, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F0A98F8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A98FC:
    ctx->pc = 0x7F0A98FCu;
    // 7F0A98FC: stfs     f1, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A98FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0A9900:
    ctx->pc = 0x7F0A9900u;
    // 7F0A9900: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A9904:
    ctx->pc = 0x7F0A9904u;
    // 7F0A9904: addi    r5, r3, -5352
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5352);

label_7F0A9908:
    ctx->pc = 0x7F0A9908u;
    // 7F0A9908: addi    r6, r4, -5304
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-5304);

label_7F0A990C:
    ctx->pc = 0x7F0A990Cu;
    // 7F0A990C: stfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A990Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0A9910:
    ctx->pc = 0x7F0A9910u;
    // 7F0A9910: li      r8, 5000
    ctx->gpr[8] = (u32)(s32)(5000);

label_7F0A9914:
    ctx->pc = 0x7F0A9914u;
    // 7F0A9914: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9914u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A9918:
    ctx->pc = 0x7F0A9918u;
    // 7F0A9918: li      r0, 500
    ctx->gpr[0] = (u32)(s32)(500);

label_7F0A991C:
    ctx->pc = 0x7F0A991Cu;
    // 7F0A991C: stw     r9, 3920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3920);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0A9920:
    ctx->pc = 0x7F0A9920u;
    // 7F0A9920: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A9924:
    ctx->pc = 0x7F0A9924u;
    // 7F0A9924: lfs     f2, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9924u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0A9928:
    ctx->pc = 0x7F0A9928u;
    // 7F0A9928: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A992C:
    ctx->pc = 0x7F0A992Cu;
    // 7F0A992C: stfs     f0, 3948(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A992Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3948);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9930:
    ctx->pc = 0x7F0A9930u;
    // 7F0A9930: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F0A9934:
    ctx->pc = 0x7F0A9934u;
    // 7F0A9934: lfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9934u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9938:
    ctx->pc = 0x7F0A9938u;
    // 7F0A9938: stw     r9, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0A993C:
    ctx->pc = 0x7F0A993Cu;
    // 7F0A993C: sth     r8, 3764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3764);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F0A9940:
    ctx->pc = 0x7F0A9940u;
    // 7F0A9940: sth     r9, 3766(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3766);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F0A9944:
    ctx->pc = 0x7F0A9944u;
    // 7F0A9944: sth     r0, 3768(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3768);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A9948:
    ctx->pc = 0x7F0A9948u;
    // 7F0A9948: stfs     f2, 3748(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9948u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3748);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F0A994C:
    ctx->pc = 0x7F0A994Cu;
    // 7F0A994C: stfs     f1, 3752(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A994Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3752);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0A9950:
    ctx->pc = 0x7F0A9950u;
    // 7F0A9950: stfs     f0, 3756(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9950u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3756);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9954:
    ctx->pc = 0x7F0A9954u;
    // 7F0A9954: stw     r9, 3912(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3912);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F0A9958:
    ctx->pc = 0x7F0A9958u;
    // 7F0A9958: lwz     r0, 18312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A995C:
    ctx->pc = 0x7F0A995Cu;
    // 7F0A995C: stw     r0, 4028(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4028);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9960:
    ctx->pc = 0x7F0A9960u;
    // 7F0A9960: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9964:
    ctx->pc = 0x7F0A9964u;
    // 7F0A9964: bl      0x7F1025F8
    {
            ctx->lr = 0x7F0A9968u;
            ctx->pc = 0x7F1025F8u;
            return;
    }

label_7F0A9968:
    ctx->pc = 0x7F0A9968u;
    ctx->downcount -= 16;
    // 7F0A9968: stw     r3, 4024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4024);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A996C:
    ctx->pc = 0x7F0A996Cu;
    // 7F0A996C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0A9970:
    ctx->pc = 0x7F0A9970u;
    // 7F0A9970: addi    r4, r3, 29512
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(29512);

label_7F0A9974:
    ctx->pc = 0x7F0A9974u;
    // 7F0A9974: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A9978:
    ctx->pc = 0x7F0A9978u;
    // 7F0A9978: lwz     r0, 4024(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4024);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A997C:
    ctx->pc = 0x7F0A997Cu;
    // 7F0A997C: stw     r0, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9980:
    ctx->pc = 0x7F0A9980u;
    // 7F0A9980: stw     r0, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9984:
    ctx->pc = 0x7F0A9984u;
    // 7F0A9984: lwz     r5, 4008(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4008);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A9988:
    ctx->pc = 0x7F0A9988u;
    // 7F0A9988: lwz     r0, 4012(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4012);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A998C:
    ctx->pc = 0x7F0A998Cu;
    // 7F0A998C: stw     r5, 4040(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4040);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0A9990:
    ctx->pc = 0x7F0A9990u;
    // 7F0A9990: stw     r0, 4044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4044);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9994:
    ctx->pc = 0x7F0A9994u;
    // 7F0A9994: lwz     r5, 4016(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4016);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A9998:
    ctx->pc = 0x7F0A9998u;
    // 7F0A9998: lwz     r0, 4020(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4020);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A999C:
    ctx->pc = 0x7F0A999Cu;
    // 7F0A999C: stw     r5, 4048(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4048);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0A99A0:
    ctx->pc = 0x7F0A99A0u;
    // 7F0A99A0: stw     r0, 4052(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A99A4:
    ctx->pc = 0x7F0A99A4u;
    // 7F0A99A4: stw     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A99A8:
    ctx->pc = 0x7F0A99A8u;
    ctx->downcount -= 6;
    // 7F0A99A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A99AC:
    ctx->pc = 0x7F0A99ACu;
    // 7F0A99AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A99B0:
    ctx->pc = 0x7F0A99B0u;
    // 7F0A99B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A99B4:
    ctx->pc = 0x7F0A99B4u;
    // 7F0A99B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A99B8:
    ctx->pc = 0x7F0A99B8u;
    // 7F0A99B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A99BC:
    ctx->pc = 0x7F0A99BCu;
    ctx->downcount -= 20;
    // 7F0A99BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A99C0:
    ctx->pc = 0x7F0A99C0u;
    // 7F0A99C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A99C4:
    ctx->pc = 0x7F0A99C4u;
    // 7F0A99C4: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F0A99C8:
    ctx->pc = 0x7F0A99C8u;
    // 7F0A99C8: li      r5, 4064
    ctx->gpr[5] = (u32)(s32)(4064);

label_7F0A99CC:
    ctx->pc = 0x7F0A99CCu;
    // 7F0A99CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A99D0:
    ctx->pc = 0x7F0A99D0u;
    // 7F0A99D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A99D4:
    ctx->pc = 0x7F0A99D4u;
    // 7F0A99D4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A99D8:
    ctx->pc = 0x7F0A99D8u;
    // 7F0A99D8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A99DC:
    ctx->pc = 0x7F0A99DCu;
    // 7F0A99DC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F0A99E0:
    ctx->pc = 0x7F0A99E0u;
    // 7F0A99E0: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F0A99E4u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F0A99E4:
    ctx->pc = 0x7F0A99E4u;
    ctx->downcount -= 2;
    // 7F0A99E4: or.   r31, r3, r3
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

label_7F0A99E8:
    ctx->pc = 0x7F0A99E8u;
    // 7F0A99E8: bc    12, 2, 0x7F0A9A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9A50;
        }
    }

label_7F0A99EC:
    ctx->pc = 0x7F0A99ECu;
    ctx->downcount -= 5;
    // 7F0A99EC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0A99F0:
    ctx->pc = 0x7F0A99F0u;
    // 7F0A99F0: lis     r5, 32523
    ctx->gpr[5] = ((u32)(s32)(32523) << 16);

label_7F0A99F4:
    ctx->pc = 0x7F0A99F4u;
    // 7F0A99F4: addi    r4, r4, -29200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29200);

label_7F0A99F8:
    ctx->pc = 0x7F0A99F8u;
    // 7F0A99F8: addi    r5, r5, -27956
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27956);

label_7F0A99FC:
    ctx->pc = 0x7F0A99FCu;
    // 7F0A99FC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F0A9A00u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F0A9A00:
    ctx->pc = 0x7F0A9A00u;
    ctx->downcount -= 14;
    // 7F0A9A00: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9A04:
    ctx->pc = 0x7F0A9A04u;
    // 7F0A9A04: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F0A9A08:
    ctx->pc = 0x7F0A9A08u;
    // 7F0A9A08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A9A0C:
    ctx->pc = 0x7F0A9A0Cu;
    // 7F0A9A0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9A10:
    ctx->pc = 0x7F0A9A10u;
    // 7F0A9A10: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F0A9A14:
    ctx->pc = 0x7F0A9A14u;
    // 7F0A9A14: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F0A9A18:
    ctx->pc = 0x7F0A9A18u;
    // 7F0A9A18: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0A9A1C:
    ctx->pc = 0x7F0A9A1Cu;
    // 7F0A9A1C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9A20:
    ctx->pc = 0x7F0A9A20u;
    // 7F0A9A20: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0A9A24:
    ctx->pc = 0x7F0A9A24u;
    // 7F0A9A24: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A9A28:
    ctx->pc = 0x7F0A9A28u;
    // 7F0A9A28: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A9A2C:
    ctx->pc = 0x7F0A9A2Cu;
    // 7F0A9A2C: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A9A30:
    ctx->pc = 0x7F0A9A30u;
    // 7F0A9A30: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9A34:
    ctx->pc = 0x7F0A9A34u;
    // 7F0A9A34: bl      0x7F0A9884
    {
            ctx->lr = 0x7F0A9A38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9884u;
                return;
            }
            goto label_7F0A9884;
    }

label_7F0A9A38:
    ctx->pc = 0x7F0A9A38u;
    ctx->downcount -= 2;
    // 7F0A9A38: cmpwi   r3, 0
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

label_7F0A9A3C:
    ctx->pc = 0x7F0A9A3Cu;
    // 7F0A9A3C: bc    4, 0, 0x7F0A9A50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9A50;
        }
    }

label_7F0A9A40:
    ctx->pc = 0x7F0A9A40u;
    ctx->downcount -= 2;
    // 7F0A9A40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9A44:
    ctx->pc = 0x7F0A9A44u;
    // 7F0A9A44: bl      0x7F3C8210
    {
            ctx->lr = 0x7F0A9A48u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F0A9A48:
    ctx->pc = 0x7F0A9A48u;
    ctx->downcount -= 2;
    // 7F0A9A48: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A9A4C:
    ctx->pc = 0x7F0A9A4Cu;
    // 7F0A9A4C: b       0x7F0A9A54
    {
            goto label_7F0A9A54;
    }

label_7F0A9A50:
    ctx->pc = 0x7F0A9A50u;
    ctx->downcount -= 1;
    // 7F0A9A50: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9A54:
    ctx->pc = 0x7F0A9A54u;
    ctx->downcount -= 16;
    // 7F0A9A54: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A9A58:
    ctx->pc = 0x7F0A9A58u;
    // 7F0A9A58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9A5C:
    ctx->pc = 0x7F0A9A5Cu;
    // 7F0A9A5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9A60:
    ctx->pc = 0x7F0A9A60u;
    // 7F0A9A60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9A64:
    ctx->pc = 0x7F0A9A64u;
    // 7F0A9A64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9A68:
    ctx->pc = 0x7F0A9A68u;
    ctx->downcount -= 6;
    // 7F0A9A68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9A6C:
    ctx->pc = 0x7F0A9A6Cu;
    // 7F0A9A6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9A70:
    ctx->pc = 0x7F0A9A70u;
    // 7F0A9A70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9A74:
    ctx->pc = 0x7F0A9A74u;
    // 7F0A9A74: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A9A78:
    ctx->pc = 0x7F0A9A78u;
    // 7F0A9A78: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9A7C:
    ctx->pc = 0x7F0A9A7Cu;
    // 7F0A9A7C: bl      0x7F0A9AAC
    {
            ctx->lr = 0x7F0A9A80u;
            goto label_7F0A9AAC;
    }

label_7F0A9A80:
    ctx->pc = 0x7F0A9A80u;
    ctx->downcount -= 2;
    // 7F0A9A80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9A84:
    ctx->pc = 0x7F0A9A84u;
    // 7F0A9A84: bl      0x7F0A9B30
    {
            ctx->lr = 0x7F0A9A88u;
            goto label_7F0A9B30;
    }

label_7F0A9A88:
    ctx->pc = 0x7F0A9A88u;
    ctx->downcount -= 2;
    // 7F0A9A88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9A8C:
    ctx->pc = 0x7F0A9A8Cu;
    // 7F0A9A8C: bl      0x7F0A8468
    {
            ctx->lr = 0x7F0A9A90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8468u;
                return;
            }
            goto label_7F0A8468;
    }

label_7F0A9A90:
    ctx->pc = 0x7F0A9A90u;
    ctx->downcount -= 2;
    // 7F0A9A90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9A94:
    ctx->pc = 0x7F0A9A94u;
    // 7F0A9A94: bl      0x7F0A9D20
    {
            ctx->lr = 0x7F0A9A98u;
            goto label_7F0A9D20;
    }

label_7F0A9A98:
    ctx->pc = 0x7F0A9A98u;
    ctx->downcount -= 6;
    // 7F0A9A98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9A9C:
    ctx->pc = 0x7F0A9A9Cu;
    // 7F0A9A9C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A9AA0:
    ctx->pc = 0x7F0A9AA0u;
    // 7F0A9AA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9AA4:
    ctx->pc = 0x7F0A9AA4u;
    // 7F0A9AA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9AA8:
    ctx->pc = 0x7F0A9AA8u;
    // 7F0A9AA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9AAC:
    ctx->pc = 0x7F0A9AACu;
    ctx->downcount -= 9;
    // 7F0A9AAC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9AB0:
    ctx->pc = 0x7F0A9AB0u;
    // 7F0A9AB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9AB4:
    ctx->pc = 0x7F0A9AB4u;
    // 7F0A9AB4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0A9AB8:
    ctx->pc = 0x7F0A9AB8u;
    // 7F0A9AB8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9ABC:
    ctx->pc = 0x7F0A9ABCu;
    // 7F0A9ABC: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A9AC0:
    ctx->pc = 0x7F0A9AC0u;
    // 7F0A9AC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9AC4:
    ctx->pc = 0x7F0A9AC4u;
    // 7F0A9AC4: addi    r3, r4, -5708
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F0A9AC8:
    ctx->pc = 0x7F0A9AC8u;
    // 7F0A9AC8: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9ACC:
    ctx->pc = 0x7F0A9ACCu;
    // 7F0A9ACC: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0A9AD0u;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0A9AD0:
    ctx->pc = 0x7F0A9AD0u;
    ctx->downcount -= 3;
    // 7F0A9AD0: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9AD4:
    ctx->pc = 0x7F0A9AD4u;
    // 7F0A9AD4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A9AD8:
    ctx->pc = 0x7F0A9AD8u;
    // 7F0A9AD8: bl      0x7F3CCA1C
    {
            ctx->lr = 0x7F0A9ADCu;
            ctx->pc = 0x7F3CCA1Cu;
            return;
    }

label_7F0A9ADC:
    ctx->pc = 0x7F0A9ADCu;
    ctx->downcount -= 4;
    // 7F0A9ADC: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9AE0:
    ctx->pc = 0x7F0A9AE0u;
    // 7F0A9AE0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A9AE4:
    ctx->pc = 0x7F0A9AE4u;
    // 7F0A9AE4: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0A9AE8:
    ctx->pc = 0x7F0A9AE8u;
    // 7F0A9AE8: bl      0x7F3CC634
    {
            ctx->lr = 0x7F0A9AECu;
            ctx->pc = 0x7F3CC634u;
            return;
    }

label_7F0A9AEC:
    ctx->pc = 0x7F0A9AECu;
    ctx->downcount -= 5;
    // 7F0A9AEC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A9AF0:
    ctx->pc = 0x7F0A9AF0u;
    // 7F0A9AF0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0A9AF4:
    ctx->pc = 0x7F0A9AF4u;
    // 7F0A9AF4: sth     r0, 26(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A9AF8:
    ctx->pc = 0x7F0A9AF8u;
    // 7F0A9AF8: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A9AFC:
    ctx->pc = 0x7F0A9AFCu;
    // 7F0A9AFC: bl      0x7F3CC990
    {
            ctx->lr = 0x7F0A9B00u;
            ctx->pc = 0x7F3CC990u;
            return;
    }

label_7F0A9B00:
    ctx->pc = 0x7F0A9B00u;
    ctx->downcount -= 2;
    // 7F0A9B00: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A9B04:
    ctx->pc = 0x7F0A9B04u;
    // 7F0A9B04: bl      0x7F3CC708
    {
            ctx->lr = 0x7F0A9B08u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F0A9B08:
    ctx->pc = 0x7F0A9B08u;
    ctx->downcount -= 4;
    // 7F0A9B08: extsh r0, r3
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0A9B0C:
    ctx->pc = 0x7F0A9B0Cu;
    // 7F0A9B0C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0A9B10:
    ctx->pc = 0x7F0A9B10u;
    // 7F0A9B10: stw     r0, 3928(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3928);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9B14:
    ctx->pc = 0x7F0A9B14u;
    // 7F0A9B14: bl      0x7F3CC44C
    {
            ctx->lr = 0x7F0A9B18u;
            ctx->pc = 0x7F3CC44Cu;
            return;
    }

label_7F0A9B18:
    ctx->pc = 0x7F0A9B18u;
    ctx->downcount -= 7;
    // 7F0A9B18: stw     r3, 3932(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3932);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9B1C:
    ctx->pc = 0x7F0A9B1Cu;
    // 7F0A9B1C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9B20:
    ctx->pc = 0x7F0A9B20u;
    // 7F0A9B20: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A9B24:
    ctx->pc = 0x7F0A9B24u;
    // 7F0A9B24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9B28:
    ctx->pc = 0x7F0A9B28u;
    // 7F0A9B28: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0A9B2C:
    ctx->pc = 0x7F0A9B2Cu;
    // 7F0A9B2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9B30:
    ctx->pc = 0x7F0A9B30u;
    ctx->downcount -= 19;
    // 7F0A9B30: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9B34:
    ctx->pc = 0x7F0A9B34u;
    // 7F0A9B34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9B38:
    ctx->pc = 0x7F0A9B38u;
    // 7F0A9B38: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9B3C:
    ctx->pc = 0x7F0A9B3Cu;
    // 7F0A9B3C: addi    r5, r1, 28
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(28);

label_7F0A9B40:
    ctx->pc = 0x7F0A9B40u;
    // 7F0A9B40: stmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A9B44:
    ctx->pc = 0x7F0A9B44u;
    // 7F0A9B44: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9B48:
    ctx->pc = 0x7F0A9B48u;
    // 7F0A9B48: addi    r3, r31, 3748
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(3748);

label_7F0A9B4C:
    ctx->pc = 0x7F0A9B4Cu;
    // 7F0A9B4C: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9B50:
    ctx->pc = 0x7F0A9B50u;
    // 7F0A9B50: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0A9B54u;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0A9B54:
    ctx->pc = 0x7F0A9B54u;
    ctx->downcount -= 5;
    // 7F0A9B54: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A9B58:
    ctx->pc = 0x7F0A9B58u;
    // 7F0A9B58: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_7F0A9B5C:
    ctx->pc = 0x7F0A9B5Cu;
    // 7F0A9B5C: lfs     f0, -5284(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9B5Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9B60:
    ctx->pc = 0x7F0A9B60u;
    // 7F0A9B60: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9B60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9B64:
    ctx->pc = 0x7F0A9B64u;
    // 7F0A9B64: bl      0x7F3CC594
    {
            ctx->lr = 0x7F0A9B68u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F0A9B68:
    ctx->pc = 0x7F0A9B68u;
    ctx->downcount -= 13;
    // 7F0A9B68: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0A9B68u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F0A9B6C:
    ctx->pc = 0x7F0A9B6Cu;
    // 7F0A9B6C: lis     r3, 32591
    ctx->gpr[3] = ((u32)(s32)(32591) << 16);

label_7F0A9B70:
    ctx->pc = 0x7F0A9B70u;
    // 7F0A9B70: addi    r3, r3, 32304
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32304);

label_7F0A9B74:
    ctx->pc = 0x7F0A9B74u;
    // 7F0A9B74: stfd     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9B74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F0A9B78:
    ctx->pc = 0x7F0A9B78u;
    // 7F0A9B78: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9B7C:
    ctx->pc = 0x7F0A9B7Cu;
    // 7F0A9B7C: stw     r0, 3740(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3740);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9B80:
    ctx->pc = 0x7F0A9B80u;
    // 7F0A9B80: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9B84:
    ctx->pc = 0x7F0A9B84u;
    // 7F0A9B84: rlwinm r0, r3, 26, 0, 5
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 26u) & 0xFC000000u;
    }

label_7F0A9B88:
    ctx->pc = 0x7F0A9B88u;
    // 7F0A9B88: rlwinm r3, r3, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F0A9B8C:
    ctx->pc = 0x7F0A9B8Cu;
    // 7F0A9B8C: subf   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0A9B90:
    ctx->pc = 0x7F0A9B90u;
    // 7F0A9B90: rlwinm r0, r0, 6, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 6u) & 0xFFFFFFFFu;
    }

label_7F0A9B94:
    ctx->pc = 0x7F0A9B94u;
    // 7F0A9B94: add.   r0, r0, r3
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

label_7F0A9B98:
    ctx->pc = 0x7F0A9B98u;
    // 7F0A9B98: bc    4, 2, 0x7F0A9BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9BA8;
        }
    }

label_7F0A9B9C:
    ctx->pc = 0x7F0A9B9Cu;
    ctx->downcount -= 3;
    // 7F0A9B9C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0A9BA0:
    ctx->pc = 0x7F0A9BA0u;
    // 7F0A9BA0: stw     r0, 3996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3996);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9BA4:
    ctx->pc = 0x7F0A9BA4u;
    // 7F0A9BA4: stw     r0, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9BA8:
    ctx->pc = 0x7F0A9BA8u;
    ctx->downcount -= 4;
    // 7F0A9BA8: addi    r4, r31, 3748
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3748);

label_7F0A9BAC:
    ctx->pc = 0x7F0A9BACu;
    // 7F0A9BAC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0A9BB0:
    ctx->pc = 0x7F0A9BB0u;
    // 7F0A9BB0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A9BB4:
    ctx->pc = 0x7F0A9BB4u;
    // 7F0A9BB4: bl      0x7F103FC0
    {
            ctx->lr = 0x7F0A9BB8u;
            ctx->pc = 0x7F103FC0u;
            return;
    }

label_7F0A9BB8:
    ctx->pc = 0x7F0A9BB8u;
    ctx->downcount -= 4;
    // 7F0A9BB8: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A9BBC:
    ctx->pc = 0x7F0A9BBCu;
    // 7F0A9BBC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9BC0:
    ctx->pc = 0x7F0A9BC0u;
    // 7F0A9BC0: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9BC4:
    ctx->pc = 0x7F0A9BC4u;
    // 7F0A9BC4: bl      0x7F10377C
    {
            ctx->lr = 0x7F0A9BC8u;
            ctx->pc = 0x7F10377Cu;
            return;
    }

label_7F0A9BC8:
    ctx->pc = 0x7F0A9BC8u;
    ctx->downcount -= 2;
    // 7F0A9BC8: cmpwi   r3, 0
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

label_7F0A9BCC:
    ctx->pc = 0x7F0A9BCCu;
    // 7F0A9BCC: bc    4, 2, 0x7F0A9CF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9CF4;
        }
    }

label_7F0A9BD0:
    ctx->pc = 0x7F0A9BD0u;
    ctx->downcount -= 4;
    // 7F0A9BD0: lwz     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A9BD4:
    ctx->pc = 0x7F0A9BD4u;
    // 7F0A9BD4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9BD8:
    ctx->pc = 0x7F0A9BD8u;
    // 7F0A9BD8: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A9BDC:
    ctx->pc = 0x7F0A9BDCu;
    // 7F0A9BDC: bl      0x7F0337D4
    {
            ctx->lr = 0x7F0A9BE0u;
            ctx->pc = 0x7F0337D4u;
            return;
    }

label_7F0A9BE0:
    ctx->pc = 0x7F0A9BE0u;
    ctx->downcount -= 2;
    // 7F0A9BE0: stw     r3, 4032(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4032);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9BE4:
    ctx->pc = 0x7F0A9BE4u;
    // 7F0A9BE4: bl      0x7F039A44
    {
            ctx->lr = 0x7F0A9BE8u;
            ctx->pc = 0x7F039A44u;
            return;
    }

label_7F0A9BE8:
    ctx->pc = 0x7F0A9BE8u;
    ctx->downcount -= 5;
    // 7F0A9BE8: lwz     r29, 4032(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4032);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F0A9BEC:
    ctx->pc = 0x7F0A9BECu;
    // 7F0A9BEC: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9BF0:
    ctx->pc = 0x7F0A9BF0u;
    // 7F0A9BF0: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9BF4:
    ctx->pc = 0x7F0A9BF4u;
    // 7F0A9BF4: lwz     r5, 3996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3996);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0A9BF8:
    ctx->pc = 0x7F0A9BF8u;
    // 7F0A9BF8: bl      0x7F1025F8
    {
            ctx->lr = 0x7F0A9BFCu;
            ctx->pc = 0x7F1025F8u;
            return;
    }

label_7F0A9BFC:
    ctx->pc = 0x7F0A9BFCu;
    ctx->downcount -= 4;
    // 7F0A9BFC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9C00:
    ctx->pc = 0x7F0A9C00u;
    // 7F0A9C00: stw     r30, 3996(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3996);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0A9C04:
    ctx->pc = 0x7F0A9C04u;
    // 7F0A9C04: lwz     r4, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A9C08:
    ctx->pc = 0x7F0A9C08u;
    // 7F0A9C08: bl      0x7F1027E8
    {
            ctx->lr = 0x7F0A9C0Cu;
            ctx->pc = 0x7F1027E8u;
            return;
    }

label_7F0A9C0C:
    ctx->pc = 0x7F0A9C0Cu;
    ctx->downcount -= 3;
    // 7F0A9C0C: lwz     r0, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9C10:
    ctx->pc = 0x7F0A9C10u;
    // 7F0A9C10: cmpw    r29, r0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A9C14:
    ctx->pc = 0x7F0A9C14u;
    // 7F0A9C14: bc    4, 2, 0x7F0A9C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9C20;
        }
    }

label_7F0A9C18:
    ctx->pc = 0x7F0A9C18u;
    ctx->downcount -= 2;
    // 7F0A9C18: cmpwi   r3, 0
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

label_7F0A9C1C:
    ctx->pc = 0x7F0A9C1Cu;
    // 7F0A9C1C: bc    12, 1, 0x7F0A9CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9CBC;
        }
    }

label_7F0A9C20:
    ctx->pc = 0x7F0A9C20u;
    ctx->downcount -= 4;
    // 7F0A9C20: stw     r29, 4004(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4004);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0A9C24:
    ctx->pc = 0x7F0A9C24u;
    // 7F0A9C24: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9C28:
    ctx->pc = 0x7F0A9C28u;
    // 7F0A9C28: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9C2C:
    ctx->pc = 0x7F0A9C2Cu;
    // 7F0A9C2C: bl      0x7F1027E8
    {
            ctx->lr = 0x7F0A9C30u;
            ctx->pc = 0x7F1027E8u;
            return;
    }

label_7F0A9C30:
    ctx->pc = 0x7F0A9C30u;
    ctx->downcount -= 2;
    // 7F0A9C30: cmpwi   r3, 1
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

label_7F0A9C34:
    ctx->pc = 0x7F0A9C34u;
    // 7F0A9C34: bc    12, 1, 0x7F0A9C88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9C88;
        }
    }

label_7F0A9C38:
    ctx->pc = 0x7F0A9C38u;
    ctx->downcount -= 13;
    // 7F0A9C38: lwz     r6, 3748(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3748);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0A9C3C:
    ctx->pc = 0x7F0A9C3Cu;
    // 7F0A9C3C: addi    r3, r31, 4040
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4040);

label_7F0A9C40:
    ctx->pc = 0x7F0A9C40u;
    // 7F0A9C40: lwz     r0, 3752(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3752);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9C44:
    ctx->pc = 0x7F0A9C44u;
    // 7F0A9C44: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9C48:
    ctx->pc = 0x7F0A9C48u;
    // 7F0A9C48: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_7F0A9C4C:
    ctx->pc = 0x7F0A9C4Cu;
    // 7F0A9C4C: stw     r6, 4040(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4040);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A9C50:
    ctx->pc = 0x7F0A9C50u;
    // 7F0A9C50: stw     r0, 4044(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4044);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9C54:
    ctx->pc = 0x7F0A9C54u;
    // 7F0A9C54: lwz     r6, 3756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3756);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0A9C58:
    ctx->pc = 0x7F0A9C58u;
    // 7F0A9C58: lwz     r0, 3760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3760);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9C5C:
    ctx->pc = 0x7F0A9C5Cu;
    // 7F0A9C5C: stw     r6, 4048(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4048);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F0A9C60:
    ctx->pc = 0x7F0A9C60u;
    // 7F0A9C60: stw     r0, 4052(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4052);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9C64:
    ctx->pc = 0x7F0A9C64u;
    // 7F0A9C64: stw     r29, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0A9C68:
    ctx->pc = 0x7F0A9C68u;
    // 7F0A9C68: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0A9C6Cu;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0A9C6C:
    ctx->pc = 0x7F0A9C6Cu;
    ctx->downcount -= 2;
    // 7F0A9C6C: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F0A9C70:
    ctx->pc = 0x7F0A9C70u;
    // 7F0A9C70: bl      0x7F3CC708
    {
            ctx->lr = 0x7F0A9C74u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F0A9C74:
    ctx->pc = 0x7F0A9C74u;
    ctx->downcount -= 5;
    // 7F0A9C74: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0A9C78:
    ctx->pc = 0x7F0A9C78u;
    // 7F0A9C78: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0A9C7C:
    ctx->pc = 0x7F0A9C7Cu;
    // 7F0A9C7C: stw     r3, 3736(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3736);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9C80:
    ctx->pc = 0x7F0A9C80u;
    // 7F0A9C80: stw     r0, 4056(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9C84:
    ctx->pc = 0x7F0A9C84u;
    // 7F0A9C84: b       0x7F0A9D0C
    {
            goto label_7F0A9D0C;
    }

label_7F0A9C88:
    ctx->pc = 0x7F0A9C88u;
    ctx->downcount -= 4;
    // 7F0A9C88: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9C8C:
    ctx->pc = 0x7F0A9C8Cu;
    // 7F0A9C8C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9C90:
    ctx->pc = 0x7F0A9C90u;
    // 7F0A9C90: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9C94:
    ctx->pc = 0x7F0A9C94u;
    // 7F0A9C94: bl      0x7F1029CC
    {
            ctx->lr = 0x7F0A9C98u;
            ctx->pc = 0x7F1029CCu;
            return;
    }

label_7F0A9C98:
    ctx->pc = 0x7F0A9C98u;
    ctx->downcount -= 2;
    // 7F0A9C98: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9C9C:
    ctx->pc = 0x7F0A9C9Cu;
    // 7F0A9C9C: bl      0x7F01A17C
    {
            ctx->lr = 0x7F0A9CA0u;
            ctx->pc = 0x7F01A17Cu;
            return;
    }

label_7F0A9CA0:
    ctx->pc = 0x7F0A9CA0u;
    ctx->downcount -= 7;
    // 7F0A9CA0: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9CA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9CA4:
    ctx->pc = 0x7F0A9CA4u;
    // 7F0A9CA4: stfs     f0, 4040(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9CA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4040);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9CA8:
    ctx->pc = 0x7F0A9CA8u;
    // 7F0A9CA8: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9CA8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9CAC:
    ctx->pc = 0x7F0A9CACu;
    // 7F0A9CAC: stfs     f0, 4044(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9CACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4044);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9CB0:
    ctx->pc = 0x7F0A9CB0u;
    // 7F0A9CB0: lfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9CB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9CB4:
    ctx->pc = 0x7F0A9CB4u;
    // 7F0A9CB4: stfs     f0, 4048(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9CB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4048);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9CB8:
    ctx->pc = 0x7F0A9CB8u;
    // 7F0A9CB8: stw     r30, 4000(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4000);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0A9CBC:
    ctx->pc = 0x7F0A9CBCu;
    ctx->downcount -= 4;
    // 7F0A9CBC: addi    r3, r31, 4040
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4040);

label_7F0A9CC0:
    ctx->pc = 0x7F0A9CC0u;
    // 7F0A9CC0: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0A9CC4:
    ctx->pc = 0x7F0A9CC4u;
    // 7F0A9CC4: addi    r5, r1, 12
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(12);

label_7F0A9CC8:
    ctx->pc = 0x7F0A9CC8u;
    // 7F0A9CC8: bl      0x7F3CC69C
    {
            ctx->lr = 0x7F0A9CCCu;
            ctx->pc = 0x7F3CC69Cu;
            return;
    }

label_7F0A9CCC:
    ctx->pc = 0x7F0A9CCCu;
    ctx->downcount -= 5;
    // 7F0A9CCC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A9CD0:
    ctx->pc = 0x7F0A9CD0u;
    // 7F0A9CD0: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_7F0A9CD4:
    ctx->pc = 0x7F0A9CD4u;
    // 7F0A9CD4: lfs     f0, -5284(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9CD4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9CD8:
    ctx->pc = 0x7F0A9CD8u;
    // 7F0A9CD8: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9CD8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9CDC:
    ctx->pc = 0x7F0A9CDCu;
    // 7F0A9CDC: bl      0x7F3CC708
    {
            ctx->lr = 0x7F0A9CE0u;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F0A9CE0:
    ctx->pc = 0x7F0A9CE0u;
    ctx->downcount -= 5;
    // 7F0A9CE0: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0A9CE4:
    ctx->pc = 0x7F0A9CE4u;
    // 7F0A9CE4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0A9CE8:
    ctx->pc = 0x7F0A9CE8u;
    // 7F0A9CE8: stw     r3, 3736(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3736);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9CEC:
    ctx->pc = 0x7F0A9CECu;
    // 7F0A9CEC: stw     r0, 4056(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9CF0:
    ctx->pc = 0x7F0A9CF0u;
    // 7F0A9CF0: b       0x7F0A9D0C
    {
            goto label_7F0A9D0C;
    }

label_7F0A9CF4:
    ctx->pc = 0x7F0A9CF4u;
    ctx->downcount -= 2;
    // 7F0A9CF4: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_7F0A9CF8:
    ctx->pc = 0x7F0A9CF8u;
    // 7F0A9CF8: bl      0x7F3CC708
    {
            ctx->lr = 0x7F0A9CFCu;
            ctx->pc = 0x7F3CC708u;
            return;
    }

label_7F0A9CFC:
    ctx->pc = 0x7F0A9CFCu;
    ctx->downcount -= 4;
    // 7F0A9CFC: extsh r3, r3
    {
        ctx->gpr[3] = (u32)(s32)(s16)ctx->gpr[3];
    }

label_7F0A9D00:
    ctx->pc = 0x7F0A9D00u;
    // 7F0A9D00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A9D04:
    ctx->pc = 0x7F0A9D04u;
    // 7F0A9D04: stw     r3, 3736(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3736);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9D08:
    ctx->pc = 0x7F0A9D08u;
    // 7F0A9D08: stw     r0, 4056(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9D0C:
    ctx->pc = 0x7F0A9D0Cu;
    ctx->downcount -= 16;
    // 7F0A9D0C: lmw     r29, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A9D10:
    ctx->pc = 0x7F0A9D10u;
    // 7F0A9D10: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9D14:
    ctx->pc = 0x7F0A9D14u;
    // 7F0A9D14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9D18:
    ctx->pc = 0x7F0A9D18u;
    // 7F0A9D18: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F0A9D1C:
    ctx->pc = 0x7F0A9D1Cu;
    // 7F0A9D1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9D20:
    ctx->pc = 0x7F0A9D20u;
    ctx->downcount -= 21;
    // 7F0A9D20: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9D24:
    ctx->pc = 0x7F0A9D24u;
    // 7F0A9D24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9D28:
    ctx->pc = 0x7F0A9D28u;
    // 7F0A9D28: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9D2C:
    ctx->pc = 0x7F0A9D2Cu;
    // 7F0A9D2C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A9D30:
    ctx->pc = 0x7F0A9D30u;
    // 7F0A9D30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9D34:
    ctx->pc = 0x7F0A9D34u;
    // 7F0A9D34: lwz     r4, 3780(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3780);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A9D38:
    ctx->pc = 0x7F0A9D38u;
    // 7F0A9D38: lwz     r29, 3772(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3772);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F0A9D3C:
    ctx->pc = 0x7F0A9D3Cu;
    // 7F0A9D3C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_7F0A9D40:
    ctx->pc = 0x7F0A9D40u;
    // 7F0A9D40: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A9D44:
    ctx->pc = 0x7F0A9D44u;
    // 7F0A9D44: stw     r0, 3780(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3780);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9D48:
    ctx->pc = 0x7F0A9D48u;
    // 7F0A9D48: bl      0x7F0A9E18
    {
            ctx->lr = 0x7F0A9D4Cu;
            goto label_7F0A9E18;
    }

label_7F0A9D4C:
    ctx->pc = 0x7F0A9D4Cu;
    ctx->downcount -= 8;
    // 7F0A9D4C: lwz     r6, 3732(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3732);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0A9D50:
    ctx->pc = 0x7F0A9D50u;
    // 7F0A9D50: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0A9D54:
    ctx->pc = 0x7F0A9D54u;
    // 7F0A9D54: lwz     r0, 3792(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3792);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9D58:
    ctx->pc = 0x7F0A9D58u;
    // 7F0A9D58: addi    r4, r31, 3724
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(3724);

label_7F0A9D5C:
    ctx->pc = 0x7F0A9D5Cu;
    // 7F0A9D5C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0A9D60:
    ctx->pc = 0x7F0A9D60u;
    // 7F0A9D60: subf   r0, r6, r0
    {
        u32 a = ~ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F0A9D64:
    ctx->pc = 0x7F0A9D64u;
    // 7F0A9D64: sth     r0, 3726(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3726);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A9D68:
    ctx->pc = 0x7F0A9D68u;
    // 7F0A9D68: bl      0x7F01E454
    {
            ctx->lr = 0x7F0A9D6Cu;
            ctx->pc = 0x7F01E454u;
            return;
    }

label_7F0A9D6C:
    ctx->pc = 0x7F0A9D6Cu;
    ctx->downcount -= 2;
    // 7F0A9D6C: cmplwi  r29, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0A9D70:
    ctx->pc = 0x7F0A9D70u;
    // 7F0A9D70: bc    4, 2, 0x7F0A9D84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9D84;
        }
    }

label_7F0A9D74:
    ctx->pc = 0x7F0A9D74u;
    ctx->downcount -= 4;
    // 7F0A9D74: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0A9D78:
    ctx->pc = 0x7F0A9D78u;
    // 7F0A9D78: addi    r0, r3, -24828
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-24828);

label_7F0A9D7C:
    ctx->pc = 0x7F0A9D7Cu;
    // 7F0A9D7C: stw     r0, 3772(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3772);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9D80:
    ctx->pc = 0x7F0A9D80u;
    // 7F0A9D80: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0A9D84:
    ctx->pc = 0x7F0A9D84u;
    ctx->downcount -= 6;
    // 7F0A9D84: or   r12, r29, r29
    {
        ctx->gpr[12] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9D88:
    ctx->pc = 0x7F0A9D88u;
    // 7F0A9D88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9D8C:
    ctx->pc = 0x7F0A9D8Cu;
    // 7F0A9D8C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9D90:
    ctx->pc = 0x7F0A9D90u;
    // 7F0A9D90: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F0A9D94:
    ctx->pc = 0x7F0A9D94u;
    // 7F0A9D94: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F0A9D98u;
            ctx->pc = target;
            return;
        }
    }

label_7F0A9D98:
    ctx->pc = 0x7F0A9D98u;
    ctx->downcount -= 7;
    // 7F0A9D98: lfs     f0, 460(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9D98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(460);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9D9C:
    ctx->pc = 0x7F0A9D9Cu;
    // 7F0A9D9C: li      r0, 500
    ctx->gpr[0] = (u32)(s32)(500);

label_7F0A9DA0:
    ctx->pc = 0x7F0A9DA0u;
    // 7F0A9DA0: stfs     f0, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9DA0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9DA4:
    ctx->pc = 0x7F0A9DA4u;
    // 7F0A9DA4: sth     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A9DA8:
    ctx->pc = 0x7F0A9DA8u;
    // 7F0A9DA8: lwz     r0, 3720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9DAC:
    ctx->pc = 0x7F0A9DACu;
    // 7F0A9DAC: cmpwi   r0, 0
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

label_7F0A9DB0:
    ctx->pc = 0x7F0A9DB0u;
    // 7F0A9DB0: bc    4, 0, 0x7F0A9DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9DC8;
        }
    }

label_7F0A9DB4:
    ctx->pc = 0x7F0A9DB4u;
    ctx->downcount -= 3;
    // 7F0A9DB4: lbz     r0, 202(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(202);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F0A9DB8:
    ctx->pc = 0x7F0A9DB8u;
    // 7F0A9DB8: extsb. r0, r0
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

label_7F0A9DBC:
    ctx->pc = 0x7F0A9DBCu;
    // 7F0A9DBC: bc    12, 2, 0x7F0A9DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9DC8;
        }
    }

label_7F0A9DC0:
    ctx->pc = 0x7F0A9DC0u;
    ctx->downcount -= 2;
    // 7F0A9DC0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A9DC4:
    ctx->pc = 0x7F0A9DC4u;
    // 7F0A9DC4: stw     r0, 3720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3720);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9DC8:
    ctx->pc = 0x7F0A9DC8u;
    ctx->downcount -= 15;
    // 7F0A9DC8: lwz     r3, 3720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3720);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9DCC:
    ctx->pc = 0x7F0A9DCCu;
    // 7F0A9DCC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F0A9DD0:
    ctx->pc = 0x7F0A9DD0u;
    // 7F0A9DD0: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9DD4:
    ctx->pc = 0x7F0A9DD4u;
    // 7F0A9DD4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A9DD8:
    ctx->pc = 0x7F0A9DD8u;
    // 7F0A9DD8: addi    r0, r3, -16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-16);

label_7F0A9DDC:
    ctx->pc = 0x7F0A9DDCu;
    // 7F0A9DDC: lfd     f1, -5248(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9DDCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5248);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0A9DE0:
    ctx->pc = 0x7F0A9DE0u;
    // 7F0A9DE0: stw     r0, 3720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3720);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9DE4:
    ctx->pc = 0x7F0A9DE4u;
    // 7F0A9DE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0A9DE8:
    ctx->pc = 0x7F0A9DE8u;
    // 7F0A9DE8: lwz     r0, 3720(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3720);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9DEC:
    ctx->pc = 0x7F0A9DECu;
    // 7F0A9DEC: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F0A9DF0:
    ctx->pc = 0x7F0A9DF0u;
    // 7F0A9DF0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9DF4:
    ctx->pc = 0x7F0A9DF4u;
    // 7F0A9DF4: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F0A9DF8:
    ctx->pc = 0x7F0A9DF8u;
    // 7F0A9DF8: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0A9DF8u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F0A9DFC:
    ctx->pc = 0x7F0A9DFCu;
    // 7F0A9DFC: stfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9DFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9E00:
    ctx->pc = 0x7F0A9E00u;
    // 7F0A9E00: bl      0x7F0A9E50
    {
            ctx->lr = 0x7F0A9E04u;
            goto label_7F0A9E50;
    }

label_7F0A9E04:
    ctx->pc = 0x7F0A9E04u;
    ctx->downcount -= 16;
    // 7F0A9E04: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A9E08:
    ctx->pc = 0x7F0A9E08u;
    // 7F0A9E08: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9E0C:
    ctx->pc = 0x7F0A9E0Cu;
    // 7F0A9E0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9E10:
    ctx->pc = 0x7F0A9E10u;
    // 7F0A9E10: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0A9E14:
    ctx->pc = 0x7F0A9E14u;
    // 7F0A9E14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9E18:
    ctx->pc = 0x7F0A9E18u;
    ctx->downcount -= 8;
    // 7F0A9E18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9E1C:
    ctx->pc = 0x7F0A9E1Cu;
    // 7F0A9E1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9E20:
    ctx->pc = 0x7F0A9E20u;
    // 7F0A9E20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9E24:
    ctx->pc = 0x7F0A9E24u;
    // 7F0A9E24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0A9E28:
    ctx->pc = 0x7F0A9E28u;
    // 7F0A9E28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9E2C:
    ctx->pc = 0x7F0A9E2Cu;
    // 7F0A9E2C: lwz     r3, 3792(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3792);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9E30:
    ctx->pc = 0x7F0A9E30u;
    // 7F0A9E30: lwz     r4, 3796(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3796);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A9E34:
    ctx->pc = 0x7F0A9E34u;
    // 7F0A9E34: bl      0x7F3C9D90
    {
            ctx->lr = 0x7F0A9E38u;
            ctx->pc = 0x7F3C9D90u;
            return;
    }

label_7F0A9E38:
    ctx->pc = 0x7F0A9E38u;
    ctx->downcount -= 7;
    // 7F0A9E38: stw     r3, 3792(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3792);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9E3C:
    ctx->pc = 0x7F0A9E3Cu;
    // 7F0A9E3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9E40:
    ctx->pc = 0x7F0A9E40u;
    // 7F0A9E40: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A9E44:
    ctx->pc = 0x7F0A9E44u;
    // 7F0A9E44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9E48:
    ctx->pc = 0x7F0A9E48u;
    // 7F0A9E48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9E4C:
    ctx->pc = 0x7F0A9E4Cu;
    // 7F0A9E4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9E50:
    ctx->pc = 0x7F0A9E50u;
    ctx->downcount -= 11;
    // 7F0A9E50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9E54:
    ctx->pc = 0x7F0A9E54u;
    // 7F0A9E54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9E58:
    ctx->pc = 0x7F0A9E58u;
    // 7F0A9E58: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0A9E5C:
    ctx->pc = 0x7F0A9E5Cu;
    // 7F0A9E5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0A9E60:
    ctx->pc = 0x7F0A9E60u;
    // 7F0A9E60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9E64:
    ctx->pc = 0x7F0A9E64u;
    // 7F0A9E64: addi    r5, r4, -5240
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5240);

label_7F0A9E68:
    ctx->pc = 0x7F0A9E68u;
    // 7F0A9E68: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9E68u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0A9E6C:
    ctx->pc = 0x7F0A9E6Cu;
    // 7F0A9E6C: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F0A9E70:
    ctx->pc = 0x7F0A9E70u;
    // 7F0A9E70: lwz     r4, 3792(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3792);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A9E74:
    ctx->pc = 0x7F0A9E74u;
    // 7F0A9E74: addi    r3, r3, 492
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(492);

label_7F0A9E78:
    ctx->pc = 0x7F0A9E78u;
    // 7F0A9E78: bl      0x7F041A9C
    {
            ctx->lr = 0x7F0A9E7Cu;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F0A9E7C:
    ctx->pc = 0x7F0A9E7Cu;
    ctx->downcount -= 5;
    // 7F0A9E7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9E80:
    ctx->pc = 0x7F0A9E80u;
    // 7F0A9E80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9E84:
    ctx->pc = 0x7F0A9E84u;
    // 7F0A9E84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9E88:
    ctx->pc = 0x7F0A9E88u;
    // 7F0A9E88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9E8C:
    ctx->pc = 0x7F0A9E8Cu;
    ctx->downcount -= 6;
    // 7F0A9E8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9E90:
    ctx->pc = 0x7F0A9E90u;
    // 7F0A9E90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9E94:
    ctx->pc = 0x7F0A9E94u;
    // 7F0A9E94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9E98:
    ctx->pc = 0x7F0A9E98u;
    // 7F0A9E98: lwz     r4, 3808(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3808);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0A9E9C:
    ctx->pc = 0x7F0A9E9Cu;
    // 7F0A9E9C: rlwinm. r0, r4, 0, 31, 31
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

label_7F0A9EA0:
    ctx->pc = 0x7F0A9EA0u;
    // 7F0A9EA0: bc    12, 2, 0x7F0A9EB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9EB8;
        }
    }

label_7F0A9EA4:
    ctx->pc = 0x7F0A9EA4u;
    ctx->downcount -= 3;
    // 7F0A9EA4: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0A9EA8:
    ctx->pc = 0x7F0A9EA8u;
    // 7F0A9EA8: addi    r4, r4, -24624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24624);

label_7F0A9EAC:
    ctx->pc = 0x7F0A9EACu;
    // 7F0A9EAC: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0A9EB0u;
            goto label_7F0AB18C;
    }

label_7F0A9EB0:
    ctx->pc = 0x7F0A9EB0u;
    ctx->downcount -= 2;
    // 7F0A9EB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0A9EB4:
    ctx->pc = 0x7F0A9EB4u;
    // 7F0A9EB4: b       0x7F0A9EF4
    {
            goto label_7F0A9EF4;
    }

label_7F0A9EB8:
    ctx->pc = 0x7F0A9EB8u;
    ctx->downcount -= 2;
    // 7F0A9EB8: rlwinm. r0, r4, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0A9EBC:
    ctx->pc = 0x7F0A9EBCu;
    // 7F0A9EBC: bc    12, 2, 0x7F0A9ED4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9ED4;
        }
    }

label_7F0A9EC0:
    ctx->pc = 0x7F0A9EC0u;
    ctx->downcount -= 3;
    // 7F0A9EC0: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0A9EC4:
    ctx->pc = 0x7F0A9EC4u;
    // 7F0A9EC4: addi    r4, r4, -24412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24412);

label_7F0A9EC8:
    ctx->pc = 0x7F0A9EC8u;
    // 7F0A9EC8: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0A9ECCu;
            goto label_7F0AB18C;
    }

label_7F0A9ECC:
    ctx->pc = 0x7F0A9ECCu;
    ctx->downcount -= 2;
    // 7F0A9ECC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0A9ED0:
    ctx->pc = 0x7F0A9ED0u;
    // 7F0A9ED0: b       0x7F0A9EF4
    {
            goto label_7F0A9EF4;
    }

label_7F0A9ED4:
    ctx->pc = 0x7F0A9ED4u;
    ctx->downcount -= 2;
    // 7F0A9ED4: rlwinm. r0, r4, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0A9ED8:
    ctx->pc = 0x7F0A9ED8u;
    // 7F0A9ED8: bc    12, 2, 0x7F0A9EF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9EF0;
        }
    }

label_7F0A9EDC:
    ctx->pc = 0x7F0A9EDCu;
    ctx->downcount -= 3;
    // 7F0A9EDC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0A9EE0:
    ctx->pc = 0x7F0A9EE0u;
    // 7F0A9EE0: addi    r4, r4, -24252
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24252);

label_7F0A9EE4:
    ctx->pc = 0x7F0A9EE4u;
    // 7F0A9EE4: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0A9EE8u;
            goto label_7F0AB18C;
    }

label_7F0A9EE8:
    ctx->pc = 0x7F0A9EE8u;
    ctx->downcount -= 2;
    // 7F0A9EE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0A9EEC:
    ctx->pc = 0x7F0A9EECu;
    // 7F0A9EEC: b       0x7F0A9EF4
    {
            goto label_7F0A9EF4;
    }

label_7F0A9EF0:
    ctx->pc = 0x7F0A9EF0u;
    ctx->downcount -= 1;
    // 7F0A9EF0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0A9EF4:
    ctx->pc = 0x7F0A9EF4u;
    ctx->downcount -= 5;
    // 7F0A9EF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9EF8:
    ctx->pc = 0x7F0A9EF8u;
    // 7F0A9EF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9EFC:
    ctx->pc = 0x7F0A9EFCu;
    // 7F0A9EFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9F00:
    ctx->pc = 0x7F0A9F00u;
    // 7F0A9F00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9F04:
    ctx->pc = 0x7F0A9F04u;
    ctx->downcount -= 21;
    // 7F0A9F04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9F08:
    ctx->pc = 0x7F0A9F08u;
    // 7F0A9F08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9F0C:
    ctx->pc = 0x7F0A9F0Cu;
    // 7F0A9F0C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0A9F10:
    ctx->pc = 0x7F0A9F10u;
    // 7F0A9F10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9F14:
    ctx->pc = 0x7F0A9F14u;
    // 7F0A9F14: lfs     f0, -5284(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9F14u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0A9F18:
    ctx->pc = 0x7F0A9F18u;
    // 7F0A9F18: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A9F1C:
    ctx->pc = 0x7F0A9F1Cu;
    // 7F0A9F1C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9F20:
    ctx->pc = 0x7F0A9F20u;
    // 7F0A9F20: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A9F24:
    ctx->pc = 0x7F0A9F24u;
    // 7F0A9F24: stfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9F24u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9F28:
    ctx->pc = 0x7F0A9F28u;
    // 7F0A9F28: stfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9F28u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0A9F2C:
    ctx->pc = 0x7F0A9F2Cu;
    // 7F0A9F2C: bl      0x7F0A8FDC
    {
            ctx->lr = 0x7F0A9F30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8FDCu;
                return;
            }
            goto label_7F0A8FDC;
    }

label_7F0A9F30:
    ctx->pc = 0x7F0A9F30u;
    ctx->downcount -= 2;
    // 7F0A9F30: cmpwi   r31, 0
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

label_7F0A9F34:
    ctx->pc = 0x7F0A9F34u;
    // 7F0A9F34: bc    4, 2, 0x7F0A9F50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9F50;
        }
    }

label_7F0A9F38:
    ctx->pc = 0x7F0A9F38u;
    ctx->downcount -= 6;
    // 7F0A9F38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0A9F3C:
    ctx->pc = 0x7F0A9F3Cu;
    // 7F0A9F3C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9F40:
    ctx->pc = 0x7F0A9F40u;
    // 7F0A9F40: stw     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9F44:
    ctx->pc = 0x7F0A9F44u;
    // 7F0A9F44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0A9F48:
    ctx->pc = 0x7F0A9F48u;
    // 7F0A9F48: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0A9F4C:
    ctx->pc = 0x7F0A9F4Cu;
    // 7F0A9F4C: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0A9F50u;
            goto label_7F0AB1A4;
    }

label_7F0A9F50:
    ctx->pc = 0x7F0A9F50u;
    ctx->downcount -= 2;
    // 7F0A9F50: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9F54:
    ctx->pc = 0x7F0A9F54u;
    // 7F0A9F54: bl      0x7F0AA8DC
    {
            ctx->lr = 0x7F0A9F58u;
            goto label_7F0AA8DC;
    }

label_7F0A9F58:
    ctx->pc = 0x7F0A9F58u;
    ctx->downcount -= 2;
    // 7F0A9F58: cmpwi   r3, 0
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

label_7F0A9F5C:
    ctx->pc = 0x7F0A9F5Cu;
    // 7F0A9F5C: bc    4, 2, 0x7F0A9FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9FBC;
        }
    }

label_7F0A9F60:
    ctx->pc = 0x7F0A9F60u;
    ctx->downcount -= 2;
    // 7F0A9F60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9F64:
    ctx->pc = 0x7F0A9F64u;
    // 7F0A9F64: bl      0x7F0A9E8C
    {
            ctx->lr = 0x7F0A9F68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9E8Cu;
                return;
            }
            goto label_7F0A9E8C;
    }

label_7F0A9F68:
    ctx->pc = 0x7F0A9F68u;
    ctx->downcount -= 2;
    // 7F0A9F68: cmpwi   r3, 0
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

label_7F0A9F6C:
    ctx->pc = 0x7F0A9F6Cu;
    // 7F0A9F6C: bc    4, 2, 0x7F0A9FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9FBC;
        }
    }

label_7F0A9F70:
    ctx->pc = 0x7F0A9F70u;
    ctx->downcount -= 3;
    // 7F0A9F70: lwz     r0, 3812(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3812);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9F74:
    ctx->pc = 0x7F0A9F74u;
    // 7F0A9F74: cmpwi   r0, 0
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

label_7F0A9F78:
    ctx->pc = 0x7F0A9F78u;
    // 7F0A9F78: bc    12, 0, 0x7F0A9F8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0A9F8C;
        }
    }

label_7F0A9F7C:
    ctx->pc = 0x7F0A9F7Cu;
    ctx->downcount -= 4;
    // 7F0A9F7C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0A9F80:
    ctx->pc = 0x7F0A9F80u;
    // 7F0A9F80: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0A9F84:
    ctx->pc = 0x7F0A9F84u;
    // 7F0A9F84: addi    r4, r4, -23732
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23732);

label_7F0A9F88:
    ctx->pc = 0x7F0A9F88u;
    // 7F0A9F88: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0A9F8Cu;
            goto label_7F0AB18C;
    }

label_7F0A9F8C:
    ctx->pc = 0x7F0A9F8Cu;
    ctx->downcount -= 12;
    // 7F0A9F8C: lwz     r0, 3732(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3732);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9F90:
    ctx->pc = 0x7F0A9F90u;
    // 7F0A9F90: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0A9F94:
    ctx->pc = 0x7F0A9F94u;
    // 7F0A9F94: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0A9F98:
    ctx->pc = 0x7F0A9F98u;
    // 7F0A9F98: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0A9F9C:
    ctx->pc = 0x7F0A9F9Cu;
    // 7F0A9F9C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9FA0:
    ctx->pc = 0x7F0A9FA0u;
    // 7F0A9FA0: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9FA4:
    ctx->pc = 0x7F0A9FA4u;
    // 7F0A9FA4: stw     r3, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9FA8:
    ctx->pc = 0x7F0A9FA8u;
    // 7F0A9FA8: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9FAC:
    ctx->pc = 0x7F0A9FACu;
    // 7F0A9FAC: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0A9FB0:
    ctx->pc = 0x7F0A9FB0u;
    // 7F0A9FB0: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9FB4:
    ctx->pc = 0x7F0A9FB4u;
    // 7F0A9FB4: stw     r3, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0A9FB8:
    ctx->pc = 0x7F0A9FB8u;
    // 7F0A9FB8: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9FBC:
    ctx->pc = 0x7F0A9FBCu;
    ctx->downcount -= 16;
    // 7F0A9FBC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0A9FC0:
    ctx->pc = 0x7F0A9FC0u;
    // 7F0A9FC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0A9FC4:
    ctx->pc = 0x7F0A9FC4u;
    // 7F0A9FC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0A9FC8:
    ctx->pc = 0x7F0A9FC8u;
    // 7F0A9FC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0A9FCC:
    ctx->pc = 0x7F0A9FCCu;
    // 7F0A9FCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0A9FD0:
    ctx->pc = 0x7F0A9FD0u;
    ctx->downcount -= 17;
    // 7F0A9FD0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0A9FD4:
    ctx->pc = 0x7F0A9FD4u;
    // 7F0A9FD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0A9FD8:
    ctx->pc = 0x7F0A9FD8u;
    // 7F0A9FD8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0A9FDC:
    ctx->pc = 0x7F0A9FDCu;
    // 7F0A9FDC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0A9FE0:
    ctx->pc = 0x7F0A9FE0u;
    // 7F0A9FE0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0A9FE4:
    ctx->pc = 0x7F0A9FE4u;
    // 7F0A9FE4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0A9FE8:
    ctx->pc = 0x7F0A9FE8u;
    // 7F0A9FE8: bl      0x7F0A8FDC
    {
            ctx->lr = 0x7F0A9FECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8FDCu;
                return;
            }
            goto label_7F0A8FDC;
    }

label_7F0A9FEC:
    ctx->pc = 0x7F0A9FECu;
    ctx->downcount -= 8;
    // 7F0A9FEC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0A9FF0:
    ctx->pc = 0x7F0A9FF0u;
    // 7F0A9FF0: lwz     r31, 3808(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3808);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0A9FF4:
    ctx->pc = 0x7F0A9FF4u;
    // 7F0A9FF4: addi    r4, r3, -5284
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5284);

label_7F0A9FF8:
    ctx->pc = 0x7F0A9FF8u;
    // 7F0A9FF8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0A9FFC:
    ctx->pc = 0x7F0A9FFCu;
    // 7F0A9FFC: lfs     f0, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0A9FFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AA000:
    ctx->pc = 0x7F0AA000u;
    // 7F0AA000: stfs     f0, 72(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA000u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AA004:
    ctx->pc = 0x7F0AA004u;
    // 7F0AA004: stfs     f0, 64(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA004u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AA008:
    ctx->pc = 0x7F0AA008u;
    // 7F0AA008: bl      0x7F0AA8DC
    {
            ctx->lr = 0x7F0AA00Cu;
            goto label_7F0AA8DC;
    }

label_7F0AA00C:
    ctx->pc = 0x7F0AA00Cu;
    ctx->downcount -= 2;
    // 7F0AA00C: cmpwi   r3, 0
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

label_7F0AA010:
    ctx->pc = 0x7F0AA010u;
    // 7F0AA010: bc    4, 2, 0x7F0AA090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA090;
        }
    }

label_7F0AA014:
    ctx->pc = 0x7F0AA014u;
    ctx->downcount -= 2;
    // 7F0AA014: cmpwi   r30, 0
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

label_7F0AA018:
    ctx->pc = 0x7F0AA018u;
    // 7F0AA018: bc    4, 2, 0x7F0AA02C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA02C;
        }
    }

label_7F0AA01C:
    ctx->pc = 0x7F0AA01Cu;
    ctx->downcount -= 4;
    // 7F0AA01C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AA020:
    ctx->pc = 0x7F0AA020u;
    // 7F0AA020: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0AA024:
    ctx->pc = 0x7F0AA024u;
    // 7F0AA024: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA028:
    ctx->pc = 0x7F0AA028u;
    // 7F0AA028: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA02Cu;
            goto label_7F0AB1A4;
    }

label_7F0AA02C:
    ctx->pc = 0x7F0AA02Cu;
    ctx->downcount -= 2;
    // 7F0AA02C: rlwinm. r0, r31, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AA030:
    ctx->pc = 0x7F0AA030u;
    // 7F0AA030: bc    4, 2, 0x7F0AA048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA048;
        }
    }

label_7F0AA034:
    ctx->pc = 0x7F0AA034u;
    ctx->downcount -= 4;
    // 7F0AA034: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA038:
    ctx->pc = 0x7F0AA038u;
    // 7F0AA038: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AA03C:
    ctx->pc = 0x7F0AA03Cu;
    // 7F0AA03C: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AA040:
    ctx->pc = 0x7F0AA040u;
    // 7F0AA040: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA044u;
            goto label_7F0AB18C;
    }

label_7F0AA044:
    ctx->pc = 0x7F0AA044u;
    ctx->downcount -= 1;
    // 7F0AA044: b       0x7F0AA090
    {
            goto label_7F0AA090;
    }

label_7F0AA048:
    ctx->pc = 0x7F0AA048u;
    ctx->downcount -= 14;
    // 7F0AA048: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AA04C:
    ctx->pc = 0x7F0AA04Cu;
    // 7F0AA04C: rlwinm. r0, r31, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AA050:
    ctx->pc = 0x7F0AA050u;
    // 7F0AA050: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0AA054:
    ctx->pc = 0x7F0AA054u;
    // 7F0AA054: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA058:
    ctx->pc = 0x7F0AA058u;
    // 7F0AA058: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA05C:
    ctx->pc = 0x7F0AA05Cu;
    // 7F0AA05C: stw     r3, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AA060:
    ctx->pc = 0x7F0AA060u;
    // 7F0AA060: stw     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA064:
    ctx->pc = 0x7F0AA064u;
    // 7F0AA064: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA068:
    ctx->pc = 0x7F0AA068u;
    // 7F0AA068: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA06C:
    ctx->pc = 0x7F0AA06Cu;
    // 7F0AA06C: stw     r3, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AA070:
    ctx->pc = 0x7F0AA070u;
    // 7F0AA070: stw     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA074:
    ctx->pc = 0x7F0AA074u;
    // 7F0AA074: lwz     r0, 3732(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3732);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA078:
    ctx->pc = 0x7F0AA078u;
    // 7F0AA078: sth     r0, 90(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AA07C:
    ctx->pc = 0x7F0AA07Cu;
    // 7F0AA07C: bc    12, 2, 0x7F0AA090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA090;
        }
    }

label_7F0AA080:
    ctx->pc = 0x7F0AA080u;
    ctx->downcount -= 4;
    // 7F0AA080: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA084:
    ctx->pc = 0x7F0AA084u;
    // 7F0AA084: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AA088:
    ctx->pc = 0x7F0AA088u;
    // 7F0AA088: addi    r4, r4, -24072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24072);

label_7F0AA08C:
    ctx->pc = 0x7F0AA08Cu;
    // 7F0AA08C: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA090u;
            goto label_7F0AB18C;
    }

label_7F0AA090:
    ctx->pc = 0x7F0AA090u;
    ctx->downcount -= 16;
    // 7F0AA090: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA094:
    ctx->pc = 0x7F0AA094u;
    // 7F0AA094: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA098:
    ctx->pc = 0x7F0AA098u;
    // 7F0AA098: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA09C:
    ctx->pc = 0x7F0AA09Cu;
    // 7F0AA09C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AA0A0:
    ctx->pc = 0x7F0AA0A0u;
    // 7F0AA0A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA0A4:
    ctx->pc = 0x7F0AA0A4u;
    ctx->downcount -= 17;
    // 7F0AA0A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA0A8:
    ctx->pc = 0x7F0AA0A8u;
    // 7F0AA0A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA0AC:
    ctx->pc = 0x7F0AA0ACu;
    // 7F0AA0AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA0B0:
    ctx->pc = 0x7F0AA0B0u;
    // 7F0AA0B0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA0B4:
    ctx->pc = 0x7F0AA0B4u;
    // 7F0AA0B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA0B8:
    ctx->pc = 0x7F0AA0B8u;
    // 7F0AA0B8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AA0BC:
    ctx->pc = 0x7F0AA0BCu;
    // 7F0AA0BC: bl      0x7F0A8FDC
    {
            ctx->lr = 0x7F0AA0C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8FDCu;
                return;
            }
            goto label_7F0A8FDC;
    }

label_7F0AA0C0:
    ctx->pc = 0x7F0AA0C0u;
    ctx->downcount -= 6;
    // 7F0AA0C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AA0C4:
    ctx->pc = 0x7F0AA0C4u;
    // 7F0AA0C4: cmpwi   r31, 0
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

label_7F0AA0C8:
    ctx->pc = 0x7F0AA0C8u;
    // 7F0AA0C8: lfs     f0, -5284(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA0C8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AA0CC:
    ctx->pc = 0x7F0AA0CCu;
    // 7F0AA0CC: stfs     f0, 72(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA0CCu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AA0D0:
    ctx->pc = 0x7F0AA0D0u;
    // 7F0AA0D0: stfs     f0, 64(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA0D0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AA0D4:
    ctx->pc = 0x7F0AA0D4u;
    // 7F0AA0D4: bc    4, 2, 0x7F0AA0E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA0E8;
        }
    }

label_7F0AA0D8:
    ctx->pc = 0x7F0AA0D8u;
    ctx->downcount -= 4;
    // 7F0AA0D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA0DC:
    ctx->pc = 0x7F0AA0DCu;
    // 7F0AA0DC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_7F0AA0E0:
    ctx->pc = 0x7F0AA0E0u;
    // 7F0AA0E0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA0E4:
    ctx->pc = 0x7F0AA0E4u;
    // 7F0AA0E4: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA0E8u;
            goto label_7F0AB1A4;
    }

label_7F0AA0E8:
    ctx->pc = 0x7F0AA0E8u;
    ctx->downcount -= 2;
    // 7F0AA0E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA0EC:
    ctx->pc = 0x7F0AA0ECu;
    // 7F0AA0EC: bl      0x7F0AA8DC
    {
            ctx->lr = 0x7F0AA0F0u;
            goto label_7F0AA8DC;
    }

label_7F0AA0F0:
    ctx->pc = 0x7F0AA0F0u;
    ctx->downcount -= 2;
    // 7F0AA0F0: cmpwi   r3, 0
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

label_7F0AA0F4:
    ctx->pc = 0x7F0AA0F4u;
    // 7F0AA0F4: bc    4, 2, 0x7F0AA130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA130;
        }
    }

label_7F0AA0F8:
    ctx->pc = 0x7F0AA0F8u;
    ctx->downcount -= 3;
    // 7F0AA0F8: lwz     r0, 3808(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA0FC:
    ctx->pc = 0x7F0AA0FCu;
    // 7F0AA0FC: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AA100:
    ctx->pc = 0x7F0AA100u;
    // 7F0AA100: bc    4, 2, 0x7F0AA128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA128;
        }
    }

label_7F0AA104:
    ctx->pc = 0x7F0AA104u;
    ctx->downcount -= 2;
    // 7F0AA104: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA108:
    ctx->pc = 0x7F0AA108u;
    // 7F0AA108: bl      0x7F0A9E8C
    {
            ctx->lr = 0x7F0AA10Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9E8Cu;
                return;
            }
            goto label_7F0A9E8C;
    }

label_7F0AA10C:
    ctx->pc = 0x7F0AA10Cu;
    ctx->downcount -= 2;
    // 7F0AA10C: cmpwi   r3, 0
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

label_7F0AA110:
    ctx->pc = 0x7F0AA110u;
    // 7F0AA110: bc    4, 2, 0x7F0AA130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA130;
        }
    }

label_7F0AA114:
    ctx->pc = 0x7F0AA114u;
    ctx->downcount -= 4;
    // 7F0AA114: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA118:
    ctx->pc = 0x7F0AA118u;
    // 7F0AA118: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA11C:
    ctx->pc = 0x7F0AA11Cu;
    // 7F0AA11C: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AA120:
    ctx->pc = 0x7F0AA120u;
    // 7F0AA120: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA124u;
            goto label_7F0AB18C;
    }

label_7F0AA124:
    ctx->pc = 0x7F0AA124u;
    ctx->downcount -= 1;
    // 7F0AA124: b       0x7F0AA130
    {
            goto label_7F0AA130;
    }

label_7F0AA128:
    ctx->pc = 0x7F0AA128u;
    ctx->downcount -= 2;
    // 7F0AA128: lwz     r0, 3732(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3732);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA12C:
    ctx->pc = 0x7F0AA12Cu;
    // 7F0AA12C: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AA130:
    ctx->pc = 0x7F0AA130u;
    ctx->downcount -= 16;
    // 7F0AA130: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA134:
    ctx->pc = 0x7F0AA134u;
    // 7F0AA134: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA138:
    ctx->pc = 0x7F0AA138u;
    // 7F0AA138: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA13C:
    ctx->pc = 0x7F0AA13Cu;
    // 7F0AA13C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AA140:
    ctx->pc = 0x7F0AA140u;
    // 7F0AA140: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA144:
    ctx->pc = 0x7F0AA144u;
    ctx->downcount -= 17;
    // 7F0AA144: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA148:
    ctx->pc = 0x7F0AA148u;
    // 7F0AA148: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA14C:
    ctx->pc = 0x7F0AA14Cu;
    // 7F0AA14C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA150:
    ctx->pc = 0x7F0AA150u;
    // 7F0AA150: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA154:
    ctx->pc = 0x7F0AA154u;
    // 7F0AA154: or.   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AA158:
    ctx->pc = 0x7F0AA158u;
    // 7F0AA158: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA15C:
    ctx->pc = 0x7F0AA15Cu;
    // 7F0AA15C: bc    4, 2, 0x7F0AA16C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA16C;
        }
    }

label_7F0AA160:
    ctx->pc = 0x7F0AA160u;
    ctx->downcount -= 3;
    // 7F0AA160: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0AA164:
    ctx->pc = 0x7F0AA164u;
    // 7F0AA164: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA168:
    ctx->pc = 0x7F0AA168u;
    // 7F0AA168: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA16Cu;
            goto label_7F0AB1A4;
    }

label_7F0AA16C:
    ctx->pc = 0x7F0AA16Cu;
    ctx->downcount -= 2;
    // 7F0AA16C: cmpwi   r31, 60
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AA170:
    ctx->pc = 0x7F0AA170u;
    // 7F0AA170: bc    4, 2, 0x7F0AA184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA184;
        }
    }

label_7F0AA174:
    ctx->pc = 0x7F0AA174u;
    ctx->downcount -= 4;
    // 7F0AA174: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA178:
    ctx->pc = 0x7F0AA178u;
    // 7F0AA178: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_7F0AA17C:
    ctx->pc = 0x7F0AA17Cu;
    // 7F0AA17C: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA180:
    ctx->pc = 0x7F0AA180u;
    // 7F0AA180: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA184u;
            goto label_7F0AB1A4;
    }

label_7F0AA184:
    ctx->pc = 0x7F0AA184u;
    ctx->downcount -= 2;
    // 7F0AA184: cmpwi   r31, 60
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(60);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AA188:
    ctx->pc = 0x7F0AA188u;
    // 7F0AA188: bc    4, 1, 0x7F0AA1B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA1B4;
        }
    }

label_7F0AA18C:
    ctx->pc = 0x7F0AA18Cu;
    ctx->downcount -= 5;
    // 7F0AA18C: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA190:
    ctx->pc = 0x7F0AA190u;
    // 7F0AA190: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA194:
    ctx->pc = 0x7F0AA194u;
    // 7F0AA194: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA198:
    ctx->pc = 0x7F0AA198u;
    // 7F0AA198: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AA19C:
    ctx->pc = 0x7F0AA19Cu;
    // 7F0AA19C: bc    12, 2, 0x7F0AA1B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA1B4;
        }
    }

label_7F0AA1A0:
    ctx->pc = 0x7F0AA1A0u;
    ctx->downcount -= 4;
    // 7F0AA1A0: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA1A4:
    ctx->pc = 0x7F0AA1A4u;
    // 7F0AA1A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA1A8:
    ctx->pc = 0x7F0AA1A8u;
    // 7F0AA1A8: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AA1AC:
    ctx->pc = 0x7F0AA1ACu;
    // 7F0AA1AC: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA1B0u;
            goto label_7F0AB18C;
    }

label_7F0AA1B0:
    ctx->pc = 0x7F0AA1B0u;
    ctx->downcount -= 1;
    // 7F0AA1B0: b       0x7F0AA1E4
    {
            goto label_7F0AA1E4;
    }

label_7F0AA1B4:
    ctx->pc = 0x7F0AA1B4u;
    ctx->downcount -= 12;
    // 7F0AA1B4: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0AA1B8:
    ctx->pc = 0x7F0AA1B8u;
    // 7F0AA1B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA1BC:
    ctx->pc = 0x7F0AA1BCu;
    // 7F0AA1BC: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0AA1C0:
    ctx->pc = 0x7F0AA1C0u;
    // 7F0AA1C0: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AA1C4:
    ctx->pc = 0x7F0AA1C4u;
    // 7F0AA1C4: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA1C8:
    ctx->pc = 0x7F0AA1C8u;
    // 7F0AA1C8: stw     r4, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AA1CC:
    ctx->pc = 0x7F0AA1CCu;
    // 7F0AA1CC: stw     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA1D0:
    ctx->pc = 0x7F0AA1D0u;
    // 7F0AA1D0: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AA1D4:
    ctx->pc = 0x7F0AA1D4u;
    // 7F0AA1D4: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA1D8:
    ctx->pc = 0x7F0AA1D8u;
    // 7F0AA1D8: stw     r4, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AA1DC:
    ctx->pc = 0x7F0AA1DCu;
    // 7F0AA1DC: stw     r0, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA1E0:
    ctx->pc = 0x7F0AA1E0u;
    // 7F0AA1E0: bl      0x7F0A8FDC
    {
            ctx->lr = 0x7F0AA1E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8FDCu;
                return;
            }
            goto label_7F0A8FDC;
    }

label_7F0AA1E4:
    ctx->pc = 0x7F0AA1E4u;
    ctx->downcount -= 16;
    // 7F0AA1E4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA1E8:
    ctx->pc = 0x7F0AA1E8u;
    // 7F0AA1E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA1EC:
    ctx->pc = 0x7F0AA1ECu;
    // 7F0AA1EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA1F0:
    ctx->pc = 0x7F0AA1F0u;
    // 7F0AA1F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AA1F4:
    ctx->pc = 0x7F0AA1F4u;
    // 7F0AA1F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA1F8:
    ctx->pc = 0x7F0AA1F8u;
    ctx->downcount -= 6;
    // 7F0AA1F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA1FC:
    ctx->pc = 0x7F0AA1FCu;
    // 7F0AA1FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA200:
    ctx->pc = 0x7F0AA200u;
    // 7F0AA200: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA204:
    ctx->pc = 0x7F0AA204u;
    // 7F0AA204: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0AA208:
    ctx->pc = 0x7F0AA208u;
    // 7F0AA208: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA20C:
    ctx->pc = 0x7F0AA20Cu;
    // 7F0AA20C: bl      0x7F0A8FDC
    {
            ctx->lr = 0x7F0AA210u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8FDCu;
                return;
            }
            goto label_7F0A8FDC;
    }

label_7F0AA210:
    ctx->pc = 0x7F0AA210u;
    ctx->downcount -= 2;
    // 7F0AA210: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA214:
    ctx->pc = 0x7F0AA214u;
    // 7F0AA214: bl      0x7F0AA8DC
    {
            ctx->lr = 0x7F0AA218u;
            goto label_7F0AA8DC;
    }

label_7F0AA218:
    ctx->pc = 0x7F0AA218u;
    ctx->downcount -= 2;
    // 7F0AA218: cmpwi   r3, 0
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

label_7F0AA21C:
    ctx->pc = 0x7F0AA21Cu;
    // 7F0AA21C: bc    4, 2, 0x7F0AA29C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA29C;
        }
    }

label_7F0AA220:
    ctx->pc = 0x7F0AA220u;
    ctx->downcount -= 3;
    // 7F0AA220: lwz     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA224:
    ctx->pc = 0x7F0AA224u;
    // 7F0AA224: rlwinm. r0, r0, 0, 30, 30
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

label_7F0AA228:
    ctx->pc = 0x7F0AA228u;
    // 7F0AA228: bc    12, 2, 0x7F0AA244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA244;
        }
    }

label_7F0AA22C:
    ctx->pc = 0x7F0AA22Cu;
    ctx->downcount -= 4;
    // 7F0AA22C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA230:
    ctx->pc = 0x7F0AA230u;
    // 7F0AA230: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F0AA234:
    ctx->pc = 0x7F0AA234u;
    // 7F0AA234: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AA238:
    ctx->pc = 0x7F0AA238u;
    // 7F0AA238: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA23Cu;
            goto label_7F0AB1A4;
    }

label_7F0AA23C:
    ctx->pc = 0x7F0AA23Cu;
    ctx->downcount -= 2;
    // 7F0AA23C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA240:
    ctx->pc = 0x7F0AA240u;
    // 7F0AA240: bl      0x7F0AB034
    {
            ctx->lr = 0x7F0AA244u;
            goto label_7F0AB034;
    }

label_7F0AA244:
    ctx->pc = 0x7F0AA244u;
    ctx->downcount -= 15;
    // 7F0AA244: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AA248:
    ctx->pc = 0x7F0AA248u;
    // 7F0AA248: addi    r4, r3, 12832
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0AA24C:
    ctx->pc = 0x7F0AA24Cu;
    // 7F0AA24C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA250:
    ctx->pc = 0x7F0AA250u;
    // 7F0AA250: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA254:
    ctx->pc = 0x7F0AA254u;
    // 7F0AA254: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AA258:
    ctx->pc = 0x7F0AA258u;
    // 7F0AA258: stw     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA25C:
    ctx->pc = 0x7F0AA25Cu;
    // 7F0AA25C: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA260:
    ctx->pc = 0x7F0AA260u;
    // 7F0AA260: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA264:
    ctx->pc = 0x7F0AA264u;
    // 7F0AA264: stw     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AA268:
    ctx->pc = 0x7F0AA268u;
    // 7F0AA268: stw     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA26C:
    ctx->pc = 0x7F0AA26Cu;
    // 7F0AA26C: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA270:
    ctx->pc = 0x7F0AA270u;
    // 7F0AA270: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA274:
    ctx->pc = 0x7F0AA274u;
    // 7F0AA274: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA278:
    ctx->pc = 0x7F0AA278u;
    // 7F0AA278: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AA27C:
    ctx->pc = 0x7F0AA27Cu;
    // 7F0AA27C: bc    4, 2, 0x7F0AA28C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA28C;
        }
    }

label_7F0AA280:
    ctx->pc = 0x7F0AA280u;
    ctx->downcount -= 3;
    // 7F0AA280: lwz     r0, 3808(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3808);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA284:
    ctx->pc = 0x7F0AA284u;
    // 7F0AA284: rlwinm. r0, r0, 0, 28, 28
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

label_7F0AA288:
    ctx->pc = 0x7F0AA288u;
    // 7F0AA288: bc    12, 2, 0x7F0AA29C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA29C;
        }
    }

label_7F0AA28C:
    ctx->pc = 0x7F0AA28Cu;
    ctx->downcount -= 4;
    // 7F0AA28C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA290:
    ctx->pc = 0x7F0AA290u;
    // 7F0AA290: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA294:
    ctx->pc = 0x7F0AA294u;
    // 7F0AA294: addi    r4, r4, -24624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24624);

label_7F0AA298:
    ctx->pc = 0x7F0AA298u;
    // 7F0AA298: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA29Cu;
            goto label_7F0AB18C;
    }

label_7F0AA29C:
    ctx->pc = 0x7F0AA29Cu;
    ctx->downcount -= 6;
    // 7F0AA29C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA2A0:
    ctx->pc = 0x7F0AA2A0u;
    // 7F0AA2A0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AA2A4:
    ctx->pc = 0x7F0AA2A4u;
    // 7F0AA2A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA2A8:
    ctx->pc = 0x7F0AA2A8u;
    // 7F0AA2A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AA2AC:
    ctx->pc = 0x7F0AA2ACu;
    // 7F0AA2AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA2B0:
    ctx->pc = 0x7F0AA2B0u;
    ctx->downcount -= 21;
    // 7F0AA2B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA2B4:
    ctx->pc = 0x7F0AA2B4u;
    // 7F0AA2B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA2B8:
    ctx->pc = 0x7F0AA2B8u;
    // 7F0AA2B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA2BC:
    ctx->pc = 0x7F0AA2BCu;
    // 7F0AA2BC: li      r0, 11
    ctx->gpr[0] = (u32)(s32)(11);

label_7F0AA2C0:
    ctx->pc = 0x7F0AA2C0u;
    // 7F0AA2C0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA2C4:
    ctx->pc = 0x7F0AA2C4u;
    // 7F0AA2C4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA2C8:
    ctx->pc = 0x7F0AA2C8u;
    // 7F0AA2C8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AA2CC:
    ctx->pc = 0x7F0AA2CCu;
    // 7F0AA2CC: stw     r0, 3836(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA2D0:
    ctx->pc = 0x7F0AA2D0u;
    // 7F0AA2D0: lwz     r0, 4056(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA2D4:
    ctx->pc = 0x7F0AA2D4u;
    // 7F0AA2D4: cmpwi   r0, 0
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

label_7F0AA2D8:
    ctx->pc = 0x7F0AA2D8u;
    // 7F0AA2D8: bc    12, 2, 0x7F0AA2E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA2E8;
        }
    }

label_7F0AA2DC:
    ctx->pc = 0x7F0AA2DCu;
    ctx->downcount -= 3;
    // 7F0AA2DC: lwz     r0, 3736(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA2E0:
    ctx->pc = 0x7F0AA2E0u;
    // 7F0AA2E0: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AA2E4:
    ctx->pc = 0x7F0AA2E4u;
    // 7F0AA2E4: b       0x7F0AA2F4
    {
            goto label_7F0AA2F4;
    }

label_7F0AA2E8:
    ctx->pc = 0x7F0AA2E8u;
    ctx->downcount -= 3;
    // 7F0AA2E8: lwz     r0, 3736(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3736);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA2EC:
    ctx->pc = 0x7F0AA2ECu;
    // 7F0AA2EC: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AA2F0:
    ctx->pc = 0x7F0AA2F0u;
    // 7F0AA2F0: sth     r0, 82(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(82);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AA2F4:
    ctx->pc = 0x7F0AA2F4u;
    ctx->downcount -= 4;
    // 7F0AA2F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AA2F8:
    ctx->pc = 0x7F0AA2F8u;
    // 7F0AA2F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA2FC:
    ctx->pc = 0x7F0AA2FCu;
    // 7F0AA2FC: stw     r0, 4056(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4056);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA300:
    ctx->pc = 0x7F0AA300u;
    // 7F0AA300: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AA304u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AA304:
    ctx->pc = 0x7F0AA304u;
    ctx->downcount -= 2;
    // 7F0AA304: cmpwi   r31, 0
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

label_7F0AA308:
    ctx->pc = 0x7F0AA308u;
    // 7F0AA308: bc    4, 2, 0x7F0AA31C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA31C;
        }
    }

label_7F0AA30C:
    ctx->pc = 0x7F0AA30Cu;
    ctx->downcount -= 4;
    // 7F0AA30C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA310:
    ctx->pc = 0x7F0AA310u;
    // 7F0AA310: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0AA314:
    ctx->pc = 0x7F0AA314u;
    // 7F0AA314: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA318:
    ctx->pc = 0x7F0AA318u;
    // 7F0AA318: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA31Cu;
            goto label_7F0AB1A4;
    }

label_7F0AA31C:
    ctx->pc = 0x7F0AA31Cu;
    ctx->downcount -= 3;
    // 7F0AA31C: lwz     r0, 3740(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA320:
    ctx->pc = 0x7F0AA320u;
    // 7F0AA320: cmpwi   r0, 50
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

label_7F0AA324:
    ctx->pc = 0x7F0AA324u;
    // 7F0AA324: bc    4, 0, 0x7F0AA338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA338;
        }
    }

label_7F0AA328:
    ctx->pc = 0x7F0AA328u;
    ctx->downcount -= 4;
    // 7F0AA328: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA32C:
    ctx->pc = 0x7F0AA32Cu;
    // 7F0AA32C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA330:
    ctx->pc = 0x7F0AA330u;
    // 7F0AA330: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AA334:
    ctx->pc = 0x7F0AA334u;
    // 7F0AA334: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA338u;
            goto label_7F0AB18C;
    }

label_7F0AA338:
    ctx->pc = 0x7F0AA338u;
    ctx->downcount -= 16;
    // 7F0AA338: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA33C:
    ctx->pc = 0x7F0AA33Cu;
    // 7F0AA33C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA340:
    ctx->pc = 0x7F0AA340u;
    // 7F0AA340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA344:
    ctx->pc = 0x7F0AA344u;
    // 7F0AA344: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AA348:
    ctx->pc = 0x7F0AA348u;
    // 7F0AA348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA34C:
    ctx->pc = 0x7F0AA34Cu;
    ctx->downcount -= 18;
    // 7F0AA34C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA350:
    ctx->pc = 0x7F0AA350u;
    // 7F0AA350: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA354:
    ctx->pc = 0x7F0AA354u;
    // 7F0AA354: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA358:
    ctx->pc = 0x7F0AA358u;
    // 7F0AA358: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA35C:
    ctx->pc = 0x7F0AA35Cu;
    // 7F0AA35C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA360:
    ctx->pc = 0x7F0AA360u;
    // 7F0AA360: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AA364:
    ctx->pc = 0x7F0AA364u;
    // 7F0AA364: lwz     r31, 3812(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3812);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0AA368:
    ctx->pc = 0x7F0AA368u;
    // 7F0AA368: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AA36Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AA36C:
    ctx->pc = 0x7F0AA36Cu;
    ctx->downcount -= 2;
    // 7F0AA36C: cmpwi   r30, 0
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

label_7F0AA370:
    ctx->pc = 0x7F0AA370u;
    // 7F0AA370: bc    4, 2, 0x7F0AA384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA384;
        }
    }

label_7F0AA374:
    ctx->pc = 0x7F0AA374u;
    ctx->downcount -= 4;
    // 7F0AA374: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AA378:
    ctx->pc = 0x7F0AA378u;
    // 7F0AA378: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AA37C:
    ctx->pc = 0x7F0AA37Cu;
    // 7F0AA37C: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA380:
    ctx->pc = 0x7F0AA380u;
    // 7F0AA380: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA384u;
            goto label_7F0AB1A4;
    }

label_7F0AA384:
    ctx->pc = 0x7F0AA384u;
    ctx->downcount -= 2;
    // 7F0AA384: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AA388:
    ctx->pc = 0x7F0AA388u;
    // 7F0AA388: bl      0x7F0A9E8C
    {
            ctx->lr = 0x7F0AA38Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9E8Cu;
                return;
            }
            goto label_7F0A9E8C;
    }

label_7F0AA38C:
    ctx->pc = 0x7F0AA38Cu;
    ctx->downcount -= 2;
    // 7F0AA38C: cmpwi   r3, 0
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

label_7F0AA390:
    ctx->pc = 0x7F0AA390u;
    // 7F0AA390: bc    4, 2, 0x7F0AA3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA3B4;
        }
    }

label_7F0AA394:
    ctx->pc = 0x7F0AA394u;
    ctx->downcount -= 2;
    // 7F0AA394: cmpwi   r31, 0
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

label_7F0AA398:
    ctx->pc = 0x7F0AA398u;
    // 7F0AA398: bc    4, 0, 0x7F0AA3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA3B4;
        }
    }

label_7F0AA39C:
    ctx->pc = 0x7F0AA39Cu;
    ctx->downcount -= 4;
    // 7F0AA39C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA3A0:
    ctx->pc = 0x7F0AA3A0u;
    // 7F0AA3A0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AA3A4:
    ctx->pc = 0x7F0AA3A4u;
    // 7F0AA3A4: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AA3A8:
    ctx->pc = 0x7F0AA3A8u;
    // 7F0AA3A8: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA3ACu;
            goto label_7F0AB18C;
    }

label_7F0AA3AC:
    ctx->pc = 0x7F0AA3ACu;
    ctx->downcount -= 2;
    // 7F0AA3AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AA3B0:
    ctx->pc = 0x7F0AA3B0u;
    // 7F0AA3B0: bl      0x7F0AB204
    {
            ctx->lr = 0x7F0AA3B4u;
            goto label_7F0AB204;
    }

label_7F0AA3B4:
    ctx->pc = 0x7F0AA3B4u;
    ctx->downcount -= 16;
    // 7F0AA3B4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA3B8:
    ctx->pc = 0x7F0AA3B8u;
    // 7F0AA3B8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA3BC:
    ctx->pc = 0x7F0AA3BCu;
    // 7F0AA3BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA3C0:
    ctx->pc = 0x7F0AA3C0u;
    // 7F0AA3C0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AA3C4:
    ctx->pc = 0x7F0AA3C4u;
    // 7F0AA3C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA3C8:
    ctx->pc = 0x7F0AA3C8u;
    ctx->downcount -= 21;
    // 7F0AA3C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA3CC:
    ctx->pc = 0x7F0AA3CCu;
    // 7F0AA3CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA3D0:
    ctx->pc = 0x7F0AA3D0u;
    // 7F0AA3D0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0AA3D4:
    ctx->pc = 0x7F0AA3D4u;
    // 7F0AA3D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA3D8:
    ctx->pc = 0x7F0AA3D8u;
    // 7F0AA3D8: lfs     f0, -5284(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA3D8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AA3DC:
    ctx->pc = 0x7F0AA3DCu;
    // 7F0AA3DC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA3E0:
    ctx->pc = 0x7F0AA3E0u;
    // 7F0AA3E0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA3E4:
    ctx->pc = 0x7F0AA3E4u;
    // 7F0AA3E4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AA3E8:
    ctx->pc = 0x7F0AA3E8u;
    // 7F0AA3E8: stfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA3E8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AA3EC:
    ctx->pc = 0x7F0AA3ECu;
    // 7F0AA3EC: stfs     f0, 64(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA3ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AA3F0:
    ctx->pc = 0x7F0AA3F0u;
    // 7F0AA3F0: bl      0x7F0AA8DC
    {
            ctx->lr = 0x7F0AA3F4u;
            goto label_7F0AA8DC;
    }

label_7F0AA3F4:
    ctx->pc = 0x7F0AA3F4u;
    ctx->downcount -= 2;
    // 7F0AA3F4: cmpwi   r3, 0
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

label_7F0AA3F8:
    ctx->pc = 0x7F0AA3F8u;
    // 7F0AA3F8: bc    4, 2, 0x7F0AA45C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA45C;
        }
    }

label_7F0AA3FC:
    ctx->pc = 0x7F0AA3FCu;
    ctx->downcount -= 2;
    // 7F0AA3FC: cmpwi   r31, 0
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

label_7F0AA400:
    ctx->pc = 0x7F0AA400u;
    // 7F0AA400: bc    4, 2, 0x7F0AA430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA430;
        }
    }

label_7F0AA404:
    ctx->pc = 0x7F0AA404u;
    ctx->downcount -= 4;
    // 7F0AA404: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA408:
    ctx->pc = 0x7F0AA408u;
    // 7F0AA408: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F0AA40C:
    ctx->pc = 0x7F0AA40Cu;
    // 7F0AA40C: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA410:
    ctx->pc = 0x7F0AA410u;
    // 7F0AA410: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA414u;
            goto label_7F0AB1A4;
    }

label_7F0AA414:
    ctx->pc = 0x7F0AA414u;
    ctx->downcount -= 1;
    // 7F0AA414: bl      0x800147F8
    {
            ctx->lr = 0x7F0AA418u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F0AA418:
    ctx->pc = 0x7F0AA418u;
    ctx->downcount -= 6;
    // 7F0AA418: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA41C:
    ctx->pc = 0x7F0AA41Cu;
    // 7F0AA41C: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AA420:
    ctx->pc = 0x7F0AA420u;
    // 7F0AA420: rlwinm r0, r0, 2, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x00000004u;
    }

label_7F0AA424:
    ctx->pc = 0x7F0AA424u;
    // 7F0AA424: add   r4, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F0AA428:
    ctx->pc = 0x7F0AA428u;
    // 7F0AA428: lwz     r4, 3712(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3712);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AA42C:
    ctx->pc = 0x7F0AA42Cu;
    // 7F0AA42C: bl      0x7F011A44
    {
            ctx->lr = 0x7F0AA430u;
            ctx->pc = 0x7F011A44u;
            return;
    }

label_7F0AA430:
    ctx->pc = 0x7F0AA430u;
    ctx->downcount -= 5;
    // 7F0AA430: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA434:
    ctx->pc = 0x7F0AA434u;
    // 7F0AA434: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA438:
    ctx->pc = 0x7F0AA438u;
    // 7F0AA438: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA43C:
    ctx->pc = 0x7F0AA43Cu;
    // 7F0AA43C: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AA440:
    ctx->pc = 0x7F0AA440u;
    // 7F0AA440: bc    12, 2, 0x7F0AA45C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA45C;
        }
    }

label_7F0AA444:
    ctx->pc = 0x7F0AA444u;
    ctx->downcount -= 2;
    // 7F0AA444: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA448:
    ctx->pc = 0x7F0AA448u;
    // 7F0AA448: bl      0x7F0A8FDC
    {
            ctx->lr = 0x7F0AA44Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8FDCu;
                return;
            }
            goto label_7F0A8FDC;
    }

label_7F0AA44C:
    ctx->pc = 0x7F0AA44Cu;
    ctx->downcount -= 4;
    // 7F0AA44C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA450:
    ctx->pc = 0x7F0AA450u;
    // 7F0AA450: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA454:
    ctx->pc = 0x7F0AA454u;
    // 7F0AA454: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AA458:
    ctx->pc = 0x7F0AA458u;
    // 7F0AA458: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA45Cu;
            goto label_7F0AB18C;
    }

label_7F0AA45C:
    ctx->pc = 0x7F0AA45Cu;
    ctx->downcount -= 16;
    // 7F0AA45C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA460:
    ctx->pc = 0x7F0AA460u;
    // 7F0AA460: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA464:
    ctx->pc = 0x7F0AA464u;
    // 7F0AA464: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA468:
    ctx->pc = 0x7F0AA468u;
    // 7F0AA468: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AA46C:
    ctx->pc = 0x7F0AA46Cu;
    // 7F0AA46C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA470:
    ctx->pc = 0x7F0AA470u;
    ctx->downcount -= 17;
    // 7F0AA470: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA474:
    ctx->pc = 0x7F0AA474u;
    // 7F0AA474: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA478:
    ctx->pc = 0x7F0AA478u;
    // 7F0AA478: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA47C:
    ctx->pc = 0x7F0AA47Cu;
    // 7F0AA47C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA480:
    ctx->pc = 0x7F0AA480u;
    // 7F0AA480: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA484:
    ctx->pc = 0x7F0AA484u;
    // 7F0AA484: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AA488:
    ctx->pc = 0x7F0AA488u;
    // 7F0AA488: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AA48Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AA48C:
    ctx->pc = 0x7F0AA48Cu;
    ctx->downcount -= 7;
    // 7F0AA48C: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA48Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AA490:
    ctx->pc = 0x7F0AA490u;
    // 7F0AA490: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AA494:
    ctx->pc = 0x7F0AA494u;
    // 7F0AA494: lfs     f1, 192(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA494u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AA498:
    ctx->pc = 0x7F0AA498u;
    // 7F0AA498: lfs     f0, -5296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA498u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AA49C:
    ctx->pc = 0x7F0AA49Cu;
    // 7F0AA49C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AA49Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0AA4A0:
    ctx->pc = 0x7F0AA4A0u;
    // 7F0AA4A0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AA4A0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0AA4A4:
    ctx->pc = 0x7F0AA4A4u;
    // 7F0AA4A4: bc    4, 0, 0x7F0AA4B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA4B4;
        }
    }

label_7F0AA4A8:
    ctx->pc = 0x7F0AA4A8u;
    ctx->downcount -= 3;
    // 7F0AA4A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA4AC:
    ctx->pc = 0x7F0AA4ACu;
    // 7F0AA4AC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AA4B0:
    ctx->pc = 0x7F0AA4B0u;
    // 7F0AA4B0: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AA4B4u;
            goto label_7F0AB1F4;
    }

label_7F0AA4B4:
    ctx->pc = 0x7F0AA4B4u;
    ctx->downcount -= 2;
    // 7F0AA4B4: cmpwi   r30, 0
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

label_7F0AA4B8:
    ctx->pc = 0x7F0AA4B8u;
    // 7F0AA4B8: bc    4, 2, 0x7F0AA574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA574;
        }
    }

label_7F0AA4BC:
    ctx->pc = 0x7F0AA4BCu;
    ctx->downcount -= 3;
    // 7F0AA4BC: lha     r0, 3602(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3602);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AA4C0:
    ctx->pc = 0x7F0AA4C0u;
    // 7F0AA4C0: cmpwi   r0, 0
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

label_7F0AA4C4:
    ctx->pc = 0x7F0AA4C4u;
    // 7F0AA4C4: bc    12, 1, 0x7F0AA55C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA55C;
        }
    }

label_7F0AA4C8:
    ctx->pc = 0x7F0AA4C8u;
    ctx->downcount -= 25;
    // 7F0AA4C8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AA4CC:
    ctx->pc = 0x7F0AA4CCu;
    // 7F0AA4CC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AA4D0:
    ctx->pc = 0x7F0AA4D0u;
    // 7F0AA4D0: addi    r5, r4, 19268
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19268);

label_7F0AA4D4:
    ctx->pc = 0x7F0AA4D4u;
    // 7F0AA4D4: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0AA4D8:
    ctx->pc = 0x7F0AA4D8u;
    // 7F0AA4D8: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA4DC:
    ctx->pc = 0x7F0AA4DCu;
    // 7F0AA4DC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F0AA4E0:
    ctx->pc = 0x7F0AA4E0u;
    // 7F0AA4E0: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AA4E4:
    ctx->pc = 0x7F0AA4E4u;
    // 7F0AA4E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AA4E8:
    ctx->pc = 0x7F0AA4E8u;
    // 7F0AA4E8: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0AA4EC:
    ctx->pc = 0x7F0AA4ECu;
    // 7F0AA4EC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AA4F0:
    ctx->pc = 0x7F0AA4F0u;
    // 7F0AA4F0: sth     r5, 5596(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5596);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0AA4F4:
    ctx->pc = 0x7F0AA4F4u;
    // 7F0AA4F4: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AA4F8:
    ctx->pc = 0x7F0AA4F8u;
    // 7F0AA4F8: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0AA4FC:
    ctx->pc = 0x7F0AA4FCu;
    // 7F0AA4FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AA500:
    ctx->pc = 0x7F0AA500u;
    // 7F0AA500: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AA504:
    ctx->pc = 0x7F0AA504u;
    // 7F0AA504: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0AA508:
    ctx->pc = 0x7F0AA508u;
    // 7F0AA508: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F0AA50C:
    ctx->pc = 0x7F0AA50Cu;
    // 7F0AA50C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0AA510:
    ctx->pc = 0x7F0AA510u;
    // 7F0AA510: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA514:
    ctx->pc = 0x7F0AA514u;
    // 7F0AA514: lwz     r0, 3708(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3708);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA518:
    ctx->pc = 0x7F0AA518u;
    // 7F0AA518: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F0AA51C:
    ctx->pc = 0x7F0AA51Cu;
    // 7F0AA51C: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0AA520:
    ctx->pc = 0x7F0AA520u;
    // 7F0AA520: lwz     r0, 3704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3704);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA524:
    ctx->pc = 0x7F0AA524u;
    // 7F0AA524: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0AA528:
    ctx->pc = 0x7F0AA528u;
    // 7F0AA528: bl      0x800501FC
    {
            ctx->lr = 0x7F0AA52Cu;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F0AA52C:
    ctx->pc = 0x7F0AA52Cu;
    ctx->downcount -= 2;
    // 7F0AA52C: stw     r3, 3700(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3700);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AA530:
    ctx->pc = 0x7F0AA530u;
    // 7F0AA530: bl      0x7F39991C
    {
            ctx->lr = 0x7F0AA534u;
            ctx->pc = 0x7F39991Cu;
            return;
    }

label_7F0AA534:
    ctx->pc = 0x7F0AA534u;
    ctx->downcount -= 3;
    // 7F0AA534: lis     r3, -128
    ctx->gpr[3] = ((u32)(s32)(-128) << 16);

label_7F0AA538:
    ctx->pc = 0x7F0AA538u;
    // 7F0AA538: addi    r3, r3, 32753
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32753);

label_7F0AA53C:
    ctx->pc = 0x7F0AA53Cu;
    // 7F0AA53C: bl      0x7F011604
    {
            ctx->lr = 0x7F0AA540u;
            ctx->pc = 0x7F011604u;
            return;
    }

label_7F0AA540:
    ctx->pc = 0x7F0AA540u;
    ctx->downcount -= 4;
    // 7F0AA540: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA544:
    ctx->pc = 0x7F0AA544u;
    // 7F0AA544: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F0AA548:
    ctx->pc = 0x7F0AA548u;
    // 7F0AA548: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA54C:
    ctx->pc = 0x7F0AA54Cu;
    // 7F0AA54C: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA550u;
            goto label_7F0AB1A4;
    }

label_7F0AA550:
    ctx->pc = 0x7F0AA550u;
    ctx->downcount -= 3;
    // 7F0AA550: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F0AA554:
    ctx->pc = 0x7F0AA554u;
    // 7F0AA554: stw     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA558:
    ctx->pc = 0x7F0AA558u;
    // 7F0AA558: b       0x7F0AA574
    {
            goto label_7F0AA574;
    }

label_7F0AA55C:
    ctx->pc = 0x7F0AA55Cu;
    ctx->downcount -= 4;
    // 7F0AA55C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA560:
    ctx->pc = 0x7F0AA560u;
    // 7F0AA560: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F0AA564:
    ctx->pc = 0x7F0AA564u;
    // 7F0AA564: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA568:
    ctx->pc = 0x7F0AA568u;
    // 7F0AA568: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA56Cu;
            goto label_7F0AB1A4;
    }

label_7F0AA56C:
    ctx->pc = 0x7F0AA56Cu;
    ctx->downcount -= 2;
    // 7F0AA56C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F0AA570:
    ctx->pc = 0x7F0AA570u;
    // 7F0AA570: stw     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA574:
    ctx->pc = 0x7F0AA574u;
    ctx->downcount -= 5;
    // 7F0AA574: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA578:
    ctx->pc = 0x7F0AA578u;
    // 7F0AA578: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA57C:
    ctx->pc = 0x7F0AA57Cu;
    // 7F0AA57C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA580:
    ctx->pc = 0x7F0AA580u;
    // 7F0AA580: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AA584:
    ctx->pc = 0x7F0AA584u;
    // 7F0AA584: bc    4, 2, 0x7F0AA598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA598;
        }
    }

label_7F0AA588:
    ctx->pc = 0x7F0AA588u;
    ctx->downcount -= 4;
    // 7F0AA588: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AA58C:
    ctx->pc = 0x7F0AA58Cu;
    // 7F0AA58C: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA590:
    ctx->pc = 0x7F0AA590u;
    // 7F0AA590: cmpwi   r0, 2
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

label_7F0AA594:
    ctx->pc = 0x7F0AA594u;
    // 7F0AA594: bc    4, 2, 0x7F0AA5A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA5A8;
        }
    }

label_7F0AA598:
    ctx->pc = 0x7F0AA598u;
    ctx->downcount -= 4;
    // 7F0AA598: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA59C:
    ctx->pc = 0x7F0AA59Cu;
    // 7F0AA59C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA5A0:
    ctx->pc = 0x7F0AA5A0u;
    // 7F0AA5A0: addi    r4, r4, -19940
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19940);

label_7F0AA5A4:
    ctx->pc = 0x7F0AA5A4u;
    // 7F0AA5A4: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA5A8u;
            goto label_7F0AB18C;
    }

label_7F0AA5A8:
    ctx->pc = 0x7F0AA5A8u;
    ctx->downcount -= 16;
    // 7F0AA5A8: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA5AC:
    ctx->pc = 0x7F0AA5ACu;
    // 7F0AA5AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA5B0:
    ctx->pc = 0x7F0AA5B0u;
    // 7F0AA5B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA5B4:
    ctx->pc = 0x7F0AA5B4u;
    // 7F0AA5B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AA5B8:
    ctx->pc = 0x7F0AA5B8u;
    // 7F0AA5B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA5BC:
    ctx->pc = 0x7F0AA5BCu;
    ctx->downcount -= 17;
    // 7F0AA5BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA5C0:
    ctx->pc = 0x7F0AA5C0u;
    // 7F0AA5C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA5C4:
    ctx->pc = 0x7F0AA5C4u;
    // 7F0AA5C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA5C8:
    ctx->pc = 0x7F0AA5C8u;
    // 7F0AA5C8: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA5CC:
    ctx->pc = 0x7F0AA5CCu;
    // 7F0AA5CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA5D0:
    ctx->pc = 0x7F0AA5D0u;
    // 7F0AA5D0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AA5D4:
    ctx->pc = 0x7F0AA5D4u;
    // 7F0AA5D4: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AA5D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AA5D8:
    ctx->pc = 0x7F0AA5D8u;
    ctx->downcount -= 7;
    // 7F0AA5D8: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA5D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AA5DC:
    ctx->pc = 0x7F0AA5DCu;
    // 7F0AA5DC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AA5E0:
    ctx->pc = 0x7F0AA5E0u;
    // 7F0AA5E0: lfs     f1, 192(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA5E0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AA5E4:
    ctx->pc = 0x7F0AA5E4u;
    // 7F0AA5E4: lfs     f0, -5296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA5E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AA5E8:
    ctx->pc = 0x7F0AA5E8u;
    // 7F0AA5E8: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AA5E8u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0AA5EC:
    ctx->pc = 0x7F0AA5ECu;
    // 7F0AA5EC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AA5ECu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0AA5F0:
    ctx->pc = 0x7F0AA5F0u;
    // 7F0AA5F0: bc    4, 0, 0x7F0AA600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA600;
        }
    }

label_7F0AA5F4:
    ctx->pc = 0x7F0AA5F4u;
    ctx->downcount -= 3;
    // 7F0AA5F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA5F8:
    ctx->pc = 0x7F0AA5F8u;
    // 7F0AA5F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AA5FC:
    ctx->pc = 0x7F0AA5FCu;
    // 7F0AA5FC: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AA600u;
            goto label_7F0AB1F4;
    }

label_7F0AA600:
    ctx->pc = 0x7F0AA600u;
    ctx->downcount -= 2;
    // 7F0AA600: cmpwi   r30, 0
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

label_7F0AA604:
    ctx->pc = 0x7F0AA604u;
    // 7F0AA604: bc    4, 2, 0x7F0AA6C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA6C0;
        }
    }

label_7F0AA608:
    ctx->pc = 0x7F0AA608u;
    ctx->downcount -= 3;
    // 7F0AA608: lha     r0, 3602(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3602);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AA60C:
    ctx->pc = 0x7F0AA60Cu;
    // 7F0AA60C: cmpwi   r0, 0
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

label_7F0AA610:
    ctx->pc = 0x7F0AA610u;
    // 7F0AA610: bc    12, 1, 0x7F0AA6A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA6A8;
        }
    }

label_7F0AA614:
    ctx->pc = 0x7F0AA614u;
    ctx->downcount -= 25;
    // 7F0AA614: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AA618:
    ctx->pc = 0x7F0AA618u;
    // 7F0AA618: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0AA61C:
    ctx->pc = 0x7F0AA61Cu;
    // 7F0AA61C: addi    r5, r4, 19268
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19268);

label_7F0AA620:
    ctx->pc = 0x7F0AA620u;
    // 7F0AA620: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0AA624:
    ctx->pc = 0x7F0AA624u;
    // 7F0AA624: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA628:
    ctx->pc = 0x7F0AA628u;
    // 7F0AA628: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F0AA62C:
    ctx->pc = 0x7F0AA62Cu;
    // 7F0AA62C: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AA630:
    ctx->pc = 0x7F0AA630u;
    // 7F0AA630: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AA634:
    ctx->pc = 0x7F0AA634u;
    // 7F0AA634: li      r0, 32
    ctx->gpr[0] = (u32)(s32)(32);

label_7F0AA638:
    ctx->pc = 0x7F0AA638u;
    // 7F0AA638: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AA63C:
    ctx->pc = 0x7F0AA63Cu;
    // 7F0AA63C: sth     r5, 5596(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(5596);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F0AA640:
    ctx->pc = 0x7F0AA640u;
    // 7F0AA640: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AA644:
    ctx->pc = 0x7F0AA644u;
    // 7F0AA644: li      r4, 100
    ctx->gpr[4] = (u32)(s32)(100);

label_7F0AA648:
    ctx->pc = 0x7F0AA648u;
    // 7F0AA648: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AA64C:
    ctx->pc = 0x7F0AA64Cu;
    // 7F0AA64C: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AA650:
    ctx->pc = 0x7F0AA650u;
    // 7F0AA650: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F0AA654:
    ctx->pc = 0x7F0AA654u;
    // 7F0AA654: li      r9, 34
    ctx->gpr[9] = (u32)(s32)(34);

label_7F0AA658:
    ctx->pc = 0x7F0AA658u;
    // 7F0AA658: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F0AA65C:
    ctx->pc = 0x7F0AA65Cu;
    // 7F0AA65C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA660:
    ctx->pc = 0x7F0AA660u;
    // 7F0AA660: lwz     r0, 3708(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3708);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA664:
    ctx->pc = 0x7F0AA664u;
    // 7F0AA664: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F0AA668:
    ctx->pc = 0x7F0AA668u;
    // 7F0AA668: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F0AA66C:
    ctx->pc = 0x7F0AA66Cu;
    // 7F0AA66C: lwz     r0, 3704(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3704);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA670:
    ctx->pc = 0x7F0AA670u;
    // 7F0AA670: rlwinm r3, r0, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F0AA674:
    ctx->pc = 0x7F0AA674u;
    // 7F0AA674: bl      0x800501FC
    {
            ctx->lr = 0x7F0AA678u;
            ctx->pc = 0x800501FCu;
            return;
    }

label_7F0AA678:
    ctx->pc = 0x7F0AA678u;
    ctx->downcount -= 2;
    // 7F0AA678: stw     r3, 3700(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3700);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AA67C:
    ctx->pc = 0x7F0AA67Cu;
    // 7F0AA67C: bl      0x7F39991C
    {
            ctx->lr = 0x7F0AA680u;
            ctx->pc = 0x7F39991Cu;
            return;
    }

label_7F0AA680:
    ctx->pc = 0x7F0AA680u;
    ctx->downcount -= 3;
    // 7F0AA680: lis     r3, -128
    ctx->gpr[3] = ((u32)(s32)(-128) << 16);

label_7F0AA684:
    ctx->pc = 0x7F0AA684u;
    // 7F0AA684: addi    r3, r3, 32753
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32753);

label_7F0AA688:
    ctx->pc = 0x7F0AA688u;
    // 7F0AA688: bl      0x7F011604
    {
            ctx->lr = 0x7F0AA68Cu;
            ctx->pc = 0x7F011604u;
            return;
    }

label_7F0AA68C:
    ctx->pc = 0x7F0AA68Cu;
    ctx->downcount -= 4;
    // 7F0AA68C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA690:
    ctx->pc = 0x7F0AA690u;
    // 7F0AA690: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_7F0AA694:
    ctx->pc = 0x7F0AA694u;
    // 7F0AA694: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA698:
    ctx->pc = 0x7F0AA698u;
    // 7F0AA698: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA69Cu;
            goto label_7F0AB1A4;
    }

label_7F0AA69C:
    ctx->pc = 0x7F0AA69Cu;
    ctx->downcount -= 3;
    // 7F0AA69C: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_7F0AA6A0:
    ctx->pc = 0x7F0AA6A0u;
    // 7F0AA6A0: stw     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA6A4:
    ctx->pc = 0x7F0AA6A4u;
    // 7F0AA6A4: b       0x7F0AA6C0
    {
            goto label_7F0AA6C0;
    }

label_7F0AA6A8:
    ctx->pc = 0x7F0AA6A8u;
    ctx->downcount -= 4;
    // 7F0AA6A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA6AC:
    ctx->pc = 0x7F0AA6ACu;
    // 7F0AA6AC: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_7F0AA6B0:
    ctx->pc = 0x7F0AA6B0u;
    // 7F0AA6B0: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA6B4:
    ctx->pc = 0x7F0AA6B4u;
    // 7F0AA6B4: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA6B8u;
            goto label_7F0AB1A4;
    }

label_7F0AA6B8:
    ctx->pc = 0x7F0AA6B8u;
    ctx->downcount -= 2;
    // 7F0AA6B8: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F0AA6BC:
    ctx->pc = 0x7F0AA6BCu;
    // 7F0AA6BC: stw     r0, 3836(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA6C0:
    ctx->pc = 0x7F0AA6C0u;
    ctx->downcount -= 5;
    // 7F0AA6C0: lwz     r3, 452(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA6C4:
    ctx->pc = 0x7F0AA6C4u;
    // 7F0AA6C4: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA6C8:
    ctx->pc = 0x7F0AA6C8u;
    // 7F0AA6C8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA6CC:
    ctx->pc = 0x7F0AA6CCu;
    // 7F0AA6CC: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AA6D0:
    ctx->pc = 0x7F0AA6D0u;
    // 7F0AA6D0: bc    4, 2, 0x7F0AA6E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA6E4;
        }
    }

label_7F0AA6D4:
    ctx->pc = 0x7F0AA6D4u;
    ctx->downcount -= 4;
    // 7F0AA6D4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AA6D8:
    ctx->pc = 0x7F0AA6D8u;
    // 7F0AA6D8: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA6DC:
    ctx->pc = 0x7F0AA6DCu;
    // 7F0AA6DC: cmpwi   r0, 2
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

label_7F0AA6E0:
    ctx->pc = 0x7F0AA6E0u;
    // 7F0AA6E0: bc    4, 2, 0x7F0AA6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA6F4;
        }
    }

label_7F0AA6E4:
    ctx->pc = 0x7F0AA6E4u;
    ctx->downcount -= 4;
    // 7F0AA6E4: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA6E8:
    ctx->pc = 0x7F0AA6E8u;
    // 7F0AA6E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA6EC:
    ctx->pc = 0x7F0AA6ECu;
    // 7F0AA6EC: addi    r4, r4, -19940
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19940);

label_7F0AA6F0:
    ctx->pc = 0x7F0AA6F0u;
    // 7F0AA6F0: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA6F4u;
            goto label_7F0AB18C;
    }

label_7F0AA6F4:
    ctx->pc = 0x7F0AA6F4u;
    ctx->downcount -= 16;
    // 7F0AA6F4: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA6F8:
    ctx->pc = 0x7F0AA6F8u;
    // 7F0AA6F8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA6FC:
    ctx->pc = 0x7F0AA6FCu;
    // 7F0AA6FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA700:
    ctx->pc = 0x7F0AA700u;
    // 7F0AA700: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AA704:
    ctx->pc = 0x7F0AA704u;
    // 7F0AA704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA708:
    ctx->pc = 0x7F0AA708u;
    ctx->downcount -= 23;
    // 7F0AA708: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA70C:
    ctx->pc = 0x7F0AA70Cu;
    // 7F0AA70C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA710:
    ctx->pc = 0x7F0AA710u;
    // 7F0AA710: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F0AA714:
    ctx->pc = 0x7F0AA714u;
    // 7F0AA714: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA718:
    ctx->pc = 0x7F0AA718u;
    // 7F0AA718: lfs     f0, -5296(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA718u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AA71C:
    ctx->pc = 0x7F0AA71Cu;
    // 7F0AA71C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA720:
    ctx->pc = 0x7F0AA720u;
    // 7F0AA720: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA724:
    ctx->pc = 0x7F0AA724u;
    // 7F0AA724: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AA728:
    ctx->pc = 0x7F0AA728u;
    // 7F0AA728: lfs     f2, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA728u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AA72C:
    ctx->pc = 0x7F0AA72Cu;
    // 7F0AA72C: lfs     f1, 192(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA72Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AA730:
    ctx->pc = 0x7F0AA730u;
    // 7F0AA730: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AA730u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0AA734:
    ctx->pc = 0x7F0AA734u;
    // 7F0AA734: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AA734u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0AA738:
    ctx->pc = 0x7F0AA738u;
    // 7F0AA738: bc    4, 0, 0x7F0AA744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA744;
        }
    }

label_7F0AA73C:
    ctx->pc = 0x7F0AA73Cu;
    ctx->downcount -= 2;
    // 7F0AA73C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AA740:
    ctx->pc = 0x7F0AA740u;
    // 7F0AA740: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AA744u;
            goto label_7F0AB1F4;
    }

label_7F0AA744:
    ctx->pc = 0x7F0AA744u;
    ctx->downcount -= 6;
    // 7F0AA744: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0AA748:
    ctx->pc = 0x7F0AA748u;
    // 7F0AA748: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA74C:
    ctx->pc = 0x7F0AA74Cu;
    // 7F0AA74C: lfs     f0, -5284(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA74Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AA750:
    ctx->pc = 0x7F0AA750u;
    // 7F0AA750: stfs     f0, 72(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA750u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AA754:
    ctx->pc = 0x7F0AA754u;
    // 7F0AA754: stfs     f0, 64(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F0AA754u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0AA758:
    ctx->pc = 0x7F0AA758u;
    // 7F0AA758: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AA75Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AA75C:
    ctx->pc = 0x7F0AA75Cu;
    ctx->downcount -= 2;
    // 7F0AA75C: cmpwi   r31, 0
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

label_7F0AA760:
    ctx->pc = 0x7F0AA760u;
    // 7F0AA760: bc    4, 2, 0x7F0AA798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA798;
        }
    }

label_7F0AA764:
    ctx->pc = 0x7F0AA764u;
    ctx->downcount -= 3;
    // 7F0AA764: li      r0, 7
    ctx->gpr[0] = (u32)(s32)(7);

label_7F0AA768:
    ctx->pc = 0x7F0AA768u;
    // 7F0AA768: stw     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA76C:
    ctx->pc = 0x7F0AA76Cu;
    // 7F0AA76C: bl      0x800147F8
    {
            ctx->lr = 0x7F0AA770u;
            ctx->pc = 0x800147F8u;
            return;
    }

label_7F0AA770:
    ctx->pc = 0x7F0AA770u;
    ctx->downcount -= 6;
    // 7F0AA770: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA774:
    ctx->pc = 0x7F0AA774u;
    // 7F0AA774: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AA778:
    ctx->pc = 0x7F0AA778u;
    // 7F0AA778: rlwinm r0, r0, 2, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0x00000004u;
    }

label_7F0AA77C:
    ctx->pc = 0x7F0AA77Cu;
    // 7F0AA77C: add   r4, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F0AA780:
    ctx->pc = 0x7F0AA780u;
    // 7F0AA780: lwz     r4, 3712(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3712);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AA784:
    ctx->pc = 0x7F0AA784u;
    // 7F0AA784: bl      0x7F011A44
    {
            ctx->lr = 0x7F0AA788u;
            ctx->pc = 0x7F011A44u;
            return;
    }

label_7F0AA788:
    ctx->pc = 0x7F0AA788u;
    ctx->downcount -= 4;
    // 7F0AA788: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA78C:
    ctx->pc = 0x7F0AA78Cu;
    // 7F0AA78C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_7F0AA790:
    ctx->pc = 0x7F0AA790u;
    // 7F0AA790: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA794:
    ctx->pc = 0x7F0AA794u;
    // 7F0AA794: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AA798u;
            goto label_7F0AB1A4;
    }

label_7F0AA798:
    ctx->pc = 0x7F0AA798u;
    ctx->downcount -= 5;
    // 7F0AA798: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA79C:
    ctx->pc = 0x7F0AA79Cu;
    // 7F0AA79C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA7A0:
    ctx->pc = 0x7F0AA7A0u;
    // 7F0AA7A0: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA7A4:
    ctx->pc = 0x7F0AA7A4u;
    // 7F0AA7A4: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AA7A8:
    ctx->pc = 0x7F0AA7A8u;
    // 7F0AA7A8: bc    4, 2, 0x7F0AA7BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA7BC;
        }
    }

label_7F0AA7AC:
    ctx->pc = 0x7F0AA7ACu;
    ctx->downcount -= 4;
    // 7F0AA7AC: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AA7B0:
    ctx->pc = 0x7F0AA7B0u;
    // 7F0AA7B0: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA7B4:
    ctx->pc = 0x7F0AA7B4u;
    // 7F0AA7B4: cmpwi   r0, 2
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

label_7F0AA7B8:
    ctx->pc = 0x7F0AA7B8u;
    // 7F0AA7B8: bc    4, 2, 0x7F0AA7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA7CC;
        }
    }

label_7F0AA7BC:
    ctx->pc = 0x7F0AA7BCu;
    ctx->downcount -= 4;
    // 7F0AA7BC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA7C0:
    ctx->pc = 0x7F0AA7C0u;
    // 7F0AA7C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA7C4:
    ctx->pc = 0x7F0AA7C4u;
    // 7F0AA7C4: addi    r4, r4, -19940
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19940);

label_7F0AA7C8:
    ctx->pc = 0x7F0AA7C8u;
    // 7F0AA7C8: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA7CCu;
            goto label_7F0AB18C;
    }

label_7F0AA7CC:
    ctx->pc = 0x7F0AA7CCu;
    ctx->downcount -= 16;
    // 7F0AA7CC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA7D0:
    ctx->pc = 0x7F0AA7D0u;
    // 7F0AA7D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA7D4:
    ctx->pc = 0x7F0AA7D4u;
    // 7F0AA7D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA7D8:
    ctx->pc = 0x7F0AA7D8u;
    // 7F0AA7D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AA7DC:
    ctx->pc = 0x7F0AA7DCu;
    // 7F0AA7DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA7E0:
    ctx->pc = 0x7F0AA7E0u;
    ctx->downcount -= 17;
    // 7F0AA7E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA7E4:
    ctx->pc = 0x7F0AA7E4u;
    // 7F0AA7E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA7E8:
    ctx->pc = 0x7F0AA7E8u;
    // 7F0AA7E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA7EC:
    ctx->pc = 0x7F0AA7ECu;
    // 7F0AA7EC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA7F0:
    ctx->pc = 0x7F0AA7F0u;
    // 7F0AA7F0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA7F4:
    ctx->pc = 0x7F0AA7F4u;
    // 7F0AA7F4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AA7F8:
    ctx->pc = 0x7F0AA7F8u;
    // 7F0AA7F8: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AA7FCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AA7FC:
    ctx->pc = 0x7F0AA7FCu;
    ctx->downcount -= 3;
    // 7F0AA7FC: addi    r3, r30, 704
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(704);

label_7F0AA800:
    ctx->pc = 0x7F0AA800u;
    // 7F0AA800: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F0AA804:
    ctx->pc = 0x7F0AA804u;
    // 7F0AA804: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0AA808u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0AA808:
    ctx->pc = 0x7F0AA808u;
    ctx->downcount -= 2;
    // 7F0AA808: cmpwi   r31, 0
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

label_7F0AA80C:
    ctx->pc = 0x7F0AA80Cu;
    // 7F0AA80C: bc    4, 2, 0x7F0AA884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA884;
        }
    }

label_7F0AA810:
    ctx->pc = 0x7F0AA810u;
    ctx->downcount -= 4;
    // 7F0AA810: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA814:
    ctx->pc = 0x7F0AA814u;
    // 7F0AA814: li      r31, 14
    ctx->gpr[31] = (u32)(s32)(14);

label_7F0AA818:
    ctx->pc = 0x7F0AA818u;
    // 7F0AA818: cmpwi   r0, 0
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

label_7F0AA81C:
    ctx->pc = 0x7F0AA81Cu;
    // 7F0AA81C: bc    4, 2, 0x7F0AA824
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA824;
        }
    }

label_7F0AA820:
    ctx->pc = 0x7F0AA820u;
    ctx->downcount -= 1;
    // 7F0AA820: li      r31, 15
    ctx->gpr[31] = (u32)(s32)(15);

label_7F0AA824:
    ctx->pc = 0x7F0AA824u;
    ctx->downcount -= 6;
    // 7F0AA824: addi    r4, r30, 448
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0AA828:
    ctx->pc = 0x7F0AA828u;
    // 7F0AA828: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F0AA82C:
    ctx->pc = 0x7F0AA82Cu;
    // 7F0AA82C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AA830:
    ctx->pc = 0x7F0AA830u;
    // 7F0AA830: li      r6, 180
    ctx->gpr[6] = (u32)(s32)(180);

label_7F0AA834:
    ctx->pc = 0x7F0AA834u;
    // 7F0AA834: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_7F0AA838:
    ctx->pc = 0x7F0AA838u;
    // 7F0AA838: bl      0x7F2F6FA4
    {
            ctx->lr = 0x7F0AA83Cu;
            ctx->pc = 0x7F2F6FA4u;
            return;
    }

label_7F0AA83C:
    ctx->pc = 0x7F0AA83Cu;
    ctx->downcount -= 4;
    // 7F0AA83C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA840:
    ctx->pc = 0x7F0AA840u;
    // 7F0AA840: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA844:
    ctx->pc = 0x7F0AA844u;
    // 7F0AA844: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AA848:
    ctx->pc = 0x7F0AA848u;
    // 7F0AA848: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AA84Cu;
            goto label_7F0AB0F8;
    }

label_7F0AA84C:
    ctx->pc = 0x7F0AA84Cu;
    ctx->downcount -= 3;
    // 7F0AA84C: lwz     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA850:
    ctx->pc = 0x7F0AA850u;
    // 7F0AA850: cmpwi   r0, 0
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

label_7F0AA854:
    ctx->pc = 0x7F0AA854u;
    // 7F0AA854: bc    4, 1, 0x7F0AA864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA864;
        }
    }

label_7F0AA858:
    ctx->pc = 0x7F0AA858u;
    ctx->downcount -= 3;
    // 7F0AA858: lwz     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA85C:
    ctx->pc = 0x7F0AA85Cu;
    // 7F0AA85C: cmpwi   r0, 0
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

label_7F0AA860:
    ctx->pc = 0x7F0AA860u;
    // 7F0AA860: bc    12, 1, 0x7F0AA870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA870;
        }
    }

label_7F0AA864:
    ctx->pc = 0x7F0AA864u;
    ctx->downcount -= 3;
    // 7F0AA864: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F0AA868:
    ctx->pc = 0x7F0AA868u;
    // 7F0AA868: stw     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA86C:
    ctx->pc = 0x7F0AA86Cu;
    // 7F0AA86C: stw     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA870:
    ctx->pc = 0x7F0AA870u;
    ctx->downcount -= 5;
    // 7F0AA870: lis     r0, 24576
    ctx->gpr[0] = ((u32)(s32)(24576) << 16);

label_7F0AA874:
    ctx->pc = 0x7F0AA874u;
    // 7F0AA874: stw     r0, 3876(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3876);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA878:
    ctx->pc = 0x7F0AA878u;
    // 7F0AA878: lwz     r3, 3880(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA87C:
    ctx->pc = 0x7F0AA87Cu;
    // 7F0AA87C: lwz     r4, 3876(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3876);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AA880:
    ctx->pc = 0x7F0AA880u;
    // 7F0AA880: bl      0x7F22DA88
    {
            ctx->lr = 0x7F0AA884u;
            ctx->pc = 0x7F22DA88u;
            return;
    }

label_7F0AA884:
    ctx->pc = 0x7F0AA884u;
    ctx->downcount -= 5;
    // 7F0AA884: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA888:
    ctx->pc = 0x7F0AA888u;
    // 7F0AA888: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA88C:
    ctx->pc = 0x7F0AA88Cu;
    // 7F0AA88C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA890:
    ctx->pc = 0x7F0AA890u;
    // 7F0AA890: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AA894:
    ctx->pc = 0x7F0AA894u;
    // 7F0AA894: bc    12, 2, 0x7F0AA8C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA8C8;
        }
    }

label_7F0AA898:
    ctx->pc = 0x7F0AA898u;
    ctx->downcount -= 3;
    // 7F0AA898: lwz     r0, 3740(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3740);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA89C:
    ctx->pc = 0x7F0AA89Cu;
    // 7F0AA89C: cmpwi   r0, 500
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(500);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AA8A0:
    ctx->pc = 0x7F0AA8A0u;
    // 7F0AA8A0: bc    4, 1, 0x7F0AA8B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA8B8;
        }
    }

label_7F0AA8A4:
    ctx->pc = 0x7F0AA8A4u;
    ctx->downcount -= 4;
    // 7F0AA8A4: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA8A8:
    ctx->pc = 0x7F0AA8A8u;
    // 7F0AA8A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA8AC:
    ctx->pc = 0x7F0AA8ACu;
    // 7F0AA8AC: addi    r4, r4, -23888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23888);

label_7F0AA8B0:
    ctx->pc = 0x7F0AA8B0u;
    // 7F0AA8B0: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA8B4u;
            goto label_7F0AB18C;
    }

label_7F0AA8B4:
    ctx->pc = 0x7F0AA8B4u;
    ctx->downcount -= 1;
    // 7F0AA8B4: b       0x7F0AA8C8
    {
            goto label_7F0AA8C8;
    }

label_7F0AA8B8:
    ctx->pc = 0x7F0AA8B8u;
    ctx->downcount -= 4;
    // 7F0AA8B8: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA8BC:
    ctx->pc = 0x7F0AA8BCu;
    // 7F0AA8BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AA8C0:
    ctx->pc = 0x7F0AA8C0u;
    // 7F0AA8C0: addi    r4, r4, -24828
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24828);

label_7F0AA8C4:
    ctx->pc = 0x7F0AA8C4u;
    // 7F0AA8C4: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA8C8u;
            goto label_7F0AB18C;
    }

label_7F0AA8C8:
    ctx->pc = 0x7F0AA8C8u;
    ctx->downcount -= 16;
    // 7F0AA8C8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AA8CC:
    ctx->pc = 0x7F0AA8CCu;
    // 7F0AA8CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA8D0:
    ctx->pc = 0x7F0AA8D0u;
    // 7F0AA8D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AA8D4:
    ctx->pc = 0x7F0AA8D4u;
    // 7F0AA8D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AA8D8:
    ctx->pc = 0x7F0AA8D8u;
    // 7F0AA8D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AA8DC:
    ctx->pc = 0x7F0AA8DCu;
    ctx->downcount -= 25;
    // 7F0AA8DC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AA8E0:
    ctx->pc = 0x7F0AA8E0u;
    // 7F0AA8E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AA8E4:
    ctx->pc = 0x7F0AA8E4u;
    // 7F0AA8E4: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0AA8E8:
    ctx->pc = 0x7F0AA8E8u;
    // 7F0AA8E8: lis     r4, 30720
    ctx->gpr[4] = ((u32)(s32)(30720) << 16);

label_7F0AA8EC:
    ctx->pc = 0x7F0AA8ECu;
    // 7F0AA8EC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA8F0:
    ctx->pc = 0x7F0AA8F0u;
    // 7F0AA8F0: addi    r5, r5, 19248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19248);

label_7F0AA8F4:
    ctx->pc = 0x7F0AA8F4u;
    // 7F0AA8F4: addi    r0, r4, 64
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(64);

label_7F0AA8F8:
    ctx->pc = 0x7F0AA8F8u;
    // 7F0AA8F8: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AA8FC:
    ctx->pc = 0x7F0AA8FCu;
    // 7F0AA8FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AA900:
    ctx->pc = 0x7F0AA900u;
    // 7F0AA900: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F0AA904:
    ctx->pc = 0x7F0AA904u;
    // 7F0AA904: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_7F0AA908:
    ctx->pc = 0x7F0AA908u;
    // 7F0AA908: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_7F0AA90C:
    ctx->pc = 0x7F0AA90Cu;
    // 7F0AA90C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AA910:
    ctx->pc = 0x7F0AA910u;
    // 7F0AA910: and.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AA914:
    ctx->pc = 0x7F0AA914u;
    // 7F0AA914: bc    12, 2, 0x7F0AA920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA920;
        }
    }

label_7F0AA918:
    ctx->pc = 0x7F0AA918u;
    ctx->downcount -= 1;
    // 7F0AA918: bl      0x7F0AAFD4
    {
            ctx->lr = 0x7F0AA91Cu;
            goto label_7F0AAFD4;
    }

label_7F0AA91C:
    ctx->pc = 0x7F0AA91Cu;
    ctx->downcount -= 1;
    // 7F0AA91C: b       0x7F0AAFBC
    {
            goto label_7F0AAFBC;
    }

label_7F0AA920:
    ctx->pc = 0x7F0AA920u;
    ctx->downcount -= 10;
    // 7F0AA920: lwz     r0, 3544(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3544);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA924:
    ctx->pc = 0x7F0AA924u;
    // 7F0AA924: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AA928:
    ctx->pc = 0x7F0AA928u;
    // 7F0AA928: lwz     r6, 3548(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3548);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AA92C:
    ctx->pc = 0x7F0AA92Cu;
    // 7F0AA92C: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F0AA930:
    ctx->pc = 0x7F0AA930u;
    // 7F0AA930: and   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[5];
    }

label_7F0AA934:
    ctx->pc = 0x7F0AA934u;
    // 7F0AA934: and   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] & ctx->gpr[4];
    }

label_7F0AA938:
    ctx->pc = 0x7F0AA938u;
    // 7F0AA938: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F0AA93C:
    ctx->pc = 0x7F0AA93Cu;
    // 7F0AA93C: xor   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[5];
    }

label_7F0AA940:
    ctx->pc = 0x7F0AA940u;
    // 7F0AA940: or.   r0, r4, r0
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

label_7F0AA944:
    ctx->pc = 0x7F0AA944u;
    // 7F0AA944: bc    12, 2, 0x7F0AA9A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA9A0;
        }
    }

label_7F0AA948:
    ctx->pc = 0x7F0AA948u;
    ctx->downcount -= 1;
    // 7F0AA948: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AA94Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AA94C:
    ctx->pc = 0x7F0AA94Cu;
    ctx->downcount -= 10;
    // 7F0AA94C: lwz     r3, 3536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3536);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA950:
    ctx->pc = 0x7F0AA950u;
    // 7F0AA950: li      r0, 64
    ctx->gpr[0] = (u32)(s32)(64);

label_7F0AA954:
    ctx->pc = 0x7F0AA954u;
    // 7F0AA954: lwz     r5, 3540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3540);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AA958:
    ctx->pc = 0x7F0AA958u;
    // 7F0AA958: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AA95C:
    ctx->pc = 0x7F0AA95Cu;
    // 7F0AA95C: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0AA960:
    ctx->pc = 0x7F0AA960u;
    // 7F0AA960: and   r3, r5, r4
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0AA964:
    ctx->pc = 0x7F0AA964u;
    // 7F0AA964: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F0AA968:
    ctx->pc = 0x7F0AA968u;
    // 7F0AA968: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F0AA96C:
    ctx->pc = 0x7F0AA96Cu;
    // 7F0AA96C: or.   r0, r3, r0
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

label_7F0AA970:
    ctx->pc = 0x7F0AA970u;
    // 7F0AA970: bc    12, 2, 0x7F0AA984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AA984;
        }
    }

label_7F0AA974:
    ctx->pc = 0x7F0AA974u;
    ctx->downcount -= 4;
    // 7F0AA974: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AA978:
    ctx->pc = 0x7F0AA978u;
    // 7F0AA978: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA97C:
    ctx->pc = 0x7F0AA97Cu;
    // 7F0AA97C: addi    r4, r4, -12656
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-12656);

label_7F0AA980:
    ctx->pc = 0x7F0AA980u;
    // 7F0AA980: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AA984u;
            goto label_7F0AB18C;
    }

label_7F0AA984:
    ctx->pc = 0x7F0AA984u;
    ctx->downcount -= 7;
    // 7F0AA984: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AA988:
    ctx->pc = 0x7F0AA988u;
    // 7F0AA988: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F0AA98C:
    ctx->pc = 0x7F0AA98Cu;
    // 7F0AA98C: stw     r0, 3548(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3548);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA990:
    ctx->pc = 0x7F0AA990u;
    // 7F0AA990: stw     r0, 3544(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3544);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA994:
    ctx->pc = 0x7F0AA994u;
    // 7F0AA994: stw     r0, 3540(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA998:
    ctx->pc = 0x7F0AA998u;
    // 7F0AA998: stw     r0, 3536(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3536);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA99C:
    ctx->pc = 0x7F0AA99Cu;
    // 7F0AA99C: b       0x7F0AAF70
    {
            goto label_7F0AAF70;
    }

label_7F0AA9A0:
    ctx->pc = 0x7F0AA9A0u;
    ctx->downcount -= 2;
    // 7F0AA9A0: li      r29, 12
    ctx->gpr[29] = (u32)(s32)(12);

label_7F0AA9A4:
    ctx->pc = 0x7F0AA9A4u;
    // 7F0AA9A4: li      r27, 2304
    ctx->gpr[27] = (u32)(s32)(2304);

label_7F0AA9A8:
    ctx->downcount -= 5;
    // 7F0AA9A8: addi    r30, r27, 704
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(704);

label_7F0AA9AC:
    // 7F0AA9AC: add   r30, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_7F0AA9B0:
    ctx->pc = 0x7F0AA9B0u;
    // 7F0AA9B0: lwz     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA9B4:
    // 7F0AA9B4: rlwinm. r0, r3, 0, 30, 30
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

label_7F0AA9B8:
    // 7F0AA9B8: bc    12, 2, 0x7F0AAA4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAA4C;
        }
    }

label_7F0AA9BC:
    ctx->downcount -= 2;
    // 7F0AA9BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA9C0:
    // 7F0AA9C0: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AA9C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AA9C4:
    ctx->pc = 0x7F0AA9C4u;
    ctx->downcount -= 4;
    // 7F0AA9C4: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA9C8:
    ctx->pc = 0x7F0AA9C8u;
    // 7F0AA9C8: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AA9CC:
    // 7F0AA9CC: rlwinm. r0, r3, 0, 19, 19
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

label_7F0AA9D0:
    // 7F0AA9D0: bc    12, 2, 0x7F0AAA08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAA08;
        }
    }

label_7F0AA9D4:
    ctx->pc = 0x7F0AA9D4u;
    ctx->downcount -= 12;
    // 7F0AA9D4: lwz     r5, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AA9D8:
    // 7F0AA9D8: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AA9DC:
    // 7F0AA9DC: addi    r4, r3, -15224
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-15224);

label_7F0AA9E0:
    // 7F0AA9E0: li      r25, 1
    ctx->gpr[25] = (u32)(s32)(1);

label_7F0AA9E4:
    // 7F0AA9E4: addi    r0, r5, -12
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-12);

label_7F0AA9E8:
    // 7F0AA9E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AA9EC:
    ctx->pc = 0x7F0AA9ECu;
    // 7F0AA9EC: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AA9F0:
    ctx->pc = 0x7F0AA9F0u;
    // 7F0AA9F0: lwz     r5, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AA9F4:
    ctx->pc = 0x7F0AA9F4u;
    // 7F0AA9F4: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AA9F8:
    // 7F0AA9F8: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F0AA9FC:
    ctx->pc = 0x7F0AA9FCu;
    // 7F0AA9FC: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAA00:
    // 7F0AAA00: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAA04u;
            goto label_7F0AB18C;
    }

label_7F0AAA04:
    ctx->downcount -= 1;
    // 7F0AAA04: b       0x7F0AAA30
    {
            goto label_7F0AAA30;
    }

label_7F0AAA08:
    ctx->downcount -= 2;
    // 7F0AAA08: rlwinm. r0, r3, 0, 16, 16
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

label_7F0AAA0C:
    // 7F0AAA0C: bc    12, 2, 0x7F0AAA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAA30;
        }
    }

label_7F0AAA10:
    ctx->pc = 0x7F0AAA10u;
    ctx->downcount -= 7;
    // 7F0AAA10: lwz     r5, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AAA14:
    // 7F0AAA14: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AAA18:
    // 7F0AAA18: addi    r4, r3, -13048
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-13048);

label_7F0AAA1C:
    // 7F0AAA1C: addi    r0, r5, -34
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-34);

label_7F0AAA20:
    // 7F0AAA20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAA24:
    ctx->pc = 0x7F0AAA24u;
    // 7F0AAA24: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAA28:
    // 7F0AAA28: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAA2Cu;
            goto label_7F0AB18C;
    }

label_7F0AAA2C:
    ctx->downcount -= 1;
    // 7F0AAA2C: li      r26, 1
    ctx->gpr[26] = (u32)(s32)(1);

label_7F0AAA30:
    ctx->downcount -= 7;
    // 7F0AAA30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AAA34:
    // 7F0AAA34: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F0AAA38:
    ctx->pc = 0x7F0AAA38u;
    // 7F0AAA38: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAA3C:
    ctx->pc = 0x7F0AAA3Cu;
    // 7F0AAA3C: stw     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAA40:
    ctx->pc = 0x7F0AAA40u;
    // 7F0AAA40: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAA44:
    ctx->pc = 0x7F0AAA44u;
    // 7F0AAA44: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAA48:
    // 7F0AAA48: b       0x7F0AAF70
    {
            goto label_7F0AAF70;
    }

label_7F0AAA4C:
    ctx->downcount -= 2;
    // 7F0AAA4C: rlwinm. r0, r3, 0, 31, 31
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

label_7F0AAA50:
    // 7F0AAA50: bc    12, 2, 0x7F0AAF64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAF64;
        }
    }

label_7F0AAA54:
    ctx->pc = 0x7F0AAA54u;
    ctx->downcount -= 12;
    // 7F0AAA54: stw     r29, 3696(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3696);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0AAA58:
    // 7F0AAA58: lis     r4, 4096
    ctx->gpr[4] = ((u32)(s32)(4096) << 16);

label_7F0AAA5C:
    // 7F0AAA5C: li      r3, 771
    ctx->gpr[3] = (u32)(s32)(771);

label_7F0AAA60:
    // 7F0AAA60: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AAA64:
    ctx->pc = 0x7F0AAA64u;
    // 7F0AAA64: lwz     r8, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0AAA68:
    ctx->pc = 0x7F0AAA68u;
    // 7F0AAA68: lwz     r5, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AAA6C:
    // 7F0AAA6C: and   r3, r8, r3
    {
        ctx->gpr[3] = ctx->gpr[8] & ctx->gpr[3];
    }

label_7F0AAA70:
    // 7F0AAA70: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0AAA74:
    // 7F0AAA74: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0AAA78:
    // 7F0AAA78: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0AAA7C:
    // 7F0AAA7C: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAA80:
    // 7F0AAA80: bc    12, 2, 0x7F0AAC18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAC18;
        }
    }

label_7F0AAA84:
    ctx->downcount -= 5;
    // 7F0AAA84: li      r3, 34
    ctx->gpr[3] = (u32)(s32)(34);

label_7F0AAA88:
    // 7F0AAA88: and   r3, r8, r3
    {
        ctx->gpr[3] = ctx->gpr[8] & ctx->gpr[3];
    }

label_7F0AAA8C:
    // 7F0AAA8C: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0AAA90:
    // 7F0AAA90: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAA94:
    // 7F0AAA94: bc    12, 2, 0x7F0AAB7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAB7C;
        }
    }

label_7F0AAA98:
    ctx->downcount -= 11;
    // 7F0AAA98: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F0AAA9C:
    // 7F0AAA9C: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F0AAAA0:
    // 7F0AAAA0: addi    r5, r4, -5736
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F0AAAA4:
    ctx->pc = 0x7F0AAAA4u;
    // 7F0AAAA4: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AAAA8:
    ctx->pc = 0x7F0AAAA8u;
    // 7F0AAAA8: lwz     r5, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AAAAC:
    // 7F0AAAAC: and   r4, r4, r3
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[3];
    }

label_7F0AAAB0:
    // 7F0AAAB0: and   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[0];
    }

label_7F0AAAB4:
    // 7F0AAAB4: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0AAAB8:
    // 7F0AAAB8: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0AAABC:
    // 7F0AAABC: or.   r0, r3, r0
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

label_7F0AAAC0:
    // 7F0AAAC0: bc    12, 2, 0x7F0AAAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAAF4;
        }
    }

label_7F0AAAC4:
    ctx->pc = 0x7F0AAAC4u;
    ctx->downcount -= 7;
    // 7F0AAAC4: lwz     r6, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AAAC8:
    // 7F0AAAC8: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AAACC:
    // 7F0AAACC: li      r3, 53
    ctx->gpr[3] = (u32)(s32)(53);

label_7F0AAAD0:
    // 7F0AAAD0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AAAD4:
    // 7F0AAAD4: addi    r0, r6, -33
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-33);

label_7F0AAAD8:
    ctx->pc = 0x7F0AAAD8u;
    // 7F0AAAD8: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAADC:
    // 7F0AAADC: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0AAAE0u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0AAAE0:
    ctx->downcount -= 4;
    // 7F0AAAE0: lis     r3, 243
    ctx->gpr[3] = ((u32)(s32)(243) << 16);

label_7F0AAAE4:
    // 7F0AAAE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AAAE8:
    // 7F0AAAE8: addi    r3, r3, 6046
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6046);

label_7F0AAAEC:
    // 7F0AAAEC: bl      0x7F013E60
    {
            ctx->lr = 0x7F0AAAF0u;
            ctx->pc = 0x7F013E60u;
            return;
    }

label_7F0AAAF0:
    ctx->downcount -= 1;
    // 7F0AAAF0: b       0x7F0AAB68
    {
            goto label_7F0AAB68;
    }

label_7F0AAAF4:
    ctx->downcount -= 1;
    // 7F0AAAF4: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F0AAAF8u;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F0AAAF8:
    ctx->downcount -= 6;
    // 7F0AAAF8: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0AAAFC:
    // 7F0AAAFC: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F0AAB00:
    // 7F0AAB00: addi    r3, r4, -180
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-180);

label_7F0AAB04:
    ctx->pc = 0x7F0AAB04u;
    // 7F0AAB04: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAB08:
    // 7F0AAB08: rlwinm. r0, r0, 0, 12, 12
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

label_7F0AAB0C:
    // 7F0AAB0C: bc    12, 2, 0x7F0AAB3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAB3C;
        }
    }

label_7F0AAB10:
    ctx->downcount -= 4;
    // 7F0AAB10: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AAB14:
    // 7F0AAB14: li      r3, 136
    ctx->gpr[3] = (u32)(s32)(136);

label_7F0AAB18:
    // 7F0AAB18: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AAB1C:
    // 7F0AAB1C: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0AAB20u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0AAB20:
    ctx->downcount -= 4;
    // 7F0AAB20: lis     r3, 232
    ctx->gpr[3] = ((u32)(s32)(232) << 16);

label_7F0AAB24:
    // 7F0AAB24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AAB28:
    // 7F0AAB28: addi    r3, r3, 23269
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23269);

label_7F0AAB2C:
    // 7F0AAB2C: bl      0x7F013E60
    {
            ctx->lr = 0x7F0AAB30u;
            ctx->pc = 0x7F013E60u;
            return;
    }

label_7F0AAB30:
    ctx->downcount -= 3;
    // 7F0AAB30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AAB34:
    ctx->pc = 0x7F0AAB34u;
    // 7F0AAB34: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAB38:
    // 7F0AAB38: b       0x7F0AAB68
    {
            goto label_7F0AAB68;
    }

label_7F0AAB3C:
    ctx->pc = 0x7F0AAB3Cu;
    ctx->downcount -= 7;
    // 7F0AAB3C: lwz     r6, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AAB40:
    // 7F0AAB40: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AAB44:
    // 7F0AAB44: li      r3, 53
    ctx->gpr[3] = (u32)(s32)(53);

label_7F0AAB48:
    // 7F0AAB48: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AAB4C:
    // 7F0AAB4C: addi    r0, r6, -33
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-33);

label_7F0AAB50:
    ctx->pc = 0x7F0AAB50u;
    // 7F0AAB50: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAB54:
    // 7F0AAB54: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0AAB58u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0AAB58:
    ctx->downcount -= 4;
    // 7F0AAB58: lis     r3, 243
    ctx->gpr[3] = ((u32)(s32)(243) << 16);

label_7F0AAB5C:
    // 7F0AAB5C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AAB60:
    // 7F0AAB60: addi    r3, r3, 6046
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(6046);

label_7F0AAB64:
    // 7F0AAB64: bl      0x7F013E60
    {
            ctx->lr = 0x7F0AAB68u;
            ctx->pc = 0x7F013E60u;
            return;
    }

label_7F0AAB68:
    ctx->downcount -= 4;
    // 7F0AAB68: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AAB6C:
    // 7F0AAB6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAB70:
    // 7F0AAB70: addi    r4, r4, -22776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22776);

label_7F0AAB74:
    // 7F0AAB74: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAB78u;
            goto label_7F0AB18C;
    }

label_7F0AAB78:
    ctx->downcount -= 1;
    // 7F0AAB78: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AAB7C:
    ctx->downcount -= 1;
    // 7F0AAB7C: bl      0x7F2BB4A0
    {
            ctx->lr = 0x7F0AAB80u;
            ctx->pc = 0x7F2BB4A0u;
            return;
    }

label_7F0AAB80:
    ctx->downcount -= 6;
    // 7F0AAB80: lis     r4, 32583
    ctx->gpr[4] = ((u32)(s32)(32583) << 16);

label_7F0AAB84:
    // 7F0AAB84: rlwinm r0, r3, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_7F0AAB88:
    // 7F0AAB88: addi    r3, r4, -180
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-180);

label_7F0AAB8C:
    ctx->pc = 0x7F0AAB8Cu;
    // 7F0AAB8C: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAB90:
    // 7F0AAB90: rlwinm. r0, r0, 0, 13, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00070000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAB94:
    // 7F0AAB94: bc    12, 2, 0x7F0AABC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AABC8;
        }
    }

label_7F0AAB98:
    ctx->downcount -= 4;
    // 7F0AAB98: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AAB9C:
    // 7F0AAB9C: li      r3, 52
    ctx->gpr[3] = (u32)(s32)(52);

label_7F0AABA0:
    // 7F0AABA0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AABA4:
    // 7F0AABA4: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0AABA8u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0AABA8:
    ctx->downcount -= 4;
    // 7F0AABA8: lis     r3, 232
    ctx->gpr[3] = ((u32)(s32)(232) << 16);

label_7F0AABAC:
    // 7F0AABAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AABB0:
    // 7F0AABB0: addi    r3, r3, 23268
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23268);

label_7F0AABB4:
    // 7F0AABB4: bl      0x7F013E60
    {
            ctx->lr = 0x7F0AABB8u;
            ctx->pc = 0x7F013E60u;
            return;
    }

label_7F0AABB8:
    ctx->pc = 0x7F0AABB8u;
    ctx->downcount -= 4;
    // 7F0AABB8: lwz     r3, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AABBC:
    // 7F0AABBC: addi    r0, r3, -20
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20);

label_7F0AABC0:
    ctx->pc = 0x7F0AABC0u;
    // 7F0AABC0: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AABC4:
    // 7F0AABC4: b       0x7F0AABE4
    {
            goto label_7F0AABE4;
    }

label_7F0AABC8:
    ctx->downcount -= 4;
    // 7F0AABC8: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F0AABCC:
    // 7F0AABCC: li      r3, 52
    ctx->gpr[3] = (u32)(s32)(52);

label_7F0AABD0:
    // 7F0AABD0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AABD4:
    // 7F0AABD4: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0AABD8u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0AABD8:
    ctx->pc = 0x7F0AABD8u;
    ctx->downcount -= 3;
    // 7F0AABD8: lwz     r3, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AABDC:
    // 7F0AABDC: addi    r0, r3, -20
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-20);

label_7F0AABE0:
    ctx->pc = 0x7F0AABE0u;
    // 7F0AABE0: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AABE4:
    ctx->pc = 0x7F0AABE4u;
    ctx->downcount -= 3;
    // 7F0AABE4: lwz     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AABE8:
    // 7F0AABE8: cmpwi   r0, 0
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

label_7F0AABEC:
    // 7F0AABEC: bc    12, 1, 0x7F0AAC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAC04;
        }
    }

label_7F0AABF0:
    ctx->downcount -= 4;
    // 7F0AABF0: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AABF4:
    // 7F0AABF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AABF8:
    // 7F0AABF8: addi    r4, r4, -23108
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23108);

label_7F0AABFC:
    // 7F0AABFC: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAC00u;
            goto label_7F0AB18C;
    }

label_7F0AAC00:
    ctx->downcount -= 1;
    // 7F0AAC00: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AAC04:
    ctx->downcount -= 4;
    // 7F0AAC04: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AAC08:
    // 7F0AAC08: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAC0C:
    // 7F0AAC0C: addi    r4, r4, -23608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23608);

label_7F0AAC10:
    // 7F0AAC10: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAC14u;
            goto label_7F0AB18C;
    }

label_7F0AAC14:
    ctx->downcount -= 1;
    // 7F0AAC14: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AAC18:
    ctx->downcount -= 8;
    // 7F0AAC18: lis     r7, 8
    ctx->gpr[7] = ((u32)(s32)(8) << 16);

label_7F0AAC1C:
    // 7F0AAC1C: and   r6, r8, r0
    {
        ctx->gpr[6] = ctx->gpr[8] & ctx->gpr[0];
    }

label_7F0AAC20:
    // 7F0AAC20: addi    r3, r7, 2
    ctx->gpr[3] = ctx->gpr[7] + (u32)(s32)(2);

label_7F0AAC24:
    // 7F0AAC24: and   r4, r5, r3
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F0AAC28:
    // 7F0AAC28: xor   r3, r6, r0
    {
        ctx->gpr[3] = ctx->gpr[6] ^ ctx->gpr[0];
    }

label_7F0AAC2C:
    // 7F0AAC2C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0AAC30:
    // 7F0AAC30: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAC34:
    // 7F0AAC34: bc    12, 2, 0x7F0AACEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AACEC;
        }
    }

label_7F0AAC38:
    ctx->downcount -= 2;
    // 7F0AAC38: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AAC3C:
    // 7F0AAC3C: bl      0x7F0B2170
    {
            ctx->lr = 0x7F0AAC40u;
            ctx->pc = 0x7F0B2170u;
            return;
    }

label_7F0AAC40:
    ctx->downcount -= 5;
    // 7F0AAC40: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AAC44:
    // 7F0AAC44: addi    r3, r31, 448
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(448);

label_7F0AAC48:
    // 7F0AAC48: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0AAC4C:
    // 7F0AAC4C: addi    r5, r30, 128
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(128);

label_7F0AAC50:
    // 7F0AAC50: bl      0x7F12BFFC
    {
            ctx->lr = 0x7F0AAC54u;
            ctx->pc = 0x7F12BFFCu;
            return;
    }

label_7F0AAC54:
    ctx->pc = 0x7F0AAC54u;
    ctx->downcount -= 7;
    // 7F0AAC54: lwz     r3, 3844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3844);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAC58:
    // 7F0AAC58: addi    r0, r3, -25
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-25);

label_7F0AAC5C:
    ctx->pc = 0x7F0AAC5Cu;
    // 7F0AAC5C: stw     r0, 3844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAC60:
    ctx->pc = 0x7F0AAC60u;
    // 7F0AAC60: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAC64:
    ctx->pc = 0x7F0AAC64u;
    // 7F0AAC64: lha     r4, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AAC68:
    // 7F0AAC68: extsh. r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAC6C:
    // 7F0AAC6C: bc    4, 1, 0x7F0AAC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAC8C;
        }
    }

label_7F0AAC70:
    ctx->pc = 0x7F0AAC70u;
    ctx->downcount -= 3;
    // 7F0AAC70: lwz     r0, 3844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAC74:
    // 7F0AAC74: cmpwi   r0, 0
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

label_7F0AAC78:
    // 7F0AAC78: bc    4, 1, 0x7F0AAC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAC8C;
        }
    }

label_7F0AAC7C:
    ctx->downcount -= 2;
    // 7F0AAC7C: cmpwi   r29, 3
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

label_7F0AAC80:
    // 7F0AAC80: bc    12, 2, 0x7F0AAC8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAC8C;
        }
    }

label_7F0AAC84:
    ctx->downcount -= 2;
    // 7F0AAC84: cmpwi   r29, 2
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AAC88:
    // 7F0AAC88: bc    4, 2, 0x7F0AACD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AACD8;
        }
    }

label_7F0AAC8C:
    ctx->downcount -= 4;
    // 7F0AAC8C: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AAC90:
    ctx->pc = 0x7F0AAC90u;
    // 7F0AAC90: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAC94:
    // 7F0AAC94: cmpwi   r0, 2
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

label_7F0AAC98:
    // 7F0AAC98: bc    12, 2, 0x7F0AACCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AACCC;
        }
    }

label_7F0AAC9C:
    ctx->downcount -= 2;
    // 7F0AAC9C: extsh. r0, r4
    {
        ctx->gpr[0] = (u32)(s32)(s16)ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AACA0:
    // 7F0AACA0: bc    12, 1, 0x7F0AACB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AACB0;
        }
    }

label_7F0AACA4:
    ctx->downcount -= 3;
    // 7F0AACA4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AACA8:
    // 7F0AACA8: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0AACAC:
    ctx->pc = 0x7F0AACACu;
    // 7F0AACAC: stw     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AACB0:
    ctx->downcount -= 6;
    // 7F0AACB0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AACB4:
    // 7F0AACB4: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AACB8:
    ctx->pc = 0x7F0AACB8u;
    // 7F0AACB8: stw     r0, 3844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AACBC:
    // 7F0AACBC: addi    r4, r3, -23440
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-23440);

label_7F0AACC0:
    // 7F0AACC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AACC4:
    // 7F0AACC4: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AACC8u;
            goto label_7F0AB18C;
    }

label_7F0AACC8:
    ctx->downcount -= 1;
    // 7F0AACC8: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AACCC:
    ctx->downcount -= 3;
    // 7F0AACCC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AACD0:
    ctx->pc = 0x7F0AACD0u;
    // 7F0AACD0: stw     r0, 3844(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AACD4:
    // 7F0AACD4: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AACD8:
    ctx->downcount -= 4;
    // 7F0AACD8: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AACDC:
    // 7F0AACDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AACE0:
    // 7F0AACE0: addi    r4, r4, -23608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23608);

label_7F0AACE4:
    // 7F0AACE4: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AACE8u;
            goto label_7F0AB18C;
    }

label_7F0AACE8:
    ctx->downcount -= 1;
    // 7F0AACE8: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AACEC:
    ctx->downcount -= 6;
    // 7F0AACEC: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_7F0AACF0:
    // 7F0AACF0: xor   r3, r6, r0
    {
        ctx->gpr[3] = ctx->gpr[6] ^ ctx->gpr[0];
    }

label_7F0AACF4:
    // 7F0AACF4: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0AACF8:
    // 7F0AACF8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0AACFC:
    // 7F0AACFC: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAD00:
    // 7F0AAD00: bc    12, 2, 0x7F0AAD58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAD58;
        }
    }

label_7F0AAD04:
    ctx->downcount -= 4;
    // 7F0AAD04: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AAD08:
    ctx->pc = 0x7F0AAD08u;
    // 7F0AAD08: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAD0C:
    // 7F0AAD0C: cmpwi   r0, 2
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

label_7F0AAD10:
    // 7F0AAD10: bc    12, 2, 0x7F0AAD4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAD4C;
        }
    }

label_7F0AAD14:
    ctx->pc = 0x7F0AAD14u;
    ctx->downcount -= 4;
    // 7F0AAD14: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAD18:
    ctx->pc = 0x7F0AAD18u;
    // 7F0AAD18: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AAD1C:
    // 7F0AAD1C: cmpwi   r0, 0
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

label_7F0AAD20:
    // 7F0AAD20: bc    12, 1, 0x7F0AAD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAD30;
        }
    }

label_7F0AAD24:
    ctx->downcount -= 3;
    // 7F0AAD24: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AAD28:
    // 7F0AAD28: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0AAD2C:
    ctx->pc = 0x7F0AAD2Cu;
    // 7F0AAD2C: stw     r0, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAD30:
    ctx->downcount -= 6;
    // 7F0AAD30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AAD34:
    // 7F0AAD34: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AAD38:
    ctx->pc = 0x7F0AAD38u;
    // 7F0AAD38: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAD3C:
    // 7F0AAD3C: addi    r4, r3, -23440
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-23440);

label_7F0AAD40:
    // 7F0AAD40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAD44:
    // 7F0AAD44: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAD48u;
            goto label_7F0AB18C;
    }

label_7F0AAD48:
    ctx->downcount -= 1;
    // 7F0AAD48: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AAD4C:
    ctx->downcount -= 3;
    // 7F0AAD4C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AAD50:
    ctx->pc = 0x7F0AAD50u;
    // 7F0AAD50: stw     r0, 3848(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAD54:
    // 7F0AAD54: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AAD58:
    ctx->downcount -= 8;
    // 7F0AAD58: lis     r4, 5
    ctx->gpr[4] = ((u32)(s32)(5) << 16);

label_7F0AAD5C:
    // 7F0AAD5C: and   r3, r8, r7
    {
        ctx->gpr[3] = ctx->gpr[8] & ctx->gpr[7];
    }

label_7F0AAD60:
    // 7F0AAD60: addi    r4, r4, -32740
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32740);

label_7F0AAD64:
    // 7F0AAD64: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0AAD68:
    // 7F0AAD68: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0AAD6C:
    // 7F0AAD6C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0AAD70:
    // 7F0AAD70: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAD74:
    // 7F0AAD74: bc    12, 2, 0x7F0AAE30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAE30;
        }
    }

label_7F0AAD78:
    ctx->pc = 0x7F0AAD78u;
    ctx->downcount -= 5;
    // 7F0AAD78: lwz     r3, 3892(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAD7C:
    // 7F0AAD7C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AAD80:
    // 7F0AAD80: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AAD84:
    // 7F0AAD84: addi    r7, r31, 3896
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(3896);

label_7F0AAD88:
    // 7F0AAD88: bl      0x7F3A1F28
    {
            ctx->lr = 0x7F0AAD8Cu;
            ctx->pc = 0x7F3A1F28u;
            return;
    }

label_7F0AAD8C:
    ctx->downcount -= 2;
    // 7F0AAD8C: cmpwi   r29, 3
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

label_7F0AAD90:
    // 7F0AAD90: bc    12, 2, 0x7F0AAD9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAD9C;
        }
    }

label_7F0AAD94:
    ctx->downcount -= 2;
    // 7F0AAD94: cmpwi   r29, 2
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AAD98:
    // 7F0AAD98: bc    4, 2, 0x7F0AADC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AADC0;
        }
    }

label_7F0AAD9C:
    ctx->pc = 0x7F0AAD9Cu;
    ctx->downcount -= 9;
    // 7F0AAD9C: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AADA0:
    // 7F0AADA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AADA4:
    // 7F0AADA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AADA8:
    ctx->pc = 0x7F0AADA8u;
    // 7F0AADA8: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AADAC:
    ctx->pc = 0x7F0AADACu;
    // 7F0AADAC: lwz     r4, 448(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AADB0:
    ctx->pc = 0x7F0AADB0u;
    // 7F0AADB0: lwz     r5, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AADB4:
    // 7F0AADB4: addi    r3, r4, 4008
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4008);

label_7F0AADB8:
    // 7F0AADB8: addi    r4, r4, 4056
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4056);

label_7F0AADBC:
    // 7F0AADBC: bl      0x7F20AD2C
    {
            ctx->lr = 0x7F0AADC0u;
            ctx->pc = 0x7F20AD2Cu;
            return;
    }

label_7F0AADC0:
    ctx->pc = 0x7F0AADC0u;
    ctx->downcount -= 6;
    // 7F0AADC0: lwz     r5, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AADC4:
    // 7F0AADC4: addi    r3, r30, 16
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(16);

label_7F0AADC8:
    // 7F0AADC8: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F0AADCC:
    // 7F0AADCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AADD0:
    // 7F0AADD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AADD4:
    // 7F0AADD4: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0AADD8u;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0AADD8:
    ctx->downcount -= 3;
    // 7F0AADD8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AADDC:
    // 7F0AADDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AADE0:
    // 7F0AADE0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0AADE4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0AADE4:
    ctx->pc = 0x7F0AADE4u;
    ctx->downcount -= 4;
    // 7F0AADE4: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AADE8:
    ctx->pc = 0x7F0AADE8u;
    // 7F0AADE8: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AADEC:
    // 7F0AADEC: cmpwi   r0, 0
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

label_7F0AADF0:
    // 7F0AADF0: bc    12, 1, 0x7F0AAE1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAE1C;
        }
    }

label_7F0AADF4:
    ctx->downcount -= 9;
    // 7F0AADF4: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AADF8:
    // 7F0AADF8: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0AADFC:
    ctx->pc = 0x7F0AADFCu;
    // 7F0AADFC: stw     r0, 19268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAE00:
    // 7F0AAE00: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AAE04:
    // 7F0AAE04: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AAE08:
    ctx->pc = 0x7F0AAE08u;
    // 7F0AAE08: stw     r0, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAE0C:
    // 7F0AAE0C: addi    r4, r3, -23440
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-23440);

label_7F0AAE10:
    // 7F0AAE10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAE14:
    // 7F0AAE14: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAE18u;
            goto label_7F0AB18C;
    }

label_7F0AAE18:
    ctx->downcount -= 1;
    // 7F0AAE18: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AAE1C:
    ctx->downcount -= 4;
    // 7F0AAE1C: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AAE20:
    // 7F0AAE20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAE24:
    // 7F0AAE24: addi    r4, r4, -23608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23608);

label_7F0AAE28:
    // 7F0AAE28: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAE2Cu;
            goto label_7F0AB18C;
    }

label_7F0AAE2C:
    ctx->downcount -= 1;
    // 7F0AAE2C: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AAE30:
    ctx->downcount -= 7;
    // 7F0AAE30: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F0AAE34:
    // 7F0AAE34: xor   r3, r6, r0
    {
        ctx->gpr[3] = ctx->gpr[6] ^ ctx->gpr[0];
    }

label_7F0AAE38:
    // 7F0AAE38: addi    r4, r4, 992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(992);

label_7F0AAE3C:
    // 7F0AAE3C: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0AAE40:
    // 7F0AAE40: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0AAE44:
    // 7F0AAE44: or.   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAE48:
    // 7F0AAE48: bc    12, 2, 0x7F0AAF0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAF0C;
        }
    }

label_7F0AAE4C:
    ctx->pc = 0x7F0AAE4Cu;
    ctx->downcount -= 14;
    // 7F0AAE4C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAE50:
    // 7F0AAE50: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AAE54:
    ctx->pc = 0x7F0AAE54u;
    // 7F0AAE54: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAE58:
    // 7F0AAE58: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AAE5C:
    // 7F0AAE5C: addi    r7, r31, 3896
    ctx->gpr[7] = ctx->gpr[31] + (u32)(s32)(3896);

label_7F0AAE60:
    ctx->pc = 0x7F0AAE60u;
    // 7F0AAE60: stw     r3, 128(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AAE64:
    ctx->pc = 0x7F0AAE64u;
    // 7F0AAE64: stw     r0, 132(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAE68:
    ctx->pc = 0x7F0AAE68u;
    // 7F0AAE68: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAE6C:
    ctx->pc = 0x7F0AAE6Cu;
    // 7F0AAE6C: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAE70:
    ctx->pc = 0x7F0AAE70u;
    // 7F0AAE70: stw     r3, 136(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AAE74:
    ctx->pc = 0x7F0AAE74u;
    // 7F0AAE74: stw     r0, 140(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAE78:
    ctx->pc = 0x7F0AAE78u;
    // 7F0AAE78: lwz     r3, 3892(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAE7C:
    ctx->pc = 0x7F0AAE7Cu;
    // 7F0AAE7C: lwz     r5, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AAE80:
    // 7F0AAE80: bl      0x7F3A1F28
    {
            ctx->lr = 0x7F0AAE84u;
            ctx->pc = 0x7F3A1F28u;
            return;
    }

label_7F0AAE84:
    ctx->pc = 0x7F0AAE84u;
    ctx->downcount -= 6;
    // 7F0AAE84: lwz     r5, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AAE88:
    // 7F0AAE88: addi    r3, r30, 16
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(16);

label_7F0AAE8C:
    // 7F0AAE8C: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_7F0AAE90:
    // 7F0AAE90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AAE94:
    // 7F0AAE94: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AAE98:
    // 7F0AAE98: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0AAE9Cu;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0AAE9C:
    ctx->downcount -= 3;
    // 7F0AAE9C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AAEA0:
    // 7F0AAEA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAEA4:
    // 7F0AAEA4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0AAEA8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0AAEA8:
    ctx->pc = 0x7F0AAEA8u;
    ctx->downcount -= 4;
    // 7F0AAEA8: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAEAC:
    ctx->pc = 0x7F0AAEACu;
    // 7F0AAEAC: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AAEB0:
    // 7F0AAEB0: cmpwi   r0, 0
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

label_7F0AAEB4:
    // 7F0AAEB4: bc    4, 1, 0x7F0AAEC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAEC8;
        }
    }

label_7F0AAEB8:
    ctx->downcount -= 2;
    // 7F0AAEB8: cmpwi   r29, 3
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

label_7F0AAEBC:
    // 7F0AAEBC: bc    12, 2, 0x7F0AAEC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAEC8;
        }
    }

label_7F0AAEC0:
    ctx->downcount -= 2;
    // 7F0AAEC0: cmpwi   r29, 2
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AAEC4:
    // 7F0AAEC4: bc    4, 2, 0x7F0AAEFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAEFC;
        }
    }

label_7F0AAEC8:
    ctx->downcount -= 12;
    // 7F0AAEC8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0AAECC:
    // 7F0AAECC: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0AAED0:
    ctx->pc = 0x7F0AAED0u;
    // 7F0AAED0: stw     r0, 19268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAED4:
    // 7F0AAED4: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0AAED8:
    // 7F0AAED8: addi    r4, r3, -23440
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-23440);

label_7F0AAEDC:
    // 7F0AAEDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AAEE0:
    ctx->pc = 0x7F0AAEE0u;
    // 7F0AAEE0: lwz     r5, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AAEE4:
    // 7F0AAEE4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AAEE8:
    // 7F0AAEE8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAEEC:
    ctx->pc = 0x7F0AAEECu;
    // 7F0AAEEC: sth     r6, 18(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F0AAEF0:
    ctx->pc = 0x7F0AAEF0u;
    // 7F0AAEF0: stw     r0, 3856(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAEF4:
    // 7F0AAEF4: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAEF8u;
            goto label_7F0AB18C;
    }

label_7F0AAEF8:
    ctx->downcount -= 1;
    // 7F0AAEF8: b       0x7F0AAF0C
    {
            goto label_7F0AAF0C;
    }

label_7F0AAEFC:
    ctx->downcount -= 4;
    // 7F0AAEFC: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AAF00:
    // 7F0AAF00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAF04:
    // 7F0AAF04: addi    r4, r4, -22776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22776);

label_7F0AAF08:
    // 7F0AAF08: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AAF0Cu;
            goto label_7F0AB18C;
    }

label_7F0AAF0C:
    ctx->pc = 0x7F0AAF0Cu;
    ctx->downcount -= 10;
    // 7F0AAF0C: lwz     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAF10:
    // 7F0AAF10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AAF14:
    ctx->pc = 0x7F0AAF14u;
    // 7F0AAF14: lwz     r5, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AAF18:
    // 7F0AAF18: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_7F0AAF1C:
    // 7F0AAF1C: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_7F0AAF20:
    // 7F0AAF20: and   r3, r5, r3
    {
        ctx->gpr[3] = ctx->gpr[5] & ctx->gpr[3];
    }

label_7F0AAF24:
    // 7F0AAF24: xor   r3, r3, r4
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[4];
    }

label_7F0AAF28:
    // 7F0AAF28: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_7F0AAF2C:
    // 7F0AAF2C: or.   r0, r3, r0
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

label_7F0AAF30:
    // 7F0AAF30: bc    4, 2, 0x7F0AAF50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAF50;
        }
    }

label_7F0AAF34:
    ctx->downcount -= 2;
    // 7F0AAF34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAF38:
    // 7F0AAF38: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AAF3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AAF3C:
    ctx->downcount -= 5;
    // 7F0AAF3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AAF40:
    // 7F0AAF40: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_7F0AAF44:
    ctx->pc = 0x7F0AAF44u;
    // 7F0AAF44: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAF48:
    ctx->pc = 0x7F0AAF48u;
    // 7F0AAF48: stw     r0, 144(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAF4C:
    // 7F0AAF4C: b       0x7F0AAF70
    {
            goto label_7F0AAF70;
    }

label_7F0AAF50:
    ctx->downcount -= 2;
    // 7F0AAF50: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AAF54:
    // 7F0AAF54: bl      0x7F0150C0
    {
            ctx->lr = 0x7F0AAF58u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F0AAF58:
    ctx->downcount -= 3;
    // 7F0AAF58: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AAF5C:
    ctx->pc = 0x7F0AAF5Cu;
    // 7F0AAF5C: stw     r0, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAF60:
    ctx->pc = 0x7F0AAF60u;
    // 7F0AAF60: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAF64:
    ctx->downcount -= 3;
    // 7F0AAF64: addic.  r29, r29, -1
    {
        u64 a = ctx->gpr[29];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[29] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AAF68:
    // 7F0AAF68: addi    r27, r27, -192
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-192);

label_7F0AAF6C:
    // 7F0AAF6C: bc    4, 0, 0x7F0AA9A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AA9A8u;
                return;
            }
            goto label_7F0AA9A8;
        }
    }

label_7F0AAF70:
    ctx->pc = 0x7F0AAF70u;
    ctx->downcount -= 2;
    // 7F0AAF70: cmpwi   r25, 0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AAF74:
    ctx->pc = 0x7F0AAF74u;
    // 7F0AAF74: bc    4, 2, 0x7F0AAFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAFAC;
        }
    }

label_7F0AAF78:
    ctx->pc = 0x7F0AAF78u;
    ctx->downcount -= 2;
    // 7F0AAF78: cmpwi   r26, 0
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

label_7F0AAF7C:
    ctx->pc = 0x7F0AAF7Cu;
    // 7F0AAF7C: bc    4, 2, 0x7F0AAFAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAFAC;
        }
    }

label_7F0AAF80:
    ctx->pc = 0x7F0AAF80u;
    ctx->downcount -= 3;
    // 7F0AAF80: lwz     r4, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AAF84:
    ctx->pc = 0x7F0AAF84u;
    // 7F0AAF84: cmplwi  r4, 0x0000
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

label_7F0AAF88:
    ctx->pc = 0x7F0AAF88u;
    // 7F0AAF88: bc    12, 2, 0x7F0AAFA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAFA4;
        }
    }

label_7F0AAF8C:
    ctx->pc = 0x7F0AAF8Cu;
    ctx->downcount -= 6;
    // 7F0AAF8C: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AAF90:
    ctx->pc = 0x7F0AAF90u;
    // 7F0AAF90: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AAF94:
    ctx->pc = 0x7F0AAF94u;
    // 7F0AAF94: oris    r3, r3, 0x0002
    ctx->gpr[3] = ctx->gpr[3] | (0x0002u << 16);

label_7F0AAF98:
    ctx->pc = 0x7F0AAF98u;
    // 7F0AAF98: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F0AAF9C:
    ctx->pc = 0x7F0AAF9Cu;
    // 7F0AAF9C: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AAFA0:
    ctx->pc = 0x7F0AAFA0u;
    // 7F0AAFA0: stw     r0, 3688(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAFA4:
    ctx->pc = 0x7F0AAFA4u;
    ctx->downcount -= 2;
    // 7F0AAFA4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AAFA8:
    ctx->pc = 0x7F0AAFA8u;
    // 7F0AAFA8: stw     r0, 3692(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAFAC:
    ctx->pc = 0x7F0AAFACu;
    ctx->downcount -= 2;
    // 7F0AAFAC: cmpwi   r28, 0
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

label_7F0AAFB0:
    ctx->pc = 0x7F0AAFB0u;
    // 7F0AAFB0: bc    12, 2, 0x7F0AAFBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AAFBC;
        }
    }

label_7F0AAFB4:
    ctx->pc = 0x7F0AAFB4u;
    ctx->downcount -= 2;
    // 7F0AAFB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AAFB8:
    ctx->pc = 0x7F0AAFB8u;
    // 7F0AAFB8: bl      0x7F0AAFD4
    {
            ctx->lr = 0x7F0AAFBCu;
            goto label_7F0AAFD4;
    }

label_7F0AAFBC:
    ctx->pc = 0x7F0AAFBCu;
    ctx->downcount -= 17;
    // 7F0AAFBC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0AAFC0:
    ctx->pc = 0x7F0AAFC0u;
    // 7F0AAFC0: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AAFC4:
    ctx->pc = 0x7F0AAFC4u;
    // 7F0AAFC4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AAFC8:
    ctx->pc = 0x7F0AAFC8u;
    // 7F0AAFC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AAFCC:
    ctx->pc = 0x7F0AAFCCu;
    // 7F0AAFCC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0AAFD0:
    ctx->pc = 0x7F0AAFD0u;
    // 7F0AAFD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AAFD4:
    ctx->pc = 0x7F0AAFD4u;
    ctx->downcount -= 18;
    // 7F0AAFD4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AAFD8:
    ctx->pc = 0x7F0AAFD8u;
    // 7F0AAFD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AAFDC:
    ctx->pc = 0x7F0AAFDCu;
    // 7F0AAFDC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AAFE0:
    ctx->pc = 0x7F0AAFE0u;
    // 7F0AAFE0: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AAFE4:
    ctx->pc = 0x7F0AAFE4u;
    // 7F0AAFE4: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AAFE8:
    ctx->pc = 0x7F0AAFE8u;
    // 7F0AAFE8: li      r28, 12
    ctx->gpr[28] = (u32)(s32)(12);

label_7F0AAFEC:
    ctx->pc = 0x7F0AAFECu;
    // 7F0AAFEC: li      r31, 2304
    ctx->gpr[31] = (u32)(s32)(2304);

label_7F0AAFF0:
    ctx->pc = 0x7F0AAFF0u;
    // 7F0AAFF0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0AAFF4:
    ctx->downcount -= 4;
    // 7F0AAFF4: addi    r29, r31, 704
    ctx->gpr[29] = ctx->gpr[31] + (u32)(s32)(704);

label_7F0AAFF8:
    // 7F0AAFF8: add   r29, r27, r29
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_7F0AAFFC:
    // 7F0AAFFC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AB000:
    // 7F0AB000: bl      0x7F0150C0
    {
            ctx->lr = 0x7F0AB004u;
            ctx->pc = 0x7F0150C0u;
            return;
    }

label_7F0AB004:
    ctx->pc = 0x7F0AB004u;
    ctx->downcount -= 5;
    // 7F0AB004: stw     r30, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0AB008:
    // 7F0AB008: addic.  r28, r28, -1
    {
        u64 a = ctx->gpr[28];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[28] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[28];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AB00C:
    // 7F0AB00C: addi    r31, r31, -192
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-192);

label_7F0AB010:
    ctx->pc = 0x7F0AB010u;
    // 7F0AB010: stw     r30, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0AB014:
    // 7F0AB014: bc    4, 0, 0x7F0AAFF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AAFF4u;
                return;
            }
            goto label_7F0AAFF4;
        }
    }

label_7F0AB018:
    ctx->pc = 0x7F0AB018u;
    ctx->downcount -= 2;
    // 7F0AB018: addi    r3, r27, 3392
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(3392);

label_7F0AB01C:
    ctx->pc = 0x7F0AB01Cu;
    // 7F0AB01C: bl      0x7F015128
    {
            ctx->lr = 0x7F0AB020u;
            ctx->pc = 0x7F015128u;
            return;
    }

label_7F0AB020:
    ctx->pc = 0x7F0AB020u;
    ctx->downcount -= 16;
    // 7F0AB020: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AB024:
    ctx->pc = 0x7F0AB024u;
    // 7F0AB024: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB028:
    ctx->pc = 0x7F0AB028u;
    // 7F0AB028: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB02C:
    ctx->pc = 0x7F0AB02Cu;
    // 7F0AB02C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AB030:
    ctx->pc = 0x7F0AB030u;
    // 7F0AB030: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB034:
    ctx->pc = 0x7F0AB034u;
    ctx->downcount -= 19;
    // 7F0AB034: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB038:
    ctx->pc = 0x7F0AB038u;
    // 7F0AB038: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB03C:
    ctx->pc = 0x7F0AB03Cu;
    // 7F0AB03C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB040:
    ctx->pc = 0x7F0AB040u;
    // 7F0AB040: stmw     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AB044:
    ctx->pc = 0x7F0AB044u;
    // 7F0AB044: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB048:
    ctx->pc = 0x7F0AB048u;
    // 7F0AB048: lwz     r3, 660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB04C:
    ctx->pc = 0x7F0AB04Cu;
    // 7F0AB04C: addi    r31, r3, 444
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(444);

label_7F0AB050:
    ctx->pc = 0x7F0AB050u;
    // 7F0AB050: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AB054:
    ctx->pc = 0x7F0AB054u;
    // 7F0AB054: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0AB058u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0AB058:
    ctx->pc = 0x7F0AB058u;
    ctx->downcount -= 3;
    // 7F0AB058: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AB05C:
    ctx->pc = 0x7F0AB05Cu;
    // 7F0AB05C: addi    r3, r3, -32632
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32632);

label_7F0AB060:
    ctx->pc = 0x7F0AB060u;
    // 7F0AB060: bl      0x7F3B3134
    {
            ctx->lr = 0x7F0AB064u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F0AB064:
    ctx->pc = 0x7F0AB064u;
    ctx->downcount -= 2;
    // 7F0AB064: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0AB068:
    ctx->pc = 0x7F0AB068u;
    // 7F0AB068: bl      0x7F3B2EB8
    {
            ctx->lr = 0x7F0AB06Cu;
            ctx->pc = 0x7F3B2EB8u;
            return;
    }

label_7F0AB06C:
    ctx->pc = 0x7F0AB06Cu;
    ctx->downcount -= 4;
    // 7F0AB06C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AB070:
    ctx->pc = 0x7F0AB070u;
    // 7F0AB070: addi    r4, r30, 660
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(660);

label_7F0AB074:
    ctx->pc = 0x7F0AB074u;
    // 7F0AB074: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AB078:
    ctx->pc = 0x7F0AB078u;
    // 7F0AB078: bl      0x7F26ED88
    {
            ctx->lr = 0x7F0AB07Cu;
            ctx->pc = 0x7F26ED88u;
            return;
    }

label_7F0AB07C:
    ctx->pc = 0x7F0AB07Cu;
    ctx->downcount -= 4;
    // 7F0AB07C: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F0AB080:
    ctx->pc = 0x7F0AB080u;
    // 7F0AB080: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AB084:
    ctx->pc = 0x7F0AB084u;
    // 7F0AB084: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AB088:
    ctx->pc = 0x7F0AB088u;
    // 7F0AB088: bl      0x7F2615E8
    {
            ctx->lr = 0x7F0AB08Cu;
            ctx->pc = 0x7F2615E8u;
            return;
    }

label_7F0AB08C:
    ctx->pc = 0x7F0AB08Cu;
    ctx->downcount -= 3;
    // 7F0AB08C: lwz     r3, 660(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB090:
    ctx->pc = 0x7F0AB090u;
    // 7F0AB090: addi    r3, r3, 444
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(444);

label_7F0AB094:
    ctx->pc = 0x7F0AB094u;
    // 7F0AB094: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F0AB098u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F0AB098:
    ctx->pc = 0x7F0AB098u;
    ctx->downcount -= 3;
    // 7F0AB098: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AB09C:
    ctx->pc = 0x7F0AB09Cu;
    // 7F0AB09C: addi    r3, r3, -32616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32616);

label_7F0AB0A0:
    ctx->pc = 0x7F0AB0A0u;
    // 7F0AB0A0: bl      0x7F3B3134
    {
            ctx->lr = 0x7F0AB0A4u;
            ctx->pc = 0x7F3B3134u;
            return;
    }

label_7F0AB0A4:
    ctx->pc = 0x7F0AB0A4u;
    ctx->downcount -= 2;
    // 7F0AB0A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AB0A8:
    ctx->pc = 0x7F0AB0A8u;
    // 7F0AB0A8: bl      0x7F3B2EB8
    {
            ctx->lr = 0x7F0AB0ACu;
            ctx->pc = 0x7F3B2EB8u;
            return;
    }

label_7F0AB0AC:
    ctx->pc = 0x7F0AB0ACu;
    ctx->downcount -= 9;
    // 7F0AB0AC: lwz     r7, 3832(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3832);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0AB0B0:
    ctx->pc = 0x7F0AB0B0u;
    // 7F0AB0B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AB0B4:
    ctx->pc = 0x7F0AB0B4u;
    // 7F0AB0B4: li      r4, 1827
    ctx->gpr[4] = (u32)(s32)(1827);

label_7F0AB0B8:
    ctx->pc = 0x7F0AB0B8u;
    // 7F0AB0B8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F0AB0BC:
    ctx->pc = 0x7F0AB0BCu;
    // 7F0AB0BC: li      r6, 25
    ctx->gpr[6] = (u32)(s32)(25);

label_7F0AB0C0:
    ctx->pc = 0x7F0AB0C0u;
    // 7F0AB0C0: li      r8, 20000
    ctx->gpr[8] = (u32)(s32)(20000);

label_7F0AB0C4:
    ctx->pc = 0x7F0AB0C4u;
    // 7F0AB0C4: li      r9, 1000
    ctx->gpr[9] = (u32)(s32)(1000);

label_7F0AB0C8:
    ctx->pc = 0x7F0AB0C8u;
    // 7F0AB0C8: li      r10, 18
    ctx->gpr[10] = (u32)(s32)(18);

label_7F0AB0CC:
    ctx->pc = 0x7F0AB0CCu;
    // 7F0AB0CC: bl      0x7F27727C
    {
            ctx->lr = 0x7F0AB0D0u;
            ctx->pc = 0x7F27727Cu;
            return;
    }

label_7F0AB0D0:
    ctx->pc = 0x7F0AB0D0u;
    ctx->downcount -= 5;
    // 7F0AB0D0: stw     r3, 3912(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3912);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AB0D4:
    ctx->pc = 0x7F0AB0D4u;
    // 7F0AB0D4: addi    r4, r30, 48
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AB0D8:
    ctx->pc = 0x7F0AB0D8u;
    // 7F0AB0D8: li      r3, 45
    ctx->gpr[3] = (u32)(s32)(45);

label_7F0AB0DC:
    ctx->pc = 0x7F0AB0DCu;
    // 7F0AB0DC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0AB0E0:
    ctx->pc = 0x7F0AB0E0u;
    // 7F0AB0E0: bl      0x7F0117B8
    {
            ctx->lr = 0x7F0AB0E4u;
            ctx->pc = 0x7F0117B8u;
            return;
    }

label_7F0AB0E4:
    ctx->pc = 0x7F0AB0E4u;
    ctx->downcount -= 16;
    // 7F0AB0E4: lmw     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AB0E8:
    ctx->pc = 0x7F0AB0E8u;
    // 7F0AB0E8: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB0EC:
    ctx->pc = 0x7F0AB0ECu;
    // 7F0AB0EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB0F0:
    ctx->pc = 0x7F0AB0F0u;
    // 7F0AB0F0: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F0AB0F4:
    ctx->pc = 0x7F0AB0F4u;
    // 7F0AB0F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB0F8:
    ctx->pc = 0x7F0AB0F8u;
    ctx->downcount -= 18;
    // 7F0AB0F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB0FC:
    ctx->pc = 0x7F0AB0FCu;
    // 7F0AB0FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB100:
    ctx->pc = 0x7F0AB100u;
    // 7F0AB100: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB104:
    ctx->pc = 0x7F0AB104u;
    // 7F0AB104: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AB108:
    ctx->pc = 0x7F0AB108u;
    // 7F0AB108: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB10C:
    ctx->pc = 0x7F0AB10Cu;
    // 7F0AB10C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AB110:
    ctx->pc = 0x7F0AB110u;
    // 7F0AB110: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0AB114:
    ctx->pc = 0x7F0AB114u;
    // 7F0AB114: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F0AB118:
    ctx->pc = 0x7F0AB118u;
    ctx->downcount -= 3;
    // 7F0AB118: lwz     r3, 452(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB11C:
    // 7F0AB11C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AB120:
    // 7F0AB120: bl      0x7F110AA0
    {
            ctx->lr = 0x7F0AB124u;
            ctx->pc = 0x7F110AA0u;
            return;
    }

label_7F0AB124:
    ctx->downcount -= 3;
    // 7F0AB124: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_7F0AB128:
    // 7F0AB128: cmpwi   r31, 2
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

label_7F0AB12C:
    // 7F0AB12C: bc    4, 1, 0x7F0AB118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB118u;
                return;
            }
            goto label_7F0AB118;
        }
    }

label_7F0AB130:
    ctx->pc = 0x7F0AB130u;
    ctx->downcount -= 13;
    // 7F0AB130: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0AB134:
    ctx->pc = 0x7F0AB134u;
    // 7F0AB134: stw     r29, 3788(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3788);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F0AB138:
    ctx->pc = 0x7F0AB138u;
    // 7F0AB138: rlwinm r0, r29, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 1u) & 0xFFFFFFFEu;
    }

label_7F0AB13C:
    ctx->pc = 0x7F0AB13Cu;
    // 7F0AB13C: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F0AB140:
    ctx->pc = 0x7F0AB140u;
    // 7F0AB140: addi    r3, r3, 32656
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32656);

label_7F0AB144:
    ctx->pc = 0x7F0AB144u;
    // 7F0AB144: or   r9, r30, r30
    {
        ctx->gpr[9] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB148:
    ctx->pc = 0x7F0AB148u;
    // 7F0AB148: lhax    r5, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AB14C:
    ctx->pc = 0x7F0AB14Cu;
    // 7F0AB14C: addi    r3, r28, 448
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(448);

label_7F0AB150:
    ctx->pc = 0x7F0AB150u;
    // 7F0AB150: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0AB154:
    ctx->pc = 0x7F0AB154u;
    // 7F0AB154: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AB158:
    ctx->pc = 0x7F0AB158u;
    // 7F0AB158: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AB15C:
    ctx->pc = 0x7F0AB15Cu;
    // 7F0AB15C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AB160:
    ctx->pc = 0x7F0AB160u;
    // 7F0AB160: bl      0x7F042C94
    {
            ctx->lr = 0x7F0AB164u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0AB164:
    ctx->pc = 0x7F0AB164u;
    ctx->downcount -= 21;
    // 7F0AB164: lwz     r3, 452(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB168:
    ctx->pc = 0x7F0AB168u;
    // 7F0AB168: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB16C:
    ctx->pc = 0x7F0AB16Cu;
    // 7F0AB16C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB170:
    ctx->pc = 0x7F0AB170u;
    // 7F0AB170: oris    r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | (0x8000u << 16);

label_7F0AB174:
    ctx->pc = 0x7F0AB174u;
    // 7F0AB174: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB178:
    ctx->pc = 0x7F0AB178u;
    // 7F0AB178: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AB17C:
    ctx->pc = 0x7F0AB17Cu;
    // 7F0AB17C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB180:
    ctx->pc = 0x7F0AB180u;
    // 7F0AB180: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB184:
    ctx->pc = 0x7F0AB184u;
    // 7F0AB184: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AB188:
    ctx->pc = 0x7F0AB188u;
    // 7F0AB188: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB18C:
    ctx->pc = 0x7F0AB18Cu;
    ctx->downcount -= 6;
    // 7F0AB18C: stw     r4, 3772(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3772);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AB190:
    ctx->pc = 0x7F0AB190u;
    // 7F0AB190: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB194:
    ctx->pc = 0x7F0AB194u;
    // 7F0AB194: stw     r0, 3780(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3780);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB198:
    ctx->pc = 0x7F0AB198u;
    // 7F0AB198: sth     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AB19C:
    ctx->pc = 0x7F0AB19Cu;
    // 7F0AB19C: sth     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AB1A0:
    ctx->pc = 0x7F0AB1A0u;
    // 7F0AB1A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB1A4:
    ctx->pc = 0x7F0AB1A4u;
    ctx->downcount -= 16;
    // 7F0AB1A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB1A8:
    ctx->pc = 0x7F0AB1A8u;
    // 7F0AB1A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB1AC:
    ctx->pc = 0x7F0AB1ACu;
    // 7F0AB1AC: lis     r6, 32583
    ctx->gpr[6] = ((u32)(s32)(32583) << 16);

label_7F0AB1B0:
    ctx->pc = 0x7F0AB1B0u;
    // 7F0AB1B0: or   r9, r5, r5
    {
        ctx->gpr[9] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F0AB1B4:
    ctx->pc = 0x7F0AB1B4u;
    // 7F0AB1B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB1B8:
    ctx->pc = 0x7F0AB1B8u;
    // 7F0AB1B8: addi    r5, r6, 32656
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(32656);

label_7F0AB1BC:
    ctx->pc = 0x7F0AB1BCu;
    // 7F0AB1BC: rlwinm r0, r4, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 1u) & 0xFFFFFFFEu;
    }

label_7F0AB1C0:
    ctx->pc = 0x7F0AB1C0u;
    // 7F0AB1C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0AB1C4:
    ctx->pc = 0x7F0AB1C4u;
    // 7F0AB1C4: stw     r4, 3788(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3788);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AB1C8:
    ctx->pc = 0x7F0AB1C8u;
    // 7F0AB1C8: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F0AB1CC:
    ctx->pc = 0x7F0AB1CCu;
    // 7F0AB1CC: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F0AB1D0:
    ctx->pc = 0x7F0AB1D0u;
    // 7F0AB1D0: addi    r3, r3, 448
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(448);

label_7F0AB1D4:
    ctx->pc = 0x7F0AB1D4u;
    // 7F0AB1D4: lhax    r5, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AB1D8:
    ctx->pc = 0x7F0AB1D8u;
    // 7F0AB1D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AB1DC:
    ctx->pc = 0x7F0AB1DCu;
    // 7F0AB1DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0AB1E0:
    ctx->pc = 0x7F0AB1E0u;
    // 7F0AB1E0: bl      0x7F042C94
    {
            ctx->lr = 0x7F0AB1E4u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F0AB1E4:
    ctx->pc = 0x7F0AB1E4u;
    ctx->downcount -= 5;
    // 7F0AB1E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB1E8:
    ctx->pc = 0x7F0AB1E8u;
    // 7F0AB1E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB1EC:
    ctx->pc = 0x7F0AB1ECu;
    // 7F0AB1EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AB1F0:
    ctx->pc = 0x7F0AB1F0u;
    // 7F0AB1F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB1F4:
    ctx->pc = 0x7F0AB1F4u;
    ctx->downcount -= 4;
    // 7F0AB1F4: lwz     r0, 3884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3884);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB1F8:
    ctx->pc = 0x7F0AB1F8u;
    // 7F0AB1F8: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_7F0AB1FC:
    ctx->pc = 0x7F0AB1FCu;
    // 7F0AB1FC: stw     r0, 3884(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3884);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB200:
    ctx->pc = 0x7F0AB200u;
    // 7F0AB200: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB204:
    ctx->pc = 0x7F0AB204u;
    ctx->downcount -= 6;
    // 7F0AB204: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB208:
    ctx->pc = 0x7F0AB208u;
    // 7F0AB208: stw     r0, 3776(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3776);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB20C:
    ctx->pc = 0x7F0AB20Cu;
    // 7F0AB20C: stw     r0, 3784(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3784);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB210:
    ctx->pc = 0x7F0AB210u;
    // 7F0AB210: sth     r0, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AB214:
    ctx->pc = 0x7F0AB214u;
    // 7F0AB214: sth     r0, 88(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AB218:
    ctx->pc = 0x7F0AB218u;
    // 7F0AB218: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB21C:
    ctx->pc = 0x7F0AB21Cu;
    ctx->downcount -= 29;
    // 7F0AB21C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB220:
    ctx->pc = 0x7F0AB220u;
    // 7F0AB220: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB224:
    ctx->pc = 0x7F0AB224u;
    // 7F0AB224: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F0AB228:
    ctx->pc = 0x7F0AB228u;
    // 7F0AB228: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB22C:
    ctx->pc = 0x7F0AB22Cu;
    // 7F0AB22C: addi    r6, r5, 12832
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F0AB230:
    ctx->pc = 0x7F0AB230u;
    // 7F0AB230: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AB234:
    ctx->pc = 0x7F0AB234u;
    // 7F0AB234: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB238:
    ctx->pc = 0x7F0AB238u;
    // 7F0AB238: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AB23C:
    ctx->pc = 0x7F0AB23Cu;
    // 7F0AB23C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AB240:
    ctx->pc = 0x7F0AB240u;
    // 7F0AB240: addi    r29, r30, 704
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(704);

label_7F0AB244:
    ctx->pc = 0x7F0AB244u;
    // 7F0AB244: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AB248:
    ctx->pc = 0x7F0AB248u;
    // 7F0AB248: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB24C:
    ctx->pc = 0x7F0AB24Cu;
    // 7F0AB24C: stw     r5, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AB250:
    ctx->pc = 0x7F0AB250u;
    // 7F0AB250: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB254:
    ctx->pc = 0x7F0AB254u;
    // 7F0AB254: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0AB258:
    ctx->pc = 0x7F0AB258u;
    // 7F0AB258: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB25C:
    ctx->pc = 0x7F0AB25Cu;
    // 7F0AB25C: stw     r5, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0AB260:
    ctx->pc = 0x7F0AB260u;
    // 7F0AB260: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB264:
    ctx->pc = 0x7F0AB264u;
    // 7F0AB264: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AB268u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1F4u;
                return;
            }
            goto label_7F0AB1F4;
    }

label_7F0AB268:
    ctx->pc = 0x7F0AB268u;
    ctx->downcount -= 2;
    // 7F0AB268: addi    r3, r30, 48
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AB26C:
    ctx->pc = 0x7F0AB26Cu;
    // 7F0AB26C: bl      0x7F129620
    {
            ctx->lr = 0x7F0AB270u;
            ctx->pc = 0x7F129620u;
            return;
    }

label_7F0AB270:
    ctx->pc = 0x7F0AB270u;
    ctx->downcount -= 3;
    // 7F0AB270: lwz     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB274:
    ctx->pc = 0x7F0AB274u;
    // 7F0AB274: cmpwi   r0, 0
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

label_7F0AB278:
    ctx->pc = 0x7F0AB278u;
    // 7F0AB278: bc    4, 1, 0x7F0AB288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB288;
        }
    }

label_7F0AB27C:
    ctx->pc = 0x7F0AB27Cu;
    ctx->downcount -= 3;
    // 7F0AB27C: lwz     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB280:
    ctx->pc = 0x7F0AB280u;
    // 7F0AB280: cmpwi   r0, 0
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

label_7F0AB284:
    ctx->pc = 0x7F0AB284u;
    // 7F0AB284: bc    12, 1, 0x7F0AB2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB2B4;
        }
    }

label_7F0AB288:
    ctx->pc = 0x7F0AB288u;
    ctx->downcount -= 2;
    // 7F0AB288: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB28C:
    ctx->pc = 0x7F0AB28Cu;
    // 7F0AB28C: bl      0x7F0A8FDC
    {
            ctx->lr = 0x7F0AB290u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A8FDCu;
                return;
            }
            goto label_7F0A8FDC;
    }

label_7F0AB290:
    ctx->pc = 0x7F0AB290u;
    ctx->downcount -= 2;
    // 7F0AB290: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB294:
    ctx->pc = 0x7F0AB294u;
    // 7F0AB294: bl      0x7F0A91B4
    {
            ctx->lr = 0x7F0AB298u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A91B4u;
                return;
            }
            goto label_7F0A91B4;
    }

label_7F0AB298:
    ctx->pc = 0x7F0AB298u;
    ctx->downcount -= 3;
    // 7F0AB298: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AB29C:
    ctx->pc = 0x7F0AB29Cu;
    // 7F0AB29C: li      r4, 258
    ctx->gpr[4] = (u32)(s32)(258);

label_7F0AB2A0:
    ctx->pc = 0x7F0AB2A0u;
    // 7F0AB2A0: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0AB2A4u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0AB2A4:
    ctx->pc = 0x7F0AB2A4u;
    ctx->downcount -= 3;
    // 7F0AB2A4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AB2A8:
    ctx->pc = 0x7F0AB2A8u;
    // 7F0AB2A8: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0AB2AC:
    ctx->pc = 0x7F0AB2ACu;
    // 7F0AB2AC: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0AB2B0u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0AB2B0:
    ctx->pc = 0x7F0AB2B0u;
    ctx->downcount -= 1;
    // 7F0AB2B0: b       0x7F0AB2C8
    {
            goto label_7F0AB2C8;
    }

label_7F0AB2B4:
    ctx->pc = 0x7F0AB2B4u;
    ctx->downcount -= 2;
    // 7F0AB2B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB2B8:
    ctx->pc = 0x7F0AB2B8u;
    // 7F0AB2B8: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AB2BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AB2BC:
    ctx->pc = 0x7F0AB2BCu;
    ctx->downcount -= 3;
    // 7F0AB2BC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AB2C0:
    ctx->pc = 0x7F0AB2C0u;
    // 7F0AB2C0: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F0AB2C4:
    ctx->pc = 0x7F0AB2C4u;
    // 7F0AB2C4: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0AB2C8u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0AB2C8:
    ctx->pc = 0x7F0AB2C8u;
    ctx->downcount -= 2;
    // 7F0AB2C8: cmpwi   r31, 0
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

label_7F0AB2CC:
    ctx->pc = 0x7F0AB2CCu;
    // 7F0AB2CC: bc    4, 2, 0x7F0AB454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB454;
        }
    }

label_7F0AB2D0:
    ctx->pc = 0x7F0AB2D0u;
    ctx->downcount -= 3;
    // 7F0AB2D0: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB2D4:
    ctx->pc = 0x7F0AB2D4u;
    // 7F0AB2D4: cmpwi   r0, 7
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

label_7F0AB2D8:
    ctx->pc = 0x7F0AB2D8u;
    // 7F0AB2D8: bc    12, 2, 0x7F0AB2E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB2E4;
        }
    }

label_7F0AB2DC:
    ctx->pc = 0x7F0AB2DCu;
    ctx->downcount -= 2;
    // 7F0AB2DC: cmpwi   r0, 2
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

label_7F0AB2E0:
    ctx->pc = 0x7F0AB2E0u;
    // 7F0AB2E0: bc    4, 2, 0x7F0AB304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB304;
        }
    }

label_7F0AB2E4:
    ctx->pc = 0x7F0AB2E4u;
    ctx->downcount -= 8;
    // 7F0AB2E4: lha     r3, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AB2E8:
    ctx->pc = 0x7F0AB2E8u;
    // 7F0AB2E8: addi    r0, r3, 2048
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2048);

label_7F0AB2EC:
    ctx->pc = 0x7F0AB2ECu;
    // 7F0AB2EC: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AB2F0:
    ctx->pc = 0x7F0AB2F0u;
    // 7F0AB2F0: lha     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AB2F4:
    ctx->pc = 0x7F0AB2F4u;
    // 7F0AB2F4: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F0AB2F8:
    ctx->pc = 0x7F0AB2F8u;
    // 7F0AB2F8: sth     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AB2FC:
    ctx->pc = 0x7F0AB2FCu;
    // 7F0AB2FC: lha     r0, 90(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(90);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AB300:
    ctx->pc = 0x7F0AB300u;
    // 7F0AB300: sth     r0, 82(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(82);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AB304:
    ctx->pc = 0x7F0AB304u;
    ctx->downcount -= 3;
    // 7F0AB304: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB308:
    ctx->pc = 0x7F0AB308u;
    // 7F0AB308: cmpwi   r0, 7
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

label_7F0AB30C:
    ctx->pc = 0x7F0AB30Cu;
    // 7F0AB30C: bc    12, 2, 0x7F0AB318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB318;
        }
    }

label_7F0AB310:
    ctx->pc = 0x7F0AB310u;
    ctx->downcount -= 2;
    // 7F0AB310: cmpwi   r0, 8
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

label_7F0AB314:
    ctx->pc = 0x7F0AB314u;
    // 7F0AB314: bc    4, 2, 0x7F0AB32C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB32C;
        }
    }

label_7F0AB318:
    ctx->pc = 0x7F0AB318u;
    ctx->downcount -= 5;
    // 7F0AB318: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F0AB31C:
    ctx->pc = 0x7F0AB31Cu;
    // 7F0AB31C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0AB320:
    ctx->pc = 0x7F0AB320u;
    // 7F0AB320: stw     r3, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AB324:
    ctx->pc = 0x7F0AB324u;
    // 7F0AB324: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB328:
    ctx->pc = 0x7F0AB328u;
    // 7F0AB328: b       0x7F0AB33C
    {
            goto label_7F0AB33C;
    }

label_7F0AB32C:
    ctx->pc = 0x7F0AB32Cu;
    ctx->downcount -= 4;
    // 7F0AB32C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F0AB330:
    ctx->pc = 0x7F0AB330u;
    // 7F0AB330: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB334:
    ctx->pc = 0x7F0AB334u;
    // 7F0AB334: stw     r3, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AB338:
    ctx->pc = 0x7F0AB338u;
    // 7F0AB338: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB33C:
    ctx->pc = 0x7F0AB33Cu;
    ctx->downcount -= 3;
    // 7F0AB33C: lha     r0, 3602(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3602);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AB340:
    ctx->pc = 0x7F0AB340u;
    // 7F0AB340: cmpwi   r0, 0
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

label_7F0AB344:
    ctx->pc = 0x7F0AB344u;
    // 7F0AB344: bc    12, 1, 0x7F0AB364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB364;
        }
    }

label_7F0AB348:
    ctx->pc = 0x7F0AB348u;
    ctx->downcount -= 4;
    // 7F0AB348: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB34C:
    ctx->pc = 0x7F0AB34Cu;
    // 7F0AB34C: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F0AB350:
    ctx->pc = 0x7F0AB350u;
    // 7F0AB350: cmpwi   r0, 9
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

label_7F0AB354:
    ctx->pc = 0x7F0AB354u;
    // 7F0AB354: bc    4, 2, 0x7F0AB35C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB35C;
        }
    }

label_7F0AB358:
    ctx->pc = 0x7F0AB358u;
    ctx->downcount -= 1;
    // 7F0AB358: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_7F0AB35C:
    ctx->pc = 0x7F0AB35Cu;
    ctx->downcount -= 2;
    // 7F0AB35C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB360:
    ctx->pc = 0x7F0AB360u;
    // 7F0AB360: b       0x7F0AB400
    {
            goto label_7F0AB400;
    }

label_7F0AB364:
    ctx->pc = 0x7F0AB364u;
    ctx->downcount -= 3;
    // 7F0AB364: lwz     r0, 3836(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3836);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB368:
    ctx->pc = 0x7F0AB368u;
    // 7F0AB368: cmpwi   r0, 6
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

label_7F0AB36C:
    ctx->pc = 0x7F0AB36Cu;
    // 7F0AB36C: bc    12, 2, 0x7F0AB38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB38C;
        }
    }

label_7F0AB370:
    ctx->pc = 0x7F0AB370u;
    ctx->downcount -= 1;
    // 7F0AB370: bc    4, 0, 0x7F0AB380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB380;
        }
    }

label_7F0AB374:
    ctx->pc = 0x7F0AB374u;
    ctx->downcount -= 2;
    // 7F0AB374: cmpwi   r0, 2
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

label_7F0AB378:
    ctx->pc = 0x7F0AB378u;
    // 7F0AB378: bc    12, 2, 0x7F0AB38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB38C;
        }
    }

label_7F0AB37C:
    ctx->pc = 0x7F0AB37Cu;
    ctx->downcount -= 1;
    // 7F0AB37C: b       0x7F0AB394
    {
            goto label_7F0AB394;
    }

label_7F0AB380:
    ctx->pc = 0x7F0AB380u;
    ctx->downcount -= 2;
    // 7F0AB380: cmpwi   r0, 9
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

label_7F0AB384:
    ctx->pc = 0x7F0AB384u;
    // 7F0AB384: bc    12, 2, 0x7F0AB38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB38C;
        }
    }

label_7F0AB388:
    ctx->pc = 0x7F0AB388u;
    ctx->downcount -= 1;
    // 7F0AB388: b       0x7F0AB394
    {
            goto label_7F0AB394;
    }

label_7F0AB38C:
    ctx->pc = 0x7F0AB38Cu;
    ctx->downcount -= 2;
    // 7F0AB38C: li      r29, 13
    ctx->gpr[29] = (u32)(s32)(13);

label_7F0AB390:
    ctx->pc = 0x7F0AB390u;
    // 7F0AB390: b       0x7F0AB398
    {
            goto label_7F0AB398;
    }

label_7F0AB394:
    ctx->pc = 0x7F0AB394u;
    ctx->downcount -= 1;
    // 7F0AB394: li      r29, 11
    ctx->gpr[29] = (u32)(s32)(11);

label_7F0AB398:
    ctx->pc = 0x7F0AB398u;
    ctx->downcount -= 4;
    // 7F0AB398: lwz     r3, 3876(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3876);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB39C:
    ctx->pc = 0x7F0AB39Cu;
    // 7F0AB39C: addis   r0, r3, -8192
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-8192) << 16);

label_7F0AB3A0:
    ctx->pc = 0x7F0AB3A0u;
    // 7F0AB3A0: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AB3A4:
    ctx->pc = 0x7F0AB3A4u;
    // 7F0AB3A4: bc    4, 2, 0x7F0AB3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB3B4;
        }
    }

label_7F0AB3A8:
    ctx->pc = 0x7F0AB3A8u;
    ctx->downcount -= 3;
    // 7F0AB3A8: lwz     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB3AC:
    ctx->pc = 0x7F0AB3ACu;
    // 7F0AB3AC: cmpwi   r0, 0
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

label_7F0AB3B0:
    ctx->pc = 0x7F0AB3B0u;
    // 7F0AB3B0: bc    4, 1, 0x7F0AB400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB400;
        }
    }

label_7F0AB3B4:
    ctx->pc = 0x7F0AB3B4u;
    ctx->downcount -= 3;
    // 7F0AB3B4: lwz     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB3B8:
    ctx->pc = 0x7F0AB3B8u;
    // 7F0AB3B8: cmpwi   r0, 0
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

label_7F0AB3BC:
    ctx->pc = 0x7F0AB3BCu;
    // 7F0AB3BC: bc    12, 1, 0x7F0AB3DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB3DC;
        }
    }

label_7F0AB3C0:
    ctx->pc = 0x7F0AB3C0u;
    ctx->downcount -= 6;
    // 7F0AB3C0: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F0AB3C4:
    ctx->pc = 0x7F0AB3C4u;
    // 7F0AB3C4: addi    r0, r3, 2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2);

label_7F0AB3C8:
    ctx->pc = 0x7F0AB3C8u;
    // 7F0AB3C8: stw     r0, 3876(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3876);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB3CC:
    ctx->pc = 0x7F0AB3CCu;
    // 7F0AB3CC: lwz     r3, 3880(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB3D0:
    ctx->pc = 0x7F0AB3D0u;
    // 7F0AB3D0: lwz     r4, 3876(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3876);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AB3D4:
    ctx->pc = 0x7F0AB3D4u;
    // 7F0AB3D4: bl      0x7F22DA88
    {
            ctx->lr = 0x7F0AB3D8u;
            ctx->pc = 0x7F22DA88u;
            return;
    }

label_7F0AB3D8:
    ctx->pc = 0x7F0AB3D8u;
    ctx->downcount -= 1;
    // 7F0AB3D8: b       0x7F0AB400
    {
            goto label_7F0AB400;
    }

label_7F0AB3DC:
    ctx->pc = 0x7F0AB3DCu;
    ctx->downcount -= 3;
    // 7F0AB3DC: lwz     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB3E0:
    ctx->pc = 0x7F0AB3E0u;
    // 7F0AB3E0: cmpwi   r0, 0
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

label_7F0AB3E4:
    ctx->pc = 0x7F0AB3E4u;
    // 7F0AB3E4: bc    12, 1, 0x7F0AB400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB400;
        }
    }

label_7F0AB3E8:
    ctx->pc = 0x7F0AB3E8u;
    ctx->downcount -= 6;
    // 7F0AB3E8: lis     r3, 8192
    ctx->gpr[3] = ((u32)(s32)(8192) << 16);

label_7F0AB3EC:
    ctx->pc = 0x7F0AB3ECu;
    // 7F0AB3EC: addi    r0, r3, 5
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(5);

label_7F0AB3F0:
    ctx->pc = 0x7F0AB3F0u;
    // 7F0AB3F0: stw     r0, 3876(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3876);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB3F4:
    ctx->pc = 0x7F0AB3F4u;
    // 7F0AB3F4: lwz     r3, 3880(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB3F8:
    ctx->pc = 0x7F0AB3F8u;
    // 7F0AB3F8: lwz     r4, 3876(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3876);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AB3FC:
    ctx->pc = 0x7F0AB3FCu;
    // 7F0AB3FC: bl      0x7F22DA88
    {
            ctx->lr = 0x7F0AB400u;
            ctx->pc = 0x7F22DA88u;
            return;
    }

label_7F0AB400:
    ctx->pc = 0x7F0AB400u;
    ctx->downcount -= 3;
    // 7F0AB400: lwz     r0, 3852(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB404:
    ctx->pc = 0x7F0AB404u;
    // 7F0AB404: cmpwi   r0, 0
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

label_7F0AB408:
    ctx->pc = 0x7F0AB408u;
    // 7F0AB408: bc    4, 2, 0x7F0AB420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB420;
        }
    }

label_7F0AB40C:
    ctx->pc = 0x7F0AB40Cu;
    ctx->downcount -= 4;
    // 7F0AB40C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB410:
    ctx->pc = 0x7F0AB410u;
    // 7F0AB410: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AB414:
    ctx->pc = 0x7F0AB414u;
    // 7F0AB414: li      r5, 320
    ctx->gpr[5] = (u32)(s32)(320);

label_7F0AB418:
    ctx->pc = 0x7F0AB418u;
    // 7F0AB418: bl      0x7F0AB1A4
    {
            ctx->lr = 0x7F0AB41Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1A4u;
                return;
            }
            goto label_7F0AB1A4;
    }

label_7F0AB41C:
    ctx->pc = 0x7F0AB41Cu;
    ctx->downcount -= 1;
    // 7F0AB41C: b       0x7F0AB428
    {
            goto label_7F0AB428;
    }

label_7F0AB420:
    ctx->pc = 0x7F0AB420u;
    ctx->downcount -= 2;
    // 7F0AB420: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB424:
    ctx->pc = 0x7F0AB424u;
    // 7F0AB424: stw     r0, 3852(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB428:
    ctx->pc = 0x7F0AB428u;
    ctx->downcount -= 3;
    // 7F0AB428: lwz     r0, 3856(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3856);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB42C:
    ctx->pc = 0x7F0AB42Cu;
    // 7F0AB42C: cmpwi   r0, 0
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

label_7F0AB430:
    ctx->pc = 0x7F0AB430u;
    // 7F0AB430: bc    12, 2, 0x7F0AB454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB454;
        }
    }

label_7F0AB434:
    ctx->pc = 0x7F0AB434u;
    ctx->downcount -= 8;
    // 7F0AB434: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AB438:
    ctx->pc = 0x7F0AB438u;
    // 7F0AB438: lwz     r6, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AB43C:
    ctx->pc = 0x7F0AB43Cu;
    // 7F0AB43C: addi    r4, r3, -5296
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5296);

label_7F0AB440:
    ctx->pc = 0x7F0AB440u;
    // 7F0AB440: addi    r3, r30, 448
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(448);

label_7F0AB444:
    ctx->pc = 0x7F0AB444u;
    // 7F0AB444: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AB444u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AB448:
    ctx->pc = 0x7F0AB448u;
    // 7F0AB448: li      r4, 3000
    ctx->gpr[4] = (u32)(s32)(3000);

label_7F0AB44C:
    ctx->pc = 0x7F0AB44Cu;
    // 7F0AB44C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AB450:
    ctx->pc = 0x7F0AB450u;
    // 7F0AB450: bl      0x7F0DCF70
    {
            ctx->lr = 0x7F0AB454u;
            ctx->pc = 0x7F0DCF70u;
            return;
    }

label_7F0AB454:
    ctx->pc = 0x7F0AB454u;
    ctx->downcount -= 2;
    // 7F0AB454: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB458:
    ctx->pc = 0x7F0AB458u;
    // 7F0AB458: bl      0x7F0AB958
    {
            ctx->lr = 0x7F0AB45Cu;
            goto label_7F0AB958;
    }

label_7F0AB45C:
    ctx->pc = 0x7F0AB45Cu;
    ctx->downcount -= 2;
    // 7F0AB45C: cmpwi   r3, 0
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

label_7F0AB460:
    ctx->pc = 0x7F0AB460u;
    // 7F0AB460: bc    4, 2, 0x7F0AB538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB538;
        }
    }

label_7F0AB464:
    ctx->pc = 0x7F0AB464u;
    ctx->downcount -= 3;
    // 7F0AB464: lha     r0, 3602(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3602);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AB468:
    ctx->pc = 0x7F0AB468u;
    // 7F0AB468: cmpwi   r0, 0
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

label_7F0AB46C:
    ctx->pc = 0x7F0AB46Cu;
    // 7F0AB46C: bc    12, 1, 0x7F0AB4C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB4C4;
        }
    }

label_7F0AB470:
    ctx->pc = 0x7F0AB470u;
    ctx->downcount -= 3;
    // 7F0AB470: lwz     r0, 3708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3708);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB474:
    ctx->pc = 0x7F0AB474u;
    // 7F0AB474: cmpwi   r0, -2
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

label_7F0AB478:
    ctx->pc = 0x7F0AB478u;
    // 7F0AB478: bc    12, 2, 0x7F0AB538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB538;
        }
    }

label_7F0AB47C:
    ctx->pc = 0x7F0AB47Cu;
    ctx->downcount -= 4;
    // 7F0AB47C: lwz     r3, 3700(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3700);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB480:
    ctx->pc = 0x7F0AB480u;
    // 7F0AB480: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AB484:
    ctx->pc = 0x7F0AB484u;
    // 7F0AB484: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AB488:
    ctx->pc = 0x7F0AB488u;
    // 7F0AB488: bl      0x80051BB0
    {
            ctx->lr = 0x7F0AB48Cu;
            ctx->pc = 0x80051BB0u;
            return;
    }

label_7F0AB48C:
    ctx->pc = 0x7F0AB48Cu;
    ctx->downcount -= 2;
    // 7F0AB48C: cmpwi   r3, 0
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

label_7F0AB490:
    ctx->pc = 0x7F0AB490u;
    // 7F0AB490: bc    4, 2, 0x7F0AB538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB538;
        }
    }

label_7F0AB494:
    ctx->pc = 0x7F0AB494u;
    ctx->downcount -= 3;
    // 7F0AB494: lwz     r0, 3708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3708);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB498:
    ctx->pc = 0x7F0AB498u;
    // 7F0AB498: cmpwi   r0, -1
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

label_7F0AB49C:
    ctx->pc = 0x7F0AB49Cu;
    // 7F0AB49C: bc    4, 2, 0x7F0AB4B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB4B8;
        }
    }

label_7F0AB4A0:
    ctx->pc = 0x7F0AB4A0u;
    ctx->downcount -= 6;
    // 7F0AB4A0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AB4A4:
    ctx->pc = 0x7F0AB4A4u;
    // 7F0AB4A4: li      r4, 60
    ctx->gpr[4] = (u32)(s32)(60);

label_7F0AB4A8:
    ctx->pc = 0x7F0AB4A8u;
    // 7F0AB4A8: stw     r4, 19268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0AB4AC:
    ctx->pc = 0x7F0AB4ACu;
    // 7F0AB4AC: li      r0, -2
    ctx->gpr[0] = (u32)(s32)(-2);

label_7F0AB4B0:
    ctx->pc = 0x7F0AB4B0u;
    // 7F0AB4B0: stw     r0, 3708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB4B4:
    ctx->pc = 0x7F0AB4B4u;
    // 7F0AB4B4: b       0x7F0AB538
    {
            goto label_7F0AB538;
    }

label_7F0AB4B8:
    ctx->pc = 0x7F0AB4B8u;
    ctx->downcount -= 3;
    // 7F0AB4B8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0AB4BC:
    ctx->pc = 0x7F0AB4BCu;
    // 7F0AB4BC: stw     r0, 3708(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3708);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB4C0:
    ctx->pc = 0x7F0AB4C0u;
    // 7F0AB4C0: b       0x7F0AB538
    {
            goto label_7F0AB538;
    }

label_7F0AB4C4:
    ctx->pc = 0x7F0AB4C4u;
    ctx->downcount -= 2;
    // 7F0AB4C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB4C8:
    ctx->pc = 0x7F0AB4C8u;
    // 7F0AB4C8: bl      0x7F0ABA00
    {
            ctx->lr = 0x7F0AB4CCu;
            goto label_7F0ABA00;
    }

label_7F0AB4CC:
    ctx->pc = 0x7F0AB4CCu;
    ctx->downcount -= 2;
    // 7F0AB4CC: cmpwi   r3, 0
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

label_7F0AB4D0:
    ctx->pc = 0x7F0AB4D0u;
    // 7F0AB4D0: bc    4, 2, 0x7F0AB538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB538;
        }
    }

label_7F0AB4D4:
    ctx->pc = 0x7F0AB4D4u;
    ctx->downcount -= 3;
    // 7F0AB4D4: lwz     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB4D8:
    ctx->pc = 0x7F0AB4D8u;
    // 7F0AB4D8: cmpwi   r0, 0
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

label_7F0AB4DC:
    ctx->pc = 0x7F0AB4DCu;
    // 7F0AB4DC: bc    4, 1, 0x7F0AB4F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB4F4;
        }
    }

label_7F0AB4E0:
    ctx->pc = 0x7F0AB4E0u;
    ctx->downcount -= 3;
    // 7F0AB4E0: lwz     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB4E4:
    ctx->pc = 0x7F0AB4E4u;
    // 7F0AB4E4: cmpwi   r0, 0
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

label_7F0AB4E8:
    ctx->pc = 0x7F0AB4E8u;
    // 7F0AB4E8: bc    4, 1, 0x7F0AB4F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB4F4;
        }
    }

label_7F0AB4EC:
    ctx->pc = 0x7F0AB4ECu;
    ctx->downcount -= 2;
    // 7F0AB4EC: cmpwi   r31, 30
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AB4F0:
    ctx->pc = 0x7F0AB4F0u;
    // 7F0AB4F0: bc    4, 0, 0x7F0AB504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB504;
        }
    }

label_7F0AB4F4:
    ctx->pc = 0x7F0AB4F4u;
    ctx->downcount -= 4;
    // 7F0AB4F4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F0AB4F8:
    ctx->pc = 0x7F0AB4F8u;
    // 7F0AB4F8: lwz     r0, 29504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(29504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB4FC:
    ctx->pc = 0x7F0AB4FCu;
    // 7F0AB4FC: cmpwi   r0, 2
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

label_7F0AB500:
    ctx->pc = 0x7F0AB500u;
    // 7F0AB500: bc    4, 2, 0x7F0AB518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB518;
        }
    }

label_7F0AB504:
    ctx->pc = 0x7F0AB504u;
    ctx->downcount -= 4;
    // 7F0AB504: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AB508:
    ctx->pc = 0x7F0AB508u;
    // 7F0AB508: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB50C:
    ctx->pc = 0x7F0AB50Cu;
    // 7F0AB50C: addi    r4, r4, -22560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22560);

label_7F0AB510:
    ctx->pc = 0x7F0AB510u;
    // 7F0AB510: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AB514u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0AB514:
    ctx->pc = 0x7F0AB514u;
    ctx->downcount -= 1;
    // 7F0AB514: b       0x7F0AB538
    {
            goto label_7F0AB538;
    }

label_7F0AB518:
    ctx->pc = 0x7F0AB518u;
    ctx->downcount -= 2;
    // 7F0AB518: cmpwi   r31, 300
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(300);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AB51C:
    ctx->pc = 0x7F0AB51Cu;
    // 7F0AB51C: bc    4, 0, 0x7F0AB528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB528;
        }
    }

label_7F0AB520:
    ctx->pc = 0x7F0AB520u;
    ctx->downcount -= 2;
    // 7F0AB520: cmpwi   r0, 2
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

label_7F0AB524:
    ctx->pc = 0x7F0AB524u;
    // 7F0AB524: bc    4, 2, 0x7F0AB538
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB538;
        }
    }

label_7F0AB528:
    ctx->pc = 0x7F0AB528u;
    ctx->downcount -= 4;
    // 7F0AB528: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AB52C:
    ctx->pc = 0x7F0AB52Cu;
    // 7F0AB52C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB530:
    ctx->pc = 0x7F0AB530u;
    // 7F0AB530: addi    r4, r4, -22560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22560);

label_7F0AB534:
    ctx->pc = 0x7F0AB534u;
    // 7F0AB534: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AB538u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0AB538:
    ctx->pc = 0x7F0AB538u;
    ctx->downcount -= 16;
    // 7F0AB538: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AB53C:
    ctx->pc = 0x7F0AB53Cu;
    // 7F0AB53C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB540:
    ctx->pc = 0x7F0AB540u;
    // 7F0AB540: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB544:
    ctx->pc = 0x7F0AB544u;
    // 7F0AB544: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AB548:
    ctx->pc = 0x7F0AB548u;
    // 7F0AB548: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB54C:
    ctx->pc = 0x7F0AB54Cu;
    ctx->downcount -= 19;
    // 7F0AB54C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB550:
    ctx->pc = 0x7F0AB550u;
    // 7F0AB550: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB554:
    ctx->pc = 0x7F0AB554u;
    // 7F0AB554: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB558:
    ctx->pc = 0x7F0AB558u;
    // 7F0AB558: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AB55C:
    ctx->pc = 0x7F0AB55Cu;
    // 7F0AB55C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB560:
    ctx->pc = 0x7F0AB560u;
    // 7F0AB560: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AB564:
    ctx->pc = 0x7F0AB564u;
    // 7F0AB564: addi    r29, r30, 48
    ctx->gpr[29] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AB568:
    ctx->pc = 0x7F0AB568u;
    // 7F0AB568: addi    r28, r30, 704
    ctx->gpr[28] = ctx->gpr[30] + (u32)(s32)(704);

label_7F0AB56C:
    ctx->pc = 0x7F0AB56Cu;
    // 7F0AB56C: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AB570u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AB570:
    ctx->pc = 0x7F0AB570u;
    ctx->downcount -= 3;
    // 7F0AB570: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0AB574:
    ctx->pc = 0x7F0AB574u;
    // 7F0AB574: li      r4, 258
    ctx->gpr[4] = (u32)(s32)(258);

label_7F0AB578:
    ctx->pc = 0x7F0AB578u;
    // 7F0AB578: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0AB57Cu;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0AB57C:
    ctx->pc = 0x7F0AB57Cu;
    ctx->downcount -= 3;
    // 7F0AB57C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0AB580:
    ctx->pc = 0x7F0AB580u;
    // 7F0AB580: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0AB584:
    ctx->pc = 0x7F0AB584u;
    // 7F0AB584: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0AB588u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0AB588:
    ctx->pc = 0x7F0AB588u;
    ctx->downcount -= 3;
    // 7F0AB588: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB58C:
    ctx->pc = 0x7F0AB58Cu;
    // 7F0AB58C: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AB590:
    ctx->pc = 0x7F0AB590u;
    // 7F0AB590: bc    12, 2, 0x7F0AB5A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB5A4;
        }
    }

label_7F0AB594:
    ctx->pc = 0x7F0AB594u;
    ctx->downcount -= 3;
    // 7F0AB594: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB598:
    ctx->pc = 0x7F0AB598u;
    // 7F0AB598: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0AB59C:
    ctx->pc = 0x7F0AB59Cu;
    // 7F0AB59C: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AB5A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1F4u;
                return;
            }
            goto label_7F0AB1F4;
    }

label_7F0AB5A0:
    ctx->pc = 0x7F0AB5A0u;
    ctx->downcount -= 1;
    // 7F0AB5A0: b       0x7F0AB5B0
    {
            goto label_7F0AB5B0;
    }

label_7F0AB5A4:
    ctx->pc = 0x7F0AB5A4u;
    ctx->downcount -= 3;
    // 7F0AB5A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB5A8:
    ctx->pc = 0x7F0AB5A8u;
    // 7F0AB5A8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0AB5AC:
    ctx->pc = 0x7F0AB5ACu;
    // 7F0AB5AC: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AB5B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1F4u;
                return;
            }
            goto label_7F0AB1F4;
    }

label_7F0AB5B0:
    ctx->pc = 0x7F0AB5B0u;
    ctx->downcount -= 2;
    // 7F0AB5B0: cmpwi   r31, 0
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

label_7F0AB5B4:
    ctx->pc = 0x7F0AB5B4u;
    // 7F0AB5B4: bc    4, 2, 0x7F0AB644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB644;
        }
    }

label_7F0AB5B8:
    ctx->pc = 0x7F0AB5B8u;
    ctx->downcount -= 5;
    // 7F0AB5B8: lwz     r3, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB5BC:
    ctx->pc = 0x7F0AB5BCu;
    // 7F0AB5BC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AB5C0:
    ctx->pc = 0x7F0AB5C0u;
    // 7F0AB5C0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AB5C4:
    ctx->pc = 0x7F0AB5C4u;
    // 7F0AB5C4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB5C8:
    ctx->pc = 0x7F0AB5C8u;
    // 7F0AB5C8: bl      0x800261D8
    {
            ctx->lr = 0x7F0AB5CCu;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F0AB5CC:
    ctx->pc = 0x7F0AB5CCu;
    ctx->downcount -= 2;
    // 7F0AB5CC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0AB5D0:
    ctx->pc = 0x7F0AB5D0u;
    // 7F0AB5D0: bl      0x7F174188
    {
            ctx->lr = 0x7F0AB5D4u;
            ctx->pc = 0x7F174188u;
            return;
    }

label_7F0AB5D4:
    ctx->pc = 0x7F0AB5D4u;
    ctx->downcount -= 3;
    // 7F0AB5D4: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB5D8:
    ctx->pc = 0x7F0AB5D8u;
    // 7F0AB5D8: cmpwi   r0, 0
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

label_7F0AB5DC:
    ctx->pc = 0x7F0AB5DCu;
    // 7F0AB5DC: bc    4, 2, 0x7F0AB604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB604;
        }
    }

label_7F0AB5E0:
    ctx->pc = 0x7F0AB5E0u;
    ctx->downcount -= 3;
    // 7F0AB5E0: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB5E4:
    ctx->pc = 0x7F0AB5E4u;
    // 7F0AB5E4: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AB5E8:
    ctx->pc = 0x7F0AB5E8u;
    // 7F0AB5E8: bc    12, 2, 0x7F0AB5F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB5F8;
        }
    }

label_7F0AB5EC:
    ctx->pc = 0x7F0AB5ECu;
    ctx->downcount -= 3;
    // 7F0AB5EC: addi    r28, r3, 2048
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(2048);

label_7F0AB5F0:
    ctx->pc = 0x7F0AB5F0u;
    // 7F0AB5F0: li      r4, 29
    ctx->gpr[4] = (u32)(s32)(29);

label_7F0AB5F4:
    ctx->pc = 0x7F0AB5F4u;
    // 7F0AB5F4: b       0x7F0AB62C
    {
            goto label_7F0AB62C;
    }

label_7F0AB5F8:
    ctx->pc = 0x7F0AB5F8u;
    ctx->downcount -= 3;
    // 7F0AB5F8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB5FC:
    ctx->pc = 0x7F0AB5FCu;
    // 7F0AB5FC: li      r4, 31
    ctx->gpr[4] = (u32)(s32)(31);

label_7F0AB600:
    ctx->pc = 0x7F0AB600u;
    // 7F0AB600: b       0x7F0AB62C
    {
            goto label_7F0AB62C;
    }

label_7F0AB604:
    ctx->pc = 0x7F0AB604u;
    ctx->downcount -= 3;
    // 7F0AB604: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB608:
    ctx->pc = 0x7F0AB608u;
    // 7F0AB608: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AB60C:
    ctx->pc = 0x7F0AB60Cu;
    // 7F0AB60C: bc    12, 2, 0x7F0AB624
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB624;
        }
    }

label_7F0AB610:
    ctx->pc = 0x7F0AB610u;
    ctx->downcount -= 5;
    // 7F0AB610: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB614:
    ctx->pc = 0x7F0AB614u;
    // 7F0AB614: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB618:
    ctx->pc = 0x7F0AB618u;
    // 7F0AB618: stw     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB61C:
    ctx->pc = 0x7F0AB61Cu;
    // 7F0AB61C: li      r4, 28
    ctx->gpr[4] = (u32)(s32)(28);

label_7F0AB620:
    ctx->pc = 0x7F0AB620u;
    // 7F0AB620: b       0x7F0AB62C
    {
            goto label_7F0AB62C;
    }

label_7F0AB624:
    ctx->pc = 0x7F0AB624u;
    ctx->downcount -= 2;
    // 7F0AB624: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F0AB628:
    ctx->pc = 0x7F0AB628u;
    // 7F0AB628: addi    r28, r3, 2048
    ctx->gpr[28] = ctx->gpr[3] + (u32)(s32)(2048);

label_7F0AB62C:
    ctx->pc = 0x7F0AB62Cu;
    ctx->downcount -= 3;
    // 7F0AB62C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB630:
    ctx->pc = 0x7F0AB630u;
    // 7F0AB630: li      r5, 320
    ctx->gpr[5] = (u32)(s32)(320);

label_7F0AB634:
    ctx->pc = 0x7F0AB634u;
    // 7F0AB634: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AB638u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB0F8u;
                return;
            }
            goto label_7F0AB0F8;
    }

label_7F0AB638:
    ctx->pc = 0x7F0AB638u;
    ctx->downcount -= 3;
    // 7F0AB638: sth     r28, 42(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[28]);
    }

label_7F0AB63C:
    ctx->pc = 0x7F0AB63Cu;
    // 7F0AB63C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB640:
    ctx->pc = 0x7F0AB640u;
    // 7F0AB640: sth     r0, 40(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AB644:
    ctx->pc = 0x7F0AB644u;
    ctx->downcount -= 2;
    // 7F0AB644: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB648:
    ctx->pc = 0x7F0AB648u;
    // 7F0AB648: bl      0x7F0AB9AC
    {
            ctx->lr = 0x7F0AB64Cu;
            goto label_7F0AB9AC;
    }

label_7F0AB64C:
    ctx->pc = 0x7F0AB64Cu;
    ctx->downcount -= 2;
    // 7F0AB64C: cmpwi   r3, 0
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

label_7F0AB650:
    ctx->pc = 0x7F0AB650u;
    // 7F0AB650: bc    4, 2, 0x7F0AB6C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB6C8;
        }
    }

label_7F0AB654:
    ctx->pc = 0x7F0AB654u;
    ctx->downcount -= 2;
    // 7F0AB654: cmpwi   r31, 16
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AB658:
    ctx->pc = 0x7F0AB658u;
    // 7F0AB658: bc    4, 0, 0x7F0AB674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB674;
        }
    }

label_7F0AB65C:
    ctx->pc = 0x7F0AB65Cu;
    ctx->downcount -= 3;
    // 7F0AB65C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB660:
    ctx->pc = 0x7F0AB660u;
    // 7F0AB660: subfic  r4, r31, 16
    {
        u64 res = (u64)(u32)(s32)(16) + (u64)(~ctx->gpr[31]) + 1u;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F0AB664:
    ctx->pc = 0x7F0AB664u;
    // 7F0AB664: bl      0x7F0ABE94
    {
            ctx->lr = 0x7F0AB668u;
            goto label_7F0ABE94;
    }

label_7F0AB668:
    ctx->pc = 0x7F0AB668u;
    ctx->downcount -= 2;
    // 7F0AB668: cmpwi   r3, 0
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

label_7F0AB66C:
    ctx->pc = 0x7F0AB66Cu;
    // 7F0AB66C: bc    12, 2, 0x7F0AB698
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB698;
        }
    }

label_7F0AB670:
    ctx->pc = 0x7F0AB670u;
    ctx->downcount -= 1;
    // 7F0AB670: b       0x7F0AB6C8
    {
            goto label_7F0AB6C8;
    }

label_7F0AB674:
    ctx->pc = 0x7F0AB674u;
    ctx->downcount -= 3;
    // 7F0AB674: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB678:
    ctx->pc = 0x7F0AB678u;
    // 7F0AB678: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB67C:
    ctx->pc = 0x7F0AB67Cu;
    // 7F0AB67C: bl      0x7F1738EC
    {
            ctx->lr = 0x7F0AB680u;
            ctx->pc = 0x7F1738ECu;
            return;
    }

label_7F0AB680:
    ctx->pc = 0x7F0AB680u;
    ctx->downcount -= 4;
    // 7F0AB680: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB684:
    ctx->pc = 0x7F0AB684u;
    // 7F0AB684: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB688:
    ctx->pc = 0x7F0AB688u;
    // 7F0AB688: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0AB68C:
    ctx->pc = 0x7F0AB68Cu;
    // 7F0AB68C: bl      0x7F0AC014
    {
            ctx->lr = 0x7F0AB690u;
            goto label_7F0AC014;
    }

label_7F0AB690:
    ctx->pc = 0x7F0AB690u;
    ctx->downcount -= 2;
    // 7F0AB690: cmpwi   r3, 0
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

label_7F0AB694:
    ctx->pc = 0x7F0AB694u;
    // 7F0AB694: bc    4, 2, 0x7F0AB6C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB6C8;
        }
    }

label_7F0AB698:
    ctx->pc = 0x7F0AB698u;
    ctx->downcount -= 8;
    // 7F0AB698: lwz     r0, 484(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB69C:
    ctx->pc = 0x7F0AB69Cu;
    // 7F0AB69C: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F0AB6A0:
    ctx->pc = 0x7F0AB6A0u;
    // 7F0AB6A0: stw     r0, 484(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB6A4:
    ctx->pc = 0x7F0AB6A4u;
    // 7F0AB6A4: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB6A8:
    ctx->pc = 0x7F0AB6A8u;
    // 7F0AB6A8: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB6AC:
    ctx->pc = 0x7F0AB6ACu;
    // 7F0AB6AC: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB6B0:
    ctx->pc = 0x7F0AB6B0u;
    // 7F0AB6B0: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AB6B4:
    ctx->pc = 0x7F0AB6B4u;
    // 7F0AB6B4: bc    12, 2, 0x7F0AB6C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB6C8;
        }
    }

label_7F0AB6B8:
    ctx->pc = 0x7F0AB6B8u;
    ctx->downcount -= 4;
    // 7F0AB6B8: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AB6BC:
    ctx->pc = 0x7F0AB6BCu;
    // 7F0AB6BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB6C0:
    ctx->pc = 0x7F0AB6C0u;
    // 7F0AB6C0: addi    r4, r4, -18724
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18724);

label_7F0AB6C4:
    ctx->pc = 0x7F0AB6C4u;
    // 7F0AB6C4: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AB6C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0AB6C8:
    ctx->pc = 0x7F0AB6C8u;
    ctx->downcount -= 16;
    // 7F0AB6C8: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AB6CC:
    ctx->pc = 0x7F0AB6CCu;
    // 7F0AB6CC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB6D0:
    ctx->pc = 0x7F0AB6D0u;
    // 7F0AB6D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB6D4:
    ctx->pc = 0x7F0AB6D4u;
    // 7F0AB6D4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0AB6D8:
    ctx->pc = 0x7F0AB6D8u;
    // 7F0AB6D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB6DC:
    ctx->pc = 0x7F0AB6DCu;
    ctx->downcount -= 17;
    // 7F0AB6DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB6E0:
    ctx->pc = 0x7F0AB6E0u;
    // 7F0AB6E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB6E4:
    ctx->pc = 0x7F0AB6E4u;
    // 7F0AB6E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB6E8:
    ctx->pc = 0x7F0AB6E8u;
    // 7F0AB6E8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AB6EC:
    ctx->pc = 0x7F0AB6ECu;
    // 7F0AB6EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB6F0:
    ctx->pc = 0x7F0AB6F0u;
    // 7F0AB6F0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AB6F4:
    ctx->pc = 0x7F0AB6F4u;
    // 7F0AB6F4: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AB6F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AB6F8:
    ctx->pc = 0x7F0AB6F8u;
    ctx->downcount -= 3;
    // 7F0AB6F8: addi    r3, r30, 704
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(704);

label_7F0AB6FC:
    ctx->pc = 0x7F0AB6FCu;
    // 7F0AB6FC: li      r4, 258
    ctx->gpr[4] = (u32)(s32)(258);

label_7F0AB700:
    ctx->pc = 0x7F0AB700u;
    // 7F0AB700: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0AB704u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0AB704:
    ctx->pc = 0x7F0AB704u;
    ctx->downcount -= 3;
    // 7F0AB704: addi    r3, r30, 704
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(704);

label_7F0AB708:
    ctx->pc = 0x7F0AB708u;
    // 7F0AB708: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0AB70C:
    ctx->pc = 0x7F0AB70Cu;
    // 7F0AB70C: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0AB710u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0AB710:
    ctx->pc = 0x7F0AB710u;
    ctx->downcount -= 3;
    // 7F0AB710: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB714:
    ctx->pc = 0x7F0AB714u;
    // 7F0AB714: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AB718:
    ctx->pc = 0x7F0AB718u;
    // 7F0AB718: bc    12, 2, 0x7F0AB72C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB72C;
        }
    }

label_7F0AB71C:
    ctx->pc = 0x7F0AB71Cu;
    ctx->downcount -= 3;
    // 7F0AB71C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB720:
    ctx->pc = 0x7F0AB720u;
    // 7F0AB720: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F0AB724:
    ctx->pc = 0x7F0AB724u;
    // 7F0AB724: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AB728u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1F4u;
                return;
            }
            goto label_7F0AB1F4;
    }

label_7F0AB728:
    ctx->pc = 0x7F0AB728u;
    ctx->downcount -= 1;
    // 7F0AB728: b       0x7F0AB738
    {
            goto label_7F0AB738;
    }

label_7F0AB72C:
    ctx->pc = 0x7F0AB72Cu;
    ctx->downcount -= 3;
    // 7F0AB72C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB730:
    ctx->pc = 0x7F0AB730u;
    // 7F0AB730: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F0AB734:
    ctx->pc = 0x7F0AB734u;
    // 7F0AB734: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AB738u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1F4u;
                return;
            }
            goto label_7F0AB1F4;
    }

label_7F0AB738:
    ctx->pc = 0x7F0AB738u;
    ctx->downcount -= 2;
    // 7F0AB738: cmpwi   r31, 0
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

label_7F0AB73C:
    ctx->pc = 0x7F0AB73Cu;
    // 7F0AB73C: bc    4, 2, 0x7F0AB774
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB774;
        }
    }

label_7F0AB740:
    ctx->pc = 0x7F0AB740u;
    ctx->downcount -= 4;
    // 7F0AB740: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB744:
    ctx->pc = 0x7F0AB744u;
    // 7F0AB744: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB748:
    ctx->pc = 0x7F0AB748u;
    // 7F0AB748: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AB74C:
    ctx->pc = 0x7F0AB74Cu;
    // 7F0AB74C: bc    12, 2, 0x7F0AB758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB758;
        }
    }

label_7F0AB750:
    ctx->pc = 0x7F0AB750u;
    ctx->downcount -= 2;
    // 7F0AB750: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F0AB754:
    ctx->pc = 0x7F0AB754u;
    // 7F0AB754: b       0x7F0AB76C
    {
            goto label_7F0AB76C;
    }

label_7F0AB758:
    ctx->pc = 0x7F0AB758u;
    ctx->downcount -= 4;
    // 7F0AB758: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB75C:
    ctx->pc = 0x7F0AB75Cu;
    // 7F0AB75C: li      r4, 33
    ctx->gpr[4] = (u32)(s32)(33);

label_7F0AB760:
    ctx->pc = 0x7F0AB760u;
    // 7F0AB760: cmpwi   r0, 0
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

label_7F0AB764:
    ctx->pc = 0x7F0AB764u;
    // 7F0AB764: bc    4, 2, 0x7F0AB76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB76C;
        }
    }

label_7F0AB768:
    ctx->pc = 0x7F0AB768u;
    ctx->downcount -= 1;
    // 7F0AB768: li      r4, 34
    ctx->gpr[4] = (u32)(s32)(34);

label_7F0AB76C:
    ctx->pc = 0x7F0AB76Cu;
    ctx->downcount -= 2;
    // 7F0AB76C: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AB770:
    ctx->pc = 0x7F0AB770u;
    // 7F0AB770: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AB774u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB0F8u;
                return;
            }
            goto label_7F0AB0F8;
    }

label_7F0AB774:
    ctx->pc = 0x7F0AB774u;
    ctx->downcount -= 3;
    // 7F0AB774: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB778:
    ctx->pc = 0x7F0AB778u;
    // 7F0AB778: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F0AB77C:
    ctx->pc = 0x7F0AB77Cu;
    // 7F0AB77C: bl      0x7F0AC014
    {
            ctx->lr = 0x7F0AB780u;
            goto label_7F0AC014;
    }

label_7F0AB780:
    ctx->pc = 0x7F0AB780u;
    ctx->downcount -= 2;
    // 7F0AB780: cmpwi   r3, 0
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

label_7F0AB784:
    ctx->pc = 0x7F0AB784u;
    // 7F0AB784: bc    4, 2, 0x7F0AB7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB7B4;
        }
    }

label_7F0AB788:
    ctx->pc = 0x7F0AB788u;
    ctx->downcount -= 2;
    // 7F0AB788: cmpwi   r31, 30
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(30);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AB78C:
    ctx->pc = 0x7F0AB78Cu;
    // 7F0AB78C: bc    12, 1, 0x7F0AB7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB7A4;
        }
    }

label_7F0AB790:
    ctx->pc = 0x7F0AB790u;
    ctx->downcount -= 3;
    // 7F0AB790: lwz     r3, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB794:
    ctx->pc = 0x7F0AB794u;
    // 7F0AB794: rlwinm. r0, r3, 0, 23, 23
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

label_7F0AB798:
    ctx->pc = 0x7F0AB798u;
    // 7F0AB798: bc    4, 2, 0x7F0AB7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB7A4;
        }
    }

label_7F0AB79C:
    ctx->pc = 0x7F0AB79Cu;
    ctx->downcount -= 2;
    // 7F0AB79C: rlwinm. r0, r3, 0, 31, 31
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

label_7F0AB7A0:
    ctx->pc = 0x7F0AB7A0u;
    // 7F0AB7A0: bc    12, 2, 0x7F0AB7B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB7B4;
        }
    }

label_7F0AB7A4:
    ctx->pc = 0x7F0AB7A4u;
    ctx->downcount -= 4;
    // 7F0AB7A4: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AB7A8:
    ctx->pc = 0x7F0AB7A8u;
    // 7F0AB7A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB7AC:
    ctx->pc = 0x7F0AB7ACu;
    // 7F0AB7AC: addi    r4, r4, -18488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18488);

label_7F0AB7B0:
    ctx->pc = 0x7F0AB7B0u;
    // 7F0AB7B0: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AB7B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0AB7B4:
    ctx->pc = 0x7F0AB7B4u;
    ctx->downcount -= 16;
    // 7F0AB7B4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AB7B8:
    ctx->pc = 0x7F0AB7B8u;
    // 7F0AB7B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB7BC:
    ctx->pc = 0x7F0AB7BCu;
    // 7F0AB7BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB7C0:
    ctx->pc = 0x7F0AB7C0u;
    // 7F0AB7C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AB7C4:
    ctx->pc = 0x7F0AB7C4u;
    // 7F0AB7C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB7C8:
    ctx->pc = 0x7F0AB7C8u;
    ctx->downcount -= 18;
    // 7F0AB7C8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB7CC:
    ctx->pc = 0x7F0AB7CCu;
    // 7F0AB7CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB7D0:
    ctx->pc = 0x7F0AB7D0u;
    // 7F0AB7D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB7D4:
    ctx->pc = 0x7F0AB7D4u;
    // 7F0AB7D4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AB7D8:
    ctx->pc = 0x7F0AB7D8u;
    // 7F0AB7D8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB7DC:
    ctx->pc = 0x7F0AB7DCu;
    // 7F0AB7DC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AB7E0:
    ctx->pc = 0x7F0AB7E0u;
    // 7F0AB7E0: addi    r31, r30, 48
    ctx->gpr[31] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AB7E4:
    ctx->pc = 0x7F0AB7E4u;
    // 7F0AB7E4: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0AB7E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0AB7E8:
    ctx->pc = 0x7F0AB7E8u;
    ctx->downcount -= 3;
    // 7F0AB7E8: addi    r3, r30, 704
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(704);

label_7F0AB7EC:
    ctx->pc = 0x7F0AB7ECu;
    // 7F0AB7EC: li      r4, 258
    ctx->gpr[4] = (u32)(s32)(258);

label_7F0AB7F0:
    ctx->pc = 0x7F0AB7F0u;
    // 7F0AB7F0: bl      0x7F0B1F18
    {
            ctx->lr = 0x7F0AB7F4u;
            ctx->pc = 0x7F0B1F18u;
            return;
    }

label_7F0AB7F4:
    ctx->pc = 0x7F0AB7F4u;
    ctx->downcount -= 3;
    // 7F0AB7F4: addi    r3, r30, 704
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(704);

label_7F0AB7F8:
    ctx->pc = 0x7F0AB7F8u;
    // 7F0AB7F8: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0AB7FC:
    ctx->pc = 0x7F0AB7FCu;
    // 7F0AB7FC: bl      0x7F0B1F08
    {
            ctx->lr = 0x7F0AB800u;
            ctx->pc = 0x7F0B1F08u;
            return;
    }

label_7F0AB800:
    ctx->pc = 0x7F0AB800u;
    ctx->downcount -= 7;
    // 7F0AB800: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AB800u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AB804:
    ctx->pc = 0x7F0AB804u;
    // 7F0AB804: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AB808:
    ctx->pc = 0x7F0AB808u;
    // 7F0AB808: lfs     f1, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AB808u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AB80C:
    ctx->pc = 0x7F0AB80Cu;
    // 7F0AB80C: lfs     f0, -5296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AB80Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AB810:
    ctx->pc = 0x7F0AB810u;
    // 7F0AB810: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AB810u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0AB814:
    ctx->pc = 0x7F0AB814u;
    // 7F0AB814: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AB814u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0AB818:
    ctx->pc = 0x7F0AB818u;
    // 7F0AB818: bc    4, 0, 0x7F0AB828
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB828;
        }
    }

label_7F0AB81C:
    ctx->pc = 0x7F0AB81Cu;
    ctx->downcount -= 3;
    // 7F0AB81C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB820:
    ctx->pc = 0x7F0AB820u;
    // 7F0AB820: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0AB824:
    ctx->pc = 0x7F0AB824u;
    // 7F0AB824: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0AB828u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1F4u;
                return;
            }
            goto label_7F0AB1F4;
    }

label_7F0AB828:
    ctx->pc = 0x7F0AB828u;
    ctx->downcount -= 2;
    // 7F0AB828: cmpwi   r29, 0
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

label_7F0AB82C:
    ctx->pc = 0x7F0AB82Cu;
    // 7F0AB82C: bc    4, 2, 0x7F0AB8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB8D4;
        }
    }

label_7F0AB830:
    ctx->pc = 0x7F0AB830u;
    ctx->downcount -= 3;
    // 7F0AB830: lwz     r4, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AB834:
    ctx->pc = 0x7F0AB834u;
    // 7F0AB834: cmplwi  r4, 0x0000
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

label_7F0AB838:
    ctx->pc = 0x7F0AB838u;
    // 7F0AB838: bc    12, 2, 0x7F0AB850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB850;
        }
    }

label_7F0AB83C:
    ctx->pc = 0x7F0AB83Cu;
    ctx->downcount -= 5;
    // 7F0AB83C: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB840:
    ctx->pc = 0x7F0AB840u;
    // 7F0AB840: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB844:
    ctx->pc = 0x7F0AB844u;
    // 7F0AB844: ori     r3, r3, 0x0001
    ctx->gpr[3] = ctx->gpr[3] | 0x0001u;

label_7F0AB848:
    ctx->pc = 0x7F0AB848u;
    // 7F0AB848: stw     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0AB84C:
    ctx->pc = 0x7F0AB84Cu;
    // 7F0AB84C: stw     r0, 3688(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB850:
    ctx->pc = 0x7F0AB850u;
    ctx->downcount -= 6;
    // 7F0AB850: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB854:
    ctx->pc = 0x7F0AB854u;
    // 7F0AB854: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F0AB858:
    ctx->pc = 0x7F0AB858u;
    // 7F0AB858: stw     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB85C:
    ctx->pc = 0x7F0AB85Cu;
    // 7F0AB85C: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB860:
    ctx->pc = 0x7F0AB860u;
    // 7F0AB860: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0AB864:
    ctx->pc = 0x7F0AB864u;
    // 7F0AB864: bc    12, 2, 0x7F0AB870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB870;
        }
    }

label_7F0AB868:
    ctx->pc = 0x7F0AB868u;
    ctx->downcount -= 2;
    // 7F0AB868: li      r29, 25
    ctx->gpr[29] = (u32)(s32)(25);

label_7F0AB86C:
    ctx->pc = 0x7F0AB86Cu;
    // 7F0AB86C: b       0x7F0AB888
    {
            goto label_7F0AB888;
    }

label_7F0AB870:
    ctx->pc = 0x7F0AB870u;
    ctx->downcount -= 4;
    // 7F0AB870: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB874:
    ctx->pc = 0x7F0AB874u;
    // 7F0AB874: li      r3, 26
    ctx->gpr[3] = (u32)(s32)(26);

label_7F0AB878:
    ctx->pc = 0x7F0AB878u;
    // 7F0AB878: cmpwi   r0, 0
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

label_7F0AB87C:
    ctx->pc = 0x7F0AB87Cu;
    // 7F0AB87C: bc    4, 2, 0x7F0AB884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB884;
        }
    }

label_7F0AB880:
    ctx->pc = 0x7F0AB880u;
    ctx->downcount -= 1;
    // 7F0AB880: li      r3, 27
    ctx->gpr[3] = (u32)(s32)(27);

label_7F0AB884:
    ctx->pc = 0x7F0AB884u;
    ctx->downcount -= 1;
    // 7F0AB884: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AB888:
    ctx->pc = 0x7F0AB888u;
    ctx->downcount -= 3;
    // 7F0AB888: lwz     r6, 3988(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3988);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0AB88C:
    ctx->pc = 0x7F0AB88Cu;
    // 7F0AB88C: cmpwi   r6, 0
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

label_7F0AB890:
    ctx->pc = 0x7F0AB890u;
    // 7F0AB890: bc    12, 0, 0x7F0AB8C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB8C4;
        }
    }

label_7F0AB894:
    ctx->pc = 0x7F0AB894u;
    ctx->downcount -= 3;
    // 7F0AB894: lha     r0, 3972(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3972);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AB898:
    ctx->pc = 0x7F0AB898u;
    // 7F0AB898: cmpwi   r0, 0
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

label_7F0AB89C:
    ctx->pc = 0x7F0AB89Cu;
    // 7F0AB89C: bc    4, 2, 0x7F0AB8C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB8C4;
        }
    }

label_7F0AB8A0:
    ctx->pc = 0x7F0AB8A0u;
    ctx->downcount -= 7;
    // 7F0AB8A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AB8A4:
    ctx->pc = 0x7F0AB8A4u;
    // 7F0AB8A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0AB8A8:
    ctx->pc = 0x7F0AB8A8u;
    // 7F0AB8A8: addi    r4, r3, -5292
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5292);

label_7F0AB8AC:
    ctx->pc = 0x7F0AB8ACu;
    // 7F0AB8AC: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0AB8ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AB8B0:
    ctx->pc = 0x7F0AB8B0u;
    // 7F0AB8B0: addi    r3, r30, 3952
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(3952);

label_7F0AB8B4:
    ctx->pc = 0x7F0AB8B4u;
    // 7F0AB8B4: addi    r4, r30, 48
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(48);

label_7F0AB8B8:
    ctx->pc = 0x7F0AB8B8u;
    // 7F0AB8B8: bl      0x7F14B02C
    {
            ctx->lr = 0x7F0AB8BCu;
            ctx->pc = 0x7F14B02Cu;
            return;
    }

label_7F0AB8BC:
    ctx->pc = 0x7F0AB8BCu;
    ctx->downcount -= 2;
    // 7F0AB8BC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F0AB8C0:
    ctx->pc = 0x7F0AB8C0u;
    // 7F0AB8C0: stw     r0, 3992(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3992);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB8C4:
    ctx->pc = 0x7F0AB8C4u;
    ctx->downcount -= 4;
    // 7F0AB8C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB8C8:
    ctx->pc = 0x7F0AB8C8u;
    // 7F0AB8C8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AB8CC:
    ctx->pc = 0x7F0AB8CCu;
    // 7F0AB8CC: li      r5, 40
    ctx->gpr[5] = (u32)(s32)(40);

label_7F0AB8D0:
    ctx->pc = 0x7F0AB8D0u;
    // 7F0AB8D0: bl      0x7F0AB0F8
    {
            ctx->lr = 0x7F0AB8D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB0F8u;
                return;
            }
            goto label_7F0AB0F8;
    }

label_7F0AB8D4:
    ctx->pc = 0x7F0AB8D4u;
    ctx->downcount -= 7;
    // 7F0AB8D4: lfs     f2, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AB8D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AB8D8:
    ctx->pc = 0x7F0AB8D8u;
    // 7F0AB8D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0AB8DC:
    ctx->pc = 0x7F0AB8DCu;
    // 7F0AB8DC: lfs     f1, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AB8DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AB8E0:
    ctx->pc = 0x7F0AB8E0u;
    // 7F0AB8E0: lfs     f0, -5296(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0AB8E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5296);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0AB8E4:
    ctx->pc = 0x7F0AB8E4u;
    // 7F0AB8E4: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F0AB8E4u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F0AB8E8:
    ctx->pc = 0x7F0AB8E8u;
    // 7F0AB8E8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0AB8E8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F0AB8EC:
    ctx->pc = 0x7F0AB8ECu;
    // 7F0AB8EC: bc    4, 0, 0x7F0AB8F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB8F8;
        }
    }

label_7F0AB8F0:
    ctx->pc = 0x7F0AB8F0u;
    ctx->downcount -= 2;
    // 7F0AB8F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0AB8F4:
    ctx->pc = 0x7F0AB8F4u;
    // 7F0AB8F4: bl      0x7F0ABE5C
    {
            ctx->lr = 0x7F0AB8F8u;
            goto label_7F0ABE5C;
    }

label_7F0AB8F8:
    ctx->pc = 0x7F0AB8F8u;
    ctx->downcount -= 5;
    // 7F0AB8F8: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB8FC:
    ctx->pc = 0x7F0AB8FCu;
    // 7F0AB8FC: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AB900:
    ctx->pc = 0x7F0AB900u;
    // 7F0AB900: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB904:
    ctx->pc = 0x7F0AB904u;
    // 7F0AB904: rlwinm. r0, r0, 0, 29, 29
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

label_7F0AB908:
    ctx->pc = 0x7F0AB908u;
    // 7F0AB908: bc    12, 2, 0x7F0AB944
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB944;
        }
    }

label_7F0AB90C:
    ctx->pc = 0x7F0AB90Cu;
    ctx->downcount -= 3;
    // 7F0AB90C: lwz     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB910:
    ctx->pc = 0x7F0AB910u;
    // 7F0AB910: cmpwi   r0, 0
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

label_7F0AB914:
    ctx->pc = 0x7F0AB914u;
    // 7F0AB914: bc    12, 1, 0x7F0AB920
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB920;
        }
    }

label_7F0AB918:
    ctx->pc = 0x7F0AB918u;
    ctx->downcount -= 2;
    // 7F0AB918: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F0AB91C:
    ctx->pc = 0x7F0AB91Cu;
    // 7F0AB91C: stw     r0, 3848(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB920:
    ctx->pc = 0x7F0AB920u;
    ctx->downcount -= 3;
    // 7F0AB920: lwz     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB924:
    ctx->pc = 0x7F0AB924u;
    // 7F0AB924: cmpwi   r0, 0
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

label_7F0AB928:
    ctx->pc = 0x7F0AB928u;
    // 7F0AB928: bc    12, 1, 0x7F0AB934
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB934;
        }
    }

label_7F0AB92C:
    ctx->pc = 0x7F0AB92Cu;
    ctx->downcount -= 2;
    // 7F0AB92C: li      r0, 100
    ctx->gpr[0] = (u32)(s32)(100);

label_7F0AB930:
    ctx->pc = 0x7F0AB930u;
    // 7F0AB930: stw     r0, 3844(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB934:
    ctx->pc = 0x7F0AB934u;
    ctx->downcount -= 4;
    // 7F0AB934: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AB938:
    ctx->pc = 0x7F0AB938u;
    // 7F0AB938: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0AB93C:
    ctx->pc = 0x7F0AB93Cu;
    // 7F0AB93C: addi    r4, r4, -22560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22560);

label_7F0AB940:
    ctx->pc = 0x7F0AB940u;
    // 7F0AB940: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AB944u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0AB944:
    ctx->pc = 0x7F0AB944u;
    ctx->downcount -= 16;
    // 7F0AB944: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0AB948:
    ctx->pc = 0x7F0AB948u;
    // 7F0AB948: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB94C:
    ctx->pc = 0x7F0AB94Cu;
    // 7F0AB94C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB950:
    ctx->pc = 0x7F0AB950u;
    // 7F0AB950: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0AB954:
    ctx->pc = 0x7F0AB954u;
    // 7F0AB954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB958:
    ctx->pc = 0x7F0AB958u;
    ctx->downcount -= 6;
    // 7F0AB958: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB95C:
    ctx->pc = 0x7F0AB95Cu;
    // 7F0AB95C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB960:
    ctx->pc = 0x7F0AB960u;
    // 7F0AB960: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB964:
    ctx->pc = 0x7F0AB964u;
    // 7F0AB964: lwz     r0, 3688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3688);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB968:
    ctx->pc = 0x7F0AB968u;
    // 7F0AB968: cmplwi  r0, 0x0000
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

label_7F0AB96C:
    ctx->pc = 0x7F0AB96Cu;
    // 7F0AB96C: bc    12, 2, 0x7F0AB998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB998;
        }
    }

label_7F0AB970:
    ctx->pc = 0x7F0AB970u;
    ctx->downcount -= 8;
    // 7F0AB970: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB974:
    ctx->pc = 0x7F0AB974u;
    // 7F0AB974: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AB978:
    ctx->pc = 0x7F0AB978u;
    // 7F0AB978: stw     r0, 860(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(860);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB97C:
    ctx->pc = 0x7F0AB97Cu;
    // 7F0AB97C: addi    r4, r4, -19124
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19124);

label_7F0AB980:
    ctx->pc = 0x7F0AB980u;
    // 7F0AB980: stw     r0, 856(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB984:
    ctx->pc = 0x7F0AB984u;
    // 7F0AB984: stw     r0, 852(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB988:
    ctx->pc = 0x7F0AB988u;
    // 7F0AB988: stw     r0, 848(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(848);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB98C:
    ctx->pc = 0x7F0AB98Cu;
    // 7F0AB98C: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AB990u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0AB990:
    ctx->pc = 0x7F0AB990u;
    ctx->downcount -= 2;
    // 7F0AB990: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AB994:
    ctx->pc = 0x7F0AB994u;
    // 7F0AB994: b       0x7F0AB99C
    {
            goto label_7F0AB99C;
    }

label_7F0AB998:
    ctx->pc = 0x7F0AB998u;
    ctx->downcount -= 1;
    // 7F0AB998: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AB99C:
    ctx->pc = 0x7F0AB99Cu;
    ctx->downcount -= 5;
    // 7F0AB99C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB9A0:
    ctx->pc = 0x7F0AB9A0u;
    // 7F0AB9A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB9A4:
    ctx->pc = 0x7F0AB9A4u;
    // 7F0AB9A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AB9A8:
    ctx->pc = 0x7F0AB9A8u;
    // 7F0AB9A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AB9AC:
    ctx->pc = 0x7F0AB9ACu;
    ctx->downcount -= 6;
    // 7F0AB9AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AB9B0:
    ctx->pc = 0x7F0AB9B0u;
    // 7F0AB9B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AB9B4:
    ctx->pc = 0x7F0AB9B4u;
    // 7F0AB9B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB9B8:
    ctx->pc = 0x7F0AB9B8u;
    // 7F0AB9B8: lwz     r0, 3692(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB9BC:
    ctx->pc = 0x7F0AB9BCu;
    // 7F0AB9BC: rlwinm. r0, r0, 0, 31, 31
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

label_7F0AB9C0:
    ctx->pc = 0x7F0AB9C0u;
    // 7F0AB9C0: bc    12, 2, 0x7F0AB9EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AB9EC;
        }
    }

label_7F0AB9C4:
    ctx->pc = 0x7F0AB9C4u;
    ctx->downcount -= 8;
    // 7F0AB9C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0AB9C8:
    ctx->pc = 0x7F0AB9C8u;
    // 7F0AB9C8: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0AB9CC:
    ctx->pc = 0x7F0AB9CCu;
    // 7F0AB9CC: stw     r0, 3688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB9D0:
    ctx->pc = 0x7F0AB9D0u;
    // 7F0AB9D0: addi    r4, r4, -18488
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18488);

label_7F0AB9D4:
    ctx->pc = 0x7F0AB9D4u;
    // 7F0AB9D4: lwz     r0, 3692(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB9D8:
    ctx->pc = 0x7F0AB9D8u;
    // 7F0AB9D8: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F0AB9DC:
    ctx->pc = 0x7F0AB9DCu;
    // 7F0AB9DC: stw     r0, 3692(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AB9E0:
    ctx->pc = 0x7F0AB9E0u;
    // 7F0AB9E0: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AB9E4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0AB9E4:
    ctx->pc = 0x7F0AB9E4u;
    ctx->downcount -= 2;
    // 7F0AB9E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0AB9E8:
    ctx->pc = 0x7F0AB9E8u;
    // 7F0AB9E8: b       0x7F0AB9F0
    {
            goto label_7F0AB9F0;
    }

label_7F0AB9EC:
    ctx->pc = 0x7F0AB9ECu;
    ctx->downcount -= 1;
    // 7F0AB9EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0AB9F0:
    ctx->pc = 0x7F0AB9F0u;
    ctx->downcount -= 5;
    // 7F0AB9F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AB9F4:
    ctx->pc = 0x7F0AB9F4u;
    // 7F0AB9F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AB9F8:
    ctx->pc = 0x7F0AB9F8u;
    // 7F0AB9F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AB9FC:
    ctx->pc = 0x7F0AB9FCu;
    // 7F0AB9FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0ABA00:
    ctx->pc = 0x7F0ABA00u;
    ctx->downcount -= 23;
    // 7F0ABA00: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ABA04:
    ctx->pc = 0x7F0ABA04u;
    // 7F0ABA04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ABA08:
    ctx->pc = 0x7F0ABA08u;
    // 7F0ABA08: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F0ABA0C:
    ctx->pc = 0x7F0ABA0Cu;
    // 7F0ABA0C: lis     r4, 30720
    ctx->gpr[4] = ((u32)(s32)(30720) << 16);

label_7F0ABA10:
    ctx->pc = 0x7F0ABA10u;
    // 7F0ABA10: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABA14:
    ctx->pc = 0x7F0ABA14u;
    // 7F0ABA14: addi    r5, r5, 19248
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19248);

label_7F0ABA18:
    ctx->pc = 0x7F0ABA18u;
    // 7F0ABA18: addi    r0, r4, 64
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(64);

label_7F0ABA1C:
    ctx->pc = 0x7F0ABA1Cu;
    // 7F0ABA1C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0ABA20:
    ctx->pc = 0x7F0ABA20u;
    // 7F0ABA20: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ABA24:
    ctx->pc = 0x7F0ABA24u;
    // 7F0ABA24: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0ABA28:
    ctx->pc = 0x7F0ABA28u;
    // 7F0ABA28: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ABA2C:
    ctx->pc = 0x7F0ABA2Cu;
    // 7F0ABA2C: and.   r0, r5, r0
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ABA30:
    ctx->pc = 0x7F0ABA30u;
    // 7F0ABA30: bc    12, 2, 0x7F0ABA3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABA3C;
        }
    }

label_7F0ABA34:
    ctx->pc = 0x7F0ABA34u;
    ctx->downcount -= 1;
    // 7F0ABA34: bl      0x7F0AAFD4
    {
            ctx->lr = 0x7F0ABA38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AAFD4u;
                return;
            }
            goto label_7F0AAFD4;
    }

label_7F0ABA38:
    ctx->pc = 0x7F0ABA38u;
    ctx->downcount -= 1;
    // 7F0ABA38: b       0x7F0ABCFC
    {
            goto label_7F0ABCFC;
    }

label_7F0ABA3C:
    ctx->pc = 0x7F0ABA3Cu;
    ctx->downcount -= 2;
    // 7F0ABA3C: li      r30, 12
    ctx->gpr[30] = (u32)(s32)(12);

label_7F0ABA40:
    ctx->pc = 0x7F0ABA40u;
    // 7F0ABA40: li      r27, 2304
    ctx->gpr[27] = (u32)(s32)(2304);

label_7F0ABA44:
    ctx->downcount -= 12;
    // 7F0ABA44: addi    r31, r27, 704
    ctx->gpr[31] = ctx->gpr[27] + (u32)(s32)(704);

label_7F0ABA48:
    // 7F0ABA48: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F0ABA4C:
    // 7F0ABA4C: add   r31, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_7F0ABA50:
    // 7F0ABA50: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ABA54:
    ctx->pc = 0x7F0ABA54u;
    // 7F0ABA54: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABA58:
    ctx->pc = 0x7F0ABA58u;
    // 7F0ABA58: lwz     r5, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ABA5C:
    // 7F0ABA5C: and   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F0ABA60:
    // 7F0ABA60: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0ABA64:
    // 7F0ABA64: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0ABA68:
    // 7F0ABA68: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0ABA6C:
    // 7F0ABA6C: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ABA70:
    // 7F0ABA70: bc    12, 2, 0x7F0ABCE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABCE0;
        }
    }

label_7F0ABA74:
    ctx->downcount -= 16;
    // 7F0ABA74: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F0ABA78:
    ctx->pc = 0x7F0ABA78u;
    // 7F0ABA78: lwz     r6, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0ABA7C:
    // 7F0ABA7C: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F0ABA80:
    ctx->pc = 0x7F0ABA80u;
    // 7F0ABA80: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ABA84:
    ctx->pc = 0x7F0ABA84u;
    // 7F0ABA84: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABA88:
    ctx->pc = 0x7F0ABA88u;
    // 7F0ABA88: stw     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ABA8C:
    ctx->pc = 0x7F0ABA8Cu;
    // 7F0ABA8C: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ABA90:
    ctx->pc = 0x7F0ABA90u;
    // 7F0ABA90: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ABA94:
    ctx->pc = 0x7F0ABA94u;
    // 7F0ABA94: lwz     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABA98:
    ctx->pc = 0x7F0ABA98u;
    // 7F0ABA98: stw     r4, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ABA9C:
    ctx->pc = 0x7F0ABA9Cu;
    // 7F0ABA9C: stw     r3, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ABAA0:
    ctx->pc = 0x7F0ABAA0u;
    // 7F0ABAA0: stw     r30, 3696(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3696);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F0ABAA4:
    ctx->pc = 0x7F0ABAA4u;
    // 7F0ABAA4: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABAA8:
    ctx->pc = 0x7F0ABAA8u;
    // 7F0ABAA8: lha     r3, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0ABAAC:
    // 7F0ABAAC: cmpwi   r3, 0
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

label_7F0ABAB0:
    // 7F0ABAB0: bc    12, 1, 0x7F0ABB3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABB3C;
        }
    }

label_7F0ABAB4:
    ctx->downcount -= 11;
    // 7F0ABAB4: lis     r3, 7
    ctx->gpr[3] = ((u32)(s32)(7) << 16);

label_7F0ABAB8:
    ctx->pc = 0x7F0ABAB8u;
    // 7F0ABAB8: lwz     r5, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ABABC:
    // 7F0ABABC: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F0ABAC0:
    ctx->pc = 0x7F0ABAC0u;
    // 7F0ABAC0: lwz     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0ABAC4:
    // 7F0ABAC4: addi    r3, r3, -31748
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31748);

label_7F0ABAC8:
    // 7F0ABAC8: and   r3, r6, r3
    {
        ctx->gpr[3] = ctx->gpr[6] & ctx->gpr[3];
    }

label_7F0ABACC:
    // 7F0ABACC: and   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] & ctx->gpr[4];
    }

label_7F0ABAD0:
    // 7F0ABAD0: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0ABAD4:
    // 7F0ABAD4: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0ABAD8:
    // 7F0ABAD8: or.   r0, r3, r0
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

label_7F0ABADC:
    // 7F0ABADC: bc    12, 2, 0x7F0ABB00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABB00;
        }
    }

label_7F0ABAE0:
    ctx->downcount -= 8;
    // 7F0ABAE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0ABAE4:
    ctx->pc = 0x7F0ABAE4u;
    // 7F0ABAE4: lwz     r6, 208(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(208);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0ABAE8:
    // 7F0ABAE8: addi    r4, r3, -5296
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5296);

label_7F0ABAEC:
    // 7F0ABAEC: addi    r3, r28, 448
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(448);

label_7F0ABAF0:
    ctx->pc = 0x7F0ABAF0u;
    // 7F0ABAF0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABAF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ABAF4:
    // 7F0ABAF4: li      r4, 3000
    ctx->gpr[4] = (u32)(s32)(3000);

label_7F0ABAF8:
    // 7F0ABAF8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F0ABAFC:
    // 7F0ABAFC: bl      0x7F0DCF70
    {
            ctx->lr = 0x7F0ABB00u;
            ctx->pc = 0x7F0DCF70u;
            return;
    }

label_7F0ABB00:
    ctx->downcount -= 5;
    // 7F0ABB00: lis     r0, 24576
    ctx->gpr[0] = ((u32)(s32)(24576) << 16);

label_7F0ABB04:
    ctx->pc = 0x7F0ABB04u;
    // 7F0ABB04: stw     r0, 3876(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3876);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABB08:
    ctx->pc = 0x7F0ABB08u;
    // 7F0ABB08: lwz     r3, 3880(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABB0C:
    ctx->pc = 0x7F0ABB0Cu;
    // 7F0ABB0C: lwz     r4, 3876(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3876);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ABB10:
    // 7F0ABB10: bl      0x7F22DA88
    {
            ctx->lr = 0x7F0ABB14u;
            ctx->pc = 0x7F22DA88u;
            return;
    }

label_7F0ABB14:
    ctx->downcount -= 9;
    // 7F0ABB14: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ABB18:
    // 7F0ABB18: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0ABB1C:
    ctx->pc = 0x7F0ABB1Cu;
    // 7F0ABB1C: stw     r0, 19268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABB20:
    // 7F0ABB20: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_7F0ABB24:
    // 7F0ABB24: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0ABB28:
    ctx->pc = 0x7F0ABB28u;
    // 7F0ABB28: stw     r0, 3836(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABB2C:
    // 7F0ABB2C: addi    r4, r3, -23440
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-23440);

label_7F0ABB30:
    // 7F0ABB30: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0ABB34:
    // 7F0ABB34: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ABB38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0ABB38:
    ctx->downcount -= 1;
    // 7F0ABB38: b       0x7F0ABCE0
    {
            goto label_7F0ABCE0;
    }

label_7F0ABB3C:
    ctx->pc = 0x7F0ABB3Cu;
    ctx->downcount -= 10;
    // 7F0ABB3C: lwz     r7, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F0ABB40:
    // 7F0ABB40: lis     r6, 8
    ctx->gpr[6] = ((u32)(s32)(8) << 16);

label_7F0ABB44:
    ctx->pc = 0x7F0ABB44u;
    // 7F0ABB44: lwz     r8, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F0ABB48:
    // 7F0ABB48: addi    r3, r6, 2
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(2);

label_7F0ABB4C:
    // 7F0ABB4C: and   r5, r7, r0
    {
        ctx->gpr[5] = ctx->gpr[7] & ctx->gpr[0];
    }

label_7F0ABB50:
    // 7F0ABB50: and   r3, r8, r3
    {
        ctx->gpr[3] = ctx->gpr[8] & ctx->gpr[3];
    }

label_7F0ABB54:
    // 7F0ABB54: xor   r4, r3, r0
    {
        ctx->gpr[4] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0ABB58:
    // 7F0ABB58: xor   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F0ABB5C:
    // 7F0ABB5C: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ABB60:
    // 7F0ABB60: bc    12, 2, 0x7F0ABBB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABBB0;
        }
    }

label_7F0ABB64:
    ctx->downcount -= 2;
    // 7F0ABB64: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ABB68:
    // 7F0ABB68: bl      0x7F0B2170
    {
            ctx->lr = 0x7F0ABB6Cu;
            ctx->pc = 0x7F0B2170u;
            return;
    }

label_7F0ABB6C:
    ctx->downcount -= 5;
    // 7F0ABB6C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ABB70:
    // 7F0ABB70: addi    r3, r28, 448
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(448);

label_7F0ABB74:
    // 7F0ABB74: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0ABB78:
    // 7F0ABB78: addi    r5, r31, 128
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(128);

label_7F0ABB7C:
    // 7F0ABB7C: bl      0x7F12BFFC
    {
            ctx->lr = 0x7F0ABB80u;
            ctx->pc = 0x7F12BFFCu;
            return;
    }

label_7F0ABB80:
    ctx->downcount -= 5;
    // 7F0ABB80: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ABB84:
    // 7F0ABB84: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0ABB88:
    ctx->pc = 0x7F0ABB88u;
    // 7F0ABB88: stw     r0, 3844(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABB8C:
    // 7F0ABB8C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F0ABB90:
    // 7F0ABB90: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0ABB94u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1F4u;
                return;
            }
            goto label_7F0AB1F4;
    }

label_7F0ABB94:
    ctx->downcount -= 6;
    // 7F0ABB94: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0ABB98:
    // 7F0ABB98: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0ABB9C:
    ctx->pc = 0x7F0ABB9Cu;
    // 7F0ABB9C: stw     r0, 3852(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3852);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABBA0:
    // 7F0ABBA0: addi    r4, r3, -19940
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19940);

label_7F0ABBA4:
    // 7F0ABBA4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0ABBA8:
    // 7F0ABBA8: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ABBACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0ABBAC:
    ctx->downcount -= 1;
    // 7F0ABBAC: b       0x7F0ABCBC
    {
            goto label_7F0ABCBC;
    }

label_7F0ABBB0:
    ctx->downcount -= 8;
    // 7F0ABBB0: lis     r4, 7
    ctx->gpr[4] = ((u32)(s32)(7) << 16);

label_7F0ABBB4:
    // 7F0ABBB4: and   r3, r7, r6
    {
        ctx->gpr[3] = ctx->gpr[7] & ctx->gpr[6];
    }

label_7F0ABBB8:
    // 7F0ABBB8: addi    r4, r4, -31748
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31748);

label_7F0ABBBC:
    // 7F0ABBBC: and   r4, r8, r4
    {
        ctx->gpr[4] = ctx->gpr[8] & ctx->gpr[4];
    }

label_7F0ABBC0:
    // 7F0ABBC0: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F0ABBC4:
    // 7F0ABBC4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0ABBC8:
    // 7F0ABBC8: or.   r3, r4, r3
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ABBCC:
    // 7F0ABBCC: bc    12, 2, 0x7F0ABCBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABCBC;
        }
    }

label_7F0ABBD0:
    ctx->downcount -= 7;
    // 7F0ABBD0: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F0ABBD4:
    // 7F0ABBD4: xor   r3, r5, r0
    {
        ctx->gpr[3] = ctx->gpr[5] ^ ctx->gpr[0];
    }

label_7F0ABBD8:
    // 7F0ABBD8: addi    r4, r4, 992
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(992);

label_7F0ABBDC:
    // 7F0ABBDC: and   r4, r8, r4
    {
        ctx->gpr[4] = ctx->gpr[8] & ctx->gpr[4];
    }

label_7F0ABBE0:
    // 7F0ABBE0: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F0ABBE4:
    // 7F0ABBE4: or.   r3, r0, r3
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[3];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ABBE8:
    // 7F0ABBE8: bc    12, 2, 0x7F0ABC0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABC0C;
        }
    }

label_7F0ABBEC:
    ctx->pc = 0x7F0ABBECu;
    ctx->downcount -= 8;
    // 7F0ABBEC: lwz     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABBF0:
    ctx->pc = 0x7F0ABBF0u;
    // 7F0ABBF0: lwz     r0, 52(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABBF4:
    ctx->pc = 0x7F0ABBF4u;
    // 7F0ABBF4: stw     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ABBF8:
    ctx->pc = 0x7F0ABBF8u;
    // 7F0ABBF8: stw     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABBFC:
    ctx->pc = 0x7F0ABBFCu;
    // 7F0ABBFC: lwz     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABC00:
    ctx->pc = 0x7F0ABC00u;
    // 7F0ABC00: lwz     r0, 60(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABC04:
    ctx->pc = 0x7F0ABC04u;
    // 7F0ABC04: stw     r3, 136(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F0ABC08:
    ctx->pc = 0x7F0ABC08u;
    // 7F0ABC08: stw     r0, 140(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABC0C:
    ctx->pc = 0x7F0ABC0Cu;
    ctx->downcount -= 6;
    // 7F0ABC0C: lwz     r3, 3892(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3892);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABC10:
    // 7F0ABC10: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ABC14:
    ctx->pc = 0x7F0ABC14u;
    // 7F0ABC14: lwz     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ABC18:
    // 7F0ABC18: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ABC1C:
    // 7F0ABC1C: addi    r7, r28, 3896
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(3896);

label_7F0ABC20:
    // 7F0ABC20: bl      0x7F3A1F28
    {
            ctx->lr = 0x7F0ABC24u;
            ctx->pc = 0x7F3A1F28u;
            return;
    }

label_7F0ABC24:
    ctx->pc = 0x7F0ABC24u;
    ctx->downcount -= 6;
    // 7F0ABC24: lwz     r5, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ABC28:
    // 7F0ABC28: addi    r3, r31, 16
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16);

label_7F0ABC2C:
    // 7F0ABC2C: addi    r4, r31, 128
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(128);

label_7F0ABC30:
    // 7F0ABC30: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F0ABC34:
    // 7F0ABC34: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0ABC38:
    // 7F0ABC38: bl      0x7F1E50F0
    {
            ctx->lr = 0x7F0ABC3Cu;
            ctx->pc = 0x7F1E50F0u;
            return;
    }

label_7F0ABC3C:
    ctx->downcount -= 3;
    // 7F0ABC3C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ABC40:
    // 7F0ABC40: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0ABC44:
    // 7F0ABC44: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F0ABC48u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F0ABC48:
    ctx->downcount -= 2;
    // 7F0ABC48: cmpwi   r30, 3
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

label_7F0ABC4C:
    // 7F0ABC4C: bc    12, 2, 0x7F0ABC58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABC58;
        }
    }

label_7F0ABC50:
    ctx->downcount -= 2;
    // 7F0ABC50: cmpwi   r30, 2
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

label_7F0ABC54:
    // 7F0ABC54: bc    4, 2, 0x7F0ABC68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABC68;
        }
    }

label_7F0ABC58:
    ctx->pc = 0x7F0ABC58u;
    ctx->downcount -= 4;
    // 7F0ABC58: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABC5C:
    // 7F0ABC5C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ABC60:
    ctx->pc = 0x7F0ABC60u;
    // 7F0ABC60: sth     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0ABC64:
    // 7F0ABC64: b       0x7F0ABC74
    {
            goto label_7F0ABC74;
    }

label_7F0ABC68:
    ctx->downcount -= 3;
    // 7F0ABC68: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0ABC6C:
    // 7F0ABC6C: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F0ABC70:
    // 7F0ABC70: bl      0x7F0AB1F4
    {
            ctx->lr = 0x7F0ABC74u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB1F4u;
                return;
            }
            goto label_7F0AB1F4;
    }

label_7F0ABC74:
    ctx->pc = 0x7F0ABC74u;
    ctx->downcount -= 4;
    // 7F0ABC74: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABC78:
    ctx->pc = 0x7F0ABC78u;
    // 7F0ABC78: lha     r0, 18(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0ABC7C:
    // 7F0ABC7C: cmpwi   r0, 0
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

label_7F0ABC80:
    // 7F0ABC80: bc    12, 1, 0x7F0ABCBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABCBC;
        }
    }

label_7F0ABC84:
    ctx->downcount -= 14;
    // 7F0ABC84: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F0ABC88:
    // 7F0ABC88: li      r0, 600
    ctx->gpr[0] = (u32)(s32)(600);

label_7F0ABC8C:
    ctx->pc = 0x7F0ABC8Cu;
    // 7F0ABC8C: stw     r0, 19268(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(19268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABC90:
    // 7F0ABC90: lis     r3, 32523
    ctx->gpr[3] = ((u32)(s32)(32523) << 16);

label_7F0ABC94:
    // 7F0ABC94: addi    r4, r3, -19940
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-19940);

label_7F0ABC98:
    // 7F0ABC98: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F0ABC9C:
    ctx->pc = 0x7F0ABC9Cu;
    // 7F0ABC9C: lwz     r6, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0ABCA0:
    // 7F0ABCA0: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F0ABCA4:
    // 7F0ABCA4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F0ABCA8:
    // 7F0ABCA8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0ABCAC:
    ctx->pc = 0x7F0ABCACu;
    // 7F0ABCAC: sth     r7, 18(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F0ABCB0:
    ctx->pc = 0x7F0ABCB0u;
    // 7F0ABCB0: stw     r5, 3836(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3836);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0ABCB4:
    ctx->pc = 0x7F0ABCB4u;
    // 7F0ABCB4: stw     r0, 3856(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3856);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABCB8:
    // 7F0ABCB8: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0ABCBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0ABCBC:
    ctx->downcount -= 2;
    // 7F0ABCBC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0ABCC0:
    // 7F0ABCC0: bl      0x7F0A9010
    {
            ctx->lr = 0x7F0ABCC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0A9010u;
                return;
            }
            goto label_7F0A9010;
    }

label_7F0ABCC4:
    ctx->downcount -= 7;
    // 7F0ABCC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ABCC8:
    // 7F0ABCC8: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_7F0ABCCC:
    ctx->pc = 0x7F0ABCCCu;
    // 7F0ABCCC: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABCD0:
    ctx->pc = 0x7F0ABCD0u;
    // 7F0ABCD0: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABCD4:
    ctx->pc = 0x7F0ABCD4u;
    // 7F0ABCD4: stw     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABCD8:
    ctx->pc = 0x7F0ABCD8u;
    // 7F0ABCD8: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABCDC:
    // 7F0ABCDC: b       0x7F0ABCEC
    {
            goto label_7F0ABCEC;
    }

label_7F0ABCE0:
    ctx->downcount -= 3;
    // 7F0ABCE0: addic.  r30, r30, -1
    {
        u64 a = ctx->gpr[30];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[30] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[30];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ABCE4:
    // 7F0ABCE4: addi    r27, r27, -192
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-192);

label_7F0ABCE8:
    // 7F0ABCE8: bc    4, 0, 0x7F0ABA44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0ABA44u;
                return;
            }
            goto label_7F0ABA44;
        }
    }

label_7F0ABCEC:
    ctx->pc = 0x7F0ABCECu;
    ctx->downcount -= 2;
    // 7F0ABCEC: cmpwi   r29, 0
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

label_7F0ABCF0:
    ctx->pc = 0x7F0ABCF0u;
    // 7F0ABCF0: bc    12, 2, 0x7F0ABCFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABCFC;
        }
    }

label_7F0ABCF4:
    ctx->pc = 0x7F0ABCF4u;
    ctx->downcount -= 2;
    // 7F0ABCF4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F0ABCF8:
    ctx->pc = 0x7F0ABCF8u;
    // 7F0ABCF8: bl      0x7F0AAFD4
    {
            ctx->lr = 0x7F0ABCFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AAFD4u;
                return;
            }
            goto label_7F0AAFD4;
    }

label_7F0ABCFC:
    ctx->pc = 0x7F0ABCFCu;
    ctx->downcount -= 17;
    // 7F0ABCFC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0ABD00:
    ctx->pc = 0x7F0ABD00u;
    // 7F0ABD00: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0ABD04:
    ctx->pc = 0x7F0ABD04u;
    // 7F0ABD04: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABD08:
    ctx->pc = 0x7F0ABD08u;
    // 7F0ABD08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ABD0C:
    ctx->pc = 0x7F0ABD0Cu;
    // 7F0ABD0C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F0ABD10:
    ctx->pc = 0x7F0ABD10u;
    // 7F0ABD10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0ABD14:
    ctx->pc = 0x7F0ABD14u;
    ctx->downcount -= 29;
    // 7F0ABD14: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ABD18:
    ctx->pc = 0x7F0ABD18u;
    // 7F0ABD18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ABD1C:
    ctx->pc = 0x7F0ABD1Cu;
    // 7F0ABD1C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABD20:
    ctx->pc = 0x7F0ABD20u;
    // 7F0ABD20: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0ABD24:
    ctx->pc = 0x7F0ABD24u;
    // 7F0ABD24: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0ABD28:
    ctx->pc = 0x7F0ABD28u;
    // 7F0ABD28: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ABD2C:
    ctx->pc = 0x7F0ABD2Cu;
    // 7F0ABD2C: lwz     r4, 3688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3688);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ABD30:
    ctx->pc = 0x7F0ABD30u;
    // 7F0ABD30: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0ABD34:
    ctx->pc = 0x7F0ABD34u;
    // 7F0ABD34: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F0ABD38:
    ctx->pc = 0x7F0ABD38u;
    // 7F0ABD38: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ABD3C:
    ctx->pc = 0x7F0ABD3Cu;
    // 7F0ABD3C: addi    r4, r6, 32
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(32);

label_7F0ABD40:
    ctx->pc = 0x7F0ABD40u;
    // 7F0ABD40: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABD44:
    ctx->pc = 0x7F0ABD44u;
    // 7F0ABD44: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0ABD48:
    ctx->pc = 0x7F0ABD48u;
    // 7F0ABD48: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABD4C:
    ctx->pc = 0x7F0ABD4Cu;
    // 7F0ABD4C: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ABD50:
    ctx->pc = 0x7F0ABD50u;
    // 7F0ABD50: lwz     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABD54:
    ctx->pc = 0x7F0ABD54u;
    // 7F0ABD54: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F0ABD58:
    ctx->pc = 0x7F0ABD58u;
    // 7F0ABD58: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABD5C:
    ctx->pc = 0x7F0ABD5Cu;
    // 7F0ABD5C: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F0ABD60u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F0ABD60:
    ctx->pc = 0x7F0ABD60u;
    ctx->downcount -= 3;
    // 7F0ABD60: lwz     r0, 3692(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABD64:
    ctx->pc = 0x7F0ABD64u;
    // 7F0ABD64: rlwinm. r0, r0, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F0ABD68:
    ctx->pc = 0x7F0ABD68u;
    // 7F0ABD68: bc    12, 2, 0x7F0ABD98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABD98;
        }
    }

label_7F0ABD6C:
    ctx->pc = 0x7F0ABD6Cu;
    ctx->downcount -= 3;
    // 7F0ABD6C: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABD70:
    ctx->pc = 0x7F0ABD70u;
    // 7F0ABD70: cmpwi   r0, 0
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

label_7F0ABD74:
    ctx->pc = 0x7F0ABD74u;
    // 7F0ABD74: bc    4, 2, 0x7F0ABD88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABD88;
        }
    }

label_7F0ABD78:
    ctx->pc = 0x7F0ABD78u;
    ctx->downcount -= 4;
    // 7F0ABD78: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0ABD7C:
    ctx->pc = 0x7F0ABD7Cu;
    // 7F0ABD7C: addi    r3, r3, 32732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32732);

label_7F0ABD80:
    ctx->pc = 0x7F0ABD80u;
    // 7F0ABD80: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_7F0ABD84:
    ctx->pc = 0x7F0ABD84u;
    // 7F0ABD84: b       0x7F0ABDC0
    {
            goto label_7F0ABDC0;
    }

label_7F0ABD88:
    ctx->pc = 0x7F0ABD88u;
    ctx->downcount -= 4;
    // 7F0ABD88: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0ABD8C:
    ctx->pc = 0x7F0ABD8Cu;
    // 7F0ABD8C: addi    r3, r3, 32732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32732);

label_7F0ABD90:
    ctx->pc = 0x7F0ABD90u;
    // 7F0ABD90: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_7F0ABD94:
    ctx->pc = 0x7F0ABD94u;
    // 7F0ABD94: b       0x7F0ABDC0
    {
            goto label_7F0ABDC0;
    }

label_7F0ABD98:
    ctx->pc = 0x7F0ABD98u;
    ctx->downcount -= 3;
    // 7F0ABD98: lwz     r0, 3840(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3840);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABD9C:
    ctx->pc = 0x7F0ABD9Cu;
    // 7F0ABD9C: cmpwi   r0, 0
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

label_7F0ABDA0:
    ctx->pc = 0x7F0ABDA0u;
    // 7F0ABDA0: bc    4, 2, 0x7F0ABDB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABDB4;
        }
    }

label_7F0ABDA4:
    ctx->pc = 0x7F0ABDA4u;
    ctx->downcount -= 4;
    // 7F0ABDA4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0ABDA8:
    ctx->pc = 0x7F0ABDA8u;
    // 7F0ABDA8: addi    r0, r3, 32732
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(32732);

label_7F0ABDAC:
    ctx->pc = 0x7F0ABDACu;
    // 7F0ABDAC: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F0ABDB0:
    ctx->pc = 0x7F0ABDB0u;
    // 7F0ABDB0: b       0x7F0ABDC0
    {
            goto label_7F0ABDC0;
    }

label_7F0ABDB4:
    ctx->pc = 0x7F0ABDB4u;
    ctx->downcount -= 3;
    // 7F0ABDB4: lis     r3, 32583
    ctx->gpr[3] = ((u32)(s32)(32583) << 16);

label_7F0ABDB8:
    ctx->pc = 0x7F0ABDB8u;
    // 7F0ABDB8: addi    r3, r3, 32732
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32732);

label_7F0ABDBC:
    ctx->pc = 0x7F0ABDBCu;
    // 7F0ABDBC: addi    r3, r3, 32
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32);

label_7F0ABDC0:
    ctx->pc = 0x7F0ABDC0u;
    ctx->downcount -= 3;
    // 7F0ABDC0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ABDC4:
    ctx->pc = 0x7F0ABDC4u;
    // 7F0ABDC4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F0ABDC8:
    ctx->pc = 0x7F0ABDC8u;
    // 7F0ABDC8: bl      0x7F3B35F8
    {
            ctx->lr = 0x7F0ABDCCu;
            ctx->pc = 0x7F3B35F8u;
            return;
    }

label_7F0ABDCC:
    ctx->pc = 0x7F0ABDCCu;
    ctx->downcount -= 7;
    // 7F0ABDCC: lwz     r3, 212(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABDD0:
    ctx->pc = 0x7F0ABDD0u;
    // 7F0ABDD0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ABDD4:
    ctx->pc = 0x7F0ABDD4u;
    // 7F0ABDD4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0ABDD8:
    ctx->pc = 0x7F0ABDD8u;
    // 7F0ABDD8: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0ABDDC:
    ctx->pc = 0x7F0ABDDCu;
    // 7F0ABDDC: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F0ABDE0:
    ctx->pc = 0x7F0ABDE0u;
    // 7F0ABDE0: li      r8, 32
    ctx->gpr[8] = (u32)(s32)(32);

label_7F0ABDE4:
    ctx->pc = 0x7F0ABDE4u;
    // 7F0ABDE4: bl      0x7F10B744
    {
            ctx->lr = 0x7F0ABDE8u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F0ABDE8:
    ctx->pc = 0x7F0ABDE8u;
    ctx->downcount -= 2;
    // 7F0ABDE8: cmpwi   r3, 0
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

label_7F0ABDEC:
    ctx->pc = 0x7F0ABDECu;
    // 7F0ABDEC: bc    12, 2, 0x7F0ABE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABE48;
        }
    }

label_7F0ABDF0:
    ctx->pc = 0x7F0ABDF0u;
    ctx->downcount -= 2;
    // 7F0ABDF0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0ABDF4:
    ctx->pc = 0x7F0ABDF4u;
    // 7F0ABDF4: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F0ABDF8u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F0ABDF8:
    ctx->pc = 0x7F0ABDF8u;
    ctx->downcount -= 2;
    // 7F0ABDF8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0ABDFC:
    ctx->pc = 0x7F0ABDFCu;
    // 7F0ABDFC: bl      0x7F3CC594
    {
            ctx->lr = 0x7F0ABE00u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F0ABE00:
    ctx->pc = 0x7F0ABE00u;
    ctx->downcount -= 8;
    // 7F0ABE00: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0ABE04:
    ctx->pc = 0x7F0ABE04u;
    // 7F0ABE04: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F0ABE08:
    ctx->pc = 0x7F0ABE08u;
    // 7F0ABE08: lfs     f2, -5288(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABE08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ABE0C:
    ctx->pc = 0x7F0ABE0Cu;
    // 7F0ABE0C: lfs     f0, -5284(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABE0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5284);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0ABE10:
    ctx->pc = 0x7F0ABE10u;
    // 7F0ABE10: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F0ABE10u)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_7F0ABE14:
    ctx->pc = 0x7F0ABE14u;
    // 7F0ABE14: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ABE14u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F0ABE18:
    ctx->pc = 0x7F0ABE18u;
    // 7F0ABE18: cror    2, 0, 2
    {
        u32 a = (ctx->cr >> (31u - 0u)) & 1u;
        u32 b = (ctx->cr >> (31u - 2u)) & 1u;
        u32 mask = 0x80000000u >> 2;
        u32 value = (a | b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F0ABE1C:
    ctx->pc = 0x7F0ABE1Cu;
    // 7F0ABE1C: bc    4, 2, 0x7F0ABE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABE24;
        }
    }

label_7F0ABE20:
    ctx->pc = 0x7F0ABE20u;
    ctx->downcount -= 1;
    // 7F0ABE20: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ABE20u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_7F0ABE24:
    ctx->pc = 0x7F0ABE24u;
    ctx->downcount -= 5;
    // 7F0ABE24: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0ABE28:
    ctx->pc = 0x7F0ABE28u;
    // 7F0ABE28: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0ABE2C:
    ctx->pc = 0x7F0ABE2Cu;
    // 7F0ABE2C: lfs     f1, -5292(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABE2Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5292);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ABE30:
    ctx->pc = 0x7F0ABE30u;
    // 7F0ABE30: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ABE34:
    ctx->pc = 0x7F0ABE34u;
    // 7F0ABE34: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F0ABE38u;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F0ABE38:
    ctx->pc = 0x7F0ABE38u;
    ctx->downcount -= 4;
    // 7F0ABE38: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ABE3C:
    ctx->pc = 0x7F0ABE3Cu;
    // 7F0ABE3C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0ABE40:
    ctx->pc = 0x7F0ABE40u;
    // 7F0ABE40: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0ABE44:
    ctx->pc = 0x7F0ABE44u;
    // 7F0ABE44: bl      0x800261B4
    {
            ctx->lr = 0x7F0ABE48u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F0ABE48:
    ctx->pc = 0x7F0ABE48u;
    ctx->downcount -= 16;
    // 7F0ABE48: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0ABE4C:
    ctx->pc = 0x7F0ABE4Cu;
    // 7F0ABE4C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABE50:
    ctx->pc = 0x7F0ABE50u;
    // 7F0ABE50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ABE54:
    ctx->pc = 0x7F0ABE54u;
    // 7F0ABE54: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F0ABE58:
    ctx->pc = 0x7F0ABE58u;
    // 7F0ABE58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0ABE5C:
    ctx->pc = 0x7F0ABE5Cu;
    ctx->downcount -= 8;
    // 7F0ABE5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ABE60:
    ctx->pc = 0x7F0ABE60u;
    // 7F0ABE60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ABE64:
    ctx->pc = 0x7F0ABE64u;
    // 7F0ABE64: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F0ABE68:
    ctx->pc = 0x7F0ABE68u;
    // 7F0ABE68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABE6C:
    ctx->pc = 0x7F0ABE6Cu;
    // 7F0ABE6C: lfs     f1, -5280(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABE6Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5280);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ABE70:
    ctx->pc = 0x7F0ABE70u;
    // 7F0ABE70: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F0ABE74:
    ctx->pc = 0x7F0ABE74u;
    // 7F0ABE74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ABE78:
    ctx->pc = 0x7F0ABE78u;
    // 7F0ABE78: bl      0x7F12A86C
    {
            ctx->lr = 0x7F0ABE7Cu;
            ctx->pc = 0x7F12A86Cu;
            return;
    }

label_7F0ABE7C:
    ctx->pc = 0x7F0ABE7Cu;
    ctx->downcount -= 7;
    // 7F0ABE7C: sth     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F0ABE80:
    ctx->pc = 0x7F0ABE80u;
    // 7F0ABE80: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABE84:
    ctx->pc = 0x7F0ABE84u;
    // 7F0ABE84: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F0ABE88:
    ctx->pc = 0x7F0ABE88u;
    // 7F0ABE88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ABE8C:
    ctx->pc = 0x7F0ABE8Cu;
    // 7F0ABE8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0ABE90:
    ctx->pc = 0x7F0ABE90u;
    // 7F0ABE90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0ABE94:
    ctx->pc = 0x7F0ABE94u;
    ctx->downcount -= 22;
    // 7F0ABE94: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ABE98:
    ctx->pc = 0x7F0ABE98u;
    // 7F0ABE98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ABE9C:
    ctx->pc = 0x7F0ABE9Cu;
    // 7F0ABE9C: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABEA0:
    ctx->pc = 0x7F0ABEA0u;
    // 7F0ABEA0: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0ABEA4:
    ctx->pc = 0x7F0ABEA4u;
    // 7F0ABEA4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0ABEA8:
    ctx->pc = 0x7F0ABEA8u;
    // 7F0ABEA8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0ABEAC:
    ctx->pc = 0x7F0ABEACu;
    // 7F0ABEAC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0ABEB0:
    ctx->pc = 0x7F0ABEB0u;
    // 7F0ABEB0: addi    r31, r29, 48
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(48);

label_7F0ABEB4:
    ctx->pc = 0x7F0ABEB4u;
    // 7F0ABEB4: lwz     r0, 484(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABEB8:
    ctx->pc = 0x7F0ABEB8u;
    // 7F0ABEB8: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F0ABEBC:
    ctx->pc = 0x7F0ABEBCu;
    // 7F0ABEBC: stw     r0, 484(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABEC0:
    ctx->pc = 0x7F0ABEC0u;
    // 7F0ABEC0: bl      0x7F0ABD14
    {
            ctx->lr = 0x7F0ABEC4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0ABD14u;
                return;
            }
            goto label_7F0ABD14;
    }

label_7F0ABEC4:
    ctx->pc = 0x7F0ABEC4u;
    ctx->downcount -= 4;
    // 7F0ABEC4: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABEC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ABEC8:
    ctx->pc = 0x7F0ABEC8u;
    // 7F0ABEC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ABECC:
    ctx->pc = 0x7F0ABECCu;
    // 7F0ABECC: lfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABECCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ABED0:
    ctx->pc = 0x7F0ABED0u;
    // 7F0ABED0: bl      0x7F3C9C80
    {
            ctx->lr = 0x7F0ABED4u;
            ctx->pc = 0x7F3C9C80u;
            return;
    }

label_7F0ABED4:
    ctx->pc = 0x7F0ABED4u;
    ctx->downcount -= 5;
    // 7F0ABED4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABED4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0ABED8:
    ctx->pc = 0x7F0ABED8u;
    // 7F0ABED8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ABEDC:
    ctx->pc = 0x7F0ABEDCu;
    // 7F0ABEDC: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABEDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ABEE0:
    ctx->pc = 0x7F0ABEE0u;
    // 7F0ABEE0: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABEE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ABEE4:
    ctx->pc = 0x7F0ABEE4u;
    // 7F0ABEE4: bl      0x7F3C9C80
    {
            ctx->lr = 0x7F0ABEE8u;
            ctx->pc = 0x7F3C9C80u;
            return;
    }

label_7F0ABEE8:
    ctx->pc = 0x7F0ABEE8u;
    ctx->downcount -= 15;
    // 7F0ABEE8: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABEE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0ABEEC:
    ctx->pc = 0x7F0ABEECu;
    // 7F0ABEEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ABEF0:
    ctx->pc = 0x7F0ABEF0u;
    // 7F0ABEF0: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABEF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ABEF4:
    ctx->pc = 0x7F0ABEF4u;
    // 7F0ABEF4: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABEF4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0ABEF8:
    ctx->pc = 0x7F0ABEF8u;
    // 7F0ABEF8: lfs     f2, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABEF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ABEFC:
    ctx->pc = 0x7F0ABEFCu;
    // 7F0ABEFC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ABEFCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0ABF00:
    ctx->pc = 0x7F0ABF00u;
    // 7F0ABF00: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF00u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0ABF04:
    ctx->pc = 0x7F0ABF04u;
    // 7F0ABF04: stfs     f0, 16(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0ABF08:
    ctx->pc = 0x7F0ABF08u;
    // 7F0ABF08: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ABF0C:
    ctx->pc = 0x7F0ABF0Cu;
    // 7F0ABF0C: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF0Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0ABF10:
    ctx->pc = 0x7F0ABF10u;
    // 7F0ABF10: lfs     f2, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ABF14:
    ctx->pc = 0x7F0ABF14u;
    // 7F0ABF14: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF14u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F0ABF18:
    ctx->pc = 0x7F0ABF18u;
    // 7F0ABF18: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF18u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F0ABF1C:
    ctx->pc = 0x7F0ABF1Cu;
    // 7F0ABF1C: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF1Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0ABF20:
    ctx->pc = 0x7F0ABF20u;
    // 7F0ABF20: bl      0x7F0ABE5C
    {
            ctx->lr = 0x7F0ABF24u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0ABE5Cu;
                return;
            }
            goto label_7F0ABE5C;
    }

label_7F0ABF24:
    ctx->pc = 0x7F0ABF24u;
    ctx->downcount -= 3;
    // 7F0ABF24: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F0ABF28:
    ctx->pc = 0x7F0ABF28u;
    // 7F0ABF28: rlwinm. r0, r0, 0, 30, 30
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

label_7F0ABF2C:
    ctx->pc = 0x7F0ABF2Cu;
    // 7F0ABF2C: bc    12, 2, 0x7F0ABF80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABF80;
        }
    }

label_7F0ABF30:
    ctx->pc = 0x7F0ABF30u;
    ctx->downcount -= 4;
    // 7F0ABF30: lfs     f1, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0ABF34:
    ctx->pc = 0x7F0ABF34u;
    // 7F0ABF34: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F0ABF38:
    ctx->pc = 0x7F0ABF38u;
    // 7F0ABF38: lfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0ABF3C:
    ctx->pc = 0x7F0ABF3Cu;
    // 7F0ABF3C: bl      0x7F3C9C80
    {
            ctx->lr = 0x7F0ABF40u;
            ctx->pc = 0x7F3C9C80u;
            return;
    }

label_7F0ABF40:
    ctx->pc = 0x7F0ABF40u;
    ctx->downcount -= 8;
    // 7F0ABF40: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0ABF44:
    ctx->pc = 0x7F0ABF44u;
    // 7F0ABF44: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F0ABF48:
    ctx->pc = 0x7F0ABF48u;
    // 7F0ABF48: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F0ABF4C:
    ctx->pc = 0x7F0ABF4Cu;
    // 7F0ABF4C: li      r6, 15
    ctx->gpr[6] = (u32)(s32)(15);

label_7F0ABF50:
    ctx->pc = 0x7F0ABF50u;
    // 7F0ABF50: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0ABF54:
    ctx->pc = 0x7F0ABF54u;
    // 7F0ABF54: li      r7, 32
    ctx->gpr[7] = (u32)(s32)(32);

label_7F0ABF58:
    ctx->pc = 0x7F0ABF58u;
    // 7F0ABF58: li      r8, 32
    ctx->gpr[8] = (u32)(s32)(32);

label_7F0ABF5C:
    ctx->pc = 0x7F0ABF5Cu;
    // 7F0ABF5C: bl      0x7F10B744
    {
            ctx->lr = 0x7F0ABF60u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F0ABF60:
    ctx->pc = 0x7F0ABF60u;
    ctx->downcount -= 2;
    // 7F0ABF60: cmpwi   r3, 0
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

label_7F0ABF64:
    ctx->pc = 0x7F0ABF64u;
    // 7F0ABF64: bc    12, 2, 0x7F0ABF78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABF78;
        }
    }

label_7F0ABF68:
    ctx->pc = 0x7F0ABF68u;
    ctx->downcount -= 2;
    // 7F0ABF68: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0ABF6C:
    ctx->pc = 0x7F0ABF6Cu;
    // 7F0ABF6C: bl      0x7F0ABF98
    {
            ctx->lr = 0x7F0ABF70u;
            goto label_7F0ABF98;
    }

label_7F0ABF70:
    ctx->pc = 0x7F0ABF70u;
    ctx->downcount -= 2;
    // 7F0ABF70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F0ABF74:
    ctx->pc = 0x7F0ABF74u;
    // 7F0ABF74: b       0x7F0ABF84
    {
            goto label_7F0ABF84;
    }

label_7F0ABF78:
    ctx->pc = 0x7F0ABF78u;
    ctx->downcount -= 2;
    // 7F0ABF78: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F0ABF7C:
    ctx->pc = 0x7F0ABF7Cu;
    // 7F0ABF7C: stfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0ABF7Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F0ABF80:
    ctx->pc = 0x7F0ABF80u;
    ctx->downcount -= 1;
    // 7F0ABF80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F0ABF84:
    ctx->pc = 0x7F0ABF84u;
    ctx->downcount -= 16;
    // 7F0ABF84: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F0ABF88:
    ctx->pc = 0x7F0ABF88u;
    // 7F0ABF88: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABF8C:
    ctx->pc = 0x7F0ABF8Cu;
    // 7F0ABF8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0ABF90:
    ctx->pc = 0x7F0ABF90u;
    // 7F0ABF90: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F0ABF94:
    ctx->pc = 0x7F0ABF94u;
    // 7F0ABF94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0ABF98:
    ctx->pc = 0x7F0ABF98u;
    ctx->downcount -= 16;
    // 7F0ABF98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0ABF9C:
    ctx->pc = 0x7F0ABF9Cu;
    // 7F0ABF9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0ABFA0:
    ctx->pc = 0x7F0ABFA0u;
    // 7F0ABFA0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F0ABFA4:
    ctx->pc = 0x7F0ABFA4u;
    // 7F0ABFA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABFA8:
    ctx->pc = 0x7F0ABFA8u;
    // 7F0ABFA8: addi    r5, r4, 12832
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F0ABFAC:
    ctx->pc = 0x7F0ABFACu;
    // 7F0ABFAC: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ABFB0:
    ctx->pc = 0x7F0ABFB0u;
    // 7F0ABFB0: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABFB4:
    ctx->pc = 0x7F0ABFB4u;
    // 7F0ABFB4: stw     r4, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ABFB8:
    ctx->pc = 0x7F0ABFB8u;
    // 7F0ABFB8: stw     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABFBC:
    ctx->pc = 0x7F0ABFBCu;
    // 7F0ABFBC: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ABFC0:
    ctx->pc = 0x7F0ABFC0u;
    // 7F0ABFC0: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABFC4:
    ctx->pc = 0x7F0ABFC4u;
    // 7F0ABFC4: stw     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ABFC8:
    ctx->pc = 0x7F0ABFC8u;
    // 7F0ABFC8: stw     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABFCC:
    ctx->pc = 0x7F0ABFCCu;
    // 7F0ABFCC: lwz     r5, 3688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3688);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F0ABFD0:
    ctx->pc = 0x7F0ABFD0u;
    // 7F0ABFD0: cmplwi  r5, 0x0000
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

label_7F0ABFD4:
    ctx->pc = 0x7F0ABFD4u;
    // 7F0ABFD4: bc    12, 2, 0x7F0ABFF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0ABFF8;
        }
    }

label_7F0ABFD8:
    ctx->pc = 0x7F0ABFD8u;
    ctx->downcount -= 8;
    // 7F0ABFD8: lwz     r4, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0ABFDC:
    ctx->pc = 0x7F0ABFDCu;
    // 7F0ABFDC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F0ABFE0:
    ctx->pc = 0x7F0ABFE0u;
    // 7F0ABFE0: ori     r4, r4, 0x0001
    ctx->gpr[4] = ctx->gpr[4] | 0x0001u;

label_7F0ABFE4:
    ctx->pc = 0x7F0ABFE4u;
    // 7F0ABFE4: stw     r4, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F0ABFE8:
    ctx->pc = 0x7F0ABFE8u;
    // 7F0ABFE8: stw     r0, 3688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABFEC:
    ctx->pc = 0x7F0ABFECu;
    // 7F0ABFEC: lwz     r0, 3692(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3692);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0ABFF0:
    ctx->pc = 0x7F0ABFF0u;
    // 7F0ABFF0: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F0ABFF4:
    ctx->pc = 0x7F0ABFF4u;
    // 7F0ABFF4: stw     r0, 3692(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3692);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0ABFF8:
    ctx->pc = 0x7F0ABFF8u;
    ctx->downcount -= 3;
    // 7F0ABFF8: lis     r4, 32523
    ctx->gpr[4] = ((u32)(s32)(32523) << 16);

label_7F0ABFFC:
    ctx->pc = 0x7F0ABFFCu;
    // 7F0ABFFC: addi    r4, r4, -23440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23440);

label_7F0AC000:
    ctx->pc = 0x7F0AC000u;
    // 7F0AC000: bl      0x7F0AB18C
    {
            ctx->lr = 0x7F0AC004u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F0AB18Cu;
                return;
            }
            goto label_7F0AB18C;
    }

label_7F0AC004:
    ctx->pc = 0x7F0AC004u;
    ctx->downcount -= 5;
    // 7F0AC004: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC008:
    ctx->pc = 0x7F0AC008u;
    // 7F0AC008: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F0AC00C:
    ctx->pc = 0x7F0AC00Cu;
    // 7F0AC00C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F0AC010:
    ctx->pc = 0x7F0AC010u;
    // 7F0AC010: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F0A80EC;
        }
    }

label_7F0AC014:
    ctx->pc = 0x7F0AC014u;
    ctx->downcount -= 19;
    // 7F0AC014: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F0AC018:
    ctx->pc = 0x7F0AC018u;
    // 7F0AC018: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F0AC01C:
    ctx->pc = 0x7F0AC01Cu;
    // 7F0AC01C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F0AC020:
    ctx->pc = 0x7F0AC020u;
    // 7F0AC020: stmw     r27, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F0AC024:
    ctx->pc = 0x7F0AC024u;
    // 7F0AC024: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F0AC028:
    ctx->pc = 0x7F0AC028u;
    // 7F0AC028: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F0AC02C:
    ctx->pc = 0x7F0AC02Cu;
    // 7F0AC02C: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F0AC030:
    ctx->pc = 0x7F0AC030u;
    // 7F0AC030: addi    r31, r28, 48
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(48);

label_7F0AC034:
    ctx->pc = 0x7F0AC034u;
    // 7F0AC034: bl      0x7F0AC340
    {
            ctx->lr = 0x7F0AC038u;
            ctx->pc = 0x7F0AC340u;
            return;
    }

label_7F0AC038:
    ctx->pc = 0x7F0AC038u;
    ctx->downcount -= 4;
    // 7F0AC038: lwz     r4, 3788(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3788);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F0AC03C:
    ctx->pc = 0x7F0AC03Cu;
    // 7F0AC03C: addi    r0, r4, -28
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-28);

label_7F0AC040:
    ctx->pc = 0x7F0AC040u;
    // 7F0AC040: cmplwi  r0, 0x0006
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

label_7F0AC044:
    ctx->pc = 0x7F0AC044u;
    // 7F0AC044: bc    12, 1, 0x7F0AC070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC070;
        }
    }

label_7F0AC048:
    ctx->pc = 0x7F0AC048u;
    ctx->downcount -= 7;
    // 7F0AC048: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F0AC04C:
    ctx->pc = 0x7F0AC04Cu;
    // 7F0AC04C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F0AC050:
    ctx->pc = 0x7F0AC050u;
    // 7F0AC050: addi    r3, r3, -32740
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32740);

label_7F0AC054:
    ctx->pc = 0x7F0AC054u;
    // 7F0AC054: lwzx    r0, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F0AC058:
    ctx->pc = 0x7F0AC058u;
    // 7F0AC058: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F0AC05C:
    ctx->pc = 0x7F0AC05Cu;
    // 7F0AC05C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_7F0AC060:
    ctx->pc = 0x7F0AC060u;
    ctx->downcount -= 2;
    // 7F0AC060: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F0AC064:
    ctx->pc = 0x7F0AC064u;
    // 7F0AC064: b       0x7F0AC074
    {
            goto label_7F0AC074;
    }

label_7F0AC068:
    ctx->pc = 0x7F0AC068u;
    ctx->downcount -= 2;
    // 7F0AC068: li      r30, 2
    ctx->gpr[30] = (u32)(s32)(2);

label_7F0AC06C:
    ctx->pc = 0x7F0AC06Cu;
    // 7F0AC06C: b       0x7F0AC074
    {
            goto label_7F0AC074;
    }

label_7F0AC070:
    ctx->pc = 0x7F0AC070u;
    ctx->downcount -= 1;
    // 7F0AC070: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_7F0AC074:
    ctx->pc = 0x7F0AC074u;
    ctx->downcount -= 2;
    // 7F0AC074: cmpwi   r4, 34
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(34);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F0AC078:
    ctx->pc = 0x7F0AC078u;
    // 7F0AC078: bc    12, 2, 0x7F0AC08C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC08C;
        }
    }

label_7F0AC07C:
    ctx->pc = 0x7F0AC07Cu;
    ctx->downcount -= 1;
    // 7F0AC07C: bc    4, 0, 0x7F0AC0BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC0BC;
        }
    }

label_7F0AC080:
    ctx->pc = 0x7F0AC080u;
    ctx->downcount -= 2;
    // 7F0AC080: cmpwi   r4, 32
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

label_7F0AC084:
    ctx->pc = 0x7F0AC084u;
    // 7F0AC084: bc    4, 0, 0x7F0AC0A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC0A8;
        }
    }

label_7F0AC088:
    ctx->pc = 0x7F0AC088u;
    ctx->downcount -= 1;
    // 7F0AC088: b       0x7F0AC0BC
    {
            goto label_7F0AC0BC;
    }

label_7F0AC08C:
    ctx->pc = 0x7F0AC08Cu;
    ctx->downcount -= 7;
    // 7F0AC08C: lwz     r3, 3688(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3688);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC090:
    ctx->pc = 0x7F0AC090u;
    // 7F0AC090: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC094:
    ctx->pc = 0x7F0AC094u;
    // 7F0AC094: lha     r3, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AC098:
    ctx->pc = 0x7F0AC098u;
    // 7F0AC098: addi    r0, r3, 2048
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(2048);

label_7F0AC09C:
    ctx->pc = 0x7F0AC09Cu;
    // 7F0AC09C: sth     r0, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AC0A0:
    ctx->pc = 0x7F0AC0A0u;
    // 7F0AC0A0: sth     r0, 42(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AC0A4:
    ctx->pc = 0x7F0AC0A4u;
    // 7F0AC0A4: b       0x7F0AC0BC
    {
            goto label_7F0AC0BC;
    }

label_7F0AC0A8:
    ctx->pc = 0x7F0AC0A8u;
    ctx->downcount -= 5;
    // 7F0AC0A8: lwz     r3, 3688(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3688);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC0AC:
    ctx->pc = 0x7F0AC0ACu;
    // 7F0AC0AC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F0AC0B0:
    ctx->pc = 0x7F0AC0B0u;
    // 7F0AC0B0: lha     r0, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F0AC0B4:
    ctx->pc = 0x7F0AC0B4u;
    // 7F0AC0B4: sth     r0, 34(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AC0B8:
    ctx->pc = 0x7F0AC0B8u;
    // 7F0AC0B8: sth     r0, 42(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F0AC0BC:
    ctx->pc = 0x7F0AC0BCu;
    ctx->downcount -= 2;
    // 7F0AC0BC: cmpwi   r29, 0
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

label_7F0AC0C0:
    ctx->pc = 0x7F0AC0C0u;
    // 7F0AC0C0: bc    4, 0, 0x7F0AC0C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F0AC0C8;
        }
    }

label_7F0AC0C4:
    ctx->pc = 0x7F0AC0C4u;
    ctx->downcount -= 1;
    // 7F0AC0C4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F0AC0C8:
    ctx->pc = 0x7F0AC0C8u;
    ctx->downcount -= 4;
    // 7F0AC0C8: lfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC0CC:
    ctx->pc = 0x7F0AC0CCu;
    // 7F0AC0CC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AC0D0:
    ctx->pc = 0x7F0AC0D0u;
    // 7F0AC0D0: lfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC0D4:
    ctx->pc = 0x7F0AC0D4u;
    // 7F0AC0D4: bl      0x7F3C9C80
    {
            ctx->lr = 0x7F0AC0D8u;
            ctx->pc = 0x7F3C9C80u;
            return;
    }

label_7F0AC0D8:
    ctx->pc = 0x7F0AC0D8u;
    ctx->downcount -= 5;
    // 7F0AC0D8: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F0AC0DC:
    ctx->pc = 0x7F0AC0DCu;
    // 7F0AC0DC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F0AC0E0:
    ctx->pc = 0x7F0AC0E0u;
    // 7F0AC0E0: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F0AC0E4:
    ctx->pc = 0x7F0AC0E4u;
    // 7F0AC0E4: lfs     f1, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F0AC0E4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F0AC0E8:
    ctx->pc = 0x7F0AC0E8u;
    // 7F0AC0E8: bl      0x7F3C9C80
    {
            ctx->lr = 0x7F0AC0ECu;
            ctx->pc = 0x7F3C9C80u;
            return;
    }

    ctx->pc = 0x7F0AC0ECu;
    return;
return_dispatch_7F0A80EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F0A8160u: goto label_7F0A8160;
    case 0x7F0A8168u: goto label_7F0A8168;
    case 0x7F0A81A0u: goto label_7F0A81A0;
    case 0x7F0A81B8u: goto label_7F0A81B8;
    case 0x7F0A81C4u: goto label_7F0A81C4;
    case 0x7F0A81D4u: goto label_7F0A81D4;
    case 0x7F0A81E8u: goto label_7F0A81E8;
    case 0x7F0A8208u: goto label_7F0A8208;
    case 0x7F0A821Cu: goto label_7F0A821C;
    case 0x7F0A8228u: goto label_7F0A8228;
    case 0x7F0A8230u: goto label_7F0A8230;
    case 0x7F0A8244u: goto label_7F0A8244;
    case 0x7F0A824Cu: goto label_7F0A824C;
    case 0x7F0A8290u: goto label_7F0A8290;
    case 0x7F0A82ACu: goto label_7F0A82AC;
    case 0x7F0A82BCu: goto label_7F0A82BC;
    case 0x7F0A82CCu: goto label_7F0A82CC;
    case 0x7F0A830Cu: goto label_7F0A830C;
    case 0x7F0A8320u: goto label_7F0A8320;
    case 0x7F0A83C4u: goto label_7F0A83C4;
    case 0x7F0A83E8u: goto label_7F0A83E8;
    case 0x7F0A8404u: goto label_7F0A8404;
    case 0x7F0A841Cu: goto label_7F0A841C;
    case 0x7F0A8428u: goto label_7F0A8428;
    case 0x7F0A84A0u: goto label_7F0A84A0;
    case 0x7F0A84E0u: goto label_7F0A84E0;
    case 0x7F0A8524u: goto label_7F0A8524;
    case 0x7F0A852Cu: goto label_7F0A852C;
    case 0x7F0A8534u: goto label_7F0A8534;
    case 0x7F0A853Cu: goto label_7F0A853C;
    case 0x7F0A8544u: goto label_7F0A8544;
    case 0x7F0A854Cu: goto label_7F0A854C;
    case 0x7F0A8554u: goto label_7F0A8554;
    case 0x7F0A861Cu: goto label_7F0A861C;
    case 0x7F0A864Cu: goto label_7F0A864C;
    case 0x7F0A86ACu: goto label_7F0A86AC;
    case 0x7F0A86D8u: goto label_7F0A86D8;
    case 0x7F0A87E0u: goto label_7F0A87E0;
    case 0x7F0A8838u: goto label_7F0A8838;
    case 0x7F0A884Cu: goto label_7F0A884C;
    case 0x7F0A88E8u: goto label_7F0A88E8;
    case 0x7F0A8928u: goto label_7F0A8928;
    case 0x7F0A8938u: goto label_7F0A8938;
    case 0x7F0A8948u: goto label_7F0A8948;
    case 0x7F0A8958u: goto label_7F0A8958;
    case 0x7F0A8960u: goto label_7F0A8960;
    case 0x7F0A89ECu: goto label_7F0A89EC;
    case 0x7F0A8A04u: goto label_7F0A8A04;
    case 0x7F0A8A50u: goto label_7F0A8A50;
    case 0x7F0A8A60u: goto label_7F0A8A60;
    case 0x7F0A8A68u: goto label_7F0A8A68;
    case 0x7F0A8A80u: goto label_7F0A8A80;
    case 0x7F0A8A88u: goto label_7F0A8A88;
    case 0x7F0A8A98u: goto label_7F0A8A98;
    case 0x7F0A8ABCu: goto label_7F0A8ABC;
    case 0x7F0A8B2Cu: goto label_7F0A8B2C;
    case 0x7F0A8B38u: goto label_7F0A8B38;
    case 0x7F0A8B60u: goto label_7F0A8B60;
    case 0x7F0A8B78u: goto label_7F0A8B78;
    case 0x7F0A8B90u: goto label_7F0A8B90;
    case 0x7F0A8BCCu: goto label_7F0A8BCC;
    case 0x7F0A8C00u: goto label_7F0A8C00;
    case 0x7F0A8D10u: goto label_7F0A8D10;
    case 0x7F0A8D88u: goto label_7F0A8D88;
    case 0x7F0A8D98u: goto label_7F0A8D98;
    case 0x7F0A8DC8u: goto label_7F0A8DC8;
    case 0x7F0A8DD4u: goto label_7F0A8DD4;
    case 0x7F0A8DDCu: goto label_7F0A8DDC;
    case 0x7F0A8E84u: goto label_7F0A8E84;
    case 0x7F0A8E90u: goto label_7F0A8E90;
    case 0x7F0A8EB8u: goto label_7F0A8EB8;
    case 0x7F0A8F74u: goto label_7F0A8F74;
    case 0x7F0A8FA0u: goto label_7F0A8FA0;
    case 0x7F0A8FF4u: goto label_7F0A8FF4;
    case 0x7F0A8FFCu: goto label_7F0A8FFC;
    case 0x7F0A9028u: goto label_7F0A9028;
    case 0x7F0A9030u: goto label_7F0A9030;
    case 0x7F0A9078u: goto label_7F0A9078;
    case 0x7F0A9084u: goto label_7F0A9084;
    case 0x7F0A90DCu: goto label_7F0A90DC;
    case 0x7F0A90E8u: goto label_7F0A90E8;
    case 0x7F0A912Cu: goto label_7F0A912C;
    case 0x7F0A913Cu: goto label_7F0A913C;
    case 0x7F0A9184u: goto label_7F0A9184;
    case 0x7F0A9190u: goto label_7F0A9190;
    case 0x7F0A91D8u: goto label_7F0A91D8;
    case 0x7F0A91E4u: goto label_7F0A91E4;
    case 0x7F0A921Cu: goto label_7F0A921C;
    case 0x7F0A9224u: goto label_7F0A9224;
    case 0x7F0A922Cu: goto label_7F0A922C;
    case 0x7F0A924Cu: goto label_7F0A924C;
    case 0x7F0A9288u: goto label_7F0A9288;
    case 0x7F0A929Cu: goto label_7F0A929C;
    case 0x7F0A92F0u: goto label_7F0A92F0;
    case 0x7F0A9300u: goto label_7F0A9300;
    case 0x7F0A9308u: goto label_7F0A9308;
    case 0x7F0A9310u: goto label_7F0A9310;
    case 0x7F0A9318u: goto label_7F0A9318;
    case 0x7F0A9320u: goto label_7F0A9320;
    case 0x7F0A9328u: goto label_7F0A9328;
    case 0x7F0A9330u: goto label_7F0A9330;
    case 0x7F0A9344u: goto label_7F0A9344;
    case 0x7F0A9428u: goto label_7F0A9428;
    case 0x7F0A9470u: goto label_7F0A9470;
    case 0x7F0A948Cu: goto label_7F0A948C;
    case 0x7F0A94ACu: goto label_7F0A94AC;
    case 0x7F0A9508u: goto label_7F0A9508;
    case 0x7F0A951Cu: goto label_7F0A951C;
    case 0x7F0A9524u: goto label_7F0A9524;
    case 0x7F0A9564u: goto label_7F0A9564;
    case 0x7F0A9598u: goto label_7F0A9598;
    case 0x7F0A95B0u: goto label_7F0A95B0;
    case 0x7F0A95C0u: goto label_7F0A95C0;
    case 0x7F0A95C8u: goto label_7F0A95C8;
    case 0x7F0A95D0u: goto label_7F0A95D0;
    case 0x7F0A95D8u: goto label_7F0A95D8;
    case 0x7F0A95F0u: goto label_7F0A95F0;
    case 0x7F0A9608u: goto label_7F0A9608;
    case 0x7F0A9614u: goto label_7F0A9614;
    case 0x7F0A9620u: goto label_7F0A9620;
    case 0x7F0A9644u: goto label_7F0A9644;
    case 0x7F0A9650u: goto label_7F0A9650;
    case 0x7F0A9664u: goto label_7F0A9664;
    case 0x7F0A9670u: goto label_7F0A9670;
    case 0x7F0A9680u: goto label_7F0A9680;
    case 0x7F0A968Cu: goto label_7F0A968C;
    case 0x7F0A969Cu: goto label_7F0A969C;
    case 0x7F0A96C8u: goto label_7F0A96C8;
    case 0x7F0A96D8u: goto label_7F0A96D8;
    case 0x7F0A96E8u: goto label_7F0A96E8;
    case 0x7F0A9704u: goto label_7F0A9704;
    case 0x7F0A9710u: goto label_7F0A9710;
    case 0x7F0A971Cu: goto label_7F0A971C;
    case 0x7F0A97A4u: goto label_7F0A97A4;
    case 0x7F0A97ACu: goto label_7F0A97AC;
    case 0x7F0A97B8u: goto label_7F0A97B8;
    case 0x7F0A97C8u: goto label_7F0A97C8;
    case 0x7F0A97CCu: goto label_7F0A97CC;
    case 0x7F0A97D4u: goto label_7F0A97D4;
    case 0x7F0A97DCu: goto label_7F0A97DC;
    case 0x7F0A97E0u: goto label_7F0A97E0;
    case 0x7F0A9800u: goto label_7F0A9800;
    case 0x7F0A9820u: goto label_7F0A9820;
    case 0x7F0A982Cu: goto label_7F0A982C;
    case 0x7F0A9848u: goto label_7F0A9848;
    case 0x7F0A9854u: goto label_7F0A9854;
    case 0x7F0A989Cu: goto label_7F0A989C;
    case 0x7F0A98B4u: goto label_7F0A98B4;
    case 0x7F0A98BCu: goto label_7F0A98BC;
    case 0x7F0A98C4u: goto label_7F0A98C4;
    case 0x7F0A98CCu: goto label_7F0A98CC;
    case 0x7F0A9968u: goto label_7F0A9968;
    case 0x7F0A99E4u: goto label_7F0A99E4;
    case 0x7F0A9A00u: goto label_7F0A9A00;
    case 0x7F0A9A38u: goto label_7F0A9A38;
    case 0x7F0A9A48u: goto label_7F0A9A48;
    case 0x7F0A9A80u: goto label_7F0A9A80;
    case 0x7F0A9A88u: goto label_7F0A9A88;
    case 0x7F0A9A90u: goto label_7F0A9A90;
    case 0x7F0A9A98u: goto label_7F0A9A98;
    case 0x7F0A9AD0u: goto label_7F0A9AD0;
    case 0x7F0A9ADCu: goto label_7F0A9ADC;
    case 0x7F0A9AECu: goto label_7F0A9AEC;
    case 0x7F0A9B00u: goto label_7F0A9B00;
    case 0x7F0A9B08u: goto label_7F0A9B08;
    case 0x7F0A9B18u: goto label_7F0A9B18;
    case 0x7F0A9B54u: goto label_7F0A9B54;
    case 0x7F0A9B68u: goto label_7F0A9B68;
    case 0x7F0A9BB8u: goto label_7F0A9BB8;
    case 0x7F0A9BC8u: goto label_7F0A9BC8;
    case 0x7F0A9BE0u: goto label_7F0A9BE0;
    case 0x7F0A9BE8u: goto label_7F0A9BE8;
    case 0x7F0A9BFCu: goto label_7F0A9BFC;
    case 0x7F0A9C0Cu: goto label_7F0A9C0C;
    case 0x7F0A9C30u: goto label_7F0A9C30;
    case 0x7F0A9C6Cu: goto label_7F0A9C6C;
    case 0x7F0A9C74u: goto label_7F0A9C74;
    case 0x7F0A9C98u: goto label_7F0A9C98;
    case 0x7F0A9CA0u: goto label_7F0A9CA0;
    case 0x7F0A9CCCu: goto label_7F0A9CCC;
    case 0x7F0A9CE0u: goto label_7F0A9CE0;
    case 0x7F0A9CFCu: goto label_7F0A9CFC;
    case 0x7F0A9D4Cu: goto label_7F0A9D4C;
    case 0x7F0A9D6Cu: goto label_7F0A9D6C;
    case 0x7F0A9D98u: goto label_7F0A9D98;
    case 0x7F0A9E04u: goto label_7F0A9E04;
    case 0x7F0A9E38u: goto label_7F0A9E38;
    case 0x7F0A9E7Cu: goto label_7F0A9E7C;
    case 0x7F0A9EB0u: goto label_7F0A9EB0;
    case 0x7F0A9ECCu: goto label_7F0A9ECC;
    case 0x7F0A9EE8u: goto label_7F0A9EE8;
    case 0x7F0A9F30u: goto label_7F0A9F30;
    case 0x7F0A9F50u: goto label_7F0A9F50;
    case 0x7F0A9F58u: goto label_7F0A9F58;
    case 0x7F0A9F68u: goto label_7F0A9F68;
    case 0x7F0A9F8Cu: goto label_7F0A9F8C;
    case 0x7F0A9FECu: goto label_7F0A9FEC;
    case 0x7F0AA00Cu: goto label_7F0AA00C;
    case 0x7F0AA02Cu: goto label_7F0AA02C;
    case 0x7F0AA044u: goto label_7F0AA044;
    case 0x7F0AA090u: goto label_7F0AA090;
    case 0x7F0AA0C0u: goto label_7F0AA0C0;
    case 0x7F0AA0E8u: goto label_7F0AA0E8;
    case 0x7F0AA0F0u: goto label_7F0AA0F0;
    case 0x7F0AA10Cu: goto label_7F0AA10C;
    case 0x7F0AA124u: goto label_7F0AA124;
    case 0x7F0AA16Cu: goto label_7F0AA16C;
    case 0x7F0AA184u: goto label_7F0AA184;
    case 0x7F0AA1B0u: goto label_7F0AA1B0;
    case 0x7F0AA1E4u: goto label_7F0AA1E4;
    case 0x7F0AA210u: goto label_7F0AA210;
    case 0x7F0AA218u: goto label_7F0AA218;
    case 0x7F0AA23Cu: goto label_7F0AA23C;
    case 0x7F0AA244u: goto label_7F0AA244;
    case 0x7F0AA29Cu: goto label_7F0AA29C;
    case 0x7F0AA304u: goto label_7F0AA304;
    case 0x7F0AA31Cu: goto label_7F0AA31C;
    case 0x7F0AA338u: goto label_7F0AA338;
    case 0x7F0AA36Cu: goto label_7F0AA36C;
    case 0x7F0AA384u: goto label_7F0AA384;
    case 0x7F0AA38Cu: goto label_7F0AA38C;
    case 0x7F0AA3ACu: goto label_7F0AA3AC;
    case 0x7F0AA3B4u: goto label_7F0AA3B4;
    case 0x7F0AA3F4u: goto label_7F0AA3F4;
    case 0x7F0AA414u: goto label_7F0AA414;
    case 0x7F0AA418u: goto label_7F0AA418;
    case 0x7F0AA430u: goto label_7F0AA430;
    case 0x7F0AA44Cu: goto label_7F0AA44C;
    case 0x7F0AA45Cu: goto label_7F0AA45C;
    case 0x7F0AA48Cu: goto label_7F0AA48C;
    case 0x7F0AA4B4u: goto label_7F0AA4B4;
    case 0x7F0AA52Cu: goto label_7F0AA52C;
    case 0x7F0AA534u: goto label_7F0AA534;
    case 0x7F0AA540u: goto label_7F0AA540;
    case 0x7F0AA550u: goto label_7F0AA550;
    case 0x7F0AA56Cu: goto label_7F0AA56C;
    case 0x7F0AA5A8u: goto label_7F0AA5A8;
    case 0x7F0AA5D8u: goto label_7F0AA5D8;
    case 0x7F0AA600u: goto label_7F0AA600;
    case 0x7F0AA678u: goto label_7F0AA678;
    case 0x7F0AA680u: goto label_7F0AA680;
    case 0x7F0AA68Cu: goto label_7F0AA68C;
    case 0x7F0AA69Cu: goto label_7F0AA69C;
    case 0x7F0AA6B8u: goto label_7F0AA6B8;
    case 0x7F0AA6F4u: goto label_7F0AA6F4;
    case 0x7F0AA744u: goto label_7F0AA744;
    case 0x7F0AA75Cu: goto label_7F0AA75C;
    case 0x7F0AA770u: goto label_7F0AA770;
    case 0x7F0AA788u: goto label_7F0AA788;
    case 0x7F0AA798u: goto label_7F0AA798;
    case 0x7F0AA7CCu: goto label_7F0AA7CC;
    case 0x7F0AA7FCu: goto label_7F0AA7FC;
    case 0x7F0AA808u: goto label_7F0AA808;
    case 0x7F0AA83Cu: goto label_7F0AA83C;
    case 0x7F0AA84Cu: goto label_7F0AA84C;
    case 0x7F0AA884u: goto label_7F0AA884;
    case 0x7F0AA8B4u: goto label_7F0AA8B4;
    case 0x7F0AA8C8u: goto label_7F0AA8C8;
    case 0x7F0AA91Cu: goto label_7F0AA91C;
    case 0x7F0AA94Cu: goto label_7F0AA94C;
    case 0x7F0AA984u: goto label_7F0AA984;
    case 0x7F0AA9C4u: goto label_7F0AA9C4;
    case 0x7F0AAA04u: goto label_7F0AAA04;
    case 0x7F0AAA2Cu: goto label_7F0AAA2C;
    case 0x7F0AAAE0u: goto label_7F0AAAE0;
    case 0x7F0AAAF0u: goto label_7F0AAAF0;
    case 0x7F0AAAF8u: goto label_7F0AAAF8;
    case 0x7F0AAB20u: goto label_7F0AAB20;
    case 0x7F0AAB30u: goto label_7F0AAB30;
    case 0x7F0AAB58u: goto label_7F0AAB58;
    case 0x7F0AAB68u: goto label_7F0AAB68;
    case 0x7F0AAB78u: goto label_7F0AAB78;
    case 0x7F0AAB80u: goto label_7F0AAB80;
    case 0x7F0AABA8u: goto label_7F0AABA8;
    case 0x7F0AABB8u: goto label_7F0AABB8;
    case 0x7F0AABD8u: goto label_7F0AABD8;
    case 0x7F0AAC00u: goto label_7F0AAC00;
    case 0x7F0AAC14u: goto label_7F0AAC14;
    case 0x7F0AAC40u: goto label_7F0AAC40;
    case 0x7F0AAC54u: goto label_7F0AAC54;
    case 0x7F0AACC8u: goto label_7F0AACC8;
    case 0x7F0AACE8u: goto label_7F0AACE8;
    case 0x7F0AAD48u: goto label_7F0AAD48;
    case 0x7F0AAD8Cu: goto label_7F0AAD8C;
    case 0x7F0AADC0u: goto label_7F0AADC0;
    case 0x7F0AADD8u: goto label_7F0AADD8;
    case 0x7F0AADE4u: goto label_7F0AADE4;
    case 0x7F0AAE18u: goto label_7F0AAE18;
    case 0x7F0AAE2Cu: goto label_7F0AAE2C;
    case 0x7F0AAE84u: goto label_7F0AAE84;
    case 0x7F0AAE9Cu: goto label_7F0AAE9C;
    case 0x7F0AAEA8u: goto label_7F0AAEA8;
    case 0x7F0AAEF8u: goto label_7F0AAEF8;
    case 0x7F0AAF0Cu: goto label_7F0AAF0C;
    case 0x7F0AAF3Cu: goto label_7F0AAF3C;
    case 0x7F0AAF58u: goto label_7F0AAF58;
    case 0x7F0AAFBCu: goto label_7F0AAFBC;
    case 0x7F0AB004u: goto label_7F0AB004;
    case 0x7F0AB020u: goto label_7F0AB020;
    case 0x7F0AB058u: goto label_7F0AB058;
    case 0x7F0AB064u: goto label_7F0AB064;
    case 0x7F0AB06Cu: goto label_7F0AB06C;
    case 0x7F0AB07Cu: goto label_7F0AB07C;
    case 0x7F0AB08Cu: goto label_7F0AB08C;
    case 0x7F0AB098u: goto label_7F0AB098;
    case 0x7F0AB0A4u: goto label_7F0AB0A4;
    case 0x7F0AB0ACu: goto label_7F0AB0AC;
    case 0x7F0AB0D0u: goto label_7F0AB0D0;
    case 0x7F0AB0E4u: goto label_7F0AB0E4;
    case 0x7F0AB124u: goto label_7F0AB124;
    case 0x7F0AB164u: goto label_7F0AB164;
    case 0x7F0AB1E4u: goto label_7F0AB1E4;
    case 0x7F0AB268u: goto label_7F0AB268;
    case 0x7F0AB270u: goto label_7F0AB270;
    case 0x7F0AB290u: goto label_7F0AB290;
    case 0x7F0AB298u: goto label_7F0AB298;
    case 0x7F0AB2A4u: goto label_7F0AB2A4;
    case 0x7F0AB2B0u: goto label_7F0AB2B0;
    case 0x7F0AB2BCu: goto label_7F0AB2BC;
    case 0x7F0AB2C8u: goto label_7F0AB2C8;
    case 0x7F0AB3D8u: goto label_7F0AB3D8;
    case 0x7F0AB400u: goto label_7F0AB400;
    case 0x7F0AB41Cu: goto label_7F0AB41C;
    case 0x7F0AB454u: goto label_7F0AB454;
    case 0x7F0AB45Cu: goto label_7F0AB45C;
    case 0x7F0AB48Cu: goto label_7F0AB48C;
    case 0x7F0AB4CCu: goto label_7F0AB4CC;
    case 0x7F0AB514u: goto label_7F0AB514;
    case 0x7F0AB538u: goto label_7F0AB538;
    case 0x7F0AB570u: goto label_7F0AB570;
    case 0x7F0AB57Cu: goto label_7F0AB57C;
    case 0x7F0AB588u: goto label_7F0AB588;
    case 0x7F0AB5A0u: goto label_7F0AB5A0;
    case 0x7F0AB5B0u: goto label_7F0AB5B0;
    case 0x7F0AB5CCu: goto label_7F0AB5CC;
    case 0x7F0AB5D4u: goto label_7F0AB5D4;
    case 0x7F0AB638u: goto label_7F0AB638;
    case 0x7F0AB64Cu: goto label_7F0AB64C;
    case 0x7F0AB668u: goto label_7F0AB668;
    case 0x7F0AB680u: goto label_7F0AB680;
    case 0x7F0AB690u: goto label_7F0AB690;
    case 0x7F0AB6C8u: goto label_7F0AB6C8;
    case 0x7F0AB6F8u: goto label_7F0AB6F8;
    case 0x7F0AB704u: goto label_7F0AB704;
    case 0x7F0AB710u: goto label_7F0AB710;
    case 0x7F0AB728u: goto label_7F0AB728;
    case 0x7F0AB738u: goto label_7F0AB738;
    case 0x7F0AB774u: goto label_7F0AB774;
    case 0x7F0AB780u: goto label_7F0AB780;
    case 0x7F0AB7B4u: goto label_7F0AB7B4;
    case 0x7F0AB7E8u: goto label_7F0AB7E8;
    case 0x7F0AB7F4u: goto label_7F0AB7F4;
    case 0x7F0AB800u: goto label_7F0AB800;
    case 0x7F0AB828u: goto label_7F0AB828;
    case 0x7F0AB8BCu: goto label_7F0AB8BC;
    case 0x7F0AB8D4u: goto label_7F0AB8D4;
    case 0x7F0AB8F8u: goto label_7F0AB8F8;
    case 0x7F0AB944u: goto label_7F0AB944;
    case 0x7F0AB990u: goto label_7F0AB990;
    case 0x7F0AB9E4u: goto label_7F0AB9E4;
    case 0x7F0ABA38u: goto label_7F0ABA38;
    case 0x7F0ABB00u: goto label_7F0ABB00;
    case 0x7F0ABB14u: goto label_7F0ABB14;
    case 0x7F0ABB38u: goto label_7F0ABB38;
    case 0x7F0ABB6Cu: goto label_7F0ABB6C;
    case 0x7F0ABB80u: goto label_7F0ABB80;
    case 0x7F0ABB94u: goto label_7F0ABB94;
    case 0x7F0ABBACu: goto label_7F0ABBAC;
    case 0x7F0ABC24u: goto label_7F0ABC24;
    case 0x7F0ABC3Cu: goto label_7F0ABC3C;
    case 0x7F0ABC48u: goto label_7F0ABC48;
    case 0x7F0ABC74u: goto label_7F0ABC74;
    case 0x7F0ABCBCu: goto label_7F0ABCBC;
    case 0x7F0ABCC4u: goto label_7F0ABCC4;
    case 0x7F0ABCFCu: goto label_7F0ABCFC;
    case 0x7F0ABD60u: goto label_7F0ABD60;
    case 0x7F0ABDCCu: goto label_7F0ABDCC;
    case 0x7F0ABDE8u: goto label_7F0ABDE8;
    case 0x7F0ABDF8u: goto label_7F0ABDF8;
    case 0x7F0ABE00u: goto label_7F0ABE00;
    case 0x7F0ABE38u: goto label_7F0ABE38;
    case 0x7F0ABE48u: goto label_7F0ABE48;
    case 0x7F0ABE7Cu: goto label_7F0ABE7C;
    case 0x7F0ABEC4u: goto label_7F0ABEC4;
    case 0x7F0ABED4u: goto label_7F0ABED4;
    case 0x7F0ABEE8u: goto label_7F0ABEE8;
    case 0x7F0ABF24u: goto label_7F0ABF24;
    case 0x7F0ABF40u: goto label_7F0ABF40;
    case 0x7F0ABF60u: goto label_7F0ABF60;
    case 0x7F0ABF70u: goto label_7F0ABF70;
    case 0x7F0AC004u: goto label_7F0AC004;
    case 0x7F0AC038u: goto label_7F0AC038;
    case 0x7F0AC0D8u: goto label_7F0AC0D8;
    default: return;
    }
}

