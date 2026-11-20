// DolRecomp output
#include "../generated.h"

static void loop_7F1B92AC(CPUState* ctx) {
label_7F1B92AC:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1B92ACu;
    // 7F1B92AC: lwz     r4, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 7F1B92B0: addi    r0, r3, 672
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(672);

    // 7F1B92B4: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

    // 7F1B92B8: addi    r3, r3, 324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(324);

    ctx->pc = 0x7F1B92BCu;
    // 7F1B92BC: stwx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x7F1B92C0u;
    // 7F1B92C0: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1B92C4u;
    // 7F1B92C4: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1B92C8u;
    // 7F1B92C8: lha     r0, 92(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

    // 7F1B92CC: cmpw    r5, r0
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

    // 7F1B92D0: bc    12, 0, 0x7F1B92AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B92ACu;
                return;
            }
            goto label_7F1B92AC;
        }
    }

    ctx->pc = 0x7F1B92D4u;
}

static void loop_7F1B96E4(CPUState* ctx) {
label_7F1B96E4:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1B96E4u;
    // 7F1B96E4: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1B96E8u;
    // 7F1B96E8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1B96ECu;
    // 7F1B96EC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1B96F0u;
    // 7F1B96F0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1B96F4: bc    16, 0, 0x7F1B96E4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B96E4u;
                return;
            }
            goto label_7F1B96E4;
        }
    }

    ctx->pc = 0x7F1B96F8u;
}

static void loop_7F1B97F0(CPUState* ctx) {
label_7F1B97F0:
    ctx->downcount -= 5;
    ctx->pc = 0x7F1B97F0u;
    // 7F1B97F0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x7F1B97F4u;
    // 7F1B97F4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x7F1B97F8u;
    // 7F1B97F8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x7F1B97FCu;
    // 7F1B97FC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 7F1B9800: bc    16, 0, 0x7F1B97F0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B97F0u;
                return;
            }
            goto label_7F1B97F0;
        }
    }

    ctx->pc = 0x7F1B9804u;
}

void func_7F1B80EC(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x7F1B80ECu: goto label_7F1B80EC;
    case 0x7F1B80F0u: goto label_7F1B80F0;
    case 0x7F1B80F4u: goto label_7F1B80F4;
    case 0x7F1B80F8u: goto label_7F1B80F8;
    case 0x7F1B80FCu: goto label_7F1B80FC;
    case 0x7F1B8100u: goto label_7F1B8100;
    case 0x7F1B8104u: goto label_7F1B8104;
    case 0x7F1B8108u: goto label_7F1B8108;
    case 0x7F1B810Cu: goto label_7F1B810C;
    case 0x7F1B8110u: goto label_7F1B8110;
    case 0x7F1B8114u: goto label_7F1B8114;
    case 0x7F1B8118u: goto label_7F1B8118;
    case 0x7F1B811Cu: goto label_7F1B811C;
    case 0x7F1B8120u: goto label_7F1B8120;
    case 0x7F1B8124u: goto label_7F1B8124;
    case 0x7F1B8128u: goto label_7F1B8128;
    case 0x7F1B812Cu: goto label_7F1B812C;
    case 0x7F1B8130u: goto label_7F1B8130;
    case 0x7F1B8134u: goto label_7F1B8134;
    case 0x7F1B8138u: goto label_7F1B8138;
    case 0x7F1B813Cu: goto label_7F1B813C;
    case 0x7F1B8140u: goto label_7F1B8140;
    case 0x7F1B8144u: goto label_7F1B8144;
    case 0x7F1B8148u: goto label_7F1B8148;
    case 0x7F1B814Cu: goto label_7F1B814C;
    case 0x7F1B8150u: goto label_7F1B8150;
    case 0x7F1B8154u: goto label_7F1B8154;
    case 0x7F1B8158u: goto label_7F1B8158;
    case 0x7F1B815Cu: goto label_7F1B815C;
    case 0x7F1B8160u: goto label_7F1B8160;
    case 0x7F1B8164u: goto label_7F1B8164;
    case 0x7F1B8168u: goto label_7F1B8168;
    case 0x7F1B816Cu: goto label_7F1B816C;
    case 0x7F1B8170u: goto label_7F1B8170;
    case 0x7F1B8174u: goto label_7F1B8174;
    case 0x7F1B8178u: goto label_7F1B8178;
    case 0x7F1B817Cu: goto label_7F1B817C;
    case 0x7F1B8180u: goto label_7F1B8180;
    case 0x7F1B8184u: goto label_7F1B8184;
    case 0x7F1B8188u: goto label_7F1B8188;
    case 0x7F1B818Cu: goto label_7F1B818C;
    case 0x7F1B8190u: goto label_7F1B8190;
    case 0x7F1B8194u: goto label_7F1B8194;
    case 0x7F1B8198u: goto label_7F1B8198;
    case 0x7F1B819Cu: goto label_7F1B819C;
    case 0x7F1B81A0u: goto label_7F1B81A0;
    case 0x7F1B81A4u: goto label_7F1B81A4;
    case 0x7F1B81A8u: goto label_7F1B81A8;
    case 0x7F1B81ACu: goto label_7F1B81AC;
    case 0x7F1B81B0u: goto label_7F1B81B0;
    case 0x7F1B81B4u: goto label_7F1B81B4;
    case 0x7F1B81B8u: goto label_7F1B81B8;
    case 0x7F1B81BCu: goto label_7F1B81BC;
    case 0x7F1B81C0u: goto label_7F1B81C0;
    case 0x7F1B81C4u: goto label_7F1B81C4;
    case 0x7F1B81C8u: goto label_7F1B81C8;
    case 0x7F1B81CCu: goto label_7F1B81CC;
    case 0x7F1B81D0u: goto label_7F1B81D0;
    case 0x7F1B81D4u: goto label_7F1B81D4;
    case 0x7F1B81D8u: goto label_7F1B81D8;
    case 0x7F1B81DCu: goto label_7F1B81DC;
    case 0x7F1B81E0u: goto label_7F1B81E0;
    case 0x7F1B81E4u: goto label_7F1B81E4;
    case 0x7F1B81E8u: goto label_7F1B81E8;
    case 0x7F1B81ECu: goto label_7F1B81EC;
    case 0x7F1B81F0u: goto label_7F1B81F0;
    case 0x7F1B81F4u: goto label_7F1B81F4;
    case 0x7F1B81F8u: goto label_7F1B81F8;
    case 0x7F1B81FCu: goto label_7F1B81FC;
    case 0x7F1B8200u: goto label_7F1B8200;
    case 0x7F1B8204u: goto label_7F1B8204;
    case 0x7F1B8208u: goto label_7F1B8208;
    case 0x7F1B820Cu: goto label_7F1B820C;
    case 0x7F1B8210u: goto label_7F1B8210;
    case 0x7F1B8214u: goto label_7F1B8214;
    case 0x7F1B8218u: goto label_7F1B8218;
    case 0x7F1B821Cu: goto label_7F1B821C;
    case 0x7F1B8220u: goto label_7F1B8220;
    case 0x7F1B8224u: goto label_7F1B8224;
    case 0x7F1B8228u: goto label_7F1B8228;
    case 0x7F1B822Cu: goto label_7F1B822C;
    case 0x7F1B8230u: goto label_7F1B8230;
    case 0x7F1B8234u: goto label_7F1B8234;
    case 0x7F1B8238u: goto label_7F1B8238;
    case 0x7F1B823Cu: goto label_7F1B823C;
    case 0x7F1B8240u: goto label_7F1B8240;
    case 0x7F1B8244u: goto label_7F1B8244;
    case 0x7F1B8248u: goto label_7F1B8248;
    case 0x7F1B824Cu: goto label_7F1B824C;
    case 0x7F1B8250u: goto label_7F1B8250;
    case 0x7F1B8254u: goto label_7F1B8254;
    case 0x7F1B8258u: goto label_7F1B8258;
    case 0x7F1B825Cu: goto label_7F1B825C;
    case 0x7F1B8260u: goto label_7F1B8260;
    case 0x7F1B8264u: goto label_7F1B8264;
    case 0x7F1B8268u: goto label_7F1B8268;
    case 0x7F1B826Cu: goto label_7F1B826C;
    case 0x7F1B8270u: goto label_7F1B8270;
    case 0x7F1B8274u: goto label_7F1B8274;
    case 0x7F1B8278u: goto label_7F1B8278;
    case 0x7F1B827Cu: goto label_7F1B827C;
    case 0x7F1B8280u: goto label_7F1B8280;
    case 0x7F1B8284u: goto label_7F1B8284;
    case 0x7F1B8288u: goto label_7F1B8288;
    case 0x7F1B828Cu: goto label_7F1B828C;
    case 0x7F1B8290u: goto label_7F1B8290;
    case 0x7F1B8294u: goto label_7F1B8294;
    case 0x7F1B8298u: goto label_7F1B8298;
    case 0x7F1B829Cu: goto label_7F1B829C;
    case 0x7F1B82A0u: goto label_7F1B82A0;
    case 0x7F1B82A4u: goto label_7F1B82A4;
    case 0x7F1B82A8u: goto label_7F1B82A8;
    case 0x7F1B82ACu: goto label_7F1B82AC;
    case 0x7F1B82B0u: goto label_7F1B82B0;
    case 0x7F1B82B4u: goto label_7F1B82B4;
    case 0x7F1B82B8u: goto label_7F1B82B8;
    case 0x7F1B82BCu: goto label_7F1B82BC;
    case 0x7F1B82C0u: goto label_7F1B82C0;
    case 0x7F1B82C4u: goto label_7F1B82C4;
    case 0x7F1B82C8u: goto label_7F1B82C8;
    case 0x7F1B82CCu: goto label_7F1B82CC;
    case 0x7F1B82D0u: goto label_7F1B82D0;
    case 0x7F1B82D4u: goto label_7F1B82D4;
    case 0x7F1B82D8u: goto label_7F1B82D8;
    case 0x7F1B82DCu: goto label_7F1B82DC;
    case 0x7F1B82E0u: goto label_7F1B82E0;
    case 0x7F1B82E4u: goto label_7F1B82E4;
    case 0x7F1B82E8u: goto label_7F1B82E8;
    case 0x7F1B82ECu: goto label_7F1B82EC;
    case 0x7F1B82F0u: goto label_7F1B82F0;
    case 0x7F1B82F4u: goto label_7F1B82F4;
    case 0x7F1B82F8u: goto label_7F1B82F8;
    case 0x7F1B82FCu: goto label_7F1B82FC;
    case 0x7F1B8300u: goto label_7F1B8300;
    case 0x7F1B8304u: goto label_7F1B8304;
    case 0x7F1B8308u: goto label_7F1B8308;
    case 0x7F1B830Cu: goto label_7F1B830C;
    case 0x7F1B8310u: goto label_7F1B8310;
    case 0x7F1B8314u: goto label_7F1B8314;
    case 0x7F1B8318u: goto label_7F1B8318;
    case 0x7F1B831Cu: goto label_7F1B831C;
    case 0x7F1B8320u: goto label_7F1B8320;
    case 0x7F1B8324u: goto label_7F1B8324;
    case 0x7F1B8328u: goto label_7F1B8328;
    case 0x7F1B832Cu: goto label_7F1B832C;
    case 0x7F1B8330u: goto label_7F1B8330;
    case 0x7F1B8334u: goto label_7F1B8334;
    case 0x7F1B8338u: goto label_7F1B8338;
    case 0x7F1B833Cu: goto label_7F1B833C;
    case 0x7F1B8340u: goto label_7F1B8340;
    case 0x7F1B8344u: goto label_7F1B8344;
    case 0x7F1B8348u: goto label_7F1B8348;
    case 0x7F1B834Cu: goto label_7F1B834C;
    case 0x7F1B8350u: goto label_7F1B8350;
    case 0x7F1B8354u: goto label_7F1B8354;
    case 0x7F1B8358u: goto label_7F1B8358;
    case 0x7F1B835Cu: goto label_7F1B835C;
    case 0x7F1B8360u: goto label_7F1B8360;
    case 0x7F1B8364u: goto label_7F1B8364;
    case 0x7F1B8368u: goto label_7F1B8368;
    case 0x7F1B836Cu: goto label_7F1B836C;
    case 0x7F1B8370u: goto label_7F1B8370;
    case 0x7F1B8374u: goto label_7F1B8374;
    case 0x7F1B8378u: goto label_7F1B8378;
    case 0x7F1B837Cu: goto label_7F1B837C;
    case 0x7F1B8380u: goto label_7F1B8380;
    case 0x7F1B8384u: goto label_7F1B8384;
    case 0x7F1B8388u: goto label_7F1B8388;
    case 0x7F1B838Cu: goto label_7F1B838C;
    case 0x7F1B8390u: goto label_7F1B8390;
    case 0x7F1B8394u: goto label_7F1B8394;
    case 0x7F1B8398u: goto label_7F1B8398;
    case 0x7F1B839Cu: goto label_7F1B839C;
    case 0x7F1B83A0u: goto label_7F1B83A0;
    case 0x7F1B83A4u: goto label_7F1B83A4;
    case 0x7F1B83A8u: goto label_7F1B83A8;
    case 0x7F1B83ACu: goto label_7F1B83AC;
    case 0x7F1B83B0u: goto label_7F1B83B0;
    case 0x7F1B83B4u: goto label_7F1B83B4;
    case 0x7F1B83B8u: goto label_7F1B83B8;
    case 0x7F1B83BCu: goto label_7F1B83BC;
    case 0x7F1B83C0u: goto label_7F1B83C0;
    case 0x7F1B83C4u: goto label_7F1B83C4;
    case 0x7F1B83C8u: goto label_7F1B83C8;
    case 0x7F1B83CCu: goto label_7F1B83CC;
    case 0x7F1B83D0u: goto label_7F1B83D0;
    case 0x7F1B83D4u: goto label_7F1B83D4;
    case 0x7F1B83D8u: goto label_7F1B83D8;
    case 0x7F1B83DCu: goto label_7F1B83DC;
    case 0x7F1B83E0u: goto label_7F1B83E0;
    case 0x7F1B83E4u: goto label_7F1B83E4;
    case 0x7F1B83E8u: goto label_7F1B83E8;
    case 0x7F1B83ECu: goto label_7F1B83EC;
    case 0x7F1B83F0u: goto label_7F1B83F0;
    case 0x7F1B83F4u: goto label_7F1B83F4;
    case 0x7F1B83F8u: goto label_7F1B83F8;
    case 0x7F1B83FCu: goto label_7F1B83FC;
    case 0x7F1B8400u: goto label_7F1B8400;
    case 0x7F1B8404u: goto label_7F1B8404;
    case 0x7F1B8408u: goto label_7F1B8408;
    case 0x7F1B840Cu: goto label_7F1B840C;
    case 0x7F1B8410u: goto label_7F1B8410;
    case 0x7F1B8414u: goto label_7F1B8414;
    case 0x7F1B8418u: goto label_7F1B8418;
    case 0x7F1B841Cu: goto label_7F1B841C;
    case 0x7F1B8420u: goto label_7F1B8420;
    case 0x7F1B8424u: goto label_7F1B8424;
    case 0x7F1B8428u: goto label_7F1B8428;
    case 0x7F1B842Cu: goto label_7F1B842C;
    case 0x7F1B8430u: goto label_7F1B8430;
    case 0x7F1B8434u: goto label_7F1B8434;
    case 0x7F1B8438u: goto label_7F1B8438;
    case 0x7F1B843Cu: goto label_7F1B843C;
    case 0x7F1B8440u: goto label_7F1B8440;
    case 0x7F1B8444u: goto label_7F1B8444;
    case 0x7F1B8448u: goto label_7F1B8448;
    case 0x7F1B844Cu: goto label_7F1B844C;
    case 0x7F1B8450u: goto label_7F1B8450;
    case 0x7F1B8454u: goto label_7F1B8454;
    case 0x7F1B8458u: goto label_7F1B8458;
    case 0x7F1B845Cu: goto label_7F1B845C;
    case 0x7F1B8460u: goto label_7F1B8460;
    case 0x7F1B8464u: goto label_7F1B8464;
    case 0x7F1B8468u: goto label_7F1B8468;
    case 0x7F1B846Cu: goto label_7F1B846C;
    case 0x7F1B8470u: goto label_7F1B8470;
    case 0x7F1B8474u: goto label_7F1B8474;
    case 0x7F1B8478u: goto label_7F1B8478;
    case 0x7F1B847Cu: goto label_7F1B847C;
    case 0x7F1B8480u: goto label_7F1B8480;
    case 0x7F1B8484u: goto label_7F1B8484;
    case 0x7F1B8488u: goto label_7F1B8488;
    case 0x7F1B848Cu: goto label_7F1B848C;
    case 0x7F1B8490u: goto label_7F1B8490;
    case 0x7F1B8494u: goto label_7F1B8494;
    case 0x7F1B8498u: goto label_7F1B8498;
    case 0x7F1B849Cu: goto label_7F1B849C;
    case 0x7F1B84A0u: goto label_7F1B84A0;
    case 0x7F1B84A4u: goto label_7F1B84A4;
    case 0x7F1B84A8u: goto label_7F1B84A8;
    case 0x7F1B84ACu: goto label_7F1B84AC;
    case 0x7F1B84B0u: goto label_7F1B84B0;
    case 0x7F1B84B4u: goto label_7F1B84B4;
    case 0x7F1B84B8u: goto label_7F1B84B8;
    case 0x7F1B84BCu: goto label_7F1B84BC;
    case 0x7F1B84C0u: goto label_7F1B84C0;
    case 0x7F1B84C4u: goto label_7F1B84C4;
    case 0x7F1B84C8u: goto label_7F1B84C8;
    case 0x7F1B84CCu: goto label_7F1B84CC;
    case 0x7F1B84D0u: goto label_7F1B84D0;
    case 0x7F1B84D4u: goto label_7F1B84D4;
    case 0x7F1B84D8u: goto label_7F1B84D8;
    case 0x7F1B84DCu: goto label_7F1B84DC;
    case 0x7F1B84E0u: goto label_7F1B84E0;
    case 0x7F1B84E4u: goto label_7F1B84E4;
    case 0x7F1B84E8u: goto label_7F1B84E8;
    case 0x7F1B84ECu: goto label_7F1B84EC;
    case 0x7F1B84F0u: goto label_7F1B84F0;
    case 0x7F1B84F4u: goto label_7F1B84F4;
    case 0x7F1B84F8u: goto label_7F1B84F8;
    case 0x7F1B84FCu: goto label_7F1B84FC;
    case 0x7F1B8500u: goto label_7F1B8500;
    case 0x7F1B8504u: goto label_7F1B8504;
    case 0x7F1B8508u: goto label_7F1B8508;
    case 0x7F1B850Cu: goto label_7F1B850C;
    case 0x7F1B8510u: goto label_7F1B8510;
    case 0x7F1B8514u: goto label_7F1B8514;
    case 0x7F1B8518u: goto label_7F1B8518;
    case 0x7F1B851Cu: goto label_7F1B851C;
    case 0x7F1B8520u: goto label_7F1B8520;
    case 0x7F1B8524u: goto label_7F1B8524;
    case 0x7F1B8528u: goto label_7F1B8528;
    case 0x7F1B852Cu: goto label_7F1B852C;
    case 0x7F1B8530u: goto label_7F1B8530;
    case 0x7F1B8534u: goto label_7F1B8534;
    case 0x7F1B8538u: goto label_7F1B8538;
    case 0x7F1B853Cu: goto label_7F1B853C;
    case 0x7F1B8540u: goto label_7F1B8540;
    case 0x7F1B8544u: goto label_7F1B8544;
    case 0x7F1B8548u: goto label_7F1B8548;
    case 0x7F1B854Cu: goto label_7F1B854C;
    case 0x7F1B8550u: goto label_7F1B8550;
    case 0x7F1B8554u: goto label_7F1B8554;
    case 0x7F1B8558u: goto label_7F1B8558;
    case 0x7F1B855Cu: goto label_7F1B855C;
    case 0x7F1B8560u: goto label_7F1B8560;
    case 0x7F1B8564u: goto label_7F1B8564;
    case 0x7F1B8568u: goto label_7F1B8568;
    case 0x7F1B856Cu: goto label_7F1B856C;
    case 0x7F1B8570u: goto label_7F1B8570;
    case 0x7F1B8574u: goto label_7F1B8574;
    case 0x7F1B8578u: goto label_7F1B8578;
    case 0x7F1B857Cu: goto label_7F1B857C;
    case 0x7F1B8580u: goto label_7F1B8580;
    case 0x7F1B8584u: goto label_7F1B8584;
    case 0x7F1B8588u: goto label_7F1B8588;
    case 0x7F1B858Cu: goto label_7F1B858C;
    case 0x7F1B8590u: goto label_7F1B8590;
    case 0x7F1B8594u: goto label_7F1B8594;
    case 0x7F1B8598u: goto label_7F1B8598;
    case 0x7F1B859Cu: goto label_7F1B859C;
    case 0x7F1B85A0u: goto label_7F1B85A0;
    case 0x7F1B85A4u: goto label_7F1B85A4;
    case 0x7F1B85A8u: goto label_7F1B85A8;
    case 0x7F1B85ACu: goto label_7F1B85AC;
    case 0x7F1B85B0u: goto label_7F1B85B0;
    case 0x7F1B85B4u: goto label_7F1B85B4;
    case 0x7F1B85B8u: goto label_7F1B85B8;
    case 0x7F1B85BCu: goto label_7F1B85BC;
    case 0x7F1B85C0u: goto label_7F1B85C0;
    case 0x7F1B85C4u: goto label_7F1B85C4;
    case 0x7F1B85C8u: goto label_7F1B85C8;
    case 0x7F1B85CCu: goto label_7F1B85CC;
    case 0x7F1B85D0u: goto label_7F1B85D0;
    case 0x7F1B85D4u: goto label_7F1B85D4;
    case 0x7F1B85D8u: goto label_7F1B85D8;
    case 0x7F1B85DCu: goto label_7F1B85DC;
    case 0x7F1B85E0u: goto label_7F1B85E0;
    case 0x7F1B85E4u: goto label_7F1B85E4;
    case 0x7F1B85E8u: goto label_7F1B85E8;
    case 0x7F1B85ECu: goto label_7F1B85EC;
    case 0x7F1B85F0u: goto label_7F1B85F0;
    case 0x7F1B85F4u: goto label_7F1B85F4;
    case 0x7F1B85F8u: goto label_7F1B85F8;
    case 0x7F1B85FCu: goto label_7F1B85FC;
    case 0x7F1B8600u: goto label_7F1B8600;
    case 0x7F1B8604u: goto label_7F1B8604;
    case 0x7F1B8608u: goto label_7F1B8608;
    case 0x7F1B860Cu: goto label_7F1B860C;
    case 0x7F1B8610u: goto label_7F1B8610;
    case 0x7F1B8614u: goto label_7F1B8614;
    case 0x7F1B8618u: goto label_7F1B8618;
    case 0x7F1B861Cu: goto label_7F1B861C;
    case 0x7F1B8620u: goto label_7F1B8620;
    case 0x7F1B8624u: goto label_7F1B8624;
    case 0x7F1B8628u: goto label_7F1B8628;
    case 0x7F1B862Cu: goto label_7F1B862C;
    case 0x7F1B8630u: goto label_7F1B8630;
    case 0x7F1B8634u: goto label_7F1B8634;
    case 0x7F1B8638u: goto label_7F1B8638;
    case 0x7F1B863Cu: goto label_7F1B863C;
    case 0x7F1B8640u: goto label_7F1B8640;
    case 0x7F1B8644u: goto label_7F1B8644;
    case 0x7F1B8648u: goto label_7F1B8648;
    case 0x7F1B864Cu: goto label_7F1B864C;
    case 0x7F1B8650u: goto label_7F1B8650;
    case 0x7F1B8654u: goto label_7F1B8654;
    case 0x7F1B8658u: goto label_7F1B8658;
    case 0x7F1B865Cu: goto label_7F1B865C;
    case 0x7F1B8660u: goto label_7F1B8660;
    case 0x7F1B8664u: goto label_7F1B8664;
    case 0x7F1B8668u: goto label_7F1B8668;
    case 0x7F1B866Cu: goto label_7F1B866C;
    case 0x7F1B8670u: goto label_7F1B8670;
    case 0x7F1B8674u: goto label_7F1B8674;
    case 0x7F1B8678u: goto label_7F1B8678;
    case 0x7F1B867Cu: goto label_7F1B867C;
    case 0x7F1B8680u: goto label_7F1B8680;
    case 0x7F1B8684u: goto label_7F1B8684;
    case 0x7F1B8688u: goto label_7F1B8688;
    case 0x7F1B868Cu: goto label_7F1B868C;
    case 0x7F1B8690u: goto label_7F1B8690;
    case 0x7F1B8694u: goto label_7F1B8694;
    case 0x7F1B8698u: goto label_7F1B8698;
    case 0x7F1B869Cu: goto label_7F1B869C;
    case 0x7F1B86A0u: goto label_7F1B86A0;
    case 0x7F1B86A4u: goto label_7F1B86A4;
    case 0x7F1B86A8u: goto label_7F1B86A8;
    case 0x7F1B86ACu: goto label_7F1B86AC;
    case 0x7F1B86B0u: goto label_7F1B86B0;
    case 0x7F1B86B4u: goto label_7F1B86B4;
    case 0x7F1B86B8u: goto label_7F1B86B8;
    case 0x7F1B86BCu: goto label_7F1B86BC;
    case 0x7F1B86C0u: goto label_7F1B86C0;
    case 0x7F1B86C4u: goto label_7F1B86C4;
    case 0x7F1B86C8u: goto label_7F1B86C8;
    case 0x7F1B86CCu: goto label_7F1B86CC;
    case 0x7F1B86D0u: goto label_7F1B86D0;
    case 0x7F1B86D4u: goto label_7F1B86D4;
    case 0x7F1B86D8u: goto label_7F1B86D8;
    case 0x7F1B86DCu: goto label_7F1B86DC;
    case 0x7F1B86E0u: goto label_7F1B86E0;
    case 0x7F1B86E4u: goto label_7F1B86E4;
    case 0x7F1B86E8u: goto label_7F1B86E8;
    case 0x7F1B86ECu: goto label_7F1B86EC;
    case 0x7F1B86F0u: goto label_7F1B86F0;
    case 0x7F1B86F4u: goto label_7F1B86F4;
    case 0x7F1B86F8u: goto label_7F1B86F8;
    case 0x7F1B86FCu: goto label_7F1B86FC;
    case 0x7F1B8700u: goto label_7F1B8700;
    case 0x7F1B8704u: goto label_7F1B8704;
    case 0x7F1B8708u: goto label_7F1B8708;
    case 0x7F1B870Cu: goto label_7F1B870C;
    case 0x7F1B8710u: goto label_7F1B8710;
    case 0x7F1B8714u: goto label_7F1B8714;
    case 0x7F1B8718u: goto label_7F1B8718;
    case 0x7F1B871Cu: goto label_7F1B871C;
    case 0x7F1B8720u: goto label_7F1B8720;
    case 0x7F1B8724u: goto label_7F1B8724;
    case 0x7F1B8728u: goto label_7F1B8728;
    case 0x7F1B872Cu: goto label_7F1B872C;
    case 0x7F1B8730u: goto label_7F1B8730;
    case 0x7F1B8734u: goto label_7F1B8734;
    case 0x7F1B8738u: goto label_7F1B8738;
    case 0x7F1B873Cu: goto label_7F1B873C;
    case 0x7F1B8740u: goto label_7F1B8740;
    case 0x7F1B8744u: goto label_7F1B8744;
    case 0x7F1B8748u: goto label_7F1B8748;
    case 0x7F1B874Cu: goto label_7F1B874C;
    case 0x7F1B8750u: goto label_7F1B8750;
    case 0x7F1B8754u: goto label_7F1B8754;
    case 0x7F1B8758u: goto label_7F1B8758;
    case 0x7F1B875Cu: goto label_7F1B875C;
    case 0x7F1B8760u: goto label_7F1B8760;
    case 0x7F1B8764u: goto label_7F1B8764;
    case 0x7F1B8768u: goto label_7F1B8768;
    case 0x7F1B876Cu: goto label_7F1B876C;
    case 0x7F1B8770u: goto label_7F1B8770;
    case 0x7F1B8774u: goto label_7F1B8774;
    case 0x7F1B8778u: goto label_7F1B8778;
    case 0x7F1B877Cu: goto label_7F1B877C;
    case 0x7F1B8780u: goto label_7F1B8780;
    case 0x7F1B8784u: goto label_7F1B8784;
    case 0x7F1B8788u: goto label_7F1B8788;
    case 0x7F1B878Cu: goto label_7F1B878C;
    case 0x7F1B8790u: goto label_7F1B8790;
    case 0x7F1B8794u: goto label_7F1B8794;
    case 0x7F1B8798u: goto label_7F1B8798;
    case 0x7F1B879Cu: goto label_7F1B879C;
    case 0x7F1B87A0u: goto label_7F1B87A0;
    case 0x7F1B87A4u: goto label_7F1B87A4;
    case 0x7F1B87A8u: goto label_7F1B87A8;
    case 0x7F1B87ACu: goto label_7F1B87AC;
    case 0x7F1B87B0u: goto label_7F1B87B0;
    case 0x7F1B87B4u: goto label_7F1B87B4;
    case 0x7F1B87B8u: goto label_7F1B87B8;
    case 0x7F1B87BCu: goto label_7F1B87BC;
    case 0x7F1B87C0u: goto label_7F1B87C0;
    case 0x7F1B87C4u: goto label_7F1B87C4;
    case 0x7F1B87C8u: goto label_7F1B87C8;
    case 0x7F1B87CCu: goto label_7F1B87CC;
    case 0x7F1B87D0u: goto label_7F1B87D0;
    case 0x7F1B87D4u: goto label_7F1B87D4;
    case 0x7F1B87D8u: goto label_7F1B87D8;
    case 0x7F1B87DCu: goto label_7F1B87DC;
    case 0x7F1B87E0u: goto label_7F1B87E0;
    case 0x7F1B87E4u: goto label_7F1B87E4;
    case 0x7F1B87E8u: goto label_7F1B87E8;
    case 0x7F1B87ECu: goto label_7F1B87EC;
    case 0x7F1B87F0u: goto label_7F1B87F0;
    case 0x7F1B87F4u: goto label_7F1B87F4;
    case 0x7F1B87F8u: goto label_7F1B87F8;
    case 0x7F1B87FCu: goto label_7F1B87FC;
    case 0x7F1B8800u: goto label_7F1B8800;
    case 0x7F1B8804u: goto label_7F1B8804;
    case 0x7F1B8808u: goto label_7F1B8808;
    case 0x7F1B880Cu: goto label_7F1B880C;
    case 0x7F1B8810u: goto label_7F1B8810;
    case 0x7F1B8814u: goto label_7F1B8814;
    case 0x7F1B8818u: goto label_7F1B8818;
    case 0x7F1B881Cu: goto label_7F1B881C;
    case 0x7F1B8820u: goto label_7F1B8820;
    case 0x7F1B8824u: goto label_7F1B8824;
    case 0x7F1B8828u: goto label_7F1B8828;
    case 0x7F1B882Cu: goto label_7F1B882C;
    case 0x7F1B8830u: goto label_7F1B8830;
    case 0x7F1B8834u: goto label_7F1B8834;
    case 0x7F1B8838u: goto label_7F1B8838;
    case 0x7F1B883Cu: goto label_7F1B883C;
    case 0x7F1B8840u: goto label_7F1B8840;
    case 0x7F1B8844u: goto label_7F1B8844;
    case 0x7F1B8848u: goto label_7F1B8848;
    case 0x7F1B884Cu: goto label_7F1B884C;
    case 0x7F1B8850u: goto label_7F1B8850;
    case 0x7F1B8854u: goto label_7F1B8854;
    case 0x7F1B8858u: goto label_7F1B8858;
    case 0x7F1B885Cu: goto label_7F1B885C;
    case 0x7F1B8860u: goto label_7F1B8860;
    case 0x7F1B8864u: goto label_7F1B8864;
    case 0x7F1B8868u: goto label_7F1B8868;
    case 0x7F1B886Cu: goto label_7F1B886C;
    case 0x7F1B8870u: goto label_7F1B8870;
    case 0x7F1B8874u: goto label_7F1B8874;
    case 0x7F1B8878u: goto label_7F1B8878;
    case 0x7F1B887Cu: goto label_7F1B887C;
    case 0x7F1B8880u: goto label_7F1B8880;
    case 0x7F1B8884u: goto label_7F1B8884;
    case 0x7F1B8888u: goto label_7F1B8888;
    case 0x7F1B888Cu: goto label_7F1B888C;
    case 0x7F1B8890u: goto label_7F1B8890;
    case 0x7F1B8894u: goto label_7F1B8894;
    case 0x7F1B8898u: goto label_7F1B8898;
    case 0x7F1B889Cu: goto label_7F1B889C;
    case 0x7F1B88A0u: goto label_7F1B88A0;
    case 0x7F1B88A4u: goto label_7F1B88A4;
    case 0x7F1B88A8u: goto label_7F1B88A8;
    case 0x7F1B88ACu: goto label_7F1B88AC;
    case 0x7F1B88B0u: goto label_7F1B88B0;
    case 0x7F1B88B4u: goto label_7F1B88B4;
    case 0x7F1B88B8u: goto label_7F1B88B8;
    case 0x7F1B88BCu: goto label_7F1B88BC;
    case 0x7F1B88C0u: goto label_7F1B88C0;
    case 0x7F1B88C4u: goto label_7F1B88C4;
    case 0x7F1B88C8u: goto label_7F1B88C8;
    case 0x7F1B88CCu: goto label_7F1B88CC;
    case 0x7F1B88D0u: goto label_7F1B88D0;
    case 0x7F1B88D4u: goto label_7F1B88D4;
    case 0x7F1B88D8u: goto label_7F1B88D8;
    case 0x7F1B88DCu: goto label_7F1B88DC;
    case 0x7F1B88E0u: goto label_7F1B88E0;
    case 0x7F1B88E4u: goto label_7F1B88E4;
    case 0x7F1B88E8u: goto label_7F1B88E8;
    case 0x7F1B88ECu: goto label_7F1B88EC;
    case 0x7F1B88F0u: goto label_7F1B88F0;
    case 0x7F1B88F4u: goto label_7F1B88F4;
    case 0x7F1B88F8u: goto label_7F1B88F8;
    case 0x7F1B88FCu: goto label_7F1B88FC;
    case 0x7F1B8900u: goto label_7F1B8900;
    case 0x7F1B8904u: goto label_7F1B8904;
    case 0x7F1B8908u: goto label_7F1B8908;
    case 0x7F1B890Cu: goto label_7F1B890C;
    case 0x7F1B8910u: goto label_7F1B8910;
    case 0x7F1B8914u: goto label_7F1B8914;
    case 0x7F1B8918u: goto label_7F1B8918;
    case 0x7F1B891Cu: goto label_7F1B891C;
    case 0x7F1B8920u: goto label_7F1B8920;
    case 0x7F1B8924u: goto label_7F1B8924;
    case 0x7F1B8928u: goto label_7F1B8928;
    case 0x7F1B892Cu: goto label_7F1B892C;
    case 0x7F1B8930u: goto label_7F1B8930;
    case 0x7F1B8934u: goto label_7F1B8934;
    case 0x7F1B8938u: goto label_7F1B8938;
    case 0x7F1B893Cu: goto label_7F1B893C;
    case 0x7F1B8940u: goto label_7F1B8940;
    case 0x7F1B8944u: goto label_7F1B8944;
    case 0x7F1B8948u: goto label_7F1B8948;
    case 0x7F1B894Cu: goto label_7F1B894C;
    case 0x7F1B8950u: goto label_7F1B8950;
    case 0x7F1B8954u: goto label_7F1B8954;
    case 0x7F1B8958u: goto label_7F1B8958;
    case 0x7F1B895Cu: goto label_7F1B895C;
    case 0x7F1B8960u: goto label_7F1B8960;
    case 0x7F1B8964u: goto label_7F1B8964;
    case 0x7F1B8968u: goto label_7F1B8968;
    case 0x7F1B896Cu: goto label_7F1B896C;
    case 0x7F1B8970u: goto label_7F1B8970;
    case 0x7F1B8974u: goto label_7F1B8974;
    case 0x7F1B8978u: goto label_7F1B8978;
    case 0x7F1B897Cu: goto label_7F1B897C;
    case 0x7F1B8980u: goto label_7F1B8980;
    case 0x7F1B8984u: goto label_7F1B8984;
    case 0x7F1B8988u: goto label_7F1B8988;
    case 0x7F1B898Cu: goto label_7F1B898C;
    case 0x7F1B8990u: goto label_7F1B8990;
    case 0x7F1B8994u: goto label_7F1B8994;
    case 0x7F1B8998u: goto label_7F1B8998;
    case 0x7F1B899Cu: goto label_7F1B899C;
    case 0x7F1B89A0u: goto label_7F1B89A0;
    case 0x7F1B89A4u: goto label_7F1B89A4;
    case 0x7F1B89A8u: goto label_7F1B89A8;
    case 0x7F1B89ACu: goto label_7F1B89AC;
    case 0x7F1B89B0u: goto label_7F1B89B0;
    case 0x7F1B89B4u: goto label_7F1B89B4;
    case 0x7F1B89B8u: goto label_7F1B89B8;
    case 0x7F1B89BCu: goto label_7F1B89BC;
    case 0x7F1B89C0u: goto label_7F1B89C0;
    case 0x7F1B89C4u: goto label_7F1B89C4;
    case 0x7F1B89C8u: goto label_7F1B89C8;
    case 0x7F1B89CCu: goto label_7F1B89CC;
    case 0x7F1B89D0u: goto label_7F1B89D0;
    case 0x7F1B89D4u: goto label_7F1B89D4;
    case 0x7F1B89D8u: goto label_7F1B89D8;
    case 0x7F1B89DCu: goto label_7F1B89DC;
    case 0x7F1B89E0u: goto label_7F1B89E0;
    case 0x7F1B89E4u: goto label_7F1B89E4;
    case 0x7F1B89E8u: goto label_7F1B89E8;
    case 0x7F1B89ECu: goto label_7F1B89EC;
    case 0x7F1B89F0u: goto label_7F1B89F0;
    case 0x7F1B89F4u: goto label_7F1B89F4;
    case 0x7F1B89F8u: goto label_7F1B89F8;
    case 0x7F1B89FCu: goto label_7F1B89FC;
    case 0x7F1B8A00u: goto label_7F1B8A00;
    case 0x7F1B8A04u: goto label_7F1B8A04;
    case 0x7F1B8A08u: goto label_7F1B8A08;
    case 0x7F1B8A0Cu: goto label_7F1B8A0C;
    case 0x7F1B8A10u: goto label_7F1B8A10;
    case 0x7F1B8A14u: goto label_7F1B8A14;
    case 0x7F1B8A18u: goto label_7F1B8A18;
    case 0x7F1B8A1Cu: goto label_7F1B8A1C;
    case 0x7F1B8A20u: goto label_7F1B8A20;
    case 0x7F1B8A24u: goto label_7F1B8A24;
    case 0x7F1B8A28u: goto label_7F1B8A28;
    case 0x7F1B8A2Cu: goto label_7F1B8A2C;
    case 0x7F1B8A30u: goto label_7F1B8A30;
    case 0x7F1B8A34u: goto label_7F1B8A34;
    case 0x7F1B8A38u: goto label_7F1B8A38;
    case 0x7F1B8A3Cu: goto label_7F1B8A3C;
    case 0x7F1B8A40u: goto label_7F1B8A40;
    case 0x7F1B8A44u: goto label_7F1B8A44;
    case 0x7F1B8A48u: goto label_7F1B8A48;
    case 0x7F1B8A4Cu: goto label_7F1B8A4C;
    case 0x7F1B8A50u: goto label_7F1B8A50;
    case 0x7F1B8A54u: goto label_7F1B8A54;
    case 0x7F1B8A58u: goto label_7F1B8A58;
    case 0x7F1B8A5Cu: goto label_7F1B8A5C;
    case 0x7F1B8A60u: goto label_7F1B8A60;
    case 0x7F1B8A64u: goto label_7F1B8A64;
    case 0x7F1B8A68u: goto label_7F1B8A68;
    case 0x7F1B8A6Cu: goto label_7F1B8A6C;
    case 0x7F1B8A70u: goto label_7F1B8A70;
    case 0x7F1B8A74u: goto label_7F1B8A74;
    case 0x7F1B8A78u: goto label_7F1B8A78;
    case 0x7F1B8A7Cu: goto label_7F1B8A7C;
    case 0x7F1B8A80u: goto label_7F1B8A80;
    case 0x7F1B8A84u: goto label_7F1B8A84;
    case 0x7F1B8A88u: goto label_7F1B8A88;
    case 0x7F1B8A8Cu: goto label_7F1B8A8C;
    case 0x7F1B8A90u: goto label_7F1B8A90;
    case 0x7F1B8A94u: goto label_7F1B8A94;
    case 0x7F1B8A98u: goto label_7F1B8A98;
    case 0x7F1B8A9Cu: goto label_7F1B8A9C;
    case 0x7F1B8AA0u: goto label_7F1B8AA0;
    case 0x7F1B8AA4u: goto label_7F1B8AA4;
    case 0x7F1B8AA8u: goto label_7F1B8AA8;
    case 0x7F1B8AACu: goto label_7F1B8AAC;
    case 0x7F1B8AB0u: goto label_7F1B8AB0;
    case 0x7F1B8AB4u: goto label_7F1B8AB4;
    case 0x7F1B8AB8u: goto label_7F1B8AB8;
    case 0x7F1B8ABCu: goto label_7F1B8ABC;
    case 0x7F1B8AC0u: goto label_7F1B8AC0;
    case 0x7F1B8AC4u: goto label_7F1B8AC4;
    case 0x7F1B8AC8u: goto label_7F1B8AC8;
    case 0x7F1B8ACCu: goto label_7F1B8ACC;
    case 0x7F1B8AD0u: goto label_7F1B8AD0;
    case 0x7F1B8AD4u: goto label_7F1B8AD4;
    case 0x7F1B8AD8u: goto label_7F1B8AD8;
    case 0x7F1B8ADCu: goto label_7F1B8ADC;
    case 0x7F1B8AE0u: goto label_7F1B8AE0;
    case 0x7F1B8AE4u: goto label_7F1B8AE4;
    case 0x7F1B8AE8u: goto label_7F1B8AE8;
    case 0x7F1B8AECu: goto label_7F1B8AEC;
    case 0x7F1B8AF0u: goto label_7F1B8AF0;
    case 0x7F1B8AF4u: goto label_7F1B8AF4;
    case 0x7F1B8AF8u: goto label_7F1B8AF8;
    case 0x7F1B8AFCu: goto label_7F1B8AFC;
    case 0x7F1B8B00u: goto label_7F1B8B00;
    case 0x7F1B8B04u: goto label_7F1B8B04;
    case 0x7F1B8B08u: goto label_7F1B8B08;
    case 0x7F1B8B0Cu: goto label_7F1B8B0C;
    case 0x7F1B8B10u: goto label_7F1B8B10;
    case 0x7F1B8B14u: goto label_7F1B8B14;
    case 0x7F1B8B18u: goto label_7F1B8B18;
    case 0x7F1B8B1Cu: goto label_7F1B8B1C;
    case 0x7F1B8B20u: goto label_7F1B8B20;
    case 0x7F1B8B24u: goto label_7F1B8B24;
    case 0x7F1B8B28u: goto label_7F1B8B28;
    case 0x7F1B8B2Cu: goto label_7F1B8B2C;
    case 0x7F1B8B30u: goto label_7F1B8B30;
    case 0x7F1B8B34u: goto label_7F1B8B34;
    case 0x7F1B8B38u: goto label_7F1B8B38;
    case 0x7F1B8B3Cu: goto label_7F1B8B3C;
    case 0x7F1B8B40u: goto label_7F1B8B40;
    case 0x7F1B8B44u: goto label_7F1B8B44;
    case 0x7F1B8B48u: goto label_7F1B8B48;
    case 0x7F1B8B4Cu: goto label_7F1B8B4C;
    case 0x7F1B8B50u: goto label_7F1B8B50;
    case 0x7F1B8B54u: goto label_7F1B8B54;
    case 0x7F1B8B58u: goto label_7F1B8B58;
    case 0x7F1B8B5Cu: goto label_7F1B8B5C;
    case 0x7F1B8B60u: goto label_7F1B8B60;
    case 0x7F1B8B64u: goto label_7F1B8B64;
    case 0x7F1B8B68u: goto label_7F1B8B68;
    case 0x7F1B8B6Cu: goto label_7F1B8B6C;
    case 0x7F1B8B70u: goto label_7F1B8B70;
    case 0x7F1B8B74u: goto label_7F1B8B74;
    case 0x7F1B8B78u: goto label_7F1B8B78;
    case 0x7F1B8B7Cu: goto label_7F1B8B7C;
    case 0x7F1B8B80u: goto label_7F1B8B80;
    case 0x7F1B8B84u: goto label_7F1B8B84;
    case 0x7F1B8B88u: goto label_7F1B8B88;
    case 0x7F1B8B8Cu: goto label_7F1B8B8C;
    case 0x7F1B8B90u: goto label_7F1B8B90;
    case 0x7F1B8B94u: goto label_7F1B8B94;
    case 0x7F1B8B98u: goto label_7F1B8B98;
    case 0x7F1B8B9Cu: goto label_7F1B8B9C;
    case 0x7F1B8BA0u: goto label_7F1B8BA0;
    case 0x7F1B8BA4u: goto label_7F1B8BA4;
    case 0x7F1B8BA8u: goto label_7F1B8BA8;
    case 0x7F1B8BACu: goto label_7F1B8BAC;
    case 0x7F1B8BB0u: goto label_7F1B8BB0;
    case 0x7F1B8BB4u: goto label_7F1B8BB4;
    case 0x7F1B8BB8u: goto label_7F1B8BB8;
    case 0x7F1B8BBCu: goto label_7F1B8BBC;
    case 0x7F1B8BC0u: goto label_7F1B8BC0;
    case 0x7F1B8BC4u: goto label_7F1B8BC4;
    case 0x7F1B8BC8u: goto label_7F1B8BC8;
    case 0x7F1B8BCCu: goto label_7F1B8BCC;
    case 0x7F1B8BD0u: goto label_7F1B8BD0;
    case 0x7F1B8BD4u: goto label_7F1B8BD4;
    case 0x7F1B8BD8u: goto label_7F1B8BD8;
    case 0x7F1B8BDCu: goto label_7F1B8BDC;
    case 0x7F1B8BE0u: goto label_7F1B8BE0;
    case 0x7F1B8BE4u: goto label_7F1B8BE4;
    case 0x7F1B8BE8u: goto label_7F1B8BE8;
    case 0x7F1B8BECu: goto label_7F1B8BEC;
    case 0x7F1B8BF0u: goto label_7F1B8BF0;
    case 0x7F1B8BF4u: goto label_7F1B8BF4;
    case 0x7F1B8BF8u: goto label_7F1B8BF8;
    case 0x7F1B8BFCu: goto label_7F1B8BFC;
    case 0x7F1B8C00u: goto label_7F1B8C00;
    case 0x7F1B8C04u: goto label_7F1B8C04;
    case 0x7F1B8C08u: goto label_7F1B8C08;
    case 0x7F1B8C0Cu: goto label_7F1B8C0C;
    case 0x7F1B8C10u: goto label_7F1B8C10;
    case 0x7F1B8C14u: goto label_7F1B8C14;
    case 0x7F1B8C18u: goto label_7F1B8C18;
    case 0x7F1B8C1Cu: goto label_7F1B8C1C;
    case 0x7F1B8C20u: goto label_7F1B8C20;
    case 0x7F1B8C24u: goto label_7F1B8C24;
    case 0x7F1B8C28u: goto label_7F1B8C28;
    case 0x7F1B8C2Cu: goto label_7F1B8C2C;
    case 0x7F1B8C30u: goto label_7F1B8C30;
    case 0x7F1B8C34u: goto label_7F1B8C34;
    case 0x7F1B8C38u: goto label_7F1B8C38;
    case 0x7F1B8C3Cu: goto label_7F1B8C3C;
    case 0x7F1B8C40u: goto label_7F1B8C40;
    case 0x7F1B8C44u: goto label_7F1B8C44;
    case 0x7F1B8C48u: goto label_7F1B8C48;
    case 0x7F1B8C4Cu: goto label_7F1B8C4C;
    case 0x7F1B8C50u: goto label_7F1B8C50;
    case 0x7F1B8C54u: goto label_7F1B8C54;
    case 0x7F1B8C58u: goto label_7F1B8C58;
    case 0x7F1B8C5Cu: goto label_7F1B8C5C;
    case 0x7F1B8C60u: goto label_7F1B8C60;
    case 0x7F1B8C64u: goto label_7F1B8C64;
    case 0x7F1B8C68u: goto label_7F1B8C68;
    case 0x7F1B8C6Cu: goto label_7F1B8C6C;
    case 0x7F1B8C70u: goto label_7F1B8C70;
    case 0x7F1B8C74u: goto label_7F1B8C74;
    case 0x7F1B8C78u: goto label_7F1B8C78;
    case 0x7F1B8C7Cu: goto label_7F1B8C7C;
    case 0x7F1B8C80u: goto label_7F1B8C80;
    case 0x7F1B8C84u: goto label_7F1B8C84;
    case 0x7F1B8C88u: goto label_7F1B8C88;
    case 0x7F1B8C8Cu: goto label_7F1B8C8C;
    case 0x7F1B8C90u: goto label_7F1B8C90;
    case 0x7F1B8C94u: goto label_7F1B8C94;
    case 0x7F1B8C98u: goto label_7F1B8C98;
    case 0x7F1B8C9Cu: goto label_7F1B8C9C;
    case 0x7F1B8CA0u: goto label_7F1B8CA0;
    case 0x7F1B8CA4u: goto label_7F1B8CA4;
    case 0x7F1B8CA8u: goto label_7F1B8CA8;
    case 0x7F1B8CACu: goto label_7F1B8CAC;
    case 0x7F1B8CB0u: goto label_7F1B8CB0;
    case 0x7F1B8CB4u: goto label_7F1B8CB4;
    case 0x7F1B8CB8u: goto label_7F1B8CB8;
    case 0x7F1B8CBCu: goto label_7F1B8CBC;
    case 0x7F1B8CC0u: goto label_7F1B8CC0;
    case 0x7F1B8CC4u: goto label_7F1B8CC4;
    case 0x7F1B8CC8u: goto label_7F1B8CC8;
    case 0x7F1B8CCCu: goto label_7F1B8CCC;
    case 0x7F1B8CD0u: goto label_7F1B8CD0;
    case 0x7F1B8CD4u: goto label_7F1B8CD4;
    case 0x7F1B8CD8u: goto label_7F1B8CD8;
    case 0x7F1B8CDCu: goto label_7F1B8CDC;
    case 0x7F1B8CE0u: goto label_7F1B8CE0;
    case 0x7F1B8CE4u: goto label_7F1B8CE4;
    case 0x7F1B8CE8u: goto label_7F1B8CE8;
    case 0x7F1B8CECu: goto label_7F1B8CEC;
    case 0x7F1B8CF0u: goto label_7F1B8CF0;
    case 0x7F1B8CF4u: goto label_7F1B8CF4;
    case 0x7F1B8CF8u: goto label_7F1B8CF8;
    case 0x7F1B8CFCu: goto label_7F1B8CFC;
    case 0x7F1B8D00u: goto label_7F1B8D00;
    case 0x7F1B8D04u: goto label_7F1B8D04;
    case 0x7F1B8D08u: goto label_7F1B8D08;
    case 0x7F1B8D0Cu: goto label_7F1B8D0C;
    case 0x7F1B8D10u: goto label_7F1B8D10;
    case 0x7F1B8D14u: goto label_7F1B8D14;
    case 0x7F1B8D18u: goto label_7F1B8D18;
    case 0x7F1B8D1Cu: goto label_7F1B8D1C;
    case 0x7F1B8D20u: goto label_7F1B8D20;
    case 0x7F1B8D24u: goto label_7F1B8D24;
    case 0x7F1B8D28u: goto label_7F1B8D28;
    case 0x7F1B8D2Cu: goto label_7F1B8D2C;
    case 0x7F1B8D30u: goto label_7F1B8D30;
    case 0x7F1B8D34u: goto label_7F1B8D34;
    case 0x7F1B8D38u: goto label_7F1B8D38;
    case 0x7F1B8D3Cu: goto label_7F1B8D3C;
    case 0x7F1B8D40u: goto label_7F1B8D40;
    case 0x7F1B8D44u: goto label_7F1B8D44;
    case 0x7F1B8D48u: goto label_7F1B8D48;
    case 0x7F1B8D4Cu: goto label_7F1B8D4C;
    case 0x7F1B8D50u: goto label_7F1B8D50;
    case 0x7F1B8D54u: goto label_7F1B8D54;
    case 0x7F1B8D58u: goto label_7F1B8D58;
    case 0x7F1B8D5Cu: goto label_7F1B8D5C;
    case 0x7F1B8D60u: goto label_7F1B8D60;
    case 0x7F1B8D64u: goto label_7F1B8D64;
    case 0x7F1B8D68u: goto label_7F1B8D68;
    case 0x7F1B8D6Cu: goto label_7F1B8D6C;
    case 0x7F1B8D70u: goto label_7F1B8D70;
    case 0x7F1B8D74u: goto label_7F1B8D74;
    case 0x7F1B8D78u: goto label_7F1B8D78;
    case 0x7F1B8D7Cu: goto label_7F1B8D7C;
    case 0x7F1B8D80u: goto label_7F1B8D80;
    case 0x7F1B8D84u: goto label_7F1B8D84;
    case 0x7F1B8D88u: goto label_7F1B8D88;
    case 0x7F1B8D8Cu: goto label_7F1B8D8C;
    case 0x7F1B8D90u: goto label_7F1B8D90;
    case 0x7F1B8D94u: goto label_7F1B8D94;
    case 0x7F1B8D98u: goto label_7F1B8D98;
    case 0x7F1B8D9Cu: goto label_7F1B8D9C;
    case 0x7F1B8DA0u: goto label_7F1B8DA0;
    case 0x7F1B8DA4u: goto label_7F1B8DA4;
    case 0x7F1B8DA8u: goto label_7F1B8DA8;
    case 0x7F1B8DACu: goto label_7F1B8DAC;
    case 0x7F1B8DB0u: goto label_7F1B8DB0;
    case 0x7F1B8DB4u: goto label_7F1B8DB4;
    case 0x7F1B8DB8u: goto label_7F1B8DB8;
    case 0x7F1B8DBCu: goto label_7F1B8DBC;
    case 0x7F1B8DC0u: goto label_7F1B8DC0;
    case 0x7F1B8DC4u: goto label_7F1B8DC4;
    case 0x7F1B8DC8u: goto label_7F1B8DC8;
    case 0x7F1B8DCCu: goto label_7F1B8DCC;
    case 0x7F1B8DD0u: goto label_7F1B8DD0;
    case 0x7F1B8DD4u: goto label_7F1B8DD4;
    case 0x7F1B8DD8u: goto label_7F1B8DD8;
    case 0x7F1B8DDCu: goto label_7F1B8DDC;
    case 0x7F1B8DE0u: goto label_7F1B8DE0;
    case 0x7F1B8DE4u: goto label_7F1B8DE4;
    case 0x7F1B8DE8u: goto label_7F1B8DE8;
    case 0x7F1B8DECu: goto label_7F1B8DEC;
    case 0x7F1B8DF0u: goto label_7F1B8DF0;
    case 0x7F1B8DF4u: goto label_7F1B8DF4;
    case 0x7F1B8DF8u: goto label_7F1B8DF8;
    case 0x7F1B8DFCu: goto label_7F1B8DFC;
    case 0x7F1B8E00u: goto label_7F1B8E00;
    case 0x7F1B8E04u: goto label_7F1B8E04;
    case 0x7F1B8E08u: goto label_7F1B8E08;
    case 0x7F1B8E0Cu: goto label_7F1B8E0C;
    case 0x7F1B8E10u: goto label_7F1B8E10;
    case 0x7F1B8E14u: goto label_7F1B8E14;
    case 0x7F1B8E18u: goto label_7F1B8E18;
    case 0x7F1B8E1Cu: goto label_7F1B8E1C;
    case 0x7F1B8E20u: goto label_7F1B8E20;
    case 0x7F1B8E24u: goto label_7F1B8E24;
    case 0x7F1B8E28u: goto label_7F1B8E28;
    case 0x7F1B8E2Cu: goto label_7F1B8E2C;
    case 0x7F1B8E30u: goto label_7F1B8E30;
    case 0x7F1B8E34u: goto label_7F1B8E34;
    case 0x7F1B8E38u: goto label_7F1B8E38;
    case 0x7F1B8E3Cu: goto label_7F1B8E3C;
    case 0x7F1B8E40u: goto label_7F1B8E40;
    case 0x7F1B8E44u: goto label_7F1B8E44;
    case 0x7F1B8E48u: goto label_7F1B8E48;
    case 0x7F1B8E4Cu: goto label_7F1B8E4C;
    case 0x7F1B8E50u: goto label_7F1B8E50;
    case 0x7F1B8E54u: goto label_7F1B8E54;
    case 0x7F1B8E58u: goto label_7F1B8E58;
    case 0x7F1B8E5Cu: goto label_7F1B8E5C;
    case 0x7F1B8E60u: goto label_7F1B8E60;
    case 0x7F1B8E64u: goto label_7F1B8E64;
    case 0x7F1B8E68u: goto label_7F1B8E68;
    case 0x7F1B8E6Cu: goto label_7F1B8E6C;
    case 0x7F1B8E70u: goto label_7F1B8E70;
    case 0x7F1B8E74u: goto label_7F1B8E74;
    case 0x7F1B8E78u: goto label_7F1B8E78;
    case 0x7F1B8E7Cu: goto label_7F1B8E7C;
    case 0x7F1B8E80u: goto label_7F1B8E80;
    case 0x7F1B8E84u: goto label_7F1B8E84;
    case 0x7F1B8E88u: goto label_7F1B8E88;
    case 0x7F1B8E8Cu: goto label_7F1B8E8C;
    case 0x7F1B8E90u: goto label_7F1B8E90;
    case 0x7F1B8E94u: goto label_7F1B8E94;
    case 0x7F1B8E98u: goto label_7F1B8E98;
    case 0x7F1B8E9Cu: goto label_7F1B8E9C;
    case 0x7F1B8EA0u: goto label_7F1B8EA0;
    case 0x7F1B8EA4u: goto label_7F1B8EA4;
    case 0x7F1B8EA8u: goto label_7F1B8EA8;
    case 0x7F1B8EACu: goto label_7F1B8EAC;
    case 0x7F1B8EB0u: goto label_7F1B8EB0;
    case 0x7F1B8EB4u: goto label_7F1B8EB4;
    case 0x7F1B8EB8u: goto label_7F1B8EB8;
    case 0x7F1B8EBCu: goto label_7F1B8EBC;
    case 0x7F1B8EC0u: goto label_7F1B8EC0;
    case 0x7F1B8EC4u: goto label_7F1B8EC4;
    case 0x7F1B8EC8u: goto label_7F1B8EC8;
    case 0x7F1B8ECCu: goto label_7F1B8ECC;
    case 0x7F1B8ED0u: goto label_7F1B8ED0;
    case 0x7F1B8ED4u: goto label_7F1B8ED4;
    case 0x7F1B8ED8u: goto label_7F1B8ED8;
    case 0x7F1B8EDCu: goto label_7F1B8EDC;
    case 0x7F1B8EE0u: goto label_7F1B8EE0;
    case 0x7F1B8EE4u: goto label_7F1B8EE4;
    case 0x7F1B8EE8u: goto label_7F1B8EE8;
    case 0x7F1B8EECu: goto label_7F1B8EEC;
    case 0x7F1B8EF0u: goto label_7F1B8EF0;
    case 0x7F1B8EF4u: goto label_7F1B8EF4;
    case 0x7F1B8EF8u: goto label_7F1B8EF8;
    case 0x7F1B8EFCu: goto label_7F1B8EFC;
    case 0x7F1B8F00u: goto label_7F1B8F00;
    case 0x7F1B8F04u: goto label_7F1B8F04;
    case 0x7F1B8F08u: goto label_7F1B8F08;
    case 0x7F1B8F0Cu: goto label_7F1B8F0C;
    case 0x7F1B8F10u: goto label_7F1B8F10;
    case 0x7F1B8F14u: goto label_7F1B8F14;
    case 0x7F1B8F18u: goto label_7F1B8F18;
    case 0x7F1B8F1Cu: goto label_7F1B8F1C;
    case 0x7F1B8F20u: goto label_7F1B8F20;
    case 0x7F1B8F24u: goto label_7F1B8F24;
    case 0x7F1B8F28u: goto label_7F1B8F28;
    case 0x7F1B8F2Cu: goto label_7F1B8F2C;
    case 0x7F1B8F30u: goto label_7F1B8F30;
    case 0x7F1B8F34u: goto label_7F1B8F34;
    case 0x7F1B8F38u: goto label_7F1B8F38;
    case 0x7F1B8F3Cu: goto label_7F1B8F3C;
    case 0x7F1B8F40u: goto label_7F1B8F40;
    case 0x7F1B8F44u: goto label_7F1B8F44;
    case 0x7F1B8F48u: goto label_7F1B8F48;
    case 0x7F1B8F4Cu: goto label_7F1B8F4C;
    case 0x7F1B8F50u: goto label_7F1B8F50;
    case 0x7F1B8F54u: goto label_7F1B8F54;
    case 0x7F1B8F58u: goto label_7F1B8F58;
    case 0x7F1B8F5Cu: goto label_7F1B8F5C;
    case 0x7F1B8F60u: goto label_7F1B8F60;
    case 0x7F1B8F64u: goto label_7F1B8F64;
    case 0x7F1B8F68u: goto label_7F1B8F68;
    case 0x7F1B8F6Cu: goto label_7F1B8F6C;
    case 0x7F1B8F70u: goto label_7F1B8F70;
    case 0x7F1B8F74u: goto label_7F1B8F74;
    case 0x7F1B8F78u: goto label_7F1B8F78;
    case 0x7F1B8F7Cu: goto label_7F1B8F7C;
    case 0x7F1B8F80u: goto label_7F1B8F80;
    case 0x7F1B8F84u: goto label_7F1B8F84;
    case 0x7F1B8F88u: goto label_7F1B8F88;
    case 0x7F1B8F8Cu: goto label_7F1B8F8C;
    case 0x7F1B8F90u: goto label_7F1B8F90;
    case 0x7F1B8F94u: goto label_7F1B8F94;
    case 0x7F1B8F98u: goto label_7F1B8F98;
    case 0x7F1B8F9Cu: goto label_7F1B8F9C;
    case 0x7F1B8FA0u: goto label_7F1B8FA0;
    case 0x7F1B8FA4u: goto label_7F1B8FA4;
    case 0x7F1B8FA8u: goto label_7F1B8FA8;
    case 0x7F1B8FACu: goto label_7F1B8FAC;
    case 0x7F1B8FB0u: goto label_7F1B8FB0;
    case 0x7F1B8FB4u: goto label_7F1B8FB4;
    case 0x7F1B8FB8u: goto label_7F1B8FB8;
    case 0x7F1B8FBCu: goto label_7F1B8FBC;
    case 0x7F1B8FC0u: goto label_7F1B8FC0;
    case 0x7F1B8FC4u: goto label_7F1B8FC4;
    case 0x7F1B8FC8u: goto label_7F1B8FC8;
    case 0x7F1B8FCCu: goto label_7F1B8FCC;
    case 0x7F1B8FD0u: goto label_7F1B8FD0;
    case 0x7F1B8FD4u: goto label_7F1B8FD4;
    case 0x7F1B8FD8u: goto label_7F1B8FD8;
    case 0x7F1B8FDCu: goto label_7F1B8FDC;
    case 0x7F1B8FE0u: goto label_7F1B8FE0;
    case 0x7F1B8FE4u: goto label_7F1B8FE4;
    case 0x7F1B8FE8u: goto label_7F1B8FE8;
    case 0x7F1B8FECu: goto label_7F1B8FEC;
    case 0x7F1B8FF0u: goto label_7F1B8FF0;
    case 0x7F1B8FF4u: goto label_7F1B8FF4;
    case 0x7F1B8FF8u: goto label_7F1B8FF8;
    case 0x7F1B8FFCu: goto label_7F1B8FFC;
    case 0x7F1B9000u: goto label_7F1B9000;
    case 0x7F1B9004u: goto label_7F1B9004;
    case 0x7F1B9008u: goto label_7F1B9008;
    case 0x7F1B900Cu: goto label_7F1B900C;
    case 0x7F1B9010u: goto label_7F1B9010;
    case 0x7F1B9014u: goto label_7F1B9014;
    case 0x7F1B9018u: goto label_7F1B9018;
    case 0x7F1B901Cu: goto label_7F1B901C;
    case 0x7F1B9020u: goto label_7F1B9020;
    case 0x7F1B9024u: goto label_7F1B9024;
    case 0x7F1B9028u: goto label_7F1B9028;
    case 0x7F1B902Cu: goto label_7F1B902C;
    case 0x7F1B9030u: goto label_7F1B9030;
    case 0x7F1B9034u: goto label_7F1B9034;
    case 0x7F1B9038u: goto label_7F1B9038;
    case 0x7F1B903Cu: goto label_7F1B903C;
    case 0x7F1B9040u: goto label_7F1B9040;
    case 0x7F1B9044u: goto label_7F1B9044;
    case 0x7F1B9048u: goto label_7F1B9048;
    case 0x7F1B904Cu: goto label_7F1B904C;
    case 0x7F1B9050u: goto label_7F1B9050;
    case 0x7F1B9054u: goto label_7F1B9054;
    case 0x7F1B9058u: goto label_7F1B9058;
    case 0x7F1B905Cu: goto label_7F1B905C;
    case 0x7F1B9060u: goto label_7F1B9060;
    case 0x7F1B9064u: goto label_7F1B9064;
    case 0x7F1B9068u: goto label_7F1B9068;
    case 0x7F1B906Cu: goto label_7F1B906C;
    case 0x7F1B9070u: goto label_7F1B9070;
    case 0x7F1B9074u: goto label_7F1B9074;
    case 0x7F1B9078u: goto label_7F1B9078;
    case 0x7F1B907Cu: goto label_7F1B907C;
    case 0x7F1B9080u: goto label_7F1B9080;
    case 0x7F1B9084u: goto label_7F1B9084;
    case 0x7F1B9088u: goto label_7F1B9088;
    case 0x7F1B908Cu: goto label_7F1B908C;
    case 0x7F1B9090u: goto label_7F1B9090;
    case 0x7F1B9094u: goto label_7F1B9094;
    case 0x7F1B9098u: goto label_7F1B9098;
    case 0x7F1B909Cu: goto label_7F1B909C;
    case 0x7F1B90A0u: goto label_7F1B90A0;
    case 0x7F1B90A4u: goto label_7F1B90A4;
    case 0x7F1B90A8u: goto label_7F1B90A8;
    case 0x7F1B90ACu: goto label_7F1B90AC;
    case 0x7F1B90B0u: goto label_7F1B90B0;
    case 0x7F1B90B4u: goto label_7F1B90B4;
    case 0x7F1B90B8u: goto label_7F1B90B8;
    case 0x7F1B90BCu: goto label_7F1B90BC;
    case 0x7F1B90C0u: goto label_7F1B90C0;
    case 0x7F1B90C4u: goto label_7F1B90C4;
    case 0x7F1B90C8u: goto label_7F1B90C8;
    case 0x7F1B90CCu: goto label_7F1B90CC;
    case 0x7F1B90D0u: goto label_7F1B90D0;
    case 0x7F1B90D4u: goto label_7F1B90D4;
    case 0x7F1B90D8u: goto label_7F1B90D8;
    case 0x7F1B90DCu: goto label_7F1B90DC;
    case 0x7F1B90E0u: goto label_7F1B90E0;
    case 0x7F1B90E4u: goto label_7F1B90E4;
    case 0x7F1B90E8u: goto label_7F1B90E8;
    case 0x7F1B90ECu: goto label_7F1B90EC;
    case 0x7F1B90F0u: goto label_7F1B90F0;
    case 0x7F1B90F4u: goto label_7F1B90F4;
    case 0x7F1B90F8u: goto label_7F1B90F8;
    case 0x7F1B90FCu: goto label_7F1B90FC;
    case 0x7F1B9100u: goto label_7F1B9100;
    case 0x7F1B9104u: goto label_7F1B9104;
    case 0x7F1B9108u: goto label_7F1B9108;
    case 0x7F1B910Cu: goto label_7F1B910C;
    case 0x7F1B9110u: goto label_7F1B9110;
    case 0x7F1B9114u: goto label_7F1B9114;
    case 0x7F1B9118u: goto label_7F1B9118;
    case 0x7F1B911Cu: goto label_7F1B911C;
    case 0x7F1B9120u: goto label_7F1B9120;
    case 0x7F1B9124u: goto label_7F1B9124;
    case 0x7F1B9128u: goto label_7F1B9128;
    case 0x7F1B912Cu: goto label_7F1B912C;
    case 0x7F1B9130u: goto label_7F1B9130;
    case 0x7F1B9134u: goto label_7F1B9134;
    case 0x7F1B9138u: goto label_7F1B9138;
    case 0x7F1B913Cu: goto label_7F1B913C;
    case 0x7F1B9140u: goto label_7F1B9140;
    case 0x7F1B9144u: goto label_7F1B9144;
    case 0x7F1B9148u: goto label_7F1B9148;
    case 0x7F1B914Cu: goto label_7F1B914C;
    case 0x7F1B9150u: goto label_7F1B9150;
    case 0x7F1B9154u: goto label_7F1B9154;
    case 0x7F1B9158u: goto label_7F1B9158;
    case 0x7F1B915Cu: goto label_7F1B915C;
    case 0x7F1B9160u: goto label_7F1B9160;
    case 0x7F1B9164u: goto label_7F1B9164;
    case 0x7F1B9168u: goto label_7F1B9168;
    case 0x7F1B916Cu: goto label_7F1B916C;
    case 0x7F1B9170u: goto label_7F1B9170;
    case 0x7F1B9174u: goto label_7F1B9174;
    case 0x7F1B9178u: goto label_7F1B9178;
    case 0x7F1B917Cu: goto label_7F1B917C;
    case 0x7F1B9180u: goto label_7F1B9180;
    case 0x7F1B9184u: goto label_7F1B9184;
    case 0x7F1B9188u: goto label_7F1B9188;
    case 0x7F1B918Cu: goto label_7F1B918C;
    case 0x7F1B9190u: goto label_7F1B9190;
    case 0x7F1B9194u: goto label_7F1B9194;
    case 0x7F1B9198u: goto label_7F1B9198;
    case 0x7F1B919Cu: goto label_7F1B919C;
    case 0x7F1B91A0u: goto label_7F1B91A0;
    case 0x7F1B91A4u: goto label_7F1B91A4;
    case 0x7F1B91A8u: goto label_7F1B91A8;
    case 0x7F1B91ACu: goto label_7F1B91AC;
    case 0x7F1B91B0u: goto label_7F1B91B0;
    case 0x7F1B91B4u: goto label_7F1B91B4;
    case 0x7F1B91B8u: goto label_7F1B91B8;
    case 0x7F1B91BCu: goto label_7F1B91BC;
    case 0x7F1B91C0u: goto label_7F1B91C0;
    case 0x7F1B91C4u: goto label_7F1B91C4;
    case 0x7F1B91C8u: goto label_7F1B91C8;
    case 0x7F1B91CCu: goto label_7F1B91CC;
    case 0x7F1B91D0u: goto label_7F1B91D0;
    case 0x7F1B91D4u: goto label_7F1B91D4;
    case 0x7F1B91D8u: goto label_7F1B91D8;
    case 0x7F1B91DCu: goto label_7F1B91DC;
    case 0x7F1B91E0u: goto label_7F1B91E0;
    case 0x7F1B91E4u: goto label_7F1B91E4;
    case 0x7F1B91E8u: goto label_7F1B91E8;
    case 0x7F1B91ECu: goto label_7F1B91EC;
    case 0x7F1B91F0u: goto label_7F1B91F0;
    case 0x7F1B91F4u: goto label_7F1B91F4;
    case 0x7F1B91F8u: goto label_7F1B91F8;
    case 0x7F1B91FCu: goto label_7F1B91FC;
    case 0x7F1B9200u: goto label_7F1B9200;
    case 0x7F1B9204u: goto label_7F1B9204;
    case 0x7F1B9208u: goto label_7F1B9208;
    case 0x7F1B920Cu: goto label_7F1B920C;
    case 0x7F1B9210u: goto label_7F1B9210;
    case 0x7F1B9214u: goto label_7F1B9214;
    case 0x7F1B9218u: goto label_7F1B9218;
    case 0x7F1B921Cu: goto label_7F1B921C;
    case 0x7F1B9220u: goto label_7F1B9220;
    case 0x7F1B9224u: goto label_7F1B9224;
    case 0x7F1B9228u: goto label_7F1B9228;
    case 0x7F1B922Cu: goto label_7F1B922C;
    case 0x7F1B9230u: goto label_7F1B9230;
    case 0x7F1B9234u: goto label_7F1B9234;
    case 0x7F1B9238u: goto label_7F1B9238;
    case 0x7F1B923Cu: goto label_7F1B923C;
    case 0x7F1B9240u: goto label_7F1B9240;
    case 0x7F1B9244u: goto label_7F1B9244;
    case 0x7F1B9248u: goto label_7F1B9248;
    case 0x7F1B924Cu: goto label_7F1B924C;
    case 0x7F1B9250u: goto label_7F1B9250;
    case 0x7F1B9254u: goto label_7F1B9254;
    case 0x7F1B9258u: goto label_7F1B9258;
    case 0x7F1B925Cu: goto label_7F1B925C;
    case 0x7F1B9260u: goto label_7F1B9260;
    case 0x7F1B9264u: goto label_7F1B9264;
    case 0x7F1B9268u: goto label_7F1B9268;
    case 0x7F1B926Cu: goto label_7F1B926C;
    case 0x7F1B9270u: goto label_7F1B9270;
    case 0x7F1B9274u: goto label_7F1B9274;
    case 0x7F1B9278u: goto label_7F1B9278;
    case 0x7F1B927Cu: goto label_7F1B927C;
    case 0x7F1B9280u: goto label_7F1B9280;
    case 0x7F1B9284u: goto label_7F1B9284;
    case 0x7F1B9288u: goto label_7F1B9288;
    case 0x7F1B928Cu: goto label_7F1B928C;
    case 0x7F1B9290u: goto label_7F1B9290;
    case 0x7F1B9294u: goto label_7F1B9294;
    case 0x7F1B9298u: goto label_7F1B9298;
    case 0x7F1B929Cu: goto label_7F1B929C;
    case 0x7F1B92A0u: goto label_7F1B92A0;
    case 0x7F1B92A4u: goto label_7F1B92A4;
    case 0x7F1B92A8u: goto label_7F1B92A8;
    case 0x7F1B92ACu: goto label_7F1B92AC;
    case 0x7F1B92B0u: goto label_7F1B92B0;
    case 0x7F1B92B4u: goto label_7F1B92B4;
    case 0x7F1B92B8u: goto label_7F1B92B8;
    case 0x7F1B92BCu: goto label_7F1B92BC;
    case 0x7F1B92C0u: goto label_7F1B92C0;
    case 0x7F1B92C4u: goto label_7F1B92C4;
    case 0x7F1B92C8u: goto label_7F1B92C8;
    case 0x7F1B92CCu: goto label_7F1B92CC;
    case 0x7F1B92D0u: goto label_7F1B92D0;
    case 0x7F1B92D4u: goto label_7F1B92D4;
    case 0x7F1B92D8u: goto label_7F1B92D8;
    case 0x7F1B92DCu: goto label_7F1B92DC;
    case 0x7F1B92E0u: goto label_7F1B92E0;
    case 0x7F1B92E4u: goto label_7F1B92E4;
    case 0x7F1B92E8u: goto label_7F1B92E8;
    case 0x7F1B92ECu: goto label_7F1B92EC;
    case 0x7F1B92F0u: goto label_7F1B92F0;
    case 0x7F1B92F4u: goto label_7F1B92F4;
    case 0x7F1B92F8u: goto label_7F1B92F8;
    case 0x7F1B92FCu: goto label_7F1B92FC;
    case 0x7F1B9300u: goto label_7F1B9300;
    case 0x7F1B9304u: goto label_7F1B9304;
    case 0x7F1B9308u: goto label_7F1B9308;
    case 0x7F1B930Cu: goto label_7F1B930C;
    case 0x7F1B9310u: goto label_7F1B9310;
    case 0x7F1B9314u: goto label_7F1B9314;
    case 0x7F1B9318u: goto label_7F1B9318;
    case 0x7F1B931Cu: goto label_7F1B931C;
    case 0x7F1B9320u: goto label_7F1B9320;
    case 0x7F1B9324u: goto label_7F1B9324;
    case 0x7F1B9328u: goto label_7F1B9328;
    case 0x7F1B932Cu: goto label_7F1B932C;
    case 0x7F1B9330u: goto label_7F1B9330;
    case 0x7F1B9334u: goto label_7F1B9334;
    case 0x7F1B9338u: goto label_7F1B9338;
    case 0x7F1B933Cu: goto label_7F1B933C;
    case 0x7F1B9340u: goto label_7F1B9340;
    case 0x7F1B9344u: goto label_7F1B9344;
    case 0x7F1B9348u: goto label_7F1B9348;
    case 0x7F1B934Cu: goto label_7F1B934C;
    case 0x7F1B9350u: goto label_7F1B9350;
    case 0x7F1B9354u: goto label_7F1B9354;
    case 0x7F1B9358u: goto label_7F1B9358;
    case 0x7F1B935Cu: goto label_7F1B935C;
    case 0x7F1B9360u: goto label_7F1B9360;
    case 0x7F1B9364u: goto label_7F1B9364;
    case 0x7F1B9368u: goto label_7F1B9368;
    case 0x7F1B936Cu: goto label_7F1B936C;
    case 0x7F1B9370u: goto label_7F1B9370;
    case 0x7F1B9374u: goto label_7F1B9374;
    case 0x7F1B9378u: goto label_7F1B9378;
    case 0x7F1B937Cu: goto label_7F1B937C;
    case 0x7F1B9380u: goto label_7F1B9380;
    case 0x7F1B9384u: goto label_7F1B9384;
    case 0x7F1B9388u: goto label_7F1B9388;
    case 0x7F1B938Cu: goto label_7F1B938C;
    case 0x7F1B9390u: goto label_7F1B9390;
    case 0x7F1B9394u: goto label_7F1B9394;
    case 0x7F1B9398u: goto label_7F1B9398;
    case 0x7F1B939Cu: goto label_7F1B939C;
    case 0x7F1B93A0u: goto label_7F1B93A0;
    case 0x7F1B93A4u: goto label_7F1B93A4;
    case 0x7F1B93A8u: goto label_7F1B93A8;
    case 0x7F1B93ACu: goto label_7F1B93AC;
    case 0x7F1B93B0u: goto label_7F1B93B0;
    case 0x7F1B93B4u: goto label_7F1B93B4;
    case 0x7F1B93B8u: goto label_7F1B93B8;
    case 0x7F1B93BCu: goto label_7F1B93BC;
    case 0x7F1B93C0u: goto label_7F1B93C0;
    case 0x7F1B93C4u: goto label_7F1B93C4;
    case 0x7F1B93C8u: goto label_7F1B93C8;
    case 0x7F1B93CCu: goto label_7F1B93CC;
    case 0x7F1B93D0u: goto label_7F1B93D0;
    case 0x7F1B93D4u: goto label_7F1B93D4;
    case 0x7F1B93D8u: goto label_7F1B93D8;
    case 0x7F1B93DCu: goto label_7F1B93DC;
    case 0x7F1B93E0u: goto label_7F1B93E0;
    case 0x7F1B93E4u: goto label_7F1B93E4;
    case 0x7F1B93E8u: goto label_7F1B93E8;
    case 0x7F1B93ECu: goto label_7F1B93EC;
    case 0x7F1B93F0u: goto label_7F1B93F0;
    case 0x7F1B93F4u: goto label_7F1B93F4;
    case 0x7F1B93F8u: goto label_7F1B93F8;
    case 0x7F1B93FCu: goto label_7F1B93FC;
    case 0x7F1B9400u: goto label_7F1B9400;
    case 0x7F1B9404u: goto label_7F1B9404;
    case 0x7F1B9408u: goto label_7F1B9408;
    case 0x7F1B940Cu: goto label_7F1B940C;
    case 0x7F1B9410u: goto label_7F1B9410;
    case 0x7F1B9414u: goto label_7F1B9414;
    case 0x7F1B9418u: goto label_7F1B9418;
    case 0x7F1B941Cu: goto label_7F1B941C;
    case 0x7F1B9420u: goto label_7F1B9420;
    case 0x7F1B9424u: goto label_7F1B9424;
    case 0x7F1B9428u: goto label_7F1B9428;
    case 0x7F1B942Cu: goto label_7F1B942C;
    case 0x7F1B9430u: goto label_7F1B9430;
    case 0x7F1B9434u: goto label_7F1B9434;
    case 0x7F1B9438u: goto label_7F1B9438;
    case 0x7F1B943Cu: goto label_7F1B943C;
    case 0x7F1B9440u: goto label_7F1B9440;
    case 0x7F1B9444u: goto label_7F1B9444;
    case 0x7F1B9448u: goto label_7F1B9448;
    case 0x7F1B944Cu: goto label_7F1B944C;
    case 0x7F1B9450u: goto label_7F1B9450;
    case 0x7F1B9454u: goto label_7F1B9454;
    case 0x7F1B9458u: goto label_7F1B9458;
    case 0x7F1B945Cu: goto label_7F1B945C;
    case 0x7F1B9460u: goto label_7F1B9460;
    case 0x7F1B9464u: goto label_7F1B9464;
    case 0x7F1B9468u: goto label_7F1B9468;
    case 0x7F1B946Cu: goto label_7F1B946C;
    case 0x7F1B9470u: goto label_7F1B9470;
    case 0x7F1B9474u: goto label_7F1B9474;
    case 0x7F1B9478u: goto label_7F1B9478;
    case 0x7F1B947Cu: goto label_7F1B947C;
    case 0x7F1B9480u: goto label_7F1B9480;
    case 0x7F1B9484u: goto label_7F1B9484;
    case 0x7F1B9488u: goto label_7F1B9488;
    case 0x7F1B948Cu: goto label_7F1B948C;
    case 0x7F1B9490u: goto label_7F1B9490;
    case 0x7F1B9494u: goto label_7F1B9494;
    case 0x7F1B9498u: goto label_7F1B9498;
    case 0x7F1B949Cu: goto label_7F1B949C;
    case 0x7F1B94A0u: goto label_7F1B94A0;
    case 0x7F1B94A4u: goto label_7F1B94A4;
    case 0x7F1B94A8u: goto label_7F1B94A8;
    case 0x7F1B94ACu: goto label_7F1B94AC;
    case 0x7F1B94B0u: goto label_7F1B94B0;
    case 0x7F1B94B4u: goto label_7F1B94B4;
    case 0x7F1B94B8u: goto label_7F1B94B8;
    case 0x7F1B94BCu: goto label_7F1B94BC;
    case 0x7F1B94C0u: goto label_7F1B94C0;
    case 0x7F1B94C4u: goto label_7F1B94C4;
    case 0x7F1B94C8u: goto label_7F1B94C8;
    case 0x7F1B94CCu: goto label_7F1B94CC;
    case 0x7F1B94D0u: goto label_7F1B94D0;
    case 0x7F1B94D4u: goto label_7F1B94D4;
    case 0x7F1B94D8u: goto label_7F1B94D8;
    case 0x7F1B94DCu: goto label_7F1B94DC;
    case 0x7F1B94E0u: goto label_7F1B94E0;
    case 0x7F1B94E4u: goto label_7F1B94E4;
    case 0x7F1B94E8u: goto label_7F1B94E8;
    case 0x7F1B94ECu: goto label_7F1B94EC;
    case 0x7F1B94F0u: goto label_7F1B94F0;
    case 0x7F1B94F4u: goto label_7F1B94F4;
    case 0x7F1B94F8u: goto label_7F1B94F8;
    case 0x7F1B94FCu: goto label_7F1B94FC;
    case 0x7F1B9500u: goto label_7F1B9500;
    case 0x7F1B9504u: goto label_7F1B9504;
    case 0x7F1B9508u: goto label_7F1B9508;
    case 0x7F1B950Cu: goto label_7F1B950C;
    case 0x7F1B9510u: goto label_7F1B9510;
    case 0x7F1B9514u: goto label_7F1B9514;
    case 0x7F1B9518u: goto label_7F1B9518;
    case 0x7F1B951Cu: goto label_7F1B951C;
    case 0x7F1B9520u: goto label_7F1B9520;
    case 0x7F1B9524u: goto label_7F1B9524;
    case 0x7F1B9528u: goto label_7F1B9528;
    case 0x7F1B952Cu: goto label_7F1B952C;
    case 0x7F1B9530u: goto label_7F1B9530;
    case 0x7F1B9534u: goto label_7F1B9534;
    case 0x7F1B9538u: goto label_7F1B9538;
    case 0x7F1B953Cu: goto label_7F1B953C;
    case 0x7F1B9540u: goto label_7F1B9540;
    case 0x7F1B9544u: goto label_7F1B9544;
    case 0x7F1B9548u: goto label_7F1B9548;
    case 0x7F1B954Cu: goto label_7F1B954C;
    case 0x7F1B9550u: goto label_7F1B9550;
    case 0x7F1B9554u: goto label_7F1B9554;
    case 0x7F1B9558u: goto label_7F1B9558;
    case 0x7F1B955Cu: goto label_7F1B955C;
    case 0x7F1B9560u: goto label_7F1B9560;
    case 0x7F1B9564u: goto label_7F1B9564;
    case 0x7F1B9568u: goto label_7F1B9568;
    case 0x7F1B956Cu: goto label_7F1B956C;
    case 0x7F1B9570u: goto label_7F1B9570;
    case 0x7F1B9574u: goto label_7F1B9574;
    case 0x7F1B9578u: goto label_7F1B9578;
    case 0x7F1B957Cu: goto label_7F1B957C;
    case 0x7F1B9580u: goto label_7F1B9580;
    case 0x7F1B9584u: goto label_7F1B9584;
    case 0x7F1B9588u: goto label_7F1B9588;
    case 0x7F1B958Cu: goto label_7F1B958C;
    case 0x7F1B9590u: goto label_7F1B9590;
    case 0x7F1B9594u: goto label_7F1B9594;
    case 0x7F1B9598u: goto label_7F1B9598;
    case 0x7F1B959Cu: goto label_7F1B959C;
    case 0x7F1B95A0u: goto label_7F1B95A0;
    case 0x7F1B95A4u: goto label_7F1B95A4;
    case 0x7F1B95A8u: goto label_7F1B95A8;
    case 0x7F1B95ACu: goto label_7F1B95AC;
    case 0x7F1B95B0u: goto label_7F1B95B0;
    case 0x7F1B95B4u: goto label_7F1B95B4;
    case 0x7F1B95B8u: goto label_7F1B95B8;
    case 0x7F1B95BCu: goto label_7F1B95BC;
    case 0x7F1B95C0u: goto label_7F1B95C0;
    case 0x7F1B95C4u: goto label_7F1B95C4;
    case 0x7F1B95C8u: goto label_7F1B95C8;
    case 0x7F1B95CCu: goto label_7F1B95CC;
    case 0x7F1B95D0u: goto label_7F1B95D0;
    case 0x7F1B95D4u: goto label_7F1B95D4;
    case 0x7F1B95D8u: goto label_7F1B95D8;
    case 0x7F1B95DCu: goto label_7F1B95DC;
    case 0x7F1B95E0u: goto label_7F1B95E0;
    case 0x7F1B95E4u: goto label_7F1B95E4;
    case 0x7F1B95E8u: goto label_7F1B95E8;
    case 0x7F1B95ECu: goto label_7F1B95EC;
    case 0x7F1B95F0u: goto label_7F1B95F0;
    case 0x7F1B95F4u: goto label_7F1B95F4;
    case 0x7F1B95F8u: goto label_7F1B95F8;
    case 0x7F1B95FCu: goto label_7F1B95FC;
    case 0x7F1B9600u: goto label_7F1B9600;
    case 0x7F1B9604u: goto label_7F1B9604;
    case 0x7F1B9608u: goto label_7F1B9608;
    case 0x7F1B960Cu: goto label_7F1B960C;
    case 0x7F1B9610u: goto label_7F1B9610;
    case 0x7F1B9614u: goto label_7F1B9614;
    case 0x7F1B9618u: goto label_7F1B9618;
    case 0x7F1B961Cu: goto label_7F1B961C;
    case 0x7F1B9620u: goto label_7F1B9620;
    case 0x7F1B9624u: goto label_7F1B9624;
    case 0x7F1B9628u: goto label_7F1B9628;
    case 0x7F1B962Cu: goto label_7F1B962C;
    case 0x7F1B9630u: goto label_7F1B9630;
    case 0x7F1B9634u: goto label_7F1B9634;
    case 0x7F1B9638u: goto label_7F1B9638;
    case 0x7F1B963Cu: goto label_7F1B963C;
    case 0x7F1B9640u: goto label_7F1B9640;
    case 0x7F1B9644u: goto label_7F1B9644;
    case 0x7F1B9648u: goto label_7F1B9648;
    case 0x7F1B964Cu: goto label_7F1B964C;
    case 0x7F1B9650u: goto label_7F1B9650;
    case 0x7F1B9654u: goto label_7F1B9654;
    case 0x7F1B9658u: goto label_7F1B9658;
    case 0x7F1B965Cu: goto label_7F1B965C;
    case 0x7F1B9660u: goto label_7F1B9660;
    case 0x7F1B9664u: goto label_7F1B9664;
    case 0x7F1B9668u: goto label_7F1B9668;
    case 0x7F1B966Cu: goto label_7F1B966C;
    case 0x7F1B9670u: goto label_7F1B9670;
    case 0x7F1B9674u: goto label_7F1B9674;
    case 0x7F1B9678u: goto label_7F1B9678;
    case 0x7F1B967Cu: goto label_7F1B967C;
    case 0x7F1B9680u: goto label_7F1B9680;
    case 0x7F1B9684u: goto label_7F1B9684;
    case 0x7F1B9688u: goto label_7F1B9688;
    case 0x7F1B968Cu: goto label_7F1B968C;
    case 0x7F1B9690u: goto label_7F1B9690;
    case 0x7F1B9694u: goto label_7F1B9694;
    case 0x7F1B9698u: goto label_7F1B9698;
    case 0x7F1B969Cu: goto label_7F1B969C;
    case 0x7F1B96A0u: goto label_7F1B96A0;
    case 0x7F1B96A4u: goto label_7F1B96A4;
    case 0x7F1B96A8u: goto label_7F1B96A8;
    case 0x7F1B96ACu: goto label_7F1B96AC;
    case 0x7F1B96B0u: goto label_7F1B96B0;
    case 0x7F1B96B4u: goto label_7F1B96B4;
    case 0x7F1B96B8u: goto label_7F1B96B8;
    case 0x7F1B96BCu: goto label_7F1B96BC;
    case 0x7F1B96C0u: goto label_7F1B96C0;
    case 0x7F1B96C4u: goto label_7F1B96C4;
    case 0x7F1B96C8u: goto label_7F1B96C8;
    case 0x7F1B96CCu: goto label_7F1B96CC;
    case 0x7F1B96D0u: goto label_7F1B96D0;
    case 0x7F1B96D4u: goto label_7F1B96D4;
    case 0x7F1B96D8u: goto label_7F1B96D8;
    case 0x7F1B96DCu: goto label_7F1B96DC;
    case 0x7F1B96E0u: goto label_7F1B96E0;
    case 0x7F1B96E4u: goto label_7F1B96E4;
    case 0x7F1B96E8u: goto label_7F1B96E8;
    case 0x7F1B96ECu: goto label_7F1B96EC;
    case 0x7F1B96F0u: goto label_7F1B96F0;
    case 0x7F1B96F4u: goto label_7F1B96F4;
    case 0x7F1B96F8u: goto label_7F1B96F8;
    case 0x7F1B96FCu: goto label_7F1B96FC;
    case 0x7F1B9700u: goto label_7F1B9700;
    case 0x7F1B9704u: goto label_7F1B9704;
    case 0x7F1B9708u: goto label_7F1B9708;
    case 0x7F1B970Cu: goto label_7F1B970C;
    case 0x7F1B9710u: goto label_7F1B9710;
    case 0x7F1B9714u: goto label_7F1B9714;
    case 0x7F1B9718u: goto label_7F1B9718;
    case 0x7F1B971Cu: goto label_7F1B971C;
    case 0x7F1B9720u: goto label_7F1B9720;
    case 0x7F1B9724u: goto label_7F1B9724;
    case 0x7F1B9728u: goto label_7F1B9728;
    case 0x7F1B972Cu: goto label_7F1B972C;
    case 0x7F1B9730u: goto label_7F1B9730;
    case 0x7F1B9734u: goto label_7F1B9734;
    case 0x7F1B9738u: goto label_7F1B9738;
    case 0x7F1B973Cu: goto label_7F1B973C;
    case 0x7F1B9740u: goto label_7F1B9740;
    case 0x7F1B9744u: goto label_7F1B9744;
    case 0x7F1B9748u: goto label_7F1B9748;
    case 0x7F1B974Cu: goto label_7F1B974C;
    case 0x7F1B9750u: goto label_7F1B9750;
    case 0x7F1B9754u: goto label_7F1B9754;
    case 0x7F1B9758u: goto label_7F1B9758;
    case 0x7F1B975Cu: goto label_7F1B975C;
    case 0x7F1B9760u: goto label_7F1B9760;
    case 0x7F1B9764u: goto label_7F1B9764;
    case 0x7F1B9768u: goto label_7F1B9768;
    case 0x7F1B976Cu: goto label_7F1B976C;
    case 0x7F1B9770u: goto label_7F1B9770;
    case 0x7F1B9774u: goto label_7F1B9774;
    case 0x7F1B9778u: goto label_7F1B9778;
    case 0x7F1B977Cu: goto label_7F1B977C;
    case 0x7F1B9780u: goto label_7F1B9780;
    case 0x7F1B9784u: goto label_7F1B9784;
    case 0x7F1B9788u: goto label_7F1B9788;
    case 0x7F1B978Cu: goto label_7F1B978C;
    case 0x7F1B9790u: goto label_7F1B9790;
    case 0x7F1B9794u: goto label_7F1B9794;
    case 0x7F1B9798u: goto label_7F1B9798;
    case 0x7F1B979Cu: goto label_7F1B979C;
    case 0x7F1B97A0u: goto label_7F1B97A0;
    case 0x7F1B97A4u: goto label_7F1B97A4;
    case 0x7F1B97A8u: goto label_7F1B97A8;
    case 0x7F1B97ACu: goto label_7F1B97AC;
    case 0x7F1B97B0u: goto label_7F1B97B0;
    case 0x7F1B97B4u: goto label_7F1B97B4;
    case 0x7F1B97B8u: goto label_7F1B97B8;
    case 0x7F1B97BCu: goto label_7F1B97BC;
    case 0x7F1B97C0u: goto label_7F1B97C0;
    case 0x7F1B97C4u: goto label_7F1B97C4;
    case 0x7F1B97C8u: goto label_7F1B97C8;
    case 0x7F1B97CCu: goto label_7F1B97CC;
    case 0x7F1B97D0u: goto label_7F1B97D0;
    case 0x7F1B97D4u: goto label_7F1B97D4;
    case 0x7F1B97D8u: goto label_7F1B97D8;
    case 0x7F1B97DCu: goto label_7F1B97DC;
    case 0x7F1B97E0u: goto label_7F1B97E0;
    case 0x7F1B97E4u: goto label_7F1B97E4;
    case 0x7F1B97E8u: goto label_7F1B97E8;
    case 0x7F1B97ECu: goto label_7F1B97EC;
    case 0x7F1B97F0u: goto label_7F1B97F0;
    case 0x7F1B97F4u: goto label_7F1B97F4;
    case 0x7F1B97F8u: goto label_7F1B97F8;
    case 0x7F1B97FCu: goto label_7F1B97FC;
    case 0x7F1B9800u: goto label_7F1B9800;
    case 0x7F1B9804u: goto label_7F1B9804;
    case 0x7F1B9808u: goto label_7F1B9808;
    case 0x7F1B980Cu: goto label_7F1B980C;
    case 0x7F1B9810u: goto label_7F1B9810;
    case 0x7F1B9814u: goto label_7F1B9814;
    case 0x7F1B9818u: goto label_7F1B9818;
    case 0x7F1B981Cu: goto label_7F1B981C;
    case 0x7F1B9820u: goto label_7F1B9820;
    case 0x7F1B9824u: goto label_7F1B9824;
    case 0x7F1B9828u: goto label_7F1B9828;
    case 0x7F1B982Cu: goto label_7F1B982C;
    case 0x7F1B9830u: goto label_7F1B9830;
    case 0x7F1B9834u: goto label_7F1B9834;
    case 0x7F1B9838u: goto label_7F1B9838;
    case 0x7F1B983Cu: goto label_7F1B983C;
    case 0x7F1B9840u: goto label_7F1B9840;
    case 0x7F1B9844u: goto label_7F1B9844;
    case 0x7F1B9848u: goto label_7F1B9848;
    case 0x7F1B984Cu: goto label_7F1B984C;
    case 0x7F1B9850u: goto label_7F1B9850;
    case 0x7F1B9854u: goto label_7F1B9854;
    case 0x7F1B9858u: goto label_7F1B9858;
    case 0x7F1B985Cu: goto label_7F1B985C;
    case 0x7F1B9860u: goto label_7F1B9860;
    case 0x7F1B9864u: goto label_7F1B9864;
    case 0x7F1B9868u: goto label_7F1B9868;
    case 0x7F1B986Cu: goto label_7F1B986C;
    case 0x7F1B9870u: goto label_7F1B9870;
    case 0x7F1B9874u: goto label_7F1B9874;
    case 0x7F1B9878u: goto label_7F1B9878;
    case 0x7F1B987Cu: goto label_7F1B987C;
    case 0x7F1B9880u: goto label_7F1B9880;
    case 0x7F1B9884u: goto label_7F1B9884;
    case 0x7F1B9888u: goto label_7F1B9888;
    case 0x7F1B988Cu: goto label_7F1B988C;
    case 0x7F1B9890u: goto label_7F1B9890;
    case 0x7F1B9894u: goto label_7F1B9894;
    case 0x7F1B9898u: goto label_7F1B9898;
    case 0x7F1B989Cu: goto label_7F1B989C;
    case 0x7F1B98A0u: goto label_7F1B98A0;
    case 0x7F1B98A4u: goto label_7F1B98A4;
    case 0x7F1B98A8u: goto label_7F1B98A8;
    case 0x7F1B98ACu: goto label_7F1B98AC;
    case 0x7F1B98B0u: goto label_7F1B98B0;
    case 0x7F1B98B4u: goto label_7F1B98B4;
    case 0x7F1B98B8u: goto label_7F1B98B8;
    case 0x7F1B98BCu: goto label_7F1B98BC;
    case 0x7F1B98C0u: goto label_7F1B98C0;
    case 0x7F1B98C4u: goto label_7F1B98C4;
    case 0x7F1B98C8u: goto label_7F1B98C8;
    case 0x7F1B98CCu: goto label_7F1B98CC;
    case 0x7F1B98D0u: goto label_7F1B98D0;
    case 0x7F1B98D4u: goto label_7F1B98D4;
    case 0x7F1B98D8u: goto label_7F1B98D8;
    case 0x7F1B98DCu: goto label_7F1B98DC;
    case 0x7F1B98E0u: goto label_7F1B98E0;
    case 0x7F1B98E4u: goto label_7F1B98E4;
    case 0x7F1B98E8u: goto label_7F1B98E8;
    case 0x7F1B98ECu: goto label_7F1B98EC;
    case 0x7F1B98F0u: goto label_7F1B98F0;
    case 0x7F1B98F4u: goto label_7F1B98F4;
    case 0x7F1B98F8u: goto label_7F1B98F8;
    case 0x7F1B98FCu: goto label_7F1B98FC;
    case 0x7F1B9900u: goto label_7F1B9900;
    case 0x7F1B9904u: goto label_7F1B9904;
    case 0x7F1B9908u: goto label_7F1B9908;
    case 0x7F1B990Cu: goto label_7F1B990C;
    case 0x7F1B9910u: goto label_7F1B9910;
    case 0x7F1B9914u: goto label_7F1B9914;
    case 0x7F1B9918u: goto label_7F1B9918;
    case 0x7F1B991Cu: goto label_7F1B991C;
    case 0x7F1B9920u: goto label_7F1B9920;
    case 0x7F1B9924u: goto label_7F1B9924;
    case 0x7F1B9928u: goto label_7F1B9928;
    case 0x7F1B992Cu: goto label_7F1B992C;
    case 0x7F1B9930u: goto label_7F1B9930;
    case 0x7F1B9934u: goto label_7F1B9934;
    case 0x7F1B9938u: goto label_7F1B9938;
    case 0x7F1B993Cu: goto label_7F1B993C;
    case 0x7F1B9940u: goto label_7F1B9940;
    case 0x7F1B9944u: goto label_7F1B9944;
    case 0x7F1B9948u: goto label_7F1B9948;
    case 0x7F1B994Cu: goto label_7F1B994C;
    case 0x7F1B9950u: goto label_7F1B9950;
    case 0x7F1B9954u: goto label_7F1B9954;
    case 0x7F1B9958u: goto label_7F1B9958;
    case 0x7F1B995Cu: goto label_7F1B995C;
    case 0x7F1B9960u: goto label_7F1B9960;
    case 0x7F1B9964u: goto label_7F1B9964;
    case 0x7F1B9968u: goto label_7F1B9968;
    case 0x7F1B996Cu: goto label_7F1B996C;
    case 0x7F1B9970u: goto label_7F1B9970;
    case 0x7F1B9974u: goto label_7F1B9974;
    case 0x7F1B9978u: goto label_7F1B9978;
    case 0x7F1B997Cu: goto label_7F1B997C;
    case 0x7F1B9980u: goto label_7F1B9980;
    case 0x7F1B9984u: goto label_7F1B9984;
    case 0x7F1B9988u: goto label_7F1B9988;
    case 0x7F1B998Cu: goto label_7F1B998C;
    case 0x7F1B9990u: goto label_7F1B9990;
    case 0x7F1B9994u: goto label_7F1B9994;
    case 0x7F1B9998u: goto label_7F1B9998;
    case 0x7F1B999Cu: goto label_7F1B999C;
    case 0x7F1B99A0u: goto label_7F1B99A0;
    case 0x7F1B99A4u: goto label_7F1B99A4;
    case 0x7F1B99A8u: goto label_7F1B99A8;
    case 0x7F1B99ACu: goto label_7F1B99AC;
    case 0x7F1B99B0u: goto label_7F1B99B0;
    case 0x7F1B99B4u: goto label_7F1B99B4;
    case 0x7F1B99B8u: goto label_7F1B99B8;
    case 0x7F1B99BCu: goto label_7F1B99BC;
    case 0x7F1B99C0u: goto label_7F1B99C0;
    case 0x7F1B99C4u: goto label_7F1B99C4;
    case 0x7F1B99C8u: goto label_7F1B99C8;
    case 0x7F1B99CCu: goto label_7F1B99CC;
    case 0x7F1B99D0u: goto label_7F1B99D0;
    case 0x7F1B99D4u: goto label_7F1B99D4;
    case 0x7F1B99D8u: goto label_7F1B99D8;
    case 0x7F1B99DCu: goto label_7F1B99DC;
    case 0x7F1B99E0u: goto label_7F1B99E0;
    case 0x7F1B99E4u: goto label_7F1B99E4;
    case 0x7F1B99E8u: goto label_7F1B99E8;
    case 0x7F1B99ECu: goto label_7F1B99EC;
    case 0x7F1B99F0u: goto label_7F1B99F0;
    case 0x7F1B99F4u: goto label_7F1B99F4;
    case 0x7F1B99F8u: goto label_7F1B99F8;
    case 0x7F1B99FCu: goto label_7F1B99FC;
    case 0x7F1B9A00u: goto label_7F1B9A00;
    case 0x7F1B9A04u: goto label_7F1B9A04;
    case 0x7F1B9A08u: goto label_7F1B9A08;
    case 0x7F1B9A0Cu: goto label_7F1B9A0C;
    case 0x7F1B9A10u: goto label_7F1B9A10;
    case 0x7F1B9A14u: goto label_7F1B9A14;
    case 0x7F1B9A18u: goto label_7F1B9A18;
    case 0x7F1B9A1Cu: goto label_7F1B9A1C;
    case 0x7F1B9A20u: goto label_7F1B9A20;
    case 0x7F1B9A24u: goto label_7F1B9A24;
    case 0x7F1B9A28u: goto label_7F1B9A28;
    case 0x7F1B9A2Cu: goto label_7F1B9A2C;
    case 0x7F1B9A30u: goto label_7F1B9A30;
    case 0x7F1B9A34u: goto label_7F1B9A34;
    case 0x7F1B9A38u: goto label_7F1B9A38;
    case 0x7F1B9A3Cu: goto label_7F1B9A3C;
    case 0x7F1B9A40u: goto label_7F1B9A40;
    case 0x7F1B9A44u: goto label_7F1B9A44;
    case 0x7F1B9A48u: goto label_7F1B9A48;
    case 0x7F1B9A4Cu: goto label_7F1B9A4C;
    case 0x7F1B9A50u: goto label_7F1B9A50;
    case 0x7F1B9A54u: goto label_7F1B9A54;
    case 0x7F1B9A58u: goto label_7F1B9A58;
    case 0x7F1B9A5Cu: goto label_7F1B9A5C;
    case 0x7F1B9A60u: goto label_7F1B9A60;
    case 0x7F1B9A64u: goto label_7F1B9A64;
    case 0x7F1B9A68u: goto label_7F1B9A68;
    case 0x7F1B9A6Cu: goto label_7F1B9A6C;
    case 0x7F1B9A70u: goto label_7F1B9A70;
    case 0x7F1B9A74u: goto label_7F1B9A74;
    case 0x7F1B9A78u: goto label_7F1B9A78;
    case 0x7F1B9A7Cu: goto label_7F1B9A7C;
    case 0x7F1B9A80u: goto label_7F1B9A80;
    case 0x7F1B9A84u: goto label_7F1B9A84;
    case 0x7F1B9A88u: goto label_7F1B9A88;
    case 0x7F1B9A8Cu: goto label_7F1B9A8C;
    case 0x7F1B9A90u: goto label_7F1B9A90;
    case 0x7F1B9A94u: goto label_7F1B9A94;
    case 0x7F1B9A98u: goto label_7F1B9A98;
    case 0x7F1B9A9Cu: goto label_7F1B9A9C;
    case 0x7F1B9AA0u: goto label_7F1B9AA0;
    case 0x7F1B9AA4u: goto label_7F1B9AA4;
    case 0x7F1B9AA8u: goto label_7F1B9AA8;
    case 0x7F1B9AACu: goto label_7F1B9AAC;
    case 0x7F1B9AB0u: goto label_7F1B9AB0;
    case 0x7F1B9AB4u: goto label_7F1B9AB4;
    case 0x7F1B9AB8u: goto label_7F1B9AB8;
    case 0x7F1B9ABCu: goto label_7F1B9ABC;
    case 0x7F1B9AC0u: goto label_7F1B9AC0;
    case 0x7F1B9AC4u: goto label_7F1B9AC4;
    case 0x7F1B9AC8u: goto label_7F1B9AC8;
    case 0x7F1B9ACCu: goto label_7F1B9ACC;
    case 0x7F1B9AD0u: goto label_7F1B9AD0;
    case 0x7F1B9AD4u: goto label_7F1B9AD4;
    case 0x7F1B9AD8u: goto label_7F1B9AD8;
    case 0x7F1B9ADCu: goto label_7F1B9ADC;
    case 0x7F1B9AE0u: goto label_7F1B9AE0;
    case 0x7F1B9AE4u: goto label_7F1B9AE4;
    case 0x7F1B9AE8u: goto label_7F1B9AE8;
    case 0x7F1B9AECu: goto label_7F1B9AEC;
    case 0x7F1B9AF0u: goto label_7F1B9AF0;
    case 0x7F1B9AF4u: goto label_7F1B9AF4;
    case 0x7F1B9AF8u: goto label_7F1B9AF8;
    case 0x7F1B9AFCu: goto label_7F1B9AFC;
    case 0x7F1B9B00u: goto label_7F1B9B00;
    case 0x7F1B9B04u: goto label_7F1B9B04;
    case 0x7F1B9B08u: goto label_7F1B9B08;
    case 0x7F1B9B0Cu: goto label_7F1B9B0C;
    case 0x7F1B9B10u: goto label_7F1B9B10;
    case 0x7F1B9B14u: goto label_7F1B9B14;
    case 0x7F1B9B18u: goto label_7F1B9B18;
    case 0x7F1B9B1Cu: goto label_7F1B9B1C;
    case 0x7F1B9B20u: goto label_7F1B9B20;
    case 0x7F1B9B24u: goto label_7F1B9B24;
    case 0x7F1B9B28u: goto label_7F1B9B28;
    case 0x7F1B9B2Cu: goto label_7F1B9B2C;
    case 0x7F1B9B30u: goto label_7F1B9B30;
    case 0x7F1B9B34u: goto label_7F1B9B34;
    case 0x7F1B9B38u: goto label_7F1B9B38;
    case 0x7F1B9B3Cu: goto label_7F1B9B3C;
    case 0x7F1B9B40u: goto label_7F1B9B40;
    case 0x7F1B9B44u: goto label_7F1B9B44;
    case 0x7F1B9B48u: goto label_7F1B9B48;
    case 0x7F1B9B4Cu: goto label_7F1B9B4C;
    case 0x7F1B9B50u: goto label_7F1B9B50;
    case 0x7F1B9B54u: goto label_7F1B9B54;
    case 0x7F1B9B58u: goto label_7F1B9B58;
    case 0x7F1B9B5Cu: goto label_7F1B9B5C;
    case 0x7F1B9B60u: goto label_7F1B9B60;
    case 0x7F1B9B64u: goto label_7F1B9B64;
    case 0x7F1B9B68u: goto label_7F1B9B68;
    case 0x7F1B9B6Cu: goto label_7F1B9B6C;
    case 0x7F1B9B70u: goto label_7F1B9B70;
    case 0x7F1B9B74u: goto label_7F1B9B74;
    case 0x7F1B9B78u: goto label_7F1B9B78;
    case 0x7F1B9B7Cu: goto label_7F1B9B7C;
    case 0x7F1B9B80u: goto label_7F1B9B80;
    case 0x7F1B9B84u: goto label_7F1B9B84;
    case 0x7F1B9B88u: goto label_7F1B9B88;
    case 0x7F1B9B8Cu: goto label_7F1B9B8C;
    case 0x7F1B9B90u: goto label_7F1B9B90;
    case 0x7F1B9B94u: goto label_7F1B9B94;
    case 0x7F1B9B98u: goto label_7F1B9B98;
    case 0x7F1B9B9Cu: goto label_7F1B9B9C;
    case 0x7F1B9BA0u: goto label_7F1B9BA0;
    case 0x7F1B9BA4u: goto label_7F1B9BA4;
    case 0x7F1B9BA8u: goto label_7F1B9BA8;
    case 0x7F1B9BACu: goto label_7F1B9BAC;
    case 0x7F1B9BB0u: goto label_7F1B9BB0;
    case 0x7F1B9BB4u: goto label_7F1B9BB4;
    case 0x7F1B9BB8u: goto label_7F1B9BB8;
    case 0x7F1B9BBCu: goto label_7F1B9BBC;
    case 0x7F1B9BC0u: goto label_7F1B9BC0;
    case 0x7F1B9BC4u: goto label_7F1B9BC4;
    case 0x7F1B9BC8u: goto label_7F1B9BC8;
    case 0x7F1B9BCCu: goto label_7F1B9BCC;
    case 0x7F1B9BD0u: goto label_7F1B9BD0;
    case 0x7F1B9BD4u: goto label_7F1B9BD4;
    case 0x7F1B9BD8u: goto label_7F1B9BD8;
    case 0x7F1B9BDCu: goto label_7F1B9BDC;
    case 0x7F1B9BE0u: goto label_7F1B9BE0;
    case 0x7F1B9BE4u: goto label_7F1B9BE4;
    case 0x7F1B9BE8u: goto label_7F1B9BE8;
    case 0x7F1B9BECu: goto label_7F1B9BEC;
    case 0x7F1B9BF0u: goto label_7F1B9BF0;
    case 0x7F1B9BF4u: goto label_7F1B9BF4;
    case 0x7F1B9BF8u: goto label_7F1B9BF8;
    case 0x7F1B9BFCu: goto label_7F1B9BFC;
    case 0x7F1B9C00u: goto label_7F1B9C00;
    case 0x7F1B9C04u: goto label_7F1B9C04;
    case 0x7F1B9C08u: goto label_7F1B9C08;
    case 0x7F1B9C0Cu: goto label_7F1B9C0C;
    case 0x7F1B9C10u: goto label_7F1B9C10;
    case 0x7F1B9C14u: goto label_7F1B9C14;
    case 0x7F1B9C18u: goto label_7F1B9C18;
    case 0x7F1B9C1Cu: goto label_7F1B9C1C;
    case 0x7F1B9C20u: goto label_7F1B9C20;
    case 0x7F1B9C24u: goto label_7F1B9C24;
    case 0x7F1B9C28u: goto label_7F1B9C28;
    case 0x7F1B9C2Cu: goto label_7F1B9C2C;
    case 0x7F1B9C30u: goto label_7F1B9C30;
    case 0x7F1B9C34u: goto label_7F1B9C34;
    case 0x7F1B9C38u: goto label_7F1B9C38;
    case 0x7F1B9C3Cu: goto label_7F1B9C3C;
    case 0x7F1B9C40u: goto label_7F1B9C40;
    case 0x7F1B9C44u: goto label_7F1B9C44;
    case 0x7F1B9C48u: goto label_7F1B9C48;
    case 0x7F1B9C4Cu: goto label_7F1B9C4C;
    case 0x7F1B9C50u: goto label_7F1B9C50;
    case 0x7F1B9C54u: goto label_7F1B9C54;
    case 0x7F1B9C58u: goto label_7F1B9C58;
    case 0x7F1B9C5Cu: goto label_7F1B9C5C;
    case 0x7F1B9C60u: goto label_7F1B9C60;
    case 0x7F1B9C64u: goto label_7F1B9C64;
    case 0x7F1B9C68u: goto label_7F1B9C68;
    case 0x7F1B9C6Cu: goto label_7F1B9C6C;
    case 0x7F1B9C70u: goto label_7F1B9C70;
    case 0x7F1B9C74u: goto label_7F1B9C74;
    case 0x7F1B9C78u: goto label_7F1B9C78;
    case 0x7F1B9C7Cu: goto label_7F1B9C7C;
    case 0x7F1B9C80u: goto label_7F1B9C80;
    case 0x7F1B9C84u: goto label_7F1B9C84;
    case 0x7F1B9C88u: goto label_7F1B9C88;
    case 0x7F1B9C8Cu: goto label_7F1B9C8C;
    case 0x7F1B9C90u: goto label_7F1B9C90;
    case 0x7F1B9C94u: goto label_7F1B9C94;
    case 0x7F1B9C98u: goto label_7F1B9C98;
    case 0x7F1B9C9Cu: goto label_7F1B9C9C;
    case 0x7F1B9CA0u: goto label_7F1B9CA0;
    case 0x7F1B9CA4u: goto label_7F1B9CA4;
    case 0x7F1B9CA8u: goto label_7F1B9CA8;
    case 0x7F1B9CACu: goto label_7F1B9CAC;
    case 0x7F1B9CB0u: goto label_7F1B9CB0;
    case 0x7F1B9CB4u: goto label_7F1B9CB4;
    case 0x7F1B9CB8u: goto label_7F1B9CB8;
    case 0x7F1B9CBCu: goto label_7F1B9CBC;
    case 0x7F1B9CC0u: goto label_7F1B9CC0;
    case 0x7F1B9CC4u: goto label_7F1B9CC4;
    case 0x7F1B9CC8u: goto label_7F1B9CC8;
    case 0x7F1B9CCCu: goto label_7F1B9CCC;
    case 0x7F1B9CD0u: goto label_7F1B9CD0;
    case 0x7F1B9CD4u: goto label_7F1B9CD4;
    case 0x7F1B9CD8u: goto label_7F1B9CD8;
    case 0x7F1B9CDCu: goto label_7F1B9CDC;
    case 0x7F1B9CE0u: goto label_7F1B9CE0;
    case 0x7F1B9CE4u: goto label_7F1B9CE4;
    case 0x7F1B9CE8u: goto label_7F1B9CE8;
    case 0x7F1B9CECu: goto label_7F1B9CEC;
    case 0x7F1B9CF0u: goto label_7F1B9CF0;
    case 0x7F1B9CF4u: goto label_7F1B9CF4;
    case 0x7F1B9CF8u: goto label_7F1B9CF8;
    case 0x7F1B9CFCu: goto label_7F1B9CFC;
    case 0x7F1B9D00u: goto label_7F1B9D00;
    case 0x7F1B9D04u: goto label_7F1B9D04;
    case 0x7F1B9D08u: goto label_7F1B9D08;
    case 0x7F1B9D0Cu: goto label_7F1B9D0C;
    case 0x7F1B9D10u: goto label_7F1B9D10;
    case 0x7F1B9D14u: goto label_7F1B9D14;
    case 0x7F1B9D18u: goto label_7F1B9D18;
    case 0x7F1B9D1Cu: goto label_7F1B9D1C;
    case 0x7F1B9D20u: goto label_7F1B9D20;
    case 0x7F1B9D24u: goto label_7F1B9D24;
    case 0x7F1B9D28u: goto label_7F1B9D28;
    case 0x7F1B9D2Cu: goto label_7F1B9D2C;
    case 0x7F1B9D30u: goto label_7F1B9D30;
    case 0x7F1B9D34u: goto label_7F1B9D34;
    case 0x7F1B9D38u: goto label_7F1B9D38;
    case 0x7F1B9D3Cu: goto label_7F1B9D3C;
    case 0x7F1B9D40u: goto label_7F1B9D40;
    case 0x7F1B9D44u: goto label_7F1B9D44;
    case 0x7F1B9D48u: goto label_7F1B9D48;
    case 0x7F1B9D4Cu: goto label_7F1B9D4C;
    case 0x7F1B9D50u: goto label_7F1B9D50;
    case 0x7F1B9D54u: goto label_7F1B9D54;
    case 0x7F1B9D58u: goto label_7F1B9D58;
    case 0x7F1B9D5Cu: goto label_7F1B9D5C;
    case 0x7F1B9D60u: goto label_7F1B9D60;
    case 0x7F1B9D64u: goto label_7F1B9D64;
    case 0x7F1B9D68u: goto label_7F1B9D68;
    case 0x7F1B9D6Cu: goto label_7F1B9D6C;
    case 0x7F1B9D70u: goto label_7F1B9D70;
    case 0x7F1B9D74u: goto label_7F1B9D74;
    case 0x7F1B9D78u: goto label_7F1B9D78;
    case 0x7F1B9D7Cu: goto label_7F1B9D7C;
    case 0x7F1B9D80u: goto label_7F1B9D80;
    case 0x7F1B9D84u: goto label_7F1B9D84;
    case 0x7F1B9D88u: goto label_7F1B9D88;
    case 0x7F1B9D8Cu: goto label_7F1B9D8C;
    case 0x7F1B9D90u: goto label_7F1B9D90;
    case 0x7F1B9D94u: goto label_7F1B9D94;
    case 0x7F1B9D98u: goto label_7F1B9D98;
    case 0x7F1B9D9Cu: goto label_7F1B9D9C;
    case 0x7F1B9DA0u: goto label_7F1B9DA0;
    case 0x7F1B9DA4u: goto label_7F1B9DA4;
    case 0x7F1B9DA8u: goto label_7F1B9DA8;
    case 0x7F1B9DACu: goto label_7F1B9DAC;
    case 0x7F1B9DB0u: goto label_7F1B9DB0;
    case 0x7F1B9DB4u: goto label_7F1B9DB4;
    case 0x7F1B9DB8u: goto label_7F1B9DB8;
    case 0x7F1B9DBCu: goto label_7F1B9DBC;
    case 0x7F1B9DC0u: goto label_7F1B9DC0;
    case 0x7F1B9DC4u: goto label_7F1B9DC4;
    case 0x7F1B9DC8u: goto label_7F1B9DC8;
    case 0x7F1B9DCCu: goto label_7F1B9DCC;
    case 0x7F1B9DD0u: goto label_7F1B9DD0;
    case 0x7F1B9DD4u: goto label_7F1B9DD4;
    case 0x7F1B9DD8u: goto label_7F1B9DD8;
    case 0x7F1B9DDCu: goto label_7F1B9DDC;
    case 0x7F1B9DE0u: goto label_7F1B9DE0;
    case 0x7F1B9DE4u: goto label_7F1B9DE4;
    case 0x7F1B9DE8u: goto label_7F1B9DE8;
    case 0x7F1B9DECu: goto label_7F1B9DEC;
    case 0x7F1B9DF0u: goto label_7F1B9DF0;
    case 0x7F1B9DF4u: goto label_7F1B9DF4;
    case 0x7F1B9DF8u: goto label_7F1B9DF8;
    case 0x7F1B9DFCu: goto label_7F1B9DFC;
    case 0x7F1B9E00u: goto label_7F1B9E00;
    case 0x7F1B9E04u: goto label_7F1B9E04;
    case 0x7F1B9E08u: goto label_7F1B9E08;
    case 0x7F1B9E0Cu: goto label_7F1B9E0C;
    case 0x7F1B9E10u: goto label_7F1B9E10;
    case 0x7F1B9E14u: goto label_7F1B9E14;
    case 0x7F1B9E18u: goto label_7F1B9E18;
    case 0x7F1B9E1Cu: goto label_7F1B9E1C;
    case 0x7F1B9E20u: goto label_7F1B9E20;
    case 0x7F1B9E24u: goto label_7F1B9E24;
    case 0x7F1B9E28u: goto label_7F1B9E28;
    case 0x7F1B9E2Cu: goto label_7F1B9E2C;
    case 0x7F1B9E30u: goto label_7F1B9E30;
    case 0x7F1B9E34u: goto label_7F1B9E34;
    case 0x7F1B9E38u: goto label_7F1B9E38;
    case 0x7F1B9E3Cu: goto label_7F1B9E3C;
    case 0x7F1B9E40u: goto label_7F1B9E40;
    case 0x7F1B9E44u: goto label_7F1B9E44;
    case 0x7F1B9E48u: goto label_7F1B9E48;
    case 0x7F1B9E4Cu: goto label_7F1B9E4C;
    case 0x7F1B9E50u: goto label_7F1B9E50;
    case 0x7F1B9E54u: goto label_7F1B9E54;
    case 0x7F1B9E58u: goto label_7F1B9E58;
    case 0x7F1B9E5Cu: goto label_7F1B9E5C;
    case 0x7F1B9E60u: goto label_7F1B9E60;
    case 0x7F1B9E64u: goto label_7F1B9E64;
    case 0x7F1B9E68u: goto label_7F1B9E68;
    case 0x7F1B9E6Cu: goto label_7F1B9E6C;
    case 0x7F1B9E70u: goto label_7F1B9E70;
    case 0x7F1B9E74u: goto label_7F1B9E74;
    case 0x7F1B9E78u: goto label_7F1B9E78;
    case 0x7F1B9E7Cu: goto label_7F1B9E7C;
    case 0x7F1B9E80u: goto label_7F1B9E80;
    case 0x7F1B9E84u: goto label_7F1B9E84;
    case 0x7F1B9E88u: goto label_7F1B9E88;
    case 0x7F1B9E8Cu: goto label_7F1B9E8C;
    case 0x7F1B9E90u: goto label_7F1B9E90;
    case 0x7F1B9E94u: goto label_7F1B9E94;
    case 0x7F1B9E98u: goto label_7F1B9E98;
    case 0x7F1B9E9Cu: goto label_7F1B9E9C;
    case 0x7F1B9EA0u: goto label_7F1B9EA0;
    case 0x7F1B9EA4u: goto label_7F1B9EA4;
    case 0x7F1B9EA8u: goto label_7F1B9EA8;
    case 0x7F1B9EACu: goto label_7F1B9EAC;
    case 0x7F1B9EB0u: goto label_7F1B9EB0;
    case 0x7F1B9EB4u: goto label_7F1B9EB4;
    case 0x7F1B9EB8u: goto label_7F1B9EB8;
    case 0x7F1B9EBCu: goto label_7F1B9EBC;
    case 0x7F1B9EC0u: goto label_7F1B9EC0;
    case 0x7F1B9EC4u: goto label_7F1B9EC4;
    case 0x7F1B9EC8u: goto label_7F1B9EC8;
    case 0x7F1B9ECCu: goto label_7F1B9ECC;
    case 0x7F1B9ED0u: goto label_7F1B9ED0;
    case 0x7F1B9ED4u: goto label_7F1B9ED4;
    case 0x7F1B9ED8u: goto label_7F1B9ED8;
    case 0x7F1B9EDCu: goto label_7F1B9EDC;
    case 0x7F1B9EE0u: goto label_7F1B9EE0;
    case 0x7F1B9EE4u: goto label_7F1B9EE4;
    case 0x7F1B9EE8u: goto label_7F1B9EE8;
    case 0x7F1B9EECu: goto label_7F1B9EEC;
    case 0x7F1B9EF0u: goto label_7F1B9EF0;
    case 0x7F1B9EF4u: goto label_7F1B9EF4;
    case 0x7F1B9EF8u: goto label_7F1B9EF8;
    case 0x7F1B9EFCu: goto label_7F1B9EFC;
    case 0x7F1B9F00u: goto label_7F1B9F00;
    case 0x7F1B9F04u: goto label_7F1B9F04;
    case 0x7F1B9F08u: goto label_7F1B9F08;
    case 0x7F1B9F0Cu: goto label_7F1B9F0C;
    case 0x7F1B9F10u: goto label_7F1B9F10;
    case 0x7F1B9F14u: goto label_7F1B9F14;
    case 0x7F1B9F18u: goto label_7F1B9F18;
    case 0x7F1B9F1Cu: goto label_7F1B9F1C;
    case 0x7F1B9F20u: goto label_7F1B9F20;
    case 0x7F1B9F24u: goto label_7F1B9F24;
    case 0x7F1B9F28u: goto label_7F1B9F28;
    case 0x7F1B9F2Cu: goto label_7F1B9F2C;
    case 0x7F1B9F30u: goto label_7F1B9F30;
    case 0x7F1B9F34u: goto label_7F1B9F34;
    case 0x7F1B9F38u: goto label_7F1B9F38;
    case 0x7F1B9F3Cu: goto label_7F1B9F3C;
    case 0x7F1B9F40u: goto label_7F1B9F40;
    case 0x7F1B9F44u: goto label_7F1B9F44;
    case 0x7F1B9F48u: goto label_7F1B9F48;
    case 0x7F1B9F4Cu: goto label_7F1B9F4C;
    case 0x7F1B9F50u: goto label_7F1B9F50;
    case 0x7F1B9F54u: goto label_7F1B9F54;
    case 0x7F1B9F58u: goto label_7F1B9F58;
    case 0x7F1B9F5Cu: goto label_7F1B9F5C;
    case 0x7F1B9F60u: goto label_7F1B9F60;
    case 0x7F1B9F64u: goto label_7F1B9F64;
    case 0x7F1B9F68u: goto label_7F1B9F68;
    case 0x7F1B9F6Cu: goto label_7F1B9F6C;
    case 0x7F1B9F70u: goto label_7F1B9F70;
    case 0x7F1B9F74u: goto label_7F1B9F74;
    case 0x7F1B9F78u: goto label_7F1B9F78;
    case 0x7F1B9F7Cu: goto label_7F1B9F7C;
    case 0x7F1B9F80u: goto label_7F1B9F80;
    case 0x7F1B9F84u: goto label_7F1B9F84;
    case 0x7F1B9F88u: goto label_7F1B9F88;
    case 0x7F1B9F8Cu: goto label_7F1B9F8C;
    case 0x7F1B9F90u: goto label_7F1B9F90;
    case 0x7F1B9F94u: goto label_7F1B9F94;
    case 0x7F1B9F98u: goto label_7F1B9F98;
    case 0x7F1B9F9Cu: goto label_7F1B9F9C;
    case 0x7F1B9FA0u: goto label_7F1B9FA0;
    case 0x7F1B9FA4u: goto label_7F1B9FA4;
    case 0x7F1B9FA8u: goto label_7F1B9FA8;
    case 0x7F1B9FACu: goto label_7F1B9FAC;
    case 0x7F1B9FB0u: goto label_7F1B9FB0;
    case 0x7F1B9FB4u: goto label_7F1B9FB4;
    case 0x7F1B9FB8u: goto label_7F1B9FB8;
    case 0x7F1B9FBCu: goto label_7F1B9FBC;
    case 0x7F1B9FC0u: goto label_7F1B9FC0;
    case 0x7F1B9FC4u: goto label_7F1B9FC4;
    case 0x7F1B9FC8u: goto label_7F1B9FC8;
    case 0x7F1B9FCCu: goto label_7F1B9FCC;
    case 0x7F1B9FD0u: goto label_7F1B9FD0;
    case 0x7F1B9FD4u: goto label_7F1B9FD4;
    case 0x7F1B9FD8u: goto label_7F1B9FD8;
    case 0x7F1B9FDCu: goto label_7F1B9FDC;
    case 0x7F1B9FE0u: goto label_7F1B9FE0;
    case 0x7F1B9FE4u: goto label_7F1B9FE4;
    case 0x7F1B9FE8u: goto label_7F1B9FE8;
    case 0x7F1B9FECu: goto label_7F1B9FEC;
    case 0x7F1B9FF0u: goto label_7F1B9FF0;
    case 0x7F1B9FF4u: goto label_7F1B9FF4;
    case 0x7F1B9FF8u: goto label_7F1B9FF8;
    case 0x7F1B9FFCu: goto label_7F1B9FFC;
    case 0x7F1BA000u: goto label_7F1BA000;
    case 0x7F1BA004u: goto label_7F1BA004;
    case 0x7F1BA008u: goto label_7F1BA008;
    case 0x7F1BA00Cu: goto label_7F1BA00C;
    case 0x7F1BA010u: goto label_7F1BA010;
    case 0x7F1BA014u: goto label_7F1BA014;
    case 0x7F1BA018u: goto label_7F1BA018;
    case 0x7F1BA01Cu: goto label_7F1BA01C;
    case 0x7F1BA020u: goto label_7F1BA020;
    case 0x7F1BA024u: goto label_7F1BA024;
    case 0x7F1BA028u: goto label_7F1BA028;
    case 0x7F1BA02Cu: goto label_7F1BA02C;
    case 0x7F1BA030u: goto label_7F1BA030;
    case 0x7F1BA034u: goto label_7F1BA034;
    case 0x7F1BA038u: goto label_7F1BA038;
    case 0x7F1BA03Cu: goto label_7F1BA03C;
    case 0x7F1BA040u: goto label_7F1BA040;
    case 0x7F1BA044u: goto label_7F1BA044;
    case 0x7F1BA048u: goto label_7F1BA048;
    case 0x7F1BA04Cu: goto label_7F1BA04C;
    case 0x7F1BA050u: goto label_7F1BA050;
    case 0x7F1BA054u: goto label_7F1BA054;
    case 0x7F1BA058u: goto label_7F1BA058;
    case 0x7F1BA05Cu: goto label_7F1BA05C;
    case 0x7F1BA060u: goto label_7F1BA060;
    case 0x7F1BA064u: goto label_7F1BA064;
    case 0x7F1BA068u: goto label_7F1BA068;
    case 0x7F1BA06Cu: goto label_7F1BA06C;
    case 0x7F1BA070u: goto label_7F1BA070;
    case 0x7F1BA074u: goto label_7F1BA074;
    case 0x7F1BA078u: goto label_7F1BA078;
    case 0x7F1BA07Cu: goto label_7F1BA07C;
    case 0x7F1BA080u: goto label_7F1BA080;
    case 0x7F1BA084u: goto label_7F1BA084;
    case 0x7F1BA088u: goto label_7F1BA088;
    case 0x7F1BA08Cu: goto label_7F1BA08C;
    case 0x7F1BA090u: goto label_7F1BA090;
    case 0x7F1BA094u: goto label_7F1BA094;
    case 0x7F1BA098u: goto label_7F1BA098;
    case 0x7F1BA09Cu: goto label_7F1BA09C;
    case 0x7F1BA0A0u: goto label_7F1BA0A0;
    case 0x7F1BA0A4u: goto label_7F1BA0A4;
    case 0x7F1BA0A8u: goto label_7F1BA0A8;
    case 0x7F1BA0ACu: goto label_7F1BA0AC;
    case 0x7F1BA0B0u: goto label_7F1BA0B0;
    case 0x7F1BA0B4u: goto label_7F1BA0B4;
    case 0x7F1BA0B8u: goto label_7F1BA0B8;
    case 0x7F1BA0BCu: goto label_7F1BA0BC;
    case 0x7F1BA0C0u: goto label_7F1BA0C0;
    case 0x7F1BA0C4u: goto label_7F1BA0C4;
    case 0x7F1BA0C8u: goto label_7F1BA0C8;
    case 0x7F1BA0CCu: goto label_7F1BA0CC;
    case 0x7F1BA0D0u: goto label_7F1BA0D0;
    case 0x7F1BA0D4u: goto label_7F1BA0D4;
    case 0x7F1BA0D8u: goto label_7F1BA0D8;
    case 0x7F1BA0DCu: goto label_7F1BA0DC;
    case 0x7F1BA0E0u: goto label_7F1BA0E0;
    case 0x7F1BA0E4u: goto label_7F1BA0E4;
    case 0x7F1BA0E8u: goto label_7F1BA0E8;
    case 0x7F1BA0ECu: goto label_7F1BA0EC;
    case 0x7F1BA0F0u: goto label_7F1BA0F0;
    case 0x7F1BA0F4u: goto label_7F1BA0F4;
    case 0x7F1BA0F8u: goto label_7F1BA0F8;
    case 0x7F1BA0FCu: goto label_7F1BA0FC;
    case 0x7F1BA100u: goto label_7F1BA100;
    case 0x7F1BA104u: goto label_7F1BA104;
    case 0x7F1BA108u: goto label_7F1BA108;
    case 0x7F1BA10Cu: goto label_7F1BA10C;
    case 0x7F1BA110u: goto label_7F1BA110;
    case 0x7F1BA114u: goto label_7F1BA114;
    case 0x7F1BA118u: goto label_7F1BA118;
    case 0x7F1BA11Cu: goto label_7F1BA11C;
    case 0x7F1BA120u: goto label_7F1BA120;
    case 0x7F1BA124u: goto label_7F1BA124;
    case 0x7F1BA128u: goto label_7F1BA128;
    case 0x7F1BA12Cu: goto label_7F1BA12C;
    case 0x7F1BA130u: goto label_7F1BA130;
    case 0x7F1BA134u: goto label_7F1BA134;
    case 0x7F1BA138u: goto label_7F1BA138;
    case 0x7F1BA13Cu: goto label_7F1BA13C;
    case 0x7F1BA140u: goto label_7F1BA140;
    case 0x7F1BA144u: goto label_7F1BA144;
    case 0x7F1BA148u: goto label_7F1BA148;
    case 0x7F1BA14Cu: goto label_7F1BA14C;
    case 0x7F1BA150u: goto label_7F1BA150;
    case 0x7F1BA154u: goto label_7F1BA154;
    case 0x7F1BA158u: goto label_7F1BA158;
    case 0x7F1BA15Cu: goto label_7F1BA15C;
    case 0x7F1BA160u: goto label_7F1BA160;
    case 0x7F1BA164u: goto label_7F1BA164;
    case 0x7F1BA168u: goto label_7F1BA168;
    case 0x7F1BA16Cu: goto label_7F1BA16C;
    case 0x7F1BA170u: goto label_7F1BA170;
    case 0x7F1BA174u: goto label_7F1BA174;
    case 0x7F1BA178u: goto label_7F1BA178;
    case 0x7F1BA17Cu: goto label_7F1BA17C;
    case 0x7F1BA180u: goto label_7F1BA180;
    case 0x7F1BA184u: goto label_7F1BA184;
    case 0x7F1BA188u: goto label_7F1BA188;
    case 0x7F1BA18Cu: goto label_7F1BA18C;
    case 0x7F1BA190u: goto label_7F1BA190;
    case 0x7F1BA194u: goto label_7F1BA194;
    case 0x7F1BA198u: goto label_7F1BA198;
    case 0x7F1BA19Cu: goto label_7F1BA19C;
    case 0x7F1BA1A0u: goto label_7F1BA1A0;
    case 0x7F1BA1A4u: goto label_7F1BA1A4;
    case 0x7F1BA1A8u: goto label_7F1BA1A8;
    case 0x7F1BA1ACu: goto label_7F1BA1AC;
    case 0x7F1BA1B0u: goto label_7F1BA1B0;
    case 0x7F1BA1B4u: goto label_7F1BA1B4;
    case 0x7F1BA1B8u: goto label_7F1BA1B8;
    case 0x7F1BA1BCu: goto label_7F1BA1BC;
    case 0x7F1BA1C0u: goto label_7F1BA1C0;
    case 0x7F1BA1C4u: goto label_7F1BA1C4;
    case 0x7F1BA1C8u: goto label_7F1BA1C8;
    case 0x7F1BA1CCu: goto label_7F1BA1CC;
    case 0x7F1BA1D0u: goto label_7F1BA1D0;
    case 0x7F1BA1D4u: goto label_7F1BA1D4;
    case 0x7F1BA1D8u: goto label_7F1BA1D8;
    case 0x7F1BA1DCu: goto label_7F1BA1DC;
    case 0x7F1BA1E0u: goto label_7F1BA1E0;
    case 0x7F1BA1E4u: goto label_7F1BA1E4;
    case 0x7F1BA1E8u: goto label_7F1BA1E8;
    case 0x7F1BA1ECu: goto label_7F1BA1EC;
    case 0x7F1BA1F0u: goto label_7F1BA1F0;
    case 0x7F1BA1F4u: goto label_7F1BA1F4;
    case 0x7F1BA1F8u: goto label_7F1BA1F8;
    case 0x7F1BA1FCu: goto label_7F1BA1FC;
    case 0x7F1BA200u: goto label_7F1BA200;
    case 0x7F1BA204u: goto label_7F1BA204;
    case 0x7F1BA208u: goto label_7F1BA208;
    case 0x7F1BA20Cu: goto label_7F1BA20C;
    case 0x7F1BA210u: goto label_7F1BA210;
    case 0x7F1BA214u: goto label_7F1BA214;
    case 0x7F1BA218u: goto label_7F1BA218;
    case 0x7F1BA21Cu: goto label_7F1BA21C;
    case 0x7F1BA220u: goto label_7F1BA220;
    case 0x7F1BA224u: goto label_7F1BA224;
    case 0x7F1BA228u: goto label_7F1BA228;
    case 0x7F1BA22Cu: goto label_7F1BA22C;
    case 0x7F1BA230u: goto label_7F1BA230;
    case 0x7F1BA234u: goto label_7F1BA234;
    case 0x7F1BA238u: goto label_7F1BA238;
    case 0x7F1BA23Cu: goto label_7F1BA23C;
    case 0x7F1BA240u: goto label_7F1BA240;
    case 0x7F1BA244u: goto label_7F1BA244;
    case 0x7F1BA248u: goto label_7F1BA248;
    case 0x7F1BA24Cu: goto label_7F1BA24C;
    case 0x7F1BA250u: goto label_7F1BA250;
    case 0x7F1BA254u: goto label_7F1BA254;
    case 0x7F1BA258u: goto label_7F1BA258;
    case 0x7F1BA25Cu: goto label_7F1BA25C;
    case 0x7F1BA260u: goto label_7F1BA260;
    case 0x7F1BA264u: goto label_7F1BA264;
    case 0x7F1BA268u: goto label_7F1BA268;
    case 0x7F1BA26Cu: goto label_7F1BA26C;
    case 0x7F1BA270u: goto label_7F1BA270;
    case 0x7F1BA274u: goto label_7F1BA274;
    case 0x7F1BA278u: goto label_7F1BA278;
    case 0x7F1BA27Cu: goto label_7F1BA27C;
    case 0x7F1BA280u: goto label_7F1BA280;
    case 0x7F1BA284u: goto label_7F1BA284;
    case 0x7F1BA288u: goto label_7F1BA288;
    case 0x7F1BA28Cu: goto label_7F1BA28C;
    case 0x7F1BA290u: goto label_7F1BA290;
    case 0x7F1BA294u: goto label_7F1BA294;
    case 0x7F1BA298u: goto label_7F1BA298;
    case 0x7F1BA29Cu: goto label_7F1BA29C;
    case 0x7F1BA2A0u: goto label_7F1BA2A0;
    case 0x7F1BA2A4u: goto label_7F1BA2A4;
    case 0x7F1BA2A8u: goto label_7F1BA2A8;
    case 0x7F1BA2ACu: goto label_7F1BA2AC;
    case 0x7F1BA2B0u: goto label_7F1BA2B0;
    case 0x7F1BA2B4u: goto label_7F1BA2B4;
    case 0x7F1BA2B8u: goto label_7F1BA2B8;
    case 0x7F1BA2BCu: goto label_7F1BA2BC;
    case 0x7F1BA2C0u: goto label_7F1BA2C0;
    case 0x7F1BA2C4u: goto label_7F1BA2C4;
    case 0x7F1BA2C8u: goto label_7F1BA2C8;
    case 0x7F1BA2CCu: goto label_7F1BA2CC;
    case 0x7F1BA2D0u: goto label_7F1BA2D0;
    case 0x7F1BA2D4u: goto label_7F1BA2D4;
    case 0x7F1BA2D8u: goto label_7F1BA2D8;
    case 0x7F1BA2DCu: goto label_7F1BA2DC;
    case 0x7F1BA2E0u: goto label_7F1BA2E0;
    case 0x7F1BA2E4u: goto label_7F1BA2E4;
    case 0x7F1BA2E8u: goto label_7F1BA2E8;
    case 0x7F1BA2ECu: goto label_7F1BA2EC;
    case 0x7F1BA2F0u: goto label_7F1BA2F0;
    case 0x7F1BA2F4u: goto label_7F1BA2F4;
    case 0x7F1BA2F8u: goto label_7F1BA2F8;
    case 0x7F1BA2FCu: goto label_7F1BA2FC;
    case 0x7F1BA300u: goto label_7F1BA300;
    case 0x7F1BA304u: goto label_7F1BA304;
    case 0x7F1BA308u: goto label_7F1BA308;
    case 0x7F1BA30Cu: goto label_7F1BA30C;
    case 0x7F1BA310u: goto label_7F1BA310;
    case 0x7F1BA314u: goto label_7F1BA314;
    case 0x7F1BA318u: goto label_7F1BA318;
    case 0x7F1BA31Cu: goto label_7F1BA31C;
    case 0x7F1BA320u: goto label_7F1BA320;
    case 0x7F1BA324u: goto label_7F1BA324;
    case 0x7F1BA328u: goto label_7F1BA328;
    case 0x7F1BA32Cu: goto label_7F1BA32C;
    case 0x7F1BA330u: goto label_7F1BA330;
    case 0x7F1BA334u: goto label_7F1BA334;
    case 0x7F1BA338u: goto label_7F1BA338;
    case 0x7F1BA33Cu: goto label_7F1BA33C;
    case 0x7F1BA340u: goto label_7F1BA340;
    case 0x7F1BA344u: goto label_7F1BA344;
    case 0x7F1BA348u: goto label_7F1BA348;
    case 0x7F1BA34Cu: goto label_7F1BA34C;
    case 0x7F1BA350u: goto label_7F1BA350;
    case 0x7F1BA354u: goto label_7F1BA354;
    case 0x7F1BA358u: goto label_7F1BA358;
    case 0x7F1BA35Cu: goto label_7F1BA35C;
    case 0x7F1BA360u: goto label_7F1BA360;
    case 0x7F1BA364u: goto label_7F1BA364;
    case 0x7F1BA368u: goto label_7F1BA368;
    case 0x7F1BA36Cu: goto label_7F1BA36C;
    case 0x7F1BA370u: goto label_7F1BA370;
    case 0x7F1BA374u: goto label_7F1BA374;
    case 0x7F1BA378u: goto label_7F1BA378;
    case 0x7F1BA37Cu: goto label_7F1BA37C;
    case 0x7F1BA380u: goto label_7F1BA380;
    case 0x7F1BA384u: goto label_7F1BA384;
    case 0x7F1BA388u: goto label_7F1BA388;
    case 0x7F1BA38Cu: goto label_7F1BA38C;
    case 0x7F1BA390u: goto label_7F1BA390;
    case 0x7F1BA394u: goto label_7F1BA394;
    case 0x7F1BA398u: goto label_7F1BA398;
    case 0x7F1BA39Cu: goto label_7F1BA39C;
    case 0x7F1BA3A0u: goto label_7F1BA3A0;
    case 0x7F1BA3A4u: goto label_7F1BA3A4;
    case 0x7F1BA3A8u: goto label_7F1BA3A8;
    case 0x7F1BA3ACu: goto label_7F1BA3AC;
    case 0x7F1BA3B0u: goto label_7F1BA3B0;
    case 0x7F1BA3B4u: goto label_7F1BA3B4;
    case 0x7F1BA3B8u: goto label_7F1BA3B8;
    case 0x7F1BA3BCu: goto label_7F1BA3BC;
    case 0x7F1BA3C0u: goto label_7F1BA3C0;
    case 0x7F1BA3C4u: goto label_7F1BA3C4;
    case 0x7F1BA3C8u: goto label_7F1BA3C8;
    case 0x7F1BA3CCu: goto label_7F1BA3CC;
    case 0x7F1BA3D0u: goto label_7F1BA3D0;
    case 0x7F1BA3D4u: goto label_7F1BA3D4;
    case 0x7F1BA3D8u: goto label_7F1BA3D8;
    case 0x7F1BA3DCu: goto label_7F1BA3DC;
    case 0x7F1BA3E0u: goto label_7F1BA3E0;
    case 0x7F1BA3E4u: goto label_7F1BA3E4;
    case 0x7F1BA3E8u: goto label_7F1BA3E8;
    case 0x7F1BA3ECu: goto label_7F1BA3EC;
    case 0x7F1BA3F0u: goto label_7F1BA3F0;
    case 0x7F1BA3F4u: goto label_7F1BA3F4;
    case 0x7F1BA3F8u: goto label_7F1BA3F8;
    case 0x7F1BA3FCu: goto label_7F1BA3FC;
    case 0x7F1BA400u: goto label_7F1BA400;
    case 0x7F1BA404u: goto label_7F1BA404;
    case 0x7F1BA408u: goto label_7F1BA408;
    case 0x7F1BA40Cu: goto label_7F1BA40C;
    case 0x7F1BA410u: goto label_7F1BA410;
    case 0x7F1BA414u: goto label_7F1BA414;
    case 0x7F1BA418u: goto label_7F1BA418;
    case 0x7F1BA41Cu: goto label_7F1BA41C;
    case 0x7F1BA420u: goto label_7F1BA420;
    case 0x7F1BA424u: goto label_7F1BA424;
    case 0x7F1BA428u: goto label_7F1BA428;
    case 0x7F1BA42Cu: goto label_7F1BA42C;
    case 0x7F1BA430u: goto label_7F1BA430;
    case 0x7F1BA434u: goto label_7F1BA434;
    case 0x7F1BA438u: goto label_7F1BA438;
    case 0x7F1BA43Cu: goto label_7F1BA43C;
    case 0x7F1BA440u: goto label_7F1BA440;
    case 0x7F1BA444u: goto label_7F1BA444;
    case 0x7F1BA448u: goto label_7F1BA448;
    case 0x7F1BA44Cu: goto label_7F1BA44C;
    case 0x7F1BA450u: goto label_7F1BA450;
    case 0x7F1BA454u: goto label_7F1BA454;
    case 0x7F1BA458u: goto label_7F1BA458;
    case 0x7F1BA45Cu: goto label_7F1BA45C;
    case 0x7F1BA460u: goto label_7F1BA460;
    case 0x7F1BA464u: goto label_7F1BA464;
    case 0x7F1BA468u: goto label_7F1BA468;
    case 0x7F1BA46Cu: goto label_7F1BA46C;
    case 0x7F1BA470u: goto label_7F1BA470;
    case 0x7F1BA474u: goto label_7F1BA474;
    case 0x7F1BA478u: goto label_7F1BA478;
    case 0x7F1BA47Cu: goto label_7F1BA47C;
    case 0x7F1BA480u: goto label_7F1BA480;
    case 0x7F1BA484u: goto label_7F1BA484;
    case 0x7F1BA488u: goto label_7F1BA488;
    case 0x7F1BA48Cu: goto label_7F1BA48C;
    case 0x7F1BA490u: goto label_7F1BA490;
    case 0x7F1BA494u: goto label_7F1BA494;
    case 0x7F1BA498u: goto label_7F1BA498;
    case 0x7F1BA49Cu: goto label_7F1BA49C;
    case 0x7F1BA4A0u: goto label_7F1BA4A0;
    case 0x7F1BA4A4u: goto label_7F1BA4A4;
    case 0x7F1BA4A8u: goto label_7F1BA4A8;
    case 0x7F1BA4ACu: goto label_7F1BA4AC;
    case 0x7F1BA4B0u: goto label_7F1BA4B0;
    case 0x7F1BA4B4u: goto label_7F1BA4B4;
    case 0x7F1BA4B8u: goto label_7F1BA4B8;
    case 0x7F1BA4BCu: goto label_7F1BA4BC;
    case 0x7F1BA4C0u: goto label_7F1BA4C0;
    case 0x7F1BA4C4u: goto label_7F1BA4C4;
    case 0x7F1BA4C8u: goto label_7F1BA4C8;
    case 0x7F1BA4CCu: goto label_7F1BA4CC;
    case 0x7F1BA4D0u: goto label_7F1BA4D0;
    case 0x7F1BA4D4u: goto label_7F1BA4D4;
    case 0x7F1BA4D8u: goto label_7F1BA4D8;
    case 0x7F1BA4DCu: goto label_7F1BA4DC;
    case 0x7F1BA4E0u: goto label_7F1BA4E0;
    case 0x7F1BA4E4u: goto label_7F1BA4E4;
    case 0x7F1BA4E8u: goto label_7F1BA4E8;
    case 0x7F1BA4ECu: goto label_7F1BA4EC;
    case 0x7F1BA4F0u: goto label_7F1BA4F0;
    case 0x7F1BA4F4u: goto label_7F1BA4F4;
    case 0x7F1BA4F8u: goto label_7F1BA4F8;
    case 0x7F1BA4FCu: goto label_7F1BA4FC;
    case 0x7F1BA500u: goto label_7F1BA500;
    case 0x7F1BA504u: goto label_7F1BA504;
    case 0x7F1BA508u: goto label_7F1BA508;
    case 0x7F1BA50Cu: goto label_7F1BA50C;
    case 0x7F1BA510u: goto label_7F1BA510;
    case 0x7F1BA514u: goto label_7F1BA514;
    case 0x7F1BA518u: goto label_7F1BA518;
    case 0x7F1BA51Cu: goto label_7F1BA51C;
    case 0x7F1BA520u: goto label_7F1BA520;
    case 0x7F1BA524u: goto label_7F1BA524;
    case 0x7F1BA528u: goto label_7F1BA528;
    case 0x7F1BA52Cu: goto label_7F1BA52C;
    case 0x7F1BA530u: goto label_7F1BA530;
    case 0x7F1BA534u: goto label_7F1BA534;
    case 0x7F1BA538u: goto label_7F1BA538;
    case 0x7F1BA53Cu: goto label_7F1BA53C;
    case 0x7F1BA540u: goto label_7F1BA540;
    case 0x7F1BA544u: goto label_7F1BA544;
    case 0x7F1BA548u: goto label_7F1BA548;
    case 0x7F1BA54Cu: goto label_7F1BA54C;
    case 0x7F1BA550u: goto label_7F1BA550;
    case 0x7F1BA554u: goto label_7F1BA554;
    case 0x7F1BA558u: goto label_7F1BA558;
    case 0x7F1BA55Cu: goto label_7F1BA55C;
    case 0x7F1BA560u: goto label_7F1BA560;
    case 0x7F1BA564u: goto label_7F1BA564;
    case 0x7F1BA568u: goto label_7F1BA568;
    case 0x7F1BA56Cu: goto label_7F1BA56C;
    case 0x7F1BA570u: goto label_7F1BA570;
    case 0x7F1BA574u: goto label_7F1BA574;
    case 0x7F1BA578u: goto label_7F1BA578;
    case 0x7F1BA57Cu: goto label_7F1BA57C;
    case 0x7F1BA580u: goto label_7F1BA580;
    case 0x7F1BA584u: goto label_7F1BA584;
    case 0x7F1BA588u: goto label_7F1BA588;
    case 0x7F1BA58Cu: goto label_7F1BA58C;
    case 0x7F1BA590u: goto label_7F1BA590;
    case 0x7F1BA594u: goto label_7F1BA594;
    case 0x7F1BA598u: goto label_7F1BA598;
    case 0x7F1BA59Cu: goto label_7F1BA59C;
    case 0x7F1BA5A0u: goto label_7F1BA5A0;
    case 0x7F1BA5A4u: goto label_7F1BA5A4;
    case 0x7F1BA5A8u: goto label_7F1BA5A8;
    case 0x7F1BA5ACu: goto label_7F1BA5AC;
    case 0x7F1BA5B0u: goto label_7F1BA5B0;
    case 0x7F1BA5B4u: goto label_7F1BA5B4;
    case 0x7F1BA5B8u: goto label_7F1BA5B8;
    case 0x7F1BA5BCu: goto label_7F1BA5BC;
    case 0x7F1BA5C0u: goto label_7F1BA5C0;
    case 0x7F1BA5C4u: goto label_7F1BA5C4;
    case 0x7F1BA5C8u: goto label_7F1BA5C8;
    case 0x7F1BA5CCu: goto label_7F1BA5CC;
    case 0x7F1BA5D0u: goto label_7F1BA5D0;
    case 0x7F1BA5D4u: goto label_7F1BA5D4;
    case 0x7F1BA5D8u: goto label_7F1BA5D8;
    case 0x7F1BA5DCu: goto label_7F1BA5DC;
    case 0x7F1BA5E0u: goto label_7F1BA5E0;
    case 0x7F1BA5E4u: goto label_7F1BA5E4;
    case 0x7F1BA5E8u: goto label_7F1BA5E8;
    case 0x7F1BA5ECu: goto label_7F1BA5EC;
    case 0x7F1BA5F0u: goto label_7F1BA5F0;
    case 0x7F1BA5F4u: goto label_7F1BA5F4;
    case 0x7F1BA5F8u: goto label_7F1BA5F8;
    case 0x7F1BA5FCu: goto label_7F1BA5FC;
    case 0x7F1BA600u: goto label_7F1BA600;
    case 0x7F1BA604u: goto label_7F1BA604;
    case 0x7F1BA608u: goto label_7F1BA608;
    case 0x7F1BA60Cu: goto label_7F1BA60C;
    case 0x7F1BA610u: goto label_7F1BA610;
    case 0x7F1BA614u: goto label_7F1BA614;
    case 0x7F1BA618u: goto label_7F1BA618;
    case 0x7F1BA61Cu: goto label_7F1BA61C;
    case 0x7F1BA620u: goto label_7F1BA620;
    case 0x7F1BA624u: goto label_7F1BA624;
    case 0x7F1BA628u: goto label_7F1BA628;
    case 0x7F1BA62Cu: goto label_7F1BA62C;
    case 0x7F1BA630u: goto label_7F1BA630;
    case 0x7F1BA634u: goto label_7F1BA634;
    case 0x7F1BA638u: goto label_7F1BA638;
    case 0x7F1BA63Cu: goto label_7F1BA63C;
    case 0x7F1BA640u: goto label_7F1BA640;
    case 0x7F1BA644u: goto label_7F1BA644;
    case 0x7F1BA648u: goto label_7F1BA648;
    case 0x7F1BA64Cu: goto label_7F1BA64C;
    case 0x7F1BA650u: goto label_7F1BA650;
    case 0x7F1BA654u: goto label_7F1BA654;
    case 0x7F1BA658u: goto label_7F1BA658;
    case 0x7F1BA65Cu: goto label_7F1BA65C;
    case 0x7F1BA660u: goto label_7F1BA660;
    case 0x7F1BA664u: goto label_7F1BA664;
    case 0x7F1BA668u: goto label_7F1BA668;
    case 0x7F1BA66Cu: goto label_7F1BA66C;
    case 0x7F1BA670u: goto label_7F1BA670;
    case 0x7F1BA674u: goto label_7F1BA674;
    case 0x7F1BA678u: goto label_7F1BA678;
    case 0x7F1BA67Cu: goto label_7F1BA67C;
    case 0x7F1BA680u: goto label_7F1BA680;
    case 0x7F1BA684u: goto label_7F1BA684;
    case 0x7F1BA688u: goto label_7F1BA688;
    case 0x7F1BA68Cu: goto label_7F1BA68C;
    case 0x7F1BA690u: goto label_7F1BA690;
    case 0x7F1BA694u: goto label_7F1BA694;
    case 0x7F1BA698u: goto label_7F1BA698;
    case 0x7F1BA69Cu: goto label_7F1BA69C;
    case 0x7F1BA6A0u: goto label_7F1BA6A0;
    case 0x7F1BA6A4u: goto label_7F1BA6A4;
    case 0x7F1BA6A8u: goto label_7F1BA6A8;
    case 0x7F1BA6ACu: goto label_7F1BA6AC;
    case 0x7F1BA6B0u: goto label_7F1BA6B0;
    case 0x7F1BA6B4u: goto label_7F1BA6B4;
    case 0x7F1BA6B8u: goto label_7F1BA6B8;
    case 0x7F1BA6BCu: goto label_7F1BA6BC;
    case 0x7F1BA6C0u: goto label_7F1BA6C0;
    case 0x7F1BA6C4u: goto label_7F1BA6C4;
    case 0x7F1BA6C8u: goto label_7F1BA6C8;
    case 0x7F1BA6CCu: goto label_7F1BA6CC;
    case 0x7F1BA6D0u: goto label_7F1BA6D0;
    case 0x7F1BA6D4u: goto label_7F1BA6D4;
    case 0x7F1BA6D8u: goto label_7F1BA6D8;
    case 0x7F1BA6DCu: goto label_7F1BA6DC;
    case 0x7F1BA6E0u: goto label_7F1BA6E0;
    case 0x7F1BA6E4u: goto label_7F1BA6E4;
    case 0x7F1BA6E8u: goto label_7F1BA6E8;
    case 0x7F1BA6ECu: goto label_7F1BA6EC;
    case 0x7F1BA6F0u: goto label_7F1BA6F0;
    case 0x7F1BA6F4u: goto label_7F1BA6F4;
    case 0x7F1BA6F8u: goto label_7F1BA6F8;
    case 0x7F1BA6FCu: goto label_7F1BA6FC;
    case 0x7F1BA700u: goto label_7F1BA700;
    case 0x7F1BA704u: goto label_7F1BA704;
    case 0x7F1BA708u: goto label_7F1BA708;
    case 0x7F1BA70Cu: goto label_7F1BA70C;
    case 0x7F1BA710u: goto label_7F1BA710;
    case 0x7F1BA714u: goto label_7F1BA714;
    case 0x7F1BA718u: goto label_7F1BA718;
    case 0x7F1BA71Cu: goto label_7F1BA71C;
    case 0x7F1BA720u: goto label_7F1BA720;
    case 0x7F1BA724u: goto label_7F1BA724;
    case 0x7F1BA728u: goto label_7F1BA728;
    case 0x7F1BA72Cu: goto label_7F1BA72C;
    case 0x7F1BA730u: goto label_7F1BA730;
    case 0x7F1BA734u: goto label_7F1BA734;
    case 0x7F1BA738u: goto label_7F1BA738;
    case 0x7F1BA73Cu: goto label_7F1BA73C;
    case 0x7F1BA740u: goto label_7F1BA740;
    case 0x7F1BA744u: goto label_7F1BA744;
    case 0x7F1BA748u: goto label_7F1BA748;
    case 0x7F1BA74Cu: goto label_7F1BA74C;
    case 0x7F1BA750u: goto label_7F1BA750;
    case 0x7F1BA754u: goto label_7F1BA754;
    case 0x7F1BA758u: goto label_7F1BA758;
    case 0x7F1BA75Cu: goto label_7F1BA75C;
    case 0x7F1BA760u: goto label_7F1BA760;
    case 0x7F1BA764u: goto label_7F1BA764;
    case 0x7F1BA768u: goto label_7F1BA768;
    case 0x7F1BA76Cu: goto label_7F1BA76C;
    case 0x7F1BA770u: goto label_7F1BA770;
    case 0x7F1BA774u: goto label_7F1BA774;
    case 0x7F1BA778u: goto label_7F1BA778;
    case 0x7F1BA77Cu: goto label_7F1BA77C;
    case 0x7F1BA780u: goto label_7F1BA780;
    case 0x7F1BA784u: goto label_7F1BA784;
    case 0x7F1BA788u: goto label_7F1BA788;
    case 0x7F1BA78Cu: goto label_7F1BA78C;
    case 0x7F1BA790u: goto label_7F1BA790;
    case 0x7F1BA794u: goto label_7F1BA794;
    case 0x7F1BA798u: goto label_7F1BA798;
    case 0x7F1BA79Cu: goto label_7F1BA79C;
    case 0x7F1BA7A0u: goto label_7F1BA7A0;
    case 0x7F1BA7A4u: goto label_7F1BA7A4;
    case 0x7F1BA7A8u: goto label_7F1BA7A8;
    case 0x7F1BA7ACu: goto label_7F1BA7AC;
    case 0x7F1BA7B0u: goto label_7F1BA7B0;
    case 0x7F1BA7B4u: goto label_7F1BA7B4;
    case 0x7F1BA7B8u: goto label_7F1BA7B8;
    case 0x7F1BA7BCu: goto label_7F1BA7BC;
    case 0x7F1BA7C0u: goto label_7F1BA7C0;
    case 0x7F1BA7C4u: goto label_7F1BA7C4;
    case 0x7F1BA7C8u: goto label_7F1BA7C8;
    case 0x7F1BA7CCu: goto label_7F1BA7CC;
    case 0x7F1BA7D0u: goto label_7F1BA7D0;
    case 0x7F1BA7D4u: goto label_7F1BA7D4;
    case 0x7F1BA7D8u: goto label_7F1BA7D8;
    case 0x7F1BA7DCu: goto label_7F1BA7DC;
    case 0x7F1BA7E0u: goto label_7F1BA7E0;
    case 0x7F1BA7E4u: goto label_7F1BA7E4;
    case 0x7F1BA7E8u: goto label_7F1BA7E8;
    case 0x7F1BA7ECu: goto label_7F1BA7EC;
    case 0x7F1BA7F0u: goto label_7F1BA7F0;
    case 0x7F1BA7F4u: goto label_7F1BA7F4;
    case 0x7F1BA7F8u: goto label_7F1BA7F8;
    case 0x7F1BA7FCu: goto label_7F1BA7FC;
    case 0x7F1BA800u: goto label_7F1BA800;
    case 0x7F1BA804u: goto label_7F1BA804;
    case 0x7F1BA808u: goto label_7F1BA808;
    case 0x7F1BA80Cu: goto label_7F1BA80C;
    case 0x7F1BA810u: goto label_7F1BA810;
    case 0x7F1BA814u: goto label_7F1BA814;
    case 0x7F1BA818u: goto label_7F1BA818;
    case 0x7F1BA81Cu: goto label_7F1BA81C;
    case 0x7F1BA820u: goto label_7F1BA820;
    case 0x7F1BA824u: goto label_7F1BA824;
    case 0x7F1BA828u: goto label_7F1BA828;
    case 0x7F1BA82Cu: goto label_7F1BA82C;
    case 0x7F1BA830u: goto label_7F1BA830;
    case 0x7F1BA834u: goto label_7F1BA834;
    case 0x7F1BA838u: goto label_7F1BA838;
    case 0x7F1BA83Cu: goto label_7F1BA83C;
    case 0x7F1BA840u: goto label_7F1BA840;
    case 0x7F1BA844u: goto label_7F1BA844;
    case 0x7F1BA848u: goto label_7F1BA848;
    case 0x7F1BA84Cu: goto label_7F1BA84C;
    case 0x7F1BA850u: goto label_7F1BA850;
    case 0x7F1BA854u: goto label_7F1BA854;
    case 0x7F1BA858u: goto label_7F1BA858;
    case 0x7F1BA85Cu: goto label_7F1BA85C;
    case 0x7F1BA860u: goto label_7F1BA860;
    case 0x7F1BA864u: goto label_7F1BA864;
    case 0x7F1BA868u: goto label_7F1BA868;
    case 0x7F1BA86Cu: goto label_7F1BA86C;
    case 0x7F1BA870u: goto label_7F1BA870;
    case 0x7F1BA874u: goto label_7F1BA874;
    case 0x7F1BA878u: goto label_7F1BA878;
    case 0x7F1BA87Cu: goto label_7F1BA87C;
    case 0x7F1BA880u: goto label_7F1BA880;
    case 0x7F1BA884u: goto label_7F1BA884;
    case 0x7F1BA888u: goto label_7F1BA888;
    case 0x7F1BA88Cu: goto label_7F1BA88C;
    case 0x7F1BA890u: goto label_7F1BA890;
    case 0x7F1BA894u: goto label_7F1BA894;
    case 0x7F1BA898u: goto label_7F1BA898;
    case 0x7F1BA89Cu: goto label_7F1BA89C;
    case 0x7F1BA8A0u: goto label_7F1BA8A0;
    case 0x7F1BA8A4u: goto label_7F1BA8A4;
    case 0x7F1BA8A8u: goto label_7F1BA8A8;
    case 0x7F1BA8ACu: goto label_7F1BA8AC;
    case 0x7F1BA8B0u: goto label_7F1BA8B0;
    case 0x7F1BA8B4u: goto label_7F1BA8B4;
    case 0x7F1BA8B8u: goto label_7F1BA8B8;
    case 0x7F1BA8BCu: goto label_7F1BA8BC;
    case 0x7F1BA8C0u: goto label_7F1BA8C0;
    case 0x7F1BA8C4u: goto label_7F1BA8C4;
    case 0x7F1BA8C8u: goto label_7F1BA8C8;
    case 0x7F1BA8CCu: goto label_7F1BA8CC;
    case 0x7F1BA8D0u: goto label_7F1BA8D0;
    case 0x7F1BA8D4u: goto label_7F1BA8D4;
    case 0x7F1BA8D8u: goto label_7F1BA8D8;
    case 0x7F1BA8DCu: goto label_7F1BA8DC;
    case 0x7F1BA8E0u: goto label_7F1BA8E0;
    case 0x7F1BA8E4u: goto label_7F1BA8E4;
    case 0x7F1BA8E8u: goto label_7F1BA8E8;
    case 0x7F1BA8ECu: goto label_7F1BA8EC;
    case 0x7F1BA8F0u: goto label_7F1BA8F0;
    case 0x7F1BA8F4u: goto label_7F1BA8F4;
    case 0x7F1BA8F8u: goto label_7F1BA8F8;
    case 0x7F1BA8FCu: goto label_7F1BA8FC;
    case 0x7F1BA900u: goto label_7F1BA900;
    case 0x7F1BA904u: goto label_7F1BA904;
    case 0x7F1BA908u: goto label_7F1BA908;
    case 0x7F1BA90Cu: goto label_7F1BA90C;
    case 0x7F1BA910u: goto label_7F1BA910;
    case 0x7F1BA914u: goto label_7F1BA914;
    case 0x7F1BA918u: goto label_7F1BA918;
    case 0x7F1BA91Cu: goto label_7F1BA91C;
    case 0x7F1BA920u: goto label_7F1BA920;
    case 0x7F1BA924u: goto label_7F1BA924;
    case 0x7F1BA928u: goto label_7F1BA928;
    case 0x7F1BA92Cu: goto label_7F1BA92C;
    case 0x7F1BA930u: goto label_7F1BA930;
    case 0x7F1BA934u: goto label_7F1BA934;
    case 0x7F1BA938u: goto label_7F1BA938;
    case 0x7F1BA93Cu: goto label_7F1BA93C;
    case 0x7F1BA940u: goto label_7F1BA940;
    case 0x7F1BA944u: goto label_7F1BA944;
    case 0x7F1BA948u: goto label_7F1BA948;
    case 0x7F1BA94Cu: goto label_7F1BA94C;
    case 0x7F1BA950u: goto label_7F1BA950;
    case 0x7F1BA954u: goto label_7F1BA954;
    case 0x7F1BA958u: goto label_7F1BA958;
    case 0x7F1BA95Cu: goto label_7F1BA95C;
    case 0x7F1BA960u: goto label_7F1BA960;
    case 0x7F1BA964u: goto label_7F1BA964;
    case 0x7F1BA968u: goto label_7F1BA968;
    case 0x7F1BA96Cu: goto label_7F1BA96C;
    case 0x7F1BA970u: goto label_7F1BA970;
    case 0x7F1BA974u: goto label_7F1BA974;
    case 0x7F1BA978u: goto label_7F1BA978;
    case 0x7F1BA97Cu: goto label_7F1BA97C;
    case 0x7F1BA980u: goto label_7F1BA980;
    case 0x7F1BA984u: goto label_7F1BA984;
    case 0x7F1BA988u: goto label_7F1BA988;
    case 0x7F1BA98Cu: goto label_7F1BA98C;
    case 0x7F1BA990u: goto label_7F1BA990;
    case 0x7F1BA994u: goto label_7F1BA994;
    case 0x7F1BA998u: goto label_7F1BA998;
    case 0x7F1BA99Cu: goto label_7F1BA99C;
    case 0x7F1BA9A0u: goto label_7F1BA9A0;
    case 0x7F1BA9A4u: goto label_7F1BA9A4;
    case 0x7F1BA9A8u: goto label_7F1BA9A8;
    case 0x7F1BA9ACu: goto label_7F1BA9AC;
    case 0x7F1BA9B0u: goto label_7F1BA9B0;
    case 0x7F1BA9B4u: goto label_7F1BA9B4;
    case 0x7F1BA9B8u: goto label_7F1BA9B8;
    case 0x7F1BA9BCu: goto label_7F1BA9BC;
    case 0x7F1BA9C0u: goto label_7F1BA9C0;
    case 0x7F1BA9C4u: goto label_7F1BA9C4;
    case 0x7F1BA9C8u: goto label_7F1BA9C8;
    case 0x7F1BA9CCu: goto label_7F1BA9CC;
    case 0x7F1BA9D0u: goto label_7F1BA9D0;
    case 0x7F1BA9D4u: goto label_7F1BA9D4;
    case 0x7F1BA9D8u: goto label_7F1BA9D8;
    case 0x7F1BA9DCu: goto label_7F1BA9DC;
    case 0x7F1BA9E0u: goto label_7F1BA9E0;
    case 0x7F1BA9E4u: goto label_7F1BA9E4;
    case 0x7F1BA9E8u: goto label_7F1BA9E8;
    case 0x7F1BA9ECu: goto label_7F1BA9EC;
    case 0x7F1BA9F0u: goto label_7F1BA9F0;
    case 0x7F1BA9F4u: goto label_7F1BA9F4;
    case 0x7F1BA9F8u: goto label_7F1BA9F8;
    case 0x7F1BA9FCu: goto label_7F1BA9FC;
    case 0x7F1BAA00u: goto label_7F1BAA00;
    case 0x7F1BAA04u: goto label_7F1BAA04;
    case 0x7F1BAA08u: goto label_7F1BAA08;
    case 0x7F1BAA0Cu: goto label_7F1BAA0C;
    case 0x7F1BAA10u: goto label_7F1BAA10;
    case 0x7F1BAA14u: goto label_7F1BAA14;
    case 0x7F1BAA18u: goto label_7F1BAA18;
    case 0x7F1BAA1Cu: goto label_7F1BAA1C;
    case 0x7F1BAA20u: goto label_7F1BAA20;
    case 0x7F1BAA24u: goto label_7F1BAA24;
    case 0x7F1BAA28u: goto label_7F1BAA28;
    case 0x7F1BAA2Cu: goto label_7F1BAA2C;
    case 0x7F1BAA30u: goto label_7F1BAA30;
    case 0x7F1BAA34u: goto label_7F1BAA34;
    case 0x7F1BAA38u: goto label_7F1BAA38;
    case 0x7F1BAA3Cu: goto label_7F1BAA3C;
    case 0x7F1BAA40u: goto label_7F1BAA40;
    case 0x7F1BAA44u: goto label_7F1BAA44;
    case 0x7F1BAA48u: goto label_7F1BAA48;
    case 0x7F1BAA4Cu: goto label_7F1BAA4C;
    case 0x7F1BAA50u: goto label_7F1BAA50;
    case 0x7F1BAA54u: goto label_7F1BAA54;
    case 0x7F1BAA58u: goto label_7F1BAA58;
    case 0x7F1BAA5Cu: goto label_7F1BAA5C;
    case 0x7F1BAA60u: goto label_7F1BAA60;
    case 0x7F1BAA64u: goto label_7F1BAA64;
    case 0x7F1BAA68u: goto label_7F1BAA68;
    case 0x7F1BAA6Cu: goto label_7F1BAA6C;
    case 0x7F1BAA70u: goto label_7F1BAA70;
    case 0x7F1BAA74u: goto label_7F1BAA74;
    case 0x7F1BAA78u: goto label_7F1BAA78;
    case 0x7F1BAA7Cu: goto label_7F1BAA7C;
    case 0x7F1BAA80u: goto label_7F1BAA80;
    case 0x7F1BAA84u: goto label_7F1BAA84;
    case 0x7F1BAA88u: goto label_7F1BAA88;
    case 0x7F1BAA8Cu: goto label_7F1BAA8C;
    case 0x7F1BAA90u: goto label_7F1BAA90;
    case 0x7F1BAA94u: goto label_7F1BAA94;
    case 0x7F1BAA98u: goto label_7F1BAA98;
    case 0x7F1BAA9Cu: goto label_7F1BAA9C;
    case 0x7F1BAAA0u: goto label_7F1BAAA0;
    case 0x7F1BAAA4u: goto label_7F1BAAA4;
    case 0x7F1BAAA8u: goto label_7F1BAAA8;
    case 0x7F1BAAACu: goto label_7F1BAAAC;
    case 0x7F1BAAB0u: goto label_7F1BAAB0;
    case 0x7F1BAAB4u: goto label_7F1BAAB4;
    case 0x7F1BAAB8u: goto label_7F1BAAB8;
    case 0x7F1BAABCu: goto label_7F1BAABC;
    case 0x7F1BAAC0u: goto label_7F1BAAC0;
    case 0x7F1BAAC4u: goto label_7F1BAAC4;
    case 0x7F1BAAC8u: goto label_7F1BAAC8;
    case 0x7F1BAACCu: goto label_7F1BAACC;
    case 0x7F1BAAD0u: goto label_7F1BAAD0;
    case 0x7F1BAAD4u: goto label_7F1BAAD4;
    case 0x7F1BAAD8u: goto label_7F1BAAD8;
    case 0x7F1BAADCu: goto label_7F1BAADC;
    case 0x7F1BAAE0u: goto label_7F1BAAE0;
    case 0x7F1BAAE4u: goto label_7F1BAAE4;
    case 0x7F1BAAE8u: goto label_7F1BAAE8;
    case 0x7F1BAAECu: goto label_7F1BAAEC;
    case 0x7F1BAAF0u: goto label_7F1BAAF0;
    case 0x7F1BAAF4u: goto label_7F1BAAF4;
    case 0x7F1BAAF8u: goto label_7F1BAAF8;
    case 0x7F1BAAFCu: goto label_7F1BAAFC;
    case 0x7F1BAB00u: goto label_7F1BAB00;
    case 0x7F1BAB04u: goto label_7F1BAB04;
    case 0x7F1BAB08u: goto label_7F1BAB08;
    case 0x7F1BAB0Cu: goto label_7F1BAB0C;
    case 0x7F1BAB10u: goto label_7F1BAB10;
    case 0x7F1BAB14u: goto label_7F1BAB14;
    case 0x7F1BAB18u: goto label_7F1BAB18;
    case 0x7F1BAB1Cu: goto label_7F1BAB1C;
    case 0x7F1BAB20u: goto label_7F1BAB20;
    case 0x7F1BAB24u: goto label_7F1BAB24;
    case 0x7F1BAB28u: goto label_7F1BAB28;
    case 0x7F1BAB2Cu: goto label_7F1BAB2C;
    case 0x7F1BAB30u: goto label_7F1BAB30;
    case 0x7F1BAB34u: goto label_7F1BAB34;
    case 0x7F1BAB38u: goto label_7F1BAB38;
    case 0x7F1BAB3Cu: goto label_7F1BAB3C;
    case 0x7F1BAB40u: goto label_7F1BAB40;
    case 0x7F1BAB44u: goto label_7F1BAB44;
    case 0x7F1BAB48u: goto label_7F1BAB48;
    case 0x7F1BAB4Cu: goto label_7F1BAB4C;
    case 0x7F1BAB50u: goto label_7F1BAB50;
    case 0x7F1BAB54u: goto label_7F1BAB54;
    case 0x7F1BAB58u: goto label_7F1BAB58;
    case 0x7F1BAB5Cu: goto label_7F1BAB5C;
    case 0x7F1BAB60u: goto label_7F1BAB60;
    case 0x7F1BAB64u: goto label_7F1BAB64;
    case 0x7F1BAB68u: goto label_7F1BAB68;
    case 0x7F1BAB6Cu: goto label_7F1BAB6C;
    case 0x7F1BAB70u: goto label_7F1BAB70;
    case 0x7F1BAB74u: goto label_7F1BAB74;
    case 0x7F1BAB78u: goto label_7F1BAB78;
    case 0x7F1BAB7Cu: goto label_7F1BAB7C;
    case 0x7F1BAB80u: goto label_7F1BAB80;
    case 0x7F1BAB84u: goto label_7F1BAB84;
    case 0x7F1BAB88u: goto label_7F1BAB88;
    case 0x7F1BAB8Cu: goto label_7F1BAB8C;
    case 0x7F1BAB90u: goto label_7F1BAB90;
    case 0x7F1BAB94u: goto label_7F1BAB94;
    case 0x7F1BAB98u: goto label_7F1BAB98;
    case 0x7F1BAB9Cu: goto label_7F1BAB9C;
    case 0x7F1BABA0u: goto label_7F1BABA0;
    case 0x7F1BABA4u: goto label_7F1BABA4;
    case 0x7F1BABA8u: goto label_7F1BABA8;
    case 0x7F1BABACu: goto label_7F1BABAC;
    case 0x7F1BABB0u: goto label_7F1BABB0;
    case 0x7F1BABB4u: goto label_7F1BABB4;
    case 0x7F1BABB8u: goto label_7F1BABB8;
    case 0x7F1BABBCu: goto label_7F1BABBC;
    case 0x7F1BABC0u: goto label_7F1BABC0;
    case 0x7F1BABC4u: goto label_7F1BABC4;
    case 0x7F1BABC8u: goto label_7F1BABC8;
    case 0x7F1BABCCu: goto label_7F1BABCC;
    case 0x7F1BABD0u: goto label_7F1BABD0;
    case 0x7F1BABD4u: goto label_7F1BABD4;
    case 0x7F1BABD8u: goto label_7F1BABD8;
    case 0x7F1BABDCu: goto label_7F1BABDC;
    case 0x7F1BABE0u: goto label_7F1BABE0;
    case 0x7F1BABE4u: goto label_7F1BABE4;
    case 0x7F1BABE8u: goto label_7F1BABE8;
    case 0x7F1BABECu: goto label_7F1BABEC;
    case 0x7F1BABF0u: goto label_7F1BABF0;
    case 0x7F1BABF4u: goto label_7F1BABF4;
    case 0x7F1BABF8u: goto label_7F1BABF8;
    case 0x7F1BABFCu: goto label_7F1BABFC;
    case 0x7F1BAC00u: goto label_7F1BAC00;
    case 0x7F1BAC04u: goto label_7F1BAC04;
    case 0x7F1BAC08u: goto label_7F1BAC08;
    case 0x7F1BAC0Cu: goto label_7F1BAC0C;
    case 0x7F1BAC10u: goto label_7F1BAC10;
    case 0x7F1BAC14u: goto label_7F1BAC14;
    case 0x7F1BAC18u: goto label_7F1BAC18;
    case 0x7F1BAC1Cu: goto label_7F1BAC1C;
    case 0x7F1BAC20u: goto label_7F1BAC20;
    case 0x7F1BAC24u: goto label_7F1BAC24;
    case 0x7F1BAC28u: goto label_7F1BAC28;
    case 0x7F1BAC2Cu: goto label_7F1BAC2C;
    case 0x7F1BAC30u: goto label_7F1BAC30;
    case 0x7F1BAC34u: goto label_7F1BAC34;
    case 0x7F1BAC38u: goto label_7F1BAC38;
    case 0x7F1BAC3Cu: goto label_7F1BAC3C;
    case 0x7F1BAC40u: goto label_7F1BAC40;
    case 0x7F1BAC44u: goto label_7F1BAC44;
    case 0x7F1BAC48u: goto label_7F1BAC48;
    case 0x7F1BAC4Cu: goto label_7F1BAC4C;
    case 0x7F1BAC50u: goto label_7F1BAC50;
    case 0x7F1BAC54u: goto label_7F1BAC54;
    case 0x7F1BAC58u: goto label_7F1BAC58;
    case 0x7F1BAC5Cu: goto label_7F1BAC5C;
    case 0x7F1BAC60u: goto label_7F1BAC60;
    case 0x7F1BAC64u: goto label_7F1BAC64;
    case 0x7F1BAC68u: goto label_7F1BAC68;
    case 0x7F1BAC6Cu: goto label_7F1BAC6C;
    case 0x7F1BAC70u: goto label_7F1BAC70;
    case 0x7F1BAC74u: goto label_7F1BAC74;
    case 0x7F1BAC78u: goto label_7F1BAC78;
    case 0x7F1BAC7Cu: goto label_7F1BAC7C;
    case 0x7F1BAC80u: goto label_7F1BAC80;
    case 0x7F1BAC84u: goto label_7F1BAC84;
    case 0x7F1BAC88u: goto label_7F1BAC88;
    case 0x7F1BAC8Cu: goto label_7F1BAC8C;
    case 0x7F1BAC90u: goto label_7F1BAC90;
    case 0x7F1BAC94u: goto label_7F1BAC94;
    case 0x7F1BAC98u: goto label_7F1BAC98;
    case 0x7F1BAC9Cu: goto label_7F1BAC9C;
    case 0x7F1BACA0u: goto label_7F1BACA0;
    case 0x7F1BACA4u: goto label_7F1BACA4;
    case 0x7F1BACA8u: goto label_7F1BACA8;
    case 0x7F1BACACu: goto label_7F1BACAC;
    case 0x7F1BACB0u: goto label_7F1BACB0;
    case 0x7F1BACB4u: goto label_7F1BACB4;
    case 0x7F1BACB8u: goto label_7F1BACB8;
    case 0x7F1BACBCu: goto label_7F1BACBC;
    case 0x7F1BACC0u: goto label_7F1BACC0;
    case 0x7F1BACC4u: goto label_7F1BACC4;
    case 0x7F1BACC8u: goto label_7F1BACC8;
    case 0x7F1BACCCu: goto label_7F1BACCC;
    case 0x7F1BACD0u: goto label_7F1BACD0;
    case 0x7F1BACD4u: goto label_7F1BACD4;
    case 0x7F1BACD8u: goto label_7F1BACD8;
    case 0x7F1BACDCu: goto label_7F1BACDC;
    case 0x7F1BACE0u: goto label_7F1BACE0;
    case 0x7F1BACE4u: goto label_7F1BACE4;
    case 0x7F1BACE8u: goto label_7F1BACE8;
    case 0x7F1BACECu: goto label_7F1BACEC;
    case 0x7F1BACF0u: goto label_7F1BACF0;
    case 0x7F1BACF4u: goto label_7F1BACF4;
    case 0x7F1BACF8u: goto label_7F1BACF8;
    case 0x7F1BACFCu: goto label_7F1BACFC;
    case 0x7F1BAD00u: goto label_7F1BAD00;
    case 0x7F1BAD04u: goto label_7F1BAD04;
    case 0x7F1BAD08u: goto label_7F1BAD08;
    case 0x7F1BAD0Cu: goto label_7F1BAD0C;
    case 0x7F1BAD10u: goto label_7F1BAD10;
    case 0x7F1BAD14u: goto label_7F1BAD14;
    case 0x7F1BAD18u: goto label_7F1BAD18;
    case 0x7F1BAD1Cu: goto label_7F1BAD1C;
    case 0x7F1BAD20u: goto label_7F1BAD20;
    case 0x7F1BAD24u: goto label_7F1BAD24;
    case 0x7F1BAD28u: goto label_7F1BAD28;
    case 0x7F1BAD2Cu: goto label_7F1BAD2C;
    case 0x7F1BAD30u: goto label_7F1BAD30;
    case 0x7F1BAD34u: goto label_7F1BAD34;
    case 0x7F1BAD38u: goto label_7F1BAD38;
    case 0x7F1BAD3Cu: goto label_7F1BAD3C;
    case 0x7F1BAD40u: goto label_7F1BAD40;
    case 0x7F1BAD44u: goto label_7F1BAD44;
    case 0x7F1BAD48u: goto label_7F1BAD48;
    case 0x7F1BAD4Cu: goto label_7F1BAD4C;
    case 0x7F1BAD50u: goto label_7F1BAD50;
    case 0x7F1BAD54u: goto label_7F1BAD54;
    case 0x7F1BAD58u: goto label_7F1BAD58;
    case 0x7F1BAD5Cu: goto label_7F1BAD5C;
    case 0x7F1BAD60u: goto label_7F1BAD60;
    case 0x7F1BAD64u: goto label_7F1BAD64;
    case 0x7F1BAD68u: goto label_7F1BAD68;
    case 0x7F1BAD6Cu: goto label_7F1BAD6C;
    case 0x7F1BAD70u: goto label_7F1BAD70;
    case 0x7F1BAD74u: goto label_7F1BAD74;
    case 0x7F1BAD78u: goto label_7F1BAD78;
    case 0x7F1BAD7Cu: goto label_7F1BAD7C;
    case 0x7F1BAD80u: goto label_7F1BAD80;
    case 0x7F1BAD84u: goto label_7F1BAD84;
    case 0x7F1BAD88u: goto label_7F1BAD88;
    case 0x7F1BAD8Cu: goto label_7F1BAD8C;
    case 0x7F1BAD90u: goto label_7F1BAD90;
    case 0x7F1BAD94u: goto label_7F1BAD94;
    case 0x7F1BAD98u: goto label_7F1BAD98;
    case 0x7F1BAD9Cu: goto label_7F1BAD9C;
    case 0x7F1BADA0u: goto label_7F1BADA0;
    case 0x7F1BADA4u: goto label_7F1BADA4;
    case 0x7F1BADA8u: goto label_7F1BADA8;
    case 0x7F1BADACu: goto label_7F1BADAC;
    case 0x7F1BADB0u: goto label_7F1BADB0;
    case 0x7F1BADB4u: goto label_7F1BADB4;
    case 0x7F1BADB8u: goto label_7F1BADB8;
    case 0x7F1BADBCu: goto label_7F1BADBC;
    case 0x7F1BADC0u: goto label_7F1BADC0;
    case 0x7F1BADC4u: goto label_7F1BADC4;
    case 0x7F1BADC8u: goto label_7F1BADC8;
    case 0x7F1BADCCu: goto label_7F1BADCC;
    case 0x7F1BADD0u: goto label_7F1BADD0;
    case 0x7F1BADD4u: goto label_7F1BADD4;
    case 0x7F1BADD8u: goto label_7F1BADD8;
    case 0x7F1BADDCu: goto label_7F1BADDC;
    case 0x7F1BADE0u: goto label_7F1BADE0;
    case 0x7F1BADE4u: goto label_7F1BADE4;
    case 0x7F1BADE8u: goto label_7F1BADE8;
    case 0x7F1BADECu: goto label_7F1BADEC;
    case 0x7F1BADF0u: goto label_7F1BADF0;
    case 0x7F1BADF4u: goto label_7F1BADF4;
    case 0x7F1BADF8u: goto label_7F1BADF8;
    case 0x7F1BADFCu: goto label_7F1BADFC;
    case 0x7F1BAE00u: goto label_7F1BAE00;
    case 0x7F1BAE04u: goto label_7F1BAE04;
    case 0x7F1BAE08u: goto label_7F1BAE08;
    case 0x7F1BAE0Cu: goto label_7F1BAE0C;
    case 0x7F1BAE10u: goto label_7F1BAE10;
    case 0x7F1BAE14u: goto label_7F1BAE14;
    case 0x7F1BAE18u: goto label_7F1BAE18;
    case 0x7F1BAE1Cu: goto label_7F1BAE1C;
    case 0x7F1BAE20u: goto label_7F1BAE20;
    case 0x7F1BAE24u: goto label_7F1BAE24;
    case 0x7F1BAE28u: goto label_7F1BAE28;
    case 0x7F1BAE2Cu: goto label_7F1BAE2C;
    case 0x7F1BAE30u: goto label_7F1BAE30;
    case 0x7F1BAE34u: goto label_7F1BAE34;
    case 0x7F1BAE38u: goto label_7F1BAE38;
    case 0x7F1BAE3Cu: goto label_7F1BAE3C;
    case 0x7F1BAE40u: goto label_7F1BAE40;
    case 0x7F1BAE44u: goto label_7F1BAE44;
    case 0x7F1BAE48u: goto label_7F1BAE48;
    case 0x7F1BAE4Cu: goto label_7F1BAE4C;
    case 0x7F1BAE50u: goto label_7F1BAE50;
    case 0x7F1BAE54u: goto label_7F1BAE54;
    case 0x7F1BAE58u: goto label_7F1BAE58;
    case 0x7F1BAE5Cu: goto label_7F1BAE5C;
    case 0x7F1BAE60u: goto label_7F1BAE60;
    case 0x7F1BAE64u: goto label_7F1BAE64;
    case 0x7F1BAE68u: goto label_7F1BAE68;
    case 0x7F1BAE6Cu: goto label_7F1BAE6C;
    case 0x7F1BAE70u: goto label_7F1BAE70;
    case 0x7F1BAE74u: goto label_7F1BAE74;
    case 0x7F1BAE78u: goto label_7F1BAE78;
    case 0x7F1BAE7Cu: goto label_7F1BAE7C;
    case 0x7F1BAE80u: goto label_7F1BAE80;
    case 0x7F1BAE84u: goto label_7F1BAE84;
    case 0x7F1BAE88u: goto label_7F1BAE88;
    case 0x7F1BAE8Cu: goto label_7F1BAE8C;
    case 0x7F1BAE90u: goto label_7F1BAE90;
    case 0x7F1BAE94u: goto label_7F1BAE94;
    case 0x7F1BAE98u: goto label_7F1BAE98;
    case 0x7F1BAE9Cu: goto label_7F1BAE9C;
    case 0x7F1BAEA0u: goto label_7F1BAEA0;
    case 0x7F1BAEA4u: goto label_7F1BAEA4;
    case 0x7F1BAEA8u: goto label_7F1BAEA8;
    case 0x7F1BAEACu: goto label_7F1BAEAC;
    case 0x7F1BAEB0u: goto label_7F1BAEB0;
    case 0x7F1BAEB4u: goto label_7F1BAEB4;
    case 0x7F1BAEB8u: goto label_7F1BAEB8;
    case 0x7F1BAEBCu: goto label_7F1BAEBC;
    case 0x7F1BAEC0u: goto label_7F1BAEC0;
    case 0x7F1BAEC4u: goto label_7F1BAEC4;
    case 0x7F1BAEC8u: goto label_7F1BAEC8;
    case 0x7F1BAECCu: goto label_7F1BAECC;
    case 0x7F1BAED0u: goto label_7F1BAED0;
    case 0x7F1BAED4u: goto label_7F1BAED4;
    case 0x7F1BAED8u: goto label_7F1BAED8;
    case 0x7F1BAEDCu: goto label_7F1BAEDC;
    case 0x7F1BAEE0u: goto label_7F1BAEE0;
    case 0x7F1BAEE4u: goto label_7F1BAEE4;
    case 0x7F1BAEE8u: goto label_7F1BAEE8;
    case 0x7F1BAEECu: goto label_7F1BAEEC;
    case 0x7F1BAEF0u: goto label_7F1BAEF0;
    case 0x7F1BAEF4u: goto label_7F1BAEF4;
    case 0x7F1BAEF8u: goto label_7F1BAEF8;
    case 0x7F1BAEFCu: goto label_7F1BAEFC;
    case 0x7F1BAF00u: goto label_7F1BAF00;
    case 0x7F1BAF04u: goto label_7F1BAF04;
    case 0x7F1BAF08u: goto label_7F1BAF08;
    case 0x7F1BAF0Cu: goto label_7F1BAF0C;
    case 0x7F1BAF10u: goto label_7F1BAF10;
    case 0x7F1BAF14u: goto label_7F1BAF14;
    case 0x7F1BAF18u: goto label_7F1BAF18;
    case 0x7F1BAF1Cu: goto label_7F1BAF1C;
    case 0x7F1BAF20u: goto label_7F1BAF20;
    case 0x7F1BAF24u: goto label_7F1BAF24;
    case 0x7F1BAF28u: goto label_7F1BAF28;
    case 0x7F1BAF2Cu: goto label_7F1BAF2C;
    case 0x7F1BAF30u: goto label_7F1BAF30;
    case 0x7F1BAF34u: goto label_7F1BAF34;
    case 0x7F1BAF38u: goto label_7F1BAF38;
    case 0x7F1BAF3Cu: goto label_7F1BAF3C;
    case 0x7F1BAF40u: goto label_7F1BAF40;
    case 0x7F1BAF44u: goto label_7F1BAF44;
    case 0x7F1BAF48u: goto label_7F1BAF48;
    case 0x7F1BAF4Cu: goto label_7F1BAF4C;
    case 0x7F1BAF50u: goto label_7F1BAF50;
    case 0x7F1BAF54u: goto label_7F1BAF54;
    case 0x7F1BAF58u: goto label_7F1BAF58;
    case 0x7F1BAF5Cu: goto label_7F1BAF5C;
    case 0x7F1BAF60u: goto label_7F1BAF60;
    case 0x7F1BAF64u: goto label_7F1BAF64;
    case 0x7F1BAF68u: goto label_7F1BAF68;
    case 0x7F1BAF6Cu: goto label_7F1BAF6C;
    case 0x7F1BAF70u: goto label_7F1BAF70;
    case 0x7F1BAF74u: goto label_7F1BAF74;
    case 0x7F1BAF78u: goto label_7F1BAF78;
    case 0x7F1BAF7Cu: goto label_7F1BAF7C;
    case 0x7F1BAF80u: goto label_7F1BAF80;
    case 0x7F1BAF84u: goto label_7F1BAF84;
    case 0x7F1BAF88u: goto label_7F1BAF88;
    case 0x7F1BAF8Cu: goto label_7F1BAF8C;
    case 0x7F1BAF90u: goto label_7F1BAF90;
    case 0x7F1BAF94u: goto label_7F1BAF94;
    case 0x7F1BAF98u: goto label_7F1BAF98;
    case 0x7F1BAF9Cu: goto label_7F1BAF9C;
    case 0x7F1BAFA0u: goto label_7F1BAFA0;
    case 0x7F1BAFA4u: goto label_7F1BAFA4;
    case 0x7F1BAFA8u: goto label_7F1BAFA8;
    case 0x7F1BAFACu: goto label_7F1BAFAC;
    case 0x7F1BAFB0u: goto label_7F1BAFB0;
    case 0x7F1BAFB4u: goto label_7F1BAFB4;
    case 0x7F1BAFB8u: goto label_7F1BAFB8;
    case 0x7F1BAFBCu: goto label_7F1BAFBC;
    case 0x7F1BAFC0u: goto label_7F1BAFC0;
    case 0x7F1BAFC4u: goto label_7F1BAFC4;
    case 0x7F1BAFC8u: goto label_7F1BAFC8;
    case 0x7F1BAFCCu: goto label_7F1BAFCC;
    case 0x7F1BAFD0u: goto label_7F1BAFD0;
    case 0x7F1BAFD4u: goto label_7F1BAFD4;
    case 0x7F1BAFD8u: goto label_7F1BAFD8;
    case 0x7F1BAFDCu: goto label_7F1BAFDC;
    case 0x7F1BAFE0u: goto label_7F1BAFE0;
    case 0x7F1BAFE4u: goto label_7F1BAFE4;
    case 0x7F1BAFE8u: goto label_7F1BAFE8;
    case 0x7F1BAFECu: goto label_7F1BAFEC;
    case 0x7F1BAFF0u: goto label_7F1BAFF0;
    case 0x7F1BAFF4u: goto label_7F1BAFF4;
    case 0x7F1BAFF8u: goto label_7F1BAFF8;
    case 0x7F1BAFFCu: goto label_7F1BAFFC;
    case 0x7F1BB000u: goto label_7F1BB000;
    case 0x7F1BB004u: goto label_7F1BB004;
    case 0x7F1BB008u: goto label_7F1BB008;
    case 0x7F1BB00Cu: goto label_7F1BB00C;
    case 0x7F1BB010u: goto label_7F1BB010;
    case 0x7F1BB014u: goto label_7F1BB014;
    case 0x7F1BB018u: goto label_7F1BB018;
    case 0x7F1BB01Cu: goto label_7F1BB01C;
    case 0x7F1BB020u: goto label_7F1BB020;
    case 0x7F1BB024u: goto label_7F1BB024;
    case 0x7F1BB028u: goto label_7F1BB028;
    case 0x7F1BB02Cu: goto label_7F1BB02C;
    case 0x7F1BB030u: goto label_7F1BB030;
    case 0x7F1BB034u: goto label_7F1BB034;
    case 0x7F1BB038u: goto label_7F1BB038;
    case 0x7F1BB03Cu: goto label_7F1BB03C;
    case 0x7F1BB040u: goto label_7F1BB040;
    case 0x7F1BB044u: goto label_7F1BB044;
    case 0x7F1BB048u: goto label_7F1BB048;
    case 0x7F1BB04Cu: goto label_7F1BB04C;
    case 0x7F1BB050u: goto label_7F1BB050;
    case 0x7F1BB054u: goto label_7F1BB054;
    case 0x7F1BB058u: goto label_7F1BB058;
    case 0x7F1BB05Cu: goto label_7F1BB05C;
    case 0x7F1BB060u: goto label_7F1BB060;
    case 0x7F1BB064u: goto label_7F1BB064;
    case 0x7F1BB068u: goto label_7F1BB068;
    case 0x7F1BB06Cu: goto label_7F1BB06C;
    case 0x7F1BB070u: goto label_7F1BB070;
    case 0x7F1BB074u: goto label_7F1BB074;
    case 0x7F1BB078u: goto label_7F1BB078;
    case 0x7F1BB07Cu: goto label_7F1BB07C;
    case 0x7F1BB080u: goto label_7F1BB080;
    case 0x7F1BB084u: goto label_7F1BB084;
    case 0x7F1BB088u: goto label_7F1BB088;
    case 0x7F1BB08Cu: goto label_7F1BB08C;
    case 0x7F1BB090u: goto label_7F1BB090;
    case 0x7F1BB094u: goto label_7F1BB094;
    case 0x7F1BB098u: goto label_7F1BB098;
    case 0x7F1BB09Cu: goto label_7F1BB09C;
    case 0x7F1BB0A0u: goto label_7F1BB0A0;
    case 0x7F1BB0A4u: goto label_7F1BB0A4;
    case 0x7F1BB0A8u: goto label_7F1BB0A8;
    case 0x7F1BB0ACu: goto label_7F1BB0AC;
    case 0x7F1BB0B0u: goto label_7F1BB0B0;
    case 0x7F1BB0B4u: goto label_7F1BB0B4;
    case 0x7F1BB0B8u: goto label_7F1BB0B8;
    case 0x7F1BB0BCu: goto label_7F1BB0BC;
    case 0x7F1BB0C0u: goto label_7F1BB0C0;
    case 0x7F1BB0C4u: goto label_7F1BB0C4;
    case 0x7F1BB0C8u: goto label_7F1BB0C8;
    case 0x7F1BB0CCu: goto label_7F1BB0CC;
    case 0x7F1BB0D0u: goto label_7F1BB0D0;
    case 0x7F1BB0D4u: goto label_7F1BB0D4;
    case 0x7F1BB0D8u: goto label_7F1BB0D8;
    case 0x7F1BB0DCu: goto label_7F1BB0DC;
    case 0x7F1BB0E0u: goto label_7F1BB0E0;
    case 0x7F1BB0E4u: goto label_7F1BB0E4;
    case 0x7F1BB0E8u: goto label_7F1BB0E8;
    case 0x7F1BB0ECu: goto label_7F1BB0EC;
    case 0x7F1BB0F0u: goto label_7F1BB0F0;
    case 0x7F1BB0F4u: goto label_7F1BB0F4;
    case 0x7F1BB0F8u: goto label_7F1BB0F8;
    case 0x7F1BB0FCu: goto label_7F1BB0FC;
    case 0x7F1BB100u: goto label_7F1BB100;
    case 0x7F1BB104u: goto label_7F1BB104;
    case 0x7F1BB108u: goto label_7F1BB108;
    case 0x7F1BB10Cu: goto label_7F1BB10C;
    case 0x7F1BB110u: goto label_7F1BB110;
    case 0x7F1BB114u: goto label_7F1BB114;
    case 0x7F1BB118u: goto label_7F1BB118;
    case 0x7F1BB11Cu: goto label_7F1BB11C;
    case 0x7F1BB120u: goto label_7F1BB120;
    case 0x7F1BB124u: goto label_7F1BB124;
    case 0x7F1BB128u: goto label_7F1BB128;
    case 0x7F1BB12Cu: goto label_7F1BB12C;
    case 0x7F1BB130u: goto label_7F1BB130;
    case 0x7F1BB134u: goto label_7F1BB134;
    case 0x7F1BB138u: goto label_7F1BB138;
    case 0x7F1BB13Cu: goto label_7F1BB13C;
    case 0x7F1BB140u: goto label_7F1BB140;
    case 0x7F1BB144u: goto label_7F1BB144;
    case 0x7F1BB148u: goto label_7F1BB148;
    case 0x7F1BB14Cu: goto label_7F1BB14C;
    case 0x7F1BB150u: goto label_7F1BB150;
    case 0x7F1BB154u: goto label_7F1BB154;
    case 0x7F1BB158u: goto label_7F1BB158;
    case 0x7F1BB15Cu: goto label_7F1BB15C;
    case 0x7F1BB160u: goto label_7F1BB160;
    case 0x7F1BB164u: goto label_7F1BB164;
    case 0x7F1BB168u: goto label_7F1BB168;
    case 0x7F1BB16Cu: goto label_7F1BB16C;
    case 0x7F1BB170u: goto label_7F1BB170;
    case 0x7F1BB174u: goto label_7F1BB174;
    case 0x7F1BB178u: goto label_7F1BB178;
    case 0x7F1BB17Cu: goto label_7F1BB17C;
    case 0x7F1BB180u: goto label_7F1BB180;
    case 0x7F1BB184u: goto label_7F1BB184;
    case 0x7F1BB188u: goto label_7F1BB188;
    case 0x7F1BB18Cu: goto label_7F1BB18C;
    case 0x7F1BB190u: goto label_7F1BB190;
    case 0x7F1BB194u: goto label_7F1BB194;
    case 0x7F1BB198u: goto label_7F1BB198;
    case 0x7F1BB19Cu: goto label_7F1BB19C;
    case 0x7F1BB1A0u: goto label_7F1BB1A0;
    case 0x7F1BB1A4u: goto label_7F1BB1A4;
    case 0x7F1BB1A8u: goto label_7F1BB1A8;
    case 0x7F1BB1ACu: goto label_7F1BB1AC;
    case 0x7F1BB1B0u: goto label_7F1BB1B0;
    case 0x7F1BB1B4u: goto label_7F1BB1B4;
    case 0x7F1BB1B8u: goto label_7F1BB1B8;
    case 0x7F1BB1BCu: goto label_7F1BB1BC;
    case 0x7F1BB1C0u: goto label_7F1BB1C0;
    case 0x7F1BB1C4u: goto label_7F1BB1C4;
    case 0x7F1BB1C8u: goto label_7F1BB1C8;
    case 0x7F1BB1CCu: goto label_7F1BB1CC;
    case 0x7F1BB1D0u: goto label_7F1BB1D0;
    case 0x7F1BB1D4u: goto label_7F1BB1D4;
    case 0x7F1BB1D8u: goto label_7F1BB1D8;
    case 0x7F1BB1DCu: goto label_7F1BB1DC;
    case 0x7F1BB1E0u: goto label_7F1BB1E0;
    case 0x7F1BB1E4u: goto label_7F1BB1E4;
    case 0x7F1BB1E8u: goto label_7F1BB1E8;
    case 0x7F1BB1ECu: goto label_7F1BB1EC;
    case 0x7F1BB1F0u: goto label_7F1BB1F0;
    case 0x7F1BB1F4u: goto label_7F1BB1F4;
    case 0x7F1BB1F8u: goto label_7F1BB1F8;
    case 0x7F1BB1FCu: goto label_7F1BB1FC;
    case 0x7F1BB200u: goto label_7F1BB200;
    case 0x7F1BB204u: goto label_7F1BB204;
    case 0x7F1BB208u: goto label_7F1BB208;
    case 0x7F1BB20Cu: goto label_7F1BB20C;
    case 0x7F1BB210u: goto label_7F1BB210;
    case 0x7F1BB214u: goto label_7F1BB214;
    case 0x7F1BB218u: goto label_7F1BB218;
    case 0x7F1BB21Cu: goto label_7F1BB21C;
    case 0x7F1BB220u: goto label_7F1BB220;
    case 0x7F1BB224u: goto label_7F1BB224;
    case 0x7F1BB228u: goto label_7F1BB228;
    case 0x7F1BB22Cu: goto label_7F1BB22C;
    case 0x7F1BB230u: goto label_7F1BB230;
    case 0x7F1BB234u: goto label_7F1BB234;
    case 0x7F1BB238u: goto label_7F1BB238;
    case 0x7F1BB23Cu: goto label_7F1BB23C;
    case 0x7F1BB240u: goto label_7F1BB240;
    case 0x7F1BB244u: goto label_7F1BB244;
    case 0x7F1BB248u: goto label_7F1BB248;
    case 0x7F1BB24Cu: goto label_7F1BB24C;
    case 0x7F1BB250u: goto label_7F1BB250;
    case 0x7F1BB254u: goto label_7F1BB254;
    case 0x7F1BB258u: goto label_7F1BB258;
    case 0x7F1BB25Cu: goto label_7F1BB25C;
    case 0x7F1BB260u: goto label_7F1BB260;
    case 0x7F1BB264u: goto label_7F1BB264;
    case 0x7F1BB268u: goto label_7F1BB268;
    case 0x7F1BB26Cu: goto label_7F1BB26C;
    case 0x7F1BB270u: goto label_7F1BB270;
    case 0x7F1BB274u: goto label_7F1BB274;
    case 0x7F1BB278u: goto label_7F1BB278;
    case 0x7F1BB27Cu: goto label_7F1BB27C;
    case 0x7F1BB280u: goto label_7F1BB280;
    case 0x7F1BB284u: goto label_7F1BB284;
    case 0x7F1BB288u: goto label_7F1BB288;
    case 0x7F1BB28Cu: goto label_7F1BB28C;
    case 0x7F1BB290u: goto label_7F1BB290;
    case 0x7F1BB294u: goto label_7F1BB294;
    case 0x7F1BB298u: goto label_7F1BB298;
    case 0x7F1BB29Cu: goto label_7F1BB29C;
    case 0x7F1BB2A0u: goto label_7F1BB2A0;
    case 0x7F1BB2A4u: goto label_7F1BB2A4;
    case 0x7F1BB2A8u: goto label_7F1BB2A8;
    case 0x7F1BB2ACu: goto label_7F1BB2AC;
    case 0x7F1BB2B0u: goto label_7F1BB2B0;
    case 0x7F1BB2B4u: goto label_7F1BB2B4;
    case 0x7F1BB2B8u: goto label_7F1BB2B8;
    case 0x7F1BB2BCu: goto label_7F1BB2BC;
    case 0x7F1BB2C0u: goto label_7F1BB2C0;
    case 0x7F1BB2C4u: goto label_7F1BB2C4;
    case 0x7F1BB2C8u: goto label_7F1BB2C8;
    case 0x7F1BB2CCu: goto label_7F1BB2CC;
    case 0x7F1BB2D0u: goto label_7F1BB2D0;
    case 0x7F1BB2D4u: goto label_7F1BB2D4;
    case 0x7F1BB2D8u: goto label_7F1BB2D8;
    case 0x7F1BB2DCu: goto label_7F1BB2DC;
    case 0x7F1BB2E0u: goto label_7F1BB2E0;
    case 0x7F1BB2E4u: goto label_7F1BB2E4;
    case 0x7F1BB2E8u: goto label_7F1BB2E8;
    case 0x7F1BB2ECu: goto label_7F1BB2EC;
    case 0x7F1BB2F0u: goto label_7F1BB2F0;
    case 0x7F1BB2F4u: goto label_7F1BB2F4;
    case 0x7F1BB2F8u: goto label_7F1BB2F8;
    case 0x7F1BB2FCu: goto label_7F1BB2FC;
    case 0x7F1BB300u: goto label_7F1BB300;
    case 0x7F1BB304u: goto label_7F1BB304;
    case 0x7F1BB308u: goto label_7F1BB308;
    case 0x7F1BB30Cu: goto label_7F1BB30C;
    case 0x7F1BB310u: goto label_7F1BB310;
    case 0x7F1BB314u: goto label_7F1BB314;
    case 0x7F1BB318u: goto label_7F1BB318;
    case 0x7F1BB31Cu: goto label_7F1BB31C;
    case 0x7F1BB320u: goto label_7F1BB320;
    case 0x7F1BB324u: goto label_7F1BB324;
    case 0x7F1BB328u: goto label_7F1BB328;
    case 0x7F1BB32Cu: goto label_7F1BB32C;
    case 0x7F1BB330u: goto label_7F1BB330;
    case 0x7F1BB334u: goto label_7F1BB334;
    case 0x7F1BB338u: goto label_7F1BB338;
    case 0x7F1BB33Cu: goto label_7F1BB33C;
    case 0x7F1BB340u: goto label_7F1BB340;
    case 0x7F1BB344u: goto label_7F1BB344;
    case 0x7F1BB348u: goto label_7F1BB348;
    case 0x7F1BB34Cu: goto label_7F1BB34C;
    case 0x7F1BB350u: goto label_7F1BB350;
    case 0x7F1BB354u: goto label_7F1BB354;
    case 0x7F1BB358u: goto label_7F1BB358;
    case 0x7F1BB35Cu: goto label_7F1BB35C;
    case 0x7F1BB360u: goto label_7F1BB360;
    case 0x7F1BB364u: goto label_7F1BB364;
    case 0x7F1BB368u: goto label_7F1BB368;
    case 0x7F1BB36Cu: goto label_7F1BB36C;
    case 0x7F1BB370u: goto label_7F1BB370;
    case 0x7F1BB374u: goto label_7F1BB374;
    case 0x7F1BB378u: goto label_7F1BB378;
    case 0x7F1BB37Cu: goto label_7F1BB37C;
    case 0x7F1BB380u: goto label_7F1BB380;
    case 0x7F1BB384u: goto label_7F1BB384;
    case 0x7F1BB388u: goto label_7F1BB388;
    case 0x7F1BB38Cu: goto label_7F1BB38C;
    case 0x7F1BB390u: goto label_7F1BB390;
    case 0x7F1BB394u: goto label_7F1BB394;
    case 0x7F1BB398u: goto label_7F1BB398;
    case 0x7F1BB39Cu: goto label_7F1BB39C;
    case 0x7F1BB3A0u: goto label_7F1BB3A0;
    case 0x7F1BB3A4u: goto label_7F1BB3A4;
    case 0x7F1BB3A8u: goto label_7F1BB3A8;
    case 0x7F1BB3ACu: goto label_7F1BB3AC;
    case 0x7F1BB3B0u: goto label_7F1BB3B0;
    case 0x7F1BB3B4u: goto label_7F1BB3B4;
    case 0x7F1BB3B8u: goto label_7F1BB3B8;
    case 0x7F1BB3BCu: goto label_7F1BB3BC;
    case 0x7F1BB3C0u: goto label_7F1BB3C0;
    case 0x7F1BB3C4u: goto label_7F1BB3C4;
    case 0x7F1BB3C8u: goto label_7F1BB3C8;
    case 0x7F1BB3CCu: goto label_7F1BB3CC;
    case 0x7F1BB3D0u: goto label_7F1BB3D0;
    case 0x7F1BB3D4u: goto label_7F1BB3D4;
    case 0x7F1BB3D8u: goto label_7F1BB3D8;
    case 0x7F1BB3DCu: goto label_7F1BB3DC;
    case 0x7F1BB3E0u: goto label_7F1BB3E0;
    case 0x7F1BB3E4u: goto label_7F1BB3E4;
    case 0x7F1BB3E8u: goto label_7F1BB3E8;
    case 0x7F1BB3ECu: goto label_7F1BB3EC;
    case 0x7F1BB3F0u: goto label_7F1BB3F0;
    case 0x7F1BB3F4u: goto label_7F1BB3F4;
    case 0x7F1BB3F8u: goto label_7F1BB3F8;
    case 0x7F1BB3FCu: goto label_7F1BB3FC;
    case 0x7F1BB400u: goto label_7F1BB400;
    case 0x7F1BB404u: goto label_7F1BB404;
    case 0x7F1BB408u: goto label_7F1BB408;
    case 0x7F1BB40Cu: goto label_7F1BB40C;
    case 0x7F1BB410u: goto label_7F1BB410;
    case 0x7F1BB414u: goto label_7F1BB414;
    case 0x7F1BB418u: goto label_7F1BB418;
    case 0x7F1BB41Cu: goto label_7F1BB41C;
    case 0x7F1BB420u: goto label_7F1BB420;
    case 0x7F1BB424u: goto label_7F1BB424;
    case 0x7F1BB428u: goto label_7F1BB428;
    case 0x7F1BB42Cu: goto label_7F1BB42C;
    case 0x7F1BB430u: goto label_7F1BB430;
    case 0x7F1BB434u: goto label_7F1BB434;
    case 0x7F1BB438u: goto label_7F1BB438;
    case 0x7F1BB43Cu: goto label_7F1BB43C;
    case 0x7F1BB440u: goto label_7F1BB440;
    case 0x7F1BB444u: goto label_7F1BB444;
    case 0x7F1BB448u: goto label_7F1BB448;
    case 0x7F1BB44Cu: goto label_7F1BB44C;
    case 0x7F1BB450u: goto label_7F1BB450;
    case 0x7F1BB454u: goto label_7F1BB454;
    case 0x7F1BB458u: goto label_7F1BB458;
    case 0x7F1BB45Cu: goto label_7F1BB45C;
    case 0x7F1BB460u: goto label_7F1BB460;
    case 0x7F1BB464u: goto label_7F1BB464;
    case 0x7F1BB468u: goto label_7F1BB468;
    case 0x7F1BB46Cu: goto label_7F1BB46C;
    case 0x7F1BB470u: goto label_7F1BB470;
    case 0x7F1BB474u: goto label_7F1BB474;
    case 0x7F1BB478u: goto label_7F1BB478;
    case 0x7F1BB47Cu: goto label_7F1BB47C;
    case 0x7F1BB480u: goto label_7F1BB480;
    case 0x7F1BB484u: goto label_7F1BB484;
    case 0x7F1BB488u: goto label_7F1BB488;
    case 0x7F1BB48Cu: goto label_7F1BB48C;
    case 0x7F1BB490u: goto label_7F1BB490;
    case 0x7F1BB494u: goto label_7F1BB494;
    case 0x7F1BB498u: goto label_7F1BB498;
    case 0x7F1BB49Cu: goto label_7F1BB49C;
    case 0x7F1BB4A0u: goto label_7F1BB4A0;
    case 0x7F1BB4A4u: goto label_7F1BB4A4;
    case 0x7F1BB4A8u: goto label_7F1BB4A8;
    case 0x7F1BB4ACu: goto label_7F1BB4AC;
    case 0x7F1BB4B0u: goto label_7F1BB4B0;
    case 0x7F1BB4B4u: goto label_7F1BB4B4;
    case 0x7F1BB4B8u: goto label_7F1BB4B8;
    case 0x7F1BB4BCu: goto label_7F1BB4BC;
    case 0x7F1BB4C0u: goto label_7F1BB4C0;
    case 0x7F1BB4C4u: goto label_7F1BB4C4;
    case 0x7F1BB4C8u: goto label_7F1BB4C8;
    case 0x7F1BB4CCu: goto label_7F1BB4CC;
    case 0x7F1BB4D0u: goto label_7F1BB4D0;
    case 0x7F1BB4D4u: goto label_7F1BB4D4;
    case 0x7F1BB4D8u: goto label_7F1BB4D8;
    case 0x7F1BB4DCu: goto label_7F1BB4DC;
    case 0x7F1BB4E0u: goto label_7F1BB4E0;
    case 0x7F1BB4E4u: goto label_7F1BB4E4;
    case 0x7F1BB4E8u: goto label_7F1BB4E8;
    case 0x7F1BB4ECu: goto label_7F1BB4EC;
    case 0x7F1BB4F0u: goto label_7F1BB4F0;
    case 0x7F1BB4F4u: goto label_7F1BB4F4;
    case 0x7F1BB4F8u: goto label_7F1BB4F8;
    case 0x7F1BB4FCu: goto label_7F1BB4FC;
    case 0x7F1BB500u: goto label_7F1BB500;
    case 0x7F1BB504u: goto label_7F1BB504;
    case 0x7F1BB508u: goto label_7F1BB508;
    case 0x7F1BB50Cu: goto label_7F1BB50C;
    case 0x7F1BB510u: goto label_7F1BB510;
    case 0x7F1BB514u: goto label_7F1BB514;
    case 0x7F1BB518u: goto label_7F1BB518;
    case 0x7F1BB51Cu: goto label_7F1BB51C;
    case 0x7F1BB520u: goto label_7F1BB520;
    case 0x7F1BB524u: goto label_7F1BB524;
    case 0x7F1BB528u: goto label_7F1BB528;
    case 0x7F1BB52Cu: goto label_7F1BB52C;
    case 0x7F1BB530u: goto label_7F1BB530;
    case 0x7F1BB534u: goto label_7F1BB534;
    case 0x7F1BB538u: goto label_7F1BB538;
    case 0x7F1BB53Cu: goto label_7F1BB53C;
    case 0x7F1BB540u: goto label_7F1BB540;
    case 0x7F1BB544u: goto label_7F1BB544;
    case 0x7F1BB548u: goto label_7F1BB548;
    case 0x7F1BB54Cu: goto label_7F1BB54C;
    case 0x7F1BB550u: goto label_7F1BB550;
    case 0x7F1BB554u: goto label_7F1BB554;
    case 0x7F1BB558u: goto label_7F1BB558;
    case 0x7F1BB55Cu: goto label_7F1BB55C;
    case 0x7F1BB560u: goto label_7F1BB560;
    case 0x7F1BB564u: goto label_7F1BB564;
    case 0x7F1BB568u: goto label_7F1BB568;
    case 0x7F1BB56Cu: goto label_7F1BB56C;
    case 0x7F1BB570u: goto label_7F1BB570;
    case 0x7F1BB574u: goto label_7F1BB574;
    case 0x7F1BB578u: goto label_7F1BB578;
    case 0x7F1BB57Cu: goto label_7F1BB57C;
    case 0x7F1BB580u: goto label_7F1BB580;
    case 0x7F1BB584u: goto label_7F1BB584;
    case 0x7F1BB588u: goto label_7F1BB588;
    case 0x7F1BB58Cu: goto label_7F1BB58C;
    case 0x7F1BB590u: goto label_7F1BB590;
    case 0x7F1BB594u: goto label_7F1BB594;
    case 0x7F1BB598u: goto label_7F1BB598;
    case 0x7F1BB59Cu: goto label_7F1BB59C;
    case 0x7F1BB5A0u: goto label_7F1BB5A0;
    case 0x7F1BB5A4u: goto label_7F1BB5A4;
    case 0x7F1BB5A8u: goto label_7F1BB5A8;
    case 0x7F1BB5ACu: goto label_7F1BB5AC;
    case 0x7F1BB5B0u: goto label_7F1BB5B0;
    case 0x7F1BB5B4u: goto label_7F1BB5B4;
    case 0x7F1BB5B8u: goto label_7F1BB5B8;
    case 0x7F1BB5BCu: goto label_7F1BB5BC;
    case 0x7F1BB5C0u: goto label_7F1BB5C0;
    case 0x7F1BB5C4u: goto label_7F1BB5C4;
    case 0x7F1BB5C8u: goto label_7F1BB5C8;
    case 0x7F1BB5CCu: goto label_7F1BB5CC;
    case 0x7F1BB5D0u: goto label_7F1BB5D0;
    case 0x7F1BB5D4u: goto label_7F1BB5D4;
    case 0x7F1BB5D8u: goto label_7F1BB5D8;
    case 0x7F1BB5DCu: goto label_7F1BB5DC;
    case 0x7F1BB5E0u: goto label_7F1BB5E0;
    case 0x7F1BB5E4u: goto label_7F1BB5E4;
    case 0x7F1BB5E8u: goto label_7F1BB5E8;
    case 0x7F1BB5ECu: goto label_7F1BB5EC;
    case 0x7F1BB5F0u: goto label_7F1BB5F0;
    case 0x7F1BB5F4u: goto label_7F1BB5F4;
    case 0x7F1BB5F8u: goto label_7F1BB5F8;
    case 0x7F1BB5FCu: goto label_7F1BB5FC;
    case 0x7F1BB600u: goto label_7F1BB600;
    case 0x7F1BB604u: goto label_7F1BB604;
    case 0x7F1BB608u: goto label_7F1BB608;
    case 0x7F1BB60Cu: goto label_7F1BB60C;
    case 0x7F1BB610u: goto label_7F1BB610;
    case 0x7F1BB614u: goto label_7F1BB614;
    case 0x7F1BB618u: goto label_7F1BB618;
    case 0x7F1BB61Cu: goto label_7F1BB61C;
    case 0x7F1BB620u: goto label_7F1BB620;
    case 0x7F1BB624u: goto label_7F1BB624;
    case 0x7F1BB628u: goto label_7F1BB628;
    case 0x7F1BB62Cu: goto label_7F1BB62C;
    case 0x7F1BB630u: goto label_7F1BB630;
    case 0x7F1BB634u: goto label_7F1BB634;
    case 0x7F1BB638u: goto label_7F1BB638;
    case 0x7F1BB63Cu: goto label_7F1BB63C;
    case 0x7F1BB640u: goto label_7F1BB640;
    case 0x7F1BB644u: goto label_7F1BB644;
    case 0x7F1BB648u: goto label_7F1BB648;
    case 0x7F1BB64Cu: goto label_7F1BB64C;
    case 0x7F1BB650u: goto label_7F1BB650;
    case 0x7F1BB654u: goto label_7F1BB654;
    case 0x7F1BB658u: goto label_7F1BB658;
    case 0x7F1BB65Cu: goto label_7F1BB65C;
    case 0x7F1BB660u: goto label_7F1BB660;
    case 0x7F1BB664u: goto label_7F1BB664;
    case 0x7F1BB668u: goto label_7F1BB668;
    case 0x7F1BB66Cu: goto label_7F1BB66C;
    case 0x7F1BB670u: goto label_7F1BB670;
    case 0x7F1BB674u: goto label_7F1BB674;
    case 0x7F1BB678u: goto label_7F1BB678;
    case 0x7F1BB67Cu: goto label_7F1BB67C;
    case 0x7F1BB680u: goto label_7F1BB680;
    case 0x7F1BB684u: goto label_7F1BB684;
    case 0x7F1BB688u: goto label_7F1BB688;
    case 0x7F1BB68Cu: goto label_7F1BB68C;
    case 0x7F1BB690u: goto label_7F1BB690;
    case 0x7F1BB694u: goto label_7F1BB694;
    case 0x7F1BB698u: goto label_7F1BB698;
    case 0x7F1BB69Cu: goto label_7F1BB69C;
    case 0x7F1BB6A0u: goto label_7F1BB6A0;
    case 0x7F1BB6A4u: goto label_7F1BB6A4;
    case 0x7F1BB6A8u: goto label_7F1BB6A8;
    case 0x7F1BB6ACu: goto label_7F1BB6AC;
    case 0x7F1BB6B0u: goto label_7F1BB6B0;
    case 0x7F1BB6B4u: goto label_7F1BB6B4;
    case 0x7F1BB6B8u: goto label_7F1BB6B8;
    case 0x7F1BB6BCu: goto label_7F1BB6BC;
    case 0x7F1BB6C0u: goto label_7F1BB6C0;
    case 0x7F1BB6C4u: goto label_7F1BB6C4;
    case 0x7F1BB6C8u: goto label_7F1BB6C8;
    case 0x7F1BB6CCu: goto label_7F1BB6CC;
    case 0x7F1BB6D0u: goto label_7F1BB6D0;
    case 0x7F1BB6D4u: goto label_7F1BB6D4;
    case 0x7F1BB6D8u: goto label_7F1BB6D8;
    case 0x7F1BB6DCu: goto label_7F1BB6DC;
    case 0x7F1BB6E0u: goto label_7F1BB6E0;
    case 0x7F1BB6E4u: goto label_7F1BB6E4;
    case 0x7F1BB6E8u: goto label_7F1BB6E8;
    case 0x7F1BB6ECu: goto label_7F1BB6EC;
    case 0x7F1BB6F0u: goto label_7F1BB6F0;
    case 0x7F1BB6F4u: goto label_7F1BB6F4;
    case 0x7F1BB6F8u: goto label_7F1BB6F8;
    case 0x7F1BB6FCu: goto label_7F1BB6FC;
    case 0x7F1BB700u: goto label_7F1BB700;
    case 0x7F1BB704u: goto label_7F1BB704;
    case 0x7F1BB708u: goto label_7F1BB708;
    case 0x7F1BB70Cu: goto label_7F1BB70C;
    case 0x7F1BB710u: goto label_7F1BB710;
    case 0x7F1BB714u: goto label_7F1BB714;
    case 0x7F1BB718u: goto label_7F1BB718;
    case 0x7F1BB71Cu: goto label_7F1BB71C;
    case 0x7F1BB720u: goto label_7F1BB720;
    case 0x7F1BB724u: goto label_7F1BB724;
    case 0x7F1BB728u: goto label_7F1BB728;
    case 0x7F1BB72Cu: goto label_7F1BB72C;
    case 0x7F1BB730u: goto label_7F1BB730;
    case 0x7F1BB734u: goto label_7F1BB734;
    case 0x7F1BB738u: goto label_7F1BB738;
    case 0x7F1BB73Cu: goto label_7F1BB73C;
    case 0x7F1BB740u: goto label_7F1BB740;
    case 0x7F1BB744u: goto label_7F1BB744;
    case 0x7F1BB748u: goto label_7F1BB748;
    case 0x7F1BB74Cu: goto label_7F1BB74C;
    case 0x7F1BB750u: goto label_7F1BB750;
    case 0x7F1BB754u: goto label_7F1BB754;
    case 0x7F1BB758u: goto label_7F1BB758;
    case 0x7F1BB75Cu: goto label_7F1BB75C;
    case 0x7F1BB760u: goto label_7F1BB760;
    case 0x7F1BB764u: goto label_7F1BB764;
    case 0x7F1BB768u: goto label_7F1BB768;
    case 0x7F1BB76Cu: goto label_7F1BB76C;
    case 0x7F1BB770u: goto label_7F1BB770;
    case 0x7F1BB774u: goto label_7F1BB774;
    case 0x7F1BB778u: goto label_7F1BB778;
    case 0x7F1BB77Cu: goto label_7F1BB77C;
    case 0x7F1BB780u: goto label_7F1BB780;
    case 0x7F1BB784u: goto label_7F1BB784;
    case 0x7F1BB788u: goto label_7F1BB788;
    case 0x7F1BB78Cu: goto label_7F1BB78C;
    case 0x7F1BB790u: goto label_7F1BB790;
    case 0x7F1BB794u: goto label_7F1BB794;
    case 0x7F1BB798u: goto label_7F1BB798;
    case 0x7F1BB79Cu: goto label_7F1BB79C;
    case 0x7F1BB7A0u: goto label_7F1BB7A0;
    case 0x7F1BB7A4u: goto label_7F1BB7A4;
    case 0x7F1BB7A8u: goto label_7F1BB7A8;
    case 0x7F1BB7ACu: goto label_7F1BB7AC;
    case 0x7F1BB7B0u: goto label_7F1BB7B0;
    case 0x7F1BB7B4u: goto label_7F1BB7B4;
    case 0x7F1BB7B8u: goto label_7F1BB7B8;
    case 0x7F1BB7BCu: goto label_7F1BB7BC;
    case 0x7F1BB7C0u: goto label_7F1BB7C0;
    case 0x7F1BB7C4u: goto label_7F1BB7C4;
    case 0x7F1BB7C8u: goto label_7F1BB7C8;
    case 0x7F1BB7CCu: goto label_7F1BB7CC;
    case 0x7F1BB7D0u: goto label_7F1BB7D0;
    case 0x7F1BB7D4u: goto label_7F1BB7D4;
    case 0x7F1BB7D8u: goto label_7F1BB7D8;
    case 0x7F1BB7DCu: goto label_7F1BB7DC;
    case 0x7F1BB7E0u: goto label_7F1BB7E0;
    case 0x7F1BB7E4u: goto label_7F1BB7E4;
    case 0x7F1BB7E8u: goto label_7F1BB7E8;
    case 0x7F1BB7ECu: goto label_7F1BB7EC;
    case 0x7F1BB7F0u: goto label_7F1BB7F0;
    case 0x7F1BB7F4u: goto label_7F1BB7F4;
    case 0x7F1BB7F8u: goto label_7F1BB7F8;
    case 0x7F1BB7FCu: goto label_7F1BB7FC;
    case 0x7F1BB800u: goto label_7F1BB800;
    case 0x7F1BB804u: goto label_7F1BB804;
    case 0x7F1BB808u: goto label_7F1BB808;
    case 0x7F1BB80Cu: goto label_7F1BB80C;
    case 0x7F1BB810u: goto label_7F1BB810;
    case 0x7F1BB814u: goto label_7F1BB814;
    case 0x7F1BB818u: goto label_7F1BB818;
    case 0x7F1BB81Cu: goto label_7F1BB81C;
    case 0x7F1BB820u: goto label_7F1BB820;
    case 0x7F1BB824u: goto label_7F1BB824;
    case 0x7F1BB828u: goto label_7F1BB828;
    case 0x7F1BB82Cu: goto label_7F1BB82C;
    case 0x7F1BB830u: goto label_7F1BB830;
    case 0x7F1BB834u: goto label_7F1BB834;
    case 0x7F1BB838u: goto label_7F1BB838;
    case 0x7F1BB83Cu: goto label_7F1BB83C;
    case 0x7F1BB840u: goto label_7F1BB840;
    case 0x7F1BB844u: goto label_7F1BB844;
    case 0x7F1BB848u: goto label_7F1BB848;
    case 0x7F1BB84Cu: goto label_7F1BB84C;
    case 0x7F1BB850u: goto label_7F1BB850;
    case 0x7F1BB854u: goto label_7F1BB854;
    case 0x7F1BB858u: goto label_7F1BB858;
    case 0x7F1BB85Cu: goto label_7F1BB85C;
    case 0x7F1BB860u: goto label_7F1BB860;
    case 0x7F1BB864u: goto label_7F1BB864;
    case 0x7F1BB868u: goto label_7F1BB868;
    case 0x7F1BB86Cu: goto label_7F1BB86C;
    case 0x7F1BB870u: goto label_7F1BB870;
    case 0x7F1BB874u: goto label_7F1BB874;
    case 0x7F1BB878u: goto label_7F1BB878;
    case 0x7F1BB87Cu: goto label_7F1BB87C;
    case 0x7F1BB880u: goto label_7F1BB880;
    case 0x7F1BB884u: goto label_7F1BB884;
    case 0x7F1BB888u: goto label_7F1BB888;
    case 0x7F1BB88Cu: goto label_7F1BB88C;
    case 0x7F1BB890u: goto label_7F1BB890;
    case 0x7F1BB894u: goto label_7F1BB894;
    case 0x7F1BB898u: goto label_7F1BB898;
    case 0x7F1BB89Cu: goto label_7F1BB89C;
    case 0x7F1BB8A0u: goto label_7F1BB8A0;
    case 0x7F1BB8A4u: goto label_7F1BB8A4;
    case 0x7F1BB8A8u: goto label_7F1BB8A8;
    case 0x7F1BB8ACu: goto label_7F1BB8AC;
    case 0x7F1BB8B0u: goto label_7F1BB8B0;
    case 0x7F1BB8B4u: goto label_7F1BB8B4;
    case 0x7F1BB8B8u: goto label_7F1BB8B8;
    case 0x7F1BB8BCu: goto label_7F1BB8BC;
    case 0x7F1BB8C0u: goto label_7F1BB8C0;
    case 0x7F1BB8C4u: goto label_7F1BB8C4;
    case 0x7F1BB8C8u: goto label_7F1BB8C8;
    case 0x7F1BB8CCu: goto label_7F1BB8CC;
    case 0x7F1BB8D0u: goto label_7F1BB8D0;
    case 0x7F1BB8D4u: goto label_7F1BB8D4;
    case 0x7F1BB8D8u: goto label_7F1BB8D8;
    case 0x7F1BB8DCu: goto label_7F1BB8DC;
    case 0x7F1BB8E0u: goto label_7F1BB8E0;
    case 0x7F1BB8E4u: goto label_7F1BB8E4;
    case 0x7F1BB8E8u: goto label_7F1BB8E8;
    case 0x7F1BB8ECu: goto label_7F1BB8EC;
    case 0x7F1BB8F0u: goto label_7F1BB8F0;
    case 0x7F1BB8F4u: goto label_7F1BB8F4;
    case 0x7F1BB8F8u: goto label_7F1BB8F8;
    case 0x7F1BB8FCu: goto label_7F1BB8FC;
    case 0x7F1BB900u: goto label_7F1BB900;
    case 0x7F1BB904u: goto label_7F1BB904;
    case 0x7F1BB908u: goto label_7F1BB908;
    case 0x7F1BB90Cu: goto label_7F1BB90C;
    case 0x7F1BB910u: goto label_7F1BB910;
    case 0x7F1BB914u: goto label_7F1BB914;
    case 0x7F1BB918u: goto label_7F1BB918;
    case 0x7F1BB91Cu: goto label_7F1BB91C;
    case 0x7F1BB920u: goto label_7F1BB920;
    case 0x7F1BB924u: goto label_7F1BB924;
    case 0x7F1BB928u: goto label_7F1BB928;
    case 0x7F1BB92Cu: goto label_7F1BB92C;
    case 0x7F1BB930u: goto label_7F1BB930;
    case 0x7F1BB934u: goto label_7F1BB934;
    case 0x7F1BB938u: goto label_7F1BB938;
    case 0x7F1BB93Cu: goto label_7F1BB93C;
    case 0x7F1BB940u: goto label_7F1BB940;
    case 0x7F1BB944u: goto label_7F1BB944;
    case 0x7F1BB948u: goto label_7F1BB948;
    case 0x7F1BB94Cu: goto label_7F1BB94C;
    case 0x7F1BB950u: goto label_7F1BB950;
    case 0x7F1BB954u: goto label_7F1BB954;
    case 0x7F1BB958u: goto label_7F1BB958;
    case 0x7F1BB95Cu: goto label_7F1BB95C;
    case 0x7F1BB960u: goto label_7F1BB960;
    case 0x7F1BB964u: goto label_7F1BB964;
    case 0x7F1BB968u: goto label_7F1BB968;
    case 0x7F1BB96Cu: goto label_7F1BB96C;
    case 0x7F1BB970u: goto label_7F1BB970;
    case 0x7F1BB974u: goto label_7F1BB974;
    case 0x7F1BB978u: goto label_7F1BB978;
    case 0x7F1BB97Cu: goto label_7F1BB97C;
    case 0x7F1BB980u: goto label_7F1BB980;
    case 0x7F1BB984u: goto label_7F1BB984;
    case 0x7F1BB988u: goto label_7F1BB988;
    case 0x7F1BB98Cu: goto label_7F1BB98C;
    case 0x7F1BB990u: goto label_7F1BB990;
    case 0x7F1BB994u: goto label_7F1BB994;
    case 0x7F1BB998u: goto label_7F1BB998;
    case 0x7F1BB99Cu: goto label_7F1BB99C;
    case 0x7F1BB9A0u: goto label_7F1BB9A0;
    case 0x7F1BB9A4u: goto label_7F1BB9A4;
    case 0x7F1BB9A8u: goto label_7F1BB9A8;
    case 0x7F1BB9ACu: goto label_7F1BB9AC;
    case 0x7F1BB9B0u: goto label_7F1BB9B0;
    case 0x7F1BB9B4u: goto label_7F1BB9B4;
    case 0x7F1BB9B8u: goto label_7F1BB9B8;
    case 0x7F1BB9BCu: goto label_7F1BB9BC;
    case 0x7F1BB9C0u: goto label_7F1BB9C0;
    case 0x7F1BB9C4u: goto label_7F1BB9C4;
    case 0x7F1BB9C8u: goto label_7F1BB9C8;
    case 0x7F1BB9CCu: goto label_7F1BB9CC;
    case 0x7F1BB9D0u: goto label_7F1BB9D0;
    case 0x7F1BB9D4u: goto label_7F1BB9D4;
    case 0x7F1BB9D8u: goto label_7F1BB9D8;
    case 0x7F1BB9DCu: goto label_7F1BB9DC;
    case 0x7F1BB9E0u: goto label_7F1BB9E0;
    case 0x7F1BB9E4u: goto label_7F1BB9E4;
    case 0x7F1BB9E8u: goto label_7F1BB9E8;
    case 0x7F1BB9ECu: goto label_7F1BB9EC;
    case 0x7F1BB9F0u: goto label_7F1BB9F0;
    case 0x7F1BB9F4u: goto label_7F1BB9F4;
    case 0x7F1BB9F8u: goto label_7F1BB9F8;
    case 0x7F1BB9FCu: goto label_7F1BB9FC;
    case 0x7F1BBA00u: goto label_7F1BBA00;
    case 0x7F1BBA04u: goto label_7F1BBA04;
    case 0x7F1BBA08u: goto label_7F1BBA08;
    case 0x7F1BBA0Cu: goto label_7F1BBA0C;
    case 0x7F1BBA10u: goto label_7F1BBA10;
    case 0x7F1BBA14u: goto label_7F1BBA14;
    case 0x7F1BBA18u: goto label_7F1BBA18;
    case 0x7F1BBA1Cu: goto label_7F1BBA1C;
    case 0x7F1BBA20u: goto label_7F1BBA20;
    case 0x7F1BBA24u: goto label_7F1BBA24;
    case 0x7F1BBA28u: goto label_7F1BBA28;
    case 0x7F1BBA2Cu: goto label_7F1BBA2C;
    case 0x7F1BBA30u: goto label_7F1BBA30;
    case 0x7F1BBA34u: goto label_7F1BBA34;
    case 0x7F1BBA38u: goto label_7F1BBA38;
    case 0x7F1BBA3Cu: goto label_7F1BBA3C;
    case 0x7F1BBA40u: goto label_7F1BBA40;
    case 0x7F1BBA44u: goto label_7F1BBA44;
    case 0x7F1BBA48u: goto label_7F1BBA48;
    case 0x7F1BBA4Cu: goto label_7F1BBA4C;
    case 0x7F1BBA50u: goto label_7F1BBA50;
    case 0x7F1BBA54u: goto label_7F1BBA54;
    case 0x7F1BBA58u: goto label_7F1BBA58;
    case 0x7F1BBA5Cu: goto label_7F1BBA5C;
    case 0x7F1BBA60u: goto label_7F1BBA60;
    case 0x7F1BBA64u: goto label_7F1BBA64;
    case 0x7F1BBA68u: goto label_7F1BBA68;
    case 0x7F1BBA6Cu: goto label_7F1BBA6C;
    case 0x7F1BBA70u: goto label_7F1BBA70;
    case 0x7F1BBA74u: goto label_7F1BBA74;
    case 0x7F1BBA78u: goto label_7F1BBA78;
    case 0x7F1BBA7Cu: goto label_7F1BBA7C;
    case 0x7F1BBA80u: goto label_7F1BBA80;
    case 0x7F1BBA84u: goto label_7F1BBA84;
    case 0x7F1BBA88u: goto label_7F1BBA88;
    case 0x7F1BBA8Cu: goto label_7F1BBA8C;
    case 0x7F1BBA90u: goto label_7F1BBA90;
    case 0x7F1BBA94u: goto label_7F1BBA94;
    case 0x7F1BBA98u: goto label_7F1BBA98;
    case 0x7F1BBA9Cu: goto label_7F1BBA9C;
    case 0x7F1BBAA0u: goto label_7F1BBAA0;
    case 0x7F1BBAA4u: goto label_7F1BBAA4;
    case 0x7F1BBAA8u: goto label_7F1BBAA8;
    case 0x7F1BBAACu: goto label_7F1BBAAC;
    case 0x7F1BBAB0u: goto label_7F1BBAB0;
    case 0x7F1BBAB4u: goto label_7F1BBAB4;
    case 0x7F1BBAB8u: goto label_7F1BBAB8;
    case 0x7F1BBABCu: goto label_7F1BBABC;
    case 0x7F1BBAC0u: goto label_7F1BBAC0;
    case 0x7F1BBAC4u: goto label_7F1BBAC4;
    case 0x7F1BBAC8u: goto label_7F1BBAC8;
    case 0x7F1BBACCu: goto label_7F1BBACC;
    case 0x7F1BBAD0u: goto label_7F1BBAD0;
    case 0x7F1BBAD4u: goto label_7F1BBAD4;
    case 0x7F1BBAD8u: goto label_7F1BBAD8;
    case 0x7F1BBADCu: goto label_7F1BBADC;
    case 0x7F1BBAE0u: goto label_7F1BBAE0;
    case 0x7F1BBAE4u: goto label_7F1BBAE4;
    case 0x7F1BBAE8u: goto label_7F1BBAE8;
    case 0x7F1BBAECu: goto label_7F1BBAEC;
    case 0x7F1BBAF0u: goto label_7F1BBAF0;
    case 0x7F1BBAF4u: goto label_7F1BBAF4;
    case 0x7F1BBAF8u: goto label_7F1BBAF8;
    case 0x7F1BBAFCu: goto label_7F1BBAFC;
    case 0x7F1BBB00u: goto label_7F1BBB00;
    case 0x7F1BBB04u: goto label_7F1BBB04;
    case 0x7F1BBB08u: goto label_7F1BBB08;
    case 0x7F1BBB0Cu: goto label_7F1BBB0C;
    case 0x7F1BBB10u: goto label_7F1BBB10;
    case 0x7F1BBB14u: goto label_7F1BBB14;
    case 0x7F1BBB18u: goto label_7F1BBB18;
    case 0x7F1BBB1Cu: goto label_7F1BBB1C;
    case 0x7F1BBB20u: goto label_7F1BBB20;
    case 0x7F1BBB24u: goto label_7F1BBB24;
    case 0x7F1BBB28u: goto label_7F1BBB28;
    case 0x7F1BBB2Cu: goto label_7F1BBB2C;
    case 0x7F1BBB30u: goto label_7F1BBB30;
    case 0x7F1BBB34u: goto label_7F1BBB34;
    case 0x7F1BBB38u: goto label_7F1BBB38;
    case 0x7F1BBB3Cu: goto label_7F1BBB3C;
    case 0x7F1BBB40u: goto label_7F1BBB40;
    case 0x7F1BBB44u: goto label_7F1BBB44;
    case 0x7F1BBB48u: goto label_7F1BBB48;
    case 0x7F1BBB4Cu: goto label_7F1BBB4C;
    case 0x7F1BBB50u: goto label_7F1BBB50;
    case 0x7F1BBB54u: goto label_7F1BBB54;
    case 0x7F1BBB58u: goto label_7F1BBB58;
    case 0x7F1BBB5Cu: goto label_7F1BBB5C;
    case 0x7F1BBB60u: goto label_7F1BBB60;
    case 0x7F1BBB64u: goto label_7F1BBB64;
    case 0x7F1BBB68u: goto label_7F1BBB68;
    case 0x7F1BBB6Cu: goto label_7F1BBB6C;
    case 0x7F1BBB70u: goto label_7F1BBB70;
    case 0x7F1BBB74u: goto label_7F1BBB74;
    case 0x7F1BBB78u: goto label_7F1BBB78;
    case 0x7F1BBB7Cu: goto label_7F1BBB7C;
    case 0x7F1BBB80u: goto label_7F1BBB80;
    case 0x7F1BBB84u: goto label_7F1BBB84;
    case 0x7F1BBB88u: goto label_7F1BBB88;
    case 0x7F1BBB8Cu: goto label_7F1BBB8C;
    case 0x7F1BBB90u: goto label_7F1BBB90;
    case 0x7F1BBB94u: goto label_7F1BBB94;
    case 0x7F1BBB98u: goto label_7F1BBB98;
    case 0x7F1BBB9Cu: goto label_7F1BBB9C;
    case 0x7F1BBBA0u: goto label_7F1BBBA0;
    case 0x7F1BBBA4u: goto label_7F1BBBA4;
    case 0x7F1BBBA8u: goto label_7F1BBBA8;
    case 0x7F1BBBACu: goto label_7F1BBBAC;
    case 0x7F1BBBB0u: goto label_7F1BBBB0;
    case 0x7F1BBBB4u: goto label_7F1BBBB4;
    case 0x7F1BBBB8u: goto label_7F1BBBB8;
    case 0x7F1BBBBCu: goto label_7F1BBBBC;
    case 0x7F1BBBC0u: goto label_7F1BBBC0;
    case 0x7F1BBBC4u: goto label_7F1BBBC4;
    case 0x7F1BBBC8u: goto label_7F1BBBC8;
    case 0x7F1BBBCCu: goto label_7F1BBBCC;
    case 0x7F1BBBD0u: goto label_7F1BBBD0;
    case 0x7F1BBBD4u: goto label_7F1BBBD4;
    case 0x7F1BBBD8u: goto label_7F1BBBD8;
    case 0x7F1BBBDCu: goto label_7F1BBBDC;
    case 0x7F1BBBE0u: goto label_7F1BBBE0;
    case 0x7F1BBBE4u: goto label_7F1BBBE4;
    case 0x7F1BBBE8u: goto label_7F1BBBE8;
    case 0x7F1BBBECu: goto label_7F1BBBEC;
    case 0x7F1BBBF0u: goto label_7F1BBBF0;
    case 0x7F1BBBF4u: goto label_7F1BBBF4;
    case 0x7F1BBBF8u: goto label_7F1BBBF8;
    case 0x7F1BBBFCu: goto label_7F1BBBFC;
    case 0x7F1BBC00u: goto label_7F1BBC00;
    case 0x7F1BBC04u: goto label_7F1BBC04;
    case 0x7F1BBC08u: goto label_7F1BBC08;
    case 0x7F1BBC0Cu: goto label_7F1BBC0C;
    case 0x7F1BBC10u: goto label_7F1BBC10;
    case 0x7F1BBC14u: goto label_7F1BBC14;
    case 0x7F1BBC18u: goto label_7F1BBC18;
    case 0x7F1BBC1Cu: goto label_7F1BBC1C;
    case 0x7F1BBC20u: goto label_7F1BBC20;
    case 0x7F1BBC24u: goto label_7F1BBC24;
    case 0x7F1BBC28u: goto label_7F1BBC28;
    case 0x7F1BBC2Cu: goto label_7F1BBC2C;
    case 0x7F1BBC30u: goto label_7F1BBC30;
    case 0x7F1BBC34u: goto label_7F1BBC34;
    case 0x7F1BBC38u: goto label_7F1BBC38;
    case 0x7F1BBC3Cu: goto label_7F1BBC3C;
    case 0x7F1BBC40u: goto label_7F1BBC40;
    case 0x7F1BBC44u: goto label_7F1BBC44;
    case 0x7F1BBC48u: goto label_7F1BBC48;
    case 0x7F1BBC4Cu: goto label_7F1BBC4C;
    case 0x7F1BBC50u: goto label_7F1BBC50;
    case 0x7F1BBC54u: goto label_7F1BBC54;
    case 0x7F1BBC58u: goto label_7F1BBC58;
    case 0x7F1BBC5Cu: goto label_7F1BBC5C;
    case 0x7F1BBC60u: goto label_7F1BBC60;
    case 0x7F1BBC64u: goto label_7F1BBC64;
    case 0x7F1BBC68u: goto label_7F1BBC68;
    case 0x7F1BBC6Cu: goto label_7F1BBC6C;
    case 0x7F1BBC70u: goto label_7F1BBC70;
    case 0x7F1BBC74u: goto label_7F1BBC74;
    case 0x7F1BBC78u: goto label_7F1BBC78;
    case 0x7F1BBC7Cu: goto label_7F1BBC7C;
    case 0x7F1BBC80u: goto label_7F1BBC80;
    case 0x7F1BBC84u: goto label_7F1BBC84;
    case 0x7F1BBC88u: goto label_7F1BBC88;
    case 0x7F1BBC8Cu: goto label_7F1BBC8C;
    case 0x7F1BBC90u: goto label_7F1BBC90;
    case 0x7F1BBC94u: goto label_7F1BBC94;
    case 0x7F1BBC98u: goto label_7F1BBC98;
    case 0x7F1BBC9Cu: goto label_7F1BBC9C;
    case 0x7F1BBCA0u: goto label_7F1BBCA0;
    case 0x7F1BBCA4u: goto label_7F1BBCA4;
    case 0x7F1BBCA8u: goto label_7F1BBCA8;
    case 0x7F1BBCACu: goto label_7F1BBCAC;
    case 0x7F1BBCB0u: goto label_7F1BBCB0;
    case 0x7F1BBCB4u: goto label_7F1BBCB4;
    case 0x7F1BBCB8u: goto label_7F1BBCB8;
    case 0x7F1BBCBCu: goto label_7F1BBCBC;
    case 0x7F1BBCC0u: goto label_7F1BBCC0;
    case 0x7F1BBCC4u: goto label_7F1BBCC4;
    case 0x7F1BBCC8u: goto label_7F1BBCC8;
    case 0x7F1BBCCCu: goto label_7F1BBCCC;
    case 0x7F1BBCD0u: goto label_7F1BBCD0;
    case 0x7F1BBCD4u: goto label_7F1BBCD4;
    case 0x7F1BBCD8u: goto label_7F1BBCD8;
    case 0x7F1BBCDCu: goto label_7F1BBCDC;
    case 0x7F1BBCE0u: goto label_7F1BBCE0;
    case 0x7F1BBCE4u: goto label_7F1BBCE4;
    case 0x7F1BBCE8u: goto label_7F1BBCE8;
    case 0x7F1BBCECu: goto label_7F1BBCEC;
    case 0x7F1BBCF0u: goto label_7F1BBCF0;
    case 0x7F1BBCF4u: goto label_7F1BBCF4;
    case 0x7F1BBCF8u: goto label_7F1BBCF8;
    case 0x7F1BBCFCu: goto label_7F1BBCFC;
    case 0x7F1BBD00u: goto label_7F1BBD00;
    case 0x7F1BBD04u: goto label_7F1BBD04;
    case 0x7F1BBD08u: goto label_7F1BBD08;
    case 0x7F1BBD0Cu: goto label_7F1BBD0C;
    case 0x7F1BBD10u: goto label_7F1BBD10;
    case 0x7F1BBD14u: goto label_7F1BBD14;
    case 0x7F1BBD18u: goto label_7F1BBD18;
    case 0x7F1BBD1Cu: goto label_7F1BBD1C;
    case 0x7F1BBD20u: goto label_7F1BBD20;
    case 0x7F1BBD24u: goto label_7F1BBD24;
    case 0x7F1BBD28u: goto label_7F1BBD28;
    case 0x7F1BBD2Cu: goto label_7F1BBD2C;
    case 0x7F1BBD30u: goto label_7F1BBD30;
    case 0x7F1BBD34u: goto label_7F1BBD34;
    case 0x7F1BBD38u: goto label_7F1BBD38;
    case 0x7F1BBD3Cu: goto label_7F1BBD3C;
    case 0x7F1BBD40u: goto label_7F1BBD40;
    case 0x7F1BBD44u: goto label_7F1BBD44;
    case 0x7F1BBD48u: goto label_7F1BBD48;
    case 0x7F1BBD4Cu: goto label_7F1BBD4C;
    case 0x7F1BBD50u: goto label_7F1BBD50;
    case 0x7F1BBD54u: goto label_7F1BBD54;
    case 0x7F1BBD58u: goto label_7F1BBD58;
    case 0x7F1BBD5Cu: goto label_7F1BBD5C;
    case 0x7F1BBD60u: goto label_7F1BBD60;
    case 0x7F1BBD64u: goto label_7F1BBD64;
    case 0x7F1BBD68u: goto label_7F1BBD68;
    case 0x7F1BBD6Cu: goto label_7F1BBD6C;
    case 0x7F1BBD70u: goto label_7F1BBD70;
    case 0x7F1BBD74u: goto label_7F1BBD74;
    case 0x7F1BBD78u: goto label_7F1BBD78;
    case 0x7F1BBD7Cu: goto label_7F1BBD7C;
    case 0x7F1BBD80u: goto label_7F1BBD80;
    case 0x7F1BBD84u: goto label_7F1BBD84;
    case 0x7F1BBD88u: goto label_7F1BBD88;
    case 0x7F1BBD8Cu: goto label_7F1BBD8C;
    case 0x7F1BBD90u: goto label_7F1BBD90;
    case 0x7F1BBD94u: goto label_7F1BBD94;
    case 0x7F1BBD98u: goto label_7F1BBD98;
    case 0x7F1BBD9Cu: goto label_7F1BBD9C;
    case 0x7F1BBDA0u: goto label_7F1BBDA0;
    case 0x7F1BBDA4u: goto label_7F1BBDA4;
    case 0x7F1BBDA8u: goto label_7F1BBDA8;
    case 0x7F1BBDACu: goto label_7F1BBDAC;
    case 0x7F1BBDB0u: goto label_7F1BBDB0;
    case 0x7F1BBDB4u: goto label_7F1BBDB4;
    case 0x7F1BBDB8u: goto label_7F1BBDB8;
    case 0x7F1BBDBCu: goto label_7F1BBDBC;
    case 0x7F1BBDC0u: goto label_7F1BBDC0;
    case 0x7F1BBDC4u: goto label_7F1BBDC4;
    case 0x7F1BBDC8u: goto label_7F1BBDC8;
    case 0x7F1BBDCCu: goto label_7F1BBDCC;
    case 0x7F1BBDD0u: goto label_7F1BBDD0;
    case 0x7F1BBDD4u: goto label_7F1BBDD4;
    case 0x7F1BBDD8u: goto label_7F1BBDD8;
    case 0x7F1BBDDCu: goto label_7F1BBDDC;
    case 0x7F1BBDE0u: goto label_7F1BBDE0;
    case 0x7F1BBDE4u: goto label_7F1BBDE4;
    case 0x7F1BBDE8u: goto label_7F1BBDE8;
    case 0x7F1BBDECu: goto label_7F1BBDEC;
    case 0x7F1BBDF0u: goto label_7F1BBDF0;
    case 0x7F1BBDF4u: goto label_7F1BBDF4;
    case 0x7F1BBDF8u: goto label_7F1BBDF8;
    case 0x7F1BBDFCu: goto label_7F1BBDFC;
    case 0x7F1BBE00u: goto label_7F1BBE00;
    case 0x7F1BBE04u: goto label_7F1BBE04;
    case 0x7F1BBE08u: goto label_7F1BBE08;
    case 0x7F1BBE0Cu: goto label_7F1BBE0C;
    case 0x7F1BBE10u: goto label_7F1BBE10;
    case 0x7F1BBE14u: goto label_7F1BBE14;
    case 0x7F1BBE18u: goto label_7F1BBE18;
    case 0x7F1BBE1Cu: goto label_7F1BBE1C;
    case 0x7F1BBE20u: goto label_7F1BBE20;
    case 0x7F1BBE24u: goto label_7F1BBE24;
    case 0x7F1BBE28u: goto label_7F1BBE28;
    case 0x7F1BBE2Cu: goto label_7F1BBE2C;
    case 0x7F1BBE30u: goto label_7F1BBE30;
    case 0x7F1BBE34u: goto label_7F1BBE34;
    case 0x7F1BBE38u: goto label_7F1BBE38;
    case 0x7F1BBE3Cu: goto label_7F1BBE3C;
    case 0x7F1BBE40u: goto label_7F1BBE40;
    case 0x7F1BBE44u: goto label_7F1BBE44;
    case 0x7F1BBE48u: goto label_7F1BBE48;
    case 0x7F1BBE4Cu: goto label_7F1BBE4C;
    case 0x7F1BBE50u: goto label_7F1BBE50;
    case 0x7F1BBE54u: goto label_7F1BBE54;
    case 0x7F1BBE58u: goto label_7F1BBE58;
    case 0x7F1BBE5Cu: goto label_7F1BBE5C;
    case 0x7F1BBE60u: goto label_7F1BBE60;
    case 0x7F1BBE64u: goto label_7F1BBE64;
    case 0x7F1BBE68u: goto label_7F1BBE68;
    case 0x7F1BBE6Cu: goto label_7F1BBE6C;
    case 0x7F1BBE70u: goto label_7F1BBE70;
    case 0x7F1BBE74u: goto label_7F1BBE74;
    case 0x7F1BBE78u: goto label_7F1BBE78;
    case 0x7F1BBE7Cu: goto label_7F1BBE7C;
    case 0x7F1BBE80u: goto label_7F1BBE80;
    case 0x7F1BBE84u: goto label_7F1BBE84;
    case 0x7F1BBE88u: goto label_7F1BBE88;
    case 0x7F1BBE8Cu: goto label_7F1BBE8C;
    case 0x7F1BBE90u: goto label_7F1BBE90;
    case 0x7F1BBE94u: goto label_7F1BBE94;
    case 0x7F1BBE98u: goto label_7F1BBE98;
    case 0x7F1BBE9Cu: goto label_7F1BBE9C;
    case 0x7F1BBEA0u: goto label_7F1BBEA0;
    case 0x7F1BBEA4u: goto label_7F1BBEA4;
    case 0x7F1BBEA8u: goto label_7F1BBEA8;
    case 0x7F1BBEACu: goto label_7F1BBEAC;
    case 0x7F1BBEB0u: goto label_7F1BBEB0;
    case 0x7F1BBEB4u: goto label_7F1BBEB4;
    case 0x7F1BBEB8u: goto label_7F1BBEB8;
    case 0x7F1BBEBCu: goto label_7F1BBEBC;
    case 0x7F1BBEC0u: goto label_7F1BBEC0;
    case 0x7F1BBEC4u: goto label_7F1BBEC4;
    case 0x7F1BBEC8u: goto label_7F1BBEC8;
    case 0x7F1BBECCu: goto label_7F1BBECC;
    case 0x7F1BBED0u: goto label_7F1BBED0;
    case 0x7F1BBED4u: goto label_7F1BBED4;
    case 0x7F1BBED8u: goto label_7F1BBED8;
    case 0x7F1BBEDCu: goto label_7F1BBEDC;
    case 0x7F1BBEE0u: goto label_7F1BBEE0;
    case 0x7F1BBEE4u: goto label_7F1BBEE4;
    case 0x7F1BBEE8u: goto label_7F1BBEE8;
    case 0x7F1BBEECu: goto label_7F1BBEEC;
    case 0x7F1BBEF0u: goto label_7F1BBEF0;
    case 0x7F1BBEF4u: goto label_7F1BBEF4;
    case 0x7F1BBEF8u: goto label_7F1BBEF8;
    case 0x7F1BBEFCu: goto label_7F1BBEFC;
    case 0x7F1BBF00u: goto label_7F1BBF00;
    case 0x7F1BBF04u: goto label_7F1BBF04;
    case 0x7F1BBF08u: goto label_7F1BBF08;
    case 0x7F1BBF0Cu: goto label_7F1BBF0C;
    case 0x7F1BBF10u: goto label_7F1BBF10;
    case 0x7F1BBF14u: goto label_7F1BBF14;
    case 0x7F1BBF18u: goto label_7F1BBF18;
    case 0x7F1BBF1Cu: goto label_7F1BBF1C;
    case 0x7F1BBF20u: goto label_7F1BBF20;
    case 0x7F1BBF24u: goto label_7F1BBF24;
    case 0x7F1BBF28u: goto label_7F1BBF28;
    case 0x7F1BBF2Cu: goto label_7F1BBF2C;
    case 0x7F1BBF30u: goto label_7F1BBF30;
    case 0x7F1BBF34u: goto label_7F1BBF34;
    case 0x7F1BBF38u: goto label_7F1BBF38;
    case 0x7F1BBF3Cu: goto label_7F1BBF3C;
    case 0x7F1BBF40u: goto label_7F1BBF40;
    case 0x7F1BBF44u: goto label_7F1BBF44;
    case 0x7F1BBF48u: goto label_7F1BBF48;
    case 0x7F1BBF4Cu: goto label_7F1BBF4C;
    case 0x7F1BBF50u: goto label_7F1BBF50;
    case 0x7F1BBF54u: goto label_7F1BBF54;
    case 0x7F1BBF58u: goto label_7F1BBF58;
    case 0x7F1BBF5Cu: goto label_7F1BBF5C;
    case 0x7F1BBF60u: goto label_7F1BBF60;
    case 0x7F1BBF64u: goto label_7F1BBF64;
    case 0x7F1BBF68u: goto label_7F1BBF68;
    case 0x7F1BBF6Cu: goto label_7F1BBF6C;
    case 0x7F1BBF70u: goto label_7F1BBF70;
    case 0x7F1BBF74u: goto label_7F1BBF74;
    case 0x7F1BBF78u: goto label_7F1BBF78;
    case 0x7F1BBF7Cu: goto label_7F1BBF7C;
    case 0x7F1BBF80u: goto label_7F1BBF80;
    case 0x7F1BBF84u: goto label_7F1BBF84;
    case 0x7F1BBF88u: goto label_7F1BBF88;
    case 0x7F1BBF8Cu: goto label_7F1BBF8C;
    case 0x7F1BBF90u: goto label_7F1BBF90;
    case 0x7F1BBF94u: goto label_7F1BBF94;
    case 0x7F1BBF98u: goto label_7F1BBF98;
    case 0x7F1BBF9Cu: goto label_7F1BBF9C;
    case 0x7F1BBFA0u: goto label_7F1BBFA0;
    case 0x7F1BBFA4u: goto label_7F1BBFA4;
    case 0x7F1BBFA8u: goto label_7F1BBFA8;
    case 0x7F1BBFACu: goto label_7F1BBFAC;
    case 0x7F1BBFB0u: goto label_7F1BBFB0;
    case 0x7F1BBFB4u: goto label_7F1BBFB4;
    case 0x7F1BBFB8u: goto label_7F1BBFB8;
    case 0x7F1BBFBCu: goto label_7F1BBFBC;
    case 0x7F1BBFC0u: goto label_7F1BBFC0;
    case 0x7F1BBFC4u: goto label_7F1BBFC4;
    case 0x7F1BBFC8u: goto label_7F1BBFC8;
    case 0x7F1BBFCCu: goto label_7F1BBFCC;
    case 0x7F1BBFD0u: goto label_7F1BBFD0;
    case 0x7F1BBFD4u: goto label_7F1BBFD4;
    case 0x7F1BBFD8u: goto label_7F1BBFD8;
    case 0x7F1BBFDCu: goto label_7F1BBFDC;
    case 0x7F1BBFE0u: goto label_7F1BBFE0;
    case 0x7F1BBFE4u: goto label_7F1BBFE4;
    case 0x7F1BBFE8u: goto label_7F1BBFE8;
    case 0x7F1BBFECu: goto label_7F1BBFEC;
    case 0x7F1BBFF0u: goto label_7F1BBFF0;
    case 0x7F1BBFF4u: goto label_7F1BBFF4;
    case 0x7F1BBFF8u: goto label_7F1BBFF8;
    case 0x7F1BBFFCu: goto label_7F1BBFFC;
    case 0x7F1BC000u: goto label_7F1BC000;
    case 0x7F1BC004u: goto label_7F1BC004;
    case 0x7F1BC008u: goto label_7F1BC008;
    case 0x7F1BC00Cu: goto label_7F1BC00C;
    case 0x7F1BC010u: goto label_7F1BC010;
    case 0x7F1BC014u: goto label_7F1BC014;
    case 0x7F1BC018u: goto label_7F1BC018;
    case 0x7F1BC01Cu: goto label_7F1BC01C;
    case 0x7F1BC020u: goto label_7F1BC020;
    case 0x7F1BC024u: goto label_7F1BC024;
    case 0x7F1BC028u: goto label_7F1BC028;
    case 0x7F1BC02Cu: goto label_7F1BC02C;
    case 0x7F1BC030u: goto label_7F1BC030;
    case 0x7F1BC034u: goto label_7F1BC034;
    case 0x7F1BC038u: goto label_7F1BC038;
    case 0x7F1BC03Cu: goto label_7F1BC03C;
    case 0x7F1BC040u: goto label_7F1BC040;
    case 0x7F1BC044u: goto label_7F1BC044;
    case 0x7F1BC048u: goto label_7F1BC048;
    case 0x7F1BC04Cu: goto label_7F1BC04C;
    case 0x7F1BC050u: goto label_7F1BC050;
    case 0x7F1BC054u: goto label_7F1BC054;
    case 0x7F1BC058u: goto label_7F1BC058;
    case 0x7F1BC05Cu: goto label_7F1BC05C;
    case 0x7F1BC060u: goto label_7F1BC060;
    case 0x7F1BC064u: goto label_7F1BC064;
    case 0x7F1BC068u: goto label_7F1BC068;
    case 0x7F1BC06Cu: goto label_7F1BC06C;
    case 0x7F1BC070u: goto label_7F1BC070;
    case 0x7F1BC074u: goto label_7F1BC074;
    case 0x7F1BC078u: goto label_7F1BC078;
    case 0x7F1BC07Cu: goto label_7F1BC07C;
    case 0x7F1BC080u: goto label_7F1BC080;
    case 0x7F1BC084u: goto label_7F1BC084;
    case 0x7F1BC088u: goto label_7F1BC088;
    case 0x7F1BC08Cu: goto label_7F1BC08C;
    case 0x7F1BC090u: goto label_7F1BC090;
    case 0x7F1BC094u: goto label_7F1BC094;
    case 0x7F1BC098u: goto label_7F1BC098;
    case 0x7F1BC09Cu: goto label_7F1BC09C;
    case 0x7F1BC0A0u: goto label_7F1BC0A0;
    case 0x7F1BC0A4u: goto label_7F1BC0A4;
    case 0x7F1BC0A8u: goto label_7F1BC0A8;
    case 0x7F1BC0ACu: goto label_7F1BC0AC;
    case 0x7F1BC0B0u: goto label_7F1BC0B0;
    case 0x7F1BC0B4u: goto label_7F1BC0B4;
    case 0x7F1BC0B8u: goto label_7F1BC0B8;
    case 0x7F1BC0BCu: goto label_7F1BC0BC;
    case 0x7F1BC0C0u: goto label_7F1BC0C0;
    case 0x7F1BC0C4u: goto label_7F1BC0C4;
    case 0x7F1BC0C8u: goto label_7F1BC0C8;
    case 0x7F1BC0CCu: goto label_7F1BC0CC;
    case 0x7F1BC0D0u: goto label_7F1BC0D0;
    case 0x7F1BC0D4u: goto label_7F1BC0D4;
    case 0x7F1BC0D8u: goto label_7F1BC0D8;
    case 0x7F1BC0DCu: goto label_7F1BC0DC;
    case 0x7F1BC0E0u: goto label_7F1BC0E0;
    case 0x7F1BC0E4u: goto label_7F1BC0E4;
    case 0x7F1BC0E8u: goto label_7F1BC0E8;
    default: return;
    }
label_7F1B80EC:
    ctx->pc = 0x7F1B80ECu;
    ctx->downcount -= 17;
    // 7F1B80EC: addi    r5, r3, 14000
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14000);

label_7F1B80F0:
    ctx->pc = 0x7F1B80F0u;
    // 7F1B80F0: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B80F0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B80F4:
    ctx->pc = 0x7F1B80F4u;
    // 7F1B80F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B80F8:
    ctx->pc = 0x7F1B80F8u;
    // 7F1B80F8: lfs     f1, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B80F8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B80FC:
    ctx->pc = 0x7F1B80FCu;
    // 7F1B80FC: addi    r4, r4, -6440
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6440);

label_7F1B8100:
    ctx->pc = 0x7F1B8100u;
    // 7F1B8100: lfs     f0, 8(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8100u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B8104:
    ctx->pc = 0x7F1B8104u;
    // 7F1B8104: fctiwz    f2, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B8104u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[2], true, &result)) ctx->fpr[2] = dolrecomp_f64_from_bits(result); }

label_7F1B8108:
    ctx->pc = 0x7F1B8108u;
    // 7F1B8108: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B8108u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1B810C:
    ctx->pc = 0x7F1B810Cu;
    // 7F1B810C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B810Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B8110:
    ctx->pc = 0x7F1B8110u;
    // 7F1B8110: stfd     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_7F1B8114:
    ctx->pc = 0x7F1B8114u;
    // 7F1B8114: stfd     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8114u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1B8118:
    ctx->pc = 0x7F1B8118u;
    // 7F1B8118: lwz     r5, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B811C:
    ctx->pc = 0x7F1B811Cu;
    // 7F1B811C: stfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B811Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B8120:
    ctx->pc = 0x7F1B8120u;
    // 7F1B8120: lwz     r6, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B8124:
    ctx->pc = 0x7F1B8124u;
    // 7F1B8124: lwz     r7, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B8128:
    ctx->pc = 0x7F1B8128u;
    // 7F1B8128: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B812C:
    ctx->pc = 0x7F1B812Cu;
    // 7F1B812C: bl      0x8001258C
    {
            ctx->lr = 0x7F1B8130u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B8130:
    ctx->pc = 0x7F1B8130u;
    ctx->downcount -= 6;
    // 7F1B8130: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8134:
    ctx->pc = 0x7F1B8134u;
    // 7F1B8134: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8138:
    ctx->pc = 0x7F1B8138u;
    // 7F1B8138: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1B813C:
    ctx->pc = 0x7F1B813Cu;
    // 7F1B813C: li      r6, 108
    ctx->gpr[6] = (u32)(s32)(108);

label_7F1B8140:
    ctx->pc = 0x7F1B8140u;
    // 7F1B8140: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B8144:
    ctx->pc = 0x7F1B8144u;
    // 7F1B8144: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B8148u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B8148:
    ctx->pc = 0x7F1B8148u;
    ctx->downcount -= 7;
    // 7F1B8148: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B814C:
    ctx->pc = 0x7F1B814Cu;
    // 7F1B814C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8150:
    ctx->pc = 0x7F1B8150u;
    // 7F1B8150: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1B8154:
    ctx->pc = 0x7F1B8154u;
    // 7F1B8154: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B8158:
    ctx->pc = 0x7F1B8158u;
    // 7F1B8158: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F1B815C:
    ctx->pc = 0x7F1B815Cu;
    // 7F1B815C: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F1B8160:
    ctx->pc = 0x7F1B8160u;
    // 7F1B8160: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B8164u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B8164:
    ctx->pc = 0x7F1B8164u;
    ctx->downcount -= 6;
    // 7F1B8164: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8168:
    ctx->pc = 0x7F1B8168u;
    // 7F1B8168: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B816C:
    ctx->pc = 0x7F1B816Cu;
    // 7F1B816C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8170:
    ctx->pc = 0x7F1B8170u;
    // 7F1B8170: li      r6, 495
    ctx->gpr[6] = (u32)(s32)(495);

label_7F1B8174:
    ctx->pc = 0x7F1B8174u;
    // 7F1B8174: li      r7, 172
    ctx->gpr[7] = (u32)(s32)(172);

label_7F1B8178:
    ctx->pc = 0x7F1B8178u;
    // 7F1B8178: bl      0x7F0BA390
    {
            ctx->lr = 0x7F1B817Cu;
            ctx->pc = 0x7F0BA390u;
            return;
    }

label_7F1B817C:
    ctx->pc = 0x7F1B817Cu;
    ctx->downcount -= 6;
    // 7F1B817C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8180:
    ctx->pc = 0x7F1B8180u;
    // 7F1B8180: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B8184:
    ctx->pc = 0x7F1B8184u;
    // 7F1B8184: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8188:
    ctx->pc = 0x7F1B8188u;
    // 7F1B8188: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B818C:
    ctx->pc = 0x7F1B818Cu;
    // 7F1B818C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8190:
    ctx->pc = 0x7F1B8190u;
    ctx->downcount -= 8;
    // 7F1B8190: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8194:
    ctx->pc = 0x7F1B8194u;
    // 7F1B8194: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8198:
    ctx->pc = 0x7F1B8198u;
    // 7F1B8198: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B819C:
    ctx->pc = 0x7F1B819Cu;
    // 7F1B819C: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B81A0:
    ctx->pc = 0x7F1B81A0u;
    // 7F1B81A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B81A4:
    ctx->pc = 0x7F1B81A4u;
    // 7F1B81A4: lwz     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B81A8:
    ctx->pc = 0x7F1B81A8u;
    // 7F1B81A8: cmpwi   r0, 0
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

label_7F1B81AC:
    ctx->pc = 0x7F1B81ACu;
    // 7F1B81AC: bc    12, 2, 0x7F1B8210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8210;
        }
    }

label_7F1B81B0:
    ctx->pc = 0x7F1B81B0u;
    ctx->downcount -= 5;
    // 7F1B81B0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B81B4:
    ctx->pc = 0x7F1B81B4u;
    // 7F1B81B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B81B8:
    ctx->pc = 0x7F1B81B8u;
    // 7F1B81B8: addi    r4, r4, -6416
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6416);

label_7F1B81BC:
    ctx->pc = 0x7F1B81BCu;
    // 7F1B81BC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B81C0:
    ctx->pc = 0x7F1B81C0u;
    // 7F1B81C0: bl      0x8001258C
    {
            ctx->lr = 0x7F1B81C4u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B81C4:
    ctx->pc = 0x7F1B81C4u;
    ctx->downcount -= 6;
    // 7F1B81C4: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B81C8:
    ctx->pc = 0x7F1B81C8u;
    // 7F1B81C8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B81CC:
    ctx->pc = 0x7F1B81CCu;
    // 7F1B81CC: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1B81D0:
    ctx->pc = 0x7F1B81D0u;
    // 7F1B81D0: li      r6, 77
    ctx->gpr[6] = (u32)(s32)(77);

label_7F1B81D4:
    ctx->pc = 0x7F1B81D4u;
    // 7F1B81D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B81D8:
    ctx->pc = 0x7F1B81D8u;
    // 7F1B81D8: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B81DCu;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B81DC:
    ctx->pc = 0x7F1B81DCu;
    ctx->downcount -= 7;
    // 7F1B81DC: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B81E0:
    ctx->pc = 0x7F1B81E0u;
    // 7F1B81E0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B81E4:
    ctx->pc = 0x7F1B81E4u;
    // 7F1B81E4: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1B81E8:
    ctx->pc = 0x7F1B81E8u;
    // 7F1B81E8: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B81EC:
    ctx->pc = 0x7F1B81ECu;
    // 7F1B81EC: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F1B81F0:
    ctx->pc = 0x7F1B81F0u;
    // 7F1B81F0: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F1B81F4:
    ctx->pc = 0x7F1B81F4u;
    // 7F1B81F4: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B81F8u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B81F8:
    ctx->pc = 0x7F1B81F8u;
    ctx->downcount -= 6;
    // 7F1B81F8: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B81FC:
    ctx->pc = 0x7F1B81FCu;
    // 7F1B81FC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8200:
    ctx->pc = 0x7F1B8200u;
    // 7F1B8200: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8204:
    ctx->pc = 0x7F1B8204u;
    // 7F1B8204: li      r6, 495
    ctx->gpr[6] = (u32)(s32)(495);

label_7F1B8208:
    ctx->pc = 0x7F1B8208u;
    // 7F1B8208: li      r7, 172
    ctx->gpr[7] = (u32)(s32)(172);

label_7F1B820C:
    ctx->pc = 0x7F1B820Cu;
    // 7F1B820C: bl      0x7F0BA390
    {
            ctx->lr = 0x7F1B8210u;
            ctx->pc = 0x7F0BA390u;
            return;
    }

label_7F1B8210:
    ctx->pc = 0x7F1B8210u;
    ctx->downcount -= 6;
    // 7F1B8210: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8214:
    ctx->pc = 0x7F1B8214u;
    // 7F1B8214: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B8218:
    ctx->pc = 0x7F1B8218u;
    // 7F1B8218: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B821C:
    ctx->pc = 0x7F1B821Cu;
    // 7F1B821C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B8220:
    ctx->pc = 0x7F1B8220u;
    // 7F1B8220: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8224:
    ctx->pc = 0x7F1B8224u;
    ctx->downcount -= 8;
    // 7F1B8224: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8228:
    ctx->pc = 0x7F1B8228u;
    // 7F1B8228: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B822C:
    ctx->pc = 0x7F1B822Cu;
    // 7F1B822C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8230:
    ctx->pc = 0x7F1B8230u;
    // 7F1B8230: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8234:
    ctx->pc = 0x7F1B8234u;
    // 7F1B8234: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8238:
    ctx->pc = 0x7F1B8238u;
    // 7F1B8238: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B823C:
    ctx->pc = 0x7F1B823Cu;
    // 7F1B823C: cmpwi   r0, 0
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

label_7F1B8240:
    ctx->pc = 0x7F1B8240u;
    // 7F1B8240: bc    12, 2, 0x7F1B82A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B82A4;
        }
    }

label_7F1B8244:
    ctx->pc = 0x7F1B8244u;
    ctx->downcount -= 5;
    // 7F1B8244: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B8248:
    ctx->pc = 0x7F1B8248u;
    // 7F1B8248: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B824C:
    ctx->pc = 0x7F1B824Cu;
    // 7F1B824C: addi    r4, r4, -6408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6408);

label_7F1B8250:
    ctx->pc = 0x7F1B8250u;
    // 7F1B8250: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B8254:
    ctx->pc = 0x7F1B8254u;
    // 7F1B8254: bl      0x8001258C
    {
            ctx->lr = 0x7F1B8258u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B8258:
    ctx->pc = 0x7F1B8258u;
    ctx->downcount -= 6;
    // 7F1B8258: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B825C:
    ctx->pc = 0x7F1B825Cu;
    // 7F1B825C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8260:
    ctx->pc = 0x7F1B8260u;
    // 7F1B8260: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1B8264:
    ctx->pc = 0x7F1B8264u;
    // 7F1B8264: li      r6, 77
    ctx->gpr[6] = (u32)(s32)(77);

label_7F1B8268:
    ctx->pc = 0x7F1B8268u;
    // 7F1B8268: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B826C:
    ctx->pc = 0x7F1B826Cu;
    // 7F1B826C: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B8270u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B8270:
    ctx->pc = 0x7F1B8270u;
    ctx->downcount -= 7;
    // 7F1B8270: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8274:
    ctx->pc = 0x7F1B8274u;
    // 7F1B8274: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8278:
    ctx->pc = 0x7F1B8278u;
    // 7F1B8278: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1B827C:
    ctx->pc = 0x7F1B827Cu;
    // 7F1B827C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B8280:
    ctx->pc = 0x7F1B8280u;
    // 7F1B8280: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F1B8284:
    ctx->pc = 0x7F1B8284u;
    // 7F1B8284: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F1B8288:
    ctx->pc = 0x7F1B8288u;
    // 7F1B8288: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B828Cu;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B828C:
    ctx->pc = 0x7F1B828Cu;
    ctx->downcount -= 6;
    // 7F1B828C: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8290:
    ctx->pc = 0x7F1B8290u;
    // 7F1B8290: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8294:
    ctx->pc = 0x7F1B8294u;
    // 7F1B8294: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B8298:
    ctx->pc = 0x7F1B8298u;
    // 7F1B8298: li      r6, 495
    ctx->gpr[6] = (u32)(s32)(495);

label_7F1B829C:
    ctx->pc = 0x7F1B829Cu;
    // 7F1B829C: li      r7, 172
    ctx->gpr[7] = (u32)(s32)(172);

label_7F1B82A0:
    ctx->pc = 0x7F1B82A0u;
    // 7F1B82A0: bl      0x7F0BA390
    {
            ctx->lr = 0x7F1B82A4u;
            ctx->pc = 0x7F0BA390u;
            return;
    }

label_7F1B82A4:
    ctx->pc = 0x7F1B82A4u;
    ctx->downcount -= 6;
    // 7F1B82A4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B82A8:
    ctx->pc = 0x7F1B82A8u;
    // 7F1B82A8: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B82AC:
    ctx->pc = 0x7F1B82ACu;
    // 7F1B82AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B82B0:
    ctx->pc = 0x7F1B82B0u;
    // 7F1B82B0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B82B4:
    ctx->pc = 0x7F1B82B4u;
    // 7F1B82B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B82B8:
    ctx->pc = 0x7F1B82B8u;
    ctx->downcount -= 8;
    // 7F1B82B8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B82BC:
    ctx->pc = 0x7F1B82BCu;
    // 7F1B82BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B82C0:
    ctx->pc = 0x7F1B82C0u;
    // 7F1B82C0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B82C4:
    ctx->pc = 0x7F1B82C4u;
    // 7F1B82C4: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B82C8:
    ctx->pc = 0x7F1B82C8u;
    // 7F1B82C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B82CC:
    ctx->pc = 0x7F1B82CCu;
    // 7F1B82CC: lwz     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B82D0:
    ctx->pc = 0x7F1B82D0u;
    // 7F1B82D0: cmpwi   r0, 0
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

label_7F1B82D4:
    ctx->pc = 0x7F1B82D4u;
    // 7F1B82D4: bc    12, 2, 0x7F1B8338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8338;
        }
    }

label_7F1B82D8:
    ctx->pc = 0x7F1B82D8u;
    ctx->downcount -= 5;
    // 7F1B82D8: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B82DC:
    ctx->pc = 0x7F1B82DCu;
    // 7F1B82DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B82E0:
    ctx->pc = 0x7F1B82E0u;
    // 7F1B82E0: addi    r4, r4, -6400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6400);

label_7F1B82E4:
    ctx->pc = 0x7F1B82E4u;
    // 7F1B82E4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B82E8:
    ctx->pc = 0x7F1B82E8u;
    // 7F1B82E8: bl      0x8001258C
    {
            ctx->lr = 0x7F1B82ECu;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B82EC:
    ctx->pc = 0x7F1B82ECu;
    ctx->downcount -= 6;
    // 7F1B82EC: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B82F0:
    ctx->pc = 0x7F1B82F0u;
    // 7F1B82F0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B82F4:
    ctx->pc = 0x7F1B82F4u;
    // 7F1B82F4: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_7F1B82F8:
    ctx->pc = 0x7F1B82F8u;
    // 7F1B82F8: li      r6, 77
    ctx->gpr[6] = (u32)(s32)(77);

label_7F1B82FC:
    ctx->pc = 0x7F1B82FCu;
    // 7F1B82FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B8300:
    ctx->pc = 0x7F1B8300u;
    // 7F1B8300: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B8304u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B8304:
    ctx->pc = 0x7F1B8304u;
    ctx->downcount -= 7;
    // 7F1B8304: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8308:
    ctx->pc = 0x7F1B8308u;
    // 7F1B8308: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B830C:
    ctx->pc = 0x7F1B830Cu;
    // 7F1B830C: li      r5, 255
    ctx->gpr[5] = (u32)(s32)(255);

label_7F1B8310:
    ctx->pc = 0x7F1B8310u;
    // 7F1B8310: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B8314:
    ctx->pc = 0x7F1B8314u;
    // 7F1B8314: li      r7, 255
    ctx->gpr[7] = (u32)(s32)(255);

label_7F1B8318:
    ctx->pc = 0x7F1B8318u;
    // 7F1B8318: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F1B831C:
    ctx->pc = 0x7F1B831Cu;
    // 7F1B831C: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B8320u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B8320:
    ctx->pc = 0x7F1B8320u;
    ctx->downcount -= 6;
    // 7F1B8320: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8324:
    ctx->pc = 0x7F1B8324u;
    // 7F1B8324: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8328:
    ctx->pc = 0x7F1B8328u;
    // 7F1B8328: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B832C:
    ctx->pc = 0x7F1B832Cu;
    // 7F1B832C: li      r6, 495
    ctx->gpr[6] = (u32)(s32)(495);

label_7F1B8330:
    ctx->pc = 0x7F1B8330u;
    // 7F1B8330: li      r7, 172
    ctx->gpr[7] = (u32)(s32)(172);

label_7F1B8334:
    ctx->pc = 0x7F1B8334u;
    // 7F1B8334: bl      0x7F0BA390
    {
            ctx->lr = 0x7F1B8338u;
            ctx->pc = 0x7F0BA390u;
            return;
    }

label_7F1B8338:
    ctx->pc = 0x7F1B8338u;
    ctx->downcount -= 6;
    // 7F1B8338: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B833C:
    ctx->pc = 0x7F1B833Cu;
    // 7F1B833C: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B8340:
    ctx->pc = 0x7F1B8340u;
    // 7F1B8340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8344:
    ctx->pc = 0x7F1B8344u;
    // 7F1B8344: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B8348:
    ctx->pc = 0x7F1B8348u;
    // 7F1B8348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B834C:
    ctx->pc = 0x7F1B834Cu;
    ctx->downcount -= 6;
    // 7F1B834C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8350:
    ctx->pc = 0x7F1B8350u;
    // 7F1B8350: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8354:
    ctx->pc = 0x7F1B8354u;
    // 7F1B8354: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8358:
    ctx->pc = 0x7F1B8358u;
    // 7F1B8358: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B835C:
    ctx->pc = 0x7F1B835Cu;
    // 7F1B835C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8360:
    ctx->pc = 0x7F1B8360u;
    // 7F1B8360: bl      0x7F1B8190
    {
            ctx->lr = 0x7F1B8364u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B8190u;
                return;
            }
            goto label_7F1B8190;
    }

label_7F1B8364:
    ctx->pc = 0x7F1B8364u;
    ctx->downcount -= 2;
    // 7F1B8364: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8368:
    ctx->pc = 0x7F1B8368u;
    // 7F1B8368: bl      0x7F1B8224
    {
            ctx->lr = 0x7F1B836Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B8224u;
                return;
            }
            goto label_7F1B8224;
    }

label_7F1B836C:
    ctx->pc = 0x7F1B836Cu;
    ctx->downcount -= 2;
    // 7F1B836C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8370:
    ctx->pc = 0x7F1B8370u;
    // 7F1B8370: bl      0x7F1B82B8
    {
            ctx->lr = 0x7F1B8374u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B82B8u;
                return;
            }
            goto label_7F1B82B8;
    }

label_7F1B8374:
    ctx->pc = 0x7F1B8374u;
    ctx->downcount -= 2;
    // 7F1B8374: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8378:
    ctx->pc = 0x7F1B8378u;
    // 7F1B8378: bl      0x7F1B8030
    {
            ctx->lr = 0x7F1B837Cu;
            ctx->pc = 0x7F1B8030u;
            return;
    }

label_7F1B837C:
    ctx->pc = 0x7F1B837Cu;
    ctx->downcount -= 2;
    // 7F1B837C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8380:
    ctx->pc = 0x7F1B8380u;
    // 7F1B8380: bl      0x7F1B7EE4
    {
            ctx->lr = 0x7F1B8384u;
            ctx->pc = 0x7F1B7EE4u;
            return;
    }

label_7F1B8384:
    ctx->pc = 0x7F1B8384u;
    ctx->downcount -= 6;
    // 7F1B8384: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8388:
    ctx->pc = 0x7F1B8388u;
    // 7F1B8388: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B838C:
    ctx->pc = 0x7F1B838Cu;
    // 7F1B838C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8390:
    ctx->pc = 0x7F1B8390u;
    // 7F1B8390: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8394:
    ctx->pc = 0x7F1B8394u;
    // 7F1B8394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8398:
    ctx->pc = 0x7F1B8398u;
    ctx->downcount -= 11;
    // 7F1B8398: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B839C:
    ctx->pc = 0x7F1B839Cu;
    // 7F1B839C: lwz     r0, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B83A0:
    ctx->pc = 0x7F1B83A0u;
    // 7F1B83A0: addi    r4, r4, -6552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6552);

label_7F1B83A4:
    ctx->pc = 0x7F1B83A4u;
    // 7F1B83A4: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B83A8:
    ctx->pc = 0x7F1B83A8u;
    // 7F1B83A8: lwz     r0, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B83AC:
    ctx->pc = 0x7F1B83ACu;
    // 7F1B83AC: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B83B0:
    ctx->pc = 0x7F1B83B0u;
    // 7F1B83B0: lwz     r0, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B83B4:
    ctx->pc = 0x7F1B83B4u;
    // 7F1B83B4: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B83B8:
    ctx->pc = 0x7F1B83B8u;
    // 7F1B83B8: lwz     r0, 144(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B83BC:
    ctx->pc = 0x7F1B83BCu;
    // 7F1B83BC: stw     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B83C0:
    ctx->pc = 0x7F1B83C0u;
    // 7F1B83C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B83C4:
    ctx->pc = 0x7F1B83C4u;
    ctx->downcount -= 7;
    // 7F1B83C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B83C8:
    ctx->pc = 0x7F1B83C8u;
    // 7F1B83C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B83CC:
    ctx->pc = 0x7F1B83CCu;
    // 7F1B83CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B83D0:
    ctx->pc = 0x7F1B83D0u;
    // 7F1B83D0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B83D4:
    ctx->pc = 0x7F1B83D4u;
    // 7F1B83D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B83D8:
    ctx->pc = 0x7F1B83D8u;
    // 7F1B83D8: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B83DC:
    ctx->pc = 0x7F1B83DCu;
    // 7F1B83DC: bl      0x7F234510
    {
            ctx->lr = 0x7F1B83E0u;
            ctx->pc = 0x7F234510u;
            return;
    }

label_7F1B83E0:
    ctx->pc = 0x7F1B83E0u;
    ctx->downcount -= 6;
    // 7F1B83E0: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F1B83E4:
    ctx->pc = 0x7F1B83E4u;
    // 7F1B83E4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B83E8:
    ctx->pc = 0x7F1B83E8u;
    // 7F1B83E8: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F1B83EC:
    ctx->pc = 0x7F1B83ECu;
    // 7F1B83EC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_7F1B83F0:
    ctx->pc = 0x7F1B83F0u;
    // 7F1B83F0: addi    r4, r4, -32543
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32543);

label_7F1B83F4:
    ctx->pc = 0x7F1B83F4u;
    // 7F1B83F4: bl      0x7F0BA2A4
    {
            ctx->lr = 0x7F1B83F8u;
            ctx->pc = 0x7F0BA2A4u;
            return;
    }

label_7F1B83F8:
    ctx->pc = 0x7F1B83F8u;
    ctx->downcount -= 4;
    // 7F1B83F8: stw     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B83FC:
    ctx->pc = 0x7F1B83FCu;
    // 7F1B83FC: lwz     r4, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B8400:
    ctx->pc = 0x7F1B8400u;
    // 7F1B8400: cmplwi  r4, 0x0000
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

label_7F1B8404:
    ctx->pc = 0x7F1B8404u;
    // 7F1B8404: bc    4, 2, 0x7F1B841C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B841C;
        }
    }

label_7F1B8408:
    ctx->pc = 0x7F1B8408u;
    ctx->downcount -= 3;
    // 7F1B8408: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B840C:
    ctx->pc = 0x7F1B840Cu;
    // 7F1B840C: addi    r3, r3, -6392
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6392);

label_7F1B8410:
    ctx->pc = 0x7F1B8410u;
    // 7F1B8410: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1B8414u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1B8414:
    ctx->pc = 0x7F1B8414u;
    ctx->downcount -= 2;
    // 7F1B8414: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1B8418:
    ctx->pc = 0x7F1B8418u;
    // 7F1B8418: b       0x7F1B84AC
    {
            goto label_7F1B84AC;
    }

label_7F1B841C:
    ctx->pc = 0x7F1B841Cu;
    ctx->downcount -= 2;
    // 7F1B841C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8420:
    ctx->pc = 0x7F1B8420u;
    // 7F1B8420: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1B8424u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1B8424:
    ctx->pc = 0x7F1B8424u;
    ctx->downcount -= 34;
    // 7F1B8424: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B8428:
    ctx->pc = 0x7F1B8428u;
    // 7F1B8428: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1B842C:
    ctx->pc = 0x7F1B842Cu;
    // 7F1B842C: addi    r5, r3, 7464
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7464);

label_7F1B8430:
    ctx->pc = 0x7F1B8430u;
    // 7F1B8430: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B8434:
    ctx->pc = 0x7F1B8434u;
    // 7F1B8434: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8434u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B8438:
    ctx->pc = 0x7F1B8438u;
    // 7F1B8438: addi    r6, r4, 14000
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(14000);

label_7F1B843C:
    ctx->pc = 0x7F1B843Cu;
    // 7F1B843C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B8440:
    ctx->pc = 0x7F1B8440u;
    // 7F1B8440: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B8444:
    ctx->pc = 0x7F1B8444u;
    // 7F1B8444: stfs     f0, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8444u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B8448:
    ctx->pc = 0x7F1B8448u;
    // 7F1B8448: addi    r4, r3, -6552
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6552);

label_7F1B844C:
    ctx->pc = 0x7F1B844Cu;
    // 7F1B844C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B8450:
    ctx->pc = 0x7F1B8450u;
    // 7F1B8450: stfs     f0, 4(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8450u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B8454:
    ctx->pc = 0x7F1B8454u;
    // 7F1B8454: stfs     f0, 8(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8454u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B8458:
    ctx->pc = 0x7F1B8458u;
    // 7F1B8458: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B845C:
    ctx->pc = 0x7F1B845Cu;
    // 7F1B845C: stw     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B8460:
    ctx->pc = 0x7F1B8460u;
    // 7F1B8460: stw     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B8464:
    ctx->pc = 0x7F1B8464u;
    // 7F1B8464: stw     r5, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B8468:
    ctx->pc = 0x7F1B8468u;
    // 7F1B8468: stw     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B846C:
    ctx->pc = 0x7F1B846Cu;
    // 7F1B846C: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8470:
    ctx->pc = 0x7F1B8470u;
    // 7F1B8470: stw     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8474:
    ctx->pc = 0x7F1B8474u;
    // 7F1B8474: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8478:
    ctx->pc = 0x7F1B8478u;
    // 7F1B8478: stw     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B847C:
    ctx->pc = 0x7F1B847Cu;
    // 7F1B847C: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8480:
    ctx->pc = 0x7F1B8480u;
    // 7F1B8480: stw     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8484:
    ctx->pc = 0x7F1B8484u;
    // 7F1B8484: lwz     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8488:
    ctx->pc = 0x7F1B8488u;
    // 7F1B8488: stw     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B848C:
    ctx->pc = 0x7F1B848Cu;
    // 7F1B848C: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8490:
    ctx->pc = 0x7F1B8490u;
    // 7F1B8490: stw     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8494:
    ctx->pc = 0x7F1B8494u;
    // 7F1B8494: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8498:
    ctx->pc = 0x7F1B8498u;
    // 7F1B8498: stw     r0, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B849C:
    ctx->pc = 0x7F1B849Cu;
    // 7F1B849C: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B84A0:
    ctx->pc = 0x7F1B84A0u;
    // 7F1B84A0: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B84A4:
    ctx->pc = 0x7F1B84A4u;
    // 7F1B84A4: lwz     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B84A8:
    ctx->pc = 0x7F1B84A8u;
    // 7F1B84A8: stw     r0, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B84AC:
    ctx->pc = 0x7F1B84ACu;
    ctx->downcount -= 6;
    // 7F1B84AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B84B0:
    ctx->pc = 0x7F1B84B0u;
    // 7F1B84B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B84B4:
    ctx->pc = 0x7F1B84B4u;
    // 7F1B84B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B84B8:
    ctx->pc = 0x7F1B84B8u;
    // 7F1B84B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B84BC:
    ctx->pc = 0x7F1B84BCu;
    // 7F1B84BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B84C0:
    ctx->pc = 0x7F1B84C0u;
    ctx->downcount -= 20;
    // 7F1B84C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B84C4:
    ctx->pc = 0x7F1B84C4u;
    // 7F1B84C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B84C8:
    ctx->pc = 0x7F1B84C8u;
    // 7F1B84C8: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B84CC:
    ctx->pc = 0x7F1B84CCu;
    // 7F1B84CC: li      r5, 212
    ctx->gpr[5] = (u32)(s32)(212);

label_7F1B84D0:
    ctx->pc = 0x7F1B84D0u;
    // 7F1B84D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B84D4:
    ctx->pc = 0x7F1B84D4u;
    // 7F1B84D4: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F1B84D8:
    ctx->pc = 0x7F1B84D8u;
    // 7F1B84D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B84DC:
    ctx->pc = 0x7F1B84DCu;
    // 7F1B84DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B84E0:
    ctx->pc = 0x7F1B84E0u;
    // 7F1B84E0: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1B84E4:
    ctx->pc = 0x7F1B84E4u;
    // 7F1B84E4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B84E8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B84E8:
    ctx->pc = 0x7F1B84E8u;
    ctx->downcount -= 2;
    // 7F1B84E8: or.   r31, r3, r3
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

label_7F1B84EC:
    ctx->pc = 0x7F1B84ECu;
    // 7F1B84EC: bc    12, 2, 0x7F1B8560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8560;
        }
    }

label_7F1B84F0:
    ctx->pc = 0x7F1B84F0u;
    ctx->downcount -= 5;
    // 7F1B84F0: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1B84F4:
    ctx->pc = 0x7F1B84F4u;
    // 7F1B84F4: lis     r5, 32540
    ctx->gpr[5] = ((u32)(s32)(32540) << 16);

label_7F1B84F8:
    ctx->pc = 0x7F1B84F8u;
    // 7F1B84F8: addi    r4, r4, -31924
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31924);

label_7F1B84FC:
    ctx->pc = 0x7F1B84FCu;
    // 7F1B84FC: addi    r5, r5, -31848
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-31848);

label_7F1B8500:
    ctx->pc = 0x7F1B8500u;
    // 7F1B8500: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B8504u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B8504:
    ctx->pc = 0x7F1B8504u;
    ctx->downcount -= 13;
    // 7F1B8504: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8508:
    ctx->pc = 0x7F1B8508u;
    // 7F1B8508: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B850C:
    ctx->pc = 0x7F1B850Cu;
    // 7F1B850C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B8510:
    ctx->pc = 0x7F1B8510u;
    // 7F1B8510: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8514:
    ctx->pc = 0x7F1B8514u;
    // 7F1B8514: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1B8518:
    ctx->pc = 0x7F1B8518u;
    // 7F1B8518: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B851C:
    ctx->pc = 0x7F1B851Cu;
    // 7F1B851C: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B8520:
    ctx->pc = 0x7F1B8520u;
    // 7F1B8520: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8524:
    ctx->pc = 0x7F1B8524u;
    // 7F1B8524: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B8528:
    ctx->pc = 0x7F1B8528u;
    // 7F1B8528: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B852C:
    ctx->pc = 0x7F1B852Cu;
    // 7F1B852C: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B8530:
    ctx->pc = 0x7F1B8530u;
    // 7F1B8530: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8534:
    ctx->pc = 0x7F1B8534u;
    // 7F1B8534: bl      0x7F1B83C4
    {
            ctx->lr = 0x7F1B8538u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B83C4u;
                return;
            }
            goto label_7F1B83C4;
    }

label_7F1B8538:
    ctx->pc = 0x7F1B8538u;
    ctx->downcount -= 2;
    // 7F1B8538: cmpwi   r3, 0
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

label_7F1B853C:
    ctx->pc = 0x7F1B853Cu;
    // 7F1B853C: bc    4, 0, 0x7F1B8550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8550;
        }
    }

label_7F1B8540:
    ctx->pc = 0x7F1B8540u;
    ctx->downcount -= 2;
    // 7F1B8540: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8544:
    ctx->pc = 0x7F1B8544u;
    // 7F1B8544: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B8548u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B8548:
    ctx->pc = 0x7F1B8548u;
    ctx->downcount -= 2;
    // 7F1B8548: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B854C:
    ctx->pc = 0x7F1B854Cu;
    // 7F1B854C: b       0x7F1B8564
    {
            goto label_7F1B8564;
    }

label_7F1B8550:
    ctx->pc = 0x7F1B8550u;
    ctx->downcount -= 4;
    // 7F1B8550: lis     r4, 32539
    ctx->gpr[4] = ((u32)(s32)(32539) << 16);

label_7F1B8554:
    ctx->pc = 0x7F1B8554u;
    // 7F1B8554: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8558:
    ctx->pc = 0x7F1B8558u;
    // 7F1B8558: addi    r4, r4, 32136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32136);

label_7F1B855C:
    ctx->pc = 0x7F1B855Cu;
    // 7F1B855C: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B8560u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B8560:
    ctx->pc = 0x7F1B8560u;
    ctx->downcount -= 1;
    // 7F1B8560: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8564:
    ctx->pc = 0x7F1B8564u;
    ctx->downcount -= 16;
    // 7F1B8564: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B8568:
    ctx->pc = 0x7F1B8568u;
    // 7F1B8568: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B856C:
    ctx->pc = 0x7F1B856Cu;
    // 7F1B856C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8570:
    ctx->pc = 0x7F1B8570u;
    // 7F1B8570: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8574:
    ctx->pc = 0x7F1B8574u;
    // 7F1B8574: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8578:
    ctx->pc = 0x7F1B8578u;
    ctx->downcount -= 7;
    // 7F1B8578: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B857C:
    ctx->pc = 0x7F1B857Cu;
    // 7F1B857C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8580:
    ctx->pc = 0x7F1B8580u;
    // 7F1B8580: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8584:
    ctx->pc = 0x7F1B8584u;
    // 7F1B8584: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8588:
    ctx->pc = 0x7F1B8588u;
    // 7F1B8588: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B858C:
    ctx->pc = 0x7F1B858Cu;
    // 7F1B858C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8590:
    ctx->pc = 0x7F1B8590u;
    // 7F1B8590: bl      0x80025A08
    {
            ctx->lr = 0x7F1B8594u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B8594:
    ctx->pc = 0x7F1B8594u;
    ctx->downcount -= 4;
    // 7F1B8594: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8598:
    ctx->pc = 0x7F1B8598u;
    // 7F1B8598: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8598u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B859C:
    ctx->pc = 0x7F1B859Cu;
    // 7F1B859C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B85A0:
    ctx->pc = 0x7F1B85A0u;
    // 7F1B85A0: bl      0x7F114738
    {
            ctx->lr = 0x7F1B85A4u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B85A4:
    ctx->pc = 0x7F1B85A4u;
    ctx->downcount -= 4;
    // 7F1B85A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B85A8:
    ctx->pc = 0x7F1B85A8u;
    // 7F1B85A8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B85A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B85AC:
    ctx->pc = 0x7F1B85ACu;
    // 7F1B85AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B85B0:
    ctx->pc = 0x7F1B85B0u;
    // 7F1B85B0: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B85B4u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B85B4:
    ctx->pc = 0x7F1B85B4u;
    ctx->downcount -= 4;
    // 7F1B85B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B85B8:
    ctx->pc = 0x7F1B85B8u;
    // 7F1B85B8: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B85B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B85BC:
    ctx->pc = 0x7F1B85BCu;
    // 7F1B85BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B85C0:
    ctx->pc = 0x7F1B85C0u;
    // 7F1B85C0: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B85C4u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B85C4:
    ctx->pc = 0x7F1B85C4u;
    ctx->downcount -= 2;
    // 7F1B85C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B85C8:
    ctx->pc = 0x7F1B85C8u;
    // 7F1B85C8: bl      0x7F3F93A4
    {
            ctx->lr = 0x7F1B85CCu;
            ctx->pc = 0x7F3F93A4u;
            return;
    }

label_7F1B85CC:
    ctx->pc = 0x7F1B85CCu;
    ctx->downcount -= 6;
    // 7F1B85CC: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B85D0:
    ctx->pc = 0x7F1B85D0u;
    // 7F1B85D0: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B85D4:
    ctx->pc = 0x7F1B85D4u;
    // 7F1B85D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B85D8:
    ctx->pc = 0x7F1B85D8u;
    // 7F1B85D8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B85DC:
    ctx->pc = 0x7F1B85DCu;
    // 7F1B85DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B85E0:
    ctx->pc = 0x7F1B85E0u;
    ctx->downcount -= 7;
    // 7F1B85E0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B85E4:
    ctx->pc = 0x7F1B85E4u;
    // 7F1B85E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B85E8:
    ctx->pc = 0x7F1B85E8u;
    // 7F1B85E8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B85EC:
    ctx->pc = 0x7F1B85ECu;
    // 7F1B85EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B85F0:
    ctx->pc = 0x7F1B85F0u;
    // 7F1B85F0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B85F4:
    ctx->pc = 0x7F1B85F4u;
    // 7F1B85F4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B85F8:
    ctx->pc = 0x7F1B85F8u;
    // 7F1B85F8: bl      0x80025A08
    {
            ctx->lr = 0x7F1B85FCu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B85FC:
    ctx->pc = 0x7F1B85FCu;
    ctx->downcount -= 4;
    // 7F1B85FC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8600:
    ctx->pc = 0x7F1B8600u;
    // 7F1B8600: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8600u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8604:
    ctx->pc = 0x7F1B8604u;
    // 7F1B8604: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8608:
    ctx->pc = 0x7F1B8608u;
    // 7F1B8608: bl      0x7F114738
    {
            ctx->lr = 0x7F1B860Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B860C:
    ctx->pc = 0x7F1B860Cu;
    ctx->downcount -= 4;
    // 7F1B860C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8610:
    ctx->pc = 0x7F1B8610u;
    // 7F1B8610: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8610u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8614:
    ctx->pc = 0x7F1B8614u;
    // 7F1B8614: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8618:
    ctx->pc = 0x7F1B8618u;
    // 7F1B8618: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B861Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B861C:
    ctx->pc = 0x7F1B861Cu;
    ctx->downcount -= 4;
    // 7F1B861C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8620:
    ctx->pc = 0x7F1B8620u;
    // 7F1B8620: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8620u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8624:
    ctx->pc = 0x7F1B8624u;
    // 7F1B8624: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8628:
    ctx->pc = 0x7F1B8628u;
    // 7F1B8628: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B862Cu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B862C:
    ctx->pc = 0x7F1B862Cu;
    ctx->downcount -= 14;
    // 7F1B862C: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B8630:
    ctx->pc = 0x7F1B8630u;
    // 7F1B8630: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8634:
    ctx->pc = 0x7F1B8634u;
    // 7F1B8634: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B8638:
    ctx->pc = 0x7F1B8638u;
    // 7F1B8638: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B863C:
    ctx->pc = 0x7F1B863Cu;
    // 7F1B863C: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1B8640:
    ctx->pc = 0x7F1B8640u;
    // 7F1B8640: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B8644:
    ctx->pc = 0x7F1B8644u;
    // 7F1B8644: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1B8648:
    ctx->pc = 0x7F1B8648u;
    // 7F1B8648: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1B864C:
    ctx->pc = 0x7F1B864Cu;
    // 7F1B864C: lfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B864Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8650:
    ctx->pc = 0x7F1B8650u;
    // 7F1B8650: or   r6, r6, r5
    {
        ctx->gpr[6] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1B8654:
    ctx->pc = 0x7F1B8654u;
    // 7F1B8654: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B8658:
    ctx->pc = 0x7F1B8658u;
    // 7F1B8658: or   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[4];
    }

label_7F1B865C:
    ctx->pc = 0x7F1B865Cu;
    // 7F1B865C: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1B8660:
    ctx->pc = 0x7F1B8660u;
    // 7F1B8660: bl      0x7F3F9E18
    {
            ctx->lr = 0x7F1B8664u;
            ctx->pc = 0x7F3F9E18u;
            return;
    }

label_7F1B8664:
    ctx->pc = 0x7F1B8664u;
    ctx->downcount -= 6;
    // 7F1B8664: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8668:
    ctx->pc = 0x7F1B8668u;
    // 7F1B8668: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B866C:
    ctx->pc = 0x7F1B866Cu;
    // 7F1B866C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8670:
    ctx->pc = 0x7F1B8670u;
    // 7F1B8670: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B8674:
    ctx->pc = 0x7F1B8674u;
    // 7F1B8674: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8678:
    ctx->pc = 0x7F1B8678u;
    ctx->downcount -= 7;
    // 7F1B8678: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B867C:
    ctx->pc = 0x7F1B867Cu;
    // 7F1B867C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8680:
    ctx->pc = 0x7F1B8680u;
    // 7F1B8680: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8684:
    ctx->pc = 0x7F1B8684u;
    // 7F1B8684: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8688:
    ctx->pc = 0x7F1B8688u;
    // 7F1B8688: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B868C:
    ctx->pc = 0x7F1B868Cu;
    // 7F1B868C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8690:
    ctx->pc = 0x7F1B8690u;
    // 7F1B8690: bl      0x80025A08
    {
            ctx->lr = 0x7F1B8694u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B8694:
    ctx->pc = 0x7F1B8694u;
    ctx->downcount -= 4;
    // 7F1B8694: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8698:
    ctx->pc = 0x7F1B8698u;
    // 7F1B8698: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8698u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B869C:
    ctx->pc = 0x7F1B869Cu;
    // 7F1B869C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B86A0:
    ctx->pc = 0x7F1B86A0u;
    // 7F1B86A0: bl      0x7F114738
    {
            ctx->lr = 0x7F1B86A4u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B86A4:
    ctx->pc = 0x7F1B86A4u;
    ctx->downcount -= 4;
    // 7F1B86A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B86A8:
    ctx->pc = 0x7F1B86A8u;
    // 7F1B86A8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B86A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B86AC:
    ctx->pc = 0x7F1B86ACu;
    // 7F1B86AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B86B0:
    ctx->pc = 0x7F1B86B0u;
    // 7F1B86B0: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B86B4u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B86B4:
    ctx->pc = 0x7F1B86B4u;
    ctx->downcount -= 4;
    // 7F1B86B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B86B8:
    ctx->pc = 0x7F1B86B8u;
    // 7F1B86B8: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B86B8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B86BC:
    ctx->pc = 0x7F1B86BCu;
    // 7F1B86BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B86C0:
    ctx->pc = 0x7F1B86C0u;
    // 7F1B86C0: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B86C4u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B86C4:
    ctx->pc = 0x7F1B86C4u;
    ctx->downcount -= 5;
    // 7F1B86C4: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B86C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B86C8:
    ctx->pc = 0x7F1B86C8u;
    // 7F1B86C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B86CC:
    ctx->pc = 0x7F1B86CCu;
    // 7F1B86CC: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B86CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B86D0:
    ctx->pc = 0x7F1B86D0u;
    // 7F1B86D0: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B86D4:
    ctx->pc = 0x7F1B86D4u;
    // 7F1B86D4: bl      0x7F456734
    {
            ctx->lr = 0x7F1B86D8u;
            ctx->pc = 0x7F456734u;
            return;
    }

label_7F1B86D8:
    ctx->pc = 0x7F1B86D8u;
    ctx->downcount -= 6;
    // 7F1B86D8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B86DC:
    ctx->pc = 0x7F1B86DCu;
    // 7F1B86DC: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B86E0:
    ctx->pc = 0x7F1B86E0u;
    // 7F1B86E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B86E4:
    ctx->pc = 0x7F1B86E4u;
    // 7F1B86E4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B86E8:
    ctx->pc = 0x7F1B86E8u;
    // 7F1B86E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B86EC:
    ctx->pc = 0x7F1B86ECu;
    ctx->downcount -= 7;
    // 7F1B86EC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B86F0:
    ctx->pc = 0x7F1B86F0u;
    // 7F1B86F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B86F4:
    ctx->pc = 0x7F1B86F4u;
    // 7F1B86F4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B86F8:
    ctx->pc = 0x7F1B86F8u;
    // 7F1B86F8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B86FC:
    ctx->pc = 0x7F1B86FCu;
    // 7F1B86FC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8700:
    ctx->pc = 0x7F1B8700u;
    // 7F1B8700: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8704:
    ctx->pc = 0x7F1B8704u;
    // 7F1B8704: bl      0x80025A08
    {
            ctx->lr = 0x7F1B8708u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B8708:
    ctx->pc = 0x7F1B8708u;
    ctx->downcount -= 4;
    // 7F1B8708: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B870C:
    ctx->pc = 0x7F1B870Cu;
    // 7F1B870C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B870Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8710:
    ctx->pc = 0x7F1B8710u;
    // 7F1B8710: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8714:
    ctx->pc = 0x7F1B8714u;
    // 7F1B8714: bl      0x7F114738
    {
            ctx->lr = 0x7F1B8718u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B8718:
    ctx->pc = 0x7F1B8718u;
    ctx->downcount -= 4;
    // 7F1B8718: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B871C:
    ctx->pc = 0x7F1B871Cu;
    // 7F1B871C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B871Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8720:
    ctx->pc = 0x7F1B8720u;
    // 7F1B8720: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8724:
    ctx->pc = 0x7F1B8724u;
    // 7F1B8724: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B8728u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B8728:
    ctx->pc = 0x7F1B8728u;
    ctx->downcount -= 4;
    // 7F1B8728: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B872C:
    ctx->pc = 0x7F1B872Cu;
    // 7F1B872C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B872Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8730:
    ctx->pc = 0x7F1B8730u;
    // 7F1B8730: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8734:
    ctx->pc = 0x7F1B8734u;
    // 7F1B8734: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B8738u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B8738:
    ctx->pc = 0x7F1B8738u;
    ctx->downcount -= 5;
    // 7F1B8738: lfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8738u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B873C:
    ctx->pc = 0x7F1B873Cu;
    // 7F1B873C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8740:
    ctx->pc = 0x7F1B8740u;
    // 7F1B8740: lfs     f2, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8740u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B8744:
    ctx->pc = 0x7F1B8744u;
    // 7F1B8744: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1B8748:
    ctx->pc = 0x7F1B8748u;
    // 7F1B8748: bl      0x7F44E0D0
    {
            ctx->lr = 0x7F1B874Cu;
            ctx->pc = 0x7F44E0D0u;
            return;
    }

label_7F1B874C:
    ctx->pc = 0x7F1B874Cu;
    ctx->downcount -= 6;
    // 7F1B874C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8750:
    ctx->pc = 0x7F1B8750u;
    // 7F1B8750: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B8754:
    ctx->pc = 0x7F1B8754u;
    // 7F1B8754: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8758:
    ctx->pc = 0x7F1B8758u;
    // 7F1B8758: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B875C:
    ctx->pc = 0x7F1B875Cu;
    // 7F1B875C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8760:
    ctx->pc = 0x7F1B8760u;
    ctx->downcount -= 7;
    // 7F1B8760: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8764:
    ctx->pc = 0x7F1B8764u;
    // 7F1B8764: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8768:
    ctx->pc = 0x7F1B8768u;
    // 7F1B8768: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B876C:
    ctx->pc = 0x7F1B876Cu;
    // 7F1B876C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8770:
    ctx->pc = 0x7F1B8770u;
    // 7F1B8770: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8774:
    ctx->pc = 0x7F1B8774u;
    // 7F1B8774: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8778:
    ctx->pc = 0x7F1B8778u;
    // 7F1B8778: bl      0x80025A08
    {
            ctx->lr = 0x7F1B877Cu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B877C:
    ctx->pc = 0x7F1B877Cu;
    ctx->downcount -= 4;
    // 7F1B877C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8780:
    ctx->pc = 0x7F1B8780u;
    // 7F1B8780: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8780u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8784:
    ctx->pc = 0x7F1B8784u;
    // 7F1B8784: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8788:
    ctx->pc = 0x7F1B8788u;
    // 7F1B8788: bl      0x7F114738
    {
            ctx->lr = 0x7F1B878Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B878C:
    ctx->pc = 0x7F1B878Cu;
    ctx->downcount -= 4;
    // 7F1B878C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8790:
    ctx->pc = 0x7F1B8790u;
    // 7F1B8790: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8790u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8794:
    ctx->pc = 0x7F1B8794u;
    // 7F1B8794: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8798:
    ctx->pc = 0x7F1B8798u;
    // 7F1B8798: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B879Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B879C:
    ctx->pc = 0x7F1B879Cu;
    ctx->downcount -= 4;
    // 7F1B879C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B87A0:
    ctx->pc = 0x7F1B87A0u;
    // 7F1B87A0: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B87A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B87A4:
    ctx->pc = 0x7F1B87A4u;
    // 7F1B87A4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B87A8:
    ctx->pc = 0x7F1B87A8u;
    // 7F1B87A8: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B87ACu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B87AC:
    ctx->pc = 0x7F1B87ACu;
    ctx->downcount -= 13;
    // 7F1B87AC: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B87B0:
    ctx->pc = 0x7F1B87B0u;
    // 7F1B87B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B87B4:
    ctx->pc = 0x7F1B87B4u;
    // 7F1B87B4: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B87B8:
    ctx->pc = 0x7F1B87B8u;
    // 7F1B87B8: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B87BC:
    ctx->pc = 0x7F1B87BCu;
    // 7F1B87BC: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1B87C0:
    ctx->pc = 0x7F1B87C0u;
    // 7F1B87C0: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B87C4:
    ctx->pc = 0x7F1B87C4u;
    // 7F1B87C4: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1B87C8:
    ctx->pc = 0x7F1B87C8u;
    // 7F1B87C8: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1B87CC:
    ctx->pc = 0x7F1B87CCu;
    // 7F1B87CC: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B87D0:
    ctx->pc = 0x7F1B87D0u;
    // 7F1B87D0: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1B87D4:
    ctx->pc = 0x7F1B87D4u;
    // 7F1B87D4: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1B87D8:
    ctx->pc = 0x7F1B87D8u;
    // 7F1B87D8: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1B87DC:
    ctx->pc = 0x7F1B87DCu;
    // 7F1B87DC: bl      0x7F3ED82C
    {
            ctx->lr = 0x7F1B87E0u;
            ctx->pc = 0x7F3ED82Cu;
            return;
    }

label_7F1B87E0:
    ctx->pc = 0x7F1B87E0u;
    ctx->downcount -= 6;
    // 7F1B87E0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B87E4:
    ctx->pc = 0x7F1B87E4u;
    // 7F1B87E4: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B87E8:
    ctx->pc = 0x7F1B87E8u;
    // 7F1B87E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B87EC:
    ctx->pc = 0x7F1B87ECu;
    // 7F1B87EC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B87F0:
    ctx->pc = 0x7F1B87F0u;
    // 7F1B87F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B87F4:
    ctx->pc = 0x7F1B87F4u;
    ctx->downcount -= 1;
    // 7F1B87F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B87F8:
    ctx->pc = 0x7F1B87F8u;
    ctx->downcount -= 1;
    // 7F1B87F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B87FC:
    ctx->pc = 0x7F1B87FCu;
    ctx->downcount -= 20;
    // 7F1B87FC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8800:
    ctx->pc = 0x7F1B8800u;
    // 7F1B8800: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8804:
    ctx->pc = 0x7F1B8804u;
    // 7F1B8804: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8808:
    ctx->pc = 0x7F1B8808u;
    // 7F1B8808: rlwinm. r0, r6, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B880C:
    ctx->pc = 0x7F1B880Cu;
    // 7F1B880C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B8810:
    ctx->pc = 0x7F1B8810u;
    // 7F1B8810: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B8814:
    ctx->pc = 0x7F1B8814u;
    // 7F1B8814: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8818:
    ctx->pc = 0x7F1B8818u;
    // 7F1B8818: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B881C:
    ctx->pc = 0x7F1B881Cu;
    // 7F1B881C: stw     r31, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8820:
    ctx->pc = 0x7F1B8820u;
    // 7F1B8820: bc    12, 2, 0x7F1B8884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8884;
        }
    }

label_7F1B8824:
    ctx->pc = 0x7F1B8824u;
    ctx->downcount -= 3;
    // 7F1B8824: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B8828:
    ctx->pc = 0x7F1B8828u;
    // 7F1B8828: addi    r3, r3, -6360
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6360);

label_7F1B882C:
    ctx->pc = 0x7F1B882Cu;
    // 7F1B882C: bl      0x7F3CA75C
    {
            ctx->lr = 0x7F1B8830u;
            ctx->pc = 0x7F3CA75Cu;
            return;
    }

label_7F1B8830:
    ctx->pc = 0x7F1B8830u;
    ctx->downcount -= 18;
    // 7F1B8830: lis     r5, 150
    ctx->gpr[5] = ((u32)(s32)(150) << 16);

label_7F1B8834:
    ctx->pc = 0x7F1B8834u;
    // 7F1B8834: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B8838:
    ctx->pc = 0x7F1B8838u;
    // 7F1B8838: addi    r0, r5, 4772
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(4772);

label_7F1B883C:
    ctx->pc = 0x7F1B883Cu;
    // 7F1B883C: lis     r6, 32585
    ctx->gpr[6] = ((u32)(s32)(32585) << 16);

label_7F1B8840:
    ctx->pc = 0x7F1B8840u;
    // 7F1B8840: addi    r5, r4, 7472
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(7472);

label_7F1B8844:
    ctx->pc = 0x7F1B8844u;
    // 7F1B8844: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B8848:
    ctx->pc = 0x7F1B8848u;
    // 7F1B8848: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8848u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B884C:
    ctx->pc = 0x7F1B884Cu;
    // 7F1B884C: addi    r7, r6, 12832
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(12832);

label_7F1B8850:
    ctx->pc = 0x7F1B8850u;
    // 7F1B8850: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1B8854:
    ctx->pc = 0x7F1B8854u;
    // 7F1B8854: lis     r9, 199
    ctx->gpr[9] = ((u32)(s32)(199) << 16);

label_7F1B8858:
    ctx->pc = 0x7F1B8858u;
    // 7F1B8858: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B885C:
    ctx->pc = 0x7F1B885Cu;
    // 7F1B885C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8860:
    ctx->pc = 0x7F1B8860u;
    // 7F1B8860: addi    r3, r9, -909
    ctx->gpr[3] = ctx->gpr[9] + (u32)(s32)(-909);

label_7F1B8864:
    ctx->pc = 0x7F1B8864u;
    // 7F1B8864: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8868:
    ctx->pc = 0x7F1B8868u;
    // 7F1B8868: li      r5, 13
    ctx->gpr[5] = (u32)(s32)(13);

label_7F1B886C:
    ctx->pc = 0x7F1B886Cu;
    // 7F1B886C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1B8870:
    ctx->pc = 0x7F1B8870u;
    // 7F1B8870: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1B8874:
    ctx->pc = 0x7F1B8874u;
    // 7F1B8874: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1B8878u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1B8878:
    ctx->pc = 0x7F1B8878u;
    ctx->downcount -= 3;
    // 7F1B8878: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B887C:
    ctx->pc = 0x7F1B887Cu;
    // 7F1B887C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8880:
    ctx->pc = 0x7F1B8880u;
    // 7F1B8880: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1B8884u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1B8884:
    ctx->pc = 0x7F1B8884u;
    ctx->downcount -= 17;
    // 7F1B8884: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B8888:
    ctx->pc = 0x7F1B8888u;
    // 7F1B8888: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B888C:
    ctx->pc = 0x7F1B888Cu;
    // 7F1B888C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8890:
    ctx->pc = 0x7F1B8890u;
    // 7F1B8890: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8894:
    ctx->pc = 0x7F1B8894u;
    // 7F1B8894: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B8898:
    ctx->pc = 0x7F1B8898u;
    // 7F1B8898: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B889C:
    ctx->pc = 0x7F1B889Cu;
    ctx->downcount -= 22;
    // 7F1B889C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B88A0:
    ctx->pc = 0x7F1B88A0u;
    // 7F1B88A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B88A4:
    ctx->pc = 0x7F1B88A4u;
    // 7F1B88A4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B88A8:
    ctx->pc = 0x7F1B88A8u;
    // 7F1B88A8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B88AC:
    ctx->pc = 0x7F1B88ACu;
    // 7F1B88AC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B88B0:
    ctx->pc = 0x7F1B88B0u;
    // 7F1B88B0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B88B4:
    ctx->pc = 0x7F1B88B4u;
    // 7F1B88B4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B88B8:
    ctx->pc = 0x7F1B88B8u;
    // 7F1B88B8: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B88BC:
    ctx->pc = 0x7F1B88BCu;
    // 7F1B88BC: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1B88C0:
    ctx->pc = 0x7F1B88C0u;
    // 7F1B88C0: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B88C4:
    ctx->pc = 0x7F1B88C4u;
    // 7F1B88C4: li      r5, 56
    ctx->gpr[5] = (u32)(s32)(56);

label_7F1B88C8:
    ctx->pc = 0x7F1B88C8u;
    // 7F1B88C8: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B88CCu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B88CC:
    ctx->pc = 0x7F1B88CCu;
    ctx->downcount -= 2;
    // 7F1B88CC: or.   r31, r3, r3
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

label_7F1B88D0:
    ctx->pc = 0x7F1B88D0u;
    // 7F1B88D0: bc    12, 2, 0x7F1B893C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B893C;
        }
    }

label_7F1B88D4:
    ctx->pc = 0x7F1B88D4u;
    ctx->downcount -= 5;
    // 7F1B88D4: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1B88D8:
    ctx->pc = 0x7F1B88D8u;
    // 7F1B88D8: lis     r5, 32540
    ctx->gpr[5] = ((u32)(s32)(32540) << 16);

label_7F1B88DC:
    ctx->pc = 0x7F1B88DCu;
    // 7F1B88DC: addi    r4, r4, -30728
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30728);

label_7F1B88E0:
    ctx->pc = 0x7F1B88E0u;
    // 7F1B88E0: addi    r5, r5, -30732
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30732);

label_7F1B88E4:
    ctx->pc = 0x7F1B88E4u;
    // 7F1B88E4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B88E8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B88E8:
    ctx->pc = 0x7F1B88E8u;
    ctx->downcount -= 15;
    // 7F1B88E8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B88EC:
    ctx->pc = 0x7F1B88ECu;
    // 7F1B88EC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B88F0:
    ctx->pc = 0x7F1B88F0u;
    // 7F1B88F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B88F4:
    ctx->pc = 0x7F1B88F4u;
    // 7F1B88F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B88F8:
    ctx->pc = 0x7F1B88F8u;
    // 7F1B88F8: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1B88FC:
    ctx->pc = 0x7F1B88FCu;
    // 7F1B88FC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B8900:
    ctx->pc = 0x7F1B8900u;
    // 7F1B8900: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B8904:
    ctx->pc = 0x7F1B8904u;
    // 7F1B8904: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B8908:
    ctx->pc = 0x7F1B8908u;
    // 7F1B8908: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B890C:
    ctx->pc = 0x7F1B890Cu;
    // 7F1B890C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8910:
    ctx->pc = 0x7F1B8910u;
    // 7F1B8910: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B8914:
    ctx->pc = 0x7F1B8914u;
    // 7F1B8914: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B8918:
    ctx->pc = 0x7F1B8918u;
    // 7F1B8918: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B891C:
    ctx->pc = 0x7F1B891Cu;
    // 7F1B891C: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8920:
    ctx->pc = 0x7F1B8920u;
    // 7F1B8920: bl      0x7F1B87FC
    {
            ctx->lr = 0x7F1B8924u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B87FCu;
                return;
            }
            goto label_7F1B87FC;
    }

label_7F1B8924:
    ctx->pc = 0x7F1B8924u;
    ctx->downcount -= 2;
    // 7F1B8924: cmpwi   r3, 0
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

label_7F1B8928:
    ctx->pc = 0x7F1B8928u;
    // 7F1B8928: bc    4, 0, 0x7F1B893C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B893C;
        }
    }

label_7F1B892C:
    ctx->pc = 0x7F1B892Cu;
    ctx->downcount -= 2;
    // 7F1B892C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8930:
    ctx->pc = 0x7F1B8930u;
    // 7F1B8930: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B8934u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B8934:
    ctx->pc = 0x7F1B8934u;
    ctx->downcount -= 2;
    // 7F1B8934: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B8938:
    ctx->pc = 0x7F1B8938u;
    // 7F1B8938: b       0x7F1B8940
    {
            goto label_7F1B8940;
    }

label_7F1B893C:
    ctx->pc = 0x7F1B893Cu;
    ctx->downcount -= 1;
    // 7F1B893C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8940:
    ctx->pc = 0x7F1B8940u;
    ctx->downcount -= 16;
    // 7F1B8940: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B8944:
    ctx->pc = 0x7F1B8944u;
    // 7F1B8944: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8948:
    ctx->pc = 0x7F1B8948u;
    // 7F1B8948: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B894C:
    ctx->pc = 0x7F1B894Cu;
    // 7F1B894C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B8950:
    ctx->pc = 0x7F1B8950u;
    // 7F1B8950: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8954:
    ctx->pc = 0x7F1B8954u;
    ctx->downcount -= 18;
    // 7F1B8954: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8958:
    ctx->pc = 0x7F1B8958u;
    // 7F1B8958: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B895C:
    ctx->pc = 0x7F1B895Cu;
    // 7F1B895C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8960:
    ctx->pc = 0x7F1B8960u;
    // 7F1B8960: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B8964:
    ctx->pc = 0x7F1B8964u;
    // 7F1B8964: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8968:
    ctx->pc = 0x7F1B8968u;
    // 7F1B8968: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B896C:
    ctx->pc = 0x7F1B896Cu;
    // 7F1B896C: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8970:
    ctx->pc = 0x7F1B8970u;
    // 7F1B8970: bl      0x7F19943C
    {
            ctx->lr = 0x7F1B8974u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1B8974:
    ctx->pc = 0x7F1B8974u;
    ctx->downcount -= 1;
    // 7F1B8974: bl      0x7F199494
    {
            ctx->lr = 0x7F1B8978u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1B8978:
    ctx->pc = 0x7F1B8978u;
    ctx->downcount -= 4;
    // 7F1B8978: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B897C:
    ctx->pc = 0x7F1B897Cu;
    // 7F1B897C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8980:
    ctx->pc = 0x7F1B8980u;
    // 7F1B8980: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8984:
    ctx->pc = 0x7F1B8984u;
    // 7F1B8984: bl      0x7F1B889C
    {
            ctx->lr = 0x7F1B8988u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B889Cu;
                return;
            }
            goto label_7F1B889C;
    }

label_7F1B8988:
    ctx->pc = 0x7F1B8988u;
    ctx->downcount -= 16;
    // 7F1B8988: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B898C:
    ctx->pc = 0x7F1B898Cu;
    // 7F1B898C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8990:
    ctx->pc = 0x7F1B8990u;
    // 7F1B8990: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8994:
    ctx->pc = 0x7F1B8994u;
    // 7F1B8994: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8998:
    ctx->pc = 0x7F1B8998u;
    // 7F1B8998: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B899C:
    ctx->pc = 0x7F1B899Cu;
    ctx->downcount -= 7;
    // 7F1B899C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B89A0:
    ctx->pc = 0x7F1B89A0u;
    // 7F1B89A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B89A4:
    ctx->pc = 0x7F1B89A4u;
    // 7F1B89A4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B89A8:
    ctx->pc = 0x7F1B89A8u;
    // 7F1B89A8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B89AC:
    ctx->pc = 0x7F1B89ACu;
    // 7F1B89AC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B89B0:
    ctx->pc = 0x7F1B89B0u;
    // 7F1B89B0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B89B4:
    ctx->pc = 0x7F1B89B4u;
    // 7F1B89B4: bl      0x80025A08
    {
            ctx->lr = 0x7F1B89B8u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B89B8:
    ctx->pc = 0x7F1B89B8u;
    ctx->downcount -= 4;
    // 7F1B89B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B89BC:
    ctx->pc = 0x7F1B89BCu;
    // 7F1B89BC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B89BCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B89C0:
    ctx->pc = 0x7F1B89C0u;
    // 7F1B89C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B89C4:
    ctx->pc = 0x7F1B89C4u;
    // 7F1B89C4: bl      0x7F114738
    {
            ctx->lr = 0x7F1B89C8u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B89C8:
    ctx->pc = 0x7F1B89C8u;
    ctx->downcount -= 4;
    // 7F1B89C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B89CC:
    ctx->pc = 0x7F1B89CCu;
    // 7F1B89CC: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B89CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B89D0:
    ctx->pc = 0x7F1B89D0u;
    // 7F1B89D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B89D4:
    ctx->pc = 0x7F1B89D4u;
    // 7F1B89D4: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B89D8u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B89D8:
    ctx->pc = 0x7F1B89D8u;
    ctx->downcount -= 4;
    // 7F1B89D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B89DC:
    ctx->pc = 0x7F1B89DCu;
    // 7F1B89DC: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B89DCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B89E0:
    ctx->pc = 0x7F1B89E0u;
    // 7F1B89E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B89E4:
    ctx->pc = 0x7F1B89E4u;
    // 7F1B89E4: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B89E8u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B89E8:
    ctx->pc = 0x7F1B89E8u;
    ctx->downcount -= 14;
    // 7F1B89E8: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B89EC:
    ctx->pc = 0x7F1B89ECu;
    // 7F1B89EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B89F0:
    ctx->pc = 0x7F1B89F0u;
    // 7F1B89F0: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B89F4:
    ctx->pc = 0x7F1B89F4u;
    // 7F1B89F4: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B89F8:
    ctx->pc = 0x7F1B89F8u;
    // 7F1B89F8: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1B89FC:
    ctx->pc = 0x7F1B89FCu;
    // 7F1B89FC: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B8A00:
    ctx->pc = 0x7F1B8A00u;
    // 7F1B8A00: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1B8A04:
    ctx->pc = 0x7F1B8A04u;
    // 7F1B8A04: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1B8A08:
    ctx->pc = 0x7F1B8A08u;
    // 7F1B8A08: lfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8A08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8A0C:
    ctx->pc = 0x7F1B8A0Cu;
    // 7F1B8A0C: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1B8A10:
    ctx->pc = 0x7F1B8A10u;
    // 7F1B8A10: lfs     f2, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8A10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B8A14:
    ctx->pc = 0x7F1B8A14u;
    // 7F1B8A14: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1B8A18:
    ctx->pc = 0x7F1B8A18u;
    // 7F1B8A18: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1B8A1C:
    ctx->pc = 0x7F1B8A1Cu;
    // 7F1B8A1C: bl      0x7F3F80B0
    {
            ctx->lr = 0x7F1B8A20u;
            ctx->pc = 0x7F3F80B0u;
            return;
    }

label_7F1B8A20:
    ctx->pc = 0x7F1B8A20u;
    ctx->downcount -= 6;
    // 7F1B8A20: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8A24:
    ctx->pc = 0x7F1B8A24u;
    // 7F1B8A24: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B8A28:
    ctx->pc = 0x7F1B8A28u;
    // 7F1B8A28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8A2C:
    ctx->pc = 0x7F1B8A2Cu;
    // 7F1B8A2C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B8A30:
    ctx->pc = 0x7F1B8A30u;
    // 7F1B8A30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8A34:
    ctx->pc = 0x7F1B8A34u;
    ctx->downcount -= 7;
    // 7F1B8A34: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8A38:
    ctx->pc = 0x7F1B8A38u;
    // 7F1B8A38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8A3C:
    ctx->pc = 0x7F1B8A3Cu;
    // 7F1B8A3C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8A40:
    ctx->pc = 0x7F1B8A40u;
    // 7F1B8A40: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1B8A44:
    ctx->pc = 0x7F1B8A44u;
    // 7F1B8A44: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8A48:
    ctx->pc = 0x7F1B8A48u;
    // 7F1B8A48: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8A4C:
    ctx->pc = 0x7F1B8A4Cu;
    // 7F1B8A4C: bl      0x80025A08
    {
            ctx->lr = 0x7F1B8A50u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B8A50:
    ctx->pc = 0x7F1B8A50u;
    ctx->downcount -= 4;
    // 7F1B8A50: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1B8A54:
    ctx->pc = 0x7F1B8A54u;
    // 7F1B8A54: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8A54u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8A58:
    ctx->pc = 0x7F1B8A58u;
    // 7F1B8A58: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8A5C:
    ctx->pc = 0x7F1B8A5Cu;
    // 7F1B8A5C: bl      0x7F114738
    {
            ctx->lr = 0x7F1B8A60u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B8A60:
    ctx->pc = 0x7F1B8A60u;
    ctx->downcount -= 4;
    // 7F1B8A60: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1B8A64:
    ctx->pc = 0x7F1B8A64u;
    // 7F1B8A64: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8A64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8A68:
    ctx->pc = 0x7F1B8A68u;
    // 7F1B8A68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8A6C:
    ctx->pc = 0x7F1B8A6Cu;
    // 7F1B8A6C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B8A70u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B8A70:
    ctx->pc = 0x7F1B8A70u;
    ctx->downcount -= 4;
    // 7F1B8A70: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1B8A74:
    ctx->pc = 0x7F1B8A74u;
    // 7F1B8A74: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8A74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8A78:
    ctx->pc = 0x7F1B8A78u;
    // 7F1B8A78: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8A7C:
    ctx->pc = 0x7F1B8A7Cu;
    // 7F1B8A7C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B8A80u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B8A80:
    ctx->pc = 0x7F1B8A80u;
    ctx->downcount -= 4;
    // 7F1B8A80: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1B8A84:
    ctx->pc = 0x7F1B8A84u;
    // 7F1B8A84: addi    r5, r31, 16
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1B8A88:
    ctx->pc = 0x7F1B8A88u;
    // 7F1B8A88: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8A8C:
    ctx->pc = 0x7F1B8A8Cu;
    // 7F1B8A8C: bl      0x7F114B40
    {
            ctx->lr = 0x7F1B8A90u;
            ctx->pc = 0x7F114B40u;
            return;
    }

label_7F1B8A90:
    ctx->pc = 0x7F1B8A90u;
    ctx->downcount -= 3;
    // 7F1B8A90: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8A94:
    ctx->pc = 0x7F1B8A94u;
    // 7F1B8A94: addi    r4, r31, 64
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(64);

label_7F1B8A98:
    ctx->pc = 0x7F1B8A98u;
    // 7F1B8A98: bl      0x7F1B8AC4
    {
            ctx->lr = 0x7F1B8A9Cu;
            goto label_7F1B8AC4;
    }

label_7F1B8A9C:
    ctx->pc = 0x7F1B8A9Cu;
    ctx->downcount -= 5;
    // 7F1B8A9C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1B8AA0:
    ctx->pc = 0x7F1B8AA0u;
    // 7F1B8AA0: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1B8AA4:
    ctx->pc = 0x7F1B8AA4u;
    // 7F1B8AA4: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B8AA8:
    ctx->pc = 0x7F1B8AA8u;
    // 7F1B8AA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B8AAC:
    ctx->pc = 0x7F1B8AACu;
    // 7F1B8AAC: bl      0x7F1FF454
    {
            ctx->lr = 0x7F1B8AB0u;
            ctx->pc = 0x7F1FF454u;
            return;
    }

label_7F1B8AB0:
    ctx->pc = 0x7F1B8AB0u;
    ctx->downcount -= 6;
    // 7F1B8AB0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8AB4:
    ctx->pc = 0x7F1B8AB4u;
    // 7F1B8AB4: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B8AB8:
    ctx->pc = 0x7F1B8AB8u;
    // 7F1B8AB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8ABC:
    ctx->pc = 0x7F1B8ABCu;
    // 7F1B8ABC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1B8AC0:
    ctx->pc = 0x7F1B8AC0u;
    // 7F1B8AC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8AC4:
    ctx->pc = 0x7F1B8AC4u;
    ctx->downcount -= 19;
    // 7F1B8AC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8AC8:
    ctx->pc = 0x7F1B8AC8u;
    // 7F1B8AC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8ACC:
    ctx->pc = 0x7F1B8ACCu;
    // 7F1B8ACC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8AD0:
    ctx->pc = 0x7F1B8AD0u;
    // 7F1B8AD0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B8AD4:
    ctx->pc = 0x7F1B8AD4u;
    // 7F1B8AD4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8AD8:
    ctx->pc = 0x7F1B8AD8u;
    // 7F1B8AD8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8ADC:
    ctx->pc = 0x7F1B8ADCu;
    // 7F1B8ADC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8AE0:
    ctx->pc = 0x7F1B8AE0u;
    // 7F1B8AE0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8AE4:
    ctx->pc = 0x7F1B8AE4u;
    // 7F1B8AE4: bl      0x7F1B8B20
    {
            ctx->lr = 0x7F1B8AE8u;
            goto label_7F1B8B20;
    }

label_7F1B8AE8:
    ctx->pc = 0x7F1B8AE8u;
    ctx->downcount -= 3;
    // 7F1B8AE8: addi    r3, r31, 4
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(4);

label_7F1B8AEC:
    ctx->pc = 0x7F1B8AECu;
    // 7F1B8AEC: addi    r4, r30, 4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(4);

label_7F1B8AF0:
    ctx->pc = 0x7F1B8AF0u;
    // 7F1B8AF0: bl      0x7F1B8B20
    {
            ctx->lr = 0x7F1B8AF4u;
            goto label_7F1B8B20;
    }

label_7F1B8AF4:
    ctx->pc = 0x7F1B8AF4u;
    ctx->downcount -= 3;
    // 7F1B8AF4: addi    r3, r31, 8
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(8);

label_7F1B8AF8:
    ctx->pc = 0x7F1B8AF8u;
    // 7F1B8AF8: addi    r4, r30, 8
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(8);

label_7F1B8AFC:
    ctx->pc = 0x7F1B8AFCu;
    // 7F1B8AFC: bl      0x7F1B8B20
    {
            ctx->lr = 0x7F1B8B00u;
            goto label_7F1B8B20;
    }

label_7F1B8B00:
    ctx->pc = 0x7F1B8B00u;
    ctx->downcount -= 3;
    // 7F1B8B00: addi    r3, r31, 12
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(12);

label_7F1B8B04:
    ctx->pc = 0x7F1B8B04u;
    // 7F1B8B04: addi    r4, r30, 12
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(12);

label_7F1B8B08:
    ctx->pc = 0x7F1B8B08u;
    // 7F1B8B08: bl      0x7F1B8B20
    {
            ctx->lr = 0x7F1B8B0Cu;
            goto label_7F1B8B20;
    }

label_7F1B8B0C:
    ctx->pc = 0x7F1B8B0Cu;
    ctx->downcount -= 16;
    // 7F1B8B0C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B8B10:
    ctx->pc = 0x7F1B8B10u;
    // 7F1B8B10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8B14:
    ctx->pc = 0x7F1B8B14u;
    // 7F1B8B14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8B18:
    ctx->pc = 0x7F1B8B18u;
    // 7F1B8B18: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8B1C:
    ctx->pc = 0x7F1B8B1Cu;
    // 7F1B8B1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8B20:
    ctx->pc = 0x7F1B8B20u;
    ctx->downcount -= 6;
    // 7F1B8B20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8B24:
    ctx->pc = 0x7F1B8B24u;
    // 7F1B8B24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8B28:
    ctx->pc = 0x7F1B8B28u;
    // 7F1B8B28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8B2C:
    ctx->pc = 0x7F1B8B2Cu;
    // 7F1B8B2C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8B30:
    ctx->pc = 0x7F1B8B30u;
    // 7F1B8B30: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8B34:
    ctx->pc = 0x7F1B8B34u;
    // 7F1B8B34: bl      0x7F1B8B50
    {
            ctx->lr = 0x7F1B8B38u;
            goto label_7F1B8B50;
    }

label_7F1B8B38:
    ctx->pc = 0x7F1B8B38u;
    ctx->downcount -= 7;
    // 7F1B8B38: stfs     f1, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8B38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B8B3C:
    ctx->pc = 0x7F1B8B3Cu;
    // 7F1B8B3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8B40:
    ctx->pc = 0x7F1B8B40u;
    // 7F1B8B40: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B8B44:
    ctx->pc = 0x7F1B8B44u;
    // 7F1B8B44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8B48:
    ctx->pc = 0x7F1B8B48u;
    // 7F1B8B48: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8B4C:
    ctx->pc = 0x7F1B8B4Cu;
    // 7F1B8B4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8B50:
    ctx->pc = 0x7F1B8B50u;
    ctx->downcount -= 4;
    // 7F1B8B50: psq_l   f0, 2(r3), 1, 3
    if (!ppc_fp_available_inline(ctx, 0x7F1B8B50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2);
        ppc_psq_load_inline(ctx, 0u, ea, true, 3u, false, 0x7F1B8B50u);
        if (ctx->exception) return;
    }

label_7F1B8B54:
    ctx->pc = 0x7F1B8B54u;
    // 7F1B8B54: psq_l   f1, 0(r3), 1, 6
    if (!ppc_fp_available_inline(ctx, 0x7F1B8B54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, true, 6u, false, 0x7F1B8B54u);
        if (ctx->exception) return;
    }

label_7F1B8B58:
    ctx->pc = 0x7F1B8B58u;
    // 7F1B8B58: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B8B58u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F1B8B5C:
    ctx->pc = 0x7F1B8B5Cu;
    // 7F1B8B5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8B60:
    ctx->pc = 0x7F1B8B60u;
    ctx->downcount -= 6;
    // 7F1B8B60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8B64:
    ctx->pc = 0x7F1B8B64u;
    // 7F1B8B64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8B68:
    ctx->pc = 0x7F1B8B68u;
    // 7F1B8B68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8B6C:
    ctx->pc = 0x7F1B8B6Cu;
    // 7F1B8B6C: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8B70:
    ctx->pc = 0x7F1B8B70u;
    // 7F1B8B70: cmplwi  r3, 0x0000
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

label_7F1B8B74:
    ctx->pc = 0x7F1B8B74u;
    // 7F1B8B74: bc    12, 2, 0x7F1B8B7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8B7C;
        }
    }

label_7F1B8B78:
    ctx->pc = 0x7F1B8B78u;
    ctx->downcount -= 1;
    // 7F1B8B78: bl      0x7F306938
    {
            ctx->lr = 0x7F1B8B7Cu;
            ctx->pc = 0x7F306938u;
            return;
    }

label_7F1B8B7C:
    ctx->pc = 0x7F1B8B7Cu;
    ctx->downcount -= 5;
    // 7F1B8B7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8B80:
    ctx->pc = 0x7F1B8B80u;
    // 7F1B8B80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8B84:
    ctx->pc = 0x7F1B8B84u;
    // 7F1B8B84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8B88:
    ctx->pc = 0x7F1B8B88u;
    // 7F1B8B88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8B8C:
    ctx->pc = 0x7F1B8B8Cu;
    ctx->downcount -= 6;
    // 7F1B8B8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8B90:
    ctx->pc = 0x7F1B8B90u;
    // 7F1B8B90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8B94:
    ctx->pc = 0x7F1B8B94u;
    // 7F1B8B94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8B98:
    ctx->pc = 0x7F1B8B98u;
    // 7F1B8B98: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8B9C:
    ctx->pc = 0x7F1B8B9Cu;
    // 7F1B8B9C: cmplwi  r3, 0x0000
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

label_7F1B8BA0:
    ctx->pc = 0x7F1B8BA0u;
    // 7F1B8BA0: bc    12, 2, 0x7F1B8BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8BA8;
        }
    }

label_7F1B8BA4:
    ctx->pc = 0x7F1B8BA4u;
    ctx->downcount -= 1;
    // 7F1B8BA4: bl      0x7F306768
    {
            ctx->lr = 0x7F1B8BA8u;
            ctx->pc = 0x7F306768u;
            return;
    }

label_7F1B8BA8:
    ctx->pc = 0x7F1B8BA8u;
    ctx->downcount -= 5;
    // 7F1B8BA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8BAC:
    ctx->pc = 0x7F1B8BACu;
    // 7F1B8BAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8BB0:
    ctx->pc = 0x7F1B8BB0u;
    // 7F1B8BB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8BB4:
    ctx->pc = 0x7F1B8BB4u;
    // 7F1B8BB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8BB8:
    ctx->pc = 0x7F1B8BB8u;
    ctx->downcount -= 20;
    // 7F1B8BB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8BBC:
    ctx->pc = 0x7F1B8BBCu;
    // 7F1B8BBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8BC0:
    ctx->pc = 0x7F1B8BC0u;
    // 7F1B8BC0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8BC4:
    ctx->pc = 0x7F1B8BC4u;
    // 7F1B8BC4: rlwinm. r0, r6, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B8BC8:
    ctx->pc = 0x7F1B8BC8u;
    // 7F1B8BC8: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B8BCC:
    ctx->pc = 0x7F1B8BCCu;
    // 7F1B8BCC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B8BD0:
    ctx->pc = 0x7F1B8BD0u;
    // 7F1B8BD0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8BD4:
    ctx->pc = 0x7F1B8BD4u;
    // 7F1B8BD4: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B8BD8:
    ctx->pc = 0x7F1B8BD8u;
    // 7F1B8BD8: stw     r31, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8BDC:
    ctx->pc = 0x7F1B8BDCu;
    // 7F1B8BDC: bc    12, 2, 0x7F1B8C4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8C4C;
        }
    }

label_7F1B8BE0:
    ctx->pc = 0x7F1B8BE0u;
    ctx->downcount -= 18;
    // 7F1B8BE0: lis     r4, 246
    ctx->gpr[4] = ((u32)(s32)(246) << 16);

label_7F1B8BE4:
    ctx->pc = 0x7F1B8BE4u;
    // 7F1B8BE4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B8BE8:
    ctx->pc = 0x7F1B8BE8u;
    // 7F1B8BE8: addi    r0, r4, 5933
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5933);

label_7F1B8BEC:
    ctx->pc = 0x7F1B8BECu;
    // 7F1B8BEC: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1B8BF0:
    ctx->pc = 0x7F1B8BF0u;
    // 7F1B8BF0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B8BF4:
    ctx->pc = 0x7F1B8BF4u;
    // 7F1B8BF4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8BF8:
    ctx->pc = 0x7F1B8BF8u;
    // 7F1B8BF8: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1B8BFC:
    ctx->pc = 0x7F1B8BFCu;
    // 7F1B8BFC: lis     r5, 4
    ctx->gpr[5] = ((u32)(s32)(4) << 16);

label_7F1B8C00:
    ctx->pc = 0x7F1B8C00u;
    // 7F1B8C00: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1B8C04:
    ctx->pc = 0x7F1B8C04u;
    // 7F1B8C04: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F1B8C08:
    ctx->pc = 0x7F1B8C08u;
    // 7F1B8C08: lfs     f1, 7480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8C08u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8C0C:
    ctx->pc = 0x7F1B8C0Cu;
    // 7F1B8C0C: addi    r3, r5, -16498
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-16498);

label_7F1B8C10:
    ctx->pc = 0x7F1B8C10u;
    // 7F1B8C10: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8C14:
    ctx->pc = 0x7F1B8C14u;
    // 7F1B8C14: addi    r4, r4, 5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5872);

label_7F1B8C18:
    ctx->pc = 0x7F1B8C18u;
    // 7F1B8C18: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F1B8C1C:
    ctx->pc = 0x7F1B8C1Cu;
    // 7F1B8C1C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1B8C20:
    ctx->pc = 0x7F1B8C20u;
    // 7F1B8C20: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1B8C24:
    ctx->pc = 0x7F1B8C24u;
    // 7F1B8C24: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1B8C28u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1B8C28:
    ctx->pc = 0x7F1B8C28u;
    ctx->downcount -= 3;
    // 7F1B8C28: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8C2C:
    ctx->pc = 0x7F1B8C2Cu;
    // 7F1B8C2C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8C30:
    ctx->pc = 0x7F1B8C30u;
    // 7F1B8C30: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1B8C34u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1B8C34:
    ctx->pc = 0x7F1B8C34u;
    ctx->downcount -= 5;
    // 7F1B8C34: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F1B8C38:
    ctx->pc = 0x7F1B8C38u;
    // 7F1B8C38: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F1B8C3C:
    ctx->pc = 0x7F1B8C3Cu;
    // 7F1B8C3C: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F1B8C40:
    ctx->pc = 0x7F1B8C40u;
    // 7F1B8C40: addi    r4, r4, 5872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(5872);

label_7F1B8C44:
    ctx->pc = 0x7F1B8C44u;
    // 7F1B8C44: bl      0x7F3B0C68
    {
            ctx->lr = 0x7F1B8C48u;
            ctx->pc = 0x7F3B0C68u;
            return;
    }

label_7F1B8C48:
    ctx->pc = 0x7F1B8C48u;
    ctx->downcount -= 1;
    // 7F1B8C48: b       0x7F1B8CBC
    {
            goto label_7F1B8CBC;
    }

label_7F1B8C4C:
    ctx->pc = 0x7F1B8C4Cu;
    ctx->downcount -= 2;
    // 7F1B8C4C: rlwinm. r0, r6, 0, 30, 30
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

label_7F1B8C50:
    ctx->pc = 0x7F1B8C50u;
    // 7F1B8C50: bc    12, 2, 0x7F1B8CBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8CBC;
        }
    }

label_7F1B8C54:
    ctx->pc = 0x7F1B8C54u;
    ctx->downcount -= 18;
    // 7F1B8C54: lis     r4, 246
    ctx->gpr[4] = ((u32)(s32)(246) << 16);

label_7F1B8C58:
    ctx->pc = 0x7F1B8C58u;
    // 7F1B8C58: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B8C5C:
    ctx->pc = 0x7F1B8C5Cu;
    // 7F1B8C5C: addi    r0, r4, 5933
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(5933);

label_7F1B8C60:
    ctx->pc = 0x7F1B8C60u;
    // 7F1B8C60: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1B8C64:
    ctx->pc = 0x7F1B8C64u;
    // 7F1B8C64: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B8C68:
    ctx->pc = 0x7F1B8C68u;
    // 7F1B8C68: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8C6C:
    ctx->pc = 0x7F1B8C6Cu;
    // 7F1B8C6C: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1B8C70:
    ctx->pc = 0x7F1B8C70u;
    // 7F1B8C70: lis     r5, 4
    ctx->gpr[5] = ((u32)(s32)(4) << 16);

label_7F1B8C74:
    ctx->pc = 0x7F1B8C74u;
    // 7F1B8C74: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1B8C78:
    ctx->pc = 0x7F1B8C78u;
    // 7F1B8C78: lis     r4, 122
    ctx->gpr[4] = ((u32)(s32)(122) << 16);

label_7F1B8C7C:
    ctx->pc = 0x7F1B8C7Cu;
    // 7F1B8C7C: lfs     f1, 7480(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8C7Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8C80:
    ctx->pc = 0x7F1B8C80u;
    // 7F1B8C80: addi    r3, r5, -16498
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(-16498);

label_7F1B8C84:
    ctx->pc = 0x7F1B8C84u;
    // 7F1B8C84: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8C88:
    ctx->pc = 0x7F1B8C88u;
    // 7F1B8C88: addi    r4, r4, -2035
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2035);

label_7F1B8C8C:
    ctx->pc = 0x7F1B8C8Cu;
    // 7F1B8C8C: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_7F1B8C90:
    ctx->pc = 0x7F1B8C90u;
    // 7F1B8C90: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1B8C94:
    ctx->pc = 0x7F1B8C94u;
    // 7F1B8C94: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1B8C98:
    ctx->pc = 0x7F1B8C98u;
    // 7F1B8C98: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1B8C9Cu;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1B8C9C:
    ctx->pc = 0x7F1B8C9Cu;
    ctx->downcount -= 3;
    // 7F1B8C9C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8CA0:
    ctx->pc = 0x7F1B8CA0u;
    // 7F1B8CA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8CA4:
    ctx->pc = 0x7F1B8CA4u;
    // 7F1B8CA4: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1B8CA8u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1B8CA8:
    ctx->pc = 0x7F1B8CA8u;
    ctx->downcount -= 5;
    // 7F1B8CA8: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F1B8CAC:
    ctx->pc = 0x7F1B8CACu;
    // 7F1B8CAC: lis     r4, 122
    ctx->gpr[4] = ((u32)(s32)(122) << 16);

label_7F1B8CB0:
    ctx->pc = 0x7F1B8CB0u;
    // 7F1B8CB0: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F1B8CB4:
    ctx->pc = 0x7F1B8CB4u;
    // 7F1B8CB4: addi    r4, r4, -2035
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-2035);

label_7F1B8CB8:
    ctx->pc = 0x7F1B8CB8u;
    // 7F1B8CB8: bl      0x7F3B0C68
    {
            ctx->lr = 0x7F1B8CBCu;
            ctx->pc = 0x7F3B0C68u;
            return;
    }

label_7F1B8CBC:
    ctx->pc = 0x7F1B8CBCu;
    ctx->downcount -= 6;
    // 7F1B8CBC: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8CC0:
    ctx->pc = 0x7F1B8CC0u;
    // 7F1B8CC0: li      r4, 87
    ctx->gpr[4] = (u32)(s32)(87);

label_7F1B8CC4:
    ctx->pc = 0x7F1B8CC4u;
    // 7F1B8CC4: li      r5, 13
    ctx->gpr[5] = (u32)(s32)(13);

label_7F1B8CC8:
    ctx->pc = 0x7F1B8CC8u;
    // 7F1B8CC8: li      r6, 17
    ctx->gpr[6] = (u32)(s32)(17);

label_7F1B8CCC:
    ctx->pc = 0x7F1B8CCCu;
    // 7F1B8CCC: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F1B8CD0:
    ctx->pc = 0x7F1B8CD0u;
    // 7F1B8CD0: bl      0x7F306788
    {
            ctx->lr = 0x7F1B8CD4u;
            ctx->pc = 0x7F306788u;
            return;
    }

label_7F1B8CD4:
    ctx->pc = 0x7F1B8CD4u;
    ctx->downcount -= 15;
    // 7F1B8CD4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B8CD8:
    ctx->pc = 0x7F1B8CD8u;
    // 7F1B8CD8: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B8CDC:
    ctx->pc = 0x7F1B8CDCu;
    // 7F1B8CDC: lfs     f1, 7484(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8CDCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8CE0:
    ctx->pc = 0x7F1B8CE0u;
    // 7F1B8CE0: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B8CE4:
    ctx->pc = 0x7F1B8CE4u;
    // 7F1B8CE4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B8CE8:
    ctx->pc = 0x7F1B8CE8u;
    // 7F1B8CE8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B8CEC:
    ctx->pc = 0x7F1B8CECu;
    // 7F1B8CEC: addi    r6, r5, 7488
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(7488);

label_7F1B8CF0:
    ctx->pc = 0x7F1B8CF0u;
    // 7F1B8CF0: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B8CF0u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_7F1B8CF4:
    ctx->pc = 0x7F1B8CF4u;
    // 7F1B8CF4: addi    r5, r4, 7492
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(7492);

label_7F1B8CF8:
    ctx->pc = 0x7F1B8CF8u;
    // 7F1B8CF8: addi    r4, r3, 7496
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7496);

label_7F1B8CFC:
    ctx->pc = 0x7F1B8CFCu;
    // 7F1B8CFC: lwz     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8D00:
    ctx->pc = 0x7F1B8D00u;
    // 7F1B8D00: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8D00u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B8D04:
    ctx->pc = 0x7F1B8D04u;
    // 7F1B8D04: lfs     f4, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8D04u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1B8D08:
    ctx->pc = 0x7F1B8D08u;
    // 7F1B8D08: lfs     f5, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8D08u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1B8D0C:
    ctx->pc = 0x7F1B8D0Cu;
    // 7F1B8D0C: bl      0x7F306920
    {
            ctx->lr = 0x7F1B8D10u;
            ctx->pc = 0x7F306920u;
            return;
    }

label_7F1B8D10:
    ctx->pc = 0x7F1B8D10u;
    ctx->downcount -= 17;
    // 7F1B8D10: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B8D14:
    ctx->pc = 0x7F1B8D14u;
    // 7F1B8D14: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B8D18:
    ctx->pc = 0x7F1B8D18u;
    // 7F1B8D18: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8D1C:
    ctx->pc = 0x7F1B8D1Cu;
    // 7F1B8D1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8D20:
    ctx->pc = 0x7F1B8D20u;
    // 7F1B8D20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B8D24:
    ctx->pc = 0x7F1B8D24u;
    // 7F1B8D24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8D28:
    ctx->pc = 0x7F1B8D28u;
    ctx->downcount -= 22;
    // 7F1B8D28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8D2C:
    ctx->pc = 0x7F1B8D2Cu;
    // 7F1B8D2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8D30:
    ctx->pc = 0x7F1B8D30u;
    // 7F1B8D30: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B8D34:
    ctx->pc = 0x7F1B8D34u;
    // 7F1B8D34: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8D38:
    ctx->pc = 0x7F1B8D38u;
    // 7F1B8D38: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B8D3C:
    ctx->pc = 0x7F1B8D3Cu;
    // 7F1B8D3C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8D40:
    ctx->pc = 0x7F1B8D40u;
    // 7F1B8D40: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8D44:
    ctx->pc = 0x7F1B8D44u;
    // 7F1B8D44: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B8D48:
    ctx->pc = 0x7F1B8D48u;
    // 7F1B8D48: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_7F1B8D4C:
    ctx->pc = 0x7F1B8D4Cu;
    // 7F1B8D4C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B8D50:
    ctx->pc = 0x7F1B8D50u;
    // 7F1B8D50: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F1B8D54:
    ctx->pc = 0x7F1B8D54u;
    // 7F1B8D54: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B8D58u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B8D58:
    ctx->pc = 0x7F1B8D58u;
    ctx->downcount -= 2;
    // 7F1B8D58: or.   r31, r3, r3
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

label_7F1B8D5C:
    ctx->pc = 0x7F1B8D5Cu;
    // 7F1B8D5C: bc    12, 2, 0x7F1B8DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8DC8;
        }
    }

label_7F1B8D60:
    ctx->pc = 0x7F1B8D60u;
    ctx->downcount -= 5;
    // 7F1B8D60: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1B8D64:
    ctx->pc = 0x7F1B8D64u;
    // 7F1B8D64: lis     r5, 32540
    ctx->gpr[5] = ((u32)(s32)(32540) << 16);

label_7F1B8D68:
    ctx->pc = 0x7F1B8D68u;
    // 7F1B8D68: addi    r4, r4, -29856
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29856);

label_7F1B8D6C:
    ctx->pc = 0x7F1B8D6Cu;
    // 7F1B8D6C: addi    r5, r5, -29812
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29812);

label_7F1B8D70:
    ctx->pc = 0x7F1B8D70u;
    // 7F1B8D70: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B8D74u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B8D74:
    ctx->pc = 0x7F1B8D74u;
    ctx->downcount -= 15;
    // 7F1B8D74: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8D78:
    ctx->pc = 0x7F1B8D78u;
    // 7F1B8D78: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B8D7C:
    ctx->pc = 0x7F1B8D7Cu;
    // 7F1B8D7C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B8D80:
    ctx->pc = 0x7F1B8D80u;
    // 7F1B8D80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8D84:
    ctx->pc = 0x7F1B8D84u;
    // 7F1B8D84: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1B8D88:
    ctx->pc = 0x7F1B8D88u;
    // 7F1B8D88: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B8D8C:
    ctx->pc = 0x7F1B8D8Cu;
    // 7F1B8D8C: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B8D90:
    ctx->pc = 0x7F1B8D90u;
    // 7F1B8D90: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B8D94:
    ctx->pc = 0x7F1B8D94u;
    // 7F1B8D94: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B8D98:
    ctx->pc = 0x7F1B8D98u;
    // 7F1B8D98: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8D9C:
    ctx->pc = 0x7F1B8D9Cu;
    // 7F1B8D9C: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B8DA0:
    ctx->pc = 0x7F1B8DA0u;
    // 7F1B8DA0: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B8DA4:
    ctx->pc = 0x7F1B8DA4u;
    // 7F1B8DA4: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B8DA8:
    ctx->pc = 0x7F1B8DA8u;
    // 7F1B8DA8: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8DAC:
    ctx->pc = 0x7F1B8DACu;
    // 7F1B8DAC: bl      0x7F1B8BB8
    {
            ctx->lr = 0x7F1B8DB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B8BB8u;
                return;
            }
            goto label_7F1B8BB8;
    }

label_7F1B8DB0:
    ctx->pc = 0x7F1B8DB0u;
    ctx->downcount -= 2;
    // 7F1B8DB0: cmpwi   r3, 0
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

label_7F1B8DB4:
    ctx->pc = 0x7F1B8DB4u;
    // 7F1B8DB4: bc    4, 0, 0x7F1B8DC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8DC8;
        }
    }

label_7F1B8DB8:
    ctx->pc = 0x7F1B8DB8u;
    ctx->downcount -= 2;
    // 7F1B8DB8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8DBC:
    ctx->pc = 0x7F1B8DBCu;
    // 7F1B8DBC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B8DC0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B8DC0:
    ctx->pc = 0x7F1B8DC0u;
    ctx->downcount -= 2;
    // 7F1B8DC0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B8DC4:
    ctx->pc = 0x7F1B8DC4u;
    // 7F1B8DC4: b       0x7F1B8DCC
    {
            goto label_7F1B8DCC;
    }

label_7F1B8DC8:
    ctx->pc = 0x7F1B8DC8u;
    ctx->downcount -= 1;
    // 7F1B8DC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8DCC:
    ctx->pc = 0x7F1B8DCCu;
    ctx->downcount -= 16;
    // 7F1B8DCC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B8DD0:
    ctx->pc = 0x7F1B8DD0u;
    // 7F1B8DD0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8DD4:
    ctx->pc = 0x7F1B8DD4u;
    // 7F1B8DD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8DD8:
    ctx->pc = 0x7F1B8DD8u;
    // 7F1B8DD8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B8DDC:
    ctx->pc = 0x7F1B8DDCu;
    // 7F1B8DDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8DE0:
    ctx->pc = 0x7F1B8DE0u;
    ctx->downcount -= 6;
    // 7F1B8DE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8DE4:
    ctx->pc = 0x7F1B8DE4u;
    // 7F1B8DE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8DE8:
    ctx->pc = 0x7F1B8DE8u;
    // 7F1B8DE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8DEC:
    ctx->pc = 0x7F1B8DECu;
    // 7F1B8DEC: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8DF0:
    ctx->pc = 0x7F1B8DF0u;
    // 7F1B8DF0: cmplwi  r3, 0x0000
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

label_7F1B8DF4:
    ctx->pc = 0x7F1B8DF4u;
    // 7F1B8DF4: bc    12, 2, 0x7F1B8DFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8DFC;
        }
    }

label_7F1B8DF8:
    ctx->pc = 0x7F1B8DF8u;
    ctx->downcount -= 1;
    // 7F1B8DF8: bl      0x7F306938
    {
            ctx->lr = 0x7F1B8DFCu;
            ctx->pc = 0x7F306938u;
            return;
    }

label_7F1B8DFC:
    ctx->pc = 0x7F1B8DFCu;
    ctx->downcount -= 5;
    // 7F1B8DFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8E00:
    ctx->pc = 0x7F1B8E00u;
    // 7F1B8E00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8E04:
    ctx->pc = 0x7F1B8E04u;
    // 7F1B8E04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8E08:
    ctx->pc = 0x7F1B8E08u;
    // 7F1B8E08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8E0C:
    ctx->pc = 0x7F1B8E0Cu;
    ctx->downcount -= 6;
    // 7F1B8E0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8E10:
    ctx->pc = 0x7F1B8E10u;
    // 7F1B8E10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8E14:
    ctx->pc = 0x7F1B8E14u;
    // 7F1B8E14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8E18:
    ctx->pc = 0x7F1B8E18u;
    // 7F1B8E18: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8E1C:
    ctx->pc = 0x7F1B8E1Cu;
    // 7F1B8E1C: cmplwi  r3, 0x0000
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

label_7F1B8E20:
    ctx->pc = 0x7F1B8E20u;
    // 7F1B8E20: bc    12, 2, 0x7F1B8E28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8E28;
        }
    }

label_7F1B8E24:
    ctx->pc = 0x7F1B8E24u;
    ctx->downcount -= 1;
    // 7F1B8E24: bl      0x7F306768
    {
            ctx->lr = 0x7F1B8E28u;
            ctx->pc = 0x7F306768u;
            return;
    }

label_7F1B8E28:
    ctx->pc = 0x7F1B8E28u;
    ctx->downcount -= 5;
    // 7F1B8E28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8E2C:
    ctx->pc = 0x7F1B8E2Cu;
    // 7F1B8E2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8E30:
    ctx->pc = 0x7F1B8E30u;
    // 7F1B8E30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B8E34:
    ctx->pc = 0x7F1B8E34u;
    // 7F1B8E34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8E38:
    ctx->pc = 0x7F1B8E38u;
    ctx->downcount -= 20;
    // 7F1B8E38: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8E3C:
    ctx->pc = 0x7F1B8E3Cu;
    // 7F1B8E3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8E40:
    ctx->pc = 0x7F1B8E40u;
    // 7F1B8E40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8E44:
    ctx->pc = 0x7F1B8E44u;
    // 7F1B8E44: rlwinm. r0, r6, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_7F1B8E48:
    ctx->pc = 0x7F1B8E48u;
    // 7F1B8E48: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B8E4C:
    ctx->pc = 0x7F1B8E4Cu;
    // 7F1B8E4C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B8E50:
    ctx->pc = 0x7F1B8E50u;
    // 7F1B8E50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8E54:
    ctx->pc = 0x7F1B8E54u;
    // 7F1B8E54: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B8E58:
    ctx->pc = 0x7F1B8E58u;
    // 7F1B8E58: stw     r31, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B8E5C:
    ctx->pc = 0x7F1B8E5Cu;
    // 7F1B8E5C: bc    12, 2, 0x7F1B8F28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8F28;
        }
    }

label_7F1B8E60:
    ctx->pc = 0x7F1B8E60u;
    ctx->downcount -= 6;
    // 7F1B8E60: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8E64:
    ctx->pc = 0x7F1B8E64u;
    // 7F1B8E64: lwz     r3, 72(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8E68:
    ctx->pc = 0x7F1B8E68u;
    // 7F1B8E68: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8E6C:
    ctx->pc = 0x7F1B8E6Cu;
    // 7F1B8E6C: addis   r0, r3, -49
    ctx->gpr[0] = ctx->gpr[3] + ((u32)(s32)(-49) << 16);

label_7F1B8E70:
    ctx->pc = 0x7F1B8E70u;
    // 7F1B8E70: cmplwi  r0, 0x3BB2
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x3BB2u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B8E74:
    ctx->pc = 0x7F1B8E74u;
    // 7F1B8E74: bc    4, 2, 0x7F1B8ED0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8ED0;
        }
    }

label_7F1B8E78:
    ctx->pc = 0x7F1B8E78u;
    ctx->downcount -= 18;
    // 7F1B8E78: lis     r4, 118
    ctx->gpr[4] = ((u32)(s32)(118) << 16);

label_7F1B8E7C:
    ctx->pc = 0x7F1B8E7Cu;
    // 7F1B8E7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B8E80:
    ctx->pc = 0x7F1B8E80u;
    // 7F1B8E80: addi    r0, r4, 6686
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(6686);

label_7F1B8E84:
    ctx->pc = 0x7F1B8E84u;
    // 7F1B8E84: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1B8E88:
    ctx->pc = 0x7F1B8E88u;
    // 7F1B8E88: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B8E8C:
    ctx->pc = 0x7F1B8E8Cu;
    // 7F1B8E8C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8E90:
    ctx->pc = 0x7F1B8E90u;
    // 7F1B8E90: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1B8E94:
    ctx->pc = 0x7F1B8E94u;
    // 7F1B8E94: lis     r5, 214
    ctx->gpr[5] = ((u32)(s32)(214) << 16);

label_7F1B8E98:
    ctx->pc = 0x7F1B8E98u;
    // 7F1B8E98: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1B8E9C:
    ctx->pc = 0x7F1B8E9Cu;
    // 7F1B8E9C: lis     r4, 41
    ctx->gpr[4] = ((u32)(s32)(41) << 16);

label_7F1B8EA0:
    ctx->pc = 0x7F1B8EA0u;
    // 7F1B8EA0: lfs     f1, 7504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8EA0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8EA4:
    ctx->pc = 0x7F1B8EA4u;
    // 7F1B8EA4: addi    r3, r5, 30998
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(30998);

label_7F1B8EA8:
    ctx->pc = 0x7F1B8EA8u;
    // 7F1B8EA8: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8EAC:
    ctx->pc = 0x7F1B8EACu;
    // 7F1B8EAC: addi    r4, r4, 17912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17912);

label_7F1B8EB0:
    ctx->pc = 0x7F1B8EB0u;
    // 7F1B8EB0: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F1B8EB4:
    ctx->pc = 0x7F1B8EB4u;
    // 7F1B8EB4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1B8EB8:
    ctx->pc = 0x7F1B8EB8u;
    // 7F1B8EB8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1B8EBC:
    ctx->pc = 0x7F1B8EBCu;
    // 7F1B8EBC: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1B8EC0u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1B8EC0:
    ctx->pc = 0x7F1B8EC0u;
    ctx->downcount -= 3;
    // 7F1B8EC0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8EC4:
    ctx->pc = 0x7F1B8EC4u;
    // 7F1B8EC4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8EC8:
    ctx->pc = 0x7F1B8EC8u;
    // 7F1B8EC8: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1B8ECCu;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1B8ECC:
    ctx->pc = 0x7F1B8ECCu;
    ctx->downcount -= 1;
    // 7F1B8ECC: b       0x7F1B8F84
    {
            goto label_7F1B8F84;
    }

label_7F1B8ED0:
    ctx->pc = 0x7F1B8ED0u;
    ctx->downcount -= 18;
    // 7F1B8ED0: lis     r4, 187
    ctx->gpr[4] = ((u32)(s32)(187) << 16);

label_7F1B8ED4:
    ctx->pc = 0x7F1B8ED4u;
    // 7F1B8ED4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B8ED8:
    ctx->pc = 0x7F1B8ED8u;
    // 7F1B8ED8: addi    r0, r4, -16735
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16735);

label_7F1B8EDC:
    ctx->pc = 0x7F1B8EDCu;
    // 7F1B8EDC: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1B8EE0:
    ctx->pc = 0x7F1B8EE0u;
    // 7F1B8EE0: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B8EE4:
    ctx->pc = 0x7F1B8EE4u;
    // 7F1B8EE4: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8EE8:
    ctx->pc = 0x7F1B8EE8u;
    // 7F1B8EE8: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1B8EEC:
    ctx->pc = 0x7F1B8EECu;
    // 7F1B8EEC: lis     r5, 214
    ctx->gpr[5] = ((u32)(s32)(214) << 16);

label_7F1B8EF0:
    ctx->pc = 0x7F1B8EF0u;
    // 7F1B8EF0: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1B8EF4:
    ctx->pc = 0x7F1B8EF4u;
    // 7F1B8EF4: lis     r4, 116
    ctx->gpr[4] = ((u32)(s32)(116) << 16);

label_7F1B8EF8:
    ctx->pc = 0x7F1B8EF8u;
    // 7F1B8EF8: lfs     f1, 7508(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8EF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7508);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8EFC:
    ctx->pc = 0x7F1B8EFCu;
    // 7F1B8EFC: addi    r3, r5, 30998
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(30998);

label_7F1B8F00:
    ctx->pc = 0x7F1B8F00u;
    // 7F1B8F00: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8F04:
    ctx->pc = 0x7F1B8F04u;
    // 7F1B8F04: addi    r4, r4, -29140
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29140);

label_7F1B8F08:
    ctx->pc = 0x7F1B8F08u;
    // 7F1B8F08: li      r5, 15
    ctx->gpr[5] = (u32)(s32)(15);

label_7F1B8F0C:
    ctx->pc = 0x7F1B8F0Cu;
    // 7F1B8F0C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1B8F10:
    ctx->pc = 0x7F1B8F10u;
    // 7F1B8F10: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1B8F14:
    ctx->pc = 0x7F1B8F14u;
    // 7F1B8F14: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1B8F18u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1B8F18:
    ctx->pc = 0x7F1B8F18u;
    ctx->downcount -= 3;
    // 7F1B8F18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8F1C:
    ctx->pc = 0x7F1B8F1Cu;
    // 7F1B8F1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8F20:
    ctx->pc = 0x7F1B8F20u;
    // 7F1B8F20: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1B8F24u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1B8F24:
    ctx->pc = 0x7F1B8F24u;
    ctx->downcount -= 1;
    // 7F1B8F24: b       0x7F1B8F84
    {
            goto label_7F1B8F84;
    }

label_7F1B8F28:
    ctx->pc = 0x7F1B8F28u;
    ctx->downcount -= 2;
    // 7F1B8F28: rlwinm. r0, r6, 0, 30, 30
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

label_7F1B8F2C:
    ctx->pc = 0x7F1B8F2Cu;
    // 7F1B8F2C: bc    12, 2, 0x7F1B8F84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B8F84;
        }
    }

label_7F1B8F30:
    ctx->pc = 0x7F1B8F30u;
    ctx->downcount -= 18;
    // 7F1B8F30: lis     r4, 187
    ctx->gpr[4] = ((u32)(s32)(187) << 16);

label_7F1B8F34:
    ctx->pc = 0x7F1B8F34u;
    // 7F1B8F34: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B8F38:
    ctx->pc = 0x7F1B8F38u;
    // 7F1B8F38: addi    r0, r4, -16735
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-16735);

label_7F1B8F3C:
    ctx->pc = 0x7F1B8F3Cu;
    // 7F1B8F3C: lis     r5, 32585
    ctx->gpr[5] = ((u32)(s32)(32585) << 16);

label_7F1B8F40:
    ctx->pc = 0x7F1B8F40u;
    // 7F1B8F40: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B8F44:
    ctx->pc = 0x7F1B8F44u;
    // 7F1B8F44: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8F48:
    ctx->pc = 0x7F1B8F48u;
    // 7F1B8F48: addi    r7, r5, 12832
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(12832);

label_7F1B8F4C:
    ctx->pc = 0x7F1B8F4Cu;
    // 7F1B8F4C: lis     r5, 214
    ctx->gpr[5] = ((u32)(s32)(214) << 16);

label_7F1B8F50:
    ctx->pc = 0x7F1B8F50u;
    // 7F1B8F50: addi    r8, r4, 12808
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(12808);

label_7F1B8F54:
    ctx->pc = 0x7F1B8F54u;
    // 7F1B8F54: lis     r4, 75
    ctx->gpr[4] = ((u32)(s32)(75) << 16);

label_7F1B8F58:
    ctx->pc = 0x7F1B8F58u;
    // 7F1B8F58: lfs     f1, 7504(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B8F58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7504);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B8F5C:
    ctx->pc = 0x7F1B8F5Cu;
    // 7F1B8F5C: addi    r3, r5, 30998
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(30998);

label_7F1B8F60:
    ctx->pc = 0x7F1B8F60u;
    // 7F1B8F60: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B8F64:
    ctx->pc = 0x7F1B8F64u;
    // 7F1B8F64: addi    r4, r4, 11506
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11506);

label_7F1B8F68:
    ctx->pc = 0x7F1B8F68u;
    // 7F1B8F68: li      r5, 18
    ctx->gpr[5] = (u32)(s32)(18);

label_7F1B8F6C:
    ctx->pc = 0x7F1B8F6Cu;
    // 7F1B8F6C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_7F1B8F70:
    ctx->pc = 0x7F1B8F70u;
    // 7F1B8F70: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_7F1B8F74:
    ctx->pc = 0x7F1B8F74u;
    // 7F1B8F74: bl      0x7F2FDA38
    {
            ctx->lr = 0x7F1B8F78u;
            ctx->pc = 0x7F2FDA38u;
            return;
    }

label_7F1B8F78:
    ctx->pc = 0x7F1B8F78u;
    ctx->downcount -= 3;
    // 7F1B8F78: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8F7C:
    ctx->pc = 0x7F1B8F7Cu;
    // 7F1B8F7C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B8F80:
    ctx->pc = 0x7F1B8F80u;
    // 7F1B8F80: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1B8F84u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1B8F84:
    ctx->pc = 0x7F1B8F84u;
    ctx->downcount -= 6;
    // 7F1B8F84: lwz     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B8F88:
    ctx->pc = 0x7F1B8F88u;
    // 7F1B8F88: li      r4, 21
    ctx->gpr[4] = (u32)(s32)(21);

label_7F1B8F8C:
    ctx->pc = 0x7F1B8F8Cu;
    // 7F1B8F8C: li      r5, 13
    ctx->gpr[5] = (u32)(s32)(13);

label_7F1B8F90:
    ctx->pc = 0x7F1B8F90u;
    // 7F1B8F90: li      r6, 17
    ctx->gpr[6] = (u32)(s32)(17);

label_7F1B8F94:
    ctx->pc = 0x7F1B8F94u;
    // 7F1B8F94: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_7F1B8F98:
    ctx->pc = 0x7F1B8F98u;
    // 7F1B8F98: bl      0x7F306788
    {
            ctx->lr = 0x7F1B8F9Cu;
            ctx->pc = 0x7F306788u;
            return;
    }

label_7F1B8F9C:
    ctx->pc = 0x7F1B8F9Cu;
    ctx->downcount -= 18;
    // 7F1B8F9C: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B8FA0:
    ctx->pc = 0x7F1B8FA0u;
    // 7F1B8FA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B8FA4:
    ctx->pc = 0x7F1B8FA4u;
    // 7F1B8FA4: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B8FA8:
    ctx->pc = 0x7F1B8FA8u;
    // 7F1B8FA8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B8FAC:
    ctx->pc = 0x7F1B8FACu;
    // 7F1B8FAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B8FB0:
    ctx->pc = 0x7F1B8FB0u;
    // 7F1B8FB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B8FB4:
    ctx->pc = 0x7F1B8FB4u;
    // 7F1B8FB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B8FB8:
    ctx->pc = 0x7F1B8FB8u;
    ctx->downcount -= 22;
    // 7F1B8FB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B8FBC:
    ctx->pc = 0x7F1B8FBCu;
    // 7F1B8FBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B8FC0:
    ctx->pc = 0x7F1B8FC0u;
    // 7F1B8FC0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B8FC4:
    ctx->pc = 0x7F1B8FC4u;
    // 7F1B8FC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B8FC8:
    ctx->pc = 0x7F1B8FC8u;
    // 7F1B8FC8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B8FCC:
    ctx->pc = 0x7F1B8FCCu;
    // 7F1B8FCC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B8FD0:
    ctx->pc = 0x7F1B8FD0u;
    // 7F1B8FD0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B8FD4:
    ctx->pc = 0x7F1B8FD4u;
    // 7F1B8FD4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B8FD8:
    ctx->pc = 0x7F1B8FD8u;
    // 7F1B8FD8: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1B8FDC:
    ctx->pc = 0x7F1B8FDCu;
    // 7F1B8FDC: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B8FE0:
    ctx->pc = 0x7F1B8FE0u;
    // 7F1B8FE0: li      r5, 60
    ctx->gpr[5] = (u32)(s32)(60);

label_7F1B8FE4:
    ctx->pc = 0x7F1B8FE4u;
    // 7F1B8FE4: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B8FE8u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B8FE8:
    ctx->pc = 0x7F1B8FE8u;
    ctx->downcount -= 2;
    // 7F1B8FE8: or.   r31, r3, r3
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

label_7F1B8FEC:
    ctx->pc = 0x7F1B8FECu;
    // 7F1B8FEC: bc    12, 2, 0x7F1B9058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9058;
        }
    }

label_7F1B8FF0:
    ctx->pc = 0x7F1B8FF0u;
    ctx->downcount -= 5;
    // 7F1B8FF0: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1B8FF4:
    ctx->pc = 0x7F1B8FF4u;
    // 7F1B8FF4: lis     r5, 32540
    ctx->gpr[5] = ((u32)(s32)(32540) << 16);

label_7F1B8FF8:
    ctx->pc = 0x7F1B8FF8u;
    // 7F1B8FF8: addi    r4, r4, -29216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-29216);

label_7F1B8FFC:
    ctx->pc = 0x7F1B8FFCu;
    // 7F1B8FFC: addi    r5, r5, -29172
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-29172);

label_7F1B9000:
    ctx->pc = 0x7F1B9000u;
    // 7F1B9000: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B9004u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B9004:
    ctx->pc = 0x7F1B9004u;
    ctx->downcount -= 15;
    // 7F1B9004: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9008:
    ctx->pc = 0x7F1B9008u;
    // 7F1B9008: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B900C:
    ctx->pc = 0x7F1B900Cu;
    // 7F1B900C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B9010:
    ctx->pc = 0x7F1B9010u;
    // 7F1B9010: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B9014:
    ctx->pc = 0x7F1B9014u;
    // 7F1B9014: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1B9018:
    ctx->pc = 0x7F1B9018u;
    // 7F1B9018: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B901C:
    ctx->pc = 0x7F1B901Cu;
    // 7F1B901C: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B9020:
    ctx->pc = 0x7F1B9020u;
    // 7F1B9020: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B9024:
    ctx->pc = 0x7F1B9024u;
    // 7F1B9024: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B9028:
    ctx->pc = 0x7F1B9028u;
    // 7F1B9028: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B902C:
    ctx->pc = 0x7F1B902Cu;
    // 7F1B902C: stw     r7, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B9030:
    ctx->pc = 0x7F1B9030u;
    // 7F1B9030: stw     r7, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B9034:
    ctx->pc = 0x7F1B9034u;
    // 7F1B9034: stw     r7, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B9038:
    ctx->pc = 0x7F1B9038u;
    // 7F1B9038: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B903C:
    ctx->pc = 0x7F1B903Cu;
    // 7F1B903C: bl      0x7F1B8E38
    {
            ctx->lr = 0x7F1B9040u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B8E38u;
                return;
            }
            goto label_7F1B8E38;
    }

label_7F1B9040:
    ctx->pc = 0x7F1B9040u;
    ctx->downcount -= 2;
    // 7F1B9040: cmpwi   r3, 0
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

label_7F1B9044:
    ctx->pc = 0x7F1B9044u;
    // 7F1B9044: bc    4, 0, 0x7F1B9058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9058;
        }
    }

label_7F1B9048:
    ctx->pc = 0x7F1B9048u;
    ctx->downcount -= 2;
    // 7F1B9048: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B904C:
    ctx->pc = 0x7F1B904Cu;
    // 7F1B904C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B9050u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B9050:
    ctx->pc = 0x7F1B9050u;
    ctx->downcount -= 2;
    // 7F1B9050: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B9054:
    ctx->pc = 0x7F1B9054u;
    // 7F1B9054: b       0x7F1B905C
    {
            goto label_7F1B905C;
    }

label_7F1B9058:
    ctx->pc = 0x7F1B9058u;
    ctx->downcount -= 1;
    // 7F1B9058: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B905C:
    ctx->pc = 0x7F1B905Cu;
    ctx->downcount -= 16;
    // 7F1B905C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B9060:
    ctx->pc = 0x7F1B9060u;
    // 7F1B9060: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9064:
    ctx->pc = 0x7F1B9064u;
    // 7F1B9064: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9068:
    ctx->pc = 0x7F1B9068u;
    // 7F1B9068: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B906C:
    ctx->pc = 0x7F1B906Cu;
    // 7F1B906C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9070:
    ctx->pc = 0x7F1B9070u;
    ctx->downcount -= 18;
    // 7F1B9070: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9074:
    ctx->pc = 0x7F1B9074u;
    // 7F1B9074: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9078:
    ctx->pc = 0x7F1B9078u;
    // 7F1B9078: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B907C:
    ctx->pc = 0x7F1B907Cu;
    // 7F1B907C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B9080:
    ctx->pc = 0x7F1B9080u;
    // 7F1B9080: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9084:
    ctx->pc = 0x7F1B9084u;
    // 7F1B9084: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B9088:
    ctx->pc = 0x7F1B9088u;
    // 7F1B9088: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B908C:
    ctx->pc = 0x7F1B908Cu;
    // 7F1B908C: bl      0x7F19943C
    {
            ctx->lr = 0x7F1B9090u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1B9090:
    ctx->pc = 0x7F1B9090u;
    ctx->downcount -= 1;
    // 7F1B9090: bl      0x7F199494
    {
            ctx->lr = 0x7F1B9094u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1B9094:
    ctx->pc = 0x7F1B9094u;
    ctx->downcount -= 4;
    // 7F1B9094: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9098:
    ctx->pc = 0x7F1B9098u;
    // 7F1B9098: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B909C:
    ctx->pc = 0x7F1B909Cu;
    // 7F1B909C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B90A0:
    ctx->pc = 0x7F1B90A0u;
    // 7F1B90A0: bl      0x7F1B8D28
    {
            ctx->lr = 0x7F1B90A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B8D28u;
                return;
            }
            goto label_7F1B8D28;
    }

label_7F1B90A4:
    ctx->pc = 0x7F1B90A4u;
    ctx->downcount -= 16;
    // 7F1B90A4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B90A8:
    ctx->pc = 0x7F1B90A8u;
    // 7F1B90A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B90AC:
    ctx->pc = 0x7F1B90ACu;
    // 7F1B90AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B90B0:
    ctx->pc = 0x7F1B90B0u;
    // 7F1B90B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B90B4:
    ctx->pc = 0x7F1B90B4u;
    // 7F1B90B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B90B8:
    ctx->pc = 0x7F1B90B8u;
    ctx->downcount -= 18;
    // 7F1B90B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B90BC:
    ctx->pc = 0x7F1B90BCu;
    // 7F1B90BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B90C0:
    ctx->pc = 0x7F1B90C0u;
    // 7F1B90C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B90C4:
    ctx->pc = 0x7F1B90C4u;
    // 7F1B90C4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B90C8:
    ctx->pc = 0x7F1B90C8u;
    // 7F1B90C8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B90CC:
    ctx->pc = 0x7F1B90CCu;
    // 7F1B90CC: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B90D0:
    ctx->pc = 0x7F1B90D0u;
    // 7F1B90D0: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B90D4:
    ctx->pc = 0x7F1B90D4u;
    // 7F1B90D4: bl      0x7F19943C
    {
            ctx->lr = 0x7F1B90D8u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1B90D8:
    ctx->pc = 0x7F1B90D8u;
    ctx->downcount -= 1;
    // 7F1B90D8: bl      0x7F199494
    {
            ctx->lr = 0x7F1B90DCu;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1B90DC:
    ctx->pc = 0x7F1B90DCu;
    ctx->downcount -= 4;
    // 7F1B90DC: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B90E0:
    ctx->pc = 0x7F1B90E0u;
    // 7F1B90E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B90E4:
    ctx->pc = 0x7F1B90E4u;
    // 7F1B90E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B90E8:
    ctx->pc = 0x7F1B90E8u;
    // 7F1B90E8: bl      0x7F1B8FB8
    {
            ctx->lr = 0x7F1B90ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B8FB8u;
                return;
            }
            goto label_7F1B8FB8;
    }

label_7F1B90EC:
    ctx->pc = 0x7F1B90ECu;
    ctx->downcount -= 16;
    // 7F1B90EC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B90F0:
    ctx->pc = 0x7F1B90F0u;
    // 7F1B90F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B90F4:
    ctx->pc = 0x7F1B90F4u;
    // 7F1B90F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B90F8:
    ctx->pc = 0x7F1B90F8u;
    // 7F1B90F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B90FC:
    ctx->pc = 0x7F1B90FCu;
    // 7F1B90FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9100:
    ctx->pc = 0x7F1B9100u;
    ctx->downcount -= 7;
    // 7F1B9100: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9104:
    ctx->pc = 0x7F1B9104u;
    // 7F1B9104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9108:
    ctx->pc = 0x7F1B9108u;
    // 7F1B9108: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B910C:
    ctx->pc = 0x7F1B910Cu;
    // 7F1B910C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9110:
    ctx->pc = 0x7F1B9110u;
    // 7F1B9110: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B9114:
    ctx->pc = 0x7F1B9114u;
    // 7F1B9114: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9118:
    ctx->pc = 0x7F1B9118u;
    // 7F1B9118: bl      0x80025A08
    {
            ctx->lr = 0x7F1B911Cu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B911C:
    ctx->pc = 0x7F1B911Cu;
    ctx->downcount -= 4;
    // 7F1B911C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9120:
    ctx->pc = 0x7F1B9120u;
    // 7F1B9120: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9120u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9124:
    ctx->pc = 0x7F1B9124u;
    // 7F1B9124: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9128:
    ctx->pc = 0x7F1B9128u;
    // 7F1B9128: bl      0x7F114738
    {
            ctx->lr = 0x7F1B912Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B912C:
    ctx->pc = 0x7F1B912Cu;
    ctx->downcount -= 4;
    // 7F1B912C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9130:
    ctx->pc = 0x7F1B9130u;
    // 7F1B9130: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9130u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9134:
    ctx->pc = 0x7F1B9134u;
    // 7F1B9134: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9138:
    ctx->pc = 0x7F1B9138u;
    // 7F1B9138: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B913Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B913C:
    ctx->pc = 0x7F1B913Cu;
    ctx->downcount -= 4;
    // 7F1B913C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9140:
    ctx->pc = 0x7F1B9140u;
    // 7F1B9140: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9140u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9144:
    ctx->pc = 0x7F1B9144u;
    // 7F1B9144: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9148:
    ctx->pc = 0x7F1B9148u;
    // 7F1B9148: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B914Cu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B914C:
    ctx->pc = 0x7F1B914Cu;
    ctx->downcount -= 3;
    // 7F1B914C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9150:
    ctx->pc = 0x7F1B9150u;
    // 7F1B9150: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_7F1B9154:
    ctx->pc = 0x7F1B9154u;
    // 7F1B9154: bl      0x7F44FFE8
    {
            ctx->lr = 0x7F1B9158u;
            ctx->pc = 0x7F44FFE8u;
            return;
    }

label_7F1B9158:
    ctx->pc = 0x7F1B9158u;
    ctx->downcount -= 6;
    // 7F1B9158: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B915C:
    ctx->pc = 0x7F1B915Cu;
    // 7F1B915C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B9160:
    ctx->pc = 0x7F1B9160u;
    // 7F1B9160: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9164:
    ctx->pc = 0x7F1B9164u;
    // 7F1B9164: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B9168:
    ctx->pc = 0x7F1B9168u;
    // 7F1B9168: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B916C:
    ctx->pc = 0x7F1B916Cu;
    ctx->downcount -= 7;
    // 7F1B916C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9170:
    ctx->pc = 0x7F1B9170u;
    // 7F1B9170: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9174:
    ctx->pc = 0x7F1B9174u;
    // 7F1B9174: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9178:
    ctx->pc = 0x7F1B9178u;
    // 7F1B9178: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B917C:
    ctx->pc = 0x7F1B917Cu;
    // 7F1B917C: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B9180:
    ctx->pc = 0x7F1B9180u;
    // 7F1B9180: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9184:
    ctx->pc = 0x7F1B9184u;
    // 7F1B9184: bl      0x80025A08
    {
            ctx->lr = 0x7F1B9188u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B9188:
    ctx->pc = 0x7F1B9188u;
    ctx->downcount -= 4;
    // 7F1B9188: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B918C:
    ctx->pc = 0x7F1B918Cu;
    // 7F1B918C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B918Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9190:
    ctx->pc = 0x7F1B9190u;
    // 7F1B9190: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9194:
    ctx->pc = 0x7F1B9194u;
    // 7F1B9194: bl      0x7F114738
    {
            ctx->lr = 0x7F1B9198u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B9198:
    ctx->pc = 0x7F1B9198u;
    ctx->downcount -= 4;
    // 7F1B9198: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B919C:
    ctx->pc = 0x7F1B919Cu;
    // 7F1B919C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B919Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B91A0:
    ctx->pc = 0x7F1B91A0u;
    // 7F1B91A0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B91A4:
    ctx->pc = 0x7F1B91A4u;
    // 7F1B91A4: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B91A8u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B91A8:
    ctx->pc = 0x7F1B91A8u;
    ctx->downcount -= 4;
    // 7F1B91A8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B91AC:
    ctx->pc = 0x7F1B91ACu;
    // 7F1B91AC: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B91ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B91B0:
    ctx->pc = 0x7F1B91B0u;
    // 7F1B91B0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B91B4:
    ctx->pc = 0x7F1B91B4u;
    // 7F1B91B4: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B91B8u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B91B8:
    ctx->pc = 0x7F1B91B8u;
    ctx->downcount -= 2;
    // 7F1B91B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B91BC:
    ctx->pc = 0x7F1B91BCu;
    // 7F1B91BC: bl      0x7F41B278
    {
            ctx->lr = 0x7F1B91C0u;
            ctx->pc = 0x7F41B278u;
            return;
    }

label_7F1B91C0:
    ctx->pc = 0x7F1B91C0u;
    ctx->downcount -= 6;
    // 7F1B91C0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B91C4:
    ctx->pc = 0x7F1B91C4u;
    // 7F1B91C4: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B91C8:
    ctx->pc = 0x7F1B91C8u;
    // 7F1B91C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B91CC:
    ctx->pc = 0x7F1B91CCu;
    // 7F1B91CC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B91D0:
    ctx->pc = 0x7F1B91D0u;
    // 7F1B91D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B91D4:
    ctx->pc = 0x7F1B91D4u;
    ctx->downcount -= 9;
    // 7F1B91D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B91D8:
    ctx->pc = 0x7F1B91D8u;
    // 7F1B91D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B91DC:
    ctx->pc = 0x7F1B91DCu;
    // 7F1B91DC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B91E0:
    ctx->pc = 0x7F1B91E0u;
    // 7F1B91E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B91E4:
    ctx->pc = 0x7F1B91E4u;
    // 7F1B91E4: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B91E8:
    ctx->pc = 0x7F1B91E8u;
    // 7F1B91E8: lha     r4, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B91EC:
    ctx->pc = 0x7F1B91ECu;
    // 7F1B91EC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B91F0:
    ctx->pc = 0x7F1B91F0u;
    // 7F1B91F0: lha     r5, 58(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(58);
        ctx->gpr[5] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B91F4:
    ctx->pc = 0x7F1B91F4u;
    // 7F1B91F4: bl      0x7F3AD61C
    {
            ctx->lr = 0x7F1B91F8u;
            ctx->pc = 0x7F3AD61Cu;
            return;
    }

label_7F1B91F8:
    ctx->pc = 0x7F1B91F8u;
    ctx->downcount -= 5;
    // 7F1B91F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B91FC:
    ctx->pc = 0x7F1B91FCu;
    // 7F1B91FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9200:
    ctx->pc = 0x7F1B9200u;
    // 7F1B9200: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B9204:
    ctx->pc = 0x7F1B9204u;
    // 7F1B9204: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9208:
    ctx->pc = 0x7F1B9208u;
    ctx->downcount -= 6;
    // 7F1B9208: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B920C:
    ctx->pc = 0x7F1B920Cu;
    // 7F1B920C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9210:
    ctx->pc = 0x7F1B9210u;
    // 7F1B9210: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9214:
    ctx->pc = 0x7F1B9214u;
    // 7F1B9214: lwz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9218:
    ctx->pc = 0x7F1B9218u;
    // 7F1B9218: cmplwi  r3, 0x0000
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

label_7F1B921C:
    ctx->pc = 0x7F1B921Cu;
    // 7F1B921C: bc    12, 2, 0x7F1B9224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9224;
        }
    }

label_7F1B9220:
    ctx->pc = 0x7F1B9220u;
    ctx->downcount -= 1;
    // 7F1B9220: bl      0x7F3C91A8
    {
            ctx->lr = 0x7F1B9224u;
            ctx->pc = 0x7F3C91A8u;
            return;
    }

label_7F1B9224:
    ctx->pc = 0x7F1B9224u;
    ctx->downcount -= 5;
    // 7F1B9224: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9228:
    ctx->pc = 0x7F1B9228u;
    // 7F1B9228: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B922C:
    ctx->pc = 0x7F1B922Cu;
    // 7F1B922C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B9230:
    ctx->pc = 0x7F1B9230u;
    // 7F1B9230: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9234:
    ctx->pc = 0x7F1B9234u;
    ctx->downcount -= 21;
    // 7F1B9234: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9238:
    ctx->pc = 0x7F1B9238u;
    // 7F1B9238: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B923C:
    ctx->pc = 0x7F1B923Cu;
    // 7F1B923C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9240:
    ctx->pc = 0x7F1B9240u;
    // 7F1B9240: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B9244:
    ctx->pc = 0x7F1B9244u;
    // 7F1B9244: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9248:
    ctx->pc = 0x7F1B9248u;
    // 7F1B9248: stw     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B924C:
    ctx->pc = 0x7F1B924Cu;
    // 7F1B924C: stw     r5, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B9250:
    ctx->pc = 0x7F1B9250u;
    // 7F1B9250: sth     r6, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1B9254:
    ctx->pc = 0x7F1B9254u;
    // 7F1B9254: sth     r7, 58(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1B9258:
    ctx->pc = 0x7F1B9258u;
    // 7F1B9258: lwz     r3, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B925C:
    ctx->pc = 0x7F1B925Cu;
    // 7F1B925C: bl      0x7F02F854
    {
            ctx->lr = 0x7F1B9260u;
            ctx->pc = 0x7F02F854u;
            return;
    }

label_7F1B9260:
    ctx->pc = 0x7F1B9260u;
    ctx->downcount -= 10;
    // 7F1B9260: lwz     r5, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9264:
    ctx->pc = 0x7F1B9264u;
    // 7F1B9264: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_7F1B9268:
    ctx->pc = 0x7F1B9268u;
    // 7F1B9268: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B926C:
    ctx->pc = 0x7F1B926Cu;
    // 7F1B926C: li      r6, 16
    ctx->gpr[6] = (u32)(s32)(16);

label_7F1B9270:
    ctx->pc = 0x7F1B9270u;
    // 7F1B9270: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9274:
    ctx->pc = 0x7F1B9274u;
    // 7F1B9274: lwz     r5, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9278:
    ctx->pc = 0x7F1B9278u;
    // 7F1B9278: lha     r0, 70(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B927C:
    ctx->pc = 0x7F1B927Cu;
    // 7F1B927C: rlwinm r31, r0, 2, 0, 29
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1B9280:
    ctx->pc = 0x7F1B9280u;
    // 7F1B9280: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B9284:
    ctx->pc = 0x7F1B9284u;
    // 7F1B9284: bl      0x7F3C8D04
    {
            ctx->lr = 0x7F1B9288u;
            ctx->pc = 0x7F3C8D04u;
            return;
    }

label_7F1B9288:
    ctx->pc = 0x7F1B9288u;
    ctx->downcount -= 4;
    // 7F1B9288: stw     r3, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B928C:
    ctx->pc = 0x7F1B928Cu;
    // 7F1B928C: lwz     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9290:
    ctx->pc = 0x7F1B9290u;
    // 7F1B9290: cmplwi  r0, 0x0000
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

label_7F1B9294:
    ctx->pc = 0x7F1B9294u;
    // 7F1B9294: bc    4, 2, 0x7F1B92A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B92A0;
        }
    }

label_7F1B9298:
    ctx->pc = 0x7F1B9298u;
    ctx->downcount -= 2;
    // 7F1B9298: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B929C:
    ctx->pc = 0x7F1B929Cu;
    // 7F1B929C: b       0x7F1B92EC
    {
            goto label_7F1B92EC;
    }

label_7F1B92A0:
    ctx->pc = 0x7F1B92A0u;
    ctx->downcount -= 3;
    // 7F1B92A0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B92A4:
    ctx->pc = 0x7F1B92A4u;
    // 7F1B92A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B92A8:
    ctx->pc = 0x7F1B92A8u;
    // 7F1B92A8: b       0x7F1B92C0
    {
            goto label_7F1B92C0;
    }

label_7F1B92AC:
    loop_7F1B92AC(ctx);
    if (ctx->pc == 0x7F1B92D4u) goto label_7F1B92D4;
    return;
label_7F1B92B0:
    // 7F1B92B0: addi    r0, r3, 672
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(672);

label_7F1B92B4:
    // 7F1B92B4: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_7F1B92B8:
    // 7F1B92B8: addi    r3, r3, 324
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(324);

label_7F1B92BC:
    ctx->pc = 0x7F1B92BCu;
    // 7F1B92BC: stwx    r4, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B92C0:
    ctx->pc = 0x7F1B92C0u;
    ctx->downcount -= 5;
    // 7F1B92C0: lwz     r4, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B92C4:
    ctx->pc = 0x7F1B92C4u;
    // 7F1B92C4: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B92C8:
    ctx->pc = 0x7F1B92C8u;
    // 7F1B92C8: lha     r0, 92(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(92);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B92CC:
    // 7F1B92CC: cmpw    r5, r0
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

label_7F1B92D0:
    // 7F1B92D0: bc    12, 0, 0x7F1B92AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B92ACu;
                return;
            }
            goto label_7F1B92AC;
        }
    }

label_7F1B92D4:
    ctx->pc = 0x7F1B92D4u;
    ctx->downcount -= 5;
    // 7F1B92D4: lwz     r4, 72(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B92D8:
    ctx->pc = 0x7F1B92D8u;
    // 7F1B92D8: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B92DC:
    ctx->pc = 0x7F1B92DCu;
    // 7F1B92DC: lwz     r3, 672(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(672);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B92E0:
    ctx->pc = 0x7F1B92E0u;
    // 7F1B92E0: lwz     r4, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B92E4:
    ctx->pc = 0x7F1B92E4u;
    // 7F1B92E4: bl      0x8000519C
    {
            ctx->lr = 0x7F1B92E8u;
            ctx->pc = 0x8000519Cu;
            return;
    }

label_7F1B92E8:
    ctx->pc = 0x7F1B92E8u;
    ctx->downcount -= 1;
    // 7F1B92E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B92EC:
    ctx->pc = 0x7F1B92ECu;
    ctx->downcount -= 16;
    // 7F1B92EC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B92F0:
    ctx->pc = 0x7F1B92F0u;
    // 7F1B92F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B92F4:
    ctx->pc = 0x7F1B92F4u;
    // 7F1B92F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B92F8:
    ctx->pc = 0x7F1B92F8u;
    // 7F1B92F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B92FC:
    ctx->pc = 0x7F1B92FCu;
    // 7F1B92FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9300:
    ctx->pc = 0x7F1B9300u;
    ctx->downcount -= 5;
    // 7F1B9300: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9304:
    ctx->pc = 0x7F1B9304u;
    // 7F1B9304: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9308:
    ctx->pc = 0x7F1B9308u;
    // 7F1B9308: cmpwi   r4, 1
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

label_7F1B930C:
    ctx->pc = 0x7F1B930Cu;
    // 7F1B930C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9310:
    ctx->pc = 0x7F1B9310u;
    // 7F1B9310: bc    12, 2, 0x7F1B9330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9330;
        }
    }

label_7F1B9314:
    ctx->pc = 0x7F1B9314u;
    ctx->downcount -= 1;
    // 7F1B9314: bc    4, 0, 0x7F1B933C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B933C;
        }
    }

label_7F1B9318:
    ctx->pc = 0x7F1B9318u;
    ctx->downcount -= 2;
    // 7F1B9318: cmpwi   r4, 0
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

label_7F1B931C:
    ctx->pc = 0x7F1B931Cu;
    // 7F1B931C: bc    4, 0, 0x7F1B9324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9324;
        }
    }

label_7F1B9320:
    ctx->pc = 0x7F1B9320u;
    ctx->downcount -= 1;
    // 7F1B9320: b       0x7F1B933C
    {
            goto label_7F1B933C;
    }

label_7F1B9324:
    ctx->pc = 0x7F1B9324u;
    ctx->downcount -= 3;
    // 7F1B9324: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9328:
    ctx->pc = 0x7F1B9328u;
    // 7F1B9328: sth     r0, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B932C:
    ctx->pc = 0x7F1B932Cu;
    // 7F1B932C: b       0x7F1B9344
    {
            goto label_7F1B9344;
    }

label_7F1B9330:
    ctx->pc = 0x7F1B9330u;
    ctx->downcount -= 3;
    // 7F1B9330: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9334:
    ctx->pc = 0x7F1B9334u;
    // 7F1B9334: sth     r0, 58(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1B9338:
    ctx->pc = 0x7F1B9338u;
    // 7F1B9338: b       0x7F1B9344
    {
            goto label_7F1B9344;
    }

label_7F1B933C:
    ctx->pc = 0x7F1B933Cu;
    ctx->downcount -= 1;
    // 7F1B933C: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B9340u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B9340:
    ctx->pc = 0x7F1B9340u;
    ctx->downcount -= 1;
    // 7F1B9340: b       0x7F1B9348
    {
            goto label_7F1B9348;
    }

label_7F1B9344:
    ctx->pc = 0x7F1B9344u;
    ctx->downcount -= 1;
    // 7F1B9344: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B9348:
    ctx->pc = 0x7F1B9348u;
    ctx->downcount -= 5;
    // 7F1B9348: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B934C:
    ctx->pc = 0x7F1B934Cu;
    // 7F1B934C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9350:
    ctx->pc = 0x7F1B9350u;
    // 7F1B9350: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B9354:
    ctx->pc = 0x7F1B9354u;
    // 7F1B9354: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9358:
    ctx->pc = 0x7F1B9358u;
    ctx->downcount -= 23;
    // 7F1B9358: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B935C:
    ctx->pc = 0x7F1B935Cu;
    // 7F1B935C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9360:
    ctx->pc = 0x7F1B9360u;
    // 7F1B9360: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9364:
    ctx->pc = 0x7F1B9364u;
    // 7F1B9364: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B9368:
    ctx->pc = 0x7F1B9368u;
    // 7F1B9368: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B936C:
    ctx->pc = 0x7F1B936Cu;
    // 7F1B936C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9370:
    ctx->pc = 0x7F1B9370u;
    // 7F1B9370: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B9374:
    ctx->pc = 0x7F1B9374u;
    // 7F1B9374: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1B9378:
    ctx->pc = 0x7F1B9378u;
    // 7F1B9378: li      r3, 6
    ctx->gpr[3] = (u32)(s32)(6);

label_7F1B937C:
    ctx->pc = 0x7F1B937Cu;
    // 7F1B937C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B9380:
    ctx->pc = 0x7F1B9380u;
    // 7F1B9380: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_7F1B9384:
    ctx->pc = 0x7F1B9384u;
    // 7F1B9384: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B9388:
    ctx->pc = 0x7F1B9388u;
    // 7F1B9388: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B938Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B938C:
    ctx->pc = 0x7F1B938Cu;
    ctx->downcount -= 2;
    // 7F1B938C: or.   r31, r3, r3
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

label_7F1B9390:
    ctx->pc = 0x7F1B9390u;
    // 7F1B9390: bc    12, 2, 0x7F1B9410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9410;
        }
    }

label_7F1B9394:
    ctx->pc = 0x7F1B9394u;
    ctx->downcount -= 5;
    // 7F1B9394: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1B9398:
    ctx->pc = 0x7F1B9398u;
    // 7F1B9398: lis     r5, 32540
    ctx->gpr[5] = ((u32)(s32)(32540) << 16);

label_7F1B939C:
    ctx->pc = 0x7F1B939Cu;
    // 7F1B939C: addi    r4, r4, -28204
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-28204);

label_7F1B93A0:
    ctx->pc = 0x7F1B93A0u;
    // 7F1B93A0: addi    r5, r5, -28152
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28152);

label_7F1B93A4:
    ctx->pc = 0x7F1B93A4u;
    // 7F1B93A4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B93A8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B93A8:
    ctx->pc = 0x7F1B93A8u;
    ctx->downcount -= 16;
    // 7F1B93A8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B93AC:
    ctx->pc = 0x7F1B93ACu;
    // 7F1B93AC: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1B93B0:
    ctx->pc = 0x7F1B93B0u;
    // 7F1B93B0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_7F1B93B4:
    ctx->pc = 0x7F1B93B4u;
    // 7F1B93B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B93B8:
    ctx->pc = 0x7F1B93B8u;
    // 7F1B93B8: ori     r5, r0, 0x0080
    ctx->gpr[5] = ctx->gpr[0] | 0x0080u;

label_7F1B93BC:
    ctx->pc = 0x7F1B93BCu;
    // 7F1B93BC: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1B93C0:
    ctx->pc = 0x7F1B93C0u;
    // 7F1B93C0: stw     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B93C4:
    ctx->pc = 0x7F1B93C4u;
    // 7F1B93C4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1B93C8:
    ctx->pc = 0x7F1B93C8u;
    // 7F1B93C8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B93CC:
    ctx->pc = 0x7F1B93CCu;
    // 7F1B93CC: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B93D0:
    ctx->pc = 0x7F1B93D0u;
    // 7F1B93D0: stw     r8, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B93D4:
    ctx->pc = 0x7F1B93D4u;
    // 7F1B93D4: or   r7, r30, r30
    {
        ctx->gpr[7] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B93D8:
    ctx->pc = 0x7F1B93D8u;
    // 7F1B93D8: stw     r8, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B93DC:
    ctx->pc = 0x7F1B93DCu;
    // 7F1B93DC: stw     r8, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1B93E0:
    ctx->pc = 0x7F1B93E0u;
    // 7F1B93E0: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B93E4:
    ctx->pc = 0x7F1B93E4u;
    // 7F1B93E4: bl      0x7F1B9234
    {
            ctx->lr = 0x7F1B93E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B9234u;
                return;
            }
            goto label_7F1B9234;
    }

label_7F1B93E8:
    ctx->pc = 0x7F1B93E8u;
    ctx->downcount -= 2;
    // 7F1B93E8: cmpwi   r3, 0
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

label_7F1B93EC:
    ctx->pc = 0x7F1B93ECu;
    // 7F1B93EC: bc    4, 0, 0x7F1B9400
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9400;
        }
    }

label_7F1B93F0:
    ctx->pc = 0x7F1B93F0u;
    ctx->downcount -= 2;
    // 7F1B93F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B93F4:
    ctx->pc = 0x7F1B93F4u;
    // 7F1B93F4: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B93F8u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B93F8:
    ctx->pc = 0x7F1B93F8u;
    ctx->downcount -= 2;
    // 7F1B93F8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B93FC:
    ctx->pc = 0x7F1B93FCu;
    // 7F1B93FC: b       0x7F1B9414
    {
            goto label_7F1B9414;
    }

label_7F1B9400:
    ctx->pc = 0x7F1B9400u;
    ctx->downcount -= 4;
    // 7F1B9400: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1B9404:
    ctx->pc = 0x7F1B9404u;
    // 7F1B9404: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B9408:
    ctx->pc = 0x7F1B9408u;
    // 7F1B9408: addi    r4, r4, -27904
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27904);

label_7F1B940C:
    ctx->pc = 0x7F1B940Cu;
    // 7F1B940C: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B9410u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B9410:
    ctx->pc = 0x7F1B9410u;
    ctx->downcount -= 1;
    // 7F1B9410: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B9414:
    ctx->pc = 0x7F1B9414u;
    ctx->downcount -= 16;
    // 7F1B9414: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B9418:
    ctx->pc = 0x7F1B9418u;
    // 7F1B9418: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B941C:
    ctx->pc = 0x7F1B941Cu;
    // 7F1B941C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9420:
    ctx->pc = 0x7F1B9420u;
    // 7F1B9420: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B9424:
    ctx->pc = 0x7F1B9424u;
    // 7F1B9424: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9428:
    ctx->pc = 0x7F1B9428u;
    ctx->downcount -= 1;
    // 7F1B9428: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B942C:
    ctx->pc = 0x7F1B942Cu;
    ctx->downcount -= 8;
    // 7F1B942C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9430:
    ctx->pc = 0x7F1B9430u;
    // 7F1B9430: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9434:
    ctx->pc = 0x7F1B9434u;
    // 7F1B9434: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9438:
    ctx->pc = 0x7F1B9438u;
    // 7F1B9438: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B943C:
    ctx->pc = 0x7F1B943Cu;
    // 7F1B943C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9440:
    ctx->pc = 0x7F1B9440u;
    // 7F1B9440: lwz     r4, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B9444:
    ctx->pc = 0x7F1B9444u;
    // 7F1B9444: cmplwi  r4, 0x0000
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

label_7F1B9448:
    ctx->pc = 0x7F1B9448u;
    // 7F1B9448: bc    12, 2, 0x7F1B9464
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9464;
        }
    }

label_7F1B944C:
    ctx->pc = 0x7F1B944Cu;
    ctx->downcount -= 4;
    // 7F1B944C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1B9450:
    ctx->pc = 0x7F1B9450u;
    // 7F1B9450: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B9454:
    ctx->pc = 0x7F1B9454u;
    // 7F1B9454: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9458:
    ctx->pc = 0x7F1B9458u;
    // 7F1B9458: bl      0x7F026B18
    {
            ctx->lr = 0x7F1B945Cu;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F1B945C:
    ctx->pc = 0x7F1B945Cu;
    ctx->downcount -= 2;
    // 7F1B945C: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9460:
    ctx->pc = 0x7F1B9460u;
    // 7F1B9460: bl      0x7F0259FC
    {
            ctx->lr = 0x7F1B9464u;
            ctx->pc = 0x7F0259FCu;
            return;
    }

label_7F1B9464:
    ctx->pc = 0x7F1B9464u;
    ctx->downcount -= 3;
    // 7F1B9464: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B9468:
    ctx->pc = 0x7F1B9468u;
    // 7F1B9468: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B946C:
    ctx->pc = 0x7F1B946Cu;
    // 7F1B946C: bl      0x7F01BC6C
    {
            ctx->lr = 0x7F1B9470u;
            ctx->pc = 0x7F01BC6Cu;
            return;
    }

label_7F1B9470:
    ctx->pc = 0x7F1B9470u;
    ctx->downcount -= 2;
    // 7F1B9470: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B9474:
    ctx->pc = 0x7F1B9474u;
    // 7F1B9474: bl      0x7F026BB8
    {
            ctx->lr = 0x7F1B9478u;
            ctx->pc = 0x7F026BB8u;
            return;
    }

label_7F1B9478:
    ctx->pc = 0x7F1B9478u;
    ctx->downcount -= 6;
    // 7F1B9478: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B947C:
    ctx->pc = 0x7F1B947Cu;
    // 7F1B947C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B9480:
    ctx->pc = 0x7F1B9480u;
    // 7F1B9480: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9484:
    ctx->pc = 0x7F1B9484u;
    // 7F1B9484: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B9488:
    ctx->pc = 0x7F1B9488u;
    // 7F1B9488: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B948C:
    ctx->pc = 0x7F1B948Cu;
    ctx->downcount -= 36;
    // 7F1B948C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9490:
    ctx->pc = 0x7F1B9490u;
    // 7F1B9490: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9494:
    ctx->pc = 0x7F1B9494u;
    // 7F1B9494: lis     r9, 32582
    ctx->gpr[9] = ((u32)(s32)(32582) << 16);

label_7F1B9498:
    ctx->pc = 0x7F1B9498u;
    // 7F1B9498: or   r11, r4, r4
    {
        ctx->gpr[11] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B949C:
    ctx->pc = 0x7F1B949Cu;
    // 7F1B949C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B94A0:
    ctx->pc = 0x7F1B94A0u;
    // 7F1B94A0: addi    r4, r9, 7512
    ctx->gpr[4] = ctx->gpr[9] + (u32)(s32)(7512);

label_7F1B94A4:
    ctx->pc = 0x7F1B94A4u;
    // 7F1B94A4: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B94A8:
    ctx->pc = 0x7F1B94A8u;
    // 7F1B94A8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B94AC:
    ctx->pc = 0x7F1B94ACu;
    // 7F1B94AC: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B94B0:
    ctx->pc = 0x7F1B94B0u;
    // 7F1B94B0: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1B94B4:
    ctx->pc = 0x7F1B94B4u;
    // 7F1B94B4: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1B94B8:
    ctx->pc = 0x7F1B94B8u;
    // 7F1B94B8: or   r31, r8, r8
    {
        ctx->gpr[31] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1B94BC:
    ctx->pc = 0x7F1B94BCu;
    // 7F1B94BC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_7F1B94C0:
    ctx->pc = 0x7F1B94C0u;
    // 7F1B94C0: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_7F1B94C4:
    ctx->pc = 0x7F1B94C4u;
    // 7F1B94C4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B94C8:
    ctx->pc = 0x7F1B94C8u;
    // 7F1B94C8: lwz     r10, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1B94CC:
    ctx->pc = 0x7F1B94CCu;
    // 7F1B94CC: lwz     r9, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1B94D0:
    ctx->pc = 0x7F1B94D0u;
    // 7F1B94D0: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B94D4:
    ctx->pc = 0x7F1B94D4u;
    // 7F1B94D4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B94D8:
    ctx->pc = 0x7F1B94D8u;
    // 7F1B94D8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B94DC:
    ctx->pc = 0x7F1B94DCu;
    // 7F1B94DC: or   r3, r11, r11
    {
        ctx->gpr[3] = ctx->gpr[11] | ctx->gpr[11];
    }

label_7F1B94E0:
    ctx->pc = 0x7F1B94E0u;
    // 7F1B94E0: stw     r10, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1B94E4:
    ctx->pc = 0x7F1B94E4u;
    // 7F1B94E4: stw     r9, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1B94E8:
    ctx->pc = 0x7F1B94E8u;
    // 7F1B94E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B94EC:
    ctx->pc = 0x7F1B94ECu;
    // 7F1B94EC: stw     r11, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1B94F0:
    ctx->pc = 0x7F1B94F0u;
    // 7F1B94F0: bl      0x7F03ABC8
    {
            ctx->lr = 0x7F1B94F4u;
            ctx->pc = 0x7F03ABC8u;
            return;
    }

label_7F1B94F4:
    ctx->pc = 0x7F1B94F4u;
    ctx->downcount -= 15;
    // 7F1B94F4: stw     r3, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B94F8:
    ctx->pc = 0x7F1B94F8u;
    // 7F1B94F8: addi    r3, r27, 56
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(56);

label_7F1B94FC:
    ctx->pc = 0x7F1B94FCu;
    // 7F1B94FC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9500:
    ctx->pc = 0x7F1B9500u;
    // 7F1B9500: lwz     r6, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B9504:
    ctx->pc = 0x7F1B9504u;
    // 7F1B9504: lwz     r5, 104(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9508:
    ctx->pc = 0x7F1B9508u;
    // 7F1B9508: lwz     r0, 108(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B950C:
    ctx->pc = 0x7F1B950Cu;
    // 7F1B950C: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B9510:
    ctx->pc = 0x7F1B9510u;
    // 7F1B9510: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9514:
    ctx->pc = 0x7F1B9514u;
    // 7F1B9514: lwz     r5, 112(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(112);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9518:
    ctx->pc = 0x7F1B9518u;
    // 7F1B9518: lwz     r0, 116(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B951C:
    ctx->pc = 0x7F1B951Cu;
    // 7F1B951C: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B9520:
    ctx->pc = 0x7F1B9520u;
    // 7F1B9520: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9524:
    ctx->pc = 0x7F1B9524u;
    // 7F1B9524: lwz     r5, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9528:
    ctx->pc = 0x7F1B9528u;
    // 7F1B9528: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F1B952C:
    ctx->pc = 0x7F1B952Cu;
    // 7F1B952C: bl      0x7F114508
    {
            ctx->lr = 0x7F1B9530u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1B9530:
    ctx->pc = 0x7F1B9530u;
    ctx->downcount -= 5;
    // 7F1B9530: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1B9534:
    ctx->pc = 0x7F1B9534u;
    // 7F1B9534: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F1B9538:
    ctx->pc = 0x7F1B9538u;
    // 7F1B9538: lwz     r0, 5004(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(5004);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B953C:
    ctx->pc = 0x7F1B953Cu;
    // 7F1B953C: rlwinm. r0, r0, 0, 31, 31
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

label_7F1B9540:
    ctx->pc = 0x7F1B9540u;
    // 7F1B9540: bc    12, 2, 0x7F1B9548
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9548;
        }
    }

label_7F1B9544:
    ctx->pc = 0x7F1B9544u;
    ctx->downcount -= 1;
    // 7F1B9544: ori     r5, r5, 0x0400
    ctx->gpr[5] = ctx->gpr[5] | 0x0400u;

label_7F1B9548:
    ctx->pc = 0x7F1B9548u;
    ctx->downcount -= 3;
    // 7F1B9548: lwz     r3, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B954C:
    ctx->pc = 0x7F1B954Cu;
    // 7F1B954C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B9550:
    ctx->pc = 0x7F1B9550u;
    // 7F1B9550: bl      0x7F026EBC
    {
            ctx->lr = 0x7F1B9554u;
            ctx->pc = 0x7F026EBCu;
            return;
    }

label_7F1B9554:
    ctx->pc = 0x7F1B9554u;
    ctx->downcount -= 4;
    // 7F1B9554: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B9558:
    ctx->pc = 0x7F1B9558u;
    // 7F1B9558: lwz     r3, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B955C:
    ctx->pc = 0x7F1B955Cu;
    // 7F1B955C: lfs     f1, 7528(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B955Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7528);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9560:
    ctx->pc = 0x7F1B9560u;
    // 7F1B9560: bl      0x7F026F54
    {
            ctx->lr = 0x7F1B9564u;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F1B9564:
    ctx->pc = 0x7F1B9564u;
    ctx->downcount -= 6;
    // 7F1B9564: lwz     r3, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9568:
    ctx->pc = 0x7F1B9568u;
    // 7F1B9568: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B956C:
    ctx->pc = 0x7F1B956Cu;
    // 7F1B956C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B9570:
    ctx->pc = 0x7F1B9570u;
    // 7F1B9570: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B9574:
    ctx->pc = 0x7F1B9574u;
    // 7F1B9574: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B9578:
    ctx->pc = 0x7F1B9578u;
    // 7F1B9578: bl      0x7F026928
    {
            ctx->lr = 0x7F1B957Cu;
            ctx->pc = 0x7F026928u;
            return;
    }

label_7F1B957C:
    ctx->pc = 0x7F1B957Cu;
    ctx->downcount -= 5;
    // 7F1B957C: lwz     r4, 52(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(52);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B9580:
    ctx->pc = 0x7F1B9580u;
    // 7F1B9580: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B9584:
    ctx->pc = 0x7F1B9584u;
    // 7F1B9584: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B9588:
    ctx->pc = 0x7F1B9588u;
    // 7F1B9588: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B958C:
    ctx->pc = 0x7F1B958Cu;
    // 7F1B958C: bl      0x7F026B18
    {
            ctx->lr = 0x7F1B9590u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F1B9590:
    ctx->pc = 0x7F1B9590u;
    ctx->downcount -= 13;
    // 7F1B9590: stw     r28, 120(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_7F1B9594:
    ctx->pc = 0x7F1B9594u;
    // 7F1B9594: lis     r3, 32590
    ctx->gpr[3] = ((u32)(s32)(32590) << 16);

label_7F1B9598:
    ctx->pc = 0x7F1B9598u;
    // 7F1B9598: addi    r3, r3, 28636
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(28636);

label_7F1B959C:
    ctx->pc = 0x7F1B959Cu;
    // 7F1B959C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B95A0:
    ctx->pc = 0x7F1B95A0u;
    // 7F1B95A0: stw     r29, 124(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1B95A4:
    ctx->pc = 0x7F1B95A4u;
    // 7F1B95A4: addi    r26, r3, 948
    ctx->gpr[26] = ctx->gpr[3] + (u32)(s32)(948);

label_7F1B95A8:
    ctx->pc = 0x7F1B95A8u;
    // 7F1B95A8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1B95AC:
    ctx->pc = 0x7F1B95ACu;
    // 7F1B95AC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B95B0:
    ctx->pc = 0x7F1B95B0u;
    // 7F1B95B0: stw     r30, 128(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1B95B4:
    ctx->pc = 0x7F1B95B4u;
    // 7F1B95B4: subf   r6, r28, r30
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1B95B8:
    ctx->pc = 0x7F1B95B8u;
    // 7F1B95B8: subf   r7, r29, r31
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_7F1B95BC:
    ctx->pc = 0x7F1B95BCu;
    // 7F1B95BC: stw     r31, 132(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B95C0:
    ctx->pc = 0x7F1B95C0u;
    // 7F1B95C0: bl      0x7F3AE540
    {
            ctx->lr = 0x7F1B95C4u;
            ctx->pc = 0x7F3AE540u;
            return;
    }

label_7F1B95C4:
    ctx->pc = 0x7F1B95C4u;
    ctx->downcount -= 8;
    // 7F1B95C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B95C8:
    ctx->pc = 0x7F1B95C8u;
    // 7F1B95C8: lis     r4, 32585
    ctx->gpr[4] = ((u32)(s32)(32585) << 16);

label_7F1B95CC:
    ctx->pc = 0x7F1B95CCu;
    // 7F1B95CC: addi    r5, r3, 7528
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7528);

label_7F1B95D0:
    ctx->pc = 0x7F1B95D0u;
    // 7F1B95D0: addi    r4, r4, 12832
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12832);

label_7F1B95D4:
    ctx->pc = 0x7F1B95D4u;
    // 7F1B95D4: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B95D4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B95D8:
    ctx->pc = 0x7F1B95D8u;
    // 7F1B95D8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1B95DC:
    ctx->pc = 0x7F1B95DCu;
    // 7F1B95DC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B95E0:
    ctx->pc = 0x7F1B95E0u;
    // 7F1B95E0: bl      0x7F3BF4BC
    {
            ctx->lr = 0x7F1B95E4u;
            ctx->pc = 0x7F3BF4BCu;
            return;
    }

label_7F1B95E4:
    ctx->pc = 0x7F1B95E4u;
    ctx->downcount -= 2;
    // 7F1B95E4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B95E8:
    ctx->pc = 0x7F1B95E8u;
    // 7F1B95E8: bl      0x7F026B70
    {
            ctx->lr = 0x7F1B95ECu;
            ctx->pc = 0x7F026B70u;
            return;
    }

label_7F1B95EC:
    ctx->pc = 0x7F1B95ECu;
    ctx->downcount -= 2;
    // 7F1B95EC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B95F0:
    ctx->pc = 0x7F1B95F0u;
    // 7F1B95F0: bl      0x7F026B18
    {
            ctx->lr = 0x7F1B95F4u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F1B95F4:
    ctx->pc = 0x7F1B95F4u;
    ctx->downcount -= 3;
    // 7F1B95F4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B95F8:
    ctx->pc = 0x7F1B95F8u;
    // 7F1B95F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B95FC:
    ctx->pc = 0x7F1B95FCu;
    // 7F1B95FC: bl      0x7F01BC6C
    {
            ctx->lr = 0x7F1B9600u;
            ctx->pc = 0x7F01BC6Cu;
            return;
    }

label_7F1B9600:
    ctx->pc = 0x7F1B9600u;
    ctx->downcount -= 17;
    // 7F1B9600: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B9604:
    ctx->pc = 0x7F1B9604u;
    // 7F1B9604: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B9608:
    ctx->pc = 0x7F1B9608u;
    // 7F1B9608: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B960C:
    ctx->pc = 0x7F1B960Cu;
    // 7F1B960C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9610:
    ctx->pc = 0x7F1B9610u;
    // 7F1B9610: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B9614:
    ctx->pc = 0x7F1B9614u;
    // 7F1B9614: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9618:
    ctx->pc = 0x7F1B9618u;
    ctx->downcount -= 28;
    // 7F1B9618: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B961C:
    ctx->pc = 0x7F1B961Cu;
    // 7F1B961C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9620:
    ctx->pc = 0x7F1B9620u;
    // 7F1B9620: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1B9624:
    ctx->pc = 0x7F1B9624u;
    // 7F1B9624: cmpwi   r4, 1
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

label_7F1B9628:
    ctx->pc = 0x7F1B9628u;
    // 7F1B9628: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B962C:
    ctx->pc = 0x7F1B962Cu;
    // 7F1B962C: addi    r8, r6, 7532
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(7532);

label_7F1B9630:
    ctx->pc = 0x7F1B9630u;
    // 7F1B9630: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B9634:
    ctx->pc = 0x7F1B9634u;
    // 7F1B9634: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9638:
    ctx->pc = 0x7F1B9638u;
    // 7F1B9638: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B963C:
    ctx->pc = 0x7F1B963Cu;
    // 7F1B963C: lwz     r7, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B9640:
    ctx->pc = 0x7F1B9640u;
    // 7F1B9640: lwz     r6, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B9644:
    ctx->pc = 0x7F1B9644u;
    // 7F1B9644: lwz     r3, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9648:
    ctx->pc = 0x7F1B9648u;
    // 7F1B9648: lwz     r0, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B964C:
    ctx->pc = 0x7F1B964Cu;
    // 7F1B964C: stw     r7, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B9650:
    ctx->pc = 0x7F1B9650u;
    // 7F1B9650: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B9654:
    ctx->pc = 0x7F1B9654u;
    // 7F1B9654: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B9658:
    ctx->pc = 0x7F1B9658u;
    // 7F1B9658: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B965C:
    ctx->pc = 0x7F1B965Cu;
    // 7F1B965C: bc    12, 2, 0x7F1B96A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B96A4;
        }
    }

label_7F1B9660:
    ctx->pc = 0x7F1B9660u;
    ctx->downcount -= 1;
    // 7F1B9660: bc    4, 0, 0x7F1B9670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9670;
        }
    }

label_7F1B9664:
    ctx->pc = 0x7F1B9664u;
    ctx->downcount -= 2;
    // 7F1B9664: cmpwi   r4, 0
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

label_7F1B9668:
    ctx->pc = 0x7F1B9668u;
    // 7F1B9668: bc    4, 0, 0x7F1B9684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9684;
        }
    }

label_7F1B966C:
    ctx->pc = 0x7F1B966Cu;
    ctx->downcount -= 1;
    // 7F1B966C: b       0x7F1B9734
    {
            goto label_7F1B9734;
    }

label_7F1B9670:
    ctx->pc = 0x7F1B9670u;
    ctx->downcount -= 4;
    // 7F1B9670: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1B9674:
    ctx->pc = 0x7F1B9674u;
    // 7F1B9674: addi    r0, r3, -32768
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-32768);

label_7F1B9678:
    ctx->pc = 0x7F1B9678u;
    // 7F1B9678: cmpw    r4, r0
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

label_7F1B967C:
    ctx->pc = 0x7F1B967Cu;
    // 7F1B967C: bc    12, 2, 0x7F1B96BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B96BC;
        }
    }

label_7F1B9680:
    ctx->pc = 0x7F1B9680u;
    ctx->downcount -= 1;
    // 7F1B9680: b       0x7F1B9734
    {
            goto label_7F1B9734;
    }

label_7F1B9684:
    ctx->pc = 0x7F1B9684u;
    ctx->downcount -= 2;
    // 7F1B9684: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B9688:
    ctx->pc = 0x7F1B9688u;
    // 7F1B9688: bl      0x7F026B70
    {
            ctx->lr = 0x7F1B968Cu;
            ctx->pc = 0x7F026B70u;
            return;
    }

label_7F1B968C:
    ctx->pc = 0x7F1B968Cu;
    ctx->downcount -= 2;
    // 7F1B968C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B9690:
    ctx->pc = 0x7F1B9690u;
    // 7F1B9690: bl      0x7F026B18
    {
            ctx->lr = 0x7F1B9694u;
            ctx->pc = 0x7F026B18u;
            return;
    }

label_7F1B9694:
    ctx->pc = 0x7F1B9694u;
    ctx->downcount -= 3;
    // 7F1B9694: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B9698:
    ctx->pc = 0x7F1B9698u;
    // 7F1B9698: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1B969C:
    ctx->pc = 0x7F1B969Cu;
    // 7F1B969C: bl      0x7F01BC6C
    {
            ctx->lr = 0x7F1B96A0u;
            ctx->pc = 0x7F01BC6Cu;
            return;
    }

label_7F1B96A0:
    ctx->pc = 0x7F1B96A0u;
    ctx->downcount -= 1;
    // 7F1B96A0: b       0x7F1B9744
    {
            goto label_7F1B9744;
    }

label_7F1B96A4:
    ctx->pc = 0x7F1B96A4u;
    ctx->downcount -= 2;
    // 7F1B96A4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B96A8:
    ctx->pc = 0x7F1B96A8u;
    // 7F1B96A8: bl      0x7F026BB8
    {
            ctx->lr = 0x7F1B96ACu;
            ctx->pc = 0x7F026BB8u;
            return;
    }

label_7F1B96AC:
    ctx->pc = 0x7F1B96ACu;
    ctx->downcount -= 3;
    // 7F1B96AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1B96B0:
    ctx->pc = 0x7F1B96B0u;
    // 7F1B96B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1B96B4:
    ctx->pc = 0x7F1B96B4u;
    // 7F1B96B4: bl      0x7F01BC6C
    {
            ctx->lr = 0x7F1B96B8u;
            ctx->pc = 0x7F01BC6Cu;
            return;
    }

label_7F1B96B8:
    ctx->pc = 0x7F1B96B8u;
    ctx->downcount -= 1;
    // 7F1B96B8: b       0x7F1B9744
    {
            goto label_7F1B9744;
    }

label_7F1B96BC:
    ctx->pc = 0x7F1B96BCu;
    ctx->downcount -= 2;
    // 7F1B96BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B96C0:
    ctx->pc = 0x7F1B96C0u;
    // 7F1B96C0: bl      0x7F026F84
    {
            ctx->lr = 0x7F1B96C4u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F1B96C4:
    ctx->pc = 0x7F1B96C4u;
    ctx->downcount -= 4;
    // 7F1B96C4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B96C8:
    ctx->pc = 0x7F1B96C8u;
    // 7F1B96C8: lwz     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B96CC:
    ctx->pc = 0x7F1B96CCu;
    // 7F1B96CC: lfs     f1, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B96CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B96D0:
    ctx->pc = 0x7F1B96D0u;
    // 7F1B96D0: bl      0x7F026F54
    {
            ctx->lr = 0x7F1B96D4u;
            ctx->pc = 0x7F026F54u;
            return;
    }

label_7F1B96D4:
    ctx->pc = 0x7F1B96D4u;
    ctx->downcount -= 5;
    // 7F1B96D4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1B96D8:
    ctx->pc = 0x7F1B96D8u;
    // 7F1B96D8: addi    r5, r31, 52
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(52);

label_7F1B96DC:
    ctx->pc = 0x7F1B96DCu;
    // 7F1B96DC: addi    r4, r30, -4
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-4);

label_7F1B96E0:
    ctx->pc = 0x7F1B96E0u;
    // 7F1B96E0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B96E4:
    loop_7F1B96E4(ctx);
    if (ctx->pc == 0x7F1B96F8u) goto label_7F1B96F8;
    return;
label_7F1B96E8:
    ctx->pc = 0x7F1B96E8u;
    // 7F1B96E8: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1B96EC:
    ctx->pc = 0x7F1B96ECu;
    // 7F1B96EC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B96F0:
    ctx->pc = 0x7F1B96F0u;
    // 7F1B96F0: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1B96F4:
    // 7F1B96F4: bc    16, 0, 0x7F1B96E4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B96E4u;
                return;
            }
            goto label_7F1B96E4;
        }
    }

label_7F1B96F8:
    ctx->pc = 0x7F1B96F8u;
    ctx->downcount -= 14;
    // 7F1B96F8: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B96FC:
    ctx->pc = 0x7F1B96FCu;
    // 7F1B96FC: addi    r3, r31, 56
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(56);

label_7F1B9700:
    ctx->pc = 0x7F1B9700u;
    // 7F1B9700: lwz     r5, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9704:
    ctx->pc = 0x7F1B9704u;
    // 7F1B9704: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9708:
    ctx->pc = 0x7F1B9708u;
    // 7F1B9708: lwz     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B970C:
    ctx->pc = 0x7F1B970Cu;
    // 7F1B970C: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B9710:
    ctx->pc = 0x7F1B9710u;
    // 7F1B9710: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9714:
    ctx->pc = 0x7F1B9714u;
    // 7F1B9714: lwz     r5, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9718:
    ctx->pc = 0x7F1B9718u;
    // 7F1B9718: lwz     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B971C:
    ctx->pc = 0x7F1B971Cu;
    // 7F1B971C: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1B9720:
    ctx->pc = 0x7F1B9720u;
    // 7F1B9720: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9724:
    ctx->pc = 0x7F1B9724u;
    // 7F1B9724: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9728:
    ctx->pc = 0x7F1B9728u;
    // 7F1B9728: addi    r5, r5, 16
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16);

label_7F1B972C:
    ctx->pc = 0x7F1B972Cu;
    // 7F1B972C: bl      0x7F114508
    {
            ctx->lr = 0x7F1B9730u;
            ctx->pc = 0x7F114508u;
            return;
    }

label_7F1B9730:
    ctx->pc = 0x7F1B9730u;
    ctx->downcount -= 1;
    // 7F1B9730: b       0x7F1B9744
    {
            goto label_7F1B9744;
    }

label_7F1B9734:
    ctx->pc = 0x7F1B9734u;
    ctx->downcount -= 3;
    // 7F1B9734: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B9738:
    ctx->pc = 0x7F1B9738u;
    // 7F1B9738: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B973C:
    ctx->pc = 0x7F1B973Cu;
    // 7F1B973C: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1B9740u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1B9740:
    ctx->pc = 0x7F1B9740u;
    ctx->downcount -= 1;
    // 7F1B9740: b       0x7F1B9748
    {
            goto label_7F1B9748;
    }

label_7F1B9744:
    ctx->pc = 0x7F1B9744u;
    ctx->downcount -= 1;
    // 7F1B9744: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B9748:
    ctx->pc = 0x7F1B9748u;
    ctx->downcount -= 16;
    // 7F1B9748: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B974C:
    ctx->pc = 0x7F1B974Cu;
    // 7F1B974C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9750:
    ctx->pc = 0x7F1B9750u;
    // 7F1B9750: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9754:
    ctx->pc = 0x7F1B9754u;
    // 7F1B9754: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1B9758:
    ctx->pc = 0x7F1B9758u;
    // 7F1B9758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B975C:
    ctx->pc = 0x7F1B975Cu;
    ctx->downcount -= 26;
    // 7F1B975C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9760:
    ctx->pc = 0x7F1B9760u;
    // 7F1B9760: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9764:
    ctx->pc = 0x7F1B9764u;
    // 7F1B9764: lis     r9, 1
    ctx->gpr[9] = ((u32)(s32)(1) << 16);

label_7F1B9768:
    ctx->pc = 0x7F1B9768u;
    // 7F1B9768: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B976C:
    ctx->pc = 0x7F1B976Cu;
    // 7F1B976C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B9770:
    ctx->pc = 0x7F1B9770u;
    // 7F1B9770: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9774:
    ctx->pc = 0x7F1B9774u;
    // 7F1B9774: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9778:
    ctx->pc = 0x7F1B9778u;
    // 7F1B9778: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1B977C:
    ctx->pc = 0x7F1B977Cu;
    // 7F1B977C: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1B9780:
    ctx->pc = 0x7F1B9780u;
    // 7F1B9780: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1B9784:
    ctx->pc = 0x7F1B9784u;
    // 7F1B9784: or   r30, r8, r8
    {
        ctx->gpr[30] = ctx->gpr[8] | ctx->gpr[8];
    }

label_7F1B9788:
    ctx->pc = 0x7F1B9788u;
    // 7F1B9788: addi    r6, r9, -8
    ctx->gpr[6] = ctx->gpr[9] + (u32)(s32)(-8);

label_7F1B978C:
    ctx->pc = 0x7F1B978Cu;
    // 7F1B978C: li      r3, 7
    ctx->gpr[3] = (u32)(s32)(7);

label_7F1B9790:
    ctx->pc = 0x7F1B9790u;
    // 7F1B9790: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1B9794:
    ctx->pc = 0x7F1B9794u;
    // 7F1B9794: li      r5, 136
    ctx->gpr[5] = (u32)(s32)(136);

label_7F1B9798:
    ctx->pc = 0x7F1B9798u;
    // 7F1B9798: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1B979Cu;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1B979C:
    ctx->pc = 0x7F1B979Cu;
    ctx->downcount -= 2;
    // 7F1B979C: or.   r31, r3, r3
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

label_7F1B97A0:
    ctx->pc = 0x7F1B97A0u;
    // 7F1B97A0: bc    12, 2, 0x7F1B9848
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9848;
        }
    }

label_7F1B97A4:
    ctx->pc = 0x7F1B97A4u;
    ctx->downcount -= 5;
    // 7F1B97A4: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1B97A8:
    ctx->pc = 0x7F1B97A8u;
    // 7F1B97A8: lis     r5, 32540
    ctx->gpr[5] = ((u32)(s32)(32540) << 16);

label_7F1B97AC:
    ctx->pc = 0x7F1B97ACu;
    // 7F1B97AC: addi    r4, r4, -27608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27608);

label_7F1B97B0:
    ctx->pc = 0x7F1B97B0u;
    // 7F1B97B0: addi    r5, r5, -27604
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27604);

label_7F1B97B4:
    ctx->pc = 0x7F1B97B4u;
    // 7F1B97B4: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1B97B8u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1B97B8:
    ctx->pc = 0x7F1B97B8u;
    ctx->downcount -= 15;
    // 7F1B97B8: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B97BC:
    ctx->pc = 0x7F1B97BCu;
    // 7F1B97BC: lis     r3, 32572
    ctx->gpr[3] = ((u32)(s32)(32572) << 16);

label_7F1B97C0:
    ctx->pc = 0x7F1B97C0u;
    // 7F1B97C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1B97C4:
    ctx->pc = 0x7F1B97C4u;
    // 7F1B97C4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_7F1B97C8:
    ctx->pc = 0x7F1B97C8u;
    // 7F1B97C8: ori     r4, r4, 0x0080
    ctx->gpr[4] = ctx->gpr[4] | 0x0080u;

label_7F1B97CC:
    ctx->pc = 0x7F1B97CCu;
    // 7F1B97CC: addi    r3, r3, 32548
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(32548);

label_7F1B97D0:
    ctx->pc = 0x7F1B97D0u;
    // 7F1B97D0: stw     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1B97D4:
    ctx->pc = 0x7F1B97D4u;
    // 7F1B97D4: addi    r5, r31, 52
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(52);

label_7F1B97D8:
    ctx->pc = 0x7F1B97D8u;
    // 7F1B97D8: addi    r4, r26, -4
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(-4);

label_7F1B97DC:
    ctx->pc = 0x7F1B97DCu;
    // 7F1B97DC: stw     r6, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B97E0:
    ctx->pc = 0x7F1B97E0u;
    // 7F1B97E0: stw     r6, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B97E4:
    ctx->pc = 0x7F1B97E4u;
    // 7F1B97E4: stw     r6, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1B97E8:
    ctx->pc = 0x7F1B97E8u;
    // 7F1B97E8: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B97EC:
    ctx->pc = 0x7F1B97ECu;
    // 7F1B97EC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1B97F0:
    loop_7F1B97F0(ctx);
    if (ctx->pc == 0x7F1B9804u) goto label_7F1B9804;
    return;
label_7F1B97F4:
    ctx->pc = 0x7F1B97F4u;
    // 7F1B97F4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_7F1B97F8:
    ctx->pc = 0x7F1B97F8u;
    // 7F1B97F8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B97FC:
    ctx->pc = 0x7F1B97FCu;
    // 7F1B97FC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_7F1B9800:
    // 7F1B9800: bc    16, 0, 0x7F1B97F0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B97F0u;
                return;
            }
            goto label_7F1B97F0;
        }
    }

label_7F1B9804:
    ctx->pc = 0x7F1B9804u;
    ctx->downcount -= 7;
    // 7F1B9804: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B9808:
    ctx->pc = 0x7F1B9808u;
    // 7F1B9808: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_7F1B980C:
    ctx->pc = 0x7F1B980Cu;
    // 7F1B980C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1B9810:
    ctx->pc = 0x7F1B9810u;
    // 7F1B9810: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1B9814:
    ctx->pc = 0x7F1B9814u;
    // 7F1B9814: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1B9818:
    ctx->pc = 0x7F1B9818u;
    // 7F1B9818: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1B981C:
    ctx->pc = 0x7F1B981Cu;
    // 7F1B981C: bl      0x7F1B948C
    {
            ctx->lr = 0x7F1B9820u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B948Cu;
                return;
            }
            goto label_7F1B948C;
    }

label_7F1B9820:
    ctx->pc = 0x7F1B9820u;
    ctx->downcount -= 2;
    // 7F1B9820: cmpwi   r3, 0
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

label_7F1B9824:
    ctx->pc = 0x7F1B9824u;
    // 7F1B9824: bc    4, 0, 0x7F1B9838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9838;
        }
    }

label_7F1B9828:
    ctx->pc = 0x7F1B9828u;
    ctx->downcount -= 2;
    // 7F1B9828: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B982C:
    ctx->pc = 0x7F1B982Cu;
    // 7F1B982C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1B9830u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1B9830:
    ctx->pc = 0x7F1B9830u;
    ctx->downcount -= 2;
    // 7F1B9830: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1B9834:
    ctx->pc = 0x7F1B9834u;
    // 7F1B9834: b       0x7F1B984C
    {
            goto label_7F1B984C;
    }

label_7F1B9838:
    ctx->pc = 0x7F1B9838u;
    ctx->downcount -= 4;
    // 7F1B9838: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1B983C:
    ctx->pc = 0x7F1B983Cu;
    // 7F1B983C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B9840:
    ctx->pc = 0x7F1B9840u;
    // 7F1B9840: addi    r4, r4, -27112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27112);

label_7F1B9844:
    ctx->pc = 0x7F1B9844u;
    // 7F1B9844: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1B9848u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1B9848:
    ctx->pc = 0x7F1B9848u;
    ctx->downcount -= 1;
    // 7F1B9848: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B984C:
    ctx->pc = 0x7F1B984Cu;
    ctx->downcount -= 16;
    // 7F1B984C: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B9850:
    ctx->pc = 0x7F1B9850u;
    // 7F1B9850: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9854:
    ctx->pc = 0x7F1B9854u;
    // 7F1B9854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9858:
    ctx->pc = 0x7F1B9858u;
    // 7F1B9858: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B985C:
    ctx->pc = 0x7F1B985Cu;
    // 7F1B985C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9860:
    ctx->pc = 0x7F1B9860u;
    ctx->downcount -= 18;
    // 7F1B9860: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9864:
    ctx->pc = 0x7F1B9864u;
    // 7F1B9864: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9868:
    ctx->pc = 0x7F1B9868u;
    // 7F1B9868: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B986C:
    ctx->pc = 0x7F1B986Cu;
    // 7F1B986C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9870:
    ctx->pc = 0x7F1B9870u;
    // 7F1B9870: stmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B9874:
    ctx->pc = 0x7F1B9874u;
    // 7F1B9874: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9878:
    ctx->pc = 0x7F1B9878u;
    // 7F1B9878: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B987C:
    ctx->pc = 0x7F1B987Cu;
    // 7F1B987C: bl      0x80025A08
    {
            ctx->lr = 0x7F1B9880u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B9880:
    ctx->pc = 0x7F1B9880u;
    ctx->downcount -= 4;
    // 7F1B9880: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9884:
    ctx->pc = 0x7F1B9884u;
    // 7F1B9884: lfs     f1, 32(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9884u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9888:
    ctx->pc = 0x7F1B9888u;
    // 7F1B9888: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B988C:
    ctx->pc = 0x7F1B988Cu;
    // 7F1B988C: bl      0x7F114738
    {
            ctx->lr = 0x7F1B9890u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B9890:
    ctx->pc = 0x7F1B9890u;
    ctx->downcount -= 4;
    // 7F1B9890: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9894:
    ctx->pc = 0x7F1B9894u;
    // 7F1B9894: lfs     f1, 36(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9894u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9898:
    ctx->pc = 0x7F1B9898u;
    // 7F1B9898: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B989C:
    ctx->pc = 0x7F1B989Cu;
    // 7F1B989C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B98A0u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B98A0:
    ctx->pc = 0x7F1B98A0u;
    ctx->downcount -= 4;
    // 7F1B98A0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B98A4:
    ctx->pc = 0x7F1B98A4u;
    // 7F1B98A4: lfs     f1, 40(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1B98A4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B98A8:
    ctx->pc = 0x7F1B98A8u;
    // 7F1B98A8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B98AC:
    ctx->pc = 0x7F1B98ACu;
    // 7F1B98AC: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B98B0u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B98B0:
    ctx->pc = 0x7F1B98B0u;
    ctx->downcount -= 4;
    // 7F1B98B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B98B4:
    ctx->pc = 0x7F1B98B4u;
    // 7F1B98B4: addi    r5, r30, 16
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(16);

label_7F1B98B8:
    ctx->pc = 0x7F1B98B8u;
    // 7F1B98B8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B98BC:
    ctx->pc = 0x7F1B98BCu;
    // 7F1B98BC: bl      0x7F114B40
    {
            ctx->lr = 0x7F1B98C0u;
            ctx->pc = 0x7F114B40u;
            return;
    }

label_7F1B98C0:
    ctx->pc = 0x7F1B98C0u;
    ctx->downcount -= 7;
    // 7F1B98C0: lwz     r5, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B98C4:
    ctx->pc = 0x7F1B98C4u;
    // 7F1B98C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B98C8:
    ctx->pc = 0x7F1B98C8u;
    // 7F1B98C8: lwz     r6, 52(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B98CC:
    ctx->pc = 0x7F1B98CCu;
    // 7F1B98CC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B98D0:
    ctx->pc = 0x7F1B98D0u;
    // 7F1B98D0: lwz     r7, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B98D4:
    ctx->pc = 0x7F1B98D4u;
    // 7F1B98D4: lwz     r8, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1B98D8:
    ctx->pc = 0x7F1B98D8u;
    // 7F1B98D8: bl      0x7F1B975C
    {
            ctx->lr = 0x7F1B98DCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B975Cu;
                return;
            }
            goto label_7F1B975C;
    }

label_7F1B98DC:
    ctx->pc = 0x7F1B98DCu;
    ctx->downcount -= 16;
    // 7F1B98DC: lmw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B98E0:
    ctx->pc = 0x7F1B98E0u;
    // 7F1B98E0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B98E4:
    ctx->pc = 0x7F1B98E4u;
    // 7F1B98E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B98E8:
    ctx->pc = 0x7F1B98E8u;
    // 7F1B98E8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B98EC:
    ctx->pc = 0x7F1B98ECu;
    // 7F1B98EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B98F0:
    ctx->pc = 0x7F1B98F0u;
    ctx->downcount -= 7;
    // 7F1B98F0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B98F4:
    ctx->pc = 0x7F1B98F4u;
    // 7F1B98F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B98F8:
    ctx->pc = 0x7F1B98F8u;
    // 7F1B98F8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B98FC:
    ctx->pc = 0x7F1B98FCu;
    // 7F1B98FC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9900:
    ctx->pc = 0x7F1B9900u;
    // 7F1B9900: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B9904:
    ctx->pc = 0x7F1B9904u;
    // 7F1B9904: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9908:
    ctx->pc = 0x7F1B9908u;
    // 7F1B9908: bl      0x80025A08
    {
            ctx->lr = 0x7F1B990Cu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B990C:
    ctx->pc = 0x7F1B990Cu;
    ctx->downcount -= 4;
    // 7F1B990C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9910:
    ctx->pc = 0x7F1B9910u;
    // 7F1B9910: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9910u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9914:
    ctx->pc = 0x7F1B9914u;
    // 7F1B9914: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9918:
    ctx->pc = 0x7F1B9918u;
    // 7F1B9918: bl      0x7F114738
    {
            ctx->lr = 0x7F1B991Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B991C:
    ctx->pc = 0x7F1B991Cu;
    ctx->downcount -= 4;
    // 7F1B991C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9920:
    ctx->pc = 0x7F1B9920u;
    // 7F1B9920: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9920u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9924:
    ctx->pc = 0x7F1B9924u;
    // 7F1B9924: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9928:
    ctx->pc = 0x7F1B9928u;
    // 7F1B9928: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B992Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B992C:
    ctx->pc = 0x7F1B992Cu;
    ctx->downcount -= 4;
    // 7F1B992C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9930:
    ctx->pc = 0x7F1B9930u;
    // 7F1B9930: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9930u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9934:
    ctx->pc = 0x7F1B9934u;
    // 7F1B9934: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9938:
    ctx->pc = 0x7F1B9938u;
    // 7F1B9938: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B993Cu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B993C:
    ctx->pc = 0x7F1B993Cu;
    ctx->downcount -= 2;
    // 7F1B993C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9940:
    ctx->pc = 0x7F1B9940u;
    // 7F1B9940: bl      0x7F3D3BFC
    {
            ctx->lr = 0x7F1B9944u;
            ctx->pc = 0x7F3D3BFCu;
            return;
    }

label_7F1B9944:
    ctx->pc = 0x7F1B9944u;
    ctx->downcount -= 6;
    // 7F1B9944: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9948:
    ctx->pc = 0x7F1B9948u;
    // 7F1B9948: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B994C:
    ctx->pc = 0x7F1B994Cu;
    // 7F1B994C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9950:
    ctx->pc = 0x7F1B9950u;
    // 7F1B9950: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B9954:
    ctx->pc = 0x7F1B9954u;
    // 7F1B9954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9958:
    ctx->pc = 0x7F1B9958u;
    ctx->downcount -= 7;
    // 7F1B9958: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B995C:
    ctx->pc = 0x7F1B995Cu;
    // 7F1B995C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9960:
    ctx->pc = 0x7F1B9960u;
    // 7F1B9960: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9964:
    ctx->pc = 0x7F1B9964u;
    // 7F1B9964: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9968:
    ctx->pc = 0x7F1B9968u;
    // 7F1B9968: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B996C:
    ctx->pc = 0x7F1B996Cu;
    // 7F1B996C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9970:
    ctx->pc = 0x7F1B9970u;
    // 7F1B9970: bl      0x80025A08
    {
            ctx->lr = 0x7F1B9974u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B9974:
    ctx->pc = 0x7F1B9974u;
    ctx->downcount -= 4;
    // 7F1B9974: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9978:
    ctx->pc = 0x7F1B9978u;
    // 7F1B9978: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9978u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B997C:
    ctx->pc = 0x7F1B997Cu;
    // 7F1B997C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9980:
    ctx->pc = 0x7F1B9980u;
    // 7F1B9980: bl      0x7F114738
    {
            ctx->lr = 0x7F1B9984u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B9984:
    ctx->pc = 0x7F1B9984u;
    ctx->downcount -= 4;
    // 7F1B9984: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9988:
    ctx->pc = 0x7F1B9988u;
    // 7F1B9988: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9988u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B998C:
    ctx->pc = 0x7F1B998Cu;
    // 7F1B998C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9990:
    ctx->pc = 0x7F1B9990u;
    // 7F1B9990: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B9994u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B9994:
    ctx->pc = 0x7F1B9994u;
    ctx->downcount -= 4;
    // 7F1B9994: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9998:
    ctx->pc = 0x7F1B9998u;
    // 7F1B9998: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9998u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B999C:
    ctx->pc = 0x7F1B999Cu;
    // 7F1B999C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B99A0:
    ctx->pc = 0x7F1B99A0u;
    // 7F1B99A0: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B99A4u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B99A4:
    ctx->pc = 0x7F1B99A4u;
    ctx->downcount -= 15;
    // 7F1B99A4: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B99A8:
    ctx->pc = 0x7F1B99A8u;
    // 7F1B99A8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B99AC:
    ctx->pc = 0x7F1B99ACu;
    // 7F1B99AC: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B99B0:
    ctx->pc = 0x7F1B99B0u;
    // 7F1B99B0: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B99B4:
    ctx->pc = 0x7F1B99B4u;
    // 7F1B99B4: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1B99B8:
    ctx->pc = 0x7F1B99B8u;
    // 7F1B99B8: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B99BC:
    ctx->pc = 0x7F1B99BCu;
    // 7F1B99BC: rlwinm r5, r4, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1B99C0:
    ctx->pc = 0x7F1B99C0u;
    // 7F1B99C0: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1B99C4:
    ctx->pc = 0x7F1B99C4u;
    // 7F1B99C4: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B99C8:
    ctx->pc = 0x7F1B99C8u;
    // 7F1B99C8: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1B99CC:
    ctx->pc = 0x7F1B99CCu;
    // 7F1B99CC: lfs     f1, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B99CCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B99D0:
    ctx->pc = 0x7F1B99D0u;
    // 7F1B99D0: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1B99D4:
    ctx->pc = 0x7F1B99D4u;
    // 7F1B99D4: lfs     f2, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B99D4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B99D8:
    ctx->pc = 0x7F1B99D8u;
    // 7F1B99D8: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1B99DC:
    ctx->pc = 0x7F1B99DCu;
    // 7F1B99DC: bl      0x7F3D468C
    {
            ctx->lr = 0x7F1B99E0u;
            ctx->pc = 0x7F3D468Cu;
            return;
    }

label_7F1B99E0:
    ctx->pc = 0x7F1B99E0u;
    ctx->downcount -= 6;
    // 7F1B99E0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B99E4:
    ctx->pc = 0x7F1B99E4u;
    // 7F1B99E4: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B99E8:
    ctx->pc = 0x7F1B99E8u;
    // 7F1B99E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B99EC:
    ctx->pc = 0x7F1B99ECu;
    // 7F1B99EC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B99F0:
    ctx->pc = 0x7F1B99F0u;
    // 7F1B99F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B99F4:
    ctx->pc = 0x7F1B99F4u;
    ctx->downcount -= 7;
    // 7F1B99F4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B99F8:
    ctx->pc = 0x7F1B99F8u;
    // 7F1B99F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B99FC:
    ctx->pc = 0x7F1B99FCu;
    // 7F1B99FC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9A00:
    ctx->pc = 0x7F1B9A00u;
    // 7F1B9A00: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9A04:
    ctx->pc = 0x7F1B9A04u;
    // 7F1B9A04: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B9A08:
    ctx->pc = 0x7F1B9A08u;
    // 7F1B9A08: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1B9A0C:
    ctx->pc = 0x7F1B9A0Cu;
    // 7F1B9A0C: bl      0x80025A08
    {
            ctx->lr = 0x7F1B9A10u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1B9A10:
    ctx->pc = 0x7F1B9A10u;
    ctx->downcount -= 4;
    // 7F1B9A10: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9A14:
    ctx->pc = 0x7F1B9A14u;
    // 7F1B9A14: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9A14u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9A18:
    ctx->pc = 0x7F1B9A18u;
    // 7F1B9A18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9A1C:
    ctx->pc = 0x7F1B9A1Cu;
    // 7F1B9A1C: bl      0x7F114738
    {
            ctx->lr = 0x7F1B9A20u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1B9A20:
    ctx->pc = 0x7F1B9A20u;
    ctx->downcount -= 4;
    // 7F1B9A20: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9A24:
    ctx->pc = 0x7F1B9A24u;
    // 7F1B9A24: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9A24u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9A28:
    ctx->pc = 0x7F1B9A28u;
    // 7F1B9A28: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9A2C:
    ctx->pc = 0x7F1B9A2Cu;
    // 7F1B9A2C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1B9A30u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1B9A30:
    ctx->pc = 0x7F1B9A30u;
    ctx->downcount -= 4;
    // 7F1B9A30: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9A34:
    ctx->pc = 0x7F1B9A34u;
    // 7F1B9A34: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9A34u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9A38:
    ctx->pc = 0x7F1B9A38u;
    // 7F1B9A38: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9A3C:
    ctx->pc = 0x7F1B9A3Cu;
    // 7F1B9A3C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1B9A40u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1B9A40:
    ctx->pc = 0x7F1B9A40u;
    ctx->downcount -= 25;
    // 7F1B9A40: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9A44:
    ctx->pc = 0x7F1B9A44u;
    // 7F1B9A44: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9A48:
    ctx->pc = 0x7F1B9A48u;
    // 7F1B9A48: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B9A4C:
    ctx->pc = 0x7F1B9A4Cu;
    // 7F1B9A4C: lwz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9A50:
    ctx->pc = 0x7F1B9A50u;
    // 7F1B9A50: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1B9A54:
    ctx->pc = 0x7F1B9A54u;
    // 7F1B9A54: rlwinm r8, r4, 16, 0, 15
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1B9A58:
    ctx->pc = 0x7F1B9A58u;
    // 7F1B9A58: lwz     r9, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1B9A5C:
    ctx->pc = 0x7F1B9A5Cu;
    // 7F1B9A5C: rlwinm r6, r0, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F1B9A60:
    ctx->pc = 0x7F1B9A60u;
    // 7F1B9A60: lwz     r7, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1B9A64:
    ctx->pc = 0x7F1B9A64u;
    // 7F1B9A64: or   r0, r9, r5
    {
        ctx->gpr[0] = ctx->gpr[9] | ctx->gpr[5];
    }

label_7F1B9A68:
    ctx->pc = 0x7F1B9A68u;
    // 7F1B9A68: lwz     r5, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9A6C:
    ctx->pc = 0x7F1B9A6Cu;
    // 7F1B9A6C: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B9A70:
    ctx->pc = 0x7F1B9A70u;
    // 7F1B9A70: or   r8, r0, r8
    {
        ctx->gpr[8] = ctx->gpr[0] | ctx->gpr[8];
    }

label_7F1B9A74:
    ctx->pc = 0x7F1B9A74u;
    // 7F1B9A74: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9A78:
    ctx->pc = 0x7F1B9A78u;
    // 7F1B9A78: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1B9A7C:
    ctx->pc = 0x7F1B9A7Cu;
    // 7F1B9A7C: rlwinm r5, r5, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 16u) & 0xFFFF0000u;
    }

label_7F1B9A80:
    ctx->pc = 0x7F1B9A80u;
    // 7F1B9A80: rlwinm r4, r4, 25, 0, 6
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 25u) & 0xFE000000u;
    }

label_7F1B9A84:
    ctx->pc = 0x7F1B9A84u;
    // 7F1B9A84: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1B9A88:
    ctx->pc = 0x7F1B9A88u;
    // 7F1B9A88: rlwinm r0, r0, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 25u) & 0xFE000000u;
    }

label_7F1B9A8C:
    ctx->pc = 0x7F1B9A8Cu;
    // 7F1B9A8C: lwz     r6, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1B9A90:
    ctx->pc = 0x7F1B9A90u;
    // 7F1B9A90: or   r4, r8, r4
    {
        ctx->gpr[4] = ctx->gpr[8] | ctx->gpr[4];
    }

label_7F1B9A94:
    ctx->pc = 0x7F1B9A94u;
    // 7F1B9A94: lfs     f1, 84(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9A94u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9A98:
    ctx->pc = 0x7F1B9A98u;
    // 7F1B9A98: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1B9A9C:
    ctx->pc = 0x7F1B9A9Cu;
    // 7F1B9A9C: lfs     f2, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9A9Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B9AA0:
    ctx->pc = 0x7F1B9AA0u;
    // 7F1B9AA0: bl      0x7F3D637C
    {
            ctx->lr = 0x7F1B9AA4u;
            ctx->pc = 0x7F3D637Cu;
            return;
    }

label_7F1B9AA4:
    ctx->pc = 0x7F1B9AA4u;
    ctx->downcount -= 6;
    // 7F1B9AA4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9AA8:
    ctx->pc = 0x7F1B9AA8u;
    // 7F1B9AA8: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B9AAC:
    ctx->pc = 0x7F1B9AACu;
    // 7F1B9AAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9AB0:
    ctx->pc = 0x7F1B9AB0u;
    // 7F1B9AB0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1B9AB4:
    ctx->pc = 0x7F1B9AB4u;
    // 7F1B9AB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9AB8:
    ctx->pc = 0x7F1B9AB8u;
    ctx->downcount -= 5;
    // 7F1B9AB8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9ABC:
    ctx->pc = 0x7F1B9ABCu;
    // 7F1B9ABC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9AC0:
    ctx->pc = 0x7F1B9AC0u;
    // 7F1B9AC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9AC4:
    ctx->pc = 0x7F1B9AC4u;
    // 7F1B9AC4: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9AC8:
    ctx->pc = 0x7F1B9AC8u;
    // 7F1B9AC8: bl      0x7F19943C
    {
            ctx->lr = 0x7F1B9ACCu;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1B9ACC:
    ctx->pc = 0x7F1B9ACCu;
    ctx->downcount -= 1;
    // 7F1B9ACC: bl      0x7F199494
    {
            ctx->lr = 0x7F1B9AD0u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1B9AD0:
    ctx->pc = 0x7F1B9AD0u;
    ctx->downcount -= 1;
    // 7F1B9AD0: bl      0x7F41ABE0
    {
            ctx->lr = 0x7F1B9AD4u;
            ctx->pc = 0x7F41ABE0u;
            return;
    }

label_7F1B9AD4:
    ctx->pc = 0x7F1B9AD4u;
    ctx->downcount -= 5;
    // 7F1B9AD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9AD8:
    ctx->pc = 0x7F1B9AD8u;
    // 7F1B9AD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9ADC:
    ctx->pc = 0x7F1B9ADCu;
    // 7F1B9ADC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B9AE0:
    ctx->pc = 0x7F1B9AE0u;
    // 7F1B9AE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9AE4:
    ctx->pc = 0x7F1B9AE4u;
    ctx->downcount -= 28;
    // 7F1B9AE4: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9AE8:
    ctx->pc = 0x7F1B9AE8u;
    // 7F1B9AE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9AEC:
    ctx->pc = 0x7F1B9AECu;
    // 7F1B9AEC: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9AF0:
    ctx->pc = 0x7F1B9AF0u;
    // 7F1B9AF0: stfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9AF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1B9AF4:
    ctx->pc = 0x7F1B9AF4u;
    // 7F1B9AF4: psq_st   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9AF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B9AF4u);
        if (ctx->exception) return;
    }

label_7F1B9AF8:
    ctx->pc = 0x7F1B9AF8u;
    // 7F1B9AF8: stfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9AF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1B9AFC:
    ctx->pc = 0x7F1B9AFCu;
    // 7F1B9AFC: psq_st   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9AFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B9AFCu);
        if (ctx->exception) return;
    }

label_7F1B9B00:
    ctx->pc = 0x7F1B9B00u;
    // 7F1B9B00: stfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1B9B04:
    ctx->pc = 0x7F1B9B04u;
    // 7F1B9B04: psq_st   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1B9B04u);
        if (ctx->exception) return;
    }

label_7F1B9B08:
    ctx->pc = 0x7F1B9B08u;
    // 7F1B9B08: stfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1B9B0C:
    ctx->pc = 0x7F1B9B0Cu;
    // 7F1B9B0C: psq_st   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1B9B0Cu);
        if (ctx->exception) return;
    }

label_7F1B9B10:
    ctx->pc = 0x7F1B9B10u;
    // 7F1B9B10: stfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[27]));
    }

label_7F1B9B14:
    ctx->pc = 0x7F1B9B14u;
    // 7F1B9B14: psq_st   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_store_inline(ctx, 27u, ea, false, 0u, false, 0x7F1B9B14u);
        if (ctx->exception) return;
    }

label_7F1B9B18:
    ctx->pc = 0x7F1B9B18u;
    // 7F1B9B18: stmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1B9B1C:
    ctx->pc = 0x7F1B9B1Cu;
    // 7F1B9B1C: lwz     r0, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9B20:
    ctx->pc = 0x7F1B9B20u;
    // 7F1B9B20: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9B24:
    ctx->pc = 0x7F1B9B24u;
    // 7F1B9B24: rlwinm. r0, r0, 0, 28, 28
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

label_7F1B9B28:
    ctx->pc = 0x7F1B9B28u;
    // 7F1B9B28: bc    4, 2, 0x7F1B9D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9D48;
        }
    }

label_7F1B9B2C:
    ctx->pc = 0x7F1B9B2Cu;
    ctx->downcount -= 43;
    // 7F1B9B2C: lwz     r5, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9B30:
    ctx->pc = 0x7F1B9B30u;
    // 7F1B9B30: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B9B34:
    ctx->pc = 0x7F1B9B34u;
    // 7F1B9B34: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B9B38:
    ctx->pc = 0x7F1B9B38u;
    // 7F1B9B38: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9B3C:
    ctx->pc = 0x7F1B9B3Cu;
    // 7F1B9B3C: lha     r7, 130(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(130);
        ctx->gpr[7] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B9B40:
    ctx->pc = 0x7F1B9B40u;
    // 7F1B9B40: addi    r8, r4, 7560
    ctx->gpr[8] = ctx->gpr[4] + (u32)(s32)(7560);

label_7F1B9B44:
    ctx->pc = 0x7F1B9B44u;
    // 7F1B9B44: lha     r9, 70(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(70);
        ctx->gpr[9] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1B9B48:
    ctx->pc = 0x7F1B9B48u;
    // 7F1B9B48: addi    r6, r3, 7568
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(7568);

label_7F1B9B4C:
    ctx->pc = 0x7F1B9B4Cu;
    // 7F1B9B4C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B9B50:
    ctx->pc = 0x7F1B9B50u;
    // 7F1B9B50: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9B54:
    ctx->pc = 0x7F1B9B54u;
    // 7F1B9B54: subf   r7, r9, r7
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[7] = res;
    }

label_7F1B9B58:
    ctx->pc = 0x7F1B9B58u;
    // 7F1B9B58: lfd     f1, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B58u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9B5C:
    ctx->pc = 0x7F1B9B5Cu;
    // 7F1B9B5C: xoris   r7, r7, 0x8000
    ctx->gpr[7] = ctx->gpr[7] ^ (0x8000u << 16);

label_7F1B9B60:
    ctx->pc = 0x7F1B9B60u;
    // 7F1B9B60: lfs     f3, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B60u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1B9B64:
    ctx->pc = 0x7F1B9B64u;
    // 7F1B9B64: stw     r7, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1B9B68:
    ctx->pc = 0x7F1B9B68u;
    // 7F1B9B68: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B9B6C:
    ctx->pc = 0x7F1B9B6Cu;
    // 7F1B9B6C: lfs     f2, 7572(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7572);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B9B70:
    ctx->pc = 0x7F1B9B70u;
    // 7F1B9B70: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9B74:
    ctx->pc = 0x7F1B9B74u;
    // 7F1B9B74: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B74u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9B78:
    ctx->pc = 0x7F1B9B78u;
    // 7F1B9B78: fsubs   f4, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B78u)) return;
    ppc_fsubs(ctx, 4, 0, 1);

label_7F1B9B7C:
    ctx->pc = 0x7F1B9B7Cu;
    // 7F1B9B7C: lfs     f1, 7576(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B7Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9B80:
    ctx->pc = 0x7F1B9B80u;
    // 7F1B9B80: lfs     f0, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B80u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9B84:
    ctx->pc = 0x7F1B9B84u;
    // 7F1B9B84: fmuls   f4, f4, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B84u)) return;
    ppc_fmuls(ctx, 4, 4, 3);

label_7F1B9B88:
    ctx->pc = 0x7F1B9B88u;
    // 7F1B9B88: fmuls   f2, f2, f4
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B88u)) return;
    ppc_fmuls(ctx, 2, 2, 4);

label_7F1B9B8C:
    ctx->pc = 0x7F1B9B8Cu;
    // 7F1B9B8C: fdivs   f30, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B8Cu)) return;
    ppc_fdivs(ctx, 30, 2, 1);

label_7F1B9B90:
    ctx->pc = 0x7F1B9B90u;
    // 7F1B9B90: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9B90u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F1B9B94:
    ctx->pc = 0x7F1B9B94u;
    // 7F1B9B94: bc    4, 0, 0x7F1B9BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9BA0;
        }
    }

label_7F1B9B98:
    ctx->pc = 0x7F1B9B98u;
    ctx->downcount -= 2;
    // 7F1B9B98: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1B9B9C:
    ctx->pc = 0x7F1B9B9Cu;
    // 7F1B9B9C: b       0x7F1B9BA4
    {
            goto label_7F1B9BA4;
    }

label_7F1B9BA0:
    ctx->pc = 0x7F1B9BA0u;
    ctx->downcount -= 1;
    // 7F1B9BA0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1B9BA4:
    ctx->pc = 0x7F1B9BA4u;
    ctx->downcount -= 2;
    // 7F1B9BA4: cmpwi   r0, 0
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

label_7F1B9BA8:
    ctx->pc = 0x7F1B9BA8u;
    // 7F1B9BA8: bc    4, 0, 0x7F1B9BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9BC4;
        }
    }

label_7F1B9BAC:
    ctx->pc = 0x7F1B9BACu;
    ctx->downcount -= 4;
    // 7F1B9BAC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9BB0:
    ctx->pc = 0x7F1B9BB0u;
    // 7F1B9BB0: lfs     f0, 7580(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BB0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7580);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9BB4:
    ctx->pc = 0x7F1B9BB4u;
    // 7F1B9BB4: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BB4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F1B9BB8:
    ctx->pc = 0x7F1B9BB8u;
    // 7F1B9BB8: bc    4, 0, 0x7F1B9BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9BD8;
        }
    }

label_7F1B9BBC:
    ctx->pc = 0x7F1B9BBCu;
    ctx->downcount -= 2;
    // 7F1B9BBC: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BBCu)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F1B9BC0:
    ctx->pc = 0x7F1B9BC0u;
    // 7F1B9BC0: b       0x7F1B9BD8
    {
            goto label_7F1B9BD8;
    }

label_7F1B9BC4:
    ctx->pc = 0x7F1B9BC4u;
    ctx->downcount -= 4;
    // 7F1B9BC4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9BC8:
    ctx->pc = 0x7F1B9BC8u;
    // 7F1B9BC8: lfs     f0, 7584(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9BCC:
    ctx->pc = 0x7F1B9BCCu;
    // 7F1B9BCC: fcmpo   cr0, f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BCCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[30], ctx->fpr[0], true);

label_7F1B9BD0:
    ctx->pc = 0x7F1B9BD0u;
    // 7F1B9BD0: bc    4, 1, 0x7F1B9BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9BD8;
        }
    }

label_7F1B9BD4:
    ctx->pc = 0x7F1B9BD4u;
    ctx->downcount -= 1;
    // 7F1B9BD4: fmr    f30, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BD4u)) return;
    ctx->fpr[30] = ctx->fpr[0];

label_7F1B9BD8:
    ctx->pc = 0x7F1B9BD8u;
    ctx->downcount -= 2;
    // 7F1B9BD8: li      r3, 72
    ctx->gpr[3] = (u32)(s32)(72);

label_7F1B9BDC:
    ctx->pc = 0x7F1B9BDCu;
    // 7F1B9BDC: bl      0x7F0B9A40
    {
            ctx->lr = 0x7F1B9BE0u;
            ctx->pc = 0x7F0B9A40u;
            return;
    }

label_7F1B9BE0:
    ctx->pc = 0x7F1B9BE0u;
    ctx->downcount -= 13;
    // 7F1B9BE0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9BE4:
    ctx->pc = 0x7F1B9BE4u;
    // 7F1B9BE4: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B9BE8:
    ctx->pc = 0x7F1B9BE8u;
    // 7F1B9BE8: lfs     f0, 7588(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BE8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7588);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9BEC:
    ctx->pc = 0x7F1B9BECu;
    // 7F1B9BEC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B9BF0:
    ctx->pc = 0x7F1B9BF0u;
    // 7F1B9BF0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9BF4:
    ctx->pc = 0x7F1B9BF4u;
    // 7F1B9BF4: lfs     f31, 7592(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BF4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7592);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_7F1B9BF8:
    ctx->pc = 0x7F1B9BF8u;
    // 7F1B9BF8: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BF8u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B9BFC:
    ctx->pc = 0x7F1B9BFCu;
    // 7F1B9BFC: lfs     f28, 7604(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9BFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F1B9C00:
    ctx->pc = 0x7F1B9C00u;
    // 7F1B9C00: lfs     f29, 7596(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7596);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F1B9C04:
    ctx->pc = 0x7F1B9C04u;
    // 7F1B9C04: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_7F1B9C08:
    ctx->pc = 0x7F1B9C08u;
    // 7F1B9C08: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_7F1B9C0C:
    ctx->pc = 0x7F1B9C0Cu;
    // 7F1B9C0C: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B9C10:
    ctx->pc = 0x7F1B9C10u;
    // 7F1B9C10: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B9C14:
    ctx->downcount -= 7;
    // 7F1B9C14: addi    r30, r27, 100
    ctx->gpr[30] = ctx->gpr[27] + (u32)(s32)(100);

label_7F1B9C18:
    ctx->pc = 0x7F1B9C18u;
    // 7F1B9C18: lfsx    f0, r28, r30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C18u)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9C1C:
    ctx->pc = 0x7F1B9C1Cu;
    // 7F1B9C1C: fadds   f0, f0, f30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C1Cu)) return;
    ppc_fadds(ctx, 0, 0, 30);

label_7F1B9C20:
    ctx->pc = 0x7F1B9C20u;
    // 7F1B9C20: stfsx    f0, r28, r30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C20u)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B9C24:
    ctx->pc = 0x7F1B9C24u;
    // 7F1B9C24: lfsx    f2, r28, r30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C24u)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B9C28:
    ctx->pc = 0x7F1B9C28u;
    // 7F1B9C28: fcmpo   cr0, f2, f31
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C28u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[31], true);

label_7F1B9C2C:
    // 7F1B9C2C: bc    4, 1, 0x7F1B9C5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9C5C;
        }
    }

label_7F1B9C30:
    ctx->downcount -= 11;
    // 7F1B9C30: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9C34:
    // 7F1B9C34: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B9C38:
    // 7F1B9C38: addi    r5, r3, 7592
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7592);

label_7F1B9C3C:
    ctx->pc = 0x7F1B9C3Cu;
    // 7F1B9C3C: lfs     f1, 7596(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C3Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7596);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9C40:
    ctx->pc = 0x7F1B9C40u;
    // 7F1B9C40: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C40u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9C44:
    // 7F1B9C44: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9C48:
    ctx->pc = 0x7F1B9C48u;
    // 7F1B9C48: fsubs   f2, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C48u)) return;
    ppc_fsubs(ctx, 2, 2, 0);

label_7F1B9C4C:
    ctx->pc = 0x7F1B9C4Cu;
    // 7F1B9C4C: lfs     f0, 7600(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9C50:
    ctx->pc = 0x7F1B9C50u;
    // 7F1B9C50: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C50u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1B9C54:
    ctx->pc = 0x7F1B9C54u;
    // 7F1B9C54: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C54u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1B9C58:
    ctx->pc = 0x7F1B9C58u;
    // 7F1B9C58: stfsx    f0, r28, r30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C58u)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B9C5C:
    ctx->pc = 0x7F1B9C5Cu;
    ctx->downcount -= 3;
    // 7F1B9C5C: lfsx    f2, r28, r30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C5Cu)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B9C60:
    ctx->pc = 0x7F1B9C60u;
    // 7F1B9C60: fcmpo   cr0, f2, f28
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C60u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[28], true);

label_7F1B9C64:
    // 7F1B9C64: bc    4, 0, 0x7F1B9C90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9C90;
        }
    }

label_7F1B9C68:
    ctx->downcount -= 10;
    // 7F1B9C68: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B9C6C:
    // 7F1B9C6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9C70:
    ctx->pc = 0x7F1B9C70u;
    // 7F1B9C70: lfs     f1, 7604(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C70u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9C74:
    // 7F1B9C74: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1B9C78:
    ctx->pc = 0x7F1B9C78u;
    // 7F1B9C78: lfs     f0, 7596(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C78u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7596);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9C7C:
    ctx->pc = 0x7F1B9C7Cu;
    // 7F1B9C7C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C7Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1B9C80:
    ctx->pc = 0x7F1B9C80u;
    // 7F1B9C80: lfs     f2, 7600(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C80u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B9C84:
    ctx->pc = 0x7F1B9C84u;
    // 7F1B9C84: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C84u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1B9C88:
    ctx->pc = 0x7F1B9C88u;
    // 7F1B9C88: fadds   f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C88u)) return;
    ppc_fadds(ctx, 0, 2, 0);

label_7F1B9C8C:
    ctx->pc = 0x7F1B9C8Cu;
    // 7F1B9C8C: stfsx    f0, r28, r30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C8Cu)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B9C90:
    ctx->pc = 0x7F1B9C90u;
    ctx->downcount -= 3;
    // 7F1B9C90: lfsx    f0, r28, r30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C90u)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9C94:
    ctx->pc = 0x7F1B9C94u;
    // 7F1B9C94: fsubs   f1, f0, f29
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C94u)) return;
    ppc_fsubs(ctx, 1, 0, 29);

label_7F1B9C98:
    // 7F1B9C98: bl      0x7F1B9D84
    {
            ctx->lr = 0x7F1B9C9Cu;
            goto label_7F1B9D84;
    }

label_7F1B9C9C:
    ctx->pc = 0x7F1B9C9Cu;
    ctx->downcount -= 8;
    // 7F1B9C9C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B9C9Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B9CA0:
    ctx->pc = 0x7F1B9CA0u;
    // 7F1B9CA0: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9CA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B9CA4:
    ctx->pc = 0x7F1B9CA4u;
    // 7F1B9CA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9CA8:
    // 7F1B9CA8: srawi r0, r0, 1
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

label_7F1B9CAC:
    // 7F1B9CAC: addze  r0, r0
    {
        u32 a = ctx->gpr[0];
        u64 wide = (u64)a + ((ctx->xer >> 29) & 1u);
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_7F1B9CB0:
    // 7F1B9CB0: subfic  r26, r0, 64
    {
        u64 res = (u64)(u32)(s32)(64) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[26] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_7F1B9CB4:
    // 7F1B9CB4: cmpwi   r26, 0
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

label_7F1B9CB8:
    // 7F1B9CB8: bc    4, 1, 0x7F1B9D38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9D38;
        }
    }

label_7F1B9CBC:
    ctx->downcount -= 12;
    // 7F1B9CBC: addi    r3, r29, 8
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(8);

label_7F1B9CC0:
    // 7F1B9CC0: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B9CC4:
    // 7F1B9CC4: rlwinm r0, r3, 28, 0, 3
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 28u) & 0xF0000000u;
    }

label_7F1B9CC8:
    ctx->pc = 0x7F1B9CC8u;
    // 7F1B9CC8: lfsx    f27, r28, r30
    if (!ppc_fp_available_inline(ctx, 0x7F1B9CC8u)) return;
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[30];
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[27] = value;
        ctx->ps1[27] = value;
    }

label_7F1B9CCC:
    // 7F1B9CCC: rlwinm r5, r3, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[3], 1u) & 0x00000001u;
    }

label_7F1B9CD0:
    // 7F1B9CD0: addi    r4, r4, -6352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-6352);

label_7F1B9CD4:
    // 7F1B9CD4: subf   r0, r5, r0
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1B9CD8:
    // 7F1B9CD8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9CDC:
    // 7F1B9CDC: rlwinm r0, r0, 4, 0, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFFFu;
    }

label_7F1B9CE0:
    // 7F1B9CE0: add   r5, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_7F1B9CE4:
    // 7F1B9CE4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B9CE8:
    // 7F1B9CE8: bl      0x8001258C
    {
            ctx->lr = 0x7F1B9CECu;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B9CEC:
    ctx->pc = 0x7F1B9CECu;
    ctx->downcount -= 8;
    // 7F1B9CEC: fctiwz    f0, f27
    if (!ppc_fp_available_inline(ctx, 0x7F1B9CECu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[27], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B9CF0:
    ctx->pc = 0x7F1B9CF0u;
    // 7F1B9CF0: lwz     r3, 676(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9CF4:
    // 7F1B9CF4: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1B9CF8:
    // 7F1B9CF8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9CFC:
    // 7F1B9CFC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B9D00:
    ctx->pc = 0x7F1B9D00u;
    // 7F1B9D00: stfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B9D04:
    ctx->pc = 0x7F1B9D04u;
    // 7F1B9D04: lwz     r5, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9D08:
    // 7F1B9D08: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B9D0Cu;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B9D0C:
    ctx->pc = 0x7F1B9D0Cu;
    ctx->downcount -= 7;
    // 7F1B9D0C: lwz     r3, 676(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9D10:
    // 7F1B9D10: or   r8, r26, r26
    {
        ctx->gpr[8] = ctx->gpr[26] | ctx->gpr[26];
    }

label_7F1B9D14:
    // 7F1B9D14: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9D18:
    // 7F1B9D18: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B9D1C:
    // 7F1B9D1C: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B9D20:
    // 7F1B9D20: li      r7, 43
    ctx->gpr[7] = (u32)(s32)(43);

label_7F1B9D24:
    // 7F1B9D24: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B9D28u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B9D28:
    ctx->pc = 0x7F1B9D28u;
    ctx->downcount -= 4;
    // 7F1B9D28: lwz     r3, 676(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9D2C:
    // 7F1B9D2C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9D30:
    // 7F1B9D30: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9D34:
    // 7F1B9D34: bl      0x7F0BA3C8
    {
            ctx->lr = 0x7F1B9D38u;
            ctx->pc = 0x7F0BA3C8u;
            return;
    }

label_7F1B9D38:
    ctx->downcount -= 4;
    // 7F1B9D38: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_7F1B9D3C:
    // 7F1B9D3C: addi    r27, r27, 36
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(36);

label_7F1B9D40:
    // 7F1B9D40: cmpwi   r29, 16
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1B9D44:
    // 7F1B9D44: bc    12, 0, 0x7F1B9C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B9C14u;
                return;
            }
            goto label_7F1B9C14;
        }
    }

label_7F1B9D48:
    ctx->pc = 0x7F1B9D48u;
    ctx->downcount -= 26;
    // 7F1B9D48: psq_l   f31, 120(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x7F1B9D48u);
        if (ctx->exception) return;
    }

label_7F1B9D4C:
    ctx->pc = 0x7F1B9D4Cu;
    // 7F1B9D4C: lfd     f31, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9D50:
    ctx->pc = 0x7F1B9D50u;
    // 7F1B9D50: psq_l   f30, 104(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x7F1B9D50u);
        if (ctx->exception) return;
    }

label_7F1B9D54:
    ctx->pc = 0x7F1B9D54u;
    // 7F1B9D54: lfd     f30, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9D58:
    ctx->pc = 0x7F1B9D58u;
    // 7F1B9D58: psq_l   f29, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 29u, ea, false, 0u, false, 0x7F1B9D58u);
        if (ctx->exception) return;
    }

label_7F1B9D5C:
    ctx->pc = 0x7F1B9D5Cu;
    // 7F1B9D5C: lfd     f29, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[29] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9D60:
    ctx->pc = 0x7F1B9D60u;
    // 7F1B9D60: psq_l   f28, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 28u, ea, false, 0u, false, 0x7F1B9D60u);
        if (ctx->exception) return;
    }

label_7F1B9D64:
    ctx->pc = 0x7F1B9D64u;
    // 7F1B9D64: lfd     f28, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[28] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9D68:
    ctx->pc = 0x7F1B9D68u;
    // 7F1B9D68: psq_l   f27, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 27u, ea, false, 0u, false, 0x7F1B9D68u);
        if (ctx->exception) return;
    }

label_7F1B9D6C:
    ctx->pc = 0x7F1B9D6Cu;
    // 7F1B9D6C: lfd     f27, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D6Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[27] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9D70:
    ctx->pc = 0x7F1B9D70u;
    // 7F1B9D70: lmw     r26, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1B9D74:
    ctx->pc = 0x7F1B9D74u;
    // 7F1B9D74: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9D78:
    ctx->pc = 0x7F1B9D78u;
    // 7F1B9D78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9D7C:
    ctx->pc = 0x7F1B9D7Cu;
    // 7F1B9D7C: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_7F1B9D80:
    ctx->pc = 0x7F1B9D80u;
    // 7F1B9D80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9D84:
    ctx->pc = 0x7F1B9D84u;
    ctx->downcount -= 8;
    // 7F1B9D84: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9D88:
    ctx->pc = 0x7F1B9D88u;
    // 7F1B9D88: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D88u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B9D8C:
    ctx->pc = 0x7F1B9D8Cu;
    // 7F1B9D8C: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9D90:
    ctx->pc = 0x7F1B9D90u;
    // 7F1B9D90: rlwinm r0, r0, 0, 1, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x7FFFFFFFu;
    }

label_7F1B9D94:
    ctx->pc = 0x7F1B9D94u;
    // 7F1B9D94: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9D98:
    ctx->pc = 0x7F1B9D98u;
    // 7F1B9D98: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9D98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9D9C:
    ctx->pc = 0x7F1B9D9Cu;
    // 7F1B9D9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B9DA0:
    ctx->pc = 0x7F1B9DA0u;
    // 7F1B9DA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9DA4:
    ctx->pc = 0x7F1B9DA4u;
    ctx->downcount -= 8;
    // 7F1B9DA4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9DA8:
    ctx->pc = 0x7F1B9DA8u;
    // 7F1B9DA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9DAC:
    ctx->pc = 0x7F1B9DACu;
    // 7F1B9DAC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9DB0:
    ctx->pc = 0x7F1B9DB0u;
    // 7F1B9DB0: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B9DB4:
    ctx->pc = 0x7F1B9DB4u;
    // 7F1B9DB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9DB8:
    ctx->pc = 0x7F1B9DB8u;
    // 7F1B9DB8: lwz     r0, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9DBC:
    ctx->pc = 0x7F1B9DBCu;
    // 7F1B9DBC: rlwinm. r0, r0, 0, 28, 28
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

label_7F1B9DC0:
    ctx->pc = 0x7F1B9DC0u;
    // 7F1B9DC0: bc    4, 2, 0x7F1B9EB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9EB8;
        }
    }

label_7F1B9DC4:
    ctx->pc = 0x7F1B9DC4u;
    ctx->downcount -= 10;
    // 7F1B9DC4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B9DC8:
    ctx->pc = 0x7F1B9DC8u;
    // 7F1B9DC8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9DCC:
    ctx->pc = 0x7F1B9DCCu;
    // 7F1B9DCC: lfs     f2, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DCCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1B9DD0:
    ctx->pc = 0x7F1B9DD0u;
    // 7F1B9DD0: lfs     f1, 7608(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DD0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9DD4:
    ctx->pc = 0x7F1B9DD4u;
    // 7F1B9DD4: lfs     f0, 7612(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7612);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9DD8:
    ctx->pc = 0x7F1B9DD8u;
    // 7F1B9DD8: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DD8u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1B9DDC:
    ctx->pc = 0x7F1B9DDCu;
    // 7F1B9DDC: stfs     f1, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DDCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B9DE0:
    ctx->pc = 0x7F1B9DE0u;
    // 7F1B9DE0: lfs     f1, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9DE4:
    ctx->pc = 0x7F1B9DE4u;
    // 7F1B9DE4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DE4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1B9DE8:
    ctx->pc = 0x7F1B9DE8u;
    // 7F1B9DE8: bc    4, 1, 0x7F1B9E24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9E24;
        }
    }

label_7F1B9DEC:
    ctx->pc = 0x7F1B9DECu;
    ctx->downcount -= 1;
    // 7F1B9DEC: bl      0x7F1B9ECC
    {
            ctx->lr = 0x7F1B9DF0u;
            goto label_7F1B9ECC;
    }

label_7F1B9DF0:
    ctx->pc = 0x7F1B9DF0u;
    ctx->downcount -= 6;
    // 7F1B9DF0: stfs     f1, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1B9DF4:
    ctx->pc = 0x7F1B9DF4u;
    // 7F1B9DF4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9DF8:
    ctx->pc = 0x7F1B9DF8u;
    // 7F1B9DF8: lfs     f0, 7608(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9DFC:
    ctx->pc = 0x7F1B9DFCu;
    // 7F1B9DFC: lfs     f1, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9DFCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9E00:
    ctx->pc = 0x7F1B9E00u;
    // 7F1B9E00: fcmpu   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E00u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], false);

label_7F1B9E04:
    ctx->pc = 0x7F1B9E04u;
    // 7F1B9E04: bc    4, 2, 0x7F1B9E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9E18;
        }
    }

label_7F1B9E08:
    ctx->pc = 0x7F1B9E08u;
    ctx->downcount -= 4;
    // 7F1B9E08: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9E0C:
    ctx->pc = 0x7F1B9E0Cu;
    // 7F1B9E0C: lfs     f0, 7616(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7616);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9E10:
    ctx->pc = 0x7F1B9E10u;
    // 7F1B9E10: fsubs   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E10u)) return;
    ppc_fsubs(ctx, 0, 1, 0);

label_7F1B9E14:
    ctx->pc = 0x7F1B9E14u;
    // 7F1B9E14: stfs     f0, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E14u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B9E18:
    ctx->pc = 0x7F1B9E18u;
    ctx->downcount -= 3;
    // 7F1B9E18: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9E1C:
    ctx->pc = 0x7F1B9E1Cu;
    // 7F1B9E1C: lfs     f0, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E1Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9E20:
    ctx->pc = 0x7F1B9E20u;
    // 7F1B9E20: stfs     f0, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1B9E24:
    ctx->pc = 0x7F1B9E24u;
    ctx->downcount -= 20;
    // 7F1B9E24: lwz     r4, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B9E28:
    ctx->pc = 0x7F1B9E28u;
    // 7F1B9E28: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B9E2C:
    ctx->pc = 0x7F1B9E2Cu;
    // 7F1B9E2C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9E30:
    ctx->pc = 0x7F1B9E30u;
    // 7F1B9E30: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9E34:
    ctx->pc = 0x7F1B9E34u;
    // 7F1B9E34: lfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E34u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9E38:
    ctx->pc = 0x7F1B9E38u;
    // 7F1B9E38: lis     r5, 32584
    ctx->gpr[5] = ((u32)(s32)(32584) << 16);

label_7F1B9E3C:
    ctx->pc = 0x7F1B9E3Cu;
    // 7F1B9E3C: lfd     f2, 7560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E3Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7560);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9E40:
    ctx->pc = 0x7F1B9E40u;
    // 7F1B9E40: addi    r4, r5, -6344
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-6344);

label_7F1B9E44:
    ctx->pc = 0x7F1B9E44u;
    // 7F1B9E44: fctiwz    f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E44u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1B9E48:
    ctx->pc = 0x7F1B9E48u;
    // 7F1B9E48: lfs     f0, 88(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9E4C:
    ctx->pc = 0x7F1B9E4Cu;
    // 7F1B9E4C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9E50:
    ctx->pc = 0x7F1B9E50u;
    // 7F1B9E50: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1B9E54:
    ctx->pc = 0x7F1B9E54u;
    // 7F1B9E54: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9E58:
    ctx->pc = 0x7F1B9E58u;
    // 7F1B9E58: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1B9E5C:
    ctx->pc = 0x7F1B9E5Cu;
    // 7F1B9E5C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9E60:
    ctx->pc = 0x7F1B9E60u;
    // 7F1B9E60: lfd     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9E64:
    ctx->pc = 0x7F1B9E64u;
    // 7F1B9E64: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E64u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1B9E68:
    ctx->pc = 0x7F1B9E68u;
    // 7F1B9E68: fadds   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9E68u)) return;
    ppc_fadds(ctx, 1, 1, 0);

label_7F1B9E6C:
    ctx->pc = 0x7F1B9E6Cu;
    // 7F1B9E6C: creqv   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (~(a ^ b)) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B9E70:
    ctx->pc = 0x7F1B9E70u;
    // 7F1B9E70: bl      0x8001258C
    {
            ctx->lr = 0x7F1B9E74u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B9E74:
    ctx->pc = 0x7F1B9E74u;
    ctx->downcount -= 6;
    // 7F1B9E74: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9E78:
    ctx->pc = 0x7F1B9E78u;
    // 7F1B9E78: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9E7C:
    ctx->pc = 0x7F1B9E7Cu;
    // 7F1B9E7C: li      r5, 80
    ctx->gpr[5] = (u32)(s32)(80);

label_7F1B9E80:
    ctx->pc = 0x7F1B9E80u;
    // 7F1B9E80: li      r6, 315
    ctx->gpr[6] = (u32)(s32)(315);

label_7F1B9E84:
    ctx->pc = 0x7F1B9E84u;
    // 7F1B9E84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B9E88:
    ctx->pc = 0x7F1B9E88u;
    // 7F1B9E88: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B9E8Cu;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B9E8C:
    ctx->pc = 0x7F1B9E8Cu;
    ctx->downcount -= 7;
    // 7F1B9E8C: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9E90:
    ctx->pc = 0x7F1B9E90u;
    // 7F1B9E90: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9E94:
    ctx->pc = 0x7F1B9E94u;
    // 7F1B9E94: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B9E98:
    ctx->pc = 0x7F1B9E98u;
    // 7F1B9E98: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B9E9C:
    ctx->pc = 0x7F1B9E9Cu;
    // 7F1B9E9C: li      r7, 43
    ctx->gpr[7] = (u32)(s32)(43);

label_7F1B9EA0:
    ctx->pc = 0x7F1B9EA0u;
    // 7F1B9EA0: li      r8, 100
    ctx->gpr[8] = (u32)(s32)(100);

label_7F1B9EA4:
    ctx->pc = 0x7F1B9EA4u;
    // 7F1B9EA4: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B9EA8u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B9EA8:
    ctx->pc = 0x7F1B9EA8u;
    ctx->downcount -= 4;
    // 7F1B9EA8: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9EAC:
    ctx->pc = 0x7F1B9EACu;
    // 7F1B9EAC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9EB0:
    ctx->pc = 0x7F1B9EB0u;
    // 7F1B9EB0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9EB4:
    ctx->pc = 0x7F1B9EB4u;
    // 7F1B9EB4: bl      0x7F0BA0B4
    {
            ctx->lr = 0x7F1B9EB8u;
            ctx->pc = 0x7F0BA0B4u;
            return;
    }

label_7F1B9EB8:
    ctx->pc = 0x7F1B9EB8u;
    ctx->downcount -= 6;
    // 7F1B9EB8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9EBC:
    ctx->pc = 0x7F1B9EBCu;
    // 7F1B9EBC: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B9EC0:
    ctx->pc = 0x7F1B9EC0u;
    // 7F1B9EC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9EC4:
    ctx->pc = 0x7F1B9EC4u;
    // 7F1B9EC4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B9EC8:
    ctx->pc = 0x7F1B9EC8u;
    // 7F1B9EC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9ECC:
    ctx->pc = 0x7F1B9ECCu;
    ctx->downcount -= 4;
    // 7F1B9ECC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9ED0:
    ctx->pc = 0x7F1B9ED0u;
    // 7F1B9ED0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9ED4:
    ctx->pc = 0x7F1B9ED4u;
    // 7F1B9ED4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9ED8:
    ctx->pc = 0x7F1B9ED8u;
    // 7F1B9ED8: bl      0x7F1B9F14
    {
            ctx->lr = 0x7F1B9EDCu;
            goto label_7F1B9F14;
    }

label_7F1B9EDC:
    ctx->pc = 0x7F1B9EDCu;
    ctx->downcount -= 31;
    // 7F1B9EDC: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1B9EE0:
    ctx->pc = 0x7F1B9EE0u;
    // 7F1B9EE0: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B9EE4:
    ctx->pc = 0x7F1B9EE4u;
    // 7F1B9EE4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1B9EE8:
    ctx->pc = 0x7F1B9EE8u;
    // 7F1B9EE8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1B9EEC:
    ctx->pc = 0x7F1B9EECu;
    // 7F1B9EEC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9EF0:
    ctx->pc = 0x7F1B9EF0u;
    // 7F1B9EF0: lfd     f2, 7624(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9EF0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7624);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9EF4:
    ctx->pc = 0x7F1B9EF4u;
    // 7F1B9EF4: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9EF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1B9EF8:
    ctx->pc = 0x7F1B9EF8u;
    // 7F1B9EF8: lfs     f0, 7620(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9EF8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7620);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9EFC:
    ctx->pc = 0x7F1B9EFCu;
    // 7F1B9EFC: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1B9EFCu)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1B9F00:
    ctx->pc = 0x7F1B9F00u;
    // 7F1B9F00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9F04:
    ctx->pc = 0x7F1B9F04u;
    // 7F1B9F04: fdivs   f1, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9F04u)) return;
    ppc_fdivs(ctx, 1, 1, 0);

label_7F1B9F08:
    ctx->pc = 0x7F1B9F08u;
    // 7F1B9F08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9F0C:
    ctx->pc = 0x7F1B9F0Cu;
    // 7F1B9F0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1B9F10:
    ctx->pc = 0x7F1B9F10u;
    // 7F1B9F10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9F14:
    ctx->pc = 0x7F1B9F14u;
    ctx->downcount -= 13;
    // 7F1B9F14: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1B9F18:
    ctx->pc = 0x7F1B9F18u;
    // 7F1B9F18: lis     r3, 23897
    ctx->gpr[3] = ((u32)(s32)(23897) << 16);

label_7F1B9F1C:
    ctx->pc = 0x7F1B9F1Cu;
    // 7F1B9F1C: addi    r5, r4, -23112
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(-23112);

label_7F1B9F20:
    ctx->pc = 0x7F1B9F20u;
    // 7F1B9F20: lwz     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1B9F24:
    ctx->pc = 0x7F1B9F24u;
    // 7F1B9F24: addi    r0, r3, -29851
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-29851);

label_7F1B9F28:
    ctx->pc = 0x7F1B9F28u;
    // 7F1B9F28: mullw   r3, r4, r0
    {
        s64 product = (s64)(s32)ctx->gpr[4] * (s64)(s32)ctx->gpr[0];
        ctx->gpr[3] = (u32)product;
    }

label_7F1B9F2C:
    ctx->pc = 0x7F1B9F2Cu;
    // 7F1B9F2C: addi    r3, r3, 1
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1B9F30:
    ctx->pc = 0x7F1B9F30u;
    // 7F1B9F30: stw     r3, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1B9F34:
    ctx->pc = 0x7F1B9F34u;
    // 7F1B9F34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9F38:
    ctx->pc = 0x7F1B9F38u;
    ctx->downcount -= 8;
    // 7F1B9F38: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9F3C:
    ctx->pc = 0x7F1B9F3Cu;
    // 7F1B9F3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9F40:
    ctx->pc = 0x7F1B9F40u;
    // 7F1B9F40: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9F44:
    ctx->pc = 0x7F1B9F44u;
    // 7F1B9F44: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1B9F48:
    ctx->pc = 0x7F1B9F48u;
    // 7F1B9F48: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1B9F4C:
    ctx->pc = 0x7F1B9F4Cu;
    // 7F1B9F4C: lwz     r0, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9F50:
    ctx->pc = 0x7F1B9F50u;
    // 7F1B9F50: rlwinm. r0, r0, 0, 28, 28
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

label_7F1B9F54:
    ctx->pc = 0x7F1B9F54u;
    // 7F1B9F54: bc    4, 2, 0x7F1B9FDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1B9FDC;
        }
    }

label_7F1B9F58:
    ctx->pc = 0x7F1B9F58u;
    ctx->downcount -= 16;
    // 7F1B9F58: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9F5C:
    ctx->pc = 0x7F1B9F5Cu;
    // 7F1B9F5C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1B9F60:
    ctx->pc = 0x7F1B9F60u;
    // 7F1B9F60: addi    r4, r3, -6336
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6336);

label_7F1B9F64:
    ctx->pc = 0x7F1B9F64u;
    // 7F1B9F64: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9F64u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1B9F68:
    ctx->pc = 0x7F1B9F68u;
    // 7F1B9F68: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9F6C:
    ctx->pc = 0x7F1B9F6Cu;
    // 7F1B9F6C: lfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9F6Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1B9F70:
    ctx->pc = 0x7F1B9F70u;
    // 7F1B9F70: fctiwz    f1, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1B9F70u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[1] = dolrecomp_f64_from_bits(result); }

label_7F1B9F74:
    ctx->pc = 0x7F1B9F74u;
    // 7F1B9F74: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1B9F74u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1B9F78:
    ctx->pc = 0x7F1B9F78u;
    // 7F1B9F78: stfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_7F1B9F7C:
    ctx->pc = 0x7F1B9F7Cu;
    // 7F1B9F7C: stfd     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1B9F7Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1B9F80:
    ctx->pc = 0x7F1B9F80u;
    // 7F1B9F80: lwz     r5, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1B9F84:
    ctx->pc = 0x7F1B9F84u;
    // 7F1B9F84: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9F88:
    ctx->pc = 0x7F1B9F88u;
    // 7F1B9F88: rlwinm r5, r5, 0, 21, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x000007FFu;
    }

label_7F1B9F8C:
    ctx->pc = 0x7F1B9F8Cu;
    // 7F1B9F8C: rlwinm r6, r0, 0, 21, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000007FFu;
    }

label_7F1B9F90:
    ctx->pc = 0x7F1B9F90u;
    // 7F1B9F90: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1B9F94:
    ctx->pc = 0x7F1B9F94u;
    // 7F1B9F94: bl      0x8001258C
    {
            ctx->lr = 0x7F1B9F98u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1B9F98:
    ctx->pc = 0x7F1B9F98u;
    ctx->downcount -= 6;
    // 7F1B9F98: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9F9C:
    ctx->pc = 0x7F1B9F9Cu;
    // 7F1B9F9C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9FA0:
    ctx->pc = 0x7F1B9FA0u;
    // 7F1B9FA0: li      r5, 70
    ctx->gpr[5] = (u32)(s32)(70);

label_7F1B9FA4:
    ctx->pc = 0x7F1B9FA4u;
    // 7F1B9FA4: li      r6, 100
    ctx->gpr[6] = (u32)(s32)(100);

label_7F1B9FA8:
    ctx->pc = 0x7F1B9FA8u;
    // 7F1B9FA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1B9FAC:
    ctx->pc = 0x7F1B9FACu;
    // 7F1B9FAC: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1B9FB0u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1B9FB0:
    ctx->pc = 0x7F1B9FB0u;
    ctx->downcount -= 7;
    // 7F1B9FB0: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9FB4:
    ctx->pc = 0x7F1B9FB4u;
    // 7F1B9FB4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9FB8:
    ctx->pc = 0x7F1B9FB8u;
    // 7F1B9FB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1B9FBC:
    ctx->pc = 0x7F1B9FBCu;
    // 7F1B9FBC: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1B9FC0:
    ctx->pc = 0x7F1B9FC0u;
    // 7F1B9FC0: li      r7, 43
    ctx->gpr[7] = (u32)(s32)(43);

label_7F1B9FC4:
    ctx->pc = 0x7F1B9FC4u;
    // 7F1B9FC4: li      r8, 100
    ctx->gpr[8] = (u32)(s32)(100);

label_7F1B9FC8:
    ctx->pc = 0x7F1B9FC8u;
    // 7F1B9FC8: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1B9FCCu;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1B9FCC:
    ctx->pc = 0x7F1B9FCCu;
    ctx->downcount -= 4;
    // 7F1B9FCC: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1B9FD0:
    ctx->pc = 0x7F1B9FD0u;
    // 7F1B9FD0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1B9FD4:
    ctx->pc = 0x7F1B9FD4u;
    // 7F1B9FD4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1B9FD8:
    ctx->pc = 0x7F1B9FD8u;
    // 7F1B9FD8: bl      0x7F0BA0B4
    {
            ctx->lr = 0x7F1B9FDCu;
            ctx->pc = 0x7F0BA0B4u;
            return;
    }

label_7F1B9FDC:
    ctx->pc = 0x7F1B9FDCu;
    ctx->downcount -= 6;
    // 7F1B9FDC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1B9FE0:
    ctx->pc = 0x7F1B9FE0u;
    // 7F1B9FE0: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1B9FE4:
    ctx->pc = 0x7F1B9FE4u;
    // 7F1B9FE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1B9FE8:
    ctx->pc = 0x7F1B9FE8u;
    // 7F1B9FE8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_7F1B9FEC:
    ctx->pc = 0x7F1B9FECu;
    // 7F1B9FEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1B9FF0:
    ctx->pc = 0x7F1B9FF0u;
    ctx->downcount -= 8;
    // 7F1B9FF0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1B9FF4:
    ctx->pc = 0x7F1B9FF4u;
    // 7F1B9FF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1B9FF8:
    ctx->pc = 0x7F1B9FF8u;
    // 7F1B9FF8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1B9FFC:
    ctx->pc = 0x7F1B9FFCu;
    // 7F1B9FFC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BA000:
    ctx->pc = 0x7F1BA000u;
    // 7F1BA000: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA004:
    ctx->pc = 0x7F1BA004u;
    // 7F1BA004: lwz     r0, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA008:
    ctx->pc = 0x7F1BA008u;
    // 7F1BA008: rlwinm. r0, r0, 0, 28, 28
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

label_7F1BA00C:
    ctx->pc = 0x7F1BA00Cu;
    // 7F1BA00C: bc    4, 2, 0x7F1BA084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA084;
        }
    }

label_7F1BA010:
    ctx->pc = 0x7F1BA010u;
    ctx->downcount -= 1;
    // 7F1BA010: bl      0x80024A8C
    {
            ctx->lr = 0x7F1BA014u;
            ctx->pc = 0x80024A8Cu;
            return;
    }

label_7F1BA014:
    ctx->pc = 0x7F1BA014u;
    ctx->downcount -= 2;
    // 7F1BA014: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1BA018:
    ctx->pc = 0x7F1BA018u;
    // 7F1BA018: bl      0x80024CAC
    {
            ctx->lr = 0x7F1BA01Cu;
            ctx->pc = 0x80024CACu;
            return;
    }

label_7F1BA01C:
    ctx->pc = 0x7F1BA01Cu;
    ctx->downcount -= 6;
    // 7F1BA01C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BA020:
    ctx->pc = 0x7F1BA020u;
    // 7F1BA020: lwz     r5, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BA024:
    ctx->pc = 0x7F1BA024u;
    // 7F1BA024: addi    r4, r3, -6316
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-6316);

label_7F1BA028:
    ctx->pc = 0x7F1BA028u;
    // 7F1BA028: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BA02C:
    ctx->pc = 0x7F1BA02Cu;
    // 7F1BA02C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_7F1BA030:
    ctx->pc = 0x7F1BA030u;
    // 7F1BA030: bl      0x8001258C
    {
            ctx->lr = 0x7F1BA034u;
            ctx->pc = 0x8001258Cu;
            return;
    }

label_7F1BA034:
    ctx->pc = 0x7F1BA034u;
    ctx->downcount -= 9;
    // 7F1BA034: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BA038:
    ctx->pc = 0x7F1BA038u;
    // 7F1BA038: lis     r4, 32584
    ctx->gpr[4] = ((u32)(s32)(32584) << 16);

label_7F1BA03C:
    ctx->pc = 0x7F1BA03Cu;
    // 7F1BA03C: addi    r5, r3, -6324
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(-6324);

label_7F1BA040:
    ctx->pc = 0x7F1BA040u;
    // 7F1BA040: lwz     r6, -6320(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-6320);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BA044:
    ctx->pc = 0x7F1BA044u;
    // 7F1BA044: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA048:
    ctx->pc = 0x7F1BA048u;
    // 7F1BA048: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1BA04C:
    ctx->pc = 0x7F1BA04Cu;
    // 7F1BA04C: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BA050:
    ctx->pc = 0x7F1BA050u;
    // 7F1BA050: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_7F1BA054:
    ctx->pc = 0x7F1BA054u;
    // 7F1BA054: bl      0x7F0B9960
    {
            ctx->lr = 0x7F1BA058u;
            ctx->pc = 0x7F0B9960u;
            return;
    }

label_7F1BA058:
    ctx->pc = 0x7F1BA058u;
    ctx->downcount -= 7;
    // 7F1BA058: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA05C:
    ctx->pc = 0x7F1BA05Cu;
    // 7F1BA05C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1BA060:
    ctx->pc = 0x7F1BA060u;
    // 7F1BA060: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1BA064:
    ctx->pc = 0x7F1BA064u;
    // 7F1BA064: li      r6, 255
    ctx->gpr[6] = (u32)(s32)(255);

label_7F1BA068:
    ctx->pc = 0x7F1BA068u;
    // 7F1BA068: li      r7, 43
    ctx->gpr[7] = (u32)(s32)(43);

label_7F1BA06C:
    ctx->pc = 0x7F1BA06Cu;
    // 7F1BA06C: li      r8, 100
    ctx->gpr[8] = (u32)(s32)(100);

label_7F1BA070:
    ctx->pc = 0x7F1BA070u;
    // 7F1BA070: bl      0x7F0B987C
    {
            ctx->lr = 0x7F1BA074u;
            ctx->pc = 0x7F0B987Cu;
            return;
    }

label_7F1BA074:
    ctx->pc = 0x7F1BA074u;
    ctx->downcount -= 4;
    // 7F1BA074: lwz     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA078:
    ctx->pc = 0x7F1BA078u;
    // 7F1BA078: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BA07C:
    ctx->pc = 0x7F1BA07Cu;
    // 7F1BA07C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1BA080:
    ctx->pc = 0x7F1BA080u;
    // 7F1BA080: bl      0x7F0BA0B4
    {
            ctx->lr = 0x7F1BA084u;
            ctx->pc = 0x7F0BA0B4u;
            return;
    }

label_7F1BA084:
    ctx->pc = 0x7F1BA084u;
    ctx->downcount -= 6;
    // 7F1BA084: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA088:
    ctx->pc = 0x7F1BA088u;
    // 7F1BA088: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BA08C:
    ctx->pc = 0x7F1BA08Cu;
    // 7F1BA08C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BA090:
    ctx->pc = 0x7F1BA090u;
    // 7F1BA090: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BA094:
    ctx->pc = 0x7F1BA094u;
    // 7F1BA094: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BA098:
    ctx->pc = 0x7F1BA098u;
    ctx->downcount -= 59;
    // 7F1BA098: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BA09C:
    ctx->pc = 0x7F1BA09Cu;
    // 7F1BA09C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BA0A0:
    ctx->pc = 0x7F1BA0A0u;
    // 7F1BA0A0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BA0A4:
    ctx->pc = 0x7F1BA0A4u;
    // 7F1BA0A4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA0A8:
    ctx->pc = 0x7F1BA0A8u;
    // 7F1BA0A8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BA0AC:
    ctx->pc = 0x7F1BA0ACu;
    // 7F1BA0AC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BA0B0:
    ctx->pc = 0x7F1BA0B0u;
    // 7F1BA0B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA0B4:
    ctx->pc = 0x7F1BA0B4u;
    // 7F1BA0B4: lwz     r10, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1BA0B8:
    ctx->pc = 0x7F1BA0B8u;
    // 7F1BA0B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA0BC:
    ctx->pc = 0x7F1BA0BCu;
    // 7F1BA0BC: addi    r9, r3, 7560
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(7560);

label_7F1BA0C0:
    ctx->pc = 0x7F1BA0C0u;
    // 7F1BA0C0: lha     r8, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BA0C4:
    ctx->pc = 0x7F1BA0C4u;
    // 7F1BA0C4: lha     r6, 128(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(128);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BA0C8:
    ctx->pc = 0x7F1BA0C8u;
    // 7F1BA0C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA0CC:
    ctx->pc = 0x7F1BA0CCu;
    // 7F1BA0CC: addi    r7, r3, 7568
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(7568);

label_7F1BA0D0:
    ctx->pc = 0x7F1BA0D0u;
    // 7F1BA0D0: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA0D4:
    ctx->pc = 0x7F1BA0D4u;
    // 7F1BA0D4: subf   r6, r8, r6
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1BA0D8:
    ctx->pc = 0x7F1BA0D8u;
    // 7F1BA0D8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA0DC:
    ctx->pc = 0x7F1BA0DCu;
    // 7F1BA0DC: xoris   r8, r6, 0x8000
    ctx->gpr[8] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1BA0E0:
    ctx->pc = 0x7F1BA0E0u;
    // 7F1BA0E0: lfd     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA0E0u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA0E4:
    ctx->pc = 0x7F1BA0E4u;
    // 7F1BA0E4: stw     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1BA0E8:
    ctx->pc = 0x7F1BA0E8u;
    // 7F1BA0E8: addi    r5, r3, 7632
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7632);

label_7F1BA0EC:
    ctx->pc = 0x7F1BA0ECu;
    // 7F1BA0EC: addi    r6, r4, 7556
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(7556);

label_7F1BA0F0:
    ctx->pc = 0x7F1BA0F0u;
    // 7F1BA0F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA0F4:
    ctx->pc = 0x7F1BA0F4u;
    // 7F1BA0F4: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA0F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA0F8:
    ctx->pc = 0x7F1BA0F8u;
    // 7F1BA0F8: addi    r4, r3, 7576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7576);

label_7F1BA0FC:
    ctx->pc = 0x7F1BA0FCu;
    // 7F1BA0FC: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA0FCu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA100:
    ctx->pc = 0x7F1BA100u;
    // 7F1BA100: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA104:
    ctx->pc = 0x7F1BA104u;
    // 7F1BA104: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1BA104u)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_7F1BA108:
    ctx->pc = 0x7F1BA108u;
    // 7F1BA108: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA108u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1BA10C:
    ctx->pc = 0x7F1BA10Cu;
    // 7F1BA10C: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA10Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1BA110:
    ctx->pc = 0x7F1BA110u;
    // 7F1BA110: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA110u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA114:
    ctx->pc = 0x7F1BA114u;
    // 7F1BA114: fmuls   f5, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA114u)) return;
    ppc_fmuls(ctx, 5, 2, 0);

label_7F1BA118:
    ctx->pc = 0x7F1BA118u;
    // 7F1BA118: stfs     f2, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA118u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1BA11C:
    ctx->pc = 0x7F1BA11Cu;
    // 7F1BA11C: lfs     f0, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA11Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA120:
    ctx->pc = 0x7F1BA120u;
    // 7F1BA120: stfs     f5, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1BA124:
    ctx->pc = 0x7F1BA124u;
    // 7F1BA124: lfs     f2, 32(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA124u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BA128:
    ctx->pc = 0x7F1BA128u;
    // 7F1BA128: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1BA128u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F1BA12C:
    ctx->pc = 0x7F1BA12Cu;
    // 7F1BA12C: fmuls   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1BA12Cu)) return;
    ppc_fmuls(ctx, 2, 4, 2);

label_7F1BA130:
    ctx->pc = 0x7F1BA130u;
    // 7F1BA130: fmuls   f2, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1BA130u)) return;
    ppc_fmuls(ctx, 2, 2, 5);

label_7F1BA134:
    ctx->pc = 0x7F1BA134u;
    // 7F1BA134: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA134u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1BA138:
    ctx->pc = 0x7F1BA138u;
    // 7F1BA138: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA138u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA13C:
    ctx->pc = 0x7F1BA13Cu;
    // 7F1BA13C: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA13Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA140:
    ctx->pc = 0x7F1BA140u;
    // 7F1BA140: bc    4, 0, 0x7F1BA14C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA14C;
        }
    }

label_7F1BA144:
    ctx->pc = 0x7F1BA144u;
    ctx->downcount -= 2;
    // 7F1BA144: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1BA148:
    ctx->pc = 0x7F1BA148u;
    // 7F1BA148: b       0x7F1BA150
    {
            goto label_7F1BA150;
    }

label_7F1BA14C:
    ctx->pc = 0x7F1BA14Cu;
    ctx->downcount -= 1;
    // 7F1BA14C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1BA150:
    ctx->pc = 0x7F1BA150u;
    ctx->downcount -= 2;
    // 7F1BA150: cmpwi   r0, 0
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

label_7F1BA154:
    ctx->pc = 0x7F1BA154u;
    // 7F1BA154: bc    4, 0, 0x7F1BA170
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA170;
        }
    }

label_7F1BA158:
    ctx->pc = 0x7F1BA158u;
    ctx->downcount -= 4;
    // 7F1BA158: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA15C:
    ctx->pc = 0x7F1BA15Cu;
    // 7F1BA15C: lfs     f0, 7636(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA15Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7636);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA160:
    ctx->pc = 0x7F1BA160u;
    // 7F1BA160: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA160u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA164:
    ctx->pc = 0x7F1BA164u;
    // 7F1BA164: bc    4, 0, 0x7F1BA184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA184;
        }
    }

label_7F1BA168:
    ctx->pc = 0x7F1BA168u;
    ctx->downcount -= 2;
    // 7F1BA168: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA16C:
    ctx->pc = 0x7F1BA16Cu;
    // 7F1BA16C: b       0x7F1BA184
    {
            goto label_7F1BA184;
    }

label_7F1BA170:
    ctx->pc = 0x7F1BA170u;
    ctx->downcount -= 4;
    // 7F1BA170: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA174:
    ctx->pc = 0x7F1BA174u;
    // 7F1BA174: lfs     f0, 7640(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA174u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7640);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA178:
    ctx->pc = 0x7F1BA178u;
    // 7F1BA178: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA178u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA17C:
    ctx->pc = 0x7F1BA17Cu;
    // 7F1BA17C: bc    4, 1, 0x7F1BA184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA184;
        }
    }

label_7F1BA180:
    ctx->pc = 0x7F1BA180u;
    ctx->downcount -= 1;
    // 7F1BA180: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA180u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA184:
    ctx->pc = 0x7F1BA184u;
    ctx->downcount -= 11;
    // 7F1BA184: lwz     r4, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA188:
    ctx->pc = 0x7F1BA188u;
    // 7F1BA188: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA18C:
    ctx->pc = 0x7F1BA18Cu;
    // 7F1BA18C: lfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA18Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA190:
    ctx->pc = 0x7F1BA190u;
    // 7F1BA190: lfs     f2, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA190u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BA194:
    ctx->pc = 0x7F1BA194u;
    // 7F1BA194: lfs     f0, 7644(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA194u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7644);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA198:
    ctx->pc = 0x7F1BA198u;
    // 7F1BA198: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA198u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1BA19C:
    ctx->pc = 0x7F1BA19Cu;
    // 7F1BA19C: stfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA19Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA1A0:
    ctx->pc = 0x7F1BA1A0u;
    // 7F1BA1A0: lwz     r4, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA1A4:
    ctx->pc = 0x7F1BA1A4u;
    // 7F1BA1A4: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1A4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA1A8:
    ctx->pc = 0x7F1BA1A8u;
    // 7F1BA1A8: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA1AC:
    ctx->pc = 0x7F1BA1ACu;
    // 7F1BA1AC: bc    4, 0, 0x7F1BA1B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA1B8;
        }
    }

label_7F1BA1B0:
    ctx->pc = 0x7F1BA1B0u;
    ctx->downcount -= 2;
    // 7F1BA1B0: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA1B4:
    ctx->pc = 0x7F1BA1B4u;
    // 7F1BA1B4: b       0x7F1BA1CC
    {
            goto label_7F1BA1CC;
    }

label_7F1BA1B8:
    ctx->pc = 0x7F1BA1B8u;
    ctx->downcount -= 4;
    // 7F1BA1B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA1BC:
    ctx->pc = 0x7F1BA1BCu;
    // 7F1BA1BC: lfs     f0, 7648(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA1C0:
    ctx->pc = 0x7F1BA1C0u;
    // 7F1BA1C0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1C0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA1C4:
    ctx->pc = 0x7F1BA1C4u;
    // 7F1BA1C4: bc    4, 1, 0x7F1BA1CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA1CC;
        }
    }

label_7F1BA1C8:
    ctx->pc = 0x7F1BA1C8u;
    ctx->downcount -= 1;
    // 7F1BA1C8: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA1CC:
    ctx->pc = 0x7F1BA1CCu;
    ctx->downcount -= 5;
    // 7F1BA1CC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA1D0:
    ctx->pc = 0x7F1BA1D0u;
    // 7F1BA1D0: lfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1D0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA1D4:
    ctx->pc = 0x7F1BA1D4u;
    // 7F1BA1D4: lfs     f1, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1D4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA1D8:
    ctx->pc = 0x7F1BA1D8u;
    // 7F1BA1D8: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1D8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1BA1DC:
    ctx->pc = 0x7F1BA1DCu;
    // 7F1BA1DC: bc    4, 2, 0x7F1BA280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA280;
        }
    }

label_7F1BA1E0:
    ctx->pc = 0x7F1BA1E0u;
    ctx->downcount -= 4;
    // 7F1BA1E0: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA1E4:
    ctx->pc = 0x7F1BA1E4u;
    // 7F1BA1E4: lfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1E4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA1E8:
    ctx->pc = 0x7F1BA1E8u;
    // 7F1BA1E8: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1E8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1BA1EC:
    ctx->pc = 0x7F1BA1ECu;
    // 7F1BA1EC: bc    4, 0, 0x7F1BA20C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA20C;
        }
    }

label_7F1BA1F0:
    ctx->pc = 0x7F1BA1F0u;
    ctx->downcount -= 7;
    // 7F1BA1F0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA1F4:
    ctx->pc = 0x7F1BA1F4u;
    // 7F1BA1F4: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA1F8:
    ctx->pc = 0x7F1BA1F8u;
    // 7F1BA1F8: lfs     f0, 7652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA1FC:
    ctx->pc = 0x7F1BA1FCu;
    // 7F1BA1FC: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA1FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA200:
    ctx->pc = 0x7F1BA200u;
    // 7F1BA200: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA200u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA204:
    ctx->pc = 0x7F1BA204u;
    // 7F1BA204: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA204u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA208:
    ctx->pc = 0x7F1BA208u;
    // 7F1BA208: b       0x7F1BA224
    {
            goto label_7F1BA224;
    }

label_7F1BA20C:
    ctx->pc = 0x7F1BA20Cu;
    ctx->downcount -= 6;
    // 7F1BA20C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA210:
    ctx->pc = 0x7F1BA210u;
    // 7F1BA210: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA210u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA214:
    ctx->pc = 0x7F1BA214u;
    // 7F1BA214: lfs     f0, 7608(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA214u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA218:
    ctx->pc = 0x7F1BA218u;
    // 7F1BA218: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA218u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA21C:
    ctx->pc = 0x7F1BA21Cu;
    // 7F1BA21C: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA21Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA220:
    ctx->pc = 0x7F1BA220u;
    // 7F1BA220: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA220u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA224:
    ctx->pc = 0x7F1BA224u;
    ctx->downcount -= 13;
    // 7F1BA224: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BA228:
    ctx->pc = 0x7F1BA228u;
    // 7F1BA228: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BA22C:
    ctx->pc = 0x7F1BA22Cu;
    // 7F1BA22C: addi    r5, r4, 7552
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(7552);

label_7F1BA230:
    ctx->pc = 0x7F1BA230u;
    // 7F1BA230: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1BA234:
    ctx->pc = 0x7F1BA234u;
    // 7F1BA234: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA234u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA238:
    ctx->pc = 0x7F1BA238u;
    // 7F1BA238: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1BA23C:
    ctx->pc = 0x7F1BA23Cu;
    // 7F1BA23C: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA23Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA240:
    ctx->pc = 0x7F1BA240u;
    // 7F1BA240: lwz     r6, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BA244:
    ctx->pc = 0x7F1BA244u;
    // 7F1BA244: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA244u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA248:
    ctx->pc = 0x7F1BA248u;
    // 7F1BA248: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA24C:
    ctx->pc = 0x7F1BA24Cu;
    // 7F1BA24C: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA24Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA250:
    ctx->pc = 0x7F1BA250u;
    // 7F1BA250: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA250u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA254:
    ctx->pc = 0x7F1BA254u;
    // 7F1BA254: bl      0x800261D8
    {
            ctx->lr = 0x7F1BA258u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1BA258:
    ctx->pc = 0x7F1BA258u;
    ctx->downcount -= 5;
    // 7F1BA258: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BA25C:
    ctx->pc = 0x7F1BA25Cu;
    // 7F1BA25C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1BA260:
    ctx->pc = 0x7F1BA260u;
    // 7F1BA260: lfs     f1, 7656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA260u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7656);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA264:
    ctx->pc = 0x7F1BA264u;
    // 7F1BA264: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA268:
    ctx->pc = 0x7F1BA268u;
    // 7F1BA268: bl      0x800261FC
    {
            ctx->lr = 0x7F1BA26Cu;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1BA26C:
    ctx->pc = 0x7F1BA26Cu;
    ctx->downcount -= 5;
    // 7F1BA26C: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA270:
    ctx->pc = 0x7F1BA270u;
    // 7F1BA270: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA274:
    ctx->pc = 0x7F1BA274u;
    // 7F1BA274: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA274u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA278:
    ctx->pc = 0x7F1BA278u;
    // 7F1BA278: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA278u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1BA27C:
    ctx->pc = 0x7F1BA27Cu;
    // 7F1BA27C: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA27Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA280:
    ctx->pc = 0x7F1BA280u;
    ctx->downcount -= 6;
    // 7F1BA280: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA284:
    ctx->pc = 0x7F1BA284u;
    // 7F1BA284: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BA288:
    ctx->pc = 0x7F1BA288u;
    // 7F1BA288: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BA28C:
    ctx->pc = 0x7F1BA28Cu;
    // 7F1BA28C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BA290:
    ctx->pc = 0x7F1BA290u;
    // 7F1BA290: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BA294:
    ctx->pc = 0x7F1BA294u;
    ctx->downcount -= 59;
    // 7F1BA294: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BA298:
    ctx->pc = 0x7F1BA298u;
    // 7F1BA298: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BA29C:
    ctx->pc = 0x7F1BA29Cu;
    // 7F1BA29C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BA2A0:
    ctx->pc = 0x7F1BA2A0u;
    // 7F1BA2A0: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA2A4:
    ctx->pc = 0x7F1BA2A4u;
    // 7F1BA2A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BA2A8:
    ctx->pc = 0x7F1BA2A8u;
    // 7F1BA2A8: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BA2AC:
    ctx->pc = 0x7F1BA2ACu;
    // 7F1BA2AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA2B0:
    ctx->pc = 0x7F1BA2B0u;
    // 7F1BA2B0: lwz     r10, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1BA2B4:
    ctx->pc = 0x7F1BA2B4u;
    // 7F1BA2B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA2B8:
    ctx->pc = 0x7F1BA2B8u;
    // 7F1BA2B8: addi    r9, r3, 7560
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(7560);

label_7F1BA2BC:
    ctx->pc = 0x7F1BA2BCu;
    // 7F1BA2BC: lha     r8, 70(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(70);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BA2C0:
    ctx->pc = 0x7F1BA2C0u;
    // 7F1BA2C0: lha     r6, 130(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(130);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BA2C4:
    ctx->pc = 0x7F1BA2C4u;
    // 7F1BA2C4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA2C8:
    ctx->pc = 0x7F1BA2C8u;
    // 7F1BA2C8: addi    r7, r3, 7568
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(7568);

label_7F1BA2CC:
    ctx->pc = 0x7F1BA2CCu;
    // 7F1BA2CC: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA2D0:
    ctx->pc = 0x7F1BA2D0u;
    // 7F1BA2D0: subf   r6, r8, r6
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1BA2D4:
    ctx->pc = 0x7F1BA2D4u;
    // 7F1BA2D4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA2D8:
    ctx->pc = 0x7F1BA2D8u;
    // 7F1BA2D8: xoris   r8, r6, 0x8000
    ctx->gpr[8] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1BA2DC:
    ctx->pc = 0x7F1BA2DCu;
    // 7F1BA2DC: lfd     f2, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA2DCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA2E0:
    ctx->pc = 0x7F1BA2E0u;
    // 7F1BA2E0: stw     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1BA2E4:
    ctx->pc = 0x7F1BA2E4u;
    // 7F1BA2E4: addi    r5, r3, 7632
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7632);

label_7F1BA2E8:
    ctx->pc = 0x7F1BA2E8u;
    // 7F1BA2E8: addi    r6, r4, 7556
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(7556);

label_7F1BA2EC:
    ctx->pc = 0x7F1BA2ECu;
    // 7F1BA2EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA2F0:
    ctx->pc = 0x7F1BA2F0u;
    // 7F1BA2F0: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA2F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA2F4:
    ctx->pc = 0x7F1BA2F4u;
    // 7F1BA2F4: addi    r4, r3, 7576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7576);

label_7F1BA2F8:
    ctx->pc = 0x7F1BA2F8u;
    // 7F1BA2F8: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA2F8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA2FC:
    ctx->pc = 0x7F1BA2FCu;
    // 7F1BA2FC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA300:
    ctx->pc = 0x7F1BA300u;
    // 7F1BA300: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1BA300u)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_7F1BA304:
    ctx->pc = 0x7F1BA304u;
    // 7F1BA304: lfs     f3, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA304u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1BA308:
    ctx->pc = 0x7F1BA308u;
    // 7F1BA308: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA308u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1BA30C:
    ctx->pc = 0x7F1BA30Cu;
    // 7F1BA30C: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA30Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA310:
    ctx->pc = 0x7F1BA310u;
    // 7F1BA310: fmuls   f5, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA310u)) return;
    ppc_fmuls(ctx, 5, 2, 0);

label_7F1BA314:
    ctx->pc = 0x7F1BA314u;
    // 7F1BA314: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA314u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1BA318:
    ctx->pc = 0x7F1BA318u;
    // 7F1BA318: lfs     f0, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA318u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA31C:
    ctx->pc = 0x7F1BA31Cu;
    // 7F1BA31C: stfs     f5, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA31Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1BA320:
    ctx->pc = 0x7F1BA320u;
    // 7F1BA320: lfs     f2, 32(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA320u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BA324:
    ctx->pc = 0x7F1BA324u;
    // 7F1BA324: fmuls   f2, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1BA324u)) return;
    ppc_fmuls(ctx, 2, 3, 2);

label_7F1BA328:
    ctx->pc = 0x7F1BA328u;
    // 7F1BA328: fmuls   f2, f4, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1BA328u)) return;
    ppc_fmuls(ctx, 2, 4, 2);

label_7F1BA32C:
    ctx->pc = 0x7F1BA32Cu;
    // 7F1BA32C: fmuls   f2, f2, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1BA32Cu)) return;
    ppc_fmuls(ctx, 2, 2, 5);

label_7F1BA330:
    ctx->pc = 0x7F1BA330u;
    // 7F1BA330: fdivs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA330u)) return;
    ppc_fdivs(ctx, 1, 2, 1);

label_7F1BA334:
    ctx->pc = 0x7F1BA334u;
    // 7F1BA334: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA334u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA338:
    ctx->pc = 0x7F1BA338u;
    // 7F1BA338: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA338u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA33C:
    ctx->pc = 0x7F1BA33Cu;
    // 7F1BA33C: bc    4, 0, 0x7F1BA348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA348;
        }
    }

label_7F1BA340:
    ctx->pc = 0x7F1BA340u;
    ctx->downcount -= 2;
    // 7F1BA340: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1BA344:
    ctx->pc = 0x7F1BA344u;
    // 7F1BA344: b       0x7F1BA34C
    {
            goto label_7F1BA34C;
    }

label_7F1BA348:
    ctx->pc = 0x7F1BA348u;
    ctx->downcount -= 1;
    // 7F1BA348: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1BA34C:
    ctx->pc = 0x7F1BA34Cu;
    ctx->downcount -= 2;
    // 7F1BA34C: cmpwi   r0, 0
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

label_7F1BA350:
    ctx->pc = 0x7F1BA350u;
    // 7F1BA350: bc    4, 0, 0x7F1BA36C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA36C;
        }
    }

label_7F1BA354:
    ctx->pc = 0x7F1BA354u;
    ctx->downcount -= 4;
    // 7F1BA354: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA358:
    ctx->pc = 0x7F1BA358u;
    // 7F1BA358: lfs     f0, 7636(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA358u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7636);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA35C:
    ctx->pc = 0x7F1BA35Cu;
    // 7F1BA35C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA35Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA360:
    ctx->pc = 0x7F1BA360u;
    // 7F1BA360: bc    4, 0, 0x7F1BA380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA380;
        }
    }

label_7F1BA364:
    ctx->pc = 0x7F1BA364u;
    ctx->downcount -= 2;
    // 7F1BA364: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA364u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA368:
    ctx->pc = 0x7F1BA368u;
    // 7F1BA368: b       0x7F1BA380
    {
            goto label_7F1BA380;
    }

label_7F1BA36C:
    ctx->pc = 0x7F1BA36Cu;
    ctx->downcount -= 4;
    // 7F1BA36C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA370:
    ctx->pc = 0x7F1BA370u;
    // 7F1BA370: lfs     f0, 7640(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA370u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7640);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA374:
    ctx->pc = 0x7F1BA374u;
    // 7F1BA374: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA374u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA378:
    ctx->pc = 0x7F1BA378u;
    // 7F1BA378: bc    4, 1, 0x7F1BA380
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA380;
        }
    }

label_7F1BA37C:
    ctx->pc = 0x7F1BA37Cu;
    ctx->downcount -= 1;
    // 7F1BA37C: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA37Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA380:
    ctx->pc = 0x7F1BA380u;
    ctx->downcount -= 11;
    // 7F1BA380: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA384:
    ctx->pc = 0x7F1BA384u;
    // 7F1BA384: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA388:
    ctx->pc = 0x7F1BA388u;
    // 7F1BA388: lfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA388u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA38C:
    ctx->pc = 0x7F1BA38Cu;
    // 7F1BA38C: lfs     f2, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA38Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BA390:
    ctx->pc = 0x7F1BA390u;
    // 7F1BA390: lfs     f0, 7660(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA390u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7660);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA394:
    ctx->pc = 0x7F1BA394u;
    // 7F1BA394: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA394u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1BA398:
    ctx->pc = 0x7F1BA398u;
    // 7F1BA398: stfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA398u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA39C:
    ctx->pc = 0x7F1BA39Cu;
    // 7F1BA39C: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA3A0:
    ctx->pc = 0x7F1BA3A0u;
    // 7F1BA3A0: lfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3A0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA3A4:
    ctx->pc = 0x7F1BA3A4u;
    // 7F1BA3A4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA3A8:
    ctx->pc = 0x7F1BA3A8u;
    // 7F1BA3A8: bc    4, 0, 0x7F1BA3B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA3B4;
        }
    }

label_7F1BA3AC:
    ctx->pc = 0x7F1BA3ACu;
    ctx->downcount -= 2;
    // 7F1BA3AC: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA3B0:
    ctx->pc = 0x7F1BA3B0u;
    // 7F1BA3B0: b       0x7F1BA3C8
    {
            goto label_7F1BA3C8;
    }

label_7F1BA3B4:
    ctx->pc = 0x7F1BA3B4u;
    ctx->downcount -= 4;
    // 7F1BA3B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA3B8:
    ctx->pc = 0x7F1BA3B8u;
    // 7F1BA3B8: lfs     f0, 7664(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3B8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7664);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA3BC:
    ctx->pc = 0x7F1BA3BCu;
    // 7F1BA3BC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3BCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA3C0:
    ctx->pc = 0x7F1BA3C0u;
    // 7F1BA3C0: bc    4, 1, 0x7F1BA3C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA3C8;
        }
    }

label_7F1BA3C4:
    ctx->pc = 0x7F1BA3C4u;
    ctx->downcount -= 1;
    // 7F1BA3C4: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA3C8:
    ctx->pc = 0x7F1BA3C8u;
    ctx->downcount -= 5;
    // 7F1BA3C8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA3CC:
    ctx->pc = 0x7F1BA3CCu;
    // 7F1BA3CC: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA3D0:
    ctx->pc = 0x7F1BA3D0u;
    // 7F1BA3D0: lfs     f1, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA3D4:
    ctx->pc = 0x7F1BA3D4u;
    // 7F1BA3D4: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3D4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1BA3D8:
    ctx->pc = 0x7F1BA3D8u;
    // 7F1BA3D8: bc    4, 2, 0x7F1BA47C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA47C;
        }
    }

label_7F1BA3DC:
    ctx->pc = 0x7F1BA3DCu;
    ctx->downcount -= 4;
    // 7F1BA3DC: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA3E0:
    ctx->pc = 0x7F1BA3E0u;
    // 7F1BA3E0: lfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA3E4:
    ctx->pc = 0x7F1BA3E4u;
    // 7F1BA3E4: fcmpo   cr0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[0], ctx->fpr[1], true);

label_7F1BA3E8:
    ctx->pc = 0x7F1BA3E8u;
    // 7F1BA3E8: bc    4, 0, 0x7F1BA408
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA408;
        }
    }

label_7F1BA3EC:
    ctx->pc = 0x7F1BA3ECu;
    ctx->downcount -= 7;
    // 7F1BA3EC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA3F0:
    ctx->pc = 0x7F1BA3F0u;
    // 7F1BA3F0: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA3F4:
    ctx->pc = 0x7F1BA3F4u;
    // 7F1BA3F4: lfs     f0, 7652(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3F4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7652);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA3F8:
    ctx->pc = 0x7F1BA3F8u;
    // 7F1BA3F8: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA3FC:
    ctx->pc = 0x7F1BA3FCu;
    // 7F1BA3FC: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA3FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA400:
    ctx->pc = 0x7F1BA400u;
    // 7F1BA400: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA404:
    ctx->pc = 0x7F1BA404u;
    // 7F1BA404: b       0x7F1BA420
    {
            goto label_7F1BA420;
    }

label_7F1BA408:
    ctx->pc = 0x7F1BA408u;
    ctx->downcount -= 6;
    // 7F1BA408: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA40C:
    ctx->pc = 0x7F1BA40Cu;
    // 7F1BA40C: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA40Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA410:
    ctx->pc = 0x7F1BA410u;
    // 7F1BA410: lfs     f0, 7608(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA410u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7608);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA414:
    ctx->pc = 0x7F1BA414u;
    // 7F1BA414: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA418:
    ctx->pc = 0x7F1BA418u;
    // 7F1BA418: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA418u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA41C:
    ctx->pc = 0x7F1BA41Cu;
    // 7F1BA41C: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA41Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA420:
    ctx->pc = 0x7F1BA420u;
    ctx->downcount -= 13;
    // 7F1BA420: lwz     r4, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA424:
    ctx->pc = 0x7F1BA424u;
    // 7F1BA424: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA428:
    ctx->pc = 0x7F1BA428u;
    // 7F1BA428: addi    r5, r3, 7552
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7552);

label_7F1BA42C:
    ctx->pc = 0x7F1BA42Cu;
    // 7F1BA42C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BA430:
    ctx->pc = 0x7F1BA430u;
    // 7F1BA430: lfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA430u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA434:
    ctx->pc = 0x7F1BA434u;
    // 7F1BA434: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1BA438:
    ctx->pc = 0x7F1BA438u;
    // 7F1BA438: lfs     f0, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA438u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA43C:
    ctx->pc = 0x7F1BA43Cu;
    // 7F1BA43C: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1BA440:
    ctx->pc = 0x7F1BA440u;
    // 7F1BA440: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA440u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA444:
    ctx->pc = 0x7F1BA444u;
    // 7F1BA444: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA444u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA448:
    ctx->pc = 0x7F1BA448u;
    // 7F1BA448: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA448u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA44C:
    ctx->pc = 0x7F1BA44Cu;
    // 7F1BA44C: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA44Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA450:
    ctx->pc = 0x7F1BA450u;
    // 7F1BA450: bl      0x800261D8
    {
            ctx->lr = 0x7F1BA454u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1BA454:
    ctx->pc = 0x7F1BA454u;
    ctx->downcount -= 5;
    // 7F1BA454: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BA458:
    ctx->pc = 0x7F1BA458u;
    // 7F1BA458: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1BA45C:
    ctx->pc = 0x7F1BA45Cu;
    // 7F1BA45C: lfs     f1, 7656(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA45Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7656);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA460:
    ctx->pc = 0x7F1BA460u;
    // 7F1BA460: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA464:
    ctx->pc = 0x7F1BA464u;
    // 7F1BA464: bl      0x800261FC
    {
            ctx->lr = 0x7F1BA468u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1BA468:
    ctx->pc = 0x7F1BA468u;
    ctx->downcount -= 5;
    // 7F1BA468: lwz     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA46C:
    ctx->pc = 0x7F1BA46Cu;
    // 7F1BA46C: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA46Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA470:
    ctx->pc = 0x7F1BA470u;
    // 7F1BA470: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA470u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA474:
    ctx->pc = 0x7F1BA474u;
    // 7F1BA474: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA474u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1BA478:
    ctx->pc = 0x7F1BA478u;
    // 7F1BA478: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA478u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA47C:
    ctx->pc = 0x7F1BA47Cu;
    ctx->downcount -= 6;
    // 7F1BA47C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA480:
    ctx->pc = 0x7F1BA480u;
    // 7F1BA480: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BA484:
    ctx->pc = 0x7F1BA484u;
    // 7F1BA484: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BA488:
    ctx->pc = 0x7F1BA488u;
    // 7F1BA488: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BA48C:
    ctx->pc = 0x7F1BA48Cu;
    // 7F1BA48C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BA490:
    ctx->pc = 0x7F1BA490u;
    ctx->downcount -= 89;
    // 7F1BA490: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BA494:
    ctx->pc = 0x7F1BA494u;
    // 7F1BA494: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BA498:
    ctx->pc = 0x7F1BA498u;
    // 7F1BA498: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BA49C:
    ctx->pc = 0x7F1BA49Cu;
    // 7F1BA49C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA4A0:
    ctx->pc = 0x7F1BA4A0u;
    // 7F1BA4A0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BA4A4:
    ctx->pc = 0x7F1BA4A4u;
    // 7F1BA4A4: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BA4A8:
    ctx->pc = 0x7F1BA4A8u;
    // 7F1BA4A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA4AC:
    ctx->pc = 0x7F1BA4ACu;
    // 7F1BA4AC: lwz     r10, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1BA4B0:
    ctx->pc = 0x7F1BA4B0u;
    // 7F1BA4B0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA4B4:
    ctx->pc = 0x7F1BA4B4u;
    // 7F1BA4B4: addi    r9, r3, 7560
    ctx->gpr[9] = ctx->gpr[3] + (u32)(s32)(7560);

label_7F1BA4B8:
    ctx->pc = 0x7F1BA4B8u;
    // 7F1BA4B8: lha     r8, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[8] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BA4BC:
    ctx->pc = 0x7F1BA4BCu;
    // 7F1BA4BC: lha     r6, 128(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(128);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BA4C0:
    ctx->pc = 0x7F1BA4C0u;
    // 7F1BA4C0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA4C4:
    ctx->pc = 0x7F1BA4C4u;
    // 7F1BA4C4: addi    r7, r3, 7568
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(7568);

label_7F1BA4C8:
    ctx->pc = 0x7F1BA4C8u;
    // 7F1BA4C8: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA4CC:
    ctx->pc = 0x7F1BA4CCu;
    // 7F1BA4CC: subf   r6, r8, r6
    {
        u32 a = ~ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[6] = res;
    }

label_7F1BA4D0:
    ctx->pc = 0x7F1BA4D0u;
    // 7F1BA4D0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA4D4:
    ctx->pc = 0x7F1BA4D4u;
    // 7F1BA4D4: xoris   r8, r6, 0x8000
    ctx->gpr[8] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1BA4D8:
    ctx->pc = 0x7F1BA4D8u;
    // 7F1BA4D8: lfd     f7, 0(r9)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA4D8u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ctx->fpr[7] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA4DC:
    ctx->pc = 0x7F1BA4DCu;
    // 7F1BA4DC: stw     r8, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1BA4E0:
    ctx->pc = 0x7F1BA4E0u;
    // 7F1BA4E0: addi    r5, r3, 7632
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7632);

label_7F1BA4E4:
    ctx->pc = 0x7F1BA4E4u;
    // 7F1BA4E4: addi    r6, r4, 7556
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(7556);

label_7F1BA4E8:
    ctx->pc = 0x7F1BA4E8u;
    // 7F1BA4E8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA4EC:
    ctx->pc = 0x7F1BA4ECu;
    // 7F1BA4EC: lfd     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA4ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA4F0:
    ctx->pc = 0x7F1BA4F0u;
    // 7F1BA4F0: addi    r4, r3, 7576
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(7576);

label_7F1BA4F4:
    ctx->pc = 0x7F1BA4F4u;
    // 7F1BA4F4: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA4F8:
    ctx->pc = 0x7F1BA4F8u;
    // 7F1BA4F8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA4FC:
    ctx->pc = 0x7F1BA4FCu;
    // 7F1BA4FC: fsubs   f0, f0, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1BA4FCu)) return;
    ppc_fsubs(ctx, 0, 0, 7);

label_7F1BA500:
    ctx->pc = 0x7F1BA500u;
    // 7F1BA500: lfs     f1, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA500u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA504:
    ctx->pc = 0x7F1BA504u;
    // 7F1BA504: lfs     f3, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA504u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1BA508:
    ctx->pc = 0x7F1BA508u;
    // 7F1BA508: lfs     f2, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA508u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BA50C:
    ctx->pc = 0x7F1BA50Cu;
    // 7F1BA50C: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA50Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA510:
    ctx->pc = 0x7F1BA510u;
    // 7F1BA510: fmuls   f6, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA510u)) return;
    ppc_fmuls(ctx, 6, 0, 1);

label_7F1BA514:
    ctx->pc = 0x7F1BA514u;
    // 7F1BA514: lfs     f4, 0(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA514u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1BA518:
    ctx->pc = 0x7F1BA518u;
    // 7F1BA518: lha     r4, 70(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(70);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BA51C:
    ctx->pc = 0x7F1BA51Cu;
    // 7F1BA51C: lha     r0, 130(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(130);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BA520:
    ctx->pc = 0x7F1BA520u;
    // 7F1BA520: lfs     f0, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA520u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA524:
    ctx->pc = 0x7F1BA524u;
    // 7F1BA524: subf   r0, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_7F1BA528:
    ctx->pc = 0x7F1BA528u;
    // 7F1BA528: stfs     f6, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA528u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[6]));
    }

label_7F1BA52C:
    ctx->pc = 0x7F1BA52Cu;
    // 7F1BA52C: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_7F1BA530:
    ctx->pc = 0x7F1BA530u;
    // 7F1BA530: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA534:
    ctx->pc = 0x7F1BA534u;
    // 7F1BA534: lfd     f5, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA534u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA538:
    ctx->pc = 0x7F1BA538u;
    // 7F1BA538: fsubs   f7, f5, f7
    if (!ppc_fp_available_inline(ctx, 0x7F1BA538u)) return;
    ppc_fsubs(ctx, 7, 5, 7);

label_7F1BA53C:
    ctx->pc = 0x7F1BA53Cu;
    // 7F1BA53C: fmuls   f5, f7, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA53Cu)) return;
    ppc_fmuls(ctx, 5, 7, 1);

label_7F1BA540:
    ctx->pc = 0x7F1BA540u;
    // 7F1BA540: stfs     f7, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA540u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[7]));
    }

label_7F1BA544:
    ctx->pc = 0x7F1BA544u;
    // 7F1BA544: stfs     f5, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA544u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[5]));
    }

label_7F1BA548:
    ctx->pc = 0x7F1BA548u;
    // 7F1BA548: lfs     f1, 32(r10)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA548u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA54C:
    ctx->pc = 0x7F1BA54Cu;
    // 7F1BA54C: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA54Cu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_7F1BA550:
    ctx->pc = 0x7F1BA550u;
    // 7F1BA550: fmuls   f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA550u)) return;
    ppc_fmuls(ctx, 1, 4, 1);

label_7F1BA554:
    ctx->pc = 0x7F1BA554u;
    // 7F1BA554: fmuls   f2, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x7F1BA554u)) return;
    ppc_fmuls(ctx, 2, 1, 5);

label_7F1BA558:
    ctx->pc = 0x7F1BA558u;
    // 7F1BA558: fmuls   f1, f1, f6
    if (!ppc_fp_available_inline(ctx, 0x7F1BA558u)) return;
    ppc_fmuls(ctx, 1, 1, 6);

label_7F1BA55C:
    ctx->pc = 0x7F1BA55Cu;
    // 7F1BA55C: fdivs   f2, f2, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1BA55Cu)) return;
    ppc_fdivs(ctx, 2, 2, 3);

label_7F1BA560:
    ctx->pc = 0x7F1BA560u;
    // 7F1BA560: fdivs   f1, f1, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1BA560u)) return;
    ppc_fdivs(ctx, 1, 1, 3);

label_7F1BA564:
    ctx->pc = 0x7F1BA564u;
    // 7F1BA564: stfs     f2, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA564u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1BA568:
    ctx->pc = 0x7F1BA568u;
    // 7F1BA568: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA568u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1BA56C:
    ctx->pc = 0x7F1BA56Cu;
    // 7F1BA56C: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA56Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA570:
    ctx->pc = 0x7F1BA570u;
    // 7F1BA570: bc    4, 0, 0x7F1BA57C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA57C;
        }
    }

label_7F1BA574:
    ctx->pc = 0x7F1BA574u;
    ctx->downcount -= 2;
    // 7F1BA574: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1BA578:
    ctx->pc = 0x7F1BA578u;
    // 7F1BA578: b       0x7F1BA580
    {
            goto label_7F1BA580;
    }

label_7F1BA57C:
    ctx->pc = 0x7F1BA57Cu;
    ctx->downcount -= 1;
    // 7F1BA57C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1BA580:
    ctx->pc = 0x7F1BA580u;
    ctx->downcount -= 2;
    // 7F1BA580: cmpwi   r0, 0
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

label_7F1BA584:
    ctx->pc = 0x7F1BA584u;
    // 7F1BA584: bc    4, 0, 0x7F1BA5A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA5A0;
        }
    }

label_7F1BA588:
    ctx->pc = 0x7F1BA588u;
    ctx->downcount -= 4;
    // 7F1BA588: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA58C:
    ctx->pc = 0x7F1BA58Cu;
    // 7F1BA58C: lfs     f0, 7668(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA58Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA590:
    ctx->pc = 0x7F1BA590u;
    // 7F1BA590: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA590u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1BA594:
    ctx->pc = 0x7F1BA594u;
    // 7F1BA594: bc    4, 0, 0x7F1BA5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA5B4;
        }
    }

label_7F1BA598:
    ctx->pc = 0x7F1BA598u;
    ctx->downcount -= 2;
    // 7F1BA598: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA598u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA59C:
    ctx->pc = 0x7F1BA59Cu;
    // 7F1BA59C: b       0x7F1BA5B4
    {
            goto label_7F1BA5B4;
    }

label_7F1BA5A0:
    ctx->pc = 0x7F1BA5A0u;
    ctx->downcount -= 4;
    // 7F1BA5A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA5A4:
    ctx->pc = 0x7F1BA5A4u;
    // 7F1BA5A4: lfs     f0, 7672(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7672);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA5A8:
    ctx->pc = 0x7F1BA5A8u;
    // 7F1BA5A8: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5A8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_7F1BA5AC:
    ctx->pc = 0x7F1BA5ACu;
    // 7F1BA5AC: bc    4, 1, 0x7F1BA5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA5B4;
        }
    }

label_7F1BA5B0:
    ctx->pc = 0x7F1BA5B0u;
    ctx->downcount -= 1;
    // 7F1BA5B0: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA5B4:
    ctx->pc = 0x7F1BA5B4u;
    ctx->downcount -= 5;
    // 7F1BA5B4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA5B8:
    ctx->pc = 0x7F1BA5B8u;
    // 7F1BA5B8: lfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA5BC:
    ctx->pc = 0x7F1BA5BCu;
    // 7F1BA5BC: lfs     f0, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA5C0:
    ctx->pc = 0x7F1BA5C0u;
    // 7F1BA5C0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5C0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA5C4:
    ctx->pc = 0x7F1BA5C4u;
    // 7F1BA5C4: bc    4, 0, 0x7F1BA5D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA5D0;
        }
    }

label_7F1BA5C8:
    ctx->pc = 0x7F1BA5C8u;
    ctx->downcount -= 2;
    // 7F1BA5C8: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1BA5CC:
    ctx->pc = 0x7F1BA5CCu;
    // 7F1BA5CC: b       0x7F1BA5D4
    {
            goto label_7F1BA5D4;
    }

label_7F1BA5D0:
    ctx->pc = 0x7F1BA5D0u;
    ctx->downcount -= 1;
    // 7F1BA5D0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_7F1BA5D4:
    ctx->pc = 0x7F1BA5D4u;
    ctx->downcount -= 2;
    // 7F1BA5D4: cmpwi   r0, 0
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

label_7F1BA5D8:
    ctx->pc = 0x7F1BA5D8u;
    // 7F1BA5D8: bc    4, 0, 0x7F1BA5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA5F4;
        }
    }

label_7F1BA5DC:
    ctx->pc = 0x7F1BA5DCu;
    ctx->downcount -= 4;
    // 7F1BA5DC: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA5E0:
    ctx->pc = 0x7F1BA5E0u;
    // 7F1BA5E0: lfs     f0, 7668(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5E0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7668);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA5E4:
    ctx->pc = 0x7F1BA5E4u;
    // 7F1BA5E4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5E4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA5E8:
    ctx->pc = 0x7F1BA5E8u;
    // 7F1BA5E8: bc    4, 0, 0x7F1BA608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA608;
        }
    }

label_7F1BA5EC:
    ctx->pc = 0x7F1BA5ECu;
    ctx->downcount -= 2;
    // 7F1BA5EC: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA5F0:
    ctx->pc = 0x7F1BA5F0u;
    // 7F1BA5F0: b       0x7F1BA608
    {
            goto label_7F1BA608;
    }

label_7F1BA5F4:
    ctx->pc = 0x7F1BA5F4u;
    ctx->downcount -= 4;
    // 7F1BA5F4: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA5F8:
    ctx->pc = 0x7F1BA5F8u;
    // 7F1BA5F8: lfs     f0, 7672(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5F8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7672);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA5FC:
    ctx->pc = 0x7F1BA5FCu;
    // 7F1BA5FC: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA5FCu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA600:
    ctx->pc = 0x7F1BA600u;
    // 7F1BA600: bc    4, 1, 0x7F1BA608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA608;
        }
    }

label_7F1BA604:
    ctx->pc = 0x7F1BA604u;
    ctx->downcount -= 1;
    // 7F1BA604: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA604u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA608:
    ctx->pc = 0x7F1BA608u;
    ctx->downcount -= 16;
    // 7F1BA608: lwz     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA60C:
    ctx->pc = 0x7F1BA60Cu;
    // 7F1BA60C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA610:
    ctx->pc = 0x7F1BA610u;
    // 7F1BA610: lfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA610u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA614:
    ctx->pc = 0x7F1BA614u;
    // 7F1BA614: lfs     f2, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA614u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BA618:
    ctx->pc = 0x7F1BA618u;
    // 7F1BA618: lfs     f0, 7676(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA618u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7676);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA61C:
    ctx->pc = 0x7F1BA61Cu;
    // 7F1BA61C: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA61Cu)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_7F1BA620:
    ctx->pc = 0x7F1BA620u;
    // 7F1BA620: stfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA620u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA624:
    ctx->pc = 0x7F1BA624u;
    // 7F1BA624: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA628:
    ctx->pc = 0x7F1BA628u;
    // 7F1BA628: lfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA628u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA62C:
    ctx->pc = 0x7F1BA62Cu;
    // 7F1BA62C: lfs     f2, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA62Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BA630:
    ctx->pc = 0x7F1BA630u;
    // 7F1BA630: fadds   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA630u)) return;
    ppc_fadds(ctx, 1, 2, 1);

label_7F1BA634:
    ctx->pc = 0x7F1BA634u;
    // 7F1BA634: stfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA634u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA638:
    ctx->pc = 0x7F1BA638u;
    // 7F1BA638: lwz     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA63C:
    ctx->pc = 0x7F1BA63Cu;
    // 7F1BA63C: lfs     f1, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA63Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA640:
    ctx->pc = 0x7F1BA640u;
    // 7F1BA640: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA640u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA644:
    ctx->pc = 0x7F1BA644u;
    // 7F1BA644: bc    4, 0, 0x7F1BA658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA658;
        }
    }

label_7F1BA648:
    ctx->pc = 0x7F1BA648u;
    ctx->downcount -= 4;
    // 7F1BA648: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA648u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA64C:
    ctx->pc = 0x7F1BA64Cu;
    // 7F1BA64C: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA650:
    ctx->pc = 0x7F1BA650u;
    // 7F1BA650: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA650u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA654:
    ctx->pc = 0x7F1BA654u;
    // 7F1BA654: b       0x7F1BA674
    {
            goto label_7F1BA674;
    }

label_7F1BA658:
    ctx->pc = 0x7F1BA658u;
    ctx->downcount -= 4;
    // 7F1BA658: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA65C:
    ctx->pc = 0x7F1BA65Cu;
    // 7F1BA65C: lfs     f0, 7648(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA65Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA660:
    ctx->pc = 0x7F1BA660u;
    // 7F1BA660: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA660u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA664:
    ctx->pc = 0x7F1BA664u;
    // 7F1BA664: bc    4, 1, 0x7F1BA674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA674;
        }
    }

label_7F1BA668:
    ctx->pc = 0x7F1BA668u;
    ctx->downcount -= 3;
    // 7F1BA668: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA668u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA66C:
    ctx->pc = 0x7F1BA66Cu;
    // 7F1BA66C: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA670:
    ctx->pc = 0x7F1BA670u;
    // 7F1BA670: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA670u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA674:
    ctx->pc = 0x7F1BA674u;
    ctx->downcount -= 6;
    // 7F1BA674: lwz     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA678:
    ctx->pc = 0x7F1BA678u;
    // 7F1BA678: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA67C:
    ctx->pc = 0x7F1BA67Cu;
    // 7F1BA67C: lfs     f0, 7676(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA67Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7676);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA680:
    ctx->pc = 0x7F1BA680u;
    // 7F1BA680: lfs     f1, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA680u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA684:
    ctx->pc = 0x7F1BA684u;
    // 7F1BA684: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA684u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA688:
    ctx->pc = 0x7F1BA688u;
    // 7F1BA688: bc    4, 0, 0x7F1BA69C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA69C;
        }
    }

label_7F1BA68C:
    ctx->pc = 0x7F1BA68Cu;
    ctx->downcount -= 4;
    // 7F1BA68C: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA68Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA690:
    ctx->pc = 0x7F1BA690u;
    // 7F1BA690: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA694:
    ctx->pc = 0x7F1BA694u;
    // 7F1BA694: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA694u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA698:
    ctx->pc = 0x7F1BA698u;
    // 7F1BA698: b       0x7F1BA6B8
    {
            goto label_7F1BA6B8;
    }

label_7F1BA69C:
    ctx->pc = 0x7F1BA69Cu;
    ctx->downcount -= 4;
    // 7F1BA69C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA6A0:
    ctx->pc = 0x7F1BA6A0u;
    // 7F1BA6A0: lfs     f0, 7648(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6A0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7648);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA6A4:
    ctx->pc = 0x7F1BA6A4u;
    // 7F1BA6A4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BA6A8:
    ctx->pc = 0x7F1BA6A8u;
    // 7F1BA6A8: bc    4, 1, 0x7F1BA6B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA6B8;
        }
    }

label_7F1BA6AC:
    ctx->pc = 0x7F1BA6ACu;
    ctx->downcount -= 3;
    // 7F1BA6AC: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6ACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA6B0:
    ctx->pc = 0x7F1BA6B0u;
    // 7F1BA6B0: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA6B4:
    ctx->pc = 0x7F1BA6B4u;
    // 7F1BA6B4: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6B4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA6B8:
    ctx->pc = 0x7F1BA6B8u;
    ctx->downcount -= 5;
    // 7F1BA6B8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA6BC:
    ctx->pc = 0x7F1BA6BCu;
    // 7F1BA6BC: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA6C0:
    ctx->pc = 0x7F1BA6C0u;
    // 7F1BA6C0: lfs     f1, 7552(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6C0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA6C4:
    ctx->pc = 0x7F1BA6C4u;
    // 7F1BA6C4: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6C4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1BA6C8:
    ctx->pc = 0x7F1BA6C8u;
    // 7F1BA6C8: bc    4, 2, 0x7F1BA750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA750;
        }
    }

label_7F1BA6CC:
    ctx->pc = 0x7F1BA6CCu;
    ctx->downcount -= 3;
    // 7F1BA6CC: lfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA6D0:
    ctx->pc = 0x7F1BA6D0u;
    // 7F1BA6D0: fcmpu   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6D0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], false);

label_7F1BA6D4:
    ctx->pc = 0x7F1BA6D4u;
    // 7F1BA6D4: bc    4, 2, 0x7F1BA750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA750;
        }
    }

label_7F1BA6D8:
    ctx->pc = 0x7F1BA6D8u;
    ctx->downcount -= 15;
    // 7F1BA6D8: lwz     r6, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BA6DC:
    ctx->pc = 0x7F1BA6DCu;
    // 7F1BA6DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BA6E0:
    ctx->pc = 0x7F1BA6E0u;
    // 7F1BA6E0: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1BA6E4:
    ctx->pc = 0x7F1BA6E4u;
    // 7F1BA6E4: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1BA6E8:
    ctx->pc = 0x7F1BA6E8u;
    // 7F1BA6E8: lfs     f0, 36(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6E8u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA6EC:
    ctx->pc = 0x7F1BA6ECu;
    // 7F1BA6EC: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA6F0:
    ctx->pc = 0x7F1BA6F0u;
    // 7F1BA6F0: lfs     f0, 40(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6F0u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA6F4:
    ctx->pc = 0x7F1BA6F4u;
    // 7F1BA6F4: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA6F8:
    ctx->pc = 0x7F1BA6F8u;
    // 7F1BA6F8: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA6FC:
    ctx->pc = 0x7F1BA6FCu;
    // 7F1BA6FC: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA6FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA700:
    ctx->pc = 0x7F1BA700u;
    // 7F1BA700: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA700u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA704:
    ctx->pc = 0x7F1BA704u;
    // 7F1BA704: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA704u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA708:
    ctx->pc = 0x7F1BA708u;
    // 7F1BA708: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA708u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA70C:
    ctx->pc = 0x7F1BA70Cu;
    // 7F1BA70C: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA70Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BA710:
    ctx->pc = 0x7F1BA710u;
    // 7F1BA710: bl      0x800261D8
    {
            ctx->lr = 0x7F1BA714u;
            ctx->pc = 0x800261D8u;
            return;
    }

label_7F1BA714:
    ctx->pc = 0x7F1BA714u;
    ctx->downcount -= 5;
    // 7F1BA714: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BA718:
    ctx->pc = 0x7F1BA718u;
    // 7F1BA718: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1BA71C:
    ctx->pc = 0x7F1BA71Cu;
    // 7F1BA71C: lfs     f1, 7680(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA71Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7680);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA720:
    ctx->pc = 0x7F1BA720u;
    // 7F1BA720: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA724:
    ctx->pc = 0x7F1BA724u;
    // 7F1BA724: bl      0x800261FC
    {
            ctx->lr = 0x7F1BA728u;
            ctx->pc = 0x800261FCu;
            return;
    }

label_7F1BA728:
    ctx->pc = 0x7F1BA728u;
    ctx->downcount -= 10;
    // 7F1BA728: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA72C:
    ctx->pc = 0x7F1BA72Cu;
    // 7F1BA72C: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA72Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA730:
    ctx->pc = 0x7F1BA730u;
    // 7F1BA730: lfs     f1, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA730u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA734:
    ctx->pc = 0x7F1BA734u;
    // 7F1BA734: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA734u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1BA738:
    ctx->pc = 0x7F1BA738u;
    // 7F1BA738: stfs     f0, 36(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA738u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA73C:
    ctx->pc = 0x7F1BA73Cu;
    // 7F1BA73C: lwz     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA740:
    ctx->pc = 0x7F1BA740u;
    // 7F1BA740: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA740u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BA744:
    ctx->pc = 0x7F1BA744u;
    // 7F1BA744: lfs     f1, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA744u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BA748:
    ctx->pc = 0x7F1BA748u;
    // 7F1BA748: fadds   f0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA748u)) return;
    ppc_fadds(ctx, 0, 1, 0);

label_7F1BA74C:
    ctx->pc = 0x7F1BA74Cu;
    // 7F1BA74C: stfs     f0, 40(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA74Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA750:
    ctx->pc = 0x7F1BA750u;
    ctx->downcount -= 6;
    // 7F1BA750: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA754:
    ctx->pc = 0x7F1BA754u;
    // 7F1BA754: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BA758:
    ctx->pc = 0x7F1BA758u;
    // 7F1BA758: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BA75C:
    ctx->pc = 0x7F1BA75Cu;
    // 7F1BA75C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BA760:
    ctx->pc = 0x7F1BA760u;
    // 7F1BA760: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BA764:
    ctx->pc = 0x7F1BA764u;
    ctx->downcount -= 9;
    // 7F1BA764: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BA768:
    ctx->pc = 0x7F1BA768u;
    // 7F1BA768: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BA76C:
    ctx->pc = 0x7F1BA76Cu;
    // 7F1BA76C: lis     r4, 194
    ctx->gpr[4] = ((u32)(s32)(194) << 16);

label_7F1BA770:
    ctx->pc = 0x7F1BA770u;
    // 7F1BA770: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA774:
    ctx->pc = 0x7F1BA774u;
    // 7F1BA774: addi    r4, r4, 17343
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17343);

label_7F1BA778:
    ctx->pc = 0x7F1BA778u;
    // 7F1BA778: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BA77C:
    ctx->pc = 0x7F1BA77Cu;
    // 7F1BA77C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA780:
    ctx->pc = 0x7F1BA780u;
    // 7F1BA780: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA784:
    ctx->pc = 0x7F1BA784u;
    // 7F1BA784: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1BA788u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1BA788:
    ctx->pc = 0x7F1BA788u;
    ctx->downcount -= 4;
    // 7F1BA788: stw     r3, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BA78C:
    ctx->pc = 0x7F1BA78Cu;
    // 7F1BA78C: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA790:
    ctx->pc = 0x7F1BA790u;
    // 7F1BA790: cmplwi  r0, 0x0000
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

label_7F1BA794:
    ctx->pc = 0x7F1BA794u;
    // 7F1BA794: bc    4, 2, 0x7F1BA7AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA7AC;
        }
    }

label_7F1BA798:
    ctx->pc = 0x7F1BA798u;
    ctx->downcount -= 3;
    // 7F1BA798: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BA79C:
    ctx->pc = 0x7F1BA79Cu;
    // 7F1BA79C: addi    r3, r3, -6308
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6308);

label_7F1BA7A0:
    ctx->pc = 0x7F1BA7A0u;
    // 7F1BA7A0: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1BA7A4u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1BA7A4:
    ctx->pc = 0x7F1BA7A4u;
    ctx->downcount -= 2;
    // 7F1BA7A4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1BA7A8:
    ctx->pc = 0x7F1BA7A8u;
    // 7F1BA7A8: b       0x7F1BA860
    {
            goto label_7F1BA860;
    }

label_7F1BA7AC:
    ctx->pc = 0x7F1BA7ACu;
    ctx->downcount -= 4;
    // 7F1BA7AC: lis     r4, 63
    ctx->gpr[4] = ((u32)(s32)(63) << 16);

label_7F1BA7B0:
    ctx->pc = 0x7F1BA7B0u;
    // 7F1BA7B0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA7B4:
    ctx->pc = 0x7F1BA7B4u;
    // 7F1BA7B4: addi    r4, r4, 25898
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25898);

label_7F1BA7B8:
    ctx->pc = 0x7F1BA7B8u;
    // 7F1BA7B8: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1BA7BCu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1BA7BC:
    ctx->pc = 0x7F1BA7BCu;
    ctx->downcount -= 4;
    // 7F1BA7BC: stw     r3, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BA7C0:
    ctx->pc = 0x7F1BA7C0u;
    // 7F1BA7C0: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA7C4:
    ctx->pc = 0x7F1BA7C4u;
    // 7F1BA7C4: cmplwi  r0, 0x0000
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

label_7F1BA7C8:
    ctx->pc = 0x7F1BA7C8u;
    // 7F1BA7C8: bc    4, 2, 0x7F1BA7E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA7E0;
        }
    }

label_7F1BA7CC:
    ctx->pc = 0x7F1BA7CCu;
    ctx->downcount -= 3;
    // 7F1BA7CC: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BA7D0:
    ctx->pc = 0x7F1BA7D0u;
    // 7F1BA7D0: addi    r3, r3, -6288
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6288);

label_7F1BA7D4:
    ctx->pc = 0x7F1BA7D4u;
    // 7F1BA7D4: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1BA7D8u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1BA7D8:
    ctx->pc = 0x7F1BA7D8u;
    ctx->downcount -= 2;
    // 7F1BA7D8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1BA7DC:
    ctx->pc = 0x7F1BA7DCu;
    // 7F1BA7DC: b       0x7F1BA860
    {
            goto label_7F1BA860;
    }

label_7F1BA7E0:
    ctx->pc = 0x7F1BA7E0u;
    ctx->downcount -= 4;
    // 7F1BA7E0: lis     r4, 12
    ctx->gpr[4] = ((u32)(s32)(12) << 16);

label_7F1BA7E4:
    ctx->pc = 0x7F1BA7E4u;
    // 7F1BA7E4: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA7E8:
    ctx->pc = 0x7F1BA7E8u;
    // 7F1BA7E8: addi    r4, r4, -15988
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15988);

label_7F1BA7EC:
    ctx->pc = 0x7F1BA7ECu;
    // 7F1BA7EC: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1BA7F0u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1BA7F0:
    ctx->pc = 0x7F1BA7F0u;
    ctx->downcount -= 4;
    // 7F1BA7F0: stw     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BA7F4:
    ctx->pc = 0x7F1BA7F4u;
    // 7F1BA7F4: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA7F8:
    ctx->pc = 0x7F1BA7F8u;
    // 7F1BA7F8: cmplwi  r0, 0x0000
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

label_7F1BA7FC:
    ctx->pc = 0x7F1BA7FCu;
    // 7F1BA7FC: bc    4, 2, 0x7F1BA814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA814;
        }
    }

label_7F1BA800:
    ctx->pc = 0x7F1BA800u;
    ctx->downcount -= 3;
    // 7F1BA800: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BA804:
    ctx->pc = 0x7F1BA804u;
    // 7F1BA804: addi    r3, r3, -6272
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6272);

label_7F1BA808:
    ctx->pc = 0x7F1BA808u;
    // 7F1BA808: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1BA80Cu;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1BA80C:
    ctx->pc = 0x7F1BA80Cu;
    ctx->downcount -= 2;
    // 7F1BA80C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1BA810:
    ctx->pc = 0x7F1BA810u;
    // 7F1BA810: b       0x7F1BA860
    {
            goto label_7F1BA860;
    }

label_7F1BA814:
    ctx->pc = 0x7F1BA814u;
    ctx->downcount -= 8;
    // 7F1BA814: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BA818:
    ctx->pc = 0x7F1BA818u;
    // 7F1BA818: li      r0, 16
    ctx->gpr[0] = (u32)(s32)(16);

label_7F1BA81C:
    ctx->pc = 0x7F1BA81Cu;
    // 7F1BA81C: lfd     f1, 7560(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA81Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7560);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA820:
    ctx->pc = 0x7F1BA820u;
    // 7F1BA820: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BA824:
    ctx->pc = 0x7F1BA824u;
    // 7F1BA824: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1BA828:
    ctx->pc = 0x7F1BA828u;
    // 7F1BA828: lis     r5, 17200
    ctx->gpr[5] = ((u32)(s32)(17200) << 16);

label_7F1BA82C:
    ctx->pc = 0x7F1BA82Cu;
    // 7F1BA82C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_7F1BA830:
    ctx->downcount -= 11;
    // 7F1BA830: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_7F1BA834:
    // 7F1BA834: addi    r0, r3, 100
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(100);

label_7F1BA838:
    // 7F1BA838: xoris   r6, r6, 0x8000
    ctx->gpr[6] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1BA83C:
    ctx->pc = 0x7F1BA83Cu;
    // 7F1BA83C: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BA840:
    // 7F1BA840: addi    r3, r3, 36
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(36);

label_7F1BA844:
    // 7F1BA844: addi    r4, r4, 30
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(30);

label_7F1BA848:
    ctx->pc = 0x7F1BA848u;
    // 7F1BA848: stw     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BA84C:
    ctx->pc = 0x7F1BA84Cu;
    // 7F1BA84C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BA84Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BA850:
    ctx->pc = 0x7F1BA850u;
    // 7F1BA850: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BA850u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BA854:
    ctx->pc = 0x7F1BA854u;
    // 7F1BA854: stfsx    f0, r31, r0
    if (!ppc_fp_available_inline(ctx, 0x7F1BA854u)) return;
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[0];
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BA858:
    // 7F1BA858: bc    16, 0, 0x7F1BA830
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BA830u;
                return;
            }
            goto label_7F1BA830;
        }
    }

label_7F1BA85C:
    ctx->pc = 0x7F1BA85Cu;
    ctx->downcount -= 1;
    // 7F1BA85C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_7F1BA860:
    ctx->pc = 0x7F1BA860u;
    ctx->downcount -= 6;
    // 7F1BA860: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA864:
    ctx->pc = 0x7F1BA864u;
    // 7F1BA864: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BA868:
    ctx->pc = 0x7F1BA868u;
    // 7F1BA868: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BA86C:
    ctx->pc = 0x7F1BA86Cu;
    // 7F1BA86C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1BA870:
    ctx->pc = 0x7F1BA870u;
    // 7F1BA870: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BA874:
    ctx->pc = 0x7F1BA874u;
    ctx->downcount -= 7;
    // 7F1BA874: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BA878:
    ctx->pc = 0x7F1BA878u;
    // 7F1BA878: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BA87C:
    ctx->pc = 0x7F1BA87Cu;
    // 7F1BA87C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA880:
    ctx->pc = 0x7F1BA880u;
    // 7F1BA880: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BA884:
    ctx->pc = 0x7F1BA884u;
    // 7F1BA884: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA888:
    ctx->pc = 0x7F1BA888u;
    // 7F1BA888: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BA88C:
    ctx->pc = 0x7F1BA88Cu;
    // 7F1BA88C: bl      0x7F026F84
    {
            ctx->lr = 0x7F1BA890u;
            ctx->pc = 0x7F026F84u;
            return;
    }

label_7F1BA890:
    ctx->pc = 0x7F1BA890u;
    ctx->downcount -= 3;
    // 7F1BA890: stw     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BA894:
    ctx->pc = 0x7F1BA894u;
    // 7F1BA894: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BA898:
    ctx->pc = 0x7F1BA898u;
    // 7F1BA898: bl      0x7F1BA490
    {
            ctx->lr = 0x7F1BA89Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BA490u;
                return;
            }
            goto label_7F1BA490;
    }

label_7F1BA89C:
    ctx->pc = 0x7F1BA89Cu;
    ctx->downcount -= 2;
    // 7F1BA89C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BA8A0:
    ctx->pc = 0x7F1BA8A0u;
    // 7F1BA8A0: bl      0x7F1BA098
    {
            ctx->lr = 0x7F1BA8A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BA098u;
                return;
            }
            goto label_7F1BA098;
    }

label_7F1BA8A4:
    ctx->pc = 0x7F1BA8A4u;
    ctx->downcount -= 2;
    // 7F1BA8A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BA8A8:
    ctx->pc = 0x7F1BA8A8u;
    // 7F1BA8A8: bl      0x7F1BA294
    {
            ctx->lr = 0x7F1BA8ACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BA294u;
                return;
            }
            goto label_7F1BA294;
    }

label_7F1BA8AC:
    ctx->pc = 0x7F1BA8ACu;
    ctx->downcount -= 2;
    // 7F1BA8AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BA8B0:
    ctx->pc = 0x7F1BA8B0u;
    // 7F1BA8B0: bl      0x7F1B9DA4
    {
            ctx->lr = 0x7F1BA8B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B9DA4u;
                return;
            }
            goto label_7F1B9DA4;
    }

label_7F1BA8B4:
    ctx->pc = 0x7F1BA8B4u;
    ctx->downcount -= 2;
    // 7F1BA8B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BA8B8:
    ctx->pc = 0x7F1BA8B8u;
    // 7F1BA8B8: bl      0x7F1B9F38
    {
            ctx->lr = 0x7F1BA8BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B9F38u;
                return;
            }
            goto label_7F1B9F38;
    }

label_7F1BA8BC:
    ctx->pc = 0x7F1BA8BCu;
    ctx->downcount -= 2;
    // 7F1BA8BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BA8C0:
    ctx->pc = 0x7F1BA8C0u;
    // 7F1BA8C0: bl      0x7F1B9AE4
    {
            ctx->lr = 0x7F1BA8C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B9AE4u;
                return;
            }
            goto label_7F1B9AE4;
    }

label_7F1BA8C4:
    ctx->pc = 0x7F1BA8C4u;
    ctx->downcount -= 2;
    // 7F1BA8C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BA8C8:
    ctx->pc = 0x7F1BA8C8u;
    // 7F1BA8C8: bl      0x7F1B9FF0
    {
            ctx->lr = 0x7F1BA8CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B9FF0u;
                return;
            }
            goto label_7F1B9FF0;
    }

label_7F1BA8CC:
    ctx->pc = 0x7F1BA8CCu;
    ctx->downcount -= 12;
    // 7F1BA8CC: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BA8D0:
    ctx->pc = 0x7F1BA8D0u;
    // 7F1BA8D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BA8D4:
    ctx->pc = 0x7F1BA8D4u;
    // 7F1BA8D4: lwz     r4, 128(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA8D8:
    ctx->pc = 0x7F1BA8D8u;
    // 7F1BA8D8: lwz     r0, 132(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA8DC:
    ctx->pc = 0x7F1BA8DCu;
    // 7F1BA8DC: stw     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1BA8E0:
    ctx->pc = 0x7F1BA8E0u;
    // 7F1BA8E0: stw     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA8E4:
    ctx->pc = 0x7F1BA8E4u;
    // 7F1BA8E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BA8E8:
    ctx->pc = 0x7F1BA8E8u;
    // 7F1BA8E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA8EC:
    ctx->pc = 0x7F1BA8ECu;
    // 7F1BA8EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BA8F0:
    ctx->pc = 0x7F1BA8F0u;
    // 7F1BA8F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BA8F4:
    ctx->pc = 0x7F1BA8F4u;
    // 7F1BA8F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BA8F8:
    ctx->pc = 0x7F1BA8F8u;
    ctx->downcount -= 9;
    // 7F1BA8F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BA8FC:
    ctx->pc = 0x7F1BA8FCu;
    // 7F1BA8FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BA900:
    ctx->pc = 0x7F1BA900u;
    // 7F1BA900: lis     r4, 32591
    ctx->gpr[4] = ((u32)(s32)(32591) << 16);

label_7F1BA904:
    ctx->pc = 0x7F1BA904u;
    // 7F1BA904: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA908:
    ctx->pc = 0x7F1BA908u;
    // 7F1BA908: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BA90C:
    ctx->pc = 0x7F1BA90Cu;
    // 7F1BA90C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA910:
    ctx->pc = 0x7F1BA910u;
    // 7F1BA910: lwz     r0, 28056(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28056);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA914:
    ctx->pc = 0x7F1BA914u;
    // 7F1BA914: rlwinm. r0, r0, 0, 29, 30
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

label_7F1BA918:
    ctx->pc = 0x7F1BA918u;
    // 7F1BA918: bc    12, 2, 0x7F1BA924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA924;
        }
    }

label_7F1BA91C:
    ctx->pc = 0x7F1BA91Cu;
    ctx->downcount -= 2;
    // 7F1BA91C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1BA920:
    ctx->pc = 0x7F1BA920u;
    // 7F1BA920: b       0x7F1BA98C
    {
            goto label_7F1BA98C;
    }

label_7F1BA924:
    ctx->pc = 0x7F1BA924u;
    ctx->downcount -= 4;
    // 7F1BA924: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BA928:
    ctx->pc = 0x7F1BA928u;
    // 7F1BA928: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA92C:
    ctx->pc = 0x7F1BA92Cu;
    // 7F1BA92C: cmpw    r4, r0
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

label_7F1BA930:
    ctx->pc = 0x7F1BA930u;
    // 7F1BA930: bc    4, 0, 0x7F1BA94C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA94C;
        }
    }

label_7F1BA934:
    ctx->pc = 0x7F1BA934u;
    ctx->downcount -= 2;
    // 7F1BA934: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA938:
    ctx->pc = 0x7F1BA938u;
    // 7F1BA938: bl      0x7F2E4DE4
    {
            ctx->lr = 0x7F1BA93Cu;
            ctx->pc = 0x7F2E4DE4u;
            return;
    }

label_7F1BA93C:
    ctx->pc = 0x7F1BA93Cu;
    ctx->downcount -= 4;
    // 7F1BA93C: lwz     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA940:
    ctx->pc = 0x7F1BA940u;
    // 7F1BA940: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_7F1BA944:
    ctx->pc = 0x7F1BA944u;
    // 7F1BA944: stw     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA948:
    ctx->pc = 0x7F1BA948u;
    // 7F1BA948: b       0x7F1BA988
    {
            goto label_7F1BA988;
    }

label_7F1BA94C:
    ctx->pc = 0x7F1BA94Cu;
    ctx->downcount -= 2;
    // 7F1BA94C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA950:
    ctx->pc = 0x7F1BA950u;
    // 7F1BA950: bl      0x7F2E50A0
    {
            ctx->lr = 0x7F1BA954u;
            ctx->pc = 0x7F2E50A0u;
            return;
    }

label_7F1BA954:
    ctx->pc = 0x7F1BA954u;
    ctx->downcount -= 2;
    // 7F1BA954: cmpwi   r3, 0
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

label_7F1BA958:
    ctx->pc = 0x7F1BA958u;
    // 7F1BA958: bc    4, 2, 0x7F1BA988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA988;
        }
    }

label_7F1BA95C:
    ctx->pc = 0x7F1BA95Cu;
    ctx->downcount -= 3;
    // 7F1BA95C: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA960:
    ctx->pc = 0x7F1BA960u;
    // 7F1BA960: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1BA964:
    ctx->pc = 0x7F1BA964u;
    // 7F1BA964: bl      0x7F2E4DE4
    {
            ctx->lr = 0x7F1BA968u;
            ctx->pc = 0x7F2E4DE4u;
            return;
    }

label_7F1BA968:
    ctx->pc = 0x7F1BA968u;
    ctx->downcount -= 3;
    // 7F1BA968: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BA96C:
    ctx->pc = 0x7F1BA96Cu;
    // 7F1BA96C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BA970:
    ctx->pc = 0x7F1BA970u;
    // 7F1BA970: bl      0x7F1BA764
    {
            ctx->lr = 0x7F1BA974u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BA764u;
                return;
            }
            goto label_7F1BA764;
    }

label_7F1BA974:
    ctx->pc = 0x7F1BA974u;
    ctx->downcount -= 2;
    // 7F1BA974: cmpwi   r3, 0
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

label_7F1BA978:
    ctx->pc = 0x7F1BA978u;
    // 7F1BA978: bc    12, 0, 0x7F1BA988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA988;
        }
    }

label_7F1BA97C:
    ctx->pc = 0x7F1BA97Cu;
    ctx->downcount -= 3;
    // 7F1BA97C: lis     r3, 32540
    ctx->gpr[3] = ((u32)(s32)(32540) << 16);

label_7F1BA980:
    ctx->pc = 0x7F1BA980u;
    // 7F1BA980: addi    r0, r3, -22412
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-22412);

label_7F1BA984:
    ctx->pc = 0x7F1BA984u;
    // 7F1BA984: stw     r0, 680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(680);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA988:
    ctx->pc = 0x7F1BA988u;
    ctx->downcount -= 1;
    // 7F1BA988: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BA98C:
    ctx->pc = 0x7F1BA98Cu;
    ctx->downcount -= 6;
    // 7F1BA98C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA990:
    ctx->pc = 0x7F1BA990u;
    // 7F1BA990: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BA994:
    ctx->pc = 0x7F1BA994u;
    // 7F1BA994: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BA998:
    ctx->pc = 0x7F1BA998u;
    // 7F1BA998: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BA99C:
    ctx->pc = 0x7F1BA99Cu;
    // 7F1BA99C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BA9A0:
    ctx->pc = 0x7F1BA9A0u;
    ctx->downcount -= 9;
    // 7F1BA9A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BA9A4:
    ctx->pc = 0x7F1BA9A4u;
    // 7F1BA9A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BA9A8:
    ctx->pc = 0x7F1BA9A8u;
    // 7F1BA9A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BA9AC:
    ctx->pc = 0x7F1BA9ACu;
    // 7F1BA9AC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BA9B0:
    ctx->pc = 0x7F1BA9B0u;
    // 7F1BA9B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BA9B4:
    ctx->pc = 0x7F1BA9B4u;
    // 7F1BA9B4: lwz     r12, 680(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(680);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F1BA9B8:
    ctx->pc = 0x7F1BA9B8u;
    // 7F1BA9B8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_7F1BA9BC:
    ctx->pc = 0x7F1BA9BCu;
    // 7F1BA9BC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x7F1BA9C0u;
            ctx->pc = target;
            return;
        }
    }

label_7F1BA9C0:
    ctx->pc = 0x7F1BA9C0u;
    ctx->downcount -= 3;
    // 7F1BA9C0: lwz     r0, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA9C4:
    ctx->pc = 0x7F1BA9C4u;
    // 7F1BA9C4: rlwinm. r0, r0, 0, 28, 28
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

label_7F1BA9C8:
    ctx->pc = 0x7F1BA9C8u;
    // 7F1BA9C8: bc    12, 2, 0x7F1BAA04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BAA04;
        }
    }

label_7F1BA9CC:
    ctx->pc = 0x7F1BA9CCu;
    ctx->downcount -= 4;
    // 7F1BA9CC: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F1BA9D0:
    ctx->pc = 0x7F1BA9D0u;
    // 7F1BA9D0: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BA9D4:
    ctx->pc = 0x7F1BA9D4u;
    // 7F1BA9D4: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F1BA9D8:
    ctx->pc = 0x7F1BA9D8u;
    // 7F1BA9D8: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1BA9DCu;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1BA9DC:
    ctx->pc = 0x7F1BA9DCu;
    ctx->downcount -= 2;
    // 7F1BA9DC: cmplwi  r3, 0x0000
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

label_7F1BA9E0:
    ctx->pc = 0x7F1BA9E0u;
    // 7F1BA9E0: bc    4, 2, 0x7F1BA9F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BA9F8;
        }
    }

label_7F1BA9E4:
    ctx->pc = 0x7F1BA9E4u;
    ctx->downcount -= 3;
    // 7F1BA9E4: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BA9E8:
    ctx->pc = 0x7F1BA9E8u;
    // 7F1BA9E8: addi    r3, r3, -6256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6256);

label_7F1BA9EC:
    ctx->pc = 0x7F1BA9ECu;
    // 7F1BA9EC: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1BA9F0u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1BA9F0:
    ctx->pc = 0x7F1BA9F0u;
    ctx->downcount -= 2;
    // 7F1BA9F0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BA9F4:
    ctx->pc = 0x7F1BA9F4u;
    // 7F1BA9F4: b       0x7F1BAA08
    {
            goto label_7F1BAA08;
    }

label_7F1BA9F8:
    ctx->pc = 0x7F1BA9F8u;
    ctx->downcount -= 3;
    // 7F1BA9F8: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BA9FC:
    ctx->pc = 0x7F1BA9FCu;
    // 7F1BA9FC: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F1BAA00:
    ctx->pc = 0x7F1BAA00u;
    // 7F1BAA00: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAA04:
    ctx->pc = 0x7F1BAA04u;
    ctx->downcount -= 1;
    // 7F1BAA04: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BAA08:
    ctx->pc = 0x7F1BAA08u;
    ctx->downcount -= 6;
    // 7F1BAA08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAA0C:
    ctx->pc = 0x7F1BAA0Cu;
    // 7F1BAA0C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BAA10:
    ctx->pc = 0x7F1BAA10u;
    // 7F1BAA10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAA14:
    ctx->pc = 0x7F1BAA14u;
    // 7F1BAA14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BAA18:
    ctx->pc = 0x7F1BAA18u;
    // 7F1BAA18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAA1C:
    ctx->pc = 0x7F1BAA1Cu;
    ctx->downcount -= 6;
    // 7F1BAA1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BAA20:
    ctx->pc = 0x7F1BAA20u;
    // 7F1BAA20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BAA24:
    ctx->pc = 0x7F1BAA24u;
    // 7F1BAA24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAA28:
    ctx->pc = 0x7F1BAA28u;
    // 7F1BAA28: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BAA2C:
    ctx->pc = 0x7F1BAA2Cu;
    // 7F1BAA2C: cmpwi   r3, 0
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

label_7F1BAA30:
    ctx->pc = 0x7F1BAA30u;
    // 7F1BAA30: bc    12, 0, 0x7F1BAA38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BAA38;
        }
    }

label_7F1BAA34:
    ctx->pc = 0x7F1BAA34u;
    ctx->downcount -= 1;
    // 7F1BAA34: bl      0x7F2E4F04
    {
            ctx->lr = 0x7F1BAA38u;
            ctx->pc = 0x7F2E4F04u;
            return;
    }

label_7F1BAA38:
    ctx->pc = 0x7F1BAA38u;
    ctx->downcount -= 5;
    // 7F1BAA38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAA3C:
    ctx->pc = 0x7F1BAA3Cu;
    // 7F1BAA3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAA40:
    ctx->pc = 0x7F1BAA40u;
    // 7F1BAA40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BAA44:
    ctx->pc = 0x7F1BAA44u;
    // 7F1BAA44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAA48:
    ctx->pc = 0x7F1BAA48u;
    ctx->downcount -= 13;
    // 7F1BAA48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BAA4C:
    ctx->pc = 0x7F1BAA4Cu;
    // 7F1BAA4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BAA50:
    ctx->pc = 0x7F1BAA50u;
    // 7F1BAA50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1BAA54:
    ctx->pc = 0x7F1BAA54u;
    // 7F1BAA54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1BAA58:
    ctx->pc = 0x7F1BAA58u;
    // 7F1BAA58: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAA5C:
    ctx->pc = 0x7F1BAA5Cu;
    // 7F1BAA5C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_7F1BAA60:
    ctx->pc = 0x7F1BAA60u;
    // 7F1BAA60: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1BAA64:
    ctx->pc = 0x7F1BAA64u;
    // 7F1BAA64: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BAA68:
    ctx->pc = 0x7F1BAA68u;
    // 7F1BAA68: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAA6C:
    ctx->pc = 0x7F1BAA6Cu;
    // 7F1BAA6C: lis     r3, 55
    ctx->gpr[3] = ((u32)(s32)(55) << 16);

label_7F1BAA70:
    ctx->pc = 0x7F1BAA70u;
    // 7F1BAA70: stw     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAA74:
    ctx->pc = 0x7F1BAA74u;
    // 7F1BAA74: addi    r3, r3, 14839
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14839);

label_7F1BAA78:
    ctx->pc = 0x7F1BAA78u;
    // 7F1BAA78: bl      0x7F2E4AE4
    {
            ctx->lr = 0x7F1BAA7Cu;
            ctx->pc = 0x7F2E4AE4u;
            return;
    }

label_7F1BAA7C:
    ctx->pc = 0x7F1BAA7Cu;
    ctx->downcount -= 2;
    // 7F1BAA7C: cmpwi   r3, 0
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

label_7F1BAA80:
    ctx->pc = 0x7F1BAA80u;
    // 7F1BAA80: bc    4, 0, 0x7F1BAA8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BAA8C;
        }
    }

label_7F1BAA84:
    ctx->pc = 0x7F1BAA84u;
    ctx->downcount -= 2;
    // 7F1BAA84: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1BAA88:
    ctx->pc = 0x7F1BAA88u;
    // 7F1BAA88: b       0x7F1BAB2C
    {
            goto label_7F1BAB2C;
    }

label_7F1BAA8C:
    ctx->pc = 0x7F1BAA8Cu;
    ctx->downcount -= 3;
    // 7F1BAA8C: stw     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BAA90:
    ctx->pc = 0x7F1BAA90u;
    // 7F1BAA90: lwz     r3, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BAA94:
    ctx->pc = 0x7F1BAA94u;
    // 7F1BAA94: bl      0x7F2E4BD0
    {
            ctx->lr = 0x7F1BAA98u;
            ctx->pc = 0x7F2E4BD0u;
            return;
    }

label_7F1BAA98:
    ctx->pc = 0x7F1BAA98u;
    ctx->downcount -= 10;
    // 7F1BAA98: stw     r3, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BAA9C:
    ctx->pc = 0x7F1BAA9Cu;
    // 7F1BAA9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_7F1BAAA0:
    ctx->pc = 0x7F1BAAA0u;
    // 7F1BAAA0: lis     r3, 32540
    ctx->gpr[3] = ((u32)(s32)(32540) << 16);

label_7F1BAAA4:
    ctx->pc = 0x7F1BAAA4u;
    // 7F1BAAA4: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_7F1BAAA8:
    ctx->pc = 0x7F1BAAA8u;
    // 7F1BAAA8: stw     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1BAAAC:
    ctx->pc = 0x7F1BAAACu;
    // 7F1BAAAC: addi    r4, r3, -22280
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-22280);

label_7F1BAAB0:
    ctx->pc = 0x7F1BAAB0u;
    // 7F1BAAB0: lis     r3, 30720
    ctx->gpr[3] = ((u32)(s32)(30720) << 16);

label_7F1BAAB4:
    ctx->pc = 0x7F1BAAB4u;
    // 7F1BAAB4: stw     r4, 680(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(680);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1BAAB8:
    ctx->pc = 0x7F1BAAB8u;
    // 7F1BAAB8: stw     r0, 672(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAABC:
    ctx->pc = 0x7F1BAABCu;
    // 7F1BAABC: bl      0x7F012050
    {
            ctx->lr = 0x7F1BAAC0u;
            ctx->pc = 0x7F012050u;
            return;
    }

label_7F1BAAC0:
    ctx->pc = 0x7F1BAAC0u;
    ctx->downcount -= 2;
    // 7F1BAAC0: cmpwi   r3, 0
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

label_7F1BAAC4:
    ctx->pc = 0x7F1BAAC4u;
    // 7F1BAAC4: bc    12, 2, 0x7F1BAAE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BAAE8;
        }
    }

label_7F1BAAC8:
    ctx->pc = 0x7F1BAAC8u;
    ctx->downcount -= 6;
    // 7F1BAAC8: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_7F1BAACC:
    ctx->pc = 0x7F1BAACCu;
    // 7F1BAACC: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F1BAAD0:
    ctx->pc = 0x7F1BAAD0u;
    // 7F1BAAD0: addi    r4, r4, -32543
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32543);

label_7F1BAAD4:
    ctx->pc = 0x7F1BAAD4u;
    // 7F1BAAD4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1BAAD8:
    ctx->pc = 0x7F1BAAD8u;
    // 7F1BAAD8: li      r6, 144
    ctx->gpr[6] = (u32)(s32)(144);

label_7F1BAADC:
    ctx->pc = 0x7F1BAADCu;
    // 7F1BAADC: bl      0x7F0BA2A4
    {
            ctx->lr = 0x7F1BAAE0u;
            ctx->pc = 0x7F0BA2A4u;
            return;
    }

label_7F1BAAE0:
    ctx->pc = 0x7F1BAAE0u;
    ctx->downcount -= 2;
    // 7F1BAAE0: stw     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BAAE4:
    ctx->pc = 0x7F1BAAE4u;
    // 7F1BAAE4: b       0x7F1BAB00
    {
            goto label_7F1BAB00;
    }

label_7F1BAAE8:
    ctx->pc = 0x7F1BAAE8u;
    ctx->downcount -= 5;
    // 7F1BAAE8: li      r3, 8192
    ctx->gpr[3] = (u32)(s32)(8192);

label_7F1BAAEC:
    ctx->pc = 0x7F1BAAECu;
    // 7F1BAAEC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_7F1BAAF0:
    ctx->pc = 0x7F1BAAF0u;
    // 7F1BAAF0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_7F1BAAF4:
    ctx->pc = 0x7F1BAAF4u;
    // 7F1BAAF4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1BAAF8:
    ctx->pc = 0x7F1BAAF8u;
    // 7F1BAAF8: bl      0x7F0BA2A4
    {
            ctx->lr = 0x7F1BAAFCu;
            ctx->pc = 0x7F0BA2A4u;
            return;
    }

label_7F1BAAFC:
    ctx->pc = 0x7F1BAAFCu;
    ctx->downcount -= 1;
    // 7F1BAAFC: stw     r3, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BAB00:
    ctx->pc = 0x7F1BAB00u;
    ctx->downcount -= 3;
    // 7F1BAB00: lwz     r4, 676(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(676);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BAB04:
    ctx->pc = 0x7F1BAB04u;
    // 7F1BAB04: cmplwi  r4, 0x0000
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

label_7F1BAB08:
    ctx->pc = 0x7F1BAB08u;
    // 7F1BAB08: bc    4, 2, 0x7F1BAB20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BAB20;
        }
    }

label_7F1BAB0C:
    ctx->pc = 0x7F1BAB0Cu;
    ctx->downcount -= 3;
    // 7F1BAB0C: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BAB10:
    ctx->pc = 0x7F1BAB10u;
    // 7F1BAB10: addi    r3, r3, -6224
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6224);

label_7F1BAB14:
    ctx->pc = 0x7F1BAB14u;
    // 7F1BAB14: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1BAB18u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1BAB18:
    ctx->pc = 0x7F1BAB18u;
    ctx->downcount -= 2;
    // 7F1BAB18: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1BAB1C:
    ctx->pc = 0x7F1BAB1Cu;
    // 7F1BAB1C: b       0x7F1BAB2C
    {
            goto label_7F1BAB2C;
    }

label_7F1BAB20:
    ctx->pc = 0x7F1BAB20u;
    ctx->downcount -= 2;
    // 7F1BAB20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BAB24:
    ctx->pc = 0x7F1BAB24u;
    // 7F1BAB24: bl      0x7F3C7F68
    {
            ctx->lr = 0x7F1BAB28u;
            ctx->pc = 0x7F3C7F68u;
            return;
    }

label_7F1BAB28:
    ctx->pc = 0x7F1BAB28u;
    ctx->downcount -= 1;
    // 7F1BAB28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BAB2C:
    ctx->pc = 0x7F1BAB2Cu;
    ctx->downcount -= 6;
    // 7F1BAB2C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAB30:
    ctx->pc = 0x7F1BAB30u;
    // 7F1BAB30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BAB34:
    ctx->pc = 0x7F1BAB34u;
    // 7F1BAB34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAB38:
    ctx->pc = 0x7F1BAB38u;
    // 7F1BAB38: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BAB3C:
    ctx->pc = 0x7F1BAB3Cu;
    // 7F1BAB3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAB40:
    ctx->pc = 0x7F1BAB40u;
    ctx->downcount -= 5;
    // 7F1BAB40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BAB44:
    ctx->pc = 0x7F1BAB44u;
    // 7F1BAB44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BAB48:
    ctx->pc = 0x7F1BAB48u;
    // 7F1BAB48: cmpwi   r4, 1
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

label_7F1BAB4C:
    ctx->pc = 0x7F1BAB4Cu;
    // 7F1BAB4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAB50:
    ctx->pc = 0x7F1BAB50u;
    // 7F1BAB50: bc    12, 2, 0x7F1BABAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BABAC;
        }
    }

label_7F1BAB54:
    ctx->pc = 0x7F1BAB54u;
    ctx->downcount -= 1;
    // 7F1BAB54: bc    4, 0, 0x7F1BABF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BABF4;
        }
    }

label_7F1BAB58:
    ctx->pc = 0x7F1BAB58u;
    ctx->downcount -= 2;
    // 7F1BAB58: cmpwi   r4, 0
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

label_7F1BAB5C:
    ctx->pc = 0x7F1BAB5Cu;
    // 7F1BAB5C: bc    4, 0, 0x7F1BAB64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BAB64;
        }
    }

label_7F1BAB60:
    ctx->pc = 0x7F1BAB60u;
    ctx->downcount -= 1;
    // 7F1BAB60: b       0x7F1BABF4
    {
            goto label_7F1BABF4;
    }

label_7F1BAB64:
    ctx->pc = 0x7F1BAB64u;
    ctx->downcount -= 7;
    // 7F1BAB64: lwz     r0, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAB68:
    ctx->pc = 0x7F1BAB68u;
    // 7F1BAB68: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F1BAB6C:
    ctx->pc = 0x7F1BAB6Cu;
    // 7F1BAB6C: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F1BAB70:
    ctx->pc = 0x7F1BAB70u;
    // 7F1BAB70: rlwinm r0, r0, 0, 29, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFF7u;
    }

label_7F1BAB74:
    ctx->pc = 0x7F1BAB74u;
    // 7F1BAB74: stw     r0, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAB78:
    ctx->pc = 0x7F1BAB78u;
    // 7F1BAB78: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BAB7C:
    ctx->pc = 0x7F1BAB7Cu;
    // 7F1BAB7C: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1BAB80u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1BAB80:
    ctx->pc = 0x7F1BAB80u;
    ctx->downcount -= 2;
    // 7F1BAB80: cmplwi  r3, 0x0000
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

label_7F1BAB84:
    ctx->pc = 0x7F1BAB84u;
    // 7F1BAB84: bc    4, 2, 0x7F1BAB9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BAB9C;
        }
    }

label_7F1BAB88:
    ctx->pc = 0x7F1BAB88u;
    ctx->downcount -= 3;
    // 7F1BAB88: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BAB8C:
    ctx->pc = 0x7F1BAB8Cu;
    // 7F1BAB8C: addi    r3, r3, -6256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6256);

label_7F1BAB90:
    ctx->pc = 0x7F1BAB90u;
    // 7F1BAB90: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1BAB94u;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1BAB94:
    ctx->pc = 0x7F1BAB94u;
    ctx->downcount -= 2;
    // 7F1BAB94: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BAB98:
    ctx->pc = 0x7F1BAB98u;
    // 7F1BAB98: b       0x7F1BAC00
    {
            goto label_7F1BAC00;
    }

label_7F1BAB9C:
    ctx->pc = 0x7F1BAB9Cu;
    ctx->downcount -= 4;
    // 7F1BAB9C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BABA0:
    ctx->pc = 0x7F1BABA0u;
    // 7F1BABA0: rlwinm r0, r0, 0, 17, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFF7FFFu;
    }

label_7F1BABA4:
    ctx->pc = 0x7F1BABA4u;
    // 7F1BABA4: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BABA8:
    ctx->pc = 0x7F1BABA8u;
    // 7F1BABA8: b       0x7F1BABFC
    {
            goto label_7F1BABFC;
    }

label_7F1BABAC:
    ctx->pc = 0x7F1BABACu;
    ctx->downcount -= 7;
    // 7F1BABAC: lwz     r0, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BABB0:
    ctx->pc = 0x7F1BABB0u;
    // 7F1BABB0: lis     r4, 42
    ctx->gpr[4] = ((u32)(s32)(42) << 16);

label_7F1BABB4:
    ctx->pc = 0x7F1BABB4u;
    // 7F1BABB4: addi    r4, r4, 17972
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17972);

label_7F1BABB8:
    ctx->pc = 0x7F1BABB8u;
    // 7F1BABB8: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_7F1BABBC:
    ctx->pc = 0x7F1BABBCu;
    // 7F1BABBC: stw     r0, 672(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(672);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BABC0:
    ctx->pc = 0x7F1BABC0u;
    // 7F1BABC0: lwz     r3, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BABC4:
    ctx->pc = 0x7F1BABC4u;
    // 7F1BABC4: bl      0x7F2E4FB0
    {
            ctx->lr = 0x7F1BABC8u;
            ctx->pc = 0x7F2E4FB0u;
            return;
    }

label_7F1BABC8:
    ctx->pc = 0x7F1BABC8u;
    ctx->downcount -= 2;
    // 7F1BABC8: cmplwi  r3, 0x0000
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

label_7F1BABCC:
    ctx->pc = 0x7F1BABCCu;
    // 7F1BABCC: bc    4, 2, 0x7F1BABE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BABE4;
        }
    }

label_7F1BABD0:
    ctx->pc = 0x7F1BABD0u;
    ctx->downcount -= 3;
    // 7F1BABD0: lis     r3, 32584
    ctx->gpr[3] = ((u32)(s32)(32584) << 16);

label_7F1BABD4:
    ctx->pc = 0x7F1BABD4u;
    // 7F1BABD4: addi    r3, r3, -6256
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-6256);

label_7F1BABD8:
    ctx->pc = 0x7F1BABD8u;
    // 7F1BABD8: bl      0x7F275ECC
    {
            ctx->lr = 0x7F1BABDCu;
            ctx->pc = 0x7F275ECCu;
            return;
    }

label_7F1BABDC:
    ctx->pc = 0x7F1BABDCu;
    ctx->downcount -= 2;
    // 7F1BABDC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BABE0:
    ctx->pc = 0x7F1BABE0u;
    // 7F1BABE0: b       0x7F1BAC00
    {
            goto label_7F1BAC00;
    }

label_7F1BABE4:
    ctx->pc = 0x7F1BABE4u;
    ctx->downcount -= 4;
    // 7F1BABE4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BABE8:
    ctx->pc = 0x7F1BABE8u;
    // 7F1BABE8: ori     r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] | 0x8000u;

label_7F1BABEC:
    ctx->pc = 0x7F1BABECu;
    // 7F1BABEC: stw     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BABF0:
    ctx->pc = 0x7F1BABF0u;
    // 7F1BABF0: b       0x7F1BABFC
    {
            goto label_7F1BABFC;
    }

label_7F1BABF4:
    ctx->pc = 0x7F1BABF4u;
    ctx->downcount -= 1;
    // 7F1BABF4: bl      0x7F3C7F24
    {
            ctx->lr = 0x7F1BABF8u;
            ctx->pc = 0x7F3C7F24u;
            return;
    }

label_7F1BABF8:
    ctx->pc = 0x7F1BABF8u;
    ctx->downcount -= 1;
    // 7F1BABF8: b       0x7F1BAC00
    {
            goto label_7F1BAC00;
    }

label_7F1BABFC:
    ctx->pc = 0x7F1BABFCu;
    ctx->downcount -= 1;
    // 7F1BABFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BAC00:
    ctx->pc = 0x7F1BAC00u;
    ctx->downcount -= 5;
    // 7F1BAC00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAC04:
    ctx->pc = 0x7F1BAC04u;
    // 7F1BAC04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAC08:
    ctx->pc = 0x7F1BAC08u;
    // 7F1BAC08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BAC0C:
    ctx->pc = 0x7F1BAC0Cu;
    // 7F1BAC0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAC10:
    ctx->pc = 0x7F1BAC10u;
    ctx->downcount -= 9;
    // 7F1BAC10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BAC14:
    ctx->pc = 0x7F1BAC14u;
    // 7F1BAC14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BAC18:
    ctx->pc = 0x7F1BAC18u;
    // 7F1BAC18: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_7F1BAC1C:
    ctx->pc = 0x7F1BAC1Cu;
    // 7F1BAC1C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1BAC20:
    ctx->pc = 0x7F1BAC20u;
    // 7F1BAC20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAC24:
    ctx->pc = 0x7F1BAC24u;
    // 7F1BAC24: li      r5, 684
    ctx->gpr[5] = (u32)(s32)(684);

label_7F1BAC28:
    ctx->pc = 0x7F1BAC28u;
    // 7F1BAC28: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_7F1BAC2C:
    ctx->pc = 0x7F1BAC2Cu;
    // 7F1BAC2C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BAC30:
    ctx->pc = 0x7F1BAC30u;
    // 7F1BAC30: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1BAC34u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1BAC34:
    ctx->pc = 0x7F1BAC34u;
    ctx->downcount -= 2;
    // 7F1BAC34: or.   r31, r3, r3
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

label_7F1BAC38:
    ctx->pc = 0x7F1BAC38u;
    // 7F1BAC38: bc    12, 2, 0x7F1BACA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BACA8;
        }
    }

label_7F1BAC3C:
    ctx->pc = 0x7F1BAC3Cu;
    ctx->downcount -= 5;
    // 7F1BAC3C: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1BAC40:
    ctx->pc = 0x7F1BAC40u;
    // 7F1BAC40: lis     r5, 32540
    ctx->gpr[5] = ((u32)(s32)(32540) << 16);

label_7F1BAC44:
    ctx->pc = 0x7F1BAC44u;
    // 7F1BAC44: addi    r4, r4, -22112
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22112);

label_7F1BAC48:
    ctx->pc = 0x7F1BAC48u;
    // 7F1BAC48: addi    r5, r5, -21988
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21988);

label_7F1BAC4C:
    ctx->pc = 0x7F1BAC4Cu;
    // 7F1BAC4C: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1BAC50u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1BAC50:
    ctx->pc = 0x7F1BAC50u;
    ctx->downcount -= 12;
    // 7F1BAC50: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAC54:
    ctx->pc = 0x7F1BAC54u;
    // 7F1BAC54: lis     r4, 32572
    ctx->gpr[4] = ((u32)(s32)(32572) << 16);

label_7F1BAC58:
    ctx->pc = 0x7F1BAC58u;
    // 7F1BAC58: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_7F1BAC5C:
    ctx->pc = 0x7F1BAC5Cu;
    // 7F1BAC5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BAC60:
    ctx->pc = 0x7F1BAC60u;
    // 7F1BAC60: ori     r6, r0, 0x0080
    ctx->gpr[6] = ctx->gpr[0] | 0x0080u;

label_7F1BAC64:
    ctx->pc = 0x7F1BAC64u;
    // 7F1BAC64: addi    r0, r4, 32548
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(32548);

label_7F1BAC68:
    ctx->pc = 0x7F1BAC68u;
    // 7F1BAC68: stw     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BAC6C:
    ctx->pc = 0x7F1BAC6Cu;
    // 7F1BAC6C: stw     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BAC70:
    ctx->pc = 0x7F1BAC70u;
    // 7F1BAC70: stw     r5, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BAC74:
    ctx->pc = 0x7F1BAC74u;
    // 7F1BAC74: stw     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BAC78:
    ctx->pc = 0x7F1BAC78u;
    // 7F1BAC78: stw     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAC7C:
    ctx->pc = 0x7F1BAC7Cu;
    // 7F1BAC7C: bl      0x7F1BAA48
    {
            ctx->lr = 0x7F1BAC80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BAA48u;
                return;
            }
            goto label_7F1BAA48;
    }

label_7F1BAC80:
    ctx->pc = 0x7F1BAC80u;
    ctx->downcount -= 2;
    // 7F1BAC80: cmpwi   r3, 0
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

label_7F1BAC84:
    ctx->pc = 0x7F1BAC84u;
    // 7F1BAC84: bc    4, 0, 0x7F1BAC98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BAC98;
        }
    }

label_7F1BAC88:
    ctx->pc = 0x7F1BAC88u;
    ctx->downcount -= 2;
    // 7F1BAC88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BAC8C:
    ctx->pc = 0x7F1BAC8Cu;
    // 7F1BAC8C: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1BAC90u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1BAC90:
    ctx->pc = 0x7F1BAC90u;
    ctx->downcount -= 2;
    // 7F1BAC90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BAC94:
    ctx->pc = 0x7F1BAC94u;
    // 7F1BAC94: b       0x7F1BACAC
    {
            goto label_7F1BACAC;
    }

label_7F1BAC98:
    ctx->pc = 0x7F1BAC98u;
    ctx->downcount -= 4;
    // 7F1BAC98: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1BAC9C:
    ctx->pc = 0x7F1BAC9Cu;
    // 7F1BAC9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BACA0:
    ctx->pc = 0x7F1BACA0u;
    // 7F1BACA0: addi    r4, r4, -21696
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-21696);

label_7F1BACA4:
    ctx->pc = 0x7F1BACA4u;
    // 7F1BACA4: bl      0x7F3C8990
    {
            ctx->lr = 0x7F1BACA8u;
            ctx->pc = 0x7F3C8990u;
            return;
    }

label_7F1BACA8:
    ctx->pc = 0x7F1BACA8u;
    ctx->downcount -= 1;
    // 7F1BACA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BACAC:
    ctx->pc = 0x7F1BACACu;
    ctx->downcount -= 6;
    // 7F1BACAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BACB0:
    ctx->pc = 0x7F1BACB0u;
    // 7F1BACB0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BACB4:
    ctx->pc = 0x7F1BACB4u;
    // 7F1BACB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BACB8:
    ctx->pc = 0x7F1BACB8u;
    // 7F1BACB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BACBC:
    ctx->pc = 0x7F1BACBCu;
    // 7F1BACBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BACC0:
    ctx->pc = 0x7F1BACC0u;
    ctx->downcount -= 4;
    // 7F1BACC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BACC4:
    ctx->pc = 0x7F1BACC4u;
    // 7F1BACC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BACC8:
    ctx->pc = 0x7F1BACC8u;
    // 7F1BACC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BACCC:
    ctx->pc = 0x7F1BACCCu;
    // 7F1BACCC: bl      0x7F1BAC10
    {
            ctx->lr = 0x7F1BACD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BAC10u;
                return;
            }
            goto label_7F1BAC10;
    }

label_7F1BACD0:
    ctx->pc = 0x7F1BACD0u;
    ctx->downcount -= 5;
    // 7F1BACD0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BACD4:
    ctx->pc = 0x7F1BACD4u;
    // 7F1BACD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BACD8:
    ctx->pc = 0x7F1BACD8u;
    // 7F1BACD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BACDC:
    ctx->pc = 0x7F1BACDCu;
    // 7F1BACDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BACE0:
    ctx->pc = 0x7F1BACE0u;
    ctx->downcount -= 7;
    // 7F1BACE0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BACE4:
    ctx->pc = 0x7F1BACE4u;
    // 7F1BACE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BACE8:
    ctx->pc = 0x7F1BACE8u;
    // 7F1BACE8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BACEC:
    ctx->pc = 0x7F1BACECu;
    // 7F1BACEC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BACF0:
    ctx->pc = 0x7F1BACF0u;
    // 7F1BACF0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BACF4:
    ctx->pc = 0x7F1BACF4u;
    // 7F1BACF4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BACF8:
    ctx->pc = 0x7F1BACF8u;
    // 7F1BACF8: bl      0x80025A08
    {
            ctx->lr = 0x7F1BACFCu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BACFC:
    ctx->pc = 0x7F1BACFCu;
    ctx->downcount -= 4;
    // 7F1BACFC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAD00:
    ctx->pc = 0x7F1BAD00u;
    // 7F1BAD00: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAD00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAD04:
    ctx->pc = 0x7F1BAD04u;
    // 7F1BAD04: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAD08:
    ctx->pc = 0x7F1BAD08u;
    // 7F1BAD08: bl      0x7F114738
    {
            ctx->lr = 0x7F1BAD0Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BAD0C:
    ctx->pc = 0x7F1BAD0Cu;
    ctx->downcount -= 4;
    // 7F1BAD0C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAD10:
    ctx->pc = 0x7F1BAD10u;
    // 7F1BAD10: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAD10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAD14:
    ctx->pc = 0x7F1BAD14u;
    // 7F1BAD14: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAD18:
    ctx->pc = 0x7F1BAD18u;
    // 7F1BAD18: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BAD1Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BAD1C:
    ctx->pc = 0x7F1BAD1Cu;
    ctx->downcount -= 4;
    // 7F1BAD1C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAD20:
    ctx->pc = 0x7F1BAD20u;
    // 7F1BAD20: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAD20u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAD24:
    ctx->pc = 0x7F1BAD24u;
    // 7F1BAD24: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAD28:
    ctx->pc = 0x7F1BAD28u;
    // 7F1BAD28: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BAD2Cu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BAD2C:
    ctx->pc = 0x7F1BAD2Cu;
    ctx->downcount -= 23;
    // 7F1BAD2C: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BAD30:
    ctx->pc = 0x7F1BAD30u;
    // 7F1BAD30: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAD34:
    ctx->pc = 0x7F1BAD34u;
    // 7F1BAD34: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BAD38:
    ctx->pc = 0x7F1BAD38u;
    // 7F1BAD38: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAD3C:
    ctx->pc = 0x7F1BAD3Cu;
    // 7F1BAD3C: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1BAD40:
    ctx->pc = 0x7F1BAD40u;
    // 7F1BAD40: rlwinm r8, r4, 16, 0, 15
    {
        ctx->gpr[8] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1BAD44:
    ctx->pc = 0x7F1BAD44u;
    // 7F1BAD44: lwz     r9, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1BAD48:
    ctx->pc = 0x7F1BAD48u;
    // 7F1BAD48: rlwinm r6, r0, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 8u) & 0xFFFFFF00u;
    }

label_7F1BAD4C:
    ctx->pc = 0x7F1BAD4Cu;
    // 7F1BAD4C: lwz     r7, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1BAD50:
    ctx->pc = 0x7F1BAD50u;
    // 7F1BAD50: or   r0, r9, r5
    {
        ctx->gpr[0] = ctx->gpr[9] | ctx->gpr[5];
    }

label_7F1BAD54:
    ctx->pc = 0x7F1BAD54u;
    // 7F1BAD54: lwz     r5, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BAD58:
    ctx->pc = 0x7F1BAD58u;
    // 7F1BAD58: lwz     r4, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BAD5C:
    ctx->pc = 0x7F1BAD5Cu;
    // 7F1BAD5C: or   r8, r0, r8
    {
        ctx->gpr[8] = ctx->gpr[0] | ctx->gpr[8];
    }

label_7F1BAD60:
    ctx->pc = 0x7F1BAD60u;
    // 7F1BAD60: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAD64:
    ctx->pc = 0x7F1BAD64u;
    // 7F1BAD64: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1BAD68:
    ctx->pc = 0x7F1BAD68u;
    // 7F1BAD68: rlwinm r5, r5, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 16u) & 0xFFFF0000u;
    }

label_7F1BAD6C:
    ctx->pc = 0x7F1BAD6Cu;
    // 7F1BAD6C: rlwinm r4, r4, 24, 0, 7
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 24u) & 0xFF000000u;
    }

label_7F1BAD70:
    ctx->pc = 0x7F1BAD70u;
    // 7F1BAD70: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1BAD74:
    ctx->pc = 0x7F1BAD74u;
    // 7F1BAD74: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAD74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAD78:
    ctx->pc = 0x7F1BAD78u;
    // 7F1BAD78: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1BAD7C:
    ctx->pc = 0x7F1BAD7Cu;
    // 7F1BAD7C: or   r4, r8, r4
    {
        ctx->gpr[4] = ctx->gpr[8] | ctx->gpr[4];
    }

label_7F1BAD80:
    ctx->pc = 0x7F1BAD80u;
    // 7F1BAD80: or   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] | ctx->gpr[0];
    }

label_7F1BAD84:
    ctx->pc = 0x7F1BAD84u;
    // 7F1BAD84: bl      0x7F457240
    {
            ctx->lr = 0x7F1BAD88u;
            ctx->pc = 0x7F457240u;
            return;
    }

label_7F1BAD88:
    ctx->pc = 0x7F1BAD88u;
    ctx->downcount -= 6;
    // 7F1BAD88: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAD8C:
    ctx->pc = 0x7F1BAD8Cu;
    // 7F1BAD8C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BAD90:
    ctx->pc = 0x7F1BAD90u;
    // 7F1BAD90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAD94:
    ctx->pc = 0x7F1BAD94u;
    // 7F1BAD94: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BAD98:
    ctx->pc = 0x7F1BAD98u;
    // 7F1BAD98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAD9C:
    ctx->pc = 0x7F1BAD9Cu;
    ctx->downcount -= 7;
    // 7F1BAD9C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BADA0:
    ctx->pc = 0x7F1BADA0u;
    // 7F1BADA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BADA4:
    ctx->pc = 0x7F1BADA4u;
    // 7F1BADA4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BADA8:
    ctx->pc = 0x7F1BADA8u;
    // 7F1BADA8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BADAC:
    ctx->pc = 0x7F1BADACu;
    // 7F1BADAC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BADB0:
    ctx->pc = 0x7F1BADB0u;
    // 7F1BADB0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BADB4:
    ctx->pc = 0x7F1BADB4u;
    // 7F1BADB4: bl      0x80025A08
    {
            ctx->lr = 0x7F1BADB8u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BADB8:
    ctx->pc = 0x7F1BADB8u;
    ctx->downcount -= 4;
    // 7F1BADB8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BADBC:
    ctx->pc = 0x7F1BADBCu;
    // 7F1BADBC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BADBCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BADC0:
    ctx->pc = 0x7F1BADC0u;
    // 7F1BADC0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BADC4:
    ctx->pc = 0x7F1BADC4u;
    // 7F1BADC4: bl      0x7F114738
    {
            ctx->lr = 0x7F1BADC8u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BADC8:
    ctx->pc = 0x7F1BADC8u;
    ctx->downcount -= 4;
    // 7F1BADC8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BADCC:
    ctx->pc = 0x7F1BADCCu;
    // 7F1BADCC: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BADCCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BADD0:
    ctx->pc = 0x7F1BADD0u;
    // 7F1BADD0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BADD4:
    ctx->pc = 0x7F1BADD4u;
    // 7F1BADD4: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BADD8u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BADD8:
    ctx->pc = 0x7F1BADD8u;
    ctx->downcount -= 4;
    // 7F1BADD8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BADDC:
    ctx->pc = 0x7F1BADDCu;
    // 7F1BADDC: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BADDCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BADE0:
    ctx->pc = 0x7F1BADE0u;
    // 7F1BADE0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BADE4:
    ctx->pc = 0x7F1BADE4u;
    // 7F1BADE4: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BADE8u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BADE8:
    ctx->pc = 0x7F1BADE8u;
    ctx->downcount -= 14;
    // 7F1BADE8: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BADEC:
    ctx->pc = 0x7F1BADECu;
    // 7F1BADEC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BADF0:
    ctx->pc = 0x7F1BADF0u;
    // 7F1BADF0: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BADF4:
    ctx->pc = 0x7F1BADF4u;
    // 7F1BADF4: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BADF8:
    ctx->pc = 0x7F1BADF8u;
    // 7F1BADF8: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1BADFC:
    ctx->pc = 0x7F1BADFCu;
    // 7F1BADFC: lwz     r6, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BAE00:
    ctx->pc = 0x7F1BAE00u;
    // 7F1BAE00: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1BAE04:
    ctx->pc = 0x7F1BAE04u;
    // 7F1BAE04: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1BAE08:
    ctx->pc = 0x7F1BAE08u;
    // 7F1BAE08: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAE08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAE0C:
    ctx->pc = 0x7F1BAE0Cu;
    // 7F1BAE0C: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1BAE10:
    ctx->pc = 0x7F1BAE10u;
    // 7F1BAE10: lfs     f2, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAE10u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BAE14:
    ctx->pc = 0x7F1BAE14u;
    // 7F1BAE14: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1BAE18:
    ctx->pc = 0x7F1BAE18u;
    // 7F1BAE18: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1BAE1C:
    ctx->pc = 0x7F1BAE1Cu;
    // 7F1BAE1C: bl      0x7F45861C
    {
            ctx->lr = 0x7F1BAE20u;
            ctx->pc = 0x7F45861Cu;
            return;
    }

label_7F1BAE20:
    ctx->pc = 0x7F1BAE20u;
    ctx->downcount -= 6;
    // 7F1BAE20: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAE24:
    ctx->pc = 0x7F1BAE24u;
    // 7F1BAE24: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BAE28:
    ctx->pc = 0x7F1BAE28u;
    // 7F1BAE28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAE2C:
    ctx->pc = 0x7F1BAE2Cu;
    // 7F1BAE2C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BAE30:
    ctx->pc = 0x7F1BAE30u;
    // 7F1BAE30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAE34:
    ctx->pc = 0x7F1BAE34u;
    ctx->downcount -= 7;
    // 7F1BAE34: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BAE38:
    ctx->pc = 0x7F1BAE38u;
    // 7F1BAE38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BAE3C:
    ctx->pc = 0x7F1BAE3Cu;
    // 7F1BAE3C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAE40:
    ctx->pc = 0x7F1BAE40u;
    // 7F1BAE40: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAE44:
    ctx->pc = 0x7F1BAE44u;
    // 7F1BAE44: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BAE48:
    ctx->pc = 0x7F1BAE48u;
    // 7F1BAE48: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BAE4C:
    ctx->pc = 0x7F1BAE4Cu;
    // 7F1BAE4C: bl      0x80025A08
    {
            ctx->lr = 0x7F1BAE50u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BAE50:
    ctx->pc = 0x7F1BAE50u;
    ctx->downcount -= 4;
    // 7F1BAE50: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAE54:
    ctx->pc = 0x7F1BAE54u;
    // 7F1BAE54: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAE54u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAE58:
    ctx->pc = 0x7F1BAE58u;
    // 7F1BAE58: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAE5C:
    ctx->pc = 0x7F1BAE5Cu;
    // 7F1BAE5C: bl      0x7F114738
    {
            ctx->lr = 0x7F1BAE60u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BAE60:
    ctx->pc = 0x7F1BAE60u;
    ctx->downcount -= 4;
    // 7F1BAE60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAE64:
    ctx->pc = 0x7F1BAE64u;
    // 7F1BAE64: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAE64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAE68:
    ctx->pc = 0x7F1BAE68u;
    // 7F1BAE68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAE6C:
    ctx->pc = 0x7F1BAE6Cu;
    // 7F1BAE6C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BAE70u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BAE70:
    ctx->pc = 0x7F1BAE70u;
    ctx->downcount -= 4;
    // 7F1BAE70: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAE74:
    ctx->pc = 0x7F1BAE74u;
    // 7F1BAE74: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAE74u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAE78:
    ctx->pc = 0x7F1BAE78u;
    // 7F1BAE78: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAE7C:
    ctx->pc = 0x7F1BAE7Cu;
    // 7F1BAE7C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BAE80u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BAE80:
    ctx->pc = 0x7F1BAE80u;
    ctx->downcount -= 13;
    // 7F1BAE80: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BAE84:
    ctx->pc = 0x7F1BAE84u;
    // 7F1BAE84: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAE88:
    ctx->pc = 0x7F1BAE88u;
    // 7F1BAE88: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BAE8C:
    ctx->pc = 0x7F1BAE8Cu;
    // 7F1BAE8C: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAE90:
    ctx->pc = 0x7F1BAE90u;
    // 7F1BAE90: rlwinm r6, r5, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1BAE94:
    ctx->pc = 0x7F1BAE94u;
    // 7F1BAE94: lwz     r7, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1BAE98:
    ctx->pc = 0x7F1BAE98u;
    // 7F1BAE98: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1BAE9C:
    ctx->pc = 0x7F1BAE9Cu;
    // 7F1BAE9C: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1BAEA0:
    ctx->pc = 0x7F1BAEA0u;
    // 7F1BAEA0: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BAEA4:
    ctx->pc = 0x7F1BAEA4u;
    // 7F1BAEA4: or   r6, r7, r6
    {
        ctx->gpr[6] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1BAEA8:
    ctx->pc = 0x7F1BAEA8u;
    // 7F1BAEA8: or   r4, r6, r4
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[4];
    }

label_7F1BAEAC:
    ctx->pc = 0x7F1BAEACu;
    // 7F1BAEAC: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1BAEB0:
    ctx->pc = 0x7F1BAEB0u;
    // 7F1BAEB0: bl      0x7F459CF4
    {
            ctx->lr = 0x7F1BAEB4u;
            ctx->pc = 0x7F459CF4u;
            return;
    }

label_7F1BAEB4:
    ctx->pc = 0x7F1BAEB4u;
    ctx->downcount -= 6;
    // 7F1BAEB4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAEB8:
    ctx->pc = 0x7F1BAEB8u;
    // 7F1BAEB8: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BAEBC:
    ctx->pc = 0x7F1BAEBCu;
    // 7F1BAEBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAEC0:
    ctx->pc = 0x7F1BAEC0u;
    // 7F1BAEC0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BAEC4:
    ctx->pc = 0x7F1BAEC4u;
    // 7F1BAEC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAEC8:
    ctx->pc = 0x7F1BAEC8u;
    ctx->downcount -= 7;
    // 7F1BAEC8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BAECC:
    ctx->pc = 0x7F1BAECCu;
    // 7F1BAECC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BAED0:
    ctx->pc = 0x7F1BAED0u;
    // 7F1BAED0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAED4:
    ctx->pc = 0x7F1BAED4u;
    // 7F1BAED4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAED8:
    ctx->pc = 0x7F1BAED8u;
    // 7F1BAED8: stw     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BAEDC:
    ctx->pc = 0x7F1BAEDCu;
    // 7F1BAEDC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BAEE0:
    ctx->pc = 0x7F1BAEE0u;
    // 7F1BAEE0: bl      0x80025A08
    {
            ctx->lr = 0x7F1BAEE4u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BAEE4:
    ctx->pc = 0x7F1BAEE4u;
    ctx->downcount -= 4;
    // 7F1BAEE4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAEE8:
    ctx->pc = 0x7F1BAEE8u;
    // 7F1BAEE8: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAEE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAEEC:
    ctx->pc = 0x7F1BAEECu;
    // 7F1BAEEC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAEF0:
    ctx->pc = 0x7F1BAEF0u;
    // 7F1BAEF0: bl      0x7F114738
    {
            ctx->lr = 0x7F1BAEF4u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BAEF4:
    ctx->pc = 0x7F1BAEF4u;
    ctx->downcount -= 4;
    // 7F1BAEF4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAEF8:
    ctx->pc = 0x7F1BAEF8u;
    // 7F1BAEF8: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAEF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAEFC:
    ctx->pc = 0x7F1BAEFCu;
    // 7F1BAEFC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAF00:
    ctx->pc = 0x7F1BAF00u;
    // 7F1BAF00: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BAF04u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BAF04:
    ctx->pc = 0x7F1BAF04u;
    ctx->downcount -= 4;
    // 7F1BAF04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAF08:
    ctx->pc = 0x7F1BAF08u;
    // 7F1BAF08: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAF08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAF0C:
    ctx->pc = 0x7F1BAF0Cu;
    // 7F1BAF0C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAF10:
    ctx->pc = 0x7F1BAF10u;
    // 7F1BAF10: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BAF14u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BAF14:
    ctx->pc = 0x7F1BAF14u;
    ctx->downcount -= 22;
    // 7F1BAF14: lwz     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BAF18:
    ctx->pc = 0x7F1BAF18u;
    // 7F1BAF18: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BAF1C:
    ctx->pc = 0x7F1BAF1Cu;
    // 7F1BAF1C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BAF20:
    ctx->pc = 0x7F1BAF20u;
    // 7F1BAF20: lwz     r6, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BAF24:
    ctx->pc = 0x7F1BAF24u;
    // 7F1BAF24: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BAF28:
    ctx->pc = 0x7F1BAF28u;
    // 7F1BAF28: lwz     r5, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BAF2C:
    ctx->pc = 0x7F1BAF2Cu;
    // 7F1BAF2C: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BAF30:
    ctx->pc = 0x7F1BAF30u;
    // 7F1BAF30: addi    r3, r4, 7688
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(7688);

label_7F1BAF34:
    ctx->pc = 0x7F1BAF34u;
    // 7F1BAF34: lwz     r4, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BAF38:
    ctx->pc = 0x7F1BAF38u;
    // 7F1BAF38: rlwinm r6, r6, 8, 0, 23
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 8u) & 0xFFFFFF00u;
    }

label_7F1BAF3C:
    ctx->pc = 0x7F1BAF3Cu;
    // 7F1BAF3C: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAF40:
    ctx->pc = 0x7F1BAF40u;
    // 7F1BAF40: rlwinm r5, r5, 16, 0, 15
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 16u) & 0xFFFF0000u;
    }

label_7F1BAF44:
    ctx->pc = 0x7F1BAF44u;
    // 7F1BAF44: lwz     r7, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1BAF48:
    ctx->pc = 0x7F1BAF48u;
    // 7F1BAF48: rlwinm r0, r4, 25, 0, 6
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 25u) & 0xFE000000u;
    }

label_7F1BAF4C:
    ctx->pc = 0x7F1BAF4Cu;
    // 7F1BAF4C: lfd     f1, 0(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAF4Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BAF50:
    ctx->pc = 0x7F1BAF50u;
    // 7F1BAF50: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAF54:
    ctx->pc = 0x7F1BAF54u;
    // 7F1BAF54: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAF54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BAF58:
    ctx->pc = 0x7F1BAF58u;
    // 7F1BAF58: or   r4, r7, r6
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[6];
    }

label_7F1BAF5C:
    ctx->pc = 0x7F1BAF5Cu;
    // 7F1BAF5C: or   r4, r4, r5
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[5];
    }

label_7F1BAF60:
    ctx->pc = 0x7F1BAF60u;
    // 7F1BAF60: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BAF60u)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_7F1BAF64:
    ctx->pc = 0x7F1BAF64u;
    // 7F1BAF64: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1BAF68:
    ctx->pc = 0x7F1BAF68u;
    // 7F1BAF68: bl      0x7F3D70E8
    {
            ctx->lr = 0x7F1BAF6Cu;
            ctx->pc = 0x7F3D70E8u;
            return;
    }

label_7F1BAF6C:
    ctx->pc = 0x7F1BAF6Cu;
    ctx->downcount -= 6;
    // 7F1BAF6C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAF70:
    ctx->pc = 0x7F1BAF70u;
    // 7F1BAF70: lwz     r31, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BAF74:
    ctx->pc = 0x7F1BAF74u;
    // 7F1BAF74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAF78:
    ctx->pc = 0x7F1BAF78u;
    // 7F1BAF78: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_7F1BAF7C:
    ctx->pc = 0x7F1BAF7Cu;
    // 7F1BAF7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAF80:
    ctx->pc = 0x7F1BAF80u;
    ctx->downcount -= 4;
    // 7F1BAF80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BAF84:
    ctx->pc = 0x7F1BAF84u;
    // 7F1BAF84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BAF88:
    ctx->pc = 0x7F1BAF88u;
    // 7F1BAF88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAF8C:
    ctx->pc = 0x7F1BAF8Cu;
    // 7F1BAF8C: bl      0x7F3D6F14
    {
            ctx->lr = 0x7F1BAF90u;
            ctx->pc = 0x7F3D6F14u;
            return;
    }

label_7F1BAF90:
    ctx->pc = 0x7F1BAF90u;
    ctx->downcount -= 5;
    // 7F1BAF90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BAF94:
    ctx->pc = 0x7F1BAF94u;
    // 7F1BAF94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BAF98:
    ctx->pc = 0x7F1BAF98u;
    // 7F1BAF98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BAF9C:
    ctx->pc = 0x7F1BAF9Cu;
    // 7F1BAF9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BAFA0:
    ctx->pc = 0x7F1BAFA0u;
    ctx->downcount -= 7;
    // 7F1BAFA0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BAFA4:
    ctx->pc = 0x7F1BAFA4u;
    // 7F1BAFA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BAFA8:
    ctx->pc = 0x7F1BAFA8u;
    // 7F1BAFA8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BAFAC:
    ctx->pc = 0x7F1BAFACu;
    // 7F1BAFAC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAFB0:
    ctx->pc = 0x7F1BAFB0u;
    // 7F1BAFB0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BAFB4:
    ctx->pc = 0x7F1BAFB4u;
    // 7F1BAFB4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BAFB8:
    ctx->pc = 0x7F1BAFB8u;
    // 7F1BAFB8: bl      0x80025A08
    {
            ctx->lr = 0x7F1BAFBCu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BAFBC:
    ctx->pc = 0x7F1BAFBCu;
    ctx->downcount -= 4;
    // 7F1BAFBC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAFC0:
    ctx->pc = 0x7F1BAFC0u;
    // 7F1BAFC0: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAFC0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAFC4:
    ctx->pc = 0x7F1BAFC4u;
    // 7F1BAFC4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAFC8:
    ctx->pc = 0x7F1BAFC8u;
    // 7F1BAFC8: bl      0x7F114738
    {
            ctx->lr = 0x7F1BAFCCu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BAFCC:
    ctx->pc = 0x7F1BAFCCu;
    ctx->downcount -= 4;
    // 7F1BAFCC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAFD0:
    ctx->pc = 0x7F1BAFD0u;
    // 7F1BAFD0: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAFD0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAFD4:
    ctx->pc = 0x7F1BAFD4u;
    // 7F1BAFD4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAFD8:
    ctx->pc = 0x7F1BAFD8u;
    // 7F1BAFD8: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BAFDCu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BAFDC:
    ctx->pc = 0x7F1BAFDCu;
    ctx->downcount -= 4;
    // 7F1BAFDC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAFE0:
    ctx->pc = 0x7F1BAFE0u;
    // 7F1BAFE0: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAFE0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAFE4:
    ctx->pc = 0x7F1BAFE4u;
    // 7F1BAFE4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BAFE8:
    ctx->pc = 0x7F1BAFE8u;
    // 7F1BAFE8: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BAFECu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BAFEC:
    ctx->pc = 0x7F1BAFECu;
    ctx->downcount -= 5;
    // 7F1BAFEC: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BAFF0:
    ctx->pc = 0x7F1BAFF0u;
    // 7F1BAFF0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BAFF4:
    ctx->pc = 0x7F1BAFF4u;
    // 7F1BAFF4: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BAFF8:
    ctx->pc = 0x7F1BAFF8u;
    // 7F1BAFF8: lfs     f1, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BAFF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BAFFC:
    ctx->pc = 0x7F1BAFFCu;
    // 7F1BAFFC: bl      0x7F3D94D0
    {
            ctx->lr = 0x7F1BB000u;
            ctx->pc = 0x7F3D94D0u;
            return;
    }

label_7F1BB000:
    ctx->pc = 0x7F1BB000u;
    ctx->downcount -= 6;
    // 7F1BB000: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB004:
    ctx->pc = 0x7F1BB004u;
    // 7F1BB004: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BB008:
    ctx->pc = 0x7F1BB008u;
    // 7F1BB008: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB00C:
    ctx->pc = 0x7F1BB00Cu;
    // 7F1BB00C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BB010:
    ctx->pc = 0x7F1BB010u;
    // 7F1BB010: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB014:
    ctx->pc = 0x7F1BB014u;
    ctx->downcount -= 7;
    // 7F1BB014: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB018:
    ctx->pc = 0x7F1BB018u;
    // 7F1BB018: lha     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB01C:
    ctx->pc = 0x7F1BB01Cu;
    // 7F1BB01C: add   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB020:
    ctx->pc = 0x7F1BB020u;
    // 7F1BB020: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB024:
    ctx->pc = 0x7F1BB024u;
    // 7F1BB024: lha     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB028:
    ctx->pc = 0x7F1BB028u;
    // 7F1BB028: cmpwi   r6, 4095
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(4095);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_7F1BB02C:
    ctx->pc = 0x7F1BB02Cu;
    // 7F1BB02C: bc    4, 1, 0x7F1BB03C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB03C;
        }
    }

label_7F1BB030:
    ctx->pc = 0x7F1BB030u;
    ctx->downcount -= 3;
    // 7F1BB030: addi    r0, r6, -4095
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(-4095);

label_7F1BB034:
    ctx->pc = 0x7F1BB034u;
    // 7F1BB034: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB038:
    ctx->pc = 0x7F1BB038u;
    // 7F1BB038: b       0x7F1BB074
    {
            goto label_7F1BB074;
    }

label_7F1BB03C:
    ctx->pc = 0x7F1BB03Cu;
    ctx->downcount -= 12;
    // 7F1BB03C: xoris   r4, r6, 0x8000
    ctx->gpr[4] = ctx->gpr[6] ^ (0x8000u << 16);

label_7F1BB040:
    ctx->pc = 0x7F1BB040u;
    // 7F1BB040: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB044:
    ctx->pc = 0x7F1BB044u;
    // 7F1BB044: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1BB048:
    ctx->pc = 0x7F1BB048u;
    // 7F1BB048: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1BB04C:
    ctx->pc = 0x7F1BB04Cu;
    // 7F1BB04C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB050:
    ctx->pc = 0x7F1BB050u;
    // 7F1BB050: lfd     f2, 7704(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB050u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7704);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB054:
    ctx->pc = 0x7F1BB054u;
    // 7F1BB054: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB058:
    ctx->pc = 0x7F1BB058u;
    // 7F1BB058: lfs     f0, 7696(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB058u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7696);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BB05C:
    ctx->pc = 0x7F1BB05Cu;
    // 7F1BB05C: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB05Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB060:
    ctx->pc = 0x7F1BB060u;
    // 7F1BB060: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1BB060u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_7F1BB064:
    ctx->pc = 0x7F1BB064u;
    // 7F1BB064: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB064u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_7F1BB068:
    ctx->pc = 0x7F1BB068u;
    // 7F1BB068: bc    4, 0, 0x7F1BB074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB074;
        }
    }

label_7F1BB06C:
    ctx->pc = 0x7F1BB06Cu;
    ctx->downcount -= 2;
    // 7F1BB06C: addi    r0, r6, 4095
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(4095);

label_7F1BB070:
    ctx->pc = 0x7F1BB070u;
    // 7F1BB070: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB074:
    ctx->pc = 0x7F1BB074u;
    ctx->downcount -= 2;
    // 7F1BB074: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BB078:
    ctx->pc = 0x7F1BB078u;
    // 7F1BB078: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB07C:
    ctx->pc = 0x7F1BB07Cu;
    ctx->downcount -= 18;
    // 7F1BB07C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB080:
    ctx->pc = 0x7F1BB080u;
    // 7F1BB080: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB084:
    ctx->pc = 0x7F1BB084u;
    // 7F1BB084: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB088:
    ctx->pc = 0x7F1BB088u;
    // 7F1BB088: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB08C:
    ctx->pc = 0x7F1BB08Cu;
    // 7F1BB08C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1BB090:
    ctx->pc = 0x7F1BB090u;
    // 7F1BB090: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB094:
    ctx->pc = 0x7F1BB094u;
    // 7F1BB094: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BB098:
    ctx->pc = 0x7F1BB098u;
    // 7F1BB098: bl      0x7F3C9624
    {
            ctx->lr = 0x7F1BB09Cu;
            ctx->pc = 0x7F3C9624u;
            return;
    }

label_7F1BB09C:
    ctx->pc = 0x7F1BB09Cu;
    ctx->downcount -= 4;
    // 7F1BB09C: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_7F1BB0A0:
    ctx->pc = 0x7F1BB0A0u;
    // 7F1BB0A0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB0A4:
    ctx->pc = 0x7F1BB0A4u;
    // 7F1BB0A4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_7F1BB0A8:
    ctx->pc = 0x7F1BB0A8u;
    // 7F1BB0A8: b       0x7F1BB100
    {
            goto label_7F1BB100;
    }

label_7F1BB0AC:
    ctx->pc = 0x7F1BB0ACu;
    ctx->downcount -= 5;
    // 7F1BB0AC: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BB0B0:
    ctx->pc = 0x7F1BB0B0u;
    // 7F1BB0B0: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BB0B4:
    ctx->pc = 0x7F1BB0B4u;
    // 7F1BB0B4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB0B8:
    // 7F1BB0B8: cmpwi   r0, 1
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

label_7F1BB0BC:
    // 7F1BB0BC: bc    12, 2, 0x7F1BB0E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB0E4;
        }
    }

label_7F1BB0C0:
    ctx->downcount -= 1;
    // 7F1BB0C0: bc    4, 0, 0x7F1BB0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB0D0;
        }
    }

label_7F1BB0C4:
    ctx->downcount -= 2;
    // 7F1BB0C4: cmpwi   r0, 0
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

label_7F1BB0C8:
    // 7F1BB0C8: bc    4, 0, 0x7F1BB0DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB0DC;
        }
    }

label_7F1BB0CC:
    ctx->downcount -= 1;
    // 7F1BB0CC: b       0x7F1BB0F4
    {
            goto label_7F1BB0F4;
    }

label_7F1BB0D0:
    ctx->downcount -= 2;
    // 7F1BB0D0: cmpwi   r0, 3
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

label_7F1BB0D4:
    // 7F1BB0D4: bc    4, 0, 0x7F1BB0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB0F4;
        }
    }

label_7F1BB0D8:
    ctx->downcount -= 1;
    // 7F1BB0D8: b       0x7F1BB0EC
    {
            goto label_7F1BB0EC;
    }

label_7F1BB0DC:
    ctx->pc = 0x7F1BB0DCu;
    ctx->downcount -= 2;
    // 7F1BB0DC: stw     r30, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1BB0E0:
    // 7F1BB0E0: b       0x7F1BB0F4
    {
            goto label_7F1BB0F4;
    }

label_7F1BB0E4:
    ctx->pc = 0x7F1BB0E4u;
    ctx->downcount -= 2;
    // 7F1BB0E4: stw     r31, 44(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BB0E8:
    // 7F1BB0E8: b       0x7F1BB0F4
    {
            goto label_7F1BB0F4;
    }

label_7F1BB0EC:
    ctx->downcount -= 2;
    // 7F1BB0EC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1BB0F0:
    // 7F1BB0F0: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1BB0F4u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1BB0F4:
    ctx->pc = 0x7F1BB0F4u;
    ctx->downcount -= 3;
    // 7F1BB0F4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BB0F8:
    // 7F1BB0F8: addi    r0, r3, 16
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(16);

label_7F1BB0FC:
    ctx->pc = 0x7F1BB0FCu;
    // 7F1BB0FC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB100:
    ctx->downcount -= 2;
    // 7F1BB100: addic.  r29, r29, -1
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

label_7F1BB104:
    // 7F1BB104: bc    4, 0, 0x7F1BB0AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BB0ACu;
                return;
            }
            goto label_7F1BB0AC;
        }
    }

label_7F1BB108:
    ctx->pc = 0x7F1BB108u;
    ctx->downcount -= 16;
    // 7F1BB108: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1BB10C:
    ctx->pc = 0x7F1BB10Cu;
    // 7F1BB10C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB110:
    ctx->pc = 0x7F1BB110u;
    // 7F1BB110: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB114:
    ctx->pc = 0x7F1BB114u;
    // 7F1BB114: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1BB118:
    ctx->pc = 0x7F1BB118u;
    // 7F1BB118: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB11C:
    ctx->pc = 0x7F1BB11Cu;
    ctx->downcount -= 6;
    // 7F1BB11C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB120:
    ctx->pc = 0x7F1BB120u;
    // 7F1BB120: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB124:
    ctx->pc = 0x7F1BB124u;
    // 7F1BB124: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB128:
    ctx->pc = 0x7F1BB128u;
    // 7F1BB128: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BB12C:
    ctx->pc = 0x7F1BB12Cu;
    // 7F1BB12C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB130:
    ctx->pc = 0x7F1BB130u;
    // 7F1BB130: bl      0x7F1BB07C
    {
            ctx->lr = 0x7F1BB134u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BB07Cu;
                return;
            }
            goto label_7F1BB07C;
    }

label_7F1BB134:
    ctx->pc = 0x7F1BB134u;
    ctx->downcount -= 3;
    // 7F1BB134: lha     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB138:
    ctx->pc = 0x7F1BB138u;
    // 7F1BB138: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_7F1BB13C:
    ctx->pc = 0x7F1BB13Cu;
    // 7F1BB13C: bl      0x7F1BB014
    {
            ctx->lr = 0x7F1BB140u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BB014u;
                return;
            }
            goto label_7F1BB014;
    }

label_7F1BB140:
    ctx->pc = 0x7F1BB140u;
    ctx->downcount -= 3;
    // 7F1BB140: lha     r4, 50(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(50);
        ctx->gpr[4] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB144:
    ctx->pc = 0x7F1BB144u;
    // 7F1BB144: addi    r3, r31, 54
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(54);

label_7F1BB148:
    ctx->pc = 0x7F1BB148u;
    // 7F1BB148: bl      0x7F1BB014
    {
            ctx->lr = 0x7F1BB14Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BB014u;
                return;
            }
            goto label_7F1BB014;
    }

label_7F1BB14C:
    ctx->pc = 0x7F1BB14Cu;
    ctx->downcount -= 7;
    // 7F1BB14C: lwz     r5, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BB150:
    ctx->pc = 0x7F1BB150u;
    // 7F1BB150: lwz     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB154:
    ctx->pc = 0x7F1BB154u;
    // 7F1BB154: xori    r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] ^ 0x0001u;

label_7F1BB158:
    ctx->pc = 0x7F1BB158u;
    // 7F1BB158: stw     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB15C:
    ctx->pc = 0x7F1BB15Cu;
    // 7F1BB15C: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB160:
    ctx->pc = 0x7F1BB160u;
    // 7F1BB160: cmpwi   r0, 0
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

label_7F1BB164:
    ctx->pc = 0x7F1BB164u;
    // 7F1BB164: bc    4, 2, 0x7F1BB178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB178;
        }
    }

label_7F1BB168:
    ctx->pc = 0x7F1BB168u;
    ctx->downcount -= 4;
    // 7F1BB168: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB16C:
    ctx->pc = 0x7F1BB16Cu;
    // 7F1BB16C: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F1BB170:
    ctx->pc = 0x7F1BB170u;
    // 7F1BB170: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB174:
    ctx->pc = 0x7F1BB174u;
    // 7F1BB174: b       0x7F1BB184
    {
            goto label_7F1BB184;
    }

label_7F1BB178:
    ctx->pc = 0x7F1BB178u;
    ctx->downcount -= 3;
    // 7F1BB178: lwz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB17C:
    ctx->pc = 0x7F1BB17Cu;
    // 7F1BB17C: ori     r0, r0, 0x3000
    ctx->gpr[0] = ctx->gpr[0] | 0x3000u;

label_7F1BB180:
    ctx->pc = 0x7F1BB180u;
    // 7F1BB180: stw     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB184:
    ctx->pc = 0x7F1BB184u;
    ctx->downcount -= 42;
    // 7F1BB184: lwz     r0, 180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB188:
    ctx->pc = 0x7F1BB188u;
    // 7F1BB188: lha     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB18C:
    ctx->pc = 0x7F1BB18Cu;
    // 7F1BB18C: rlwinm r4, r0, 2, 0, 29
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_7F1BB190:
    ctx->pc = 0x7F1BB190u;
    // 7F1BB190: lha     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB194:
    ctx->pc = 0x7F1BB194u;
    // 7F1BB194: add   r4, r5, r4
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_7F1BB198:
    ctx->pc = 0x7F1BB198u;
    // 7F1BB198: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BB19C:
    ctx->pc = 0x7F1BB19Cu;
    // 7F1BB19C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB1A0:
    ctx->pc = 0x7F1BB1A0u;
    // 7F1BB1A0: sth     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB1A4:
    ctx->pc = 0x7F1BB1A4u;
    // 7F1BB1A4: lha     r3, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1A8:
    ctx->pc = 0x7F1BB1A8u;
    // 7F1BB1A8: lha     r0, 54(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(54);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1AC:
    ctx->pc = 0x7F1BB1ACu;
    // 7F1BB1AC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB1B0:
    ctx->pc = 0x7F1BB1B0u;
    // 7F1BB1B0: sth     r0, 6(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB1B4:
    ctx->pc = 0x7F1BB1B4u;
    // 7F1BB1B4: lha     r3, 62(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(62);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1B8:
    ctx->pc = 0x7F1BB1B8u;
    // 7F1BB1B8: lha     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1BC:
    ctx->pc = 0x7F1BB1BCu;
    // 7F1BB1BC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB1C0:
    ctx->pc = 0x7F1BB1C0u;
    // 7F1BB1C0: sth     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB1C4:
    ctx->pc = 0x7F1BB1C4u;
    // 7F1BB1C4: lha     r3, 70(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(70);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1C8:
    ctx->pc = 0x7F1BB1C8u;
    // 7F1BB1C8: lha     r0, 54(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(54);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1CC:
    ctx->pc = 0x7F1BB1CCu;
    // 7F1BB1CC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB1D0:
    ctx->pc = 0x7F1BB1D0u;
    // 7F1BB1D0: sth     r0, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB1D4:
    ctx->pc = 0x7F1BB1D4u;
    // 7F1BB1D4: lha     r3, 58(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(58);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1D8:
    ctx->pc = 0x7F1BB1D8u;
    // 7F1BB1D8: lha     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1DC:
    ctx->pc = 0x7F1BB1DCu;
    // 7F1BB1DC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB1E0:
    ctx->pc = 0x7F1BB1E0u;
    // 7F1BB1E0: sth     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB1E4:
    ctx->pc = 0x7F1BB1E4u;
    // 7F1BB1E4: lha     r3, 66(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(66);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1E8:
    ctx->pc = 0x7F1BB1E8u;
    // 7F1BB1E8: lha     r0, 54(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(54);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1EC:
    ctx->pc = 0x7F1BB1ECu;
    // 7F1BB1EC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB1F0:
    ctx->pc = 0x7F1BB1F0u;
    // 7F1BB1F0: sth     r0, 30(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB1F4:
    ctx->pc = 0x7F1BB1F4u;
    // 7F1BB1F4: lha     r3, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1F8:
    ctx->pc = 0x7F1BB1F8u;
    // 7F1BB1F8: lha     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB1FC:
    ctx->pc = 0x7F1BB1FCu;
    // 7F1BB1FC: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB200:
    ctx->pc = 0x7F1BB200u;
    // 7F1BB200: sth     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB204:
    ctx->pc = 0x7F1BB204u;
    // 7F1BB204: lha     r3, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[3] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB208:
    ctx->pc = 0x7F1BB208u;
    // 7F1BB208: lha     r0, 54(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(54);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB20C:
    ctx->pc = 0x7F1BB20Cu;
    // 7F1BB20C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_7F1BB210:
    ctx->pc = 0x7F1BB210u;
    // 7F1BB210: sth     r0, 42(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB214:
    ctx->pc = 0x7F1BB214u;
    // 7F1BB214: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB218:
    ctx->pc = 0x7F1BB218u;
    // 7F1BB218: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BB21C:
    ctx->pc = 0x7F1BB21Cu;
    // 7F1BB21C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB220:
    ctx->pc = 0x7F1BB220u;
    // 7F1BB220: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BB224:
    ctx->pc = 0x7F1BB224u;
    // 7F1BB224: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB228:
    ctx->pc = 0x7F1BB228u;
    ctx->downcount -= 5;
    // 7F1BB228: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB22C:
    ctx->pc = 0x7F1BB22Cu;
    // 7F1BB22C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB230:
    ctx->pc = 0x7F1BB230u;
    // 7F1BB230: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB234:
    ctx->pc = 0x7F1BB234u;
    // 7F1BB234: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BB238:
    ctx->pc = 0x7F1BB238u;
    // 7F1BB238: bl      0x7F3C2440
    {
            ctx->lr = 0x7F1BB23Cu;
            ctx->pc = 0x7F3C2440u;
            return;
    }

label_7F1BB23C:
    ctx->pc = 0x7F1BB23Cu;
    ctx->downcount -= 5;
    // 7F1BB23C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB240:
    ctx->pc = 0x7F1BB240u;
    // 7F1BB240: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB244:
    ctx->pc = 0x7F1BB244u;
    // 7F1BB244: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BB248:
    ctx->pc = 0x7F1BB248u;
    // 7F1BB248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB24C:
    ctx->pc = 0x7F1BB24Cu;
    ctx->downcount -= 17;
    // 7F1BB24C: stwu     r1, -224(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-224);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB250:
    ctx->pc = 0x7F1BB250u;
    // 7F1BB250: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB254:
    ctx->pc = 0x7F1BB254u;
    // 7F1BB254: stw     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB258:
    ctx->pc = 0x7F1BB258u;
    // 7F1BB258: stmw     r29, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1BB25C:
    ctx->pc = 0x7F1BB25Cu;
    // 7F1BB25C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB260:
    ctx->pc = 0x7F1BB260u;
    // 7F1BB260: li      r3, 112
    ctx->gpr[3] = (u32)(s32)(112);

label_7F1BB264:
    ctx->pc = 0x7F1BB264u;
    // 7F1BB264: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1BB268u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1BB268:
    ctx->pc = 0x7F1BB268u;
    ctx->downcount -= 2;
    // 7F1BB268: cmplwi  r3, 0x0000
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

label_7F1BB26C:
    ctx->pc = 0x7F1BB26Cu;
    // 7F1BB26C: bc    12, 2, 0x7F1BB2B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB2B8;
        }
    }

label_7F1BB270:
    ctx->pc = 0x7F1BB270u;
    ctx->downcount -= 1;
    // 7F1BB270: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F1BB274u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F1BB274:
    ctx->pc = 0x7F1BB274u;
    ctx->downcount -= 2;
    // 7F1BB274: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_7F1BB278:
    ctx->pc = 0x7F1BB278u;
    // 7F1BB278: bl      0x7F3C6904
    {
            ctx->lr = 0x7F1BB27Cu;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F1BB27C:
    ctx->pc = 0x7F1BB27Cu;
    ctx->downcount -= 1;
    // 7F1BB27C: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F1BB280u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F1BB280:
    ctx->pc = 0x7F1BB280u;
    ctx->downcount -= 2;
    // 7F1BB280: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB284:
    ctx->pc = 0x7F1BB284u;
    // 7F1BB284: bl      0x7F3C6904
    {
            ctx->lr = 0x7F1BB288u;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F1BB288:
    ctx->pc = 0x7F1BB288u;
    ctx->downcount -= 1;
    // 7F1BB288: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F1BB28Cu;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F1BB28C:
    ctx->pc = 0x7F1BB28Cu;
    ctx->downcount -= 2;
    // 7F1BB28C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_7F1BB290:
    ctx->pc = 0x7F1BB290u;
    // 7F1BB290: bl      0x7F3C6904
    {
            ctx->lr = 0x7F1BB294u;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F1BB294:
    ctx->pc = 0x7F1BB294u;
    ctx->downcount -= 1;
    // 7F1BB294: bl      0x7F3C6A18
    {
            ctx->lr = 0x7F1BB298u;
            ctx->pc = 0x7F3C6A18u;
            return;
    }

label_7F1BB298:
    ctx->pc = 0x7F1BB298u;
    ctx->downcount -= 2;
    // 7F1BB298: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_7F1BB29C:
    ctx->pc = 0x7F1BB29Cu;
    // 7F1BB29C: bl      0x7F3C6904
    {
            ctx->lr = 0x7F1BB2A0u;
            ctx->pc = 0x7F3C6904u;
            return;
    }

label_7F1BB2A0:
    ctx->pc = 0x7F1BB2A0u;
    ctx->downcount -= 6;
    // 7F1BB2A0: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BB2A4:
    ctx->pc = 0x7F1BB2A4u;
    // 7F1BB2A4: lfs     f0, 7712(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB2A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7712);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BB2A8:
    ctx->pc = 0x7F1BB2A8u;
    // 7F1BB2A8: stfs     f0, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB2A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BB2AC:
    ctx->pc = 0x7F1BB2ACu;
    // 7F1BB2AC: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB2ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BB2B0:
    ctx->pc = 0x7F1BB2B0u;
    // 7F1BB2B0: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB2B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BB2B4:
    ctx->pc = 0x7F1BB2B4u;
    // 7F1BB2B4: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB2B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BB2B8:
    ctx->pc = 0x7F1BB2B8u;
    ctx->downcount -= 2;
    // 7F1BB2B8: li      r3, 116
    ctx->gpr[3] = (u32)(s32)(116);

label_7F1BB2BC:
    ctx->pc = 0x7F1BB2BCu;
    // 7F1BB2BC: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1BB2C0u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1BB2C0:
    ctx->pc = 0x7F1BB2C0u;
    ctx->downcount -= 2;
    // 7F1BB2C0: cmplwi  r3, 0x0000
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

label_7F1BB2C4:
    ctx->pc = 0x7F1BB2C4u;
    // 7F1BB2C4: bc    12, 2, 0x7F1BB2D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB2D0;
        }
    }

label_7F1BB2C8:
    ctx->pc = 0x7F1BB2C8u;
    ctx->downcount -= 1;
    // 7F1BB2C8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB2CCu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB2CC:
    ctx->pc = 0x7F1BB2CCu;
    ctx->downcount -= 1;
    // 7F1BB2CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB2D0:
    ctx->pc = 0x7F1BB2D0u;
    ctx->downcount -= 2;
    // 7F1BB2D0: li      r3, 115
    ctx->gpr[3] = (u32)(s32)(115);

label_7F1BB2D4:
    ctx->pc = 0x7F1BB2D4u;
    // 7F1BB2D4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1BB2D8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1BB2D8:
    ctx->pc = 0x7F1BB2D8u;
    ctx->downcount -= 2;
    // 7F1BB2D8: cmplwi  r3, 0x0000
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

label_7F1BB2DC:
    ctx->pc = 0x7F1BB2DCu;
    // 7F1BB2DC: bc    12, 2, 0x7F1BB2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB2F0;
        }
    }

label_7F1BB2E0:
    ctx->pc = 0x7F1BB2E0u;
    ctx->downcount -= 1;
    // 7F1BB2E0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB2E4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB2E4:
    ctx->pc = 0x7F1BB2E4u;
    ctx->downcount -= 2;
    // 7F1BB2E4: sth     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1BB2E8:
    ctx->pc = 0x7F1BB2E8u;
    // 7F1BB2E8: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB2ECu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB2EC:
    ctx->pc = 0x7F1BB2ECu;
    ctx->downcount -= 1;
    // 7F1BB2EC: sth     r3, 50(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(50);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1BB2F0:
    ctx->pc = 0x7F1BB2F0u;
    ctx->downcount -= 2;
    // 7F1BB2F0: li      r3, 120
    ctx->gpr[3] = (u32)(s32)(120);

label_7F1BB2F4:
    ctx->pc = 0x7F1BB2F4u;
    // 7F1BB2F4: bl      0x7F3C664C
    {
            ctx->lr = 0x7F1BB2F8u;
            ctx->pc = 0x7F3C664Cu;
            return;
    }

label_7F1BB2F8:
    ctx->pc = 0x7F1BB2F8u;
    ctx->downcount -= 2;
    // 7F1BB2F8: cmplwi  r3, 0x0000
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

label_7F1BB2FC:
    ctx->pc = 0x7F1BB2FCu;
    // 7F1BB2FC: bc    12, 2, 0x7F1BB4A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB4A0;
        }
    }

label_7F1BB300:
    ctx->pc = 0x7F1BB300u;
    ctx->downcount -= 1;
    // 7F1BB300: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB304u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB304:
    ctx->pc = 0x7F1BB304u;
    ctx->downcount -= 13;
    // 7F1BB304: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BB308:
    ctx->pc = 0x7F1BB308u;
    // 7F1BB308: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB30C:
    ctx->pc = 0x7F1BB30Cu;
    // 7F1BB30C: stw     r3, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BB310:
    ctx->pc = 0x7F1BB310u;
    // 7F1BB310: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB314:
    ctx->pc = 0x7F1BB314u;
    // 7F1BB314: lfd     f1, 7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB314u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB318:
    ctx->pc = 0x7F1BB318u;
    // 7F1BB318: stw     r0, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB31C:
    ctx->pc = 0x7F1BB31Cu;
    // 7F1BB31C: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB31Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB320:
    ctx->pc = 0x7F1BB320u;
    // 7F1BB320: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BB320u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BB324:
    ctx->pc = 0x7F1BB324u;
    // 7F1BB324: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB324u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1BB328:
    ctx->pc = 0x7F1BB328u;
    // 7F1BB328: stfd     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB328u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1BB32C:
    ctx->pc = 0x7F1BB32Cu;
    // 7F1BB32C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB330:
    ctx->pc = 0x7F1BB330u;
    // 7F1BB330: sth     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB334:
    ctx->pc = 0x7F1BB334u;
    // 7F1BB334: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB338u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB338:
    ctx->pc = 0x7F1BB338u;
    ctx->downcount -= 13;
    // 7F1BB338: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BB33C:
    ctx->pc = 0x7F1BB33Cu;
    // 7F1BB33C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB340:
    ctx->pc = 0x7F1BB340u;
    // 7F1BB340: stw     r3, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BB344:
    ctx->pc = 0x7F1BB344u;
    // 7F1BB344: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB348:
    ctx->pc = 0x7F1BB348u;
    // 7F1BB348: lfd     f1, 7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB348u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB34C:
    ctx->pc = 0x7F1BB34Cu;
    // 7F1BB34C: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB350:
    ctx->pc = 0x7F1BB350u;
    // 7F1BB350: lfd     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB350u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB354:
    ctx->pc = 0x7F1BB354u;
    // 7F1BB354: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BB354u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BB358:
    ctx->pc = 0x7F1BB358u;
    // 7F1BB358: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB358u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1BB35C:
    ctx->pc = 0x7F1BB35Cu;
    // 7F1BB35C: stfd     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB35Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1BB360:
    ctx->pc = 0x7F1BB360u;
    // 7F1BB360: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB364:
    ctx->pc = 0x7F1BB364u;
    // 7F1BB364: sth     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB368:
    ctx->pc = 0x7F1BB368u;
    // 7F1BB368: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB36Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB36C:
    ctx->pc = 0x7F1BB36Cu;
    ctx->downcount -= 13;
    // 7F1BB36C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BB370:
    ctx->pc = 0x7F1BB370u;
    // 7F1BB370: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB374:
    ctx->pc = 0x7F1BB374u;
    // 7F1BB374: stw     r3, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BB378:
    ctx->pc = 0x7F1BB378u;
    // 7F1BB378: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB37C:
    ctx->pc = 0x7F1BB37Cu;
    // 7F1BB37C: lfd     f1, 7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB37Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB380:
    ctx->pc = 0x7F1BB380u;
    // 7F1BB380: stw     r0, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB384:
    ctx->pc = 0x7F1BB384u;
    // 7F1BB384: lfd     f0, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB384u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB388:
    ctx->pc = 0x7F1BB388u;
    // 7F1BB388: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BB388u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BB38C:
    ctx->pc = 0x7F1BB38Cu;
    // 7F1BB38C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB38Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1BB390:
    ctx->pc = 0x7F1BB390u;
    // 7F1BB390: stfd     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB390u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1BB394:
    ctx->pc = 0x7F1BB394u;
    // 7F1BB394: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB398:
    ctx->pc = 0x7F1BB398u;
    // 7F1BB398: sth     r0, 62(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(62);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB39C:
    ctx->pc = 0x7F1BB39Cu;
    // 7F1BB39C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB3A0u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB3A0:
    ctx->pc = 0x7F1BB3A0u;
    ctx->downcount -= 13;
    // 7F1BB3A0: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BB3A4:
    ctx->pc = 0x7F1BB3A4u;
    // 7F1BB3A4: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB3A8:
    ctx->pc = 0x7F1BB3A8u;
    // 7F1BB3A8: stw     r3, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BB3AC:
    ctx->pc = 0x7F1BB3ACu;
    // 7F1BB3AC: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB3B0:
    ctx->pc = 0x7F1BB3B0u;
    // 7F1BB3B0: lfd     f1, 7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3B0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB3B4:
    ctx->pc = 0x7F1BB3B4u;
    // 7F1BB3B4: stw     r0, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB3B8:
    ctx->pc = 0x7F1BB3B8u;
    // 7F1BB3B8: lfd     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB3BC:
    ctx->pc = 0x7F1BB3BCu;
    // 7F1BB3BC: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3BCu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BB3C0:
    ctx->pc = 0x7F1BB3C0u;
    // 7F1BB3C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1BB3C4:
    ctx->pc = 0x7F1BB3C4u;
    // 7F1BB3C4: stfd     f0, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1BB3C8:
    ctx->pc = 0x7F1BB3C8u;
    // 7F1BB3C8: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB3CC:
    ctx->pc = 0x7F1BB3CCu;
    // 7F1BB3CC: sth     r0, 70(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(70);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB3D0:
    ctx->pc = 0x7F1BB3D0u;
    // 7F1BB3D0: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB3D4u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB3D4:
    ctx->pc = 0x7F1BB3D4u;
    ctx->downcount -= 13;
    // 7F1BB3D4: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BB3D8:
    ctx->pc = 0x7F1BB3D8u;
    // 7F1BB3D8: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB3DC:
    ctx->pc = 0x7F1BB3DCu;
    // 7F1BB3DC: stw     r3, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BB3E0:
    ctx->pc = 0x7F1BB3E0u;
    // 7F1BB3E0: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB3E4:
    ctx->pc = 0x7F1BB3E4u;
    // 7F1BB3E4: lfd     f1, 7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3E4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB3E8:
    ctx->pc = 0x7F1BB3E8u;
    // 7F1BB3E8: stw     r0, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB3EC:
    ctx->pc = 0x7F1BB3ECu;
    // 7F1BB3EC: lfd     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB3F0:
    ctx->pc = 0x7F1BB3F0u;
    // 7F1BB3F0: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3F0u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BB3F4:
    ctx->pc = 0x7F1BB3F4u;
    // 7F1BB3F4: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3F4u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1BB3F8:
    ctx->pc = 0x7F1BB3F8u;
    // 7F1BB3F8: stfd     f0, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB3F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1BB3FC:
    ctx->pc = 0x7F1BB3FCu;
    // 7F1BB3FC: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB400:
    ctx->pc = 0x7F1BB400u;
    // 7F1BB400: sth     r0, 58(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(58);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB404:
    ctx->pc = 0x7F1BB404u;
    // 7F1BB404: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB408u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB408:
    ctx->pc = 0x7F1BB408u;
    ctx->downcount -= 13;
    // 7F1BB408: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BB40C:
    ctx->pc = 0x7F1BB40Cu;
    // 7F1BB40C: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB410:
    ctx->pc = 0x7F1BB410u;
    // 7F1BB410: stw     r3, 156(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BB414:
    ctx->pc = 0x7F1BB414u;
    // 7F1BB414: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB418:
    ctx->pc = 0x7F1BB418u;
    // 7F1BB418: lfd     f1, 7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB418u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB41C:
    ctx->pc = 0x7F1BB41Cu;
    // 7F1BB41C: stw     r0, 152(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB420:
    ctx->pc = 0x7F1BB420u;
    // 7F1BB420: lfd     f0, 152(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB420u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB424:
    ctx->pc = 0x7F1BB424u;
    // 7F1BB424: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BB424u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BB428:
    ctx->pc = 0x7F1BB428u;
    // 7F1BB428: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB428u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1BB42C:
    ctx->pc = 0x7F1BB42Cu;
    // 7F1BB42C: stfd     f0, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB42Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1BB430:
    ctx->pc = 0x7F1BB430u;
    // 7F1BB430: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB434:
    ctx->pc = 0x7F1BB434u;
    // 7F1BB434: sth     r0, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB438:
    ctx->pc = 0x7F1BB438u;
    // 7F1BB438: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB43Cu;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB43C:
    ctx->pc = 0x7F1BB43Cu;
    ctx->downcount -= 13;
    // 7F1BB43C: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BB440:
    ctx->pc = 0x7F1BB440u;
    // 7F1BB440: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB444:
    ctx->pc = 0x7F1BB444u;
    // 7F1BB444: stw     r3, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BB448:
    ctx->pc = 0x7F1BB448u;
    // 7F1BB448: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB44C:
    ctx->pc = 0x7F1BB44Cu;
    // 7F1BB44C: lfd     f1, 7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB44Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB450:
    ctx->pc = 0x7F1BB450u;
    // 7F1BB450: stw     r0, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB454:
    ctx->pc = 0x7F1BB454u;
    // 7F1BB454: lfd     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB454u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB458:
    ctx->pc = 0x7F1BB458u;
    // 7F1BB458: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BB458u)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BB45C:
    ctx->pc = 0x7F1BB45Cu;
    // 7F1BB45C: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB45Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1BB460:
    ctx->pc = 0x7F1BB460u;
    // 7F1BB460: stfd     f0, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB460u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1BB464:
    ctx->pc = 0x7F1BB464u;
    // 7F1BB464: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB468:
    ctx->pc = 0x7F1BB468u;
    // 7F1BB468: sth     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB46C:
    ctx->pc = 0x7F1BB46Cu;
    // 7F1BB46C: bl      0x7F3C6A54
    {
            ctx->lr = 0x7F1BB470u;
            ctx->pc = 0x7F3C6A54u;
            return;
    }

label_7F1BB470:
    ctx->pc = 0x7F1BB470u;
    ctx->downcount -= 12;
    // 7F1BB470: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_7F1BB474:
    ctx->pc = 0x7F1BB474u;
    // 7F1BB474: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_7F1BB478:
    ctx->pc = 0x7F1BB478u;
    // 7F1BB478: stw     r3, 188(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BB47C:
    ctx->pc = 0x7F1BB47Cu;
    // 7F1BB47C: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BB480:
    ctx->pc = 0x7F1BB480u;
    // 7F1BB480: lfd     f1, 7704(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB480u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7704);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB484:
    ctx->pc = 0x7F1BB484u;
    // 7F1BB484: stw     r0, 184(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB488:
    ctx->pc = 0x7F1BB488u;
    // 7F1BB488: lfd     f0, 184(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB488u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BB48C:
    ctx->pc = 0x7F1BB48Cu;
    // 7F1BB48C: fsubs   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x7F1BB48Cu)) return;
    ppc_fsubs(ctx, 0, 0, 1);

label_7F1BB490:
    ctx->pc = 0x7F1BB490u;
    // 7F1BB490: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x7F1BB490u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_7F1BB494:
    ctx->pc = 0x7F1BB494u;
    // 7F1BB494: stfd     f0, 192(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB494u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(192);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_7F1BB498:
    ctx->pc = 0x7F1BB498u;
    // 7F1BB498: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB49C:
    ctx->pc = 0x7F1BB49Cu;
    // 7F1BB49C: sth     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB4A0:
    ctx->pc = 0x7F1BB4A0u;
    ctx->downcount -= 4;
    // 7F1BB4A0: lis     r3, 178
    ctx->gpr[3] = ((u32)(s32)(178) << 16);

label_7F1BB4A4:
    ctx->pc = 0x7F1BB4A4u;
    // 7F1BB4A4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BB4A8:
    ctx->pc = 0x7F1BB4A8u;
    // 7F1BB4A8: addi    r3, r3, 12095
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12095);

label_7F1BB4AC:
    ctx->pc = 0x7F1BB4ACu;
    // 7F1BB4AC: bl      0x7F3B6880
    {
            ctx->lr = 0x7F1BB4B0u;
            ctx->pc = 0x7F3B6880u;
            return;
    }

label_7F1BB4B0:
    ctx->pc = 0x7F1BB4B0u;
    ctx->downcount -= 7;
    // 7F1BB4B0: lis     r5, 11
    ctx->gpr[5] = ((u32)(s32)(11) << 16);

label_7F1BB4B4:
    ctx->pc = 0x7F1BB4B4u;
    // 7F1BB4B4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB4B8:
    ctx->pc = 0x7F1BB4B8u;
    // 7F1BB4B8: addi    r3, r5, 2
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(2);

label_7F1BB4BC:
    ctx->pc = 0x7F1BB4BCu;
    // 7F1BB4BC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_7F1BB4C0:
    ctx->pc = 0x7F1BB4C0u;
    // 7F1BB4C0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_7F1BB4C4:
    ctx->pc = 0x7F1BB4C4u;
    // 7F1BB4C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1BB4C8:
    ctx->pc = 0x7F1BB4C8u;
    // 7F1BB4C8: bl      0x7F3C2408
    {
            ctx->lr = 0x7F1BB4CCu;
            ctx->pc = 0x7F3C2408u;
            return;
    }

label_7F1BB4CC:
    ctx->pc = 0x7F1BB4CCu;
    ctx->downcount -= 3;
    // 7F1BB4CC: or.   r31, r3, r3
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

label_7F1BB4D0:
    ctx->pc = 0x7F1BB4D0u;
    // 7F1BB4D0: stw     r31, 40(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BB4D4:
    ctx->pc = 0x7F1BB4D4u;
    // 7F1BB4D4: bc    4, 2, 0x7F1BB4E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB4E0;
        }
    }

label_7F1BB4D8:
    ctx->pc = 0x7F1BB4D8u;
    ctx->downcount -= 2;
    // 7F1BB4D8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_7F1BB4DC:
    ctx->pc = 0x7F1BB4DCu;
    // 7F1BB4DC: b       0x7F1BB754
    {
            goto label_7F1BB754;
    }

label_7F1BB4E0:
    ctx->pc = 0x7F1BB4E0u;
    ctx->downcount -= 4;
    // 7F1BB4E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1BB4E4:
    ctx->pc = 0x7F1BB4E4u;
    // 7F1BB4E4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1BB4E8:
    ctx->pc = 0x7F1BB4E8u;
    // 7F1BB4E8: stw     r0, 44(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB4EC:
    ctx->pc = 0x7F1BB4ECu;
    // 7F1BB4EC: bl      0x7F3C2534
    {
            ctx->lr = 0x7F1BB4F0u;
            ctx->pc = 0x7F3C2534u;
            return;
    }

label_7F1BB4F0:
    ctx->pc = 0x7F1BB4F0u;
    ctx->downcount -= 153;
    // 7F1BB4F0: li      r0, 68
    ctx->gpr[0] = (u32)(s32)(68);

label_7F1BB4F4:
    ctx->pc = 0x7F1BB4F4u;
    // 7F1BB4F4: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_7F1BB4F8:
    ctx->pc = 0x7F1BB4F8u;
    // 7F1BB4F8: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB4FC:
    ctx->pc = 0x7F1BB4FCu;
    // 7F1BB4FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_7F1BB500:
    ctx->pc = 0x7F1BB500u;
    // 7F1BB500: li      r8, 255
    ctx->gpr[8] = (u32)(s32)(255);

label_7F1BB504:
    ctx->pc = 0x7F1BB504u;
    // 7F1BB504: li      r7, 4096
    ctx->gpr[7] = (u32)(s32)(4096);

label_7F1BB508:
    ctx->pc = 0x7F1BB508u;
    // 7F1BB508: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB50C:
    ctx->pc = 0x7F1BB50Cu;
    // 7F1BB50C: addi    r3, r3, -28673
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-28673);

label_7F1BB510:
    ctx->pc = 0x7F1BB510u;
    // 7F1BB510: li      r6, 4095
    ctx->gpr[6] = (u32)(s32)(4095);

label_7F1BB514:
    ctx->pc = 0x7F1BB514u;
    // 7F1BB514: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB518:
    ctx->pc = 0x7F1BB518u;
    // 7F1BB518: rlwinm r0, r0, 0, 20, 17
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFCFFFu;
    }

label_7F1BB51C:
    ctx->pc = 0x7F1BB51Cu;
    // 7F1BB51C: stw     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB520:
    ctx->pc = 0x7F1BB520u;
    // 7F1BB520: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BB524:
    ctx->pc = 0x7F1BB524u;
    // 7F1BB524: lwz     r5, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BB528:
    ctx->pc = 0x7F1BB528u;
    // 7F1BB528: lwz     r9, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1BB52C:
    ctx->pc = 0x7F1BB52Cu;
    // 7F1BB52C: lwz     r10, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1BB530:
    ctx->pc = 0x7F1BB530u;
    // 7F1BB530: stb     r8, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB534:
    ctx->pc = 0x7F1BB534u;
    // 7F1BB534: stb     r8, 0(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB538:
    ctx->pc = 0x7F1BB538u;
    // 7F1BB538: stb     r8, 1(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB53C:
    ctx->pc = 0x7F1BB53Cu;
    // 7F1BB53C: stb     r8, 1(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB540:
    ctx->pc = 0x7F1BB540u;
    // 7F1BB540: stb     r8, 2(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB544:
    ctx->pc = 0x7F1BB544u;
    // 7F1BB544: stb     r8, 2(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(2);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB548:
    ctx->pc = 0x7F1BB548u;
    // 7F1BB548: stb     r8, 3(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB54C:
    ctx->pc = 0x7F1BB54Cu;
    // 7F1BB54C: stb     r8, 3(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(3);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB550:
    ctx->pc = 0x7F1BB550u;
    // 7F1BB550: lha     r0, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB554:
    ctx->pc = 0x7F1BB554u;
    // 7F1BB554: sth     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB558:
    ctx->pc = 0x7F1BB558u;
    // 7F1BB558: sth     r0, 4(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(4);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB55C:
    ctx->pc = 0x7F1BB55Cu;
    // 7F1BB55C: lha     r0, 64(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(64);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB560:
    ctx->pc = 0x7F1BB560u;
    // 7F1BB560: sth     r0, 6(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB564:
    ctx->pc = 0x7F1BB564u;
    // 7F1BB564: sth     r0, 6(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(6);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB568:
    ctx->pc = 0x7F1BB568u;
    // 7F1BB568: sth     r7, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1BB56C:
    ctx->pc = 0x7F1BB56Cu;
    // 7F1BB56C: sth     r7, 8(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1BB570:
    ctx->pc = 0x7F1BB570u;
    // 7F1BB570: sth     r3, 10(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1BB574:
    ctx->pc = 0x7F1BB574u;
    // 7F1BB574: sth     r3, 10(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1BB578:
    ctx->pc = 0x7F1BB578u;
    // 7F1BB578: stb     r8, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB57C:
    ctx->pc = 0x7F1BB57Cu;
    // 7F1BB57C: stb     r8, 12(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(12);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB580:
    ctx->pc = 0x7F1BB580u;
    // 7F1BB580: stb     r8, 13(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB584:
    ctx->pc = 0x7F1BB584u;
    // 7F1BB584: stb     r8, 13(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(13);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB588:
    ctx->pc = 0x7F1BB588u;
    // 7F1BB588: stb     r8, 14(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB58C:
    ctx->pc = 0x7F1BB58Cu;
    // 7F1BB58C: stb     r8, 14(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(14);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB590:
    ctx->pc = 0x7F1BB590u;
    // 7F1BB590: stb     r8, 15(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB594:
    ctx->pc = 0x7F1BB594u;
    // 7F1BB594: stb     r8, 15(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(15);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB598:
    ctx->pc = 0x7F1BB598u;
    // 7F1BB598: lha     r0, 62(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(62);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB59C:
    ctx->pc = 0x7F1BB59Cu;
    // 7F1BB59C: sth     r0, 16(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB5A0:
    ctx->pc = 0x7F1BB5A0u;
    // 7F1BB5A0: sth     r0, 16(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(16);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB5A4:
    ctx->pc = 0x7F1BB5A4u;
    // 7F1BB5A4: lha     r0, 70(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(70);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB5A8:
    ctx->pc = 0x7F1BB5A8u;
    // 7F1BB5A8: sth     r0, 18(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB5AC:
    ctx->pc = 0x7F1BB5ACu;
    // 7F1BB5AC: sth     r0, 18(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(18);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB5B0:
    ctx->pc = 0x7F1BB5B0u;
    // 7F1BB5B0: sth     r7, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1BB5B4:
    ctx->pc = 0x7F1BB5B4u;
    // 7F1BB5B4: sth     r7, 20(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(20);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1BB5B8:
    ctx->pc = 0x7F1BB5B8u;
    // 7F1BB5B8: sth     r3, 22(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1BB5BC:
    ctx->pc = 0x7F1BB5BCu;
    // 7F1BB5BC: sth     r3, 22(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(22);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_7F1BB5C0:
    ctx->pc = 0x7F1BB5C0u;
    // 7F1BB5C0: stb     r8, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB5C4:
    ctx->pc = 0x7F1BB5C4u;
    // 7F1BB5C4: stb     r8, 24(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB5C8:
    ctx->pc = 0x7F1BB5C8u;
    // 7F1BB5C8: stb     r8, 25(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB5CC:
    ctx->pc = 0x7F1BB5CCu;
    // 7F1BB5CC: stb     r8, 25(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB5D0:
    ctx->pc = 0x7F1BB5D0u;
    // 7F1BB5D0: stb     r8, 26(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB5D4:
    ctx->pc = 0x7F1BB5D4u;
    // 7F1BB5D4: stb     r8, 26(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB5D8:
    ctx->pc = 0x7F1BB5D8u;
    // 7F1BB5D8: stb     r8, 27(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB5DC:
    ctx->pc = 0x7F1BB5DCu;
    // 7F1BB5DC: stb     r8, 27(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(27);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB5E0:
    ctx->pc = 0x7F1BB5E0u;
    // 7F1BB5E0: lha     r0, 58(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(58);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB5E4:
    ctx->pc = 0x7F1BB5E4u;
    // 7F1BB5E4: sth     r0, 28(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB5E8:
    ctx->pc = 0x7F1BB5E8u;
    // 7F1BB5E8: sth     r0, 28(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB5EC:
    ctx->pc = 0x7F1BB5ECu;
    // 7F1BB5EC: lha     r0, 66(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(66);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB5F0:
    ctx->pc = 0x7F1BB5F0u;
    // 7F1BB5F0: sth     r0, 30(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB5F4:
    ctx->pc = 0x7F1BB5F4u;
    // 7F1BB5F4: sth     r0, 30(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB5F8:
    ctx->pc = 0x7F1BB5F8u;
    // 7F1BB5F8: sth     r7, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1BB5FC:
    ctx->pc = 0x7F1BB5FCu;
    // 7F1BB5FC: sth     r7, 32(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(32);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1BB600:
    ctx->pc = 0x7F1BB600u;
    // 7F1BB600: sth     r6, 34(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1BB604:
    ctx->pc = 0x7F1BB604u;
    // 7F1BB604: sth     r6, 34(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1BB608:
    ctx->pc = 0x7F1BB608u;
    // 7F1BB608: stb     r8, 36(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB60C:
    ctx->pc = 0x7F1BB60Cu;
    // 7F1BB60C: stb     r8, 36(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(36);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB610:
    ctx->pc = 0x7F1BB610u;
    // 7F1BB610: stb     r8, 37(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB614:
    ctx->pc = 0x7F1BB614u;
    // 7F1BB614: stb     r8, 37(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(37);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB618:
    ctx->pc = 0x7F1BB618u;
    // 7F1BB618: stb     r8, 38(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB61C:
    ctx->pc = 0x7F1BB61Cu;
    // 7F1BB61C: stb     r8, 38(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(38);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB620:
    ctx->pc = 0x7F1BB620u;
    // 7F1BB620: stb     r8, 39(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB624:
    ctx->pc = 0x7F1BB624u;
    // 7F1BB624: stb     r8, 39(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(39);
        mem_write8(ctx, ea, (u8)ctx->gpr[8]);
    }

label_7F1BB628:
    ctx->pc = 0x7F1BB628u;
    // 7F1BB628: lha     r0, 60(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(60);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB62C:
    ctx->pc = 0x7F1BB62Cu;
    // 7F1BB62C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BB630:
    ctx->pc = 0x7F1BB630u;
    // 7F1BB630: sth     r0, 40(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB634:
    ctx->pc = 0x7F1BB634u;
    // 7F1BB634: sth     r0, 40(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(40);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB638:
    ctx->pc = 0x7F1BB638u;
    // 7F1BB638: lha     r0, 68(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(68);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_7F1BB63C:
    ctx->pc = 0x7F1BB63Cu;
    // 7F1BB63C: sth     r0, 42(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB640:
    ctx->pc = 0x7F1BB640u;
    // 7F1BB640: sth     r0, 42(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(42);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_7F1BB644:
    ctx->pc = 0x7F1BB644u;
    // 7F1BB644: sth     r7, 44(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1BB648:
    ctx->pc = 0x7F1BB648u;
    // 7F1BB648: sth     r7, 44(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(44);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_7F1BB64C:
    ctx->pc = 0x7F1BB64Cu;
    // 7F1BB64C: sth     r6, 46(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1BB650:
    ctx->pc = 0x7F1BB650u;
    // 7F1BB650: sth     r6, 46(r10)
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(46);
        mem_write16(ctx, ea, (u16)ctx->gpr[6]);
    }

label_7F1BB654:
    ctx->pc = 0x7F1BB654u;
    // 7F1BB654: lwz     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB658:
    ctx->pc = 0x7F1BB658u;
    // 7F1BB658: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB65C:
    ctx->pc = 0x7F1BB65Cu;
    // 7F1BB65C: stw     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB660:
    ctx->pc = 0x7F1BB660u;
    // 7F1BB660: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB664:
    ctx->pc = 0x7F1BB664u;
    // 7F1BB664: lwz     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB668:
    ctx->pc = 0x7F1BB668u;
    // 7F1BB668: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB66C:
    ctx->pc = 0x7F1BB66Cu;
    // 7F1BB66C: stw     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB670:
    ctx->pc = 0x7F1BB670u;
    // 7F1BB670: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB674:
    ctx->pc = 0x7F1BB674u;
    // 7F1BB674: lwz     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB678:
    ctx->pc = 0x7F1BB678u;
    // 7F1BB678: lwz     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB67C:
    ctx->pc = 0x7F1BB67Cu;
    // 7F1BB67C: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB680:
    ctx->pc = 0x7F1BB680u;
    // 7F1BB680: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB684:
    ctx->pc = 0x7F1BB684u;
    // 7F1BB684: lwz     r6, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB688:
    ctx->pc = 0x7F1BB688u;
    // 7F1BB688: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB68C:
    ctx->pc = 0x7F1BB68Cu;
    // 7F1BB68C: stw     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB690:
    ctx->pc = 0x7F1BB690u;
    // 7F1BB690: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB694:
    ctx->pc = 0x7F1BB694u;
    // 7F1BB694: lwz     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB698:
    ctx->pc = 0x7F1BB698u;
    // 7F1BB698: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB69C:
    ctx->pc = 0x7F1BB69Cu;
    // 7F1BB69C: stw     r6, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB6A0:
    ctx->pc = 0x7F1BB6A0u;
    // 7F1BB6A0: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB6A4:
    ctx->pc = 0x7F1BB6A4u;
    // 7F1BB6A4: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB6A8:
    ctx->pc = 0x7F1BB6A8u;
    // 7F1BB6A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB6AC:
    ctx->pc = 0x7F1BB6ACu;
    // 7F1BB6AC: stw     r6, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB6B0:
    ctx->pc = 0x7F1BB6B0u;
    // 7F1BB6B0: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB6B4:
    ctx->pc = 0x7F1BB6B4u;
    // 7F1BB6B4: lwz     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB6B8:
    ctx->pc = 0x7F1BB6B8u;
    // 7F1BB6B8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB6BC:
    ctx->pc = 0x7F1BB6BCu;
    // 7F1BB6BC: stw     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB6C0:
    ctx->pc = 0x7F1BB6C0u;
    // 7F1BB6C0: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB6C4:
    ctx->pc = 0x7F1BB6C4u;
    // 7F1BB6C4: lwz     r6, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB6C8:
    ctx->pc = 0x7F1BB6C8u;
    // 7F1BB6C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB6CC:
    ctx->pc = 0x7F1BB6CCu;
    // 7F1BB6CC: stw     r6, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB6D0:
    ctx->pc = 0x7F1BB6D0u;
    // 7F1BB6D0: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB6D4:
    ctx->pc = 0x7F1BB6D4u;
    // 7F1BB6D4: lwz     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB6D8:
    ctx->pc = 0x7F1BB6D8u;
    // 7F1BB6D8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB6DC:
    ctx->pc = 0x7F1BB6DCu;
    // 7F1BB6DC: stw     r6, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB6E0:
    ctx->pc = 0x7F1BB6E0u;
    // 7F1BB6E0: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB6E4:
    ctx->pc = 0x7F1BB6E4u;
    // 7F1BB6E4: lwz     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB6E8:
    ctx->pc = 0x7F1BB6E8u;
    // 7F1BB6E8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB6EC:
    ctx->pc = 0x7F1BB6ECu;
    // 7F1BB6EC: stw     r6, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB6F0:
    ctx->pc = 0x7F1BB6F0u;
    // 7F1BB6F0: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB6F4:
    ctx->pc = 0x7F1BB6F4u;
    // 7F1BB6F4: lwz     r6, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB6F8:
    ctx->pc = 0x7F1BB6F8u;
    // 7F1BB6F8: lwz     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB6FC:
    ctx->pc = 0x7F1BB6FCu;
    // 7F1BB6FC: stw     r6, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB700:
    ctx->pc = 0x7F1BB700u;
    // 7F1BB700: stw     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB704:
    ctx->pc = 0x7F1BB704u;
    // 7F1BB704: lwz     r6, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB708:
    ctx->pc = 0x7F1BB708u;
    // 7F1BB708: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB70C:
    ctx->pc = 0x7F1BB70Cu;
    // 7F1BB70C: stw     r6, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB710:
    ctx->pc = 0x7F1BB710u;
    // 7F1BB710: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB714:
    ctx->pc = 0x7F1BB714u;
    // 7F1BB714: lwz     r6, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB718:
    ctx->pc = 0x7F1BB718u;
    // 7F1BB718: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB71C:
    ctx->pc = 0x7F1BB71Cu;
    // 7F1BB71C: stw     r6, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB720:
    ctx->pc = 0x7F1BB720u;
    // 7F1BB720: stw     r0, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB724:
    ctx->pc = 0x7F1BB724u;
    // 7F1BB724: lwz     r6, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB728:
    ctx->pc = 0x7F1BB728u;
    // 7F1BB728: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB72C:
    ctx->pc = 0x7F1BB72Cu;
    // 7F1BB72C: stw     r6, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BB730:
    ctx->pc = 0x7F1BB730u;
    // 7F1BB730: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB734:
    ctx->pc = 0x7F1BB734u;
    // 7F1BB734: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BB738:
    ctx->pc = 0x7F1BB738u;
    // 7F1BB738: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB73C:
    ctx->pc = 0x7F1BB73Cu;
    // 7F1BB73C: stw     r4, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1BB740:
    ctx->pc = 0x7F1BB740u;
    // 7F1BB740: stw     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB744:
    ctx->pc = 0x7F1BB744u;
    // 7F1BB744: lwz     r4, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BB748:
    ctx->pc = 0x7F1BB748u;
    // 7F1BB748: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB74C:
    ctx->pc = 0x7F1BB74Cu;
    // 7F1BB74C: stw     r4, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1BB750:
    ctx->pc = 0x7F1BB750u;
    // 7F1BB750: stw     r0, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB754:
    ctx->pc = 0x7F1BB754u;
    ctx->downcount -= 16;
    // 7F1BB754: lmw     r29, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1BB758:
    ctx->pc = 0x7F1BB758u;
    // 7F1BB758: lwz     r0, 228(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(228);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB75C:
    ctx->pc = 0x7F1BB75Cu;
    // 7F1BB75C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB760:
    ctx->pc = 0x7F1BB760u;
    // 7F1BB760: addi    r1, r1, 224
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(224);

label_7F1BB764:
    ctx->pc = 0x7F1BB764u;
    // 7F1BB764: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB768:
    ctx->pc = 0x7F1BB768u;
    ctx->downcount -= 21;
    // 7F1BB768: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB76C:
    ctx->pc = 0x7F1BB76Cu;
    // 7F1BB76C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB770:
    ctx->pc = 0x7F1BB770u;
    // 7F1BB770: li      r5, 72
    ctx->gpr[5] = (u32)(s32)(72);

label_7F1BB774:
    ctx->pc = 0x7F1BB774u;
    // 7F1BB774: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_7F1BB778:
    ctx->pc = 0x7F1BB778u;
    // 7F1BB778: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB77C:
    ctx->pc = 0x7F1BB77Cu;
    // 7F1BB77C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1BB780:
    ctx->pc = 0x7F1BB780u;
    // 7F1BB780: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB784:
    ctx->pc = 0x7F1BB784u;
    // 7F1BB784: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BB788:
    ctx->pc = 0x7F1BB788u;
    // 7F1BB788: li      r3, 9
    ctx->gpr[3] = (u32)(s32)(9);

label_7F1BB78C:
    ctx->pc = 0x7F1BB78Cu;
    // 7F1BB78C: li      r4, 8192
    ctx->gpr[4] = (u32)(s32)(8192);

label_7F1BB790:
    ctx->pc = 0x7F1BB790u;
    // 7F1BB790: bl      0x7F3C7E50
    {
            ctx->lr = 0x7F1BB794u;
            ctx->pc = 0x7F3C7E50u;
            return;
    }

label_7F1BB794:
    ctx->pc = 0x7F1BB794u;
    ctx->downcount -= 2;
    // 7F1BB794: or.   r31, r3, r3
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

label_7F1BB798:
    ctx->pc = 0x7F1BB798u;
    // 7F1BB798: bc    12, 2, 0x7F1BB7D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB7D8;
        }
    }

label_7F1BB79C:
    ctx->pc = 0x7F1BB79Cu;
    ctx->downcount -= 5;
    // 7F1BB79C: lis     r4, 32540
    ctx->gpr[4] = ((u32)(s32)(32540) << 16);

label_7F1BB7A0:
    ctx->pc = 0x7F1BB7A0u;
    // 7F1BB7A0: lis     r5, 32540
    ctx->gpr[5] = ((u32)(s32)(32540) << 16);

label_7F1BB7A4:
    ctx->pc = 0x7F1BB7A4u;
    // 7F1BB7A4: addi    r4, r4, -20196
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20196);

label_7F1BB7A8:
    ctx->pc = 0x7F1BB7A8u;
    // 7F1BB7A8: addi    r5, r5, -19928
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-19928);

label_7F1BB7AC:
    ctx->pc = 0x7F1BB7ACu;
    // 7F1BB7AC: bl      0x7F3C7F18
    {
            ctx->lr = 0x7F1BB7B0u;
            ctx->pc = 0x7F3C7F18u;
            return;
    }

label_7F1BB7B0:
    ctx->pc = 0x7F1BB7B0u;
    ctx->downcount -= 4;
    // 7F1BB7B0: stw     r29, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_7F1BB7B4:
    ctx->pc = 0x7F1BB7B4u;
    // 7F1BB7B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BB7B8:
    ctx->pc = 0x7F1BB7B8u;
    // 7F1BB7B8: stw     r30, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_7F1BB7BC:
    ctx->pc = 0x7F1BB7BCu;
    // 7F1BB7BC: bl      0x7F1BB24C
    {
            ctx->lr = 0x7F1BB7C0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BB24Cu;
                return;
            }
            goto label_7F1BB24C;
    }

label_7F1BB7C0:
    ctx->pc = 0x7F1BB7C0u;
    ctx->downcount -= 2;
    // 7F1BB7C0: cmpwi   r3, 0
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

label_7F1BB7C4:
    ctx->pc = 0x7F1BB7C4u;
    // 7F1BB7C4: bc    4, 0, 0x7F1BB7D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_7F1BB7D8;
        }
    }

label_7F1BB7C8:
    ctx->pc = 0x7F1BB7C8u;
    ctx->downcount -= 2;
    // 7F1BB7C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BB7CC:
    ctx->pc = 0x7F1BB7CCu;
    // 7F1BB7CC: bl      0x7F3C8210
    {
            ctx->lr = 0x7F1BB7D0u;
            ctx->pc = 0x7F3C8210u;
            return;
    }

label_7F1BB7D0:
    ctx->pc = 0x7F1BB7D0u;
    ctx->downcount -= 2;
    // 7F1BB7D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_7F1BB7D4:
    ctx->pc = 0x7F1BB7D4u;
    // 7F1BB7D4: b       0x7F1BB7DC
    {
            goto label_7F1BB7DC;
    }

label_7F1BB7D8:
    ctx->pc = 0x7F1BB7D8u;
    ctx->downcount -= 1;
    // 7F1BB7D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BB7DC:
    ctx->pc = 0x7F1BB7DCu;
    ctx->downcount -= 16;
    // 7F1BB7DC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1BB7E0:
    ctx->pc = 0x7F1BB7E0u;
    // 7F1BB7E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB7E4:
    ctx->pc = 0x7F1BB7E4u;
    // 7F1BB7E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB7E8:
    ctx->pc = 0x7F1BB7E8u;
    // 7F1BB7E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1BB7EC:
    ctx->pc = 0x7F1BB7ECu;
    // 7F1BB7EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB7F0:
    ctx->pc = 0x7F1BB7F0u;
    ctx->downcount -= 18;
    // 7F1BB7F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB7F4:
    ctx->pc = 0x7F1BB7F4u;
    // 7F1BB7F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB7F8:
    ctx->pc = 0x7F1BB7F8u;
    // 7F1BB7F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB7FC:
    ctx->pc = 0x7F1BB7FCu;
    // 7F1BB7FC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1BB800:
    ctx->pc = 0x7F1BB800u;
    // 7F1BB800: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BB804:
    ctx->pc = 0x7F1BB804u;
    // 7F1BB804: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BB808:
    ctx->pc = 0x7F1BB808u;
    // 7F1BB808: lwz     r3, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BB80C:
    ctx->pc = 0x7F1BB80Cu;
    // 7F1BB80C: bl      0x7F19943C
    {
            ctx->lr = 0x7F1BB810u;
            ctx->pc = 0x7F19943Cu;
            return;
    }

label_7F1BB810:
    ctx->pc = 0x7F1BB810u;
    ctx->downcount -= 1;
    // 7F1BB810: bl      0x7F199494
    {
            ctx->lr = 0x7F1BB814u;
            ctx->pc = 0x7F199494u;
            return;
    }

label_7F1BB814:
    ctx->pc = 0x7F1BB814u;
    ctx->downcount -= 7;
    // 7F1BB814: lwz     r5, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BB818:
    ctx->pc = 0x7F1BB818u;
    // 7F1BB818: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB81C:
    ctx->pc = 0x7F1BB81Cu;
    // 7F1BB81C: lwz     r0, 36(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB820:
    ctx->pc = 0x7F1BB820u;
    // 7F1BB820: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BB824:
    ctx->pc = 0x7F1BB824u;
    // 7F1BB824: extsh r5, r5
    {
        ctx->gpr[5] = (u32)(s32)(s16)ctx->gpr[5];
    }

label_7F1BB828:
    ctx->pc = 0x7F1BB828u;
    // 7F1BB828: extsh r6, r0
    {
        ctx->gpr[6] = (u32)(s32)(s16)ctx->gpr[0];
    }

label_7F1BB82C:
    ctx->pc = 0x7F1BB82Cu;
    // 7F1BB82C: bl      0x7F1B9358
    {
            ctx->lr = 0x7F1BB830u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1B9358u;
                return;
            }
            goto label_7F1B9358;
    }

label_7F1BB830:
    ctx->pc = 0x7F1BB830u;
    ctx->downcount -= 16;
    // 7F1BB830: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1BB834:
    ctx->pc = 0x7F1BB834u;
    // 7F1BB834: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB838:
    ctx->pc = 0x7F1BB838u;
    // 7F1BB838: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB83C:
    ctx->pc = 0x7F1BB83Cu;
    // 7F1BB83C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BB840:
    ctx->pc = 0x7F1BB840u;
    // 7F1BB840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB844:
    ctx->pc = 0x7F1BB844u;
    ctx->downcount -= 7;
    // 7F1BB844: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB848:
    ctx->pc = 0x7F1BB848u;
    // 7F1BB848: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB84C:
    ctx->pc = 0x7F1BB84Cu;
    // 7F1BB84C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB850:
    ctx->pc = 0x7F1BB850u;
    // 7F1BB850: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB854:
    ctx->pc = 0x7F1BB854u;
    // 7F1BB854: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BB858:
    ctx->pc = 0x7F1BB858u;
    // 7F1BB858: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BB85C:
    ctx->pc = 0x7F1BB85Cu;
    // 7F1BB85C: bl      0x80025A08
    {
            ctx->lr = 0x7F1BB860u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BB860:
    ctx->pc = 0x7F1BB860u;
    ctx->downcount -= 4;
    // 7F1BB860: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB864:
    ctx->pc = 0x7F1BB864u;
    // 7F1BB864: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB864u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB868:
    ctx->pc = 0x7F1BB868u;
    // 7F1BB868: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB86C:
    ctx->pc = 0x7F1BB86Cu;
    // 7F1BB86C: bl      0x7F114738
    {
            ctx->lr = 0x7F1BB870u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BB870:
    ctx->pc = 0x7F1BB870u;
    ctx->downcount -= 4;
    // 7F1BB870: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB874:
    ctx->pc = 0x7F1BB874u;
    // 7F1BB874: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB874u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB878:
    ctx->pc = 0x7F1BB878u;
    // 7F1BB878: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB87C:
    ctx->pc = 0x7F1BB87Cu;
    // 7F1BB87C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BB880u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BB880:
    ctx->pc = 0x7F1BB880u;
    ctx->downcount -= 4;
    // 7F1BB880: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB884:
    ctx->pc = 0x7F1BB884u;
    // 7F1BB884: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB884u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB888:
    ctx->pc = 0x7F1BB888u;
    // 7F1BB888: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB88C:
    ctx->pc = 0x7F1BB88Cu;
    // 7F1BB88C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BB890u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BB890:
    ctx->pc = 0x7F1BB890u;
    ctx->downcount -= 12;
    // 7F1BB890: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BB894:
    ctx->pc = 0x7F1BB894u;
    // 7F1BB894: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB898:
    ctx->pc = 0x7F1BB898u;
    // 7F1BB898: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BB89C:
    ctx->pc = 0x7F1BB89Cu;
    // 7F1BB89C: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB8A0:
    ctx->pc = 0x7F1BB8A0u;
    // 7F1BB8A0: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1BB8A4:
    ctx->pc = 0x7F1BB8A4u;
    // 7F1BB8A4: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BB8A8:
    ctx->pc = 0x7F1BB8A8u;
    // 7F1BB8A8: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1BB8AC:
    ctx->pc = 0x7F1BB8ACu;
    // 7F1BB8AC: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1BB8B0:
    ctx->pc = 0x7F1BB8B0u;
    // 7F1BB8B0: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1BB8B4:
    ctx->pc = 0x7F1BB8B4u;
    // 7F1BB8B4: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1BB8B8:
    ctx->pc = 0x7F1BB8B8u;
    // 7F1BB8B8: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1BB8BC:
    ctx->pc = 0x7F1BB8BCu;
    // 7F1BB8BC: bl      0x7F3FE7EC
    {
            ctx->lr = 0x7F1BB8C0u;
            ctx->pc = 0x7F3FE7ECu;
            return;
    }

label_7F1BB8C0:
    ctx->pc = 0x7F1BB8C0u;
    ctx->downcount -= 6;
    // 7F1BB8C0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB8C4:
    ctx->pc = 0x7F1BB8C4u;
    // 7F1BB8C4: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BB8C8:
    ctx->pc = 0x7F1BB8C8u;
    // 7F1BB8C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB8CC:
    ctx->pc = 0x7F1BB8CCu;
    // 7F1BB8CC: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BB8D0:
    ctx->pc = 0x7F1BB8D0u;
    // 7F1BB8D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB8D4:
    ctx->pc = 0x7F1BB8D4u;
    ctx->downcount -= 7;
    // 7F1BB8D4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB8D8:
    ctx->pc = 0x7F1BB8D8u;
    // 7F1BB8D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB8DC:
    ctx->pc = 0x7F1BB8DCu;
    // 7F1BB8DC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB8E0:
    ctx->pc = 0x7F1BB8E0u;
    // 7F1BB8E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB8E4:
    ctx->pc = 0x7F1BB8E4u;
    // 7F1BB8E4: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BB8E8:
    ctx->pc = 0x7F1BB8E8u;
    // 7F1BB8E8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BB8EC:
    ctx->pc = 0x7F1BB8ECu;
    // 7F1BB8EC: bl      0x80025A08
    {
            ctx->lr = 0x7F1BB8F0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BB8F0:
    ctx->pc = 0x7F1BB8F0u;
    ctx->downcount -= 4;
    // 7F1BB8F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB8F4:
    ctx->pc = 0x7F1BB8F4u;
    // 7F1BB8F4: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB8F4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB8F8:
    ctx->pc = 0x7F1BB8F8u;
    // 7F1BB8F8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB8FC:
    ctx->pc = 0x7F1BB8FCu;
    // 7F1BB8FC: bl      0x7F114738
    {
            ctx->lr = 0x7F1BB900u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BB900:
    ctx->pc = 0x7F1BB900u;
    ctx->downcount -= 4;
    // 7F1BB900: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB904:
    ctx->pc = 0x7F1BB904u;
    // 7F1BB904: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB904u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB908:
    ctx->pc = 0x7F1BB908u;
    // 7F1BB908: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB90C:
    ctx->pc = 0x7F1BB90Cu;
    // 7F1BB90C: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BB910u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BB910:
    ctx->pc = 0x7F1BB910u;
    ctx->downcount -= 4;
    // 7F1BB910: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB914:
    ctx->pc = 0x7F1BB914u;
    // 7F1BB914: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB914u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB918:
    ctx->pc = 0x7F1BB918u;
    // 7F1BB918: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB91C:
    ctx->pc = 0x7F1BB91Cu;
    // 7F1BB91C: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BB920u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BB920:
    ctx->pc = 0x7F1BB920u;
    ctx->downcount -= 3;
    // 7F1BB920: lwz     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BB924:
    ctx->pc = 0x7F1BB924u;
    // 7F1BB924: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB928:
    ctx->pc = 0x7F1BB928u;
    // 7F1BB928: bl      0x7F3FE9C4
    {
            ctx->lr = 0x7F1BB92Cu;
            ctx->pc = 0x7F3FE9C4u;
            return;
    }

label_7F1BB92C:
    ctx->pc = 0x7F1BB92Cu;
    ctx->downcount -= 6;
    // 7F1BB92C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB930:
    ctx->pc = 0x7F1BB930u;
    // 7F1BB930: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BB934:
    ctx->pc = 0x7F1BB934u;
    // 7F1BB934: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB938:
    ctx->pc = 0x7F1BB938u;
    // 7F1BB938: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BB93C:
    ctx->pc = 0x7F1BB93Cu;
    // 7F1BB93C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB940:
    ctx->pc = 0x7F1BB940u;
    ctx->downcount -= 7;
    // 7F1BB940: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB944:
    ctx->pc = 0x7F1BB944u;
    // 7F1BB944: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB948:
    ctx->pc = 0x7F1BB948u;
    // 7F1BB948: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB94C:
    ctx->pc = 0x7F1BB94Cu;
    // 7F1BB94C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB950:
    ctx->pc = 0x7F1BB950u;
    // 7F1BB950: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BB954:
    ctx->pc = 0x7F1BB954u;
    // 7F1BB954: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BB958:
    ctx->pc = 0x7F1BB958u;
    // 7F1BB958: bl      0x80025A08
    {
            ctx->lr = 0x7F1BB95Cu;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BB95C:
    ctx->pc = 0x7F1BB95Cu;
    ctx->downcount -= 4;
    // 7F1BB95C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB960:
    ctx->pc = 0x7F1BB960u;
    // 7F1BB960: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB960u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB964:
    ctx->pc = 0x7F1BB964u;
    // 7F1BB964: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB968:
    ctx->pc = 0x7F1BB968u;
    // 7F1BB968: bl      0x7F114738
    {
            ctx->lr = 0x7F1BB96Cu;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BB96C:
    ctx->pc = 0x7F1BB96Cu;
    ctx->downcount -= 4;
    // 7F1BB96C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB970:
    ctx->pc = 0x7F1BB970u;
    // 7F1BB970: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB970u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB974:
    ctx->pc = 0x7F1BB974u;
    // 7F1BB974: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB978:
    ctx->pc = 0x7F1BB978u;
    // 7F1BB978: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BB97Cu;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BB97C:
    ctx->pc = 0x7F1BB97Cu;
    ctx->downcount -= 4;
    // 7F1BB97C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB980:
    ctx->pc = 0x7F1BB980u;
    // 7F1BB980: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB980u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB984:
    ctx->pc = 0x7F1BB984u;
    // 7F1BB984: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB988:
    ctx->pc = 0x7F1BB988u;
    // 7F1BB988: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BB98Cu;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BB98C:
    ctx->pc = 0x7F1BB98Cu;
    ctx->downcount -= 11;
    // 7F1BB98C: lwz     r4, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BB990:
    ctx->pc = 0x7F1BB990u;
    // 7F1BB990: addi    r3, r31, 16
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(16);

label_7F1BB994:
    ctx->pc = 0x7F1BB994u;
    // 7F1BB994: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB998:
    ctx->pc = 0x7F1BB998u;
    // 7F1BB998: lwz     r5, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BB99C:
    ctx->pc = 0x7F1BB99Cu;
    // 7F1BB99C: rlwinm r4, r4, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 8u) & 0xFFFFFF00u;
    }

label_7F1BB9A0:
    ctx->pc = 0x7F1BB9A0u;
    // 7F1BB9A0: rlwinm r0, r0, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 16u) & 0xFFFF0000u;
    }

label_7F1BB9A4:
    ctx->pc = 0x7F1BB9A4u;
    // 7F1BB9A4: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB9A4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB9A8:
    ctx->pc = 0x7F1BB9A8u;
    // 7F1BB9A8: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1BB9AC:
    ctx->pc = 0x7F1BB9ACu;
    // 7F1BB9AC: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB9ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BB9B0:
    ctx->pc = 0x7F1BB9B0u;
    // 7F1BB9B0: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1BB9B4:
    ctx->pc = 0x7F1BB9B4u;
    // 7F1BB9B4: bl      0x7F4516CC
    {
            ctx->lr = 0x7F1BB9B8u;
            ctx->pc = 0x7F4516CCu;
            return;
    }

label_7F1BB9B8:
    ctx->pc = 0x7F1BB9B8u;
    ctx->downcount -= 6;
    // 7F1BB9B8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BB9BC:
    ctx->pc = 0x7F1BB9BCu;
    // 7F1BB9BC: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BB9C0:
    ctx->pc = 0x7F1BB9C0u;
    // 7F1BB9C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BB9C4:
    ctx->pc = 0x7F1BB9C4u;
    // 7F1BB9C4: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BB9C8:
    ctx->pc = 0x7F1BB9C8u;
    // 7F1BB9C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BB9CC:
    ctx->pc = 0x7F1BB9CCu;
    ctx->downcount -= 7;
    // 7F1BB9CC: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BB9D0:
    ctx->pc = 0x7F1BB9D0u;
    // 7F1BB9D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BB9D4:
    ctx->pc = 0x7F1BB9D4u;
    // 7F1BB9D4: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BB9D8:
    ctx->pc = 0x7F1BB9D8u;
    // 7F1BB9D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB9DC:
    ctx->pc = 0x7F1BB9DCu;
    // 7F1BB9DC: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BB9E0:
    ctx->pc = 0x7F1BB9E0u;
    // 7F1BB9E0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BB9E4:
    ctx->pc = 0x7F1BB9E4u;
    // 7F1BB9E4: bl      0x80025A08
    {
            ctx->lr = 0x7F1BB9E8u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BB9E8:
    ctx->pc = 0x7F1BB9E8u;
    ctx->downcount -= 4;
    // 7F1BB9E8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB9EC:
    ctx->pc = 0x7F1BB9ECu;
    // 7F1BB9EC: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB9ECu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BB9F0:
    ctx->pc = 0x7F1BB9F0u;
    // 7F1BB9F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BB9F4:
    ctx->pc = 0x7F1BB9F4u;
    // 7F1BB9F4: bl      0x7F114738
    {
            ctx->lr = 0x7F1BB9F8u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BB9F8:
    ctx->pc = 0x7F1BB9F8u;
    ctx->downcount -= 4;
    // 7F1BB9F8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BB9FC:
    ctx->pc = 0x7F1BB9FCu;
    // 7F1BB9FC: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BB9FCu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBA00:
    ctx->pc = 0x7F1BBA00u;
    // 7F1BBA00: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBA04:
    ctx->pc = 0x7F1BBA04u;
    // 7F1BBA04: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BBA08u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BBA08:
    ctx->pc = 0x7F1BBA08u;
    ctx->downcount -= 4;
    // 7F1BBA08: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBA0C:
    ctx->pc = 0x7F1BBA0Cu;
    // 7F1BBA0C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBA0Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBA10:
    ctx->pc = 0x7F1BBA10u;
    // 7F1BBA10: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBA14:
    ctx->pc = 0x7F1BBA14u;
    // 7F1BBA14: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BBA18u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BBA18:
    ctx->pc = 0x7F1BBA18u;
    ctx->downcount -= 17;
    // 7F1BBA18: lwz     r5, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBA1C:
    ctx->pc = 0x7F1BBA1Cu;
    // 7F1BBA1C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBA20:
    ctx->pc = 0x7F1BBA20u;
    // 7F1BBA20: lwz     r4, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BBA24:
    ctx->pc = 0x7F1BBA24u;
    // 7F1BBA24: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBA28:
    ctx->pc = 0x7F1BBA28u;
    // 7F1BBA28: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1BBA2C:
    ctx->pc = 0x7F1BBA2Cu;
    // 7F1BBA2C: lwz     r6, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BBA30:
    ctx->pc = 0x7F1BBA30u;
    // 7F1BBA30: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1BBA34:
    ctx->pc = 0x7F1BBA34u;
    // 7F1BBA34: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1BBA38:
    ctx->pc = 0x7F1BBA38u;
    // 7F1BBA38: lfs     f1, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBA38u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBA3C:
    ctx->pc = 0x7F1BBA3Cu;
    // 7F1BBA3C: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1BBA40:
    ctx->pc = 0x7F1BBA40u;
    // 7F1BBA40: lfs     f2, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBA40u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BBA44:
    ctx->pc = 0x7F1BBA44u;
    // 7F1BBA44: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1BBA48:
    ctx->pc = 0x7F1BBA48u;
    // 7F1BBA48: lfs     f3, 56(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBA48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1BBA4C:
    ctx->pc = 0x7F1BBA4Cu;
    // 7F1BBA4C: lfs     f4, 60(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBA4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_7F1BBA50:
    ctx->pc = 0x7F1BBA50u;
    // 7F1BBA50: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1BBA54:
    ctx->pc = 0x7F1BBA54u;
    // 7F1BBA54: lfs     f5, 80(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBA54u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[5] = value;
        ctx->ps1[5] = value;
    }

label_7F1BBA58:
    ctx->pc = 0x7F1BBA58u;
    // 7F1BBA58: bl      0x7F40012C
    {
            ctx->lr = 0x7F1BBA5Cu;
            ctx->pc = 0x7F40012Cu;
            return;
    }

label_7F1BBA5C:
    ctx->pc = 0x7F1BBA5Cu;
    ctx->downcount -= 6;
    // 7F1BBA5C: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBA60:
    ctx->pc = 0x7F1BBA60u;
    // 7F1BBA60: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BBA64:
    ctx->pc = 0x7F1BBA64u;
    // 7F1BBA64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BBA68:
    ctx->pc = 0x7F1BBA68u;
    // 7F1BBA68: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BBA6C:
    ctx->pc = 0x7F1BBA6Cu;
    // 7F1BBA6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BBA70:
    ctx->pc = 0x7F1BBA70u;
    ctx->downcount -= 5;
    // 7F1BBA70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BBA74:
    ctx->pc = 0x7F1BBA74u;
    // 7F1BBA74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BBA78:
    ctx->pc = 0x7F1BBA78u;
    // 7F1BBA78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBA7C:
    ctx->pc = 0x7F1BBA7Cu;
    // 7F1BBA7C: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BBA80:
    ctx->pc = 0x7F1BBA80u;
    // 7F1BBA80: bl      0x7F250D68
    {
            ctx->lr = 0x7F1BBA84u;
            ctx->pc = 0x7F250D68u;
            return;
    }

label_7F1BBA84:
    ctx->pc = 0x7F1BBA84u;
    ctx->downcount -= 5;
    // 7F1BBA84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBA88:
    ctx->pc = 0x7F1BBA88u;
    // 7F1BBA88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BBA8C:
    ctx->pc = 0x7F1BBA8Cu;
    // 7F1BBA8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_7F1BBA90:
    ctx->pc = 0x7F1BBA90u;
    // 7F1BBA90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BBA94:
    ctx->pc = 0x7F1BBA94u;
    ctx->downcount -= 7;
    // 7F1BBA94: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BBA98:
    ctx->pc = 0x7F1BBA98u;
    // 7F1BBA98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BBA9C:
    ctx->pc = 0x7F1BBA9Cu;
    // 7F1BBA9C: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBAA0:
    ctx->pc = 0x7F1BBAA0u;
    // 7F1BBAA0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBAA4:
    ctx->pc = 0x7F1BBAA4u;
    // 7F1BBAA4: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BBAA8:
    ctx->pc = 0x7F1BBAA8u;
    // 7F1BBAA8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BBAAC:
    ctx->pc = 0x7F1BBAACu;
    // 7F1BBAAC: bl      0x80025A08
    {
            ctx->lr = 0x7F1BBAB0u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BBAB0:
    ctx->pc = 0x7F1BBAB0u;
    ctx->downcount -= 4;
    // 7F1BBAB0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBAB4:
    ctx->pc = 0x7F1BBAB4u;
    // 7F1BBAB4: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBAB4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBAB8:
    ctx->pc = 0x7F1BBAB8u;
    // 7F1BBAB8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBABC:
    ctx->pc = 0x7F1BBABCu;
    // 7F1BBABC: bl      0x7F114738
    {
            ctx->lr = 0x7F1BBAC0u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BBAC0:
    ctx->pc = 0x7F1BBAC0u;
    ctx->downcount -= 4;
    // 7F1BBAC0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBAC4:
    ctx->pc = 0x7F1BBAC4u;
    // 7F1BBAC4: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBAC4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBAC8:
    ctx->pc = 0x7F1BBAC8u;
    // 7F1BBAC8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBACC:
    ctx->pc = 0x7F1BBACCu;
    // 7F1BBACC: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BBAD0u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BBAD0:
    ctx->pc = 0x7F1BBAD0u;
    ctx->downcount -= 4;
    // 7F1BBAD0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBAD4:
    ctx->pc = 0x7F1BBAD4u;
    // 7F1BBAD4: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBAD4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBAD8:
    ctx->pc = 0x7F1BBAD8u;
    // 7F1BBAD8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBADC:
    ctx->pc = 0x7F1BBADCu;
    // 7F1BBADC: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BBAE0u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BBAE0:
    ctx->pc = 0x7F1BBAE0u;
    ctx->downcount -= 14;
    // 7F1BBAE0: lwz     r5, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBAE4:
    ctx->pc = 0x7F1BBAE4u;
    // 7F1BBAE4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBAE8:
    ctx->pc = 0x7F1BBAE8u;
    // 7F1BBAE8: lwz     r4, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BBAEC:
    ctx->pc = 0x7F1BBAECu;
    // 7F1BBAEC: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBAF0:
    ctx->pc = 0x7F1BBAF0u;
    // 7F1BBAF0: rlwinm r5, r5, 8, 0, 23
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 8u) & 0xFFFFFF00u;
    }

label_7F1BBAF4:
    ctx->pc = 0x7F1BBAF4u;
    // 7F1BBAF4: lwz     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BBAF8:
    ctx->pc = 0x7F1BBAF8u;
    // 7F1BBAF8: rlwinm r4, r4, 16, 0, 15
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 16u) & 0xFFFF0000u;
    }

label_7F1BBAFC:
    ctx->pc = 0x7F1BBAFCu;
    // 7F1BBAFC: rlwinm r0, r0, 24, 0, 7
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 24u) & 0xFF000000u;
    }

label_7F1BBB00:
    ctx->pc = 0x7F1BBB00u;
    // 7F1BBB00: lfs     f1, 64(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBB00u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBB04:
    ctx->pc = 0x7F1BBB04u;
    // 7F1BBB04: or   r5, r6, r5
    {
        ctx->gpr[5] = ctx->gpr[6] | ctx->gpr[5];
    }

label_7F1BBB08:
    ctx->pc = 0x7F1BBB08u;
    // 7F1BBB08: lfs     f2, 68(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBB08u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BBB0C:
    ctx->pc = 0x7F1BBB0Cu;
    // 7F1BBB0C: or   r4, r5, r4
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[4];
    }

label_7F1BBB10:
    ctx->pc = 0x7F1BBB10u;
    // 7F1BBB10: or   r4, r4, r0
    {
        ctx->gpr[4] = ctx->gpr[4] | ctx->gpr[0];
    }

label_7F1BBB14:
    ctx->pc = 0x7F1BBB14u;
    // 7F1BBB14: bl      0x7F400DA4
    {
            ctx->lr = 0x7F1BBB18u;
            ctx->pc = 0x7F400DA4u;
            return;
    }

label_7F1BBB18:
    ctx->pc = 0x7F1BBB18u;
    ctx->downcount -= 6;
    // 7F1BBB18: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBB1C:
    ctx->pc = 0x7F1BBB1Cu;
    // 7F1BBB1C: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BBB20:
    ctx->pc = 0x7F1BBB20u;
    // 7F1BBB20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BBB24:
    ctx->pc = 0x7F1BBB24u;
    // 7F1BBB24: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BBB28:
    ctx->pc = 0x7F1BBB28u;
    // 7F1BBB28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BBB2C:
    ctx->pc = 0x7F1BBB2Cu;
    ctx->downcount -= 7;
    // 7F1BBB2C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BBB30:
    ctx->pc = 0x7F1BBB30u;
    // 7F1BBB30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BBB34:
    ctx->pc = 0x7F1BBB34u;
    // 7F1BBB34: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBB38:
    ctx->pc = 0x7F1BBB38u;
    // 7F1BBB38: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBB3C:
    ctx->pc = 0x7F1BBB3Cu;
    // 7F1BBB3C: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_7F1BBB40:
    ctx->pc = 0x7F1BBB40u;
    // 7F1BBB40: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BBB44:
    ctx->pc = 0x7F1BBB44u;
    // 7F1BBB44: bl      0x80025A08
    {
            ctx->lr = 0x7F1BBB48u;
            ctx->pc = 0x80025A08u;
            return;
    }

label_7F1BBB48:
    ctx->pc = 0x7F1BBB48u;
    ctx->downcount -= 4;
    // 7F1BBB48: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBB4C:
    ctx->pc = 0x7F1BBB4Cu;
    // 7F1BBB4C: lfs     f1, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBB4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBB50:
    ctx->pc = 0x7F1BBB50u;
    // 7F1BBB50: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBB54:
    ctx->pc = 0x7F1BBB54u;
    // 7F1BBB54: bl      0x7F114738
    {
            ctx->lr = 0x7F1BBB58u;
            ctx->pc = 0x7F114738u;
            return;
    }

label_7F1BBB58:
    ctx->pc = 0x7F1BBB58u;
    ctx->downcount -= 4;
    // 7F1BBB58: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBB5C:
    ctx->pc = 0x7F1BBB5Cu;
    // 7F1BBB5C: lfs     f1, 36(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBB5Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBB60:
    ctx->pc = 0x7F1BBB60u;
    // 7F1BBB60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBB64:
    ctx->pc = 0x7F1BBB64u;
    // 7F1BBB64: bl      0x7F1147E8
    {
            ctx->lr = 0x7F1BBB68u;
            ctx->pc = 0x7F1147E8u;
            return;
    }

label_7F1BBB68:
    ctx->pc = 0x7F1BBB68u;
    ctx->downcount -= 4;
    // 7F1BBB68: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBB6C:
    ctx->pc = 0x7F1BBB6Cu;
    // 7F1BBB6C: lfs     f1, 40(r31)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBB6Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBB70:
    ctx->pc = 0x7F1BBB70u;
    // 7F1BBB70: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBB74:
    ctx->pc = 0x7F1BBB74u;
    // 7F1BBB74: bl      0x7F1148AC
    {
            ctx->lr = 0x7F1BBB78u;
            ctx->pc = 0x7F1148ACu;
            return;
    }

label_7F1BBB78:
    ctx->pc = 0x7F1BBB78u;
    ctx->downcount -= 2;
    // 7F1BBB78: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_7F1BBB7C:
    ctx->pc = 0x7F1BBB7Cu;
    // 7F1BBB7C: bl      0x7F45AE4C
    {
            ctx->lr = 0x7F1BBB80u;
            ctx->pc = 0x7F45AE4Cu;
            return;
    }

label_7F1BBB80:
    ctx->pc = 0x7F1BBB80u;
    ctx->downcount -= 6;
    // 7F1BBB80: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBB84:
    ctx->pc = 0x7F1BBB84u;
    // 7F1BBB84: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_7F1BBB88:
    ctx->pc = 0x7F1BBB88u;
    // 7F1BBB88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BBB8C:
    ctx->pc = 0x7F1BBB8Cu;
    // 7F1BBB8C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_7F1BBB90:
    ctx->pc = 0x7F1BBB90u;
    // 7F1BBB90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BBB94:
    ctx->pc = 0x7F1BBB94u;
    ctx->downcount -= 10;
    // 7F1BBB94: lwz     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BBB98:
    ctx->pc = 0x7F1BBB98u;
    // 7F1BBB98: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBB9C:
    ctx->pc = 0x7F1BBB9Cu;
    // 7F1BBB9C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBBA0:
    ctx->pc = 0x7F1BBBA0u;
    // 7F1BBBA0: stwu     r4, 14180(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14180);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_7F1BBBA4:
    ctx->pc = 0x7F1BBBA4u;
    // 7F1BBBA4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBBA8:
    ctx->pc = 0x7F1BBBA8u;
    // 7F1BBBA8: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BBBAC:
    ctx->pc = 0x7F1BBBACu;
    // 7F1BBBAC: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBBB0:
    ctx->pc = 0x7F1BBBB0u;
    // 7F1BBBB0: stw     r4, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_7F1BBBB4:
    ctx->pc = 0x7F1BBBB4u;
    // 7F1BBBB4: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBBB8:
    ctx->pc = 0x7F1BBBB8u;
    // 7F1BBBB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BBBBC:
    ctx->pc = 0x7F1BBBBCu;
    ctx->downcount -= 20;
    // 7F1BBBBC: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBBC0:
    ctx->pc = 0x7F1BBBC0u;
    // 7F1BBBC0: lwz     r6, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BBBC4:
    ctx->pc = 0x7F1BBBC4u;
    // 7F1BBBC4: addi    r7, r5, 14164
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(14164);

label_7F1BBBC8:
    ctx->pc = 0x7F1BBBC8u;
    // 7F1BBBC8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBBCC:
    ctx->pc = 0x7F1BBBCCu;
    // 7F1BBBCC: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBBD0:
    ctx->pc = 0x7F1BBBD0u;
    // 7F1BBBD0: stw     r6, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BBBD4:
    ctx->pc = 0x7F1BBBD4u;
    // 7F1BBBD4: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBBD8:
    ctx->pc = 0x7F1BBBD8u;
    // 7F1BBBD8: lwz     r6, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BBBDC:
    ctx->pc = 0x7F1BBBDCu;
    // 7F1BBBDC: lwz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBBE0:
    ctx->pc = 0x7F1BBBE0u;
    // 7F1BBBE0: stw     r6, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BBBE4:
    ctx->pc = 0x7F1BBBE4u;
    // 7F1BBBE4: stw     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBBE8:
    ctx->pc = 0x7F1BBBE8u;
    // 7F1BBBE8: lwz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BBBEC:
    ctx->pc = 0x7F1BBBECu;
    // 7F1BBBEC: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBBF0:
    ctx->pc = 0x7F1BBBF0u;
    // 7F1BBBF0: stwu     r3, 14148(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(14148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
        ctx->gpr[5] = ea;
    }

label_7F1BBBF4:
    ctx->pc = 0x7F1BBBF4u;
    // 7F1BBBF4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBBF8:
    ctx->pc = 0x7F1BBBF8u;
    // 7F1BBBF8: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BBBFC:
    ctx->pc = 0x7F1BBBFCu;
    // 7F1BBBFC: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBC00:
    ctx->pc = 0x7F1BBC00u;
    // 7F1BBC00: stw     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BBC04:
    ctx->pc = 0x7F1BBC04u;
    // 7F1BBC04: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBC08:
    ctx->pc = 0x7F1BBC08u;
    // 7F1BBC08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BBC0C:
    ctx->pc = 0x7F1BBC0Cu;
    ctx->downcount -= 64;
    // 7F1BBC0C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BBC10:
    ctx->pc = 0x7F1BBC10u;
    // 7F1BBC10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BBC14:
    ctx->pc = 0x7F1BBC14u;
    // 7F1BBC14: lis     r9, 32588
    ctx->gpr[9] = ((u32)(s32)(32588) << 16);

label_7F1BBC18:
    ctx->pc = 0x7F1BBC18u;
    // 7F1BBC18: lis     r12, 32588
    ctx->gpr[12] = ((u32)(s32)(32588) << 16);

label_7F1BBC1C:
    ctx->pc = 0x7F1BBC1Cu;
    // 7F1BBC1C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBC20:
    ctx->pc = 0x7F1BBC20u;
    // 7F1BBC20: lis     r11, 32588
    ctx->gpr[11] = ((u32)(s32)(32588) << 16);

label_7F1BBC24:
    ctx->pc = 0x7F1BBC24u;
    // 7F1BBC24: lis     r10, 32588
    ctx->gpr[10] = ((u32)(s32)(32588) << 16);

label_7F1BBC28:
    ctx->pc = 0x7F1BBC28u;
    // 7F1BBC28: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1BBC2C:
    ctx->pc = 0x7F1BBC2Cu;
    // 7F1BBC2C: addi    r27, r9, 14084
    ctx->gpr[27] = ctx->gpr[9] + (u32)(s32)(14084);

label_7F1BBC30:
    ctx->pc = 0x7F1BBC30u;
    // 7F1BBC30: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1BBC34:
    ctx->pc = 0x7F1BBC34u;
    // 7F1BBC34: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBC38:
    ctx->pc = 0x7F1BBC38u;
    // 7F1BBC38: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1BBC3C:
    ctx->pc = 0x7F1BBC3Cu;
    // 7F1BBC3C: lis     r9, 32588
    ctx->gpr[9] = ((u32)(s32)(32588) << 16);

label_7F1BBC40:
    ctx->pc = 0x7F1BBC40u;
    // 7F1BBC40: addi    r6, r10, 14132
    ctx->gpr[6] = ctx->gpr[10] + (u32)(s32)(14132);

label_7F1BBC44:
    ctx->pc = 0x7F1BBC44u;
    // 7F1BBC44: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1BBC48:
    ctx->pc = 0x7F1BBC48u;
    // 7F1BBC48: lwz     r8, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1BBC4C:
    ctx->pc = 0x7F1BBC4Cu;
    // 7F1BBC4C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBC50:
    ctx->pc = 0x7F1BBC50u;
    // 7F1BBC50: stw     r8, 0(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1BBC54:
    ctx->pc = 0x7F1BBC54u;
    // 7F1BBC54: lis     r8, 32588
    ctx->gpr[8] = ((u32)(s32)(32588) << 16);

label_7F1BBC58:
    ctx->pc = 0x7F1BBC58u;
    // 7F1BBC58: lfs     f1, 14164(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBC58u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBC5C:
    ctx->pc = 0x7F1BBC5Cu;
    // 7F1BBC5C: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBC60:
    ctx->pc = 0x7F1BBC60u;
    // 7F1BBC60: addi    r0, r9, 14020
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(14020);

label_7F1BBC64:
    ctx->pc = 0x7F1BBC64u;
    // 7F1BBC64: addi    r9, r11, 14116
    ctx->gpr[9] = ctx->gpr[11] + (u32)(s32)(14116);

label_7F1BBC68:
    ctx->pc = 0x7F1BBC68u;
    // 7F1BBC68: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_7F1BBC6C:
    ctx->pc = 0x7F1BBC6Cu;
    // 7F1BBC6C: lwz     r5, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBC70:
    ctx->pc = 0x7F1BBC70u;
    // 7F1BBC70: stw     r3, 8(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_7F1BBC74:
    ctx->pc = 0x7F1BBC74u;
    // 7F1BBC74: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BBC78:
    ctx->pc = 0x7F1BBC78u;
    // 7F1BBC78: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1BBC7C:
    ctx->pc = 0x7F1BBC7Cu;
    // 7F1BBC7C: stw     r5, 12(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BBC80:
    ctx->pc = 0x7F1BBC80u;
    // 7F1BBC80: lwz     r5, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBC84:
    ctx->pc = 0x7F1BBC84u;
    // 7F1BBC84: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBC88:
    ctx->pc = 0x7F1BBC88u;
    // 7F1BBC88: stwu     r5, 14100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(14100);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
        ctx->gpr[12] = ea;
    }

label_7F1BBC8C:
    ctx->pc = 0x7F1BBC8Cu;
    // 7F1BBC8C: stw     r0, 4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBC90:
    ctx->pc = 0x7F1BBC90u;
    // 7F1BBC90: lwz     r5, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBC94:
    ctx->pc = 0x7F1BBC94u;
    // 7F1BBC94: lwz     r0, 12(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBC98:
    ctx->pc = 0x7F1BBC98u;
    // 7F1BBC98: stw     r5, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BBC9C:
    ctx->pc = 0x7F1BBC9Cu;
    // 7F1BBC9C: stw     r0, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBCA0:
    ctx->pc = 0x7F1BBCA0u;
    // 7F1BBCA0: lwz     r5, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBCA4:
    ctx->pc = 0x7F1BBCA4u;
    // 7F1BBCA4: lwz     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBCA8:
    ctx->pc = 0x7F1BBCA8u;
    // 7F1BBCA8: stw     r5, 0(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BBCAC:
    ctx->pc = 0x7F1BBCACu;
    // 7F1BBCAC: stw     r0, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBCB0:
    ctx->pc = 0x7F1BBCB0u;
    // 7F1BBCB0: lwz     r5, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBCB4:
    ctx->pc = 0x7F1BBCB4u;
    // 7F1BBCB4: lwz     r0, 12(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBCB8:
    ctx->pc = 0x7F1BBCB8u;
    // 7F1BBCB8: stw     r5, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BBCBC:
    ctx->pc = 0x7F1BBCBCu;
    // 7F1BBCBC: stw     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBCC0:
    ctx->pc = 0x7F1BBCC0u;
    // 7F1BBCC0: lwz     r5, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBCC4:
    ctx->pc = 0x7F1BBCC4u;
    // 7F1BBCC4: lwz     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBCC8:
    ctx->pc = 0x7F1BBCC8u;
    // 7F1BBCC8: stw     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BBCCC:
    ctx->pc = 0x7F1BBCCCu;
    // 7F1BBCCC: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBCD0:
    ctx->pc = 0x7F1BBCD0u;
    // 7F1BBCD0: lwz     r5, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBCD4:
    ctx->pc = 0x7F1BBCD4u;
    // 7F1BBCD4: lwz     r0, 12(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBCD8:
    ctx->pc = 0x7F1BBCD8u;
    // 7F1BBCD8: stw     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BBCDC:
    ctx->pc = 0x7F1BBCDCu;
    // 7F1BBCDC: stw     r0, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBCE0:
    ctx->pc = 0x7F1BBCE0u;
    // 7F1BBCE0: bl      0x80026020
    {
            ctx->lr = 0x7F1BBCE4u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBCE4:
    ctx->pc = 0x7F1BBCE4u;
    ctx->downcount -= 7;
    // 7F1BBCE4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBCE8:
    ctx->pc = 0x7F1BBCE8u;
    // 7F1BBCE8: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBCEC:
    ctx->pc = 0x7F1BBCECu;
    // 7F1BBCEC: addi    r27, r3, 14164
    ctx->gpr[27] = ctx->gpr[3] + (u32)(s32)(14164);

label_7F1BBCF0:
    ctx->pc = 0x7F1BBCF0u;
    // 7F1BBCF0: lfs     f1, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBCF0u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBCF4:
    ctx->pc = 0x7F1BBCF4u;
    // 7F1BBCF4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1BBCF8:
    ctx->pc = 0x7F1BBCF8u;
    // 7F1BBCF8: addi    r4, r4, 14068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14068);

label_7F1BBCFC:
    ctx->pc = 0x7F1BBCFCu;
    // 7F1BBCFC: bl      0x80026020
    {
            ctx->lr = 0x7F1BBD00u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBD00:
    ctx->pc = 0x7F1BBD00u;
    ctx->downcount -= 6;
    // 7F1BBD00: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBD04:
    ctx->pc = 0x7F1BBD04u;
    // 7F1BBD04: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBD08:
    ctx->pc = 0x7F1BBD08u;
    // 7F1BBD08: addi    r3, r3, 14068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14068);

label_7F1BBD0C:
    ctx->pc = 0x7F1BBD0Cu;
    // 7F1BBD0C: addi    r4, r4, 14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14020);

label_7F1BBD10:
    ctx->pc = 0x7F1BBD10u;
    // 7F1BBD10: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBD14:
    ctx->pc = 0x7F1BBD14u;
    // 7F1BBD14: bl      0x800261B4
    {
            ctx->lr = 0x7F1BBD18u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1BBD18:
    ctx->pc = 0x7F1BBD18u;
    ctx->downcount -= 7;
    // 7F1BBD18: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBD1C:
    ctx->pc = 0x7F1BBD1Cu;
    // 7F1BBD1C: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBD20:
    ctx->pc = 0x7F1BBD20u;
    // 7F1BBD20: addi    r5, r3, 14164
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14164);

label_7F1BBD24:
    ctx->pc = 0x7F1BBD24u;
    // 7F1BBD24: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBD24u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBD28:
    ctx->pc = 0x7F1BBD28u;
    // 7F1BBD28: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1BBD2C:
    ctx->pc = 0x7F1BBD2Cu;
    // 7F1BBD2C: addi    r4, r4, 14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14020);

label_7F1BBD30:
    ctx->pc = 0x7F1BBD30u;
    // 7F1BBD30: bl      0x80026020
    {
            ctx->lr = 0x7F1BBD34u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBD34:
    ctx->pc = 0x7F1BBD34u;
    ctx->downcount -= 5;
    // 7F1BBD34: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBD38:
    ctx->pc = 0x7F1BBD38u;
    // 7F1BBD38: lfs     f1, 4(r27)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBD38u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBD3C:
    ctx->pc = 0x7F1BBD3Cu;
    // 7F1BBD3C: addi    r4, r3, 14052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14052);

label_7F1BBD40:
    ctx->pc = 0x7F1BBD40u;
    // 7F1BBD40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_7F1BBD44:
    ctx->pc = 0x7F1BBD44u;
    // 7F1BBD44: bl      0x80026020
    {
            ctx->lr = 0x7F1BBD48u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBD48:
    ctx->pc = 0x7F1BBD48u;
    ctx->downcount -= 6;
    // 7F1BBD48: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBD4C:
    ctx->pc = 0x7F1BBD4Cu;
    // 7F1BBD4C: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBD50:
    ctx->pc = 0x7F1BBD50u;
    // 7F1BBD50: addi    r3, r3, 14052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14052);

label_7F1BBD54:
    ctx->pc = 0x7F1BBD54u;
    // 7F1BBD54: addi    r4, r4, 14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14020);

label_7F1BBD58:
    ctx->pc = 0x7F1BBD58u;
    // 7F1BBD58: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBD5C:
    ctx->pc = 0x7F1BBD5Cu;
    // 7F1BBD5C: bl      0x800261B4
    {
            ctx->lr = 0x7F1BBD60u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1BBD60:
    ctx->pc = 0x7F1BBD60u;
    ctx->downcount -= 8;
    // 7F1BBD60: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBD64:
    ctx->pc = 0x7F1BBD64u;
    // 7F1BBD64: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1BBD68:
    ctx->pc = 0x7F1BBD68u;
    // 7F1BBD68: addi    r4, r3, 14164
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14164);

label_7F1BBD6C:
    ctx->pc = 0x7F1BBD6Cu;
    // 7F1BBD6C: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBD70:
    ctx->pc = 0x7F1BBD70u;
    // 7F1BBD70: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBD70u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBD74:
    ctx->pc = 0x7F1BBD74u;
    // 7F1BBD74: addi    r3, r6, 14068
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(14068);

label_7F1BBD78:
    ctx->pc = 0x7F1BBD78u;
    // 7F1BBD78: addi    r4, r5, 14020
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(14020);

label_7F1BBD7C:
    ctx->pc = 0x7F1BBD7Cu;
    // 7F1BBD7C: bl      0x80026020
    {
            ctx->lr = 0x7F1BBD80u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBD80:
    ctx->pc = 0x7F1BBD80u;
    ctx->downcount -= 8;
    // 7F1BBD80: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBD84:
    ctx->pc = 0x7F1BBD84u;
    // 7F1BBD84: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1BBD88:
    ctx->pc = 0x7F1BBD88u;
    // 7F1BBD88: addi    r4, r3, 14164
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14164);

label_7F1BBD8C:
    ctx->pc = 0x7F1BBD8Cu;
    // 7F1BBD8C: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBD90:
    ctx->pc = 0x7F1BBD90u;
    // 7F1BBD90: lfs     f1, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBD90u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBD94:
    ctx->pc = 0x7F1BBD94u;
    // 7F1BBD94: addi    r3, r6, 14052
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(14052);

label_7F1BBD98:
    ctx->pc = 0x7F1BBD98u;
    // 7F1BBD98: addi    r4, r5, 14036
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(14036);

label_7F1BBD9C:
    ctx->pc = 0x7F1BBD9Cu;
    // 7F1BBD9C: bl      0x80026020
    {
            ctx->lr = 0x7F1BBDA0u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBDA0:
    ctx->pc = 0x7F1BBDA0u;
    ctx->downcount -= 6;
    // 7F1BBDA0: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBDA4:
    ctx->pc = 0x7F1BBDA4u;
    // 7F1BBDA4: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBDA8:
    ctx->pc = 0x7F1BBDA8u;
    // 7F1BBDA8: addi    r3, r3, 14036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14036);

label_7F1BBDAC:
    ctx->pc = 0x7F1BBDACu;
    // 7F1BBDAC: addi    r4, r4, 14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14020);

label_7F1BBDB0:
    ctx->pc = 0x7F1BBDB0u;
    // 7F1BBDB0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBDB4:
    ctx->pc = 0x7F1BBDB4u;
    // 7F1BBDB4: bl      0x800261B4
    {
            ctx->lr = 0x7F1BBDB8u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1BBDB8:
    ctx->pc = 0x7F1BBDB8u;
    ctx->downcount -= 6;
    // 7F1BBDB8: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBDBC:
    ctx->pc = 0x7F1BBDBCu;
    // 7F1BBDBC: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBDC0:
    ctx->pc = 0x7F1BBDC0u;
    // 7F1BBDC0: addi    r4, r3, 14036
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14036);

label_7F1BBDC4:
    ctx->pc = 0x7F1BBDC4u;
    // 7F1BBDC4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BBDC8:
    ctx->pc = 0x7F1BBDC8u;
    // 7F1BBDC8: addi    r5, r5, 14148
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14148);

label_7F1BBDCC:
    ctx->pc = 0x7F1BBDCCu;
    // 7F1BBDCC: bl      0x7F115684
    {
            ctx->lr = 0x7F1BBDD0u;
            ctx->pc = 0x7F115684u;
            return;
    }

label_7F1BBDD0:
    ctx->pc = 0x7F1BBDD0u;
    ctx->downcount -= 16;
    // 7F1BBDD0: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1BBDD4:
    ctx->pc = 0x7F1BBDD4u;
    // 7F1BBDD4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBDD8:
    ctx->pc = 0x7F1BBDD8u;
    // 7F1BBDD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BBDDC:
    ctx->pc = 0x7F1BBDDCu;
    // 7F1BBDDC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1BBDE0:
    ctx->pc = 0x7F1BBDE0u;
    // 7F1BBDE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BBDE4:
    ctx->pc = 0x7F1BBDE4u;
    ctx->downcount -= 25;
    // 7F1BBDE4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BBDE8:
    ctx->pc = 0x7F1BBDE8u;
    // 7F1BBDE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BBDEC:
    ctx->pc = 0x7F1BBDECu;
    // 7F1BBDEC: lis     r8, 32588
    ctx->gpr[8] = ((u32)(s32)(32588) << 16);

label_7F1BBDF0:
    ctx->pc = 0x7F1BBDF0u;
    // 7F1BBDF0: lis     r9, 32588
    ctx->gpr[9] = ((u32)(s32)(32588) << 16);

label_7F1BBDF4:
    ctx->pc = 0x7F1BBDF4u;
    // 7F1BBDF4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBDF8:
    ctx->pc = 0x7F1BBDF8u;
    // 7F1BBDF8: addi    r0, r9, 14020
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(14020);

label_7F1BBDFC:
    ctx->pc = 0x7F1BBDFCu;
    // 7F1BBDFC: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1BBE00:
    ctx->pc = 0x7F1BBE00u;
    // 7F1BBE00: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBE04:
    ctx->pc = 0x7F1BBE04u;
    // 7F1BBE04: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BBE08:
    ctx->pc = 0x7F1BBE08u;
    // 7F1BBE08: or   r27, r5, r5
    {
        ctx->gpr[27] = ctx->gpr[5] | ctx->gpr[5];
    }

label_7F1BBE0C:
    ctx->pc = 0x7F1BBE0Cu;
    // 7F1BBE0C: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_7F1BBE10:
    ctx->pc = 0x7F1BBE10u;
    // 7F1BBE10: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_7F1BBE14:
    ctx->pc = 0x7F1BBE14u;
    // 7F1BBE14: or   r4, r0, r0
    {
        ctx->gpr[4] = ctx->gpr[0] | ctx->gpr[0];
    }

label_7F1BBE18:
    ctx->pc = 0x7F1BBE18u;
    // 7F1BBE18: lfs     f1, 14164(r8)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBE18u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(14164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBE1C:
    ctx->pc = 0x7F1BBE1Cu;
    // 7F1BBE1C: bl      0x80026020
    {
            ctx->lr = 0x7F1BBE20u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBE20:
    ctx->pc = 0x7F1BBE20u;
    ctx->downcount -= 7;
    // 7F1BBE20: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBE24:
    ctx->pc = 0x7F1BBE24u;
    // 7F1BBE24: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBE28:
    ctx->pc = 0x7F1BBE28u;
    // 7F1BBE28: addi    r30, r3, 14164
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(14164);

label_7F1BBE2C:
    ctx->pc = 0x7F1BBE2Cu;
    // 7F1BBE2C: lfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBE2Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBE30:
    ctx->pc = 0x7F1BBE30u;
    // 7F1BBE30: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_7F1BBE34:
    ctx->pc = 0x7F1BBE34u;
    // 7F1BBE34: addi    r4, r4, 14068
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14068);

label_7F1BBE38:
    ctx->pc = 0x7F1BBE38u;
    // 7F1BBE38: bl      0x80026020
    {
            ctx->lr = 0x7F1BBE3Cu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBE3C:
    ctx->pc = 0x7F1BBE3Cu;
    ctx->downcount -= 6;
    // 7F1BBE3C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBE40:
    ctx->pc = 0x7F1BBE40u;
    // 7F1BBE40: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBE44:
    ctx->pc = 0x7F1BBE44u;
    // 7F1BBE44: addi    r3, r3, 14068
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14068);

label_7F1BBE48:
    ctx->pc = 0x7F1BBE48u;
    // 7F1BBE48: addi    r4, r4, 14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14020);

label_7F1BBE4C:
    ctx->pc = 0x7F1BBE4Cu;
    // 7F1BBE4C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBE50:
    ctx->pc = 0x7F1BBE50u;
    // 7F1BBE50: bl      0x800261B4
    {
            ctx->lr = 0x7F1BBE54u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1BBE54:
    ctx->pc = 0x7F1BBE54u;
    ctx->downcount -= 7;
    // 7F1BBE54: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBE58:
    ctx->pc = 0x7F1BBE58u;
    // 7F1BBE58: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBE5C:
    ctx->pc = 0x7F1BBE5Cu;
    // 7F1BBE5C: addi    r5, r3, 14164
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(14164);

label_7F1BBE60:
    ctx->pc = 0x7F1BBE60u;
    // 7F1BBE60: lfs     f1, 0(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBE60u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBE64:
    ctx->pc = 0x7F1BBE64u;
    // 7F1BBE64: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_7F1BBE68:
    ctx->pc = 0x7F1BBE68u;
    // 7F1BBE68: addi    r4, r4, 14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14020);

label_7F1BBE6C:
    ctx->pc = 0x7F1BBE6Cu;
    // 7F1BBE6C: bl      0x80026020
    {
            ctx->lr = 0x7F1BBE70u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBE70:
    ctx->pc = 0x7F1BBE70u;
    ctx->downcount -= 5;
    // 7F1BBE70: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBE74:
    ctx->pc = 0x7F1BBE74u;
    // 7F1BBE74: lfs     f1, 4(r30)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBE74u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBE78:
    ctx->pc = 0x7F1BBE78u;
    // 7F1BBE78: addi    r4, r3, 14052
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14052);

label_7F1BBE7C:
    ctx->pc = 0x7F1BBE7Cu;
    // 7F1BBE7C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_7F1BBE80:
    ctx->pc = 0x7F1BBE80u;
    // 7F1BBE80: bl      0x80026020
    {
            ctx->lr = 0x7F1BBE84u;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBE84:
    ctx->pc = 0x7F1BBE84u;
    ctx->downcount -= 6;
    // 7F1BBE84: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBE88:
    ctx->pc = 0x7F1BBE88u;
    // 7F1BBE88: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBE8C:
    ctx->pc = 0x7F1BBE8Cu;
    // 7F1BBE8C: addi    r3, r3, 14052
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14052);

label_7F1BBE90:
    ctx->pc = 0x7F1BBE90u;
    // 7F1BBE90: addi    r4, r4, 14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14020);

label_7F1BBE94:
    ctx->pc = 0x7F1BBE94u;
    // 7F1BBE94: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBE98:
    ctx->pc = 0x7F1BBE98u;
    // 7F1BBE98: bl      0x800261B4
    {
            ctx->lr = 0x7F1BBE9Cu;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1BBE9C:
    ctx->pc = 0x7F1BBE9Cu;
    ctx->downcount -= 8;
    // 7F1BBE9C: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBEA0:
    ctx->pc = 0x7F1BBEA0u;
    // 7F1BBEA0: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1BBEA4:
    ctx->pc = 0x7F1BBEA4u;
    // 7F1BBEA4: addi    r4, r3, 14164
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14164);

label_7F1BBEA8:
    ctx->pc = 0x7F1BBEA8u;
    // 7F1BBEA8: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBEAC:
    ctx->pc = 0x7F1BBEACu;
    // 7F1BBEAC: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBEACu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBEB0:
    ctx->pc = 0x7F1BBEB0u;
    // 7F1BBEB0: addi    r3, r6, 14068
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(14068);

label_7F1BBEB4:
    ctx->pc = 0x7F1BBEB4u;
    // 7F1BBEB4: addi    r4, r5, 14020
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(14020);

label_7F1BBEB8:
    ctx->pc = 0x7F1BBEB8u;
    // 7F1BBEB8: bl      0x80026020
    {
            ctx->lr = 0x7F1BBEBCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBEBC:
    ctx->pc = 0x7F1BBEBCu;
    ctx->downcount -= 8;
    // 7F1BBEBC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBEC0:
    ctx->pc = 0x7F1BBEC0u;
    // 7F1BBEC0: lis     r6, 32588
    ctx->gpr[6] = ((u32)(s32)(32588) << 16);

label_7F1BBEC4:
    ctx->pc = 0x7F1BBEC4u;
    // 7F1BBEC4: addi    r4, r3, 14164
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14164);

label_7F1BBEC8:
    ctx->pc = 0x7F1BBEC8u;
    // 7F1BBEC8: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBECC:
    ctx->pc = 0x7F1BBECCu;
    // 7F1BBECC: lfs     f1, 12(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBECCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBED0:
    ctx->pc = 0x7F1BBED0u;
    // 7F1BBED0: addi    r3, r6, 14052
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(14052);

label_7F1BBED4:
    ctx->pc = 0x7F1BBED4u;
    // 7F1BBED4: addi    r4, r5, 14036
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(14036);

label_7F1BBED8:
    ctx->pc = 0x7F1BBED8u;
    // 7F1BBED8: bl      0x80026020
    {
            ctx->lr = 0x7F1BBEDCu;
            ctx->pc = 0x80026020u;
            return;
    }

label_7F1BBEDC:
    ctx->pc = 0x7F1BBEDCu;
    ctx->downcount -= 6;
    // 7F1BBEDC: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBEE0:
    ctx->pc = 0x7F1BBEE0u;
    // 7F1BBEE0: lis     r4, 32588
    ctx->gpr[4] = ((u32)(s32)(32588) << 16);

label_7F1BBEE4:
    ctx->pc = 0x7F1BBEE4u;
    // 7F1BBEE4: addi    r3, r3, 14036
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14036);

label_7F1BBEE8:
    ctx->pc = 0x7F1BBEE8u;
    // 7F1BBEE8: addi    r4, r4, 14020
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14020);

label_7F1BBEEC:
    ctx->pc = 0x7F1BBEECu;
    // 7F1BBEEC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBEF0:
    ctx->pc = 0x7F1BBEF0u;
    // 7F1BBEF0: bl      0x800261B4
    {
            ctx->lr = 0x7F1BBEF4u;
            ctx->pc = 0x800261B4u;
            return;
    }

label_7F1BBEF4:
    ctx->pc = 0x7F1BBEF4u;
    ctx->downcount -= 6;
    // 7F1BBEF4: lis     r3, 32588
    ctx->gpr[3] = ((u32)(s32)(32588) << 16);

label_7F1BBEF8:
    ctx->pc = 0x7F1BBEF8u;
    // 7F1BBEF8: lis     r5, 32588
    ctx->gpr[5] = ((u32)(s32)(32588) << 16);

label_7F1BBEFC:
    ctx->pc = 0x7F1BBEFCu;
    // 7F1BBEFC: addi    r4, r3, 14036
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(14036);

label_7F1BBF00:
    ctx->pc = 0x7F1BBF00u;
    // 7F1BBF00: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_7F1BBF04:
    ctx->pc = 0x7F1BBF04u;
    // 7F1BBF04: addi    r5, r5, 14180
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14180);

label_7F1BBF08:
    ctx->pc = 0x7F1BBF08u;
    // 7F1BBF08: bl      0x7F115684
    {
            ctx->lr = 0x7F1BBF0Cu;
            ctx->pc = 0x7F115684u;
            return;
    }

label_7F1BBF0C:
    ctx->pc = 0x7F1BBF0Cu;
    ctx->downcount -= 16;
    // 7F1BBF0C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_7F1BBF10:
    ctx->pc = 0x7F1BBF10u;
    // 7F1BBF10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBF14:
    ctx->pc = 0x7F1BBF14u;
    // 7F1BBF14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_7F1BBF18:
    ctx->pc = 0x7F1BBF18u;
    // 7F1BBF18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_7F1BBF1C:
    ctx->pc = 0x7F1BBF1Cu;
    // 7F1BBF1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_7F1B80EC;
        }
    }

label_7F1BBF20:
    ctx->pc = 0x7F1BBF20u;
    ctx->downcount -= 100;
    // 7F1BBF20: stwu     r1, -400(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-400);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_7F1BBF24:
    ctx->pc = 0x7F1BBF24u;
    // 7F1BBF24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_7F1BBF28:
    ctx->pc = 0x7F1BBF28u;
    // 7F1BBF28: stw     r0, 404(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(404);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBF2C:
    ctx->pc = 0x7F1BBF2Cu;
    // 7F1BBF2C: stfd     f31, 384(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(384);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_7F1BBF30:
    ctx->pc = 0x7F1BBF30u;
    // 7F1BBF30: psq_st   f31, 392(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(392);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x7F1BBF30u);
        if (ctx->exception) return;
    }

label_7F1BBF34:
    ctx->pc = 0x7F1BBF34u;
    // 7F1BBF34: stfd     f30, 368(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(368);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_7F1BBF38:
    ctx->pc = 0x7F1BBF38u;
    // 7F1BBF38: psq_st   f30, 376(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(376);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x7F1BBF38u);
        if (ctx->exception) return;
    }

label_7F1BBF3C:
    ctx->pc = 0x7F1BBF3Cu;
    // 7F1BBF3C: stfd     f29, 352(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(352);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[29]));
    }

label_7F1BBF40:
    ctx->pc = 0x7F1BBF40u;
    // 7F1BBF40: psq_st   f29, 360(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(360);
        ppc_psq_store_inline(ctx, 29u, ea, false, 0u, false, 0x7F1BBF40u);
        if (ctx->exception) return;
    }

label_7F1BBF44:
    ctx->pc = 0x7F1BBF44u;
    // 7F1BBF44: stfd     f28, 336(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(336);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[28]));
    }

label_7F1BBF48:
    ctx->pc = 0x7F1BBF48u;
    // 7F1BBF48: psq_st   f28, 344(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(344);
        ppc_psq_store_inline(ctx, 28u, ea, false, 0u, false, 0x7F1BBF48u);
        if (ctx->exception) return;
    }

label_7F1BBF4C:
    ctx->pc = 0x7F1BBF4Cu;
    // 7F1BBF4C: stmw     r20, 288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(288);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_7F1BBF50:
    ctx->pc = 0x7F1BBF50u;
    // 7F1BBF50: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1BBF54:
    ctx->pc = 0x7F1BBF54u;
    // 7F1BBF54: or   r21, r3, r3
    {
        ctx->gpr[21] = ctx->gpr[3] | ctx->gpr[3];
    }

label_7F1BBF58:
    ctx->pc = 0x7F1BBF58u;
    // 7F1BBF58: addi    r8, r6, 7736
    ctx->gpr[8] = ctx->gpr[6] + (u32)(s32)(7736);

label_7F1BBF5C:
    ctx->pc = 0x7F1BBF5Cu;
    // 7F1BBF5C: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_7F1BBF60:
    ctx->pc = 0x7F1BBF60u;
    // 7F1BBF60: lwz     r5, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBF64:
    ctx->pc = 0x7F1BBF64u;
    // 7F1BBF64: add   r9, r21, r0
    {
        u32 a = ctx->gpr[21];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_7F1BBF68:
    ctx->pc = 0x7F1BBF68u;
    // 7F1BBF68: lwz     r0, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBF6C:
    ctx->pc = 0x7F1BBF6Cu;
    // 7F1BBF6C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BBF70:
    ctx->pc = 0x7F1BBF70u;
    // 7F1BBF70: stw     r5, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BBF74:
    ctx->pc = 0x7F1BBF74u;
    // 7F1BBF74: addi    r7, r3, 7784
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(7784);

label_7F1BBF78:
    ctx->pc = 0x7F1BBF78u;
    // 7F1BBF78: lfs     f1, 0(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF78u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BBF7C:
    ctx->pc = 0x7F1BBF7Cu;
    // 7F1BBF7C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BBF80:
    ctx->pc = 0x7F1BBF80u;
    // 7F1BBF80: stw     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBF84:
    ctx->pc = 0x7F1BBF84u;
    // 7F1BBF84: addi    r5, r3, 7752
    ctx->gpr[5] = ctx->gpr[3] + (u32)(s32)(7752);

label_7F1BBF88:
    ctx->pc = 0x7F1BBF88u;
    // 7F1BBF88: lfs     f0, 4(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF88u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BBF8C:
    ctx->pc = 0x7F1BBF8Cu;
    // 7F1BBF8C: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BBF90:
    ctx->pc = 0x7F1BBF90u;
    // 7F1BBF90: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBF90u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BBF94:
    ctx->pc = 0x7F1BBF94u;
    // 7F1BBF94: addi    r6, r3, 7768
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(7768);

label_7F1BBF98:
    ctx->pc = 0x7F1BBF98u;
    // 7F1BBF98: lwz     r24, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_7F1BBF9C:
    ctx->pc = 0x7F1BBF9Cu;
    // 7F1BBF9C: or   r22, r4, r4
    {
        ctx->gpr[22] = ctx->gpr[4] | ctx->gpr[4];
    }

label_7F1BBFA0:
    ctx->pc = 0x7F1BBFA0u;
    // 7F1BBFA0: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBFA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BBFA4:
    ctx->pc = 0x7F1BBFA4u;
    // 7F1BBFA4: addi    r3, r1, 120
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(120);

label_7F1BBFA8:
    ctx->pc = 0x7F1BBFA8u;
    // 7F1BBFA8: lwz     r23, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        ctx->gpr[23] = mem_read32(ctx, ea);
    }

label_7F1BBFAC:
    ctx->pc = 0x7F1BBFACu;
    // 7F1BBFAC: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_7F1BBFB0:
    ctx->pc = 0x7F1BBFB0u;
    // 7F1BBFB0: lwz     r26, 52(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(52);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_7F1BBFB4:
    ctx->pc = 0x7F1BBFB4u;
    // 7F1BBFB4: lwz     r25, 60(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(60);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_7F1BBFB8:
    ctx->pc = 0x7F1BBFB8u;
    // 7F1BBFB8: lwz     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBFBC:
    ctx->pc = 0x7F1BBFBCu;
    // 7F1BBFBC: lwz     r12, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_7F1BBFC0:
    ctx->pc = 0x7F1BBFC0u;
    // 7F1BBFC0: lwz     r11, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1BBFC4:
    ctx->pc = 0x7F1BBFC4u;
    // 7F1BBFC4: lwz     r10, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1BBFC8:
    ctx->pc = 0x7F1BBFC8u;
    // 7F1BBFC8: lwz     r9, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1BBFCC:
    ctx->pc = 0x7F1BBFCCu;
    // 7F1BBFCC: lwz     r8, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1BBFD0:
    ctx->pc = 0x7F1BBFD0u;
    // 7F1BBFD0: stw     r0, 88(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BBFD4:
    ctx->pc = 0x7F1BBFD4u;
    // 7F1BBFD4: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BBFD8:
    ctx->pc = 0x7F1BBFD8u;
    // 7F1BBFD8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BBFDC:
    ctx->pc = 0x7F1BBFDCu;
    // 7F1BBFDC: stw     r12, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_7F1BBFE0:
    ctx->pc = 0x7F1BBFE0u;
    // 7F1BBFE0: lfs     f0, 0(r7)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBFE0u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BBFE4:
    ctx->pc = 0x7F1BBFE4u;
    // 7F1BBFE4: stw     r24, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1BBFE8:
    ctx->pc = 0x7F1BBFE8u;
    // 7F1BBFE8: lwz     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_7F1BBFEC:
    ctx->pc = 0x7F1BBFECu;
    // 7F1BBFEC: stw     r23, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F1BBFF0:
    ctx->pc = 0x7F1BBFF0u;
    // 7F1BBFF0: lwz     r6, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_7F1BBFF4:
    ctx->pc = 0x7F1BBFF4u;
    // 7F1BBFF4: lfs     f2, 32(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBFF4u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_7F1BBFF8:
    ctx->pc = 0x7F1BBFF8u;
    // 7F1BBFF8: lfs     f3, 36(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1BBFF8u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_7F1BBFFC:
    ctx->pc = 0x7F1BBFFCu;
    // 7F1BBFFC: stw     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1BC000:
    ctx->pc = 0x7F1BC000u;
    // 7F1BC000: fsubs   f1, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x7F1BC000u)) return;
    ppc_fsubs(ctx, 1, 0, 2);

label_7F1BC004:
    ctx->pc = 0x7F1BC004u;
    // 7F1BC004: fsubs   f0, f0, f3
    if (!ppc_fp_available_inline(ctx, 0x7F1BC004u)) return;
    ppc_fsubs(ctx, 0, 0, 3);

label_7F1BC008:
    ctx->pc = 0x7F1BC008u;
    // 7F1BC008: stw     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1BC00C:
    ctx->pc = 0x7F1BC00Cu;
    // 7F1BC00C: stw     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1BC010:
    ctx->pc = 0x7F1BC010u;
    // 7F1BC010: stw     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1BC014:
    ctx->pc = 0x7F1BC014u;
    // 7F1BC014: stfs     f2, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC014u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_7F1BC018:
    ctx->pc = 0x7F1BC018u;
    // 7F1BC018: stfs     f1, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC018u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BC01C:
    ctx->pc = 0x7F1BC01Cu;
    // 7F1BC01C: lwz     r11, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_7F1BC020:
    ctx->pc = 0x7F1BC020u;
    // 7F1BC020: stfs     f3, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC020u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_7F1BC024:
    ctx->pc = 0x7F1BC024u;
    // 7F1BC024: lwz     r10, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_7F1BC028:
    ctx->pc = 0x7F1BC028u;
    // 7F1BC028: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC028u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BC02C:
    ctx->pc = 0x7F1BC02Cu;
    // 7F1BC02C: lwz     r9, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_7F1BC030:
    ctx->pc = 0x7F1BC030u;
    // 7F1BC030: lwz     r8, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_7F1BC034:
    ctx->pc = 0x7F1BC034u;
    // 7F1BC034: stw     r11, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_7F1BC038:
    ctx->pc = 0x7F1BC038u;
    // 7F1BC038: stw     r10, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_7F1BC03C:
    ctx->pc = 0x7F1BC03Cu;
    // 7F1BC03C: stw     r9, 128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_7F1BC040:
    ctx->pc = 0x7F1BC040u;
    // 7F1BC040: stw     r8, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_7F1BC044:
    ctx->pc = 0x7F1BC044u;
    // 7F1BC044: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BC048:
    ctx->pc = 0x7F1BC048u;
    // 7F1BC048: lfs     f1, 16(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC048u)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_7F1BC04C:
    ctx->pc = 0x7F1BC04Cu;
    // 7F1BC04C: lfs     f0, 20(r21)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC04Cu)) return;
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_7F1BC050:
    ctx->pc = 0x7F1BC050u;
    // 7F1BC050: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BC054:
    ctx->pc = 0x7F1BC054u;
    // 7F1BC054: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC054u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_7F1BC058:
    ctx->pc = 0x7F1BC058u;
    // 7F1BC058: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC058u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_7F1BC05C:
    ctx->pc = 0x7F1BC05Cu;
    // 7F1BC05C: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_7F1BC060:
    ctx->pc = 0x7F1BC060u;
    // 7F1BC060: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_7F1BC064:
    ctx->pc = 0x7F1BC064u;
    // 7F1BC064: stw     r24, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[24]);
    }

label_7F1BC068:
    ctx->pc = 0x7F1BC068u;
    // 7F1BC068: stw     r23, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[23]);
    }

label_7F1BC06C:
    ctx->pc = 0x7F1BC06Cu;
    // 7F1BC06C: stw     r7, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1BC070:
    ctx->pc = 0x7F1BC070u;
    // 7F1BC070: stw     r6, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BC074:
    ctx->pc = 0x7F1BC074u;
    // 7F1BC074: stw     r5, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_7F1BC078:
    ctx->pc = 0x7F1BC078u;
    // 7F1BC078: stw     r0, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_7F1BC07C:
    ctx->pc = 0x7F1BC07Cu;
    // 7F1BC07C: stw     r7, 112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_7F1BC080:
    ctx->pc = 0x7F1BC080u;
    // 7F1BC080: stw     r6, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_7F1BC084:
    ctx->pc = 0x7F1BC084u;
    // 7F1BC084: bl      0x7F1BBBBC
    {
            ctx->lr = 0x7F1BC088u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BBBBCu;
                return;
            }
            goto label_7F1BBBBC;
    }

label_7F1BC088:
    ctx->pc = 0x7F1BC088u;
    ctx->downcount -= 2;
    // 7F1BC088: addi    r3, r1, 88
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(88);

label_7F1BC08C:
    ctx->pc = 0x7F1BC08Cu;
    // 7F1BC08C: bl      0x7F1BBB94
    {
            ctx->lr = 0x7F1BC090u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x7F1BBB94u;
                return;
            }
            goto label_7F1BBB94;
    }

label_7F1BC090:
    ctx->pc = 0x7F1BC090u;
    ctx->downcount -= 25;
    // 7F1BC090: lbz     r3, 46(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(46);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_7F1BC094:
    ctx->pc = 0x7F1BC094u;
    // 7F1BC094: lis     r6, 32582
    ctx->gpr[6] = ((u32)(s32)(32582) << 16);

label_7F1BC098:
    ctx->pc = 0x7F1BC098u;
    // 7F1BC098: lbz     r0, 48(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_7F1BC09C:
    ctx->pc = 0x7F1BC09Cu;
    // 7F1BC09C: lis     r5, 32582
    ctx->gpr[5] = ((u32)(s32)(32582) << 16);

label_7F1BC0A0:
    ctx->pc = 0x7F1BC0A0u;
    // 7F1BC0A0: mulli   r7, r3, 56
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)56);

label_7F1BC0A4:
    ctx->pc = 0x7F1BC0A4u;
    // 7F1BC0A4: lis     r4, 32582
    ctx->gpr[4] = ((u32)(s32)(32582) << 16);

label_7F1BC0A8:
    ctx->pc = 0x7F1BC0A8u;
    // 7F1BC0A8: lis     r3, 32582
    ctx->gpr[3] = ((u32)(s32)(32582) << 16);

label_7F1BC0AC:
    ctx->pc = 0x7F1BC0ACu;
    // 7F1BC0AC: lfd     f31, 7728(r6)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC0ACu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(7728);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_7F1BC0B0:
    ctx->pc = 0x7F1BC0B0u;
    // 7F1BC0B0: lfs     f28, 7788(r5)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC0B0u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(7788);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[28] = value;
        ctx->ps1[28] = value;
    }

label_7F1BC0B4:
    ctx->pc = 0x7F1BC0B4u;
    // 7F1BC0B4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_7F1BC0B8:
    ctx->pc = 0x7F1BC0B8u;
    // 7F1BC0B8: add   r7, r22, r7
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1BC0BC:
    ctx->pc = 0x7F1BC0BCu;
    // 7F1BC0BC: lfs     f29, 7792(r4)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC0BCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(7792);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[29] = value;
        ctx->ps1[29] = value;
    }

label_7F1BC0C0:
    ctx->pc = 0x7F1BC0C0u;
    // 7F1BC0C0: mulli   r0, r0, 56
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)56);

label_7F1BC0C4:
    ctx->pc = 0x7F1BC0C4u;
    // 7F1BC0C4: lwz     r30, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_7F1BC0C8:
    ctx->pc = 0x7F1BC0C8u;
    // 7F1BC0C8: lwz     r28, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_7F1BC0CC:
    ctx->pc = 0x7F1BC0CCu;
    // 7F1BC0CC: lis     r31, 17200
    ctx->gpr[31] = ((u32)(s32)(17200) << 16);

label_7F1BC0D0:
    ctx->pc = 0x7F1BC0D0u;
    // 7F1BC0D0: lfs     f30, 7796(r3)
    if (!ppc_fp_available_inline(ctx, 0x7F1BC0D0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(7796);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[30] = value;
        ctx->ps1[30] = value;
    }

label_7F1BC0D4:
    ctx->pc = 0x7F1BC0D4u;
    // 7F1BC0D4: add   r7, r22, r0
    {
        u32 a = ctx->gpr[22];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_7F1BC0D8:
    ctx->pc = 0x7F1BC0D8u;
    // 7F1BC0D8: lwz     r29, 24(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_7F1BC0DC:
    ctx->pc = 0x7F1BC0DCu;
    // 7F1BC0DC: lwz     r27, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_7F1BC0E0:
    ctx->pc = 0x7F1BC0E0u;
    // 7F1BC0E0: b       0x7F1BC334
    {
            ctx->pc = 0x7F1BC334u;
            return;
    }

label_7F1BC0E4:
    ctx->pc = 0x7F1BC0E4u;
    ctx->downcount -= 2;
    // 7F1BC0E4: lwz     r4, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_7F1BC0E8:
    ctx->pc = 0x7F1BC0E8u;
    // 7F1BC0E8: rlwinm r0, r24, 1, 15, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[24], 1u) & 0x0001FFFEu;
    }

    ctx->pc = 0x7F1BC0ECu;
    return;
return_dispatch_7F1B80EC:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x7F1B8130u: goto label_7F1B8130;
    case 0x7F1B8148u: goto label_7F1B8148;
    case 0x7F1B8164u: goto label_7F1B8164;
    case 0x7F1B817Cu: goto label_7F1B817C;
    case 0x7F1B81C4u: goto label_7F1B81C4;
    case 0x7F1B81DCu: goto label_7F1B81DC;
    case 0x7F1B81F8u: goto label_7F1B81F8;
    case 0x7F1B8210u: goto label_7F1B8210;
    case 0x7F1B8258u: goto label_7F1B8258;
    case 0x7F1B8270u: goto label_7F1B8270;
    case 0x7F1B828Cu: goto label_7F1B828C;
    case 0x7F1B82A4u: goto label_7F1B82A4;
    case 0x7F1B82ECu: goto label_7F1B82EC;
    case 0x7F1B8304u: goto label_7F1B8304;
    case 0x7F1B8320u: goto label_7F1B8320;
    case 0x7F1B8338u: goto label_7F1B8338;
    case 0x7F1B8364u: goto label_7F1B8364;
    case 0x7F1B836Cu: goto label_7F1B836C;
    case 0x7F1B8374u: goto label_7F1B8374;
    case 0x7F1B837Cu: goto label_7F1B837C;
    case 0x7F1B8384u: goto label_7F1B8384;
    case 0x7F1B83E0u: goto label_7F1B83E0;
    case 0x7F1B83F8u: goto label_7F1B83F8;
    case 0x7F1B8414u: goto label_7F1B8414;
    case 0x7F1B8424u: goto label_7F1B8424;
    case 0x7F1B84E8u: goto label_7F1B84E8;
    case 0x7F1B8504u: goto label_7F1B8504;
    case 0x7F1B8538u: goto label_7F1B8538;
    case 0x7F1B8548u: goto label_7F1B8548;
    case 0x7F1B8560u: goto label_7F1B8560;
    case 0x7F1B8594u: goto label_7F1B8594;
    case 0x7F1B85A4u: goto label_7F1B85A4;
    case 0x7F1B85B4u: goto label_7F1B85B4;
    case 0x7F1B85C4u: goto label_7F1B85C4;
    case 0x7F1B85CCu: goto label_7F1B85CC;
    case 0x7F1B85FCu: goto label_7F1B85FC;
    case 0x7F1B860Cu: goto label_7F1B860C;
    case 0x7F1B861Cu: goto label_7F1B861C;
    case 0x7F1B862Cu: goto label_7F1B862C;
    case 0x7F1B8664u: goto label_7F1B8664;
    case 0x7F1B8694u: goto label_7F1B8694;
    case 0x7F1B86A4u: goto label_7F1B86A4;
    case 0x7F1B86B4u: goto label_7F1B86B4;
    case 0x7F1B86C4u: goto label_7F1B86C4;
    case 0x7F1B86D8u: goto label_7F1B86D8;
    case 0x7F1B8708u: goto label_7F1B8708;
    case 0x7F1B8718u: goto label_7F1B8718;
    case 0x7F1B8728u: goto label_7F1B8728;
    case 0x7F1B8738u: goto label_7F1B8738;
    case 0x7F1B874Cu: goto label_7F1B874C;
    case 0x7F1B877Cu: goto label_7F1B877C;
    case 0x7F1B878Cu: goto label_7F1B878C;
    case 0x7F1B879Cu: goto label_7F1B879C;
    case 0x7F1B87ACu: goto label_7F1B87AC;
    case 0x7F1B87E0u: goto label_7F1B87E0;
    case 0x7F1B8830u: goto label_7F1B8830;
    case 0x7F1B8878u: goto label_7F1B8878;
    case 0x7F1B8884u: goto label_7F1B8884;
    case 0x7F1B88CCu: goto label_7F1B88CC;
    case 0x7F1B88E8u: goto label_7F1B88E8;
    case 0x7F1B8924u: goto label_7F1B8924;
    case 0x7F1B8934u: goto label_7F1B8934;
    case 0x7F1B8974u: goto label_7F1B8974;
    case 0x7F1B8978u: goto label_7F1B8978;
    case 0x7F1B8988u: goto label_7F1B8988;
    case 0x7F1B89B8u: goto label_7F1B89B8;
    case 0x7F1B89C8u: goto label_7F1B89C8;
    case 0x7F1B89D8u: goto label_7F1B89D8;
    case 0x7F1B89E8u: goto label_7F1B89E8;
    case 0x7F1B8A20u: goto label_7F1B8A20;
    case 0x7F1B8A50u: goto label_7F1B8A50;
    case 0x7F1B8A60u: goto label_7F1B8A60;
    case 0x7F1B8A70u: goto label_7F1B8A70;
    case 0x7F1B8A80u: goto label_7F1B8A80;
    case 0x7F1B8A90u: goto label_7F1B8A90;
    case 0x7F1B8A9Cu: goto label_7F1B8A9C;
    case 0x7F1B8AB0u: goto label_7F1B8AB0;
    case 0x7F1B8AE8u: goto label_7F1B8AE8;
    case 0x7F1B8AF4u: goto label_7F1B8AF4;
    case 0x7F1B8B00u: goto label_7F1B8B00;
    case 0x7F1B8B0Cu: goto label_7F1B8B0C;
    case 0x7F1B8B38u: goto label_7F1B8B38;
    case 0x7F1B8B7Cu: goto label_7F1B8B7C;
    case 0x7F1B8BA8u: goto label_7F1B8BA8;
    case 0x7F1B8C28u: goto label_7F1B8C28;
    case 0x7F1B8C34u: goto label_7F1B8C34;
    case 0x7F1B8C48u: goto label_7F1B8C48;
    case 0x7F1B8C9Cu: goto label_7F1B8C9C;
    case 0x7F1B8CA8u: goto label_7F1B8CA8;
    case 0x7F1B8CBCu: goto label_7F1B8CBC;
    case 0x7F1B8CD4u: goto label_7F1B8CD4;
    case 0x7F1B8D10u: goto label_7F1B8D10;
    case 0x7F1B8D58u: goto label_7F1B8D58;
    case 0x7F1B8D74u: goto label_7F1B8D74;
    case 0x7F1B8DB0u: goto label_7F1B8DB0;
    case 0x7F1B8DC0u: goto label_7F1B8DC0;
    case 0x7F1B8DFCu: goto label_7F1B8DFC;
    case 0x7F1B8E28u: goto label_7F1B8E28;
    case 0x7F1B8EC0u: goto label_7F1B8EC0;
    case 0x7F1B8ECCu: goto label_7F1B8ECC;
    case 0x7F1B8F18u: goto label_7F1B8F18;
    case 0x7F1B8F24u: goto label_7F1B8F24;
    case 0x7F1B8F78u: goto label_7F1B8F78;
    case 0x7F1B8F84u: goto label_7F1B8F84;
    case 0x7F1B8F9Cu: goto label_7F1B8F9C;
    case 0x7F1B8FE8u: goto label_7F1B8FE8;
    case 0x7F1B9004u: goto label_7F1B9004;
    case 0x7F1B9040u: goto label_7F1B9040;
    case 0x7F1B9050u: goto label_7F1B9050;
    case 0x7F1B9090u: goto label_7F1B9090;
    case 0x7F1B9094u: goto label_7F1B9094;
    case 0x7F1B90A4u: goto label_7F1B90A4;
    case 0x7F1B90D8u: goto label_7F1B90D8;
    case 0x7F1B90DCu: goto label_7F1B90DC;
    case 0x7F1B90ECu: goto label_7F1B90EC;
    case 0x7F1B911Cu: goto label_7F1B911C;
    case 0x7F1B912Cu: goto label_7F1B912C;
    case 0x7F1B913Cu: goto label_7F1B913C;
    case 0x7F1B914Cu: goto label_7F1B914C;
    case 0x7F1B9158u: goto label_7F1B9158;
    case 0x7F1B9188u: goto label_7F1B9188;
    case 0x7F1B9198u: goto label_7F1B9198;
    case 0x7F1B91A8u: goto label_7F1B91A8;
    case 0x7F1B91B8u: goto label_7F1B91B8;
    case 0x7F1B91C0u: goto label_7F1B91C0;
    case 0x7F1B91F8u: goto label_7F1B91F8;
    case 0x7F1B9224u: goto label_7F1B9224;
    case 0x7F1B9260u: goto label_7F1B9260;
    case 0x7F1B9288u: goto label_7F1B9288;
    case 0x7F1B92E8u: goto label_7F1B92E8;
    case 0x7F1B9340u: goto label_7F1B9340;
    case 0x7F1B938Cu: goto label_7F1B938C;
    case 0x7F1B93A8u: goto label_7F1B93A8;
    case 0x7F1B93E8u: goto label_7F1B93E8;
    case 0x7F1B93F8u: goto label_7F1B93F8;
    case 0x7F1B9410u: goto label_7F1B9410;
    case 0x7F1B945Cu: goto label_7F1B945C;
    case 0x7F1B9464u: goto label_7F1B9464;
    case 0x7F1B9470u: goto label_7F1B9470;
    case 0x7F1B9478u: goto label_7F1B9478;
    case 0x7F1B94F4u: goto label_7F1B94F4;
    case 0x7F1B9530u: goto label_7F1B9530;
    case 0x7F1B9554u: goto label_7F1B9554;
    case 0x7F1B9564u: goto label_7F1B9564;
    case 0x7F1B957Cu: goto label_7F1B957C;
    case 0x7F1B9590u: goto label_7F1B9590;
    case 0x7F1B95C4u: goto label_7F1B95C4;
    case 0x7F1B95E4u: goto label_7F1B95E4;
    case 0x7F1B95ECu: goto label_7F1B95EC;
    case 0x7F1B95F4u: goto label_7F1B95F4;
    case 0x7F1B9600u: goto label_7F1B9600;
    case 0x7F1B968Cu: goto label_7F1B968C;
    case 0x7F1B9694u: goto label_7F1B9694;
    case 0x7F1B96A0u: goto label_7F1B96A0;
    case 0x7F1B96ACu: goto label_7F1B96AC;
    case 0x7F1B96B8u: goto label_7F1B96B8;
    case 0x7F1B96C4u: goto label_7F1B96C4;
    case 0x7F1B96D4u: goto label_7F1B96D4;
    case 0x7F1B9730u: goto label_7F1B9730;
    case 0x7F1B9740u: goto label_7F1B9740;
    case 0x7F1B979Cu: goto label_7F1B979C;
    case 0x7F1B97B8u: goto label_7F1B97B8;
    case 0x7F1B9820u: goto label_7F1B9820;
    case 0x7F1B9830u: goto label_7F1B9830;
    case 0x7F1B9848u: goto label_7F1B9848;
    case 0x7F1B9880u: goto label_7F1B9880;
    case 0x7F1B9890u: goto label_7F1B9890;
    case 0x7F1B98A0u: goto label_7F1B98A0;
    case 0x7F1B98B0u: goto label_7F1B98B0;
    case 0x7F1B98C0u: goto label_7F1B98C0;
    case 0x7F1B98DCu: goto label_7F1B98DC;
    case 0x7F1B990Cu: goto label_7F1B990C;
    case 0x7F1B991Cu: goto label_7F1B991C;
    case 0x7F1B992Cu: goto label_7F1B992C;
    case 0x7F1B993Cu: goto label_7F1B993C;
    case 0x7F1B9944u: goto label_7F1B9944;
    case 0x7F1B9974u: goto label_7F1B9974;
    case 0x7F1B9984u: goto label_7F1B9984;
    case 0x7F1B9994u: goto label_7F1B9994;
    case 0x7F1B99A4u: goto label_7F1B99A4;
    case 0x7F1B99E0u: goto label_7F1B99E0;
    case 0x7F1B9A10u: goto label_7F1B9A10;
    case 0x7F1B9A20u: goto label_7F1B9A20;
    case 0x7F1B9A30u: goto label_7F1B9A30;
    case 0x7F1B9A40u: goto label_7F1B9A40;
    case 0x7F1B9AA4u: goto label_7F1B9AA4;
    case 0x7F1B9ACCu: goto label_7F1B9ACC;
    case 0x7F1B9AD0u: goto label_7F1B9AD0;
    case 0x7F1B9AD4u: goto label_7F1B9AD4;
    case 0x7F1B9BE0u: goto label_7F1B9BE0;
    case 0x7F1B9C9Cu: goto label_7F1B9C9C;
    case 0x7F1B9CECu: goto label_7F1B9CEC;
    case 0x7F1B9D0Cu: goto label_7F1B9D0C;
    case 0x7F1B9D28u: goto label_7F1B9D28;
    case 0x7F1B9D38u: goto label_7F1B9D38;
    case 0x7F1B9DF0u: goto label_7F1B9DF0;
    case 0x7F1B9E74u: goto label_7F1B9E74;
    case 0x7F1B9E8Cu: goto label_7F1B9E8C;
    case 0x7F1B9EA8u: goto label_7F1B9EA8;
    case 0x7F1B9EB8u: goto label_7F1B9EB8;
    case 0x7F1B9EDCu: goto label_7F1B9EDC;
    case 0x7F1B9F98u: goto label_7F1B9F98;
    case 0x7F1B9FB0u: goto label_7F1B9FB0;
    case 0x7F1B9FCCu: goto label_7F1B9FCC;
    case 0x7F1B9FDCu: goto label_7F1B9FDC;
    case 0x7F1BA014u: goto label_7F1BA014;
    case 0x7F1BA01Cu: goto label_7F1BA01C;
    case 0x7F1BA034u: goto label_7F1BA034;
    case 0x7F1BA058u: goto label_7F1BA058;
    case 0x7F1BA074u: goto label_7F1BA074;
    case 0x7F1BA084u: goto label_7F1BA084;
    case 0x7F1BA258u: goto label_7F1BA258;
    case 0x7F1BA26Cu: goto label_7F1BA26C;
    case 0x7F1BA454u: goto label_7F1BA454;
    case 0x7F1BA468u: goto label_7F1BA468;
    case 0x7F1BA714u: goto label_7F1BA714;
    case 0x7F1BA728u: goto label_7F1BA728;
    case 0x7F1BA788u: goto label_7F1BA788;
    case 0x7F1BA7A4u: goto label_7F1BA7A4;
    case 0x7F1BA7BCu: goto label_7F1BA7BC;
    case 0x7F1BA7D8u: goto label_7F1BA7D8;
    case 0x7F1BA7F0u: goto label_7F1BA7F0;
    case 0x7F1BA80Cu: goto label_7F1BA80C;
    case 0x7F1BA890u: goto label_7F1BA890;
    case 0x7F1BA89Cu: goto label_7F1BA89C;
    case 0x7F1BA8A4u: goto label_7F1BA8A4;
    case 0x7F1BA8ACu: goto label_7F1BA8AC;
    case 0x7F1BA8B4u: goto label_7F1BA8B4;
    case 0x7F1BA8BCu: goto label_7F1BA8BC;
    case 0x7F1BA8C4u: goto label_7F1BA8C4;
    case 0x7F1BA8CCu: goto label_7F1BA8CC;
    case 0x7F1BA93Cu: goto label_7F1BA93C;
    case 0x7F1BA954u: goto label_7F1BA954;
    case 0x7F1BA968u: goto label_7F1BA968;
    case 0x7F1BA974u: goto label_7F1BA974;
    case 0x7F1BA9C0u: goto label_7F1BA9C0;
    case 0x7F1BA9DCu: goto label_7F1BA9DC;
    case 0x7F1BA9F0u: goto label_7F1BA9F0;
    case 0x7F1BAA38u: goto label_7F1BAA38;
    case 0x7F1BAA7Cu: goto label_7F1BAA7C;
    case 0x7F1BAA98u: goto label_7F1BAA98;
    case 0x7F1BAAC0u: goto label_7F1BAAC0;
    case 0x7F1BAAE0u: goto label_7F1BAAE0;
    case 0x7F1BAAFCu: goto label_7F1BAAFC;
    case 0x7F1BAB18u: goto label_7F1BAB18;
    case 0x7F1BAB28u: goto label_7F1BAB28;
    case 0x7F1BAB80u: goto label_7F1BAB80;
    case 0x7F1BAB94u: goto label_7F1BAB94;
    case 0x7F1BABC8u: goto label_7F1BABC8;
    case 0x7F1BABDCu: goto label_7F1BABDC;
    case 0x7F1BABF8u: goto label_7F1BABF8;
    case 0x7F1BAC34u: goto label_7F1BAC34;
    case 0x7F1BAC50u: goto label_7F1BAC50;
    case 0x7F1BAC80u: goto label_7F1BAC80;
    case 0x7F1BAC90u: goto label_7F1BAC90;
    case 0x7F1BACA8u: goto label_7F1BACA8;
    case 0x7F1BACD0u: goto label_7F1BACD0;
    case 0x7F1BACFCu: goto label_7F1BACFC;
    case 0x7F1BAD0Cu: goto label_7F1BAD0C;
    case 0x7F1BAD1Cu: goto label_7F1BAD1C;
    case 0x7F1BAD2Cu: goto label_7F1BAD2C;
    case 0x7F1BAD88u: goto label_7F1BAD88;
    case 0x7F1BADB8u: goto label_7F1BADB8;
    case 0x7F1BADC8u: goto label_7F1BADC8;
    case 0x7F1BADD8u: goto label_7F1BADD8;
    case 0x7F1BADE8u: goto label_7F1BADE8;
    case 0x7F1BAE20u: goto label_7F1BAE20;
    case 0x7F1BAE50u: goto label_7F1BAE50;
    case 0x7F1BAE60u: goto label_7F1BAE60;
    case 0x7F1BAE70u: goto label_7F1BAE70;
    case 0x7F1BAE80u: goto label_7F1BAE80;
    case 0x7F1BAEB4u: goto label_7F1BAEB4;
    case 0x7F1BAEE4u: goto label_7F1BAEE4;
    case 0x7F1BAEF4u: goto label_7F1BAEF4;
    case 0x7F1BAF04u: goto label_7F1BAF04;
    case 0x7F1BAF14u: goto label_7F1BAF14;
    case 0x7F1BAF6Cu: goto label_7F1BAF6C;
    case 0x7F1BAF90u: goto label_7F1BAF90;
    case 0x7F1BAFBCu: goto label_7F1BAFBC;
    case 0x7F1BAFCCu: goto label_7F1BAFCC;
    case 0x7F1BAFDCu: goto label_7F1BAFDC;
    case 0x7F1BAFECu: goto label_7F1BAFEC;
    case 0x7F1BB000u: goto label_7F1BB000;
    case 0x7F1BB09Cu: goto label_7F1BB09C;
    case 0x7F1BB0F4u: goto label_7F1BB0F4;
    case 0x7F1BB134u: goto label_7F1BB134;
    case 0x7F1BB140u: goto label_7F1BB140;
    case 0x7F1BB14Cu: goto label_7F1BB14C;
    case 0x7F1BB23Cu: goto label_7F1BB23C;
    case 0x7F1BB268u: goto label_7F1BB268;
    case 0x7F1BB274u: goto label_7F1BB274;
    case 0x7F1BB27Cu: goto label_7F1BB27C;
    case 0x7F1BB280u: goto label_7F1BB280;
    case 0x7F1BB288u: goto label_7F1BB288;
    case 0x7F1BB28Cu: goto label_7F1BB28C;
    case 0x7F1BB294u: goto label_7F1BB294;
    case 0x7F1BB298u: goto label_7F1BB298;
    case 0x7F1BB2A0u: goto label_7F1BB2A0;
    case 0x7F1BB2C0u: goto label_7F1BB2C0;
    case 0x7F1BB2CCu: goto label_7F1BB2CC;
    case 0x7F1BB2D8u: goto label_7F1BB2D8;
    case 0x7F1BB2E4u: goto label_7F1BB2E4;
    case 0x7F1BB2ECu: goto label_7F1BB2EC;
    case 0x7F1BB2F8u: goto label_7F1BB2F8;
    case 0x7F1BB304u: goto label_7F1BB304;
    case 0x7F1BB338u: goto label_7F1BB338;
    case 0x7F1BB36Cu: goto label_7F1BB36C;
    case 0x7F1BB3A0u: goto label_7F1BB3A0;
    case 0x7F1BB3D4u: goto label_7F1BB3D4;
    case 0x7F1BB408u: goto label_7F1BB408;
    case 0x7F1BB43Cu: goto label_7F1BB43C;
    case 0x7F1BB470u: goto label_7F1BB470;
    case 0x7F1BB4B0u: goto label_7F1BB4B0;
    case 0x7F1BB4CCu: goto label_7F1BB4CC;
    case 0x7F1BB4F0u: goto label_7F1BB4F0;
    case 0x7F1BB794u: goto label_7F1BB794;
    case 0x7F1BB7B0u: goto label_7F1BB7B0;
    case 0x7F1BB7C0u: goto label_7F1BB7C0;
    case 0x7F1BB7D0u: goto label_7F1BB7D0;
    case 0x7F1BB810u: goto label_7F1BB810;
    case 0x7F1BB814u: goto label_7F1BB814;
    case 0x7F1BB830u: goto label_7F1BB830;
    case 0x7F1BB860u: goto label_7F1BB860;
    case 0x7F1BB870u: goto label_7F1BB870;
    case 0x7F1BB880u: goto label_7F1BB880;
    case 0x7F1BB890u: goto label_7F1BB890;
    case 0x7F1BB8C0u: goto label_7F1BB8C0;
    case 0x7F1BB8F0u: goto label_7F1BB8F0;
    case 0x7F1BB900u: goto label_7F1BB900;
    case 0x7F1BB910u: goto label_7F1BB910;
    case 0x7F1BB920u: goto label_7F1BB920;
    case 0x7F1BB92Cu: goto label_7F1BB92C;
    case 0x7F1BB95Cu: goto label_7F1BB95C;
    case 0x7F1BB96Cu: goto label_7F1BB96C;
    case 0x7F1BB97Cu: goto label_7F1BB97C;
    case 0x7F1BB98Cu: goto label_7F1BB98C;
    case 0x7F1BB9B8u: goto label_7F1BB9B8;
    case 0x7F1BB9E8u: goto label_7F1BB9E8;
    case 0x7F1BB9F8u: goto label_7F1BB9F8;
    case 0x7F1BBA08u: goto label_7F1BBA08;
    case 0x7F1BBA18u: goto label_7F1BBA18;
    case 0x7F1BBA5Cu: goto label_7F1BBA5C;
    case 0x7F1BBA84u: goto label_7F1BBA84;
    case 0x7F1BBAB0u: goto label_7F1BBAB0;
    case 0x7F1BBAC0u: goto label_7F1BBAC0;
    case 0x7F1BBAD0u: goto label_7F1BBAD0;
    case 0x7F1BBAE0u: goto label_7F1BBAE0;
    case 0x7F1BBB18u: goto label_7F1BBB18;
    case 0x7F1BBB48u: goto label_7F1BBB48;
    case 0x7F1BBB58u: goto label_7F1BBB58;
    case 0x7F1BBB68u: goto label_7F1BBB68;
    case 0x7F1BBB78u: goto label_7F1BBB78;
    case 0x7F1BBB80u: goto label_7F1BBB80;
    case 0x7F1BBCE4u: goto label_7F1BBCE4;
    case 0x7F1BBD00u: goto label_7F1BBD00;
    case 0x7F1BBD18u: goto label_7F1BBD18;
    case 0x7F1BBD34u: goto label_7F1BBD34;
    case 0x7F1BBD48u: goto label_7F1BBD48;
    case 0x7F1BBD60u: goto label_7F1BBD60;
    case 0x7F1BBD80u: goto label_7F1BBD80;
    case 0x7F1BBDA0u: goto label_7F1BBDA0;
    case 0x7F1BBDB8u: goto label_7F1BBDB8;
    case 0x7F1BBDD0u: goto label_7F1BBDD0;
    case 0x7F1BBE20u: goto label_7F1BBE20;
    case 0x7F1BBE3Cu: goto label_7F1BBE3C;
    case 0x7F1BBE54u: goto label_7F1BBE54;
    case 0x7F1BBE70u: goto label_7F1BBE70;
    case 0x7F1BBE84u: goto label_7F1BBE84;
    case 0x7F1BBE9Cu: goto label_7F1BBE9C;
    case 0x7F1BBEBCu: goto label_7F1BBEBC;
    case 0x7F1BBEDCu: goto label_7F1BBEDC;
    case 0x7F1BBEF4u: goto label_7F1BBEF4;
    case 0x7F1BBF0Cu: goto label_7F1BBF0C;
    case 0x7F1BC088u: goto label_7F1BC088;
    case 0x7F1BC090u: goto label_7F1BC090;
    default: return;
    }
}

