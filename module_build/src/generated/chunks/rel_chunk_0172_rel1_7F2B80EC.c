// DolRecomp output
#include "../generated.h"

static void loop_7F2BBCA4(CPUState* ctx) {
label_7F2BBCA4:
    ctx->downcount -= 4;
    ctx->pc = 0x7F2BBCA4u;
    // 7F2BBCA4: lwz     r0, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2BBCA8: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

    ctx->pc = 0x7F2BBCACu;
    // 7F2BBCAC: stw     r0, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2BBCB0: addi    r6, r6, 324
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(324);

    // 7F2BBCB4: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    // 7F2BBCB8: bc    4, 0, 0x7F2BBCA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BBCA4u;
                return;
            }
            goto label_7F2BBCA4;
        }
    }

    ctx->pc = 0x7F2BBCBCu;
}

static void loop_7F2BBCC4(CPUState* ctx) {
label_7F2BBCC4:
    ctx->downcount -= 4;
    ctx->pc = 0x7F2BBCC4u;
    // 7F2BBCC4: lwz     r0, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 7F2BBCC8: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

    ctx->pc = 0x7F2BBCCCu;
    // 7F2BBCCC: stw     r0, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 7F2BBCD0: addi    r6, r6, 324
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(324);

    // 7F2BBCD4: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    // 7F2BBCD8: bc    4, 0, 0x7F2BBCC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BBCC4u;
                return;
            }
            goto label_7F2BBCC4;
        }
    }

    ctx->pc = 0x7F2BBCDCu;
}

void func_7F2B80EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F2B80ECu: goto label_7F2B80EC;
    case 0x7F2B80F0u: goto label_7F2B80F0;
    case 0x7F2B80F4u: goto label_7F2B80F4;
    case 0x7F2B80F8u: goto label_7F2B80F8;
    case 0x7F2B80FCu: goto label_7F2B80FC;
    case 0x7F2B8100u: goto label_7F2B8100;
    case 0x7F2B8104u: goto label_7F2B8104;
    case 0x7F2B8108u: goto label_7F2B8108;
    case 0x7F2B810Cu: goto label_7F2B810C;
    case 0x7F2B8110u: goto label_7F2B8110;
    case 0x7F2B8114u: goto label_7F2B8114;
    case 0x7F2B8118u: goto label_7F2B8118;
    case 0x7F2B811Cu: goto label_7F2B811C;
    case 0x7F2B8120u: goto label_7F2B8120;
    case 0x7F2B8124u: goto label_7F2B8124;
    case 0x7F2B8128u: goto label_7F2B8128;
    case 0x7F2B812Cu: goto label_7F2B812C;
    case 0x7F2B8130u: goto label_7F2B8130;
    case 0x7F2B8134u: goto label_7F2B8134;
    case 0x7F2B8138u: goto label_7F2B8138;
    case 0x7F2B813Cu: goto label_7F2B813C;
    case 0x7F2B8140u: goto label_7F2B8140;
    case 0x7F2B8144u: goto label_7F2B8144;
    case 0x7F2B8148u: goto label_7F2B8148;
    case 0x7F2B814Cu: goto label_7F2B814C;
    case 0x7F2B8150u: goto label_7F2B8150;
    case 0x7F2B8154u: goto label_7F2B8154;
    case 0x7F2B8158u: goto label_7F2B8158;
    case 0x7F2B815Cu: goto label_7F2B815C;
    case 0x7F2B8160u: goto label_7F2B8160;
    case 0x7F2B8164u: goto label_7F2B8164;
    case 0x7F2B8168u: goto label_7F2B8168;
    case 0x7F2B816Cu: goto label_7F2B816C;
    case 0x7F2B8170u: goto label_7F2B8170;
    case 0x7F2B8174u: goto label_7F2B8174;
    case 0x7F2B8178u: goto label_7F2B8178;
    case 0x7F2B817Cu: goto label_7F2B817C;
    case 0x7F2B8180u: goto label_7F2B8180;
    case 0x7F2B8184u: goto label_7F2B8184;
    case 0x7F2B8188u: goto label_7F2B8188;
    case 0x7F2B818Cu: goto label_7F2B818C;
    case 0x7F2B8190u: goto label_7F2B8190;
    case 0x7F2B8194u: goto label_7F2B8194;
    case 0x7F2B8198u: goto label_7F2B8198;
    case 0x7F2B819Cu: goto label_7F2B819C;
    case 0x7F2B81A0u: goto label_7F2B81A0;
    case 0x7F2B81A4u: goto label_7F2B81A4;
    case 0x7F2B81A8u: goto label_7F2B81A8;
    case 0x7F2B81ACu: goto label_7F2B81AC;
    case 0x7F2B81B0u: goto label_7F2B81B0;
    case 0x7F2B81B4u: goto label_7F2B81B4;
    case 0x7F2B81B8u: goto label_7F2B81B8;
    case 0x7F2B81BCu: goto label_7F2B81BC;
    case 0x7F2B81C0u: goto label_7F2B81C0;
    case 0x7F2B81C4u: goto label_7F2B81C4;
    case 0x7F2B81C8u: goto label_7F2B81C8;
    case 0x7F2B81CCu: goto label_7F2B81CC;
    case 0x7F2B81D0u: goto label_7F2B81D0;
    case 0x7F2B81D4u: goto label_7F2B81D4;
    case 0x7F2B81D8u: goto label_7F2B81D8;
    case 0x7F2B81DCu: goto label_7F2B81DC;
    case 0x7F2B81E0u: goto label_7F2B81E0;
    case 0x7F2B81E4u: goto label_7F2B81E4;
    case 0x7F2B81E8u: goto label_7F2B81E8;
    case 0x7F2B81ECu: goto label_7F2B81EC;
    case 0x7F2B81F0u: goto label_7F2B81F0;
    case 0x7F2B81F4u: goto label_7F2B81F4;
    case 0x7F2B81F8u: goto label_7F2B81F8;
    case 0x7F2B81FCu: goto label_7F2B81FC;
    case 0x7F2B8200u: goto label_7F2B8200;
    case 0x7F2B8204u: goto label_7F2B8204;
    case 0x7F2B8208u: goto label_7F2B8208;
    case 0x7F2B820Cu: goto label_7F2B820C;
    case 0x7F2B8210u: goto label_7F2B8210;
    case 0x7F2B8214u: goto label_7F2B8214;
    case 0x7F2B8218u: goto label_7F2B8218;
    case 0x7F2B821Cu: goto label_7F2B821C;
    case 0x7F2B8220u: goto label_7F2B8220;
    case 0x7F2B8224u: goto label_7F2B8224;
    case 0x7F2B8228u: goto label_7F2B8228;
    case 0x7F2B822Cu: goto label_7F2B822C;
    case 0x7F2B8230u: goto label_7F2B8230;
    case 0x7F2B8234u: goto label_7F2B8234;
    case 0x7F2B8238u: goto label_7F2B8238;
    case 0x7F2B823Cu: goto label_7F2B823C;
    case 0x7F2B8240u: goto label_7F2B8240;
    case 0x7F2B8244u: goto label_7F2B8244;
    case 0x7F2B8248u: goto label_7F2B8248;
    case 0x7F2B824Cu: goto label_7F2B824C;
    case 0x7F2B8250u: goto label_7F2B8250;
    case 0x7F2B8254u: goto label_7F2B8254;
    case 0x7F2B8258u: goto label_7F2B8258;
    case 0x7F2B825Cu: goto label_7F2B825C;
    case 0x7F2B8260u: goto label_7F2B8260;
    case 0x7F2B8264u: goto label_7F2B8264;
    case 0x7F2B8268u: goto label_7F2B8268;
    case 0x7F2B826Cu: goto label_7F2B826C;
    case 0x7F2B8270u: goto label_7F2B8270;
    case 0x7F2B8274u: goto label_7F2B8274;
    case 0x7F2B8278u: goto label_7F2B8278;
    case 0x7F2B827Cu: goto label_7F2B827C;
    case 0x7F2B8280u: goto label_7F2B8280;
    case 0x7F2B8284u: goto label_7F2B8284;
    case 0x7F2B8288u: goto label_7F2B8288;
    case 0x7F2B828Cu: goto label_7F2B828C;
    case 0x7F2B8290u: goto label_7F2B8290;
    case 0x7F2B8294u: goto label_7F2B8294;
    case 0x7F2B8298u: goto label_7F2B8298;
    case 0x7F2B829Cu: goto label_7F2B829C;
    case 0x7F2B82A0u: goto label_7F2B82A0;
    case 0x7F2B82A4u: goto label_7F2B82A4;
    case 0x7F2B82A8u: goto label_7F2B82A8;
    case 0x7F2B82ACu: goto label_7F2B82AC;
    case 0x7F2B82B0u: goto label_7F2B82B0;
    case 0x7F2B82B4u: goto label_7F2B82B4;
    case 0x7F2B82B8u: goto label_7F2B82B8;
    case 0x7F2B82BCu: goto label_7F2B82BC;
    case 0x7F2B82C0u: goto label_7F2B82C0;
    case 0x7F2B82C4u: goto label_7F2B82C4;
    case 0x7F2B82C8u: goto label_7F2B82C8;
    case 0x7F2B82CCu: goto label_7F2B82CC;
    case 0x7F2B82D0u: goto label_7F2B82D0;
    case 0x7F2B82D4u: goto label_7F2B82D4;
    case 0x7F2B82D8u: goto label_7F2B82D8;
    case 0x7F2B82DCu: goto label_7F2B82DC;
    case 0x7F2B82E0u: goto label_7F2B82E0;
    case 0x7F2B82E4u: goto label_7F2B82E4;
    case 0x7F2B82E8u: goto label_7F2B82E8;
    case 0x7F2B82ECu: goto label_7F2B82EC;
    case 0x7F2B82F0u: goto label_7F2B82F0;
    case 0x7F2B82F4u: goto label_7F2B82F4;
    case 0x7F2B82F8u: goto label_7F2B82F8;
    case 0x7F2B82FCu: goto label_7F2B82FC;
    case 0x7F2B8300u: goto label_7F2B8300;
    case 0x7F2B8304u: goto label_7F2B8304;
    case 0x7F2B8308u: goto label_7F2B8308;
    case 0x7F2B830Cu: goto label_7F2B830C;
    case 0x7F2B8310u: goto label_7F2B8310;
    case 0x7F2B8314u: goto label_7F2B8314;
    case 0x7F2B8318u: goto label_7F2B8318;
    case 0x7F2B831Cu: goto label_7F2B831C;
    case 0x7F2B8320u: goto label_7F2B8320;
    case 0x7F2B8324u: goto label_7F2B8324;
    case 0x7F2B8328u: goto label_7F2B8328;
    case 0x7F2B832Cu: goto label_7F2B832C;
    case 0x7F2B8330u: goto label_7F2B8330;
    case 0x7F2B8334u: goto label_7F2B8334;
    case 0x7F2B8338u: goto label_7F2B8338;
    case 0x7F2B833Cu: goto label_7F2B833C;
    case 0x7F2B8340u: goto label_7F2B8340;
    case 0x7F2B8344u: goto label_7F2B8344;
    case 0x7F2B8348u: goto label_7F2B8348;
    case 0x7F2B834Cu: goto label_7F2B834C;
    case 0x7F2B8350u: goto label_7F2B8350;
    case 0x7F2B8354u: goto label_7F2B8354;
    case 0x7F2B8358u: goto label_7F2B8358;
    case 0x7F2B835Cu: goto label_7F2B835C;
    case 0x7F2B8360u: goto label_7F2B8360;
    case 0x7F2B8364u: goto label_7F2B8364;
    case 0x7F2B8368u: goto label_7F2B8368;
    case 0x7F2B836Cu: goto label_7F2B836C;
    case 0x7F2B8370u: goto label_7F2B8370;
    case 0x7F2B8374u: goto label_7F2B8374;
    case 0x7F2B8378u: goto label_7F2B8378;
    case 0x7F2B837Cu: goto label_7F2B837C;
    case 0x7F2B8380u: goto label_7F2B8380;
    case 0x7F2B8384u: goto label_7F2B8384;
    case 0x7F2B8388u: goto label_7F2B8388;
    case 0x7F2B838Cu: goto label_7F2B838C;
    case 0x7F2B8390u: goto label_7F2B8390;
    case 0x7F2B8394u: goto label_7F2B8394;
    case 0x7F2B8398u: goto label_7F2B8398;
    case 0x7F2B839Cu: goto label_7F2B839C;
    case 0x7F2B83A0u: goto label_7F2B83A0;
    case 0x7F2B83A4u: goto label_7F2B83A4;
    case 0x7F2B83A8u: goto label_7F2B83A8;
    case 0x7F2B83ACu: goto label_7F2B83AC;
    case 0x7F2B83B0u: goto label_7F2B83B0;
    case 0x7F2B83B4u: goto label_7F2B83B4;
    case 0x7F2B83B8u: goto label_7F2B83B8;
    case 0x7F2B83BCu: goto label_7F2B83BC;
    case 0x7F2B83C0u: goto label_7F2B83C0;
    case 0x7F2B83C4u: goto label_7F2B83C4;
    case 0x7F2B83C8u: goto label_7F2B83C8;
    case 0x7F2B83CCu: goto label_7F2B83CC;
    case 0x7F2B83D0u: goto label_7F2B83D0;
    case 0x7F2B83D4u: goto label_7F2B83D4;
    case 0x7F2B83D8u: goto label_7F2B83D8;
    case 0x7F2B83DCu: goto label_7F2B83DC;
    case 0x7F2B83E0u: goto label_7F2B83E0;
    case 0x7F2B83E4u: goto label_7F2B83E4;
    case 0x7F2B83E8u: goto label_7F2B83E8;
    case 0x7F2B83ECu: goto label_7F2B83EC;
    case 0x7F2B83F0u: goto label_7F2B83F0;
    case 0x7F2B83F4u: goto label_7F2B83F4;
    case 0x7F2B83F8u: goto label_7F2B83F8;
    case 0x7F2B83FCu: goto label_7F2B83FC;
    case 0x7F2B8400u: goto label_7F2B8400;
    case 0x7F2B8404u: goto label_7F2B8404;
    case 0x7F2B8408u: goto label_7F2B8408;
    case 0x7F2B840Cu: goto label_7F2B840C;
    case 0x7F2B8410u: goto label_7F2B8410;
    case 0x7F2B8414u: goto label_7F2B8414;
    case 0x7F2B8418u: goto label_7F2B8418;
    case 0x7F2B841Cu: goto label_7F2B841C;
    case 0x7F2B8420u: goto label_7F2B8420;
    case 0x7F2B8424u: goto label_7F2B8424;
    case 0x7F2B8428u: goto label_7F2B8428;
    case 0x7F2B842Cu: goto label_7F2B842C;
    case 0x7F2B8430u: goto label_7F2B8430;
    case 0x7F2B8434u: goto label_7F2B8434;
    case 0x7F2B8438u: goto label_7F2B8438;
    case 0x7F2B843Cu: goto label_7F2B843C;
    case 0x7F2B8440u: goto label_7F2B8440;
    case 0x7F2B8444u: goto label_7F2B8444;
    case 0x7F2B8448u: goto label_7F2B8448;
    case 0x7F2B844Cu: goto label_7F2B844C;
    case 0x7F2B8450u: goto label_7F2B8450;
    case 0x7F2B8454u: goto label_7F2B8454;
    case 0x7F2B8458u: goto label_7F2B8458;
    case 0x7F2B845Cu: goto label_7F2B845C;
    case 0x7F2B8460u: goto label_7F2B8460;
    case 0x7F2B8464u: goto label_7F2B8464;
    case 0x7F2B8468u: goto label_7F2B8468;
    case 0x7F2B846Cu: goto label_7F2B846C;
    case 0x7F2B8470u: goto label_7F2B8470;
    case 0x7F2B8474u: goto label_7F2B8474;
    case 0x7F2B8478u: goto label_7F2B8478;
    case 0x7F2B847Cu: goto label_7F2B847C;
    case 0x7F2B8480u: goto label_7F2B8480;
    case 0x7F2B8484u: goto label_7F2B8484;
    case 0x7F2B8488u: goto label_7F2B8488;
    case 0x7F2B848Cu: goto label_7F2B848C;
    case 0x7F2B8490u: goto label_7F2B8490;
    case 0x7F2B8494u: goto label_7F2B8494;
    case 0x7F2B8498u: goto label_7F2B8498;
    case 0x7F2B849Cu: goto label_7F2B849C;
    case 0x7F2B84A0u: goto label_7F2B84A0;
    case 0x7F2B84A4u: goto label_7F2B84A4;
    case 0x7F2B84A8u: goto label_7F2B84A8;
    case 0x7F2B84ACu: goto label_7F2B84AC;
    case 0x7F2B84B0u: goto label_7F2B84B0;
    case 0x7F2B84B4u: goto label_7F2B84B4;
    case 0x7F2B84B8u: goto label_7F2B84B8;
    case 0x7F2B84BCu: goto label_7F2B84BC;
    case 0x7F2B84C0u: goto label_7F2B84C0;
    case 0x7F2B84C4u: goto label_7F2B84C4;
    case 0x7F2B84C8u: goto label_7F2B84C8;
    case 0x7F2B84CCu: goto label_7F2B84CC;
    case 0x7F2B84D0u: goto label_7F2B84D0;
    case 0x7F2B84D4u: goto label_7F2B84D4;
    case 0x7F2B84D8u: goto label_7F2B84D8;
    case 0x7F2B84DCu: goto label_7F2B84DC;
    case 0x7F2B84E0u: goto label_7F2B84E0;
    case 0x7F2B84E4u: goto label_7F2B84E4;
    case 0x7F2B84E8u: goto label_7F2B84E8;
    case 0x7F2B84ECu: goto label_7F2B84EC;
    case 0x7F2B84F0u: goto label_7F2B84F0;
    case 0x7F2B84F4u: goto label_7F2B84F4;
    case 0x7F2B84F8u: goto label_7F2B84F8;
    case 0x7F2B84FCu: goto label_7F2B84FC;
    case 0x7F2B8500u: goto label_7F2B8500;
    case 0x7F2B8504u: goto label_7F2B8504;
    case 0x7F2B8508u: goto label_7F2B8508;
    case 0x7F2B850Cu: goto label_7F2B850C;
    case 0x7F2B8510u: goto label_7F2B8510;
    case 0x7F2B8514u: goto label_7F2B8514;
    case 0x7F2B8518u: goto label_7F2B8518;
    case 0x7F2B851Cu: goto label_7F2B851C;
    case 0x7F2B8520u: goto label_7F2B8520;
    case 0x7F2B8524u: goto label_7F2B8524;
    case 0x7F2B8528u: goto label_7F2B8528;
    case 0x7F2B852Cu: goto label_7F2B852C;
    case 0x7F2B8530u: goto label_7F2B8530;
    case 0x7F2B8534u: goto label_7F2B8534;
    case 0x7F2B8538u: goto label_7F2B8538;
    case 0x7F2B853Cu: goto label_7F2B853C;
    case 0x7F2B8540u: goto label_7F2B8540;
    case 0x7F2B8544u: goto label_7F2B8544;
    case 0x7F2B8548u: goto label_7F2B8548;
    case 0x7F2B854Cu: goto label_7F2B854C;
    case 0x7F2B8550u: goto label_7F2B8550;
    case 0x7F2B8554u: goto label_7F2B8554;
    case 0x7F2B8558u: goto label_7F2B8558;
    case 0x7F2B855Cu: goto label_7F2B855C;
    case 0x7F2B8560u: goto label_7F2B8560;
    case 0x7F2B8564u: goto label_7F2B8564;
    case 0x7F2B8568u: goto label_7F2B8568;
    case 0x7F2B856Cu: goto label_7F2B856C;
    case 0x7F2B8570u: goto label_7F2B8570;
    case 0x7F2B8574u: goto label_7F2B8574;
    case 0x7F2B8578u: goto label_7F2B8578;
    case 0x7F2B857Cu: goto label_7F2B857C;
    case 0x7F2B8580u: goto label_7F2B8580;
    case 0x7F2B8584u: goto label_7F2B8584;
    case 0x7F2B8588u: goto label_7F2B8588;
    case 0x7F2B858Cu: goto label_7F2B858C;
    case 0x7F2B8590u: goto label_7F2B8590;
    case 0x7F2B8594u: goto label_7F2B8594;
    case 0x7F2B8598u: goto label_7F2B8598;
    case 0x7F2B859Cu: goto label_7F2B859C;
    case 0x7F2B85A0u: goto label_7F2B85A0;
    case 0x7F2B85A4u: goto label_7F2B85A4;
    case 0x7F2B85A8u: goto label_7F2B85A8;
    case 0x7F2B85ACu: goto label_7F2B85AC;
    case 0x7F2B85B0u: goto label_7F2B85B0;
    case 0x7F2B85B4u: goto label_7F2B85B4;
    case 0x7F2B85B8u: goto label_7F2B85B8;
    case 0x7F2B85BCu: goto label_7F2B85BC;
    case 0x7F2B85C0u: goto label_7F2B85C0;
    case 0x7F2B85C4u: goto label_7F2B85C4;
    case 0x7F2B85C8u: goto label_7F2B85C8;
    case 0x7F2B85CCu: goto label_7F2B85CC;
    case 0x7F2B85D0u: goto label_7F2B85D0;
    case 0x7F2B85D4u: goto label_7F2B85D4;
    case 0x7F2B85D8u: goto label_7F2B85D8;
    case 0x7F2B85DCu: goto label_7F2B85DC;
    case 0x7F2B85E0u: goto label_7F2B85E0;
    case 0x7F2B85E4u: goto label_7F2B85E4;
    case 0x7F2B85E8u: goto label_7F2B85E8;
    case 0x7F2B85ECu: goto label_7F2B85EC;
    case 0x7F2B85F0u: goto label_7F2B85F0;
    case 0x7F2B85F4u: goto label_7F2B85F4;
    case 0x7F2B85F8u: goto label_7F2B85F8;
    case 0x7F2B85FCu: goto label_7F2B85FC;
    case 0x7F2B8600u: goto label_7F2B8600;
    case 0x7F2B8604u: goto label_7F2B8604;
    case 0x7F2B8608u: goto label_7F2B8608;
    case 0x7F2B860Cu: goto label_7F2B860C;
    case 0x7F2B8610u: goto label_7F2B8610;
    case 0x7F2B8614u: goto label_7F2B8614;
    case 0x7F2B8618u: goto label_7F2B8618;
    case 0x7F2B861Cu: goto label_7F2B861C;
    case 0x7F2B8620u: goto label_7F2B8620;
    case 0x7F2B8624u: goto label_7F2B8624;
    case 0x7F2B8628u: goto label_7F2B8628;
    case 0x7F2B862Cu: goto label_7F2B862C;
    case 0x7F2B8630u: goto label_7F2B8630;
    case 0x7F2B8634u: goto label_7F2B8634;
    case 0x7F2B8638u: goto label_7F2B8638;
    case 0x7F2B863Cu: goto label_7F2B863C;
    case 0x7F2B8640u: goto label_7F2B8640;
    case 0x7F2B8644u: goto label_7F2B8644;
    case 0x7F2B8648u: goto label_7F2B8648;
    case 0x7F2B864Cu: goto label_7F2B864C;
    case 0x7F2B8650u: goto label_7F2B8650;
    case 0x7F2B8654u: goto label_7F2B8654;
    case 0x7F2B8658u: goto label_7F2B8658;
    case 0x7F2B865Cu: goto label_7F2B865C;
    case 0x7F2B8660u: goto label_7F2B8660;
    case 0x7F2B8664u: goto label_7F2B8664;
    case 0x7F2B8668u: goto label_7F2B8668;
    case 0x7F2B866Cu: goto label_7F2B866C;
    case 0x7F2B8670u: goto label_7F2B8670;
    case 0x7F2B8674u: goto label_7F2B8674;
    case 0x7F2B8678u: goto label_7F2B8678;
    case 0x7F2B867Cu: goto label_7F2B867C;
    case 0x7F2B8680u: goto label_7F2B8680;
    case 0x7F2B8684u: goto label_7F2B8684;
    case 0x7F2B8688u: goto label_7F2B8688;
    case 0x7F2B868Cu: goto label_7F2B868C;
    case 0x7F2B8690u: goto label_7F2B8690;
    case 0x7F2B8694u: goto label_7F2B8694;
    case 0x7F2B8698u: goto label_7F2B8698;
    case 0x7F2B869Cu: goto label_7F2B869C;
    case 0x7F2B86A0u: goto label_7F2B86A0;
    case 0x7F2B86A4u: goto label_7F2B86A4;
    case 0x7F2B86A8u: goto label_7F2B86A8;
    case 0x7F2B86ACu: goto label_7F2B86AC;
    case 0x7F2B86B0u: goto label_7F2B86B0;
    case 0x7F2B86B4u: goto label_7F2B86B4;
    case 0x7F2B86B8u: goto label_7F2B86B8;
    case 0x7F2B86BCu: goto label_7F2B86BC;
    case 0x7F2B86C0u: goto label_7F2B86C0;
    case 0x7F2B86C4u: goto label_7F2B86C4;
    case 0x7F2B86C8u: goto label_7F2B86C8;
    case 0x7F2B86CCu: goto label_7F2B86CC;
    case 0x7F2B86D0u: goto label_7F2B86D0;
    case 0x7F2B86D4u: goto label_7F2B86D4;
    case 0x7F2B86D8u: goto label_7F2B86D8;
    case 0x7F2B86DCu: goto label_7F2B86DC;
    case 0x7F2B86E0u: goto label_7F2B86E0;
    case 0x7F2B86E4u: goto label_7F2B86E4;
    case 0x7F2B86E8u: goto label_7F2B86E8;
    case 0x7F2B86ECu: goto label_7F2B86EC;
    case 0x7F2B86F0u: goto label_7F2B86F0;
    case 0x7F2B86F4u: goto label_7F2B86F4;
    case 0x7F2B86F8u: goto label_7F2B86F8;
    case 0x7F2B86FCu: goto label_7F2B86FC;
    case 0x7F2B8700u: goto label_7F2B8700;
    case 0x7F2B8704u: goto label_7F2B8704;
    case 0x7F2B8708u: goto label_7F2B8708;
    case 0x7F2B870Cu: goto label_7F2B870C;
    case 0x7F2B8710u: goto label_7F2B8710;
    case 0x7F2B8714u: goto label_7F2B8714;
    case 0x7F2B8718u: goto label_7F2B8718;
    case 0x7F2B871Cu: goto label_7F2B871C;
    case 0x7F2B8720u: goto label_7F2B8720;
    case 0x7F2B8724u: goto label_7F2B8724;
    case 0x7F2B8728u: goto label_7F2B8728;
    case 0x7F2B872Cu: goto label_7F2B872C;
    case 0x7F2B8730u: goto label_7F2B8730;
    case 0x7F2B8734u: goto label_7F2B8734;
    case 0x7F2B8738u: goto label_7F2B8738;
    case 0x7F2B873Cu: goto label_7F2B873C;
    case 0x7F2B8740u: goto label_7F2B8740;
    case 0x7F2B8744u: goto label_7F2B8744;
    case 0x7F2B8748u: goto label_7F2B8748;
    case 0x7F2B874Cu: goto label_7F2B874C;
    case 0x7F2B8750u: goto label_7F2B8750;
    case 0x7F2B8754u: goto label_7F2B8754;
    case 0x7F2B8758u: goto label_7F2B8758;
    case 0x7F2B875Cu: goto label_7F2B875C;
    case 0x7F2B8760u: goto label_7F2B8760;
    case 0x7F2B8764u: goto label_7F2B8764;
    case 0x7F2B8768u: goto label_7F2B8768;
    case 0x7F2B876Cu: goto label_7F2B876C;
    case 0x7F2B8770u: goto label_7F2B8770;
    case 0x7F2B8774u: goto label_7F2B8774;
    case 0x7F2B8778u: goto label_7F2B8778;
    case 0x7F2B877Cu: goto label_7F2B877C;
    case 0x7F2B8780u: goto label_7F2B8780;
    case 0x7F2B8784u: goto label_7F2B8784;
    case 0x7F2B8788u: goto label_7F2B8788;
    case 0x7F2B878Cu: goto label_7F2B878C;
    case 0x7F2B8790u: goto label_7F2B8790;
    case 0x7F2B8794u: goto label_7F2B8794;
    case 0x7F2B8798u: goto label_7F2B8798;
    case 0x7F2B879Cu: goto label_7F2B879C;
    case 0x7F2B87A0u: goto label_7F2B87A0;
    case 0x7F2B87A4u: goto label_7F2B87A4;
    case 0x7F2B87A8u: goto label_7F2B87A8;
    case 0x7F2B87ACu: goto label_7F2B87AC;
    case 0x7F2B87B0u: goto label_7F2B87B0;
    case 0x7F2B87B4u: goto label_7F2B87B4;
    case 0x7F2B87B8u: goto label_7F2B87B8;
    case 0x7F2B87BCu: goto label_7F2B87BC;
    case 0x7F2B87C0u: goto label_7F2B87C0;
    case 0x7F2B87C4u: goto label_7F2B87C4;
    case 0x7F2B87C8u: goto label_7F2B87C8;
    case 0x7F2B87CCu: goto label_7F2B87CC;
    case 0x7F2B87D0u: goto label_7F2B87D0;
    case 0x7F2B87D4u: goto label_7F2B87D4;
    case 0x7F2B87D8u: goto label_7F2B87D8;
    case 0x7F2B87DCu: goto label_7F2B87DC;
    case 0x7F2B87E0u: goto label_7F2B87E0;
    case 0x7F2B87E4u: goto label_7F2B87E4;
    case 0x7F2B87E8u: goto label_7F2B87E8;
    case 0x7F2B87ECu: goto label_7F2B87EC;
    case 0x7F2B87F0u: goto label_7F2B87F0;
    case 0x7F2B87F4u: goto label_7F2B87F4;
    case 0x7F2B87F8u: goto label_7F2B87F8;
    case 0x7F2B87FCu: goto label_7F2B87FC;
    case 0x7F2B8800u: goto label_7F2B8800;
    case 0x7F2B8804u: goto label_7F2B8804;
    case 0x7F2B8808u: goto label_7F2B8808;
    case 0x7F2B880Cu: goto label_7F2B880C;
    case 0x7F2B8810u: goto label_7F2B8810;
    case 0x7F2B8814u: goto label_7F2B8814;
    case 0x7F2B8818u: goto label_7F2B8818;
    case 0x7F2B881Cu: goto label_7F2B881C;
    case 0x7F2B8820u: goto label_7F2B8820;
    case 0x7F2B8824u: goto label_7F2B8824;
    case 0x7F2B8828u: goto label_7F2B8828;
    case 0x7F2B882Cu: goto label_7F2B882C;
    case 0x7F2B8830u: goto label_7F2B8830;
    case 0x7F2B8834u: goto label_7F2B8834;
    case 0x7F2B8838u: goto label_7F2B8838;
    case 0x7F2B883Cu: goto label_7F2B883C;
    case 0x7F2B8840u: goto label_7F2B8840;
    case 0x7F2B8844u: goto label_7F2B8844;
    case 0x7F2B8848u: goto label_7F2B8848;
    case 0x7F2B884Cu: goto label_7F2B884C;
    case 0x7F2B8850u: goto label_7F2B8850;
    case 0x7F2B8854u: goto label_7F2B8854;
    case 0x7F2B8858u: goto label_7F2B8858;
    case 0x7F2B885Cu: goto label_7F2B885C;
    case 0x7F2B8860u: goto label_7F2B8860;
    case 0x7F2B8864u: goto label_7F2B8864;
    case 0x7F2B8868u: goto label_7F2B8868;
    case 0x7F2B886Cu: goto label_7F2B886C;
    case 0x7F2B8870u: goto label_7F2B8870;
    case 0x7F2B8874u: goto label_7F2B8874;
    case 0x7F2B8878u: goto label_7F2B8878;
    case 0x7F2B887Cu: goto label_7F2B887C;
    case 0x7F2B8880u: goto label_7F2B8880;
    case 0x7F2B8884u: goto label_7F2B8884;
    case 0x7F2B8888u: goto label_7F2B8888;
    case 0x7F2B888Cu: goto label_7F2B888C;
    case 0x7F2B8890u: goto label_7F2B8890;
    case 0x7F2B8894u: goto label_7F2B8894;
    case 0x7F2B8898u: goto label_7F2B8898;
    case 0x7F2B889Cu: goto label_7F2B889C;
    case 0x7F2B88A0u: goto label_7F2B88A0;
    case 0x7F2B88A4u: goto label_7F2B88A4;
    case 0x7F2B88A8u: goto label_7F2B88A8;
    case 0x7F2B88ACu: goto label_7F2B88AC;
    case 0x7F2B88B0u: goto label_7F2B88B0;
    case 0x7F2B88B4u: goto label_7F2B88B4;
    case 0x7F2B88B8u: goto label_7F2B88B8;
    case 0x7F2B88BCu: goto label_7F2B88BC;
    case 0x7F2B88C0u: goto label_7F2B88C0;
    case 0x7F2B88C4u: goto label_7F2B88C4;
    case 0x7F2B88C8u: goto label_7F2B88C8;
    case 0x7F2B88CCu: goto label_7F2B88CC;
    case 0x7F2B88D0u: goto label_7F2B88D0;
    case 0x7F2B88D4u: goto label_7F2B88D4;
    case 0x7F2B88D8u: goto label_7F2B88D8;
    case 0x7F2B88DCu: goto label_7F2B88DC;
    case 0x7F2B88E0u: goto label_7F2B88E0;
    case 0x7F2B88E4u: goto label_7F2B88E4;
    case 0x7F2B88E8u: goto label_7F2B88E8;
    case 0x7F2B88ECu: goto label_7F2B88EC;
    case 0x7F2B88F0u: goto label_7F2B88F0;
    case 0x7F2B88F4u: goto label_7F2B88F4;
    case 0x7F2B88F8u: goto label_7F2B88F8;
    case 0x7F2B88FCu: goto label_7F2B88FC;
    case 0x7F2B8900u: goto label_7F2B8900;
    case 0x7F2B8904u: goto label_7F2B8904;
    case 0x7F2B8908u: goto label_7F2B8908;
    case 0x7F2B890Cu: goto label_7F2B890C;
    case 0x7F2B8910u: goto label_7F2B8910;
    case 0x7F2B8914u: goto label_7F2B8914;
    case 0x7F2B8918u: goto label_7F2B8918;
    case 0x7F2B891Cu: goto label_7F2B891C;
    case 0x7F2B8920u: goto label_7F2B8920;
    case 0x7F2B8924u: goto label_7F2B8924;
    case 0x7F2B8928u: goto label_7F2B8928;
    case 0x7F2B892Cu: goto label_7F2B892C;
    case 0x7F2B8930u: goto label_7F2B8930;
    case 0x7F2B8934u: goto label_7F2B8934;
    case 0x7F2B8938u: goto label_7F2B8938;
    case 0x7F2B893Cu: goto label_7F2B893C;
    case 0x7F2B8940u: goto label_7F2B8940;
    case 0x7F2B8944u: goto label_7F2B8944;
    case 0x7F2B8948u: goto label_7F2B8948;
    case 0x7F2B894Cu: goto label_7F2B894C;
    case 0x7F2B8950u: goto label_7F2B8950;
    case 0x7F2B8954u: goto label_7F2B8954;
    case 0x7F2B8958u: goto label_7F2B8958;
    case 0x7F2B895Cu: goto label_7F2B895C;
    case 0x7F2B8960u: goto label_7F2B8960;
    case 0x7F2B8964u: goto label_7F2B8964;
    case 0x7F2B8968u: goto label_7F2B8968;
    case 0x7F2B896Cu: goto label_7F2B896C;
    case 0x7F2B8970u: goto label_7F2B8970;
    case 0x7F2B8974u: goto label_7F2B8974;
    case 0x7F2B8978u: goto label_7F2B8978;
    case 0x7F2B897Cu: goto label_7F2B897C;
    case 0x7F2B8980u: goto label_7F2B8980;
    case 0x7F2B8984u: goto label_7F2B8984;
    case 0x7F2B8988u: goto label_7F2B8988;
    case 0x7F2B898Cu: goto label_7F2B898C;
    case 0x7F2B8990u: goto label_7F2B8990;
    case 0x7F2B8994u: goto label_7F2B8994;
    case 0x7F2B8998u: goto label_7F2B8998;
    case 0x7F2B899Cu: goto label_7F2B899C;
    case 0x7F2B89A0u: goto label_7F2B89A0;
    case 0x7F2B89A4u: goto label_7F2B89A4;
    case 0x7F2B89A8u: goto label_7F2B89A8;
    case 0x7F2B89ACu: goto label_7F2B89AC;
    case 0x7F2B89B0u: goto label_7F2B89B0;
    case 0x7F2B89B4u: goto label_7F2B89B4;
    case 0x7F2B89B8u: goto label_7F2B89B8;
    case 0x7F2B89BCu: goto label_7F2B89BC;
    case 0x7F2B89C0u: goto label_7F2B89C0;
    case 0x7F2B89C4u: goto label_7F2B89C4;
    case 0x7F2B89C8u: goto label_7F2B89C8;
    case 0x7F2B89CCu: goto label_7F2B89CC;
    case 0x7F2B89D0u: goto label_7F2B89D0;
    case 0x7F2B89D4u: goto label_7F2B89D4;
    case 0x7F2B89D8u: goto label_7F2B89D8;
    case 0x7F2B89DCu: goto label_7F2B89DC;
    case 0x7F2B89E0u: goto label_7F2B89E0;
    case 0x7F2B89E4u: goto label_7F2B89E4;
    case 0x7F2B89E8u: goto label_7F2B89E8;
    case 0x7F2B89ECu: goto label_7F2B89EC;
    case 0x7F2B89F0u: goto label_7F2B89F0;
    case 0x7F2B89F4u: goto label_7F2B89F4;
    case 0x7F2B89F8u: goto label_7F2B89F8;
    case 0x7F2B89FCu: goto label_7F2B89FC;
    case 0x7F2B8A00u: goto label_7F2B8A00;
    case 0x7F2B8A04u: goto label_7F2B8A04;
    case 0x7F2B8A08u: goto label_7F2B8A08;
    case 0x7F2B8A0Cu: goto label_7F2B8A0C;
    case 0x7F2B8A10u: goto label_7F2B8A10;
    case 0x7F2B8A14u: goto label_7F2B8A14;
    case 0x7F2B8A18u: goto label_7F2B8A18;
    case 0x7F2B8A1Cu: goto label_7F2B8A1C;
    case 0x7F2B8A20u: goto label_7F2B8A20;
    case 0x7F2B8A24u: goto label_7F2B8A24;
    case 0x7F2B8A28u: goto label_7F2B8A28;
    case 0x7F2B8A2Cu: goto label_7F2B8A2C;
    case 0x7F2B8A30u: goto label_7F2B8A30;
    case 0x7F2B8A34u: goto label_7F2B8A34;
    case 0x7F2B8A38u: goto label_7F2B8A38;
    case 0x7F2B8A3Cu: goto label_7F2B8A3C;
    case 0x7F2B8A40u: goto label_7F2B8A40;
    case 0x7F2B8A44u: goto label_7F2B8A44;
    case 0x7F2B8A48u: goto label_7F2B8A48;
    case 0x7F2B8A4Cu: goto label_7F2B8A4C;
    case 0x7F2B8A50u: goto label_7F2B8A50;
    case 0x7F2B8A54u: goto label_7F2B8A54;
    case 0x7F2B8A58u: goto label_7F2B8A58;
    case 0x7F2B8A5Cu: goto label_7F2B8A5C;
    case 0x7F2B8A60u: goto label_7F2B8A60;
    case 0x7F2B8A64u: goto label_7F2B8A64;
    case 0x7F2B8A68u: goto label_7F2B8A68;
    case 0x7F2B8A6Cu: goto label_7F2B8A6C;
    case 0x7F2B8A70u: goto label_7F2B8A70;
    case 0x7F2B8A74u: goto label_7F2B8A74;
    case 0x7F2B8A78u: goto label_7F2B8A78;
    case 0x7F2B8A7Cu: goto label_7F2B8A7C;
    case 0x7F2B8A80u: goto label_7F2B8A80;
    case 0x7F2B8A84u: goto label_7F2B8A84;
    case 0x7F2B8A88u: goto label_7F2B8A88;
    case 0x7F2B8A8Cu: goto label_7F2B8A8C;
    case 0x7F2B8A90u: goto label_7F2B8A90;
    case 0x7F2B8A94u: goto label_7F2B8A94;
    case 0x7F2B8A98u: goto label_7F2B8A98;
    case 0x7F2B8A9Cu: goto label_7F2B8A9C;
    case 0x7F2B8AA0u: goto label_7F2B8AA0;
    case 0x7F2B8AA4u: goto label_7F2B8AA4;
    case 0x7F2B8AA8u: goto label_7F2B8AA8;
    case 0x7F2B8AACu: goto label_7F2B8AAC;
    case 0x7F2B8AB0u: goto label_7F2B8AB0;
    case 0x7F2B8AB4u: goto label_7F2B8AB4;
    case 0x7F2B8AB8u: goto label_7F2B8AB8;
    case 0x7F2B8ABCu: goto label_7F2B8ABC;
    case 0x7F2B8AC0u: goto label_7F2B8AC0;
    case 0x7F2B8AC4u: goto label_7F2B8AC4;
    case 0x7F2B8AC8u: goto label_7F2B8AC8;
    case 0x7F2B8ACCu: goto label_7F2B8ACC;
    case 0x7F2B8AD0u: goto label_7F2B8AD0;
    case 0x7F2B8AD4u: goto label_7F2B8AD4;
    case 0x7F2B8AD8u: goto label_7F2B8AD8;
    case 0x7F2B8ADCu: goto label_7F2B8ADC;
    case 0x7F2B8AE0u: goto label_7F2B8AE0;
    case 0x7F2B8AE4u: goto label_7F2B8AE4;
    case 0x7F2B8AE8u: goto label_7F2B8AE8;
    case 0x7F2B8AECu: goto label_7F2B8AEC;
    case 0x7F2B8AF0u: goto label_7F2B8AF0;
    case 0x7F2B8AF4u: goto label_7F2B8AF4;
    case 0x7F2B8AF8u: goto label_7F2B8AF8;
    case 0x7F2B8AFCu: goto label_7F2B8AFC;
    case 0x7F2B8B00u: goto label_7F2B8B00;
    case 0x7F2B8B04u: goto label_7F2B8B04;
    case 0x7F2B8B08u: goto label_7F2B8B08;
    case 0x7F2B8B0Cu: goto label_7F2B8B0C;
    case 0x7F2B8B10u: goto label_7F2B8B10;
    case 0x7F2B8B14u: goto label_7F2B8B14;
    case 0x7F2B8B18u: goto label_7F2B8B18;
    case 0x7F2B8B1Cu: goto label_7F2B8B1C;
    case 0x7F2B8B20u: goto label_7F2B8B20;
    case 0x7F2B8B24u: goto label_7F2B8B24;
    case 0x7F2B8B28u: goto label_7F2B8B28;
    case 0x7F2B8B2Cu: goto label_7F2B8B2C;
    case 0x7F2B8B30u: goto label_7F2B8B30;
    case 0x7F2B8B34u: goto label_7F2B8B34;
    case 0x7F2B8B38u: goto label_7F2B8B38;
    case 0x7F2B8B3Cu: goto label_7F2B8B3C;
    case 0x7F2B8B40u: goto label_7F2B8B40;
    case 0x7F2B8B44u: goto label_7F2B8B44;
    case 0x7F2B8B48u: goto label_7F2B8B48;
    case 0x7F2B8B4Cu: goto label_7F2B8B4C;
    case 0x7F2B8B50u: goto label_7F2B8B50;
    case 0x7F2B8B54u: goto label_7F2B8B54;
    case 0x7F2B8B58u: goto label_7F2B8B58;
    case 0x7F2B8B5Cu: goto label_7F2B8B5C;
    case 0x7F2B8B60u: goto label_7F2B8B60;
    case 0x7F2B8B64u: goto label_7F2B8B64;
    case 0x7F2B8B68u: goto label_7F2B8B68;
    case 0x7F2B8B6Cu: goto label_7F2B8B6C;
    case 0x7F2B8B70u: goto label_7F2B8B70;
    case 0x7F2B8B74u: goto label_7F2B8B74;
    case 0x7F2B8B78u: goto label_7F2B8B78;
    case 0x7F2B8B7Cu: goto label_7F2B8B7C;
    case 0x7F2B8B80u: goto label_7F2B8B80;
    case 0x7F2B8B84u: goto label_7F2B8B84;
    case 0x7F2B8B88u: goto label_7F2B8B88;
    case 0x7F2B8B8Cu: goto label_7F2B8B8C;
    case 0x7F2B8B90u: goto label_7F2B8B90;
    case 0x7F2B8B94u: goto label_7F2B8B94;
    case 0x7F2B8B98u: goto label_7F2B8B98;
    case 0x7F2B8B9Cu: goto label_7F2B8B9C;
    case 0x7F2B8BA0u: goto label_7F2B8BA0;
    case 0x7F2B8BA4u: goto label_7F2B8BA4;
    case 0x7F2B8BA8u: goto label_7F2B8BA8;
    case 0x7F2B8BACu: goto label_7F2B8BAC;
    case 0x7F2B8BB0u: goto label_7F2B8BB0;
    case 0x7F2B8BB4u: goto label_7F2B8BB4;
    case 0x7F2B8BB8u: goto label_7F2B8BB8;
    case 0x7F2B8BBCu: goto label_7F2B8BBC;
    case 0x7F2B8BC0u: goto label_7F2B8BC0;
    case 0x7F2B8BC4u: goto label_7F2B8BC4;
    case 0x7F2B8BC8u: goto label_7F2B8BC8;
    case 0x7F2B8BCCu: goto label_7F2B8BCC;
    case 0x7F2B8BD0u: goto label_7F2B8BD0;
    case 0x7F2B8BD4u: goto label_7F2B8BD4;
    case 0x7F2B8BD8u: goto label_7F2B8BD8;
    case 0x7F2B8BDCu: goto label_7F2B8BDC;
    case 0x7F2B8BE0u: goto label_7F2B8BE0;
    case 0x7F2B8BE4u: goto label_7F2B8BE4;
    case 0x7F2B8BE8u: goto label_7F2B8BE8;
    case 0x7F2B8BECu: goto label_7F2B8BEC;
    case 0x7F2B8BF0u: goto label_7F2B8BF0;
    case 0x7F2B8BF4u: goto label_7F2B8BF4;
    case 0x7F2B8BF8u: goto label_7F2B8BF8;
    case 0x7F2B8BFCu: goto label_7F2B8BFC;
    case 0x7F2B8C00u: goto label_7F2B8C00;
    case 0x7F2B8C04u: goto label_7F2B8C04;
    case 0x7F2B8C08u: goto label_7F2B8C08;
    case 0x7F2B8C0Cu: goto label_7F2B8C0C;
    case 0x7F2B8C10u: goto label_7F2B8C10;
    case 0x7F2B8C14u: goto label_7F2B8C14;
    case 0x7F2B8C18u: goto label_7F2B8C18;
    case 0x7F2B8C1Cu: goto label_7F2B8C1C;
    case 0x7F2B8C20u: goto label_7F2B8C20;
    case 0x7F2B8C24u: goto label_7F2B8C24;
    case 0x7F2B8C28u: goto label_7F2B8C28;
    case 0x7F2B8C2Cu: goto label_7F2B8C2C;
    case 0x7F2B8C30u: goto label_7F2B8C30;
    case 0x7F2B8C34u: goto label_7F2B8C34;
    case 0x7F2B8C38u: goto label_7F2B8C38;
    case 0x7F2B8C3Cu: goto label_7F2B8C3C;
    case 0x7F2B8C40u: goto label_7F2B8C40;
    case 0x7F2B8C44u: goto label_7F2B8C44;
    case 0x7F2B8C48u: goto label_7F2B8C48;
    case 0x7F2B8C4Cu: goto label_7F2B8C4C;
    case 0x7F2B8C50u: goto label_7F2B8C50;
    case 0x7F2B8C54u: goto label_7F2B8C54;
    case 0x7F2B8C58u: goto label_7F2B8C58;
    case 0x7F2B8C5Cu: goto label_7F2B8C5C;
    case 0x7F2B8C60u: goto label_7F2B8C60;
    case 0x7F2B8C64u: goto label_7F2B8C64;
    case 0x7F2B8C68u: goto label_7F2B8C68;
    case 0x7F2B8C6Cu: goto label_7F2B8C6C;
    case 0x7F2B8C70u: goto label_7F2B8C70;
    case 0x7F2B8C74u: goto label_7F2B8C74;
    case 0x7F2B8C78u: goto label_7F2B8C78;
    case 0x7F2B8C7Cu: goto label_7F2B8C7C;
    case 0x7F2B8C80u: goto label_7F2B8C80;
    case 0x7F2B8C84u: goto label_7F2B8C84;
    case 0x7F2B8C88u: goto label_7F2B8C88;
    case 0x7F2B8C8Cu: goto label_7F2B8C8C;
    case 0x7F2B8C90u: goto label_7F2B8C90;
    case 0x7F2B8C94u: goto label_7F2B8C94;
    case 0x7F2B8C98u: goto label_7F2B8C98;
    case 0x7F2B8C9Cu: goto label_7F2B8C9C;
    case 0x7F2B8CA0u: goto label_7F2B8CA0;
    case 0x7F2B8CA4u: goto label_7F2B8CA4;
    case 0x7F2B8CA8u: goto label_7F2B8CA8;
    case 0x7F2B8CACu: goto label_7F2B8CAC;
    case 0x7F2B8CB0u: goto label_7F2B8CB0;
    case 0x7F2B8CB4u: goto label_7F2B8CB4;
    case 0x7F2B8CB8u: goto label_7F2B8CB8;
    case 0x7F2B8CBCu: goto label_7F2B8CBC;
    case 0x7F2B8CC0u: goto label_7F2B8CC0;
    case 0x7F2B8CC4u: goto label_7F2B8CC4;
    case 0x7F2B8CC8u: goto label_7F2B8CC8;
    case 0x7F2B8CCCu: goto label_7F2B8CCC;
    case 0x7F2B8CD0u: goto label_7F2B8CD0;
    case 0x7F2B8CD4u: goto label_7F2B8CD4;
    case 0x7F2B8CD8u: goto label_7F2B8CD8;
    case 0x7F2B8CDCu: goto label_7F2B8CDC;
    case 0x7F2B8CE0u: goto label_7F2B8CE0;
    case 0x7F2B8CE4u: goto label_7F2B8CE4;
    case 0x7F2B8CE8u: goto label_7F2B8CE8;
    case 0x7F2B8CECu: goto label_7F2B8CEC;
    case 0x7F2B8CF0u: goto label_7F2B8CF0;
    case 0x7F2B8CF4u: goto label_7F2B8CF4;
    case 0x7F2B8CF8u: goto label_7F2B8CF8;
    case 0x7F2B8CFCu: goto label_7F2B8CFC;
    case 0x7F2B8D00u: goto label_7F2B8D00;
    case 0x7F2B8D04u: goto label_7F2B8D04;
    case 0x7F2B8D08u: goto label_7F2B8D08;
    case 0x7F2B8D0Cu: goto label_7F2B8D0C;
    case 0x7F2B8D10u: goto label_7F2B8D10;
    case 0x7F2B8D14u: goto label_7F2B8D14;
    case 0x7F2B8D18u: goto label_7F2B8D18;
    case 0x7F2B8D1Cu: goto label_7F2B8D1C;
    case 0x7F2B8D20u: goto label_7F2B8D20;
    case 0x7F2B8D24u: goto label_7F2B8D24;
    case 0x7F2B8D28u: goto label_7F2B8D28;
    case 0x7F2B8D2Cu: goto label_7F2B8D2C;
    case 0x7F2B8D30u: goto label_7F2B8D30;
    case 0x7F2B8D34u: goto label_7F2B8D34;
    case 0x7F2B8D38u: goto label_7F2B8D38;
    case 0x7F2B8D3Cu: goto label_7F2B8D3C;
    case 0x7F2B8D40u: goto label_7F2B8D40;
    case 0x7F2B8D44u: goto label_7F2B8D44;
    case 0x7F2B8D48u: goto label_7F2B8D48;
    case 0x7F2B8D4Cu: goto label_7F2B8D4C;
    case 0x7F2B8D50u: goto label_7F2B8D50;
    case 0x7F2B8D54u: goto label_7F2B8D54;
    case 0x7F2B8D58u: goto label_7F2B8D58;
    case 0x7F2B8D5Cu: goto label_7F2B8D5C;
    case 0x7F2B8D60u: goto label_7F2B8D60;
    case 0x7F2B8D64u: goto label_7F2B8D64;
    case 0x7F2B8D68u: goto label_7F2B8D68;
    case 0x7F2B8D6Cu: goto label_7F2B8D6C;
    case 0x7F2B8D70u: goto label_7F2B8D70;
    case 0x7F2B8D74u: goto label_7F2B8D74;
    case 0x7F2B8D78u: goto label_7F2B8D78;
    case 0x7F2B8D7Cu: goto label_7F2B8D7C;
    case 0x7F2B8D80u: goto label_7F2B8D80;
    case 0x7F2B8D84u: goto label_7F2B8D84;
    case 0x7F2B8D88u: goto label_7F2B8D88;
    case 0x7F2B8D8Cu: goto label_7F2B8D8C;
    case 0x7F2B8D90u: goto label_7F2B8D90;
    case 0x7F2B8D94u: goto label_7F2B8D94;
    case 0x7F2B8D98u: goto label_7F2B8D98;
    case 0x7F2B8D9Cu: goto label_7F2B8D9C;
    case 0x7F2B8DA0u: goto label_7F2B8DA0;
    case 0x7F2B8DA4u: goto label_7F2B8DA4;
    case 0x7F2B8DA8u: goto label_7F2B8DA8;
    case 0x7F2B8DACu: goto label_7F2B8DAC;
    case 0x7F2B8DB0u: goto label_7F2B8DB0;
    case 0x7F2B8DB4u: goto label_7F2B8DB4;
    case 0x7F2B8DB8u: goto label_7F2B8DB8;
    case 0x7F2B8DBCu: goto label_7F2B8DBC;
    case 0x7F2B8DC0u: goto label_7F2B8DC0;
    case 0x7F2B8DC4u: goto label_7F2B8DC4;
    case 0x7F2B8DC8u: goto label_7F2B8DC8;
    case 0x7F2B8DCCu: goto label_7F2B8DCC;
    case 0x7F2B8DD0u: goto label_7F2B8DD0;
    case 0x7F2B8DD4u: goto label_7F2B8DD4;
    case 0x7F2B8DD8u: goto label_7F2B8DD8;
    case 0x7F2B8DDCu: goto label_7F2B8DDC;
    case 0x7F2B8DE0u: goto label_7F2B8DE0;
    case 0x7F2B8DE4u: goto label_7F2B8DE4;
    case 0x7F2B8DE8u: goto label_7F2B8DE8;
    case 0x7F2B8DECu: goto label_7F2B8DEC;
    case 0x7F2B8DF0u: goto label_7F2B8DF0;
    case 0x7F2B8DF4u: goto label_7F2B8DF4;
    case 0x7F2B8DF8u: goto label_7F2B8DF8;
    case 0x7F2B8DFCu: goto label_7F2B8DFC;
    case 0x7F2B8E00u: goto label_7F2B8E00;
    case 0x7F2B8E04u: goto label_7F2B8E04;
    case 0x7F2B8E08u: goto label_7F2B8E08;
    case 0x7F2B8E0Cu: goto label_7F2B8E0C;
    case 0x7F2B8E10u: goto label_7F2B8E10;
    case 0x7F2B8E14u: goto label_7F2B8E14;
    case 0x7F2B8E18u: goto label_7F2B8E18;
    case 0x7F2B8E1Cu: goto label_7F2B8E1C;
    case 0x7F2B8E20u: goto label_7F2B8E20;
    case 0x7F2B8E24u: goto label_7F2B8E24;
    case 0x7F2B8E28u: goto label_7F2B8E28;
    case 0x7F2B8E2Cu: goto label_7F2B8E2C;
    case 0x7F2B8E30u: goto label_7F2B8E30;
    case 0x7F2B8E34u: goto label_7F2B8E34;
    case 0x7F2B8E38u: goto label_7F2B8E38;
    case 0x7F2B8E3Cu: goto label_7F2B8E3C;
    case 0x7F2B8E40u: goto label_7F2B8E40;
    case 0x7F2B8E44u: goto label_7F2B8E44;
    case 0x7F2B8E48u: goto label_7F2B8E48;
    case 0x7F2B8E4Cu: goto label_7F2B8E4C;
    case 0x7F2B8E50u: goto label_7F2B8E50;
    case 0x7F2B8E54u: goto label_7F2B8E54;
    case 0x7F2B8E58u: goto label_7F2B8E58;
    case 0x7F2B8E5Cu: goto label_7F2B8E5C;
    case 0x7F2B8E60u: goto label_7F2B8E60;
    case 0x7F2B8E64u: goto label_7F2B8E64;
    case 0x7F2B8E68u: goto label_7F2B8E68;
    case 0x7F2B8E6Cu: goto label_7F2B8E6C;
    case 0x7F2B8E70u: goto label_7F2B8E70;
    case 0x7F2B8E74u: goto label_7F2B8E74;
    case 0x7F2B8E78u: goto label_7F2B8E78;
    case 0x7F2B8E7Cu: goto label_7F2B8E7C;
    case 0x7F2B8E80u: goto label_7F2B8E80;
    case 0x7F2B8E84u: goto label_7F2B8E84;
    case 0x7F2B8E88u: goto label_7F2B8E88;
    case 0x7F2B8E8Cu: goto label_7F2B8E8C;
    case 0x7F2B8E90u: goto label_7F2B8E90;
    case 0x7F2B8E94u: goto label_7F2B8E94;
    case 0x7F2B8E98u: goto label_7F2B8E98;
    case 0x7F2B8E9Cu: goto label_7F2B8E9C;
    case 0x7F2B8EA0u: goto label_7F2B8EA0;
    case 0x7F2B8EA4u: goto label_7F2B8EA4;
    case 0x7F2B8EA8u: goto label_7F2B8EA8;
    case 0x7F2B8EACu: goto label_7F2B8EAC;
    case 0x7F2B8EB0u: goto label_7F2B8EB0;
    case 0x7F2B8EB4u: goto label_7F2B8EB4;
    case 0x7F2B8EB8u: goto label_7F2B8EB8;
    case 0x7F2B8EBCu: goto label_7F2B8EBC;
    case 0x7F2B8EC0u: goto label_7F2B8EC0;
    case 0x7F2B8EC4u: goto label_7F2B8EC4;
    case 0x7F2B8EC8u: goto label_7F2B8EC8;
    case 0x7F2B8ECCu: goto label_7F2B8ECC;
    case 0x7F2B8ED0u: goto label_7F2B8ED0;
    case 0x7F2B8ED4u: goto label_7F2B8ED4;
    case 0x7F2B8ED8u: goto label_7F2B8ED8;
    case 0x7F2B8EDCu: goto label_7F2B8EDC;
    case 0x7F2B8EE0u: goto label_7F2B8EE0;
    case 0x7F2B8EE4u: goto label_7F2B8EE4;
    case 0x7F2B8EE8u: goto label_7F2B8EE8;
    case 0x7F2B8EECu: goto label_7F2B8EEC;
    case 0x7F2B8EF0u: goto label_7F2B8EF0;
    case 0x7F2B8EF4u: goto label_7F2B8EF4;
    case 0x7F2B8EF8u: goto label_7F2B8EF8;
    case 0x7F2B8EFCu: goto label_7F2B8EFC;
    case 0x7F2B8F00u: goto label_7F2B8F00;
    case 0x7F2B8F04u: goto label_7F2B8F04;
    case 0x7F2B8F08u: goto label_7F2B8F08;
    case 0x7F2B8F0Cu: goto label_7F2B8F0C;
    case 0x7F2B8F10u: goto label_7F2B8F10;
    case 0x7F2B8F14u: goto label_7F2B8F14;
    case 0x7F2B8F18u: goto label_7F2B8F18;
    case 0x7F2B8F1Cu: goto label_7F2B8F1C;
    case 0x7F2B8F20u: goto label_7F2B8F20;
    case 0x7F2B8F24u: goto label_7F2B8F24;
    case 0x7F2B8F28u: goto label_7F2B8F28;
    case 0x7F2B8F2Cu: goto label_7F2B8F2C;
    case 0x7F2B8F30u: goto label_7F2B8F30;
    case 0x7F2B8F34u: goto label_7F2B8F34;
    case 0x7F2B8F38u: goto label_7F2B8F38;
    case 0x7F2B8F3Cu: goto label_7F2B8F3C;
    case 0x7F2B8F40u: goto label_7F2B8F40;
    case 0x7F2B8F44u: goto label_7F2B8F44;
    case 0x7F2B8F48u: goto label_7F2B8F48;
    case 0x7F2B8F4Cu: goto label_7F2B8F4C;
    case 0x7F2B8F50u: goto label_7F2B8F50;
    case 0x7F2B8F54u: goto label_7F2B8F54;
    case 0x7F2B8F58u: goto label_7F2B8F58;
    case 0x7F2B8F5Cu: goto label_7F2B8F5C;
    case 0x7F2B8F60u: goto label_7F2B8F60;
    case 0x7F2B8F64u: goto label_7F2B8F64;
    case 0x7F2B8F68u: goto label_7F2B8F68;
    case 0x7F2B8F6Cu: goto label_7F2B8F6C;
    case 0x7F2B8F70u: goto label_7F2B8F70;
    case 0x7F2B8F74u: goto label_7F2B8F74;
    case 0x7F2B8F78u: goto label_7F2B8F78;
    case 0x7F2B8F7Cu: goto label_7F2B8F7C;
    case 0x7F2B8F80u: goto label_7F2B8F80;
    case 0x7F2B8F84u: goto label_7F2B8F84;
    case 0x7F2B8F88u: goto label_7F2B8F88;
    case 0x7F2B8F8Cu: goto label_7F2B8F8C;
    case 0x7F2B8F90u: goto label_7F2B8F90;
    case 0x7F2B8F94u: goto label_7F2B8F94;
    case 0x7F2B8F98u: goto label_7F2B8F98;
    case 0x7F2B8F9Cu: goto label_7F2B8F9C;
    case 0x7F2B8FA0u: goto label_7F2B8FA0;
    case 0x7F2B8FA4u: goto label_7F2B8FA4;
    case 0x7F2B8FA8u: goto label_7F2B8FA8;
    case 0x7F2B8FACu: goto label_7F2B8FAC;
    case 0x7F2B8FB0u: goto label_7F2B8FB0;
    case 0x7F2B8FB4u: goto label_7F2B8FB4;
    case 0x7F2B8FB8u: goto label_7F2B8FB8;
    case 0x7F2B8FBCu: goto label_7F2B8FBC;
    case 0x7F2B8FC0u: goto label_7F2B8FC0;
    case 0x7F2B8FC4u: goto label_7F2B8FC4;
    case 0x7F2B8FC8u: goto label_7F2B8FC8;
    case 0x7F2B8FCCu: goto label_7F2B8FCC;
    case 0x7F2B8FD0u: goto label_7F2B8FD0;
    case 0x7F2B8FD4u: goto label_7F2B8FD4;
    case 0x7F2B8FD8u: goto label_7F2B8FD8;
    case 0x7F2B8FDCu: goto label_7F2B8FDC;
    case 0x7F2B8FE0u: goto label_7F2B8FE0;
    case 0x7F2B8FE4u: goto label_7F2B8FE4;
    case 0x7F2B8FE8u: goto label_7F2B8FE8;
    case 0x7F2B8FECu: goto label_7F2B8FEC;
    case 0x7F2B8FF0u: goto label_7F2B8FF0;
    case 0x7F2B8FF4u: goto label_7F2B8FF4;
    case 0x7F2B8FF8u: goto label_7F2B8FF8;
    case 0x7F2B8FFCu: goto label_7F2B8FFC;
    case 0x7F2B9000u: goto label_7F2B9000;
    case 0x7F2B9004u: goto label_7F2B9004;
    case 0x7F2B9008u: goto label_7F2B9008;
    case 0x7F2B900Cu: goto label_7F2B900C;
    case 0x7F2B9010u: goto label_7F2B9010;
    case 0x7F2B9014u: goto label_7F2B9014;
    case 0x7F2B9018u: goto label_7F2B9018;
    case 0x7F2B901Cu: goto label_7F2B901C;
    case 0x7F2B9020u: goto label_7F2B9020;
    case 0x7F2B9024u: goto label_7F2B9024;
    case 0x7F2B9028u: goto label_7F2B9028;
    case 0x7F2B902Cu: goto label_7F2B902C;
    case 0x7F2B9030u: goto label_7F2B9030;
    case 0x7F2B9034u: goto label_7F2B9034;
    case 0x7F2B9038u: goto label_7F2B9038;
    case 0x7F2B903Cu: goto label_7F2B903C;
    case 0x7F2B9040u: goto label_7F2B9040;
    case 0x7F2B9044u: goto label_7F2B9044;
    case 0x7F2B9048u: goto label_7F2B9048;
    case 0x7F2B904Cu: goto label_7F2B904C;
    case 0x7F2B9050u: goto label_7F2B9050;
    case 0x7F2B9054u: goto label_7F2B9054;
    case 0x7F2B9058u: goto label_7F2B9058;
    case 0x7F2B905Cu: goto label_7F2B905C;
    case 0x7F2B9060u: goto label_7F2B9060;
    case 0x7F2B9064u: goto label_7F2B9064;
    case 0x7F2B9068u: goto label_7F2B9068;
    case 0x7F2B906Cu: goto label_7F2B906C;
    case 0x7F2B9070u: goto label_7F2B9070;
    case 0x7F2B9074u: goto label_7F2B9074;
    case 0x7F2B9078u: goto label_7F2B9078;
    case 0x7F2B907Cu: goto label_7F2B907C;
    case 0x7F2B9080u: goto label_7F2B9080;
    case 0x7F2B9084u: goto label_7F2B9084;
    case 0x7F2B9088u: goto label_7F2B9088;
    case 0x7F2B908Cu: goto label_7F2B908C;
    case 0x7F2B9090u: goto label_7F2B9090;
    case 0x7F2B9094u: goto label_7F2B9094;
    case 0x7F2B9098u: goto label_7F2B9098;
    case 0x7F2B909Cu: goto label_7F2B909C;
    case 0x7F2B90A0u: goto label_7F2B90A0;
    case 0x7F2B90A4u: goto label_7F2B90A4;
    case 0x7F2B90A8u: goto label_7F2B90A8;
    case 0x7F2B90ACu: goto label_7F2B90AC;
    case 0x7F2B90B0u: goto label_7F2B90B0;
    case 0x7F2B90B4u: goto label_7F2B90B4;
    case 0x7F2B90B8u: goto label_7F2B90B8;
    case 0x7F2B90BCu: goto label_7F2B90BC;
    case 0x7F2B90C0u: goto label_7F2B90C0;
    case 0x7F2B90C4u: goto label_7F2B90C4;
    case 0x7F2B90C8u: goto label_7F2B90C8;
    case 0x7F2B90CCu: goto label_7F2B90CC;
    case 0x7F2B90D0u: goto label_7F2B90D0;
    case 0x7F2B90D4u: goto label_7F2B90D4;
    case 0x7F2B90D8u: goto label_7F2B90D8;
    case 0x7F2B90DCu: goto label_7F2B90DC;
    case 0x7F2B90E0u: goto label_7F2B90E0;
    case 0x7F2B90E4u: goto label_7F2B90E4;
    case 0x7F2B90E8u: goto label_7F2B90E8;
    case 0x7F2B90ECu: goto label_7F2B90EC;
    case 0x7F2B90F0u: goto label_7F2B90F0;
    case 0x7F2B90F4u: goto label_7F2B90F4;
    case 0x7F2B90F8u: goto label_7F2B90F8;
    case 0x7F2B90FCu: goto label_7F2B90FC;
    case 0x7F2B9100u: goto label_7F2B9100;
    case 0x7F2B9104u: goto label_7F2B9104;
    case 0x7F2B9108u: goto label_7F2B9108;
    case 0x7F2B910Cu: goto label_7F2B910C;
    case 0x7F2B9110u: goto label_7F2B9110;
    case 0x7F2B9114u: goto label_7F2B9114;
    case 0x7F2B9118u: goto label_7F2B9118;
    case 0x7F2B911Cu: goto label_7F2B911C;
    case 0x7F2B9120u: goto label_7F2B9120;
    case 0x7F2B9124u: goto label_7F2B9124;
    case 0x7F2B9128u: goto label_7F2B9128;
    case 0x7F2B912Cu: goto label_7F2B912C;
    case 0x7F2B9130u: goto label_7F2B9130;
    case 0x7F2B9134u: goto label_7F2B9134;
    case 0x7F2B9138u: goto label_7F2B9138;
    case 0x7F2B913Cu: goto label_7F2B913C;
    case 0x7F2B9140u: goto label_7F2B9140;
    case 0x7F2B9144u: goto label_7F2B9144;
    case 0x7F2B9148u: goto label_7F2B9148;
    case 0x7F2B914Cu: goto label_7F2B914C;
    case 0x7F2B9150u: goto label_7F2B9150;
    case 0x7F2B9154u: goto label_7F2B9154;
    case 0x7F2B9158u: goto label_7F2B9158;
    case 0x7F2B915Cu: goto label_7F2B915C;
    case 0x7F2B9160u: goto label_7F2B9160;
    case 0x7F2B9164u: goto label_7F2B9164;
    case 0x7F2B9168u: goto label_7F2B9168;
    case 0x7F2B916Cu: goto label_7F2B916C;
    case 0x7F2B9170u: goto label_7F2B9170;
    case 0x7F2B9174u: goto label_7F2B9174;
    case 0x7F2B9178u: goto label_7F2B9178;
    case 0x7F2B917Cu: goto label_7F2B917C;
    case 0x7F2B9180u: goto label_7F2B9180;
    case 0x7F2B9184u: goto label_7F2B9184;
    case 0x7F2B9188u: goto label_7F2B9188;
    case 0x7F2B918Cu: goto label_7F2B918C;
    case 0x7F2B9190u: goto label_7F2B9190;
    case 0x7F2B9194u: goto label_7F2B9194;
    case 0x7F2B9198u: goto label_7F2B9198;
    case 0x7F2B919Cu: goto label_7F2B919C;
    case 0x7F2B91A0u: goto label_7F2B91A0;
    case 0x7F2B91A4u: goto label_7F2B91A4;
    case 0x7F2B91A8u: goto label_7F2B91A8;
    case 0x7F2B91ACu: goto label_7F2B91AC;
    case 0x7F2B91B0u: goto label_7F2B91B0;
    case 0x7F2B91B4u: goto label_7F2B91B4;
    case 0x7F2B91B8u: goto label_7F2B91B8;
    case 0x7F2B91BCu: goto label_7F2B91BC;
    case 0x7F2B91C0u: goto label_7F2B91C0;
    case 0x7F2B91C4u: goto label_7F2B91C4;
    case 0x7F2B91C8u: goto label_7F2B91C8;
    case 0x7F2B91CCu: goto label_7F2B91CC;
    case 0x7F2B91D0u: goto label_7F2B91D0;
    case 0x7F2B91D4u: goto label_7F2B91D4;
    case 0x7F2B91D8u: goto label_7F2B91D8;
    case 0x7F2B91DCu: goto label_7F2B91DC;
    case 0x7F2B91E0u: goto label_7F2B91E0;
    case 0x7F2B91E4u: goto label_7F2B91E4;
    case 0x7F2B91E8u: goto label_7F2B91E8;
    case 0x7F2B91ECu: goto label_7F2B91EC;
    case 0x7F2B91F0u: goto label_7F2B91F0;
    case 0x7F2B91F4u: goto label_7F2B91F4;
    case 0x7F2B91F8u: goto label_7F2B91F8;
    case 0x7F2B91FCu: goto label_7F2B91FC;
    case 0x7F2B9200u: goto label_7F2B9200;
    case 0x7F2B9204u: goto label_7F2B9204;
    case 0x7F2B9208u: goto label_7F2B9208;
    case 0x7F2B920Cu: goto label_7F2B920C;
    case 0x7F2B9210u: goto label_7F2B9210;
    case 0x7F2B9214u: goto label_7F2B9214;
    case 0x7F2B9218u: goto label_7F2B9218;
    case 0x7F2B921Cu: goto label_7F2B921C;
    case 0x7F2B9220u: goto label_7F2B9220;
    case 0x7F2B9224u: goto label_7F2B9224;
    case 0x7F2B9228u: goto label_7F2B9228;
    case 0x7F2B922Cu: goto label_7F2B922C;
    case 0x7F2B9230u: goto label_7F2B9230;
    case 0x7F2B9234u: goto label_7F2B9234;
    case 0x7F2B9238u: goto label_7F2B9238;
    case 0x7F2B923Cu: goto label_7F2B923C;
    case 0x7F2B9240u: goto label_7F2B9240;
    case 0x7F2B9244u: goto label_7F2B9244;
    case 0x7F2B9248u: goto label_7F2B9248;
    case 0x7F2B924Cu: goto label_7F2B924C;
    case 0x7F2B9250u: goto label_7F2B9250;
    case 0x7F2B9254u: goto label_7F2B9254;
    case 0x7F2B9258u: goto label_7F2B9258;
    case 0x7F2B925Cu: goto label_7F2B925C;
    case 0x7F2B9260u: goto label_7F2B9260;
    case 0x7F2B9264u: goto label_7F2B9264;
    case 0x7F2B9268u: goto label_7F2B9268;
    case 0x7F2B926Cu: goto label_7F2B926C;
    case 0x7F2B9270u: goto label_7F2B9270;
    case 0x7F2B9274u: goto label_7F2B9274;
    case 0x7F2B9278u: goto label_7F2B9278;
    case 0x7F2B927Cu: goto label_7F2B927C;
    case 0x7F2B9280u: goto label_7F2B9280;
    case 0x7F2B9284u: goto label_7F2B9284;
    case 0x7F2B9288u: goto label_7F2B9288;
    case 0x7F2B928Cu: goto label_7F2B928C;
    case 0x7F2B9290u: goto label_7F2B9290;
    case 0x7F2B9294u: goto label_7F2B9294;
    case 0x7F2B9298u: goto label_7F2B9298;
    case 0x7F2B929Cu: goto label_7F2B929C;
    case 0x7F2B92A0u: goto label_7F2B92A0;
    case 0x7F2B92A4u: goto label_7F2B92A4;
    case 0x7F2B92A8u: goto label_7F2B92A8;
    case 0x7F2B92ACu: goto label_7F2B92AC;
    case 0x7F2B92B0u: goto label_7F2B92B0;
    case 0x7F2B92B4u: goto label_7F2B92B4;
    case 0x7F2B92B8u: goto label_7F2B92B8;
    case 0x7F2B92BCu: goto label_7F2B92BC;
    case 0x7F2B92C0u: goto label_7F2B92C0;
    case 0x7F2B92C4u: goto label_7F2B92C4;
    case 0x7F2B92C8u: goto label_7F2B92C8;
    case 0x7F2B92CCu: goto label_7F2B92CC;
    case 0x7F2B92D0u: goto label_7F2B92D0;
    case 0x7F2B92D4u: goto label_7F2B92D4;
    case 0x7F2B92D8u: goto label_7F2B92D8;
    case 0x7F2B92DCu: goto label_7F2B92DC;
    case 0x7F2B92E0u: goto label_7F2B92E0;
    case 0x7F2B92E4u: goto label_7F2B92E4;
    case 0x7F2B92E8u: goto label_7F2B92E8;
    case 0x7F2B92ECu: goto label_7F2B92EC;
    case 0x7F2B92F0u: goto label_7F2B92F0;
    case 0x7F2B92F4u: goto label_7F2B92F4;
    case 0x7F2B92F8u: goto label_7F2B92F8;
    case 0x7F2B92FCu: goto label_7F2B92FC;
    case 0x7F2B9300u: goto label_7F2B9300;
    case 0x7F2B9304u: goto label_7F2B9304;
    case 0x7F2B9308u: goto label_7F2B9308;
    case 0x7F2B930Cu: goto label_7F2B930C;
    case 0x7F2B9310u: goto label_7F2B9310;
    case 0x7F2B9314u: goto label_7F2B9314;
    case 0x7F2B9318u: goto label_7F2B9318;
    case 0x7F2B931Cu: goto label_7F2B931C;
    case 0x7F2B9320u: goto label_7F2B9320;
    case 0x7F2B9324u: goto label_7F2B9324;
    case 0x7F2B9328u: goto label_7F2B9328;
    case 0x7F2B932Cu: goto label_7F2B932C;
    case 0x7F2B9330u: goto label_7F2B9330;
    case 0x7F2B9334u: goto label_7F2B9334;
    case 0x7F2B9338u: goto label_7F2B9338;
    case 0x7F2B933Cu: goto label_7F2B933C;
    case 0x7F2B9340u: goto label_7F2B9340;
    case 0x7F2B9344u: goto label_7F2B9344;
    case 0x7F2B9348u: goto label_7F2B9348;
    case 0x7F2B934Cu: goto label_7F2B934C;
    case 0x7F2B9350u: goto label_7F2B9350;
    case 0x7F2B9354u: goto label_7F2B9354;
    case 0x7F2B9358u: goto label_7F2B9358;
    case 0x7F2B935Cu: goto label_7F2B935C;
    case 0x7F2B9360u: goto label_7F2B9360;
    case 0x7F2B9364u: goto label_7F2B9364;
    case 0x7F2B9368u: goto label_7F2B9368;
    case 0x7F2B936Cu: goto label_7F2B936C;
    case 0x7F2B9370u: goto label_7F2B9370;
    case 0x7F2B9374u: goto label_7F2B9374;
    case 0x7F2B9378u: goto label_7F2B9378;
    case 0x7F2B937Cu: goto label_7F2B937C;
    case 0x7F2B9380u: goto label_7F2B9380;
    case 0x7F2B9384u: goto label_7F2B9384;
    case 0x7F2B9388u: goto label_7F2B9388;
    case 0x7F2B938Cu: goto label_7F2B938C;
    case 0x7F2B9390u: goto label_7F2B9390;
    case 0x7F2B9394u: goto label_7F2B9394;
    case 0x7F2B9398u: goto label_7F2B9398;
    case 0x7F2B939Cu: goto label_7F2B939C;
    case 0x7F2B93A0u: goto label_7F2B93A0;
    case 0x7F2B93A4u: goto label_7F2B93A4;
    case 0x7F2B93A8u: goto label_7F2B93A8;
    case 0x7F2B93ACu: goto label_7F2B93AC;
    case 0x7F2B93B0u: goto label_7F2B93B0;
    case 0x7F2B93B4u: goto label_7F2B93B4;
    case 0x7F2B93B8u: goto label_7F2B93B8;
    case 0x7F2B93BCu: goto label_7F2B93BC;
    case 0x7F2B93C0u: goto label_7F2B93C0;
    case 0x7F2B93C4u: goto label_7F2B93C4;
    case 0x7F2B93C8u: goto label_7F2B93C8;
    case 0x7F2B93CCu: goto label_7F2B93CC;
    case 0x7F2B93D0u: goto label_7F2B93D0;
    case 0x7F2B93D4u: goto label_7F2B93D4;
    case 0x7F2B93D8u: goto label_7F2B93D8;
    case 0x7F2B93DCu: goto label_7F2B93DC;
    case 0x7F2B93E0u: goto label_7F2B93E0;
    case 0x7F2B93E4u: goto label_7F2B93E4;
    case 0x7F2B93E8u: goto label_7F2B93E8;
    case 0x7F2B93ECu: goto label_7F2B93EC;
    case 0x7F2B93F0u: goto label_7F2B93F0;
    case 0x7F2B93F4u: goto label_7F2B93F4;
    case 0x7F2B93F8u: goto label_7F2B93F8;
    case 0x7F2B93FCu: goto label_7F2B93FC;
    case 0x7F2B9400u: goto label_7F2B9400;
    case 0x7F2B9404u: goto label_7F2B9404;
    case 0x7F2B9408u: goto label_7F2B9408;
    case 0x7F2B940Cu: goto label_7F2B940C;
    case 0x7F2B9410u: goto label_7F2B9410;
    case 0x7F2B9414u: goto label_7F2B9414;
    case 0x7F2B9418u: goto label_7F2B9418;
    case 0x7F2B941Cu: goto label_7F2B941C;
    case 0x7F2B9420u: goto label_7F2B9420;
    case 0x7F2B9424u: goto label_7F2B9424;
    case 0x7F2B9428u: goto label_7F2B9428;
    case 0x7F2B942Cu: goto label_7F2B942C;
    case 0x7F2B9430u: goto label_7F2B9430;
    case 0x7F2B9434u: goto label_7F2B9434;
    case 0x7F2B9438u: goto label_7F2B9438;
    case 0x7F2B943Cu: goto label_7F2B943C;
    case 0x7F2B9440u: goto label_7F2B9440;
    case 0x7F2B9444u: goto label_7F2B9444;
    case 0x7F2B9448u: goto label_7F2B9448;
    case 0x7F2B944Cu: goto label_7F2B944C;
    case 0x7F2B9450u: goto label_7F2B9450;
    case 0x7F2B9454u: goto label_7F2B9454;
    case 0x7F2B9458u: goto label_7F2B9458;
    case 0x7F2B945Cu: goto label_7F2B945C;
    case 0x7F2B9460u: goto label_7F2B9460;
    case 0x7F2B9464u: goto label_7F2B9464;
    case 0x7F2B9468u: goto label_7F2B9468;
    case 0x7F2B946Cu: goto label_7F2B946C;
    case 0x7F2B9470u: goto label_7F2B9470;
    case 0x7F2B9474u: goto label_7F2B9474;
    case 0x7F2B9478u: goto label_7F2B9478;
    case 0x7F2B947Cu: goto label_7F2B947C;
    case 0x7F2B9480u: goto label_7F2B9480;
    case 0x7F2B9484u: goto label_7F2B9484;
    case 0x7F2B9488u: goto label_7F2B9488;
    case 0x7F2B948Cu: goto label_7F2B948C;
    case 0x7F2B9490u: goto label_7F2B9490;
    case 0x7F2B9494u: goto label_7F2B9494;
    case 0x7F2B9498u: goto label_7F2B9498;
    case 0x7F2B949Cu: goto label_7F2B949C;
    case 0x7F2B94A0u: goto label_7F2B94A0;
    case 0x7F2B94A4u: goto label_7F2B94A4;
    case 0x7F2B94A8u: goto label_7F2B94A8;
    case 0x7F2B94ACu: goto label_7F2B94AC;
    case 0x7F2B94B0u: goto label_7F2B94B0;
    case 0x7F2B94B4u: goto label_7F2B94B4;
    case 0x7F2B94B8u: goto label_7F2B94B8;
    case 0x7F2B94BCu: goto label_7F2B94BC;
    case 0x7F2B94C0u: goto label_7F2B94C0;
    case 0x7F2B94C4u: goto label_7F2B94C4;
    case 0x7F2B94C8u: goto label_7F2B94C8;
    case 0x7F2B94CCu: goto label_7F2B94CC;
    case 0x7F2B94D0u: goto label_7F2B94D0;
    case 0x7F2B94D4u: goto label_7F2B94D4;
    case 0x7F2B94D8u: goto label_7F2B94D8;
    case 0x7F2B94DCu: goto label_7F2B94DC;
    case 0x7F2B94E0u: goto label_7F2B94E0;
    case 0x7F2B94E4u: goto label_7F2B94E4;
    case 0x7F2B94E8u: goto label_7F2B94E8;
    case 0x7F2B94ECu: goto label_7F2B94EC;
    case 0x7F2B94F0u: goto label_7F2B94F0;
    case 0x7F2B94F4u: goto label_7F2B94F4;
    case 0x7F2B94F8u: goto label_7F2B94F8;
    case 0x7F2B94FCu: goto label_7F2B94FC;
    case 0x7F2B9500u: goto label_7F2B9500;
    case 0x7F2B9504u: goto label_7F2B9504;
    case 0x7F2B9508u: goto label_7F2B9508;
    case 0x7F2B950Cu: goto label_7F2B950C;
    case 0x7F2B9510u: goto label_7F2B9510;
    case 0x7F2B9514u: goto label_7F2B9514;
    case 0x7F2B9518u: goto label_7F2B9518;
    case 0x7F2B951Cu: goto label_7F2B951C;
    case 0x7F2B9520u: goto label_7F2B9520;
    case 0x7F2B9524u: goto label_7F2B9524;
    case 0x7F2B9528u: goto label_7F2B9528;
    case 0x7F2B952Cu: goto label_7F2B952C;
    case 0x7F2B9530u: goto label_7F2B9530;
    case 0x7F2B9534u: goto label_7F2B9534;
    case 0x7F2B9538u: goto label_7F2B9538;
    case 0x7F2B953Cu: goto label_7F2B953C;
    case 0x7F2B9540u: goto label_7F2B9540;
    case 0x7F2B9544u: goto label_7F2B9544;
    case 0x7F2B9548u: goto label_7F2B9548;
    case 0x7F2B954Cu: goto label_7F2B954C;
    case 0x7F2B9550u: goto label_7F2B9550;
    case 0x7F2B9554u: goto label_7F2B9554;
    case 0x7F2B9558u: goto label_7F2B9558;
    case 0x7F2B955Cu: goto label_7F2B955C;
    case 0x7F2B9560u: goto label_7F2B9560;
    case 0x7F2B9564u: goto label_7F2B9564;
    case 0x7F2B9568u: goto label_7F2B9568;
    case 0x7F2B956Cu: goto label_7F2B956C;
    case 0x7F2B9570u: goto label_7F2B9570;
    case 0x7F2B9574u: goto label_7F2B9574;
    case 0x7F2B9578u: goto label_7F2B9578;
    case 0x7F2B957Cu: goto label_7F2B957C;
    case 0x7F2B9580u: goto label_7F2B9580;
    case 0x7F2B9584u: goto label_7F2B9584;
    case 0x7F2B9588u: goto label_7F2B9588;
    case 0x7F2B958Cu: goto label_7F2B958C;
    case 0x7F2B9590u: goto label_7F2B9590;
    case 0x7F2B9594u: goto label_7F2B9594;
    case 0x7F2B9598u: goto label_7F2B9598;
    case 0x7F2B959Cu: goto label_7F2B959C;
    case 0x7F2B95A0u: goto label_7F2B95A0;
    case 0x7F2B95A4u: goto label_7F2B95A4;
    case 0x7F2B95A8u: goto label_7F2B95A8;
    case 0x7F2B95ACu: goto label_7F2B95AC;
    case 0x7F2B95B0u: goto label_7F2B95B0;
    case 0x7F2B95B4u: goto label_7F2B95B4;
    case 0x7F2B95B8u: goto label_7F2B95B8;
    case 0x7F2B95BCu: goto label_7F2B95BC;
    case 0x7F2B95C0u: goto label_7F2B95C0;
    case 0x7F2B95C4u: goto label_7F2B95C4;
    case 0x7F2B95C8u: goto label_7F2B95C8;
    case 0x7F2B95CCu: goto label_7F2B95CC;
    case 0x7F2B95D0u: goto label_7F2B95D0;
    case 0x7F2B95D4u: goto label_7F2B95D4;
    case 0x7F2B95D8u: goto label_7F2B95D8;
    case 0x7F2B95DCu: goto label_7F2B95DC;
    case 0x7F2B95E0u: goto label_7F2B95E0;
    case 0x7F2B95E4u: goto label_7F2B95E4;
    case 0x7F2B95E8u: goto label_7F2B95E8;
    case 0x7F2B95ECu: goto label_7F2B95EC;
    case 0x7F2B95F0u: goto label_7F2B95F0;
    case 0x7F2B95F4u: goto label_7F2B95F4;
    case 0x7F2B95F8u: goto label_7F2B95F8;
    case 0x7F2B95FCu: goto label_7F2B95FC;
    case 0x7F2B9600u: goto label_7F2B9600;
    case 0x7F2B9604u: goto label_7F2B9604;
    case 0x7F2B9608u: goto label_7F2B9608;
    case 0x7F2B960Cu: goto label_7F2B960C;
    case 0x7F2B9610u: goto label_7F2B9610;
    case 0x7F2B9614u: goto label_7F2B9614;
    case 0x7F2B9618u: goto label_7F2B9618;
    case 0x7F2B961Cu: goto label_7F2B961C;
    case 0x7F2B9620u: goto label_7F2B9620;
    case 0x7F2B9624u: goto label_7F2B9624;
    case 0x7F2B9628u: goto label_7F2B9628;
    case 0x7F2B962Cu: goto label_7F2B962C;
    case 0x7F2B9630u: goto label_7F2B9630;
    case 0x7F2B9634u: goto label_7F2B9634;
    case 0x7F2B9638u: goto label_7F2B9638;
    case 0x7F2B963Cu: goto label_7F2B963C;
    case 0x7F2B9640u: goto label_7F2B9640;
    case 0x7F2B9644u: goto label_7F2B9644;
    case 0x7F2B9648u: goto label_7F2B9648;
    case 0x7F2B964Cu: goto label_7F2B964C;
    case 0x7F2B9650u: goto label_7F2B9650;
    case 0x7F2B9654u: goto label_7F2B9654;
    case 0x7F2B9658u: goto label_7F2B9658;
    case 0x7F2B965Cu: goto label_7F2B965C;
    case 0x7F2B9660u: goto label_7F2B9660;
    case 0x7F2B9664u: goto label_7F2B9664;
    case 0x7F2B9668u: goto label_7F2B9668;
    case 0x7F2B966Cu: goto label_7F2B966C;
    case 0x7F2B9670u: goto label_7F2B9670;
    case 0x7F2B9674u: goto label_7F2B9674;
    case 0x7F2B9678u: goto label_7F2B9678;
    case 0x7F2B967Cu: goto label_7F2B967C;
    case 0x7F2B9680u: goto label_7F2B9680;
    case 0x7F2B9684u: goto label_7F2B9684;
    case 0x7F2B9688u: goto label_7F2B9688;
    case 0x7F2B968Cu: goto label_7F2B968C;
    case 0x7F2B9690u: goto label_7F2B9690;
    case 0x7F2B9694u: goto label_7F2B9694;
    case 0x7F2B9698u: goto label_7F2B9698;
    case 0x7F2B969Cu: goto label_7F2B969C;
    case 0x7F2B96A0u: goto label_7F2B96A0;
    case 0x7F2B96A4u: goto label_7F2B96A4;
    case 0x7F2B96A8u: goto label_7F2B96A8;
    case 0x7F2B96ACu: goto label_7F2B96AC;
    case 0x7F2B96B0u: goto label_7F2B96B0;
    case 0x7F2B96B4u: goto label_7F2B96B4;
    case 0x7F2B96B8u: goto label_7F2B96B8;
    case 0x7F2B96BCu: goto label_7F2B96BC;
    case 0x7F2B96C0u: goto label_7F2B96C0;
    case 0x7F2B96C4u: goto label_7F2B96C4;
    case 0x7F2B96C8u: goto label_7F2B96C8;
    case 0x7F2B96CCu: goto label_7F2B96CC;
    case 0x7F2B96D0u: goto label_7F2B96D0;
    case 0x7F2B96D4u: goto label_7F2B96D4;
    case 0x7F2B96D8u: goto label_7F2B96D8;
    case 0x7F2B96DCu: goto label_7F2B96DC;
    case 0x7F2B96E0u: goto label_7F2B96E0;
    case 0x7F2B96E4u: goto label_7F2B96E4;
    case 0x7F2B96E8u: goto label_7F2B96E8;
    case 0x7F2B96ECu: goto label_7F2B96EC;
    case 0x7F2B96F0u: goto label_7F2B96F0;
    case 0x7F2B96F4u: goto label_7F2B96F4;
    case 0x7F2B96F8u: goto label_7F2B96F8;
    case 0x7F2B96FCu: goto label_7F2B96FC;
    case 0x7F2B9700u: goto label_7F2B9700;
    case 0x7F2B9704u: goto label_7F2B9704;
    case 0x7F2B9708u: goto label_7F2B9708;
    case 0x7F2B970Cu: goto label_7F2B970C;
    case 0x7F2B9710u: goto label_7F2B9710;
    case 0x7F2B9714u: goto label_7F2B9714;
    case 0x7F2B9718u: goto label_7F2B9718;
    case 0x7F2B971Cu: goto label_7F2B971C;
    case 0x7F2B9720u: goto label_7F2B9720;
    case 0x7F2B9724u: goto label_7F2B9724;
    case 0x7F2B9728u: goto label_7F2B9728;
    case 0x7F2B972Cu: goto label_7F2B972C;
    case 0x7F2B9730u: goto label_7F2B9730;
    case 0x7F2B9734u: goto label_7F2B9734;
    case 0x7F2B9738u: goto label_7F2B9738;
    case 0x7F2B973Cu: goto label_7F2B973C;
    case 0x7F2B9740u: goto label_7F2B9740;
    case 0x7F2B9744u: goto label_7F2B9744;
    case 0x7F2B9748u: goto label_7F2B9748;
    case 0x7F2B974Cu: goto label_7F2B974C;
    case 0x7F2B9750u: goto label_7F2B9750;
    case 0x7F2B9754u: goto label_7F2B9754;
    case 0x7F2B9758u: goto label_7F2B9758;
    case 0x7F2B975Cu: goto label_7F2B975C;
    case 0x7F2B9760u: goto label_7F2B9760;
    case 0x7F2B9764u: goto label_7F2B9764;
    case 0x7F2B9768u: goto label_7F2B9768;
    case 0x7F2B976Cu: goto label_7F2B976C;
    case 0x7F2B9770u: goto label_7F2B9770;
    case 0x7F2B9774u: goto label_7F2B9774;
    case 0x7F2B9778u: goto label_7F2B9778;
    case 0x7F2B977Cu: goto label_7F2B977C;
    case 0x7F2B9780u: goto label_7F2B9780;
    case 0x7F2B9784u: goto label_7F2B9784;
    case 0x7F2B9788u: goto label_7F2B9788;
    case 0x7F2B978Cu: goto label_7F2B978C;
    case 0x7F2B9790u: goto label_7F2B9790;
    case 0x7F2B9794u: goto label_7F2B9794;
    case 0x7F2B9798u: goto label_7F2B9798;
    case 0x7F2B979Cu: goto label_7F2B979C;
    case 0x7F2B97A0u: goto label_7F2B97A0;
    case 0x7F2B97A4u: goto label_7F2B97A4;
    case 0x7F2B97A8u: goto label_7F2B97A8;
    case 0x7F2B97ACu: goto label_7F2B97AC;
    case 0x7F2B97B0u: goto label_7F2B97B0;
    case 0x7F2B97B4u: goto label_7F2B97B4;
    case 0x7F2B97B8u: goto label_7F2B97B8;
    case 0x7F2B97BCu: goto label_7F2B97BC;
    case 0x7F2B97C0u: goto label_7F2B97C0;
    case 0x7F2B97C4u: goto label_7F2B97C4;
    case 0x7F2B97C8u: goto label_7F2B97C8;
    case 0x7F2B97CCu: goto label_7F2B97CC;
    case 0x7F2B97D0u: goto label_7F2B97D0;
    case 0x7F2B97D4u: goto label_7F2B97D4;
    case 0x7F2B97D8u: goto label_7F2B97D8;
    case 0x7F2B97DCu: goto label_7F2B97DC;
    case 0x7F2B97E0u: goto label_7F2B97E0;
    case 0x7F2B97E4u: goto label_7F2B97E4;
    case 0x7F2B97E8u: goto label_7F2B97E8;
    case 0x7F2B97ECu: goto label_7F2B97EC;
    case 0x7F2B97F0u: goto label_7F2B97F0;
    case 0x7F2B97F4u: goto label_7F2B97F4;
    case 0x7F2B97F8u: goto label_7F2B97F8;
    case 0x7F2B97FCu: goto label_7F2B97FC;
    case 0x7F2B9800u: goto label_7F2B9800;
    case 0x7F2B9804u: goto label_7F2B9804;
    case 0x7F2B9808u: goto label_7F2B9808;
    case 0x7F2B980Cu: goto label_7F2B980C;
    case 0x7F2B9810u: goto label_7F2B9810;
    case 0x7F2B9814u: goto label_7F2B9814;
    case 0x7F2B9818u: goto label_7F2B9818;
    case 0x7F2B981Cu: goto label_7F2B981C;
    case 0x7F2B9820u: goto label_7F2B9820;
    case 0x7F2B9824u: goto label_7F2B9824;
    case 0x7F2B9828u: goto label_7F2B9828;
    case 0x7F2B982Cu: goto label_7F2B982C;
    case 0x7F2B9830u: goto label_7F2B9830;
    case 0x7F2B9834u: goto label_7F2B9834;
    case 0x7F2B9838u: goto label_7F2B9838;
    case 0x7F2B983Cu: goto label_7F2B983C;
    case 0x7F2B9840u: goto label_7F2B9840;
    case 0x7F2B9844u: goto label_7F2B9844;
    case 0x7F2B9848u: goto label_7F2B9848;
    case 0x7F2B984Cu: goto label_7F2B984C;
    case 0x7F2B9850u: goto label_7F2B9850;
    case 0x7F2B9854u: goto label_7F2B9854;
    case 0x7F2B9858u: goto label_7F2B9858;
    case 0x7F2B985Cu: goto label_7F2B985C;
    case 0x7F2B9860u: goto label_7F2B9860;
    case 0x7F2B9864u: goto label_7F2B9864;
    case 0x7F2B9868u: goto label_7F2B9868;
    case 0x7F2B986Cu: goto label_7F2B986C;
    case 0x7F2B9870u: goto label_7F2B9870;
    case 0x7F2B9874u: goto label_7F2B9874;
    case 0x7F2B9878u: goto label_7F2B9878;
    case 0x7F2B987Cu: goto label_7F2B987C;
    case 0x7F2B9880u: goto label_7F2B9880;
    case 0x7F2B9884u: goto label_7F2B9884;
    case 0x7F2B9888u: goto label_7F2B9888;
    case 0x7F2B988Cu: goto label_7F2B988C;
    case 0x7F2B9890u: goto label_7F2B9890;
    case 0x7F2B9894u: goto label_7F2B9894;
    case 0x7F2B9898u: goto label_7F2B9898;
    case 0x7F2B989Cu: goto label_7F2B989C;
    case 0x7F2B98A0u: goto label_7F2B98A0;
    case 0x7F2B98A4u: goto label_7F2B98A4;
    case 0x7F2B98A8u: goto label_7F2B98A8;
    case 0x7F2B98ACu: goto label_7F2B98AC;
    case 0x7F2B98B0u: goto label_7F2B98B0;
    case 0x7F2B98B4u: goto label_7F2B98B4;
    case 0x7F2B98B8u: goto label_7F2B98B8;
    case 0x7F2B98BCu: goto label_7F2B98BC;
    case 0x7F2B98C0u: goto label_7F2B98C0;
    case 0x7F2B98C4u: goto label_7F2B98C4;
    case 0x7F2B98C8u: goto label_7F2B98C8;
    case 0x7F2B98CCu: goto label_7F2B98CC;
    case 0x7F2B98D0u: goto label_7F2B98D0;
    case 0x7F2B98D4u: goto label_7F2B98D4;
    case 0x7F2B98D8u: goto label_7F2B98D8;
    case 0x7F2B98DCu: goto label_7F2B98DC;
    case 0x7F2B98E0u: goto label_7F2B98E0;
    case 0x7F2B98E4u: goto label_7F2B98E4;
    case 0x7F2B98E8u: goto label_7F2B98E8;
    case 0x7F2B98ECu: goto label_7F2B98EC;
    case 0x7F2B98F0u: goto label_7F2B98F0;
    case 0x7F2B98F4u: goto label_7F2B98F4;
    case 0x7F2B98F8u: goto label_7F2B98F8;
    case 0x7F2B98FCu: goto label_7F2B98FC;
    case 0x7F2B9900u: goto label_7F2B9900;
    case 0x7F2B9904u: goto label_7F2B9904;
    case 0x7F2B9908u: goto label_7F2B9908;
    case 0x7F2B990Cu: goto label_7F2B990C;
    case 0x7F2B9910u: goto label_7F2B9910;
    case 0x7F2B9914u: goto label_7F2B9914;
    case 0x7F2B9918u: goto label_7F2B9918;
    case 0x7F2B991Cu: goto label_7F2B991C;
    case 0x7F2B9920u: goto label_7F2B9920;
    case 0x7F2B9924u: goto label_7F2B9924;
    case 0x7F2B9928u: goto label_7F2B9928;
    case 0x7F2B992Cu: goto label_7F2B992C;
    case 0x7F2B9930u: goto label_7F2B9930;
    case 0x7F2B9934u: goto label_7F2B9934;
    case 0x7F2B9938u: goto label_7F2B9938;
    case 0x7F2B993Cu: goto label_7F2B993C;
    case 0x7F2B9940u: goto label_7F2B9940;
    case 0x7F2B9944u: goto label_7F2B9944;
    case 0x7F2B9948u: goto label_7F2B9948;
    case 0x7F2B994Cu: goto label_7F2B994C;
    case 0x7F2B9950u: goto label_7F2B9950;
    case 0x7F2B9954u: goto label_7F2B9954;
    case 0x7F2B9958u: goto label_7F2B9958;
    case 0x7F2B995Cu: goto label_7F2B995C;
    case 0x7F2B9960u: goto label_7F2B9960;
    case 0x7F2B9964u: goto label_7F2B9964;
    case 0x7F2B9968u: goto label_7F2B9968;
    case 0x7F2B996Cu: goto label_7F2B996C;
    case 0x7F2B9970u: goto label_7F2B9970;
    case 0x7F2B9974u: goto label_7F2B9974;
    case 0x7F2B9978u: goto label_7F2B9978;
    case 0x7F2B997Cu: goto label_7F2B997C;
    case 0x7F2B9980u: goto label_7F2B9980;
    case 0x7F2B9984u: goto label_7F2B9984;
    case 0x7F2B9988u: goto label_7F2B9988;
    case 0x7F2B998Cu: goto label_7F2B998C;
    case 0x7F2B9990u: goto label_7F2B9990;
    case 0x7F2B9994u: goto label_7F2B9994;
    case 0x7F2B9998u: goto label_7F2B9998;
    case 0x7F2B999Cu: goto label_7F2B999C;
    case 0x7F2B99A0u: goto label_7F2B99A0;
    case 0x7F2B99A4u: goto label_7F2B99A4;
    case 0x7F2B99A8u: goto label_7F2B99A8;
    case 0x7F2B99ACu: goto label_7F2B99AC;
    case 0x7F2B99B0u: goto label_7F2B99B0;
    case 0x7F2B99B4u: goto label_7F2B99B4;
    case 0x7F2B99B8u: goto label_7F2B99B8;
    case 0x7F2B99BCu: goto label_7F2B99BC;
    case 0x7F2B99C0u: goto label_7F2B99C0;
    case 0x7F2B99C4u: goto label_7F2B99C4;
    case 0x7F2B99C8u: goto label_7F2B99C8;
    case 0x7F2B99CCu: goto label_7F2B99CC;
    case 0x7F2B99D0u: goto label_7F2B99D0;
    case 0x7F2B99D4u: goto label_7F2B99D4;
    case 0x7F2B99D8u: goto label_7F2B99D8;
    case 0x7F2B99DCu: goto label_7F2B99DC;
    case 0x7F2B99E0u: goto label_7F2B99E0;
    case 0x7F2B99E4u: goto label_7F2B99E4;
    case 0x7F2B99E8u: goto label_7F2B99E8;
    case 0x7F2B99ECu: goto label_7F2B99EC;
    case 0x7F2B99F0u: goto label_7F2B99F0;
    case 0x7F2B99F4u: goto label_7F2B99F4;
    case 0x7F2B99F8u: goto label_7F2B99F8;
    case 0x7F2B99FCu: goto label_7F2B99FC;
    case 0x7F2B9A00u: goto label_7F2B9A00;
    case 0x7F2B9A04u: goto label_7F2B9A04;
    case 0x7F2B9A08u: goto label_7F2B9A08;
    case 0x7F2B9A0Cu: goto label_7F2B9A0C;
    case 0x7F2B9A10u: goto label_7F2B9A10;
    case 0x7F2B9A14u: goto label_7F2B9A14;
    case 0x7F2B9A18u: goto label_7F2B9A18;
    case 0x7F2B9A1Cu: goto label_7F2B9A1C;
    case 0x7F2B9A20u: goto label_7F2B9A20;
    case 0x7F2B9A24u: goto label_7F2B9A24;
    case 0x7F2B9A28u: goto label_7F2B9A28;
    case 0x7F2B9A2Cu: goto label_7F2B9A2C;
    case 0x7F2B9A30u: goto label_7F2B9A30;
    case 0x7F2B9A34u: goto label_7F2B9A34;
    case 0x7F2B9A38u: goto label_7F2B9A38;
    case 0x7F2B9A3Cu: goto label_7F2B9A3C;
    case 0x7F2B9A40u: goto label_7F2B9A40;
    case 0x7F2B9A44u: goto label_7F2B9A44;
    case 0x7F2B9A48u: goto label_7F2B9A48;
    case 0x7F2B9A4Cu: goto label_7F2B9A4C;
    case 0x7F2B9A50u: goto label_7F2B9A50;
    case 0x7F2B9A54u: goto label_7F2B9A54;
    case 0x7F2B9A58u: goto label_7F2B9A58;
    case 0x7F2B9A5Cu: goto label_7F2B9A5C;
    case 0x7F2B9A60u: goto label_7F2B9A60;
    case 0x7F2B9A64u: goto label_7F2B9A64;
    case 0x7F2B9A68u: goto label_7F2B9A68;
    case 0x7F2B9A6Cu: goto label_7F2B9A6C;
    case 0x7F2B9A70u: goto label_7F2B9A70;
    case 0x7F2B9A74u: goto label_7F2B9A74;
    case 0x7F2B9A78u: goto label_7F2B9A78;
    case 0x7F2B9A7Cu: goto label_7F2B9A7C;
    case 0x7F2B9A80u: goto label_7F2B9A80;
    case 0x7F2B9A84u: goto label_7F2B9A84;
    case 0x7F2B9A88u: goto label_7F2B9A88;
    case 0x7F2B9A8Cu: goto label_7F2B9A8C;
    case 0x7F2B9A90u: goto label_7F2B9A90;
    case 0x7F2B9A94u: goto label_7F2B9A94;
    case 0x7F2B9A98u: goto label_7F2B9A98;
    case 0x7F2B9A9Cu: goto label_7F2B9A9C;
    case 0x7F2B9AA0u: goto label_7F2B9AA0;
    case 0x7F2B9AA4u: goto label_7F2B9AA4;
    case 0x7F2B9AA8u: goto label_7F2B9AA8;
    case 0x7F2B9AACu: goto label_7F2B9AAC;
    case 0x7F2B9AB0u: goto label_7F2B9AB0;
    case 0x7F2B9AB4u: goto label_7F2B9AB4;
    case 0x7F2B9AB8u: goto label_7F2B9AB8;
    case 0x7F2B9ABCu: goto label_7F2B9ABC;
    case 0x7F2B9AC0u: goto label_7F2B9AC0;
    case 0x7F2B9AC4u: goto label_7F2B9AC4;
    case 0x7F2B9AC8u: goto label_7F2B9AC8;
    case 0x7F2B9ACCu: goto label_7F2B9ACC;
    case 0x7F2B9AD0u: goto label_7F2B9AD0;
    case 0x7F2B9AD4u: goto label_7F2B9AD4;
    case 0x7F2B9AD8u: goto label_7F2B9AD8;
    case 0x7F2B9ADCu: goto label_7F2B9ADC;
    case 0x7F2B9AE0u: goto label_7F2B9AE0;
    case 0x7F2B9AE4u: goto label_7F2B9AE4;
    case 0x7F2B9AE8u: goto label_7F2B9AE8;
    case 0x7F2B9AECu: goto label_7F2B9AEC;
    case 0x7F2B9AF0u: goto label_7F2B9AF0;
    case 0x7F2B9AF4u: goto label_7F2B9AF4;
    case 0x7F2B9AF8u: goto label_7F2B9AF8;
    case 0x7F2B9AFCu: goto label_7F2B9AFC;
    case 0x7F2B9B00u: goto label_7F2B9B00;
    case 0x7F2B9B04u: goto label_7F2B9B04;
    case 0x7F2B9B08u: goto label_7F2B9B08;
    case 0x7F2B9B0Cu: goto label_7F2B9B0C;
    case 0x7F2B9B10u: goto label_7F2B9B10;
    case 0x7F2B9B14u: goto label_7F2B9B14;
    case 0x7F2B9B18u: goto label_7F2B9B18;
    case 0x7F2B9B1Cu: goto label_7F2B9B1C;
    case 0x7F2B9B20u: goto label_7F2B9B20;
    case 0x7F2B9B24u: goto label_7F2B9B24;
    case 0x7F2B9B28u: goto label_7F2B9B28;
    case 0x7F2B9B2Cu: goto label_7F2B9B2C;
    case 0x7F2B9B30u: goto label_7F2B9B30;
    case 0x7F2B9B34u: goto label_7F2B9B34;
    case 0x7F2B9B38u: goto label_7F2B9B38;
    case 0x7F2B9B3Cu: goto label_7F2B9B3C;
    case 0x7F2B9B40u: goto label_7F2B9B40;
    case 0x7F2B9B44u: goto label_7F2B9B44;
    case 0x7F2B9B48u: goto label_7F2B9B48;
    case 0x7F2B9B4Cu: goto label_7F2B9B4C;
    case 0x7F2B9B50u: goto label_7F2B9B50;
    case 0x7F2B9B54u: goto label_7F2B9B54;
    case 0x7F2B9B58u: goto label_7F2B9B58;
    case 0x7F2B9B5Cu: goto label_7F2B9B5C;
    case 0x7F2B9B60u: goto label_7F2B9B60;
    case 0x7F2B9B64u: goto label_7F2B9B64;
    case 0x7F2B9B68u: goto label_7F2B9B68;
    case 0x7F2B9B6Cu: goto label_7F2B9B6C;
    case 0x7F2B9B70u: goto label_7F2B9B70;
    case 0x7F2B9B74u: goto label_7F2B9B74;
    case 0x7F2B9B78u: goto label_7F2B9B78;
    case 0x7F2B9B7Cu: goto label_7F2B9B7C;
    case 0x7F2B9B80u: goto label_7F2B9B80;
    case 0x7F2B9B84u: goto label_7F2B9B84;
    case 0x7F2B9B88u: goto label_7F2B9B88;
    case 0x7F2B9B8Cu: goto label_7F2B9B8C;
    case 0x7F2B9B90u: goto label_7F2B9B90;
    case 0x7F2B9B94u: goto label_7F2B9B94;
    case 0x7F2B9B98u: goto label_7F2B9B98;
    case 0x7F2B9B9Cu: goto label_7F2B9B9C;
    case 0x7F2B9BA0u: goto label_7F2B9BA0;
    case 0x7F2B9BA4u: goto label_7F2B9BA4;
    case 0x7F2B9BA8u: goto label_7F2B9BA8;
    case 0x7F2B9BACu: goto label_7F2B9BAC;
    case 0x7F2B9BB0u: goto label_7F2B9BB0;
    case 0x7F2B9BB4u: goto label_7F2B9BB4;
    case 0x7F2B9BB8u: goto label_7F2B9BB8;
    case 0x7F2B9BBCu: goto label_7F2B9BBC;
    case 0x7F2B9BC0u: goto label_7F2B9BC0;
    case 0x7F2B9BC4u: goto label_7F2B9BC4;
    case 0x7F2B9BC8u: goto label_7F2B9BC8;
    case 0x7F2B9BCCu: goto label_7F2B9BCC;
    case 0x7F2B9BD0u: goto label_7F2B9BD0;
    case 0x7F2B9BD4u: goto label_7F2B9BD4;
    case 0x7F2B9BD8u: goto label_7F2B9BD8;
    case 0x7F2B9BDCu: goto label_7F2B9BDC;
    case 0x7F2B9BE0u: goto label_7F2B9BE0;
    case 0x7F2B9BE4u: goto label_7F2B9BE4;
    case 0x7F2B9BE8u: goto label_7F2B9BE8;
    case 0x7F2B9BECu: goto label_7F2B9BEC;
    case 0x7F2B9BF0u: goto label_7F2B9BF0;
    case 0x7F2B9BF4u: goto label_7F2B9BF4;
    case 0x7F2B9BF8u: goto label_7F2B9BF8;
    case 0x7F2B9BFCu: goto label_7F2B9BFC;
    case 0x7F2B9C00u: goto label_7F2B9C00;
    case 0x7F2B9C04u: goto label_7F2B9C04;
    case 0x7F2B9C08u: goto label_7F2B9C08;
    case 0x7F2B9C0Cu: goto label_7F2B9C0C;
    case 0x7F2B9C10u: goto label_7F2B9C10;
    case 0x7F2B9C14u: goto label_7F2B9C14;
    case 0x7F2B9C18u: goto label_7F2B9C18;
    case 0x7F2B9C1Cu: goto label_7F2B9C1C;
    case 0x7F2B9C20u: goto label_7F2B9C20;
    case 0x7F2B9C24u: goto label_7F2B9C24;
    case 0x7F2B9C28u: goto label_7F2B9C28;
    case 0x7F2B9C2Cu: goto label_7F2B9C2C;
    case 0x7F2B9C30u: goto label_7F2B9C30;
    case 0x7F2B9C34u: goto label_7F2B9C34;
    case 0x7F2B9C38u: goto label_7F2B9C38;
    case 0x7F2B9C3Cu: goto label_7F2B9C3C;
    case 0x7F2B9C40u: goto label_7F2B9C40;
    case 0x7F2B9C44u: goto label_7F2B9C44;
    case 0x7F2B9C48u: goto label_7F2B9C48;
    case 0x7F2B9C4Cu: goto label_7F2B9C4C;
    case 0x7F2B9C50u: goto label_7F2B9C50;
    case 0x7F2B9C54u: goto label_7F2B9C54;
    case 0x7F2B9C58u: goto label_7F2B9C58;
    case 0x7F2B9C5Cu: goto label_7F2B9C5C;
    case 0x7F2B9C60u: goto label_7F2B9C60;
    case 0x7F2B9C64u: goto label_7F2B9C64;
    case 0x7F2B9C68u: goto label_7F2B9C68;
    case 0x7F2B9C6Cu: goto label_7F2B9C6C;
    case 0x7F2B9C70u: goto label_7F2B9C70;
    case 0x7F2B9C74u: goto label_7F2B9C74;
    case 0x7F2B9C78u: goto label_7F2B9C78;
    case 0x7F2B9C7Cu: goto label_7F2B9C7C;
    case 0x7F2B9C80u: goto label_7F2B9C80;
    case 0x7F2B9C84u: goto label_7F2B9C84;
    case 0x7F2B9C88u: goto label_7F2B9C88;
    case 0x7F2B9C8Cu: goto label_7F2B9C8C;
    case 0x7F2B9C90u: goto label_7F2B9C90;
    case 0x7F2B9C94u: goto label_7F2B9C94;
    case 0x7F2B9C98u: goto label_7F2B9C98;
    case 0x7F2B9C9Cu: goto label_7F2B9C9C;
    case 0x7F2B9CA0u: goto label_7F2B9CA0;
    case 0x7F2B9CA4u: goto label_7F2B9CA4;
    case 0x7F2B9CA8u: goto label_7F2B9CA8;
    case 0x7F2B9CACu: goto label_7F2B9CAC;
    case 0x7F2B9CB0u: goto label_7F2B9CB0;
    case 0x7F2B9CB4u: goto label_7F2B9CB4;
    case 0x7F2B9CB8u: goto label_7F2B9CB8;
    case 0x7F2B9CBCu: goto label_7F2B9CBC;
    case 0x7F2B9CC0u: goto label_7F2B9CC0;
    case 0x7F2B9CC4u: goto label_7F2B9CC4;
    case 0x7F2B9CC8u: goto label_7F2B9CC8;
    case 0x7F2B9CCCu: goto label_7F2B9CCC;
    case 0x7F2B9CD0u: goto label_7F2B9CD0;
    case 0x7F2B9CD4u: goto label_7F2B9CD4;
    case 0x7F2B9CD8u: goto label_7F2B9CD8;
    case 0x7F2B9CDCu: goto label_7F2B9CDC;
    case 0x7F2B9CE0u: goto label_7F2B9CE0;
    case 0x7F2B9CE4u: goto label_7F2B9CE4;
    case 0x7F2B9CE8u: goto label_7F2B9CE8;
    case 0x7F2B9CECu: goto label_7F2B9CEC;
    case 0x7F2B9CF0u: goto label_7F2B9CF0;
    case 0x7F2B9CF4u: goto label_7F2B9CF4;
    case 0x7F2B9CF8u: goto label_7F2B9CF8;
    case 0x7F2B9CFCu: goto label_7F2B9CFC;
    case 0x7F2B9D00u: goto label_7F2B9D00;
    case 0x7F2B9D04u: goto label_7F2B9D04;
    case 0x7F2B9D08u: goto label_7F2B9D08;
    case 0x7F2B9D0Cu: goto label_7F2B9D0C;
    case 0x7F2B9D10u: goto label_7F2B9D10;
    case 0x7F2B9D14u: goto label_7F2B9D14;
    case 0x7F2B9D18u: goto label_7F2B9D18;
    case 0x7F2B9D1Cu: goto label_7F2B9D1C;
    case 0x7F2B9D20u: goto label_7F2B9D20;
    case 0x7F2B9D24u: goto label_7F2B9D24;
    case 0x7F2B9D28u: goto label_7F2B9D28;
    case 0x7F2B9D2Cu: goto label_7F2B9D2C;
    case 0x7F2B9D30u: goto label_7F2B9D30;
    case 0x7F2B9D34u: goto label_7F2B9D34;
    case 0x7F2B9D38u: goto label_7F2B9D38;
    case 0x7F2B9D3Cu: goto label_7F2B9D3C;
    case 0x7F2B9D40u: goto label_7F2B9D40;
    case 0x7F2B9D44u: goto label_7F2B9D44;
    case 0x7F2B9D48u: goto label_7F2B9D48;
    case 0x7F2B9D4Cu: goto label_7F2B9D4C;
    case 0x7F2B9D50u: goto label_7F2B9D50;
    case 0x7F2B9D54u: goto label_7F2B9D54;
    case 0x7F2B9D58u: goto label_7F2B9D58;
    case 0x7F2B9D5Cu: goto label_7F2B9D5C;
    case 0x7F2B9D60u: goto label_7F2B9D60;
    case 0x7F2B9D64u: goto label_7F2B9D64;
    case 0x7F2B9D68u: goto label_7F2B9D68;
    case 0x7F2B9D6Cu: goto label_7F2B9D6C;
    case 0x7F2B9D70u: goto label_7F2B9D70;
    case 0x7F2B9D74u: goto label_7F2B9D74;
    case 0x7F2B9D78u: goto label_7F2B9D78;
    case 0x7F2B9D7Cu: goto label_7F2B9D7C;
    case 0x7F2B9D80u: goto label_7F2B9D80;
    case 0x7F2B9D84u: goto label_7F2B9D84;
    case 0x7F2B9D88u: goto label_7F2B9D88;
    case 0x7F2B9D8Cu: goto label_7F2B9D8C;
    case 0x7F2B9D90u: goto label_7F2B9D90;
    case 0x7F2B9D94u: goto label_7F2B9D94;
    case 0x7F2B9D98u: goto label_7F2B9D98;
    case 0x7F2B9D9Cu: goto label_7F2B9D9C;
    case 0x7F2B9DA0u: goto label_7F2B9DA0;
    case 0x7F2B9DA4u: goto label_7F2B9DA4;
    case 0x7F2B9DA8u: goto label_7F2B9DA8;
    case 0x7F2B9DACu: goto label_7F2B9DAC;
    case 0x7F2B9DB0u: goto label_7F2B9DB0;
    case 0x7F2B9DB4u: goto label_7F2B9DB4;
    case 0x7F2B9DB8u: goto label_7F2B9DB8;
    case 0x7F2B9DBCu: goto label_7F2B9DBC;
    case 0x7F2B9DC0u: goto label_7F2B9DC0;
    case 0x7F2B9DC4u: goto label_7F2B9DC4;
    case 0x7F2B9DC8u: goto label_7F2B9DC8;
    case 0x7F2B9DCCu: goto label_7F2B9DCC;
    case 0x7F2B9DD0u: goto label_7F2B9DD0;
    case 0x7F2B9DD4u: goto label_7F2B9DD4;
    case 0x7F2B9DD8u: goto label_7F2B9DD8;
    case 0x7F2B9DDCu: goto label_7F2B9DDC;
    case 0x7F2B9DE0u: goto label_7F2B9DE0;
    case 0x7F2B9DE4u: goto label_7F2B9DE4;
    case 0x7F2B9DE8u: goto label_7F2B9DE8;
    case 0x7F2B9DECu: goto label_7F2B9DEC;
    case 0x7F2B9DF0u: goto label_7F2B9DF0;
    case 0x7F2B9DF4u: goto label_7F2B9DF4;
    case 0x7F2B9DF8u: goto label_7F2B9DF8;
    case 0x7F2B9DFCu: goto label_7F2B9DFC;
    case 0x7F2B9E00u: goto label_7F2B9E00;
    case 0x7F2B9E04u: goto label_7F2B9E04;
    case 0x7F2B9E08u: goto label_7F2B9E08;
    case 0x7F2B9E0Cu: goto label_7F2B9E0C;
    case 0x7F2B9E10u: goto label_7F2B9E10;
    case 0x7F2B9E14u: goto label_7F2B9E14;
    case 0x7F2B9E18u: goto label_7F2B9E18;
    case 0x7F2B9E1Cu: goto label_7F2B9E1C;
    case 0x7F2B9E20u: goto label_7F2B9E20;
    case 0x7F2B9E24u: goto label_7F2B9E24;
    case 0x7F2B9E28u: goto label_7F2B9E28;
    case 0x7F2B9E2Cu: goto label_7F2B9E2C;
    case 0x7F2B9E30u: goto label_7F2B9E30;
    case 0x7F2B9E34u: goto label_7F2B9E34;
    case 0x7F2B9E38u: goto label_7F2B9E38;
    case 0x7F2B9E3Cu: goto label_7F2B9E3C;
    case 0x7F2B9E40u: goto label_7F2B9E40;
    case 0x7F2B9E44u: goto label_7F2B9E44;
    case 0x7F2B9E48u: goto label_7F2B9E48;
    case 0x7F2B9E4Cu: goto label_7F2B9E4C;
    case 0x7F2B9E50u: goto label_7F2B9E50;
    case 0x7F2B9E54u: goto label_7F2B9E54;
    case 0x7F2B9E58u: goto label_7F2B9E58;
    case 0x7F2B9E5Cu: goto label_7F2B9E5C;
    case 0x7F2B9E60u: goto label_7F2B9E60;
    case 0x7F2B9E64u: goto label_7F2B9E64;
    case 0x7F2B9E68u: goto label_7F2B9E68;
    case 0x7F2B9E6Cu: goto label_7F2B9E6C;
    case 0x7F2B9E70u: goto label_7F2B9E70;
    case 0x7F2B9E74u: goto label_7F2B9E74;
    case 0x7F2B9E78u: goto label_7F2B9E78;
    case 0x7F2B9E7Cu: goto label_7F2B9E7C;
    case 0x7F2B9E80u: goto label_7F2B9E80;
    case 0x7F2B9E84u: goto label_7F2B9E84;
    case 0x7F2B9E88u: goto label_7F2B9E88;
    case 0x7F2B9E8Cu: goto label_7F2B9E8C;
    case 0x7F2B9E90u: goto label_7F2B9E90;
    case 0x7F2B9E94u: goto label_7F2B9E94;
    case 0x7F2B9E98u: goto label_7F2B9E98;
    case 0x7F2B9E9Cu: goto label_7F2B9E9C;
    case 0x7F2B9EA0u: goto label_7F2B9EA0;
    case 0x7F2B9EA4u: goto label_7F2B9EA4;
    case 0x7F2B9EA8u: goto label_7F2B9EA8;
    case 0x7F2B9EACu: goto label_7F2B9EAC;
    case 0x7F2B9EB0u: goto label_7F2B9EB0;
    case 0x7F2B9EB4u: goto label_7F2B9EB4;
    case 0x7F2B9EB8u: goto label_7F2B9EB8;
    case 0x7F2B9EBCu: goto label_7F2B9EBC;
    case 0x7F2B9EC0u: goto label_7F2B9EC0;
    case 0x7F2B9EC4u: goto label_7F2B9EC4;
    case 0x7F2B9EC8u: goto label_7F2B9EC8;
    case 0x7F2B9ECCu: goto label_7F2B9ECC;
    case 0x7F2B9ED0u: goto label_7F2B9ED0;
    case 0x7F2B9ED4u: goto label_7F2B9ED4;
    case 0x7F2B9ED8u: goto label_7F2B9ED8;
    case 0x7F2B9EDCu: goto label_7F2B9EDC;
    case 0x7F2B9EE0u: goto label_7F2B9EE0;
    case 0x7F2B9EE4u: goto label_7F2B9EE4;
    case 0x7F2B9EE8u: goto label_7F2B9EE8;
    case 0x7F2B9EECu: goto label_7F2B9EEC;
    case 0x7F2B9EF0u: goto label_7F2B9EF0;
    case 0x7F2B9EF4u: goto label_7F2B9EF4;
    case 0x7F2B9EF8u: goto label_7F2B9EF8;
    case 0x7F2B9EFCu: goto label_7F2B9EFC;
    case 0x7F2B9F00u: goto label_7F2B9F00;
    case 0x7F2B9F04u: goto label_7F2B9F04;
    case 0x7F2B9F08u: goto label_7F2B9F08;
    case 0x7F2B9F0Cu: goto label_7F2B9F0C;
    case 0x7F2B9F10u: goto label_7F2B9F10;
    case 0x7F2B9F14u: goto label_7F2B9F14;
    case 0x7F2B9F18u: goto label_7F2B9F18;
    case 0x7F2B9F1Cu: goto label_7F2B9F1C;
    case 0x7F2B9F20u: goto label_7F2B9F20;
    case 0x7F2B9F24u: goto label_7F2B9F24;
    case 0x7F2B9F28u: goto label_7F2B9F28;
    case 0x7F2B9F2Cu: goto label_7F2B9F2C;
    case 0x7F2B9F30u: goto label_7F2B9F30;
    case 0x7F2B9F34u: goto label_7F2B9F34;
    case 0x7F2B9F38u: goto label_7F2B9F38;
    case 0x7F2B9F3Cu: goto label_7F2B9F3C;
    case 0x7F2B9F40u: goto label_7F2B9F40;
    case 0x7F2B9F44u: goto label_7F2B9F44;
    case 0x7F2B9F48u: goto label_7F2B9F48;
    case 0x7F2B9F4Cu: goto label_7F2B9F4C;
    case 0x7F2B9F50u: goto label_7F2B9F50;
    case 0x7F2B9F54u: goto label_7F2B9F54;
    case 0x7F2B9F58u: goto label_7F2B9F58;
    case 0x7F2B9F5Cu: goto label_7F2B9F5C;
    case 0x7F2B9F60u: goto label_7F2B9F60;
    case 0x7F2B9F64u: goto label_7F2B9F64;
    case 0x7F2B9F68u: goto label_7F2B9F68;
    case 0x7F2B9F6Cu: goto label_7F2B9F6C;
    case 0x7F2B9F70u: goto label_7F2B9F70;
    case 0x7F2B9F74u: goto label_7F2B9F74;
    case 0x7F2B9F78u: goto label_7F2B9F78;
    case 0x7F2B9F7Cu: goto label_7F2B9F7C;
    case 0x7F2B9F80u: goto label_7F2B9F80;
    case 0x7F2B9F84u: goto label_7F2B9F84;
    case 0x7F2B9F88u: goto label_7F2B9F88;
    case 0x7F2B9F8Cu: goto label_7F2B9F8C;
    case 0x7F2B9F90u: goto label_7F2B9F90;
    case 0x7F2B9F94u: goto label_7F2B9F94;
    case 0x7F2B9F98u: goto label_7F2B9F98;
    case 0x7F2B9F9Cu: goto label_7F2B9F9C;
    case 0x7F2B9FA0u: goto label_7F2B9FA0;
    case 0x7F2B9FA4u: goto label_7F2B9FA4;
    case 0x7F2B9FA8u: goto label_7F2B9FA8;
    case 0x7F2B9FACu: goto label_7F2B9FAC;
    case 0x7F2B9FB0u: goto label_7F2B9FB0;
    case 0x7F2B9FB4u: goto label_7F2B9FB4;
    case 0x7F2B9FB8u: goto label_7F2B9FB8;
    case 0x7F2B9FBCu: goto label_7F2B9FBC;
    case 0x7F2B9FC0u: goto label_7F2B9FC0;
    case 0x7F2B9FC4u: goto label_7F2B9FC4;
    case 0x7F2B9FC8u: goto label_7F2B9FC8;
    case 0x7F2B9FCCu: goto label_7F2B9FCC;
    case 0x7F2B9FD0u: goto label_7F2B9FD0;
    case 0x7F2B9FD4u: goto label_7F2B9FD4;
    case 0x7F2B9FD8u: goto label_7F2B9FD8;
    case 0x7F2B9FDCu: goto label_7F2B9FDC;
    case 0x7F2B9FE0u: goto label_7F2B9FE0;
    case 0x7F2B9FE4u: goto label_7F2B9FE4;
    case 0x7F2B9FE8u: goto label_7F2B9FE8;
    case 0x7F2B9FECu: goto label_7F2B9FEC;
    case 0x7F2B9FF0u: goto label_7F2B9FF0;
    case 0x7F2B9FF4u: goto label_7F2B9FF4;
    case 0x7F2B9FF8u: goto label_7F2B9FF8;
    case 0x7F2B9FFCu: goto label_7F2B9FFC;
    case 0x7F2BA000u: goto label_7F2BA000;
    case 0x7F2BA004u: goto label_7F2BA004;
    case 0x7F2BA008u: goto label_7F2BA008;
    case 0x7F2BA00Cu: goto label_7F2BA00C;
    case 0x7F2BA010u: goto label_7F2BA010;
    case 0x7F2BA014u: goto label_7F2BA014;
    case 0x7F2BA018u: goto label_7F2BA018;
    case 0x7F2BA01Cu: goto label_7F2BA01C;
    case 0x7F2BA020u: goto label_7F2BA020;
    case 0x7F2BA024u: goto label_7F2BA024;
    case 0x7F2BA028u: goto label_7F2BA028;
    case 0x7F2BA02Cu: goto label_7F2BA02C;
    case 0x7F2BA030u: goto label_7F2BA030;
    case 0x7F2BA034u: goto label_7F2BA034;
    case 0x7F2BA038u: goto label_7F2BA038;
    case 0x7F2BA03Cu: goto label_7F2BA03C;
    case 0x7F2BA040u: goto label_7F2BA040;
    case 0x7F2BA044u: goto label_7F2BA044;
    case 0x7F2BA048u: goto label_7F2BA048;
    case 0x7F2BA04Cu: goto label_7F2BA04C;
    case 0x7F2BA050u: goto label_7F2BA050;
    case 0x7F2BA054u: goto label_7F2BA054;
    case 0x7F2BA058u: goto label_7F2BA058;
    case 0x7F2BA05Cu: goto label_7F2BA05C;
    case 0x7F2BA060u: goto label_7F2BA060;
    case 0x7F2BA064u: goto label_7F2BA064;
    case 0x7F2BA068u: goto label_7F2BA068;
    case 0x7F2BA06Cu: goto label_7F2BA06C;
    case 0x7F2BA070u: goto label_7F2BA070;
    case 0x7F2BA074u: goto label_7F2BA074;
    case 0x7F2BA078u: goto label_7F2BA078;
    case 0x7F2BA07Cu: goto label_7F2BA07C;
    case 0x7F2BA080u: goto label_7F2BA080;
    case 0x7F2BA084u: goto label_7F2BA084;
    case 0x7F2BA088u: goto label_7F2BA088;
    case 0x7F2BA08Cu: goto label_7F2BA08C;
    case 0x7F2BA090u: goto label_7F2BA090;
    case 0x7F2BA094u: goto label_7F2BA094;
    case 0x7F2BA098u: goto label_7F2BA098;
    case 0x7F2BA09Cu: goto label_7F2BA09C;
    case 0x7F2BA0A0u: goto label_7F2BA0A0;
    case 0x7F2BA0A4u: goto label_7F2BA0A4;
    case 0x7F2BA0A8u: goto label_7F2BA0A8;
    case 0x7F2BA0ACu: goto label_7F2BA0AC;
    case 0x7F2BA0B0u: goto label_7F2BA0B0;
    case 0x7F2BA0B4u: goto label_7F2BA0B4;
    case 0x7F2BA0B8u: goto label_7F2BA0B8;
    case 0x7F2BA0BCu: goto label_7F2BA0BC;
    case 0x7F2BA0C0u: goto label_7F2BA0C0;
    case 0x7F2BA0C4u: goto label_7F2BA0C4;
    case 0x7F2BA0C8u: goto label_7F2BA0C8;
    case 0x7F2BA0CCu: goto label_7F2BA0CC;
    case 0x7F2BA0D0u: goto label_7F2BA0D0;
    case 0x7F2BA0D4u: goto label_7F2BA0D4;
    case 0x7F2BA0D8u: goto label_7F2BA0D8;
    case 0x7F2BA0DCu: goto label_7F2BA0DC;
    case 0x7F2BA0E0u: goto label_7F2BA0E0;
    case 0x7F2BA0E4u: goto label_7F2BA0E4;
    case 0x7F2BA0E8u: goto label_7F2BA0E8;
    case 0x7F2BA0ECu: goto label_7F2BA0EC;
    case 0x7F2BA0F0u: goto label_7F2BA0F0;
    case 0x7F2BA0F4u: goto label_7F2BA0F4;
    case 0x7F2BA0F8u: goto label_7F2BA0F8;
    case 0x7F2BA0FCu: goto label_7F2BA0FC;
    case 0x7F2BA100u: goto label_7F2BA100;
    case 0x7F2BA104u: goto label_7F2BA104;
    case 0x7F2BA108u: goto label_7F2BA108;
    case 0x7F2BA10Cu: goto label_7F2BA10C;
    case 0x7F2BA110u: goto label_7F2BA110;
    case 0x7F2BA114u: goto label_7F2BA114;
    case 0x7F2BA118u: goto label_7F2BA118;
    case 0x7F2BA11Cu: goto label_7F2BA11C;
    case 0x7F2BA120u: goto label_7F2BA120;
    case 0x7F2BA124u: goto label_7F2BA124;
    case 0x7F2BA128u: goto label_7F2BA128;
    case 0x7F2BA12Cu: goto label_7F2BA12C;
    case 0x7F2BA130u: goto label_7F2BA130;
    case 0x7F2BA134u: goto label_7F2BA134;
    case 0x7F2BA138u: goto label_7F2BA138;
    case 0x7F2BA13Cu: goto label_7F2BA13C;
    case 0x7F2BA140u: goto label_7F2BA140;
    case 0x7F2BA144u: goto label_7F2BA144;
    case 0x7F2BA148u: goto label_7F2BA148;
    case 0x7F2BA14Cu: goto label_7F2BA14C;
    case 0x7F2BA150u: goto label_7F2BA150;
    case 0x7F2BA154u: goto label_7F2BA154;
    case 0x7F2BA158u: goto label_7F2BA158;
    case 0x7F2BA15Cu: goto label_7F2BA15C;
    case 0x7F2BA160u: goto label_7F2BA160;
    case 0x7F2BA164u: goto label_7F2BA164;
    case 0x7F2BA168u: goto label_7F2BA168;
    case 0x7F2BA16Cu: goto label_7F2BA16C;
    case 0x7F2BA170u: goto label_7F2BA170;
    case 0x7F2BA174u: goto label_7F2BA174;
    case 0x7F2BA178u: goto label_7F2BA178;
    case 0x7F2BA17Cu: goto label_7F2BA17C;
    case 0x7F2BA180u: goto label_7F2BA180;
    case 0x7F2BA184u: goto label_7F2BA184;
    case 0x7F2BA188u: goto label_7F2BA188;
    case 0x7F2BA18Cu: goto label_7F2BA18C;
    case 0x7F2BA190u: goto label_7F2BA190;
    case 0x7F2BA194u: goto label_7F2BA194;
    case 0x7F2BA198u: goto label_7F2BA198;
    case 0x7F2BA19Cu: goto label_7F2BA19C;
    case 0x7F2BA1A0u: goto label_7F2BA1A0;
    case 0x7F2BA1A4u: goto label_7F2BA1A4;
    case 0x7F2BA1A8u: goto label_7F2BA1A8;
    case 0x7F2BA1ACu: goto label_7F2BA1AC;
    case 0x7F2BA1B0u: goto label_7F2BA1B0;
    case 0x7F2BA1B4u: goto label_7F2BA1B4;
    case 0x7F2BA1B8u: goto label_7F2BA1B8;
    case 0x7F2BA1BCu: goto label_7F2BA1BC;
    case 0x7F2BA1C0u: goto label_7F2BA1C0;
    case 0x7F2BA1C4u: goto label_7F2BA1C4;
    case 0x7F2BA1C8u: goto label_7F2BA1C8;
    case 0x7F2BA1CCu: goto label_7F2BA1CC;
    case 0x7F2BA1D0u: goto label_7F2BA1D0;
    case 0x7F2BA1D4u: goto label_7F2BA1D4;
    case 0x7F2BA1D8u: goto label_7F2BA1D8;
    case 0x7F2BA1DCu: goto label_7F2BA1DC;
    case 0x7F2BA1E0u: goto label_7F2BA1E0;
    case 0x7F2BA1E4u: goto label_7F2BA1E4;
    case 0x7F2BA1E8u: goto label_7F2BA1E8;
    case 0x7F2BA1ECu: goto label_7F2BA1EC;
    case 0x7F2BA1F0u: goto label_7F2BA1F0;
    case 0x7F2BA1F4u: goto label_7F2BA1F4;
    case 0x7F2BA1F8u: goto label_7F2BA1F8;
    case 0x7F2BA1FCu: goto label_7F2BA1FC;
    case 0x7F2BA200u: goto label_7F2BA200;
    case 0x7F2BA204u: goto label_7F2BA204;
    case 0x7F2BA208u: goto label_7F2BA208;
    case 0x7F2BA20Cu: goto label_7F2BA20C;
    case 0x7F2BA210u: goto label_7F2BA210;
    case 0x7F2BA214u: goto label_7F2BA214;
    case 0x7F2BA218u: goto label_7F2BA218;
    case 0x7F2BA21Cu: goto label_7F2BA21C;
    case 0x7F2BA220u: goto label_7F2BA220;
    case 0x7F2BA224u: goto label_7F2BA224;
    case 0x7F2BA228u: goto label_7F2BA228;
    case 0x7F2BA22Cu: goto label_7F2BA22C;
    case 0x7F2BA230u: goto label_7F2BA230;
    case 0x7F2BA234u: goto label_7F2BA234;
    case 0x7F2BA238u: goto label_7F2BA238;
    case 0x7F2BA23Cu: goto label_7F2BA23C;
    case 0x7F2BA240u: goto label_7F2BA240;
    case 0x7F2BA244u: goto label_7F2BA244;
    case 0x7F2BA248u: goto label_7F2BA248;
    case 0x7F2BA24Cu: goto label_7F2BA24C;
    case 0x7F2BA250u: goto label_7F2BA250;
    case 0x7F2BA254u: goto label_7F2BA254;
    case 0x7F2BA258u: goto label_7F2BA258;
    case 0x7F2BA25Cu: goto label_7F2BA25C;
    case 0x7F2BA260u: goto label_7F2BA260;
    case 0x7F2BA264u: goto label_7F2BA264;
    case 0x7F2BA268u: goto label_7F2BA268;
    case 0x7F2BA26Cu: goto label_7F2BA26C;
    case 0x7F2BA270u: goto label_7F2BA270;
    case 0x7F2BA274u: goto label_7F2BA274;
    case 0x7F2BA278u: goto label_7F2BA278;
    case 0x7F2BA27Cu: goto label_7F2BA27C;
    case 0x7F2BA280u: goto label_7F2BA280;
    case 0x7F2BA284u: goto label_7F2BA284;
    case 0x7F2BA288u: goto label_7F2BA288;
    case 0x7F2BA28Cu: goto label_7F2BA28C;
    case 0x7F2BA290u: goto label_7F2BA290;
    case 0x7F2BA294u: goto label_7F2BA294;
    case 0x7F2BA298u: goto label_7F2BA298;
    case 0x7F2BA29Cu: goto label_7F2BA29C;
    case 0x7F2BA2A0u: goto label_7F2BA2A0;
    case 0x7F2BA2A4u: goto label_7F2BA2A4;
    case 0x7F2BA2A8u: goto label_7F2BA2A8;
    case 0x7F2BA2ACu: goto label_7F2BA2AC;
    case 0x7F2BA2B0u: goto label_7F2BA2B0;
    case 0x7F2BA2B4u: goto label_7F2BA2B4;
    case 0x7F2BA2B8u: goto label_7F2BA2B8;
    case 0x7F2BA2BCu: goto label_7F2BA2BC;
    case 0x7F2BA2C0u: goto label_7F2BA2C0;
    case 0x7F2BA2C4u: goto label_7F2BA2C4;
    case 0x7F2BA2C8u: goto label_7F2BA2C8;
    case 0x7F2BA2CCu: goto label_7F2BA2CC;
    case 0x7F2BA2D0u: goto label_7F2BA2D0;
    case 0x7F2BA2D4u: goto label_7F2BA2D4;
    case 0x7F2BA2D8u: goto label_7F2BA2D8;
    case 0x7F2BA2DCu: goto label_7F2BA2DC;
    case 0x7F2BA2E0u: goto label_7F2BA2E0;
    case 0x7F2BA2E4u: goto label_7F2BA2E4;
    case 0x7F2BA2E8u: goto label_7F2BA2E8;
    case 0x7F2BA2ECu: goto label_7F2BA2EC;
    case 0x7F2BA2F0u: goto label_7F2BA2F0;
    case 0x7F2BA2F4u: goto label_7F2BA2F4;
    case 0x7F2BA2F8u: goto label_7F2BA2F8;
    case 0x7F2BA2FCu: goto label_7F2BA2FC;
    case 0x7F2BA300u: goto label_7F2BA300;
    case 0x7F2BA304u: goto label_7F2BA304;
    case 0x7F2BA308u: goto label_7F2BA308;
    case 0x7F2BA30Cu: goto label_7F2BA30C;
    case 0x7F2BA310u: goto label_7F2BA310;
    case 0x7F2BA314u: goto label_7F2BA314;
    case 0x7F2BA318u: goto label_7F2BA318;
    case 0x7F2BA31Cu: goto label_7F2BA31C;
    case 0x7F2BA320u: goto label_7F2BA320;
    case 0x7F2BA324u: goto label_7F2BA324;
    case 0x7F2BA328u: goto label_7F2BA328;
    case 0x7F2BA32Cu: goto label_7F2BA32C;
    case 0x7F2BA330u: goto label_7F2BA330;
    case 0x7F2BA334u: goto label_7F2BA334;
    case 0x7F2BA338u: goto label_7F2BA338;
    case 0x7F2BA33Cu: goto label_7F2BA33C;
    case 0x7F2BA340u: goto label_7F2BA340;
    case 0x7F2BA344u: goto label_7F2BA344;
    case 0x7F2BA348u: goto label_7F2BA348;
    case 0x7F2BA34Cu: goto label_7F2BA34C;
    case 0x7F2BA350u: goto label_7F2BA350;
    case 0x7F2BA354u: goto label_7F2BA354;
    case 0x7F2BA358u: goto label_7F2BA358;
    case 0x7F2BA35Cu: goto label_7F2BA35C;
    case 0x7F2BA360u: goto label_7F2BA360;
    case 0x7F2BA364u: goto label_7F2BA364;
    case 0x7F2BA368u: goto label_7F2BA368;
    case 0x7F2BA36Cu: goto label_7F2BA36C;
    case 0x7F2BA370u: goto label_7F2BA370;
    case 0x7F2BA374u: goto label_7F2BA374;
    case 0x7F2BA378u: goto label_7F2BA378;
    case 0x7F2BA37Cu: goto label_7F2BA37C;
    case 0x7F2BA380u: goto label_7F2BA380;
    case 0x7F2BA384u: goto label_7F2BA384;
    case 0x7F2BA388u: goto label_7F2BA388;
    case 0x7F2BA38Cu: goto label_7F2BA38C;
    case 0x7F2BA390u: goto label_7F2BA390;
    case 0x7F2BA394u: goto label_7F2BA394;
    case 0x7F2BA398u: goto label_7F2BA398;
    case 0x7F2BA39Cu: goto label_7F2BA39C;
    case 0x7F2BA3A0u: goto label_7F2BA3A0;
    case 0x7F2BA3A4u: goto label_7F2BA3A4;
    case 0x7F2BA3A8u: goto label_7F2BA3A8;
    case 0x7F2BA3ACu: goto label_7F2BA3AC;
    case 0x7F2BA3B0u: goto label_7F2BA3B0;
    case 0x7F2BA3B4u: goto label_7F2BA3B4;
    case 0x7F2BA3B8u: goto label_7F2BA3B8;
    case 0x7F2BA3BCu: goto label_7F2BA3BC;
    case 0x7F2BA3C0u: goto label_7F2BA3C0;
    case 0x7F2BA3C4u: goto label_7F2BA3C4;
    case 0x7F2BA3C8u: goto label_7F2BA3C8;
    case 0x7F2BA3CCu: goto label_7F2BA3CC;
    case 0x7F2BA3D0u: goto label_7F2BA3D0;
    case 0x7F2BA3D4u: goto label_7F2BA3D4;
    case 0x7F2BA3D8u: goto label_7F2BA3D8;
    case 0x7F2BA3DCu: goto label_7F2BA3DC;
    case 0x7F2BA3E0u: goto label_7F2BA3E0;
    case 0x7F2BA3E4u: goto label_7F2BA3E4;
    case 0x7F2BA3E8u: goto label_7F2BA3E8;
    case 0x7F2BA3ECu: goto label_7F2BA3EC;
    case 0x7F2BA3F0u: goto label_7F2BA3F0;
    case 0x7F2BA3F4u: goto label_7F2BA3F4;
    case 0x7F2BA3F8u: goto label_7F2BA3F8;
    case 0x7F2BA3FCu: goto label_7F2BA3FC;
    case 0x7F2BA400u: goto label_7F2BA400;
    case 0x7F2BA404u: goto label_7F2BA404;
    case 0x7F2BA408u: goto label_7F2BA408;
    case 0x7F2BA40Cu: goto label_7F2BA40C;
    case 0x7F2BA410u: goto label_7F2BA410;
    case 0x7F2BA414u: goto label_7F2BA414;
    case 0x7F2BA418u: goto label_7F2BA418;
    case 0x7F2BA41Cu: goto label_7F2BA41C;
    case 0x7F2BA420u: goto label_7F2BA420;
    case 0x7F2BA424u: goto label_7F2BA424;
    case 0x7F2BA428u: goto label_7F2BA428;
    case 0x7F2BA42Cu: goto label_7F2BA42C;
    case 0x7F2BA430u: goto label_7F2BA430;
    case 0x7F2BA434u: goto label_7F2BA434;
    case 0x7F2BA438u: goto label_7F2BA438;
    case 0x7F2BA43Cu: goto label_7F2BA43C;
    case 0x7F2BA440u: goto label_7F2BA440;
    case 0x7F2BA444u: goto label_7F2BA444;
    case 0x7F2BA448u: goto label_7F2BA448;
    case 0x7F2BA44Cu: goto label_7F2BA44C;
    case 0x7F2BA450u: goto label_7F2BA450;
    case 0x7F2BA454u: goto label_7F2BA454;
    case 0x7F2BA458u: goto label_7F2BA458;
    case 0x7F2BA45Cu: goto label_7F2BA45C;
    case 0x7F2BA460u: goto label_7F2BA460;
    case 0x7F2BA464u: goto label_7F2BA464;
    case 0x7F2BA468u: goto label_7F2BA468;
    case 0x7F2BA46Cu: goto label_7F2BA46C;
    case 0x7F2BA470u: goto label_7F2BA470;
    case 0x7F2BA474u: goto label_7F2BA474;
    case 0x7F2BA478u: goto label_7F2BA478;
    case 0x7F2BA47Cu: goto label_7F2BA47C;
    case 0x7F2BA480u: goto label_7F2BA480;
    case 0x7F2BA484u: goto label_7F2BA484;
    case 0x7F2BA488u: goto label_7F2BA488;
    case 0x7F2BA48Cu: goto label_7F2BA48C;
    case 0x7F2BA490u: goto label_7F2BA490;
    case 0x7F2BA494u: goto label_7F2BA494;
    case 0x7F2BA498u: goto label_7F2BA498;
    case 0x7F2BA49Cu: goto label_7F2BA49C;
    case 0x7F2BA4A0u: goto label_7F2BA4A0;
    case 0x7F2BA4A4u: goto label_7F2BA4A4;
    case 0x7F2BA4A8u: goto label_7F2BA4A8;
    case 0x7F2BA4ACu: goto label_7F2BA4AC;
    case 0x7F2BA4B0u: goto label_7F2BA4B0;
    case 0x7F2BA4B4u: goto label_7F2BA4B4;
    case 0x7F2BA4B8u: goto label_7F2BA4B8;
    case 0x7F2BA4BCu: goto label_7F2BA4BC;
    case 0x7F2BA4C0u: goto label_7F2BA4C0;
    case 0x7F2BA4C4u: goto label_7F2BA4C4;
    case 0x7F2BA4C8u: goto label_7F2BA4C8;
    case 0x7F2BA4CCu: goto label_7F2BA4CC;
    case 0x7F2BA4D0u: goto label_7F2BA4D0;
    case 0x7F2BA4D4u: goto label_7F2BA4D4;
    case 0x7F2BA4D8u: goto label_7F2BA4D8;
    case 0x7F2BA4DCu: goto label_7F2BA4DC;
    case 0x7F2BA4E0u: goto label_7F2BA4E0;
    case 0x7F2BA4E4u: goto label_7F2BA4E4;
    case 0x7F2BA4E8u: goto label_7F2BA4E8;
    case 0x7F2BA4ECu: goto label_7F2BA4EC;
    case 0x7F2BA4F0u: goto label_7F2BA4F0;
    case 0x7F2BA4F4u: goto label_7F2BA4F4;
    case 0x7F2BA4F8u: goto label_7F2BA4F8;
    case 0x7F2BA4FCu: goto label_7F2BA4FC;
    case 0x7F2BA500u: goto label_7F2BA500;
    case 0x7F2BA504u: goto label_7F2BA504;
    case 0x7F2BA508u: goto label_7F2BA508;
    case 0x7F2BA50Cu: goto label_7F2BA50C;
    case 0x7F2BA510u: goto label_7F2BA510;
    case 0x7F2BA514u: goto label_7F2BA514;
    case 0x7F2BA518u: goto label_7F2BA518;
    case 0x7F2BA51Cu: goto label_7F2BA51C;
    case 0x7F2BA520u: goto label_7F2BA520;
    case 0x7F2BA524u: goto label_7F2BA524;
    case 0x7F2BA528u: goto label_7F2BA528;
    case 0x7F2BA52Cu: goto label_7F2BA52C;
    case 0x7F2BA530u: goto label_7F2BA530;
    case 0x7F2BA534u: goto label_7F2BA534;
    case 0x7F2BA538u: goto label_7F2BA538;
    case 0x7F2BA53Cu: goto label_7F2BA53C;
    case 0x7F2BA540u: goto label_7F2BA540;
    case 0x7F2BA544u: goto label_7F2BA544;
    case 0x7F2BA548u: goto label_7F2BA548;
    case 0x7F2BA54Cu: goto label_7F2BA54C;
    case 0x7F2BA550u: goto label_7F2BA550;
    case 0x7F2BA554u: goto label_7F2BA554;
    case 0x7F2BA558u: goto label_7F2BA558;
    case 0x7F2BA55Cu: goto label_7F2BA55C;
    case 0x7F2BA560u: goto label_7F2BA560;
    case 0x7F2BA564u: goto label_7F2BA564;
    case 0x7F2BA568u: goto label_7F2BA568;
    case 0x7F2BA56Cu: goto label_7F2BA56C;
    case 0x7F2BA570u: goto label_7F2BA570;
    case 0x7F2BA574u: goto label_7F2BA574;
    case 0x7F2BA578u: goto label_7F2BA578;
    case 0x7F2BA57Cu: goto label_7F2BA57C;
    case 0x7F2BA580u: goto label_7F2BA580;
    case 0x7F2BA584u: goto label_7F2BA584;
    case 0x7F2BA588u: goto label_7F2BA588;
    case 0x7F2BA58Cu: goto label_7F2BA58C;
    case 0x7F2BA590u: goto label_7F2BA590;
    case 0x7F2BA594u: goto label_7F2BA594;
    case 0x7F2BA598u: goto label_7F2BA598;
    case 0x7F2BA59Cu: goto label_7F2BA59C;
    case 0x7F2BA5A0u: goto label_7F2BA5A0;
    case 0x7F2BA5A4u: goto label_7F2BA5A4;
    case 0x7F2BA5A8u: goto label_7F2BA5A8;
    case 0x7F2BA5ACu: goto label_7F2BA5AC;
    case 0x7F2BA5B0u: goto label_7F2BA5B0;
    case 0x7F2BA5B4u: goto label_7F2BA5B4;
    case 0x7F2BA5B8u: goto label_7F2BA5B8;
    case 0x7F2BA5BCu: goto label_7F2BA5BC;
    case 0x7F2BA5C0u: goto label_7F2BA5C0;
    case 0x7F2BA5C4u: goto label_7F2BA5C4;
    case 0x7F2BA5C8u: goto label_7F2BA5C8;
    case 0x7F2BA5CCu: goto label_7F2BA5CC;
    case 0x7F2BA5D0u: goto label_7F2BA5D0;
    case 0x7F2BA5D4u: goto label_7F2BA5D4;
    case 0x7F2BA5D8u: goto label_7F2BA5D8;
    case 0x7F2BA5DCu: goto label_7F2BA5DC;
    case 0x7F2BA5E0u: goto label_7F2BA5E0;
    case 0x7F2BA5E4u: goto label_7F2BA5E4;
    case 0x7F2BA5E8u: goto label_7F2BA5E8;
    case 0x7F2BA5ECu: goto label_7F2BA5EC;
    case 0x7F2BA5F0u: goto label_7F2BA5F0;
    case 0x7F2BA5F4u: goto label_7F2BA5F4;
    case 0x7F2BA5F8u: goto label_7F2BA5F8;
    case 0x7F2BA5FCu: goto label_7F2BA5FC;
    case 0x7F2BA600u: goto label_7F2BA600;
    case 0x7F2BA604u: goto label_7F2BA604;
    case 0x7F2BA608u: goto label_7F2BA608;
    case 0x7F2BA60Cu: goto label_7F2BA60C;
    case 0x7F2BA610u: goto label_7F2BA610;
    case 0x7F2BA614u: goto label_7F2BA614;
    case 0x7F2BA618u: goto label_7F2BA618;
    case 0x7F2BA61Cu: goto label_7F2BA61C;
    case 0x7F2BA620u: goto label_7F2BA620;
    case 0x7F2BA624u: goto label_7F2BA624;
    case 0x7F2BA628u: goto label_7F2BA628;
    case 0x7F2BA62Cu: goto label_7F2BA62C;
    case 0x7F2BA630u: goto label_7F2BA630;
    case 0x7F2BA634u: goto label_7F2BA634;
    case 0x7F2BA638u: goto label_7F2BA638;
    case 0x7F2BA63Cu: goto label_7F2BA63C;
    case 0x7F2BA640u: goto label_7F2BA640;
    case 0x7F2BA644u: goto label_7F2BA644;
    case 0x7F2BA648u: goto label_7F2BA648;
    case 0x7F2BA64Cu: goto label_7F2BA64C;
    case 0x7F2BA650u: goto label_7F2BA650;
    case 0x7F2BA654u: goto label_7F2BA654;
    case 0x7F2BA658u: goto label_7F2BA658;
    case 0x7F2BA65Cu: goto label_7F2BA65C;
    case 0x7F2BA660u: goto label_7F2BA660;
    case 0x7F2BA664u: goto label_7F2BA664;
    case 0x7F2BA668u: goto label_7F2BA668;
    case 0x7F2BA66Cu: goto label_7F2BA66C;
    case 0x7F2BA670u: goto label_7F2BA670;
    case 0x7F2BA674u: goto label_7F2BA674;
    case 0x7F2BA678u: goto label_7F2BA678;
    case 0x7F2BA67Cu: goto label_7F2BA67C;
    case 0x7F2BA680u: goto label_7F2BA680;
    case 0x7F2BA684u: goto label_7F2BA684;
    case 0x7F2BA688u: goto label_7F2BA688;
    case 0x7F2BA68Cu: goto label_7F2BA68C;
    case 0x7F2BA690u: goto label_7F2BA690;
    case 0x7F2BA694u: goto label_7F2BA694;
    case 0x7F2BA698u: goto label_7F2BA698;
    case 0x7F2BA69Cu: goto label_7F2BA69C;
    case 0x7F2BA6A0u: goto label_7F2BA6A0;
    case 0x7F2BA6A4u: goto label_7F2BA6A4;
    case 0x7F2BA6A8u: goto label_7F2BA6A8;
    case 0x7F2BA6ACu: goto label_7F2BA6AC;
    case 0x7F2BA6B0u: goto label_7F2BA6B0;
    case 0x7F2BA6B4u: goto label_7F2BA6B4;
    case 0x7F2BA6B8u: goto label_7F2BA6B8;
    case 0x7F2BA6BCu: goto label_7F2BA6BC;
    case 0x7F2BA6C0u: goto label_7F2BA6C0;
    case 0x7F2BA6C4u: goto label_7F2BA6C4;
    case 0x7F2BA6C8u: goto label_7F2BA6C8;
    case 0x7F2BA6CCu: goto label_7F2BA6CC;
    case 0x7F2BA6D0u: goto label_7F2BA6D0;
    case 0x7F2BA6D4u: goto label_7F2BA6D4;
    case 0x7F2BA6D8u: goto label_7F2BA6D8;
    case 0x7F2BA6DCu: goto label_7F2BA6DC;
    case 0x7F2BA6E0u: goto label_7F2BA6E0;
    case 0x7F2BA6E4u: goto label_7F2BA6E4;
    case 0x7F2BA6E8u: goto label_7F2BA6E8;
    case 0x7F2BA6ECu: goto label_7F2BA6EC;
    case 0x7F2BA6F0u: goto label_7F2BA6F0;
    case 0x7F2BA6F4u: goto label_7F2BA6F4;
    case 0x7F2BA6F8u: goto label_7F2BA6F8;
    case 0x7F2BA6FCu: goto label_7F2BA6FC;
    case 0x7F2BA700u: goto label_7F2BA700;
    case 0x7F2BA704u: goto label_7F2BA704;
    case 0x7F2BA708u: goto label_7F2BA708;
    case 0x7F2BA70Cu: goto label_7F2BA70C;
    case 0x7F2BA710u: goto label_7F2BA710;
    case 0x7F2BA714u: goto label_7F2BA714;
    case 0x7F2BA718u: goto label_7F2BA718;
    case 0x7F2BA71Cu: goto label_7F2BA71C;
    case 0x7F2BA720u: goto label_7F2BA720;
    case 0x7F2BA724u: goto label_7F2BA724;
    case 0x7F2BA728u: goto label_7F2BA728;
    case 0x7F2BA72Cu: goto label_7F2BA72C;
    case 0x7F2BA730u: goto label_7F2BA730;
    case 0x7F2BA734u: goto label_7F2BA734;
    case 0x7F2BA738u: goto label_7F2BA738;
    case 0x7F2BA73Cu: goto label_7F2BA73C;
    case 0x7F2BA740u: goto label_7F2BA740;
    case 0x7F2BA744u: goto label_7F2BA744;
    case 0x7F2BA748u: goto label_7F2BA748;
    case 0x7F2BA74Cu: goto label_7F2BA74C;
    case 0x7F2BA750u: goto label_7F2BA750;
    case 0x7F2BA754u: goto label_7F2BA754;
    case 0x7F2BA758u: goto label_7F2BA758;
    case 0x7F2BA75Cu: goto label_7F2BA75C;
    case 0x7F2BA760u: goto label_7F2BA760;
    case 0x7F2BA764u: goto label_7F2BA764;
    case 0x7F2BA768u: goto label_7F2BA768;
    case 0x7F2BA76Cu: goto label_7F2BA76C;
    case 0x7F2BA770u: goto label_7F2BA770;
    case 0x7F2BA774u: goto label_7F2BA774;
    case 0x7F2BA778u: goto label_7F2BA778;
    case 0x7F2BA77Cu: goto label_7F2BA77C;
    case 0x7F2BA780u: goto label_7F2BA780;
    case 0x7F2BA784u: goto label_7F2BA784;
    case 0x7F2BA788u: goto label_7F2BA788;
    case 0x7F2BA78Cu: goto label_7F2BA78C;
    case 0x7F2BA790u: goto label_7F2BA790;
    case 0x7F2BA794u: goto label_7F2BA794;
    case 0x7F2BA798u: goto label_7F2BA798;
    case 0x7F2BA79Cu: goto label_7F2BA79C;
    case 0x7F2BA7A0u: goto label_7F2BA7A0;
    case 0x7F2BA7A4u: goto label_7F2BA7A4;
    case 0x7F2BA7A8u: goto label_7F2BA7A8;
    case 0x7F2BA7ACu: goto label_7F2BA7AC;
    case 0x7F2BA7B0u: goto label_7F2BA7B0;
    case 0x7F2BA7B4u: goto label_7F2BA7B4;
    case 0x7F2BA7B8u: goto label_7F2BA7B8;
    case 0x7F2BA7BCu: goto label_7F2BA7BC;
    case 0x7F2BA7C0u: goto label_7F2BA7C0;
    case 0x7F2BA7C4u: goto label_7F2BA7C4;
    case 0x7F2BA7C8u: goto label_7F2BA7C8;
    case 0x7F2BA7CCu: goto label_7F2BA7CC;
    case 0x7F2BA7D0u: goto label_7F2BA7D0;
    case 0x7F2BA7D4u: goto label_7F2BA7D4;
    case 0x7F2BA7D8u: goto label_7F2BA7D8;
    case 0x7F2BA7DCu: goto label_7F2BA7DC;
    case 0x7F2BA7E0u: goto label_7F2BA7E0;
    case 0x7F2BA7E4u: goto label_7F2BA7E4;
    case 0x7F2BA7E8u: goto label_7F2BA7E8;
    case 0x7F2BA7ECu: goto label_7F2BA7EC;
    case 0x7F2BA7F0u: goto label_7F2BA7F0;
    case 0x7F2BA7F4u: goto label_7F2BA7F4;
    case 0x7F2BA7F8u: goto label_7F2BA7F8;
    case 0x7F2BA7FCu: goto label_7F2BA7FC;
    case 0x7F2BA800u: goto label_7F2BA800;
    case 0x7F2BA804u: goto label_7F2BA804;
    case 0x7F2BA808u: goto label_7F2BA808;
    case 0x7F2BA80Cu: goto label_7F2BA80C;
    case 0x7F2BA810u: goto label_7F2BA810;
    case 0x7F2BA814u: goto label_7F2BA814;
    case 0x7F2BA818u: goto label_7F2BA818;
    case 0x7F2BA81Cu: goto label_7F2BA81C;
    case 0x7F2BA820u: goto label_7F2BA820;
    case 0x7F2BA824u: goto label_7F2BA824;
    case 0x7F2BA828u: goto label_7F2BA828;
    case 0x7F2BA82Cu: goto label_7F2BA82C;
    case 0x7F2BA830u: goto label_7F2BA830;
    case 0x7F2BA834u: goto label_7F2BA834;
    case 0x7F2BA838u: goto label_7F2BA838;
    case 0x7F2BA83Cu: goto label_7F2BA83C;
    case 0x7F2BA840u: goto label_7F2BA840;
    case 0x7F2BA844u: goto label_7F2BA844;
    case 0x7F2BA848u: goto label_7F2BA848;
    case 0x7F2BA84Cu: goto label_7F2BA84C;
    case 0x7F2BA850u: goto label_7F2BA850;
    case 0x7F2BA854u: goto label_7F2BA854;
    case 0x7F2BA858u: goto label_7F2BA858;
    case 0x7F2BA85Cu: goto label_7F2BA85C;
    case 0x7F2BA860u: goto label_7F2BA860;
    case 0x7F2BA864u: goto label_7F2BA864;
    case 0x7F2BA868u: goto label_7F2BA868;
    case 0x7F2BA86Cu: goto label_7F2BA86C;
    case 0x7F2BA870u: goto label_7F2BA870;
    case 0x7F2BA874u: goto label_7F2BA874;
    case 0x7F2BA878u: goto label_7F2BA878;
    case 0x7F2BA87Cu: goto label_7F2BA87C;
    case 0x7F2BA880u: goto label_7F2BA880;
    case 0x7F2BA884u: goto label_7F2BA884;
    case 0x7F2BA888u: goto label_7F2BA888;
    case 0x7F2BA88Cu: goto label_7F2BA88C;
    case 0x7F2BA890u: goto label_7F2BA890;
    case 0x7F2BA894u: goto label_7F2BA894;
    case 0x7F2BA898u: goto label_7F2BA898;
    case 0x7F2BA89Cu: goto label_7F2BA89C;
    case 0x7F2BA8A0u: goto label_7F2BA8A0;
    case 0x7F2BA8A4u: goto label_7F2BA8A4;
    case 0x7F2BA8A8u: goto label_7F2BA8A8;
    case 0x7F2BA8ACu: goto label_7F2BA8AC;
    case 0x7F2BA8B0u: goto label_7F2BA8B0;
    case 0x7F2BA8B4u: goto label_7F2BA8B4;
    case 0x7F2BA8B8u: goto label_7F2BA8B8;
    case 0x7F2BA8BCu: goto label_7F2BA8BC;
    case 0x7F2BA8C0u: goto label_7F2BA8C0;
    case 0x7F2BA8C4u: goto label_7F2BA8C4;
    case 0x7F2BA8C8u: goto label_7F2BA8C8;
    case 0x7F2BA8CCu: goto label_7F2BA8CC;
    case 0x7F2BA8D0u: goto label_7F2BA8D0;
    case 0x7F2BA8D4u: goto label_7F2BA8D4;
    case 0x7F2BA8D8u: goto label_7F2BA8D8;
    case 0x7F2BA8DCu: goto label_7F2BA8DC;
    case 0x7F2BA8E0u: goto label_7F2BA8E0;
    case 0x7F2BA8E4u: goto label_7F2BA8E4;
    case 0x7F2BA8E8u: goto label_7F2BA8E8;
    case 0x7F2BA8ECu: goto label_7F2BA8EC;
    case 0x7F2BA8F0u: goto label_7F2BA8F0;
    case 0x7F2BA8F4u: goto label_7F2BA8F4;
    case 0x7F2BA8F8u: goto label_7F2BA8F8;
    case 0x7F2BA8FCu: goto label_7F2BA8FC;
    case 0x7F2BA900u: goto label_7F2BA900;
    case 0x7F2BA904u: goto label_7F2BA904;
    case 0x7F2BA908u: goto label_7F2BA908;
    case 0x7F2BA90Cu: goto label_7F2BA90C;
    case 0x7F2BA910u: goto label_7F2BA910;
    case 0x7F2BA914u: goto label_7F2BA914;
    case 0x7F2BA918u: goto label_7F2BA918;
    case 0x7F2BA91Cu: goto label_7F2BA91C;
    case 0x7F2BA920u: goto label_7F2BA920;
    case 0x7F2BA924u: goto label_7F2BA924;
    case 0x7F2BA928u: goto label_7F2BA928;
    case 0x7F2BA92Cu: goto label_7F2BA92C;
    case 0x7F2BA930u: goto label_7F2BA930;
    case 0x7F2BA934u: goto label_7F2BA934;
    case 0x7F2BA938u: goto label_7F2BA938;
    case 0x7F2BA93Cu: goto label_7F2BA93C;
    case 0x7F2BA940u: goto label_7F2BA940;
    case 0x7F2BA944u: goto label_7F2BA944;
    case 0x7F2BA948u: goto label_7F2BA948;
    case 0x7F2BA94Cu: goto label_7F2BA94C;
    case 0x7F2BA950u: goto label_7F2BA950;
    case 0x7F2BA954u: goto label_7F2BA954;
    case 0x7F2BA958u: goto label_7F2BA958;
    case 0x7F2BA95Cu: goto label_7F2BA95C;
    case 0x7F2BA960u: goto label_7F2BA960;
    case 0x7F2BA964u: goto label_7F2BA964;
    case 0x7F2BA968u: goto label_7F2BA968;
    case 0x7F2BA96Cu: goto label_7F2BA96C;
    case 0x7F2BA970u: goto label_7F2BA970;
    case 0x7F2BA974u: goto label_7F2BA974;
    case 0x7F2BA978u: goto label_7F2BA978;
    case 0x7F2BA97Cu: goto label_7F2BA97C;
    case 0x7F2BA980u: goto label_7F2BA980;
    case 0x7F2BA984u: goto label_7F2BA984;
    case 0x7F2BA988u: goto label_7F2BA988;
    case 0x7F2BA98Cu: goto label_7F2BA98C;
    case 0x7F2BA990u: goto label_7F2BA990;
    case 0x7F2BA994u: goto label_7F2BA994;
    case 0x7F2BA998u: goto label_7F2BA998;
    case 0x7F2BA99Cu: goto label_7F2BA99C;
    case 0x7F2BA9A0u: goto label_7F2BA9A0;
    case 0x7F2BA9A4u: goto label_7F2BA9A4;
    case 0x7F2BA9A8u: goto label_7F2BA9A8;
    case 0x7F2BA9ACu: goto label_7F2BA9AC;
    case 0x7F2BA9B0u: goto label_7F2BA9B0;
    case 0x7F2BA9B4u: goto label_7F2BA9B4;
    case 0x7F2BA9B8u: goto label_7F2BA9B8;
    case 0x7F2BA9BCu: goto label_7F2BA9BC;
    case 0x7F2BA9C0u: goto label_7F2BA9C0;
    case 0x7F2BA9C4u: goto label_7F2BA9C4;
    case 0x7F2BA9C8u: goto label_7F2BA9C8;
    case 0x7F2BA9CCu: goto label_7F2BA9CC;
    case 0x7F2BA9D0u: goto label_7F2BA9D0;
    case 0x7F2BA9D4u: goto label_7F2BA9D4;
    case 0x7F2BA9D8u: goto label_7F2BA9D8;
    case 0x7F2BA9DCu: goto label_7F2BA9DC;
    case 0x7F2BA9E0u: goto label_7F2BA9E0;
    case 0x7F2BA9E4u: goto label_7F2BA9E4;
    case 0x7F2BA9E8u: goto label_7F2BA9E8;
    case 0x7F2BA9ECu: goto label_7F2BA9EC;
    case 0x7F2BA9F0u: goto label_7F2BA9F0;
    case 0x7F2BA9F4u: goto label_7F2BA9F4;
    case 0x7F2BA9F8u: goto label_7F2BA9F8;
    case 0x7F2BA9FCu: goto label_7F2BA9FC;
    case 0x7F2BAA00u: goto label_7F2BAA00;
    case 0x7F2BAA04u: goto label_7F2BAA04;
    case 0x7F2BAA08u: goto label_7F2BAA08;
    case 0x7F2BAA0Cu: goto label_7F2BAA0C;
    case 0x7F2BAA10u: goto label_7F2BAA10;
    case 0x7F2BAA14u: goto label_7F2BAA14;
    case 0x7F2BAA18u: goto label_7F2BAA18;
    case 0x7F2BAA1Cu: goto label_7F2BAA1C;
    case 0x7F2BAA20u: goto label_7F2BAA20;
    case 0x7F2BAA24u: goto label_7F2BAA24;
    case 0x7F2BAA28u: goto label_7F2BAA28;
    case 0x7F2BAA2Cu: goto label_7F2BAA2C;
    case 0x7F2BAA30u: goto label_7F2BAA30;
    case 0x7F2BAA34u: goto label_7F2BAA34;
    case 0x7F2BAA38u: goto label_7F2BAA38;
    case 0x7F2BAA3Cu: goto label_7F2BAA3C;
    case 0x7F2BAA40u: goto label_7F2BAA40;
    case 0x7F2BAA44u: goto label_7F2BAA44;
    case 0x7F2BAA48u: goto label_7F2BAA48;
    case 0x7F2BAA4Cu: goto label_7F2BAA4C;
    case 0x7F2BAA50u: goto label_7F2BAA50;
    case 0x7F2BAA54u: goto label_7F2BAA54;
    case 0x7F2BAA58u: goto label_7F2BAA58;
    case 0x7F2BAA5Cu: goto label_7F2BAA5C;
    case 0x7F2BAA60u: goto label_7F2BAA60;
    case 0x7F2BAA64u: goto label_7F2BAA64;
    case 0x7F2BAA68u: goto label_7F2BAA68;
    case 0x7F2BAA6Cu: goto label_7F2BAA6C;
    case 0x7F2BAA70u: goto label_7F2BAA70;
    case 0x7F2BAA74u: goto label_7F2BAA74;
    case 0x7F2BAA78u: goto label_7F2BAA78;
    case 0x7F2BAA7Cu: goto label_7F2BAA7C;
    case 0x7F2BAA80u: goto label_7F2BAA80;
    case 0x7F2BAA84u: goto label_7F2BAA84;
    case 0x7F2BAA88u: goto label_7F2BAA88;
    case 0x7F2BAA8Cu: goto label_7F2BAA8C;
    case 0x7F2BAA90u: goto label_7F2BAA90;
    case 0x7F2BAA94u: goto label_7F2BAA94;
    case 0x7F2BAA98u: goto label_7F2BAA98;
    case 0x7F2BAA9Cu: goto label_7F2BAA9C;
    case 0x7F2BAAA0u: goto label_7F2BAAA0;
    case 0x7F2BAAA4u: goto label_7F2BAAA4;
    case 0x7F2BAAA8u: goto label_7F2BAAA8;
    case 0x7F2BAAACu: goto label_7F2BAAAC;
    case 0x7F2BAAB0u: goto label_7F2BAAB0;
    case 0x7F2BAAB4u: goto label_7F2BAAB4;
    case 0x7F2BAAB8u: goto label_7F2BAAB8;
    case 0x7F2BAABCu: goto label_7F2BAABC;
    case 0x7F2BAAC0u: goto label_7F2BAAC0;
    case 0x7F2BAAC4u: goto label_7F2BAAC4;
    case 0x7F2BAAC8u: goto label_7F2BAAC8;
    case 0x7F2BAACCu: goto label_7F2BAACC;
    case 0x7F2BAAD0u: goto label_7F2BAAD0;
    case 0x7F2BAAD4u: goto label_7F2BAAD4;
    case 0x7F2BAAD8u: goto label_7F2BAAD8;
    case 0x7F2BAADCu: goto label_7F2BAADC;
    case 0x7F2BAAE0u: goto label_7F2BAAE0;
    case 0x7F2BAAE4u: goto label_7F2BAAE4;
    case 0x7F2BAAE8u: goto label_7F2BAAE8;
    case 0x7F2BAAECu: goto label_7F2BAAEC;
    case 0x7F2BAAF0u: goto label_7F2BAAF0;
    case 0x7F2BAAF4u: goto label_7F2BAAF4;
    case 0x7F2BAAF8u: goto label_7F2BAAF8;
    case 0x7F2BAAFCu: goto label_7F2BAAFC;
    case 0x7F2BAB00u: goto label_7F2BAB00;
    case 0x7F2BAB04u: goto label_7F2BAB04;
    case 0x7F2BAB08u: goto label_7F2BAB08;
    case 0x7F2BAB0Cu: goto label_7F2BAB0C;
    case 0x7F2BAB10u: goto label_7F2BAB10;
    case 0x7F2BAB14u: goto label_7F2BAB14;
    case 0x7F2BAB18u: goto label_7F2BAB18;
    case 0x7F2BAB1Cu: goto label_7F2BAB1C;
    case 0x7F2BAB20u: goto label_7F2BAB20;
    case 0x7F2BAB24u: goto label_7F2BAB24;
    case 0x7F2BAB28u: goto label_7F2BAB28;
    case 0x7F2BAB2Cu: goto label_7F2BAB2C;
    case 0x7F2BAB30u: goto label_7F2BAB30;
    case 0x7F2BAB34u: goto label_7F2BAB34;
    case 0x7F2BAB38u: goto label_7F2BAB38;
    case 0x7F2BAB3Cu: goto label_7F2BAB3C;
    case 0x7F2BAB40u: goto label_7F2BAB40;
    case 0x7F2BAB44u: goto label_7F2BAB44;
    case 0x7F2BAB48u: goto label_7F2BAB48;
    case 0x7F2BAB4Cu: goto label_7F2BAB4C;
    case 0x7F2BAB50u: goto label_7F2BAB50;
    case 0x7F2BAB54u: goto label_7F2BAB54;
    case 0x7F2BAB58u: goto label_7F2BAB58;
    case 0x7F2BAB5Cu: goto label_7F2BAB5C;
    case 0x7F2BAB60u: goto label_7F2BAB60;
    case 0x7F2BAB64u: goto label_7F2BAB64;
    case 0x7F2BAB68u: goto label_7F2BAB68;
    case 0x7F2BAB6Cu: goto label_7F2BAB6C;
    case 0x7F2BAB70u: goto label_7F2BAB70;
    case 0x7F2BAB74u: goto label_7F2BAB74;
    case 0x7F2BAB78u: goto label_7F2BAB78;
    case 0x7F2BAB7Cu: goto label_7F2BAB7C;
    case 0x7F2BAB80u: goto label_7F2BAB80;
    case 0x7F2BAB84u: goto label_7F2BAB84;
    case 0x7F2BAB88u: goto label_7F2BAB88;
    case 0x7F2BAB8Cu: goto label_7F2BAB8C;
    case 0x7F2BAB90u: goto label_7F2BAB90;
    case 0x7F2BAB94u: goto label_7F2BAB94;
    case 0x7F2BAB98u: goto label_7F2BAB98;
    case 0x7F2BAB9Cu: goto label_7F2BAB9C;
    case 0x7F2BABA0u: goto label_7F2BABA0;
    case 0x7F2BABA4u: goto label_7F2BABA4;
    case 0x7F2BABA8u: goto label_7F2BABA8;
    case 0x7F2BABACu: goto label_7F2BABAC;
    case 0x7F2BABB0u: goto label_7F2BABB0;
    case 0x7F2BABB4u: goto label_7F2BABB4;
    case 0x7F2BABB8u: goto label_7F2BABB8;
    case 0x7F2BABBCu: goto label_7F2BABBC;
    case 0x7F2BABC0u: goto label_7F2BABC0;
    case 0x7F2BABC4u: goto label_7F2BABC4;
    case 0x7F2BABC8u: goto label_7F2BABC8;
    case 0x7F2BABCCu: goto label_7F2BABCC;
    case 0x7F2BABD0u: goto label_7F2BABD0;
    case 0x7F2BABD4u: goto label_7F2BABD4;
    case 0x7F2BABD8u: goto label_7F2BABD8;
    case 0x7F2BABDCu: goto label_7F2BABDC;
    case 0x7F2BABE0u: goto label_7F2BABE0;
    case 0x7F2BABE4u: goto label_7F2BABE4;
    case 0x7F2BABE8u: goto label_7F2BABE8;
    case 0x7F2BABECu: goto label_7F2BABEC;
    case 0x7F2BABF0u: goto label_7F2BABF0;
    case 0x7F2BABF4u: goto label_7F2BABF4;
    case 0x7F2BABF8u: goto label_7F2BABF8;
    case 0x7F2BABFCu: goto label_7F2BABFC;
    case 0x7F2BAC00u: goto label_7F2BAC00;
    case 0x7F2BAC04u: goto label_7F2BAC04;
    case 0x7F2BAC08u: goto label_7F2BAC08;
    case 0x7F2BAC0Cu: goto label_7F2BAC0C;
    case 0x7F2BAC10u: goto label_7F2BAC10;
    case 0x7F2BAC14u: goto label_7F2BAC14;
    case 0x7F2BAC18u: goto label_7F2BAC18;
    case 0x7F2BAC1Cu: goto label_7F2BAC1C;
    case 0x7F2BAC20u: goto label_7F2BAC20;
    case 0x7F2BAC24u: goto label_7F2BAC24;
    case 0x7F2BAC28u: goto label_7F2BAC28;
    case 0x7F2BAC2Cu: goto label_7F2BAC2C;
    case 0x7F2BAC30u: goto label_7F2BAC30;
    case 0x7F2BAC34u: goto label_7F2BAC34;
    case 0x7F2BAC38u: goto label_7F2BAC38;
    case 0x7F2BAC3Cu: goto label_7F2BAC3C;
    case 0x7F2BAC40u: goto label_7F2BAC40;
    case 0x7F2BAC44u: goto label_7F2BAC44;
    case 0x7F2BAC48u: goto label_7F2BAC48;
    case 0x7F2BAC4Cu: goto label_7F2BAC4C;
    case 0x7F2BAC50u: goto label_7F2BAC50;
    case 0x7F2BAC54u: goto label_7F2BAC54;
    case 0x7F2BAC58u: goto label_7F2BAC58;
    case 0x7F2BAC5Cu: goto label_7F2BAC5C;
    case 0x7F2BAC60u: goto label_7F2BAC60;
    case 0x7F2BAC64u: goto label_7F2BAC64;
    case 0x7F2BAC68u: goto label_7F2BAC68;
    case 0x7F2BAC6Cu: goto label_7F2BAC6C;
    case 0x7F2BAC70u: goto label_7F2BAC70;
    case 0x7F2BAC74u: goto label_7F2BAC74;
    case 0x7F2BAC78u: goto label_7F2BAC78;
    case 0x7F2BAC7Cu: goto label_7F2BAC7C;
    case 0x7F2BAC80u: goto label_7F2BAC80;
    case 0x7F2BAC84u: goto label_7F2BAC84;
    case 0x7F2BAC88u: goto label_7F2BAC88;
    case 0x7F2BAC8Cu: goto label_7F2BAC8C;
    case 0x7F2BAC90u: goto label_7F2BAC90;
    case 0x7F2BAC94u: goto label_7F2BAC94;
    case 0x7F2BAC98u: goto label_7F2BAC98;
    case 0x7F2BAC9Cu: goto label_7F2BAC9C;
    case 0x7F2BACA0u: goto label_7F2BACA0;
    case 0x7F2BACA4u: goto label_7F2BACA4;
    case 0x7F2BACA8u: goto label_7F2BACA8;
    case 0x7F2BACACu: goto label_7F2BACAC;
    case 0x7F2BACB0u: goto label_7F2BACB0;
    case 0x7F2BACB4u: goto label_7F2BACB4;
    case 0x7F2BACB8u: goto label_7F2BACB8;
    case 0x7F2BACBCu: goto label_7F2BACBC;
    case 0x7F2BACC0u: goto label_7F2BACC0;
    case 0x7F2BACC4u: goto label_7F2BACC4;
    case 0x7F2BACC8u: goto label_7F2BACC8;
    case 0x7F2BACCCu: goto label_7F2BACCC;
    case 0x7F2BACD0u: goto label_7F2BACD0;
    case 0x7F2BACD4u: goto label_7F2BACD4;
    case 0x7F2BACD8u: goto label_7F2BACD8;
    case 0x7F2BACDCu: goto label_7F2BACDC;
    case 0x7F2BACE0u: goto label_7F2BACE0;
    case 0x7F2BACE4u: goto label_7F2BACE4;
    case 0x7F2BACE8u: goto label_7F2BACE8;
    case 0x7F2BACECu: goto label_7F2BACEC;
    case 0x7F2BACF0u: goto label_7F2BACF0;
    case 0x7F2BACF4u: goto label_7F2BACF4;
    case 0x7F2BACF8u: goto label_7F2BACF8;
    case 0x7F2BACFCu: goto label_7F2BACFC;
    case 0x7F2BAD00u: goto label_7F2BAD00;
    case 0x7F2BAD04u: goto label_7F2BAD04;
    case 0x7F2BAD08u: goto label_7F2BAD08;
    case 0x7F2BAD0Cu: goto label_7F2BAD0C;
    case 0x7F2BAD10u: goto label_7F2BAD10;
    case 0x7F2BAD14u: goto label_7F2BAD14;
    case 0x7F2BAD18u: goto label_7F2BAD18;
    case 0x7F2BAD1Cu: goto label_7F2BAD1C;
    case 0x7F2BAD20u: goto label_7F2BAD20;
    case 0x7F2BAD24u: goto label_7F2BAD24;
    case 0x7F2BAD28u: goto label_7F2BAD28;
    case 0x7F2BAD2Cu: goto label_7F2BAD2C;
    case 0x7F2BAD30u: goto label_7F2BAD30;
    case 0x7F2BAD34u: goto label_7F2BAD34;
    case 0x7F2BAD38u: goto label_7F2BAD38;
    case 0x7F2BAD3Cu: goto label_7F2BAD3C;
    case 0x7F2BAD40u: goto label_7F2BAD40;
    case 0x7F2BAD44u: goto label_7F2BAD44;
    case 0x7F2BAD48u: goto label_7F2BAD48;
    case 0x7F2BAD4Cu: goto label_7F2BAD4C;
    case 0x7F2BAD50u: goto label_7F2BAD50;
    case 0x7F2BAD54u: goto label_7F2BAD54;
    case 0x7F2BAD58u: goto label_7F2BAD58;
    case 0x7F2BAD5Cu: goto label_7F2BAD5C;
    case 0x7F2BAD60u: goto label_7F2BAD60;
    case 0x7F2BAD64u: goto label_7F2BAD64;
    case 0x7F2BAD68u: goto label_7F2BAD68;
    case 0x7F2BAD6Cu: goto label_7F2BAD6C;
    case 0x7F2BAD70u: goto label_7F2BAD70;
    case 0x7F2BAD74u: goto label_7F2BAD74;
    case 0x7F2BAD78u: goto label_7F2BAD78;
    case 0x7F2BAD7Cu: goto label_7F2BAD7C;
    case 0x7F2BAD80u: goto label_7F2BAD80;
    case 0x7F2BAD84u: goto label_7F2BAD84;
    case 0x7F2BAD88u: goto label_7F2BAD88;
    case 0x7F2BAD8Cu: goto label_7F2BAD8C;
    case 0x7F2BAD90u: goto label_7F2BAD90;
    case 0x7F2BAD94u: goto label_7F2BAD94;
    case 0x7F2BAD98u: goto label_7F2BAD98;
    case 0x7F2BAD9Cu: goto label_7F2BAD9C;
    case 0x7F2BADA0u: goto label_7F2BADA0;
    case 0x7F2BADA4u: goto label_7F2BADA4;
    case 0x7F2BADA8u: goto label_7F2BADA8;
    case 0x7F2BADACu: goto label_7F2BADAC;
    case 0x7F2BADB0u: goto label_7F2BADB0;
    case 0x7F2BADB4u: goto label_7F2BADB4;
    case 0x7F2BADB8u: goto label_7F2BADB8;
    case 0x7F2BADBCu: goto label_7F2BADBC;
    case 0x7F2BADC0u: goto label_7F2BADC0;
    case 0x7F2BADC4u: goto label_7F2BADC4;
    case 0x7F2BADC8u: goto label_7F2BADC8;
    case 0x7F2BADCCu: goto label_7F2BADCC;
    case 0x7F2BADD0u: goto label_7F2BADD0;
    case 0x7F2BADD4u: goto label_7F2BADD4;
    case 0x7F2BADD8u: goto label_7F2BADD8;
    case 0x7F2BADDCu: goto label_7F2BADDC;
    case 0x7F2BADE0u: goto label_7F2BADE0;
    case 0x7F2BADE4u: goto label_7F2BADE4;
    case 0x7F2BADE8u: goto label_7F2BADE8;
    case 0x7F2BADECu: goto label_7F2BADEC;
    case 0x7F2BADF0u: goto label_7F2BADF0;
    case 0x7F2BADF4u: goto label_7F2BADF4;
    case 0x7F2BADF8u: goto label_7F2BADF8;
    case 0x7F2BADFCu: goto label_7F2BADFC;
    case 0x7F2BAE00u: goto label_7F2BAE00;
    case 0x7F2BAE04u: goto label_7F2BAE04;
    case 0x7F2BAE08u: goto label_7F2BAE08;
    case 0x7F2BAE0Cu: goto label_7F2BAE0C;
    case 0x7F2BAE10u: goto label_7F2BAE10;
    case 0x7F2BAE14u: goto label_7F2BAE14;
    case 0x7F2BAE18u: goto label_7F2BAE18;
    case 0x7F2BAE1Cu: goto label_7F2BAE1C;
    case 0x7F2BAE20u: goto label_7F2BAE20;
    case 0x7F2BAE24u: goto label_7F2BAE24;
    case 0x7F2BAE28u: goto label_7F2BAE28;
    case 0x7F2BAE2Cu: goto label_7F2BAE2C;
    case 0x7F2BAE30u: goto label_7F2BAE30;
    case 0x7F2BAE34u: goto label_7F2BAE34;
    case 0x7F2BAE38u: goto label_7F2BAE38;
    case 0x7F2BAE3Cu: goto label_7F2BAE3C;
    case 0x7F2BAE40u: goto label_7F2BAE40;
    case 0x7F2BAE44u: goto label_7F2BAE44;
    case 0x7F2BAE48u: goto label_7F2BAE48;
    case 0x7F2BAE4Cu: goto label_7F2BAE4C;
    case 0x7F2BAE50u: goto label_7F2BAE50;
    case 0x7F2BAE54u: goto label_7F2BAE54;
    case 0x7F2BAE58u: goto label_7F2BAE58;
    case 0x7F2BAE5Cu: goto label_7F2BAE5C;
    case 0x7F2BAE60u: goto label_7F2BAE60;
    case 0x7F2BAE64u: goto label_7F2BAE64;
    case 0x7F2BAE68u: goto label_7F2BAE68;
    case 0x7F2BAE6Cu: goto label_7F2BAE6C;
    case 0x7F2BAE70u: goto label_7F2BAE70;
    case 0x7F2BAE74u: goto label_7F2BAE74;
    case 0x7F2BAE78u: goto label_7F2BAE78;
    case 0x7F2BAE7Cu: goto label_7F2BAE7C;
    case 0x7F2BAE80u: goto label_7F2BAE80;
    case 0x7F2BAE84u: goto label_7F2BAE84;
    case 0x7F2BAE88u: goto label_7F2BAE88;
    case 0x7F2BAE8Cu: goto label_7F2BAE8C;
    case 0x7F2BAE90u: goto label_7F2BAE90;
    case 0x7F2BAE94u: goto label_7F2BAE94;
    case 0x7F2BAE98u: goto label_7F2BAE98;
    case 0x7F2BAE9Cu: goto label_7F2BAE9C;
    case 0x7F2BAEA0u: goto label_7F2BAEA0;
    case 0x7F2BAEA4u: goto label_7F2BAEA4;
    case 0x7F2BAEA8u: goto label_7F2BAEA8;
    case 0x7F2BAEACu: goto label_7F2BAEAC;
    case 0x7F2BAEB0u: goto label_7F2BAEB0;
    case 0x7F2BAEB4u: goto label_7F2BAEB4;
    case 0x7F2BAEB8u: goto label_7F2BAEB8;
    case 0x7F2BAEBCu: goto label_7F2BAEBC;
    case 0x7F2BAEC0u: goto label_7F2BAEC0;
    case 0x7F2BAEC4u: goto label_7F2BAEC4;
    case 0x7F2BAEC8u: goto label_7F2BAEC8;
    case 0x7F2BAECCu: goto label_7F2BAECC;
    case 0x7F2BAED0u: goto label_7F2BAED0;
    case 0x7F2BAED4u: goto label_7F2BAED4;
    case 0x7F2BAED8u: goto label_7F2BAED8;
    case 0x7F2BAEDCu: goto label_7F2BAEDC;
    case 0x7F2BAEE0u: goto label_7F2BAEE0;
    case 0x7F2BAEE4u: goto label_7F2BAEE4;
    case 0x7F2BAEE8u: goto label_7F2BAEE8;
    case 0x7F2BAEECu: goto label_7F2BAEEC;
    case 0x7F2BAEF0u: goto label_7F2BAEF0;
    case 0x7F2BAEF4u: goto label_7F2BAEF4;
    case 0x7F2BAEF8u: goto label_7F2BAEF8;
    case 0x7F2BAEFCu: goto label_7F2BAEFC;
    case 0x7F2BAF00u: goto label_7F2BAF00;
    case 0x7F2BAF04u: goto label_7F2BAF04;
    case 0x7F2BAF08u: goto label_7F2BAF08;
    case 0x7F2BAF0Cu: goto label_7F2BAF0C;
    case 0x7F2BAF10u: goto label_7F2BAF10;
    case 0x7F2BAF14u: goto label_7F2BAF14;
    case 0x7F2BAF18u: goto label_7F2BAF18;
    case 0x7F2BAF1Cu: goto label_7F2BAF1C;
    case 0x7F2BAF20u: goto label_7F2BAF20;
    case 0x7F2BAF24u: goto label_7F2BAF24;
    case 0x7F2BAF28u: goto label_7F2BAF28;
    case 0x7F2BAF2Cu: goto label_7F2BAF2C;
    case 0x7F2BAF30u: goto label_7F2BAF30;
    case 0x7F2BAF34u: goto label_7F2BAF34;
    case 0x7F2BAF38u: goto label_7F2BAF38;
    case 0x7F2BAF3Cu: goto label_7F2BAF3C;
    case 0x7F2BAF40u: goto label_7F2BAF40;
    case 0x7F2BAF44u: goto label_7F2BAF44;
    case 0x7F2BAF48u: goto label_7F2BAF48;
    case 0x7F2BAF4Cu: goto label_7F2BAF4C;
    case 0x7F2BAF50u: goto label_7F2BAF50;
    case 0x7F2BAF54u: goto label_7F2BAF54;
    case 0x7F2BAF58u: goto label_7F2BAF58;
    case 0x7F2BAF5Cu: goto label_7F2BAF5C;
    case 0x7F2BAF60u: goto label_7F2BAF60;
    case 0x7F2BAF64u: goto label_7F2BAF64;
    case 0x7F2BAF68u: goto label_7F2BAF68;
    case 0x7F2BAF6Cu: goto label_7F2BAF6C;
    case 0x7F2BAF70u: goto label_7F2BAF70;
    case 0x7F2BAF74u: goto label_7F2BAF74;
    case 0x7F2BAF78u: goto label_7F2BAF78;
    case 0x7F2BAF7Cu: goto label_7F2BAF7C;
    case 0x7F2BAF80u: goto label_7F2BAF80;
    case 0x7F2BAF84u: goto label_7F2BAF84;
    case 0x7F2BAF88u: goto label_7F2BAF88;
    case 0x7F2BAF8Cu: goto label_7F2BAF8C;
    case 0x7F2BAF90u: goto label_7F2BAF90;
    case 0x7F2BAF94u: goto label_7F2BAF94;
    case 0x7F2BAF98u: goto label_7F2BAF98;
    case 0x7F2BAF9Cu: goto label_7F2BAF9C;
    case 0x7F2BAFA0u: goto label_7F2BAFA0;
    case 0x7F2BAFA4u: goto label_7F2BAFA4;
    case 0x7F2BAFA8u: goto label_7F2BAFA8;
    case 0x7F2BAFACu: goto label_7F2BAFAC;
    case 0x7F2BAFB0u: goto label_7F2BAFB0;
    case 0x7F2BAFB4u: goto label_7F2BAFB4;
    case 0x7F2BAFB8u: goto label_7F2BAFB8;
    case 0x7F2BAFBCu: goto label_7F2BAFBC;
    case 0x7F2BAFC0u: goto label_7F2BAFC0;
    case 0x7F2BAFC4u: goto label_7F2BAFC4;
    case 0x7F2BAFC8u: goto label_7F2BAFC8;
    case 0x7F2BAFCCu: goto label_7F2BAFCC;
    case 0x7F2BAFD0u: goto label_7F2BAFD0;
    case 0x7F2BAFD4u: goto label_7F2BAFD4;
    case 0x7F2BAFD8u: goto label_7F2BAFD8;
    case 0x7F2BAFDCu: goto label_7F2BAFDC;
    case 0x7F2BAFE0u: goto label_7F2BAFE0;
    case 0x7F2BAFE4u: goto label_7F2BAFE4;
    case 0x7F2BAFE8u: goto label_7F2BAFE8;
    case 0x7F2BAFECu: goto label_7F2BAFEC;
    case 0x7F2BAFF0u: goto label_7F2BAFF0;
    case 0x7F2BAFF4u: goto label_7F2BAFF4;
    case 0x7F2BAFF8u: goto label_7F2BAFF8;
    case 0x7F2BAFFCu: goto label_7F2BAFFC;
    case 0x7F2BB000u: goto label_7F2BB000;
    case 0x7F2BB004u: goto label_7F2BB004;
    case 0x7F2BB008u: goto label_7F2BB008;
    case 0x7F2BB00Cu: goto label_7F2BB00C;
    case 0x7F2BB010u: goto label_7F2BB010;
    case 0x7F2BB014u: goto label_7F2BB014;
    case 0x7F2BB018u: goto label_7F2BB018;
    case 0x7F2BB01Cu: goto label_7F2BB01C;
    case 0x7F2BB020u: goto label_7F2BB020;
    case 0x7F2BB024u: goto label_7F2BB024;
    case 0x7F2BB028u: goto label_7F2BB028;
    case 0x7F2BB02Cu: goto label_7F2BB02C;
    case 0x7F2BB030u: goto label_7F2BB030;
    case 0x7F2BB034u: goto label_7F2BB034;
    case 0x7F2BB038u: goto label_7F2BB038;
    case 0x7F2BB03Cu: goto label_7F2BB03C;
    case 0x7F2BB040u: goto label_7F2BB040;
    case 0x7F2BB044u: goto label_7F2BB044;
    case 0x7F2BB048u: goto label_7F2BB048;
    case 0x7F2BB04Cu: goto label_7F2BB04C;
    case 0x7F2BB050u: goto label_7F2BB050;
    case 0x7F2BB054u: goto label_7F2BB054;
    case 0x7F2BB058u: goto label_7F2BB058;
    case 0x7F2BB05Cu: goto label_7F2BB05C;
    case 0x7F2BB060u: goto label_7F2BB060;
    case 0x7F2BB064u: goto label_7F2BB064;
    case 0x7F2BB068u: goto label_7F2BB068;
    case 0x7F2BB06Cu: goto label_7F2BB06C;
    case 0x7F2BB070u: goto label_7F2BB070;
    case 0x7F2BB074u: goto label_7F2BB074;
    case 0x7F2BB078u: goto label_7F2BB078;
    case 0x7F2BB07Cu: goto label_7F2BB07C;
    case 0x7F2BB080u: goto label_7F2BB080;
    case 0x7F2BB084u: goto label_7F2BB084;
    case 0x7F2BB088u: goto label_7F2BB088;
    case 0x7F2BB08Cu: goto label_7F2BB08C;
    case 0x7F2BB090u: goto label_7F2BB090;
    case 0x7F2BB094u: goto label_7F2BB094;
    case 0x7F2BB098u: goto label_7F2BB098;
    case 0x7F2BB09Cu: goto label_7F2BB09C;
    case 0x7F2BB0A0u: goto label_7F2BB0A0;
    case 0x7F2BB0A4u: goto label_7F2BB0A4;
    case 0x7F2BB0A8u: goto label_7F2BB0A8;
    case 0x7F2BB0ACu: goto label_7F2BB0AC;
    case 0x7F2BB0B0u: goto label_7F2BB0B0;
    case 0x7F2BB0B4u: goto label_7F2BB0B4;
    case 0x7F2BB0B8u: goto label_7F2BB0B8;
    case 0x7F2BB0BCu: goto label_7F2BB0BC;
    case 0x7F2BB0C0u: goto label_7F2BB0C0;
    case 0x7F2BB0C4u: goto label_7F2BB0C4;
    case 0x7F2BB0C8u: goto label_7F2BB0C8;
    case 0x7F2BB0CCu: goto label_7F2BB0CC;
    case 0x7F2BB0D0u: goto label_7F2BB0D0;
    case 0x7F2BB0D4u: goto label_7F2BB0D4;
    case 0x7F2BB0D8u: goto label_7F2BB0D8;
    case 0x7F2BB0DCu: goto label_7F2BB0DC;
    case 0x7F2BB0E0u: goto label_7F2BB0E0;
    case 0x7F2BB0E4u: goto label_7F2BB0E4;
    case 0x7F2BB0E8u: goto label_7F2BB0E8;
    case 0x7F2BB0ECu: goto label_7F2BB0EC;
    case 0x7F2BB0F0u: goto label_7F2BB0F0;
    case 0x7F2BB0F4u: goto label_7F2BB0F4;
    case 0x7F2BB0F8u: goto label_7F2BB0F8;
    case 0x7F2BB0FCu: goto label_7F2BB0FC;
    case 0x7F2BB100u: goto label_7F2BB100;
    case 0x7F2BB104u: goto label_7F2BB104;
    case 0x7F2BB108u: goto label_7F2BB108;
    case 0x7F2BB10Cu: goto label_7F2BB10C;
    case 0x7F2BB110u: goto label_7F2BB110;
    case 0x7F2BB114u: goto label_7F2BB114;
    case 0x7F2BB118u: goto label_7F2BB118;
    case 0x7F2BB11Cu: goto label_7F2BB11C;
    case 0x7F2BB120u: goto label_7F2BB120;
    case 0x7F2BB124u: goto label_7F2BB124;
    case 0x7F2BB128u: goto label_7F2BB128;
    case 0x7F2BB12Cu: goto label_7F2BB12C;
    case 0x7F2BB130u: goto label_7F2BB130;
    case 0x7F2BB134u: goto label_7F2BB134;
    case 0x7F2BB138u: goto label_7F2BB138;
    case 0x7F2BB13Cu: goto label_7F2BB13C;
    case 0x7F2BB140u: goto label_7F2BB140;
    case 0x7F2BB144u: goto label_7F2BB144;
    case 0x7F2BB148u: goto label_7F2BB148;
    case 0x7F2BB14Cu: goto label_7F2BB14C;
    case 0x7F2BB150u: goto label_7F2BB150;
    case 0x7F2BB154u: goto label_7F2BB154;
    case 0x7F2BB158u: goto label_7F2BB158;
    case 0x7F2BB15Cu: goto label_7F2BB15C;
    case 0x7F2BB160u: goto label_7F2BB160;
    case 0x7F2BB164u: goto label_7F2BB164;
    case 0x7F2BB168u: goto label_7F2BB168;
    case 0x7F2BB16Cu: goto label_7F2BB16C;
    case 0x7F2BB170u: goto label_7F2BB170;
    case 0x7F2BB174u: goto label_7F2BB174;
    case 0x7F2BB178u: goto label_7F2BB178;
    case 0x7F2BB17Cu: goto label_7F2BB17C;
    case 0x7F2BB180u: goto label_7F2BB180;
    case 0x7F2BB184u: goto label_7F2BB184;
    case 0x7F2BB188u: goto label_7F2BB188;
    case 0x7F2BB18Cu: goto label_7F2BB18C;
    case 0x7F2BB190u: goto label_7F2BB190;
    case 0x7F2BB194u: goto label_7F2BB194;
    case 0x7F2BB198u: goto label_7F2BB198;
    case 0x7F2BB19Cu: goto label_7F2BB19C;
    case 0x7F2BB1A0u: goto label_7F2BB1A0;
    case 0x7F2BB1A4u: goto label_7F2BB1A4;
    case 0x7F2BB1A8u: goto label_7F2BB1A8;
    case 0x7F2BB1ACu: goto label_7F2BB1AC;
    case 0x7F2BB1B0u: goto label_7F2BB1B0;
    case 0x7F2BB1B4u: goto label_7F2BB1B4;
    case 0x7F2BB1B8u: goto label_7F2BB1B8;
    case 0x7F2BB1BCu: goto label_7F2BB1BC;
    case 0x7F2BB1C0u: goto label_7F2BB1C0;
    case 0x7F2BB1C4u: goto label_7F2BB1C4;
    case 0x7F2BB1C8u: goto label_7F2BB1C8;
    case 0x7F2BB1CCu: goto label_7F2BB1CC;
    case 0x7F2BB1D0u: goto label_7F2BB1D0;
    case 0x7F2BB1D4u: goto label_7F2BB1D4;
    case 0x7F2BB1D8u: goto label_7F2BB1D8;
    case 0x7F2BB1DCu: goto label_7F2BB1DC;
    case 0x7F2BB1E0u: goto label_7F2BB1E0;
    case 0x7F2BB1E4u: goto label_7F2BB1E4;
    case 0x7F2BB1E8u: goto label_7F2BB1E8;
    case 0x7F2BB1ECu: goto label_7F2BB1EC;
    case 0x7F2BB1F0u: goto label_7F2BB1F0;
    case 0x7F2BB1F4u: goto label_7F2BB1F4;
    case 0x7F2BB1F8u: goto label_7F2BB1F8;
    case 0x7F2BB1FCu: goto label_7F2BB1FC;
    case 0x7F2BB200u: goto label_7F2BB200;
    case 0x7F2BB204u: goto label_7F2BB204;
    case 0x7F2BB208u: goto label_7F2BB208;
    case 0x7F2BB20Cu: goto label_7F2BB20C;
    case 0x7F2BB210u: goto label_7F2BB210;
    case 0x7F2BB214u: goto label_7F2BB214;
    case 0x7F2BB218u: goto label_7F2BB218;
    case 0x7F2BB21Cu: goto label_7F2BB21C;
    case 0x7F2BB220u: goto label_7F2BB220;
    case 0x7F2BB224u: goto label_7F2BB224;
    case 0x7F2BB228u: goto label_7F2BB228;
    case 0x7F2BB22Cu: goto label_7F2BB22C;
    case 0x7F2BB230u: goto label_7F2BB230;
    case 0x7F2BB234u: goto label_7F2BB234;
    case 0x7F2BB238u: goto label_7F2BB238;
    case 0x7F2BB23Cu: goto label_7F2BB23C;
    case 0x7F2BB240u: goto label_7F2BB240;
    case 0x7F2BB244u: goto label_7F2BB244;
    case 0x7F2BB248u: goto label_7F2BB248;
    case 0x7F2BB24Cu: goto label_7F2BB24C;
    case 0x7F2BB250u: goto label_7F2BB250;
    case 0x7F2BB254u: goto label_7F2BB254;
    case 0x7F2BB258u: goto label_7F2BB258;
    case 0x7F2BB25Cu: goto label_7F2BB25C;
    case 0x7F2BB260u: goto label_7F2BB260;
    case 0x7F2BB264u: goto label_7F2BB264;
    case 0x7F2BB268u: goto label_7F2BB268;
    case 0x7F2BB26Cu: goto label_7F2BB26C;
    case 0x7F2BB270u: goto label_7F2BB270;
    case 0x7F2BB274u: goto label_7F2BB274;
    case 0x7F2BB278u: goto label_7F2BB278;
    case 0x7F2BB27Cu: goto label_7F2BB27C;
    case 0x7F2BB280u: goto label_7F2BB280;
    case 0x7F2BB284u: goto label_7F2BB284;
    case 0x7F2BB288u: goto label_7F2BB288;
    case 0x7F2BB28Cu: goto label_7F2BB28C;
    case 0x7F2BB290u: goto label_7F2BB290;
    case 0x7F2BB294u: goto label_7F2BB294;
    case 0x7F2BB298u: goto label_7F2BB298;
    case 0x7F2BB29Cu: goto label_7F2BB29C;
    case 0x7F2BB2A0u: goto label_7F2BB2A0;
    case 0x7F2BB2A4u: goto label_7F2BB2A4;
    case 0x7F2BB2A8u: goto label_7F2BB2A8;
    case 0x7F2BB2ACu: goto label_7F2BB2AC;
    case 0x7F2BB2B0u: goto label_7F2BB2B0;
    case 0x7F2BB2B4u: goto label_7F2BB2B4;
    case 0x7F2BB2B8u: goto label_7F2BB2B8;
    case 0x7F2BB2BCu: goto label_7F2BB2BC;
    case 0x7F2BB2C0u: goto label_7F2BB2C0;
    case 0x7F2BB2C4u: goto label_7F2BB2C4;
    case 0x7F2BB2C8u: goto label_7F2BB2C8;
    case 0x7F2BB2CCu: goto label_7F2BB2CC;
    case 0x7F2BB2D0u: goto label_7F2BB2D0;
    case 0x7F2BB2D4u: goto label_7F2BB2D4;
    case 0x7F2BB2D8u: goto label_7F2BB2D8;
    case 0x7F2BB2DCu: goto label_7F2BB2DC;
    case 0x7F2BB2E0u: goto label_7F2BB2E0;
    case 0x7F2BB2E4u: goto label_7F2BB2E4;
    case 0x7F2BB2E8u: goto label_7F2BB2E8;
    case 0x7F2BB2ECu: goto label_7F2BB2EC;
    case 0x7F2BB2F0u: goto label_7F2BB2F0;
    case 0x7F2BB2F4u: goto label_7F2BB2F4;
    case 0x7F2BB2F8u: goto label_7F2BB2F8;
    case 0x7F2BB2FCu: goto label_7F2BB2FC;
    case 0x7F2BB300u: goto label_7F2BB300;
    case 0x7F2BB304u: goto label_7F2BB304;
    case 0x7F2BB308u: goto label_7F2BB308;
    case 0x7F2BB30Cu: goto label_7F2BB30C;
    case 0x7F2BB310u: goto label_7F2BB310;
    case 0x7F2BB314u: goto label_7F2BB314;
    case 0x7F2BB318u: goto label_7F2BB318;
    case 0x7F2BB31Cu: goto label_7F2BB31C;
    case 0x7F2BB320u: goto label_7F2BB320;
    case 0x7F2BB324u: goto label_7F2BB324;
    case 0x7F2BB328u: goto label_7F2BB328;
    case 0x7F2BB32Cu: goto label_7F2BB32C;
    case 0x7F2BB330u: goto label_7F2BB330;
    case 0x7F2BB334u: goto label_7F2BB334;
    case 0x7F2BB338u: goto label_7F2BB338;
    case 0x7F2BB33Cu: goto label_7F2BB33C;
    case 0x7F2BB340u: goto label_7F2BB340;
    case 0x7F2BB344u: goto label_7F2BB344;
    case 0x7F2BB348u: goto label_7F2BB348;
    case 0x7F2BB34Cu: goto label_7F2BB34C;
    case 0x7F2BB350u: goto label_7F2BB350;
    case 0x7F2BB354u: goto label_7F2BB354;
    case 0x7F2BB358u: goto label_7F2BB358;
    case 0x7F2BB35Cu: goto label_7F2BB35C;
    case 0x7F2BB360u: goto label_7F2BB360;
    case 0x7F2BB364u: goto label_7F2BB364;
    case 0x7F2BB368u: goto label_7F2BB368;
    case 0x7F2BB36Cu: goto label_7F2BB36C;
    case 0x7F2BB370u: goto label_7F2BB370;
    case 0x7F2BB374u: goto label_7F2BB374;
    case 0x7F2BB378u: goto label_7F2BB378;
    case 0x7F2BB37Cu: goto label_7F2BB37C;
    case 0x7F2BB380u: goto label_7F2BB380;
    case 0x7F2BB384u: goto label_7F2BB384;
    case 0x7F2BB388u: goto label_7F2BB388;
    case 0x7F2BB38Cu: goto label_7F2BB38C;
    case 0x7F2BB390u: goto label_7F2BB390;
    case 0x7F2BB394u: goto label_7F2BB394;
    case 0x7F2BB398u: goto label_7F2BB398;
    case 0x7F2BB39Cu: goto label_7F2BB39C;
    case 0x7F2BB3A0u: goto label_7F2BB3A0;
    case 0x7F2BB3A4u: goto label_7F2BB3A4;
    case 0x7F2BB3A8u: goto label_7F2BB3A8;
    case 0x7F2BB3ACu: goto label_7F2BB3AC;
    case 0x7F2BB3B0u: goto label_7F2BB3B0;
    case 0x7F2BB3B4u: goto label_7F2BB3B4;
    case 0x7F2BB3B8u: goto label_7F2BB3B8;
    case 0x7F2BB3BCu: goto label_7F2BB3BC;
    case 0x7F2BB3C0u: goto label_7F2BB3C0;
    case 0x7F2BB3C4u: goto label_7F2BB3C4;
    case 0x7F2BB3C8u: goto label_7F2BB3C8;
    case 0x7F2BB3CCu: goto label_7F2BB3CC;
    case 0x7F2BB3D0u: goto label_7F2BB3D0;
    case 0x7F2BB3D4u: goto label_7F2BB3D4;
    case 0x7F2BB3D8u: goto label_7F2BB3D8;
    case 0x7F2BB3DCu: goto label_7F2BB3DC;
    case 0x7F2BB3E0u: goto label_7F2BB3E0;
    case 0x7F2BB3E4u: goto label_7F2BB3E4;
    case 0x7F2BB3E8u: goto label_7F2BB3E8;
    case 0x7F2BB3ECu: goto label_7F2BB3EC;
    case 0x7F2BB3F0u: goto label_7F2BB3F0;
    case 0x7F2BB3F4u: goto label_7F2BB3F4;
    case 0x7F2BB3F8u: goto label_7F2BB3F8;
    case 0x7F2BB3FCu: goto label_7F2BB3FC;
    case 0x7F2BB400u: goto label_7F2BB400;
    case 0x7F2BB404u: goto label_7F2BB404;
    case 0x7F2BB408u: goto label_7F2BB408;
    case 0x7F2BB40Cu: goto label_7F2BB40C;
    case 0x7F2BB410u: goto label_7F2BB410;
    case 0x7F2BB414u: goto label_7F2BB414;
    case 0x7F2BB418u: goto label_7F2BB418;
    case 0x7F2BB41Cu: goto label_7F2BB41C;
    case 0x7F2BB420u: goto label_7F2BB420;
    case 0x7F2BB424u: goto label_7F2BB424;
    case 0x7F2BB428u: goto label_7F2BB428;
    case 0x7F2BB42Cu: goto label_7F2BB42C;
    case 0x7F2BB430u: goto label_7F2BB430;
    case 0x7F2BB434u: goto label_7F2BB434;
    case 0x7F2BB438u: goto label_7F2BB438;
    case 0x7F2BB43Cu: goto label_7F2BB43C;
    case 0x7F2BB440u: goto label_7F2BB440;
    case 0x7F2BB444u: goto label_7F2BB444;
    case 0x7F2BB448u: goto label_7F2BB448;
    case 0x7F2BB44Cu: goto label_7F2BB44C;
    case 0x7F2BB450u: goto label_7F2BB450;
    case 0x7F2BB454u: goto label_7F2BB454;
    case 0x7F2BB458u: goto label_7F2BB458;
    case 0x7F2BB45Cu: goto label_7F2BB45C;
    case 0x7F2BB460u: goto label_7F2BB460;
    case 0x7F2BB464u: goto label_7F2BB464;
    case 0x7F2BB468u: goto label_7F2BB468;
    case 0x7F2BB46Cu: goto label_7F2BB46C;
    case 0x7F2BB470u: goto label_7F2BB470;
    case 0x7F2BB474u: goto label_7F2BB474;
    case 0x7F2BB478u: goto label_7F2BB478;
    case 0x7F2BB47Cu: goto label_7F2BB47C;
    case 0x7F2BB480u: goto label_7F2BB480;
    case 0x7F2BB484u: goto label_7F2BB484;
    case 0x7F2BB488u: goto label_7F2BB488;
    case 0x7F2BB48Cu: goto label_7F2BB48C;
    case 0x7F2BB490u: goto label_7F2BB490;
    case 0x7F2BB494u: goto label_7F2BB494;
    case 0x7F2BB498u: goto label_7F2BB498;
    case 0x7F2BB49Cu: goto label_7F2BB49C;
    case 0x7F2BB4A0u: goto label_7F2BB4A0;
    case 0x7F2BB4A4u: goto label_7F2BB4A4;
    case 0x7F2BB4A8u: goto label_7F2BB4A8;
    case 0x7F2BB4ACu: goto label_7F2BB4AC;
    case 0x7F2BB4B0u: goto label_7F2BB4B0;
    case 0x7F2BB4B4u: goto label_7F2BB4B4;
    case 0x7F2BB4B8u: goto label_7F2BB4B8;
    case 0x7F2BB4BCu: goto label_7F2BB4BC;
    case 0x7F2BB4C0u: goto label_7F2BB4C0;
    case 0x7F2BB4C4u: goto label_7F2BB4C4;
    case 0x7F2BB4C8u: goto label_7F2BB4C8;
    case 0x7F2BB4CCu: goto label_7F2BB4CC;
    case 0x7F2BB4D0u: goto label_7F2BB4D0;
    case 0x7F2BB4D4u: goto label_7F2BB4D4;
    case 0x7F2BB4D8u: goto label_7F2BB4D8;
    case 0x7F2BB4DCu: goto label_7F2BB4DC;
    case 0x7F2BB4E0u: goto label_7F2BB4E0;
    case 0x7F2BB4E4u: goto label_7F2BB4E4;
    case 0x7F2BB4E8u: goto label_7F2BB4E8;
    case 0x7F2BB4ECu: goto label_7F2BB4EC;
    case 0x7F2BB4F0u: goto label_7F2BB4F0;
    case 0x7F2BB4F4u: goto label_7F2BB4F4;
    case 0x7F2BB4F8u: goto label_7F2BB4F8;
    case 0x7F2BB4FCu: goto label_7F2BB4FC;
    case 0x7F2BB500u: goto label_7F2BB500;
    case 0x7F2BB504u: goto label_7F2BB504;
    case 0x7F2BB508u: goto label_7F2BB508;
    case 0x7F2BB50Cu: goto label_7F2BB50C;
    case 0x7F2BB510u: goto label_7F2BB510;
    case 0x7F2BB514u: goto label_7F2BB514;
    case 0x7F2BB518u: goto label_7F2BB518;
    case 0x7F2BB51Cu: goto label_7F2BB51C;
    case 0x7F2BB520u: goto label_7F2BB520;
    case 0x7F2BB524u: goto label_7F2BB524;
    case 0x7F2BB528u: goto label_7F2BB528;
    case 0x7F2BB52Cu: goto label_7F2BB52C;
    case 0x7F2BB530u: goto label_7F2BB530;
    case 0x7F2BB534u: goto label_7F2BB534;
    case 0x7F2BB538u: goto label_7F2BB538;
    case 0x7F2BB53Cu: goto label_7F2BB53C;
    case 0x7F2BB540u: goto label_7F2BB540;
    case 0x7F2BB544u: goto label_7F2BB544;
    case 0x7F2BB548u: goto label_7F2BB548;
    case 0x7F2BB54Cu: goto label_7F2BB54C;
    case 0x7F2BB550u: goto label_7F2BB550;
    case 0x7F2BB554u: goto label_7F2BB554;
    case 0x7F2BB558u: goto label_7F2BB558;
    case 0x7F2BB55Cu: goto label_7F2BB55C;
    case 0x7F2BB560u: goto label_7F2BB560;
    case 0x7F2BB564u: goto label_7F2BB564;
    case 0x7F2BB568u: goto label_7F2BB568;
    case 0x7F2BB56Cu: goto label_7F2BB56C;
    case 0x7F2BB570u: goto label_7F2BB570;
    case 0x7F2BB574u: goto label_7F2BB574;
    case 0x7F2BB578u: goto label_7F2BB578;
    case 0x7F2BB57Cu: goto label_7F2BB57C;
    case 0x7F2BB580u: goto label_7F2BB580;
    case 0x7F2BB584u: goto label_7F2BB584;
    case 0x7F2BB588u: goto label_7F2BB588;
    case 0x7F2BB58Cu: goto label_7F2BB58C;
    case 0x7F2BB590u: goto label_7F2BB590;
    case 0x7F2BB594u: goto label_7F2BB594;
    case 0x7F2BB598u: goto label_7F2BB598;
    case 0x7F2BB59Cu: goto label_7F2BB59C;
    case 0x7F2BB5A0u: goto label_7F2BB5A0;
    case 0x7F2BB5A4u: goto label_7F2BB5A4;
    case 0x7F2BB5A8u: goto label_7F2BB5A8;
    case 0x7F2BB5ACu: goto label_7F2BB5AC;
    case 0x7F2BB5B0u: goto label_7F2BB5B0;
    case 0x7F2BB5B4u: goto label_7F2BB5B4;
    case 0x7F2BB5B8u: goto label_7F2BB5B8;
    case 0x7F2BB5BCu: goto label_7F2BB5BC;
    case 0x7F2BB5C0u: goto label_7F2BB5C0;
    case 0x7F2BB5C4u: goto label_7F2BB5C4;
    case 0x7F2BB5C8u: goto label_7F2BB5C8;
    case 0x7F2BB5CCu: goto label_7F2BB5CC;
    case 0x7F2BB5D0u: goto label_7F2BB5D0;
    case 0x7F2BB5D4u: goto label_7F2BB5D4;
    case 0x7F2BB5D8u: goto label_7F2BB5D8;
    case 0x7F2BB5DCu: goto label_7F2BB5DC;
    case 0x7F2BB5E0u: goto label_7F2BB5E0;
    case 0x7F2BB5E4u: goto label_7F2BB5E4;
    case 0x7F2BB5E8u: goto label_7F2BB5E8;
    case 0x7F2BB5ECu: goto label_7F2BB5EC;
    case 0x7F2BB5F0u: goto label_7F2BB5F0;
    case 0x7F2BB5F4u: goto label_7F2BB5F4;
    case 0x7F2BB5F8u: goto label_7F2BB5F8;
    case 0x7F2BB5FCu: goto label_7F2BB5FC;
    case 0x7F2BB600u: goto label_7F2BB600;
    case 0x7F2BB604u: goto label_7F2BB604;
    case 0x7F2BB608u: goto label_7F2BB608;
    case 0x7F2BB60Cu: goto label_7F2BB60C;
    case 0x7F2BB610u: goto label_7F2BB610;
    case 0x7F2BB614u: goto label_7F2BB614;
    case 0x7F2BB618u: goto label_7F2BB618;
    case 0x7F2BB61Cu: goto label_7F2BB61C;
    case 0x7F2BB620u: goto label_7F2BB620;
    case 0x7F2BB624u: goto label_7F2BB624;
    case 0x7F2BB628u: goto label_7F2BB628;
    case 0x7F2BB62Cu: goto label_7F2BB62C;
    case 0x7F2BB630u: goto label_7F2BB630;
    case 0x7F2BB634u: goto label_7F2BB634;
    case 0x7F2BB638u: goto label_7F2BB638;
    case 0x7F2BB63Cu: goto label_7F2BB63C;
    case 0x7F2BB640u: goto label_7F2BB640;
    case 0x7F2BB644u: goto label_7F2BB644;
    case 0x7F2BB648u: goto label_7F2BB648;
    case 0x7F2BB64Cu: goto label_7F2BB64C;
    case 0x7F2BB650u: goto label_7F2BB650;
    case 0x7F2BB654u: goto label_7F2BB654;
    case 0x7F2BB658u: goto label_7F2BB658;
    case 0x7F2BB65Cu: goto label_7F2BB65C;
    case 0x7F2BB660u: goto label_7F2BB660;
    case 0x7F2BB664u: goto label_7F2BB664;
    case 0x7F2BB668u: goto label_7F2BB668;
    case 0x7F2BB66Cu: goto label_7F2BB66C;
    case 0x7F2BB670u: goto label_7F2BB670;
    case 0x7F2BB674u: goto label_7F2BB674;
    case 0x7F2BB678u: goto label_7F2BB678;
    case 0x7F2BB67Cu: goto label_7F2BB67C;
    case 0x7F2BB680u: goto label_7F2BB680;
    case 0x7F2BB684u: goto label_7F2BB684;
    case 0x7F2BB688u: goto label_7F2BB688;
    case 0x7F2BB68Cu: goto label_7F2BB68C;
    case 0x7F2BB690u: goto label_7F2BB690;
    case 0x7F2BB694u: goto label_7F2BB694;
    case 0x7F2BB698u: goto label_7F2BB698;
    case 0x7F2BB69Cu: goto label_7F2BB69C;
    case 0x7F2BB6A0u: goto label_7F2BB6A0;
    case 0x7F2BB6A4u: goto label_7F2BB6A4;
    case 0x7F2BB6A8u: goto label_7F2BB6A8;
    case 0x7F2BB6ACu: goto label_7F2BB6AC;
    case 0x7F2BB6B0u: goto label_7F2BB6B0;
    case 0x7F2BB6B4u: goto label_7F2BB6B4;
    case 0x7F2BB6B8u: goto label_7F2BB6B8;
    case 0x7F2BB6BCu: goto label_7F2BB6BC;
    case 0x7F2BB6C0u: goto label_7F2BB6C0;
    case 0x7F2BB6C4u: goto label_7F2BB6C4;
    case 0x7F2BB6C8u: goto label_7F2BB6C8;
    case 0x7F2BB6CCu: goto label_7F2BB6CC;
    case 0x7F2BB6D0u: goto label_7F2BB6D0;
    case 0x7F2BB6D4u: goto label_7F2BB6D4;
    case 0x7F2BB6D8u: goto label_7F2BB6D8;
    case 0x7F2BB6DCu: goto label_7F2BB6DC;
    case 0x7F2BB6E0u: goto label_7F2BB6E0;
    case 0x7F2BB6E4u: goto label_7F2BB6E4;
    case 0x7F2BB6E8u: goto label_7F2BB6E8;
    case 0x7F2BB6ECu: goto label_7F2BB6EC;
    case 0x7F2BB6F0u: goto label_7F2BB6F0;
    case 0x7F2BB6F4u: goto label_7F2BB6F4;
    case 0x7F2BB6F8u: goto label_7F2BB6F8;
    case 0x7F2BB6FCu: goto label_7F2BB6FC;
    case 0x7F2BB700u: goto label_7F2BB700;
    case 0x7F2BB704u: goto label_7F2BB704;
    case 0x7F2BB708u: goto label_7F2BB708;
    case 0x7F2BB70Cu: goto label_7F2BB70C;
    case 0x7F2BB710u: goto label_7F2BB710;
    case 0x7F2BB714u: goto label_7F2BB714;
    case 0x7F2BB718u: goto label_7F2BB718;
    case 0x7F2BB71Cu: goto label_7F2BB71C;
    case 0x7F2BB720u: goto label_7F2BB720;
    case 0x7F2BB724u: goto label_7F2BB724;
    case 0x7F2BB728u: goto label_7F2BB728;
    case 0x7F2BB72Cu: goto label_7F2BB72C;
    case 0x7F2BB730u: goto label_7F2BB730;
    case 0x7F2BB734u: goto label_7F2BB734;
    case 0x7F2BB738u: goto label_7F2BB738;
    case 0x7F2BB73Cu: goto label_7F2BB73C;
    case 0x7F2BB740u: goto label_7F2BB740;
    case 0x7F2BB744u: goto label_7F2BB744;
    case 0x7F2BB748u: goto label_7F2BB748;
    case 0x7F2BB74Cu: goto label_7F2BB74C;
    case 0x7F2BB750u: goto label_7F2BB750;
    case 0x7F2BB754u: goto label_7F2BB754;
    case 0x7F2BB758u: goto label_7F2BB758;
    case 0x7F2BB75Cu: goto label_7F2BB75C;
    case 0x7F2BB760u: goto label_7F2BB760;
    case 0x7F2BB764u: goto label_7F2BB764;
    case 0x7F2BB768u: goto label_7F2BB768;
    case 0x7F2BB76Cu: goto label_7F2BB76C;
    case 0x7F2BB770u: goto label_7F2BB770;
    case 0x7F2BB774u: goto label_7F2BB774;
    case 0x7F2BB778u: goto label_7F2BB778;
    case 0x7F2BB77Cu: goto label_7F2BB77C;
    case 0x7F2BB780u: goto label_7F2BB780;
    case 0x7F2BB784u: goto label_7F2BB784;
    case 0x7F2BB788u: goto label_7F2BB788;
    case 0x7F2BB78Cu: goto label_7F2BB78C;
    case 0x7F2BB790u: goto label_7F2BB790;
    case 0x7F2BB794u: goto label_7F2BB794;
    case 0x7F2BB798u: goto label_7F2BB798;
    case 0x7F2BB79Cu: goto label_7F2BB79C;
    case 0x7F2BB7A0u: goto label_7F2BB7A0;
    case 0x7F2BB7A4u: goto label_7F2BB7A4;
    case 0x7F2BB7A8u: goto label_7F2BB7A8;
    case 0x7F2BB7ACu: goto label_7F2BB7AC;
    case 0x7F2BB7B0u: goto label_7F2BB7B0;
    case 0x7F2BB7B4u: goto label_7F2BB7B4;
    case 0x7F2BB7B8u: goto label_7F2BB7B8;
    case 0x7F2BB7BCu: goto label_7F2BB7BC;
    case 0x7F2BB7C0u: goto label_7F2BB7C0;
    case 0x7F2BB7C4u: goto label_7F2BB7C4;
    case 0x7F2BB7C8u: goto label_7F2BB7C8;
    case 0x7F2BB7CCu: goto label_7F2BB7CC;
    case 0x7F2BB7D0u: goto label_7F2BB7D0;
    case 0x7F2BB7D4u: goto label_7F2BB7D4;
    case 0x7F2BB7D8u: goto label_7F2BB7D8;
    case 0x7F2BB7DCu: goto label_7F2BB7DC;
    case 0x7F2BB7E0u: goto label_7F2BB7E0;
    case 0x7F2BB7E4u: goto label_7F2BB7E4;
    case 0x7F2BB7E8u: goto label_7F2BB7E8;
    case 0x7F2BB7ECu: goto label_7F2BB7EC;
    case 0x7F2BB7F0u: goto label_7F2BB7F0;
    case 0x7F2BB7F4u: goto label_7F2BB7F4;
    case 0x7F2BB7F8u: goto label_7F2BB7F8;
    case 0x7F2BB7FCu: goto label_7F2BB7FC;
    case 0x7F2BB800u: goto label_7F2BB800;
    case 0x7F2BB804u: goto label_7F2BB804;
    case 0x7F2BB808u: goto label_7F2BB808;
    case 0x7F2BB80Cu: goto label_7F2BB80C;
    case 0x7F2BB810u: goto label_7F2BB810;
    case 0x7F2BB814u: goto label_7F2BB814;
    case 0x7F2BB818u: goto label_7F2BB818;
    case 0x7F2BB81Cu: goto label_7F2BB81C;
    case 0x7F2BB820u: goto label_7F2BB820;
    case 0x7F2BB824u: goto label_7F2BB824;
    case 0x7F2BB828u: goto label_7F2BB828;
    case 0x7F2BB82Cu: goto label_7F2BB82C;
    case 0x7F2BB830u: goto label_7F2BB830;
    case 0x7F2BB834u: goto label_7F2BB834;
    case 0x7F2BB838u: goto label_7F2BB838;
    case 0x7F2BB83Cu: goto label_7F2BB83C;
    case 0x7F2BB840u: goto label_7F2BB840;
    case 0x7F2BB844u: goto label_7F2BB844;
    case 0x7F2BB848u: goto label_7F2BB848;
    case 0x7F2BB84Cu: goto label_7F2BB84C;
    case 0x7F2BB850u: goto label_7F2BB850;
    case 0x7F2BB854u: goto label_7F2BB854;
    case 0x7F2BB858u: goto label_7F2BB858;
    case 0x7F2BB85Cu: goto label_7F2BB85C;
    case 0x7F2BB860u: goto label_7F2BB860;
    case 0x7F2BB864u: goto label_7F2BB864;
    case 0x7F2BB868u: goto label_7F2BB868;
    case 0x7F2BB86Cu: goto label_7F2BB86C;
    case 0x7F2BB870u: goto label_7F2BB870;
    case 0x7F2BB874u: goto label_7F2BB874;
    case 0x7F2BB878u: goto label_7F2BB878;
    case 0x7F2BB87Cu: goto label_7F2BB87C;
    case 0x7F2BB880u: goto label_7F2BB880;
    case 0x7F2BB884u: goto label_7F2BB884;
    case 0x7F2BB888u: goto label_7F2BB888;
    case 0x7F2BB88Cu: goto label_7F2BB88C;
    case 0x7F2BB890u: goto label_7F2BB890;
    case 0x7F2BB894u: goto label_7F2BB894;
    case 0x7F2BB898u: goto label_7F2BB898;
    case 0x7F2BB89Cu: goto label_7F2BB89C;
    case 0x7F2BB8A0u: goto label_7F2BB8A0;
    case 0x7F2BB8A4u: goto label_7F2BB8A4;
    case 0x7F2BB8A8u: goto label_7F2BB8A8;
    case 0x7F2BB8ACu: goto label_7F2BB8AC;
    case 0x7F2BB8B0u: goto label_7F2BB8B0;
    case 0x7F2BB8B4u: goto label_7F2BB8B4;
    case 0x7F2BB8B8u: goto label_7F2BB8B8;
    case 0x7F2BB8BCu: goto label_7F2BB8BC;
    case 0x7F2BB8C0u: goto label_7F2BB8C0;
    case 0x7F2BB8C4u: goto label_7F2BB8C4;
    case 0x7F2BB8C8u: goto label_7F2BB8C8;
    case 0x7F2BB8CCu: goto label_7F2BB8CC;
    case 0x7F2BB8D0u: goto label_7F2BB8D0;
    case 0x7F2BB8D4u: goto label_7F2BB8D4;
    case 0x7F2BB8D8u: goto label_7F2BB8D8;
    case 0x7F2BB8DCu: goto label_7F2BB8DC;
    case 0x7F2BB8E0u: goto label_7F2BB8E0;
    case 0x7F2BB8E4u: goto label_7F2BB8E4;
    case 0x7F2BB8E8u: goto label_7F2BB8E8;
    case 0x7F2BB8ECu: goto label_7F2BB8EC;
    case 0x7F2BB8F0u: goto label_7F2BB8F0;
    case 0x7F2BB8F4u: goto label_7F2BB8F4;
    case 0x7F2BB8F8u: goto label_7F2BB8F8;
    case 0x7F2BB8FCu: goto label_7F2BB8FC;
    case 0x7F2BB900u: goto label_7F2BB900;
    case 0x7F2BB904u: goto label_7F2BB904;
    case 0x7F2BB908u: goto label_7F2BB908;
    case 0x7F2BB90Cu: goto label_7F2BB90C;
    case 0x7F2BB910u: goto label_7F2BB910;
    case 0x7F2BB914u: goto label_7F2BB914;
    case 0x7F2BB918u: goto label_7F2BB918;
    case 0x7F2BB91Cu: goto label_7F2BB91C;
    case 0x7F2BB920u: goto label_7F2BB920;
    case 0x7F2BB924u: goto label_7F2BB924;
    case 0x7F2BB928u: goto label_7F2BB928;
    case 0x7F2BB92Cu: goto label_7F2BB92C;
    case 0x7F2BB930u: goto label_7F2BB930;
    case 0x7F2BB934u: goto label_7F2BB934;
    case 0x7F2BB938u: goto label_7F2BB938;
    case 0x7F2BB93Cu: goto label_7F2BB93C;
    case 0x7F2BB940u: goto label_7F2BB940;
    case 0x7F2BB944u: goto label_7F2BB944;
    case 0x7F2BB948u: goto label_7F2BB948;
    case 0x7F2BB94Cu: goto label_7F2BB94C;
    case 0x7F2BB950u: goto label_7F2BB950;
    case 0x7F2BB954u: goto label_7F2BB954;
    case 0x7F2BB958u: goto label_7F2BB958;
    case 0x7F2BB95Cu: goto label_7F2BB95C;
    case 0x7F2BB960u: goto label_7F2BB960;
    case 0x7F2BB964u: goto label_7F2BB964;
    case 0x7F2BB968u: goto label_7F2BB968;
    case 0x7F2BB96Cu: goto label_7F2BB96C;
    case 0x7F2BB970u: goto label_7F2BB970;
    case 0x7F2BB974u: goto label_7F2BB974;
    case 0x7F2BB978u: goto label_7F2BB978;
    case 0x7F2BB97Cu: goto label_7F2BB97C;
    case 0x7F2BB980u: goto label_7F2BB980;
    case 0x7F2BB984u: goto label_7F2BB984;
    case 0x7F2BB988u: goto label_7F2BB988;
    case 0x7F2BB98Cu: goto label_7F2BB98C;
    case 0x7F2BB990u: goto label_7F2BB990;
    case 0x7F2BB994u: goto label_7F2BB994;
    case 0x7F2BB998u: goto label_7F2BB998;
    case 0x7F2BB99Cu: goto label_7F2BB99C;
    case 0x7F2BB9A0u: goto label_7F2BB9A0;
    case 0x7F2BB9A4u: goto label_7F2BB9A4;
    case 0x7F2BB9A8u: goto label_7F2BB9A8;
    case 0x7F2BB9ACu: goto label_7F2BB9AC;
    case 0x7F2BB9B0u: goto label_7F2BB9B0;
    case 0x7F2BB9B4u: goto label_7F2BB9B4;
    case 0x7F2BB9B8u: goto label_7F2BB9B8;
    case 0x7F2BB9BCu: goto label_7F2BB9BC;
    case 0x7F2BB9C0u: goto label_7F2BB9C0;
    case 0x7F2BB9C4u: goto label_7F2BB9C4;
    case 0x7F2BB9C8u: goto label_7F2BB9C8;
    case 0x7F2BB9CCu: goto label_7F2BB9CC;
    case 0x7F2BB9D0u: goto label_7F2BB9D0;
    case 0x7F2BB9D4u: goto label_7F2BB9D4;
    case 0x7F2BB9D8u: goto label_7F2BB9D8;
    case 0x7F2BB9DCu: goto label_7F2BB9DC;
    case 0x7F2BB9E0u: goto label_7F2BB9E0;
    case 0x7F2BB9E4u: goto label_7F2BB9E4;
    case 0x7F2BB9E8u: goto label_7F2BB9E8;
    case 0x7F2BB9ECu: goto label_7F2BB9EC;
    case 0x7F2BB9F0u: goto label_7F2BB9F0;
    case 0x7F2BB9F4u: goto label_7F2BB9F4;
    case 0x7F2BB9F8u: goto label_7F2BB9F8;
    case 0x7F2BB9FCu: goto label_7F2BB9FC;
    case 0x7F2BBA00u: goto label_7F2BBA00;
    case 0x7F2BBA04u: goto label_7F2BBA04;
    case 0x7F2BBA08u: goto label_7F2BBA08;
    case 0x7F2BBA0Cu: goto label_7F2BBA0C;
    case 0x7F2BBA10u: goto label_7F2BBA10;
    case 0x7F2BBA14u: goto label_7F2BBA14;
    case 0x7F2BBA18u: goto label_7F2BBA18;
    case 0x7F2BBA1Cu: goto label_7F2BBA1C;
    case 0x7F2BBA20u: goto label_7F2BBA20;
    case 0x7F2BBA24u: goto label_7F2BBA24;
    case 0x7F2BBA28u: goto label_7F2BBA28;
    case 0x7F2BBA2Cu: goto label_7F2BBA2C;
    case 0x7F2BBA30u: goto label_7F2BBA30;
    case 0x7F2BBA34u: goto label_7F2BBA34;
    case 0x7F2BBA38u: goto label_7F2BBA38;
    case 0x7F2BBA3Cu: goto label_7F2BBA3C;
    case 0x7F2BBA40u: goto label_7F2BBA40;
    case 0x7F2BBA44u: goto label_7F2BBA44;
    case 0x7F2BBA48u: goto label_7F2BBA48;
    case 0x7F2BBA4Cu: goto label_7F2BBA4C;
    case 0x7F2BBA50u: goto label_7F2BBA50;
    case 0x7F2BBA54u: goto label_7F2BBA54;
    case 0x7F2BBA58u: goto label_7F2BBA58;
    case 0x7F2BBA5Cu: goto label_7F2BBA5C;
    case 0x7F2BBA60u: goto label_7F2BBA60;
    case 0x7F2BBA64u: goto label_7F2BBA64;
    case 0x7F2BBA68u: goto label_7F2BBA68;
    case 0x7F2BBA6Cu: goto label_7F2BBA6C;
    case 0x7F2BBA70u: goto label_7F2BBA70;
    case 0x7F2BBA74u: goto label_7F2BBA74;
    case 0x7F2BBA78u: goto label_7F2BBA78;
    case 0x7F2BBA7Cu: goto label_7F2BBA7C;
    case 0x7F2BBA80u: goto label_7F2BBA80;
    case 0x7F2BBA84u: goto label_7F2BBA84;
    case 0x7F2BBA88u: goto label_7F2BBA88;
    case 0x7F2BBA8Cu: goto label_7F2BBA8C;
    case 0x7F2BBA90u: goto label_7F2BBA90;
    case 0x7F2BBA94u: goto label_7F2BBA94;
    case 0x7F2BBA98u: goto label_7F2BBA98;
    case 0x7F2BBA9Cu: goto label_7F2BBA9C;
    case 0x7F2BBAA0u: goto label_7F2BBAA0;
    case 0x7F2BBAA4u: goto label_7F2BBAA4;
    case 0x7F2BBAA8u: goto label_7F2BBAA8;
    case 0x7F2BBAACu: goto label_7F2BBAAC;
    case 0x7F2BBAB0u: goto label_7F2BBAB0;
    case 0x7F2BBAB4u: goto label_7F2BBAB4;
    case 0x7F2BBAB8u: goto label_7F2BBAB8;
    case 0x7F2BBABCu: goto label_7F2BBABC;
    case 0x7F2BBAC0u: goto label_7F2BBAC0;
    case 0x7F2BBAC4u: goto label_7F2BBAC4;
    case 0x7F2BBAC8u: goto label_7F2BBAC8;
    case 0x7F2BBACCu: goto label_7F2BBACC;
    case 0x7F2BBAD0u: goto label_7F2BBAD0;
    case 0x7F2BBAD4u: goto label_7F2BBAD4;
    case 0x7F2BBAD8u: goto label_7F2BBAD8;
    case 0x7F2BBADCu: goto label_7F2BBADC;
    case 0x7F2BBAE0u: goto label_7F2BBAE0;
    case 0x7F2BBAE4u: goto label_7F2BBAE4;
    case 0x7F2BBAE8u: goto label_7F2BBAE8;
    case 0x7F2BBAECu: goto label_7F2BBAEC;
    case 0x7F2BBAF0u: goto label_7F2BBAF0;
    case 0x7F2BBAF4u: goto label_7F2BBAF4;
    case 0x7F2BBAF8u: goto label_7F2BBAF8;
    case 0x7F2BBAFCu: goto label_7F2BBAFC;
    case 0x7F2BBB00u: goto label_7F2BBB00;
    case 0x7F2BBB04u: goto label_7F2BBB04;
    case 0x7F2BBB08u: goto label_7F2BBB08;
    case 0x7F2BBB0Cu: goto label_7F2BBB0C;
    case 0x7F2BBB10u: goto label_7F2BBB10;
    case 0x7F2BBB14u: goto label_7F2BBB14;
    case 0x7F2BBB18u: goto label_7F2BBB18;
    case 0x7F2BBB1Cu: goto label_7F2BBB1C;
    case 0x7F2BBB20u: goto label_7F2BBB20;
    case 0x7F2BBB24u: goto label_7F2BBB24;
    case 0x7F2BBB28u: goto label_7F2BBB28;
    case 0x7F2BBB2Cu: goto label_7F2BBB2C;
    case 0x7F2BBB30u: goto label_7F2BBB30;
    case 0x7F2BBB34u: goto label_7F2BBB34;
    case 0x7F2BBB38u: goto label_7F2BBB38;
    case 0x7F2BBB3Cu: goto label_7F2BBB3C;
    case 0x7F2BBB40u: goto label_7F2BBB40;
    case 0x7F2BBB44u: goto label_7F2BBB44;
    case 0x7F2BBB48u: goto label_7F2BBB48;
    case 0x7F2BBB4Cu: goto label_7F2BBB4C;
    case 0x7F2BBB50u: goto label_7F2BBB50;
    case 0x7F2BBB54u: goto label_7F2BBB54;
    case 0x7F2BBB58u: goto label_7F2BBB58;
    case 0x7F2BBB5Cu: goto label_7F2BBB5C;
    case 0x7F2BBB60u: goto label_7F2BBB60;
    case 0x7F2BBB64u: goto label_7F2BBB64;
    case 0x7F2BBB68u: goto label_7F2BBB68;
    case 0x7F2BBB6Cu: goto label_7F2BBB6C;
    case 0x7F2BBB70u: goto label_7F2BBB70;
    case 0x7F2BBB74u: goto label_7F2BBB74;
    case 0x7F2BBB78u: goto label_7F2BBB78;
    case 0x7F2BBB7Cu: goto label_7F2BBB7C;
    case 0x7F2BBB80u: goto label_7F2BBB80;
    case 0x7F2BBB84u: goto label_7F2BBB84;
    case 0x7F2BBB88u: goto label_7F2BBB88;
    case 0x7F2BBB8Cu: goto label_7F2BBB8C;
    case 0x7F2BBB90u: goto label_7F2BBB90;
    case 0x7F2BBB94u: goto label_7F2BBB94;
    case 0x7F2BBB98u: goto label_7F2BBB98;
    case 0x7F2BBB9Cu: goto label_7F2BBB9C;
    case 0x7F2BBBA0u: goto label_7F2BBBA0;
    case 0x7F2BBBA4u: goto label_7F2BBBA4;
    case 0x7F2BBBA8u: goto label_7F2BBBA8;
    case 0x7F2BBBACu: goto label_7F2BBBAC;
    case 0x7F2BBBB0u: goto label_7F2BBBB0;
    case 0x7F2BBBB4u: goto label_7F2BBBB4;
    case 0x7F2BBBB8u: goto label_7F2BBBB8;
    case 0x7F2BBBBCu: goto label_7F2BBBBC;
    case 0x7F2BBBC0u: goto label_7F2BBBC0;
    case 0x7F2BBBC4u: goto label_7F2BBBC4;
    case 0x7F2BBBC8u: goto label_7F2BBBC8;
    case 0x7F2BBBCCu: goto label_7F2BBBCC;
    case 0x7F2BBBD0u: goto label_7F2BBBD0;
    case 0x7F2BBBD4u: goto label_7F2BBBD4;
    case 0x7F2BBBD8u: goto label_7F2BBBD8;
    case 0x7F2BBBDCu: goto label_7F2BBBDC;
    case 0x7F2BBBE0u: goto label_7F2BBBE0;
    case 0x7F2BBBE4u: goto label_7F2BBBE4;
    case 0x7F2BBBE8u: goto label_7F2BBBE8;
    case 0x7F2BBBECu: goto label_7F2BBBEC;
    case 0x7F2BBBF0u: goto label_7F2BBBF0;
    case 0x7F2BBBF4u: goto label_7F2BBBF4;
    case 0x7F2BBBF8u: goto label_7F2BBBF8;
    case 0x7F2BBBFCu: goto label_7F2BBBFC;
    case 0x7F2BBC00u: goto label_7F2BBC00;
    case 0x7F2BBC04u: goto label_7F2BBC04;
    case 0x7F2BBC08u: goto label_7F2BBC08;
    case 0x7F2BBC0Cu: goto label_7F2BBC0C;
    case 0x7F2BBC10u: goto label_7F2BBC10;
    case 0x7F2BBC14u: goto label_7F2BBC14;
    case 0x7F2BBC18u: goto label_7F2BBC18;
    case 0x7F2BBC1Cu: goto label_7F2BBC1C;
    case 0x7F2BBC20u: goto label_7F2BBC20;
    case 0x7F2BBC24u: goto label_7F2BBC24;
    case 0x7F2BBC28u: goto label_7F2BBC28;
    case 0x7F2BBC2Cu: goto label_7F2BBC2C;
    case 0x7F2BBC30u: goto label_7F2BBC30;
    case 0x7F2BBC34u: goto label_7F2BBC34;
    case 0x7F2BBC38u: goto label_7F2BBC38;
    case 0x7F2BBC3Cu: goto label_7F2BBC3C;
    case 0x7F2BBC40u: goto label_7F2BBC40;
    case 0x7F2BBC44u: goto label_7F2BBC44;
    case 0x7F2BBC48u: goto label_7F2BBC48;
    case 0x7F2BBC4Cu: goto label_7F2BBC4C;
    case 0x7F2BBC50u: goto label_7F2BBC50;
    case 0x7F2BBC54u: goto label_7F2BBC54;
    case 0x7F2BBC58u: goto label_7F2BBC58;
    case 0x7F2BBC5Cu: goto label_7F2BBC5C;
    case 0x7F2BBC60u: goto label_7F2BBC60;
    case 0x7F2BBC64u: goto label_7F2BBC64;
    case 0x7F2BBC68u: goto label_7F2BBC68;
    case 0x7F2BBC6Cu: goto label_7F2BBC6C;
    case 0x7F2BBC70u: goto label_7F2BBC70;
    case 0x7F2BBC74u: goto label_7F2BBC74;
    case 0x7F2BBC78u: goto label_7F2BBC78;
    case 0x7F2BBC7Cu: goto label_7F2BBC7C;
    case 0x7F2BBC80u: goto label_7F2BBC80;
    case 0x7F2BBC84u: goto label_7F2BBC84;
    case 0x7F2BBC88u: goto label_7F2BBC88;
    case 0x7F2BBC8Cu: goto label_7F2BBC8C;
    case 0x7F2BBC90u: goto label_7F2BBC90;
    case 0x7F2BBC94u: goto label_7F2BBC94;
    case 0x7F2BBC98u: goto label_7F2BBC98;
    case 0x7F2BBC9Cu: goto label_7F2BBC9C;
    case 0x7F2BBCA0u: goto label_7F2BBCA0;
    case 0x7F2BBCA4u: goto label_7F2BBCA4;
    case 0x7F2BBCA8u: goto label_7F2BBCA8;
    case 0x7F2BBCACu: goto label_7F2BBCAC;
    case 0x7F2BBCB0u: goto label_7F2BBCB0;
    case 0x7F2BBCB4u: goto label_7F2BBCB4;
    case 0x7F2BBCB8u: goto label_7F2BBCB8;
    case 0x7F2BBCBCu: goto label_7F2BBCBC;
    case 0x7F2BBCC0u: goto label_7F2BBCC0;
    case 0x7F2BBCC4u: goto label_7F2BBCC4;
    case 0x7F2BBCC8u: goto label_7F2BBCC8;
    case 0x7F2BBCCCu: goto label_7F2BBCCC;
    case 0x7F2BBCD0u: goto label_7F2BBCD0;
    case 0x7F2BBCD4u: goto label_7F2BBCD4;
    case 0x7F2BBCD8u: goto label_7F2BBCD8;
    case 0x7F2BBCDCu: goto label_7F2BBCDC;
    case 0x7F2BBCE0u: goto label_7F2BBCE0;
    case 0x7F2BBCE4u: goto label_7F2BBCE4;
    case 0x7F2BBCE8u: goto label_7F2BBCE8;
    case 0x7F2BBCECu: goto label_7F2BBCEC;
    case 0x7F2BBCF0u: goto label_7F2BBCF0;
    case 0x7F2BBCF4u: goto label_7F2BBCF4;
    case 0x7F2BBCF8u: goto label_7F2BBCF8;
    case 0x7F2BBCFCu: goto label_7F2BBCFC;
    case 0x7F2BBD00u: goto label_7F2BBD00;
    case 0x7F2BBD04u: goto label_7F2BBD04;
    case 0x7F2BBD08u: goto label_7F2BBD08;
    case 0x7F2BBD0Cu: goto label_7F2BBD0C;
    case 0x7F2BBD10u: goto label_7F2BBD10;
    case 0x7F2BBD14u: goto label_7F2BBD14;
    case 0x7F2BBD18u: goto label_7F2BBD18;
    case 0x7F2BBD1Cu: goto label_7F2BBD1C;
    case 0x7F2BBD20u: goto label_7F2BBD20;
    case 0x7F2BBD24u: goto label_7F2BBD24;
    case 0x7F2BBD28u: goto label_7F2BBD28;
    case 0x7F2BBD2Cu: goto label_7F2BBD2C;
    case 0x7F2BBD30u: goto label_7F2BBD30;
    case 0x7F2BBD34u: goto label_7F2BBD34;
    case 0x7F2BBD38u: goto label_7F2BBD38;
    case 0x7F2BBD3Cu: goto label_7F2BBD3C;
    case 0x7F2BBD40u: goto label_7F2BBD40;
    case 0x7F2BBD44u: goto label_7F2BBD44;
    case 0x7F2BBD48u: goto label_7F2BBD48;
    case 0x7F2BBD4Cu: goto label_7F2BBD4C;
    case 0x7F2BBD50u: goto label_7F2BBD50;
    case 0x7F2BBD54u: goto label_7F2BBD54;
    case 0x7F2BBD58u: goto label_7F2BBD58;
    case 0x7F2BBD5Cu: goto label_7F2BBD5C;
    case 0x7F2BBD60u: goto label_7F2BBD60;
    case 0x7F2BBD64u: goto label_7F2BBD64;
    case 0x7F2BBD68u: goto label_7F2BBD68;
    case 0x7F2BBD6Cu: goto label_7F2BBD6C;
    case 0x7F2BBD70u: goto label_7F2BBD70;
    case 0x7F2BBD74u: goto label_7F2BBD74;
    case 0x7F2BBD78u: goto label_7F2BBD78;
    case 0x7F2BBD7Cu: goto label_7F2BBD7C;
    case 0x7F2BBD80u: goto label_7F2BBD80;
    case 0x7F2BBD84u: goto label_7F2BBD84;
    case 0x7F2BBD88u: goto label_7F2BBD88;
    case 0x7F2BBD8Cu: goto label_7F2BBD8C;
    case 0x7F2BBD90u: goto label_7F2BBD90;
    case 0x7F2BBD94u: goto label_7F2BBD94;
    case 0x7F2BBD98u: goto label_7F2BBD98;
    case 0x7F2BBD9Cu: goto label_7F2BBD9C;
    case 0x7F2BBDA0u: goto label_7F2BBDA0;
    case 0x7F2BBDA4u: goto label_7F2BBDA4;
    case 0x7F2BBDA8u: goto label_7F2BBDA8;
    case 0x7F2BBDACu: goto label_7F2BBDAC;
    case 0x7F2BBDB0u: goto label_7F2BBDB0;
    case 0x7F2BBDB4u: goto label_7F2BBDB4;
    case 0x7F2BBDB8u: goto label_7F2BBDB8;
    case 0x7F2BBDBCu: goto label_7F2BBDBC;
    case 0x7F2BBDC0u: goto label_7F2BBDC0;
    case 0x7F2BBDC4u: goto label_7F2BBDC4;
    case 0x7F2BBDC8u: goto label_7F2BBDC8;
    case 0x7F2BBDCCu: goto label_7F2BBDCC;
    case 0x7F2BBDD0u: goto label_7F2BBDD0;
    case 0x7F2BBDD4u: goto label_7F2BBDD4;
    case 0x7F2BBDD8u: goto label_7F2BBDD8;
    case 0x7F2BBDDCu: goto label_7F2BBDDC;
    case 0x7F2BBDE0u: goto label_7F2BBDE0;
    case 0x7F2BBDE4u: goto label_7F2BBDE4;
    case 0x7F2BBDE8u: goto label_7F2BBDE8;
    case 0x7F2BBDECu: goto label_7F2BBDEC;
    case 0x7F2BBDF0u: goto label_7F2BBDF0;
    case 0x7F2BBDF4u: goto label_7F2BBDF4;
    case 0x7F2BBDF8u: goto label_7F2BBDF8;
    case 0x7F2BBDFCu: goto label_7F2BBDFC;
    case 0x7F2BBE00u: goto label_7F2BBE00;
    case 0x7F2BBE04u: goto label_7F2BBE04;
    case 0x7F2BBE08u: goto label_7F2BBE08;
    case 0x7F2BBE0Cu: goto label_7F2BBE0C;
    case 0x7F2BBE10u: goto label_7F2BBE10;
    case 0x7F2BBE14u: goto label_7F2BBE14;
    case 0x7F2BBE18u: goto label_7F2BBE18;
    case 0x7F2BBE1Cu: goto label_7F2BBE1C;
    case 0x7F2BBE20u: goto label_7F2BBE20;
    case 0x7F2BBE24u: goto label_7F2BBE24;
    case 0x7F2BBE28u: goto label_7F2BBE28;
    case 0x7F2BBE2Cu: goto label_7F2BBE2C;
    case 0x7F2BBE30u: goto label_7F2BBE30;
    case 0x7F2BBE34u: goto label_7F2BBE34;
    case 0x7F2BBE38u: goto label_7F2BBE38;
    case 0x7F2BBE3Cu: goto label_7F2BBE3C;
    case 0x7F2BBE40u: goto label_7F2BBE40;
    case 0x7F2BBE44u: goto label_7F2BBE44;
    case 0x7F2BBE48u: goto label_7F2BBE48;
    case 0x7F2BBE4Cu: goto label_7F2BBE4C;
    case 0x7F2BBE50u: goto label_7F2BBE50;
    case 0x7F2BBE54u: goto label_7F2BBE54;
    case 0x7F2BBE58u: goto label_7F2BBE58;
    case 0x7F2BBE5Cu: goto label_7F2BBE5C;
    case 0x7F2BBE60u: goto label_7F2BBE60;
    case 0x7F2BBE64u: goto label_7F2BBE64;
    case 0x7F2BBE68u: goto label_7F2BBE68;
    case 0x7F2BBE6Cu: goto label_7F2BBE6C;
    case 0x7F2BBE70u: goto label_7F2BBE70;
    case 0x7F2BBE74u: goto label_7F2BBE74;
    case 0x7F2BBE78u: goto label_7F2BBE78;
    case 0x7F2BBE7Cu: goto label_7F2BBE7C;
    case 0x7F2BBE80u: goto label_7F2BBE80;
    case 0x7F2BBE84u: goto label_7F2BBE84;
    case 0x7F2BBE88u: goto label_7F2BBE88;
    case 0x7F2BBE8Cu: goto label_7F2BBE8C;
    case 0x7F2BBE90u: goto label_7F2BBE90;
    case 0x7F2BBE94u: goto label_7F2BBE94;
    case 0x7F2BBE98u: goto label_7F2BBE98;
    case 0x7F2BBE9Cu: goto label_7F2BBE9C;
    case 0x7F2BBEA0u: goto label_7F2BBEA0;
    case 0x7F2BBEA4u: goto label_7F2BBEA4;
    case 0x7F2BBEA8u: goto label_7F2BBEA8;
    case 0x7F2BBEACu: goto label_7F2BBEAC;
    case 0x7F2BBEB0u: goto label_7F2BBEB0;
    case 0x7F2BBEB4u: goto label_7F2BBEB4;
    case 0x7F2BBEB8u: goto label_7F2BBEB8;
    case 0x7F2BBEBCu: goto label_7F2BBEBC;
    case 0x7F2BBEC0u: goto label_7F2BBEC0;
    case 0x7F2BBEC4u: goto label_7F2BBEC4;
    case 0x7F2BBEC8u: goto label_7F2BBEC8;
    case 0x7F2BBECCu: goto label_7F2BBECC;
    case 0x7F2BBED0u: goto label_7F2BBED0;
    case 0x7F2BBED4u: goto label_7F2BBED4;
    case 0x7F2BBED8u: goto label_7F2BBED8;
    case 0x7F2BBEDCu: goto label_7F2BBEDC;
    case 0x7F2BBEE0u: goto label_7F2BBEE0;
    case 0x7F2BBEE4u: goto label_7F2BBEE4;
    case 0x7F2BBEE8u: goto label_7F2BBEE8;
    case 0x7F2BBEECu: goto label_7F2BBEEC;
    case 0x7F2BBEF0u: goto label_7F2BBEF0;
    case 0x7F2BBEF4u: goto label_7F2BBEF4;
    case 0x7F2BBEF8u: goto label_7F2BBEF8;
    case 0x7F2BBEFCu: goto label_7F2BBEFC;
    case 0x7F2BBF00u: goto label_7F2BBF00;
    case 0x7F2BBF04u: goto label_7F2BBF04;
    case 0x7F2BBF08u: goto label_7F2BBF08;
    case 0x7F2BBF0Cu: goto label_7F2BBF0C;
    case 0x7F2BBF10u: goto label_7F2BBF10;
    case 0x7F2BBF14u: goto label_7F2BBF14;
    case 0x7F2BBF18u: goto label_7F2BBF18;
    case 0x7F2BBF1Cu: goto label_7F2BBF1C;
    case 0x7F2BBF20u: goto label_7F2BBF20;
    case 0x7F2BBF24u: goto label_7F2BBF24;
    case 0x7F2BBF28u: goto label_7F2BBF28;
    case 0x7F2BBF2Cu: goto label_7F2BBF2C;
    case 0x7F2BBF30u: goto label_7F2BBF30;
    case 0x7F2BBF34u: goto label_7F2BBF34;
    case 0x7F2BBF38u: goto label_7F2BBF38;
    case 0x7F2BBF3Cu: goto label_7F2BBF3C;
    case 0x7F2BBF40u: goto label_7F2BBF40;
    case 0x7F2BBF44u: goto label_7F2BBF44;
    case 0x7F2BBF48u: goto label_7F2BBF48;
    case 0x7F2BBF4Cu: goto label_7F2BBF4C;
    case 0x7F2BBF50u: goto label_7F2BBF50;
    case 0x7F2BBF54u: goto label_7F2BBF54;
    case 0x7F2BBF58u: goto label_7F2BBF58;
    case 0x7F2BBF5Cu: goto label_7F2BBF5C;
    case 0x7F2BBF60u: goto label_7F2BBF60;
    case 0x7F2BBF64u: goto label_7F2BBF64;
    case 0x7F2BBF68u: goto label_7F2BBF68;
    case 0x7F2BBF6Cu: goto label_7F2BBF6C;
    case 0x7F2BBF70u: goto label_7F2BBF70;
    case 0x7F2BBF74u: goto label_7F2BBF74;
    case 0x7F2BBF78u: goto label_7F2BBF78;
    case 0x7F2BBF7Cu: goto label_7F2BBF7C;
    case 0x7F2BBF80u: goto label_7F2BBF80;
    case 0x7F2BBF84u: goto label_7F2BBF84;
    case 0x7F2BBF88u: goto label_7F2BBF88;
    case 0x7F2BBF8Cu: goto label_7F2BBF8C;
    case 0x7F2BBF90u: goto label_7F2BBF90;
    case 0x7F2BBF94u: goto label_7F2BBF94;
    case 0x7F2BBF98u: goto label_7F2BBF98;
    case 0x7F2BBF9Cu: goto label_7F2BBF9C;
    case 0x7F2BBFA0u: goto label_7F2BBFA0;
    case 0x7F2BBFA4u: goto label_7F2BBFA4;
    case 0x7F2BBFA8u: goto label_7F2BBFA8;
    case 0x7F2BBFACu: goto label_7F2BBFAC;
    case 0x7F2BBFB0u: goto label_7F2BBFB0;
    case 0x7F2BBFB4u: goto label_7F2BBFB4;
    case 0x7F2BBFB8u: goto label_7F2BBFB8;
    case 0x7F2BBFBCu: goto label_7F2BBFBC;
    case 0x7F2BBFC0u: goto label_7F2BBFC0;
    case 0x7F2BBFC4u: goto label_7F2BBFC4;
    case 0x7F2BBFC8u: goto label_7F2BBFC8;
    case 0x7F2BBFCCu: goto label_7F2BBFCC;
    case 0x7F2BBFD0u: goto label_7F2BBFD0;
    case 0x7F2BBFD4u: goto label_7F2BBFD4;
    case 0x7F2BBFD8u: goto label_7F2BBFD8;
    case 0x7F2BBFDCu: goto label_7F2BBFDC;
    case 0x7F2BBFE0u: goto label_7F2BBFE0;
    case 0x7F2BBFE4u: goto label_7F2BBFE4;
    case 0x7F2BBFE8u: goto label_7F2BBFE8;
    case 0x7F2BBFECu: goto label_7F2BBFEC;
    case 0x7F2BBFF0u: goto label_7F2BBFF0;
    case 0x7F2BBFF4u: goto label_7F2BBFF4;
    case 0x7F2BBFF8u: goto label_7F2BBFF8;
    case 0x7F2BBFFCu: goto label_7F2BBFFC;
    case 0x7F2BC000u: goto label_7F2BC000;
    case 0x7F2BC004u: goto label_7F2BC004;
    case 0x7F2BC008u: goto label_7F2BC008;
    case 0x7F2BC00Cu: goto label_7F2BC00C;
    case 0x7F2BC010u: goto label_7F2BC010;
    case 0x7F2BC014u: goto label_7F2BC014;
    case 0x7F2BC018u: goto label_7F2BC018;
    case 0x7F2BC01Cu: goto label_7F2BC01C;
    case 0x7F2BC020u: goto label_7F2BC020;
    case 0x7F2BC024u: goto label_7F2BC024;
    case 0x7F2BC028u: goto label_7F2BC028;
    case 0x7F2BC02Cu: goto label_7F2BC02C;
    case 0x7F2BC030u: goto label_7F2BC030;
    case 0x7F2BC034u: goto label_7F2BC034;
    case 0x7F2BC038u: goto label_7F2BC038;
    case 0x7F2BC03Cu: goto label_7F2BC03C;
    case 0x7F2BC040u: goto label_7F2BC040;
    case 0x7F2BC044u: goto label_7F2BC044;
    case 0x7F2BC048u: goto label_7F2BC048;
    case 0x7F2BC04Cu: goto label_7F2BC04C;
    case 0x7F2BC050u: goto label_7F2BC050;
    case 0x7F2BC054u: goto label_7F2BC054;
    case 0x7F2BC058u: goto label_7F2BC058;
    case 0x7F2BC05Cu: goto label_7F2BC05C;
    case 0x7F2BC060u: goto label_7F2BC060;
    case 0x7F2BC064u: goto label_7F2BC064;
    case 0x7F2BC068u: goto label_7F2BC068;
    case 0x7F2BC06Cu: goto label_7F2BC06C;
    case 0x7F2BC070u: goto label_7F2BC070;
    case 0x7F2BC074u: goto label_7F2BC074;
    case 0x7F2BC078u: goto label_7F2BC078;
    case 0x7F2BC07Cu: goto label_7F2BC07C;
    case 0x7F2BC080u: goto label_7F2BC080;
    case 0x7F2BC084u: goto label_7F2BC084;
    case 0x7F2BC088u: goto label_7F2BC088;
    case 0x7F2BC08Cu: goto label_7F2BC08C;
    case 0x7F2BC090u: goto label_7F2BC090;
    case 0x7F2BC094u: goto label_7F2BC094;
    case 0x7F2BC098u: goto label_7F2BC098;
    case 0x7F2BC09Cu: goto label_7F2BC09C;
    case 0x7F2BC0A0u: goto label_7F2BC0A0;
    case 0x7F2BC0A4u: goto label_7F2BC0A4;
    case 0x7F2BC0A8u: goto label_7F2BC0A8;
    case 0x7F2BC0ACu: goto label_7F2BC0AC;
    case 0x7F2BC0B0u: goto label_7F2BC0B0;
    case 0x7F2BC0B4u: goto label_7F2BC0B4;
    case 0x7F2BC0B8u: goto label_7F2BC0B8;
    case 0x7F2BC0BCu: goto label_7F2BC0BC;
    case 0x7F2BC0C0u: goto label_7F2BC0C0;
    case 0x7F2BC0C4u: goto label_7F2BC0C4;
    case 0x7F2BC0C8u: goto label_7F2BC0C8;
    case 0x7F2BC0CCu: goto label_7F2BC0CC;
    case 0x7F2BC0D0u: goto label_7F2BC0D0;
    case 0x7F2BC0D4u: goto label_7F2BC0D4;
    case 0x7F2BC0D8u: goto label_7F2BC0D8;
    case 0x7F2BC0DCu: goto label_7F2BC0DC;
    case 0x7F2BC0E0u: goto label_7F2BC0E0;
    case 0x7F2BC0E4u: goto label_7F2BC0E4;
    case 0x7F2BC0E8u: goto label_7F2BC0E8;
    default: return;
    }
label_7F2B80EC:
    ctx->pc = 0x7F2B80ECu;
    ctx->downcount -= 11;
    // 7F2B80EC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B80F0:
    ctx->pc = 0x7F2B80F0u;
    // 7F2B80F0: addi    r0, r3, 14080
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F2B80F4:
    ctx->pc = 0x7F2B80F4u;
    // 7F2B80F4: mulli   r3, r4, 44
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)44);

label_7F2B80F8:
    ctx->pc = 0x7F2B80F8u;
    // 7F2B80F8: add   r0, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F2B80FC:
    ctx->pc = 0x7F2B80FCu;
    // 7F2B80FC: stw     r0, 2764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2764);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8100:
    ctx->pc = 0x7F2B8100u;
    // 7F2B8100: lwz     r3, 2764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8104:
    ctx->pc = 0x7F2B8104u;
    // 7F2B8104: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8108:
    ctx->pc = 0x7F2B8108u;
    // 7F2B8108: cmplwi  r0, 0x0000
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

label_7F2B810C:
    ctx->pc = 0x7F2B810Cu;
    // 7F2B810C: bc    12, 2, 0x7F2B8138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8138;
        }
    }

label_7F2B8110:
    ctx->pc = 0x7F2B8110u;
    ctx->downcount -= 3;
    // 7F2B8110: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8114:
    ctx->pc = 0x7F2B8114u;
    // 7F2B8114: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_7F2B8118:
    ctx->pc = 0x7F2B8118u;
    // 7F2B8118: bl      0x7F29002C
    {
            ctx->lr = 0x7F2B811Cu;
            ctx->pc = 0x7F29002Cu;
            return;
    }

label_7F2B811C:
    ctx->pc = 0x7F2B811Cu;
    ctx->downcount -= 4;
    // 7F2B811C: lwz     r3, 2764(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8120:
    ctx->pc = 0x7F2B8120u;
    // 7F2B8120: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8124:
    ctx->pc = 0x7F2B8124u;
    // 7F2B8124: rlwinm. r0, r0, 0, 28, 28
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

label_7F2B8128:
    ctx->pc = 0x7F2B8128u;
    // 7F2B8128: bc    12, 2, 0x7F2B8138
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8138;
        }
    }

label_7F2B812C:
    ctx->pc = 0x7F2B812Cu;
    ctx->downcount -= 3;
    // 7F2B812C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8130:
    ctx->pc = 0x7F2B8130u;
    // 7F2B8130: lis     r3, 8
    ctx->gpr[3] = ((u32)(s32)(8) << 16);

label_7F2B8134:
    ctx->pc = 0x7F2B8134u;
    // 7F2B8134: bl      0x7F29007C
    {
            ctx->lr = 0x7F2B8138u;
            ctx->pc = 0x7F29007Cu;
            return;
    }

label_7F2B8138:
    ctx->pc = 0x7F2B8138u;
    ctx->downcount -= 2;
    // 7F2B8138: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B813C:
    ctx->pc = 0x7F2B813Cu;
    // 7F2B813C: bl      0x7F29C47C
    {
            ctx->lr = 0x7F2B8140u;
            ctx->pc = 0x7F29C47Cu;
            return;
    }

label_7F2B8140:
    ctx->pc = 0x7F2B8140u;
    ctx->downcount -= 4;
    // 7F2B8140: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F2B8144:
    ctx->pc = 0x7F2B8144u;
    // 7F2B8144: lis     r3, 4
    ctx->gpr[3] = ((u32)(s32)(4) << 16);

label_7F2B8148:
    ctx->pc = 0x7F2B8148u;
    // 7F2B8148: addi    r4, r4, 16384
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16384);

label_7F2B814C:
    ctx->pc = 0x7F2B814Cu;
    // 7F2B814C: bl      0x7F29002C
    {
            ctx->lr = 0x7F2B8150u;
            ctx->pc = 0x7F29002Cu;
            return;
    }

label_7F2B8150:
    ctx->pc = 0x7F2B8150u;
    ctx->downcount -= 2;
    // 7F2B8150: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8154:
    ctx->pc = 0x7F2B8154u;
    // 7F2B8154: bl      0x7F2940F8
    {
            ctx->lr = 0x7F2B8158u;
            ctx->pc = 0x7F2940F8u;
            return;
    }

label_7F2B8158:
    ctx->pc = 0x7F2B8158u;
    ctx->downcount -= 13;
    // 7F2B8158: lwz     r4, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B815C:
    ctx->pc = 0x7F2B815Cu;
    // 7F2B815C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8160:
    ctx->pc = 0x7F2B8160u;
    // 7F2B8160: addi    r0, r4, 5
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5);

label_7F2B8164:
    ctx->pc = 0x7F2B8164u;
    // 7F2B8164: stw     r0, 2632(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2632);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8168:
    ctx->pc = 0x7F2B8168u;
    // 7F2B8168: lwz     r0, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B816C:
    ctx->pc = 0x7F2B816Cu;
    // 7F2B816C: stw     r0, 2636(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2636);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8170:
    ctx->pc = 0x7F2B8170u;
    // 7F2B8170: lwz     r5, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8174:
    ctx->pc = 0x7F2B8174u;
    // 7F2B8174: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2B8178:
    ctx->pc = 0x7F2B8178u;
    // 7F2B8178: stw     r0, 2640(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2640);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B817C:
    ctx->pc = 0x7F2B817Cu;
    // 7F2B817C: lwz     r12, 2628(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2628);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2B8180:
    ctx->pc = 0x7F2B8180u;
    // 7F2B8180: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F2B8184:
    ctx->pc = 0x7F2B8184u;
    // 7F2B8184: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F2B8188u;
            ctx->pc = target;
            return;
        }
    }

label_7F2B8188:
    ctx->pc = 0x7F2B8188u;
    ctx->downcount -= 3;
    // 7F2B8188: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B818C:
    ctx->pc = 0x7F2B818Cu;
    // 7F2B818C: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_7F2B8190:
    ctx->pc = 0x7F2B8190u;
    // 7F2B8190: bl      0x7F2900A0
    {
            ctx->lr = 0x7F2B8194u;
            ctx->pc = 0x7F2900A0u;
            return;
    }

label_7F2B8194:
    ctx->pc = 0x7F2B8194u;
    ctx->downcount -= 3;
    // 7F2B8194: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8198:
    ctx->pc = 0x7F2B8198u;
    // 7F2B8198: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F2B819C:
    ctx->pc = 0x7F2B819Cu;
    // 7F2B819C: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B81A0u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B81A0:
    ctx->pc = 0x7F2B81A0u;
    ctx->downcount -= 5;
    // 7F2B81A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B81A4:
    ctx->pc = 0x7F2B81A4u;
    // 7F2B81A4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B81A8:
    ctx->pc = 0x7F2B81A8u;
    // 7F2B81A8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B81AC:
    ctx->pc = 0x7F2B81ACu;
    // 7F2B81AC: or.   r0, r4, r0
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

label_7F2B81B0:
    ctx->pc = 0x7F2B81B0u;
    // 7F2B81B0: bc    12, 2, 0x7F2B81E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B81E8;
        }
    }

label_7F2B81B4:
    ctx->pc = 0x7F2B81B4u;
    ctx->downcount -= 6;
    // 7F2B81B4: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2B81B8:
    ctx->pc = 0x7F2B81B8u;
    // 7F2B81B8: lha     r0, 2784(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2784);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B81BC:
    ctx->pc = 0x7F2B81BCu;
    // 7F2B81BC: addi    r3, r3, 21964
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21964);

label_7F2B81C0:
    ctx->pc = 0x7F2B81C0u;
    // 7F2B81C0: lha     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B81C4:
    ctx->pc = 0x7F2B81C4u;
    // 7F2B81C4: cmpw    r3, r0
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

label_7F2B81C8:
    ctx->pc = 0x7F2B81C8u;
    // 7F2B81C8: bc    4, 2, 0x7F2B81E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B81E8;
        }
    }

label_7F2B81CC:
    ctx->pc = 0x7F2B81CCu;
    ctx->downcount -= 4;
    // 7F2B81CC: lha     r3, 106(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(106);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B81D0:
    ctx->pc = 0x7F2B81D0u;
    // 7F2B81D0: lha     r0, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B81D4:
    ctx->pc = 0x7F2B81D4u;
    // 7F2B81D4: cmpw    r3, r0
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

label_7F2B81D8:
    ctx->pc = 0x7F2B81D8u;
    // 7F2B81D8: bc    4, 2, 0x7F2B81E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B81E8;
        }
    }

label_7F2B81DC:
    ctx->pc = 0x7F2B81DCu;
    ctx->downcount -= 3;
    // 7F2B81DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B81E0:
    ctx->pc = 0x7F2B81E0u;
    // 7F2B81E0: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F2B81E4:
    ctx->pc = 0x7F2B81E4u;
    // 7F2B81E4: bl      0x7F2900A0
    {
            ctx->lr = 0x7F2B81E8u;
            ctx->pc = 0x7F2900A0u;
            return;
    }

label_7F2B81E8:
    ctx->pc = 0x7F2B81E8u;
    ctx->downcount -= 2;
    // 7F2B81E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B81EC:
    ctx->pc = 0x7F2B81ECu;
    // 7F2B81EC: bl      0x7F2965CC
    {
            ctx->lr = 0x7F2B81F0u;
            ctx->pc = 0x7F2965CCu;
            return;
    }

label_7F2B81F0:
    ctx->pc = 0x7F2B81F0u;
    ctx->downcount -= 2;
    // 7F2B81F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B81F4:
    ctx->pc = 0x7F2B81F4u;
    // 7F2B81F4: bl      0x7F29D6E0
    {
            ctx->lr = 0x7F2B81F8u;
            ctx->pc = 0x7F29D6E0u;
            return;
    }

label_7F2B81F8:
    ctx->pc = 0x7F2B81F8u;
    ctx->downcount -= 2;
    // 7F2B81F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B81FC:
    ctx->pc = 0x7F2B81FCu;
    // 7F2B81FC: bl      0x7F29DCAC
    {
            ctx->lr = 0x7F2B8200u;
            ctx->pc = 0x7F29DCACu;
            return;
    }

label_7F2B8200:
    ctx->pc = 0x7F2B8200u;
    ctx->downcount -= 3;
    // 7F2B8200: li      r4, 50
    ctx->gpr[4] = (u32)(s32)(50);

label_7F2B8204:
    ctx->pc = 0x7F2B8204u;
    // 7F2B8204: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8208:
    ctx->pc = 0x7F2B8208u;
    // 7F2B8208: bl      0x7F2900F0
    {
            ctx->lr = 0x7F2B820Cu;
            ctx->pc = 0x7F2900F0u;
            return;
    }

label_7F2B820C:
    ctx->pc = 0x7F2B820Cu;
    ctx->downcount -= 3;
    // 7F2B820C: lwz     r12, 2648(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2648);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2B8210:
    ctx->pc = 0x7F2B8210u;
    // 7F2B8210: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B8214:
    ctx->pc = 0x7F2B8214u;
    // 7F2B8214: bc    12, 2, 0x7F2B8244
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8244;
        }
    }

label_7F2B8218:
    ctx->pc = 0x7F2B8218u;
    ctx->downcount -= 12;
    // 7F2B8218: lwz     r4, 2652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2652);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B821C:
    ctx->pc = 0x7F2B821Cu;
    // 7F2B821C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8220:
    ctx->pc = 0x7F2B8220u;
    // 7F2B8220: addi    r0, r4, 5
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5);

label_7F2B8224:
    ctx->pc = 0x7F2B8224u;
    // 7F2B8224: stw     r0, 2652(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2652);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8228:
    ctx->pc = 0x7F2B8228u;
    // 7F2B8228: lwz     r0, 2660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B822C:
    ctx->pc = 0x7F2B822Cu;
    // 7F2B822C: stw     r0, 2656(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2656);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8230:
    ctx->pc = 0x7F2B8230u;
    // 7F2B8230: lwz     r5, 2660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2660);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8234:
    ctx->pc = 0x7F2B8234u;
    // 7F2B8234: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_7F2B8238:
    ctx->pc = 0x7F2B8238u;
    // 7F2B8238: stw     r0, 2660(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2660);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B823C:
    ctx->pc = 0x7F2B823Cu;
    // 7F2B823C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F2B8240:
    ctx->pc = 0x7F2B8240u;
    // 7F2B8240: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F2B8244u;
            ctx->pc = target;
            return;
        }
    }

label_7F2B8244:
    ctx->pc = 0x7F2B8244u;
    ctx->downcount -= 2;
    // 7F2B8244: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8248:
    ctx->pc = 0x7F2B8248u;
    // 7F2B8248: bl      0x7F298A9C
    {
            ctx->lr = 0x7F2B824Cu;
            ctx->pc = 0x7F298A9Cu;
            return;
    }

label_7F2B824C:
    ctx->pc = 0x7F2B824Cu;
    ctx->downcount -= 2;
    // 7F2B824C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8250:
    ctx->pc = 0x7F2B8250u;
    // 7F2B8250: bl      0x7F296898
    {
            ctx->lr = 0x7F2B8254u;
            ctx->pc = 0x7F296898u;
            return;
    }

label_7F2B8254:
    ctx->pc = 0x7F2B8254u;
    ctx->downcount -= 3;
    // 7F2B8254: lha     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B8258:
    ctx->pc = 0x7F2B8258u;
    // 7F2B8258: lha     r4, 3908(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3908);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B825C:
    ctx->pc = 0x7F2B825Cu;
    // 7F2B825C: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F2B8260u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F2B8260:
    ctx->pc = 0x7F2B8260u;
    ctx->downcount -= 4;
    // 7F2B8260: sth     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2B8264:
    ctx->pc = 0x7F2B8264u;
    // 7F2B8264: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2B8268:
    ctx->pc = 0x7F2B8268u;
    // 7F2B8268: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B826C:
    ctx->pc = 0x7F2B826Cu;
    // 7F2B826C: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8270u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8270:
    ctx->pc = 0x7F2B8270u;
    ctx->downcount -= 5;
    // 7F2B8270: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8274:
    ctx->pc = 0x7F2B8274u;
    // 7F2B8274: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8278:
    ctx->pc = 0x7F2B8278u;
    // 7F2B8278: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B827C:
    ctx->pc = 0x7F2B827Cu;
    // 7F2B827C: or.   r0, r4, r0
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

label_7F2B8280:
    ctx->pc = 0x7F2B8280u;
    // 7F2B8280: bc    4, 2, 0x7F2B82A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B82A4;
        }
    }

label_7F2B8284:
    ctx->pc = 0x7F2B8284u;
    ctx->downcount -= 6;
    // 7F2B8284: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B8288:
    ctx->pc = 0x7F2B8288u;
    // 7F2B8288: lis     r4, 158
    ctx->gpr[4] = ((u32)(s32)(158) << 16);

label_7F2B828C:
    ctx->pc = 0x7F2B828Cu;
    // 7F2B828C: addi    r3, r3, -5664
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5664);

label_7F2B8290:
    ctx->pc = 0x7F2B8290u;
    // 7F2B8290: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8294:
    ctx->pc = 0x7F2B8294u;
    // 7F2B8294: addi    r4, r4, -31751
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31751);

label_7F2B8298:
    ctx->pc = 0x7F2B8298u;
    // 7F2B8298: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B829Cu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B829C:
    ctx->pc = 0x7F2B829Cu;
    ctx->downcount -= 2;
    // 7F2B829C: cmpwi   r3, 0
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

label_7F2B82A0:
    ctx->pc = 0x7F2B82A0u;
    // 7F2B82A0: bc    12, 2, 0x7F2B833C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B833C;
        }
    }

label_7F2B82A4:
    ctx->pc = 0x7F2B82A4u;
    ctx->downcount -= 3;
    // 7F2B82A4: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_7F2B82A8:
    ctx->pc = 0x7F2B82A8u;
    // 7F2B82A8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B82AC:
    ctx->pc = 0x7F2B82ACu;
    // 7F2B82AC: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B82B0u;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B82B0:
    ctx->pc = 0x7F2B82B0u;
    ctx->downcount -= 5;
    // 7F2B82B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B82B4:
    ctx->pc = 0x7F2B82B4u;
    // 7F2B82B4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B82B8:
    ctx->pc = 0x7F2B82B8u;
    // 7F2B82B8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B82BC:
    ctx->pc = 0x7F2B82BCu;
    // 7F2B82BC: or.   r0, r4, r0
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

label_7F2B82C0:
    ctx->pc = 0x7F2B82C0u;
    // 7F2B82C0: bc    12, 2, 0x7F2B82D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B82D4;
        }
    }

label_7F2B82C4:
    ctx->pc = 0x7F2B82C4u;
    ctx->downcount -= 3;
    // 7F2B82C4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2B82C8:
    ctx->pc = 0x7F2B82C8u;
    // 7F2B82C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B82CC:
    ctx->pc = 0x7F2B82CCu;
    // 7F2B82CC: bl      0x7F2EEA18
    {
            ctx->lr = 0x7F2B82D0u;
            ctx->pc = 0x7F2EEA18u;
            return;
    }

label_7F2B82D0:
    ctx->pc = 0x7F2B82D0u;
    ctx->downcount -= 1;
    // 7F2B82D0: b       0x7F2B83BC
    {
            goto label_7F2B83BC;
    }

label_7F2B82D4:
    ctx->pc = 0x7F2B82D4u;
    ctx->downcount -= 3;
    // 7F2B82D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B82D8:
    ctx->pc = 0x7F2B82D8u;
    // 7F2B82D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B82DC:
    ctx->pc = 0x7F2B82DCu;
    // 7F2B82DC: bl      0x7F2EEA18
    {
            ctx->lr = 0x7F2B82E0u;
            ctx->pc = 0x7F2EEA18u;
            return;
    }

label_7F2B82E0:
    ctx->pc = 0x7F2B82E0u;
    ctx->downcount -= 6;
    // 7F2B82E0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B82E4:
    ctx->pc = 0x7F2B82E4u;
    // 7F2B82E4: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B82E8:
    ctx->pc = 0x7F2B82E8u;
    // 7F2B82E8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B82EC:
    ctx->pc = 0x7F2B82ECu;
    // 7F2B82EC: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B82F0:
    ctx->pc = 0x7F2B82F0u;
    // 7F2B82F0: cmpwi   r0, 1
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

label_7F2B82F4:
    ctx->pc = 0x7F2B82F4u;
    // 7F2B82F4: bc    4, 2, 0x7F2B83BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B83BC;
        }
    }

label_7F2B82F8:
    ctx->pc = 0x7F2B82F8u;
    ctx->downcount -= 9;
    // 7F2B82F8: lis     r3, 165
    ctx->gpr[3] = ((u32)(s32)(165) << 16);

label_7F2B82FC:
    ctx->pc = 0x7F2B82FCu;
    // 7F2B82FC: addi    r0, r1, 12
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(12);

label_7F2B8300:
    ctx->pc = 0x7F2B8300u;
    // 7F2B8300: addi    r3, r3, 20407
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20407);

label_7F2B8304:
    ctx->pc = 0x7F2B8304u;
    // 7F2B8304: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2B8308:
    ctx->pc = 0x7F2B8308u;
    // 7F2B8308: stw     r3, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B830C:
    ctx->pc = 0x7F2B830Cu;
    // 7F2B830C: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F2B8310:
    ctx->pc = 0x7F2B8310u;
    // 7F2B8310: stw     r4, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2B8314:
    ctx->pc = 0x7F2B8314u;
    // 7F2B8314: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8318:
    ctx->pc = 0x7F2B8318u;
    // 7F2B8318: bl      0x7F012050
    {
            ctx->lr = 0x7F2B831Cu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F2B831C:
    ctx->pc = 0x7F2B831Cu;
    ctx->downcount -= 7;
    // 7F2B831C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F2B8320:
    ctx->pc = 0x7F2B8320u;
    // 7F2B8320: lwz     r4, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B8324:
    ctx->pc = 0x7F2B8324u;
    // 7F2B8324: subfe   r5, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F2B8328:
    ctx->pc = 0x7F2B8328u;
    // 7F2B8328: addi    r3, r1, 48
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2B832C:
    ctx->pc = 0x7F2B832Cu;
    // 7F2B832C: addi    r0, r5, 2
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(2);

label_7F2B8330:
    ctx->pc = 0x7F2B8330u;
    // 7F2B8330: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8334:
    ctx->pc = 0x7F2B8334u;
    // 7F2B8334: bl      0x7F3C9494
    {
            ctx->lr = 0x7F2B8338u;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F2B8338:
    ctx->pc = 0x7F2B8338u;
    ctx->downcount -= 1;
    // 7F2B8338: b       0x7F2B83BC
    {
            goto label_7F2B83BC;
    }

label_7F2B833C:
    ctx->pc = 0x7F2B833Cu;
    ctx->downcount -= 3;
    // 7F2B833C: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F2B8340:
    ctx->pc = 0x7F2B8340u;
    // 7F2B8340: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8344:
    ctx->pc = 0x7F2B8344u;
    // 7F2B8344: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B8348u;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B8348:
    ctx->pc = 0x7F2B8348u;
    ctx->downcount -= 5;
    // 7F2B8348: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B834C:
    ctx->pc = 0x7F2B834Cu;
    // 7F2B834C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8350:
    ctx->pc = 0x7F2B8350u;
    // 7F2B8350: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8354:
    ctx->pc = 0x7F2B8354u;
    // 7F2B8354: or.   r0, r4, r0
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

label_7F2B8358:
    ctx->pc = 0x7F2B8358u;
    // 7F2B8358: bc    12, 2, 0x7F2B836C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B836C;
        }
    }

label_7F2B835C:
    ctx->pc = 0x7F2B835Cu;
    ctx->downcount -= 3;
    // 7F2B835C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8360:
    ctx->pc = 0x7F2B8360u;
    // 7F2B8360: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8364:
    ctx->pc = 0x7F2B8364u;
    // 7F2B8364: bl      0x7F2EEA18
    {
            ctx->lr = 0x7F2B8368u;
            ctx->pc = 0x7F2EEA18u;
            return;
    }

label_7F2B8368:
    ctx->pc = 0x7F2B8368u;
    ctx->downcount -= 1;
    // 7F2B8368: b       0x7F2B83BC
    {
            goto label_7F2B83BC;
    }

label_7F2B836C:
    ctx->pc = 0x7F2B836Cu;
    ctx->downcount -= 3;
    // 7F2B836C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2B8370:
    ctx->pc = 0x7F2B8370u;
    // 7F2B8370: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8374:
    ctx->pc = 0x7F2B8374u;
    // 7F2B8374: bl      0x7F2EEA18
    {
            ctx->lr = 0x7F2B8378u;
            ctx->pc = 0x7F2EEA18u;
            return;
    }

label_7F2B8378:
    ctx->pc = 0x7F2B8378u;
    ctx->downcount -= 6;
    // 7F2B8378: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B837C:
    ctx->pc = 0x7F2B837Cu;
    // 7F2B837C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B8380:
    ctx->pc = 0x7F2B8380u;
    // 7F2B8380: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8384:
    ctx->pc = 0x7F2B8384u;
    // 7F2B8384: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B8388:
    ctx->pc = 0x7F2B8388u;
    // 7F2B8388: cmpwi   r0, 1
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

label_7F2B838C:
    ctx->pc = 0x7F2B838Cu;
    // 7F2B838C: bc    4, 2, 0x7F2B83BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B83BC;
        }
    }

label_7F2B8390:
    ctx->pc = 0x7F2B8390u;
    ctx->downcount -= 11;
    // 7F2B8390: lis     r3, 165
    ctx->gpr[3] = ((u32)(s32)(165) << 16);

label_7F2B8394:
    ctx->pc = 0x7F2B8394u;
    // 7F2B8394: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2B8398:
    ctx->pc = 0x7F2B8398u;
    // 7F2B8398: addi    r3, r3, 20407
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20407);

label_7F2B839C:
    ctx->pc = 0x7F2B839Cu;
    // 7F2B839C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2B83A0:
    ctx->pc = 0x7F2B83A0u;
    // 7F2B83A0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2B83A4:
    ctx->pc = 0x7F2B83A4u;
    // 7F2B83A4: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B83A8:
    ctx->pc = 0x7F2B83A8u;
    // 7F2B83A8: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2B83AC:
    ctx->pc = 0x7F2B83ACu;
    // 7F2B83AC: stw     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B83B0:
    ctx->pc = 0x7F2B83B0u;
    // 7F2B83B0: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2B83B4:
    ctx->pc = 0x7F2B83B4u;
    // 7F2B83B4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B83B8:
    ctx->pc = 0x7F2B83B8u;
    // 7F2B83B8: bl      0x7F3C9494
    {
            ctx->lr = 0x7F2B83BCu;
            ctx->pc = 0x7F3C9494u;
            return;
    }

label_7F2B83BC:
    ctx->pc = 0x7F2B83BCu;
    ctx->downcount -= 3;
    // 7F2B83BC: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F2B83C0:
    ctx->pc = 0x7F2B83C0u;
    // 7F2B83C0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B83C4:
    ctx->pc = 0x7F2B83C4u;
    // 7F2B83C4: bl      0x7F290054
    {
            ctx->lr = 0x7F2B83C8u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B83C8:
    ctx->pc = 0x7F2B83C8u;
    ctx->downcount -= 5;
    // 7F2B83C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B83CC:
    ctx->pc = 0x7F2B83CCu;
    // 7F2B83CC: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F2B83D0:
    ctx->pc = 0x7F2B83D0u;
    // 7F2B83D0: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F2B83D4:
    ctx->pc = 0x7F2B83D4u;
    // 7F2B83D4: or.   r0, r4, r0
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

label_7F2B83D8:
    ctx->pc = 0x7F2B83D8u;
    // 7F2B83D8: bc    12, 2, 0x7F2B84F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B84F0;
        }
    }

label_7F2B83DC:
    ctx->pc = 0x7F2B83DCu;
    ctx->downcount -= 47;
    // 7F2B83DC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B83E0:
    ctx->pc = 0x7F2B83E0u;
    // 7F2B83E0: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2B83E4:
    ctx->pc = 0x7F2B83E4u;
    // 7F2B83E4: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B83E8:
    ctx->pc = 0x7F2B83E8u;
    // 7F2B83E8: lha     r3, 288(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(288);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B83EC:
    ctx->pc = 0x7F2B83ECu;
    // 7F2B83EC: lha     r4, 286(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(286);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B83F0:
    ctx->pc = 0x7F2B83F0u;
    // 7F2B83F0: divw   r0, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_7F2B83F4:
    ctx->pc = 0x7F2B83F4u;
    // 7F2B83F4: cmpw    r4, r0
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

label_7F2B83F8:
    ctx->pc = 0x7F2B83F8u;
    // 7F2B83F8: bc    12, 0, 0x7F2B840C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B840C;
        }
    }

label_7F2B83FC:
    ctx->pc = 0x7F2B83FCu;
    ctx->downcount -= 3;
    // 7F2B83FC: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F2B8400:
    ctx->pc = 0x7F2B8400u;
    // 7F2B8400: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8404:
    ctx->pc = 0x7F2B8404u;
    // 7F2B8404: bl      0x7F29002C
    {
            ctx->lr = 0x7F2B8408u;
            ctx->pc = 0x7F29002Cu;
            return;
    }

label_7F2B8408:
    ctx->pc = 0x7F2B8408u;
    ctx->downcount -= 1;
    // 7F2B8408: b       0x7F2B8534
    {
            goto label_7F2B8534;
    }

label_7F2B840C:
    ctx->pc = 0x7F2B840Cu;
    ctx->downcount -= 6;
    // 7F2B840C: lhz     r3, 3958(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3958);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F2B8410:
    ctx->pc = 0x7F2B8410u;
    // 7F2B8410: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2B8414:
    ctx->pc = 0x7F2B8414u;
    // 7F2B8414: rlwinm r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_7F2B8418:
    ctx->pc = 0x7F2B8418u;
    // 7F2B8418: sth     r3, 3958(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3958);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2B841C:
    ctx->pc = 0x7F2B841Cu;
    // 7F2B841C: cmplwi  r0, 0x0014
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

label_7F2B8420:
    ctx->pc = 0x7F2B8420u;
    // 7F2B8420: bc    12, 0, 0x7F2B84C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B84C0;
        }
    }

label_7F2B8424:
    ctx->pc = 0x7F2B8424u;
    ctx->downcount -= 3;
    // 7F2B8424: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8428:
    ctx->pc = 0x7F2B8428u;
    // 7F2B8428: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F2B842C:
    ctx->pc = 0x7F2B842Cu;
    // 7F2B842C: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8430u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8430:
    ctx->pc = 0x7F2B8430u;
    ctx->downcount -= 5;
    // 7F2B8430: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8434:
    ctx->pc = 0x7F2B8434u;
    // 7F2B8434: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8438:
    ctx->pc = 0x7F2B8438u;
    // 7F2B8438: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B843C:
    ctx->pc = 0x7F2B843Cu;
    // 7F2B843C: or.   r0, r4, r0
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

label_7F2B8440:
    ctx->pc = 0x7F2B8440u;
    // 7F2B8440: bc    4, 2, 0x7F2B84B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B84B8;
        }
    }

label_7F2B8444:
    ctx->pc = 0x7F2B8444u;
    ctx->downcount -= 1;
    // 7F2B8444: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F2B8448u;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F2B8448:
    ctx->pc = 0x7F2B8448u;
    ctx->downcount -= 2;
    // 7F2B8448: cmpwi   r3, 0
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

label_7F2B844C:
    ctx->pc = 0x7F2B844Cu;
    // 7F2B844C: bc    4, 2, 0x7F2B84B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B84B8;
        }
    }

label_7F2B8450:
    ctx->pc = 0x7F2B8450u;
    ctx->downcount -= 6;
    // 7F2B8450: lis     r3, 32
    ctx->gpr[3] = ((u32)(s32)(32) << 16);

label_7F2B8454:
    ctx->pc = 0x7F2B8454u;
    // 7F2B8454: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2B8458:
    ctx->pc = 0x7F2B8458u;
    // 7F2B8458: addi    r3, r3, 128
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(128);

label_7F2B845C:
    ctx->pc = 0x7F2B845Cu;
    // 7F2B845C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2B8460:
    ctx->pc = 0x7F2B8460u;
    // 7F2B8460: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B8464:
    ctx->pc = 0x7F2B8464u;
    // 7F2B8464: bl      0x7F012018
    {
            ctx->lr = 0x7F2B8468u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2B8468:
    ctx->pc = 0x7F2B8468u;
    ctx->downcount -= 5;
    // 7F2B8468: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B846C:
    ctx->pc = 0x7F2B846Cu;
    // 7F2B846C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8470:
    ctx->pc = 0x7F2B8470u;
    // 7F2B8470: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8474:
    ctx->pc = 0x7F2B8474u;
    // 7F2B8474: or.   r0, r4, r0
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

label_7F2B8478:
    ctx->pc = 0x7F2B8478u;
    // 7F2B8478: bc    12, 2, 0x7F2B8484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8484;
        }
    }

label_7F2B847C:
    ctx->pc = 0x7F2B847Cu;
    ctx->downcount -= 2;
    // 7F2B847C: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F2B8480:
    ctx->pc = 0x7F2B8480u;
    // 7F2B8480: b       0x7F2B8488
    {
            goto label_7F2B8488;
    }

label_7F2B8484:
    ctx->pc = 0x7F2B8484u;
    ctx->downcount -= 1;
    // 7F2B8484: lwz     r6, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2B8488:
    ctx->pc = 0x7F2B8488u;
    ctx->downcount -= 12;
    // 7F2B8488: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2B848C:
    ctx->pc = 0x7F2B848Cu;
    // 7F2B848C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2B8490:
    ctx->pc = 0x7F2B8490u;
    // 7F2B8490: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8494:
    ctx->pc = 0x7F2B8494u;
    // 7F2B8494: li      r4, 2000
    ctx->gpr[4] = (u32)(s32)(2000);

label_7F2B8498:
    ctx->pc = 0x7F2B8498u;
    // 7F2B8498: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B849C:
    ctx->pc = 0x7F2B849Cu;
    // 7F2B849C: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2B84A0:
    ctx->pc = 0x7F2B84A0u;
    // 7F2B84A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B84A4:
    ctx->pc = 0x7F2B84A4u;
    // 7F2B84A4: lwz     r7, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2B84A8:
    ctx->pc = 0x7F2B84A8u;
    // 7F2B84A8: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B84AC:
    ctx->pc = 0x7F2B84ACu;
    // 7F2B84AC: stw     r7, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2B84B0:
    ctx->pc = 0x7F2B84B0u;
    // 7F2B84B0: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B84B4:
    ctx->pc = 0x7F2B84B4u;
    // 7F2B84B4: bl      0x7F1E33AC
    {
            ctx->lr = 0x7F2B84B8u;
            ctx->pc = 0x7F1E33ACu;
            return;
    }

label_7F2B84B8:
    ctx->pc = 0x7F2B84B8u;
    ctx->downcount -= 2;
    // 7F2B84B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B84BC:
    ctx->pc = 0x7F2B84BCu;
    // 7F2B84BC: sth     r0, 3958(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3958);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B84C0:
    ctx->pc = 0x7F2B84C0u;
    ctx->downcount -= 6;
    // 7F2B84C0: lhz     r0, 710(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(710);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2B84C4:
    ctx->pc = 0x7F2B84C4u;
    // 7F2B84C4: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F2B84C8:
    ctx->pc = 0x7F2B84C8u;
    // 7F2B84C8: sth     r0, 710(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(710);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B84CC:
    ctx->pc = 0x7F2B84CCu;
    // 7F2B84CC: lwz     r0, 2504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B84D0:
    ctx->pc = 0x7F2B84D0u;
    // 7F2B84D0: cmplwi  r0, 0x0008
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

label_7F2B84D4:
    ctx->pc = 0x7F2B84D4u;
    // 7F2B84D4: bc    4, 2, 0x7F2B8534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8534;
        }
    }

label_7F2B84D8:
    ctx->pc = 0x7F2B84D8u;
    ctx->downcount -= 5;
    // 7F2B84D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B84DC:
    ctx->pc = 0x7F2B84DCu;
    // 7F2B84DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B84E0:
    ctx->pc = 0x7F2B84E0u;
    // 7F2B84E0: lis     r6, 4
    ctx->gpr[6] = ((u32)(s32)(4) << 16);

label_7F2B84E4:
    ctx->pc = 0x7F2B84E4u;
    // 7F2B84E4: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2B84E8:
    ctx->pc = 0x7F2B84E8u;
    // 7F2B84E8: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2B84ECu;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2B84EC:
    ctx->pc = 0x7F2B84ECu;
    ctx->downcount -= 1;
    // 7F2B84EC: b       0x7F2B8534
    {
            goto label_7F2B8534;
    }

label_7F2B84F0:
    ctx->pc = 0x7F2B84F0u;
    ctx->downcount -= 5;
    // 7F2B84F0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B84F4:
    ctx->pc = 0x7F2B84F4u;
    // 7F2B84F4: addi    r4, r3, -6664
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6664);

label_7F2B84F8:
    ctx->pc = 0x7F2B84F8u;
    // 7F2B84F8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B84FC:
    ctx->pc = 0x7F2B84FCu;
    // 7F2B84FC: cmpwi   r3, 0
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

label_7F2B8500:
    ctx->pc = 0x7F2B8500u;
    // 7F2B8500: bc    12, 2, 0x7F2B8528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8528;
        }
    }

label_7F2B8504:
    ctx->pc = 0x7F2B8504u;
    ctx->downcount -= 4;
    // 7F2B8504: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2B8508:
    ctx->pc = 0x7F2B8508u;
    // 7F2B8508: cmpwi   r0, 1
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

label_7F2B850C:
    ctx->pc = 0x7F2B850Cu;
    // 7F2B850C: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8510:
    ctx->pc = 0x7F2B8510u;
    // 7F2B8510: bc    4, 2, 0x7F2B8528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8528;
        }
    }

label_7F2B8514:
    ctx->pc = 0x7F2B8514u;
    ctx->downcount -= 5;
    // 7F2B8514: stw     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B8518:
    ctx->pc = 0x7F2B8518u;
    // 7F2B8518: lhz     r0, 710(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(710);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2B851C:
    ctx->pc = 0x7F2B851Cu;
    // 7F2B851C: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F2B8520:
    ctx->pc = 0x7F2B8520u;
    // 7F2B8520: sth     r0, 710(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(710);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B8524:
    ctx->pc = 0x7F2B8524u;
    // 7F2B8524: b       0x7F2B8534
    {
            goto label_7F2B8534;
    }

label_7F2B8528:
    ctx->pc = 0x7F2B8528u;
    ctx->downcount -= 3;
    // 7F2B8528: lhz     r0, 710(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(710);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2B852C:
    ctx->pc = 0x7F2B852Cu;
    // 7F2B852C: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F2B8530:
    ctx->pc = 0x7F2B8530u;
    // 7F2B8530: sth     r0, 710(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(710);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B8534:
    ctx->pc = 0x7F2B8534u;
    ctx->downcount -= 2;
    // 7F2B8534: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8538:
    ctx->pc = 0x7F2B8538u;
    // 7F2B8538: bl      0x7F2950F4
    {
            ctx->lr = 0x7F2B853Cu;
            ctx->pc = 0x7F2950F4u;
            return;
    }

label_7F2B853C:
    ctx->pc = 0x7F2B853Cu;
    ctx->downcount -= 2;
    // 7F2B853C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8540:
    ctx->pc = 0x7F2B8540u;
    // 7F2B8540: bl      0x7F2950F0
    {
            ctx->lr = 0x7F2B8544u;
            ctx->pc = 0x7F2950F0u;
            return;
    }

label_7F2B8544:
    ctx->pc = 0x7F2B8544u;
    ctx->downcount -= 2;
    // 7F2B8544: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8548:
    ctx->pc = 0x7F2B8548u;
    // 7F2B8548: bl      0x7F294FB4
    {
            ctx->lr = 0x7F2B854Cu;
            ctx->pc = 0x7F294FB4u;
            return;
    }

label_7F2B854C:
    ctx->pc = 0x7F2B854Cu;
    ctx->downcount -= 3;
    // 7F2B854C: lha     r3, 3918(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3918);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B8550:
    ctx->pc = 0x7F2B8550u;
    // 7F2B8550: cmpwi   r3, 0
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

label_7F2B8554:
    ctx->pc = 0x7F2B8554u;
    // 7F2B8554: bc    4, 1, 0x7F2B8560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8560;
        }
    }

label_7F2B8558:
    ctx->pc = 0x7F2B8558u;
    ctx->downcount -= 2;
    // 7F2B8558: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2B855C:
    ctx->pc = 0x7F2B855Cu;
    // 7F2B855C: sth     r0, 3918(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3918);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B8560:
    ctx->pc = 0x7F2B8560u;
    ctx->downcount -= 3;
    // 7F2B8560: lha     r0, 3918(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3918);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B8564:
    ctx->pc = 0x7F2B8564u;
    // 7F2B8564: cmpwi   r0, 0
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

label_7F2B8568:
    ctx->pc = 0x7F2B8568u;
    // 7F2B8568: bc    12, 1, 0x7F2B85D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B85D8;
        }
    }

label_7F2B856C:
    ctx->pc = 0x7F2B856Cu;
    ctx->downcount -= 3;
    // 7F2B856C: li      r4, 13888
    ctx->gpr[4] = (u32)(s32)(13888);

label_7F2B8570:
    ctx->pc = 0x7F2B8570u;
    // 7F2B8570: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8574:
    ctx->pc = 0x7F2B8574u;
    // 7F2B8574: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8578u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8578:
    ctx->pc = 0x7F2B8578u;
    ctx->downcount -= 5;
    // 7F2B8578: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B857C:
    ctx->pc = 0x7F2B857Cu;
    // 7F2B857C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8580:
    ctx->pc = 0x7F2B8580u;
    // 7F2B8580: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8584:
    ctx->pc = 0x7F2B8584u;
    // 7F2B8584: or.   r0, r4, r0
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

label_7F2B8588:
    ctx->pc = 0x7F2B8588u;
    // 7F2B8588: bc    4, 2, 0x7F2B85D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B85D8;
        }
    }

label_7F2B858C:
    ctx->pc = 0x7F2B858Cu;
    ctx->downcount -= 3;
    // 7F2B858C: lha     r0, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B8590:
    ctx->pc = 0x7F2B8590u;
    // 7F2B8590: cmpwi   r0, 2
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

label_7F2B8594:
    ctx->pc = 0x7F2B8594u;
    // 7F2B8594: bc    12, 2, 0x7F2B85D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B85D8;
        }
    }

label_7F2B8598:
    ctx->pc = 0x7F2B8598u;
    ctx->downcount -= 3;
    // 7F2B8598: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F2B859C:
    ctx->pc = 0x7F2B859Cu;
    // 7F2B859C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B85A0:
    ctx->pc = 0x7F2B85A0u;
    // 7F2B85A0: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B85A4u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B85A4:
    ctx->pc = 0x7F2B85A4u;
    ctx->downcount -= 5;
    // 7F2B85A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B85A8:
    ctx->pc = 0x7F2B85A8u;
    // 7F2B85A8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B85AC:
    ctx->pc = 0x7F2B85ACu;
    // 7F2B85AC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B85B0:
    ctx->pc = 0x7F2B85B0u;
    // 7F2B85B0: or.   r0, r4, r0
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

label_7F2B85B4:
    ctx->pc = 0x7F2B85B4u;
    // 7F2B85B4: bc    4, 2, 0x7F2B85D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B85D8;
        }
    }

label_7F2B85B8:
    ctx->pc = 0x7F2B85B8u;
    ctx->downcount -= 6;
    // 7F2B85B8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2B85BC:
    ctx->pc = 0x7F2B85BCu;
    // 7F2B85BC: addi    r3, r31, 2176
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2176);

label_7F2B85C0:
    ctx->pc = 0x7F2B85C0u;
    // 7F2B85C0: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F2B85C4:
    ctx->pc = 0x7F2B85C4u;
    // 7F2B85C4: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B85C8:
    ctx->pc = 0x7F2B85C8u;
    // 7F2B85C8: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B85CC:
    ctx->pc = 0x7F2B85CCu;
    // 7F2B85CC: bl      0x7F014944
    {
            ctx->lr = 0x7F2B85D0u;
            ctx->pc = 0x7F014944u;
            return;
    }

label_7F2B85D0:
    ctx->pc = 0x7F2B85D0u;
    ctx->downcount -= 2;
    // 7F2B85D0: addi    r3, r31, 2176
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(2176);

label_7F2B85D4:
    ctx->pc = 0x7F2B85D4u;
    // 7F2B85D4: bl      0x7F0148A0
    {
            ctx->lr = 0x7F2B85D8u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F2B85D8:
    ctx->pc = 0x7F2B85D8u;
    ctx->downcount -= 3;
    // 7F2B85D8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B85DC:
    ctx->pc = 0x7F2B85DCu;
    // 7F2B85DC: addi    r3, r3, -5872
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5872);

label_7F2B85E0:
    ctx->pc = 0x7F2B85E0u;
    // 7F2B85E0: bl      0x7F012070
    {
            ctx->lr = 0x7F2B85E4u;
            ctx->pc = 0x7F012070u;
            return;
    }

label_7F2B85E4:
    ctx->pc = 0x7F2B85E4u;
    ctx->downcount -= 3;
    // 7F2B85E4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2B85E8:
    ctx->pc = 0x7F2B85E8u;
    // 7F2B85E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B85EC:
    ctx->pc = 0x7F2B85ECu;
    // 7F2B85EC: bl      0x7F290054
    {
            ctx->lr = 0x7F2B85F0u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B85F0:
    ctx->pc = 0x7F2B85F0u;
    ctx->downcount -= 5;
    // 7F2B85F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B85F4:
    ctx->pc = 0x7F2B85F4u;
    // 7F2B85F4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B85F8:
    ctx->pc = 0x7F2B85F8u;
    // 7F2B85F8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B85FC:
    ctx->pc = 0x7F2B85FCu;
    // 7F2B85FC: or.   r0, r4, r0
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

label_7F2B8600:
    ctx->pc = 0x7F2B8600u;
    // 7F2B8600: bc    12, 2, 0x7F2B8628
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8628;
        }
    }

label_7F2B8604:
    ctx->pc = 0x7F2B8604u;
    ctx->downcount -= 8;
    // 7F2B8604: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B8608:
    ctx->pc = 0x7F2B8608u;
    // 7F2B8608: lha     r4, 2786(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2786);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B860C:
    ctx->pc = 0x7F2B860Cu;
    // 7F2B860C: addi    r5, r3, 26788
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(26788);

label_7F2B8610:
    ctx->pc = 0x7F2B8610u;
    // 7F2B8610: addi    r3, r31, 636
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(636);

label_7F2B8614:
    ctx->pc = 0x7F2B8614u;
    // 7F2B8614: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8614u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8618:
    ctx->pc = 0x7F2B8618u;
    // 7F2B8618: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F2B861C:
    ctx->pc = 0x7F2B861Cu;
    // 7F2B861C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2B8620:
    ctx->pc = 0x7F2B8620u;
    // 7F2B8620: bl      0x7F041A9C
    {
            ctx->lr = 0x7F2B8624u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F2B8624:
    ctx->pc = 0x7F2B8624u;
    ctx->downcount -= 1;
    // 7F2B8624: b       0x7F2B8648
    {
            goto label_7F2B8648;
    }

label_7F2B8628:
    ctx->pc = 0x7F2B8628u;
    ctx->downcount -= 8;
    // 7F2B8628: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B862C:
    ctx->pc = 0x7F2B862Cu;
    // 7F2B862C: lha     r4, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B8630:
    ctx->pc = 0x7F2B8630u;
    // 7F2B8630: addi    r5, r3, 26788
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(26788);

label_7F2B8634:
    ctx->pc = 0x7F2B8634u;
    // 7F2B8634: addi    r3, r31, 636
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(636);

label_7F2B8638:
    ctx->pc = 0x7F2B8638u;
    // 7F2B8638: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8638u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B863C:
    ctx->pc = 0x7F2B863Cu;
    // 7F2B863C: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F2B8640:
    ctx->pc = 0x7F2B8640u;
    // 7F2B8640: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2B8644:
    ctx->pc = 0x7F2B8644u;
    // 7F2B8644: bl      0x7F041A9C
    {
            ctx->lr = 0x7F2B8648u;
            ctx->pc = 0x7F041A9Cu;
            return;
    }

label_7F2B8648:
    ctx->pc = 0x7F2B8648u;
    ctx->downcount -= 47;
    // 7F2B8648: lwz     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B864C:
    ctx->pc = 0x7F2B864Cu;
    // 7F2B864C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B8650:
    ctx->pc = 0x7F2B8650u;
    // 7F2B8650: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2B8654:
    ctx->pc = 0x7F2B8654u;
    // 7F2B8654: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2B8658:
    ctx->pc = 0x7F2B8658u;
    // 7F2B8658: stw     r0, -5728(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5728);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B865C:
    ctx->pc = 0x7F2B865Cu;
    // 7F2B865C: addi    r8, r4, -5708
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-5708);

label_7F2B8660:
    ctx->pc = 0x7F2B8660u;
    // 7F2B8660: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B8664:
    ctx->pc = 0x7F2B8664u;
    // 7F2B8664: addi    r7, r5, -5848
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-5848);

label_7F2B8668:
    ctx->pc = 0x7F2B8668u;
    // 7F2B8668: lwz     r0, 224(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(224);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B866C:
    ctx->pc = 0x7F2B866Cu;
    // 7F2B866C: addi    r6, r3, 13880
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B8670:
    ctx->pc = 0x7F2B8670u;
    // 7F2B8670: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8674:
    ctx->pc = 0x7F2B8674u;
    // 7F2B8674: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2B8678:
    ctx->pc = 0x7F2B8678u;
    // 7F2B8678: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B867C:
    ctx->pc = 0x7F2B867Cu;
    // 7F2B867C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8680:
    ctx->pc = 0x7F2B8680u;
    // 7F2B8680: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2B8684:
    ctx->pc = 0x7F2B8684u;
    // 7F2B8684: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8688:
    ctx->pc = 0x7F2B8688u;
    // 7F2B8688: stw     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2B868C:
    ctx->pc = 0x7F2B868Cu;
    // 7F2B868C: stw     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8690:
    ctx->pc = 0x7F2B8690u;
    // 7F2B8690: lwz     r7, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2B8694:
    ctx->pc = 0x7F2B8694u;
    // 7F2B8694: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8698:
    ctx->pc = 0x7F2B8698u;
    // 7F2B8698: stw     r7, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2B869C:
    ctx->pc = 0x7F2B869Cu;
    // 7F2B869C: stw     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B86A0:
    ctx->pc = 0x7F2B86A0u;
    // 7F2B86A0: lfs     f0, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B86A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B86A4:
    ctx->pc = 0x7F2B86A4u;
    // 7F2B86A4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B86A4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2B86A8:
    ctx->pc = 0x7F2B86A8u;
    // 7F2B86A8: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B86A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2B86AC:
    ctx->pc = 0x7F2B86ACu;
    // 7F2B86AC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B86B0:
    ctx->pc = 0x7F2B86B0u;
    // 7F2B86B0: stw     r0, 268(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(268);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B86B4:
    ctx->pc = 0x7F2B86B4u;
    // 7F2B86B4: lfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B86B4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B86B8:
    ctx->pc = 0x7F2B86B8u;
    // 7F2B86B8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B86BC:
    ctx->pc = 0x7F2B86BCu;
    // 7F2B86BC: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B86BCu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2B86C0:
    ctx->pc = 0x7F2B86C0u;
    // 7F2B86C0: stfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B86C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2B86C4:
    ctx->pc = 0x7F2B86C4u;
    // 7F2B86C4: lwz     r0, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B86C8:
    ctx->pc = 0x7F2B86C8u;
    // 7F2B86C8: stw     r0, 272(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B86CC:
    ctx->pc = 0x7F2B86CCu;
    // 7F2B86CC: lfs     f0, 72(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B86CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B86D0:
    ctx->pc = 0x7F2B86D0u;
    // 7F2B86D0: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B86D4:
    ctx->pc = 0x7F2B86D4u;
    // 7F2B86D4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B86D4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2B86D8:
    ctx->pc = 0x7F2B86D8u;
    // 7F2B86D8: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B86D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2B86DC:
    ctx->pc = 0x7F2B86DCu;
    // 7F2B86DC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B86E0:
    ctx->pc = 0x7F2B86E0u;
    // 7F2B86E0: stw     r0, 276(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B86E4:
    ctx->pc = 0x7F2B86E4u;
    // 7F2B86E4: lha     r0, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B86E8:
    ctx->pc = 0x7F2B86E8u;
    // 7F2B86E8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B86EC:
    ctx->pc = 0x7F2B86ECu;
    // 7F2B86EC: rlwinm r0, r0, 0, 20, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000FFFu;
    }

label_7F2B86F0:
    ctx->pc = 0x7F2B86F0u;
    // 7F2B86F0: sth     r0, 280(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(280);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B86F4:
    ctx->pc = 0x7F2B86F4u;
    // 7F2B86F4: lwz     r0, 1320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B86F8:
    ctx->pc = 0x7F2B86F8u;
    // 7F2B86F8: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B86FC:
    ctx->pc = 0x7F2B86FCu;
    // 7F2B86FC: sth     r0, 282(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(282);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B8700:
    ctx->pc = 0x7F2B8700u;
    // 7F2B8700: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8704u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8704:
    ctx->pc = 0x7F2B8704u;
    ctx->downcount -= 5;
    // 7F2B8704: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8708:
    ctx->pc = 0x7F2B8708u;
    // 7F2B8708: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B870C:
    ctx->pc = 0x7F2B870Cu;
    // 7F2B870C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8710:
    ctx->pc = 0x7F2B8710u;
    // 7F2B8710: or.   r0, r4, r0
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

label_7F2B8714:
    ctx->pc = 0x7F2B8714u;
    // 7F2B8714: bc    12, 2, 0x7F2B8720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8720;
        }
    }

label_7F2B8718:
    ctx->pc = 0x7F2B8718u;
    ctx->downcount -= 2;
    // 7F2B8718: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2B871C:
    ctx->pc = 0x7F2B871Cu;
    // 7F2B871C: b       0x7F2B8724
    {
            goto label_7F2B8724;
    }

label_7F2B8720:
    ctx->pc = 0x7F2B8720u;
    ctx->downcount -= 1;
    // 7F2B8720: lha     r0, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B8724:
    ctx->pc = 0x7F2B8724u;
    ctx->downcount -= 27;
    // 7F2B8724: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2B8728:
    ctx->pc = 0x7F2B8728u;
    // 7F2B8728: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B872C:
    ctx->pc = 0x7F2B872Cu;
    // 7F2B872C: lwz     r10, 13880(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(13880);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2B8730:
    ctx->pc = 0x7F2B8730u;
    // 7F2B8730: addi    r5, r3, 26444
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(26444);

label_7F2B8734:
    ctx->pc = 0x7F2B8734u;
    // 7F2B8734: lis     r9, 32584
    ctx->gpr[9] = ((u32)(s32)(32584) << 16);

label_7F2B8738:
    ctx->pc = 0x7F2B8738u;
    // 7F2B8738: lis     r8, 32584
    ctx->gpr[8] = ((u32)(s32)(32584) << 16);

label_7F2B873C:
    ctx->pc = 0x7F2B873Cu;
    // 7F2B873C: sth     r0, 294(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B8740:
    ctx->pc = 0x7F2B8740u;
    // 7F2B8740: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2B8744:
    ctx->pc = 0x7F2B8744u;
    // 7F2B8744: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8744u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8748:
    ctx->pc = 0x7F2B8748u;
    // 7F2B8748: addi    r5, r4, 24796
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(24796);

label_7F2B874C:
    ctx->pc = 0x7F2B874Cu;
    // 7F2B874C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B8750:
    ctx->pc = 0x7F2B8750u;
    // 7F2B8750: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F2B8754:
    ctx->pc = 0x7F2B8754u;
    // 7F2B8754: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2B8758:
    ctx->pc = 0x7F2B8758u;
    // 7F2B8758: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F2B875C:
    ctx->pc = 0x7F2B875Cu;
    // 7F2B875C: lwz     r4, -5848(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5848);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B8760:
    ctx->pc = 0x7F2B8760u;
    // 7F2B8760: addi    r9, r9, 24772
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(24772);

label_7F2B8764:
    ctx->pc = 0x7F2B8764u;
    // 7F2B8764: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2B8768:
    ctx->pc = 0x7F2B8768u;
    // 7F2B8768: addi    r8, r8, 24780
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(24780);

label_7F2B876C:
    ctx->pc = 0x7F2B876Cu;
    // 7F2B876C: stw     r10, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B8770:
    ctx->pc = 0x7F2B8770u;
    // 7F2B8770: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8774:
    ctx->pc = 0x7F2B8774u;
    // 7F2B8774: stw     r10, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B8778:
    ctx->pc = 0x7F2B8778u;
    // 7F2B8778: stw     r10, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B877C:
    ctx->pc = 0x7F2B877Cu;
    // 7F2B877C: stw     r10, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B8780:
    ctx->pc = 0x7F2B8780u;
    // 7F2B8780: stw     r0, 24792(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24792);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8784:
    ctx->pc = 0x7F2B8784u;
    // 7F2B8784: stw     r0, 24788(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(24788);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8788:
    ctx->pc = 0x7F2B8788u;
    // 7F2B8788: stfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8788u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B878C:
    ctx->pc = 0x7F2B878Cu;
    // 7F2B878C: bl      0x7F013550
    {
            ctx->lr = 0x7F2B8790u;
            ctx->pc = 0x7F013550u;
            return;
    }

label_7F2B8790:
    ctx->pc = 0x7F2B8790u;
    ctx->downcount -= 3;
    // 7F2B8790: lwz     r0, 2504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8794:
    ctx->pc = 0x7F2B8794u;
    // 7F2B8794: cmplwi  r0, 0x0019
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0019u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B8798:
    ctx->pc = 0x7F2B8798u;
    // 7F2B8798: bc    4, 2, 0x7F2B87A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B87A8;
        }
    }

label_7F2B879C:
    ctx->pc = 0x7F2B879Cu;
    ctx->downcount -= 2;
    // 7F2B879C: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F2B87A0:
    ctx->pc = 0x7F2B87A0u;
    // 7F2B87A0: bl      0x7F0208E4
    {
            ctx->lr = 0x7F2B87A4u;
            ctx->pc = 0x7F0208E4u;
            return;
    }

label_7F2B87A4:
    ctx->pc = 0x7F2B87A4u;
    ctx->downcount -= 1;
    // 7F2B87A4: b       0x7F2B87B0
    {
            goto label_7F2B87B0;
    }

label_7F2B87A8:
    ctx->pc = 0x7F2B87A8u;
    ctx->downcount -= 2;
    // 7F2B87A8: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_7F2B87AC:
    ctx->pc = 0x7F2B87ACu;
    // 7F2B87AC: bl      0x7F0208F8
    {
            ctx->lr = 0x7F2B87B0u;
            ctx->pc = 0x7F0208F8u;
            return;
    }

label_7F2B87B0:
    ctx->pc = 0x7F2B87B0u;
    ctx->downcount -= 3;
    // 7F2B87B0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F2B87B4:
    ctx->pc = 0x7F2B87B4u;
    // 7F2B87B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B87B8:
    ctx->pc = 0x7F2B87B8u;
    // 7F2B87B8: bl      0x7F290054
    {
            ctx->lr = 0x7F2B87BCu;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B87BC:
    ctx->pc = 0x7F2B87BCu;
    ctx->downcount -= 5;
    // 7F2B87BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B87C0:
    ctx->pc = 0x7F2B87C0u;
    // 7F2B87C0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B87C4:
    ctx->pc = 0x7F2B87C4u;
    // 7F2B87C4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B87C8:
    ctx->pc = 0x7F2B87C8u;
    // 7F2B87C8: or.   r0, r4, r0
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

label_7F2B87CC:
    ctx->pc = 0x7F2B87CCu;
    // 7F2B87CC: bc    12, 2, 0x7F2B87E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B87E0;
        }
    }

label_7F2B87D0:
    ctx->pc = 0x7F2B87D0u;
    ctx->downcount -= 2;
    // 7F2B87D0: li      r3, 16
    ctx->gpr[3] = (u32)(s32)(16);

label_7F2B87D4:
    ctx->pc = 0x7F2B87D4u;
    // 7F2B87D4: bl      0x7F290C50
    {
            ctx->lr = 0x7F2B87D8u;
            ctx->pc = 0x7F290C50u;
            return;
    }

label_7F2B87D8:
    ctx->pc = 0x7F2B87D8u;
    ctx->downcount -= 2;
    // 7F2B87D8: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_7F2B87DC:
    ctx->pc = 0x7F2B87DCu;
    // 7F2B87DC: bl      0x7F290C50
    {
            ctx->lr = 0x7F2B87E0u;
            ctx->pc = 0x7F290C50u;
            return;
    }

label_7F2B87E0:
    ctx->pc = 0x7F2B87E0u;
    ctx->downcount -= 3;
    // 7F2B87E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B87E4:
    ctx->pc = 0x7F2B87E4u;
    // 7F2B87E4: li      r3, 16384
    ctx->gpr[3] = (u32)(s32)(16384);

label_7F2B87E8:
    ctx->pc = 0x7F2B87E8u;
    // 7F2B87E8: bl      0x7F29002C
    {
            ctx->lr = 0x7F2B87ECu;
            ctx->pc = 0x7F29002Cu;
            return;
    }

label_7F2B87EC:
    ctx->pc = 0x7F2B87ECu;
    ctx->downcount -= 5;
    // 7F2B87EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B87F0:
    ctx->pc = 0x7F2B87F0u;
    // 7F2B87F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B87F4:
    ctx->pc = 0x7F2B87F4u;
    // 7F2B87F4: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F2B87F8:
    ctx->pc = 0x7F2B87F8u;
    // 7F2B87F8: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2B87FC:
    ctx->pc = 0x7F2B87FCu;
    // 7F2B87FC: bl      0x7F042E08
    {
            ctx->lr = 0x7F2B8800u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F2B8800:
    ctx->pc = 0x7F2B8800u;
    ctx->downcount -= 5;
    // 7F2B8800: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2B8804:
    ctx->pc = 0x7F2B8804u;
    // 7F2B8804: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B8808:
    ctx->pc = 0x7F2B8808u;
    // 7F2B8808: lfs     f0, 26272(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8808u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B880C:
    ctx->pc = 0x7F2B880Cu;
    // 7F2B880C: stfs     f0, -6084(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B880Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6084);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8810:
    ctx->pc = 0x7F2B8810u;
    // 7F2B8810: bl      0x7F2B88A0
    {
            ctx->lr = 0x7F2B8814u;
            goto label_7F2B88A0;
    }

label_7F2B8814:
    ctx->pc = 0x7F2B8814u;
    ctx->downcount -= 4;
    // 7F2B8814: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8818:
    ctx->pc = 0x7F2B8818u;
    // 7F2B8818: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B881C:
    ctx->pc = 0x7F2B881Cu;
    // 7F2B881C: rlwinm. r0, r0, 0, 18, 19
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

label_7F2B8820:
    ctx->pc = 0x7F2B8820u;
    // 7F2B8820: bc    4, 2, 0x7F2B8884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8884;
        }
    }

label_7F2B8824:
    ctx->pc = 0x7F2B8824u;
    ctx->downcount -= 3;
    // 7F2B8824: lwz     r0, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8828:
    ctx->pc = 0x7F2B8828u;
    // 7F2B8828: rlwinm. r0, r0, 0, 16, 16
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00008000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2B882C:
    ctx->pc = 0x7F2B882Cu;
    // 7F2B882C: bc    4, 2, 0x7F2B8884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8884;
        }
    }

label_7F2B8830:
    ctx->pc = 0x7F2B8830u;
    ctx->downcount -= 5;
    // 7F2B8830: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B8834:
    ctx->pc = 0x7F2B8834u;
    // 7F2B8834: lfs     f1, 476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8834u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8838:
    ctx->pc = 0x7F2B8838u;
    // 7F2B8838: lfs     f0, 26332(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8838u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26332);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B883C:
    ctx->pc = 0x7F2B883Cu;
    // 7F2B883C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B883Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2B8840:
    ctx->pc = 0x7F2B8840u;
    // 7F2B8840: bc    12, 0, 0x7F2B8884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8884;
        }
    }

label_7F2B8844:
    ctx->pc = 0x7F2B8844u;
    ctx->downcount -= 3;
    // 7F2B8844: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8848:
    ctx->pc = 0x7F2B8848u;
    // 7F2B8848: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F2B884C:
    ctx->pc = 0x7F2B884Cu;
    // 7F2B884C: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8850u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8850:
    ctx->pc = 0x7F2B8850u;
    ctx->downcount -= 5;
    // 7F2B8850: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8854:
    ctx->pc = 0x7F2B8854u;
    // 7F2B8854: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8858:
    ctx->pc = 0x7F2B8858u;
    // 7F2B8858: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B885C:
    ctx->pc = 0x7F2B885Cu;
    // 7F2B885C: or.   r0, r4, r0
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

label_7F2B8860:
    ctx->pc = 0x7F2B8860u;
    // 7F2B8860: bc    4, 2, 0x7F2B8884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8884;
        }
    }

label_7F2B8864:
    ctx->pc = 0x7F2B8864u;
    ctx->downcount -= 3;
    // 7F2B8864: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8868:
    ctx->pc = 0x7F2B8868u;
    // 7F2B8868: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_7F2B886C:
    ctx->pc = 0x7F2B886Cu;
    // 7F2B886C: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8870u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8870:
    ctx->pc = 0x7F2B8870u;
    ctx->downcount -= 5;
    // 7F2B8870: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8874:
    ctx->pc = 0x7F2B8874u;
    // 7F2B8874: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8878:
    ctx->pc = 0x7F2B8878u;
    // 7F2B8878: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B887C:
    ctx->pc = 0x7F2B887Cu;
    // 7F2B887C: or.   r0, r4, r0
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

label_7F2B8880:
    ctx->pc = 0x7F2B8880u;
    // 7F2B8880: bc    12, 2, 0x7F2B888C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B888C;
        }
    }

label_7F2B8884:
    ctx->pc = 0x7F2B8884u;
    ctx->downcount -= 2;
    // 7F2B8884: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8888:
    ctx->pc = 0x7F2B8888u;
    // 7F2B8888: stw     r0, 3920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3920);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B888C:
    ctx->pc = 0x7F2B888Cu;
    ctx->downcount -= 6;
    // 7F2B888C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8890:
    ctx->pc = 0x7F2B8890u;
    // 7F2B8890: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2B8894:
    ctx->pc = 0x7F2B8894u;
    // 7F2B8894: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2B8898:
    ctx->pc = 0x7F2B8898u;
    // 7F2B8898: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F2B889C:
    ctx->pc = 0x7F2B889Cu;
    // 7F2B889C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2B88A0:
    ctx->pc = 0x7F2B88A0u;
    ctx->downcount -= 8;
    // 7F2B88A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2B88A4:
    ctx->pc = 0x7F2B88A4u;
    // 7F2B88A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2B88A8:
    ctx->pc = 0x7F2B88A8u;
    // 7F2B88A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B88AC:
    ctx->pc = 0x7F2B88ACu;
    // 7F2B88AC: lis     r3, 2048
    ctx->gpr[3] = ((u32)(s32)(2048) << 16);

label_7F2B88B0:
    ctx->pc = 0x7F2B88B0u;
    // 7F2B88B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B88B4:
    ctx->pc = 0x7F2B88B4u;
    // 7F2B88B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2B88B8:
    ctx->pc = 0x7F2B88B8u;
    // 7F2B88B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B88BC:
    ctx->pc = 0x7F2B88BCu;
    // 7F2B88BC: bl      0x7F012018
    {
            ctx->lr = 0x7F2B88C0u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2B88C0:
    ctx->pc = 0x7F2B88C0u;
    ctx->downcount -= 5;
    // 7F2B88C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B88C4:
    ctx->pc = 0x7F2B88C4u;
    // 7F2B88C4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B88C8:
    ctx->pc = 0x7F2B88C8u;
    // 7F2B88C8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B88CC:
    ctx->pc = 0x7F2B88CCu;
    // 7F2B88CC: or.   r0, r4, r0
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

label_7F2B88D0:
    ctx->pc = 0x7F2B88D0u;
    // 7F2B88D0: bc    4, 2, 0x7F2B8910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8910;
        }
    }

label_7F2B88D4:
    ctx->pc = 0x7F2B88D4u;
    ctx->downcount -= 5;
    // 7F2B88D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B88D8:
    ctx->pc = 0x7F2B88D8u;
    // 7F2B88D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B88DC:
    ctx->pc = 0x7F2B88DCu;
    // 7F2B88DC: lis     r6, 128
    ctx->gpr[6] = ((u32)(s32)(128) << 16);

label_7F2B88E0:
    ctx->pc = 0x7F2B88E0u;
    // 7F2B88E0: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2B88E4:
    ctx->pc = 0x7F2B88E4u;
    // 7F2B88E4: bl      0x7F012018
    {
            ctx->lr = 0x7F2B88E8u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2B88E8:
    ctx->pc = 0x7F2B88E8u;
    ctx->downcount -= 5;
    // 7F2B88E8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B88EC:
    ctx->pc = 0x7F2B88ECu;
    // 7F2B88EC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B88F0:
    ctx->pc = 0x7F2B88F0u;
    // 7F2B88F0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B88F4:
    ctx->pc = 0x7F2B88F4u;
    // 7F2B88F4: or.   r0, r4, r0
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

label_7F2B88F8:
    ctx->pc = 0x7F2B88F8u;
    // 7F2B88F8: bc    12, 2, 0x7F2B8910
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8910;
        }
    }

label_7F2B88FC:
    ctx->pc = 0x7F2B88FCu;
    ctx->downcount -= 5;
    // 7F2B88FC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B8900:
    ctx->pc = 0x7F2B8900u;
    // 7F2B8900: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B8904:
    ctx->pc = 0x7F2B8904u;
    // 7F2B8904: lwz     r3, 304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(304);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8908:
    ctx->pc = 0x7F2B8908u;
    // 7F2B8908: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2B890C:
    ctx->pc = 0x7F2B890Cu;
    // 7F2B890C: stw     r0, 304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8910:
    ctx->pc = 0x7F2B8910u;
    ctx->downcount -= 5;
    // 7F2B8910: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8914:
    ctx->pc = 0x7F2B8914u;
    // 7F2B8914: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8918:
    ctx->pc = 0x7F2B8918u;
    // 7F2B8918: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F2B891C:
    ctx->pc = 0x7F2B891Cu;
    // 7F2B891C: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2B8920:
    ctx->pc = 0x7F2B8920u;
    // 7F2B8920: bl      0x7F042E08
    {
            ctx->lr = 0x7F2B8924u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F2B8924:
    ctx->pc = 0x7F2B8924u;
    ctx->downcount -= 5;
    // 7F2B8924: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8928:
    ctx->pc = 0x7F2B8928u;
    // 7F2B8928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2B892C:
    ctx->pc = 0x7F2B892Cu;
    // 7F2B892C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2B8930:
    ctx->pc = 0x7F2B8930u;
    // 7F2B8930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2B8934:
    ctx->pc = 0x7F2B8934u;
    ctx->downcount -= 20;
    // 7F2B8934: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2B8938:
    ctx->pc = 0x7F2B8938u;
    // 7F2B8938: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2B893C:
    ctx->pc = 0x7F2B893Cu;
    // 7F2B893C: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8940:
    ctx->pc = 0x7F2B8940u;
    // 7F2B8940: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8940u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2B8944:
    ctx->pc = 0x7F2B8944u;
    // 7F2B8944: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8944u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2B8944u);
        if (ctx->exception) return;
    }

label_7F2B8948:
    ctx->pc = 0x7F2B8948u;
    // 7F2B8948: stmw     r28, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2B894C:
    ctx->pc = 0x7F2B894Cu;
    // 7F2B894C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B8950:
    ctx->pc = 0x7F2B8950u;
    // 7F2B8950: lis     r4, 4096
    ctx->gpr[4] = ((u32)(s32)(4096) << 16);

label_7F2B8954:
    ctx->pc = 0x7F2B8954u;
    // 7F2B8954: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8958:
    ctx->pc = 0x7F2B8958u;
    // 7F2B8958: bl      0x7F290054
    {
            ctx->lr = 0x7F2B895Cu;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B895C:
    ctx->pc = 0x7F2B895Cu;
    ctx->downcount -= 5;
    // 7F2B895C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8960:
    ctx->pc = 0x7F2B8960u;
    // 7F2B8960: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8964:
    ctx->pc = 0x7F2B8964u;
    // 7F2B8964: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8968:
    ctx->pc = 0x7F2B8968u;
    // 7F2B8968: or.   r0, r4, r0
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

label_7F2B896C:
    ctx->pc = 0x7F2B896Cu;
    // 7F2B896C: bc    4, 2, 0x7F2B981C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B981C;
        }
    }

label_7F2B8970:
    ctx->pc = 0x7F2B8970u;
    ctx->downcount -= 3;
    // 7F2B8970: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8974:
    ctx->pc = 0x7F2B8974u;
    // 7F2B8974: lis     r3, 1024
    ctx->gpr[3] = ((u32)(s32)(1024) << 16);

label_7F2B8978:
    ctx->pc = 0x7F2B8978u;
    // 7F2B8978: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B897Cu;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B897C:
    ctx->pc = 0x7F2B897Cu;
    ctx->downcount -= 5;
    // 7F2B897C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8980:
    ctx->pc = 0x7F2B8980u;
    // 7F2B8980: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8984:
    ctx->pc = 0x7F2B8984u;
    // 7F2B8984: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8988:
    ctx->pc = 0x7F2B8988u;
    // 7F2B8988: or.   r0, r4, r0
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

label_7F2B898C:
    ctx->pc = 0x7F2B898Cu;
    // 7F2B898C: bc    12, 2, 0x7F2B89AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B89AC;
        }
    }

label_7F2B8990:
    ctx->pc = 0x7F2B8990u;
    ctx->downcount -= 7;
    // 7F2B8990: lwz     r5, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8994:
    ctx->pc = 0x7F2B8994u;
    // 7F2B8994: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8998:
    ctx->pc = 0x7F2B8998u;
    // 7F2B8998: lis     r3, 1024
    ctx->gpr[3] = ((u32)(s32)(1024) << 16);

label_7F2B899C:
    ctx->pc = 0x7F2B899Cu;
    // 7F2B899C: lwz     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B89A0:
    ctx->pc = 0x7F2B89A0u;
    // 7F2B89A0: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F2B89A4:
    ctx->pc = 0x7F2B89A4u;
    // 7F2B89A4: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B89A8:
    ctx->pc = 0x7F2B89A8u;
    // 7F2B89A8: bl      0x7F2900A0
    {
            ctx->lr = 0x7F2B89ACu;
            ctx->pc = 0x7F2900A0u;
            return;
    }

label_7F2B89AC:
    ctx->pc = 0x7F2B89ACu;
    ctx->downcount -= 3;
    // 7F2B89AC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2B89B0:
    ctx->pc = 0x7F2B89B0u;
    // 7F2B89B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B89B4:
    ctx->pc = 0x7F2B89B4u;
    // 7F2B89B4: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B89B8u;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B89B8:
    ctx->pc = 0x7F2B89B8u;
    ctx->downcount -= 5;
    // 7F2B89B8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B89BC:
    ctx->pc = 0x7F2B89BCu;
    // 7F2B89BC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B89C0:
    ctx->pc = 0x7F2B89C0u;
    // 7F2B89C0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B89C4:
    ctx->pc = 0x7F2B89C4u;
    // 7F2B89C4: or.   r0, r4, r0
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

label_7F2B89C8:
    ctx->pc = 0x7F2B89C8u;
    // 7F2B89C8: bc    12, 2, 0x7F2B89F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B89F8;
        }
    }

label_7F2B89CC:
    ctx->pc = 0x7F2B89CCu;
    ctx->downcount -= 11;
    // 7F2B89CC: lwz     r6, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2B89D0:
    ctx->pc = 0x7F2B89D0u;
    // 7F2B89D0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B89D4:
    ctx->pc = 0x7F2B89D4u;
    // 7F2B89D4: addi    r5, r3, -5668
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5668);

label_7F2B89D8:
    ctx->pc = 0x7F2B89D8u;
    // 7F2B89D8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2B89DC:
    ctx->pc = 0x7F2B89DCu;
    // 7F2B89DC: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B89E0:
    ctx->pc = 0x7F2B89E0u;
    // 7F2B89E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B89E4:
    ctx->pc = 0x7F2B89E4u;
    // 7F2B89E4: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2B89E8:
    ctx->pc = 0x7F2B89E8u;
    // 7F2B89E8: stw     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B89EC:
    ctx->pc = 0x7F2B89ECu;
    // 7F2B89EC: lwz     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B89F0:
    ctx->pc = 0x7F2B89F0u;
    // 7F2B89F0: stw     r0, 2496(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B89F4:
    ctx->pc = 0x7F2B89F4u;
    // 7F2B89F4: bl      0x7F2900F0
    {
            ctx->lr = 0x7F2B89F8u;
            ctx->pc = 0x7F2900F0u;
            return;
    }

label_7F2B89F8:
    ctx->pc = 0x7F2B89F8u;
    ctx->downcount -= 3;
    // 7F2B89F8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F2B89FC:
    ctx->pc = 0x7F2B89FCu;
    // 7F2B89FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8A00:
    ctx->pc = 0x7F2B8A00u;
    // 7F2B8A00: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B8A04u;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B8A04:
    ctx->pc = 0x7F2B8A04u;
    ctx->downcount -= 5;
    // 7F2B8A04: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8A08:
    ctx->pc = 0x7F2B8A08u;
    // 7F2B8A08: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8A0C:
    ctx->pc = 0x7F2B8A0Cu;
    // 7F2B8A0C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8A10:
    ctx->pc = 0x7F2B8A10u;
    // 7F2B8A10: or.   r0, r4, r0
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

label_7F2B8A14:
    ctx->pc = 0x7F2B8A14u;
    // 7F2B8A14: bc    12, 2, 0x7F2B8A30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8A30;
        }
    }

label_7F2B8A18:
    ctx->pc = 0x7F2B8A18u;
    ctx->downcount -= 3;
    // 7F2B8A18: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8A1C:
    ctx->pc = 0x7F2B8A1Cu;
    // 7F2B8A1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8A20:
    ctx->pc = 0x7F2B8A20u;
    // 7F2B8A20: bl      0x7F2BBD04
    {
            ctx->lr = 0x7F2B8A24u;
            goto label_7F2BBD04;
    }

label_7F2B8A24:
    ctx->pc = 0x7F2B8A24u;
    ctx->downcount -= 3;
    // 7F2B8A24: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F2B8A28:
    ctx->pc = 0x7F2B8A28u;
    // 7F2B8A28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8A2C:
    ctx->pc = 0x7F2B8A2Cu;
    // 7F2B8A2C: bl      0x7F2900F0
    {
            ctx->lr = 0x7F2B8A30u;
            ctx->pc = 0x7F2900F0u;
            return;
    }

label_7F2B8A30:
    ctx->pc = 0x7F2B8A30u;
    ctx->downcount -= 3;
    // 7F2B8A30: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F2B8A34:
    ctx->pc = 0x7F2B8A34u;
    // 7F2B8A34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8A38:
    ctx->pc = 0x7F2B8A38u;
    // 7F2B8A38: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B8A3Cu;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B8A3C:
    ctx->pc = 0x7F2B8A3Cu;
    ctx->downcount -= 5;
    // 7F2B8A3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8A40:
    ctx->pc = 0x7F2B8A40u;
    // 7F2B8A40: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8A44:
    ctx->pc = 0x7F2B8A44u;
    // 7F2B8A44: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8A48:
    ctx->pc = 0x7F2B8A48u;
    // 7F2B8A48: or.   r0, r4, r0
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

label_7F2B8A4C:
    ctx->pc = 0x7F2B8A4Cu;
    // 7F2B8A4C: bc    12, 2, 0x7F2B8A68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8A68;
        }
    }

label_7F2B8A50:
    ctx->pc = 0x7F2B8A50u;
    ctx->downcount -= 6;
    // 7F2B8A50: lwz     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8A54:
    ctx->pc = 0x7F2B8A54u;
    // 7F2B8A54: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F2B8A58:
    ctx->pc = 0x7F2B8A58u;
    // 7F2B8A58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8A5C:
    ctx->pc = 0x7F2B8A5Cu;
    // 7F2B8A5C: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F2B8A60:
    ctx->pc = 0x7F2B8A60u;
    // 7F2B8A60: stw     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8A64:
    ctx->pc = 0x7F2B8A64u;
    // 7F2B8A64: bl      0x7F2900F0
    {
            ctx->lr = 0x7F2B8A68u;
            ctx->pc = 0x7F2900F0u;
            return;
    }

label_7F2B8A68:
    ctx->pc = 0x7F2B8A68u;
    ctx->downcount -= 24;
    // 7F2B8A68: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B8A6C:
    ctx->pc = 0x7F2B8A6Cu;
    // 7F2B8A6C: lwz     r0, 3980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8A70:
    ctx->pc = 0x7F2B8A70u;
    // 7F2B8A70: addi    r4, r3, -5852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5852);

label_7F2B8A74:
    ctx->pc = 0x7F2B8A74u;
    // 7F2B8A74: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2B8A78:
    ctx->pc = 0x7F2B8A78u;
    // 7F2B8A78: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8A7C:
    ctx->pc = 0x7F2B8A7Cu;
    // 7F2B8A7C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B8A80:
    ctx->pc = 0x7F2B8A80u;
    // 7F2B8A80: lwz     r11, -5660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5660);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2B8A84:
    ctx->pc = 0x7F2B8A84u;
    // 7F2B8A84: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2B8A88:
    ctx->pc = 0x7F2B8A88u;
    // 7F2B8A88: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2B8A8C:
    ctx->pc = 0x7F2B8A8Cu;
    // 7F2B8A8C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B8A90:
    ctx->pc = 0x7F2B8A90u;
    // 7F2B8A90: addi    r9, r6, -6660
    ctx->gpr[9] = ctx->gpr[6] + (u32)(s32)(-6660);

label_7F2B8A94:
    ctx->pc = 0x7F2B8A94u;
    // 7F2B8A94: lwz     r10, 3980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3980);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2B8A98:
    ctx->pc = 0x7F2B8A98u;
    // 7F2B8A98: addi    r7, r5, -6308
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(-6308);

label_7F2B8A9C:
    ctx->pc = 0x7F2B8A9Cu;
    // 7F2B8A9C: addi    r8, r11, 1032
    ctx->gpr[8] = ctx->gpr[11] + (u32)(s32)(1032);

label_7F2B8AA0:
    ctx->pc = 0x7F2B8AA0u;
    // 7F2B8AA0: addi    r5, r4, -6312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6312);

label_7F2B8AA4:
    ctx->pc = 0x7F2B8AA4u;
    // 7F2B8AA4: addi    r6, r11, 1056
    ctx->gpr[6] = ctx->gpr[11] + (u32)(s32)(1056);

label_7F2B8AA8:
    ctx->pc = 0x7F2B8AA8u;
    // 7F2B8AA8: addi    r4, r3, -6316
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6316);

label_7F2B8AAC:
    ctx->pc = 0x7F2B8AACu;
    // 7F2B8AAC: addi    r0, r11, 1120
    ctx->gpr[0] = ctx->gpr[11] + (u32)(s32)(1120);

label_7F2B8AB0:
    ctx->pc = 0x7F2B8AB0u;
    // 7F2B8AB0: stw     r10, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B8AB4:
    ctx->pc = 0x7F2B8AB4u;
    // 7F2B8AB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8AB8:
    ctx->pc = 0x7F2B8AB8u;
    // 7F2B8AB8: stw     r8, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2B8ABC:
    ctx->pc = 0x7F2B8ABCu;
    // 7F2B8ABC: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2B8AC0:
    ctx->pc = 0x7F2B8AC0u;
    // 7F2B8AC0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8AC4:
    ctx->pc = 0x7F2B8AC4u;
    // 7F2B8AC4: bl      0x7F2B76A4
    {
            ctx->lr = 0x7F2B8AC8u;
            ctx->pc = 0x7F2B76A4u;
            return;
    }

label_7F2B8AC8:
    ctx->pc = 0x7F2B8AC8u;
    ctx->downcount -= 4;
    // 7F2B8AC8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2B8ACC:
    ctx->pc = 0x7F2B8ACCu;
    // 7F2B8ACC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8AD0:
    ctx->pc = 0x7F2B8AD0u;
    // 7F2B8AD0: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F2B8AD4:
    ctx->pc = 0x7F2B8AD4u;
    // 7F2B8AD4: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8AD8u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8AD8:
    ctx->pc = 0x7F2B8AD8u;
    ctx->downcount -= 2;
    // 7F2B8AD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8ADC:
    ctx->pc = 0x7F2B8ADCu;
    // 7F2B8ADC: bl      0x7F29A564
    {
            ctx->lr = 0x7F2B8AE0u;
            ctx->pc = 0x7F29A564u;
            return;
    }

label_7F2B8AE0:
    ctx->pc = 0x7F2B8AE0u;
    ctx->downcount -= 5;
    // 7F2B8AE0: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2B8AE4:
    ctx->pc = 0x7F2B8AE4u;
    // 7F2B8AE4: lfs     f31, 476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8AE4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2B8AE8:
    ctx->pc = 0x7F2B8AE8u;
    // 7F2B8AE8: addi    r3, r3, -32768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F2B8AEC:
    ctx->pc = 0x7F2B8AECu;
    // 7F2B8AEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8AF0:
    ctx->pc = 0x7F2B8AF0u;
    // 7F2B8AF0: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8AF4u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8AF4:
    ctx->pc = 0x7F2B8AF4u;
    ctx->downcount -= 5;
    // 7F2B8AF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8AF8:
    ctx->pc = 0x7F2B8AF8u;
    // 7F2B8AF8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8AFC:
    ctx->pc = 0x7F2B8AFCu;
    // 7F2B8AFC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8B00:
    ctx->pc = 0x7F2B8B00u;
    // 7F2B8B00: or.   r0, r4, r0
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

label_7F2B8B04:
    ctx->pc = 0x7F2B8B04u;
    // 7F2B8B04: bc    4, 2, 0x7F2B8B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8B24;
        }
    }

label_7F2B8B08:
    ctx->pc = 0x7F2B8B08u;
    ctx->downcount -= 5;
    // 7F2B8B08: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8B0C:
    ctx->pc = 0x7F2B8B0Cu;
    // 7F2B8B0C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8B10:
    ctx->pc = 0x7F2B8B10u;
    // 7F2B8B10: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8B14:
    ctx->pc = 0x7F2B8B14u;
    // 7F2B8B14: rlwinm. r0, r0, 0, 30, 30
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

label_7F2B8B18:
    ctx->pc = 0x7F2B8B18u;
    // 7F2B8B18: bc    4, 2, 0x7F2B8B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8B24;
        }
    }

label_7F2B8B1C:
    ctx->pc = 0x7F2B8B1Cu;
    ctx->downcount -= 2;
    // 7F2B8B1C: addi    r3, r31, 4024
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4024);

label_7F2B8B20:
    ctx->pc = 0x7F2B8B20u;
    // 7F2B8B20: bl      0x7F014348
    {
            ctx->lr = 0x7F2B8B24u;
            ctx->pc = 0x7F014348u;
            return;
    }

label_7F2B8B24:
    ctx->pc = 0x7F2B8B24u;
    ctx->downcount -= 3;
    // 7F2B8B24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8B28:
    ctx->pc = 0x7F2B8B28u;
    // 7F2B8B28: lis     r3, 32
    ctx->gpr[3] = ((u32)(s32)(32) << 16);

label_7F2B8B2C:
    ctx->pc = 0x7F2B8B2Cu;
    // 7F2B8B2C: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8B30u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8B30:
    ctx->pc = 0x7F2B8B30u;
    ctx->downcount -= 5;
    // 7F2B8B30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8B34:
    ctx->pc = 0x7F2B8B34u;
    // 7F2B8B34: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8B38:
    ctx->pc = 0x7F2B8B38u;
    // 7F2B8B38: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8B3C:
    ctx->pc = 0x7F2B8B3Cu;
    // 7F2B8B3C: or.   r0, r4, r0
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

label_7F2B8B40:
    ctx->pc = 0x7F2B8B40u;
    // 7F2B8B40: bc    12, 2, 0x7F2B8B5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8B5C;
        }
    }

label_7F2B8B44:
    ctx->pc = 0x7F2B8B44u;
    ctx->downcount -= 3;
    // 7F2B8B44: lwz     r0, 1324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8B48:
    ctx->pc = 0x7F2B8B48u;
    // 7F2B8B48: cmpwi   r0, 0
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

label_7F2B8B4C:
    ctx->pc = 0x7F2B8B4Cu;
    // 7F2B8B4C: bc    12, 0, 0x7F2B8B5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8B5C;
        }
    }

label_7F2B8B50:
    ctx->pc = 0x7F2B8B50u;
    ctx->downcount -= 3;
    // 7F2B8B50: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8B54:
    ctx->pc = 0x7F2B8B54u;
    // 7F2B8B54: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2B8B58:
    ctx->pc = 0x7F2B8B58u;
    // 7F2B8B58: stw     r0, 100(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8B5C:
    ctx->pc = 0x7F2B8B5Cu;
    ctx->downcount -= 2;
    // 7F2B8B5C: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F2B8B60:
    ctx->pc = 0x7F2B8B60u;
    // 7F2B8B60: bl      0x7F04291C
    {
            ctx->lr = 0x7F2B8B64u;
            ctx->pc = 0x7F04291Cu;
            return;
    }

label_7F2B8B64:
    ctx->pc = 0x7F2B8B64u;
    ctx->downcount -= 3;
    // 7F2B8B64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8B68:
    ctx->pc = 0x7F2B8B68u;
    // 7F2B8B68: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F2B8B6C:
    ctx->pc = 0x7F2B8B6Cu;
    // 7F2B8B6C: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8B70u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8B70:
    ctx->pc = 0x7F2B8B70u;
    ctx->downcount -= 5;
    // 7F2B8B70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8B74:
    ctx->pc = 0x7F2B8B74u;
    // 7F2B8B74: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8B78:
    ctx->pc = 0x7F2B8B78u;
    // 7F2B8B78: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8B7C:
    ctx->pc = 0x7F2B8B7Cu;
    // 7F2B8B7C: or.   r0, r4, r0
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

label_7F2B8B80:
    ctx->pc = 0x7F2B8B80u;
    // 7F2B8B80: bc    12, 2, 0x7F2B8BDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8BDC;
        }
    }

label_7F2B8B84:
    ctx->pc = 0x7F2B8B84u;
    ctx->downcount -= 24;
    // 7F2B8B84: lwz     r6, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2B8B88:
    ctx->pc = 0x7F2B8B88u;
    // 7F2B8B88: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8B8C:
    ctx->pc = 0x7F2B8B8Cu;
    // 7F2B8B8C: li      r3, 256
    ctx->gpr[3] = (u32)(s32)(256);

label_7F2B8B90:
    ctx->pc = 0x7F2B8B90u;
    // 7F2B8B90: lwz     r5, 100(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(100);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8B94:
    ctx->pc = 0x7F2B8B94u;
    // 7F2B8B94: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8B98:
    ctx->pc = 0x7F2B8B98u;
    // 7F2B8B98: mulli   r7, r5, 104
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[5] * (s64)(s32)104);

label_7F2B8B9C:
    ctx->pc = 0x7F2B8B9Cu;
    // 7F2B8B9C: add   r5, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2B8BA0:
    ctx->pc = 0x7F2B8BA0u;
    // 7F2B8BA0: lwz     r5, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8BA4:
    ctx->pc = 0x7F2B8BA4u;
    // 7F2B8BA4: lfs     f0, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8BA4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8BA8:
    ctx->pc = 0x7F2B8BA8u;
    // 7F2B8BA8: stfs     f0, 68(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8BA8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8BAC:
    ctx->pc = 0x7F2B8BACu;
    // 7F2B8BAC: lwz     r5, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8BB0:
    ctx->pc = 0x7F2B8BB0u;
    // 7F2B8BB0: stfs     f0, 72(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8BB0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8BB4:
    ctx->pc = 0x7F2B8BB4u;
    // 7F2B8BB4: stfs     f0, 476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8BB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8BB8:
    ctx->pc = 0x7F2B8BB8u;
    // 7F2B8BB8: lwz     r6, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2B8BBC:
    ctx->pc = 0x7F2B8BBCu;
    // 7F2B8BBC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8BC0:
    ctx->pc = 0x7F2B8BC0u;
    // 7F2B8BC0: add   r5, r0, r7
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F2B8BC4:
    ctx->pc = 0x7F2B8BC4u;
    // 7F2B8BC4: lwz     r5, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8BC8:
    ctx->pc = 0x7F2B8BC8u;
    // 7F2B8BC8: lfs     f0, 12(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8BC8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8BCC:
    ctx->pc = 0x7F2B8BCCu;
    // 7F2B8BCC: stfs     f0, 76(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8BCCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8BD0:
    ctx->pc = 0x7F2B8BD0u;
    // 7F2B8BD0: lwz     r5, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8BD4:
    ctx->pc = 0x7F2B8BD4u;
    // 7F2B8BD4: stfs     f0, 80(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8BD4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8BD8:
    ctx->pc = 0x7F2B8BD8u;
    // 7F2B8BD8: bl      0x7F2900A0
    {
            ctx->lr = 0x7F2B8BDCu;
            ctx->pc = 0x7F2900A0u;
            return;
    }

label_7F2B8BDC:
    ctx->pc = 0x7F2B8BDCu;
    ctx->downcount -= 3;
    // 7F2B8BDC: lis     r4, 8
    ctx->gpr[4] = ((u32)(s32)(8) << 16);

label_7F2B8BE0:
    ctx->pc = 0x7F2B8BE0u;
    // 7F2B8BE0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8BE4:
    ctx->pc = 0x7F2B8BE4u;
    // 7F2B8BE4: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8BE8u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8BE8:
    ctx->pc = 0x7F2B8BE8u;
    ctx->downcount -= 5;
    // 7F2B8BE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8BEC:
    ctx->pc = 0x7F2B8BECu;
    // 7F2B8BEC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8BF0:
    ctx->pc = 0x7F2B8BF0u;
    // 7F2B8BF0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8BF4:
    ctx->pc = 0x7F2B8BF4u;
    // 7F2B8BF4: or.   r0, r4, r0
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

label_7F2B8BF8:
    ctx->pc = 0x7F2B8BF8u;
    // 7F2B8BF8: bc    4, 2, 0x7F2B8C04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8C04;
        }
    }

label_7F2B8BFC:
    ctx->pc = 0x7F2B8BFCu;
    ctx->downcount -= 2;
    // 7F2B8BFC: lfs     f0, 476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8BFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8C00:
    ctx->pc = 0x7F2B8C00u;
    // 7F2B8C00: stfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8C04:
    ctx->pc = 0x7F2B8C04u;
    ctx->downcount -= 3;
    // 7F2B8C04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8C08:
    ctx->pc = 0x7F2B8C08u;
    // 7F2B8C08: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2B8C0C:
    ctx->pc = 0x7F2B8C0Cu;
    // 7F2B8C0C: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8C10u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8C10:
    ctx->pc = 0x7F2B8C10u;
    ctx->downcount -= 5;
    // 7F2B8C10: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8C14:
    ctx->pc = 0x7F2B8C14u;
    // 7F2B8C14: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8C18:
    ctx->pc = 0x7F2B8C18u;
    // 7F2B8C18: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8C1C:
    ctx->pc = 0x7F2B8C1Cu;
    // 7F2B8C1C: or.   r0, r4, r0
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

label_7F2B8C20:
    ctx->pc = 0x7F2B8C20u;
    // 7F2B8C20: bc    12, 2, 0x7F2B8C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8C30;
        }
    }

label_7F2B8C24:
    ctx->pc = 0x7F2B8C24u;
    ctx->downcount -= 3;
    // 7F2B8C24: lfs     f0, 2804(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C24u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2804);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8C28:
    ctx->pc = 0x7F2B8C28u;
    // 7F2B8C28: stfs     f0, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C28u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8C2C:
    ctx->pc = 0x7F2B8C2Cu;
    // 7F2B8C2C: b       0x7F2B8C78
    {
            goto label_7F2B8C78;
    }

label_7F2B8C30:
    ctx->pc = 0x7F2B8C30u;
    ctx->downcount -= 9;
    // 7F2B8C30: lfs     f1, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C30u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8C34:
    ctx->pc = 0x7F2B8C34u;
    // 7F2B8C34: lfs     f0, 2804(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C34u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2804);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8C38:
    ctx->pc = 0x7F2B8C38u;
    // 7F2B8C38: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C38u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F2B8C3C:
    ctx->pc = 0x7F2B8C3Cu;
    // 7F2B8C3C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C3Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F2B8C40:
    ctx->pc = 0x7F2B8C40u;
    // 7F2B8C40: stfd     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F2B8C44:
    ctx->pc = 0x7F2B8C44u;
    // 7F2B8C44: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F2B8C48:
    ctx->pc = 0x7F2B8C48u;
    // 7F2B8C48: lwz     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8C4C:
    ctx->pc = 0x7F2B8C4Cu;
    // 7F2B8C4C: lwz     r4, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B8C50:
    ctx->pc = 0x7F2B8C50u;
    // 7F2B8C50: bl      0x7F3C97E4
    {
            ctx->lr = 0x7F2B8C54u;
            ctx->pc = 0x7F3C97E4u;
            return;
    }

label_7F2B8C54:
    ctx->pc = 0x7F2B8C54u;
    ctx->downcount -= 9;
    // 7F2B8C54: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2B8C58:
    ctx->pc = 0x7F2B8C58u;
    // 7F2B8C58: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2B8C5C:
    ctx->pc = 0x7F2B8C5Cu;
    // 7F2B8C5C: stw     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B8C60:
    ctx->pc = 0x7F2B8C60u;
    // 7F2B8C60: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2B8C64:
    ctx->pc = 0x7F2B8C64u;
    // 7F2B8C64: lfd     f1, 26288(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C64u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2B8C68:
    ctx->pc = 0x7F2B8C68u;
    // 7F2B8C68: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8C6C:
    ctx->pc = 0x7F2B8C6Cu;
    // 7F2B8C6C: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2B8C70:
    ctx->pc = 0x7F2B8C70u;
    // 7F2B8C70: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C70u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2B8C74:
    ctx->pc = 0x7F2B8C74u;
    // 7F2B8C74: stfs     f0, 120(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8C78:
    ctx->pc = 0x7F2B8C78u;
    ctx->downcount -= 15;
    // 7F2B8C78: lfs     f2, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C78u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2B8C7C:
    ctx->pc = 0x7F2B8C7Cu;
    // 7F2B8C7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B8C80:
    ctx->pc = 0x7F2B8C80u;
    // 7F2B8C80: lfs     f1, 2808(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C80u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2808);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8C84:
    ctx->pc = 0x7F2B8C84u;
    // 7F2B8C84: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F2B8C88:
    ctx->pc = 0x7F2B8C88u;
    // 7F2B8C88: lfs     f0, 26272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C88u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8C8C:
    ctx->pc = 0x7F2B8C8Cu;
    // 7F2B8C8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8C90:
    ctx->pc = 0x7F2B8C90u;
    // 7F2B8C90: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C90u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F2B8C94:
    ctx->pc = 0x7F2B8C94u;
    // 7F2B8C94: stfs     f1, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2B8C98:
    ctx->pc = 0x7F2B8C98u;
    // 7F2B8C98: lfs     f2, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C98u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2B8C9C:
    ctx->pc = 0x7F2B8C9Cu;
    // 7F2B8C9C: lfs     f1, 2812(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8C9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2812);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8CA0:
    ctx->pc = 0x7F2B8CA0u;
    // 7F2B8CA0: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CA0u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F2B8CA4:
    ctx->pc = 0x7F2B8CA4u;
    // 7F2B8CA4: stfs     f1, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CA4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2B8CA8:
    ctx->pc = 0x7F2B8CA8u;
    // 7F2B8CA8: stfs     f0, 2812(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CA8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2812);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8CAC:
    ctx->pc = 0x7F2B8CACu;
    // 7F2B8CAC: stfs     f0, 2808(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2808);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8CB0:
    ctx->pc = 0x7F2B8CB0u;
    // 7F2B8CB0: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8CB4u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8CB4:
    ctx->pc = 0x7F2B8CB4u;
    ctx->downcount -= 5;
    // 7F2B8CB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8CB8:
    ctx->pc = 0x7F2B8CB8u;
    // 7F2B8CB8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8CBC:
    ctx->pc = 0x7F2B8CBCu;
    // 7F2B8CBC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8CC0:
    ctx->pc = 0x7F2B8CC0u;
    // 7F2B8CC0: or.   r0, r4, r0
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

label_7F2B8CC4:
    ctx->pc = 0x7F2B8CC4u;
    // 7F2B8CC4: bc    12, 2, 0x7F2B8CE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8CE4;
        }
    }

label_7F2B8CC8:
    ctx->pc = 0x7F2B8CC8u;
    ctx->downcount -= 2;
    // 7F2B8CC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8CCC:
    ctx->pc = 0x7F2B8CCCu;
    // 7F2B8CCC: bl      0x7F295038
    {
            ctx->lr = 0x7F2B8CD0u;
            ctx->pc = 0x7F295038u;
            return;
    }

label_7F2B8CD0:
    ctx->pc = 0x7F2B8CD0u;
    ctx->downcount -= 5;
    // 7F2B8CD0: stfs     f1, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CD0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2B8CD4:
    ctx->pc = 0x7F2B8CD4u;
    // 7F2B8CD4: lfs     f1, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CD4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8CD8:
    ctx->pc = 0x7F2B8CD8u;
    // 7F2B8CD8: lfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CD8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8CDC:
    ctx->pc = 0x7F2B8CDCu;
    // 7F2B8CDC: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CDCu)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2B8CE0:
    ctx->pc = 0x7F2B8CE0u;
    // 7F2B8CE0: stfs     f0, 124(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8CE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8CE4:
    ctx->pc = 0x7F2B8CE4u;
    ctx->downcount -= 3;
    // 7F2B8CE4: lhz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2B8CE8:
    ctx->pc = 0x7F2B8CE8u;
    // 7F2B8CE8: rlwinm. r0, r0, 0, 30, 30
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

label_7F2B8CEC:
    ctx->pc = 0x7F2B8CECu;
    // 7F2B8CEC: bc    12, 2, 0x7F2B8D1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8D1C;
        }
    }

label_7F2B8CF0:
    ctx->pc = 0x7F2B8CF0u;
    ctx->downcount -= 3;
    // 7F2B8CF0: lis     r4, 4
    ctx->gpr[4] = ((u32)(s32)(4) << 16);

label_7F2B8CF4:
    ctx->pc = 0x7F2B8CF4u;
    // 7F2B8CF4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8CF8:
    ctx->pc = 0x7F2B8CF8u;
    // 7F2B8CF8: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8CFCu;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8CFC:
    ctx->pc = 0x7F2B8CFCu;
    ctx->downcount -= 5;
    // 7F2B8CFC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8D00:
    ctx->pc = 0x7F2B8D00u;
    // 7F2B8D00: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8D04:
    ctx->pc = 0x7F2B8D04u;
    // 7F2B8D04: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8D08:
    ctx->pc = 0x7F2B8D08u;
    // 7F2B8D08: or.   r0, r4, r0
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

label_7F2B8D0C:
    ctx->pc = 0x7F2B8D0Cu;
    // 7F2B8D0C: bc    4, 2, 0x7F2B8D1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8D1C;
        }
    }

label_7F2B8D10:
    ctx->pc = 0x7F2B8D10u;
    ctx->downcount -= 3;
    // 7F2B8D10: lfs     f0, 476(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8D10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8D14:
    ctx->pc = 0x7F2B8D14u;
    // 7F2B8D14: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2B8D14u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_7F2B8D18:
    ctx->pc = 0x7F2B8D18u;
    // 7F2B8D18: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8D18u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8D1C:
    ctx->pc = 0x7F2B8D1Cu;
    ctx->downcount -= 2;
    // 7F2B8D1C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8D20:
    ctx->pc = 0x7F2B8D20u;
    // 7F2B8D20: bl      0x7F29385C
    {
            ctx->lr = 0x7F2B8D24u;
            ctx->pc = 0x7F29385Cu;
            return;
    }

label_7F2B8D24:
    ctx->pc = 0x7F2B8D24u;
    ctx->downcount -= 3;
    // 7F2B8D24: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F2B8D28:
    ctx->pc = 0x7F2B8D28u;
    // 7F2B8D28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8D2C:
    ctx->pc = 0x7F2B8D2Cu;
    // 7F2B8D2C: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8D30u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8D30:
    ctx->pc = 0x7F2B8D30u;
    ctx->downcount -= 5;
    // 7F2B8D30: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8D34:
    ctx->pc = 0x7F2B8D34u;
    // 7F2B8D34: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8D38:
    ctx->pc = 0x7F2B8D38u;
    // 7F2B8D38: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8D3C:
    ctx->pc = 0x7F2B8D3Cu;
    // 7F2B8D3C: or.   r0, r4, r0
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

label_7F2B8D40:
    ctx->pc = 0x7F2B8D40u;
    // 7F2B8D40: bc    12, 2, 0x7F2B8D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8D80;
        }
    }

label_7F2B8D44:
    ctx->pc = 0x7F2B8D44u;
    ctx->downcount -= 12;
    // 7F2B8D44: lfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8D44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8D48:
    ctx->pc = 0x7F2B8D48u;
    // 7F2B8D48: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B8D4C:
    ctx->pc = 0x7F2B8D4Cu;
    // 7F2B8D4C: lwz     r4, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B8D50:
    ctx->pc = 0x7F2B8D50u;
    // 7F2B8D50: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2B8D54:
    ctx->pc = 0x7F2B8D54u;
    // 7F2B8D54: stfs     f0, 72(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8D54u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8D58:
    ctx->pc = 0x7F2B8D58u;
    // 7F2B8D58: lfs     f0, 116(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8D58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8D5C:
    ctx->pc = 0x7F2B8D5Cu;
    // 7F2B8D5C: lwz     r4, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B8D60:
    ctx->pc = 0x7F2B8D60u;
    // 7F2B8D60: stfs     f0, 80(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8D60u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8D64:
    ctx->pc = 0x7F2B8D64u;
    // 7F2B8D64: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8D68:
    ctx->pc = 0x7F2B8D68u;
    // 7F2B8D68: lwz     r0, 1076(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1076);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8D6C:
    ctx->pc = 0x7F2B8D6Cu;
    // 7F2B8D6C: rlwinm. r0, r0, 0, 23, 23
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

label_7F2B8D70:
    ctx->pc = 0x7F2B8D70u;
    // 7F2B8D70: bc    4, 2, 0x7F2B8D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8D80;
        }
    }

label_7F2B8D74:
    ctx->pc = 0x7F2B8D74u;
    ctx->downcount -= 3;
    // 7F2B8D74: lwz     r4, 3968(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B8D78:
    ctx->pc = 0x7F2B8D78u;
    // 7F2B8D78: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B8D7C:
    ctx->pc = 0x7F2B8D7Cu;
    // 7F2B8D7C: bl      0x7F290ED8
    {
            ctx->lr = 0x7F2B8D80u;
            ctx->pc = 0x7F290ED8u;
            return;
    }

label_7F2B8D80:
    ctx->pc = 0x7F2B8D80u;
    ctx->downcount -= 5;
    // 7F2B8D80: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8D84:
    ctx->pc = 0x7F2B8D84u;
    // 7F2B8D84: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8D88:
    ctx->pc = 0x7F2B8D88u;
    // 7F2B8D88: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8D8C:
    ctx->pc = 0x7F2B8D8Cu;
    // 7F2B8D8C: rlwinm. r0, r0, 0, 30, 30
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

label_7F2B8D90:
    ctx->pc = 0x7F2B8D90u;
    // 7F2B8D90: bc    4, 2, 0x7F2B8E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8E00;
        }
    }

label_7F2B8D94:
    ctx->pc = 0x7F2B8D94u;
    ctx->downcount -= 3;
    // 7F2B8D94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B8D98:
    ctx->pc = 0x7F2B8D98u;
    // 7F2B8D98: lis     r3, 16
    ctx->gpr[3] = ((u32)(s32)(16) << 16);

label_7F2B8D9C:
    ctx->pc = 0x7F2B8D9Cu;
    // 7F2B8D9C: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B8DA0u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B8DA0:
    ctx->pc = 0x7F2B8DA0u;
    ctx->downcount -= 5;
    // 7F2B8DA0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8DA4:
    ctx->pc = 0x7F2B8DA4u;
    // 7F2B8DA4: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8DA8:
    ctx->pc = 0x7F2B8DA8u;
    // 7F2B8DA8: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8DAC:
    ctx->pc = 0x7F2B8DACu;
    // 7F2B8DAC: or.   r0, r4, r0
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

label_7F2B8DB0:
    ctx->pc = 0x7F2B8DB0u;
    // 7F2B8DB0: bc    4, 2, 0x7F2B8E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8E00;
        }
    }

label_7F2B8DB4:
    ctx->pc = 0x7F2B8DB4u;
    ctx->downcount -= 19;
    // 7F2B8DB4: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8DB8:
    ctx->pc = 0x7F2B8DB8u;
    // 7F2B8DB8: lfs     f2, 1248(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DB8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2B8DBC:
    ctx->pc = 0x7F2B8DBCu;
    // 7F2B8DBC: lfs     f1, 132(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DBCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8DC0:
    ctx->pc = 0x7F2B8DC0u;
    // 7F2B8DC0: lfs     f0, 116(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8DC4:
    ctx->pc = 0x7F2B8DC4u;
    // 7F2B8DC4: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DC4u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2B8DC8:
    ctx->pc = 0x7F2B8DC8u;
    // 7F2B8DC8: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DC8u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F2B8DCC:
    ctx->pc = 0x7F2B8DCCu;
    // 7F2B8DCC: stfs     f0, 1248(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DCCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1248);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8DD0:
    ctx->pc = 0x7F2B8DD0u;
    // 7F2B8DD0: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8DD4:
    ctx->pc = 0x7F2B8DD4u;
    // 7F2B8DD4: lfs     f2, 1256(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DD4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1256);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F2B8DD8:
    ctx->pc = 0x7F2B8DD8u;
    // 7F2B8DD8: lfs     f1, 140(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DD8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(140);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8DDC:
    ctx->pc = 0x7F2B8DDCu;
    // 7F2B8DDC: lfs     f0, 124(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DDCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(124);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8DE0:
    ctx->pc = 0x7F2B8DE0u;
    // 7F2B8DE0: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DE0u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2B8DE4:
    ctx->pc = 0x7F2B8DE4u;
    // 7F2B8DE4: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DE4u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F2B8DE8:
    ctx->pc = 0x7F2B8DE8u;
    // 7F2B8DE8: stfs     f0, 1256(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1256);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8DEC:
    ctx->pc = 0x7F2B8DECu;
    // 7F2B8DEC: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8DF0:
    ctx->pc = 0x7F2B8DF0u;
    // 7F2B8DF0: lfs     f1, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DF0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8DF4:
    ctx->pc = 0x7F2B8DF4u;
    // 7F2B8DF4: lfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DF4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8DF8:
    ctx->pc = 0x7F2B8DF8u;
    // 7F2B8DF8: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DF8u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2B8DFC:
    ctx->pc = 0x7F2B8DFCu;
    // 7F2B8DFC: stfs     f0, 1252(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8DFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8E00:
    ctx->pc = 0x7F2B8E00u;
    ctx->downcount -= 12;
    // 7F2B8E00: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8E04:
    ctx->pc = 0x7F2B8E04u;
    // 7F2B8E04: addi    r4, r31, 1296
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1296);

label_7F2B8E08:
    ctx->pc = 0x7F2B8E08u;
    // 7F2B8E08: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8E0C:
    ctx->pc = 0x7F2B8E0Cu;
    // 7F2B8E0C: stw     r3, 1280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B8E10:
    ctx->pc = 0x7F2B8E10u;
    // 7F2B8E10: stw     r0, 1284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8E14:
    ctx->pc = 0x7F2B8E14u;
    // 7F2B8E14: lwz     r3, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8E18:
    ctx->pc = 0x7F2B8E18u;
    // 7F2B8E18: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8E1C:
    ctx->pc = 0x7F2B8E1Cu;
    // 7F2B8E1C: stw     r3, 1288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B8E20:
    ctx->pc = 0x7F2B8E20u;
    // 7F2B8E20: stw     r0, 1292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8E24:
    ctx->pc = 0x7F2B8E24u;
    // 7F2B8E24: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8E28:
    ctx->pc = 0x7F2B8E28u;
    // 7F2B8E28: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_7F2B8E2C:
    ctx->pc = 0x7F2B8E2Cu;
    // 7F2B8E2C: bl      0x7F3CC414
    {
            ctx->lr = 0x7F2B8E30u;
            ctx->pc = 0x7F3CC414u;
            return;
    }

label_7F2B8E30:
    ctx->pc = 0x7F2B8E30u;
    ctx->downcount -= 7;
    // 7F2B8E30: lwz     r5, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B8E34:
    ctx->pc = 0x7F2B8E34u;
    // 7F2B8E34: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2B8E38:
    ctx->pc = 0x7F2B8E38u;
    // 7F2B8E38: lwz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8E3C:
    ctx->pc = 0x7F2B8E3Cu;
    // 7F2B8E3C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8E40:
    ctx->pc = 0x7F2B8E40u;
    // 7F2B8E40: stw     r5, 1312(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1312);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B8E44:
    ctx->pc = 0x7F2B8E44u;
    // 7F2B8E44: stw     r0, 1316(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8E48:
    ctx->pc = 0x7F2B8E48u;
    // 7F2B8E48: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8E4Cu;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8E4C:
    ctx->pc = 0x7F2B8E4Cu;
    ctx->downcount -= 5;
    // 7F2B8E4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B8E50:
    ctx->pc = 0x7F2B8E50u;
    // 7F2B8E50: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F2B8E54:
    ctx->pc = 0x7F2B8E54u;
    // 7F2B8E54: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F2B8E58:
    ctx->pc = 0x7F2B8E58u;
    // 7F2B8E58: or.   r0, r4, r0
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

label_7F2B8E5C:
    ctx->pc = 0x7F2B8E5Cu;
    // 7F2B8E5C: bc    4, 2, 0x7F2B8E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8E7C;
        }
    }

label_7F2B8E60:
    ctx->pc = 0x7F2B8E60u;
    ctx->downcount -= 3;
    // 7F2B8E60: lhz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2B8E64:
    ctx->pc = 0x7F2B8E64u;
    // 7F2B8E64: rlwinm. r0, r0, 0, 30, 30
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

label_7F2B8E68:
    ctx->pc = 0x7F2B8E68u;
    // 7F2B8E68: bc    4, 2, 0x7F2B8E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8E7C;
        }
    }

label_7F2B8E6C:
    ctx->pc = 0x7F2B8E6Cu;
    ctx->downcount -= 3;
    // 7F2B8E6C: lbz     r0, 218(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(218);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2B8E70:
    ctx->pc = 0x7F2B8E70u;
    // 7F2B8E70: rlwinm. r0, r0, 0, 31, 31
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

label_7F2B8E74:
    ctx->pc = 0x7F2B8E74u;
    // 7F2B8E74: bc    4, 2, 0x7F2B8E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8E7C;
        }
    }

label_7F2B8E78:
    ctx->pc = 0x7F2B8E78u;
    ctx->downcount -= 1;
    // 7F2B8E78: stw     r5, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B8E7C:
    ctx->pc = 0x7F2B8E7Cu;
    ctx->downcount -= 3;
    // 7F2B8E7C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2B8E80:
    ctx->pc = 0x7F2B8E80u;
    // 7F2B8E80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8E84:
    ctx->pc = 0x7F2B8E84u;
    // 7F2B8E84: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8E88u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8E88:
    ctx->pc = 0x7F2B8E88u;
    ctx->downcount -= 5;
    // 7F2B8E88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8E8C:
    ctx->pc = 0x7F2B8E8Cu;
    // 7F2B8E8C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8E90:
    ctx->pc = 0x7F2B8E90u;
    // 7F2B8E90: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8E94:
    ctx->pc = 0x7F2B8E94u;
    // 7F2B8E94: or.   r0, r4, r0
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

label_7F2B8E98:
    ctx->pc = 0x7F2B8E98u;
    // 7F2B8E98: bc    12, 2, 0x7F2B8EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8EC0;
        }
    }

label_7F2B8E9C:
    ctx->pc = 0x7F2B8E9Cu;
    ctx->downcount -= 3;
    // 7F2B8E9C: li      r4, 4096
    ctx->gpr[4] = (u32)(s32)(4096);

label_7F2B8EA0:
    ctx->pc = 0x7F2B8EA0u;
    // 7F2B8EA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8EA4:
    ctx->pc = 0x7F2B8EA4u;
    // 7F2B8EA4: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B8EA8u;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B8EA8:
    ctx->pc = 0x7F2B8EA8u;
    ctx->downcount -= 5;
    // 7F2B8EA8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B8EAC:
    ctx->pc = 0x7F2B8EACu;
    // 7F2B8EAC: xor   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[5];
    }

label_7F2B8EB0:
    ctx->pc = 0x7F2B8EB0u;
    // 7F2B8EB0: xor   r0, r3, r5
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[5];
    }

label_7F2B8EB4:
    ctx->pc = 0x7F2B8EB4u;
    // 7F2B8EB4: or.   r0, r4, r0
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

label_7F2B8EB8:
    ctx->pc = 0x7F2B8EB8u;
    // 7F2B8EB8: bc    4, 2, 0x7F2B8EC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8EC0;
        }
    }

label_7F2B8EBC:
    ctx->pc = 0x7F2B8EBCu;
    ctx->downcount -= 1;
    // 7F2B8EBC: stw     r5, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B8EC0:
    ctx->pc = 0x7F2B8EC0u;
    ctx->downcount -= 3;
    // 7F2B8EC0: lwz     r0, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8EC4:
    ctx->pc = 0x7F2B8EC4u;
    // 7F2B8EC4: cmplwi  r0, 0x0000
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

label_7F2B8EC8:
    ctx->pc = 0x7F2B8EC8u;
    // 7F2B8EC8: bc    12, 2, 0x7F2B8ED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8ED8;
        }
    }

label_7F2B8ECC:
    ctx->pc = 0x7F2B8ECCu;
    ctx->downcount -= 3;
    // 7F2B8ECC: lwz     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8ED0:
    ctx->pc = 0x7F2B8ED0u;
    // 7F2B8ED0: cmplwi  r0, 0x0000
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

label_7F2B8ED4:
    ctx->pc = 0x7F2B8ED4u;
    // 7F2B8ED4: bc    12, 2, 0x7F2B8EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8EE8;
        }
    }

label_7F2B8ED8:
    ctx->pc = 0x7F2B8ED8u;
    ctx->downcount -= 3;
    // 7F2B8ED8: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F2B8EDC:
    ctx->pc = 0x7F2B8EDCu;
    // 7F2B8EDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8EE0:
    ctx->pc = 0x7F2B8EE0u;
    // 7F2B8EE0: bl      0x7F2900CC
    {
            ctx->lr = 0x7F2B8EE4u;
            ctx->pc = 0x7F2900CCu;
            return;
    }

label_7F2B8EE4:
    ctx->pc = 0x7F2B8EE4u;
    ctx->downcount -= 1;
    // 7F2B8EE4: b       0x7F2B8EF4
    {
            goto label_7F2B8EF4;
    }

label_7F2B8EE8:
    ctx->pc = 0x7F2B8EE8u;
    ctx->downcount -= 3;
    // 7F2B8EE8: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F2B8EEC:
    ctx->pc = 0x7F2B8EECu;
    // 7F2B8EEC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8EF0:
    ctx->pc = 0x7F2B8EF0u;
    // 7F2B8EF0: bl      0x7F2900F0
    {
            ctx->lr = 0x7F2B8EF4u;
            ctx->pc = 0x7F2900F0u;
            return;
    }

label_7F2B8EF4:
    ctx->pc = 0x7F2B8EF4u;
    ctx->downcount -= 3;
    // 7F2B8EF4: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_7F2B8EF8:
    ctx->pc = 0x7F2B8EF8u;
    // 7F2B8EF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8EFC:
    ctx->pc = 0x7F2B8EFCu;
    // 7F2B8EFC: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B8F00u;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B8F00:
    ctx->pc = 0x7F2B8F00u;
    ctx->downcount -= 5;
    // 7F2B8F00: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8F04:
    ctx->pc = 0x7F2B8F04u;
    // 7F2B8F04: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8F08:
    ctx->pc = 0x7F2B8F08u;
    // 7F2B8F08: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8F0C:
    ctx->pc = 0x7F2B8F0Cu;
    // 7F2B8F0C: or.   r0, r4, r0
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

label_7F2B8F10:
    ctx->pc = 0x7F2B8F10u;
    // 7F2B8F10: bc    4, 2, 0x7F2B8FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8FBC;
        }
    }

label_7F2B8F14:
    ctx->pc = 0x7F2B8F14u;
    ctx->downcount -= 3;
    // 7F2B8F14: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2B8F18:
    ctx->pc = 0x7F2B8F18u;
    // 7F2B8F18: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F2B8F1C:
    ctx->pc = 0x7F2B8F1Cu;
    // 7F2B8F1C: bl      0x7F290054
    {
            ctx->lr = 0x7F2B8F20u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B8F20:
    ctx->pc = 0x7F2B8F20u;
    ctx->downcount -= 5;
    // 7F2B8F20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B8F24:
    ctx->pc = 0x7F2B8F24u;
    // 7F2B8F24: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B8F28:
    ctx->pc = 0x7F2B8F28u;
    // 7F2B8F28: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B8F2C:
    ctx->pc = 0x7F2B8F2Cu;
    // 7F2B8F2C: or.   r0, r4, r0
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

label_7F2B8F30:
    ctx->pc = 0x7F2B8F30u;
    // 7F2B8F30: bc    4, 2, 0x7F2B8FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8FBC;
        }
    }

label_7F2B8F34:
    ctx->pc = 0x7F2B8F34u;
    ctx->downcount -= 4;
    // 7F2B8F34: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B8F38:
    ctx->pc = 0x7F2B8F38u;
    // 7F2B8F38: addi    r4, r31, 1248
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1248);

label_7F2B8F3C:
    ctx->pc = 0x7F2B8F3Cu;
    // 7F2B8F3C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2B8F40:
    ctx->pc = 0x7F2B8F40u;
    // 7F2B8F40: bl      0x800261B4
    {
            ctx->lr = 0x7F2B8F44u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F2B8F44:
    ctx->pc = 0x7F2B8F44u;
    ctx->downcount -= 9;
    // 7F2B8F44: lfs     f0, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8F44u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8F48:
    ctx->pc = 0x7F2B8F48u;
    // 7F2B8F48: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B8F4C:
    ctx->pc = 0x7F2B8F4Cu;
    // 7F2B8F4C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2B8F50:
    ctx->pc = 0x7F2B8F50u;
    // 7F2B8F50: li      r6, 12
    ctx->gpr[6] = (u32)(s32)(12);

label_7F2B8F54:
    ctx->pc = 0x7F2B8F54u;
    // 7F2B8F54: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8F54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8F58:
    ctx->pc = 0x7F2B8F58u;
    // 7F2B8F58: li      r7, 16
    ctx->gpr[7] = (u32)(s32)(16);

label_7F2B8F5C:
    ctx->pc = 0x7F2B8F5Cu;
    // 7F2B8F5C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2B8F60:
    ctx->pc = 0x7F2B8F60u;
    // 7F2B8F60: lwz     r3, 228(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8F64:
    ctx->pc = 0x7F2B8F64u;
    // 7F2B8F64: bl      0x7F10B744
    {
            ctx->lr = 0x7F2B8F68u;
            ctx->pc = 0x7F10B744u;
            return;
    }

label_7F2B8F68:
    ctx->pc = 0x7F2B8F68u;
    ctx->downcount -= 2;
    // 7F2B8F68: cmpwi   r3, 0
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

label_7F2B8F6C:
    ctx->pc = 0x7F2B8F6Cu;
    // 7F2B8F6C: bc    12, 2, 0x7F2B8FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8FBC;
        }
    }

label_7F2B8F70:
    ctx->pc = 0x7F2B8F70u;
    ctx->downcount -= 2;
    // 7F2B8F70: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2B8F74:
    ctx->pc = 0x7F2B8F74u;
    // 7F2B8F74: bl      0x7F10B7A4
    {
            ctx->lr = 0x7F2B8F78u;
            ctx->pc = 0x7F10B7A4u;
            return;
    }

label_7F2B8F78:
    ctx->pc = 0x7F2B8F78u;
    ctx->downcount -= 2;
    // 7F2B8F78: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2B8F7C:
    ctx->pc = 0x7F2B8F7Cu;
    // 7F2B8F7C: bl      0x7F3CC594
    {
            ctx->lr = 0x7F2B8F80u;
            ctx->pc = 0x7F3CC594u;
            return;
    }

label_7F2B8F80:
    ctx->pc = 0x7F2B8F80u;
    ctx->downcount -= 4;
    // 7F2B8F80: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B8F84:
    ctx->pc = 0x7F2B8F84u;
    // 7F2B8F84: lfs     f0, 26352(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8F84u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26352);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8F88:
    ctx->pc = 0x7F2B8F88u;
    // 7F2B8F88: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8F88u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F2B8F8C:
    ctx->pc = 0x7F2B8F8Cu;
    // 7F2B8F8C: bc    4, 1, 0x7F2B8FAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B8FAC;
        }
    }

label_7F2B8F90:
    ctx->pc = 0x7F2B8F90u;
    ctx->downcount -= 7;
    // 7F2B8F90: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B8F94:
    ctx->pc = 0x7F2B8F94u;
    // 7F2B8F94: fsubs   f2, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B8F94u)) return;
    ppc_fsubs(ctx, 2, 1, 0);

label_7F2B8F98:
    ctx->pc = 0x7F2B8F98u;
    // 7F2B8F98: addi    r4, r3, 26272
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(26272);

label_7F2B8F9C:
    ctx->pc = 0x7F2B8F9Cu;
    // 7F2B8F9C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2B8FA0:
    ctx->pc = 0x7F2B8FA0u;
    // 7F2B8FA0: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8FA0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B8FA4:
    ctx->pc = 0x7F2B8FA4u;
    // 7F2B8FA4: addi    r4, r31, 1232
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1232);

label_7F2B8FA8:
    ctx->pc = 0x7F2B8FA8u;
    // 7F2B8FA8: bl      0x7F3CC6BC
    {
            ctx->lr = 0x7F2B8FACu;
            ctx->pc = 0x7F3CC6BCu;
            return;
    }

label_7F2B8FAC:
    ctx->pc = 0x7F2B8FACu;
    ctx->downcount -= 4;
    // 7F2B8FAC: lfs     f0, 1252(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8FACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B8FB0:
    ctx->pc = 0x7F2B8FB0u;
    // 7F2B8FB0: addi    r0, r31, 1232
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(1232);

label_7F2B8FB4:
    ctx->pc = 0x7F2B8FB4u;
    // 7F2B8FB4: stfs     f0, 1236(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B8FB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1236);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B8FB8:
    ctx->pc = 0x7F2B8FB8u;
    // 7F2B8FB8: stw     r0, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8FBC:
    ctx->pc = 0x7F2B8FBCu;
    ctx->downcount -= 2;
    // 7F2B8FBC: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B8FC0:
    ctx->pc = 0x7F2B8FC0u;
    // 7F2B8FC0: bl      0x7F023170
    {
            ctx->lr = 0x7F2B8FC4u;
            ctx->pc = 0x7F023170u;
            return;
    }

label_7F2B8FC4:
    ctx->pc = 0x7F2B8FC4u;
    ctx->downcount -= 12;
    // 7F2B8FC4: addi    r0, r31, 1248
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(1248);

label_7F2B8FC8:
    ctx->pc = 0x7F2B8FC8u;
    // 7F2B8FC8: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2B8FCC:
    ctx->pc = 0x7F2B8FCCu;
    // 7F2B8FCC: stw     r0, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8FD0:
    ctx->pc = 0x7F2B8FD0u;
    // 7F2B8FD0: addi    r4, r3, 18312
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(18312);

label_7F2B8FD4:
    ctx->pc = 0x7F2B8FD4u;
    // 7F2B8FD4: lwz     r0, 248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B8FD8:
    ctx->pc = 0x7F2B8FD8u;
    // 7F2B8FD8: stw     r0, 3912(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3912);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B8FDC:
    ctx->pc = 0x7F2B8FDCu;
    // 7F2B8FDC: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B8FE0:
    ctx->pc = 0x7F2B8FE0u;
    // 7F2B8FE0: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B8FE4:
    ctx->pc = 0x7F2B8FE4u;
    // 7F2B8FE4: lha     r5, 3962(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3962);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B8FE8:
    ctx->pc = 0x7F2B8FE8u;
    // 7F2B8FE8: lwz     r6, 2920(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2920);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2B8FEC:
    ctx->pc = 0x7F2B8FECu;
    // 7F2B8FEC: lwz     r7, 2916(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2916);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2B8FF0:
    ctx->pc = 0x7F2B8FF0u;
    // 7F2B8FF0: bl      0x7F110BD8
    {
            ctx->lr = 0x7F2B8FF4u;
            ctx->pc = 0x7F110BD8u;
            return;
    }

label_7F2B8FF4:
    ctx->pc = 0x7F2B8FF4u;
    ctx->downcount -= 3;
    // 7F2B8FF4: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_7F2B8FF8:
    ctx->pc = 0x7F2B8FF8u;
    // 7F2B8FF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B8FFC:
    ctx->pc = 0x7F2B8FFCu;
    // 7F2B8FFC: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B9000u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B9000:
    ctx->pc = 0x7F2B9000u;
    ctx->downcount -= 5;
    // 7F2B9000: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9004:
    ctx->pc = 0x7F2B9004u;
    // 7F2B9004: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B9008:
    ctx->pc = 0x7F2B9008u;
    // 7F2B9008: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B900C:
    ctx->pc = 0x7F2B900Cu;
    // 7F2B900C: or.   r0, r4, r0
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

label_7F2B9010:
    ctx->pc = 0x7F2B9010u;
    // 7F2B9010: bc    12, 2, 0x7F2B9090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9090;
        }
    }

label_7F2B9014:
    ctx->pc = 0x7F2B9014u;
    ctx->downcount -= 9;
    // 7F2B9014: lhz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2B9018:
    ctx->pc = 0x7F2B9018u;
    // 7F2B9018: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B901C:
    ctx->pc = 0x7F2B901Cu;
    // 7F2B901C: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2B9020:
    ctx->pc = 0x7F2B9020u;
    // 7F2B9020: rlwinm r0, r0, 0, 16, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFCu;
    }

label_7F2B9024:
    ctx->pc = 0x7F2B9024u;
    // 7F2B9024: sth     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B9028:
    ctx->pc = 0x7F2B9028u;
    // 7F2B9028: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B902C:
    ctx->pc = 0x7F2B902Cu;
    // 7F2B902C: lwz     r0, 1076(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1076);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9030:
    ctx->pc = 0x7F2B9030u;
    // 7F2B9030: rlwinm. r0, r0, 0, 28, 28
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

label_7F2B9034:
    ctx->pc = 0x7F2B9034u;
    // 7F2B9034: bc    4, 2, 0x7F2B9044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9044;
        }
    }

label_7F2B9038:
    ctx->pc = 0x7F2B9038u;
    ctx->downcount -= 3;
    // 7F2B9038: lhz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2B903C:
    ctx->pc = 0x7F2B903Cu;
    // 7F2B903C: rlwinm r0, r0, 0, 28, 26
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFEFu;
    }

label_7F2B9040:
    ctx->pc = 0x7F2B9040u;
    // 7F2B9040: sth     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B9044:
    ctx->pc = 0x7F2B9044u;
    ctx->downcount -= 6;
    // 7F2B9044: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B9048:
    ctx->pc = 0x7F2B9048u;
    // 7F2B9048: addi    r4, r3, -5660
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2B904C:
    ctx->pc = 0x7F2B904Cu;
    // 7F2B904C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9050:
    ctx->pc = 0x7F2B9050u;
    // 7F2B9050: lwz     r3, 1068(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1068);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9054:
    ctx->pc = 0x7F2B9054u;
    // 7F2B9054: cmpwi   r3, 0
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

label_7F2B9058:
    ctx->pc = 0x7F2B9058u;
    // 7F2B9058: bc    12, 0, 0x7F2B9070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9070;
        }
    }

label_7F2B905C:
    ctx->pc = 0x7F2B905Cu;
    ctx->downcount -= 5;
    // 7F2B905C: sth     r3, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2B9060:
    ctx->pc = 0x7F2B9060u;
    // 7F2B9060: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2B9064:
    ctx->pc = 0x7F2B9064u;
    // 7F2B9064: sth     r3, 106(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2B9068:
    ctx->pc = 0x7F2B9068u;
    // 7F2B9068: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B906C:
    ctx->pc = 0x7F2B906Cu;
    // 7F2B906C: stw     r0, 1068(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1068);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9070:
    ctx->pc = 0x7F2B9070u;
    ctx->downcount -= 3;
    // 7F2B9070: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2B9074:
    ctx->pc = 0x7F2B9074u;
    // 7F2B9074: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9078:
    ctx->pc = 0x7F2B9078u;
    // 7F2B9078: bl      0x7F29002C
    {
            ctx->lr = 0x7F2B907Cu;
            ctx->pc = 0x7F29002Cu;
            return;
    }

label_7F2B907C:
    ctx->pc = 0x7F2B907Cu;
    ctx->downcount -= 5;
    // 7F2B907C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B9080:
    ctx->pc = 0x7F2B9080u;
    // 7F2B9080: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9084:
    ctx->pc = 0x7F2B9084u;
    // 7F2B9084: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2B9088:
    ctx->pc = 0x7F2B9088u;
    // 7F2B9088: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B908C:
    ctx->pc = 0x7F2B908Cu;
    // 7F2B908C: stw     r0, 1076(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1076);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9090:
    ctx->pc = 0x7F2B9090u;
    ctx->downcount -= 3;
    // 7F2B9090: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B9094:
    ctx->pc = 0x7F2B9094u;
    // 7F2B9094: lis     r3, 4
    ctx->gpr[3] = ((u32)(s32)(4) << 16);

label_7F2B9098:
    ctx->pc = 0x7F2B9098u;
    // 7F2B9098: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B909Cu;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B909C:
    ctx->pc = 0x7F2B909Cu;
    ctx->downcount -= 5;
    // 7F2B909C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B90A0:
    ctx->pc = 0x7F2B90A0u;
    // 7F2B90A0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B90A4:
    ctx->pc = 0x7F2B90A4u;
    // 7F2B90A4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B90A8:
    ctx->pc = 0x7F2B90A8u;
    // 7F2B90A8: or.   r0, r4, r0
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

label_7F2B90AC:
    ctx->pc = 0x7F2B90ACu;
    // 7F2B90AC: bc    12, 2, 0x7F2B90CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B90CC;
        }
    }

label_7F2B90B0:
    ctx->pc = 0x7F2B90B0u;
    ctx->downcount -= 3;
    // 7F2B90B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B90B4:
    ctx->pc = 0x7F2B90B4u;
    // 7F2B90B4: lis     r3, 4
    ctx->gpr[3] = ((u32)(s32)(4) << 16);

label_7F2B90B8:
    ctx->pc = 0x7F2B90B8u;
    // 7F2B90B8: bl      0x7F2900A0
    {
            ctx->lr = 0x7F2B90BCu;
            ctx->pc = 0x7F2900A0u;
            return;
    }

label_7F2B90BC:
    ctx->pc = 0x7F2B90BCu;
    ctx->downcount -= 4;
    // 7F2B90BC: lhz     r3, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_7F2B90C0:
    ctx->pc = 0x7F2B90C0u;
    // 7F2B90C0: li      r0, -1284
    ctx->gpr[0] = (u32)(s32)(-1284);

label_7F2B90C4:
    ctx->pc = 0x7F2B90C4u;
    // 7F2B90C4: and   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] & ctx->gpr[0];
    }

label_7F2B90C8:
    ctx->pc = 0x7F2B90C8u;
    // 7F2B90C8: sth     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B90CC:
    ctx->pc = 0x7F2B90CCu;
    ctx->downcount -= 4;
    // 7F2B90CC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B90D0:
    ctx->pc = 0x7F2B90D0u;
    // 7F2B90D0: lwzu     r0, -6640(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6640);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[3] = ea;
    }

label_7F2B90D4:
    ctx->pc = 0x7F2B90D4u;
    // 7F2B90D4: cmpwi   r0, 0
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

label_7F2B90D8:
    ctx->pc = 0x7F2B90D8u;
    // 7F2B90D8: bc    4, 2, 0x7F2B90E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B90E4;
        }
    }

label_7F2B90DC:
    ctx->pc = 0x7F2B90DCu;
    ctx->downcount -= 2;
    // 7F2B90DC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2B90E0:
    ctx->pc = 0x7F2B90E0u;
    // 7F2B90E0: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B90E4:
    ctx->pc = 0x7F2B90E4u;
    ctx->downcount -= 3;
    // 7F2B90E4: lha     r0, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B90E8:
    ctx->pc = 0x7F2B90E8u;
    // 7F2B90E8: cmpwi   r0, 2
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

label_7F2B90EC:
    ctx->pc = 0x7F2B90ECu;
    // 7F2B90EC: bc    12, 2, 0x7F2B9164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9164;
        }
    }

label_7F2B90F0:
    ctx->pc = 0x7F2B90F0u;
    ctx->downcount -= 3;
    // 7F2B90F0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F2B90F4:
    ctx->pc = 0x7F2B90F4u;
    // 7F2B90F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B90F8:
    ctx->pc = 0x7F2B90F8u;
    // 7F2B90F8: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B90FCu;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B90FC:
    ctx->pc = 0x7F2B90FCu;
    ctx->downcount -= 5;
    // 7F2B90FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9100:
    ctx->pc = 0x7F2B9100u;
    // 7F2B9100: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B9104:
    ctx->pc = 0x7F2B9104u;
    // 7F2B9104: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B9108:
    ctx->pc = 0x7F2B9108u;
    // 7F2B9108: or.   r0, r4, r0
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

label_7F2B910C:
    ctx->pc = 0x7F2B910Cu;
    // 7F2B910C: bc    4, 2, 0x7F2B9164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9164;
        }
    }

label_7F2B9110:
    ctx->pc = 0x7F2B9110u;
    ctx->downcount -= 3;
    // 7F2B9110: lha     r0, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B9114:
    ctx->pc = 0x7F2B9114u;
    // 7F2B9114: cmpwi   r0, 1
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

label_7F2B9118:
    ctx->pc = 0x7F2B9118u;
    // 7F2B9118: bc    12, 2, 0x7F2B9164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9164;
        }
    }

label_7F2B911C:
    ctx->pc = 0x7F2B911Cu;
    ctx->downcount -= 3;
    // 7F2B911C: lbz     r0, 218(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(218);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2B9120:
    ctx->pc = 0x7F2B9120u;
    // 7F2B9120: rlwinm. r0, r0, 0, 31, 31
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

label_7F2B9124:
    ctx->pc = 0x7F2B9124u;
    // 7F2B9124: bc    12, 2, 0x7F2B9164
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9164;
        }
    }

label_7F2B9128:
    ctx->pc = 0x7F2B9128u;
    ctx->downcount -= 3;
    // 7F2B9128: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B912C:
    ctx->pc = 0x7F2B912Cu;
    // 7F2B912C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2B9130:
    ctx->pc = 0x7F2B9130u;
    // 7F2B9130: bl      0x7F290054
    {
            ctx->lr = 0x7F2B9134u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B9134:
    ctx->pc = 0x7F2B9134u;
    ctx->downcount -= 5;
    // 7F2B9134: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9138:
    ctx->pc = 0x7F2B9138u;
    // 7F2B9138: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B913C:
    ctx->pc = 0x7F2B913Cu;
    // 7F2B913C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B9140:
    ctx->pc = 0x7F2B9140u;
    // 7F2B9140: or.   r0, r4, r0
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

label_7F2B9144:
    ctx->pc = 0x7F2B9144u;
    // 7F2B9144: bc    12, 2, 0x7F2B9158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9158;
        }
    }

label_7F2B9148:
    ctx->pc = 0x7F2B9148u;
    ctx->downcount -= 3;
    // 7F2B9148: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B914C:
    ctx->pc = 0x7F2B914Cu;
    // 7F2B914C: addi    r4, r31, 464
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(464);

label_7F2B9150:
    ctx->pc = 0x7F2B9150u;
    // 7F2B9150: bl      0x7F2FF7A0
    {
            ctx->lr = 0x7F2B9154u;
            ctx->pc = 0x7F2FF7A0u;
            return;
    }

label_7F2B9154:
    ctx->pc = 0x7F2B9154u;
    ctx->downcount -= 1;
    // 7F2B9154: b       0x7F2B9164
    {
            goto label_7F2B9164;
    }

label_7F2B9158:
    ctx->pc = 0x7F2B9158u;
    ctx->downcount -= 3;
    // 7F2B9158: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B915C:
    ctx->pc = 0x7F2B915Cu;
    // 7F2B915C: addi    r4, r31, 464
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(464);

label_7F2B9160:
    ctx->pc = 0x7F2B9160u;
    // 7F2B9160: bl      0x7F2FF7C4
    {
            ctx->lr = 0x7F2B9164u;
            ctx->pc = 0x7F2FF7C4u;
            return;
    }

label_7F2B9164:
    ctx->pc = 0x7F2B9164u;
    ctx->downcount -= 4;
    // 7F2B9164: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2B9168:
    ctx->pc = 0x7F2B9168u;
    // 7F2B9168: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B916C:
    ctx->pc = 0x7F2B916Cu;
    // 7F2B916C: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F2B9170:
    ctx->pc = 0x7F2B9170u;
    // 7F2B9170: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B9174u;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B9174:
    ctx->pc = 0x7F2B9174u;
    ctx->downcount -= 5;
    // 7F2B9174: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9178:
    ctx->pc = 0x7F2B9178u;
    // 7F2B9178: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B917C:
    ctx->pc = 0x7F2B917Cu;
    // 7F2B917C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B9180:
    ctx->pc = 0x7F2B9180u;
    // 7F2B9180: or.   r0, r4, r0
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

label_7F2B9184:
    ctx->pc = 0x7F2B9184u;
    // 7F2B9184: bc    12, 2, 0x7F2B91AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B91AC;
        }
    }

label_7F2B9188:
    ctx->pc = 0x7F2B9188u;
    ctx->downcount -= 2;
    // 7F2B9188: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2B918C:
    ctx->pc = 0x7F2B918Cu;
    // 7F2B918C: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2B9190u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2B9190:
    ctx->pc = 0x7F2B9190u;
    ctx->downcount -= 5;
    // 7F2B9190: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2B9194:
    ctx->pc = 0x7F2B9194u;
    // 7F2B9194: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_7F2B9198:
    ctx->pc = 0x7F2B9198u;
    // 7F2B9198: addi    r4, r4, -6296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6296);

label_7F2B919C:
    ctx->pc = 0x7F2B919Cu;
    // 7F2B919C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B91A0:
    ctx->pc = 0x7F2B91A0u;
    // 7F2B91A0: bl      0x800261B4
    {
            ctx->lr = 0x7F2B91A4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F2B91A4:
    ctx->pc = 0x7F2B91A4u;
    ctx->downcount -= 2;
    // 7F2B91A4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2B91A8:
    ctx->pc = 0x7F2B91A8u;
    // 7F2B91A8: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2B91ACu;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2B91AC:
    ctx->pc = 0x7F2B91ACu;
    ctx->downcount -= 1;
    // 7F2B91AC: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F2B91B0u;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F2B91B0:
    ctx->pc = 0x7F2B91B0u;
    ctx->downcount -= 2;
    // 7F2B91B0: cmpwi   r3, 0
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

label_7F2B91B4:
    ctx->pc = 0x7F2B91B4u;
    // 7F2B91B4: bc    12, 2, 0x7F2B91C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B91C0;
        }
    }

label_7F2B91B8:
    ctx->pc = 0x7F2B91B8u;
    ctx->downcount -= 1;
    // 7F2B91B8: bl      0x7F0B8A8C
    {
            ctx->lr = 0x7F2B91BCu;
            ctx->pc = 0x7F0B8A8Cu;
            return;
    }

label_7F2B91BC:
    ctx->pc = 0x7F2B91BCu;
    ctx->downcount -= 1;
    // 7F2B91BC: bl      0x7F3B2F44
    {
            ctx->lr = 0x7F2B91C0u;
            ctx->pc = 0x7F3B2F44u;
            return;
    }

label_7F2B91C0:
    ctx->pc = 0x7F2B91C0u;
    ctx->downcount -= 2;
    // 7F2B91C0: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F2B91C4:
    ctx->pc = 0x7F2B91C4u;
    // 7F2B91C4: bl      0x7F0429C4
    {
            ctx->lr = 0x7F2B91C8u;
            ctx->pc = 0x7F0429C4u;
            return;
    }

label_7F2B91C8:
    ctx->pc = 0x7F2B91C8u;
    ctx->downcount -= 4;
    // 7F2B91C8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2B91CC:
    ctx->pc = 0x7F2B91CCu;
    // 7F2B91CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B91D0:
    ctx->pc = 0x7F2B91D0u;
    // 7F2B91D0: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F2B91D4:
    ctx->pc = 0x7F2B91D4u;
    // 7F2B91D4: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B91D8u;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B91D8:
    ctx->pc = 0x7F2B91D8u;
    ctx->downcount -= 5;
    // 7F2B91D8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B91DC:
    ctx->pc = 0x7F2B91DCu;
    // 7F2B91DC: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B91E0:
    ctx->pc = 0x7F2B91E0u;
    // 7F2B91E0: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B91E4:
    ctx->pc = 0x7F2B91E4u;
    // 7F2B91E4: or.   r0, r4, r0
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

label_7F2B91E8:
    ctx->pc = 0x7F2B91E8u;
    // 7F2B91E8: bc    12, 2, 0x7F2B9248
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9248;
        }
    }

label_7F2B91EC:
    ctx->pc = 0x7F2B91ECu;
    ctx->downcount -= 6;
    // 7F2B91EC: lwz     r5, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B91F0:
    ctx->pc = 0x7F2B91F0u;
    // 7F2B91F0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B91F4:
    ctx->pc = 0x7F2B91F4u;
    // 7F2B91F4: addi    r4, r3, -6296
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6296);

label_7F2B91F8:
    ctx->pc = 0x7F2B91F8u;
    // 7F2B91F8: addi    r3, r5, 52
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(52);

label_7F2B91FC:
    ctx->pc = 0x7F2B91FCu;
    // 7F2B91FC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9200:
    ctx->pc = 0x7F2B9200u;
    // 7F2B9200: bl      0x800261D8
    {
            ctx->lr = 0x7F2B9204u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F2B9204:
    ctx->pc = 0x7F2B9204u;
    ctx->downcount -= 5;
    // 7F2B9204: lwz     r4, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B9208:
    ctx->pc = 0x7F2B9208u;
    // 7F2B9208: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B920C:
    ctx->pc = 0x7F2B920Cu;
    // 7F2B920C: addi    r30, r3, -6296
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-6296);

label_7F2B9210:
    ctx->pc = 0x7F2B9210u;
    // 7F2B9210: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2B9214:
    ctx->pc = 0x7F2B9214u;
    // 7F2B9214: addi    r28, r4, 444
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(444);

label_7F2B9218:
    ctx->downcount -= 4;
    // 7F2B9218: addi    r3, r28, 48
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(48);

label_7F2B921C:
    // 7F2B921C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2B9220:
    // 7F2B9220: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9224:
    // 7F2B9224: bl      0x800261D8
    {
            ctx->lr = 0x7F2B9228u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F2B9228:
    ctx->downcount -= 4;
    // 7F2B9228: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F2B922C:
    // 7F2B922C: addi    r28, r28, 324
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(324);

label_7F2B9230:
    // 7F2B9230: cmpwi   r29, 21
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B9234:
    // 7F2B9234: bc    12, 0, 0x7F2B9218
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2B9218u;
                return;
            }
            goto label_7F2B9218;
        }
    }

label_7F2B9238:
    ctx->pc = 0x7F2B9238u;
    ctx->downcount -= 4;
    // 7F2B9238: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F2B923C:
    ctx->pc = 0x7F2B923Cu;
    // 7F2B923C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9240:
    ctx->pc = 0x7F2B9240u;
    // 7F2B9240: addi    r4, r4, -32768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32768);

label_7F2B9244:
    ctx->pc = 0x7F2B9244u;
    // 7F2B9244: bl      0x7F2900F0
    {
            ctx->lr = 0x7F2B9248u;
            ctx->pc = 0x7F2900F0u;
            return;
    }

label_7F2B9248:
    ctx->pc = 0x7F2B9248u;
    ctx->downcount -= 3;
    // 7F2B9248: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B924C:
    ctx->pc = 0x7F2B924Cu;
    // 7F2B924C: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F2B9250:
    ctx->pc = 0x7F2B9250u;
    // 7F2B9250: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B9254u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B9254:
    ctx->pc = 0x7F2B9254u;
    ctx->downcount -= 5;
    // 7F2B9254: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9258:
    ctx->pc = 0x7F2B9258u;
    // 7F2B9258: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B925C:
    ctx->pc = 0x7F2B925Cu;
    // 7F2B925C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B9260:
    ctx->pc = 0x7F2B9260u;
    // 7F2B9260: or.   r0, r4, r0
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

label_7F2B9264:
    ctx->pc = 0x7F2B9264u;
    // 7F2B9264: bc    12, 2, 0x7F2B92C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B92C4;
        }
    }

label_7F2B9268:
    ctx->pc = 0x7F2B9268u;
    ctx->downcount -= 3;
    // 7F2B9268: lwz     r4, 1208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B926C:
    ctx->pc = 0x7F2B926Cu;
    // 7F2B926C: cmpwi   r4, 0
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

label_7F2B9270:
    ctx->pc = 0x7F2B9270u;
    // 7F2B9270: bc    12, 1, 0x7F2B9288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9288;
        }
    }

label_7F2B9274:
    ctx->pc = 0x7F2B9274u;
    ctx->downcount -= 5;
    // 7F2B9274: lwz     r3, 468(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(468);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9278:
    ctx->pc = 0x7F2B9278u;
    // 7F2B9278: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B927C:
    ctx->pc = 0x7F2B927Cu;
    // 7F2B927C: lwz     r0, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9280:
    ctx->pc = 0x7F2B9280u;
    // 7F2B9280: rlwinm. r0, r0, 0, 29, 29
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

label_7F2B9284:
    ctx->pc = 0x7F2B9284u;
    // 7F2B9284: bc    4, 2, 0x7F2B92A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B92A4;
        }
    }

label_7F2B9288:
    ctx->pc = 0x7F2B9288u;
    ctx->downcount -= 2;
    // 7F2B9288: cmpwi   r4, 0
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

label_7F2B928C:
    ctx->pc = 0x7F2B928Cu;
    // 7F2B928C: bc    4, 1, 0x7F2B92C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B92C4;
        }
    }

label_7F2B9290:
    ctx->pc = 0x7F2B9290u;
    ctx->downcount -= 2;
    // 7F2B9290: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9294:
    ctx->pc = 0x7F2B9294u;
    // 7F2B9294: bl      0x7F290D9C
    {
            ctx->lr = 0x7F2B9298u;
            ctx->pc = 0x7F290D9Cu;
            return;
    }

label_7F2B9298:
    ctx->pc = 0x7F2B9298u;
    ctx->downcount -= 3;
    // 7F2B9298: lwz     r0, 1208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B929C:
    ctx->pc = 0x7F2B929Cu;
    // 7F2B929C: cmpw    r3, r0
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

label_7F2B92A0:
    ctx->pc = 0x7F2B92A0u;
    // 7F2B92A0: bc    12, 0, 0x7F2B92C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B92C4;
        }
    }

label_7F2B92A4:
    ctx->pc = 0x7F2B92A4u;
    ctx->downcount -= 5;
    // 7F2B92A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B92A8:
    ctx->pc = 0x7F2B92A8u;
    // 7F2B92A8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_7F2B92AC:
    ctx->pc = 0x7F2B92ACu;
    // 7F2B92AC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2B92B0:
    ctx->pc = 0x7F2B92B0u;
    // 7F2B92B0: li      r6, 8190
    ctx->gpr[6] = (u32)(s32)(8190);

label_7F2B92B4:
    ctx->pc = 0x7F2B92B4u;
    // 7F2B92B4: bl      0x7F290308
    {
            ctx->lr = 0x7F2B92B8u;
            ctx->pc = 0x7F290308u;
            return;
    }

label_7F2B92B8:
    ctx->pc = 0x7F2B92B8u;
    ctx->downcount -= 3;
    // 7F2B92B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B92BC:
    ctx->pc = 0x7F2B92BCu;
    // 7F2B92BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B92C0:
    ctx->pc = 0x7F2B92C0u;
    // 7F2B92C0: bl      0x7F290808
    {
            ctx->lr = 0x7F2B92C4u;
            ctx->pc = 0x7F290808u;
            return;
    }

label_7F2B92C4:
    ctx->pc = 0x7F2B92C4u;
    ctx->downcount -= 3;
    // 7F2B92C4: lwz     r5, 496(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(496);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B92C8:
    ctx->pc = 0x7F2B92C8u;
    // 7F2B92C8: cmplwi  r5, 0x0000
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

label_7F2B92CC:
    ctx->pc = 0x7F2B92CCu;
    // 7F2B92CC: bc    12, 2, 0x7F2B92E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B92E0;
        }
    }

label_7F2B92D0:
    ctx->pc = 0x7F2B92D0u;
    ctx->downcount -= 4;
    // 7F2B92D0: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B92D4:
    ctx->pc = 0x7F2B92D4u;
    // 7F2B92D4: addi    r4, r31, 508
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(508);

label_7F2B92D8:
    ctx->pc = 0x7F2B92D8u;
    // 7F2B92D8: addi    r5, r5, 96
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(96);

label_7F2B92DC:
    ctx->pc = 0x7F2B92DCu;
    // 7F2B92DC: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F2B92E0u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F2B92E0:
    ctx->pc = 0x7F2B92E0u;
    ctx->downcount -= 5;
    // 7F2B92E0: lwz     r5, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B92E4:
    ctx->pc = 0x7F2B92E4u;
    // 7F2B92E4: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B92E8:
    ctx->pc = 0x7F2B92E8u;
    // 7F2B92E8: addi    r4, r31, 508
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(508);

label_7F2B92EC:
    ctx->pc = 0x7F2B92ECu;
    // 7F2B92EC: addi    r5, r5, 156
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(156);

label_7F2B92F0:
    ctx->pc = 0x7F2B92F0u;
    // 7F2B92F0: bl      0x7F3BBF3C
    {
            ctx->lr = 0x7F2B92F4u;
            ctx->pc = 0x7F3BBF3Cu;
            return;
    }

label_7F2B92F4:
    ctx->pc = 0x7F2B92F4u;
    ctx->downcount -= 3;
    // 7F2B92F4: lbz     r0, 218(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(218);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2B92F8:
    ctx->pc = 0x7F2B92F8u;
    // 7F2B92F8: rlwinm. r0, r0, 0, 31, 31
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

label_7F2B92FC:
    ctx->pc = 0x7F2B92FCu;
    // 7F2B92FC: bc    12, 2, 0x7F2B930C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B930C;
        }
    }

label_7F2B9300:
    ctx->pc = 0x7F2B9300u;
    ctx->downcount -= 3;
    // 7F2B9300: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B9304:
    ctx->pc = 0x7F2B9304u;
    // 7F2B9304: lfs     f0, 26272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B9304u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B9308:
    ctx->pc = 0x7F2B9308u;
    // 7F2B9308: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B9308u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B930C:
    ctx->pc = 0x7F2B930Cu;
    ctx->downcount -= 3;
    // 7F2B930C: lis     r4, 32
    ctx->gpr[4] = ((u32)(s32)(32) << 16);

label_7F2B9310:
    ctx->pc = 0x7F2B9310u;
    // 7F2B9310: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9314:
    ctx->pc = 0x7F2B9314u;
    // 7F2B9314: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B9318u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B9318:
    ctx->pc = 0x7F2B9318u;
    ctx->downcount -= 5;
    // 7F2B9318: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B931C:
    ctx->pc = 0x7F2B931Cu;
    // 7F2B931C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B9320:
    ctx->pc = 0x7F2B9320u;
    // 7F2B9320: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B9324:
    ctx->pc = 0x7F2B9324u;
    // 7F2B9324: or.   r0, r4, r0
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

label_7F2B9328:
    ctx->pc = 0x7F2B9328u;
    // 7F2B9328: bc    4, 2, 0x7F2B9340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9340;
        }
    }

label_7F2B932C:
    ctx->pc = 0x7F2B932Cu;
    ctx->downcount -= 5;
    // 7F2B932C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B9330:
    ctx->pc = 0x7F2B9330u;
    // 7F2B9330: lfs     f1, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B9330u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B9334:
    ctx->pc = 0x7F2B9334u;
    // 7F2B9334: lfs     f0, 27248(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B9334u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(27248);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B9338:
    ctx->pc = 0x7F2B9338u;
    // 7F2B9338: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F2B9338u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F2B933C:
    ctx->pc = 0x7F2B933Cu;
    // 7F2B933C: stfs     f0, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B933Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B9340:
    ctx->pc = 0x7F2B9340u;
    ctx->downcount -= 2;
    // 7F2B9340: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9344:
    ctx->pc = 0x7F2B9344u;
    // 7F2B9344: bl      0x7F2924AC
    {
            ctx->lr = 0x7F2B9348u;
            ctx->pc = 0x7F2924ACu;
            return;
    }

label_7F2B9348:
    ctx->pc = 0x7F2B9348u;
    ctx->downcount -= 2;
    // 7F2B9348: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B934C:
    ctx->pc = 0x7F2B934Cu;
    // 7F2B934C: bl      0x7F2B7CE4
    {
            ctx->lr = 0x7F2B9350u;
            ctx->pc = 0x7F2B7CE4u;
            return;
    }

label_7F2B9350:
    ctx->pc = 0x7F2B9350u;
    ctx->downcount -= 2;
    // 7F2B9350: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9354:
    ctx->pc = 0x7F2B9354u;
    // 7F2B9354: bl      0x7F292570
    {
            ctx->lr = 0x7F2B9358u;
            ctx->pc = 0x7F292570u;
            return;
    }

label_7F2B9358:
    ctx->pc = 0x7F2B9358u;
    ctx->downcount -= 2;
    // 7F2B9358: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B935C:
    ctx->pc = 0x7F2B935Cu;
    // 7F2B935C: bl      0x7F2949E0
    {
            ctx->lr = 0x7F2B9360u;
            ctx->pc = 0x7F2949E0u;
            return;
    }

label_7F2B9360:
    ctx->pc = 0x7F2B9360u;
    ctx->downcount -= 2;
    // 7F2B9360: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9364:
    ctx->pc = 0x7F2B9364u;
    // 7F2B9364: bl      0x7F296E58
    {
            ctx->lr = 0x7F2B9368u;
            ctx->pc = 0x7F296E58u;
            return;
    }

label_7F2B9368:
    ctx->pc = 0x7F2B9368u;
    ctx->downcount -= 3;
    // 7F2B9368: lbz     r0, 218(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(218);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2B936C:
    ctx->pc = 0x7F2B936Cu;
    // 7F2B936C: rlwinm. r0, r0, 0, 31, 31
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

label_7F2B9370:
    ctx->pc = 0x7F2B9370u;
    // 7F2B9370: bc    12, 2, 0x7F2B9380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9380;
        }
    }

label_7F2B9374:
    ctx->pc = 0x7F2B9374u;
    ctx->downcount -= 3;
    // 7F2B9374: lfs     f0, 208(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B9374u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B9378:
    ctx->pc = 0x7F2B9378u;
    // 7F2B9378: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B937C:
    ctx->pc = 0x7F2B937Cu;
    // 7F2B937C: stfs     f0, -5856(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2B937Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5856);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B9380:
    ctx->pc = 0x7F2B9380u;
    ctx->downcount -= 2;
    // 7F2B9380: li      r3, 64
    ctx->gpr[3] = (u32)(s32)(64);

label_7F2B9384:
    ctx->pc = 0x7F2B9384u;
    // 7F2B9384: bl      0x7F012050
    {
            ctx->lr = 0x7F2B9388u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F2B9388:
    ctx->pc = 0x7F2B9388u;
    ctx->downcount -= 2;
    // 7F2B9388: cmpwi   r3, 0
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

label_7F2B938C:
    ctx->pc = 0x7F2B938Cu;
    // 7F2B938C: bc    4, 2, 0x7F2B93B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B93B0;
        }
    }

label_7F2B9390:
    ctx->pc = 0x7F2B9390u;
    ctx->downcount -= 3;
    // 7F2B9390: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_7F2B9394:
    ctx->pc = 0x7F2B9394u;
    // 7F2B9394: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9398:
    ctx->pc = 0x7F2B9398u;
    // 7F2B9398: bl      0x7F29013C
    {
            ctx->lr = 0x7F2B939Cu;
            ctx->pc = 0x7F29013Cu;
            return;
    }

label_7F2B939C:
    ctx->pc = 0x7F2B939Cu;
    ctx->downcount -= 5;
    // 7F2B939C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B93A0:
    ctx->pc = 0x7F2B93A0u;
    // 7F2B93A0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B93A4:
    ctx->pc = 0x7F2B93A4u;
    // 7F2B93A4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B93A8:
    ctx->pc = 0x7F2B93A8u;
    // 7F2B93A8: or.   r0, r4, r0
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

label_7F2B93AC:
    ctx->pc = 0x7F2B93ACu;
    // 7F2B93AC: bc    12, 2, 0x7F2B9474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9474;
        }
    }

label_7F2B93B0:
    ctx->pc = 0x7F2B93B0u;
    ctx->downcount -= 4;
    // 7F2B93B0: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B93B4:
    ctx->pc = 0x7F2B93B4u;
    // 7F2B93B4: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B93B8:
    ctx->pc = 0x7F2B93B8u;
    // 7F2B93B8: rlwinm. r0, r0, 0, 19, 19
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

label_7F2B93BC:
    ctx->pc = 0x7F2B93BCu;
    // 7F2B93BC: bc    12, 2, 0x7F2B9474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9474;
        }
    }

label_7F2B93C0:
    ctx->pc = 0x7F2B93C0u;
    ctx->downcount -= 3;
    // 7F2B93C0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2B93C4:
    ctx->pc = 0x7F2B93C4u;
    // 7F2B93C4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B93C8:
    ctx->pc = 0x7F2B93C8u;
    // 7F2B93C8: bl      0x7F2900CC
    {
            ctx->lr = 0x7F2B93CCu;
            ctx->pc = 0x7F2900CCu;
            return;
    }

label_7F2B93CC:
    ctx->pc = 0x7F2B93CCu;
    ctx->downcount -= 11;
    // 7F2B93CC: lwz     r4, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B93D0:
    ctx->pc = 0x7F2B93D0u;
    // 7F2B93D0: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2B93D4:
    ctx->pc = 0x7F2B93D4u;
    // 7F2B93D4: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B93D8:
    ctx->pc = 0x7F2B93D8u;
    // 7F2B93D8: rlwinm r0, r0, 0, 20, 18
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFEFFFu;
    }

label_7F2B93DC:
    ctx->pc = 0x7F2B93DCu;
    // 7F2B93DC: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B93E0:
    ctx->pc = 0x7F2B93E0u;
    // 7F2B93E0: lwz     r0, 22156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B93E4:
    ctx->pc = 0x7F2B93E4u;
    // 7F2B93E4: stw     r0, 2496(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B93E8:
    ctx->pc = 0x7F2B93E8u;
    // 7F2B93E8: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B93EC:
    ctx->pc = 0x7F2B93ECu;
    // 7F2B93EC: lwz     r0, 636(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(636);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B93F0:
    ctx->pc = 0x7F2B93F0u;
    // 7F2B93F0: rlwinm. r0, r0, 0, 19, 19
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

label_7F2B93F4:
    ctx->pc = 0x7F2B93F4u;
    // 7F2B93F4: bc    12, 2, 0x7F2B9444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9444;
        }
    }

label_7F2B93F8:
    ctx->pc = 0x7F2B93F8u;
    ctx->downcount -= 3;
    // 7F2B93F8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_7F2B93FC:
    ctx->pc = 0x7F2B93FCu;
    // 7F2B93FC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9400:
    ctx->pc = 0x7F2B9400u;
    // 7F2B9400: bl      0x7F2900CC
    {
            ctx->lr = 0x7F2B9404u;
            ctx->pc = 0x7F2900CCu;
            return;
    }

label_7F2B9404:
    ctx->pc = 0x7F2B9404u;
    ctx->downcount -= 3;
    // 7F2B9404: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9408:
    ctx->pc = 0x7F2B9408u;
    // 7F2B9408: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B940C:
    ctx->pc = 0x7F2B940Cu;
    // 7F2B940C: bl      0x7F2BBCE0
    {
            ctx->lr = 0x7F2B9410u;
            goto label_7F2BBCE0;
    }

label_7F2B9410:
    ctx->pc = 0x7F2B9410u;
    ctx->downcount -= 3;
    // 7F2B9410: lwz     r0, 2504(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2504);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9414:
    ctx->pc = 0x7F2B9414u;
    // 7F2B9414: cmplwi  r0, 0x0006
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

label_7F2B9418:
    ctx->pc = 0x7F2B9418u;
    // 7F2B9418: bc    4, 2, 0x7F2B9444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9444;
        }
    }

label_7F2B941C:
    ctx->pc = 0x7F2B941Cu;
    ctx->downcount -= 6;
    // 7F2B941C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B9420:
    ctx->pc = 0x7F2B9420u;
    // 7F2B9420: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B9424:
    ctx->pc = 0x7F2B9424u;
    // 7F2B9424: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9428:
    ctx->pc = 0x7F2B9428u;
    // 7F2B9428: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B942C:
    ctx->pc = 0x7F2B942Cu;
    // 7F2B942C: rlwinm. r0, r0, 0, 25, 25
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

label_7F2B9430:
    ctx->pc = 0x7F2B9430u;
    // 7F2B9430: bc    12, 2, 0x7F2B9444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9444;
        }
    }

label_7F2B9434:
    ctx->pc = 0x7F2B9434u;
    ctx->downcount -= 4;
    // 7F2B9434: lwz     r4, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B9438:
    ctx->pc = 0x7F2B9438u;
    // 7F2B9438: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B943C:
    ctx->pc = 0x7F2B943Cu;
    // 7F2B943C: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_7F2B9440:
    ctx->pc = 0x7F2B9440u;
    // 7F2B9440: bl      0x7F28FE10
    {
            ctx->lr = 0x7F2B9444u;
            ctx->pc = 0x7F28FE10u;
            return;
    }

label_7F2B9444:
    ctx->pc = 0x7F2B9444u;
    ctx->downcount -= 3;
    // 7F2B9444: lwz     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9448:
    ctx->pc = 0x7F2B9448u;
    // 7F2B9448: rlwinm. r0, r0, 0, 31, 31
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

label_7F2B944C:
    ctx->pc = 0x7F2B944Cu;
    // 7F2B944C: bc    4, 2, 0x7F2B9468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9468;
        }
    }

label_7F2B9450:
    ctx->pc = 0x7F2B9450u;
    ctx->downcount -= 3;
    // 7F2B9450: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F2B9454:
    ctx->pc = 0x7F2B9454u;
    // 7F2B9454: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9458:
    ctx->pc = 0x7F2B9458u;
    // 7F2B9458: bl      0x7F2900CC
    {
            ctx->lr = 0x7F2B945Cu;
            ctx->pc = 0x7F2900CCu;
            return;
    }

label_7F2B945C:
    ctx->pc = 0x7F2B945Cu;
    ctx->downcount -= 3;
    // 7F2B945C: lwz     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9460:
    ctx->pc = 0x7F2B9460u;
    // 7F2B9460: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F2B9464:
    ctx->pc = 0x7F2B9464u;
    // 7F2B9464: stw     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9468:
    ctx->pc = 0x7F2B9468u;
    ctx->downcount -= 3;
    // 7F2B9468: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2B946C:
    ctx->pc = 0x7F2B946Cu;
    // 7F2B946C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2B9470:
    ctx->pc = 0x7F2B9470u;
    // 7F2B9470: stw     r0, 19280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9474:
    ctx->pc = 0x7F2B9474u;
    ctx->downcount -= 7;
    // 7F2B9474: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2B9478:
    ctx->pc = 0x7F2B9478u;
    // 7F2B9478: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B947C:
    ctx->pc = 0x7F2B947Cu;
    // 7F2B947C: addi    r4, r4, -6672
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6672);

label_7F2B9480:
    ctx->pc = 0x7F2B9480u;
    // 7F2B9480: lwz     r0, -6668(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6668);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9484:
    ctx->pc = 0x7F2B9484u;
    // 7F2B9484: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B9488:
    ctx->pc = 0x7F2B9488u;
    // 7F2B9488: cmpw    r4, r0
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

label_7F2B948C:
    ctx->pc = 0x7F2B948Cu;
    // 7F2B948C: bc    12, 2, 0x7F2B94CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B94CC;
        }
    }

label_7F2B9490:
    ctx->pc = 0x7F2B9490u;
    ctx->downcount -= 2;
    // 7F2B9490: cmpwi   r4, 0
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

label_7F2B9494:
    ctx->pc = 0x7F2B9494u;
    // 7F2B9494: bc    12, 2, 0x7F2B94AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B94AC;
        }
    }

label_7F2B9498:
    ctx->pc = 0x7F2B9498u;
    ctx->downcount -= 5;
    // 7F2B9498: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B949C:
    ctx->pc = 0x7F2B949Cu;
    // 7F2B949C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B94A0:
    ctx->pc = 0x7F2B94A0u;
    // 7F2B94A0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2B94A4:
    ctx->pc = 0x7F2B94A4u;
    // 7F2B94A4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B94A8:
    ctx->pc = 0x7F2B94A8u;
    // 7F2B94A8: b       0x7F2B94BC
    {
            goto label_7F2B94BC;
    }

label_7F2B94AC:
    ctx->pc = 0x7F2B94ACu;
    ctx->downcount -= 4;
    // 7F2B94AC: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B94B0:
    ctx->pc = 0x7F2B94B0u;
    // 7F2B94B0: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B94B4:
    ctx->pc = 0x7F2B94B4u;
    // 7F2B94B4: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F2B94B8:
    ctx->pc = 0x7F2B94B8u;
    // 7F2B94B8: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B94BC:
    ctx->pc = 0x7F2B94BCu;
    ctx->downcount -= 4;
    // 7F2B94BC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2B94C0:
    ctx->pc = 0x7F2B94C0u;
    // 7F2B94C0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B94C4:
    ctx->pc = 0x7F2B94C4u;
    // 7F2B94C4: lwz     r0, -6672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B94C8:
    ctx->pc = 0x7F2B94C8u;
    // 7F2B94C8: stw     r0, -6668(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6668);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B94CC:
    ctx->pc = 0x7F2B94CCu;
    ctx->downcount -= 1;
    // 7F2B94CC: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F2B94D0u;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F2B94D0:
    ctx->pc = 0x7F2B94D0u;
    ctx->downcount -= 2;
    // 7F2B94D0: cmpwi   r3, 0
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

label_7F2B94D4:
    ctx->pc = 0x7F2B94D4u;
    // 7F2B94D4: bc    12, 2, 0x7F2B94E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B94E8;
        }
    }

label_7F2B94D8:
    ctx->pc = 0x7F2B94D8u;
    ctx->downcount -= 4;
    // 7F2B94D8: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B94DC:
    ctx->pc = 0x7F2B94DCu;
    // 7F2B94DC: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B94E0:
    ctx->pc = 0x7F2B94E0u;
    // 7F2B94E0: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F2B94E4:
    ctx->pc = 0x7F2B94E4u;
    // 7F2B94E4: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B94E8:
    ctx->pc = 0x7F2B94E8u;
    ctx->downcount -= 3;
    // 7F2B94E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B94EC:
    ctx->pc = 0x7F2B94ECu;
    // 7F2B94EC: lis     r3, 512
    ctx->gpr[3] = ((u32)(s32)(512) << 16);

label_7F2B94F0:
    ctx->pc = 0x7F2B94F0u;
    // 7F2B94F0: bl      0x7F29011C
    {
            ctx->lr = 0x7F2B94F4u;
            ctx->pc = 0x7F29011Cu;
            return;
    }

label_7F2B94F4:
    ctx->pc = 0x7F2B94F4u;
    ctx->downcount -= 5;
    // 7F2B94F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B94F8:
    ctx->pc = 0x7F2B94F8u;
    // 7F2B94F8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B94FC:
    ctx->pc = 0x7F2B94FCu;
    // 7F2B94FC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B9500:
    ctx->pc = 0x7F2B9500u;
    // 7F2B9500: or.   r0, r4, r0
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

label_7F2B9504:
    ctx->pc = 0x7F2B9504u;
    // 7F2B9504: bc    12, 2, 0x7F2B956C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B956C;
        }
    }

label_7F2B9508:
    ctx->pc = 0x7F2B9508u;
    ctx->downcount -= 4;
    // 7F2B9508: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B950C:
    ctx->pc = 0x7F2B950Cu;
    // 7F2B950C: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9510:
    ctx->pc = 0x7F2B9510u;
    // 7F2B9510: rlwinm. r0, r0, 0, 19, 19
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

label_7F2B9514:
    ctx->pc = 0x7F2B9514u;
    // 7F2B9514: bc    4, 2, 0x7F2B956C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B956C;
        }
    }

label_7F2B9518:
    ctx->pc = 0x7F2B9518u;
    ctx->downcount -= 3;
    // 7F2B9518: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B951C:
    ctx->pc = 0x7F2B951Cu;
    // 7F2B951C: lis     r3, 1024
    ctx->gpr[3] = ((u32)(s32)(1024) << 16);

label_7F2B9520:
    ctx->pc = 0x7F2B9520u;
    // 7F2B9520: bl      0x7F29007C
    {
            ctx->lr = 0x7F2B9524u;
            ctx->pc = 0x7F29007Cu;
            return;
    }

label_7F2B9524:
    ctx->pc = 0x7F2B9524u;
    ctx->downcount -= 7;
    // 7F2B9524: lwz     r3, 464(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9528:
    ctx->pc = 0x7F2B9528u;
    // 7F2B9528: lwz     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B952C:
    ctx->pc = 0x7F2B952Cu;
    // 7F2B952C: ori     r0, r0, 0x1000
    ctx->gpr[0] = ctx->gpr[0] | 0x1000u;

label_7F2B9530:
    ctx->pc = 0x7F2B9530u;
    // 7F2B9530: stw     r0, 80(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9534:
    ctx->pc = 0x7F2B9534u;
    // 7F2B9534: lwz     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9538:
    ctx->pc = 0x7F2B9538u;
    // 7F2B9538: rlwinm. r0, r0, 0, 31, 31
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

label_7F2B953C:
    ctx->pc = 0x7F2B953Cu;
    // 7F2B953C: bc    4, 2, 0x7F2B9558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9558;
        }
    }

label_7F2B9540:
    ctx->pc = 0x7F2B9540u;
    ctx->downcount -= 3;
    // 7F2B9540: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_7F2B9544:
    ctx->pc = 0x7F2B9544u;
    // 7F2B9544: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9548:
    ctx->pc = 0x7F2B9548u;
    // 7F2B9548: bl      0x7F2900CC
    {
            ctx->lr = 0x7F2B954Cu;
            ctx->pc = 0x7F2900CCu;
            return;
    }

label_7F2B954C:
    ctx->pc = 0x7F2B954Cu;
    ctx->downcount -= 3;
    // 7F2B954C: lwz     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9550:
    ctx->pc = 0x7F2B9550u;
    // 7F2B9550: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F2B9554:
    ctx->pc = 0x7F2B9554u;
    // 7F2B9554: stw     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9558:
    ctx->pc = 0x7F2B9558u;
    ctx->downcount -= 5;
    // 7F2B9558: lis     r4, 16384
    ctx->gpr[4] = ((u32)(s32)(16384) << 16);

label_7F2B955C:
    ctx->pc = 0x7F2B955Cu;
    // 7F2B955C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9560:
    ctx->pc = 0x7F2B9560u;
    // 7F2B9560: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2B9564:
    ctx->pc = 0x7F2B9564u;
    // 7F2B9564: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B9568:
    ctx->pc = 0x7F2B9568u;
    // 7F2B9568: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2B956Cu;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2B956C:
    ctx->pc = 0x7F2B956Cu;
    ctx->downcount -= 4;
    // 7F2B956C: lbz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F2B9570:
    ctx->pc = 0x7F2B9570u;
    // 7F2B9570: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_7F2B9574:
    ctx->pc = 0x7F2B9574u;
    // 7F2B9574: cmpwi   r0, 3
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

label_7F2B9578:
    ctx->pc = 0x7F2B9578u;
    // 7F2B9578: bc    4, 0, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B957C:
    ctx->pc = 0x7F2B957Cu;
    ctx->downcount -= 6;
    // 7F2B957C: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B9580:
    ctx->pc = 0x7F2B9580u;
    // 7F2B9580: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B9584:
    ctx->pc = 0x7F2B9584u;
    // 7F2B9584: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9588:
    ctx->pc = 0x7F2B9588u;
    // 7F2B9588: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B958C:
    ctx->pc = 0x7F2B958Cu;
    // 7F2B958C: cmpwi   r0, 2
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

label_7F2B9590:
    ctx->pc = 0x7F2B9590u;
    // 7F2B9590: bc    4, 2, 0x7F2B95F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B95F4;
        }
    }

label_7F2B9594:
    ctx->pc = 0x7F2B9594u;
    ctx->downcount -= 4;
    // 7F2B9594: lis     r4, 29
    ctx->gpr[4] = ((u32)(s32)(29) << 16);

label_7F2B9598:
    ctx->pc = 0x7F2B9598u;
    // 7F2B9598: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B959C:
    ctx->pc = 0x7F2B959Cu;
    // 7F2B959C: addi    r4, r4, 21178
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21178);

label_7F2B95A0:
    ctx->pc = 0x7F2B95A0u;
    // 7F2B95A0: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B95A4u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B95A4:
    ctx->pc = 0x7F2B95A4u;
    ctx->downcount -= 2;
    // 7F2B95A4: cmpwi   r3, 0
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

label_7F2B95A8:
    ctx->pc = 0x7F2B95A8u;
    // 7F2B95A8: bc    4, 2, 0x7F2B95F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B95F4;
        }
    }

label_7F2B95AC:
    ctx->pc = 0x7F2B95ACu;
    ctx->downcount -= 4;
    // 7F2B95AC: lis     r4, 209
    ctx->gpr[4] = ((u32)(s32)(209) << 16);

label_7F2B95B0:
    ctx->pc = 0x7F2B95B0u;
    // 7F2B95B0: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B95B4:
    ctx->pc = 0x7F2B95B4u;
    // 7F2B95B4: addi    r4, r4, -29914
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29914);

label_7F2B95B8:
    ctx->pc = 0x7F2B95B8u;
    // 7F2B95B8: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B95BCu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B95BC:
    ctx->pc = 0x7F2B95BCu;
    ctx->downcount -= 2;
    // 7F2B95BC: cmpwi   r3, 0
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

label_7F2B95C0:
    ctx->pc = 0x7F2B95C0u;
    // 7F2B95C0: bc    4, 2, 0x7F2B95F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B95F4;
        }
    }

label_7F2B95C4:
    ctx->pc = 0x7F2B95C4u;
    ctx->downcount -= 4;
    // 7F2B95C4: lis     r4, 172
    ctx->gpr[4] = ((u32)(s32)(172) << 16);

label_7F2B95C8:
    ctx->pc = 0x7F2B95C8u;
    // 7F2B95C8: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B95CC:
    ctx->pc = 0x7F2B95CCu;
    // 7F2B95CC: addi    r4, r4, 29222
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(29222);

label_7F2B95D0:
    ctx->pc = 0x7F2B95D0u;
    // 7F2B95D0: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B95D4u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B95D4:
    ctx->pc = 0x7F2B95D4u;
    ctx->downcount -= 2;
    // 7F2B95D4: cmpwi   r3, 0
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

label_7F2B95D8:
    ctx->pc = 0x7F2B95D8u;
    // 7F2B95D8: bc    4, 2, 0x7F2B95F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B95F4;
        }
    }

label_7F2B95DC:
    ctx->pc = 0x7F2B95DCu;
    ctx->downcount -= 4;
    // 7F2B95DC: lis     r4, 250
    ctx->gpr[4] = ((u32)(s32)(250) << 16);

label_7F2B95E0:
    ctx->pc = 0x7F2B95E0u;
    // 7F2B95E0: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B95E4:
    ctx->pc = 0x7F2B95E4u;
    // 7F2B95E4: addi    r4, r4, -21414
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21414);

label_7F2B95E8:
    ctx->pc = 0x7F2B95E8u;
    // 7F2B95E8: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B95ECu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B95EC:
    ctx->pc = 0x7F2B95ECu;
    ctx->downcount -= 2;
    // 7F2B95EC: cmpwi   r3, 0
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

label_7F2B95F0:
    ctx->pc = 0x7F2B95F0u;
    // 7F2B95F0: bc    12, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B95F4:
    ctx->pc = 0x7F2B95F4u;
    ctx->downcount -= 6;
    // 7F2B95F4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B95F8:
    ctx->pc = 0x7F2B95F8u;
    // 7F2B95F8: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B95FC:
    ctx->pc = 0x7F2B95FCu;
    // 7F2B95FC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9600:
    ctx->pc = 0x7F2B9600u;
    // 7F2B9600: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B9604:
    ctx->pc = 0x7F2B9604u;
    // 7F2B9604: cmpwi   r0, 10
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

label_7F2B9608:
    ctx->pc = 0x7F2B9608u;
    // 7F2B9608: bc    12, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B960C:
    ctx->pc = 0x7F2B960Cu;
    ctx->downcount -= 2;
    // 7F2B960C: cmpwi   r0, 11
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

label_7F2B9610:
    ctx->pc = 0x7F2B9610u;
    // 7F2B9610: bc    12, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B9614:
    ctx->pc = 0x7F2B9614u;
    ctx->downcount -= 2;
    // 7F2B9614: cmpwi   r0, 19
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(19);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B9618:
    ctx->pc = 0x7F2B9618u;
    // 7F2B9618: bc    4, 2, 0x7F2B9634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9634;
        }
    }

label_7F2B961C:
    ctx->pc = 0x7F2B961Cu;
    ctx->downcount -= 4;
    // 7F2B961C: lis     r4, 43
    ctx->gpr[4] = ((u32)(s32)(43) << 16);

label_7F2B9620:
    ctx->pc = 0x7F2B9620u;
    // 7F2B9620: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B9624:
    ctx->pc = 0x7F2B9624u;
    // 7F2B9624: addi    r4, r4, -15714
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15714);

label_7F2B9628:
    ctx->pc = 0x7F2B9628u;
    // 7F2B9628: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B962Cu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B962C:
    ctx->pc = 0x7F2B962Cu;
    ctx->downcount -= 2;
    // 7F2B962C: cmpwi   r3, 0
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

label_7F2B9630:
    ctx->pc = 0x7F2B9630u;
    // 7F2B9630: bc    4, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B9634:
    ctx->pc = 0x7F2B9634u;
    ctx->downcount -= 6;
    // 7F2B9634: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B9638:
    ctx->pc = 0x7F2B9638u;
    // 7F2B9638: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B963C:
    ctx->pc = 0x7F2B963Cu;
    // 7F2B963C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9640:
    ctx->pc = 0x7F2B9640u;
    // 7F2B9640: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B9644:
    ctx->pc = 0x7F2B9644u;
    // 7F2B9644: cmpwi   r0, 23
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(23);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B9648:
    ctx->pc = 0x7F2B9648u;
    // 7F2B9648: bc    4, 2, 0x7F2B9664
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9664;
        }
    }

label_7F2B964C:
    ctx->pc = 0x7F2B964Cu;
    ctx->downcount -= 4;
    // 7F2B964C: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F2B9650:
    ctx->pc = 0x7F2B9650u;
    // 7F2B9650: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B9654:
    ctx->pc = 0x7F2B9654u;
    // 7F2B9654: addi    r4, r4, 26148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26148);

label_7F2B9658:
    ctx->pc = 0x7F2B9658u;
    // 7F2B9658: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B965Cu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B965C:
    ctx->pc = 0x7F2B965Cu;
    ctx->downcount -= 2;
    // 7F2B965C: cmpwi   r3, 0
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

label_7F2B9660:
    ctx->pc = 0x7F2B9660u;
    // 7F2B9660: bc    12, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B9664:
    ctx->pc = 0x7F2B9664u;
    ctx->downcount -= 6;
    // 7F2B9664: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B9668:
    ctx->pc = 0x7F2B9668u;
    // 7F2B9668: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B966C:
    ctx->pc = 0x7F2B966Cu;
    // 7F2B966C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9670:
    ctx->pc = 0x7F2B9670u;
    // 7F2B9670: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B9674:
    ctx->pc = 0x7F2B9674u;
    // 7F2B9674: cmpwi   r0, 24
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(24);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B9678:
    ctx->pc = 0x7F2B9678u;
    // 7F2B9678: bc    4, 2, 0x7F2B9694
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9694;
        }
    }

label_7F2B967C:
    ctx->pc = 0x7F2B967Cu;
    ctx->downcount -= 4;
    // 7F2B967C: lis     r4, 53
    ctx->gpr[4] = ((u32)(s32)(53) << 16);

label_7F2B9680:
    ctx->pc = 0x7F2B9680u;
    // 7F2B9680: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B9684:
    ctx->pc = 0x7F2B9684u;
    // 7F2B9684: addi    r4, r4, 26148
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26148);

label_7F2B9688:
    ctx->pc = 0x7F2B9688u;
    // 7F2B9688: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B968Cu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B968C:
    ctx->pc = 0x7F2B968Cu;
    ctx->downcount -= 2;
    // 7F2B968C: cmpwi   r3, 0
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

label_7F2B9690:
    ctx->pc = 0x7F2B9690u;
    // 7F2B9690: bc    12, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B9694:
    ctx->pc = 0x7F2B9694u;
    ctx->downcount -= 6;
    // 7F2B9694: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B9698:
    ctx->pc = 0x7F2B9698u;
    // 7F2B9698: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B969C:
    ctx->pc = 0x7F2B969Cu;
    // 7F2B969C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B96A0:
    ctx->pc = 0x7F2B96A0u;
    // 7F2B96A0: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B96A4:
    ctx->pc = 0x7F2B96A4u;
    // 7F2B96A4: cmpwi   r0, 25
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(25);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B96A8:
    ctx->pc = 0x7F2B96A8u;
    // 7F2B96A8: bc    12, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B96AC:
    ctx->pc = 0x7F2B96ACu;
    ctx->downcount -= 2;
    // 7F2B96AC: cmpwi   r0, 26
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(26);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B96B0:
    ctx->pc = 0x7F2B96B0u;
    // 7F2B96B0: bc    4, 2, 0x7F2B96CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B96CC;
        }
    }

label_7F2B96B4:
    ctx->pc = 0x7F2B96B4u;
    ctx->downcount -= 4;
    // 7F2B96B4: lis     r4, 33
    ctx->gpr[4] = ((u32)(s32)(33) << 16);

label_7F2B96B8:
    ctx->pc = 0x7F2B96B8u;
    // 7F2B96B8: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B96BC:
    ctx->pc = 0x7F2B96BCu;
    // 7F2B96BC: addi    r4, r4, 32380
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32380);

label_7F2B96C0:
    ctx->pc = 0x7F2B96C0u;
    // 7F2B96C0: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B96C4u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B96C4:
    ctx->pc = 0x7F2B96C4u;
    ctx->downcount -= 2;
    // 7F2B96C4: cmpwi   r3, 0
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

label_7F2B96C8:
    ctx->pc = 0x7F2B96C8u;
    // 7F2B96C8: bc    12, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B96CC:
    ctx->pc = 0x7F2B96CCu;
    ctx->downcount -= 6;
    // 7F2B96CC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B96D0:
    ctx->pc = 0x7F2B96D0u;
    // 7F2B96D0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B96D4:
    ctx->pc = 0x7F2B96D4u;
    // 7F2B96D4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B96D8:
    ctx->pc = 0x7F2B96D8u;
    // 7F2B96D8: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B96DC:
    ctx->pc = 0x7F2B96DCu;
    // 7F2B96DC: cmpwi   r0, 29
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(29);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B96E0:
    ctx->pc = 0x7F2B96E0u;
    // 7F2B96E0: bc    4, 2, 0x7F2B96FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B96FC;
        }
    }

label_7F2B96E4:
    ctx->pc = 0x7F2B96E4u;
    ctx->downcount -= 4;
    // 7F2B96E4: lis     r4, 27
    ctx->gpr[4] = ((u32)(s32)(27) << 16);

label_7F2B96E8:
    ctx->pc = 0x7F2B96E8u;
    // 7F2B96E8: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B96EC:
    ctx->pc = 0x7F2B96ECu;
    // 7F2B96EC: addi    r4, r4, 18060
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(18060);

label_7F2B96F0:
    ctx->pc = 0x7F2B96F0u;
    // 7F2B96F0: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B96F4u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B96F4:
    ctx->pc = 0x7F2B96F4u;
    ctx->downcount -= 2;
    // 7F2B96F4: cmpwi   r3, 0
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

label_7F2B96F8:
    ctx->pc = 0x7F2B96F8u;
    // 7F2B96F8: bc    12, 2, 0x7F2B97D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B97D4;
        }
    }

label_7F2B96FC:
    ctx->pc = 0x7F2B96FCu;
    ctx->downcount -= 6;
    // 7F2B96FC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B9700:
    ctx->pc = 0x7F2B9700u;
    // 7F2B9700: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B9704:
    ctx->pc = 0x7F2B9704u;
    // 7F2B9704: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9708:
    ctx->pc = 0x7F2B9708u;
    // 7F2B9708: lha     r0, 5552(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5552);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B970C:
    ctx->pc = 0x7F2B970Cu;
    // 7F2B970C: cmpwi   r0, 30
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

label_7F2B9710:
    ctx->pc = 0x7F2B9710u;
    // 7F2B9710: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B9714:
    ctx->pc = 0x7F2B9714u;
    ctx->downcount -= 4;
    // 7F2B9714: lis     r4, 148
    ctx->gpr[4] = ((u32)(s32)(148) << 16);

label_7F2B9718:
    ctx->pc = 0x7F2B9718u;
    // 7F2B9718: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B971C:
    ctx->pc = 0x7F2B971Cu;
    // 7F2B971C: addi    r4, r4, -15730
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15730);

label_7F2B9720:
    ctx->pc = 0x7F2B9720u;
    // 7F2B9720: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B9724u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B9724:
    ctx->pc = 0x7F2B9724u;
    ctx->downcount -= 2;
    // 7F2B9724: cmpwi   r3, 0
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

label_7F2B9728:
    ctx->pc = 0x7F2B9728u;
    // 7F2B9728: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B972C:
    ctx->pc = 0x7F2B972Cu;
    ctx->downcount -= 4;
    // 7F2B972C: lis     r4, 148
    ctx->gpr[4] = ((u32)(s32)(148) << 16);

label_7F2B9730:
    ctx->pc = 0x7F2B9730u;
    // 7F2B9730: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B9734:
    ctx->pc = 0x7F2B9734u;
    // 7F2B9734: addi    r4, r4, -15729
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15729);

label_7F2B9738:
    ctx->pc = 0x7F2B9738u;
    // 7F2B9738: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B973Cu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B973C:
    ctx->pc = 0x7F2B973Cu;
    ctx->downcount -= 2;
    // 7F2B973C: cmpwi   r3, 0
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

label_7F2B9740:
    ctx->pc = 0x7F2B9740u;
    // 7F2B9740: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B9744:
    ctx->pc = 0x7F2B9744u;
    ctx->downcount -= 4;
    // 7F2B9744: lis     r4, 146
    ctx->gpr[4] = ((u32)(s32)(146) << 16);

label_7F2B9748:
    ctx->pc = 0x7F2B9748u;
    // 7F2B9748: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B974C:
    ctx->pc = 0x7F2B974Cu;
    // 7F2B974C: addi    r4, r4, 22956
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22956);

label_7F2B9750:
    ctx->pc = 0x7F2B9750u;
    // 7F2B9750: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B9754u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B9754:
    ctx->pc = 0x7F2B9754u;
    ctx->downcount -= 2;
    // 7F2B9754: cmpwi   r3, 0
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

label_7F2B9758:
    ctx->pc = 0x7F2B9758u;
    // 7F2B9758: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B975C:
    ctx->pc = 0x7F2B975Cu;
    ctx->downcount -= 4;
    // 7F2B975C: lis     r4, 146
    ctx->gpr[4] = ((u32)(s32)(146) << 16);

label_7F2B9760:
    ctx->pc = 0x7F2B9760u;
    // 7F2B9760: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B9764:
    ctx->pc = 0x7F2B9764u;
    // 7F2B9764: addi    r4, r4, 22957
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22957);

label_7F2B9768:
    ctx->pc = 0x7F2B9768u;
    // 7F2B9768: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B976Cu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B976C:
    ctx->pc = 0x7F2B976Cu;
    ctx->downcount -= 2;
    // 7F2B976C: cmpwi   r3, 0
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

label_7F2B9770:
    ctx->pc = 0x7F2B9770u;
    // 7F2B9770: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B9774:
    ctx->pc = 0x7F2B9774u;
    ctx->downcount -= 4;
    // 7F2B9774: lis     r4, 146
    ctx->gpr[4] = ((u32)(s32)(146) << 16);

label_7F2B9778:
    ctx->pc = 0x7F2B9778u;
    // 7F2B9778: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B977C:
    ctx->pc = 0x7F2B977Cu;
    // 7F2B977C: addi    r4, r4, 22958
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22958);

label_7F2B9780:
    ctx->pc = 0x7F2B9780u;
    // 7F2B9780: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B9784u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B9784:
    ctx->pc = 0x7F2B9784u;
    ctx->downcount -= 2;
    // 7F2B9784: cmpwi   r3, 0
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

label_7F2B9788:
    ctx->pc = 0x7F2B9788u;
    // 7F2B9788: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B978C:
    ctx->pc = 0x7F2B978Cu;
    ctx->downcount -= 4;
    // 7F2B978C: lis     r4, 130
    ctx->gpr[4] = ((u32)(s32)(130) << 16);

label_7F2B9790:
    ctx->pc = 0x7F2B9790u;
    // 7F2B9790: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B9794:
    ctx->pc = 0x7F2B9794u;
    // 7F2B9794: addi    r4, r4, -23922
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23922);

label_7F2B9798:
    ctx->pc = 0x7F2B9798u;
    // 7F2B9798: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B979Cu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B979C:
    ctx->pc = 0x7F2B979Cu;
    ctx->downcount -= 2;
    // 7F2B979C: cmpwi   r3, 0
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

label_7F2B97A0:
    ctx->pc = 0x7F2B97A0u;
    // 7F2B97A0: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B97A4:
    ctx->pc = 0x7F2B97A4u;
    ctx->downcount -= 4;
    // 7F2B97A4: lis     r4, 130
    ctx->gpr[4] = ((u32)(s32)(130) << 16);

label_7F2B97A8:
    ctx->pc = 0x7F2B97A8u;
    // 7F2B97A8: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B97AC:
    ctx->pc = 0x7F2B97ACu;
    // 7F2B97AC: addi    r4, r4, -23921
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23921);

label_7F2B97B0:
    ctx->pc = 0x7F2B97B0u;
    // 7F2B97B0: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B97B4u;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B97B4:
    ctx->pc = 0x7F2B97B4u;
    ctx->downcount -= 2;
    // 7F2B97B4: cmpwi   r3, 0
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

label_7F2B97B8:
    ctx->pc = 0x7F2B97B8u;
    // 7F2B97B8: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B97BC:
    ctx->pc = 0x7F2B97BCu;
    ctx->downcount -= 4;
    // 7F2B97BC: lis     r4, 63
    ctx->gpr[4] = ((u32)(s32)(63) << 16);

label_7F2B97C0:
    ctx->pc = 0x7F2B97C0u;
    // 7F2B97C0: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B97C4:
    ctx->pc = 0x7F2B97C4u;
    // 7F2B97C4: addi    r4, r4, -5127
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5127);

label_7F2B97C8:
    ctx->pc = 0x7F2B97C8u;
    // 7F2B97C8: bl      0x7F03C214
    {
            ctx->lr = 0x7F2B97CCu;
            ctx->pc = 0x7F03C214u;
            return;
    }

label_7F2B97CC:
    ctx->pc = 0x7F2B97CCu;
    ctx->downcount -= 2;
    // 7F2B97CC: cmpwi   r3, 0
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

label_7F2B97D0:
    ctx->pc = 0x7F2B97D0u;
    // 7F2B97D0: bc    4, 2, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B97D4:
    ctx->pc = 0x7F2B97D4u;
    ctx->downcount -= 6;
    // 7F2B97D4: lha     r3, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B97D8:
    ctx->pc = 0x7F2B97D8u;
    // 7F2B97D8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2B97DC:
    ctx->pc = 0x7F2B97DCu;
    // 7F2B97DC: sth     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B97E0:
    ctx->pc = 0x7F2B97E0u;
    // 7F2B97E0: lha     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B97E4:
    ctx->pc = 0x7F2B97E4u;
    // 7F2B97E4: cmpwi   r0, 600
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

label_7F2B97E8:
    ctx->pc = 0x7F2B97E8u;
    // 7F2B97E8: bc    12, 0, 0x7F2B9800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9800;
        }
    }

label_7F2B97EC:
    ctx->pc = 0x7F2B97ECu;
    ctx->downcount -= 5;
    // 7F2B97EC: lbz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F2B97F0:
    ctx->pc = 0x7F2B97F0u;
    // 7F2B97F0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B97F4:
    ctx->pc = 0x7F2B97F4u;
    // 7F2B97F4: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F2B97F8:
    ctx->pc = 0x7F2B97F8u;
    // 7F2B97F8: stb     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2B97FC:
    ctx->pc = 0x7F2B97FCu;
    // 7F2B97FC: sth     r0, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B9800:
    ctx->pc = 0x7F2B9800u;
    ctx->downcount -= 5;
    // 7F2B9800: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B9804:
    ctx->pc = 0x7F2B9804u;
    // 7F2B9804: addi    r4, r3, -6236
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6236);

label_7F2B9808:
    ctx->pc = 0x7F2B9808u;
    // 7F2B9808: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B980C:
    ctx->pc = 0x7F2B980Cu;
    // 7F2B980C: cmpwi   r3, 0
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

label_7F2B9810:
    ctx->pc = 0x7F2B9810u;
    // 7F2B9810: bc    4, 1, 0x7F2B981C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B981C;
        }
    }

label_7F2B9814:
    ctx->pc = 0x7F2B9814u;
    ctx->downcount -= 2;
    // 7F2B9814: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_7F2B9818:
    ctx->pc = 0x7F2B9818u;
    // 7F2B9818: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B981C:
    ctx->pc = 0x7F2B981Cu;
    ctx->downcount -= 18;
    // 7F2B981C: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2B981Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2B981Cu);
        if (ctx->exception) return;
    }

label_7F2B9820:
    ctx->pc = 0x7F2B9820u;
    // 7F2B9820: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B9820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2B9824:
    ctx->pc = 0x7F2B9824u;
    // 7F2B9824: lmw     r28, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2B9828:
    ctx->pc = 0x7F2B9828u;
    // 7F2B9828: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B982C:
    ctx->pc = 0x7F2B982Cu;
    // 7F2B982C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2B9830:
    ctx->pc = 0x7F2B9830u;
    // 7F2B9830: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_7F2B9834:
    ctx->pc = 0x7F2B9834u;
    // 7F2B9834: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2B9838:
    ctx->pc = 0x7F2B9838u;
    ctx->downcount -= 8;
    // 7F2B9838: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2B983C:
    ctx->pc = 0x7F2B983Cu;
    // 7F2B983C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2B9840:
    ctx->pc = 0x7F2B9840u;
    // 7F2B9840: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2B9844:
    ctx->pc = 0x7F2B9844u;
    // 7F2B9844: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9848:
    ctx->pc = 0x7F2B9848u;
    // 7F2B9848: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2B984C:
    ctx->pc = 0x7F2B984Cu;
    // 7F2B984C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9850:
    ctx->pc = 0x7F2B9850u;
    // 7F2B9850: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9854:
    ctx->pc = 0x7F2B9854u;
    // 7F2B9854: bl      0x7F290054
    {
            ctx->lr = 0x7F2B9858u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B9858:
    ctx->pc = 0x7F2B9858u;
    ctx->downcount -= 5;
    // 7F2B9858: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B985C:
    ctx->pc = 0x7F2B985Cu;
    // 7F2B985C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B9860:
    ctx->pc = 0x7F2B9860u;
    // 7F2B9860: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B9864:
    ctx->pc = 0x7F2B9864u;
    // 7F2B9864: or.   r0, r4, r0
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

label_7F2B9868:
    ctx->pc = 0x7F2B9868u;
    // 7F2B9868: bc    12, 2, 0x7F2B9874
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9874;
        }
    }

label_7F2B986C:
    ctx->pc = 0x7F2B986Cu;
    ctx->downcount -= 2;
    // 7F2B986C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2B9870:
    ctx->pc = 0x7F2B9870u;
    // 7F2B9870: b       0x7F2B9878
    {
            goto label_7F2B9878;
    }

label_7F2B9874:
    ctx->pc = 0x7F2B9874u;
    ctx->downcount -= 1;
    // 7F2B9874: lha     r0, 3904(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3904);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B9878:
    ctx->pc = 0x7F2B9878u;
    ctx->downcount -= 7;
    // 7F2B9878: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B987C:
    ctx->pc = 0x7F2B987Cu;
    // 7F2B987C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B9880:
    ctx->pc = 0x7F2B9880u;
    // 7F2B9880: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9884:
    ctx->pc = 0x7F2B9884u;
    // 7F2B9884: sth     r0, 294(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B9888:
    ctx->pc = 0x7F2B9888u;
    // 7F2B9888: lwz     r3, 2488(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2488);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B988C:
    ctx->pc = 0x7F2B988Cu;
    // 7F2B988C: cmplwi  r3, 0x0000
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

label_7F2B9890:
    ctx->pc = 0x7F2B9890u;
    // 7F2B9890: bc    12, 2, 0x7F2B9898
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9898;
        }
    }

label_7F2B9894:
    ctx->pc = 0x7F2B9894u;
    ctx->downcount -= 1;
    // 7F2B9894: bl      0x7F3C82E8
    {
            ctx->lr = 0x7F2B9898u;
            ctx->pc = 0x7F3C82E8u;
            return;
    }

label_7F2B9898:
    ctx->pc = 0x7F2B9898u;
    ctx->downcount -= 3;
    // 7F2B9898: lwz     r3, 2512(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2512);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B989C:
    ctx->pc = 0x7F2B989Cu;
    // 7F2B989C: cmplwi  r3, 0x0000
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

label_7F2B98A0:
    ctx->pc = 0x7F2B98A0u;
    // 7F2B98A0: bc    12, 2, 0x7F2B98A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B98A8;
        }
    }

label_7F2B98A4:
    ctx->pc = 0x7F2B98A4u;
    ctx->downcount -= 1;
    // 7F2B98A4: bl      0x7F3C82E8
    {
            ctx->lr = 0x7F2B98A8u;
            ctx->pc = 0x7F3C82E8u;
            return;
    }

label_7F2B98A8:
    ctx->pc = 0x7F2B98A8u;
    ctx->downcount -= 3;
    // 7F2B98A8: lwz     r3, 3948(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3948);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B98AC:
    ctx->pc = 0x7F2B98ACu;
    // 7F2B98AC: cmplwi  r3, 0x0000
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

label_7F2B98B0:
    ctx->pc = 0x7F2B98B0u;
    // 7F2B98B0: bc    12, 2, 0x7F2B98B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B98B8;
        }
    }

label_7F2B98B4:
    ctx->pc = 0x7F2B98B4u;
    ctx->downcount -= 1;
    // 7F2B98B4: bl      0x7F0F9D40
    {
            ctx->lr = 0x7F2B98B8u;
            ctx->pc = 0x7F0F9D40u;
            return;
    }

label_7F2B98B8:
    ctx->pc = 0x7F2B98B8u;
    ctx->downcount -= 3;
    // 7F2B98B8: lwz     r3, 3976(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3976);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B98BC:
    ctx->pc = 0x7F2B98BCu;
    // 7F2B98BC: cmplwi  r3, 0x0000
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

label_7F2B98C0:
    ctx->pc = 0x7F2B98C0u;
    // 7F2B98C0: bc    12, 2, 0x7F2B98C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B98C8;
        }
    }

label_7F2B98C4:
    ctx->pc = 0x7F2B98C4u;
    ctx->downcount -= 1;
    // 7F2B98C4: bl      0x7F3C82B4
    {
            ctx->lr = 0x7F2B98C8u;
            ctx->pc = 0x7F3C82B4u;
            return;
    }

label_7F2B98C8:
    ctx->pc = 0x7F2B98C8u;
    ctx->downcount -= 2;
    // 7F2B98C8: addi    r3, r31, 672
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(672);

label_7F2B98CC:
    ctx->pc = 0x7F2B98CCu;
    // 7F2B98CC: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F2B98D0u;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F2B98D0:
    ctx->pc = 0x7F2B98D0u;
    ctx->downcount -= 2;
    // 7F2B98D0: addi    r3, r31, 784
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(784);

label_7F2B98D4:
    ctx->pc = 0x7F2B98D4u;
    // 7F2B98D4: bl      0x7F27E1C0
    {
            ctx->lr = 0x7F2B98D8u;
            ctx->pc = 0x7F27E1C0u;
            return;
    }

label_7F2B98D8:
    ctx->pc = 0x7F2B98D8u;
    ctx->downcount -= 2;
    // 7F2B98D8: addi    r3, r31, 636
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(636);

label_7F2B98DC:
    ctx->pc = 0x7F2B98DCu;
    // 7F2B98DC: bl      0x7F012144
    {
            ctx->lr = 0x7F2B98E0u;
            ctx->pc = 0x7F012144u;
            return;
    }

label_7F2B98E0:
    ctx->pc = 0x7F2B98E0u;
    ctx->downcount -= 2;
    // 7F2B98E0: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2B98E4:
    ctx->pc = 0x7F2B98E4u;
    // 7F2B98E4: bl      0x7F023E10
    {
            ctx->lr = 0x7F2B98E8u;
            ctx->pc = 0x7F023E10u;
            return;
    }

label_7F2B98E8:
    ctx->pc = 0x7F2B98E8u;
    ctx->downcount -= 2;
    // 7F2B98E8: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F2B98EC:
    ctx->pc = 0x7F2B98ECu;
    // 7F2B98EC: bl      0x7F042AAC
    {
            ctx->lr = 0x7F2B98F0u;
            ctx->pc = 0x7F042AACu;
            return;
    }

label_7F2B98F0:
    ctx->pc = 0x7F2B98F0u;
    ctx->downcount -= 2;
    // 7F2B98F0: addi    r3, r31, 1712
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(1712);

label_7F2B98F4:
    ctx->pc = 0x7F2B98F4u;
    // 7F2B98F4: bl      0x7F0146B0
    {
            ctx->lr = 0x7F2B98F8u;
            ctx->pc = 0x7F0146B0u;
            return;
    }

label_7F2B98F8:
    ctx->pc = 0x7F2B98F8u;
    ctx->downcount -= 2;
    // 7F2B98F8: lwz     r3, 2792(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2792);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B98FC:
    ctx->pc = 0x7F2B98FCu;
    // 7F2B98FC: bl      0x7F0259FC
    {
            ctx->lr = 0x7F2B9900u;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F2B9900:
    ctx->pc = 0x7F2B9900u;
    ctx->downcount -= 2;
    // 7F2B9900: lwz     r3, 2796(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2796);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9904:
    ctx->pc = 0x7F2B9904u;
    // 7F2B9904: bl      0x7F0259FC
    {
            ctx->lr = 0x7F2B9908u;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F2B9908:
    ctx->pc = 0x7F2B9908u;
    ctx->downcount -= 2;
    // 7F2B9908: lwz     r3, 2800(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2800);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B990C:
    ctx->pc = 0x7F2B990Cu;
    // 7F2B990C: bl      0x7F0259FC
    {
            ctx->lr = 0x7F2B9910u;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F2B9910:
    ctx->pc = 0x7F2B9910u;
    ctx->downcount -= 23;
    // 7F2B9910: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2B9914:
    ctx->pc = 0x7F2B9914u;
    // 7F2B9914: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B9918:
    ctx->pc = 0x7F2B9918u;
    // 7F2B9918: addi    r9, r4, -5664
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(-5664);

label_7F2B991C:
    ctx->pc = 0x7F2B991Cu;
    // 7F2B991C: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2B9920:
    ctx->pc = 0x7F2B9920u;
    // 7F2B9920: addi    r8, r3, -5692
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-5692);

label_7F2B9924:
    ctx->pc = 0x7F2B9924u;
    // 7F2B9924: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F2B9928:
    ctx->pc = 0x7F2B9928u;
    // 7F2B9928: stw     r10, 22156(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22156);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B992C:
    ctx->pc = 0x7F2B992Cu;
    // 7F2B992C: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2B9930:
    ctx->pc = 0x7F2B9930u;
    // 7F2B9930: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2B9934:
    ctx->pc = 0x7F2B9934u;
    // 7F2B9934: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2B9938:
    ctx->pc = 0x7F2B9938u;
    // 7F2B9938: stw     r10, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B993C:
    ctx->pc = 0x7F2B993Cu;
    // 7F2B993C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2B9940:
    ctx->pc = 0x7F2B9940u;
    // 7F2B9940: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B9944:
    ctx->pc = 0x7F2B9944u;
    // 7F2B9944: addi    r7, r7, -5768
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-5768);

label_7F2B9948:
    ctx->pc = 0x7F2B9948u;
    // 7F2B9948: stw     r10, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B994C:
    ctx->pc = 0x7F2B994Cu;
    // 7F2B994C: lwz     r0, 3980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9950:
    ctx->pc = 0x7F2B9950u;
    // 7F2B9950: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2B9954:
    ctx->pc = 0x7F2B9954u;
    // 7F2B9954: stw     r10, -5672(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B9958:
    ctx->pc = 0x7F2B9958u;
    // 7F2B9958: stwx    r10, r7, r0
    {
        u32 ea = ctx->gpr[7] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B995C:
    ctx->pc = 0x7F2B995Cu;
    // 7F2B995C: stw     r10, -5676(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5676);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B9960:
    ctx->pc = 0x7F2B9960u;
    // 7F2B9960: stw     r10, -5660(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5660);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B9964:
    ctx->pc = 0x7F2B9964u;
    // 7F2B9964: stw     r10, -6232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6232);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2B9968:
    ctx->pc = 0x7F2B9968u;
    // 7F2B9968: bl      0x7F2BBA44
    {
            ctx->lr = 0x7F2B996Cu;
            goto label_7F2BBA44;
    }

label_7F2B996C:
    ctx->pc = 0x7F2B996Cu;
    ctx->downcount -= 6;
    // 7F2B996C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9970:
    ctx->pc = 0x7F2B9970u;
    // 7F2B9970: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2B9974:
    ctx->pc = 0x7F2B9974u;
    // 7F2B9974: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2B9978:
    ctx->pc = 0x7F2B9978u;
    // 7F2B9978: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2B997C:
    ctx->pc = 0x7F2B997Cu;
    // 7F2B997C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2B9980:
    ctx->pc = 0x7F2B9980u;
    ctx->downcount -= 23;
    // 7F2B9980: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2B9984:
    ctx->pc = 0x7F2B9984u;
    // 7F2B9984: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2B9988:
    ctx->pc = 0x7F2B9988u;
    // 7F2B9988: lis     r5, 155
    ctx->gpr[5] = ((u32)(s32)(155) << 16);

label_7F2B998C:
    ctx->pc = 0x7F2B998Cu;
    // 7F2B998C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2B9990:
    ctx->pc = 0x7F2B9990u;
    // 7F2B9990: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9994:
    ctx->pc = 0x7F2B9994u;
    // 7F2B9994: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2B9998:
    ctx->pc = 0x7F2B9998u;
    // 7F2B9998: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B999C:
    ctx->pc = 0x7F2B999Cu;
    // 7F2B999C: addi    r31, r29, 64
    ctx->gpr[31] = ctx->gpr[29] + (u32)(s32)(64);

label_7F2B99A0:
    ctx->pc = 0x7F2B99A0u;
    // 7F2B99A0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2B99A4:
    ctx->pc = 0x7F2B99A4u;
    // 7F2B99A4: addi    r4, r5, 5415
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(5415);

label_7F2B99A8:
    ctx->pc = 0x7F2B99A8u;
    // 7F2B99A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B99AC:
    ctx->pc = 0x7F2B99ACu;
    // 7F2B99AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B99B0:
    ctx->pc = 0x7F2B99B0u;
    // 7F2B99B0: bl      0x7F022FB4
    {
            ctx->lr = 0x7F2B99B4u;
            ctx->pc = 0x7F022FB4u;
            return;
    }

label_7F2B99B4:
    ctx->pc = 0x7F2B99B4u;
    ctx->downcount -= 2;
    // 7F2B99B4: cmpwi   r3, 0
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

label_7F2B99B8:
    ctx->pc = 0x7F2B99B8u;
    // 7F2B99B8: bc    4, 0, 0x7F2B99C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B99C4;
        }
    }

label_7F2B99BC:
    ctx->pc = 0x7F2B99BCu;
    ctx->downcount -= 2;
    // 7F2B99BC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2B99C0:
    ctx->pc = 0x7F2B99C0u;
    // 7F2B99C0: b       0x7F2B9BC0
    {
            goto label_7F2B9BC0;
    }

label_7F2B99C4:
    ctx->pc = 0x7F2B99C4u;
    ctx->downcount -= 42;
    // 7F2B99C4: addi    r0, r29, 1248
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(1248);

label_7F2B99C8:
    ctx->pc = 0x7F2B99C8u;
    // 7F2B99C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B99CC:
    ctx->pc = 0x7F2B99CCu;
    // 7F2B99CC: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B99D0:
    ctx->pc = 0x7F2B99D0u;
    // 7F2B99D0: addi    r6, r3, 26272
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(26272);

label_7F2B99D4:
    ctx->pc = 0x7F2B99D4u;
    // 7F2B99D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2B99D8:
    ctx->pc = 0x7F2B99D8u;
    // 7F2B99D8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2B99DC:
    ctx->pc = 0x7F2B99DCu;
    // 7F2B99DC: stw     r30, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2B99E0:
    ctx->pc = 0x7F2B99E0u;
    // 7F2B99E0: addi    r5, r3, 27336
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(27336);

label_7F2B99E4:
    ctx->pc = 0x7F2B99E4u;
    // 7F2B99E4: lfs     f1, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F2B99E4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2B99E8:
    ctx->pc = 0x7F2B99E8u;
    // 7F2B99E8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B99EC:
    ctx->pc = 0x7F2B99ECu;
    // 7F2B99EC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2B99ECu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2B99F0:
    ctx->pc = 0x7F2B99F0u;
    // 7F2B99F0: addi    r7, r4, 12832
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F2B99F4:
    ctx->pc = 0x7F2B99F4u;
    // 7F2B99F4: stfs     f1, 144(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B99F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2B99F8:
    ctx->pc = 0x7F2B99F8u;
    // 7F2B99F8: addi    r6, r3, 12808
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(12808);

label_7F2B99FC:
    ctx->pc = 0x7F2B99FCu;
    // 7F2B99FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9A00:
    ctx->pc = 0x7F2B9A00u;
    // 7F2B9A00: addi    r4, r29, 464
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(464);

label_7F2B9A04:
    ctx->pc = 0x7F2B9A04u;
    // 7F2B9A04: stfs     f0, 148(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F2B9A04u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2B9A08:
    ctx->pc = 0x7F2B9A08u;
    // 7F2B9A08: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B9A0C:
    ctx->pc = 0x7F2B9A0Cu;
    // 7F2B9A0C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9A10:
    ctx->pc = 0x7F2B9A10u;
    // 7F2B9A10: stw     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B9A14:
    ctx->pc = 0x7F2B9A14u;
    // 7F2B9A14: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9A18:
    ctx->pc = 0x7F2B9A18u;
    // 7F2B9A18: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B9A1C:
    ctx->pc = 0x7F2B9A1Cu;
    // 7F2B9A1C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9A20:
    ctx->pc = 0x7F2B9A20u;
    // 7F2B9A20: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B9A24:
    ctx->pc = 0x7F2B9A24u;
    // 7F2B9A24: stw     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9A28:
    ctx->pc = 0x7F2B9A28u;
    // 7F2B9A28: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B9A2C:
    ctx->pc = 0x7F2B9A2Cu;
    // 7F2B9A2C: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9A30:
    ctx->pc = 0x7F2B9A30u;
    // 7F2B9A30: stw     r5, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B9A34:
    ctx->pc = 0x7F2B9A34u;
    // 7F2B9A34: stw     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9A38:
    ctx->pc = 0x7F2B9A38u;
    // 7F2B9A38: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B9A3C:
    ctx->pc = 0x7F2B9A3Cu;
    // 7F2B9A3C: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9A40:
    ctx->pc = 0x7F2B9A40u;
    // 7F2B9A40: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B9A44:
    ctx->pc = 0x7F2B9A44u;
    // 7F2B9A44: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9A48:
    ctx->pc = 0x7F2B9A48u;
    // 7F2B9A48: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B9A4C:
    ctx->pc = 0x7F2B9A4Cu;
    // 7F2B9A4C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9A50:
    ctx->pc = 0x7F2B9A50u;
    // 7F2B9A50: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B9A54:
    ctx->pc = 0x7F2B9A54u;
    // 7F2B9A54: stw     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9A58:
    ctx->pc = 0x7F2B9A58u;
    // 7F2B9A58: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B9A5C:
    ctx->pc = 0x7F2B9A5Cu;
    // 7F2B9A5C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9A60:
    ctx->pc = 0x7F2B9A60u;
    // 7F2B9A60: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B9A64:
    ctx->pc = 0x7F2B9A64u;
    // 7F2B9A64: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9A68:
    ctx->pc = 0x7F2B9A68u;
    // 7F2B9A68: bl      0x7F023E5C
    {
            ctx->lr = 0x7F2B9A6Cu;
            ctx->pc = 0x7F023E5Cu;
            return;
    }

label_7F2B9A6C:
    ctx->pc = 0x7F2B9A6Cu;
    ctx->downcount -= 5;
    // 7F2B9A6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9A70:
    ctx->pc = 0x7F2B9A70u;
    // 7F2B9A70: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F2B9A74:
    ctx->pc = 0x7F2B9A74u;
    // 7F2B9A74: li      r5, 474
    ctx->gpr[5] = (u32)(s32)(474);

label_7F2B9A78:
    ctx->pc = 0x7F2B9A78u;
    // 7F2B9A78: li      r6, 500
    ctx->gpr[6] = (u32)(s32)(500);

label_7F2B9A7C:
    ctx->pc = 0x7F2B9A7Cu;
    // 7F2B9A7C: bl      0x7F023F7C
    {
            ctx->lr = 0x7F2B9A80u;
            ctx->pc = 0x7F023F7Cu;
            return;
    }

label_7F2B9A80:
    ctx->pc = 0x7F2B9A80u;
    ctx->downcount -= 2;
    // 7F2B9A80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9A84:
    ctx->pc = 0x7F2B9A84u;
    // 7F2B9A84: bl      0x7F023FEC
    {
            ctx->lr = 0x7F2B9A88u;
            ctx->pc = 0x7F023FECu;
            return;
    }

label_7F2B9A88:
    ctx->pc = 0x7F2B9A88u;
    ctx->downcount -= 3;
    // 7F2B9A88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9A8C:
    ctx->pc = 0x7F2B9A8Cu;
    // 7F2B9A8C: li      r4, 4101
    ctx->gpr[4] = (u32)(s32)(4101);

label_7F2B9A90:
    ctx->pc = 0x7F2B9A90u;
    // 7F2B9A90: bl      0x7F024060
    {
            ctx->lr = 0x7F2B9A94u;
            ctx->pc = 0x7F024060u;
            return;
    }

label_7F2B9A94:
    ctx->pc = 0x7F2B9A94u;
    ctx->downcount -= 5;
    // 7F2B9A94: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2B9A98:
    ctx->pc = 0x7F2B9A98u;
    // 7F2B9A98: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9A9C:
    ctx->pc = 0x7F2B9A9Cu;
    // 7F2B9A9C: addi    r3, r31, 224
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(224);

label_7F2B9AA0:
    ctx->pc = 0x7F2B9AA0u;
    // 7F2B9AA0: addi    r6, r31, 32
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(32);

label_7F2B9AA4:
    ctx->pc = 0x7F2B9AA4u;
    // 7F2B9AA4: bl      0x7F0FFCE8
    {
            ctx->lr = 0x7F2B9AA8u;
            ctx->pc = 0x7F0FFCE8u;
            return;
    }

label_7F2B9AA8:
    ctx->pc = 0x7F2B9AA8u;
    ctx->downcount -= 5;
    // 7F2B9AA8: lwz     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9AAC:
    ctx->pc = 0x7F2B9AACu;
    // 7F2B9AAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9AB0:
    ctx->pc = 0x7F2B9AB0u;
    // 7F2B9AB0: ori     r0, r0, 0x2000
    ctx->gpr[0] = ctx->gpr[0] | 0x2000u;

label_7F2B9AB4:
    ctx->pc = 0x7F2B9AB4u;
    // 7F2B9AB4: stw     r0, 236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9AB8:
    ctx->pc = 0x7F2B9AB8u;
    // 7F2B9AB8: bl      0x7F024050
    {
            ctx->lr = 0x7F2B9ABCu;
            ctx->pc = 0x7F024050u;
            return;
    }

label_7F2B9ABC:
    ctx->pc = 0x7F2B9ABCu;
    ctx->downcount -= 2;
    // 7F2B9ABC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9AC0:
    ctx->pc = 0x7F2B9AC0u;
    // 7F2B9AC0: bl      0x7F023FCC
    {
            ctx->lr = 0x7F2B9AC4u;
            ctx->pc = 0x7F023FCCu;
            return;
    }

label_7F2B9AC4:
    ctx->pc = 0x7F2B9AC4u;
    ctx->downcount -= 15;
    // 7F2B9AC4: lwz     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9AC8:
    ctx->pc = 0x7F2B9AC8u;
    // 7F2B9AC8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B9ACC:
    ctx->pc = 0x7F2B9ACCu;
    // 7F2B9ACC: addi    r5, r3, -5664
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5664);

label_7F2B9AD0:
    ctx->pc = 0x7F2B9AD0u;
    // 7F2B9AD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B9AD4:
    ctx->pc = 0x7F2B9AD4u;
    // 7F2B9AD4: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_7F2B9AD8:
    ctx->pc = 0x7F2B9AD8u;
    // 7F2B9AD8: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F2B9ADC:
    ctx->pc = 0x7F2B9ADCu;
    // 7F2B9ADC: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9AE0:
    ctx->pc = 0x7F2B9AE0u;
    // 7F2B9AE0: lwz     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9AE4:
    ctx->pc = 0x7F2B9AE4u;
    // 7F2B9AE4: ori     r0, r0, 0x4010
    ctx->gpr[0] = ctx->gpr[0] | 0x4010u;

label_7F2B9AE8:
    ctx->pc = 0x7F2B9AE8u;
    // 7F2B9AE8: stw     r0, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9AEC:
    ctx->pc = 0x7F2B9AECu;
    // 7F2B9AEC: lhz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_7F2B9AF0:
    ctx->pc = 0x7F2B9AF0u;
    // 7F2B9AF0: ori     r0, r0, 0x0004
    ctx->gpr[0] = ctx->gpr[0] | 0x0004u;

label_7F2B9AF4:
    ctx->pc = 0x7F2B9AF4u;
    // 7F2B9AF4: sth     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B9AF8:
    ctx->pc = 0x7F2B9AF8u;
    // 7F2B9AF8: stw     r31, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2B9AFC:
    ctx->pc = 0x7F2B9AFCu;
    // 7F2B9AFC: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2B9B00u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2B9B00:
    ctx->pc = 0x7F2B9B00u;
    ctx->downcount -= 3;
    // 7F2B9B00: rlwinm. r0, r3, 0, 26, 26
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

label_7F2B9B04:
    ctx->pc = 0x7F2B9B04u;
    // 7F2B9B04: rlwinm r3, r3, 0, 26, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000030u;
    }

label_7F2B9B08:
    ctx->pc = 0x7F2B9B08u;
    // 7F2B9B08: bc    4, 2, 0x7F2B9B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9B74;
        }
    }

label_7F2B9B0C:
    ctx->pc = 0x7F2B9B0Cu;
    ctx->downcount -= 3;
    // 7F2B9B0C: addis   r0, r30, -155
    ctx->gpr[0] = ctx->gpr[30] + ((u32)(s32)(-155) << 16);

label_7F2B9B10:
    ctx->pc = 0x7F2B9B10u;
    // 7F2B9B10: cmplwi  r0, 0x1527
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x1527u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B9B14:
    ctx->pc = 0x7F2B9B14u;
    // 7F2B9B14: bc    4, 2, 0x7F2B9B20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9B20;
        }
    }

label_7F2B9B18:
    ctx->pc = 0x7F2B9B18u;
    ctx->downcount -= 2;
    // 7F2B9B18: rlwinm. r0, r3, 0, 27, 27
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

label_7F2B9B1C:
    ctx->pc = 0x7F2B9B1Cu;
    // 7F2B9B1C: bc    12, 2, 0x7F2B9B74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9B74;
        }
    }

label_7F2B9B20:
    ctx->pc = 0x7F2B9B20u;
    ctx->downcount -= 3;
    // 7F2B9B20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B9B24:
    ctx->pc = 0x7F2B9B24u;
    // 7F2B9B24: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2B9B28:
    ctx->pc = 0x7F2B9B28u;
    // 7F2B9B28: bl      0x7F290004
    {
            ctx->lr = 0x7F2B9B2Cu;
            ctx->pc = 0x7F290004u;
            return;
    }

label_7F2B9B2C:
    ctx->pc = 0x7F2B9B2Cu;
    ctx->downcount -= 18;
    // 7F2B9B2C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2B9B30:
    ctx->pc = 0x7F2B9B30u;
    // 7F2B9B30: li      r9, 371
    ctx->gpr[9] = (u32)(s32)(371);

label_7F2B9B34:
    ctx->pc = 0x7F2B9B34u;
    // 7F2B9B34: addi    r8, r3, 22360
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(22360);

label_7F2B9B38:
    ctx->pc = 0x7F2B9B38u;
    // 7F2B9B38: li      r7, 7
    ctx->gpr[7] = (u32)(s32)(7);

label_7F2B9B3C:
    ctx->pc = 0x7F2B9B3Cu;
    // 7F2B9B3C: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F2B9B40:
    ctx->pc = 0x7F2B9B40u;
    // 7F2B9B40: li      r5, 9
    ctx->gpr[5] = (u32)(s32)(9);

label_7F2B9B44:
    ctx->pc = 0x7F2B9B44u;
    // 7F2B9B44: li      r4, 121
    ctx->gpr[4] = (u32)(s32)(121);

label_7F2B9B48:
    ctx->pc = 0x7F2B9B48u;
    // 7F2B9B48: li      r3, 77
    ctx->gpr[3] = (u32)(s32)(77);

label_7F2B9B4C:
    ctx->pc = 0x7F2B9B4Cu;
    // 7F2B9B4C: li      r0, 78
    ctx->gpr[0] = (u32)(s32)(78);

label_7F2B9B50:
    ctx->pc = 0x7F2B9B50u;
    // 7F2B9B50: sth     r9, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F2B9B54:
    ctx->pc = 0x7F2B9B54u;
    // 7F2B9B54: sth     r9, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[9]);
    }

label_7F2B9B58:
    ctx->pc = 0x7F2B9B58u;
    // 7F2B9B58: sth     r7, 26(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F2B9B5C:
    ctx->pc = 0x7F2B9B5Cu;
    // 7F2B9B5C: sth     r6, 28(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2B9B60:
    ctx->pc = 0x7F2B9B60u;
    // 7F2B9B60: sth     r5, 30(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2B9B64:
    ctx->pc = 0x7F2B9B64u;
    // 7F2B9B64: sth     r4, 32(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2B9B68:
    ctx->pc = 0x7F2B9B68u;
    // 7F2B9B68: sth     r3, 102(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(102);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2B9B6C:
    ctx->pc = 0x7F2B9B6Cu;
    // 7F2B9B6C: sth     r0, 104(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B9B70:
    ctx->pc = 0x7F2B9B70u;
    // 7F2B9B70: b       0x7F2B9BBC
    {
            goto label_7F2B9BBC;
    }

label_7F2B9B74:
    ctx->pc = 0x7F2B9B74u;
    ctx->downcount -= 18;
    // 7F2B9B74: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2B9B78:
    ctx->pc = 0x7F2B9B78u;
    // 7F2B9B78: li      r10, 359
    ctx->gpr[10] = (u32)(s32)(359);

label_7F2B9B7C:
    ctx->pc = 0x7F2B9B7Cu;
    // 7F2B9B7C: addi    r9, r3, 22360
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(22360);

label_7F2B9B80:
    ctx->pc = 0x7F2B9B80u;
    // 7F2B9B80: li      r8, 360
    ctx->gpr[8] = (u32)(s32)(360);

label_7F2B9B84:
    ctx->pc = 0x7F2B9B84u;
    // 7F2B9B84: li      r7, 228
    ctx->gpr[7] = (u32)(s32)(228);

label_7F2B9B88:
    ctx->pc = 0x7F2B9B88u;
    // 7F2B9B88: li      r6, 229
    ctx->gpr[6] = (u32)(s32)(229);

label_7F2B9B8C:
    ctx->pc = 0x7F2B9B8Cu;
    // 7F2B9B8C: li      r5, 230
    ctx->gpr[5] = (u32)(s32)(230);

label_7F2B9B90:
    ctx->pc = 0x7F2B9B90u;
    // 7F2B9B90: li      r4, 231
    ctx->gpr[4] = (u32)(s32)(231);

label_7F2B9B94:
    ctx->pc = 0x7F2B9B94u;
    // 7F2B9B94: li      r3, 75
    ctx->gpr[3] = (u32)(s32)(75);

label_7F2B9B98:
    ctx->pc = 0x7F2B9B98u;
    // 7F2B9B98: li      r0, 76
    ctx->gpr[0] = (u32)(s32)(76);

label_7F2B9B9C:
    ctx->pc = 0x7F2B9B9Cu;
    // 7F2B9B9C: sth     r10, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F2B9BA0:
    ctx->pc = 0x7F2B9BA0u;
    // 7F2B9BA0: sth     r8, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[8]);
    }

label_7F2B9BA4:
    ctx->pc = 0x7F2B9BA4u;
    // 7F2B9BA4: sth     r7, 26(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F2B9BA8:
    ctx->pc = 0x7F2B9BA8u;
    // 7F2B9BA8: sth     r6, 28(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F2B9BAC:
    ctx->pc = 0x7F2B9BACu;
    // 7F2B9BAC: sth     r5, 30(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[5]);
    }

label_7F2B9BB0:
    ctx->pc = 0x7F2B9BB0u;
    // 7F2B9BB0: sth     r4, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[4]);
    }

label_7F2B9BB4:
    ctx->pc = 0x7F2B9BB4u;
    // 7F2B9BB4: sth     r3, 102(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(102);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2B9BB8:
    ctx->pc = 0x7F2B9BB8u;
    // 7F2B9BB8: sth     r0, 104(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2B9BBC:
    ctx->pc = 0x7F2B9BBCu;
    ctx->downcount -= 1;
    // 7F2B9BBC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9BC0:
    ctx->pc = 0x7F2B9BC0u;
    ctx->downcount -= 16;
    // 7F2B9BC0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2B9BC4:
    ctx->pc = 0x7F2B9BC4u;
    // 7F2B9BC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9BC8:
    ctx->pc = 0x7F2B9BC8u;
    // 7F2B9BC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2B9BCC:
    ctx->pc = 0x7F2B9BCCu;
    // 7F2B9BCC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2B9BD0:
    ctx->pc = 0x7F2B9BD0u;
    // 7F2B9BD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2B9BD4:
    ctx->pc = 0x7F2B9BD4u;
    ctx->downcount -= 21;
    // 7F2B9BD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2B9BD8:
    ctx->pc = 0x7F2B9BD8u;
    // 7F2B9BD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2B9BDC:
    ctx->pc = 0x7F2B9BDCu;
    // 7F2B9BDC: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2B9BE0:
    ctx->pc = 0x7F2B9BE0u;
    // 7F2B9BE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9BE4:
    ctx->pc = 0x7F2B9BE4u;
    // 7F2B9BE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9BE8:
    ctx->pc = 0x7F2B9BE8u;
    // 7F2B9BE8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2B9BEC:
    ctx->pc = 0x7F2B9BECu;
    // 7F2B9BEC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9BF0:
    ctx->pc = 0x7F2B9BF0u;
    // 7F2B9BF0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2B9BF4:
    ctx->pc = 0x7F2B9BF4u;
    // 7F2B9BF4: addi    r3, r5, 24656
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(24656);

label_7F2B9BF8:
    ctx->pc = 0x7F2B9BF8u;
    // 7F2B9BF8: stw     r0, 3976(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9BFC:
    ctx->pc = 0x7F2B9BFCu;
    // 7F2B9BFC: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2B9C00u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2B9C00:
    ctx->pc = 0x7F2B9C00u;
    ctx->downcount -= 2;
    // 7F2B9C00: cmpw    r31, r3
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B9C04:
    ctx->pc = 0x7F2B9C04u;
    // 7F2B9C04: bc    4, 2, 0x7F2B9CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9CA4;
        }
    }

label_7F2B9C08:
    ctx->pc = 0x7F2B9C08u;
    ctx->downcount -= 4;
    // 7F2B9C08: lis     r3, 111
    ctx->gpr[3] = ((u32)(s32)(111) << 16);

label_7F2B9C0C:
    ctx->pc = 0x7F2B9C0Cu;
    // 7F2B9C0C: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F2B9C10:
    ctx->pc = 0x7F2B9C10u;
    // 7F2B9C10: addi    r3, r3, 10820
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(10820);

label_7F2B9C14:
    ctx->pc = 0x7F2B9C14u;
    // 7F2B9C14: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2B9C18u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2B9C18:
    ctx->pc = 0x7F2B9C18u;
    ctx->downcount -= 1;
    // 7F2B9C18: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2B9C1Cu;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2B9C1C:
    ctx->pc = 0x7F2B9C1Cu;
    ctx->downcount -= 2;
    // 7F2B9C1C: cmplwi  r3, 0x0000
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

label_7F2B9C20:
    ctx->pc = 0x7F2B9C20u;
    // 7F2B9C20: bc    12, 2, 0x7F2B9CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9CA4;
        }
    }

label_7F2B9C24:
    ctx->pc = 0x7F2B9C24u;
    ctx->downcount -= 4;
    // 7F2B9C24: lis     r3, 134
    ctx->gpr[3] = ((u32)(s32)(134) << 16);

label_7F2B9C28:
    ctx->pc = 0x7F2B9C28u;
    // 7F2B9C28: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F2B9C2C:
    ctx->pc = 0x7F2B9C2Cu;
    // 7F2B9C2C: addi    r3, r3, 11229
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11229);

label_7F2B9C30:
    ctx->pc = 0x7F2B9C30u;
    // 7F2B9C30: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2B9C34u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2B9C34:
    ctx->pc = 0x7F2B9C34u;
    ctx->downcount -= 1;
    // 7F2B9C34: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2B9C38u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2B9C38:
    ctx->pc = 0x7F2B9C38u;
    ctx->downcount -= 2;
    // 7F2B9C38: cmplwi  r3, 0x0000
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

label_7F2B9C3C:
    ctx->pc = 0x7F2B9C3Cu;
    // 7F2B9C3C: bc    12, 2, 0x7F2B9CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9CA4;
        }
    }

label_7F2B9C40:
    ctx->pc = 0x7F2B9C40u;
    ctx->downcount -= 6;
    // 7F2B9C40: lwz     r3, 464(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9C44:
    ctx->pc = 0x7F2B9C44u;
    // 7F2B9C44: lwz     r3, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9C48:
    ctx->pc = 0x7F2B9C48u;
    // 7F2B9C48: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9C4C:
    ctx->pc = 0x7F2B9C4Cu;
    // 7F2B9C4C: addis   r0, r3, -105
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-105) << 16);

label_7F2B9C50:
    ctx->pc = 0x7F2B9C50u;
    // 7F2B9C50: cmplwi  r0, 0xB995
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0xB995u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B9C54:
    ctx->pc = 0x7F2B9C54u;
    // 7F2B9C54: bc    12, 2, 0x7F2B9CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9CA4;
        }
    }

label_7F2B9C58:
    ctx->pc = 0x7F2B9C58u;
    ctx->downcount -= 3;
    // 7F2B9C58: addis   r0, r3, -27
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-27) << 16);

label_7F2B9C5C:
    ctx->pc = 0x7F2B9C5Cu;
    // 7F2B9C5C: cmplwi  r0, 0x5B80
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x5B80u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2B9C60:
    ctx->pc = 0x7F2B9C60u;
    // 7F2B9C60: bc    12, 2, 0x7F2B9CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9CA4;
        }
    }

label_7F2B9C64:
    ctx->pc = 0x7F2B9C64u;
    ctx->downcount -= 6;
    // 7F2B9C64: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2B9C68:
    ctx->pc = 0x7F2B9C68u;
    // 7F2B9C68: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2B9C6C:
    ctx->pc = 0x7F2B9C6Cu;
    // 7F2B9C6C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9C70:
    ctx->pc = 0x7F2B9C70u;
    // 7F2B9C70: lha     r0, 6(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(6);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2B9C74:
    ctx->pc = 0x7F2B9C74u;
    // 7F2B9C74: cmpwi   r0, 0
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

label_7F2B9C78:
    ctx->pc = 0x7F2B9C78u;
    // 7F2B9C78: bc    4, 2, 0x7F2B9CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9CA4;
        }
    }

label_7F2B9C7C:
    ctx->pc = 0x7F2B9C7Cu;
    ctx->downcount -= 9;
    // 7F2B9C7C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2B9C80:
    ctx->pc = 0x7F2B9C80u;
    // 7F2B9C80: addi    r3, r30, 464
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(464);

label_7F2B9C84:
    ctx->pc = 0x7F2B9C84u;
    // 7F2B9C84: addi    r8, r4, 27508
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(27508);

label_7F2B9C88:
    ctx->pc = 0x7F2B9C88u;
    // 7F2B9C88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B9C8C:
    ctx->pc = 0x7F2B9C8Cu;
    // 7F2B9C8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B9C90:
    ctx->pc = 0x7F2B9C90u;
    // 7F2B9C90: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2B9C94:
    ctx->pc = 0x7F2B9C94u;
    // 7F2B9C94: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2B9C98:
    ctx->pc = 0x7F2B9C98u;
    // 7F2B9C98: li      r9, 7
    ctx->gpr[9] = (u32)(s32)(7);

label_7F2B9C9C:
    ctx->pc = 0x7F2B9C9Cu;
    // 7F2B9C9C: bl      0x7F2F8060
    {
            ctx->lr = 0x7F2B9CA0u;
            ctx->pc = 0x7F2F8060u;
            return;
    }

label_7F2B9CA0:
    ctx->pc = 0x7F2B9CA0u;
    ctx->downcount -= 1;
    // 7F2B9CA0: stw     r3, 3976(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3976);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B9CA4:
    ctx->pc = 0x7F2B9CA4u;
    ctx->downcount -= 17;
    // 7F2B9CA4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2B9CA8:
    ctx->pc = 0x7F2B9CA8u;
    // 7F2B9CA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9CAC:
    ctx->pc = 0x7F2B9CACu;
    // 7F2B9CAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9CB0:
    ctx->pc = 0x7F2B9CB0u;
    // 7F2B9CB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2B9CB4:
    ctx->pc = 0x7F2B9CB4u;
    // 7F2B9CB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2B9CB8:
    ctx->pc = 0x7F2B9CB8u;
    // 7F2B9CB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2B9CBC:
    ctx->pc = 0x7F2B9CBCu;
    ctx->downcount -= 19;
    // 7F2B9CBC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2B9CC0:
    ctx->pc = 0x7F2B9CC0u;
    // 7F2B9CC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2B9CC4:
    ctx->pc = 0x7F2B9CC4u;
    // 7F2B9CC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9CC8:
    ctx->pc = 0x7F2B9CC8u;
    // 7F2B9CC8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2B9CCC:
    ctx->pc = 0x7F2B9CCCu;
    // 7F2B9CCC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9CD0:
    ctx->pc = 0x7F2B9CD0u;
    // 7F2B9CD0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2B9CD4:
    ctx->pc = 0x7F2B9CD4u;
    // 7F2B9CD4: li      r3, 109
    ctx->gpr[3] = (u32)(s32)(109);

label_7F2B9CD8:
    ctx->pc = 0x7F2B9CD8u;
    // 7F2B9CD8: addi    r31, r28, 464
    ctx->gpr[31] = ctx->gpr[28] + (u32)(s32)(464);

label_7F2B9CDC:
    ctx->pc = 0x7F2B9CDCu;
    // 7F2B9CDC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2B9CE0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2B9CE0:
    ctx->pc = 0x7F2B9CE0u;
    ctx->downcount -= 2;
    // 7F2B9CE0: cmplwi  r3, 0x0000
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

label_7F2B9CE4:
    ctx->pc = 0x7F2B9CE4u;
    // 7F2B9CE4: bc    4, 2, 0x7F2B9D18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9D18;
        }
    }

label_7F2B9CE8:
    ctx->pc = 0x7F2B9CE8u;
    ctx->downcount -= 9;
    // 7F2B9CE8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2B9CEC:
    ctx->pc = 0x7F2B9CECu;
    // 7F2B9CEC: lis     r5, 70
    ctx->gpr[5] = ((u32)(s32)(70) << 16);

label_7F2B9CF0:
    ctx->pc = 0x7F2B9CF0u;
    // 7F2B9CF0: addi    r4, r3, -6232
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6232);

label_7F2B9CF4:
    ctx->pc = 0x7F2B9CF4u;
    // 7F2B9CF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9CF8:
    ctx->pc = 0x7F2B9CF8u;
    // 7F2B9CF8: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9CFC:
    ctx->pc = 0x7F2B9CFCu;
    // 7F2B9CFC: addi    r4, r5, 7672
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(7672);

label_7F2B9D00:
    ctx->pc = 0x7F2B9D00u;
    // 7F2B9D00: oris    r5, r0, 0x0100
    ctx->gpr[5] = ctx->gpr[0] | (0x0100u << 16);

label_7F2B9D04:
    ctx->pc = 0x7F2B9D04u;
    // 7F2B9D04: ori     r5, r5, 0x0122
    ctx->gpr[5] = ctx->gpr[5] | 0x0122u;

label_7F2B9D08:
    ctx->pc = 0x7F2B9D08u;
    // 7F2B9D08: bl      0x7F04272C
    {
            ctx->lr = 0x7F2B9D0Cu;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2B9D0C:
    ctx->pc = 0x7F2B9D0Cu;
    ctx->downcount -= 3;
    // 7F2B9D0C: lis     r3, 70
    ctx->gpr[3] = ((u32)(s32)(70) << 16);

label_7F2B9D10:
    ctx->pc = 0x7F2B9D10u;
    // 7F2B9D10: addi    r30, r3, 7672
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(7672);

label_7F2B9D14:
    ctx->pc = 0x7F2B9D14u;
    // 7F2B9D14: b       0x7F2B9D40
    {
            goto label_7F2B9D40;
    }

label_7F2B9D18:
    ctx->pc = 0x7F2B9D18u;
    ctx->downcount -= 1;
    // 7F2B9D18: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2B9D1Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2B9D1C:
    ctx->pc = 0x7F2B9D1Cu;
    ctx->downcount -= 9;
    // 7F2B9D1C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2B9D20:
    ctx->pc = 0x7F2B9D20u;
    // 7F2B9D20: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9D24:
    ctx->pc = 0x7F2B9D24u;
    // 7F2B9D24: lwz     r0, -6232(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6232);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9D28:
    ctx->pc = 0x7F2B9D28u;
    // 7F2B9D28: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2B9D2C:
    ctx->pc = 0x7F2B9D2Cu;
    // 7F2B9D2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9D30:
    ctx->pc = 0x7F2B9D30u;
    // 7F2B9D30: oris    r5, r0, 0x0100
    ctx->gpr[5] = ctx->gpr[0] | (0x0100u << 16);

label_7F2B9D34:
    ctx->pc = 0x7F2B9D34u;
    // 7F2B9D34: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2B9D38:
    ctx->pc = 0x7F2B9D38u;
    // 7F2B9D38: ori     r5, r5, 0x0122
    ctx->gpr[5] = ctx->gpr[5] | 0x0122u;

label_7F2B9D3C:
    ctx->pc = 0x7F2B9D3Cu;
    // 7F2B9D3C: bl      0x7F04272C
    {
            ctx->lr = 0x7F2B9D40u;
            ctx->pc = 0x7F04272Cu;
            return;
    }

label_7F2B9D40:
    ctx->pc = 0x7F2B9D40u;
    ctx->downcount -= 3;
    // 7F2B9D40: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9D44:
    ctx->pc = 0x7F2B9D44u;
    // 7F2B9D44: cmplwi  r0, 0x0000
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

label_7F2B9D48:
    ctx->pc = 0x7F2B9D48u;
    // 7F2B9D48: bc    4, 2, 0x7F2B9D54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9D54;
        }
    }

label_7F2B9D4C:
    ctx->pc = 0x7F2B9D4Cu;
    ctx->downcount -= 2;
    // 7F2B9D4C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2B9D50:
    ctx->pc = 0x7F2B9D50u;
    // 7F2B9D50: b       0x7F2B9F74
    {
            goto label_7F2B9F74;
    }

label_7F2B9D54:
    ctx->pc = 0x7F2B9D54u;
    ctx->downcount -= 3;
    // 7F2B9D54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9D58:
    ctx->pc = 0x7F2B9D58u;
    // 7F2B9D58: addi    r4, r28, 508
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(508);

label_7F2B9D5C:
    ctx->pc = 0x7F2B9D5Cu;
    // 7F2B9D5C: bl      0x7F042B20
    {
            ctx->lr = 0x7F2B9D60u;
            ctx->pc = 0x7F042B20u;
            return;
    }

label_7F2B9D60:
    ctx->pc = 0x7F2B9D60u;
    ctx->downcount -= 2;
    // 7F2B9D60: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_7F2B9D64:
    ctx->pc = 0x7F2B9D64u;
    // 7F2B9D64: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2B9D68u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2B9D68:
    ctx->pc = 0x7F2B9D68u;
    ctx->downcount -= 2;
    // 7F2B9D68: cmplwi  r3, 0x0000
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

label_7F2B9D6C:
    ctx->pc = 0x7F2B9D6Cu;
    // 7F2B9D6C: bc    4, 2, 0x7F2B9D94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9D94;
        }
    }

label_7F2B9D70:
    ctx->pc = 0x7F2B9D70u;
    ctx->downcount -= 8;
    // 7F2B9D70: lis     r3, 70
    ctx->gpr[3] = ((u32)(s32)(70) << 16);

label_7F2B9D74:
    ctx->pc = 0x7F2B9D74u;
    // 7F2B9D74: lis     r4, 2
    ctx->gpr[4] = ((u32)(s32)(2) << 16);

label_7F2B9D78:
    ctx->pc = 0x7F2B9D78u;
    // 7F2B9D78: addi    r5, r3, 7672
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7672);

label_7F2B9D7C:
    ctx->pc = 0x7F2B9D7Cu;
    // 7F2B9D7C: stw     r5, 3968(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3968);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2B9D80:
    ctx->pc = 0x7F2B9D80u;
    // 7F2B9D80: addi    r6, r4, 1
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(1);

label_7F2B9D84:
    ctx->pc = 0x7F2B9D84u;
    // 7F2B9D84: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9D88:
    ctx->pc = 0x7F2B9D88u;
    // 7F2B9D88: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2B9D8C:
    ctx->pc = 0x7F2B9D8Cu;
    // 7F2B9D8C: bl      0x7F042C2C
    {
            ctx->lr = 0x7F2B9D90u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F2B9D90:
    ctx->pc = 0x7F2B9D90u;
    ctx->downcount -= 1;
    // 7F2B9D90: b       0x7F2B9DB4
    {
            goto label_7F2B9DB4;
    }

label_7F2B9D94:
    ctx->pc = 0x7F2B9D94u;
    ctx->downcount -= 1;
    // 7F2B9D94: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2B9D98u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2B9D98:
    ctx->pc = 0x7F2B9D98u;
    ctx->downcount -= 7;
    // 7F2B9D98: stw     r3, 3968(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3968);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B9D9C:
    ctx->pc = 0x7F2B9D9Cu;
    // 7F2B9D9C: lis     r6, 2
    ctx->gpr[6] = ((u32)(s32)(2) << 16);

label_7F2B9DA0:
    ctx->pc = 0x7F2B9DA0u;
    // 7F2B9DA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9DA4:
    ctx->pc = 0x7F2B9DA4u;
    // 7F2B9DA4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2B9DA8:
    ctx->pc = 0x7F2B9DA8u;
    // 7F2B9DA8: lwz     r5, 3968(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3968);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B9DAC:
    ctx->pc = 0x7F2B9DACu;
    // 7F2B9DAC: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_7F2B9DB0:
    ctx->pc = 0x7F2B9DB0u;
    // 7F2B9DB0: bl      0x7F042C2C
    {
            ctx->lr = 0x7F2B9DB4u;
            ctx->pc = 0x7F042C2Cu;
            return;
    }

label_7F2B9DB4:
    ctx->pc = 0x7F2B9DB4u;
    ctx->downcount -= 5;
    // 7F2B9DB4: lwz     r0, 3968(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3968);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9DB8:
    ctx->pc = 0x7F2B9DB8u;
    // 7F2B9DB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9DBC:
    ctx->pc = 0x7F2B9DBCu;
    // 7F2B9DBC: addi    r4, r28, 80
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(80);

label_7F2B9DC0:
    ctx->pc = 0x7F2B9DC0u;
    // 7F2B9DC0: stw     r0, 4020(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4020);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9DC4:
    ctx->pc = 0x7F2B9DC4u;
    // 7F2B9DC4: bl      0x7F042B6C
    {
            ctx->lr = 0x7F2B9DC8u;
            ctx->pc = 0x7F042B6Cu;
            return;
    }

label_7F2B9DC8:
    ctx->pc = 0x7F2B9DC8u;
    ctx->downcount -= 7;
    // 7F2B9DC8: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2B9DCC:
    ctx->pc = 0x7F2B9DCCu;
    // 7F2B9DCC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2B9DD0:
    ctx->pc = 0x7F2B9DD0u;
    // 7F2B9DD0: addi    r5, r4, 22156
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(22156);

label_7F2B9DD4:
    ctx->pc = 0x7F2B9DD4u;
    // 7F2B9DD4: addi    r4, r28, 4024
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(4024);

label_7F2B9DD8:
    ctx->pc = 0x7F2B9DD8u;
    // 7F2B9DD8: stw     r31, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2B9DDC:
    ctx->pc = 0x7F2B9DDCu;
    // 7F2B9DDC: lwz     r5, 3968(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3968);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2B9DE0:
    ctx->pc = 0x7F2B9DE0u;
    // 7F2B9DE0: bl      0x7F0142D8
    {
            ctx->lr = 0x7F2B9DE4u;
            ctx->pc = 0x7F0142D8u;
            return;
    }

label_7F2B9DE4:
    ctx->pc = 0x7F2B9DE4u;
    ctx->downcount -= 3;
    // 7F2B9DE4: lwz     r4, 468(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(468);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B9DE8:
    ctx->pc = 0x7F2B9DE8u;
    // 7F2B9DE8: addi    r3, r28, 4024
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(4024);

label_7F2B9DEC:
    ctx->pc = 0x7F2B9DECu;
    // 7F2B9DEC: bl      0x7F014340
    {
            ctx->lr = 0x7F2B9DF0u;
            ctx->pc = 0x7F014340u;
            return;
    }

label_7F2B9DF0:
    ctx->pc = 0x7F2B9DF0u;
    ctx->downcount -= 3;
    // 7F2B9DF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2B9DF4:
    ctx->pc = 0x7F2B9DF4u;
    // 7F2B9DF4: li      r4, 99
    ctx->gpr[4] = (u32)(s32)(99);

label_7F2B9DF8:
    ctx->pc = 0x7F2B9DF8u;
    // 7F2B9DF8: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2B9DFCu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2B9DFC:
    ctx->pc = 0x7F2B9DFCu;
    ctx->downcount -= 1;
    // 7F2B9DFC: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2B9E00u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2B9E00:
    ctx->pc = 0x7F2B9E00u;
    ctx->downcount -= 2;
    // 7F2B9E00: or.   r31, r3, r3
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

label_7F2B9E04:
    ctx->pc = 0x7F2B9E04u;
    // 7F2B9E04: bc    12, 2, 0x7F2B9E64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9E64;
        }
    }

label_7F2B9E08:
    ctx->pc = 0x7F2B9E08u;
    ctx->downcount -= 3;
    // 7F2B9E08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2B9E0C:
    ctx->pc = 0x7F2B9E0Cu;
    // 7F2B9E0C: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2B9E10:
    ctx->pc = 0x7F2B9E10u;
    // 7F2B9E10: bl      0x7F290054
    {
            ctx->lr = 0x7F2B9E14u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2B9E14:
    ctx->pc = 0x7F2B9E14u;
    ctx->downcount -= 5;
    // 7F2B9E14: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9E18:
    ctx->pc = 0x7F2B9E18u;
    // 7F2B9E18: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2B9E1C:
    ctx->pc = 0x7F2B9E1Cu;
    // 7F2B9E1C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2B9E20:
    ctx->pc = 0x7F2B9E20u;
    // 7F2B9E20: or.   r0, r4, r0
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

label_7F2B9E24:
    ctx->pc = 0x7F2B9E24u;
    // 7F2B9E24: bc    12, 2, 0x7F2B9E48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9E48;
        }
    }

label_7F2B9E28:
    ctx->pc = 0x7F2B9E28u;
    ctx->downcount -= 6;
    // 7F2B9E28: lwz     r3, 464(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9E2C:
    ctx->pc = 0x7F2B9E2Cu;
    // 7F2B9E2C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9E30:
    ctx->pc = 0x7F2B9E30u;
    // 7F2B9E30: li      r5, 17
    ctx->gpr[5] = (u32)(s32)(17);

label_7F2B9E34:
    ctx->pc = 0x7F2B9E34u;
    // 7F2B9E34: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F2B9E38:
    ctx->pc = 0x7F2B9E38u;
    // 7F2B9E38: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F2B9E3C:
    ctx->pc = 0x7F2B9E3Cu;
    // 7F2B9E3C: bl      0x7F2B9F88
    {
            ctx->lr = 0x7F2B9E40u;
            goto label_7F2B9F88;
    }

label_7F2B9E40:
    ctx->pc = 0x7F2B9E40u;
    ctx->downcount -= 2;
    // 7F2B9E40: stw     r3, 3948(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3948);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B9E44:
    ctx->pc = 0x7F2B9E44u;
    // 7F2B9E44: b       0x7F2B9E64
    {
            goto label_7F2B9E64;
    }

label_7F2B9E48:
    ctx->pc = 0x7F2B9E48u;
    ctx->downcount -= 6;
    // 7F2B9E48: lwz     r3, 464(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9E4C:
    ctx->pc = 0x7F2B9E4Cu;
    // 7F2B9E4C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2B9E50:
    ctx->pc = 0x7F2B9E50u;
    // 7F2B9E50: li      r5, 13
    ctx->gpr[5] = (u32)(s32)(13);

label_7F2B9E54:
    ctx->pc = 0x7F2B9E54u;
    // 7F2B9E54: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_7F2B9E58:
    ctx->pc = 0x7F2B9E58u;
    // 7F2B9E58: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F2B9E5C:
    ctx->pc = 0x7F2B9E5Cu;
    // 7F2B9E5C: bl      0x7F2B9F88
    {
            ctx->lr = 0x7F2B9E60u;
            goto label_7F2B9F88;
    }

label_7F2B9E60:
    ctx->pc = 0x7F2B9E60u;
    ctx->downcount -= 1;
    // 7F2B9E60: stw     r3, 3948(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3948);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B9E64:
    ctx->pc = 0x7F2B9E64u;
    ctx->downcount -= 8;
    // 7F2B9E64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9E68:
    ctx->pc = 0x7F2B9E68u;
    // 7F2B9E68: lis     r4, 32
    ctx->gpr[4] = ((u32)(s32)(32) << 16);

label_7F2B9E6C:
    ctx->pc = 0x7F2B9E6Cu;
    // 7F2B9E6C: stw     r0, 3944(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(3944);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9E70:
    ctx->pc = 0x7F2B9E70u;
    // 7F2B9E70: addi    r3, r28, 464
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(464);

label_7F2B9E74:
    ctx->pc = 0x7F2B9E74u;
    // 7F2B9E74: addi    r6, r4, -6288
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-6288);

label_7F2B9E78:
    ctx->pc = 0x7F2B9E78u;
    // 7F2B9E78: addi    r7, r28, 4072
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(4072);

label_7F2B9E7C:
    ctx->pc = 0x7F2B9E7Cu;
    // 7F2B9E7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B9E80:
    ctx->pc = 0x7F2B9E80u;
    // 7F2B9E80: bl      0x7F2BB3F4
    {
            ctx->lr = 0x7F2B9E84u;
            goto label_7F2BB3F4;
    }

label_7F2B9E84:
    ctx->pc = 0x7F2B9E84u;
    ctx->downcount -= 3;
    // 7F2B9E84: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9E88:
    ctx->pc = 0x7F2B9E88u;
    // 7F2B9E88: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2B9E8C:
    ctx->pc = 0x7F2B9E8Cu;
    // 7F2B9E8C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2B9E90u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2B9E90:
    ctx->pc = 0x7F2B9E90u;
    ctx->downcount -= 3;
    // 7F2B9E90: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F2B9E94:
    ctx->pc = 0x7F2B9E94u;
    // 7F2B9E94: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2B9E98:
    ctx->pc = 0x7F2B9E98u;
    // 7F2B9E98: bl      0x7F2B9BD4
    {
            ctx->lr = 0x7F2B9E9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2B9BD4u;
                return;
            }
            goto label_7F2B9BD4;
    }

label_7F2B9E9C:
    ctx->pc = 0x7F2B9E9Cu;
    ctx->downcount -= 4;
    // 7F2B9E9C: lis     r3, 106
    ctx->gpr[3] = ((u32)(s32)(106) << 16);

label_7F2B9EA0:
    ctx->pc = 0x7F2B9EA0u;
    // 7F2B9EA0: addi    r0, r3, -18027
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-18027);

label_7F2B9EA4:
    ctx->pc = 0x7F2B9EA4u;
    // 7F2B9EA4: cmpw    r30, r0
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

label_7F2B9EA8:
    ctx->pc = 0x7F2B9EA8u;
    // 7F2B9EA8: bc    12, 2, 0x7F2B9EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9EE4;
        }
    }

label_7F2B9EAC:
    ctx->pc = 0x7F2B9EACu;
    ctx->downcount -= 1;
    // 7F2B9EAC: bc    4, 0, 0x7F2B9EC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9EC4;
        }
    }

label_7F2B9EB0:
    ctx->pc = 0x7F2B9EB0u;
    ctx->downcount -= 4;
    // 7F2B9EB0: lis     r3, 27
    ctx->gpr[3] = ((u32)(s32)(27) << 16);

label_7F2B9EB4:
    ctx->pc = 0x7F2B9EB4u;
    // 7F2B9EB4: addi    r0, r3, 23424
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(23424);

label_7F2B9EB8:
    ctx->pc = 0x7F2B9EB8u;
    // 7F2B9EB8: cmpw    r30, r0
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

label_7F2B9EBC:
    ctx->pc = 0x7F2B9EBCu;
    // 7F2B9EBC: bc    12, 2, 0x7F2B9EE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9EE4;
        }
    }

label_7F2B9EC0:
    ctx->pc = 0x7F2B9EC0u;
    ctx->downcount -= 1;
    // 7F2B9EC0: b       0x7F2B9EF0
    {
            goto label_7F2B9EF0;
    }

label_7F2B9EC4:
    ctx->pc = 0x7F2B9EC4u;
    ctx->downcount -= 4;
    // 7F2B9EC4: lis     r3, 165
    ctx->gpr[3] = ((u32)(s32)(165) << 16);

label_7F2B9EC8:
    ctx->pc = 0x7F2B9EC8u;
    // 7F2B9EC8: addi    r0, r3, 13421
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(13421);

label_7F2B9ECC:
    ctx->pc = 0x7F2B9ECCu;
    // 7F2B9ECC: cmpw    r30, r0
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

label_7F2B9ED0:
    ctx->pc = 0x7F2B9ED0u;
    // 7F2B9ED0: bc    12, 2, 0x7F2B9ED8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9ED8;
        }
    }

label_7F2B9ED4:
    ctx->pc = 0x7F2B9ED4u;
    ctx->downcount -= 1;
    // 7F2B9ED4: b       0x7F2B9EF0
    {
            goto label_7F2B9EF0;
    }

label_7F2B9ED8:
    ctx->pc = 0x7F2B9ED8u;
    ctx->downcount -= 3;
    // 7F2B9ED8: lis     r3, 61
    ctx->gpr[3] = ((u32)(s32)(61) << 16);

label_7F2B9EDC:
    ctx->pc = 0x7F2B9EDCu;
    // 7F2B9EDC: addi    r29, r3, 11139
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(11139);

label_7F2B9EE0:
    ctx->pc = 0x7F2B9EE0u;
    // 7F2B9EE0: b       0x7F2B9EF8
    {
            goto label_7F2B9EF8;
    }

label_7F2B9EE4:
    ctx->pc = 0x7F2B9EE4u;
    ctx->downcount -= 3;
    // 7F2B9EE4: lis     r3, 123
    ctx->gpr[3] = ((u32)(s32)(123) << 16);

label_7F2B9EE8:
    ctx->pc = 0x7F2B9EE8u;
    // 7F2B9EE8: addi    r29, r3, 20396
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(20396);

label_7F2B9EEC:
    ctx->pc = 0x7F2B9EECu;
    // 7F2B9EEC: b       0x7F2B9EF8
    {
            goto label_7F2B9EF8;
    }

label_7F2B9EF0:
    ctx->pc = 0x7F2B9EF0u;
    ctx->downcount -= 2;
    // 7F2B9EF0: lis     r3, 86
    ctx->gpr[3] = ((u32)(s32)(86) << 16);

label_7F2B9EF4:
    ctx->pc = 0x7F2B9EF4u;
    // 7F2B9EF4: addi    r29, r3, -21659
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(-21659);

label_7F2B9EF8:
    ctx->pc = 0x7F2B9EF8u;
    ctx->downcount -= 3;
    // 7F2B9EF8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2B9EFC:
    ctx->pc = 0x7F2B9EFCu;
    // 7F2B9EFC: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F2B9F00:
    ctx->pc = 0x7F2B9F00u;
    // 7F2B9F00: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2B9F04u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2B9F04:
    ctx->pc = 0x7F2B9F04u;
    ctx->downcount -= 1;
    // 7F2B9F04: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2B9F08u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2B9F08:
    ctx->pc = 0x7F2B9F08u;
    ctx->downcount -= 2;
    // 7F2B9F08: cmplwi  r3, 0x0000
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

label_7F2B9F0C:
    ctx->pc = 0x7F2B9F0Cu;
    // 7F2B9F0C: bc    4, 2, 0x7F2B9F30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9F30;
        }
    }

label_7F2B9F10:
    ctx->pc = 0x7F2B9F10u;
    ctx->downcount -= 3;
    // 7F2B9F10: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2B9F14:
    ctx->pc = 0x7F2B9F14u;
    // 7F2B9F14: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F2B9F18:
    ctx->pc = 0x7F2B9F18u;
    // 7F2B9F18: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2B9F1Cu;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2B9F1C:
    ctx->pc = 0x7F2B9F1Cu;
    ctx->downcount -= 1;
    // 7F2B9F1C: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2B9F20u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2B9F20:
    ctx->pc = 0x7F2B9F20u;
    ctx->downcount -= 2;
    // 7F2B9F20: cmplwi  r3, 0x0000
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

label_7F2B9F24:
    ctx->pc = 0x7F2B9F24u;
    // 7F2B9F24: bc    4, 2, 0x7F2B9F30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9F30;
        }
    }

label_7F2B9F28:
    ctx->pc = 0x7F2B9F28u;
    ctx->downcount -= 2;
    // 7F2B9F28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9F2C:
    ctx->pc = 0x7F2B9F2Cu;
    // 7F2B9F2C: b       0x7F2B9F74
    {
            goto label_7F2B9F74;
    }

label_7F2B9F30:
    ctx->pc = 0x7F2B9F30u;
    ctx->downcount -= 3;
    // 7F2B9F30: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_7F2B9F34:
    ctx->pc = 0x7F2B9F34u;
    // 7F2B9F34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2B9F38:
    ctx->pc = 0x7F2B9F38u;
    // 7F2B9F38: bl      0x7F3AF7BC
    {
            ctx->lr = 0x7F2B9F3Cu;
            ctx->pc = 0x7F3AF7BCu;
            return;
    }

label_7F2B9F3C:
    ctx->pc = 0x7F2B9F3Cu;
    ctx->downcount -= 5;
    // 7F2B9F3C: stw     r3, 4076(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4076);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2B9F40:
    ctx->pc = 0x7F2B9F40u;
    // 7F2B9F40: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9F44:
    ctx->pc = 0x7F2B9F44u;
    // 7F2B9F44: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2B9F48:
    ctx->pc = 0x7F2B9F48u;
    // 7F2B9F48: lwz     r3, 464(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9F4C:
    ctx->pc = 0x7F2B9F4Cu;
    // 7F2B9F4C: bl      0x7F3B09C0
    {
            ctx->lr = 0x7F2B9F50u;
            ctx->pc = 0x7F3B09C0u;
            return;
    }

label_7F2B9F50:
    ctx->pc = 0x7F2B9F50u;
    ctx->downcount -= 4;
    // 7F2B9F50: lwz     r3, 464(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(464);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2B9F54:
    ctx->pc = 0x7F2B9F54u;
    // 7F2B9F54: lwz     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9F58:
    ctx->pc = 0x7F2B9F58u;
    // 7F2B9F58: cmplwi  r0, 0x0000
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

label_7F2B9F5C:
    ctx->pc = 0x7F2B9F5Cu;
    // 7F2B9F5C: bc    4, 2, 0x7F2B9F70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9F70;
        }
    }

label_7F2B9F60:
    ctx->pc = 0x7F2B9F60u;
    ctx->downcount -= 2;
    // 7F2B9F60: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2B9F64:
    ctx->pc = 0x7F2B9F64u;
    // 7F2B9F64: bl      0x7F3B0820
    {
            ctx->lr = 0x7F2B9F68u;
            ctx->pc = 0x7F3B0820u;
            return;
    }

label_7F2B9F68:
    ctx->pc = 0x7F2B9F68u;
    ctx->downcount -= 2;
    // 7F2B9F68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2B9F6C:
    ctx->pc = 0x7F2B9F6Cu;
    // 7F2B9F6C: stw     r0, 4076(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4076);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9F70:
    ctx->pc = 0x7F2B9F70u;
    ctx->downcount -= 1;
    // 7F2B9F70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2B9F74:
    ctx->pc = 0x7F2B9F74u;
    ctx->downcount -= 16;
    // 7F2B9F74: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2B9F78:
    ctx->pc = 0x7F2B9F78u;
    // 7F2B9F78: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9F7C:
    ctx->pc = 0x7F2B9F7Cu;
    // 7F2B9F7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2B9F80:
    ctx->pc = 0x7F2B9F80u;
    // 7F2B9F80: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2B9F84:
    ctx->pc = 0x7F2B9F84u;
    // 7F2B9F84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2B9F88:
    ctx->pc = 0x7F2B9F88u;
    ctx->downcount -= 7;
    // 7F2B9F88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2B9F8C:
    ctx->pc = 0x7F2B9F8Cu;
    // 7F2B9F8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2B9F90:
    ctx->pc = 0x7F2B9F90u;
    // 7F2B9F90: or   r8, r7, r7
    {
        ctx->gpr[8] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2B9F94:
    ctx->pc = 0x7F2B9F94u;
    // 7F2B9F94: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2B9F98:
    ctx->pc = 0x7F2B9F98u;
    // 7F2B9F98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9F9C:
    ctx->pc = 0x7F2B9F9Cu;
    // 7F2B9F9C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_7F2B9FA0:
    ctx->pc = 0x7F2B9FA0u;
    // 7F2B9FA0: bl      0x7F0F9C84
    {
            ctx->lr = 0x7F2B9FA4u;
            ctx->pc = 0x7F0F9C84u;
            return;
    }

label_7F2B9FA4:
    ctx->pc = 0x7F2B9FA4u;
    ctx->downcount -= 5;
    // 7F2B9FA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2B9FA8:
    ctx->pc = 0x7F2B9FA8u;
    // 7F2B9FA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2B9FAC:
    ctx->pc = 0x7F2B9FACu;
    // 7F2B9FAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2B9FB0:
    ctx->pc = 0x7F2B9FB0u;
    // 7F2B9FB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2B9FB4:
    ctx->pc = 0x7F2B9FB4u;
    ctx->downcount -= 19;
    // 7F2B9FB4: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2B9FB8:
    ctx->pc = 0x7F2B9FB8u;
    // 7F2B9FB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2B9FBC:
    ctx->pc = 0x7F2B9FBCu;
    // 7F2B9FBC: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2B9FC0:
    ctx->pc = 0x7F2B9FC0u;
    // 7F2B9FC0: stfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2B9FC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F2B9FC4:
    ctx->pc = 0x7F2B9FC4u;
    // 7F2B9FC4: psq_st   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2B9FC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F2B9FC4u);
        if (ctx->exception) return;
    }

label_7F2B9FC8:
    ctx->pc = 0x7F2B9FC8u;
    // 7F2B9FC8: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2B9FCC:
    ctx->pc = 0x7F2B9FCCu;
    // 7F2B9FCC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2B9FD0:
    ctx->pc = 0x7F2B9FD0u;
    // 7F2B9FD0: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F2B9FD4:
    ctx->pc = 0x7F2B9FD4u;
    // 7F2B9FD4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2B9FD8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2B9FD8:
    ctx->pc = 0x7F2B9FD8u;
    ctx->downcount -= 2;
    // 7F2B9FD8: cmplwi  r3, 0x0000
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

label_7F2B9FDC:
    ctx->pc = 0x7F2B9FDCu;
    // 7F2B9FDC: bc    12, 2, 0x7F2B9FF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2B9FF8;
        }
    }

label_7F2B9FE0:
    ctx->pc = 0x7F2B9FE0u;
    ctx->downcount -= 1;
    // 7F2B9FE0: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2B9FE4u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2B9FE4:
    ctx->pc = 0x7F2B9FE4u;
    ctx->downcount -= 2;
    // 7F2B9FE4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2B9FE8:
    ctx->pc = 0x7F2B9FE8u;
    // 7F2B9FE8: bl      0x7F3C6780
    {
            ctx->lr = 0x7F2B9FECu;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F2B9FEC:
    ctx->pc = 0x7F2B9FECu;
    ctx->downcount -= 3;
    // 7F2B9FEC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2B9FF0:
    ctx->pc = 0x7F2B9FF0u;
    // 7F2B9FF0: addi    r4, r29, 64
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(64);

label_7F2B9FF4:
    ctx->pc = 0x7F2B9FF4u;
    // 7F2B9FF4: bl      0x7F28FFBC
    {
            ctx->lr = 0x7F2B9FF8u;
            ctx->pc = 0x7F28FFBCu;
            return;
    }

label_7F2B9FF8:
    ctx->pc = 0x7F2B9FF8u;
    ctx->downcount -= 28;
    // 7F2B9FF8: lwz     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2B9FFC:
    ctx->pc = 0x7F2B9FFCu;
    // 7F2B9FFC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BA000:
    ctx->pc = 0x7F2BA000u;
    // 7F2BA000: lwz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA004:
    ctx->pc = 0x7F2BA004u;
    // 7F2BA004: addi    r5, r3, 12832
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2BA008:
    ctx->pc = 0x7F2BA008u;
    // 7F2BA008: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F2BA00C:
    ctx->pc = 0x7F2BA00Cu;
    // 7F2BA00C: stw     r4, 1280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1280);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BA010:
    ctx->pc = 0x7F2BA010u;
    // 7F2BA010: stw     r0, 1284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA014:
    ctx->pc = 0x7F2BA014u;
    // 7F2BA014: lwz     r4, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA018:
    ctx->pc = 0x7F2BA018u;
    // 7F2BA018: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA01C:
    ctx->pc = 0x7F2BA01Cu;
    // 7F2BA01C: stw     r4, 1288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BA020:
    ctx->pc = 0x7F2BA020u;
    // 7F2BA020: stw     r0, 1292(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA024:
    ctx->pc = 0x7F2BA024u;
    // 7F2BA024: lwz     r4, 64(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA028:
    ctx->pc = 0x7F2BA028u;
    // 7F2BA028: lwz     r0, 68(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA02C:
    ctx->pc = 0x7F2BA02Cu;
    // 7F2BA02C: stw     r4, 1296(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1296);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BA030:
    ctx->pc = 0x7F2BA030u;
    // 7F2BA030: stw     r0, 1300(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA034:
    ctx->pc = 0x7F2BA034u;
    // 7F2BA034: lwz     r4, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA038:
    ctx->pc = 0x7F2BA038u;
    // 7F2BA038: lwz     r0, 76(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA03C:
    ctx->pc = 0x7F2BA03Cu;
    // 7F2BA03C: stw     r4, 1304(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1304);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BA040:
    ctx->pc = 0x7F2BA040u;
    // 7F2BA040: stw     r0, 1308(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA044:
    ctx->pc = 0x7F2BA044u;
    // 7F2BA044: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA048:
    ctx->pc = 0x7F2BA048u;
    // 7F2BA048: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA04C:
    ctx->pc = 0x7F2BA04Cu;
    // 7F2BA04C: stw     r4, 1248(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1248);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BA050:
    ctx->pc = 0x7F2BA050u;
    // 7F2BA050: stw     r0, 1252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1252);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA054:
    ctx->pc = 0x7F2BA054u;
    // 7F2BA054: lwz     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA058:
    ctx->pc = 0x7F2BA058u;
    // 7F2BA058: lwz     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA05C:
    ctx->pc = 0x7F2BA05Cu;
    // 7F2BA05C: stw     r4, 1256(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1256);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BA060:
    ctx->pc = 0x7F2BA060u;
    // 7F2BA060: stw     r0, 1260(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA064:
    ctx->pc = 0x7F2BA064u;
    // 7F2BA064: bl      0x7F023EA8
    {
            ctx->lr = 0x7F2BA068u;
            ctx->pc = 0x7F023EA8u;
            return;
    }

label_7F2BA068:
    ctx->pc = 0x7F2BA068u;
    ctx->downcount -= 6;
    // 7F2BA068: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BA06C:
    ctx->pc = 0x7F2BA06Cu;
    // 7F2BA06C: lwz     r0, 236(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(236);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA070:
    ctx->pc = 0x7F2BA070u;
    // 7F2BA070: addi    r4, r3, -5728
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5728);

label_7F2BA074:
    ctx->pc = 0x7F2BA074u;
    // 7F2BA074: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F2BA078:
    ctx->pc = 0x7F2BA078u;
    // 7F2BA078: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA07C:
    ctx->pc = 0x7F2BA07Cu;
    // 7F2BA07C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA080u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA080:
    ctx->pc = 0x7F2BA080u;
    ctx->downcount -= 2;
    // 7F2BA080: cmplwi  r3, 0x0000
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

label_7F2BA084:
    ctx->pc = 0x7F2BA084u;
    // 7F2BA084: bc    12, 2, 0x7F2BA0B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA0B8;
        }
    }

label_7F2BA088:
    ctx->pc = 0x7F2BA088u;
    ctx->downcount -= 1;
    // 7F2BA088: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2BA08Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2BA08C:
    ctx->pc = 0x7F2BA08Cu;
    ctx->downcount -= 2;
    // 7F2BA08C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2BA090:
    ctx->pc = 0x7F2BA090u;
    // 7F2BA090: bl      0x7F3C6780
    {
            ctx->lr = 0x7F2BA094u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F2BA094:
    ctx->pc = 0x7F2BA094u;
    ctx->downcount -= 9;
    // 7F2BA094: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA098:
    ctx->pc = 0x7F2BA098u;
    // 7F2BA098: sth     r0, 104(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA09C:
    ctx->pc = 0x7F2BA09Cu;
    // 7F2BA09C: sth     r0, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA0A0:
    ctx->pc = 0x7F2BA0A0u;
    // 7F2BA0A0: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA0A4:
    ctx->pc = 0x7F2BA0A4u;
    // 7F2BA0A4: sth     r0, 106(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA0A8:
    ctx->pc = 0x7F2BA0A8u;
    // 7F2BA0A8: sth     r0, 98(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA0AC:
    ctx->pc = 0x7F2BA0ACu;
    // 7F2BA0AC: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA0B0:
    ctx->pc = 0x7F2BA0B0u;
    // 7F2BA0B0: sth     r0, 108(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(108);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA0B4:
    ctx->pc = 0x7F2BA0B4u;
    // 7F2BA0B4: sth     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA0B8:
    ctx->pc = 0x7F2BA0B8u;
    ctx->downcount -= 6;
    // 7F2BA0B8: lwz     r4, 96(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA0BC:
    ctx->pc = 0x7F2BA0BCu;
    // 7F2BA0BC: li      r3, 108
    ctx->gpr[3] = (u32)(s32)(108);

label_7F2BA0C0:
    ctx->pc = 0x7F2BA0C0u;
    // 7F2BA0C0: lwz     r0, 100(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA0C4:
    ctx->pc = 0x7F2BA0C4u;
    // 7F2BA0C4: stw     r4, 1312(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1312);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BA0C8:
    ctx->pc = 0x7F2BA0C8u;
    // 7F2BA0C8: stw     r0, 1316(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1316);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA0CC:
    ctx->pc = 0x7F2BA0CCu;
    // 7F2BA0CC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA0D0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA0D0:
    ctx->pc = 0x7F2BA0D0u;
    ctx->downcount -= 2;
    // 7F2BA0D0: cmplwi  r3, 0x0000
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

label_7F2BA0D4:
    ctx->pc = 0x7F2BA0D4u;
    // 7F2BA0D4: bc    12, 2, 0x7F2BA100
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA100;
        }
    }

label_7F2BA0D8:
    ctx->pc = 0x7F2BA0D8u;
    ctx->downcount -= 1;
    // 7F2BA0D8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BA0DCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BA0DC:
    ctx->pc = 0x7F2BA0DCu;
    ctx->downcount -= 9;
    // 7F2BA0DC: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2BA0E0:
    ctx->pc = 0x7F2BA0E0u;
    // 7F2BA0E0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2BA0E4:
    ctx->pc = 0x7F2BA0E4u;
    // 7F2BA0E4: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BA0E8:
    ctx->pc = 0x7F2BA0E8u;
    // 7F2BA0E8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2BA0EC:
    ctx->pc = 0x7F2BA0ECu;
    // 7F2BA0EC: lfd     f1, 26288(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA0ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2BA0F0:
    ctx->pc = 0x7F2BA0F0u;
    // 7F2BA0F0: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA0F4:
    ctx->pc = 0x7F2BA0F4u;
    // 7F2BA0F4: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA0F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2BA0F8:
    ctx->pc = 0x7F2BA0F8u;
    // 7F2BA0F8: fsubs   f31, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2BA0F8u)) return;
    ppc_fsubs(ctx, 31, 0, 1);

label_7F2BA0FC:
    ctx->pc = 0x7F2BA0FCu;
    // 7F2BA0FC: b       0x7F2BA130
    {
            goto label_7F2BA130;
    }

label_7F2BA100:
    ctx->pc = 0x7F2BA100u;
    ctx->downcount -= 5;
    // 7F2BA100: lwz     r3, 228(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BA104:
    ctx->pc = 0x7F2BA104u;
    // 7F2BA104: addi    r4, r29, 64
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(64);

label_7F2BA108:
    ctx->pc = 0x7F2BA108u;
    // 7F2BA108: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_7F2BA10C:
    ctx->pc = 0x7F2BA10Cu;
    // 7F2BA10C: li      r6, 16400
    ctx->gpr[6] = (u32)(s32)(16400);

label_7F2BA110:
    ctx->pc = 0x7F2BA110u;
    // 7F2BA110: bl      0x7F106A30
    {
            ctx->lr = 0x7F2BA114u;
            ctx->pc = 0x7F106A30u;
            return;
    }

label_7F2BA114:
    ctx->pc = 0x7F2BA114u;
    ctx->downcount -= 2;
    // 7F2BA114: cmpwi   r3, 0
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

label_7F2BA118:
    ctx->pc = 0x7F2BA118u;
    // 7F2BA118: bc    12, 2, 0x7F2BA128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA128;
        }
    }

label_7F2BA11C:
    ctx->pc = 0x7F2BA11Cu;
    ctx->downcount -= 1;
    // 7F2BA11C: bl      0x7F106FDC
    {
            ctx->lr = 0x7F2BA120u;
            ctx->pc = 0x7F106FDCu;
            return;
    }

label_7F2BA120:
    ctx->pc = 0x7F2BA120u;
    ctx->downcount -= 2;
    // 7F2BA120: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2BA120u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_7F2BA124:
    ctx->pc = 0x7F2BA124u;
    // 7F2BA124: b       0x7F2BA130
    {
            goto label_7F2BA130;
    }

label_7F2BA128:
    ctx->pc = 0x7F2BA128u;
    ctx->downcount -= 2;
    // 7F2BA128: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2BA12C:
    ctx->pc = 0x7F2BA12Cu;
    // 7F2BA12C: lfs     f31, 26272(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA12Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F2BA130:
    ctx->pc = 0x7F2BA130u;
    ctx->downcount -= 3;
    // 7F2BA130: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_7F2BA134:
    ctx->pc = 0x7F2BA134u;
    // 7F2BA134: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BA138:
    ctx->pc = 0x7F2BA138u;
    // 7F2BA138: bl      0x7F2900CC
    {
            ctx->lr = 0x7F2BA13Cu;
            ctx->pc = 0x7F2900CCu;
            return;
    }

label_7F2BA13C:
    ctx->pc = 0x7F2BA13Cu;
    ctx->downcount -= 8;
    // 7F2BA13C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2BA140:
    ctx->pc = 0x7F2BA140u;
    // 7F2BA140: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BA144:
    ctx->pc = 0x7F2BA144u;
    // 7F2BA144: sth     r0, 3904(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3904);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA148:
    ctx->pc = 0x7F2BA148u;
    // 7F2BA148: addi    r4, r3, 13880
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BA14C:
    ctx->pc = 0x7F2BA14Cu;
    // 7F2BA14C: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F2BA150:
    ctx->pc = 0x7F2BA150u;
    // 7F2BA150: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA154:
    ctx->pc = 0x7F2BA154u;
    // 7F2BA154: lha     r4, 294(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(294);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BA158:
    ctx->pc = 0x7F2BA158u;
    // 7F2BA158: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2BA15Cu;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2BA15C:
    ctx->pc = 0x7F2BA15Cu;
    ctx->downcount -= 6;
    // 7F2BA15C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA160:
    ctx->pc = 0x7F2BA160u;
    // 7F2BA160: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA164:
    ctx->pc = 0x7F2BA164u;
    // 7F2BA164: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2BA168:
    ctx->pc = 0x7F2BA168u;
    // 7F2BA168: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2BA16C:
    ctx->pc = 0x7F2BA16Cu;
    // 7F2BA16C: cmpwi   r30, 3
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

label_7F2BA170:
    ctx->pc = 0x7F2BA170u;
    // 7F2BA170: bc    12, 2, 0x7F2BA178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA178;
        }
    }

label_7F2BA174:
    ctx->pc = 0x7F2BA174u;
    ctx->downcount -= 1;
    // 7F2BA174: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA178:
    ctx->pc = 0x7F2BA178u;
    ctx->downcount -= 1;
    // 7F2BA178: bl      0x7F291F7C
    {
            ctx->lr = 0x7F2BA17Cu;
            ctx->pc = 0x7F291F7Cu;
            return;
    }

label_7F2BA17C:
    ctx->pc = 0x7F2BA17Cu;
    ctx->downcount -= 7;
    // 7F2BA17C: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2BA180:
    ctx->pc = 0x7F2BA180u;
    // 7F2BA180: fmr    f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F2BA180u)) return;
    ctx->fpr[2] = ctx->fpr[31];

label_7F2BA184:
    ctx->pc = 0x7F2BA184u;
    // 7F2BA184: rlwinm r31, r30, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0xFFFFFFFCu;
    }

label_7F2BA188:
    ctx->pc = 0x7F2BA188u;
    // 7F2BA188: addi    r3, r29, 64
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(64);

label_7F2BA18C:
    ctx->pc = 0x7F2BA18Cu;
    // 7F2BA18C: addi    r28, r4, 23892
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(23892);

label_7F2BA190:
    ctx->pc = 0x7F2BA190u;
    // 7F2BA190: lfsx    f1, r28, r31
    if (!ppc_fp_available_inline(ctx, 0x7F2BA190u)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[31];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2BA194:
    ctx->pc = 0x7F2BA194u;
    // 7F2BA194: bl      0x7F023FB4
    {
            ctx->lr = 0x7F2BA198u;
            ctx->pc = 0x7F023FB4u;
            return;
    }

label_7F2BA198:
    ctx->pc = 0x7F2BA198u;
    ctx->downcount -= 13;
    // 7F2BA198: lfsx    f0, r28, r31
    if (!ppc_fp_available_inline(ctx, 0x7F2BA198u)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[31];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2BA19C:
    ctx->pc = 0x7F2BA19Cu;
    // 7F2BA19C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BA1A0:
    ctx->pc = 0x7F2BA1A0u;
    // 7F2BA1A0: addi    r5, r3, -5676
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5676);

label_7F2BA1A4:
    ctx->pc = 0x7F2BA1A4u;
    // 7F2BA1A4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA1A8:
    ctx->pc = 0x7F2BA1A8u;
    // 7F2BA1A8: stfs     f0, 2804(r29)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA1A8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2804);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BA1AC:
    ctx->pc = 0x7F2BA1ACu;
    // 7F2BA1AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA1B0:
    ctx->pc = 0x7F2BA1B0u;
    // 7F2BA1B0: addi    r0, r29, 464
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(464);

label_7F2BA1B4:
    ctx->pc = 0x7F2BA1B4u;
    // 7F2BA1B4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA1B8:
    ctx->pc = 0x7F2BA1B8u;
    // 7F2BA1B8: stw     r6, -5672(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BA1BC:
    ctx->pc = 0x7F2BA1BCu;
    // 7F2BA1BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA1C0:
    ctx->pc = 0x7F2BA1C0u;
    // 7F2BA1C0: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BA1C4:
    ctx->pc = 0x7F2BA1C4u;
    // 7F2BA1C4: stw     r0, 2496(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2496);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA1C8:
    ctx->pc = 0x7F2BA1C8u;
    // 7F2BA1C8: bl      0x7F29D408
    {
            ctx->lr = 0x7F2BA1CCu;
            ctx->pc = 0x7F29D408u;
            return;
    }

label_7F2BA1CC:
    ctx->pc = 0x7F2BA1CCu;
    ctx->downcount -= 2;
    // 7F2BA1CC: lwz     r3, 2480(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2480);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BA1D0:
    ctx->pc = 0x7F2BA1D0u;
    // 7F2BA1D0: bl      0x7F2920A0
    {
            ctx->lr = 0x7F2BA1D4u;
            ctx->pc = 0x7F2920A0u;
            return;
    }

label_7F2BA1D4:
    ctx->pc = 0x7F2BA1D4u;
    ctx->downcount -= 15;
    // 7F2BA1D4: addi    r0, r29, 464
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(464);

label_7F2BA1D8:
    ctx->pc = 0x7F2BA1D8u;
    // 7F2BA1D8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BA1DC:
    ctx->pc = 0x7F2BA1DCu;
    // 7F2BA1DC: stw     r0, 2520(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(2520);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA1E0:
    ctx->pc = 0x7F2BA1E0u;
    // 7F2BA1E0: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BA1E4:
    ctx->pc = 0x7F2BA1E4u;
    // 7F2BA1E4: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2BA1E8:
    ctx->pc = 0x7F2BA1E8u;
    // 7F2BA1E8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA1EC:
    ctx->pc = 0x7F2BA1ECu;
    // 7F2BA1EC: lwz     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2BA1F0:
    ctx->pc = 0x7F2BA1F0u;
    // 7F2BA1F0: addi    r0, r4, 21208
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(21208);

label_7F2BA1F4:
    ctx->pc = 0x7F2BA1F4u;
    // 7F2BA1F4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BA1F8:
    ctx->pc = 0x7F2BA1F8u;
    // 7F2BA1F8: lha     r4, 298(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(298);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BA1FC:
    ctx->pc = 0x7F2BA1FCu;
    // 7F2BA1FC: mulli   r4, r4, 24
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)24);

label_7F2BA200:
    ctx->pc = 0x7F2BA200u;
    // 7F2BA200: add   r4, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F2BA204:
    ctx->pc = 0x7F2BA204u;
    // 7F2BA204: bl      0x7F29DA3C
    {
            ctx->lr = 0x7F2BA208u;
            ctx->pc = 0x7F29DA3Cu;
            return;
    }

label_7F2BA208:
    ctx->pc = 0x7F2BA208u;
    ctx->downcount -= 3;
    // 7F2BA208: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_7F2BA20C:
    ctx->pc = 0x7F2BA20Cu;
    // 7F2BA20C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BA210:
    ctx->pc = 0x7F2BA210u;
    // 7F2BA210: bl      0x7F2900F0
    {
            ctx->lr = 0x7F2BA214u;
            ctx->pc = 0x7F2900F0u;
            return;
    }

label_7F2BA214:
    ctx->pc = 0x7F2BA214u;
    ctx->downcount -= 6;
    // 7F2BA214: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BA218:
    ctx->pc = 0x7F2BA218u;
    // 7F2BA218: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BA21C:
    ctx->pc = 0x7F2BA21Cu;
    // 7F2BA21C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BA220:
    ctx->pc = 0x7F2BA220u;
    // 7F2BA220: lha     r0, 298(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(298);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BA224:
    ctx->pc = 0x7F2BA224u;
    // 7F2BA224: cmpwi   r0, 16
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BA228:
    ctx->pc = 0x7F2BA228u;
    // 7F2BA228: bc    12, 2, 0x7F2BA23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA23C;
        }
    }

label_7F2BA22C:
    ctx->pc = 0x7F2BA22Cu;
    ctx->downcount -= 2;
    // 7F2BA22C: cmpwi   r0, 22
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

label_7F2BA230:
    ctx->pc = 0x7F2BA230u;
    // 7F2BA230: bc    12, 2, 0x7F2BA23C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA23C;
        }
    }

label_7F2BA234:
    ctx->pc = 0x7F2BA234u;
    ctx->downcount -= 2;
    // 7F2BA234: cmpwi   r0, 23
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(23);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BA238:
    ctx->pc = 0x7F2BA238u;
    // 7F2BA238: bc    4, 2, 0x7F2BA2A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA2A4;
        }
    }

label_7F2BA23C:
    ctx->pc = 0x7F2BA23Cu;
    ctx->downcount -= 4;
    // 7F2BA23C: lis     r4, 32555
    ctx->gpr[4] = ((u32)(s32)(32555) << 16);

label_7F2BA240:
    ctx->pc = 0x7F2BA240u;
    // 7F2BA240: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA244:
    ctx->pc = 0x7F2BA244u;
    // 7F2BA244: addi    r4, r4, 6176
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6176);

label_7F2BA248:
    ctx->pc = 0x7F2BA248u;
    // 7F2BA248: bl      0x7F290920
    {
            ctx->lr = 0x7F2BA24Cu;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F2BA24C:
    ctx->pc = 0x7F2BA24Cu;
    ctx->downcount -= 13;
    // 7F2BA24C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BA250:
    ctx->pc = 0x7F2BA250u;
    // 7F2BA250: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F2BA254:
    ctx->pc = 0x7F2BA254u;
    // 7F2BA254: addi    r5, r3, -5660
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2BA258:
    ctx->pc = 0x7F2BA258u;
    // 7F2BA258: addi    r3, r29, 464
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(464);

label_7F2BA25C:
    ctx->pc = 0x7F2BA25Cu;
    // 7F2BA25C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2BA260:
    ctx->pc = 0x7F2BA260u;
    // 7F2BA260: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F2BA264:
    ctx->pc = 0x7F2BA264u;
    // 7F2BA264: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA268:
    ctx->pc = 0x7F2BA268u;
    // 7F2BA268: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA26C:
    ctx->pc = 0x7F2BA26Cu;
    // 7F2BA26C: lwz     r5, 1040(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1040);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2BA270:
    ctx->pc = 0x7F2BA270u;
    // 7F2BA270: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BA274:
    ctx->pc = 0x7F2BA274u;
    // 7F2BA274: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2BA278:
    ctx->pc = 0x7F2BA278u;
    // 7F2BA278: lha     r5, 106(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(106);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BA27C:
    ctx->pc = 0x7F2BA27Cu;
    // 7F2BA27C: bl      0x7F042C94
    {
            ctx->lr = 0x7F2BA280u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F2BA280:
    ctx->pc = 0x7F2BA280u;
    ctx->downcount -= 9;
    // 7F2BA280: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BA284:
    ctx->pc = 0x7F2BA284u;
    // 7F2BA284: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2BA288:
    ctx->pc = 0x7F2BA288u;
    // 7F2BA288: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2BA28C:
    ctx->pc = 0x7F2BA28Cu;
    // 7F2BA28C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BA290:
    ctx->pc = 0x7F2BA290u;
    // 7F2BA290: lwz     r3, 1040(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1040);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BA294:
    ctx->pc = 0x7F2BA294u;
    // 7F2BA294: lha     r3, 106(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(106);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BA298:
    ctx->pc = 0x7F2BA298u;
    // 7F2BA298: stw     r3, 1320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1320);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BA29C:
    ctx->pc = 0x7F2BA29Cu;
    // 7F2BA29C: stw     r0, 1324(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA2A0:
    ctx->pc = 0x7F2BA2A0u;
    // 7F2BA2A0: b       0x7F2BA2E4
    {
            goto label_7F2BA2E4;
    }

label_7F2BA2A4:
    ctx->pc = 0x7F2BA2A4u;
    ctx->downcount -= 2;
    // 7F2BA2A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA2A8:
    ctx->pc = 0x7F2BA2A8u;
    // 7F2BA2A8: bl      0x7F29507C
    {
            ctx->lr = 0x7F2BA2ACu;
            ctx->pc = 0x7F29507Cu;
            return;
    }

label_7F2BA2AC:
    ctx->pc = 0x7F2BA2ACu;
    ctx->downcount -= 9;
    // 7F2BA2AC: lis     r4, 16
    ctx->gpr[4] = ((u32)(s32)(16) << 16);

label_7F2BA2B0:
    ctx->pc = 0x7F2BA2B0u;
    // 7F2BA2B0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA2B4:
    ctx->pc = 0x7F2BA2B4u;
    // 7F2BA2B4: addi    r8, r4, -1
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F2BA2B8:
    ctx->pc = 0x7F2BA2B8u;
    // 7F2BA2B8: addi    r3, r29, 464
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(464);

label_7F2BA2BC:
    ctx->pc = 0x7F2BA2BCu;
    // 7F2BA2BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA2C0:
    ctx->pc = 0x7F2BA2C0u;
    // 7F2BA2C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA2C4:
    ctx->pc = 0x7F2BA2C4u;
    // 7F2BA2C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BA2C8:
    ctx->pc = 0x7F2BA2C8u;
    // 7F2BA2C8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F2BA2CC:
    ctx->pc = 0x7F2BA2CCu;
    // 7F2BA2CC: bl      0x7F042C94
    {
            ctx->lr = 0x7F2BA2D0u;
            ctx->pc = 0x7F042C94u;
            return;
    }

label_7F2BA2D0:
    ctx->pc = 0x7F2BA2D0u;
    ctx->downcount -= 2;
    // 7F2BA2D0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA2D4:
    ctx->pc = 0x7F2BA2D4u;
    // 7F2BA2D4: bl      0x7F29507C
    {
            ctx->lr = 0x7F2BA2D8u;
            ctx->pc = 0x7F29507Cu;
            return;
    }

label_7F2BA2D8:
    ctx->pc = 0x7F2BA2D8u;
    ctx->downcount -= 3;
    // 7F2BA2D8: stw     r3, 1320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1320);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BA2DC:
    ctx->pc = 0x7F2BA2DCu;
    // 7F2BA2DC: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2BA2E0:
    ctx->pc = 0x7F2BA2E0u;
    // 7F2BA2E0: stw     r0, 1324(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA2E4:
    ctx->pc = 0x7F2BA2E4u;
    ctx->downcount -= 2;
    // 7F2BA2E4: li      r3, 105
    ctx->gpr[3] = (u32)(s32)(105);

label_7F2BA2E8:
    ctx->pc = 0x7F2BA2E8u;
    // 7F2BA2E8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA2ECu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA2EC:
    ctx->pc = 0x7F2BA2ECu;
    ctx->downcount -= 2;
    // 7F2BA2EC: cmplwi  r3, 0x0000
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

label_7F2BA2F0:
    ctx->pc = 0x7F2BA2F0u;
    // 7F2BA2F0: bc    12, 2, 0x7F2BA300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA300;
        }
    }

label_7F2BA2F4:
    ctx->pc = 0x7F2BA2F4u;
    ctx->downcount -= 1;
    // 7F2BA2F4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BA2F8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BA2F8:
    ctx->pc = 0x7F2BA2F8u;
    ctx->downcount -= 2;
    // 7F2BA2F8: sth     r3, 3962(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3962);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2BA2FC:
    ctx->pc = 0x7F2BA2FCu;
    // 7F2BA2FC: b       0x7F2BA308
    {
            goto label_7F2BA308;
    }

label_7F2BA300:
    ctx->pc = 0x7F2BA300u;
    ctx->downcount -= 2;
    // 7F2BA300: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BA304:
    ctx->pc = 0x7F2BA304u;
    // 7F2BA304: sth     r0, 3962(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3962);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA308:
    ctx->pc = 0x7F2BA308u;
    ctx->downcount -= 2;
    // 7F2BA308: li      r3, 111
    ctx->gpr[3] = (u32)(s32)(111);

label_7F2BA30C:
    ctx->pc = 0x7F2BA30Cu;
    // 7F2BA30C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA310u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA310:
    ctx->pc = 0x7F2BA310u;
    ctx->downcount -= 2;
    // 7F2BA310: cmplwi  r3, 0x0000
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

label_7F2BA314:
    ctx->pc = 0x7F2BA314u;
    // 7F2BA314: bc    12, 2, 0x7F2BA330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA330;
        }
    }

label_7F2BA318:
    ctx->pc = 0x7F2BA318u;
    ctx->downcount -= 1;
    // 7F2BA318: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BA31Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BA31C:
    ctx->pc = 0x7F2BA31Cu;
    ctx->downcount -= 5;
    // 7F2BA31C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA320:
    ctx->pc = 0x7F2BA320u;
    // 7F2BA320: addi    r4, r4, -5660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5660);

label_7F2BA324:
    ctx->pc = 0x7F2BA324u;
    // 7F2BA324: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA328:
    ctx->pc = 0x7F2BA328u;
    // 7F2BA328: stw     r3, 1080(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1080);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BA32C:
    ctx->pc = 0x7F2BA32Cu;
    // 7F2BA32C: b       0x7F2BA344
    {
            goto label_7F2BA344;
    }

label_7F2BA330:
    ctx->pc = 0x7F2BA330u;
    ctx->downcount -= 5;
    // 7F2BA330: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BA334:
    ctx->pc = 0x7F2BA334u;
    // 7F2BA334: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2BA338:
    ctx->pc = 0x7F2BA338u;
    // 7F2BA338: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2BA33C:
    ctx->pc = 0x7F2BA33Cu;
    // 7F2BA33C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BA340:
    ctx->pc = 0x7F2BA340u;
    // 7F2BA340: stw     r0, 1080(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1080);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA344:
    ctx->pc = 0x7F2BA344u;
    ctx->downcount -= 1;
    // 7F2BA344: bl      0x7F291A18
    {
            ctx->lr = 0x7F2BA348u;
            ctx->pc = 0x7F291A18u;
            return;
    }

label_7F2BA348:
    ctx->pc = 0x7F2BA348u;
    ctx->downcount -= 2;
    // 7F2BA348: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA34C:
    ctx->pc = 0x7F2BA34Cu;
    // 7F2BA34C: bl      0x7F290D34
    {
            ctx->lr = 0x7F2BA350u;
            ctx->pc = 0x7F290D34u;
            return;
    }

label_7F2BA350:
    ctx->pc = 0x7F2BA350u;
    ctx->downcount -= 2;
    // 7F2BA350: rlwinm. r0, r3, 0, 26, 26
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

label_7F2BA354:
    ctx->pc = 0x7F2BA354u;
    // 7F2BA354: bc    4, 2, 0x7F2BA38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA38C;
        }
    }

label_7F2BA358:
    ctx->pc = 0x7F2BA358u;
    ctx->downcount -= 2;
    // 7F2BA358: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA35C:
    ctx->pc = 0x7F2BA35Cu;
    // 7F2BA35C: bl      0x7F290D50
    {
            ctx->lr = 0x7F2BA360u;
            ctx->pc = 0x7F290D50u;
            return;
    }

label_7F2BA360:
    ctx->pc = 0x7F2BA360u;
    ctx->downcount -= 2;
    // 7F2BA360: rlwinm. r0, r3, 0, 26, 26
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

label_7F2BA364:
    ctx->pc = 0x7F2BA364u;
    // 7F2BA364: bc    4, 2, 0x7F2BA38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA38C;
        }
    }

label_7F2BA368:
    ctx->pc = 0x7F2BA368u;
    ctx->downcount -= 5;
    // 7F2BA368: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2BA36C:
    ctx->pc = 0x7F2BA36Cu;
    // 7F2BA36C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA370:
    ctx->pc = 0x7F2BA370u;
    // 7F2BA370: addi    r4, r4, 23964
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23964);

label_7F2BA374:
    ctx->pc = 0x7F2BA374u;
    // 7F2BA374: lwzx    r4, r4, r31
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA378:
    ctx->pc = 0x7F2BA378u;
    // 7F2BA378: bl      0x7F290920
    {
            ctx->lr = 0x7F2BA37Cu;
            ctx->pc = 0x7F290920u;
            return;
    }

label_7F2BA37C:
    ctx->pc = 0x7F2BA37Cu;
    ctx->downcount -= 2;
    // 7F2BA37C: cmpwi   r30, 3
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

label_7F2BA380:
    ctx->pc = 0x7F2BA380u;
    // 7F2BA380: bc    4, 2, 0x7F2BA38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA38C;
        }
    }

label_7F2BA384:
    ctx->pc = 0x7F2BA384u;
    ctx->downcount -= 2;
    // 7F2BA384: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA388:
    ctx->pc = 0x7F2BA388u;
    // 7F2BA388: bl      0x7F29158C
    {
            ctx->lr = 0x7F2BA38Cu;
            ctx->pc = 0x7F29158Cu;
            return;
    }

label_7F2BA38C:
    ctx->pc = 0x7F2BA38Cu;
    ctx->downcount -= 3;
    // 7F2BA38C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA390:
    ctx->pc = 0x7F2BA390u;
    // 7F2BA390: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA394:
    ctx->pc = 0x7F2BA394u;
    // 7F2BA394: bl      0x7F290A84
    {
            ctx->lr = 0x7F2BA398u;
            ctx->pc = 0x7F290A84u;
            return;
    }

label_7F2BA398:
    ctx->pc = 0x7F2BA398u;
    ctx->downcount -= 3;
    // 7F2BA398: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2BA39C:
    ctx->pc = 0x7F2BA39Cu;
    // 7F2BA39C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BA3A0:
    ctx->pc = 0x7F2BA3A0u;
    // 7F2BA3A0: bl      0x7F290054
    {
            ctx->lr = 0x7F2BA3A4u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2BA3A4:
    ctx->pc = 0x7F2BA3A4u;
    ctx->downcount -= 5;
    // 7F2BA3A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BA3A8:
    ctx->pc = 0x7F2BA3A8u;
    // 7F2BA3A8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BA3AC:
    ctx->pc = 0x7F2BA3ACu;
    // 7F2BA3AC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BA3B0:
    ctx->pc = 0x7F2BA3B0u;
    // 7F2BA3B0: or.   r0, r4, r0
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

label_7F2BA3B4:
    ctx->pc = 0x7F2BA3B4u;
    // 7F2BA3B4: bc    12, 2, 0x7F2BA3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA3C0;
        }
    }

label_7F2BA3B8:
    ctx->pc = 0x7F2BA3B8u;
    ctx->downcount -= 2;
    // 7F2BA3B8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2BA3BC:
    ctx->pc = 0x7F2BA3BCu;
    // 7F2BA3BC: b       0x7F2BA3C4
    {
            goto label_7F2BA3C4;
    }

label_7F2BA3C0:
    ctx->pc = 0x7F2BA3C0u;
    ctx->downcount -= 1;
    // 7F2BA3C0: lha     r0, 3904(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3904);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BA3C4:
    ctx->pc = 0x7F2BA3C4u;
    ctx->downcount -= 6;
    // 7F2BA3C4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BA3C8:
    ctx->pc = 0x7F2BA3C8u;
    // 7F2BA3C8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2BA3CC:
    ctx->pc = 0x7F2BA3CCu;
    // 7F2BA3CC: lwz     r4, 13880(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(13880);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA3D0:
    ctx->pc = 0x7F2BA3D0u;
    // 7F2BA3D0: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F2BA3D4:
    ctx->pc = 0x7F2BA3D4u;
    // 7F2BA3D4: sth     r0, 294(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(294);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA3D8:
    ctx->pc = 0x7F2BA3D8u;
    // 7F2BA3D8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA3DCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA3DC:
    ctx->pc = 0x7F2BA3DCu;
    ctx->downcount -= 2;
    // 7F2BA3DC: cmplwi  r3, 0x0000
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

label_7F2BA3E0:
    ctx->pc = 0x7F2BA3E0u;
    // 7F2BA3E0: bc    12, 2, 0x7F2BA3EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA3EC;
        }
    }

label_7F2BA3E4:
    ctx->pc = 0x7F2BA3E4u;
    ctx->downcount -= 1;
    // 7F2BA3E4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BA3E8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BA3E8:
    ctx->pc = 0x7F2BA3E8u;
    ctx->downcount -= 1;
    // 7F2BA3E8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA3EC:
    ctx->pc = 0x7F2BA3ECu;
    ctx->downcount -= 2;
    // 7F2BA3EC: rlwinm. r0, r28, 0, 31, 31
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

label_7F2BA3F0:
    ctx->pc = 0x7F2BA3F0u;
    // 7F2BA3F0: bc    12, 2, 0x7F2BA400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA400;
        }
    }

label_7F2BA3F4:
    ctx->pc = 0x7F2BA3F4u;
    ctx->downcount -= 3;
    // 7F2BA3F4: addi    r3, r29, 464
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(464);

label_7F2BA3F8:
    ctx->pc = 0x7F2BA3F8u;
    // 7F2BA3F8: addi    r4, r29, 64
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(64);

label_7F2BA3FC:
    ctx->pc = 0x7F2BA3FCu;
    // 7F2BA3FC: bl      0x7F1F6378
    {
            ctx->lr = 0x7F2BA400u;
            ctx->pc = 0x7F1F6378u;
            return;
    }

label_7F2BA400:
    ctx->pc = 0x7F2BA400u;
    ctx->downcount -= 2;
    // 7F2BA400: rlwinm. r0, r28, 0, 30, 30
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

label_7F2BA404:
    ctx->pc = 0x7F2BA404u;
    // 7F2BA404: bc    4, 2, 0x7F2BA438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA438;
        }
    }

label_7F2BA408:
    ctx->pc = 0x7F2BA408u;
    ctx->downcount -= 7;
    // 7F2BA408: lwz     r4, 464(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA40C:
    ctx->pc = 0x7F2BA40Cu;
    // 7F2BA40C: addi    r5, r29, 64
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(64);

label_7F2BA410:
    ctx->pc = 0x7F2BA410u;
    // 7F2BA410: addi    r6, r29, 508
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(508);

label_7F2BA414:
    ctx->pc = 0x7F2BA414u;
    // 7F2BA414: addi    r7, r29, 3920
    ctx->gpr[7] = ctx->gpr[29] + (u32)(s32)(3920);

label_7F2BA418:
    ctx->pc = 0x7F2BA418u;
    // 7F2BA418: addi    r3, r4, 5628
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(5628);

label_7F2BA41C:
    ctx->pc = 0x7F2BA41Cu;
    // 7F2BA41C: addi    r4, r4, 6924
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(6924);

label_7F2BA420:
    ctx->pc = 0x7F2BA420u;
    // 7F2BA420: bl      0x7F3484E4
    {
            ctx->lr = 0x7F2BA424u;
            ctx->pc = 0x7F3484E4u;
            return;
    }

label_7F2BA424:
    ctx->pc = 0x7F2BA424u;
    ctx->downcount -= 3;
    // 7F2BA424: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA428:
    ctx->pc = 0x7F2BA428u;
    // 7F2BA428: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA42C:
    ctx->pc = 0x7F2BA42Cu;
    // 7F2BA42C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2BA430u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2BA430:
    ctx->pc = 0x7F2BA430u;
    ctx->downcount -= 2;
    // 7F2BA430: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2BA434:
    ctx->pc = 0x7F2BA434u;
    // 7F2BA434: stw     r0, 3920(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(3920);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA438:
    ctx->pc = 0x7F2BA438u;
    ctx->downcount -= 2;
    // 7F2BA438: li      r3, 84
    ctx->gpr[3] = (u32)(s32)(84);

label_7F2BA43C:
    ctx->pc = 0x7F2BA43Cu;
    // 7F2BA43C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA440u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA440:
    ctx->pc = 0x7F2BA440u;
    ctx->downcount -= 2;
    // 7F2BA440: cmplwi  r3, 0x0000
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

label_7F2BA444:
    ctx->pc = 0x7F2BA444u;
    // 7F2BA444: bc    4, 2, 0x7F2BA450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA450;
        }
    }

label_7F2BA448:
    ctx->pc = 0x7F2BA448u;
    ctx->downcount -= 2;
    // 7F2BA448: li      r4, 3000
    ctx->gpr[4] = (u32)(s32)(3000);

label_7F2BA44C:
    ctx->pc = 0x7F2BA44Cu;
    // 7F2BA44C: b       0x7F2BA458
    {
            goto label_7F2BA458;
    }

label_7F2BA450:
    ctx->pc = 0x7F2BA450u;
    ctx->downcount -= 1;
    // 7F2BA450: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BA454u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BA454:
    ctx->pc = 0x7F2BA454u;
    ctx->downcount -= 1;
    // 7F2BA454: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA458:
    ctx->pc = 0x7F2BA458u;
    ctx->downcount -= 2;
    // 7F2BA458: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA45C:
    ctx->pc = 0x7F2BA45Cu;
    // 7F2BA45C: bl      0x7F28FC30
    {
            ctx->lr = 0x7F2BA460u;
            ctx->pc = 0x7F28FC30u;
            return;
    }

label_7F2BA460:
    ctx->pc = 0x7F2BA460u;
    ctx->downcount -= 4;
    // 7F2BA460: stw     r3, 4012(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4012);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BA464:
    ctx->pc = 0x7F2BA464u;
    // 7F2BA464: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA468:
    ctx->pc = 0x7F2BA468u;
    // 7F2BA468: lwz     r4, 4012(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4012);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA46C:
    ctx->pc = 0x7F2BA46Cu;
    // 7F2BA46C: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2BA470u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2BA470:
    ctx->pc = 0x7F2BA470u;
    ctx->downcount -= 2;
    // 7F2BA470: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_7F2BA474:
    ctx->pc = 0x7F2BA474u;
    // 7F2BA474: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA478u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA478:
    ctx->pc = 0x7F2BA478u;
    ctx->downcount -= 2;
    // 7F2BA478: cmplwi  r3, 0x0000
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

label_7F2BA47C:
    ctx->pc = 0x7F2BA47Cu;
    // 7F2BA47C: bc    12, 2, 0x7F2BA4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA4BC;
        }
    }

label_7F2BA480:
    ctx->pc = 0x7F2BA480u;
    ctx->downcount -= 1;
    // 7F2BA480: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BA484u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BA484:
    ctx->pc = 0x7F2BA484u;
    ctx->downcount -= 11;
    // 7F2BA484: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F2BA488:
    ctx->pc = 0x7F2BA488u;
    // 7F2BA488: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F2BA48C:
    ctx->pc = 0x7F2BA48Cu;
    // 7F2BA48C: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BA490:
    ctx->pc = 0x7F2BA490u;
    // 7F2BA490: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2BA494:
    ctx->pc = 0x7F2BA494u;
    // 7F2BA494: lfd     f1, 26288(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA494u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26288);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2BA498:
    ctx->pc = 0x7F2BA498u;
    // 7F2BA498: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BA49C:
    ctx->pc = 0x7F2BA49Cu;
    // 7F2BA49C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA4A0:
    ctx->pc = 0x7F2BA4A0u;
    // 7F2BA4A0: lfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA4A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2BA4A4:
    ctx->pc = 0x7F2BA4A4u;
    // 7F2BA4A4: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F2BA4A4u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F2BA4A8:
    ctx->pc = 0x7F2BA4A8u;
    // 7F2BA4A8: stfs     f0, -6300(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA4A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BA4AC:
    ctx->pc = 0x7F2BA4ACu;
    // 7F2BA4AC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BA4B0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BA4B0:
    ctx->pc = 0x7F2BA4B0u;
    ctx->downcount -= 3;
    // 7F2BA4B0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA4B4:
    ctx->pc = 0x7F2BA4B4u;
    // 7F2BA4B4: stw     r3, -6304(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6304);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BA4B8:
    ctx->pc = 0x7F2BA4B8u;
    // 7F2BA4B8: b       0x7F2BA4DC
    {
            goto label_7F2BA4DC;
    }

label_7F2BA4BC:
    ctx->pc = 0x7F2BA4BCu;
    ctx->downcount -= 8;
    // 7F2BA4BC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2BA4C0:
    ctx->pc = 0x7F2BA4C0u;
    // 7F2BA4C0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA4C4:
    ctx->pc = 0x7F2BA4C4u;
    // 7F2BA4C4: addi    r5, r3, 27648
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(27648);

label_7F2BA4C8:
    ctx->pc = 0x7F2BA4C8u;
    // 7F2BA4C8: li      r0, 768
    ctx->gpr[0] = (u32)(s32)(768);

label_7F2BA4CC:
    ctx->pc = 0x7F2BA4CCu;
    // 7F2BA4CC: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA4CCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2BA4D0:
    ctx->pc = 0x7F2BA4D0u;
    // 7F2BA4D0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BA4D4:
    ctx->pc = 0x7F2BA4D4u;
    // 7F2BA4D4: stw     r0, -6304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA4D8:
    ctx->pc = 0x7F2BA4D8u;
    // 7F2BA4D8: stfs     f0, -6300(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA4D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6300);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BA4DC:
    ctx->pc = 0x7F2BA4DCu;
    ctx->downcount -= 18;
    // 7F2BA4DC: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F2BA4DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F2BA4DCu);
        if (ctx->exception) return;
    }

label_7F2BA4E0:
    ctx->pc = 0x7F2BA4E0u;
    // 7F2BA4E0: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA4E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F2BA4E4:
    ctx->pc = 0x7F2BA4E4u;
    // 7F2BA4E4: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BA4E8:
    ctx->pc = 0x7F2BA4E8u;
    // 7F2BA4E8: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA4EC:
    ctx->pc = 0x7F2BA4ECu;
    // 7F2BA4EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BA4F0:
    ctx->pc = 0x7F2BA4F0u;
    // 7F2BA4F0: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_7F2BA4F4:
    ctx->pc = 0x7F2BA4F4u;
    // 7F2BA4F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BA4F8:
    ctx->pc = 0x7F2BA4F8u;
    ctx->downcount -= 34;
    // 7F2BA4F8: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BA4FC:
    ctx->pc = 0x7F2BA4FCu;
    // 7F2BA4FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BA500:
    ctx->pc = 0x7F2BA500u;
    // 7F2BA500: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F2BA504:
    ctx->pc = 0x7F2BA504u;
    // 7F2BA504: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2BA508:
    ctx->pc = 0x7F2BA508u;
    // 7F2BA508: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA50C:
    ctx->pc = 0x7F2BA50Cu;
    // 7F2BA50C: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2BA510:
    ctx->pc = 0x7F2BA510u;
    // 7F2BA510: stmw     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BA514:
    ctx->pc = 0x7F2BA514u;
    // 7F2BA514: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA518:
    ctx->pc = 0x7F2BA518u;
    // 7F2BA518: addi    r3, r5, 26360
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(26360);

label_7F2BA51C:
    ctx->pc = 0x7F2BA51Cu;
    // 7F2BA51C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BA520:
    ctx->pc = 0x7F2BA520u;
    // 7F2BA520: lfs     f0, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA520u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2BA524:
    ctx->pc = 0x7F2BA524u;
    // 7F2BA524: addi    r30, r31, 1712
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(1712);

label_7F2BA528:
    ctx->pc = 0x7F2BA528u;
    // 7F2BA528: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BA52C:
    ctx->pc = 0x7F2BA52Cu;
    // 7F2BA52C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2BA530:
    ctx->pc = 0x7F2BA530u;
    // 7F2BA530: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2BA534:
    ctx->pc = 0x7F2BA534u;
    // 7F2BA534: stw     r30, -5692(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5692);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2BA538:
    ctx->pc = 0x7F2BA538u;
    // 7F2BA538: lis     r5, 512
    ctx->gpr[5] = ((u32)(s32)(512) << 16);

label_7F2BA53C:
    ctx->pc = 0x7F2BA53Cu;
    // 7F2BA53C: addi    r4, r5, 16400
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(16400);

label_7F2BA540:
    ctx->pc = 0x7F2BA540u;
    // 7F2BA540: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA544:
    ctx->pc = 0x7F2BA544u;
    // 7F2BA544: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA544u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BA548:
    ctx->pc = 0x7F2BA548u;
    // 7F2BA548: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BA54C:
    ctx->pc = 0x7F2BA54Cu;
    // 7F2BA54C: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA54Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BA550:
    ctx->pc = 0x7F2BA550u;
    // 7F2BA550: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA550u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BA554:
    ctx->pc = 0x7F2BA554u;
    // 7F2BA554: bl      0x7F014788
    {
            ctx->lr = 0x7F2BA558u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F2BA558:
    ctx->pc = 0x7F2BA558u;
    ctx->downcount -= 3;
    // 7F2BA558: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA55C:
    ctx->pc = 0x7F2BA55Cu;
    // 7F2BA55C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BA560:
    ctx->pc = 0x7F2BA560u;
    // 7F2BA560: bl      0x7F01488C
    {
            ctx->lr = 0x7F2BA564u;
            ctx->pc = 0x7F01488Cu;
            return;
    }

label_7F2BA564:
    ctx->pc = 0x7F2BA564u;
    ctx->downcount -= 13;
    // 7F2BA564: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BA568:
    ctx->pc = 0x7F2BA568u;
    // 7F2BA568: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2BA56C:
    ctx->pc = 0x7F2BA56Cu;
    // 7F2BA56C: addi    r5, r3, 13880
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BA570:
    ctx->pc = 0x7F2BA570u;
    // 7F2BA570: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BA574:
    ctx->pc = 0x7F2BA574u;
    // 7F2BA574: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2BA578:
    ctx->pc = 0x7F2BA578u;
    // 7F2BA578: addi    r9, r4, 12832
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F2BA57C:
    ctx->pc = 0x7F2BA57Cu;
    // 7F2BA57C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA580:
    ctx->pc = 0x7F2BA580u;
    // 7F2BA580: addi    r4, r31, 1904
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(1904);

label_7F2BA584:
    ctx->pc = 0x7F2BA584u;
    // 7F2BA584: lha     r0, 286(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BA588:
    ctx->pc = 0x7F2BA588u;
    // 7F2BA588: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2BA58C:
    ctx->pc = 0x7F2BA58Cu;
    // 7F2BA58C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F2BA590:
    ctx->pc = 0x7F2BA590u;
    // 7F2BA590: rlwinm r6, r0, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_7F2BA594:
    ctx->pc = 0x7F2BA594u;
    // 7F2BA594: bl      0x7F014B78
    {
            ctx->lr = 0x7F2BA598u;
            ctx->pc = 0x7F014B78u;
            return;
    }

label_7F2BA598:
    ctx->pc = 0x7F2BA598u;
    ctx->downcount -= 5;
    // 7F2BA598: lis     r4, 32554
    ctx->gpr[4] = ((u32)(s32)(32554) << 16);

label_7F2BA59C:
    ctx->pc = 0x7F2BA59Cu;
    // 7F2BA59C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA5A0:
    ctx->pc = 0x7F2BA5A0u;
    // 7F2BA5A0: addi    r4, r4, -17648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-17648);

label_7F2BA5A4:
    ctx->pc = 0x7F2BA5A4u;
    // 7F2BA5A4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA5A8:
    ctx->pc = 0x7F2BA5A8u;
    // 7F2BA5A8: bl      0x7F014B6C
    {
            ctx->lr = 0x7F2BA5ACu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F2BA5AC:
    ctx->pc = 0x7F2BA5ACu;
    ctx->downcount -= 3;
    // 7F2BA5AC: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2BA5B0:
    ctx->pc = 0x7F2BA5B0u;
    // 7F2BA5B0: addi    r4, r31, 96
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(96);

label_7F2BA5B4:
    ctx->pc = 0x7F2BA5B4u;
    // 7F2BA5B4: bl      0x7F3B2FD0
    {
            ctx->lr = 0x7F2BA5B8u;
            ctx->pc = 0x7F3B2FD0u;
            return;
    }

label_7F2BA5B8:
    ctx->pc = 0x7F2BA5B8u;
    ctx->downcount -= 2;
    // 7F2BA5B8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2BA5BC:
    ctx->pc = 0x7F2BA5BCu;
    // 7F2BA5BC: bl      0x7F3B2EE8
    {
            ctx->lr = 0x7F2BA5C0u;
            ctx->pc = 0x7F3B2EE8u;
            return;
    }

label_7F2BA5C0:
    ctx->pc = 0x7F2BA5C0u;
    ctx->downcount -= 6;
    // 7F2BA5C0: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2BA5C4:
    ctx->pc = 0x7F2BA5C4u;
    // 7F2BA5C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA5C8:
    ctx->pc = 0x7F2BA5C8u;
    // 7F2BA5C8: addi    r5, r4, 18312
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(18312);

label_7F2BA5CC:
    ctx->pc = 0x7F2BA5CCu;
    // 7F2BA5CC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F2BA5D0:
    ctx->pc = 0x7F2BA5D0u;
    // 7F2BA5D0: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2BA5D4:
    ctx->pc = 0x7F2BA5D4u;
    // 7F2BA5D4: bl      0x7F014964
    {
            ctx->lr = 0x7F2BA5D8u;
            ctx->pc = 0x7F014964u;
            return;
    }

label_7F2BA5D8:
    ctx->pc = 0x7F2BA5D8u;
    ctx->downcount -= 2;
    // 7F2BA5D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA5DC:
    ctx->pc = 0x7F2BA5DCu;
    // 7F2BA5DC: bl      0x7F0148A0
    {
            ctx->lr = 0x7F2BA5E0u;
            ctx->pc = 0x7F0148A0u;
            return;
    }

label_7F2BA5E0:
    ctx->pc = 0x7F2BA5E0u;
    ctx->downcount -= 18;
    // 7F2BA5E0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2BA5E4:
    ctx->pc = 0x7F2BA5E4u;
    // 7F2BA5E4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2BA5E8:
    ctx->pc = 0x7F2BA5E8u;
    // 7F2BA5E8: addi    r5, r3, 26436
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(26436);

label_7F2BA5EC:
    ctx->pc = 0x7F2BA5ECu;
    // 7F2BA5EC: lfs     f0, 26440(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA5ECu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26440);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2BA5F0:
    ctx->pc = 0x7F2BA5F0u;
    // 7F2BA5F0: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA5F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2BA5F4:
    ctx->pc = 0x7F2BA5F4u;
    // 7F2BA5F4: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BA5F8:
    ctx->pc = 0x7F2BA5F8u;
    // 7F2BA5F8: lis     r4, 4352
    ctx->gpr[4] = ((u32)(s32)(4352) << 16);

label_7F2BA5FC:
    ctx->pc = 0x7F2BA5FCu;
    // 7F2BA5FC: addi    r30, r31, 2176
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(2176);

label_7F2BA600:
    ctx->pc = 0x7F2BA600u;
    // 7F2BA600: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2BA604:
    ctx->pc = 0x7F2BA604u;
    // 7F2BA604: addi    r8, r3, 12832
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(12832);

label_7F2BA608:
    ctx->pc = 0x7F2BA608u;
    // 7F2BA608: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA60C:
    ctx->pc = 0x7F2BA60Cu;
    // 7F2BA60C: addi    r4, r4, 132
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(132);

label_7F2BA610:
    ctx->pc = 0x7F2BA610u;
    // 7F2BA610: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA610u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2BA614:
    ctx->pc = 0x7F2BA614u;
    // 7F2BA614: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_7F2BA618:
    ctx->pc = 0x7F2BA618u;
    // 7F2BA618: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BA61C:
    ctx->pc = 0x7F2BA61Cu;
    // 7F2BA61C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2BA620:
    ctx->pc = 0x7F2BA620u;
    // 7F2BA620: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BA624:
    ctx->pc = 0x7F2BA624u;
    // 7F2BA624: bl      0x7F014788
    {
            ctx->lr = 0x7F2BA628u;
            ctx->pc = 0x7F014788u;
            return;
    }

label_7F2BA628:
    ctx->pc = 0x7F2BA628u;
    ctx->downcount -= 4;
    // 7F2BA628: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA62C:
    ctx->pc = 0x7F2BA62Cu;
    // 7F2BA62C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA630:
    ctx->pc = 0x7F2BA630u;
    // 7F2BA630: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F2BA634:
    ctx->pc = 0x7F2BA634u;
    // 7F2BA634: bl      0x7F014B60
    {
            ctx->lr = 0x7F2BA638u;
            ctx->pc = 0x7F014B60u;
            return;
    }

label_7F2BA638:
    ctx->pc = 0x7F2BA638u;
    ctx->downcount -= 5;
    // 7F2BA638: lis     r4, 32554
    ctx->gpr[4] = ((u32)(s32)(32554) << 16);

label_7F2BA63C:
    ctx->pc = 0x7F2BA63Cu;
    // 7F2BA63C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BA640:
    ctx->pc = 0x7F2BA640u;
    // 7F2BA640: addi    r4, r4, -18436
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-18436);

label_7F2BA644:
    ctx->pc = 0x7F2BA644u;
    // 7F2BA644: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA648:
    ctx->pc = 0x7F2BA648u;
    // 7F2BA648: bl      0x7F014B6C
    {
            ctx->lr = 0x7F2BA64Cu;
            ctx->pc = 0x7F014B6Cu;
            return;
    }

label_7F2BA64C:
    ctx->pc = 0x7F2BA64Cu;
    ctx->downcount -= 16;
    // 7F2BA64C: lmw     r29, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BA650:
    ctx->pc = 0x7F2BA650u;
    // 7F2BA650: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA654:
    ctx->pc = 0x7F2BA654u;
    // 7F2BA654: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BA658:
    ctx->pc = 0x7F2BA658u;
    // 7F2BA658: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_7F2BA65C:
    ctx->pc = 0x7F2BA65Cu;
    // 7F2BA65C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BA660:
    ctx->pc = 0x7F2BA660u;
    ctx->downcount -= 9;
    // 7F2BA660: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BA664:
    ctx->pc = 0x7F2BA664u;
    // 7F2BA664: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BA668:
    ctx->pc = 0x7F2BA668u;
    // 7F2BA668: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA66C:
    ctx->pc = 0x7F2BA66Cu;
    // 7F2BA66C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2BA670:
    ctx->pc = 0x7F2BA670u;
    // 7F2BA670: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA674:
    ctx->pc = 0x7F2BA674u;
    // 7F2BA674: addi    r4, r4, -5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5872);

label_7F2BA678:
    ctx->pc = 0x7F2BA678u;
    // 7F2BA678: addi    r3, r3, 636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(636);

label_7F2BA67C:
    ctx->pc = 0x7F2BA67Cu;
    // 7F2BA67C: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F2BA680:
    ctx->pc = 0x7F2BA680u;
    // 7F2BA680: bl      0x7F0120F4
    {
            ctx->lr = 0x7F2BA684u;
            ctx->pc = 0x7F0120F4u;
            return;
    }

label_7F2BA684:
    ctx->pc = 0x7F2BA684u;
    ctx->downcount -= 5;
    // 7F2BA684: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA688:
    ctx->pc = 0x7F2BA688u;
    // 7F2BA688: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BA68C:
    ctx->pc = 0x7F2BA68Cu;
    // 7F2BA68C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BA690:
    ctx->pc = 0x7F2BA690u;
    // 7F2BA690: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BA694:
    ctx->pc = 0x7F2BA694u;
    ctx->downcount -= 10;
    // 7F2BA694: lwz     r4, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA698:
    ctx->pc = 0x7F2BA698u;
    // 7F2BA698: lis     r5, 32586
    ctx->gpr[5] = ((u32)(s32)(32586) << 16);

label_7F2BA69C:
    ctx->pc = 0x7F2BA69Cu;
    // 7F2BA69C: lwz     r0, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA6A0:
    ctx->pc = 0x7F2BA6A0u;
    // 7F2BA6A0: stwu     r4, 21980(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(21980);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_7F2BA6A4:
    ctx->pc = 0x7F2BA6A4u;
    // 7F2BA6A4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA6A8:
    ctx->pc = 0x7F2BA6A8u;
    // 7F2BA6A8: lwz     r4, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA6AC:
    ctx->pc = 0x7F2BA6ACu;
    // 7F2BA6AC: lwz     r0, 76(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA6B0:
    ctx->pc = 0x7F2BA6B0u;
    // 7F2BA6B0: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BA6B4:
    ctx->pc = 0x7F2BA6B4u;
    // 7F2BA6B4: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA6B8:
    ctx->pc = 0x7F2BA6B8u;
    // 7F2BA6B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BA6BC:
    ctx->pc = 0x7F2BA6BCu;
    ctx->downcount -= 6;
    // 7F2BA6BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BA6C0:
    ctx->pc = 0x7F2BA6C0u;
    // 7F2BA6C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BA6C4:
    ctx->pc = 0x7F2BA6C4u;
    // 7F2BA6C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA6C8:
    ctx->pc = 0x7F2BA6C8u;
    // 7F2BA6C8: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA6CC:
    ctx->pc = 0x7F2BA6CCu;
    // 7F2BA6CC: cmpwi   r0, 2
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

label_7F2BA6D0:
    ctx->pc = 0x7F2BA6D0u;
    // 7F2BA6D0: bc    4, 2, 0x7F2BA6DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA6DC;
        }
    }

label_7F2BA6D4:
    ctx->pc = 0x7F2BA6D4u;
    ctx->downcount -= 1;
    // 7F2BA6D4: bl      0x7F025C1C
    {
            ctx->lr = 0x7F2BA6D8u;
            ctx->pc = 0x7F025C1Cu;
            return;
    }

label_7F2BA6D8:
    ctx->pc = 0x7F2BA6D8u;
    ctx->downcount -= 1;
    // 7F2BA6D8: b       0x7F2BA6E0
    {
            goto label_7F2BA6E0;
    }

label_7F2BA6DC:
    ctx->pc = 0x7F2BA6DCu;
    ctx->downcount -= 1;
    // 7F2BA6DC: bl      0x7F026180
    {
            ctx->lr = 0x7F2BA6E0u;
            ctx->pc = 0x7F026180u;
            return;
    }

label_7F2BA6E0:
    ctx->pc = 0x7F2BA6E0u;
    ctx->downcount -= 5;
    // 7F2BA6E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA6E4:
    ctx->pc = 0x7F2BA6E4u;
    // 7F2BA6E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BA6E8:
    ctx->pc = 0x7F2BA6E8u;
    // 7F2BA6E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BA6EC:
    ctx->pc = 0x7F2BA6ECu;
    // 7F2BA6EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BA6F0:
    ctx->pc = 0x7F2BA6F0u;
    ctx->downcount -= 24;
    // 7F2BA6F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BA6F4:
    ctx->pc = 0x7F2BA6F4u;
    // 7F2BA6F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BA6F8:
    ctx->pc = 0x7F2BA6F8u;
    // 7F2BA6F8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA6FC:
    ctx->pc = 0x7F2BA6FCu;
    // 7F2BA6FC: lis     r5, 115
    ctx->gpr[5] = ((u32)(s32)(115) << 16);

label_7F2BA700:
    ctx->pc = 0x7F2BA700u;
    // 7F2BA700: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA704:
    ctx->pc = 0x7F2BA704u;
    // 7F2BA704: addi    r4, r4, -5852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5852);

label_7F2BA708:
    ctx->pc = 0x7F2BA708u;
    // 7F2BA708: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F2BA70C:
    ctx->pc = 0x7F2BA70Cu;
    // 7F2BA70C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BA710:
    ctx->pc = 0x7F2BA710u;
    // 7F2BA710: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA714:
    ctx->pc = 0x7F2BA714u;
    // 7F2BA714: addi    r3, r5, -4298
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-4298);

label_7F2BA718:
    ctx->pc = 0x7F2BA718u;
    // 7F2BA718: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2BA71C:
    ctx->pc = 0x7F2BA71Cu;
    // 7F2BA71C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA720:
    ctx->pc = 0x7F2BA720u;
    // 7F2BA720: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2BA724:
    ctx->pc = 0x7F2BA724u;
    // 7F2BA724: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F2BA728u;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F2BA728:
    ctx->pc = 0x7F2BA728u;
    ctx->downcount -= 5;
    // 7F2BA728: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA72C:
    ctx->pc = 0x7F2BA72Cu;
    // 7F2BA72C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2BA730:
    ctx->pc = 0x7F2BA730u;
    // 7F2BA730: stw     r31, 2792(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2792);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BA734:
    ctx->pc = 0x7F2BA734u;
    // 7F2BA734: li      r5, 768
    ctx->gpr[5] = (u32)(s32)(768);

label_7F2BA738:
    ctx->pc = 0x7F2BA738u;
    // 7F2BA738: bl      0x7F026EBC
    {
            ctx->lr = 0x7F2BA73Cu;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F2BA73C:
    ctx->pc = 0x7F2BA73Cu;
    ctx->downcount -= 3;
    // 7F2BA73C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA740:
    ctx->pc = 0x7F2BA740u;
    // 7F2BA740: addi    r4, r30, 96
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(96);

label_7F2BA744:
    ctx->pc = 0x7F2BA744u;
    // 7F2BA744: bl      0x7F026F30
    {
            ctx->lr = 0x7F2BA748u;
            ctx->pc = 0x7F026F30u;
            return;
    }

label_7F2BA748:
    ctx->pc = 0x7F2BA748u;
    ctx->downcount -= 3;
    // 7F2BA748: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA74C:
    ctx->pc = 0x7F2BA74Cu;
    // 7F2BA74C: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F2BA750:
    ctx->pc = 0x7F2BA750u;
    // 7F2BA750: bl      0x7F026F4C
    {
            ctx->lr = 0x7F2BA754u;
            ctx->pc = 0x7F026F4Cu;
            return;
    }

label_7F2BA754:
    ctx->pc = 0x7F2BA754u;
    ctx->downcount -= 4;
    // 7F2BA754: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2BA758:
    ctx->pc = 0x7F2BA758u;
    // 7F2BA758: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA75C:
    ctx->pc = 0x7F2BA75Cu;
    // 7F2BA75C: lfs     f1, 26624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA75Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2BA760:
    ctx->pc = 0x7F2BA760u;
    // 7F2BA760: bl      0x7F026F54
    {
            ctx->lr = 0x7F2BA764u;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F2BA764:
    ctx->pc = 0x7F2BA764u;
    ctx->downcount -= 5;
    // 7F2BA764: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA768:
    ctx->pc = 0x7F2BA768u;
    // 7F2BA768: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BA76C:
    ctx->pc = 0x7F2BA76Cu;
    // 7F2BA76C: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2BA770:
    ctx->pc = 0x7F2BA770u;
    // 7F2BA770: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2BA774:
    ctx->pc = 0x7F2BA774u;
    // 7F2BA774: bl      0x7F012018
    {
            ctx->lr = 0x7F2BA778u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2BA778:
    ctx->pc = 0x7F2BA778u;
    ctx->downcount -= 5;
    // 7F2BA778: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BA77C:
    ctx->pc = 0x7F2BA77Cu;
    // 7F2BA77C: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BA780:
    ctx->pc = 0x7F2BA780u;
    // 7F2BA780: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BA784:
    ctx->pc = 0x7F2BA784u;
    // 7F2BA784: or.   r0, r4, r0
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

label_7F2BA788:
    ctx->pc = 0x7F2BA788u;
    // 7F2BA788: bc    12, 2, 0x7F2BA7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA7A8;
        }
    }

label_7F2BA78C:
    ctx->pc = 0x7F2BA78Cu;
    ctx->downcount -= 6;
    // 7F2BA78C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA790:
    ctx->pc = 0x7F2BA790u;
    // 7F2BA790: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA794:
    ctx->pc = 0x7F2BA794u;
    // 7F2BA794: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2BA798:
    ctx->pc = 0x7F2BA798u;
    // 7F2BA798: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA79C:
    ctx->pc = 0x7F2BA79Cu;
    // 7F2BA79C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BA7A0:
    ctx->pc = 0x7F2BA7A0u;
    // 7F2BA7A0: bl      0x7F026928
    {
            ctx->lr = 0x7F2BA7A4u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F2BA7A4:
    ctx->pc = 0x7F2BA7A4u;
    ctx->downcount -= 1;
    // 7F2BA7A4: b       0x7F2BA7C0
    {
            goto label_7F2BA7C0;
    }

label_7F2BA7A8:
    ctx->pc = 0x7F2BA7A8u;
    ctx->downcount -= 6;
    // 7F2BA7A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA7AC:
    ctx->pc = 0x7F2BA7ACu;
    // 7F2BA7AC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F2BA7B0:
    ctx->pc = 0x7F2BA7B0u;
    // 7F2BA7B0: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2BA7B4:
    ctx->pc = 0x7F2BA7B4u;
    // 7F2BA7B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA7B8:
    ctx->pc = 0x7F2BA7B8u;
    // 7F2BA7B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BA7BC:
    ctx->pc = 0x7F2BA7BCu;
    // 7F2BA7BC: bl      0x7F026928
    {
            ctx->lr = 0x7F2BA7C0u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F2BA7C0:
    ctx->pc = 0x7F2BA7C0u;
    ctx->downcount -= 22;
    // 7F2BA7C0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA7C4:
    ctx->pc = 0x7F2BA7C4u;
    // 7F2BA7C4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BA7C8:
    ctx->pc = 0x7F2BA7C8u;
    // 7F2BA7C8: lwz     r0, -5852(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5852);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA7CC:
    ctx->pc = 0x7F2BA7CCu;
    // 7F2BA7CC: addi    r3, r3, -5768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5768);

label_7F2BA7D0:
    ctx->pc = 0x7F2BA7D0u;
    // 7F2BA7D0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F2BA7D4:
    ctx->pc = 0x7F2BA7D4u;
    // 7F2BA7D4: stwx    r31, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BA7D8:
    ctx->pc = 0x7F2BA7D8u;
    // 7F2BA7D8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BA7DC:
    ctx->pc = 0x7F2BA7DCu;
    // 7F2BA7DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA7E0:
    ctx->pc = 0x7F2BA7E0u;
    // 7F2BA7E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BA7E4:
    ctx->pc = 0x7F2BA7E4u;
    // 7F2BA7E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BA7E8:
    ctx->pc = 0x7F2BA7E8u;
    // 7F2BA7E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BA7EC:
    ctx->pc = 0x7F2BA7ECu;
    ctx->downcount -= 23;
    // 7F2BA7EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BA7F0:
    ctx->pc = 0x7F2BA7F0u;
    // 7F2BA7F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BA7F4:
    ctx->pc = 0x7F2BA7F4u;
    // 7F2BA7F4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA7F8:
    ctx->pc = 0x7F2BA7F8u;
    // 7F2BA7F8: lis     r5, 182
    ctx->gpr[5] = ((u32)(s32)(182) << 16);

label_7F2BA7FC:
    ctx->pc = 0x7F2BA7FCu;
    // 7F2BA7FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA800:
    ctx->pc = 0x7F2BA800u;
    // 7F2BA800: addi    r4, r4, -5852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5852);

label_7F2BA804:
    ctx->pc = 0x7F2BA804u;
    // 7F2BA804: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA808:
    ctx->pc = 0x7F2BA808u;
    // 7F2BA808: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BA80C:
    ctx->pc = 0x7F2BA80Cu;
    // 7F2BA80C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA810:
    ctx->pc = 0x7F2BA810u;
    // 7F2BA810: addi    r3, r5, -16479
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-16479);

label_7F2BA814:
    ctx->pc = 0x7F2BA814u;
    // 7F2BA814: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F2BA818:
    ctx->pc = 0x7F2BA818u;
    // 7F2BA818: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA81C:
    ctx->pc = 0x7F2BA81Cu;
    // 7F2BA81C: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F2BA820u;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F2BA820:
    ctx->pc = 0x7F2BA820u;
    ctx->downcount -= 5;
    // 7F2BA820: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA824:
    ctx->pc = 0x7F2BA824u;
    // 7F2BA824: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F2BA828:
    ctx->pc = 0x7F2BA828u;
    // 7F2BA828: stw     r31, 2796(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2796);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BA82C:
    ctx->pc = 0x7F2BA82Cu;
    // 7F2BA82C: li      r5, 1026
    ctx->gpr[5] = (u32)(s32)(1026);

label_7F2BA830:
    ctx->pc = 0x7F2BA830u;
    // 7F2BA830: bl      0x7F026EBC
    {
            ctx->lr = 0x7F2BA834u;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F2BA834:
    ctx->pc = 0x7F2BA834u;
    ctx->downcount -= 4;
    // 7F2BA834: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2BA838:
    ctx->pc = 0x7F2BA838u;
    // 7F2BA838: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA83C:
    ctx->pc = 0x7F2BA83Cu;
    // 7F2BA83C: lfs     f1, 26624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA83Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2BA840:
    ctx->pc = 0x7F2BA840u;
    // 7F2BA840: bl      0x7F026F54
    {
            ctx->lr = 0x7F2BA844u;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F2BA844:
    ctx->pc = 0x7F2BA844u;
    ctx->downcount -= 6;
    // 7F2BA844: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA848:
    ctx->pc = 0x7F2BA848u;
    // 7F2BA848: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2BA84C:
    ctx->pc = 0x7F2BA84Cu;
    // 7F2BA84C: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F2BA850:
    ctx->pc = 0x7F2BA850u;
    // 7F2BA850: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA854:
    ctx->pc = 0x7F2BA854u;
    // 7F2BA854: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BA858:
    ctx->pc = 0x7F2BA858u;
    // 7F2BA858: bl      0x7F026928
    {
            ctx->lr = 0x7F2BA85Cu;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F2BA85C:
    ctx->pc = 0x7F2BA85Cu;
    ctx->downcount -= 16;
    // 7F2BA85C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BA860:
    ctx->pc = 0x7F2BA860u;
    // 7F2BA860: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA864:
    ctx->pc = 0x7F2BA864u;
    // 7F2BA864: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BA868:
    ctx->pc = 0x7F2BA868u;
    // 7F2BA868: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BA86C:
    ctx->pc = 0x7F2BA86Cu;
    // 7F2BA86C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BA870:
    ctx->pc = 0x7F2BA870u;
    ctx->downcount -= 23;
    // 7F2BA870: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BA874:
    ctx->pc = 0x7F2BA874u;
    // 7F2BA874: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BA878:
    ctx->pc = 0x7F2BA878u;
    // 7F2BA878: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BA87C:
    ctx->pc = 0x7F2BA87Cu;
    // 7F2BA87C: lis     r5, 220
    ctx->gpr[5] = ((u32)(s32)(220) << 16);

label_7F2BA880:
    ctx->pc = 0x7F2BA880u;
    // 7F2BA880: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA884:
    ctx->pc = 0x7F2BA884u;
    // 7F2BA884: addi    r4, r4, -5852
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5852);

label_7F2BA888:
    ctx->pc = 0x7F2BA888u;
    // 7F2BA888: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F2BA88C:
    ctx->pc = 0x7F2BA88Cu;
    // 7F2BA88C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BA890:
    ctx->pc = 0x7F2BA890u;
    // 7F2BA890: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA894:
    ctx->pc = 0x7F2BA894u;
    // 7F2BA894: addi    r3, r5, -7219
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-7219);

label_7F2BA898:
    ctx->pc = 0x7F2BA898u;
    // 7F2BA898: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F2BA89C:
    ctx->pc = 0x7F2BA89Cu;
    // 7F2BA89C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BA8A0:
    ctx->pc = 0x7F2BA8A0u;
    // 7F2BA8A0: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F2BA8A4u;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F2BA8A4:
    ctx->pc = 0x7F2BA8A4u;
    ctx->downcount -= 5;
    // 7F2BA8A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA8A8:
    ctx->pc = 0x7F2BA8A8u;
    // 7F2BA8A8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_7F2BA8AC:
    ctx->pc = 0x7F2BA8ACu;
    // 7F2BA8AC: stw     r31, 2800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2800);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BA8B0:
    ctx->pc = 0x7F2BA8B0u;
    // 7F2BA8B0: li      r5, 512
    ctx->gpr[5] = (u32)(s32)(512);

label_7F2BA8B4:
    ctx->pc = 0x7F2BA8B4u;
    // 7F2BA8B4: bl      0x7F026EBC
    {
            ctx->lr = 0x7F2BA8B8u;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F2BA8B8:
    ctx->pc = 0x7F2BA8B8u;
    ctx->downcount -= 3;
    // 7F2BA8B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA8BC:
    ctx->pc = 0x7F2BA8BCu;
    // 7F2BA8BC: addi    r4, r30, 96
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(96);

label_7F2BA8C0:
    ctx->pc = 0x7F2BA8C0u;
    // 7F2BA8C0: bl      0x7F026F30
    {
            ctx->lr = 0x7F2BA8C4u;
            ctx->pc = 0x7F026F30u;
            return;
    }

label_7F2BA8C4:
    ctx->pc = 0x7F2BA8C4u;
    ctx->downcount -= 3;
    // 7F2BA8C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA8C8:
    ctx->pc = 0x7F2BA8C8u;
    // 7F2BA8C8: li      r4, 1000
    ctx->gpr[4] = (u32)(s32)(1000);

label_7F2BA8CC:
    ctx->pc = 0x7F2BA8CCu;
    // 7F2BA8CC: bl      0x7F026F4C
    {
            ctx->lr = 0x7F2BA8D0u;
            ctx->pc = 0x7F026F4Cu;
            return;
    }

label_7F2BA8D0:
    ctx->pc = 0x7F2BA8D0u;
    ctx->downcount -= 4;
    // 7F2BA8D0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2BA8D4:
    ctx->pc = 0x7F2BA8D4u;
    // 7F2BA8D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA8D8:
    ctx->pc = 0x7F2BA8D8u;
    // 7F2BA8D8: lfs     f1, 26624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2BA8D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2BA8DC:
    ctx->pc = 0x7F2BA8DCu;
    // 7F2BA8DC: bl      0x7F026F54
    {
            ctx->lr = 0x7F2BA8E0u;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F2BA8E0:
    ctx->pc = 0x7F2BA8E0u;
    ctx->downcount -= 5;
    // 7F2BA8E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA8E4:
    ctx->pc = 0x7F2BA8E4u;
    // 7F2BA8E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BA8E8:
    ctx->pc = 0x7F2BA8E8u;
    // 7F2BA8E8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2BA8EC:
    ctx->pc = 0x7F2BA8ECu;
    // 7F2BA8EC: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2BA8F0:
    ctx->pc = 0x7F2BA8F0u;
    // 7F2BA8F0: bl      0x7F012018
    {
            ctx->lr = 0x7F2BA8F4u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2BA8F4:
    ctx->pc = 0x7F2BA8F4u;
    ctx->downcount -= 5;
    // 7F2BA8F4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BA8F8:
    ctx->pc = 0x7F2BA8F8u;
    // 7F2BA8F8: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BA8FC:
    ctx->pc = 0x7F2BA8FCu;
    // 7F2BA8FC: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BA900:
    ctx->pc = 0x7F2BA900u;
    // 7F2BA900: or.   r0, r4, r0
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

label_7F2BA904:
    ctx->pc = 0x7F2BA904u;
    // 7F2BA904: bc    12, 2, 0x7F2BA924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA924;
        }
    }

label_7F2BA908:
    ctx->pc = 0x7F2BA908u;
    ctx->downcount -= 6;
    // 7F2BA908: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA90C:
    ctx->pc = 0x7F2BA90Cu;
    // 7F2BA90C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA910:
    ctx->pc = 0x7F2BA910u;
    // 7F2BA910: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2BA914:
    ctx->pc = 0x7F2BA914u;
    // 7F2BA914: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA918:
    ctx->pc = 0x7F2BA918u;
    // 7F2BA918: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BA91C:
    ctx->pc = 0x7F2BA91Cu;
    // 7F2BA91C: bl      0x7F026928
    {
            ctx->lr = 0x7F2BA920u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F2BA920:
    ctx->pc = 0x7F2BA920u;
    ctx->downcount -= 1;
    // 7F2BA920: b       0x7F2BA93C
    {
            goto label_7F2BA93C;
    }

label_7F2BA924:
    ctx->pc = 0x7F2BA924u;
    ctx->downcount -= 6;
    // 7F2BA924: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BA928:
    ctx->pc = 0x7F2BA928u;
    // 7F2BA928: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_7F2BA92C:
    ctx->pc = 0x7F2BA92Cu;
    // 7F2BA92C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2BA930:
    ctx->pc = 0x7F2BA930u;
    // 7F2BA930: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BA934:
    ctx->pc = 0x7F2BA934u;
    // 7F2BA934: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BA938:
    ctx->pc = 0x7F2BA938u;
    // 7F2BA938: bl      0x7F026928
    {
            ctx->lr = 0x7F2BA93Cu;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F2BA93C:
    ctx->pc = 0x7F2BA93Cu;
    ctx->downcount -= 19;
    // 7F2BA93C: lis     r3, 32556
    ctx->gpr[3] = ((u32)(s32)(32556) << 16);

label_7F2BA940:
    ctx->pc = 0x7F2BA940u;
    // 7F2BA940: addi    r0, r3, -22852
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-22852);

label_7F2BA944:
    ctx->pc = 0x7F2BA944u;
    // 7F2BA944: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA948:
    ctx->pc = 0x7F2BA948u;
    // 7F2BA948: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BA94C:
    ctx->pc = 0x7F2BA94Cu;
    // 7F2BA94C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA950:
    ctx->pc = 0x7F2BA950u;
    // 7F2BA950: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BA954:
    ctx->pc = 0x7F2BA954u;
    // 7F2BA954: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BA958:
    ctx->pc = 0x7F2BA958u;
    // 7F2BA958: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BA95C:
    ctx->pc = 0x7F2BA95Cu;
    ctx->downcount -= 17;
    // 7F2BA95C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BA960:
    ctx->pc = 0x7F2BA960u;
    // 7F2BA960: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BA964:
    ctx->pc = 0x7F2BA964u;
    // 7F2BA964: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA968:
    ctx->pc = 0x7F2BA968u;
    // 7F2BA968: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BA96C:
    ctx->pc = 0x7F2BA96Cu;
    // 7F2BA96C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BA970:
    ctx->pc = 0x7F2BA970u;
    // 7F2BA970: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F2BA974:
    ctx->pc = 0x7F2BA974u;
    // 7F2BA974: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA978u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA978:
    ctx->pc = 0x7F2BA978u;
    ctx->downcount -= 2;
    // 7F2BA978: cmplwi  r3, 0x0000
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

label_7F2BA97C:
    ctx->pc = 0x7F2BA97Cu;
    // 7F2BA97C: bc    12, 2, 0x7F2BA998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA998;
        }
    }

label_7F2BA980:
    ctx->pc = 0x7F2BA980u;
    ctx->downcount -= 1;
    // 7F2BA980: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2BA984u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2BA984:
    ctx->pc = 0x7F2BA984u;
    ctx->downcount -= 2;
    // 7F2BA984: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BA988:
    ctx->pc = 0x7F2BA988u;
    // 7F2BA988: bl      0x7F3C6780
    {
            ctx->lr = 0x7F2BA98Cu;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F2BA98C:
    ctx->pc = 0x7F2BA98Cu;
    ctx->downcount -= 3;
    // 7F2BA98C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BA990:
    ctx->pc = 0x7F2BA990u;
    // 7F2BA990: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2BA994:
    ctx->pc = 0x7F2BA994u;
    // 7F2BA994: bl      0x7F28FFBC
    {
            ctx->lr = 0x7F2BA998u;
            ctx->pc = 0x7F28FFBCu;
            return;
    }

label_7F2BA998:
    ctx->pc = 0x7F2BA998u;
    ctx->downcount -= 2;
    // 7F2BA998: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_7F2BA99C:
    ctx->pc = 0x7F2BA99Cu;
    // 7F2BA99C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BA9A0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BA9A0:
    ctx->pc = 0x7F2BA9A0u;
    ctx->downcount -= 2;
    // 7F2BA9A0: cmplwi  r3, 0x0000
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

label_7F2BA9A4:
    ctx->pc = 0x7F2BA9A4u;
    // 7F2BA9A4: bc    12, 2, 0x7F2BA9D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BA9D8;
        }
    }

label_7F2BA9A8:
    ctx->pc = 0x7F2BA9A8u;
    ctx->downcount -= 1;
    // 7F2BA9A8: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2BA9ACu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2BA9AC:
    ctx->pc = 0x7F2BA9ACu;
    ctx->downcount -= 2;
    // 7F2BA9AC: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BA9B0:
    ctx->pc = 0x7F2BA9B0u;
    // 7F2BA9B0: bl      0x7F3C6780
    {
            ctx->lr = 0x7F2BA9B4u;
            ctx->pc = 0x7F3C6780u;
            return;
    }

label_7F2BA9B4:
    ctx->pc = 0x7F2BA9B4u;
    ctx->downcount -= 9;
    // 7F2BA9B4: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA9B8:
    ctx->pc = 0x7F2BA9B8u;
    // 7F2BA9B8: sth     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA9BC:
    ctx->pc = 0x7F2BA9BCu;
    // 7F2BA9BC: sth     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA9C0:
    ctx->pc = 0x7F2BA9C0u;
    // 7F2BA9C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA9C4:
    ctx->pc = 0x7F2BA9C4u;
    // 7F2BA9C4: sth     r0, 106(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(106);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA9C8:
    ctx->pc = 0x7F2BA9C8u;
    // 7F2BA9C8: sth     r0, 98(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(98);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA9CC:
    ctx->pc = 0x7F2BA9CCu;
    // 7F2BA9CC: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BA9D0:
    ctx->pc = 0x7F2BA9D0u;
    // 7F2BA9D0: sth     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA9D4:
    ctx->pc = 0x7F2BA9D4u;
    // 7F2BA9D4: sth     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BA9D8:
    ctx->pc = 0x7F2BA9D8u;
    ctx->downcount -= 5;
    // 7F2BA9D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2BA9DC:
    ctx->pc = 0x7F2BA9DCu;
    // 7F2BA9DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BA9E0:
    ctx->pc = 0x7F2BA9E0u;
    // 7F2BA9E0: stw     r0, 2756(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2756);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BA9E4:
    ctx->pc = 0x7F2BA9E4u;
    // 7F2BA9E4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2BA9E8:
    ctx->pc = 0x7F2BA9E8u;
    // 7F2BA9E8: bl      0x7F290054
    {
            ctx->lr = 0x7F2BA9ECu;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2BA9EC:
    ctx->pc = 0x7F2BA9ECu;
    ctx->downcount -= 5;
    // 7F2BA9EC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BA9F0:
    ctx->pc = 0x7F2BA9F0u;
    // 7F2BA9F0: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BA9F4:
    ctx->pc = 0x7F2BA9F4u;
    // 7F2BA9F4: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BA9F8:
    ctx->pc = 0x7F2BA9F8u;
    // 7F2BA9F8: or.   r0, r4, r0
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

label_7F2BA9FC:
    ctx->pc = 0x7F2BA9FCu;
    // 7F2BA9FC: bc    12, 2, 0x7F2BAA10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BAA10;
        }
    }

label_7F2BAA00:
    ctx->pc = 0x7F2BAA00u;
    ctx->downcount -= 4;
    // 7F2BAA00: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BAA04:
    ctx->pc = 0x7F2BAA04u;
    // 7F2BAA04: addi    r0, r3, 24668
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(24668);

label_7F2BAA08:
    ctx->pc = 0x7F2BAA08u;
    // 7F2BAA08: or   r30, r0, r0
    {
        ctx->gpr[30] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2BAA0C:
    ctx->pc = 0x7F2BAA0Cu;
    // 7F2BAA0C: b       0x7F2BAA54
    {
            goto label_7F2BAA54;
    }

label_7F2BAA10:
    ctx->pc = 0x7F2BAA10u;
    ctx->downcount -= 5;
    // 7F2BAA10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BAA14:
    ctx->pc = 0x7F2BAA14u;
    // 7F2BAA14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BAA18:
    ctx->pc = 0x7F2BAA18u;
    // 7F2BAA18: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_7F2BAA1C:
    ctx->pc = 0x7F2BAA1Cu;
    // 7F2BAA1C: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2BAA20:
    ctx->pc = 0x7F2BAA20u;
    // 7F2BAA20: bl      0x7F012018
    {
            ctx->lr = 0x7F2BAA24u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2BAA24:
    ctx->pc = 0x7F2BAA24u;
    ctx->downcount -= 5;
    // 7F2BAA24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BAA28:
    ctx->pc = 0x7F2BAA28u;
    // 7F2BAA28: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BAA2C:
    ctx->pc = 0x7F2BAA2Cu;
    // 7F2BAA2C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BAA30:
    ctx->pc = 0x7F2BAA30u;
    // 7F2BAA30: or.   r0, r4, r0
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

label_7F2BAA34:
    ctx->pc = 0x7F2BAA34u;
    // 7F2BAA34: bc    12, 2, 0x7F2BAA48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BAA48;
        }
    }

label_7F2BAA38:
    ctx->pc = 0x7F2BAA38u;
    ctx->downcount -= 4;
    // 7F2BAA38: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BAA3C:
    ctx->pc = 0x7F2BAA3Cu;
    // 7F2BAA3C: addi    r3, r3, 24668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24668);

label_7F2BAA40:
    ctx->pc = 0x7F2BAA40u;
    // 7F2BAA40: addi    r30, r3, 24
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(24);

label_7F2BAA44:
    ctx->pc = 0x7F2BAA44u;
    // 7F2BAA44: b       0x7F2BAA54
    {
            goto label_7F2BAA54;
    }

label_7F2BAA48:
    ctx->pc = 0x7F2BAA48u;
    ctx->downcount -= 3;
    // 7F2BAA48: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BAA4C:
    ctx->pc = 0x7F2BAA4Cu;
    // 7F2BAA4C: addi    r3, r3, 24668
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24668);

label_7F2BAA50:
    ctx->pc = 0x7F2BAA50u;
    // 7F2BAA50: addi    r30, r3, 12
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(12);

label_7F2BAA54:
    ctx->pc = 0x7F2BAA54u;
    ctx->downcount -= 3;
    // 7F2BAA54: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BAA58:
    ctx->pc = 0x7F2BAA58u;
    // 7F2BAA58: li      r3, 82
    ctx->gpr[3] = (u32)(s32)(82);

label_7F2BAA5C:
    ctx->pc = 0x7F2BAA5Cu;
    // 7F2BAA5C: bl      0x7F3C6B4C
    {
            ctx->lr = 0x7F2BAA60u;
            ctx->pc = 0x7F3C6B4Cu;
            return;
    }

label_7F2BAA60:
    ctx->pc = 0x7F2BAA60u;
    ctx->downcount -= 5;
    // 7F2BAA60: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BAA64:
    ctx->pc = 0x7F2BAA64u;
    // 7F2BAA64: lwz     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BAA68:
    ctx->pc = 0x7F2BAA68u;
    // 7F2BAA68: or   r29, r0, r0
    {
        ctx->gpr[29] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2BAA6C:
    ctx->pc = 0x7F2BAA6Cu;
    // 7F2BAA6C: li      r4, 107
    ctx->gpr[4] = (u32)(s32)(107);

label_7F2BAA70:
    ctx->pc = 0x7F2BAA70u;
    // 7F2BAA70: bl      0x7F3C8470
    {
            ctx->lr = 0x7F2BAA74u;
            ctx->pc = 0x7F3C8470u;
            return;
    }

label_7F2BAA74:
    ctx->pc = 0x7F2BAA74u;
    ctx->downcount -= 1;
    // 7F2BAA74: bl      0x7F3C8480
    {
            ctx->lr = 0x7F2BAA78u;
            ctx->pc = 0x7F3C8480u;
            return;
    }

label_7F2BAA78:
    ctx->pc = 0x7F2BAA78u;
    ctx->downcount -= 2;
    // 7F2BAA78: cmplwi  r3, 0x0000
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

label_7F2BAA7C:
    ctx->pc = 0x7F2BAA7Cu;
    // 7F2BAA7C: bc    12, 2, 0x7F2BAAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BAAC4;
        }
    }

label_7F2BAA80:
    ctx->pc = 0x7F2BAA80u;
    ctx->downcount -= 13;
    // 7F2BAA80: addi    r0, r31, 2756
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(2756);

label_7F2BAA84:
    ctx->pc = 0x7F2BAA84u;
    // 7F2BAA84: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BAA88:
    ctx->pc = 0x7F2BAA88u;
    // 7F2BAA88: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAA8C:
    ctx->pc = 0x7F2BAA8Cu;
    // 7F2BAA8C: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BAA90:
    ctx->pc = 0x7F2BAA90u;
    // 7F2BAA90: addi    r3, r31, 64
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(64);

label_7F2BAA94:
    ctx->pc = 0x7F2BAA94u;
    // 7F2BAA94: addi    r4, r31, 464
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(464);

label_7F2BAA98:
    ctx->pc = 0x7F2BAA98u;
    // 7F2BAA98: lwz     r0, 3980(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BAA9C:
    ctx->pc = 0x7F2BAA9Cu;
    // 7F2BAA9C: addi    r8, r31, 2752
    ctx->gpr[8] = ctx->gpr[31] + (u32)(s32)(2752);

label_7F2BAAA0:
    ctx->pc = 0x7F2BAAA0u;
    // 7F2BAAA0: addi    r9, r31, 2753
    ctx->gpr[9] = ctx->gpr[31] + (u32)(s32)(2753);

label_7F2BAAA4:
    ctx->pc = 0x7F2BAAA4u;
    // 7F2BAAA4: addi    r10, r31, 2754
    ctx->gpr[10] = ctx->gpr[31] + (u32)(s32)(2754);

label_7F2BAAA8:
    ctx->pc = 0x7F2BAAA8u;
    // 7F2BAAA8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAAAC:
    ctx->pc = 0x7F2BAAACu;
    // 7F2BAAAC: lwz     r7, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2BAAB0:
    ctx->pc = 0x7F2BAAB0u;
    // 7F2BAAB0: bl      0x7F28ED58
    {
            ctx->lr = 0x7F2BAAB4u;
            ctx->pc = 0x7F28ED58u;
            return;
    }

label_7F2BAAB4:
    ctx->pc = 0x7F2BAAB4u;
    ctx->downcount -= 4;
    // 7F2BAAB4: stw     r3, 2760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2760);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BAAB8:
    ctx->pc = 0x7F2BAAB8u;
    // 7F2BAAB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BAABC:
    ctx->pc = 0x7F2BAABCu;
    // 7F2BAABC: lwz     r4, 2760(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2760);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BAAC0:
    ctx->pc = 0x7F2BAAC0u;
    // 7F2BAAC0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2BAAC4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2BAAC4:
    ctx->pc = 0x7F2BAAC4u;
    ctx->downcount -= 16;
    // 7F2BAAC4: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BAAC8:
    ctx->pc = 0x7F2BAAC8u;
    // 7F2BAAC8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BAACC:
    ctx->pc = 0x7F2BAACCu;
    // 7F2BAACC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BAAD0:
    ctx->pc = 0x7F2BAAD0u;
    // 7F2BAAD0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2BAAD4:
    ctx->pc = 0x7F2BAAD4u;
    // 7F2BAAD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BAAD8:
    ctx->pc = 0x7F2BAAD8u;
    ctx->downcount -= 34;
    // 7F2BAAD8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BAADC:
    ctx->pc = 0x7F2BAADCu;
    // 7F2BAADC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BAAE0:
    ctx->pc = 0x7F2BAAE0u;
    // 7F2BAAE0: lis     r8, 32585
    ctx->gpr[8] = ((u32)(s32)(32585) << 16);

label_7F2BAAE4:
    ctx->pc = 0x7F2BAAE4u;
    // 7F2BAAE4: lis     r7, 32584
    ctx->gpr[7] = ((u32)(s32)(32584) << 16);

label_7F2BAAE8:
    ctx->pc = 0x7F2BAAE8u;
    // 7F2BAAE8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAAEC:
    ctx->pc = 0x7F2BAAECu;
    // 7F2BAAEC: li      r0, 30
    ctx->gpr[0] = (u32)(s32)(30);

label_7F2BAAF0:
    ctx->pc = 0x7F2BAAF0u;
    // 7F2BAAF0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2BAAF4:
    ctx->pc = 0x7F2BAAF4u;
    // 7F2BAAF4: stmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BAAF8:
    ctx->pc = 0x7F2BAAF8u;
    // 7F2BAAF8: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2BAAFC:
    ctx->pc = 0x7F2BAAFCu;
    // 7F2BAAFC: or   r24, r6, r6
    {
        ctx->gpr[24] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2BAB00:
    ctx->pc = 0x7F2BAB00u;
    // 7F2BAB00: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BAB04:
    ctx->pc = 0x7F2BAB04u;
    // 7F2BAB04: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2BAB08:
    ctx->pc = 0x7F2BAB08u;
    // 7F2BAB08: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BAB0C:
    ctx->pc = 0x7F2BAB0Cu;
    // 7F2BAB0C: li      r6, 160
    ctx->gpr[6] = (u32)(s32)(160);

label_7F2BAB10:
    ctx->pc = 0x7F2BAB10u;
    // 7F2BAB10: lwz     r9, 13880(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(13880);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2BAB14:
    ctx->pc = 0x7F2BAB14u;
    // 7F2BAB14: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAB18:
    ctx->pc = 0x7F2BAB18u;
    // 7F2BAB18: addi    r0, r7, 24704
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(24704);

label_7F2BAB1C:
    ctx->pc = 0x7F2BAB1Cu;
    // 7F2BAB1C: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F2BAB20:
    ctx->pc = 0x7F2BAB20u;
    // 7F2BAB20: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_7F2BAB24:
    ctx->pc = 0x7F2BAB24u;
    // 7F2BAB24: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BAB28:
    ctx->pc = 0x7F2BAB28u;
    // 7F2BAB28: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F2BAB2C:
    ctx->pc = 0x7F2BAB2Cu;
    // 7F2BAB2C: lha     r8, 286(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(286);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BAB30:
    ctx->pc = 0x7F2BAB30u;
    // 7F2BAB30: lha     r9, 288(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(288);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BAB34:
    ctx->pc = 0x7F2BAB34u;
    // 7F2BAB34: bl      0x7F27E314
    {
            ctx->lr = 0x7F2BAB38u;
            ctx->pc = 0x7F27E314u;
            return;
    }

label_7F2BAB38:
    ctx->pc = 0x7F2BAB38u;
    ctx->downcount -= 3;
    // 7F2BAB38: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2BAB3C:
    ctx->pc = 0x7F2BAB3Cu;
    // 7F2BAB3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BAB40:
    ctx->pc = 0x7F2BAB40u;
    // 7F2BAB40: bl      0x7F27E4C4
    {
            ctx->lr = 0x7F2BAB44u;
            ctx->pc = 0x7F27E4C4u;
            return;
    }

label_7F2BAB44:
    ctx->pc = 0x7F2BAB44u;
    ctx->downcount -= 2;
    // 7F2BAB44: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2BAB48:
    ctx->pc = 0x7F2BAB48u;
    // 7F2BAB48: bl      0x7F27E0C8
    {
            ctx->lr = 0x7F2BAB4Cu;
            ctx->pc = 0x7F27E0C8u;
            return;
    }

label_7F2BAB4C:
    ctx->pc = 0x7F2BAB4Cu;
    ctx->downcount -= 2;
    // 7F2BAB4C: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F2BAB50:
    ctx->pc = 0x7F2BAB50u;
    // 7F2BAB50: bl      0x7F27E638
    {
            ctx->lr = 0x7F2BAB54u;
            ctx->pc = 0x7F27E638u;
            return;
    }

label_7F2BAB54:
    ctx->pc = 0x7F2BAB54u;
    ctx->downcount -= 4;
    // 7F2BAB54: li      r3, 5400
    ctx->gpr[3] = (u32)(s32)(5400);

label_7F2BAB58:
    ctx->pc = 0x7F2BAB58u;
    // 7F2BAB58: rlwinm. r0, r24, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[24], 0u) & 0x000000FFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2BAB5C:
    ctx->pc = 0x7F2BAB5Cu;
    // 7F2BAB5C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BAB60:
    ctx->pc = 0x7F2BAB60u;
    // 7F2BAB60: bc    12, 2, 0x7F2BAC20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BAC20;
        }
    }

label_7F2BAB64:
    ctx->pc = 0x7F2BAB64u;
    ctx->downcount -= 6;
    // 7F2BAB64: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BAB68:
    ctx->pc = 0x7F2BAB68u;
    // 7F2BAB68: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BAB6C:
    ctx->pc = 0x7F2BAB6Cu;
    // 7F2BAB6C: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BAB70:
    ctx->pc = 0x7F2BAB70u;
    // 7F2BAB70: lha     r0, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BAB74:
    ctx->pc = 0x7F2BAB74u;
    // 7F2BAB74: cmpwi   r0, 100
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

label_7F2BAB78:
    ctx->pc = 0x7F2BAB78u;
    // 7F2BAB78: bc    4, 0, 0x7F2BABB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BABB0;
        }
    }

label_7F2BAB7C:
    ctx->pc = 0x7F2BAB7Cu;
    ctx->downcount -= 6;
    // 7F2BAB7C: lha     r0, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BAB80:
    ctx->pc = 0x7F2BAB80u;
    // 7F2BAB80: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BAB84:
    ctx->pc = 0x7F2BAB84u;
    // 7F2BAB84: addi    r4, r3, 24712
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24712);

label_7F2BAB88:
    ctx->pc = 0x7F2BAB88u;
    // 7F2BAB88: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAB8C:
    ctx->pc = 0x7F2BAB8Cu;
    // 7F2BAB8C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BAB90:
    ctx->pc = 0x7F2BAB90u;
    // 7F2BAB90: bl      0x80014AB0
    {
            ctx->lr = 0x7F2BAB94u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2BAB94:
    ctx->pc = 0x7F2BAB94u;
    ctx->downcount -= 7;
    // 7F2BAB94: li      r29, 13
    ctx->gpr[29] = (u32)(s32)(13);

label_7F2BAB98:
    ctx->pc = 0x7F2BAB98u;
    // 7F2BAB98: li      r28, 78
    ctx->gpr[28] = (u32)(s32)(78);

label_7F2BAB9C:
    ctx->pc = 0x7F2BAB9Cu;
    // 7F2BAB9C: li      r27, -89
    ctx->gpr[27] = (u32)(s32)(-89);

label_7F2BABA0:
    ctx->pc = 0x7F2BABA0u;
    // 7F2BABA0: li      r26, 14
    ctx->gpr[26] = (u32)(s32)(14);

label_7F2BABA4:
    ctx->pc = 0x7F2BABA4u;
    // 7F2BABA4: li      r25, -102
    ctx->gpr[25] = (u32)(s32)(-102);

label_7F2BABA8:
    ctx->pc = 0x7F2BABA8u;
    // 7F2BABA8: li      r24, -81
    ctx->gpr[24] = (u32)(s32)(-81);

label_7F2BABAC:
    ctx->pc = 0x7F2BABACu;
    // 7F2BABAC: b       0x7F2BACD8
    {
            goto label_7F2BACD8;
    }

label_7F2BABB0:
    ctx->pc = 0x7F2BABB0u;
    ctx->downcount -= 2;
    // 7F2BABB0: cmpwi   r0, 200
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BABB4:
    ctx->pc = 0x7F2BABB4u;
    // 7F2BABB4: bc    4, 0, 0x7F2BABEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BABEC;
        }
    }

label_7F2BABB8:
    ctx->pc = 0x7F2BABB8u;
    ctx->downcount -= 6;
    // 7F2BABB8: lha     r0, 326(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(326);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BABBC:
    ctx->pc = 0x7F2BABBCu;
    // 7F2BABBC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BABC0:
    ctx->pc = 0x7F2BABC0u;
    // 7F2BABC0: addi    r4, r3, 24644
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24644);

label_7F2BABC4:
    ctx->pc = 0x7F2BABC4u;
    // 7F2BABC4: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BABC8:
    ctx->pc = 0x7F2BABC8u;
    // 7F2BABC8: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BABCC:
    ctx->pc = 0x7F2BABCCu;
    // 7F2BABCC: bl      0x80014AB0
    {
            ctx->lr = 0x7F2BABD0u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2BABD0:
    ctx->pc = 0x7F2BABD0u;
    ctx->downcount -= 7;
    // 7F2BABD0: li      r29, -65
    ctx->gpr[29] = (u32)(s32)(-65);

label_7F2BABD4:
    ctx->pc = 0x7F2BABD4u;
    // 7F2BABD4: li      r28, 102
    ctx->gpr[28] = (u32)(s32)(102);

label_7F2BABD8:
    ctx->pc = 0x7F2BABD8u;
    // 7F2BABD8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2BABDC:
    ctx->pc = 0x7F2BABDCu;
    // 7F2BABDC: li      r26, -36
    ctx->gpr[26] = (u32)(s32)(-36);

label_7F2BABE0:
    ctx->pc = 0x7F2BABE0u;
    // 7F2BABE0: li      r25, -29
    ctx->gpr[25] = (u32)(s32)(-29);

label_7F2BABE4:
    ctx->pc = 0x7F2BABE4u;
    // 7F2BABE4: li      r24, 100
    ctx->gpr[24] = (u32)(s32)(100);

label_7F2BABE8:
    ctx->pc = 0x7F2BABE8u;
    // 7F2BABE8: b       0x7F2BACD8
    {
            goto label_7F2BACD8;
    }

label_7F2BABEC:
    ctx->pc = 0x7F2BABECu;
    ctx->downcount -= 6;
    // 7F2BABEC: lha     r0, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BABF0:
    ctx->pc = 0x7F2BABF0u;
    // 7F2BABF0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BABF4:
    ctx->pc = 0x7F2BABF4u;
    // 7F2BABF4: addi    r4, r3, 24632
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24632);

label_7F2BABF8:
    ctx->pc = 0x7F2BABF8u;
    // 7F2BABF8: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BABFC:
    ctx->pc = 0x7F2BABFCu;
    // 7F2BABFC: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BAC00:
    ctx->pc = 0x7F2BAC00u;
    // 7F2BAC00: bl      0x80014AB0
    {
            ctx->lr = 0x7F2BAC04u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2BAC04:
    ctx->pc = 0x7F2BAC04u;
    ctx->downcount -= 7;
    // 7F2BAC04: li      r29, 90
    ctx->gpr[29] = (u32)(s32)(90);

label_7F2BAC08:
    ctx->pc = 0x7F2BAC08u;
    // 7F2BAC08: li      r28, 90
    ctx->gpr[28] = (u32)(s32)(90);

label_7F2BAC0C:
    ctx->pc = 0x7F2BAC0Cu;
    // 7F2BAC0C: li      r27, 92
    ctx->gpr[27] = (u32)(s32)(92);

label_7F2BAC10:
    ctx->pc = 0x7F2BAC10u;
    // 7F2BAC10: li      r26, -106
    ctx->gpr[26] = (u32)(s32)(-106);

label_7F2BAC14:
    ctx->pc = 0x7F2BAC14u;
    // 7F2BAC14: li      r25, -106
    ctx->gpr[25] = (u32)(s32)(-106);

label_7F2BAC18:
    ctx->pc = 0x7F2BAC18u;
    // 7F2BAC18: li      r24, -104
    ctx->gpr[24] = (u32)(s32)(-104);

label_7F2BAC1C:
    ctx->pc = 0x7F2BAC1Cu;
    // 7F2BAC1C: b       0x7F2BACD8
    {
            goto label_7F2BACD8;
    }

label_7F2BAC20:
    ctx->pc = 0x7F2BAC20u;
    ctx->downcount -= 6;
    // 7F2BAC20: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BAC24:
    ctx->pc = 0x7F2BAC24u;
    // 7F2BAC24: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BAC28:
    ctx->pc = 0x7F2BAC28u;
    // 7F2BAC28: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BAC2C:
    ctx->pc = 0x7F2BAC2Cu;
    // 7F2BAC2C: lha     r0, 342(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(342);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BAC30:
    ctx->pc = 0x7F2BAC30u;
    // 7F2BAC30: cmpwi   r0, 100
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

label_7F2BAC34:
    ctx->pc = 0x7F2BAC34u;
    // 7F2BAC34: bc    4, 0, 0x7F2BAC6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BAC6C;
        }
    }

label_7F2BAC38:
    ctx->pc = 0x7F2BAC38u;
    ctx->downcount -= 6;
    // 7F2BAC38: lha     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BAC3C:
    ctx->pc = 0x7F2BAC3Cu;
    // 7F2BAC3C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BAC40:
    ctx->pc = 0x7F2BAC40u;
    // 7F2BAC40: addi    r4, r3, 24712
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24712);

label_7F2BAC44:
    ctx->pc = 0x7F2BAC44u;
    // 7F2BAC44: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAC48:
    ctx->pc = 0x7F2BAC48u;
    // 7F2BAC48: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BAC4C:
    ctx->pc = 0x7F2BAC4Cu;
    // 7F2BAC4C: bl      0x80014AB0
    {
            ctx->lr = 0x7F2BAC50u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2BAC50:
    ctx->pc = 0x7F2BAC50u;
    ctx->downcount -= 7;
    // 7F2BAC50: li      r29, 13
    ctx->gpr[29] = (u32)(s32)(13);

label_7F2BAC54:
    ctx->pc = 0x7F2BAC54u;
    // 7F2BAC54: li      r28, 78
    ctx->gpr[28] = (u32)(s32)(78);

label_7F2BAC58:
    ctx->pc = 0x7F2BAC58u;
    // 7F2BAC58: li      r27, -89
    ctx->gpr[27] = (u32)(s32)(-89);

label_7F2BAC5C:
    ctx->pc = 0x7F2BAC5Cu;
    // 7F2BAC5C: li      r26, 14
    ctx->gpr[26] = (u32)(s32)(14);

label_7F2BAC60:
    ctx->pc = 0x7F2BAC60u;
    // 7F2BAC60: li      r25, -102
    ctx->gpr[25] = (u32)(s32)(-102);

label_7F2BAC64:
    ctx->pc = 0x7F2BAC64u;
    // 7F2BAC64: li      r24, -81
    ctx->gpr[24] = (u32)(s32)(-81);

label_7F2BAC68:
    ctx->pc = 0x7F2BAC68u;
    // 7F2BAC68: b       0x7F2BACD8
    {
            goto label_7F2BACD8;
    }

label_7F2BAC6C:
    ctx->pc = 0x7F2BAC6Cu;
    ctx->downcount -= 2;
    // 7F2BAC6C: cmpwi   r0, 200
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BAC70:
    ctx->pc = 0x7F2BAC70u;
    // 7F2BAC70: bc    4, 0, 0x7F2BACA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BACA8;
        }
    }

label_7F2BAC74:
    ctx->pc = 0x7F2BAC74u;
    ctx->downcount -= 6;
    // 7F2BAC74: lha     r0, 334(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(334);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BAC78:
    ctx->pc = 0x7F2BAC78u;
    // 7F2BAC78: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BAC7C:
    ctx->pc = 0x7F2BAC7Cu;
    // 7F2BAC7C: addi    r4, r3, 24644
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24644);

label_7F2BAC80:
    ctx->pc = 0x7F2BAC80u;
    // 7F2BAC80: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAC84:
    ctx->pc = 0x7F2BAC84u;
    // 7F2BAC84: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BAC88:
    ctx->pc = 0x7F2BAC88u;
    // 7F2BAC88: bl      0x80014AB0
    {
            ctx->lr = 0x7F2BAC8Cu;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2BAC8C:
    ctx->pc = 0x7F2BAC8Cu;
    ctx->downcount -= 7;
    // 7F2BAC8C: li      r29, -65
    ctx->gpr[29] = (u32)(s32)(-65);

label_7F2BAC90:
    ctx->pc = 0x7F2BAC90u;
    // 7F2BAC90: li      r28, 102
    ctx->gpr[28] = (u32)(s32)(102);

label_7F2BAC94:
    ctx->pc = 0x7F2BAC94u;
    // 7F2BAC94: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2BAC98:
    ctx->pc = 0x7F2BAC98u;
    // 7F2BAC98: li      r26, -36
    ctx->gpr[26] = (u32)(s32)(-36);

label_7F2BAC9C:
    ctx->pc = 0x7F2BAC9Cu;
    // 7F2BAC9C: li      r25, -29
    ctx->gpr[25] = (u32)(s32)(-29);

label_7F2BACA0:
    ctx->pc = 0x7F2BACA0u;
    // 7F2BACA0: li      r24, 100
    ctx->gpr[24] = (u32)(s32)(100);

label_7F2BACA4:
    ctx->pc = 0x7F2BACA4u;
    // 7F2BACA4: b       0x7F2BACD8
    {
            goto label_7F2BACD8;
    }

label_7F2BACA8:
    ctx->pc = 0x7F2BACA8u;
    ctx->downcount -= 6;
    // 7F2BACA8: lha     r0, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BACAC:
    ctx->pc = 0x7F2BACACu;
    // 7F2BACAC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BACB0:
    ctx->pc = 0x7F2BACB0u;
    // 7F2BACB0: addi    r4, r3, 24632
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24632);

label_7F2BACB4:
    ctx->pc = 0x7F2BACB4u;
    // 7F2BACB4: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BACB8:
    ctx->pc = 0x7F2BACB8u;
    // 7F2BACB8: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BACBC:
    ctx->pc = 0x7F2BACBCu;
    // 7F2BACBC: bl      0x80014AB0
    {
            ctx->lr = 0x7F2BACC0u;
            ctx->pc = 0x80014AB0u;
            return;
    }

label_7F2BACC0:
    ctx->pc = 0x7F2BACC0u;
    ctx->downcount -= 6;
    // 7F2BACC0: li      r29, 90
    ctx->gpr[29] = (u32)(s32)(90);

label_7F2BACC4:
    ctx->pc = 0x7F2BACC4u;
    // 7F2BACC4: li      r28, 90
    ctx->gpr[28] = (u32)(s32)(90);

label_7F2BACC8:
    ctx->pc = 0x7F2BACC8u;
    // 7F2BACC8: li      r27, 92
    ctx->gpr[27] = (u32)(s32)(92);

label_7F2BACCC:
    ctx->pc = 0x7F2BACCCu;
    // 7F2BACCC: li      r26, -106
    ctx->gpr[26] = (u32)(s32)(-106);

label_7F2BACD0:
    ctx->pc = 0x7F2BACD0u;
    // 7F2BACD0: li      r25, -106
    ctx->gpr[25] = (u32)(s32)(-106);

label_7F2BACD4:
    ctx->pc = 0x7F2BACD4u;
    // 7F2BACD4: li      r24, -104
    ctx->gpr[24] = (u32)(s32)(-104);

label_7F2BACD8:
    ctx->pc = 0x7F2BACD8u;
    ctx->downcount -= 13;
    // 7F2BACD8: lwz     r8, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2BACDC:
    ctx->pc = 0x7F2BACDCu;
    // 7F2BACDC: li      r4, 30
    ctx->gpr[4] = (u32)(s32)(30);

label_7F2BACE0:
    ctx->pc = 0x7F2BACE0u;
    // 7F2BACE0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2BACE4:
    ctx->pc = 0x7F2BACE4u;
    // 7F2BACE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BACE8:
    ctx->pc = 0x7F2BACE8u;
    // 7F2BACE8: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BACEC:
    ctx->pc = 0x7F2BACECu;
    // 7F2BACEC: or   r9, r8, r8
    {
        ctx->gpr[9] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F2BACF0:
    ctx->pc = 0x7F2BACF0u;
    // 7F2BACF0: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BACF4:
    ctx->pc = 0x7F2BACF4u;
    // 7F2BACF4: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_7F2BACF8:
    ctx->pc = 0x7F2BACF8u;
    // 7F2BACF8: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BACFC:
    ctx->pc = 0x7F2BACFCu;
    // 7F2BACFC: li      r6, 196
    ctx->gpr[6] = (u32)(s32)(196);

label_7F2BAD00:
    ctx->pc = 0x7F2BAD00u;
    // 7F2BAD00: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_7F2BAD04:
    ctx->pc = 0x7F2BAD04u;
    // 7F2BAD04: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F2BAD08:
    ctx->pc = 0x7F2BAD08u;
    // 7F2BAD08: bl      0x7F27E314
    {
            ctx->lr = 0x7F2BAD0Cu;
            ctx->pc = 0x7F27E314u;
            return;
    }

label_7F2BAD0C:
    ctx->pc = 0x7F2BAD0Cu;
    ctx->downcount -= 18;
    // 7F2BAD0C: rlwinm r0, r25, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 0u) & 0x000000FFu;
    }

label_7F2BAD10:
    ctx->pc = 0x7F2BAD10u;
    // 7F2BAD10: rlwinm r5, r24, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[24], 0u) & 0x000000FFu;
    }

label_7F2BAD14:
    ctx->pc = 0x7F2BAD14u;
    // 7F2BAD14: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAD18:
    ctx->pc = 0x7F2BAD18u;
    // 7F2BAD18: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_7F2BAD1C:
    ctx->pc = 0x7F2BAD1Cu;
    // 7F2BAD1C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BAD20:
    ctx->pc = 0x7F2BAD20u;
    // 7F2BAD20: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAD24:
    ctx->pc = 0x7F2BAD24u;
    // 7F2BAD24: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BAD28:
    ctx->pc = 0x7F2BAD28u;
    // 7F2BAD28: rlwinm r7, r29, 0, 24, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_7F2BAD2C:
    ctx->pc = 0x7F2BAD2Cu;
    // 7F2BAD2C: rlwinm r8, r28, 0, 24, 31
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_7F2BAD30:
    ctx->pc = 0x7F2BAD30u;
    // 7F2BAD30: rlwinm r9, r27, 0, 24, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x000000FFu;
    }

label_7F2BAD34:
    ctx->pc = 0x7F2BAD34u;
    // 7F2BAD34: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F2BAD38:
    ctx->pc = 0x7F2BAD38u;
    // 7F2BAD38: rlwinm r10, r26, 0, 24, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x000000FFu;
    }

label_7F2BAD3C:
    ctx->pc = 0x7F2BAD3Cu;
    // 7F2BAD3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BAD40:
    ctx->pc = 0x7F2BAD40u;
    // 7F2BAD40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BAD44:
    ctx->pc = 0x7F2BAD44u;
    // 7F2BAD44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAD48:
    ctx->pc = 0x7F2BAD48u;
    // 7F2BAD48: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BAD4C:
    ctx->pc = 0x7F2BAD4Cu;
    // 7F2BAD4C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAD50:
    ctx->pc = 0x7F2BAD50u;
    // 7F2BAD50: bl      0x7F27E404
    {
            ctx->lr = 0x7F2BAD54u;
            ctx->pc = 0x7F27E404u;
            return;
    }

label_7F2BAD54:
    ctx->pc = 0x7F2BAD54u;
    ctx->downcount -= 2;
    // 7F2BAD54: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAD58:
    ctx->pc = 0x7F2BAD58u;
    // 7F2BAD58: bl      0x7F27E0C8
    {
            ctx->lr = 0x7F2BAD5Cu;
            ctx->pc = 0x7F27E0C8u;
            return;
    }

label_7F2BAD5C:
    ctx->pc = 0x7F2BAD5Cu;
    ctx->downcount -= 16;
    // 7F2BAD5C: lmw     r24, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BAD60:
    ctx->pc = 0x7F2BAD60u;
    // 7F2BAD60: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BAD64:
    ctx->pc = 0x7F2BAD64u;
    // 7F2BAD64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BAD68:
    ctx->pc = 0x7F2BAD68u;
    // 7F2BAD68: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F2BAD6C:
    ctx->pc = 0x7F2BAD6Cu;
    // 7F2BAD6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BAD70:
    ctx->pc = 0x7F2BAD70u;
    ctx->downcount -= 7;
    // 7F2BAD70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BAD74:
    ctx->pc = 0x7F2BAD74u;
    // 7F2BAD74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BAD78:
    ctx->pc = 0x7F2BAD78u;
    // 7F2BAD78: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BAD7C:
    ctx->pc = 0x7F2BAD7Cu;
    // 7F2BAD7C: li      r4, 44
    ctx->gpr[4] = (u32)(s32)(44);

label_7F2BAD80:
    ctx->pc = 0x7F2BAD80u;
    // 7F2BAD80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAD84:
    ctx->pc = 0x7F2BAD84u;
    // 7F2BAD84: addi    r3, r3, -6280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6280);

label_7F2BAD88:
    ctx->pc = 0x7F2BAD88u;
    // 7F2BAD88: bl      0x7F3C9120
    {
            ctx->lr = 0x7F2BAD8Cu;
            ctx->pc = 0x7F3C9120u;
            return;
    }

label_7F2BAD8C:
    ctx->pc = 0x7F2BAD8Cu;
    ctx->downcount -= 9;
    // 7F2BAD8C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BAD90:
    ctx->pc = 0x7F2BAD90u;
    // 7F2BAD90: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2BAD94:
    ctx->pc = 0x7F2BAD94u;
    // 7F2BAD94: addi    r3, r3, -6280
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6280);

label_7F2BAD98:
    ctx->pc = 0x7F2BAD98u;
    // 7F2BAD98: sth     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BAD9C:
    ctx->pc = 0x7F2BAD9Cu;
    // 7F2BAD9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BADA0:
    ctx->pc = 0x7F2BADA0u;
    // 7F2BADA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BADA4:
    ctx->pc = 0x7F2BADA4u;
    // 7F2BADA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BADA8:
    ctx->pc = 0x7F2BADA8u;
    // 7F2BADA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BADAC:
    ctx->pc = 0x7F2BADACu;
    ctx->downcount -= 23;
    // 7F2BADAC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BADB0:
    ctx->pc = 0x7F2BADB0u;
    // 7F2BADB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BADB4:
    ctx->pc = 0x7F2BADB4u;
    // 7F2BADB4: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2BADB8:
    ctx->pc = 0x7F2BADB8u;
    // 7F2BADB8: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F2BADBC:
    ctx->pc = 0x7F2BADBCu;
    // 7F2BADBC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BADC0:
    ctx->pc = 0x7F2BADC0u;
    // 7F2BADC0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BADC4:
    ctx->pc = 0x7F2BADC4u;
    // 7F2BADC4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BADC8:
    ctx->pc = 0x7F2BADC8u;
    // 7F2BADC8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2BADCC:
    ctx->pc = 0x7F2BADCCu;
    // 7F2BADCC: lwz     r3, 13880(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(13880);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BADD0:
    ctx->pc = 0x7F2BADD0u;
    // 7F2BADD0: stw     r30, -5660(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5660);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2BADD4:
    ctx->pc = 0x7F2BADD4u;
    // 7F2BADD4: lha     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BADD8:
    ctx->pc = 0x7F2BADD8u;
    // 7F2BADD8: cmpwi   r0, 0
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

label_7F2BADDC:
    ctx->pc = 0x7F2BADDCu;
    // 7F2BADDC: bc    4, 2, 0x7F2BADE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BADE8;
        }
    }

label_7F2BADE0:
    ctx->pc = 0x7F2BADE0u;
    ctx->downcount -= 2;
    // 7F2BADE0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F2BADE4:
    ctx->pc = 0x7F2BADE4u;
    // 7F2BADE4: sth     r0, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BADE8:
    ctx->pc = 0x7F2BADE8u;
    ctx->downcount -= 34;
    // 7F2BADE8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F2BADEC:
    ctx->pc = 0x7F2BADECu;
    // 7F2BADEC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BADF0:
    ctx->pc = 0x7F2BADF0u;
    // 7F2BADF0: stw     r29, 3980(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3980);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2BADF4:
    ctx->pc = 0x7F2BADF4u;
    // 7F2BADF4: addi    r4, r3, -5852
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5852);

label_7F2BADF8:
    ctx->pc = 0x7F2BADF8u;
    // 7F2BADF8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BADFC:
    ctx->pc = 0x7F2BADFCu;
    // 7F2BADFC: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2BAE00:
    ctx->pc = 0x7F2BAE00u;
    // 7F2BAE00: stw     r29, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2BAE04:
    ctx->pc = 0x7F2BAE04u;
    // 7F2BAE04: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2BAE08:
    ctx->pc = 0x7F2BAE08u;
    // 7F2BAE08: lwz     r28, -5660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5660);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F2BAE0C:
    ctx->pc = 0x7F2BAE0Cu;
    // 7F2BAE0C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BAE10:
    ctx->pc = 0x7F2BAE10u;
    // 7F2BAE10: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BAE14:
    ctx->pc = 0x7F2BAE14u;
    // 7F2BAE14: lwz     r0, 3980(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BAE18:
    ctx->pc = 0x7F2BAE18u;
    // 7F2BAE18: addi    r12, r7, -6660
    ctx->gpr[12] = ctx->gpr[7] + (u32)(s32)(-6660);

label_7F2BAE1C:
    ctx->pc = 0x7F2BAE1Cu;
    // 7F2BAE1C: addi    r10, r6, -6308
    ctx->gpr[10] = ctx->gpr[6] + (u32)(s32)(-6308);

label_7F2BAE20:
    ctx->pc = 0x7F2BAE20u;
    // 7F2BAE20: addi    r11, r28, 1032
    ctx->gpr[11] = ctx->gpr[28] + (u32)(s32)(1032);

label_7F2BAE24:
    ctx->pc = 0x7F2BAE24u;
    // 7F2BAE24: addi    r6, r4, -6316
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(-6316);

label_7F2BAE28:
    ctx->pc = 0x7F2BAE28u;
    // 7F2BAE28: addi    r7, r28, 1120
    ctx->gpr[7] = ctx->gpr[28] + (u32)(s32)(1120);

label_7F2BAE2C:
    ctx->pc = 0x7F2BAE2Cu;
    // 7F2BAE2C: stw     r0, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAE30:
    ctx->pc = 0x7F2BAE30u;
    // 7F2BAE30: addi    r9, r28, 1056
    ctx->gpr[9] = ctx->gpr[28] + (u32)(s32)(1056);

label_7F2BAE34:
    ctx->pc = 0x7F2BAE34u;
    // 7F2BAE34: addi    r8, r5, -6312
    ctx->gpr[8] = ctx->gpr[5] + (u32)(s32)(-6312);

label_7F2BAE38:
    ctx->pc = 0x7F2BAE38u;
    // 7F2BAE38: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BAE3C:
    ctx->pc = 0x7F2BAE3Cu;
    // 7F2BAE3C: stw     r11, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2BAE40:
    ctx->pc = 0x7F2BAE40u;
    // 7F2BAE40: addi    r5, r3, 14080
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14080);

label_7F2BAE44:
    ctx->pc = 0x7F2BAE44u;
    // 7F2BAE44: li      r0, 474
    ctx->gpr[0] = (u32)(s32)(474);

label_7F2BAE48:
    ctx->pc = 0x7F2BAE48u;
    // 7F2BAE48: stw     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2BAE4C:
    ctx->pc = 0x7F2BAE4Cu;
    // 7F2BAE4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAE50:
    ctx->pc = 0x7F2BAE50u;
    // 7F2BAE50: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BAE54:
    ctx->pc = 0x7F2BAE54u;
    // 7F2BAE54: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F2BAE58:
    ctx->pc = 0x7F2BAE58u;
    // 7F2BAE58: stw     r5, 2764(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2764);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BAE5C:
    ctx->pc = 0x7F2BAE5Cu;
    // 7F2BAE5C: stw     r29, 1320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1320);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2BAE60:
    ctx->pc = 0x7F2BAE60u;
    // 7F2BAE60: stw     r29, 2668(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2668);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2BAE64:
    ctx->pc = 0x7F2BAE64u;
    // 7F2BAE64: stw     r29, 2664(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2664);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2BAE68:
    ctx->pc = 0x7F2BAE68u;
    // 7F2BAE68: sth     r0, 3908(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3908);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BAE6C:
    ctx->pc = 0x7F2BAE6Cu;
    // 7F2BAE6C: bl      0x7F2B9980
    {
            ctx->lr = 0x7F2BAE70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2B9980u;
                return;
            }
            goto label_7F2B9980;
    }

label_7F2BAE70:
    ctx->pc = 0x7F2BAE70u;
    ctx->downcount -= 2;
    // 7F2BAE70: cmpwi   r3, 0
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

label_7F2BAE74:
    ctx->pc = 0x7F2BAE74u;
    // 7F2BAE74: bc    4, 0, 0x7F2BAE80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BAE80;
        }
    }

label_7F2BAE78:
    ctx->pc = 0x7F2BAE78u;
    ctx->downcount -= 2;
    // 7F2BAE78: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2BAE7C:
    ctx->pc = 0x7F2BAE7Cu;
    // 7F2BAE7C: b       0x7F2BB09C
    {
            goto label_7F2BB09C;
    }

label_7F2BAE80:
    ctx->pc = 0x7F2BAE80u;
    ctx->downcount -= 3;
    // 7F2BAE80: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAE84:
    ctx->pc = 0x7F2BAE84u;
    // 7F2BAE84: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BAE88:
    ctx->pc = 0x7F2BAE88u;
    // 7F2BAE88: bl      0x7F2B9CBC
    {
            ctx->lr = 0x7F2BAE8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2B9CBCu;
                return;
            }
            goto label_7F2B9CBC;
    }

label_7F2BAE8C:
    ctx->pc = 0x7F2BAE8Cu;
    ctx->downcount -= 2;
    // 7F2BAE8C: cmpwi   r3, 0
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

label_7F2BAE90:
    ctx->pc = 0x7F2BAE90u;
    // 7F2BAE90: bc    4, 0, 0x7F2BAE9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BAE9C;
        }
    }

label_7F2BAE94:
    ctx->pc = 0x7F2BAE94u;
    ctx->downcount -= 2;
    // 7F2BAE94: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F2BAE98:
    ctx->pc = 0x7F2BAE98u;
    // 7F2BAE98: b       0x7F2BB09C
    {
            goto label_7F2BB09C;
    }

label_7F2BAE9C:
    ctx->pc = 0x7F2BAE9Cu;
    ctx->downcount -= 2;
    // 7F2BAE9C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAEA0:
    ctx->pc = 0x7F2BAEA0u;
    // 7F2BAEA0: bl      0x7F2BA6F0
    {
            ctx->lr = 0x7F2BAEA4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BA6F0u;
                return;
            }
            goto label_7F2BA6F0;
    }

label_7F2BAEA4:
    ctx->pc = 0x7F2BAEA4u;
    ctx->downcount -= 2;
    // 7F2BAEA4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAEA8:
    ctx->pc = 0x7F2BAEA8u;
    // 7F2BAEA8: bl      0x7F2BA7EC
    {
            ctx->lr = 0x7F2BAEACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BA7ECu;
                return;
            }
            goto label_7F2BA7EC;
    }

label_7F2BAEAC:
    ctx->pc = 0x7F2BAEACu;
    ctx->downcount -= 2;
    // 7F2BAEAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAEB0:
    ctx->pc = 0x7F2BAEB0u;
    // 7F2BAEB0: bl      0x7F2BA870
    {
            ctx->lr = 0x7F2BAEB4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BA870u;
                return;
            }
            goto label_7F2BA870;
    }

label_7F2BAEB4:
    ctx->pc = 0x7F2BAEB4u;
    ctx->downcount -= 2;
    // 7F2BAEB4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAEB8:
    ctx->pc = 0x7F2BAEB8u;
    // 7F2BAEB8: bl      0x7F2BA95C
    {
            ctx->lr = 0x7F2BAEBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BA95Cu;
                return;
            }
            goto label_7F2BA95C;
    }

label_7F2BAEBC:
    ctx->pc = 0x7F2BAEBCu;
    ctx->downcount -= 4;
    // 7F2BAEBC: lwz     r3, 2792(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2792);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BAEC0:
    ctx->pc = 0x7F2BAEC0u;
    // 7F2BAEC0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BAEC4:
    ctx->pc = 0x7F2BAEC4u;
    // 7F2BAEC4: lwz     r4, 2800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2800);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BAEC8:
    ctx->pc = 0x7F2BAEC8u;
    // 7F2BAEC8: bl      0x7F2911D0
    {
            ctx->lr = 0x7F2BAECCu;
            ctx->pc = 0x7F2911D0u;
            return;
    }

label_7F2BAECC:
    ctx->pc = 0x7F2BAECCu;
    ctx->downcount -= 3;
    // 7F2BAECC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BAED0:
    ctx->pc = 0x7F2BAED0u;
    // 7F2BAED0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAED4:
    ctx->pc = 0x7F2BAED4u;
    // 7F2BAED4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2BAED8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2BAED8:
    ctx->pc = 0x7F2BAED8u;
    ctx->downcount -= 2;
    // 7F2BAED8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAEDC:
    ctx->pc = 0x7F2BAEDCu;
    // 7F2BAEDC: bl      0x7F2B9FB4
    {
            ctx->lr = 0x7F2BAEE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2B9FB4u;
                return;
            }
            goto label_7F2B9FB4;
    }

label_7F2BAEE0:
    ctx->pc = 0x7F2BAEE0u;
    ctx->downcount -= 3;
    // 7F2BAEE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAEE4:
    ctx->pc = 0x7F2BAEE4u;
    // 7F2BAEE4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BAEE8:
    ctx->pc = 0x7F2BAEE8u;
    // 7F2BAEE8: bl      0x7F2BA4F8
    {
            ctx->lr = 0x7F2BAEECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BA4F8u;
                return;
            }
            goto label_7F2BA4F8;
    }

label_7F2BAEEC:
    ctx->pc = 0x7F2BAEECu;
    ctx->downcount -= 2;
    // 7F2BAEEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAEF0:
    ctx->pc = 0x7F2BAEF0u;
    // 7F2BAEF0: bl      0x7F2BA660
    {
            ctx->lr = 0x7F2BAEF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BA660u;
                return;
            }
            goto label_7F2BA660;
    }

label_7F2BAEF4:
    ctx->pc = 0x7F2BAEF4u;
    ctx->downcount -= 2;
    // 7F2BAEF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAEF8:
    ctx->pc = 0x7F2BAEF8u;
    // 7F2BAEF8: bl      0x7F2BA694
    {
            ctx->lr = 0x7F2BAEFCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BA694u;
                return;
            }
            goto label_7F2BA694;
    }

label_7F2BAEFC:
    ctx->pc = 0x7F2BAEFCu;
    ctx->downcount -= 3;
    // 7F2BAEFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BAF00:
    ctx->pc = 0x7F2BAF00u;
    // 7F2BAF00: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_7F2BAF04:
    ctx->pc = 0x7F2BAF04u;
    // 7F2BAF04: bl      0x7F290054
    {
            ctx->lr = 0x7F2BAF08u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2BAF08:
    ctx->pc = 0x7F2BAF08u;
    ctx->downcount -= 5;
    // 7F2BAF08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BAF0C:
    ctx->pc = 0x7F2BAF0Cu;
    // 7F2BAF0C: xor   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[6];
    }

label_7F2BAF10:
    ctx->pc = 0x7F2BAF10u;
    // 7F2BAF10: xor   r0, r3, r6
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[6];
    }

label_7F2BAF14:
    ctx->pc = 0x7F2BAF14u;
    // 7F2BAF14: or.   r0, r4, r0
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

label_7F2BAF18:
    ctx->pc = 0x7F2BAF18u;
    // 7F2BAF18: bc    12, 2, 0x7F2BAF20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BAF20;
        }
    }

label_7F2BAF1C:
    ctx->pc = 0x7F2BAF1Cu;
    ctx->downcount -= 1;
    // 7F2BAF1C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2BAF20:
    ctx->pc = 0x7F2BAF20u;
    ctx->downcount -= 8;
    // 7F2BAF20: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BAF24:
    ctx->pc = 0x7F2BAF24u;
    // 7F2BAF24: addi    r3, r30, 672
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(672);

label_7F2BAF28:
    ctx->pc = 0x7F2BAF28u;
    // 7F2BAF28: addi    r5, r4, -5660
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-5660);

label_7F2BAF2C:
    ctx->pc = 0x7F2BAF2Cu;
    // 7F2BAF2C: addi    r4, r30, 784
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(784);

label_7F2BAF30:
    ctx->pc = 0x7F2BAF30u;
    // 7F2BAF30: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2BAF34:
    ctx->pc = 0x7F2BAF34u;
    // 7F2BAF34: rlwinm r6, r6, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x000000FFu;
    }

label_7F2BAF38:
    ctx->pc = 0x7F2BAF38u;
    // 7F2BAF38: addi    r5, r5, 1196
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1196);

label_7F2BAF3C:
    ctx->pc = 0x7F2BAF3Cu;
    // 7F2BAF3C: bl      0x7F2BAAD8
    {
            ctx->lr = 0x7F2BAF40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BAAD8u;
                return;
            }
            goto label_7F2BAAD8;
    }

label_7F2BAF40:
    ctx->pc = 0x7F2BAF40u;
    ctx->downcount -= 1;
    // 7F2BAF40: bl      0x7F2BAD70
    {
            ctx->lr = 0x7F2BAF44u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BAD70u;
                return;
            }
            goto label_7F2BAD70;
    }

label_7F2BAF44:
    ctx->pc = 0x7F2BAF44u;
    ctx->downcount -= 1;
    // 7F2BAF44: bl      0x7F2BBAA0
    {
            ctx->lr = 0x7F2BAF48u;
            goto label_7F2BBAA0;
    }

label_7F2BAF48:
    ctx->pc = 0x7F2BAF48u;
    ctx->downcount -= 38;
    // 7F2BAF48: lis     r4, 32586
    ctx->gpr[4] = ((u32)(s32)(32586) << 16);

label_7F2BAF4C:
    ctx->pc = 0x7F2BAF4Cu;
    // 7F2BAF4C: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BAF50:
    ctx->pc = 0x7F2BAF50u;
    // 7F2BAF50: lwz     r0, 18312(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BAF54:
    ctx->pc = 0x7F2BAF54u;
    // 7F2BAF54: addi    r6, r3, -5848
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-5848);

label_7F2BAF58:
    ctx->pc = 0x7F2BAF58u;
    // 7F2BAF58: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BAF5C:
    ctx->pc = 0x7F2BAF5Cu;
    // 7F2BAF5C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BAF60:
    ctx->pc = 0x7F2BAF60u;
    // 7F2BAF60: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAF64:
    ctx->pc = 0x7F2BAF64u;
    // 7F2BAF64: addi    r6, r30, 464
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(464);

label_7F2BAF68:
    ctx->pc = 0x7F2BAF68u;
    // 7F2BAF68: addi    r7, r4, -5724
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-5724);

label_7F2BAF6C:
    ctx->pc = 0x7F2BAF6Cu;
    // 7F2BAF6C: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_7F2BAF70:
    ctx->pc = 0x7F2BAF70u;
    // 7F2BAF70: stw     r6, 2496(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2496);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BAF74:
    ctx->pc = 0x7F2BAF74u;
    // 7F2BAF74: addi    r12, r5, -5708
    ctx->gpr[12] = ctx->gpr[5] + (u32)(s32)(-5708);

label_7F2BAF78:
    ctx->pc = 0x7F2BAF78u;
    // 7F2BAF78: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BAF7C:
    ctx->pc = 0x7F2BAF7Cu;
    // 7F2BAF7C: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_7F2BAF80:
    ctx->pc = 0x7F2BAF80u;
    // 7F2BAF80: stw     r0, 2500(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2500);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAF84:
    ctx->pc = 0x7F2BAF84u;
    // 7F2BAF84: addi    r5, r3, -5660
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2BAF88:
    ctx->pc = 0x7F2BAF88u;
    // 7F2BAF88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BAF8C:
    ctx->pc = 0x7F2BAF8Cu;
    // 7F2BAF8C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BAF90:
    ctx->pc = 0x7F2BAF90u;
    // 7F2BAF90: lwz     r11, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F2BAF94:
    ctx->pc = 0x7F2BAF94u;
    // 7F2BAF94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BAF98:
    ctx->pc = 0x7F2BAF98u;
    // 7F2BAF98: lwz     r10, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F2BAF9C:
    ctx->pc = 0x7F2BAF9Cu;
    // 7F2BAF9C: stw     r11, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2BAFA0:
    ctx->pc = 0x7F2BAFA0u;
    // 7F2BAFA0: stw     r10, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2BAFA4:
    ctx->pc = 0x7F2BAFA4u;
    // 7F2BAFA4: lwz     r9, 72(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(72);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2BAFA8:
    ctx->pc = 0x7F2BAFA8u;
    // 7F2BAFA8: lwz     r8, 76(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(76);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F2BAFAC:
    ctx->pc = 0x7F2BAFACu;
    // 7F2BAFAC: stw     r9, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2BAFB0:
    ctx->pc = 0x7F2BAFB0u;
    // 7F2BAFB0: stw     r8, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2BAFB4:
    ctx->pc = 0x7F2BAFB4u;
    // 7F2BAFB4: stw     r11, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F2BAFB8:
    ctx->pc = 0x7F2BAFB8u;
    // 7F2BAFB8: stw     r10, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F2BAFBC:
    ctx->pc = 0x7F2BAFBCu;
    // 7F2BAFBC: stw     r9, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F2BAFC0:
    ctx->pc = 0x7F2BAFC0u;
    // 7F2BAFC0: stw     r8, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F2BAFC4:
    ctx->pc = 0x7F2BAFC4u;
    // 7F2BAFC4: stw     r31, 3964(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(3964);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BAFC8:
    ctx->pc = 0x7F2BAFC8u;
    // 7F2BAFC8: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2BAFCC:
    ctx->pc = 0x7F2BAFCCu;
    // 7F2BAFCC: stw     r6, 1160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1160);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BAFD0:
    ctx->pc = 0x7F2BAFD0u;
    // 7F2BAFD0: stw     r0, 4016(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4016);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BAFD4:
    ctx->pc = 0x7F2BAFD4u;
    // 7F2BAFD4: stw     r6, 2916(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2916);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BAFD8:
    ctx->pc = 0x7F2BAFD8u;
    // 7F2BAFD8: stw     r6, 2920(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2920);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BAFDC:
    ctx->pc = 0x7F2BAFDCu;
    // 7F2BAFDC: bl      0x7F2EEA18
    {
            ctx->lr = 0x7F2BAFE0u;
            ctx->pc = 0x7F2EEA18u;
            return;
    }

label_7F2BAFE0:
    ctx->pc = 0x7F2BAFE0u;
    ctx->downcount -= 3;
    // 7F2BAFE0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BAFE4:
    ctx->pc = 0x7F2BAFE4u;
    // 7F2BAFE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BAFE8:
    ctx->pc = 0x7F2BAFE8u;
    // 7F2BAFE8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2BAFECu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2BAFEC:
    ctx->pc = 0x7F2BAFECu;
    ctx->downcount -= 3;
    // 7F2BAFEC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BAFF0:
    ctx->pc = 0x7F2BAFF0u;
    // 7F2BAFF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BAFF4:
    ctx->pc = 0x7F2BAFF4u;
    // 7F2BAFF4: bl      0x7F2EEA18
    {
            ctx->lr = 0x7F2BAFF8u;
            ctx->pc = 0x7F2EEA18u;
            return;
    }

label_7F2BAFF8:
    ctx->pc = 0x7F2BAFF8u;
    ctx->downcount -= 3;
    // 7F2BAFF8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_7F2BAFFC:
    ctx->pc = 0x7F2BAFFCu;
    // 7F2BAFFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB000:
    ctx->pc = 0x7F2BB000u;
    // 7F2BB000: bl      0x7F290054
    {
            ctx->lr = 0x7F2BB004u;
            ctx->pc = 0x7F290054u;
            return;
    }

label_7F2BB004:
    ctx->pc = 0x7F2BB004u;
    ctx->downcount -= 5;
    // 7F2BB004: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB008:
    ctx->pc = 0x7F2BB008u;
    // 7F2BB008: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BB00C:
    ctx->pc = 0x7F2BB00Cu;
    // 7F2BB00C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BB010:
    ctx->pc = 0x7F2BB010u;
    // 7F2BB010: or.   r0, r4, r0
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

label_7F2BB014:
    ctx->pc = 0x7F2BB014u;
    // 7F2BB014: bc    12, 2, 0x7F2BB054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB054;
        }
    }

label_7F2BB018:
    ctx->pc = 0x7F2BB018u;
    ctx->downcount -= 3;
    // 7F2BB018: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2BB01C:
    ctx->pc = 0x7F2BB01Cu;
    // 7F2BB01C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB020:
    ctx->pc = 0x7F2BB020u;
    // 7F2BB020: bl      0x7F2900CC
    {
            ctx->lr = 0x7F2BB024u;
            ctx->pc = 0x7F2900CCu;
            return;
    }

label_7F2BB024:
    ctx->pc = 0x7F2BB024u;
    ctx->downcount -= 6;
    // 7F2BB024: lwz     r3, 2792(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2792);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB028:
    ctx->pc = 0x7F2BB028u;
    // 7F2BB028: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BB02C:
    ctx->pc = 0x7F2BB02Cu;
    // 7F2BB02C: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2BB030:
    ctx->pc = 0x7F2BB030u;
    // 7F2BB030: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BB034:
    ctx->pc = 0x7F2BB034u;
    // 7F2BB034: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BB038:
    ctx->pc = 0x7F2BB038u;
    // 7F2BB038: bl      0x7F026928
    {
            ctx->lr = 0x7F2BB03Cu;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F2BB03C:
    ctx->pc = 0x7F2BB03Cu;
    ctx->downcount -= 6;
    // 7F2BB03C: lwz     r3, 2800(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(2800);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB040:
    ctx->pc = 0x7F2BB040u;
    // 7F2BB040: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BB044:
    ctx->pc = 0x7F2BB044u;
    // 7F2BB044: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_7F2BB048:
    ctx->pc = 0x7F2BB048u;
    // 7F2BB048: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BB04C:
    ctx->pc = 0x7F2BB04Cu;
    // 7F2BB04C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F2BB050:
    ctx->pc = 0x7F2BB050u;
    // 7F2BB050: bl      0x7F026928
    {
            ctx->lr = 0x7F2BB054u;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F2BB054:
    ctx->pc = 0x7F2BB054u;
    ctx->downcount -= 7;
    // 7F2BB054: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB058:
    ctx->pc = 0x7F2BB058u;
    // 7F2BB058: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB05C:
    ctx->pc = 0x7F2BB05Cu;
    // 7F2BB05C: stb     r0, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB060:
    ctx->pc = 0x7F2BB060u;
    // 7F2BB060: stb     r0, 49(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(49);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB064:
    ctx->pc = 0x7F2BB064u;
    // 7F2BB064: sth     r0, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BB068:
    ctx->pc = 0x7F2BB068u;
    // 7F2BB068: stw     r0, -6664(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6664);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB06C:
    ctx->pc = 0x7F2BB06Cu;
    // 7F2BB06C: bl      0x7F293A54
    {
            ctx->lr = 0x7F2BB070u;
            ctx->pc = 0x7F293A54u;
            return;
    }

label_7F2BB070:
    ctx->pc = 0x7F2BB070u;
    ctx->downcount -= 11;
    // 7F2BB070: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BB074:
    ctx->pc = 0x7F2BB074u;
    // 7F2BB074: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB078:
    ctx->pc = 0x7F2BB078u;
    // 7F2BB078: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB07C:
    ctx->pc = 0x7F2BB07Cu;
    // 7F2BB07C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB080:
    ctx->pc = 0x7F2BB080u;
    // 7F2BB080: addi    r6, r5, -6656
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(-6656);

label_7F2BB084:
    ctx->pc = 0x7F2BB084u;
    // 7F2BB084: addi    r5, r4, -6652
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-6652);

label_7F2BB088:
    ctx->pc = 0x7F2BB088u;
    // 7F2BB088: addi    r4, r3, -6236
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6236);

label_7F2BB08C:
    ctx->pc = 0x7F2BB08Cu;
    // 7F2BB08C: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB090:
    ctx->pc = 0x7F2BB090u;
    // 7F2BB090: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB094:
    ctx->pc = 0x7F2BB094u;
    // 7F2BB094: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB098:
    ctx->pc = 0x7F2BB098u;
    // 7F2BB098: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB09C:
    ctx->pc = 0x7F2BB09Cu;
    ctx->downcount -= 16;
    // 7F2BB09C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BB0A0:
    ctx->pc = 0x7F2BB0A0u;
    // 7F2BB0A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB0A4:
    ctx->pc = 0x7F2BB0A4u;
    // 7F2BB0A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BB0A8:
    ctx->pc = 0x7F2BB0A8u;
    // 7F2BB0A8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BB0AC:
    ctx->pc = 0x7F2BB0ACu;
    // 7F2BB0AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB0B0:
    ctx->pc = 0x7F2BB0B0u;
    ctx->downcount -= 20;
    // 7F2BB0B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB0B4:
    ctx->pc = 0x7F2BB0B4u;
    // 7F2BB0B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BB0B8:
    ctx->pc = 0x7F2BB0B8u;
    // 7F2BB0B8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2BB0BC:
    ctx->pc = 0x7F2BB0BCu;
    // 7F2BB0BC: li      r5, 4112
    ctx->gpr[5] = (u32)(s32)(4112);

label_7F2BB0C0:
    ctx->pc = 0x7F2BB0C0u;
    // 7F2BB0C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB0C4:
    ctx->pc = 0x7F2BB0C4u;
    // 7F2BB0C4: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_7F2BB0C8:
    ctx->pc = 0x7F2BB0C8u;
    // 7F2BB0C8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BB0CC:
    ctx->pc = 0x7F2BB0CCu;
    // 7F2BB0CC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BB0D0:
    ctx->pc = 0x7F2BB0D0u;
    // 7F2BB0D0: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_7F2BB0D4:
    ctx->pc = 0x7F2BB0D4u;
    // 7F2BB0D4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2BB0D8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2BB0D8:
    ctx->pc = 0x7F2BB0D8u;
    ctx->downcount -= 2;
    // 7F2BB0D8: or.   r31, r3, r3
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

label_7F2BB0DC:
    ctx->pc = 0x7F2BB0DCu;
    // 7F2BB0DC: bc    12, 2, 0x7F2BB140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB140;
        }
    }

label_7F2BB0E0:
    ctx->pc = 0x7F2BB0E0u;
    ctx->downcount -= 5;
    // 7F2BB0E0: lis     r4, 32556
    ctx->gpr[4] = ((u32)(s32)(32556) << 16);

label_7F2BB0E4:
    ctx->pc = 0x7F2BB0E4u;
    // 7F2BB0E4: lis     r5, 32556
    ctx->gpr[5] = ((u32)(s32)(32556) << 16);

label_7F2BB0E8:
    ctx->pc = 0x7F2BB0E8u;
    // 7F2BB0E8: addi    r4, r4, -30412
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30412);

label_7F2BB0EC:
    ctx->pc = 0x7F2BB0ECu;
    // 7F2BB0EC: addi    r5, r5, -26568
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26568);

label_7F2BB0F0:
    ctx->pc = 0x7F2BB0F0u;
    // 7F2BB0F0: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2BB0F4u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2BB0F4:
    ctx->pc = 0x7F2BB0F4u;
    ctx->downcount -= 13;
    // 7F2BB0F4: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB0F8:
    ctx->pc = 0x7F2BB0F8u;
    // 7F2BB0F8: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2BB0FC:
    ctx->pc = 0x7F2BB0FCu;
    // 7F2BB0FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BB100:
    ctx->pc = 0x7F2BB100u;
    // 7F2BB100: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BB104:
    ctx->pc = 0x7F2BB104u;
    // 7F2BB104: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F2BB108:
    ctx->pc = 0x7F2BB108u;
    // 7F2BB108: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2BB10C:
    ctx->pc = 0x7F2BB10Cu;
    // 7F2BB10C: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BB110:
    ctx->pc = 0x7F2BB110u;
    // 7F2BB110: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BB114:
    ctx->pc = 0x7F2BB114u;
    // 7F2BB114: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BB118:
    ctx->pc = 0x7F2BB118u;
    // 7F2BB118: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BB11C:
    ctx->pc = 0x7F2BB11Cu;
    // 7F2BB11C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BB120:
    ctx->pc = 0x7F2BB120u;
    // 7F2BB120: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB124:
    ctx->pc = 0x7F2BB124u;
    // 7F2BB124: bl      0x7F2BADAC
    {
            ctx->lr = 0x7F2BB128u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BADACu;
                return;
            }
            goto label_7F2BADAC;
    }

label_7F2BB128:
    ctx->pc = 0x7F2BB128u;
    ctx->downcount -= 2;
    // 7F2BB128: cmpwi   r3, 0
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

label_7F2BB12C:
    ctx->pc = 0x7F2BB12Cu;
    // 7F2BB12C: bc    4, 0, 0x7F2BB140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB140;
        }
    }

label_7F2BB130:
    ctx->pc = 0x7F2BB130u;
    ctx->downcount -= 2;
    // 7F2BB130: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BB134:
    ctx->pc = 0x7F2BB134u;
    // 7F2BB134: bl      0x7F3C8210
    {
            ctx->lr = 0x7F2BB138u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F2BB138:
    ctx->pc = 0x7F2BB138u;
    ctx->downcount -= 2;
    // 7F2BB138: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB13C:
    ctx->pc = 0x7F2BB13Cu;
    // 7F2BB13C: b       0x7F2BB178
    {
            goto label_7F2BB178;
    }

label_7F2BB140:
    ctx->pc = 0x7F2BB140u;
    ctx->downcount -= 1;
    // 7F2BB140: bl      0x7F19C070
    {
            ctx->lr = 0x7F2BB144u;
            ctx->pc = 0x7F19C070u;
            return;
    }

label_7F2BB144:
    ctx->pc = 0x7F2BB144u;
    ctx->downcount -= 1;
    // 7F2BB144: bl      0x7F256880
    {
            ctx->lr = 0x7F2BB148u;
            ctx->pc = 0x7F256880u;
            return;
    }

label_7F2BB148:
    ctx->pc = 0x7F2BB148u;
    ctx->downcount -= 2;
    // 7F2BB148: cmplwi  r3, 0x0000
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

label_7F2BB14C:
    ctx->pc = 0x7F2BB14Cu;
    // 7F2BB14C: bc    4, 2, 0x7F2BB158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB158;
        }
    }

label_7F2BB150:
    ctx->pc = 0x7F2BB150u;
    ctx->downcount -= 2;
    // 7F2BB150: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB154:
    ctx->pc = 0x7F2BB154u;
    // 7F2BB154: b       0x7F2BB178
    {
            goto label_7F2BB178;
    }

label_7F2BB158:
    ctx->pc = 0x7F2BB158u;
    ctx->downcount -= 4;
    // 7F2BB158: lis     r4, 133
    ctx->gpr[4] = ((u32)(s32)(133) << 16);

label_7F2BB15C:
    ctx->pc = 0x7F2BB15Cu;
    // 7F2BB15C: addi    r3, r31, 464
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(464);

label_7F2BB160:
    ctx->pc = 0x7F2BB160u;
    // 7F2BB160: addi    r4, r4, 4787
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4787);

label_7F2BB164:
    ctx->pc = 0x7F2BB164u;
    // 7F2BB164: bl      0x7F2C742C
    {
            ctx->lr = 0x7F2BB168u;
            ctx->pc = 0x7F2C742Cu;
            return;
    }

label_7F2BB168:
    ctx->pc = 0x7F2BB168u;
    ctx->downcount -= 3;
    // 7F2BB168: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BB16C:
    ctx->pc = 0x7F2BB16Cu;
    // 7F2BB16C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BB170:
    ctx->pc = 0x7F2BB170u;
    // 7F2BB170: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2BB174u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2BB174:
    ctx->pc = 0x7F2BB174u;
    ctx->downcount -= 1;
    // 7F2BB174: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BB178:
    ctx->pc = 0x7F2BB178u;
    ctx->downcount -= 16;
    // 7F2BB178: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BB17C:
    ctx->pc = 0x7F2BB17Cu;
    // 7F2BB17C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB180:
    ctx->pc = 0x7F2BB180u;
    // 7F2BB180: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BB184:
    ctx->pc = 0x7F2BB184u;
    // 7F2BB184: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BB188:
    ctx->pc = 0x7F2BB188u;
    // 7F2BB188: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB18C:
    ctx->pc = 0x7F2BB18Cu;
    ctx->downcount -= 6;
    // 7F2BB18C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB190:
    ctx->pc = 0x7F2BB190u;
    // 7F2BB190: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB194:
    ctx->pc = 0x7F2BB194u;
    // 7F2BB194: addi    r4, r4, -5660
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5660);

label_7F2BB198:
    ctx->pc = 0x7F2BB198u;
    // 7F2BB198: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BB19C:
    ctx->pc = 0x7F2BB19Cu;
    // 7F2BB19C: cmplwi  r4, 0x0000
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

label_7F2BB1A0:
    ctx->pc = 0x7F2BB1A0u;
    // 7F2BB1A0: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB1A4:
    ctx->pc = 0x7F2BB1A4u;
    ctx->downcount -= 3;
    // 7F2BB1A4: lwz     r4, 464(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(464);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BB1A8:
    ctx->pc = 0x7F2BB1A8u;
    // 7F2BB1A8: cmplwi  r4, 0x0000
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

label_7F2BB1AC:
    ctx->pc = 0x7F2BB1ACu;
    // 7F2BB1AC: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB1B0:
    ctx->pc = 0x7F2BB1B0u;
    ctx->downcount -= 2;
    // 7F2BB1B0: addi    r3, r4, 52
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(52);

label_7F2BB1B4:
    ctx->pc = 0x7F2BB1B4u;
    // 7F2BB1B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB1B8:
    ctx->pc = 0x7F2BB1B8u;
    ctx->downcount -= 4;
    // 7F2BB1B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB1BC:
    ctx->pc = 0x7F2BB1BCu;
    // 7F2BB1BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BB1C0:
    ctx->pc = 0x7F2BB1C0u;
    // 7F2BB1C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB1C4:
    ctx->pc = 0x7F2BB1C4u;
    // 7F2BB1C4: bl      0x7F0B8A6C
    {
            ctx->lr = 0x7F2BB1C8u;
            ctx->pc = 0x7F0B8A6Cu;
            return;
    }

label_7F2BB1C8:
    ctx->pc = 0x7F2BB1C8u;
    ctx->downcount -= 2;
    // 7F2BB1C8: cmpwi   r3, 0
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

label_7F2BB1CC:
    ctx->pc = 0x7F2BB1CCu;
    // 7F2BB1CC: bc    12, 2, 0x7F2BB22C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB22C;
        }
    }

label_7F2BB1D0:
    ctx->pc = 0x7F2BB1D0u;
    ctx->downcount -= 1;
    // 7F2BB1D0: bl      0x7F0B8AAC
    {
            ctx->lr = 0x7F2BB1D4u;
            ctx->pc = 0x7F0B8AACu;
            return;
    }

label_7F2BB1D4:
    ctx->pc = 0x7F2BB1D4u;
    ctx->downcount -= 2;
    // 7F2BB1D4: cmpwi   r3, 0
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

label_7F2BB1D8:
    ctx->pc = 0x7F2BB1D8u;
    // 7F2BB1D8: bc    12, 2, 0x7F2BB1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB1E8;
        }
    }

label_7F2BB1DC:
    ctx->pc = 0x7F2BB1DCu;
    ctx->downcount -= 3;
    // 7F2BB1DC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F2BB1E0:
    ctx->pc = 0x7F2BB1E0u;
    // 7F2BB1E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB1E4:
    ctx->pc = 0x7F2BB1E4u;
    // 7F2BB1E4: bl      0x7F29007C
    {
            ctx->lr = 0x7F2BB1E8u;
            ctx->pc = 0x7F29007Cu;
            return;
    }

label_7F2BB1E8:
    ctx->pc = 0x7F2BB1E8u;
    ctx->downcount -= 5;
    // 7F2BB1E8: lis     r4, 1957
    ctx->gpr[4] = ((u32)(s32)(1957) << 16);

label_7F2BB1EC:
    ctx->pc = 0x7F2BB1ECu;
    // 7F2BB1EC: lis     r3, 3072
    ctx->gpr[3] = ((u32)(s32)(3072) << 16);

label_7F2BB1F0:
    ctx->pc = 0x7F2BB1F0u;
    // 7F2BB1F0: addi    r4, r4, -24528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24528);

label_7F2BB1F4:
    ctx->pc = 0x7F2BB1F4u;
    // 7F2BB1F4: addi    r3, r3, 3
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(3);

label_7F2BB1F8:
    ctx->pc = 0x7F2BB1F8u;
    // 7F2BB1F8: bl      0x7F29007C
    {
            ctx->lr = 0x7F2BB1FCu;
            ctx->pc = 0x7F29007Cu;
            return;
    }

label_7F2BB1FC:
    ctx->pc = 0x7F2BB1FCu;
    ctx->downcount -= 12;
    // 7F2BB1FC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB200:
    ctx->pc = 0x7F2BB200u;
    // 7F2BB200: addi    r4, r3, -5660
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2BB204:
    ctx->pc = 0x7F2BB204u;
    // 7F2BB204: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB208:
    ctx->pc = 0x7F2BB208u;
    // 7F2BB208: lwz     r3, 2764(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB20C:
    ctx->pc = 0x7F2BB20Cu;
    // 7F2BB20C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB210:
    ctx->pc = 0x7F2BB210u;
    // 7F2BB210: rlwinm r0, r0, 0, 27, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF9Fu;
    }

label_7F2BB214:
    ctx->pc = 0x7F2BB214u;
    // 7F2BB214: stw     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB218:
    ctx->pc = 0x7F2BB218u;
    // 7F2BB218: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB21C:
    ctx->pc = 0x7F2BB21Cu;
    // 7F2BB21C: lwz     r3, 2764(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2764);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB220:
    ctx->pc = 0x7F2BB220u;
    // 7F2BB220: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB224:
    ctx->pc = 0x7F2BB224u;
    // 7F2BB224: rlwinm r0, r0, 0, 27, 24
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFF9Fu;
    }

label_7F2BB228:
    ctx->pc = 0x7F2BB228u;
    // 7F2BB228: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB22C:
    ctx->pc = 0x7F2BB22Cu;
    ctx->downcount -= 5;
    // 7F2BB22C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB230:
    ctx->pc = 0x7F2BB230u;
    // 7F2BB230: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BB234:
    ctx->pc = 0x7F2BB234u;
    // 7F2BB234: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BB238:
    ctx->pc = 0x7F2BB238u;
    // 7F2BB238: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB23C:
    ctx->pc = 0x7F2BB23Cu;
    ctx->downcount -= 5;
    // 7F2BB23C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB240:
    ctx->pc = 0x7F2BB240u;
    // 7F2BB240: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BB244:
    ctx->pc = 0x7F2BB244u;
    // 7F2BB244: cmpwi   r3, 0
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

label_7F2BB248:
    ctx->pc = 0x7F2BB248u;
    // 7F2BB248: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB24C:
    ctx->pc = 0x7F2BB24Cu;
    // 7F2BB24C: bc    12, 2, 0x7F2BB268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB268;
        }
    }

label_7F2BB250:
    ctx->pc = 0x7F2BB250u;
    ctx->downcount -= 5;
    // 7F2BB250: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BB254:
    ctx->pc = 0x7F2BB254u;
    // 7F2BB254: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB258:
    ctx->pc = 0x7F2BB258u;
    // 7F2BB258: lis     r6, 512
    ctx->gpr[6] = ((u32)(s32)(512) << 16);

label_7F2BB25C:
    ctx->pc = 0x7F2BB25Cu;
    // 7F2BB25C: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2BB260:
    ctx->pc = 0x7F2BB260u;
    // 7F2BB260: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2BB264u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2BB264:
    ctx->pc = 0x7F2BB264u;
    ctx->downcount -= 1;
    // 7F2BB264: b       0x7F2BB27C
    {
            goto label_7F2BB27C;
    }

label_7F2BB268:
    ctx->pc = 0x7F2BB268u;
    ctx->downcount -= 5;
    // 7F2BB268: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BB26C:
    ctx->pc = 0x7F2BB26Cu;
    // 7F2BB26C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB270:
    ctx->pc = 0x7F2BB270u;
    // 7F2BB270: lis     r6, 512
    ctx->gpr[6] = ((u32)(s32)(512) << 16);

label_7F2BB274:
    ctx->pc = 0x7F2BB274u;
    // 7F2BB274: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_7F2BB278:
    ctx->pc = 0x7F2BB278u;
    // 7F2BB278: bl      0x7F042E08
    {
            ctx->lr = 0x7F2BB27Cu;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F2BB27C:
    ctx->pc = 0x7F2BB27Cu;
    ctx->downcount -= 5;
    // 7F2BB27C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB280:
    ctx->pc = 0x7F2BB280u;
    // 7F2BB280: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BB284:
    ctx->pc = 0x7F2BB284u;
    // 7F2BB284: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BB288:
    ctx->pc = 0x7F2BB288u;
    // 7F2BB288: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB28C:
    ctx->pc = 0x7F2BB28Cu;
    ctx->downcount -= 7;
    // 7F2BB28C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB290:
    ctx->pc = 0x7F2BB290u;
    // 7F2BB290: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BB294:
    ctx->pc = 0x7F2BB294u;
    // 7F2BB294: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB298:
    ctx->pc = 0x7F2BB298u;
    // 7F2BB298: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB29C:
    ctx->pc = 0x7F2BB29Cu;
    // 7F2BB29C: lwz     r4, -5660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5660);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BB2A0:
    ctx->pc = 0x7F2BB2A0u;
    // 7F2BB2A0: cmplwi  r4, 0x0000
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

label_7F2BB2A4:
    ctx->pc = 0x7F2BB2A4u;
    // 7F2BB2A4: bc    12, 2, 0x7F2BB2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB2CC;
        }
    }

label_7F2BB2A8:
    ctx->pc = 0x7F2BB2A8u;
    ctx->downcount -= 4;
    // 7F2BB2A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB2AC:
    ctx->pc = 0x7F2BB2ACu;
    // 7F2BB2AC: li      r3, 768
    ctx->gpr[3] = (u32)(s32)(768);

label_7F2BB2B0:
    ctx->pc = 0x7F2BB2B0u;
    // 7F2BB2B0: stw     r0, 3972(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(3972);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB2B4:
    ctx->pc = 0x7F2BB2B4u;
    // 7F2BB2B4: bl      0x7F018418
    {
            ctx->lr = 0x7F2BB2B8u;
            ctx->pc = 0x7F018418u;
            return;
    }

label_7F2BB2B8:
    ctx->pc = 0x7F2BB2B8u;
    ctx->downcount -= 2;
    // 7F2BB2B8: cmpwi   r3, 0
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

label_7F2BB2BC:
    ctx->pc = 0x7F2BB2BCu;
    // 7F2BB2BC: bc    4, 2, 0x7F2BB2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB2CC;
        }
    }

label_7F2BB2C0:
    ctx->pc = 0x7F2BB2C0u;
    ctx->downcount -= 3;
    // 7F2BB2C0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB2C4:
    ctx->pc = 0x7F2BB2C4u;
    // 7F2BB2C4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_7F2BB2C8:
    ctx->pc = 0x7F2BB2C8u;
    // 7F2BB2C8: stw     r0, -7584(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-7584);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB2CC:
    ctx->pc = 0x7F2BB2CCu;
    ctx->downcount -= 5;
    // 7F2BB2CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB2D0:
    ctx->pc = 0x7F2BB2D0u;
    // 7F2BB2D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BB2D4:
    ctx->pc = 0x7F2BB2D4u;
    // 7F2BB2D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BB2D8:
    ctx->pc = 0x7F2BB2D8u;
    // 7F2BB2D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB2DC:
    ctx->pc = 0x7F2BB2DCu;
    ctx->downcount -= 20;
    // 7F2BB2DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB2E0:
    ctx->pc = 0x7F2BB2E0u;
    // 7F2BB2E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BB2E4:
    ctx->pc = 0x7F2BB2E4u;
    // 7F2BB2E4: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB2E8:
    ctx->pc = 0x7F2BB2E8u;
    // 7F2BB2E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB2EC:
    ctx->pc = 0x7F2BB2ECu;
    // 7F2BB2EC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BB2F0:
    ctx->pc = 0x7F2BB2F0u;
    // 7F2BB2F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BB2F4:
    ctx->pc = 0x7F2BB2F4u;
    // 7F2BB2F4: addi    r3, r4, -6088
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-6088);

label_7F2BB2F8:
    ctx->pc = 0x7F2BB2F8u;
    // 7F2BB2F8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB2FC:
    ctx->pc = 0x7F2BB2FCu;
    // 7F2BB2FC: cmplwi  r3, 0x0000
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

label_7F2BB300:
    ctx->pc = 0x7F2BB300u;
    // 7F2BB300: bc    12, 2, 0x7F2BB310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB310;
        }
    }

label_7F2BB304:
    ctx->pc = 0x7F2BB304u;
    ctx->downcount -= 3;
    // 7F2BB304: lwz     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB308:
    ctx->pc = 0x7F2BB308u;
    // 7F2BB308: cmplw   r0, r3
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

label_7F2BB30C:
    ctx->pc = 0x7F2BB30Cu;
    // 7F2BB30C: bc    4, 2, 0x7F2BB320
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB320;
        }
    }

label_7F2BB310:
    ctx->pc = 0x7F2BB310u;
    ctx->downcount -= 4;
    // 7F2BB310: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB314:
    ctx->pc = 0x7F2BB314u;
    // 7F2BB314: lwz     r0, -6096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6096);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB318:
    ctx->pc = 0x7F2BB318u;
    // 7F2BB318: cmpwi   r0, 0
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

label_7F2BB31C:
    ctx->pc = 0x7F2BB31Cu;
    // 7F2BB31C: bc    12, 2, 0x7F2BB3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB3C0;
        }
    }

label_7F2BB320:
    ctx->pc = 0x7F2BB320u;
    ctx->downcount -= 3;
    // 7F2BB320: lwz     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB324:
    ctx->pc = 0x7F2BB324u;
    // 7F2BB324: cmplwi  r3, 0x0000
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

label_7F2BB328:
    ctx->pc = 0x7F2BB328u;
    // 7F2BB328: bc    12, 2, 0x7F2BB360
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB360;
        }
    }

label_7F2BB32C:
    ctx->pc = 0x7F2BB32Cu;
    ctx->downcount -= 1;
    // 7F2BB32C: bl      0x7F3C8270
    {
            ctx->lr = 0x7F2BB330u;
            ctx->pc = 0x7F3C8270u;
            return;
    }

label_7F2BB330:
    ctx->pc = 0x7F2BB330u;
    ctx->downcount -= 2;
    // 7F2BB330: or.   r30, r3, r3
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

label_7F2BB334:
    ctx->pc = 0x7F2BB334u;
    // 7F2BB334: bc    12, 2, 0x7F2BB358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB358;
        }
    }

label_7F2BB338:
    ctx->pc = 0x7F2BB338u;
    ctx->downcount -= 3;
    // 7F2BB338: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BB33C:
    ctx->pc = 0x7F2BB33Cu;
    // 7F2BB33C: addi    r3, r3, 24728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24728);

label_7F2BB340:
    ctx->pc = 0x7F2BB340u;
    // 7F2BB340: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2BB344u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2BB344:
    ctx->pc = 0x7F2BB344u;
    ctx->downcount -= 3;
    // 7F2BB344: lwz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB348:
    ctx->pc = 0x7F2BB348u;
    // 7F2BB348: cmplw   r0, r3
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

label_7F2BB34C:
    ctx->pc = 0x7F2BB34Cu;
    // 7F2BB34C: bc    4, 2, 0x7F2BB358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB358;
        }
    }

label_7F2BB350:
    ctx->pc = 0x7F2BB350u;
    ctx->downcount -= 2;
    // 7F2BB350: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F2BB354:
    ctx->pc = 0x7F2BB354u;
    // 7F2BB354: bl      0x7F3C82E8
    {
            ctx->lr = 0x7F2BB358u;
            ctx->pc = 0x7F3C82E8u;
            return;
    }

label_7F2BB358:
    ctx->pc = 0x7F2BB358u;
    ctx->downcount -= 2;
    // 7F2BB358: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB35C:
    ctx->pc = 0x7F2BB35Cu;
    // 7F2BB35C: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB360:
    ctx->pc = 0x7F2BB360u;
    ctx->downcount -= 8;
    // 7F2BB360: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB364:
    ctx->pc = 0x7F2BB364u;
    // 7F2BB364: addi    r3, r31, 48
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(48);

label_7F2BB368:
    ctx->pc = 0x7F2BB368u;
    // 7F2BB368: lwz     r0, -6088(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6088);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB36C:
    ctx->pc = 0x7F2BB36Cu;
    // 7F2BB36C: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB370:
    ctx->pc = 0x7F2BB370u;
    // 7F2BB370: lwz     r5, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2BB374:
    ctx->pc = 0x7F2BB374u;
    // 7F2BB374: lwz     r6, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F2BB378:
    ctx->pc = 0x7F2BB378u;
    // 7F2BB378: lwz     r7, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F2BB37C:
    ctx->pc = 0x7F2BB37Cu;
    // 7F2BB37C: bl      0x7F2CE9A0
    {
            ctx->lr = 0x7F2BB380u;
            ctx->pc = 0x7F2CE9A0u;
            return;
    }

label_7F2BB380:
    ctx->pc = 0x7F2BB380u;
    ctx->downcount -= 4;
    // 7F2BB380: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BB384:
    ctx->pc = 0x7F2BB384u;
    // 7F2BB384: lwz     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB388:
    ctx->pc = 0x7F2BB388u;
    // 7F2BB388: cmplwi  r0, 0x0000
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

label_7F2BB38C:
    ctx->pc = 0x7F2BB38Cu;
    // 7F2BB38C: bc    12, 2, 0x7F2BB3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB3C0;
        }
    }

label_7F2BB390:
    ctx->pc = 0x7F2BB390u;
    ctx->downcount -= 3;
    // 7F2BB390: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BB394:
    ctx->pc = 0x7F2BB394u;
    // 7F2BB394: addi    r3, r3, 24728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24728);

label_7F2BB398:
    ctx->pc = 0x7F2BB398u;
    // 7F2BB398: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F2BB39Cu;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F2BB39C:
    ctx->pc = 0x7F2BB39Cu;
    ctx->downcount -= 6;
    // 7F2BB39C: lwz     r5, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F2BB3A0:
    ctx->pc = 0x7F2BB3A0u;
    // 7F2BB3A0: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB3A4:
    ctx->pc = 0x7F2BB3A4u;
    // 7F2BB3A4: stw     r3, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BB3A8:
    ctx->pc = 0x7F2BB3A8u;
    // 7F2BB3A8: lwz     r3, -6092(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6092);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB3AC:
    ctx->pc = 0x7F2BB3ACu;
    // 7F2BB3AC: lwz     r4, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BB3B0:
    ctx->pc = 0x7F2BB3B0u;
    // 7F2BB3B0: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F2BB3B4u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F2BB3B4:
    ctx->pc = 0x7F2BB3B4u;
    ctx->downcount -= 3;
    // 7F2BB3B4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB3B8:
    ctx->pc = 0x7F2BB3B8u;
    // 7F2BB3B8: lwz     r0, -6088(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6088);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB3BC:
    ctx->pc = 0x7F2BB3BCu;
    // 7F2BB3BC: stw     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB3C0:
    ctx->pc = 0x7F2BB3C0u;
    ctx->downcount -= 23;
    // 7F2BB3C0: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BB3C4:
    ctx->pc = 0x7F2BB3C4u;
    // 7F2BB3C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB3C8:
    ctx->pc = 0x7F2BB3C8u;
    // 7F2BB3C8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB3CC:
    ctx->pc = 0x7F2BB3CCu;
    // 7F2BB3CC: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB3D0:
    ctx->pc = 0x7F2BB3D0u;
    // 7F2BB3D0: stw     r0, -6088(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6088);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB3D4:
    ctx->pc = 0x7F2BB3D4u;
    // 7F2BB3D4: stw     r0, -6092(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6092);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB3D8:
    ctx->pc = 0x7F2BB3D8u;
    // 7F2BB3D8: stw     r0, -6096(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6096);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB3DC:
    ctx->pc = 0x7F2BB3DCu;
    // 7F2BB3DC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BB3E0:
    ctx->pc = 0x7F2BB3E0u;
    // 7F2BB3E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB3E4:
    ctx->pc = 0x7F2BB3E4u;
    // 7F2BB3E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BB3E8:
    ctx->pc = 0x7F2BB3E8u;
    // 7F2BB3E8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BB3EC:
    ctx->pc = 0x7F2BB3ECu;
    // 7F2BB3EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB3F0:
    ctx->pc = 0x7F2BB3F0u;
    ctx->downcount -= 1;
    // 7F2BB3F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB3F4:
    ctx->pc = 0x7F2BB3F4u;
    ctx->downcount -= 23;
    // 7F2BB3F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB3F8:
    ctx->pc = 0x7F2BB3F8u;
    // 7F2BB3F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BB3FC:
    ctx->pc = 0x7F2BB3FCu;
    // 7F2BB3FC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F2BB400:
    ctx->pc = 0x7F2BB400u;
    // 7F2BB400: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB404:
    ctx->pc = 0x7F2BB404u;
    // 7F2BB404: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BB408:
    ctx->pc = 0x7F2BB408u;
    // 7F2BB408: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BB40C:
    ctx->pc = 0x7F2BB40Cu;
    // 7F2BB40C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F2BB410:
    ctx->pc = 0x7F2BB410u;
    // 7F2BB410: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F2BB414:
    ctx->pc = 0x7F2BB414u;
    // 7F2BB414: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F2BB418:
    ctx->pc = 0x7F2BB418u;
    // 7F2BB418: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F2BB41C:
    ctx->pc = 0x7F2BB41Cu;
    // 7F2BB41C: li      r5, 120
    ctx->gpr[5] = (u32)(s32)(120);

label_7F2BB420:
    ctx->pc = 0x7F2BB420u;
    // 7F2BB420: li      r6, 251
    ctx->gpr[6] = (u32)(s32)(251);

label_7F2BB424:
    ctx->pc = 0x7F2BB424u;
    // 7F2BB424: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F2BB428u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F2BB428:
    ctx->pc = 0x7F2BB428u;
    ctx->downcount -= 2;
    // 7F2BB428: or.   r31, r3, r3
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

label_7F2BB42C:
    ctx->pc = 0x7F2BB42Cu;
    // 7F2BB42C: bc    4, 2, 0x7F2BB438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB438;
        }
    }

label_7F2BB430:
    ctx->pc = 0x7F2BB430u;
    ctx->downcount -= 2;
    // 7F2BB430: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB434:
    ctx->pc = 0x7F2BB434u;
    // 7F2BB434: b       0x7F2BB48C
    {
            goto label_7F2BB48C;
    }

label_7F2BB438:
    ctx->pc = 0x7F2BB438u;
    ctx->downcount -= 5;
    // 7F2BB438: lis     r4, 32556
    ctx->gpr[4] = ((u32)(s32)(32556) << 16);

label_7F2BB43C:
    ctx->pc = 0x7F2BB43Cu;
    // 7F2BB43C: lis     r5, 32556
    ctx->gpr[5] = ((u32)(s32)(32556) << 16);

label_7F2BB440:
    ctx->pc = 0x7F2BB440u;
    // 7F2BB440: addi    r4, r4, -19748
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19748);

label_7F2BB444:
    ctx->pc = 0x7F2BB444u;
    // 7F2BB444: addi    r5, r5, -19472
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19472);

label_7F2BB448:
    ctx->pc = 0x7F2BB448u;
    // 7F2BB448: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F2BB44Cu;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F2BB44C:
    ctx->pc = 0x7F2BB44Cu;
    ctx->downcount -= 16;
    // 7F2BB44C: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB450:
    ctx->pc = 0x7F2BB450u;
    // 7F2BB450: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F2BB454:
    ctx->pc = 0x7F2BB454u;
    // 7F2BB454: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BB458:
    ctx->pc = 0x7F2BB458u;
    // 7F2BB458: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BB45C:
    ctx->pc = 0x7F2BB45Cu;
    // 7F2BB45C: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F2BB460:
    ctx->pc = 0x7F2BB460u;
    // 7F2BB460: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F2BB464:
    ctx->pc = 0x7F2BB464u;
    // 7F2BB464: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BB468:
    ctx->pc = 0x7F2BB468u;
    // 7F2BB468: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BB46C:
    ctx->pc = 0x7F2BB46Cu;
    // 7F2BB46C: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BB470:
    ctx->pc = 0x7F2BB470u;
    // 7F2BB470: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F2BB474:
    ctx->pc = 0x7F2BB474u;
    // 7F2BB474: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB478:
    ctx->pc = 0x7F2BB478u;
    // 7F2BB478: stw     r28, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F2BB47C:
    ctx->pc = 0x7F2BB47Cu;
    // 7F2BB47C: stw     r29, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F2BB480:
    ctx->pc = 0x7F2BB480u;
    // 7F2BB480: stw     r30, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F2BB484:
    ctx->pc = 0x7F2BB484u;
    // 7F2BB484: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB488:
    ctx->pc = 0x7F2BB488u;
    // 7F2BB488: stw     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB48C:
    ctx->pc = 0x7F2BB48Cu;
    ctx->downcount -= 16;
    // 7F2BB48C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BB490:
    ctx->pc = 0x7F2BB490u;
    // 7F2BB490: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB494:
    ctx->pc = 0x7F2BB494u;
    // 7F2BB494: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BB498:
    ctx->pc = 0x7F2BB498u;
    // 7F2BB498: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BB49C:
    ctx->pc = 0x7F2BB49Cu;
    // 7F2BB49C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB4A0:
    ctx->pc = 0x7F2BB4A0u;
    ctx->downcount -= 5;
    // 7F2BB4A0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB4A4:
    ctx->pc = 0x7F2BB4A4u;
    // 7F2BB4A4: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2BB4A8:
    ctx->pc = 0x7F2BB4A8u;
    // 7F2BB4A8: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB4AC:
    ctx->pc = 0x7F2BB4ACu;
    // 7F2BB4AC: cmplwi  r3, 0x0000
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

label_7F2BB4B0:
    ctx->pc = 0x7F2BB4B0u;
    // 7F2BB4B0: bc    4, 2, 0x7F2BB4BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB4BC;
        }
    }

label_7F2BB4B4:
    ctx->pc = 0x7F2BB4B4u;
    ctx->downcount -= 2;
    // 7F2BB4B4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB4B8:
    ctx->pc = 0x7F2BB4B8u;
    // 7F2BB4B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB4BC:
    ctx->pc = 0x7F2BB4BCu;
    ctx->downcount -= 2;
    // 7F2BB4BC: lwz     r3, 2480(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2480);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB4C0:
    ctx->pc = 0x7F2BB4C0u;
    // 7F2BB4C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB4C4:
    ctx->pc = 0x7F2BB4C4u;
    ctx->downcount -= 5;
    // 7F2BB4C4: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB4C8:
    ctx->pc = 0x7F2BB4C8u;
    // 7F2BB4C8: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2BB4CC:
    ctx->pc = 0x7F2BB4CCu;
    // 7F2BB4CC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB4D0:
    ctx->pc = 0x7F2BB4D0u;
    // 7F2BB4D0: cmplwi  r3, 0x0000
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

label_7F2BB4D4:
    ctx->pc = 0x7F2BB4D4u;
    // 7F2BB4D4: bc    4, 2, 0x7F2BB4E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB4E0;
        }
    }

label_7F2BB4D8:
    ctx->pc = 0x7F2BB4D8u;
    ctx->downcount -= 2;
    // 7F2BB4D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB4DC:
    ctx->pc = 0x7F2BB4DCu;
    // 7F2BB4DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB4E0:
    ctx->pc = 0x7F2BB4E0u;
    ctx->downcount -= 2;
    // 7F2BB4E0: lwz     r3, 2504(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2504);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB4E4:
    ctx->pc = 0x7F2BB4E4u;
    // 7F2BB4E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB4E8:
    ctx->pc = 0x7F2BB4E8u;
    ctx->downcount -= 52;
    // 7F2BB4E8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB4EC:
    ctx->pc = 0x7F2BB4ECu;
    // 7F2BB4EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BB4F0:
    ctx->pc = 0x7F2BB4F0u;
    // 7F2BB4F0: lis     r6, 32584
    ctx->gpr[6] = ((u32)(s32)(32584) << 16);

label_7F2BB4F4:
    ctx->pc = 0x7F2BB4F4u;
    // 7F2BB4F4: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F2BB4F8:
    ctx->pc = 0x7F2BB4F8u;
    // 7F2BB4F8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB4FC:
    ctx->pc = 0x7F2BB4FCu;
    // 7F2BB4FC: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2BB500:
    ctx->pc = 0x7F2BB500u;
    // 7F2BB500: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BB504:
    ctx->pc = 0x7F2BB504u;
    // 7F2BB504: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB508:
    ctx->pc = 0x7F2BB508u;
    // 7F2BB508: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BB50C:
    ctx->pc = 0x7F2BB50Cu;
    // 7F2BB50C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB510:
    ctx->pc = 0x7F2BB510u;
    // 7F2BB510: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB514:
    ctx->pc = 0x7F2BB514u;
    // 7F2BB514: lis     r27, 32589
    ctx->gpr[27] = ((u32)(s32)(32589) << 16);

label_7F2BB518:
    ctx->pc = 0x7F2BB518u;
    // 7F2BB518: lis     r28, 32589
    ctx->gpr[28] = ((u32)(s32)(32589) << 16);

label_7F2BB51C:
    ctx->pc = 0x7F2BB51Cu;
    // 7F2BB51C: lis     r29, 32589
    ctx->gpr[29] = ((u32)(s32)(32589) << 16);

label_7F2BB520:
    ctx->pc = 0x7F2BB520u;
    // 7F2BB520: lis     r30, 32589
    ctx->gpr[30] = ((u32)(s32)(32589) << 16);

label_7F2BB524:
    ctx->pc = 0x7F2BB524u;
    // 7F2BB524: lis     r31, 32589
    ctx->gpr[31] = ((u32)(s32)(32589) << 16);

label_7F2BB528:
    ctx->pc = 0x7F2BB528u;
    // 7F2BB528: lis     r12, 32589
    ctx->gpr[12] = ((u32)(s32)(32589) << 16);

label_7F2BB52C:
    ctx->pc = 0x7F2BB52Cu;
    // 7F2BB52C: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F2BB530:
    ctx->pc = 0x7F2BB530u;
    // 7F2BB530: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F2BB534:
    ctx->pc = 0x7F2BB534u;
    // 7F2BB534: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F2BB538:
    ctx->pc = 0x7F2BB538u;
    // 7F2BB538: addi    r25, r6, 24800
    ctx->gpr[25] = ctx->gpr[6] + (u32)(s32)(24800);

label_7F2BB53C:
    ctx->pc = 0x7F2BB53Cu;
    // 7F2BB53C: li      r24, -1
    ctx->gpr[24] = (u32)(s32)(-1);

label_7F2BB540:
    ctx->pc = 0x7F2BB540u;
    // 7F2BB540: lis     r26, 32589
    ctx->gpr[26] = ((u32)(s32)(32589) << 16);

label_7F2BB544:
    ctx->pc = 0x7F2BB544u;
    // 7F2BB544: addi    r6, r10, -5900
    ctx->gpr[6] = ctx->gpr[10] + (u32)(s32)(-5900);

label_7F2BB548:
    ctx->pc = 0x7F2BB548u;
    // 7F2BB548: li      r10, 1260
    ctx->gpr[10] = (u32)(s32)(1260);

label_7F2BB54C:
    ctx->pc = 0x7F2BB54Cu;
    // 7F2BB54C: stw     r0, -6228(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB550:
    ctx->pc = 0x7F2BB550u;
    // 7F2BB550: stb     r24, 0(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[24]);
    }

label_7F2BB554:
    ctx->pc = 0x7F2BB554u;
    // 7F2BB554: stw     r0, -5672(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB558:
    ctx->pc = 0x7F2BB558u;
    // 7F2BB558: stw     r0, -5676(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB55C:
    ctx->pc = 0x7F2BB55Cu;
    // 7F2BB55C: stw     r0, -5688(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5688);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB560:
    ctx->pc = 0x7F2BB560u;
    // 7F2BB560: stb     r24, -5980(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(-5980);
        mem_write8(ctx, ea, (u8)ctx->gpr[24]);
    }

label_7F2BB564:
    ctx->pc = 0x7F2BB564u;
    // 7F2BB564: stb     r0, -6204(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(-6204);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB568:
    ctx->pc = 0x7F2BB568u;
    // 7F2BB568: stb     r0, -6203(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(-6203);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB56C:
    ctx->pc = 0x7F2BB56Cu;
    // 7F2BB56C: stb     r0, -6202(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(-6202);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB570:
    ctx->pc = 0x7F2BB570u;
    // 7F2BB570: stb     r0, -6201(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(-6201);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB574:
    ctx->pc = 0x7F2BB574u;
    // 7F2BB574: stb     r0, -6199(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(-6199);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB578:
    ctx->pc = 0x7F2BB578u;
    // 7F2BB578: stb     r0, -6200(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-6200);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB57C:
    ctx->pc = 0x7F2BB57Cu;
    // 7F2BB57C: stw     r0, -5972(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(-5972);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB580:
    ctx->pc = 0x7F2BB580u;
    // 7F2BB580: sth     r10, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[10]);
    }

label_7F2BB584:
    ctx->pc = 0x7F2BB584u;
    // 7F2BB584: sth     r0, -5898(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-5898);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BB588:
    ctx->pc = 0x7F2BB588u;
    // 7F2BB588: stw     r0, -5896(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-5896);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB58C:
    ctx->pc = 0x7F2BB58Cu;
    // 7F2BB58C: bl      0x7F01C4FC
    {
            ctx->lr = 0x7F2BB590u;
            ctx->pc = 0x7F01C4FCu;
            return;
    }

label_7F2BB590:
    ctx->pc = 0x7F2BB590u;
    ctx->downcount -= 7;
    // 7F2BB590: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB594:
    ctx->pc = 0x7F2BB594u;
    // 7F2BB594: lis     r3, 111
    ctx->gpr[3] = ((u32)(s32)(111) << 16);

label_7F2BB598:
    ctx->pc = 0x7F2BB598u;
    // 7F2BB598: addi    r4, r4, -5848
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5848);

label_7F2BB59C:
    ctx->pc = 0x7F2BB59Cu;
    // 7F2BB59C: lwz     r4, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F2BB5A0:
    ctx->pc = 0x7F2BB5A0u;
    // 7F2BB5A0: addi    r3, r3, -29050
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-29050);

label_7F2BB5A4:
    ctx->pc = 0x7F2BB5A4u;
    // 7F2BB5A4: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2BB5A8:
    ctx->pc = 0x7F2BB5A8u;
    // 7F2BB5A8: bl      0x7F01C30C
    {
            ctx->lr = 0x7F2BB5ACu;
            ctx->pc = 0x7F01C30Cu;
            return;
    }

label_7F2BB5AC:
    ctx->pc = 0x7F2BB5ACu;
    ctx->downcount -= 10;
    // 7F2BB5AC: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2BB5B0:
    ctx->pc = 0x7F2BB5B0u;
    // 7F2BB5B0: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2BB5B4:
    ctx->pc = 0x7F2BB5B4u;
    // 7F2BB5B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB5B8:
    ctx->pc = 0x7F2BB5B8u;
    // 7F2BB5B8: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BB5BC:
    ctx->pc = 0x7F2BB5BCu;
    // 7F2BB5BC: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB5C0:
    ctx->pc = 0x7F2BB5C0u;
    // 7F2BB5C0: stw     r3, -5920(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-5920);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BB5C4:
    ctx->pc = 0x7F2BB5C4u;
    // 7F2BB5C4: stw     r0, -5976(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5976);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB5C8:
    ctx->pc = 0x7F2BB5C8u;
    // 7F2BB5C8: stw     r0, -6180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB5CC:
    ctx->pc = 0x7F2BB5CCu;
    // 7F2BB5CC: stw     r0, -6176(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6176);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB5D0:
    ctx->pc = 0x7F2BB5D0u;
    // 7F2BB5D0: bl      0x7F23B5D4
    {
            ctx->lr = 0x7F2BB5D4u;
            ctx->pc = 0x7F23B5D4u;
            return;
    }

label_7F2BB5D4:
    ctx->pc = 0x7F2BB5D4u;
    ctx->downcount -= 1;
    // 7F2BB5D4: bl      0x7F23A4C8
    {
            ctx->lr = 0x7F2BB5D8u;
            ctx->pc = 0x7F23A4C8u;
            return;
    }

label_7F2BB5D8:
    ctx->pc = 0x7F2BB5D8u;
    ctx->downcount -= 31;
    // 7F2BB5D8: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F2BB5DC:
    ctx->pc = 0x7F2BB5DCu;
    // 7F2BB5DC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2BB5E0:
    ctx->pc = 0x7F2BB5E0u;
    // 7F2BB5E0: addi    r9, r4, 27656
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(27656);

label_7F2BB5E4:
    ctx->pc = 0x7F2BB5E4u;
    // 7F2BB5E4: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F2BB5E8:
    ctx->pc = 0x7F2BB5E8u;
    // 7F2BB5E8: lfs     f1, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB5E8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F2BB5EC:
    ctx->pc = 0x7F2BB5ECu;
    // 7F2BB5EC: addi    r7, r3, 27660
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(27660);

label_7F2BB5F0:
    ctx->pc = 0x7F2BB5F0u;
    // 7F2BB5F0: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BB5F4:
    ctx->pc = 0x7F2BB5F4u;
    // 7F2BB5F4: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2BB5F8:
    ctx->pc = 0x7F2BB5F8u;
    // 7F2BB5F8: stfsu     f1, -5952(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB5F8u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-5952);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
        ctx->gpr[8] = ea;
    }

label_7F2BB5FC:
    ctx->pc = 0x7F2BB5FCu;
    // 7F2BB5FC: addi    r4, r3, 13880
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BB600:
    ctx->pc = 0x7F2BB600u;
    // 7F2BB600: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB600u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2BB604:
    ctx->pc = 0x7F2BB604u;
    // 7F2BB604: addi    r7, r6, -5968
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(-5968);

label_7F2BB608:
    ctx->pc = 0x7F2BB608u;
    // 7F2BB608: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BB60C:
    ctx->pc = 0x7F2BB60Cu;
    // 7F2BB60C: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F2BB610:
    ctx->pc = 0x7F2BB610u;
    // 7F2BB610: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_7F2BB614:
    ctx->pc = 0x7F2BB614u;
    // 7F2BB614: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F2BB618:
    ctx->pc = 0x7F2BB618u;
    // 7F2BB618: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F2BB61C:
    ctx->pc = 0x7F2BB61Cu;
    // 7F2BB61C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_7F2BB620:
    ctx->pc = 0x7F2BB620u;
    // 7F2BB620: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_7F2BB624:
    ctx->pc = 0x7F2BB624u;
    // 7F2BB624: stw     r12, -8576(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(-8576);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2BB628:
    ctx->pc = 0x7F2BB628u;
    // 7F2BB628: addi    r3, r3, 24808
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24808);

label_7F2BB62C:
    ctx->pc = 0x7F2BB62Cu;
    // 7F2BB62C: lwz     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F2BB630:
    ctx->pc = 0x7F2BB630u;
    // 7F2BB630: stw     r12, -6156(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-6156);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F2BB634:
    ctx->pc = 0x7F2BB634u;
    // 7F2BB634: stfs     f1, 4(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB634u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2BB638:
    ctx->pc = 0x7F2BB638u;
    // 7F2BB638: stfs     f1, 8(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB638u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F2BB63C:
    ctx->pc = 0x7F2BB63Cu;
    // 7F2BB63C: stfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB63Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BB640:
    ctx->pc = 0x7F2BB640u;
    // 7F2BB640: stfs     f0, 4(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB640u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BB644:
    ctx->pc = 0x7F2BB644u;
    // 7F2BB644: stfs     f0, 8(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB644u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BB648:
    ctx->pc = 0x7F2BB648u;
    // 7F2BB648: stw     r6, 24804(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24804);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F2BB64C:
    ctx->pc = 0x7F2BB64Cu;
    // 7F2BB64C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F2BB650:
    ctx->pc = 0x7F2BB650u;
    ctx->downcount -= 4;
    // 7F2BB650: lha     r4, 296(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(296);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BB654:
    ctx->pc = 0x7F2BB654u;
    // 7F2BB654: lwzx    r0, r3, r12
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[12];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB658:
    // 7F2BB658: cmpw    r4, r0
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

label_7F2BB65C:
    // 7F2BB65C: bc    4, 2, 0x7F2BB678
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB678;
        }
    }

label_7F2BB660:
    ctx->downcount -= 6;
    // 7F2BB660: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2BB664:
    // 7F2BB664: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BB668:
    // 7F2BB668: addi    r4, r4, 24820
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24820);

label_7F2BB66C:
    ctx->pc = 0x7F2BB66Cu;
    // 7F2BB66C: lwzx    r0, r4, r12
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[12];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB670:
    ctx->pc = 0x7F2BB670u;
    // 7F2BB670: stw     r0, 24804(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24804);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB674:
    // 7F2BB674: b       0x7F2BB680
    {
            goto label_7F2BB680;
    }

label_7F2BB678:
    ctx->downcount -= 2;
    // 7F2BB678: addi    r12, r12, 4
    ctx->gpr[12] = ctx->gpr[12] + (u32)(s32)(4);

label_7F2BB67C:
    // 7F2BB67C: bc    16, 0, 0x7F2BB650
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BB650u;
                return;
            }
            goto label_7F2BB650;
        }
    }

label_7F2BB680:
    ctx->pc = 0x7F2BB680u;
    ctx->downcount -= 6;
    // 7F2BB680: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BB684:
    ctx->pc = 0x7F2BB684u;
    // 7F2BB684: addi    r4, r3, 24804
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(24804);

label_7F2BB688:
    ctx->pc = 0x7F2BB688u;
    // 7F2BB688: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB68C:
    ctx->pc = 0x7F2BB68Cu;
    // 7F2BB68C: addis   r0, r3, -47
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-47) << 16);

label_7F2BB690:
    ctx->pc = 0x7F2BB690u;
    // 7F2BB690: cmplwi  r0, 0x1211
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x1211u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BB694:
    ctx->pc = 0x7F2BB694u;
    // 7F2BB694: bc    4, 2, 0x7F2BB6B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB6B4;
        }
    }

label_7F2BB698:
    ctx->pc = 0x7F2BB698u;
    ctx->downcount -= 3;
    // 7F2BB698: lha     r0, 312(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BB69C:
    ctx->pc = 0x7F2BB69Cu;
    // 7F2BB69C: rlwinm. r0, r0, 0, 27, 27
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

label_7F2BB6A0:
    ctx->pc = 0x7F2BB6A0u;
    // 7F2BB6A0: bc    12, 2, 0x7F2BB6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB6D8;
        }
    }

label_7F2BB6A4:
    ctx->pc = 0x7F2BB6A4u;
    ctx->downcount -= 4;
    // 7F2BB6A4: lis     r3, 47
    ctx->gpr[3] = ((u32)(s32)(47) << 16);

label_7F2BB6A8:
    ctx->pc = 0x7F2BB6A8u;
    // 7F2BB6A8: addi    r0, r3, 4626
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(4626);

label_7F2BB6AC:
    ctx->pc = 0x7F2BB6ACu;
    // 7F2BB6AC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB6B0:
    ctx->pc = 0x7F2BB6B0u;
    // 7F2BB6B0: b       0x7F2BB6D8
    {
            goto label_7F2BB6D8;
    }

label_7F2BB6B4:
    ctx->pc = 0x7F2BB6B4u;
    ctx->downcount -= 3;
    // 7F2BB6B4: addis   r0, r3, -49
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-49) << 16);

label_7F2BB6B8:
    ctx->pc = 0x7F2BB6B8u;
    // 7F2BB6B8: cmplwi  r0, 0x792F
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x792Fu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BB6BC:
    ctx->pc = 0x7F2BB6BCu;
    // 7F2BB6BC: bc    4, 2, 0x7F2BB6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB6D8;
        }
    }

label_7F2BB6C0:
    ctx->pc = 0x7F2BB6C0u;
    ctx->downcount -= 3;
    // 7F2BB6C0: lha     r0, 312(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BB6C4:
    ctx->pc = 0x7F2BB6C4u;
    // 7F2BB6C4: rlwinm. r0, r0, 0, 24, 24
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

label_7F2BB6C8:
    ctx->pc = 0x7F2BB6C8u;
    // 7F2BB6C8: bc    12, 2, 0x7F2BB6D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB6D8;
        }
    }

label_7F2BB6CC:
    ctx->pc = 0x7F2BB6CCu;
    ctx->downcount -= 3;
    // 7F2BB6CC: lis     r3, 72
    ctx->gpr[3] = ((u32)(s32)(72) << 16);

label_7F2BB6D0:
    ctx->pc = 0x7F2BB6D0u;
    // 7F2BB6D0: addi    r0, r3, -3138
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3138);

label_7F2BB6D4:
    ctx->pc = 0x7F2BB6D4u;
    // 7F2BB6D4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB6D8:
    ctx->pc = 0x7F2BB6D8u;
    ctx->downcount -= 16;
    // 7F2BB6D8: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BB6DC:
    ctx->pc = 0x7F2BB6DCu;
    // 7F2BB6DC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BB6E0:
    ctx->pc = 0x7F2BB6E0u;
    // 7F2BB6E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BB6E4:
    ctx->pc = 0x7F2BB6E4u;
    // 7F2BB6E4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F2BB6E8:
    ctx->pc = 0x7F2BB6E8u;
    // 7F2BB6E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB6EC:
    ctx->pc = 0x7F2BB6ECu;
    ctx->downcount -= 27;
    // 7F2BB6EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB6F0:
    ctx->pc = 0x7F2BB6F0u;
    // 7F2BB6F0: lis     r12, 32589
    ctx->gpr[12] = ((u32)(s32)(32589) << 16);

label_7F2BB6F4:
    ctx->pc = 0x7F2BB6F4u;
    // 7F2BB6F4: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F2BB6F8:
    ctx->pc = 0x7F2BB6F8u;
    // 7F2BB6F8: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F2BB6FC:
    ctx->pc = 0x7F2BB6FCu;
    // 7F2BB6FC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB700:
    ctx->pc = 0x7F2BB700u;
    // 7F2BB700: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F2BB704:
    ctx->pc = 0x7F2BB704u;
    // 7F2BB704: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F2BB708:
    ctx->pc = 0x7F2BB708u;
    // 7F2BB708: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2BB70C:
    ctx->pc = 0x7F2BB70Cu;
    // 7F2BB70C: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2BB710:
    ctx->pc = 0x7F2BB710u;
    // 7F2BB710: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BB714:
    ctx->pc = 0x7F2BB714u;
    // 7F2BB714: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB718:
    ctx->pc = 0x7F2BB718u;
    // 7F2BB718: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB71C:
    ctx->pc = 0x7F2BB71Cu;
    // 7F2BB71C: lis     r9, 32584
    ctx->gpr[9] = ((u32)(s32)(32584) << 16);

label_7F2BB720:
    ctx->pc = 0x7F2BB720u;
    // 7F2BB720: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2BB724:
    ctx->pc = 0x7F2BB724u;
    // 7F2BB724: stw     r31, -5680(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-5680);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB728:
    ctx->pc = 0x7F2BB728u;
    // 7F2BB728: stw     r31, -5684(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(-5684);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB72C:
    ctx->pc = 0x7F2BB72Cu;
    // 7F2BB72C: stw     r31, -6224(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(-6224);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB730:
    ctx->pc = 0x7F2BB730u;
    // 7F2BB730: stb     r0, 24801(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24801);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BB734:
    ctx->pc = 0x7F2BB734u;
    // 7F2BB734: stw     r31, -6192(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-6192);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB738:
    ctx->pc = 0x7F2BB738u;
    // 7F2BB738: stw     r31, -6188(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6188);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB73C:
    ctx->pc = 0x7F2BB73Cu;
    // 7F2BB73C: stw     r31, -6184(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-6184);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB740:
    ctx->pc = 0x7F2BB740u;
    // 7F2BB740: stw     r31, -6112(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6112);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB744:
    ctx->pc = 0x7F2BB744u;
    // 7F2BB744: stw     r31, -6108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB748:
    ctx->pc = 0x7F2BB748u;
    // 7F2BB748: stw     r31, -6104(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-6104);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BB74C:
    ctx->pc = 0x7F2BB74Cu;
    // 7F2BB74C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2BB750:
    ctx->pc = 0x7F2BB750u;
    // 7F2BB750: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BB754:
    ctx->pc = 0x7F2BB754u;
    // 7F2BB754: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BB758:
    ctx->pc = 0x7F2BB758u;
    ctx->downcount -= 15;
    // 7F2BB758: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BB75C:
    ctx->pc = 0x7F2BB75Cu;
    // 7F2BB75C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BB760:
    ctx->pc = 0x7F2BB760u;
    // 7F2BB760: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB764:
    ctx->pc = 0x7F2BB764u;
    // 7F2BB764: stmw     r14, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 14; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BB768:
    ctx->pc = 0x7F2BB768u;
    // 7F2BB768: bl      0x7F2BBA1C
    {
            ctx->lr = 0x7F2BB76Cu;
            goto label_7F2BBA1C;
    }

label_7F2BB76C:
    ctx->pc = 0x7F2BB76Cu;
    ctx->downcount -= 5;
    // 7F2BB76C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BB770:
    ctx->pc = 0x7F2BB770u;
    // 7F2BB770: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB774:
    ctx->pc = 0x7F2BB774u;
    // 7F2BB774: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BB778:
    ctx->pc = 0x7F2BB778u;
    // 7F2BB778: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BB77C:
    ctx->pc = 0x7F2BB77Cu;
    // 7F2BB77C: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2BB780u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2BB780:
    ctx->pc = 0x7F2BB780u;
    ctx->downcount -= 6;
    // 7F2BB780: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BB784:
    ctx->pc = 0x7F2BB784u;
    // 7F2BB784: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BB788:
    ctx->pc = 0x7F2BB788u;
    // 7F2BB788: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB78C:
    ctx->pc = 0x7F2BB78Cu;
    // 7F2BB78C: lha     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BB790:
    ctx->pc = 0x7F2BB790u;
    // 7F2BB790: rlwinm. r0, r0, 0, 19, 19
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

label_7F2BB794:
    ctx->pc = 0x7F2BB794u;
    // 7F2BB794: bc    12, 2, 0x7F2BB7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB7A4;
        }
    }

label_7F2BB798:
    ctx->pc = 0x7F2BB798u;
    ctx->downcount -= 2;
    // 7F2BB798: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BB79C:
    ctx->pc = 0x7F2BB79Cu;
    // 7F2BB79C: bl      0x7F01EB48
    {
            ctx->lr = 0x7F2BB7A0u;
            ctx->pc = 0x7F01EB48u;
            return;
    }

label_7F2BB7A0:
    ctx->pc = 0x7F2BB7A0u;
    ctx->downcount -= 1;
    // 7F2BB7A0: b       0x7F2BB7AC
    {
            goto label_7F2BB7AC;
    }

label_7F2BB7A4:
    ctx->pc = 0x7F2BB7A4u;
    ctx->downcount -= 2;
    // 7F2BB7A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BB7A8:
    ctx->pc = 0x7F2BB7A8u;
    // 7F2BB7A8: bl      0x7F01EB48
    {
            ctx->lr = 0x7F2BB7ACu;
            ctx->pc = 0x7F01EB48u;
            return;
    }

label_7F2BB7AC:
    ctx->pc = 0x7F2BB7ACu;
    ctx->downcount -= 27;
    // 7F2BB7AC: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_7F2BB7B0:
    ctx->pc = 0x7F2BB7B0u;
    // 7F2BB7B0: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F2BB7B4:
    ctx->pc = 0x7F2BB7B4u;
    // 7F2BB7B4: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F2BB7B8:
    ctx->pc = 0x7F2BB7B8u;
    // 7F2BB7B8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB7BC:
    ctx->pc = 0x7F2BB7BCu;
    // 7F2BB7BC: stwu     r14, -5840(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-5840);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
        ctx->gpr[4] = ea;
    }

label_7F2BB7C0:
    ctx->pc = 0x7F2BB7C0u;
    // 7F2BB7C0: lis     r12, 32589
    ctx->gpr[12] = ((u32)(s32)(32589) << 16);

label_7F2BB7C4:
    ctx->pc = 0x7F2BB7C4u;
    // 7F2BB7C4: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F2BB7C8:
    ctx->pc = 0x7F2BB7C8u;
    // 7F2BB7C8: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F2BB7CC:
    ctx->pc = 0x7F2BB7CCu;
    // 7F2BB7CC: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2BB7D0:
    ctx->pc = 0x7F2BB7D0u;
    // 7F2BB7D0: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2BB7D4:
    ctx->pc = 0x7F2BB7D4u;
    // 7F2BB7D4: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BB7D8:
    ctx->pc = 0x7F2BB7D8u;
    // 7F2BB7D8: addi    r11, r11, -5796
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(-5796);

label_7F2BB7DC:
    ctx->pc = 0x7F2BB7DCu;
    // 7F2BB7DC: addi    r10, r10, -5804
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-5804);

label_7F2BB7E0:
    ctx->pc = 0x7F2BB7E0u;
    // 7F2BB7E0: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BB7E4:
    ctx->pc = 0x7F2BB7E4u;
    // 7F2BB7E4: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F2BB7E8:
    ctx->pc = 0x7F2BB7E8u;
    // 7F2BB7E8: stw     r14, -5988(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-5988);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB7EC:
    ctx->pc = 0x7F2BB7ECu;
    // 7F2BB7EC: stw     r14, 12(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB7F0:
    ctx->pc = 0x7F2BB7F0u;
    // 7F2BB7F0: stw     r14, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB7F4:
    ctx->pc = 0x7F2BB7F4u;
    // 7F2BB7F4: stw     r14, -5816(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-5816);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB7F8:
    ctx->pc = 0x7F2BB7F8u;
    // 7F2BB7F8: stb     r14, -6100(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-6100);
        mem_write8(ctx, ea, (u8)ctx->gpr[14]);
    }

label_7F2BB7FC:
    ctx->pc = 0x7F2BB7FCu;
    // 7F2BB7FC: stw     r14, -5820(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-5820);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB800:
    ctx->pc = 0x7F2BB800u;
    // 7F2BB800: stw     r14, -5824(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-5824);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB804:
    ctx->pc = 0x7F2BB804u;
    // 7F2BB804: stw     r14, -5828(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-5828);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB808:
    ctx->pc = 0x7F2BB808u;
    // 7F2BB808: stw     r14, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB80C:
    ctx->pc = 0x7F2BB80Cu;
    // 7F2BB80C: stw     r14, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB810:
    ctx->pc = 0x7F2BB810u;
    // 7F2BB810: stw     r0, -5844(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5844);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB814:
    ctx->pc = 0x7F2BB814u;
    // 7F2BB814: bl      0x7F2BB4E8
    {
            ctx->lr = 0x7F2BB818u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BB4E8u;
                return;
            }
            goto label_7F2BB4E8;
    }

label_7F2BB818:
    ctx->pc = 0x7F2BB818u;
    ctx->downcount -= 1;
    // 7F2BB818: bl      0x7F2BB6EC
    {
            ctx->lr = 0x7F2BB81Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BB6ECu;
                return;
            }
            goto label_7F2BB6EC;
    }

label_7F2BB81C:
    ctx->pc = 0x7F2BB81Cu;
    ctx->downcount -= 32;
    // 7F2BB81C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2BB820:
    ctx->pc = 0x7F2BB820u;
    // 7F2BB820: lis     r11, 32589
    ctx->gpr[11] = ((u32)(s32)(32589) << 16);

label_7F2BB824:
    ctx->pc = 0x7F2BB824u;
    // 7F2BB824: addi    r5, r3, 27664
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(27664);

label_7F2BB828:
    ctx->pc = 0x7F2BB828u;
    // 7F2BB828: lis     r10, 32589
    ctx->gpr[10] = ((u32)(s32)(32589) << 16);

label_7F2BB82C:
    ctx->pc = 0x7F2BB82Cu;
    // 7F2BB82C: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2BB830:
    ctx->pc = 0x7F2BB830u;
    // 7F2BB830: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BB834:
    ctx->pc = 0x7F2BB834u;
    // 7F2BB834: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BB838:
    ctx->pc = 0x7F2BB838u;
    // 7F2BB838: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2BB83C:
    ctx->pc = 0x7F2BB83Cu;
    // 7F2BB83C: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB83Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2BB840:
    ctx->pc = 0x7F2BB840u;
    // 7F2BB840: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F2BB844:
    ctx->pc = 0x7F2BB844u;
    // 7F2BB844: lis     r9, 32589
    ctx->gpr[9] = ((u32)(s32)(32589) << 16);

label_7F2BB848:
    ctx->pc = 0x7F2BB848u;
    // 7F2BB848: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB84C:
    ctx->pc = 0x7F2BB84Cu;
    // 7F2BB84C: addi    r11, r11, -6152
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(-6152);

label_7F2BB850:
    ctx->pc = 0x7F2BB850u;
    // 7F2BB850: addi    r10, r10, -6144
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(-6144);

label_7F2BB854:
    ctx->pc = 0x7F2BB854u;
    // 7F2BB854: addi    r7, r7, -6128
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-6128);

label_7F2BB858:
    ctx->pc = 0x7F2BB858u;
    // 7F2BB858: addi    r5, r6, -6120
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-6120);

label_7F2BB85C:
    ctx->pc = 0x7F2BB85Cu;
    // 7F2BB85C: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F2BB860:
    ctx->pc = 0x7F2BB860u;
    // 7F2BB860: stw     r0, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB864:
    ctx->pc = 0x7F2BB864u;
    // 7F2BB864: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB868:
    ctx->pc = 0x7F2BB868u;
    // 7F2BB868: stw     r0, 0(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB86C:
    ctx->pc = 0x7F2BB86Cu;
    // 7F2BB86C: stw     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB870:
    ctx->pc = 0x7F2BB870u;
    // 7F2BB870: stw     r0, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB874:
    ctx->pc = 0x7F2BB874u;
    // 7F2BB874: stw     r0, -6136(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(-6136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB878:
    ctx->pc = 0x7F2BB878u;
    // 7F2BB878: stw     r0, -6132(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-6132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB87C:
    ctx->pc = 0x7F2BB87Cu;
    // 7F2BB87C: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB880:
    ctx->pc = 0x7F2BB880u;
    // 7F2BB880: stw     r0, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB884:
    ctx->pc = 0x7F2BB884u;
    // 7F2BB884: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB888:
    ctx->pc = 0x7F2BB888u;
    // 7F2BB888: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB88C:
    ctx->pc = 0x7F2BB88Cu;
    // 7F2BB88C: stfs     f0, 24744(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB88Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24744);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BB890:
    ctx->pc = 0x7F2BB890u;
    // 7F2BB890: lha     r4, 314(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(314);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BB894:
    ctx->pc = 0x7F2BB894u;
    // 7F2BB894: extsh. r0, r4
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

label_7F2BB898:
    ctx->pc = 0x7F2BB898u;
    // 7F2BB898: bc    12, 0, 0x7F2BB8A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB8A4;
        }
    }

label_7F2BB89C:
    ctx->pc = 0x7F2BB89Cu;
    ctx->downcount -= 2;
    // 7F2BB89C: cmpwi   r4, 22
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(22);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BB8A0:
    ctx->pc = 0x7F2BB8A0u;
    // 7F2BB8A0: bc    12, 0, 0x7F2BB8AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB8AC;
        }
    }

label_7F2BB8A4:
    ctx->pc = 0x7F2BB8A4u;
    ctx->downcount -= 2;
    // 7F2BB8A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB8A8:
    ctx->pc = 0x7F2BB8A8u;
    // 7F2BB8A8: sth     r0, 314(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(314);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BB8AC:
    ctx->pc = 0x7F2BB8ACu;
    ctx->downcount -= 6;
    // 7F2BB8AC: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BB8B0:
    ctx->pc = 0x7F2BB8B0u;
    // 7F2BB8B0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BB8B4:
    ctx->pc = 0x7F2BB8B4u;
    // 7F2BB8B4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BB8B8:
    ctx->pc = 0x7F2BB8B8u;
    // 7F2BB8B8: lha     r4, 316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(316);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BB8BC:
    ctx->pc = 0x7F2BB8BCu;
    // 7F2BB8BC: extsh. r0, r4
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

label_7F2BB8C0:
    ctx->pc = 0x7F2BB8C0u;
    // 7F2BB8C0: bc    12, 0, 0x7F2BB8CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB8CC;
        }
    }

label_7F2BB8C4:
    ctx->pc = 0x7F2BB8C4u;
    ctx->downcount -= 2;
    // 7F2BB8C4: cmpwi   r4, 43
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(43);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BB8C8:
    ctx->pc = 0x7F2BB8C8u;
    // 7F2BB8C8: bc    12, 0, 0x7F2BB8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BB8D4;
        }
    }

label_7F2BB8CC:
    ctx->pc = 0x7F2BB8CCu;
    ctx->downcount -= 2;
    // 7F2BB8CC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BB8D0:
    ctx->pc = 0x7F2BB8D0u;
    // 7F2BB8D0: sth     r0, 316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(316);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BB8D4:
    ctx->pc = 0x7F2BB8D4u;
    ctx->downcount -= 77;
    // 7F2BB8D4: lis     r15, 32589
    ctx->gpr[15] = ((u32)(s32)(32589) << 16);

label_7F2BB8D8:
    ctx->pc = 0x7F2BB8D8u;
    // 7F2BB8D8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2BB8DC:
    ctx->pc = 0x7F2BB8DCu;
    // 7F2BB8DC: addi    r20, r15, -5892
    ctx->gpr[20] = ctx->gpr[15] + (u32)(s32)(-5892);

label_7F2BB8E0:
    ctx->pc = 0x7F2BB8E0u;
    // 7F2BB8E0: lis     r16, 32589
    ctx->gpr[16] = ((u32)(s32)(32589) << 16);

label_7F2BB8E4:
    ctx->pc = 0x7F2BB8E4u;
    // 7F2BB8E4: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_7F2BB8E8:
    ctx->pc = 0x7F2BB8E8u;
    // 7F2BB8E8: addi    r17, r4, 12832
    ctx->gpr[17] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F2BB8EC:
    ctx->pc = 0x7F2BB8ECu;
    // 7F2BB8EC: stw     r15, -6172(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(-6172);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB8F0:
    ctx->pc = 0x7F2BB8F0u;
    // 7F2BB8F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F2BB8F4:
    ctx->pc = 0x7F2BB8F4u;
    // 7F2BB8F4: addi    r8, r3, 27668
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(27668);

label_7F2BB8F8:
    ctx->pc = 0x7F2BB8F8u;
    // 7F2BB8F8: li      r16, 640
    ctx->gpr[16] = (u32)(s32)(640);

label_7F2BB8FC:
    ctx->pc = 0x7F2BB8FCu;
    // 7F2BB8FC: lis     r29, 32584
    ctx->gpr[29] = ((u32)(s32)(32584) << 16);

label_7F2BB900:
    ctx->pc = 0x7F2BB900u;
    // 7F2BB900: stwu     r16, 24748(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24748);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
        ctx->gpr[29] = ea;
    }

label_7F2BB904:
    ctx->pc = 0x7F2BB904u;
    // 7F2BB904: li      r16, -800
    ctx->gpr[16] = (u32)(s32)(-800);

label_7F2BB908:
    ctx->pc = 0x7F2BB908u;
    // 7F2BB908: lis     r12, 32584
    ctx->gpr[12] = ((u32)(s32)(32584) << 16);

label_7F2BB90C:
    ctx->pc = 0x7F2BB90Cu;
    // 7F2BB90C: lis     r11, 32584
    ctx->gpr[11] = ((u32)(s32)(32584) << 16);

label_7F2BB910:
    ctx->pc = 0x7F2BB910u;
    // 7F2BB910: lis     r10, 32584
    ctx->gpr[10] = ((u32)(s32)(32584) << 16);

label_7F2BB914:
    ctx->pc = 0x7F2BB914u;
    // 7F2BB914: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BB918:
    ctx->pc = 0x7F2BB918u;
    // 7F2BB918: lwz     r21, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        ctx->gpr[21] = mem_read32(ctx, ea);
    }

label_7F2BB91C:
    ctx->pc = 0x7F2BB91Cu;
    // 7F2BB91C: addi    r4, r4, -5776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5776);

label_7F2BB920:
    ctx->pc = 0x7F2BB920u;
    // 7F2BB920: lwz     r22, 4(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(4);
        ctx->gpr[22] = mem_read32(ctx, ea);
    }

label_7F2BB924:
    ctx->pc = 0x7F2BB924u;
    // 7F2BB924: lwz     r23, 8(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(8);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F2BB928:
    ctx->pc = 0x7F2BB928u;
    // 7F2BB928: lis     r18, 32589
    ctx->gpr[18] = ((u32)(s32)(32589) << 16);

label_7F2BB92C:
    ctx->pc = 0x7F2BB92Cu;
    // 7F2BB92C: lwz     r24, 12(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(12);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F2BB930:
    ctx->pc = 0x7F2BB930u;
    // 7F2BB930: lis     r30, 32589
    ctx->gpr[30] = ((u32)(s32)(32589) << 16);

label_7F2BB934:
    ctx->pc = 0x7F2BB934u;
    // 7F2BB934: addi    r17, r30, -6168
    ctx->gpr[17] = ctx->gpr[30] + (u32)(s32)(-6168);

label_7F2BB938:
    ctx->pc = 0x7F2BB938u;
    // 7F2BB938: lis     r14, 32584
    ctx->gpr[14] = ((u32)(s32)(32584) << 16);

label_7F2BB93C:
    ctx->pc = 0x7F2BB93Cu;
    // 7F2BB93C: addi    r30, r14, 24756
    ctx->gpr[30] = ctx->gpr[14] + (u32)(s32)(24756);

label_7F2BB940:
    ctx->pc = 0x7F2BB940u;
    // 7F2BB940: stw     r16, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F2BB944:
    ctx->pc = 0x7F2BB944u;
    // 7F2BB944: li      r16, 1024
    ctx->gpr[16] = (u32)(s32)(1024);

label_7F2BB948:
    ctx->pc = 0x7F2BB948u;
    // 7F2BB948: lis     r19, 32589
    ctx->gpr[19] = ((u32)(s32)(32589) << 16);

label_7F2BB94C:
    ctx->pc = 0x7F2BB94Cu;
    // 7F2BB94C: stwu     r15, 24772(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(24772);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
        ctx->gpr[11] = ea;
    }

label_7F2BB950:
    ctx->pc = 0x7F2BB950u;
    // 7F2BB950: lis     r25, 32589
    ctx->gpr[25] = ((u32)(s32)(32589) << 16);

label_7F2BB954:
    ctx->pc = 0x7F2BB954u;
    // 7F2BB954: lis     r26, 32589
    ctx->gpr[26] = ((u32)(s32)(32589) << 16);

label_7F2BB958:
    ctx->pc = 0x7F2BB958u;
    // 7F2BB958: lis     r27, 32586
    ctx->gpr[27] = ((u32)(s32)(32586) << 16);

label_7F2BB95C:
    ctx->pc = 0x7F2BB95Cu;
    // 7F2BB95C: stwu     r15, 24780(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(24780);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
        ctx->gpr[10] = ea;
    }

label_7F2BB960:
    ctx->pc = 0x7F2BB960u;
    // 7F2BB960: lis     r28, 32589
    ctx->gpr[28] = ((u32)(s32)(32589) << 16);

label_7F2BB964:
    ctx->pc = 0x7F2BB964u;
    // 7F2BB964: lis     r7, 32589
    ctx->gpr[7] = ((u32)(s32)(32589) << 16);

label_7F2BB968:
    ctx->pc = 0x7F2BB968u;
    // 7F2BB968: lis     r6, 32589
    ctx->gpr[6] = ((u32)(s32)(32589) << 16);

label_7F2BB96C:
    ctx->pc = 0x7F2BB96Cu;
    // 7F2BB96C: lis     r5, 32589
    ctx->gpr[5] = ((u32)(s32)(32589) << 16);

label_7F2BB970:
    ctx->pc = 0x7F2BB970u;
    // 7F2BB970: stw     r16, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F2BB974:
    ctx->pc = 0x7F2BB974u;
    // 7F2BB974: li      r16, -1024
    ctx->gpr[16] = (u32)(s32)(-1024);

label_7F2BB978:
    ctx->pc = 0x7F2BB978u;
    // 7F2BB978: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BB97C:
    ctx->pc = 0x7F2BB97Cu;
    // 7F2BB97C: lfs     f0, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB97Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F2BB980:
    ctx->pc = 0x7F2BB980u;
    // 7F2BB980: addi    r8, r3, 24796
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(24796);

label_7F2BB984:
    ctx->pc = 0x7F2BB984u;
    // 7F2BB984: lis     r9, 32584
    ctx->gpr[9] = ((u32)(s32)(32584) << 16);

label_7F2BB988:
    ctx->pc = 0x7F2BB988u;
    // 7F2BB988: addi    r31, r12, 24764
    ctx->gpr[31] = ctx->gpr[12] + (u32)(s32)(24764);

label_7F2BB98C:
    ctx->pc = 0x7F2BB98Cu;
    // 7F2BB98C: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F2BB990:
    ctx->pc = 0x7F2BB990u;
    // 7F2BB990: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BB994:
    ctx->pc = 0x7F2BB994u;
    // 7F2BB994: addi    r12, r9, 24768
    ctx->gpr[12] = ctx->gpr[9] + (u32)(s32)(24768);

label_7F2BB998:
    ctx->pc = 0x7F2BB998u;
    // 7F2BB998: li      r14, -1
    ctx->gpr[14] = (u32)(s32)(-1);

label_7F2BB99C:
    ctx->pc = 0x7F2BB99Cu;
    // 7F2BB99C: addi    r9, r3, 24788
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(24788);

label_7F2BB9A0:
    ctx->pc = 0x7F2BB9A0u;
    // 7F2BB9A0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BB9A4:
    ctx->pc = 0x7F2BB9A4u;
    // 7F2BB9A4: stw     r15, 0(r17)
    {
        u32 ea = ctx->gpr[17] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9A8:
    ctx->pc = 0x7F2BB9A8u;
    // 7F2BB9A8: stw     r15, -6164(r18)
    {
        u32 ea = ctx->gpr[18] + (u32)(s32)(-6164);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9AC:
    ctx->pc = 0x7F2BB9ACu;
    // 7F2BB9AC: stw     r15, -6160(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(-6160);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9B0:
    ctx->pc = 0x7F2BB9B0u;
    // 7F2BB9B0: stw     r21, 0(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_7F2BB9B4:
    ctx->pc = 0x7F2BB9B4u;
    // 7F2BB9B4: stw     r22, 4(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[22]);
    }

label_7F2BB9B8:
    ctx->pc = 0x7F2BB9B8u;
    // 7F2BB9B8: stw     r23, 8(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F2BB9BC:
    ctx->pc = 0x7F2BB9BCu;
    // 7F2BB9BC: stw     r24, 12(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F2BB9C0:
    ctx->pc = 0x7F2BB9C0u;
    // 7F2BB9C0: stw     r15, -5660(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(-5660);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9C4:
    ctx->pc = 0x7F2BB9C4u;
    // 7F2BB9C4: stw     r15, -5664(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(-5664);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9C8:
    ctx->pc = 0x7F2BB9C8u;
    // 7F2BB9C8: stw     r15, 22156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(22156);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9CC:
    ctx->pc = 0x7F2BB9CCu;
    // 7F2BB9CC: stw     r15, -5692(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(-5692);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9D0:
    ctx->pc = 0x7F2BB9D0u;
    // 7F2BB9D0: stw     r16, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[16]);
    }

label_7F2BB9D4:
    ctx->pc = 0x7F2BB9D4u;
    // 7F2BB9D4: stw     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB9D8:
    ctx->pc = 0x7F2BB9D8u;
    // 7F2BB9D8: stw     r0, 0(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BB9DC:
    ctx->pc = 0x7F2BB9DCu;
    // 7F2BB9DC: stw     r15, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9E0:
    ctx->pc = 0x7F2BB9E0u;
    // 7F2BB9E0: stw     r15, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9E4:
    ctx->pc = 0x7F2BB9E4u;
    // 7F2BB9E4: stw     r14, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB9E8:
    ctx->pc = 0x7F2BB9E8u;
    // 7F2BB9E8: stw     r14, 24792(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24792);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_7F2BB9EC:
    ctx->pc = 0x7F2BB9ECu;
    // 7F2BB9EC: stfs     f0, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F2BB9ECu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F2BB9F0:
    ctx->pc = 0x7F2BB9F0u;
    // 7F2BB9F0: stw     r15, -6088(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(-6088);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9F4:
    ctx->pc = 0x7F2BB9F4u;
    // 7F2BB9F4: stw     r15, -6092(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(-6092);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9F8:
    ctx->pc = 0x7F2BB9F8u;
    // 7F2BB9F8: stw     r15, -6096(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(-6096);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BB9FC:
    ctx->pc = 0x7F2BB9FCu;
    // 7F2BB9FC: stw     r15, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BBA00:
    ctx->pc = 0x7F2BBA00u;
    // 7F2BBA00: stw     r15, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[15]);
    }

label_7F2BBA04:
    ctx->pc = 0x7F2BBA04u;
    // 7F2BBA04: bl      0x7F27E020
    {
            ctx->lr = 0x7F2BBA08u;
            ctx->pc = 0x7F27E020u;
            return;
    }

label_7F2BBA08:
    ctx->pc = 0x7F2BBA08u;
    ctx->downcount -= 16;
    // 7F2BBA08: lmw     r14, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 14; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BBA0C:
    ctx->pc = 0x7F2BBA0Cu;
    // 7F2BBA0C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBA10:
    ctx->pc = 0x7F2BBA10u;
    // 7F2BBA10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBA14:
    ctx->pc = 0x7F2BBA14u;
    // 7F2BBA14: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F2BBA18:
    ctx->pc = 0x7F2BBA18u;
    // 7F2BBA18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBA1C:
    ctx->pc = 0x7F2BBA1Cu;
    ctx->downcount -= 10;
    // 7F2BBA1C: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BBA20:
    ctx->pc = 0x7F2BBA20u;
    // 7F2BBA20: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BBA24:
    ctx->pc = 0x7F2BBA24u;
    // 7F2BBA24: addi    r4, r4, -5736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-5736);

label_7F2BBA28:
    ctx->pc = 0x7F2BBA28u;
    // 7F2BBA28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BBA2C:
    ctx->pc = 0x7F2BBA2Cu;
    // 7F2BBA2C: addi    r3, r3, -5744
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5744);

label_7F2BBA30:
    ctx->pc = 0x7F2BBA30u;
    // 7F2BBA30: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBA34:
    ctx->pc = 0x7F2BBA34u;
    // 7F2BBA34: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBA38:
    ctx->pc = 0x7F2BBA38u;
    // 7F2BBA38: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBA3C:
    ctx->pc = 0x7F2BBA3Cu;
    // 7F2BBA3C: stw     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBA40:
    ctx->pc = 0x7F2BBA40u;
    // 7F2BBA40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBA44:
    ctx->pc = 0x7F2BBA44u;
    ctx->downcount -= 8;
    // 7F2BBA44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBA48:
    ctx->pc = 0x7F2BBA48u;
    // 7F2BBA48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBA4C:
    ctx->pc = 0x7F2BBA4Cu;
    // 7F2BBA4C: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F2BBA50:
    ctx->pc = 0x7F2BBA50u;
    // 7F2BBA50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBA54:
    ctx->pc = 0x7F2BBA54u;
    // 7F2BBA54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBA58:
    ctx->pc = 0x7F2BBA58u;
    // 7F2BBA58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BBA5C:
    ctx->pc = 0x7F2BBA5Cu;
    // 7F2BBA5C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BBA60:
    ctx->pc = 0x7F2BBA60u;
    // 7F2BBA60: bl      0x7F012018
    {
            ctx->lr = 0x7F2BBA64u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2BBA64:
    ctx->pc = 0x7F2BBA64u;
    ctx->downcount -= 5;
    // 7F2BBA64: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BBA68:
    ctx->pc = 0x7F2BBA68u;
    // 7F2BBA68: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BBA6C:
    ctx->pc = 0x7F2BBA6Cu;
    // 7F2BBA6C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BBA70:
    ctx->pc = 0x7F2BBA70u;
    // 7F2BBA70: or.   r0, r4, r0
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

label_7F2BBA74:
    ctx->pc = 0x7F2BBA74u;
    // 7F2BBA74: bc    12, 2, 0x7F2BBA90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBA90;
        }
    }

label_7F2BBA78:
    ctx->pc = 0x7F2BBA78u;
    ctx->downcount -= 6;
    // 7F2BBA78: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BBA7C:
    ctx->pc = 0x7F2BBA7Cu;
    // 7F2BBA7C: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BBA80:
    ctx->pc = 0x7F2BBA80u;
    // 7F2BBA80: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BBA84:
    ctx->pc = 0x7F2BBA84u;
    // 7F2BBA84: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BBA88:
    ctx->pc = 0x7F2BBA88u;
    // 7F2BBA88: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_7F2BBA8C:
    ctx->pc = 0x7F2BBA8Cu;
    // 7F2BBA8C: sth     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BBA90:
    ctx->pc = 0x7F2BBA90u;
    ctx->downcount -= 5;
    // 7F2BBA90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBA94:
    ctx->pc = 0x7F2BBA94u;
    // 7F2BBA94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBA98:
    ctx->pc = 0x7F2BBA98u;
    // 7F2BBA98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BBA9C:
    ctx->pc = 0x7F2BBA9Cu;
    // 7F2BBA9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBAA0:
    ctx->pc = 0x7F2BBAA0u;
    ctx->downcount -= 9;
    // 7F2BBAA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBAA4:
    ctx->pc = 0x7F2BBAA4u;
    // 7F2BBAA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBAA8:
    ctx->pc = 0x7F2BBAA8u;
    // 7F2BBAA8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BBAAC:
    ctx->pc = 0x7F2BBAACu;
    // 7F2BBAAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBAB0:
    ctx->pc = 0x7F2BBAB0u;
    // 7F2BBAB0: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BBAB4:
    ctx->pc = 0x7F2BBAB4u;
    // 7F2BBAB4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BBAB8:
    ctx->pc = 0x7F2BBAB8u;
    // 7F2BBAB8: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BBABC:
    ctx->pc = 0x7F2BBABCu;
    // 7F2BBABC: rlwinm. r0, r0, 0, 31, 31
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

label_7F2BBAC0:
    ctx->pc = 0x7F2BBAC0u;
    // 7F2BBAC0: bc    12, 2, 0x7F2BBAF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBAF0;
        }
    }

label_7F2BBAC4:
    ctx->pc = 0x7F2BBAC4u;
    ctx->downcount -= 5;
    // 7F2BBAC4: lis     r4, 256
    ctx->gpr[4] = ((u32)(s32)(256) << 16);

label_7F2BBAC8:
    ctx->pc = 0x7F2BBAC8u;
    // 7F2BBAC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBACC:
    ctx->pc = 0x7F2BBACCu;
    // 7F2BBACC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BBAD0:
    ctx->pc = 0x7F2BBAD0u;
    // 7F2BBAD0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BBAD4:
    ctx->pc = 0x7F2BBAD4u;
    // 7F2BBAD4: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2BBAD8u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2BBAD8:
    ctx->pc = 0x7F2BBAD8u;
    ctx->downcount -= 6;
    // 7F2BBAD8: lis     r3, 32585
    ctx->gpr[3] = ((u32)(s32)(32585) << 16);

label_7F2BBADC:
    ctx->pc = 0x7F2BBADCu;
    // 7F2BBADC: addi    r3, r3, 13880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(13880);

label_7F2BBAE0:
    ctx->pc = 0x7F2BBAE0u;
    // 7F2BBAE0: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BBAE4:
    ctx->pc = 0x7F2BBAE4u;
    // 7F2BBAE4: lha     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BBAE8:
    ctx->pc = 0x7F2BBAE8u;
    // 7F2BBAE8: rlwinm r0, r0, 0, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFEu;
    }

label_7F2BBAEC:
    ctx->pc = 0x7F2BBAECu;
    // 7F2BBAEC: sth     r0, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BBAF0:
    ctx->pc = 0x7F2BBAF0u;
    ctx->downcount -= 5;
    // 7F2BBAF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBAF4:
    ctx->pc = 0x7F2BBAF4u;
    // 7F2BBAF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBAF8:
    ctx->pc = 0x7F2BBAF8u;
    // 7F2BBAF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BBAFC:
    ctx->pc = 0x7F2BBAFCu;
    // 7F2BBAFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBB00:
    ctx->pc = 0x7F2BBB00u;
    ctx->downcount -= 7;
    // 7F2BBB00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBB04:
    ctx->pc = 0x7F2BBB04u;
    // 7F2BBB04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBB08:
    ctx->pc = 0x7F2BBB08u;
    // 7F2BBB08: lis     r8, 32589
    ctx->gpr[8] = ((u32)(s32)(32589) << 16);

label_7F2BBB0C:
    ctx->pc = 0x7F2BBB0Cu;
    // 7F2BBB0C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBB10:
    ctx->pc = 0x7F2BBB10u;
    // 7F2BBB10: lwz     r12, -6172(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-6172);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F2BBB14:
    ctx->pc = 0x7F2BBB14u;
    // 7F2BBB14: cmplwi  r12, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[12]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F2BBB18:
    ctx->pc = 0x7F2BBB18u;
    // 7F2BBB18: bc    4, 2, 0x7F2BBB24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBB24;
        }
    }

label_7F2BBB1C:
    ctx->pc = 0x7F2BBB1Cu;
    ctx->downcount -= 2;
    // 7F2BBB1C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBB20:
    ctx->pc = 0x7F2BBB20u;
    // 7F2BBB20: b       0x7F2BBB2C
    {
            goto label_7F2BBB2C;
    }

label_7F2BBB24:
    ctx->pc = 0x7F2BBB24u;
    ctx->downcount -= 3;
    // 7F2BBB24: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F2BBB28:
    ctx->pc = 0x7F2BBB28u;
    // 7F2BBB28: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F2BBB2Cu;
            ctx->pc = target;
            return;
        }
    }

label_7F2BBB2C:
    ctx->pc = 0x7F2BBB2Cu;
    ctx->downcount -= 5;
    // 7F2BBB2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBB30:
    ctx->pc = 0x7F2BBB30u;
    // 7F2BBB30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBB34:
    ctx->pc = 0x7F2BBB34u;
    // 7F2BBB34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BBB38:
    ctx->pc = 0x7F2BBB38u;
    // 7F2BBB38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBB3C:
    ctx->pc = 0x7F2BBB3Cu;
    ctx->downcount -= 7;
    // 7F2BBB3C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBB40:
    ctx->pc = 0x7F2BBB40u;
    // 7F2BBB40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBB44:
    ctx->pc = 0x7F2BBB44u;
    // 7F2BBB44: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BBB48:
    ctx->pc = 0x7F2BBB48u;
    // 7F2BBB48: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBB4C:
    ctx->pc = 0x7F2BBB4Cu;
    // 7F2BBB4C: lwz     r0, -5660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBB50:
    ctx->pc = 0x7F2BBB50u;
    // 7F2BBB50: cmplwi  r0, 0x0000
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

label_7F2BBB54:
    ctx->pc = 0x7F2BBB54u;
    // 7F2BBB54: bc    4, 2, 0x7F2BBB60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBB60;
        }
    }

label_7F2BBB58:
    ctx->pc = 0x7F2BBB58u;
    ctx->downcount -= 2;
    // 7F2BBB58: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBB5C:
    ctx->pc = 0x7F2BBB5Cu;
    // 7F2BBB5C: b       0x7F2BBBD0
    {
            goto label_7F2BBBD0;
    }

label_7F2BBB60:
    ctx->pc = 0x7F2BBB60u;
    ctx->downcount -= 5;
    // 7F2BBB60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BBB64:
    ctx->pc = 0x7F2BBB64u;
    // 7F2BBB64: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_7F2BBB68:
    ctx->pc = 0x7F2BBB68u;
    // 7F2BBB68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BBB6C:
    ctx->pc = 0x7F2BBB6Cu;
    // 7F2BBB6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BBB70:
    ctx->pc = 0x7F2BBB70u;
    // 7F2BBB70: bl      0x7F012018
    {
            ctx->lr = 0x7F2BBB74u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2BBB74:
    ctx->pc = 0x7F2BBB74u;
    ctx->downcount -= 5;
    // 7F2BBB74: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BBB78:
    ctx->pc = 0x7F2BBB78u;
    // 7F2BBB78: xor   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BBB7C:
    ctx->pc = 0x7F2BBB7Cu;
    // 7F2BBB7C: xor   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BBB80:
    ctx->pc = 0x7F2BBB80u;
    // 7F2BBB80: or.   r0, r4, r0
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

label_7F2BBB84:
    ctx->pc = 0x7F2BBB84u;
    // 7F2BBB84: bc    4, 2, 0x7F2BBBB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBBB4;
        }
    }

label_7F2BBB88:
    ctx->pc = 0x7F2BBB88u;
    ctx->downcount -= 13;
    // 7F2BBB88: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BBB8C:
    ctx->pc = 0x7F2BBB8Cu;
    // 7F2BBB8C: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F2BBB90:
    ctx->pc = 0x7F2BBB90u;
    // 7F2BBB90: addi    r3, r3, -5660
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-5660);

label_7F2BBB94:
    ctx->pc = 0x7F2BBB94u;
    // 7F2BBB94: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BBB98:
    ctx->pc = 0x7F2BBB98u;
    // 7F2BBB98: addi    r4, r4, 14080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14080);

label_7F2BBB9C:
    ctx->pc = 0x7F2BBB9Cu;
    // 7F2BBB9C: lwz     r0, 3980(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(3980);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBBA0:
    ctx->pc = 0x7F2BBBA0u;
    // 7F2BBBA0: mulli   r0, r0, 44
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)44);

label_7F2BBBA4:
    ctx->pc = 0x7F2BBBA4u;
    // 7F2BBBA4: add   r3, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2BBBA8:
    ctx->pc = 0x7F2BBBA8u;
    // 7F2BBBA8: lwz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBBAC:
    ctx->pc = 0x7F2BBBACu;
    // 7F2BBBAC: andi.   r0, r0, 0x0103
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

label_7F2BBBB0:
    ctx->pc = 0x7F2BBBB0u;
    // 7F2BBBB0: bc    12, 2, 0x7F2BBBCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBBCC;
        }
    }

label_7F2BBBB4:
    ctx->pc = 0x7F2BBBB4u;
    ctx->downcount -= 2;
    // 7F2BBBB4: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F2BBBB8:
    ctx->pc = 0x7F2BBBB8u;
    // 7F2BBBB8: bl      0x7F012050
    {
            ctx->lr = 0x7F2BBBBCu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F2BBBBC:
    ctx->pc = 0x7F2BBBBCu;
    ctx->downcount -= 2;
    // 7F2BBBBC: cmpwi   r3, 0
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

label_7F2BBBC0:
    ctx->pc = 0x7F2BBBC0u;
    // 7F2BBBC0: bc    4, 2, 0x7F2BBBCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBBCC;
        }
    }

label_7F2BBBC4:
    ctx->pc = 0x7F2BBBC4u;
    ctx->downcount -= 2;
    // 7F2BBBC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBBC8:
    ctx->pc = 0x7F2BBBC8u;
    // 7F2BBBC8: b       0x7F2BBBD0
    {
            goto label_7F2BBBD0;
    }

label_7F2BBBCC:
    ctx->pc = 0x7F2BBBCCu;
    ctx->downcount -= 1;
    // 7F2BBBCC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BBBD0:
    ctx->pc = 0x7F2BBBD0u;
    ctx->downcount -= 5;
    // 7F2BBBD0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBBD4:
    ctx->pc = 0x7F2BBBD4u;
    // 7F2BBBD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBBD8:
    ctx->pc = 0x7F2BBBD8u;
    // 7F2BBBD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BBBDC:
    ctx->pc = 0x7F2BBBDCu;
    // 7F2BBBDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBBE0:
    ctx->pc = 0x7F2BBBE0u;
    ctx->downcount -= 7;
    // 7F2BBBE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBBE4:
    ctx->pc = 0x7F2BBBE4u;
    // 7F2BBBE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBBE8:
    ctx->pc = 0x7F2BBBE8u;
    // 7F2BBBE8: lis     r3, 32589
    ctx->gpr[3] = ((u32)(s32)(32589) << 16);

label_7F2BBBEC:
    ctx->pc = 0x7F2BBBECu;
    // 7F2BBBEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBBF0:
    ctx->pc = 0x7F2BBBF0u;
    // 7F2BBBF0: lwz     r0, -5660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(-5660);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBBF4:
    ctx->pc = 0x7F2BBBF4u;
    // 7F2BBBF4: cmplwi  r0, 0x0000
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

label_7F2BBBF8:
    ctx->pc = 0x7F2BBBF8u;
    // 7F2BBBF8: bc    4, 2, 0x7F2BBC04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBC04;
        }
    }

label_7F2BBBFC:
    ctx->pc = 0x7F2BBBFCu;
    ctx->downcount -= 2;
    // 7F2BBBFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBC00:
    ctx->pc = 0x7F2BBC00u;
    // 7F2BBC00: b       0x7F2BBC74
    {
            goto label_7F2BBC74;
    }

label_7F2BBC04:
    ctx->pc = 0x7F2BBC04u;
    ctx->downcount -= 4;
    // 7F2BBC04: lis     r3, 32586
    ctx->gpr[3] = ((u32)(s32)(32586) << 16);

label_7F2BBC08:
    ctx->pc = 0x7F2BBC08u;
    // 7F2BBC08: lwz     r0, 19264(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(19264);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBC0C:
    ctx->pc = 0x7F2BBC0Cu;
    // 7F2BBC0C: cmpwi   r0, 0
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

label_7F2BBC10:
    ctx->pc = 0x7F2BBC10u;
    // 7F2BBC10: bc    12, 2, 0x7F2BBC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBC1C;
        }
    }

label_7F2BBC14:
    ctx->pc = 0x7F2BBC14u;
    ctx->downcount -= 2;
    // 7F2BBC14: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BBC18:
    ctx->pc = 0x7F2BBC18u;
    // 7F2BBC18: b       0x7F2BBC74
    {
            goto label_7F2BBC74;
    }

label_7F2BBC1C:
    ctx->pc = 0x7F2BBC1Cu;
    ctx->downcount -= 2;
    // 7F2BBC1C: lis     r3, 16384
    ctx->gpr[3] = ((u32)(s32)(16384) << 16);

label_7F2BBC20:
    ctx->pc = 0x7F2BBC20u;
    // 7F2BBC20: bl      0x7F012050
    {
            ctx->lr = 0x7F2BBC24u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F2BBC24:
    ctx->pc = 0x7F2BBC24u;
    ctx->downcount -= 2;
    // 7F2BBC24: cmpwi   r3, 0
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

label_7F2BBC28:
    ctx->pc = 0x7F2BBC28u;
    // 7F2BBC28: bc    12, 2, 0x7F2BBC34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBC34;
        }
    }

label_7F2BBC2C:
    ctx->pc = 0x7F2BBC2Cu;
    ctx->downcount -= 2;
    // 7F2BBC2C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBC30:
    ctx->pc = 0x7F2BBC30u;
    // 7F2BBC30: b       0x7F2BBC74
    {
            goto label_7F2BBC74;
    }

label_7F2BBC34:
    ctx->pc = 0x7F2BBC34u;
    ctx->downcount -= 2;
    // 7F2BBC34: lis     r3, 512
    ctx->gpr[3] = ((u32)(s32)(512) << 16);

label_7F2BBC38:
    ctx->pc = 0x7F2BBC38u;
    // 7F2BBC38: bl      0x7F012050
    {
            ctx->lr = 0x7F2BBC3Cu;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F2BBC3C:
    ctx->pc = 0x7F2BBC3Cu;
    ctx->downcount -= 2;
    // 7F2BBC3C: cmpwi   r3, 0
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

label_7F2BBC40:
    ctx->pc = 0x7F2BBC40u;
    // 7F2BBC40: bc    12, 2, 0x7F2BBC4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBC4C;
        }
    }

label_7F2BBC44:
    ctx->pc = 0x7F2BBC44u;
    ctx->downcount -= 2;
    // 7F2BBC44: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBC48:
    ctx->pc = 0x7F2BBC48u;
    // 7F2BBC48: b       0x7F2BBC74
    {
            goto label_7F2BBC74;
    }

label_7F2BBC4C:
    ctx->pc = 0x7F2BBC4Cu;
    ctx->downcount -= 1;
    // 7F2BBC4C: bl      0x7F01F590
    {
            ctx->lr = 0x7F2BBC50u;
            ctx->pc = 0x7F01F590u;
            return;
    }

label_7F2BBC50:
    ctx->pc = 0x7F2BBC50u;
    ctx->downcount -= 2;
    // 7F2BBC50: cmpwi   r3, 0
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

label_7F2BBC54:
    ctx->pc = 0x7F2BBC54u;
    // 7F2BBC54: bc    4, 2, 0x7F2BBC68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBC68;
        }
    }

label_7F2BBC58:
    ctx->pc = 0x7F2BBC58u;
    ctx->downcount -= 2;
    // 7F2BBC58: lis     r3, -2048
    ctx->gpr[3] = ((u32)(s32)(-2048) << 16);

label_7F2BBC5C:
    ctx->pc = 0x7F2BBC5Cu;
    // 7F2BBC5C: bl      0x7F012050
    {
            ctx->lr = 0x7F2BBC60u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F2BBC60:
    ctx->pc = 0x7F2BBC60u;
    ctx->downcount -= 2;
    // 7F2BBC60: cmpwi   r3, 0
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

label_7F2BBC64:
    ctx->pc = 0x7F2BBC64u;
    // 7F2BBC64: bc    12, 2, 0x7F2BBC70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBC70;
        }
    }

label_7F2BBC68:
    ctx->pc = 0x7F2BBC68u;
    ctx->downcount -= 2;
    // 7F2BBC68: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BBC6C:
    ctx->pc = 0x7F2BBC6Cu;
    // 7F2BBC6C: b       0x7F2BBC74
    {
            goto label_7F2BBC74;
    }

label_7F2BBC70:
    ctx->pc = 0x7F2BBC70u;
    ctx->downcount -= 1;
    // 7F2BBC70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBC74:
    ctx->pc = 0x7F2BBC74u;
    ctx->downcount -= 5;
    // 7F2BBC74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBC78:
    ctx->pc = 0x7F2BBC78u;
    // 7F2BBC78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBC7C:
    ctx->pc = 0x7F2BBC7Cu;
    // 7F2BBC7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BBC80:
    ctx->pc = 0x7F2BBC80u;
    // 7F2BBC80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBC84:
    ctx->pc = 0x7F2BBC84u;
    ctx->downcount -= 7;
    // 7F2BBC84: li      r0, 4096
    ctx->gpr[0] = (u32)(s32)(4096);

label_7F2BBC88:
    ctx->pc = 0x7F2BBC88u;
    // 7F2BBC88: cmpwi   r5, 0
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

label_7F2BBC8C:
    ctx->pc = 0x7F2BBC8Cu;
    // 7F2BBC8C: slw   r4, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_7F2BBC90:
    ctx->pc = 0x7F2BBC90u;
    // 7F2BBC90: lha     r5, 92(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BBC94:
    ctx->pc = 0x7F2BBC94u;
    // 7F2BBC94: addi    r6, r3, 444
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(444);

label_7F2BBC98:
    ctx->pc = 0x7F2BBC98u;
    // 7F2BBC98: nor   r3, r4, r4
    {
        ctx->gpr[3] = ~(ctx->gpr[4] | ctx->gpr[4]);
    }

label_7F2BBC9C:
    ctx->pc = 0x7F2BBC9Cu;
    // 7F2BBC9C: bc    4, 2, 0x7F2BBCD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBCD4;
        }
    }

label_7F2BBCA0:
    ctx->pc = 0x7F2BBCA0u;
    ctx->downcount -= 1;
    // 7F2BBCA0: b       0x7F2BBCB4
    {
            goto label_7F2BBCB4;
    }

label_7F2BBCA4:
    loop_7F2BBCA4(ctx);
    if (ctx->pc == 0x7F2BBCBCu) goto label_7F2BBCBC;
    return;
label_7F2BBCA8:
    // 7F2BBCA8: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_7F2BBCAC:
    ctx->pc = 0x7F2BBCACu;
    // 7F2BBCAC: stw     r0, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBCB0:
    // 7F2BBCB0: addi    r6, r6, 324
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(324);

label_7F2BBCB4:
    ctx->downcount -= 2;
    // 7F2BBCB4: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2BBCB8:
    // 7F2BBCB8: bc    4, 0, 0x7F2BBCA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BBCA4u;
                return;
            }
            goto label_7F2BBCA4;
        }
    }

label_7F2BBCBC:
    ctx->pc = 0x7F2BBCBCu;
    ctx->downcount -= 1;
    // 7F2BBCBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBCC0:
    ctx->pc = 0x7F2BBCC0u;
    ctx->downcount -= 1;
    // 7F2BBCC0: b       0x7F2BBCD4
    {
            goto label_7F2BBCD4;
    }

label_7F2BBCC4:
    loop_7F2BBCC4(ctx);
    if (ctx->pc == 0x7F2BBCDCu) goto label_7F2BBCDC;
    return;
label_7F2BBCC8:
    // 7F2BBCC8: and   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[3];
    }

label_7F2BBCCC:
    ctx->pc = 0x7F2BBCCCu;
    // 7F2BBCCC: stw     r0, 192(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBCD0:
    // 7F2BBCD0: addi    r6, r6, 324
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(324);

label_7F2BBCD4:
    ctx->downcount -= 2;
    // 7F2BBCD4: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F2BBCD8:
    // 7F2BBCD8: bc    4, 0, 0x7F2BBCC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BBCC4u;
                return;
            }
            goto label_7F2BBCC4;
        }
    }

label_7F2BBCDC:
    ctx->pc = 0x7F2BBCDCu;
    ctx->downcount -= 1;
    // 7F2BBCDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBCE0:
    ctx->pc = 0x7F2BBCE0u;
    ctx->downcount -= 5;
    // 7F2BBCE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBCE4:
    ctx->pc = 0x7F2BBCE4u;
    // 7F2BBCE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBCE8:
    ctx->pc = 0x7F2BBCE8u;
    // 7F2BBCE8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F2BBCEC:
    ctx->pc = 0x7F2BBCECu;
    // 7F2BBCEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBCF0:
    ctx->pc = 0x7F2BBCF0u;
    // 7F2BBCF0: bl      0x7F2BBC84
    {
            ctx->lr = 0x7F2BBCF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BBC84u;
                return;
            }
            goto label_7F2BBC84;
    }

label_7F2BBCF4:
    ctx->pc = 0x7F2BBCF4u;
    ctx->downcount -= 5;
    // 7F2BBCF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBCF8:
    ctx->pc = 0x7F2BBCF8u;
    // 7F2BBCF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBCFC:
    ctx->pc = 0x7F2BBCFCu;
    // 7F2BBCFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BBD00:
    ctx->pc = 0x7F2BBD00u;
    // 7F2BBD00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBD04:
    ctx->pc = 0x7F2BBD04u;
    ctx->downcount -= 5;
    // 7F2BBD04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBD08:
    ctx->pc = 0x7F2BBD08u;
    // 7F2BBD08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBD0C:
    ctx->pc = 0x7F2BBD0Cu;
    // 7F2BBD0C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BBD10:
    ctx->pc = 0x7F2BBD10u;
    // 7F2BBD10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBD14:
    ctx->pc = 0x7F2BBD14u;
    // 7F2BBD14: bl      0x7F2BBC84
    {
            ctx->lr = 0x7F2BBD18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BBC84u;
                return;
            }
            goto label_7F2BBC84;
    }

label_7F2BBD18:
    ctx->pc = 0x7F2BBD18u;
    ctx->downcount -= 5;
    // 7F2BBD18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBD1C:
    ctx->pc = 0x7F2BBD1Cu;
    // 7F2BBD1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBD20:
    ctx->pc = 0x7F2BBD20u;
    // 7F2BBD20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BBD24:
    ctx->pc = 0x7F2BBD24u;
    // 7F2BBD24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBD28:
    ctx->pc = 0x7F2BBD28u;
    ctx->downcount -= 16;
    // 7F2BBD28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBD2C:
    ctx->pc = 0x7F2BBD2Cu;
    // 7F2BBD2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBD30:
    ctx->pc = 0x7F2BBD30u;
    // 7F2BBD30: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F2BBD34:
    ctx->pc = 0x7F2BBD34u;
    // 7F2BBD34: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBD38:
    ctx->pc = 0x7F2BBD38u;
    // 7F2BBD38: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BBD3C:
    ctx->pc = 0x7F2BBD3Cu;
    // 7F2BBD3C: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BBD40u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BBD40:
    ctx->pc = 0x7F2BBD40u;
    ctx->downcount -= 1;
    // 7F2BBD40: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBD44u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBD44:
    ctx->pc = 0x7F2BBD44u;
    ctx->downcount -= 3;
    // 7F2BBD44: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBD48:
    ctx->pc = 0x7F2BBD48u;
    // 7F2BBD48: srawi r28, r29, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[29];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[28] = value;
        } else if (sh > 31) {
            ctx->gpr[28] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[28] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2BBD4C:
    ctx->pc = 0x7F2BBD4Cu;
    // 7F2BBD4C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBD50u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBD50:
    ctx->pc = 0x7F2BBD50u;
    ctx->downcount -= 2;
    // 7F2BBD50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBD54:
    ctx->pc = 0x7F2BBD54u;
    // 7F2BBD54: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBD58u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBD58:
    ctx->pc = 0x7F2BBD58u;
    ctx->downcount -= 3;
    // 7F2BBD58: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBD5C:
    ctx->pc = 0x7F2BBD5Cu;
    // 7F2BBD5C: srawi r27, r31, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[31];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[27] = value;
        } else if (sh > 31) {
            ctx->gpr[27] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[27] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2BBD60:
    ctx->pc = 0x7F2BBD60u;
    // 7F2BBD60: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBD64u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBD64:
    ctx->pc = 0x7F2BBD64u;
    ctx->downcount -= 6;
    // 7F2BBD64: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBD68:
    ctx->pc = 0x7F2BBD68u;
    // 7F2BBD68: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BBD6C:
    ctx->pc = 0x7F2BBD6Cu;
    // 7F2BBD6C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BBD70:
    ctx->pc = 0x7F2BBD70u;
    // 7F2BBD70: or   r3, r30, r28
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[28];
    }

label_7F2BBD74:
    ctx->pc = 0x7F2BBD74u;
    // 7F2BBD74: or   r5, r0, r27
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[27];
    }

label_7F2BBD78:
    ctx->pc = 0x7F2BBD78u;
    // 7F2BBD78: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2BBD7Cu;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2BBD7C:
    ctx->pc = 0x7F2BBD7Cu;
    ctx->downcount -= 16;
    // 7F2BBD7C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BBD80:
    ctx->pc = 0x7F2BBD80u;
    // 7F2BBD80: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBD84:
    ctx->pc = 0x7F2BBD84u;
    // 7F2BBD84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBD88:
    ctx->pc = 0x7F2BBD88u;
    // 7F2BBD88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BBD8C:
    ctx->pc = 0x7F2BBD8Cu;
    // 7F2BBD8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBD90:
    ctx->pc = 0x7F2BBD90u;
    ctx->downcount -= 16;
    // 7F2BBD90: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBD94:
    ctx->pc = 0x7F2BBD94u;
    // 7F2BBD94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBD98:
    ctx->pc = 0x7F2BBD98u;
    // 7F2BBD98: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F2BBD9C:
    ctx->pc = 0x7F2BBD9Cu;
    // 7F2BBD9C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBDA0:
    ctx->pc = 0x7F2BBDA0u;
    // 7F2BBDA0: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BBDA4:
    ctx->pc = 0x7F2BBDA4u;
    // 7F2BBDA4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BBDA8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BBDA8:
    ctx->pc = 0x7F2BBDA8u;
    ctx->downcount -= 1;
    // 7F2BBDA8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBDACu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBDAC:
    ctx->pc = 0x7F2BBDACu;
    ctx->downcount -= 3;
    // 7F2BBDAC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBDB0:
    ctx->pc = 0x7F2BBDB0u;
    // 7F2BBDB0: srawi r28, r29, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[29];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[28] = value;
        } else if (sh > 31) {
            ctx->gpr[28] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[28] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2BBDB4:
    ctx->pc = 0x7F2BBDB4u;
    // 7F2BBDB4: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBDB8u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBDB8:
    ctx->pc = 0x7F2BBDB8u;
    ctx->downcount -= 2;
    // 7F2BBDB8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBDBC:
    ctx->pc = 0x7F2BBDBCu;
    // 7F2BBDBC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBDC0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBDC0:
    ctx->pc = 0x7F2BBDC0u;
    ctx->downcount -= 3;
    // 7F2BBDC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBDC4:
    ctx->pc = 0x7F2BBDC4u;
    // 7F2BBDC4: srawi r27, r31, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[31];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[27] = value;
        } else if (sh > 31) {
            ctx->gpr[27] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[27] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_7F2BBDC8:
    ctx->pc = 0x7F2BBDC8u;
    // 7F2BBDC8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBDCCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBDCC:
    ctx->pc = 0x7F2BBDCCu;
    ctx->downcount -= 6;
    // 7F2BBDCC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBDD0:
    ctx->pc = 0x7F2BBDD0u;
    // 7F2BBDD0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F2BBDD4:
    ctx->pc = 0x7F2BBDD4u;
    // 7F2BBDD4: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F2BBDD8:
    ctx->pc = 0x7F2BBDD8u;
    // 7F2BBDD8: or   r3, r30, r28
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[28];
    }

label_7F2BBDDC:
    ctx->pc = 0x7F2BBDDCu;
    // 7F2BBDDC: or   r5, r0, r27
    {
        ctx->gpr[5] = ctx->gpr[0] | ctx->gpr[27];
    }

label_7F2BBDE0:
    ctx->pc = 0x7F2BBDE0u;
    // 7F2BBDE0: bl      0x7F042E08
    {
            ctx->lr = 0x7F2BBDE4u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F2BBDE4:
    ctx->pc = 0x7F2BBDE4u;
    ctx->downcount -= 16;
    // 7F2BBDE4: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BBDE8:
    ctx->pc = 0x7F2BBDE8u;
    // 7F2BBDE8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBDEC:
    ctx->pc = 0x7F2BBDECu;
    // 7F2BBDEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBDF0:
    ctx->pc = 0x7F2BBDF0u;
    // 7F2BBDF0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BBDF4:
    ctx->pc = 0x7F2BBDF4u;
    // 7F2BBDF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBDF8:
    ctx->pc = 0x7F2BBDF8u;
    ctx->downcount -= 21;
    // 7F2BBDF8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBDFC:
    ctx->pc = 0x7F2BBDFCu;
    // 7F2BBDFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBE00:
    ctx->pc = 0x7F2BBE00u;
    // 7F2BBE00: lis     r4, 8448
    ctx->gpr[4] = ((u32)(s32)(8448) << 16);

label_7F2BBE04:
    ctx->pc = 0x7F2BBE04u;
    // 7F2BBE04: lis     r3, 4112
    ctx->gpr[3] = ((u32)(s32)(4112) << 16);

label_7F2BBE08:
    ctx->pc = 0x7F2BBE08u;
    // 7F2BBE08: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBE0C:
    ctx->pc = 0x7F2BBE0Cu;
    // 7F2BBE0C: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_7F2BBE10:
    ctx->pc = 0x7F2BBE10u;
    // 7F2BBE10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BBE14:
    ctx->pc = 0x7F2BBE14u;
    // 7F2BBE14: addi    r3, r3, 9216
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9216);

label_7F2BBE18:
    ctx->pc = 0x7F2BBE18u;
    // 7F2BBE18: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F2BBE1C:
    ctx->pc = 0x7F2BBE1Cu;
    // 7F2BBE1C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BBE20:
    ctx->pc = 0x7F2BBE20u;
    // 7F2BBE20: bl      0x7F012018
    {
            ctx->lr = 0x7F2BBE24u;
            ctx->pc = 0x7F012018u;
            return;
    }

label_7F2BBE24:
    ctx->pc = 0x7F2BBE24u;
    ctx->downcount -= 7;
    // 7F2BBE24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F2BBE28:
    ctx->pc = 0x7F2BBE28u;
    // 7F2BBE28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BBE2C:
    ctx->pc = 0x7F2BBE2Cu;
    // 7F2BBE2C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F2BBE30:
    ctx->pc = 0x7F2BBE30u;
    // 7F2BBE30: xor   r3, r29, r0
    {
        ctx->gpr[3] = ctx->gpr[29] ^ ctx->gpr[0];
    }

label_7F2BBE34:
    ctx->pc = 0x7F2BBE34u;
    // 7F2BBE34: xor   r0, r30, r0
    {
        ctx->gpr[0] = ctx->gpr[30] ^ ctx->gpr[0];
    }

label_7F2BBE38:
    ctx->pc = 0x7F2BBE38u;
    // 7F2BBE38: or.   r0, r3, r0
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

label_7F2BBE3C:
    ctx->pc = 0x7F2BBE3Cu;
    // 7F2BBE3C: bc    4, 2, 0x7F2BBE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBE48;
        }
    }

label_7F2BBE40:
    ctx->pc = 0x7F2BBE40u;
    ctx->downcount -= 2;
    // 7F2BBE40: lis     r0, -32768
    ctx->gpr[0] = ((u32)(s32)(-32768) << 16);

label_7F2BBE44:
    ctx->pc = 0x7F2BBE44u;
    // 7F2BBE44: or   r29, r29, r0
    {
        ctx->gpr[29] = ctx->gpr[29] | ctx->gpr[0];
    }

label_7F2BBE48:
    ctx->pc = 0x7F2BBE48u;
    ctx->downcount -= 4;
    // 7F2BBE48: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F2BBE4C:
    ctx->pc = 0x7F2BBE4Cu;
    // 7F2BBE4C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_7F2BBE50:
    ctx->pc = 0x7F2BBE50u;
    // 7F2BBE50: li      r3, 102
    ctx->gpr[3] = (u32)(s32)(102);

label_7F2BBE54:
    ctx->pc = 0x7F2BBE54u;
    // 7F2BBE54: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BBE58u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BBE58:
    ctx->pc = 0x7F2BBE58u;
    ctx->downcount -= 2;
    // 7F2BBE58: cmplwi  r3, 0x0000
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

label_7F2BBE5C:
    ctx->pc = 0x7F2BBE5Cu;
    // 7F2BBE5C: bc    12, 2, 0x7F2BBE94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBE94;
        }
    }

label_7F2BBE60:
    ctx->pc = 0x7F2BBE60u;
    ctx->downcount -= 3;
    // 7F2BBE60: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F2BBE64:
    ctx->pc = 0x7F2BBE64u;
    // 7F2BBE64: addi    r31, r3, -22872
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-22872);

label_7F2BBE68:
    ctx->pc = 0x7F2BBE68u;
    // 7F2BBE68: b       0x7F2BBE88
    {
            goto label_7F2BBE88;
    }

label_7F2BBE6C:
    ctx->downcount -= 1;
    // 7F2BBE6C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBE70u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBE70:
    ctx->downcount -= 6;
    // 7F2BBE70: rlwinm r0, r3, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_7F2BBE74:
    // 7F2BBE74: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_7F2BBE78:
    ctx->pc = 0x7F2BBE78u;
    // 7F2BBE78: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBE7C:
    ctx->pc = 0x7F2BBE7Cu;
    // 7F2BBE7C: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F2BBE80:
    // 7F2BBE80: or   r28, r28, r0
    {
        ctx->gpr[28] = ctx->gpr[28] | ctx->gpr[0];
    }

label_7F2BBE84:
    // 7F2BBE84: or   r27, r27, r3
    {
        ctx->gpr[27] = ctx->gpr[27] | ctx->gpr[3];
    }

label_7F2BBE88:
    ctx->downcount -= 1;
    // 7F2BBE88: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2BBE8Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2BBE8C:
    ctx->downcount -= 2;
    // 7F2BBE8C: cmplwi  r3, 0x0000
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

label_7F2BBE90:
    // 7F2BBE90: bc    4, 2, 0x7F2BBE6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F2BBE6Cu;
                return;
            }
            goto label_7F2BBE6C;
        }
    }

label_7F2BBE94:
    ctx->pc = 0x7F2BBE94u;
    ctx->downcount -= 7;
    // 7F2BBE94: and   r3, r27, r29
    {
        ctx->gpr[3] = ctx->gpr[27] & ctx->gpr[29];
    }

label_7F2BBE98:
    ctx->pc = 0x7F2BBE98u;
    // 7F2BBE98: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F2BBE9C:
    ctx->pc = 0x7F2BBE9Cu;
    // 7F2BBE9C: and   r4, r28, r30
    {
        ctx->gpr[4] = ctx->gpr[28] & ctx->gpr[30];
    }

label_7F2BBEA0:
    ctx->pc = 0x7F2BBEA0u;
    // 7F2BBEA0: xor   r3, r3, r0
    {
        ctx->gpr[3] = ctx->gpr[3] ^ ctx->gpr[0];
    }

label_7F2BBEA4:
    ctx->pc = 0x7F2BBEA4u;
    // 7F2BBEA4: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_7F2BBEA8:
    ctx->pc = 0x7F2BBEA8u;
    // 7F2BBEA8: or.   r0, r3, r0
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

label_7F2BBEAC:
    ctx->pc = 0x7F2BBEACu;
    // 7F2BBEAC: bc    12, 2, 0x7F2BBEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBEB8;
        }
    }

label_7F2BBEB0:
    ctx->pc = 0x7F2BBEB0u;
    ctx->downcount -= 2;
    // 7F2BBEB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BBEB4:
    ctx->pc = 0x7F2BBEB4u;
    // 7F2BBEB4: b       0x7F2BBEBC
    {
            goto label_7F2BBEBC;
    }

label_7F2BBEB8:
    ctx->pc = 0x7F2BBEB8u;
    ctx->downcount -= 1;
    // 7F2BBEB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F2BBEBC:
    ctx->pc = 0x7F2BBEBCu;
    ctx->downcount -= 16;
    // 7F2BBEBC: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F2BBEC0:
    ctx->pc = 0x7F2BBEC0u;
    // 7F2BBEC0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBEC4:
    ctx->pc = 0x7F2BBEC4u;
    // 7F2BBEC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBEC8:
    ctx->pc = 0x7F2BBEC8u;
    // 7F2BBEC8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F2BBECC:
    ctx->pc = 0x7F2BBECCu;
    // 7F2BBECC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBED0:
    ctx->pc = 0x7F2BBED0u;
    ctx->downcount -= 11;
    // 7F2BBED0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BBED4:
    ctx->pc = 0x7F2BBED4u;
    // 7F2BBED4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BBED8:
    ctx->pc = 0x7F2BBED8u;
    // 7F2BBED8: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BBEDC:
    ctx->pc = 0x7F2BBEDCu;
    // 7F2BBEDC: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_7F2BBEE0:
    ctx->pc = 0x7F2BBEE0u;
    // 7F2BBEE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BBEE4:
    ctx->pc = 0x7F2BBEE4u;
    // 7F2BBEE4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BBEE8:
    ctx->pc = 0x7F2BBEE8u;
    // 7F2BBEE8: lwz     r31, -6316(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6316);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2BBEEC:
    ctx->pc = 0x7F2BBEECu;
    // 7F2BBEEC: lha     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BBEF0:
    ctx->pc = 0x7F2BBEF0u;
    // 7F2BBEF0: rlwinm r0, r0, 0, 24, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFCFFu;
    }

label_7F2BBEF4:
    ctx->pc = 0x7F2BBEF4u;
    // 7F2BBEF4: sth     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BBEF8:
    ctx->pc = 0x7F2BBEF8u;
    // 7F2BBEF8: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BBEFCu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BBEFC:
    ctx->pc = 0x7F2BBEFCu;
    ctx->downcount -= 1;
    // 7F2BBEFC: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF00u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF00:
    ctx->pc = 0x7F2BBF00u;
    ctx->downcount -= 2;
    // 7F2BBF00: stb     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF04:
    ctx->pc = 0x7F2BBF04u;
    // 7F2BBF04: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF08u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF08:
    ctx->pc = 0x7F2BBF08u;
    ctx->downcount -= 2;
    // 7F2BBF08: stb     r3, 1(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF0C:
    ctx->pc = 0x7F2BBF0Cu;
    // 7F2BBF0C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF10u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF10:
    ctx->pc = 0x7F2BBF10u;
    ctx->downcount -= 2;
    // 7F2BBF10: stb     r3, 2(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF14:
    ctx->pc = 0x7F2BBF14u;
    // 7F2BBF14: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF18u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF18:
    ctx->pc = 0x7F2BBF18u;
    ctx->downcount -= 2;
    // 7F2BBF18: stb     r3, 3(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF1C:
    ctx->pc = 0x7F2BBF1Cu;
    // 7F2BBF1C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF20u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF20:
    ctx->pc = 0x7F2BBF20u;
    ctx->downcount -= 2;
    // 7F2BBF20: stb     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF24:
    ctx->pc = 0x7F2BBF24u;
    // 7F2BBF24: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF28u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF28:
    ctx->pc = 0x7F2BBF28u;
    ctx->downcount -= 2;
    // 7F2BBF28: sth     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2BBF2C:
    ctx->pc = 0x7F2BBF2Cu;
    // 7F2BBF2C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF30u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF30:
    ctx->pc = 0x7F2BBF30u;
    ctx->downcount -= 2;
    // 7F2BBF30: sth     r3, 22(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2BBF34:
    ctx->pc = 0x7F2BBF34u;
    // 7F2BBF34: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF38u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF38:
    ctx->pc = 0x7F2BBF38u;
    ctx->downcount -= 2;
    // 7F2BBF38: sth     r3, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F2BBF3C:
    ctx->pc = 0x7F2BBF3Cu;
    // 7F2BBF3C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF40u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF40:
    ctx->pc = 0x7F2BBF40u;
    ctx->downcount -= 2;
    // 7F2BBF40: stb     r3, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF44:
    ctx->pc = 0x7F2BBF44u;
    // 7F2BBF44: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF48u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF48:
    ctx->pc = 0x7F2BBF48u;
    ctx->downcount -= 2;
    // 7F2BBF48: stb     r3, 17(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(17);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF4C:
    ctx->pc = 0x7F2BBF4Cu;
    // 7F2BBF4C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF50u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF50:
    ctx->pc = 0x7F2BBF50u;
    ctx->downcount -= 2;
    // 7F2BBF50: stb     r3, 5(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(5);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF54:
    ctx->pc = 0x7F2BBF54u;
    // 7F2BBF54: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF58u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF58:
    ctx->pc = 0x7F2BBF58u;
    ctx->downcount -= 2;
    // 7F2BBF58: stb     r3, 6(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(6);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF5C:
    ctx->pc = 0x7F2BBF5Cu;
    // 7F2BBF5C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF60u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF60:
    ctx->pc = 0x7F2BBF60u;
    ctx->downcount -= 2;
    // 7F2BBF60: stb     r3, 7(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(7);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF64:
    ctx->pc = 0x7F2BBF64u;
    // 7F2BBF64: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF68u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF68:
    ctx->pc = 0x7F2BBF68u;
    ctx->downcount -= 2;
    // 7F2BBF68: stb     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF6C:
    ctx->pc = 0x7F2BBF6Cu;
    // 7F2BBF6C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF70u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF70:
    ctx->pc = 0x7F2BBF70u;
    ctx->downcount -= 2;
    // 7F2BBF70: stb     r3, 9(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(9);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF74:
    ctx->pc = 0x7F2BBF74u;
    // 7F2BBF74: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF78u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF78:
    ctx->pc = 0x7F2BBF78u;
    ctx->downcount -= 2;
    // 7F2BBF78: stb     r3, 10(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(10);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF7C:
    ctx->pc = 0x7F2BBF7Cu;
    // 7F2BBF7C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF80u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF80:
    ctx->pc = 0x7F2BBF80u;
    ctx->downcount -= 2;
    // 7F2BBF80: stb     r3, 11(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(11);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF84:
    ctx->pc = 0x7F2BBF84u;
    // 7F2BBF84: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2BBF88u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2BBF88:
    ctx->pc = 0x7F2BBF88u;
    ctx->downcount -= 2;
    // 7F2BBF88: cmplwi  r3, 0x0000
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

label_7F2BBF8C:
    ctx->pc = 0x7F2BBF8Cu;
    // 7F2BBF8C: bc    12, 2, 0x7F2BBF9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBF9C;
        }
    }

label_7F2BBF90:
    ctx->pc = 0x7F2BBF90u;
    ctx->downcount -= 1;
    // 7F2BBF90: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBF94u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBF94:
    ctx->pc = 0x7F2BBF94u;
    ctx->downcount -= 2;
    // 7F2BBF94: stb     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBF98:
    ctx->pc = 0x7F2BBF98u;
    // 7F2BBF98: b       0x7F2BBFA4
    {
            goto label_7F2BBFA4;
    }

label_7F2BBF9C:
    ctx->pc = 0x7F2BBF9Cu;
    ctx->downcount -= 2;
    // 7F2BBF9C: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F2BBFA0:
    ctx->pc = 0x7F2BBFA0u;
    // 7F2BBFA0: stb     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BBFA4:
    ctx->pc = 0x7F2BBFA4u;
    ctx->downcount -= 1;
    // 7F2BBFA4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2BBFA8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2BBFA8:
    ctx->pc = 0x7F2BBFA8u;
    ctx->downcount -= 2;
    // 7F2BBFA8: cmplwi  r3, 0x0000
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

label_7F2BBFAC:
    ctx->pc = 0x7F2BBFACu;
    // 7F2BBFAC: bc    12, 2, 0x7F2BBFBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBFBC;
        }
    }

label_7F2BBFB0:
    ctx->pc = 0x7F2BBFB0u;
    ctx->downcount -= 1;
    // 7F2BBFB0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBFB4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBFB4:
    ctx->pc = 0x7F2BBFB4u;
    ctx->downcount -= 2;
    // 7F2BBFB4: stb     r3, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBFB8:
    ctx->pc = 0x7F2BBFB8u;
    // 7F2BBFB8: b       0x7F2BBFC4
    {
            goto label_7F2BBFC4;
    }

label_7F2BBFBC:
    ctx->pc = 0x7F2BBFBCu;
    ctx->downcount -= 2;
    // 7F2BBFBC: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F2BBFC0:
    ctx->pc = 0x7F2BBFC0u;
    // 7F2BBFC0: stb     r0, 13(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BBFC4:
    ctx->pc = 0x7F2BBFC4u;
    ctx->downcount -= 1;
    // 7F2BBFC4: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F2BBFC8u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F2BBFC8:
    ctx->pc = 0x7F2BBFC8u;
    ctx->downcount -= 2;
    // 7F2BBFC8: cmplwi  r3, 0x0000
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

label_7F2BBFCC:
    ctx->pc = 0x7F2BBFCCu;
    // 7F2BBFCC: bc    12, 2, 0x7F2BBFDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BBFDC;
        }
    }

label_7F2BBFD0:
    ctx->pc = 0x7F2BBFD0u;
    ctx->downcount -= 1;
    // 7F2BBFD0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BBFD4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BBFD4:
    ctx->pc = 0x7F2BBFD4u;
    ctx->downcount -= 2;
    // 7F2BBFD4: stb     r3, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_7F2BBFD8:
    ctx->pc = 0x7F2BBFD8u;
    // 7F2BBFD8: b       0x7F2BBFE4
    {
            goto label_7F2BBFE4;
    }

label_7F2BBFDC:
    ctx->pc = 0x7F2BBFDCu;
    ctx->downcount -= 2;
    // 7F2BBFDC: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_7F2BBFE0:
    ctx->pc = 0x7F2BBFE0u;
    // 7F2BBFE0: stb     r0, 14(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_7F2BBFE4:
    ctx->pc = 0x7F2BBFE4u;
    ctx->downcount -= 7;
    // 7F2BBFE4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BBFE8:
    ctx->pc = 0x7F2BBFE8u;
    // 7F2BBFE8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BBFEC:
    ctx->pc = 0x7F2BBFECu;
    // 7F2BBFEC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2BBFF0:
    ctx->pc = 0x7F2BBFF0u;
    // 7F2BBFF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BBFF4:
    ctx->pc = 0x7F2BBFF4u;
    // 7F2BBFF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BBFF8:
    ctx->pc = 0x7F2BBFF8u;
    // 7F2BBFF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BBFFC:
    ctx->pc = 0x7F2BBFFCu;
    ctx->downcount -= 8;
    // 7F2BBFFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BC000:
    ctx->pc = 0x7F2BC000u;
    // 7F2BC000: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BC004:
    ctx->pc = 0x7F2BC004u;
    // 7F2BC004: lis     r4, 32589
    ctx->gpr[4] = ((u32)(s32)(32589) << 16);

label_7F2BC008:
    ctx->pc = 0x7F2BC008u;
    // 7F2BC008: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F2BC00C:
    ctx->pc = 0x7F2BC00Cu;
    // 7F2BC00C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BC010:
    ctx->pc = 0x7F2BC010u;
    // 7F2BC010: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F2BC014:
    ctx->pc = 0x7F2BC014u;
    // 7F2BC014: lwz     r31, -6316(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6316);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2BC018:
    ctx->pc = 0x7F2BC018u;
    // 7F2BC018: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BC01Cu;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BC01C:
    ctx->pc = 0x7F2BC01Cu;
    ctx->downcount -= 2;
    // 7F2BC01C: cmplwi  r3, 0x0000
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

label_7F2BC020:
    ctx->pc = 0x7F2BC020u;
    // 7F2BC020: bc    12, 2, 0x7F2BC040
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BC040;
        }
    }

label_7F2BC024:
    ctx->pc = 0x7F2BC024u;
    ctx->downcount -= 4;
    // 7F2BC024: lha     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BC028:
    ctx->pc = 0x7F2BC028u;
    // 7F2BC028: ori     r0, r0, 0x0100
    ctx->gpr[0] = ctx->gpr[0] | 0x0100u;

label_7F2BC02C:
    ctx->pc = 0x7F2BC02Cu;
    // 7F2BC02C: sth     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BC030:
    ctx->pc = 0x7F2BC030u;
    // 7F2BC030: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BC034u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BC034:
    ctx->pc = 0x7F2BC034u;
    ctx->downcount -= 2;
    // 7F2BC034: stw     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BC038:
    ctx->pc = 0x7F2BC038u;
    // 7F2BC038: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BC03Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BC03C:
    ctx->pc = 0x7F2BC03Cu;
    ctx->downcount -= 1;
    // 7F2BC03C: stw     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BC040:
    ctx->pc = 0x7F2BC040u;
    ctx->downcount -= 2;
    // 7F2BC040: li      r3, 122
    ctx->gpr[3] = (u32)(s32)(122);

label_7F2BC044:
    ctx->pc = 0x7F2BC044u;
    // 7F2BC044: bl      0x7F3C664C
    {
            ctx->lr = 0x7F2BC048u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F2BC048:
    ctx->pc = 0x7F2BC048u;
    ctx->downcount -= 2;
    // 7F2BC048: cmplwi  r3, 0x0000
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

label_7F2BC04C:
    ctx->pc = 0x7F2BC04Cu;
    // 7F2BC04C: bc    12, 2, 0x7F2BC06C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F2BC06C;
        }
    }

label_7F2BC050:
    ctx->pc = 0x7F2BC050u;
    ctx->downcount -= 4;
    // 7F2BC050: lha     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F2BC054:
    ctx->pc = 0x7F2BC054u;
    // 7F2BC054: ori     r0, r0, 0x0200
    ctx->gpr[0] = ctx->gpr[0] | 0x0200u;

label_7F2BC058:
    ctx->pc = 0x7F2BC058u;
    // 7F2BC058: sth     r0, 18(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F2BC05C:
    ctx->pc = 0x7F2BC05Cu;
    // 7F2BC05C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BC060u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BC060:
    ctx->pc = 0x7F2BC060u;
    ctx->downcount -= 2;
    // 7F2BC060: stw     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BC064:
    ctx->pc = 0x7F2BC064u;
    // 7F2BC064: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F2BC068u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F2BC068:
    ctx->pc = 0x7F2BC068u;
    ctx->downcount -= 1;
    // 7F2BC068: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F2BC06C:
    ctx->pc = 0x7F2BC06Cu;
    ctx->downcount -= 7;
    // 7F2BC06C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BC070:
    ctx->pc = 0x7F2BC070u;
    // 7F2BC070: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BC074:
    ctx->pc = 0x7F2BC074u;
    // 7F2BC074: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F2BC078:
    ctx->pc = 0x7F2BC078u;
    // 7F2BC078: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BC07C:
    ctx->pc = 0x7F2BC07Cu;
    // 7F2BC07C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BC080:
    ctx->pc = 0x7F2BC080u;
    // 7F2BC080: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BC084:
    ctx->pc = 0x7F2BC084u;
    ctx->downcount -= 8;
    // 7F2BC084: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BC088:
    ctx->pc = 0x7F2BC088u;
    // 7F2BC088: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BC08C:
    ctx->pc = 0x7F2BC08Cu;
    // 7F2BC08C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BC090:
    ctx->pc = 0x7F2BC090u;
    // 7F2BC090: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2BC094:
    ctx->pc = 0x7F2BC094u;
    // 7F2BC094: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BC098:
    ctx->pc = 0x7F2BC098u;
    // 7F2BC098: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BC09C:
    ctx->pc = 0x7F2BC09Cu;
    // 7F2BC09C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BC0A0:
    ctx->pc = 0x7F2BC0A0u;
    // 7F2BC0A0: bl      0x7F07AA5C
    {
            ctx->lr = 0x7F2BC0A4u;
            ctx->pc = 0x7F07AA5Cu;
            return;
    }

label_7F2BC0A4:
    ctx->pc = 0x7F2BC0A4u;
    ctx->downcount -= 6;
    // 7F2BC0A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BC0A8:
    ctx->pc = 0x7F2BC0A8u;
    // 7F2BC0A8: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BC0AC:
    ctx->pc = 0x7F2BC0ACu;
    // 7F2BC0AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BC0B0:
    ctx->pc = 0x7F2BC0B0u;
    // 7F2BC0B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BC0B4:
    ctx->pc = 0x7F2BC0B4u;
    // 7F2BC0B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

label_7F2BC0B8:
    ctx->pc = 0x7F2BC0B8u;
    ctx->downcount -= 8;
    // 7F2BC0B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F2BC0BC:
    ctx->pc = 0x7F2BC0BCu;
    // 7F2BC0BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F2BC0C0:
    ctx->pc = 0x7F2BC0C0u;
    // 7F2BC0C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F2BC0C4:
    ctx->pc = 0x7F2BC0C4u;
    // 7F2BC0C4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F2BC0C8:
    ctx->pc = 0x7F2BC0C8u;
    // 7F2BC0C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F2BC0CC:
    ctx->pc = 0x7F2BC0CCu;
    // 7F2BC0CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F2BC0D0:
    ctx->pc = 0x7F2BC0D0u;
    // 7F2BC0D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F2BC0D4:
    ctx->pc = 0x7F2BC0D4u;
    // 7F2BC0D4: bl      0x7F042E08
    {
            ctx->lr = 0x7F2BC0D8u;
            ctx->pc = 0x7F042E08u;
            return;
    }

label_7F2BC0D8:
    ctx->pc = 0x7F2BC0D8u;
    ctx->downcount -= 6;
    // 7F2BC0D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F2BC0DC:
    ctx->pc = 0x7F2BC0DCu;
    // 7F2BC0DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F2BC0E0:
    ctx->pc = 0x7F2BC0E0u;
    // 7F2BC0E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F2BC0E4:
    ctx->pc = 0x7F2BC0E4u;
    // 7F2BC0E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F2BC0E8:
    ctx->pc = 0x7F2BC0E8u;
    // 7F2BC0E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F2B80EC;
        }
    }

    ctx->pc = 0x7F2BC0ECu;
    return;
return_dispatch_7F2B80EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F2B811Cu: goto label_7F2B811C;
    case 0x7F2B8138u: goto label_7F2B8138;
    case 0x7F2B8140u: goto label_7F2B8140;
    case 0x7F2B8150u: goto label_7F2B8150;
    case 0x7F2B8158u: goto label_7F2B8158;
    case 0x7F2B8188u: goto label_7F2B8188;
    case 0x7F2B8194u: goto label_7F2B8194;
    case 0x7F2B81A0u: goto label_7F2B81A0;
    case 0x7F2B81E8u: goto label_7F2B81E8;
    case 0x7F2B81F0u: goto label_7F2B81F0;
    case 0x7F2B81F8u: goto label_7F2B81F8;
    case 0x7F2B8200u: goto label_7F2B8200;
    case 0x7F2B820Cu: goto label_7F2B820C;
    case 0x7F2B8244u: goto label_7F2B8244;
    case 0x7F2B824Cu: goto label_7F2B824C;
    case 0x7F2B8254u: goto label_7F2B8254;
    case 0x7F2B8260u: goto label_7F2B8260;
    case 0x7F2B8270u: goto label_7F2B8270;
    case 0x7F2B829Cu: goto label_7F2B829C;
    case 0x7F2B82B0u: goto label_7F2B82B0;
    case 0x7F2B82D0u: goto label_7F2B82D0;
    case 0x7F2B82E0u: goto label_7F2B82E0;
    case 0x7F2B831Cu: goto label_7F2B831C;
    case 0x7F2B8338u: goto label_7F2B8338;
    case 0x7F2B8348u: goto label_7F2B8348;
    case 0x7F2B8368u: goto label_7F2B8368;
    case 0x7F2B8378u: goto label_7F2B8378;
    case 0x7F2B83BCu: goto label_7F2B83BC;
    case 0x7F2B83C8u: goto label_7F2B83C8;
    case 0x7F2B8408u: goto label_7F2B8408;
    case 0x7F2B8430u: goto label_7F2B8430;
    case 0x7F2B8448u: goto label_7F2B8448;
    case 0x7F2B8468u: goto label_7F2B8468;
    case 0x7F2B84B8u: goto label_7F2B84B8;
    case 0x7F2B84ECu: goto label_7F2B84EC;
    case 0x7F2B853Cu: goto label_7F2B853C;
    case 0x7F2B8544u: goto label_7F2B8544;
    case 0x7F2B854Cu: goto label_7F2B854C;
    case 0x7F2B8578u: goto label_7F2B8578;
    case 0x7F2B85A4u: goto label_7F2B85A4;
    case 0x7F2B85D0u: goto label_7F2B85D0;
    case 0x7F2B85D8u: goto label_7F2B85D8;
    case 0x7F2B85E4u: goto label_7F2B85E4;
    case 0x7F2B85F0u: goto label_7F2B85F0;
    case 0x7F2B8624u: goto label_7F2B8624;
    case 0x7F2B8648u: goto label_7F2B8648;
    case 0x7F2B8704u: goto label_7F2B8704;
    case 0x7F2B8790u: goto label_7F2B8790;
    case 0x7F2B87A4u: goto label_7F2B87A4;
    case 0x7F2B87B0u: goto label_7F2B87B0;
    case 0x7F2B87BCu: goto label_7F2B87BC;
    case 0x7F2B87D8u: goto label_7F2B87D8;
    case 0x7F2B87E0u: goto label_7F2B87E0;
    case 0x7F2B87ECu: goto label_7F2B87EC;
    case 0x7F2B8800u: goto label_7F2B8800;
    case 0x7F2B8814u: goto label_7F2B8814;
    case 0x7F2B8850u: goto label_7F2B8850;
    case 0x7F2B8870u: goto label_7F2B8870;
    case 0x7F2B88C0u: goto label_7F2B88C0;
    case 0x7F2B88E8u: goto label_7F2B88E8;
    case 0x7F2B8924u: goto label_7F2B8924;
    case 0x7F2B895Cu: goto label_7F2B895C;
    case 0x7F2B897Cu: goto label_7F2B897C;
    case 0x7F2B89ACu: goto label_7F2B89AC;
    case 0x7F2B89B8u: goto label_7F2B89B8;
    case 0x7F2B89F8u: goto label_7F2B89F8;
    case 0x7F2B8A04u: goto label_7F2B8A04;
    case 0x7F2B8A24u: goto label_7F2B8A24;
    case 0x7F2B8A30u: goto label_7F2B8A30;
    case 0x7F2B8A3Cu: goto label_7F2B8A3C;
    case 0x7F2B8A68u: goto label_7F2B8A68;
    case 0x7F2B8AC8u: goto label_7F2B8AC8;
    case 0x7F2B8AD8u: goto label_7F2B8AD8;
    case 0x7F2B8AE0u: goto label_7F2B8AE0;
    case 0x7F2B8AF4u: goto label_7F2B8AF4;
    case 0x7F2B8B24u: goto label_7F2B8B24;
    case 0x7F2B8B30u: goto label_7F2B8B30;
    case 0x7F2B8B64u: goto label_7F2B8B64;
    case 0x7F2B8B70u: goto label_7F2B8B70;
    case 0x7F2B8BDCu: goto label_7F2B8BDC;
    case 0x7F2B8BE8u: goto label_7F2B8BE8;
    case 0x7F2B8C10u: goto label_7F2B8C10;
    case 0x7F2B8C54u: goto label_7F2B8C54;
    case 0x7F2B8CB4u: goto label_7F2B8CB4;
    case 0x7F2B8CD0u: goto label_7F2B8CD0;
    case 0x7F2B8CFCu: goto label_7F2B8CFC;
    case 0x7F2B8D24u: goto label_7F2B8D24;
    case 0x7F2B8D30u: goto label_7F2B8D30;
    case 0x7F2B8D80u: goto label_7F2B8D80;
    case 0x7F2B8DA0u: goto label_7F2B8DA0;
    case 0x7F2B8E30u: goto label_7F2B8E30;
    case 0x7F2B8E4Cu: goto label_7F2B8E4C;
    case 0x7F2B8E88u: goto label_7F2B8E88;
    case 0x7F2B8EA8u: goto label_7F2B8EA8;
    case 0x7F2B8EE4u: goto label_7F2B8EE4;
    case 0x7F2B8EF4u: goto label_7F2B8EF4;
    case 0x7F2B8F00u: goto label_7F2B8F00;
    case 0x7F2B8F20u: goto label_7F2B8F20;
    case 0x7F2B8F44u: goto label_7F2B8F44;
    case 0x7F2B8F68u: goto label_7F2B8F68;
    case 0x7F2B8F78u: goto label_7F2B8F78;
    case 0x7F2B8F80u: goto label_7F2B8F80;
    case 0x7F2B8FACu: goto label_7F2B8FAC;
    case 0x7F2B8FC4u: goto label_7F2B8FC4;
    case 0x7F2B8FF4u: goto label_7F2B8FF4;
    case 0x7F2B9000u: goto label_7F2B9000;
    case 0x7F2B907Cu: goto label_7F2B907C;
    case 0x7F2B909Cu: goto label_7F2B909C;
    case 0x7F2B90BCu: goto label_7F2B90BC;
    case 0x7F2B90FCu: goto label_7F2B90FC;
    case 0x7F2B9134u: goto label_7F2B9134;
    case 0x7F2B9154u: goto label_7F2B9154;
    case 0x7F2B9164u: goto label_7F2B9164;
    case 0x7F2B9174u: goto label_7F2B9174;
    case 0x7F2B9190u: goto label_7F2B9190;
    case 0x7F2B91A4u: goto label_7F2B91A4;
    case 0x7F2B91ACu: goto label_7F2B91AC;
    case 0x7F2B91B0u: goto label_7F2B91B0;
    case 0x7F2B91BCu: goto label_7F2B91BC;
    case 0x7F2B91C0u: goto label_7F2B91C0;
    case 0x7F2B91C8u: goto label_7F2B91C8;
    case 0x7F2B91D8u: goto label_7F2B91D8;
    case 0x7F2B9204u: goto label_7F2B9204;
    case 0x7F2B9228u: goto label_7F2B9228;
    case 0x7F2B9248u: goto label_7F2B9248;
    case 0x7F2B9254u: goto label_7F2B9254;
    case 0x7F2B9298u: goto label_7F2B9298;
    case 0x7F2B92B8u: goto label_7F2B92B8;
    case 0x7F2B92C4u: goto label_7F2B92C4;
    case 0x7F2B92E0u: goto label_7F2B92E0;
    case 0x7F2B92F4u: goto label_7F2B92F4;
    case 0x7F2B9318u: goto label_7F2B9318;
    case 0x7F2B9348u: goto label_7F2B9348;
    case 0x7F2B9350u: goto label_7F2B9350;
    case 0x7F2B9358u: goto label_7F2B9358;
    case 0x7F2B9360u: goto label_7F2B9360;
    case 0x7F2B9368u: goto label_7F2B9368;
    case 0x7F2B9388u: goto label_7F2B9388;
    case 0x7F2B939Cu: goto label_7F2B939C;
    case 0x7F2B93CCu: goto label_7F2B93CC;
    case 0x7F2B9404u: goto label_7F2B9404;
    case 0x7F2B9410u: goto label_7F2B9410;
    case 0x7F2B9444u: goto label_7F2B9444;
    case 0x7F2B945Cu: goto label_7F2B945C;
    case 0x7F2B94D0u: goto label_7F2B94D0;
    case 0x7F2B94F4u: goto label_7F2B94F4;
    case 0x7F2B9524u: goto label_7F2B9524;
    case 0x7F2B954Cu: goto label_7F2B954C;
    case 0x7F2B956Cu: goto label_7F2B956C;
    case 0x7F2B95A4u: goto label_7F2B95A4;
    case 0x7F2B95BCu: goto label_7F2B95BC;
    case 0x7F2B95D4u: goto label_7F2B95D4;
    case 0x7F2B95ECu: goto label_7F2B95EC;
    case 0x7F2B962Cu: goto label_7F2B962C;
    case 0x7F2B965Cu: goto label_7F2B965C;
    case 0x7F2B968Cu: goto label_7F2B968C;
    case 0x7F2B96C4u: goto label_7F2B96C4;
    case 0x7F2B96F4u: goto label_7F2B96F4;
    case 0x7F2B9724u: goto label_7F2B9724;
    case 0x7F2B973Cu: goto label_7F2B973C;
    case 0x7F2B9754u: goto label_7F2B9754;
    case 0x7F2B976Cu: goto label_7F2B976C;
    case 0x7F2B9784u: goto label_7F2B9784;
    case 0x7F2B979Cu: goto label_7F2B979C;
    case 0x7F2B97B4u: goto label_7F2B97B4;
    case 0x7F2B97CCu: goto label_7F2B97CC;
    case 0x7F2B9858u: goto label_7F2B9858;
    case 0x7F2B9898u: goto label_7F2B9898;
    case 0x7F2B98A8u: goto label_7F2B98A8;
    case 0x7F2B98B8u: goto label_7F2B98B8;
    case 0x7F2B98C8u: goto label_7F2B98C8;
    case 0x7F2B98D0u: goto label_7F2B98D0;
    case 0x7F2B98D8u: goto label_7F2B98D8;
    case 0x7F2B98E0u: goto label_7F2B98E0;
    case 0x7F2B98E8u: goto label_7F2B98E8;
    case 0x7F2B98F0u: goto label_7F2B98F0;
    case 0x7F2B98F8u: goto label_7F2B98F8;
    case 0x7F2B9900u: goto label_7F2B9900;
    case 0x7F2B9908u: goto label_7F2B9908;
    case 0x7F2B9910u: goto label_7F2B9910;
    case 0x7F2B996Cu: goto label_7F2B996C;
    case 0x7F2B99B4u: goto label_7F2B99B4;
    case 0x7F2B9A6Cu: goto label_7F2B9A6C;
    case 0x7F2B9A80u: goto label_7F2B9A80;
    case 0x7F2B9A88u: goto label_7F2B9A88;
    case 0x7F2B9A94u: goto label_7F2B9A94;
    case 0x7F2B9AA8u: goto label_7F2B9AA8;
    case 0x7F2B9ABCu: goto label_7F2B9ABC;
    case 0x7F2B9AC4u: goto label_7F2B9AC4;
    case 0x7F2B9B00u: goto label_7F2B9B00;
    case 0x7F2B9B2Cu: goto label_7F2B9B2C;
    case 0x7F2B9C00u: goto label_7F2B9C00;
    case 0x7F2B9C18u: goto label_7F2B9C18;
    case 0x7F2B9C1Cu: goto label_7F2B9C1C;
    case 0x7F2B9C34u: goto label_7F2B9C34;
    case 0x7F2B9C38u: goto label_7F2B9C38;
    case 0x7F2B9CA0u: goto label_7F2B9CA0;
    case 0x7F2B9CE0u: goto label_7F2B9CE0;
    case 0x7F2B9D0Cu: goto label_7F2B9D0C;
    case 0x7F2B9D1Cu: goto label_7F2B9D1C;
    case 0x7F2B9D40u: goto label_7F2B9D40;
    case 0x7F2B9D60u: goto label_7F2B9D60;
    case 0x7F2B9D68u: goto label_7F2B9D68;
    case 0x7F2B9D90u: goto label_7F2B9D90;
    case 0x7F2B9D98u: goto label_7F2B9D98;
    case 0x7F2B9DB4u: goto label_7F2B9DB4;
    case 0x7F2B9DC8u: goto label_7F2B9DC8;
    case 0x7F2B9DE4u: goto label_7F2B9DE4;
    case 0x7F2B9DF0u: goto label_7F2B9DF0;
    case 0x7F2B9DFCu: goto label_7F2B9DFC;
    case 0x7F2B9E00u: goto label_7F2B9E00;
    case 0x7F2B9E14u: goto label_7F2B9E14;
    case 0x7F2B9E40u: goto label_7F2B9E40;
    case 0x7F2B9E60u: goto label_7F2B9E60;
    case 0x7F2B9E84u: goto label_7F2B9E84;
    case 0x7F2B9E90u: goto label_7F2B9E90;
    case 0x7F2B9E9Cu: goto label_7F2B9E9C;
    case 0x7F2B9F04u: goto label_7F2B9F04;
    case 0x7F2B9F08u: goto label_7F2B9F08;
    case 0x7F2B9F1Cu: goto label_7F2B9F1C;
    case 0x7F2B9F20u: goto label_7F2B9F20;
    case 0x7F2B9F3Cu: goto label_7F2B9F3C;
    case 0x7F2B9F50u: goto label_7F2B9F50;
    case 0x7F2B9F68u: goto label_7F2B9F68;
    case 0x7F2B9FA4u: goto label_7F2B9FA4;
    case 0x7F2B9FD8u: goto label_7F2B9FD8;
    case 0x7F2B9FE4u: goto label_7F2B9FE4;
    case 0x7F2B9FECu: goto label_7F2B9FEC;
    case 0x7F2B9FF8u: goto label_7F2B9FF8;
    case 0x7F2BA068u: goto label_7F2BA068;
    case 0x7F2BA080u: goto label_7F2BA080;
    case 0x7F2BA08Cu: goto label_7F2BA08C;
    case 0x7F2BA094u: goto label_7F2BA094;
    case 0x7F2BA0D0u: goto label_7F2BA0D0;
    case 0x7F2BA0DCu: goto label_7F2BA0DC;
    case 0x7F2BA114u: goto label_7F2BA114;
    case 0x7F2BA120u: goto label_7F2BA120;
    case 0x7F2BA13Cu: goto label_7F2BA13C;
    case 0x7F2BA15Cu: goto label_7F2BA15C;
    case 0x7F2BA17Cu: goto label_7F2BA17C;
    case 0x7F2BA198u: goto label_7F2BA198;
    case 0x7F2BA1CCu: goto label_7F2BA1CC;
    case 0x7F2BA1D4u: goto label_7F2BA1D4;
    case 0x7F2BA208u: goto label_7F2BA208;
    case 0x7F2BA214u: goto label_7F2BA214;
    case 0x7F2BA24Cu: goto label_7F2BA24C;
    case 0x7F2BA280u: goto label_7F2BA280;
    case 0x7F2BA2ACu: goto label_7F2BA2AC;
    case 0x7F2BA2D0u: goto label_7F2BA2D0;
    case 0x7F2BA2D8u: goto label_7F2BA2D8;
    case 0x7F2BA2ECu: goto label_7F2BA2EC;
    case 0x7F2BA2F8u: goto label_7F2BA2F8;
    case 0x7F2BA310u: goto label_7F2BA310;
    case 0x7F2BA31Cu: goto label_7F2BA31C;
    case 0x7F2BA348u: goto label_7F2BA348;
    case 0x7F2BA350u: goto label_7F2BA350;
    case 0x7F2BA360u: goto label_7F2BA360;
    case 0x7F2BA37Cu: goto label_7F2BA37C;
    case 0x7F2BA38Cu: goto label_7F2BA38C;
    case 0x7F2BA398u: goto label_7F2BA398;
    case 0x7F2BA3A4u: goto label_7F2BA3A4;
    case 0x7F2BA3DCu: goto label_7F2BA3DC;
    case 0x7F2BA3E8u: goto label_7F2BA3E8;
    case 0x7F2BA400u: goto label_7F2BA400;
    case 0x7F2BA424u: goto label_7F2BA424;
    case 0x7F2BA430u: goto label_7F2BA430;
    case 0x7F2BA440u: goto label_7F2BA440;
    case 0x7F2BA454u: goto label_7F2BA454;
    case 0x7F2BA460u: goto label_7F2BA460;
    case 0x7F2BA470u: goto label_7F2BA470;
    case 0x7F2BA478u: goto label_7F2BA478;
    case 0x7F2BA484u: goto label_7F2BA484;
    case 0x7F2BA4B0u: goto label_7F2BA4B0;
    case 0x7F2BA558u: goto label_7F2BA558;
    case 0x7F2BA564u: goto label_7F2BA564;
    case 0x7F2BA598u: goto label_7F2BA598;
    case 0x7F2BA5ACu: goto label_7F2BA5AC;
    case 0x7F2BA5B8u: goto label_7F2BA5B8;
    case 0x7F2BA5C0u: goto label_7F2BA5C0;
    case 0x7F2BA5D8u: goto label_7F2BA5D8;
    case 0x7F2BA5E0u: goto label_7F2BA5E0;
    case 0x7F2BA628u: goto label_7F2BA628;
    case 0x7F2BA638u: goto label_7F2BA638;
    case 0x7F2BA64Cu: goto label_7F2BA64C;
    case 0x7F2BA684u: goto label_7F2BA684;
    case 0x7F2BA6D8u: goto label_7F2BA6D8;
    case 0x7F2BA6E0u: goto label_7F2BA6E0;
    case 0x7F2BA728u: goto label_7F2BA728;
    case 0x7F2BA73Cu: goto label_7F2BA73C;
    case 0x7F2BA748u: goto label_7F2BA748;
    case 0x7F2BA754u: goto label_7F2BA754;
    case 0x7F2BA764u: goto label_7F2BA764;
    case 0x7F2BA778u: goto label_7F2BA778;
    case 0x7F2BA7A4u: goto label_7F2BA7A4;
    case 0x7F2BA7C0u: goto label_7F2BA7C0;
    case 0x7F2BA820u: goto label_7F2BA820;
    case 0x7F2BA834u: goto label_7F2BA834;
    case 0x7F2BA844u: goto label_7F2BA844;
    case 0x7F2BA85Cu: goto label_7F2BA85C;
    case 0x7F2BA8A4u: goto label_7F2BA8A4;
    case 0x7F2BA8B8u: goto label_7F2BA8B8;
    case 0x7F2BA8C4u: goto label_7F2BA8C4;
    case 0x7F2BA8D0u: goto label_7F2BA8D0;
    case 0x7F2BA8E0u: goto label_7F2BA8E0;
    case 0x7F2BA8F4u: goto label_7F2BA8F4;
    case 0x7F2BA920u: goto label_7F2BA920;
    case 0x7F2BA93Cu: goto label_7F2BA93C;
    case 0x7F2BA978u: goto label_7F2BA978;
    case 0x7F2BA984u: goto label_7F2BA984;
    case 0x7F2BA98Cu: goto label_7F2BA98C;
    case 0x7F2BA998u: goto label_7F2BA998;
    case 0x7F2BA9A0u: goto label_7F2BA9A0;
    case 0x7F2BA9ACu: goto label_7F2BA9AC;
    case 0x7F2BA9B4u: goto label_7F2BA9B4;
    case 0x7F2BA9ECu: goto label_7F2BA9EC;
    case 0x7F2BAA24u: goto label_7F2BAA24;
    case 0x7F2BAA60u: goto label_7F2BAA60;
    case 0x7F2BAA74u: goto label_7F2BAA74;
    case 0x7F2BAA78u: goto label_7F2BAA78;
    case 0x7F2BAAB4u: goto label_7F2BAAB4;
    case 0x7F2BAAC4u: goto label_7F2BAAC4;
    case 0x7F2BAB38u: goto label_7F2BAB38;
    case 0x7F2BAB44u: goto label_7F2BAB44;
    case 0x7F2BAB4Cu: goto label_7F2BAB4C;
    case 0x7F2BAB54u: goto label_7F2BAB54;
    case 0x7F2BAB94u: goto label_7F2BAB94;
    case 0x7F2BABD0u: goto label_7F2BABD0;
    case 0x7F2BAC04u: goto label_7F2BAC04;
    case 0x7F2BAC50u: goto label_7F2BAC50;
    case 0x7F2BAC8Cu: goto label_7F2BAC8C;
    case 0x7F2BACC0u: goto label_7F2BACC0;
    case 0x7F2BAD0Cu: goto label_7F2BAD0C;
    case 0x7F2BAD54u: goto label_7F2BAD54;
    case 0x7F2BAD5Cu: goto label_7F2BAD5C;
    case 0x7F2BAD8Cu: goto label_7F2BAD8C;
    case 0x7F2BAE70u: goto label_7F2BAE70;
    case 0x7F2BAE8Cu: goto label_7F2BAE8C;
    case 0x7F2BAEA4u: goto label_7F2BAEA4;
    case 0x7F2BAEACu: goto label_7F2BAEAC;
    case 0x7F2BAEB4u: goto label_7F2BAEB4;
    case 0x7F2BAEBCu: goto label_7F2BAEBC;
    case 0x7F2BAECCu: goto label_7F2BAECC;
    case 0x7F2BAED8u: goto label_7F2BAED8;
    case 0x7F2BAEE0u: goto label_7F2BAEE0;
    case 0x7F2BAEECu: goto label_7F2BAEEC;
    case 0x7F2BAEF4u: goto label_7F2BAEF4;
    case 0x7F2BAEFCu: goto label_7F2BAEFC;
    case 0x7F2BAF08u: goto label_7F2BAF08;
    case 0x7F2BAF40u: goto label_7F2BAF40;
    case 0x7F2BAF44u: goto label_7F2BAF44;
    case 0x7F2BAF48u: goto label_7F2BAF48;
    case 0x7F2BAFE0u: goto label_7F2BAFE0;
    case 0x7F2BAFECu: goto label_7F2BAFEC;
    case 0x7F2BAFF8u: goto label_7F2BAFF8;
    case 0x7F2BB004u: goto label_7F2BB004;
    case 0x7F2BB024u: goto label_7F2BB024;
    case 0x7F2BB03Cu: goto label_7F2BB03C;
    case 0x7F2BB054u: goto label_7F2BB054;
    case 0x7F2BB070u: goto label_7F2BB070;
    case 0x7F2BB0D8u: goto label_7F2BB0D8;
    case 0x7F2BB0F4u: goto label_7F2BB0F4;
    case 0x7F2BB128u: goto label_7F2BB128;
    case 0x7F2BB138u: goto label_7F2BB138;
    case 0x7F2BB144u: goto label_7F2BB144;
    case 0x7F2BB148u: goto label_7F2BB148;
    case 0x7F2BB168u: goto label_7F2BB168;
    case 0x7F2BB174u: goto label_7F2BB174;
    case 0x7F2BB1C8u: goto label_7F2BB1C8;
    case 0x7F2BB1D4u: goto label_7F2BB1D4;
    case 0x7F2BB1E8u: goto label_7F2BB1E8;
    case 0x7F2BB1FCu: goto label_7F2BB1FC;
    case 0x7F2BB264u: goto label_7F2BB264;
    case 0x7F2BB27Cu: goto label_7F2BB27C;
    case 0x7F2BB2B8u: goto label_7F2BB2B8;
    case 0x7F2BB330u: goto label_7F2BB330;
    case 0x7F2BB344u: goto label_7F2BB344;
    case 0x7F2BB358u: goto label_7F2BB358;
    case 0x7F2BB380u: goto label_7F2BB380;
    case 0x7F2BB39Cu: goto label_7F2BB39C;
    case 0x7F2BB3B4u: goto label_7F2BB3B4;
    case 0x7F2BB428u: goto label_7F2BB428;
    case 0x7F2BB44Cu: goto label_7F2BB44C;
    case 0x7F2BB590u: goto label_7F2BB590;
    case 0x7F2BB5ACu: goto label_7F2BB5AC;
    case 0x7F2BB5D4u: goto label_7F2BB5D4;
    case 0x7F2BB5D8u: goto label_7F2BB5D8;
    case 0x7F2BB76Cu: goto label_7F2BB76C;
    case 0x7F2BB780u: goto label_7F2BB780;
    case 0x7F2BB7A0u: goto label_7F2BB7A0;
    case 0x7F2BB7ACu: goto label_7F2BB7AC;
    case 0x7F2BB818u: goto label_7F2BB818;
    case 0x7F2BB81Cu: goto label_7F2BB81C;
    case 0x7F2BBA08u: goto label_7F2BBA08;
    case 0x7F2BBA64u: goto label_7F2BBA64;
    case 0x7F2BBAD8u: goto label_7F2BBAD8;
    case 0x7F2BBB2Cu: goto label_7F2BBB2C;
    case 0x7F2BBB74u: goto label_7F2BBB74;
    case 0x7F2BBBBCu: goto label_7F2BBBBC;
    case 0x7F2BBC24u: goto label_7F2BBC24;
    case 0x7F2BBC3Cu: goto label_7F2BBC3C;
    case 0x7F2BBC50u: goto label_7F2BBC50;
    case 0x7F2BBC60u: goto label_7F2BBC60;
    case 0x7F2BBCF4u: goto label_7F2BBCF4;
    case 0x7F2BBD18u: goto label_7F2BBD18;
    case 0x7F2BBD40u: goto label_7F2BBD40;
    case 0x7F2BBD44u: goto label_7F2BBD44;
    case 0x7F2BBD50u: goto label_7F2BBD50;
    case 0x7F2BBD58u: goto label_7F2BBD58;
    case 0x7F2BBD64u: goto label_7F2BBD64;
    case 0x7F2BBD7Cu: goto label_7F2BBD7C;
    case 0x7F2BBDA8u: goto label_7F2BBDA8;
    case 0x7F2BBDACu: goto label_7F2BBDAC;
    case 0x7F2BBDB8u: goto label_7F2BBDB8;
    case 0x7F2BBDC0u: goto label_7F2BBDC0;
    case 0x7F2BBDCCu: goto label_7F2BBDCC;
    case 0x7F2BBDE4u: goto label_7F2BBDE4;
    case 0x7F2BBE24u: goto label_7F2BBE24;
    case 0x7F2BBE58u: goto label_7F2BBE58;
    case 0x7F2BBE70u: goto label_7F2BBE70;
    case 0x7F2BBE8Cu: goto label_7F2BBE8C;
    case 0x7F2BBEFCu: goto label_7F2BBEFC;
    case 0x7F2BBF00u: goto label_7F2BBF00;
    case 0x7F2BBF08u: goto label_7F2BBF08;
    case 0x7F2BBF10u: goto label_7F2BBF10;
    case 0x7F2BBF18u: goto label_7F2BBF18;
    case 0x7F2BBF20u: goto label_7F2BBF20;
    case 0x7F2BBF28u: goto label_7F2BBF28;
    case 0x7F2BBF30u: goto label_7F2BBF30;
    case 0x7F2BBF38u: goto label_7F2BBF38;
    case 0x7F2BBF40u: goto label_7F2BBF40;
    case 0x7F2BBF48u: goto label_7F2BBF48;
    case 0x7F2BBF50u: goto label_7F2BBF50;
    case 0x7F2BBF58u: goto label_7F2BBF58;
    case 0x7F2BBF60u: goto label_7F2BBF60;
    case 0x7F2BBF68u: goto label_7F2BBF68;
    case 0x7F2BBF70u: goto label_7F2BBF70;
    case 0x7F2BBF78u: goto label_7F2BBF78;
    case 0x7F2BBF80u: goto label_7F2BBF80;
    case 0x7F2BBF88u: goto label_7F2BBF88;
    case 0x7F2BBF94u: goto label_7F2BBF94;
    case 0x7F2BBFA8u: goto label_7F2BBFA8;
    case 0x7F2BBFB4u: goto label_7F2BBFB4;
    case 0x7F2BBFC8u: goto label_7F2BBFC8;
    case 0x7F2BBFD4u: goto label_7F2BBFD4;
    case 0x7F2BC01Cu: goto label_7F2BC01C;
    case 0x7F2BC034u: goto label_7F2BC034;
    case 0x7F2BC03Cu: goto label_7F2BC03C;
    case 0x7F2BC048u: goto label_7F2BC048;
    case 0x7F2BC060u: goto label_7F2BC060;
    case 0x7F2BC068u: goto label_7F2BC068;
    case 0x7F2BC0A4u: goto label_7F2BC0A4;
    case 0x7F2BC0D8u: goto label_7F2BC0D8;
    default: return;
    }
}

